// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143f4b79e FUN_143f4b79e body=66 status=ok
// SIG undefined FUN_143f4b79e(void)

void FUN_143f4b79e(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_3;
  FUN_143f4b828(param_1 + 0x18,param_2,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f4b7e2 FUN_143f4b7e2 body=68 status=ok
// SIG undefined FUN_143f4b7e2(void)

undefined8 FUN_143f4b7e2(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_3;
  FUN_143f4b828(param_1 + 0x18,param_2,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f4b828 FUN_143f4b828 body=257 status=ok
// SIG undefined FUN_143f4b828(void)

void FUN_143f4b828(longlong *param_1,longlong *param_2,char *param_3,longlong param_4)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  ushort uVar5;
  ulonglong uVar6;
  ushort uVar7;
  ulonglong uVar8;
  
  param_1 = (longlong *)*param_1;
  if (*(int *)((longlong)param_1 + 0x54) == 3) {
    iVar1 = (int)param_2[1];
    if (iVar1 == (int)param_1[0xa7]) {
      if (1 < iVar1) {
        lVar4 = 0;
        while( true ) {
          uVar5 = *(ushort *)(*param_2 + lVar4);
          uVar6 = (ulonglong)uVar5;
          uVar7 = *(ushort *)(param_1[0xa6] + lVar4);
          if (uVar5 != uVar7) break;
          if (uVar5 == 0) goto LAB_143f4b8b5;
LAB_143f4b87f:
          lVar4 = lVar4 + 2;
        }
        if ((uVar7 | uVar5) < 0x80) {
          uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
          uVar8 = (ulonglong)uVar7;
          uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
          if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar8]) goto LAB_143f4b87f;
        }
        if (uVar5 != uVar7) {
          return;
        }
      }
    }
    else if ((int)param_1[0xa7] + iVar1 != 1) {
      return;
    }
LAB_143f4b8b5:
    if ((int)param_1[0xa5] - 1U < 3) {
      if ((((*param_3 == '\0') || (*(longlong *)(param_4 + 8) == 0)) ||
          (*(longlong **)(param_4 + 0x100) == (longlong *)0x0)) ||
         (cVar3 = (**(code **)(**(longlong **)(param_4 + 0x100) + 0x20))(), cVar3 == '\0')) {
                    /* WARNING: Could not recover jumptable at 0x000143f4b922. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x100))(param_1);
        return;
      }
      if (((int)param_1[0x95] != 0) &&
         (plVar2 = (longlong *)param_1[0x94], plVar2 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000143f4b909. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x60))(plVar2,param_4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143f4b92a FUN_143f4b92a body=132 status=ok
// SIG undefined FUN_143f4b92a(void)

undefined8 * FUN_143f4b92a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4f62f0;
  plVar3 = param_1 + 6;
  if (*(int *)(param_1 + 7) != 0) {
    puVar2 = (undefined8 *)*plVar3;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143f4b97b;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 7) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143f4b97b:
  plVar3 = (longlong *)param_1[4];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f4b9b2 FUN_143f4b9b2 body=81 status=ok
// SIG undefined FUN_143f4b9b2(void)

undefined8 FUN_143f4b9b2(longlong param_1)

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



// FUNCTION 143f4ba08 FUN_143f4ba08 body=89 status=ok
// SIG undefined FUN_143f4ba08(void)

bool FUN_143f4ba08(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_143f4ba53;
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
LAB_143f4ba53:
  return lVar6 == param_2;
}



// FUNCTION 143f4ba7e FUN_143f4ba7e body=148 status=ok
// SIG undefined FUN_143f4ba7e(void)

void FUN_143f4ba7e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f7950;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f62f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  FUN_146281d3c(puVar1 + 6,param_1 + 0x30);
  return;
}



// FUNCTION 143f4bb12 FUN_143f4bb12 body=148 status=ok
// SIG undefined FUN_143f4bb12(void)

void FUN_143f4bb12(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f7950;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f62f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  FUN_146281d3c(puVar1 + 6,param_1 + 0x30);
  return;
}



// FUNCTION 143f4bba6 FUN_143f4bba6 body=187 status=ok
// SIG undefined FUN_143f4bba6(void)

void FUN_143f4bba6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f7950;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f62f0;
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
  p_Var1[1].Type = 0;
  p_Var1[1].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var1[1].field_0x4 = 0;
  *(undefined4 *)&p_Var1[1].CriticalSection = 0;
  FUN_146281d3c(p_Var1 + 1,param_1 + 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f4bc51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f4bc62 FUN_143f4bc62 body=65 status=ok
// SIG undefined FUN_143f4bc62(void)

void FUN_143f4bc62(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_143f4bd02(param_1 + 0x28,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f4bca4 FUN_143f4bca4 body=92 status=ok
// SIG undefined FUN_143f4bca4(void)

undefined8 FUN_143f4bca4(longlong param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_143f4bd02(param_1 + 0x28,&local_9);
    uVar1 = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f4bd02 FUN_143f4bd02 body=274 status=ok
// SIG undefined FUN_143f4bd02(void)

void FUN_143f4bd02(longlong param_1,char *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  longlong local_58 [3];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_2 == '\x01') {
    local_58[0] = 0;
    local_58[1] = 0;
    lVar4 = param_3[1];
    if ((longlong)(int)lVar4 != 0) {
      lVar2 = *param_3;
      iVar5 = 1;
      lVar7 = 0;
      do {
        if ((char)iVar5 == '\0') {
          FUN_1400020e8(local_58,&DAT_149e001d8,1);
        }
        iVar1 = *(int *)(lVar2 + 8 + lVar7);
        iVar5 = 0;
        iVar6 = iVar1 + -1;
        if (iVar1 == 0) {
          iVar6 = iVar5;
        }
        FUN_1400020e8(local_58,*(undefined8 *)(lVar2 + lVar7),iVar6);
        lVar7 = lVar7 + 0x10;
      } while ((longlong)(int)lVar4 * 0x10 != lVar7);
    }
    plVar3 = *(longlong **)(param_1 + 8);
    if (plVar3 != (longlong *)0x0 && *(int *)(param_1 + 0x10) != 0) {
      (**(code **)(*plVar3 + 0x60))(plVar3,local_58);
    }
  }
  else {
    local_58[0] = 0;
    local_58[1] = 0;
    plVar3 = *(longlong **)(param_1 + 8);
    if (plVar3 == (longlong *)0x0 || *(int *)(param_1 + 0x10) == 0) goto LAB_143f4bdef;
    (**(code **)(*plVar3 + 0x60))(plVar3,local_58);
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
LAB_143f4bdef:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f4be16 FUN_143f4be16 body=104 status=ok
// SIG undefined FUN_143f4be16(void)

undefined8 * FUN_143f4be16(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4f6360;
  plVar3 = (longlong *)param_1[7];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f4be82 FUN_143f4be82 body=81 status=ok
// SIG undefined FUN_143f4be82(void)

undefined8 FUN_143f4be82(longlong param_1)

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



// FUNCTION 143f4bed8 FUN_143f4bed8 body=89 status=ok
// SIG undefined FUN_143f4bed8(void)

bool FUN_143f4bed8(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_143f4bf23;
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
LAB_143f4bf23:
  return lVar6 == param_2;
}



// FUNCTION 143f4bf4e FUN_143f4bf4e body=151 status=ok
// SIG undefined FUN_143f4bf4e(void)

void FUN_143f4bf4e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e063e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f6360;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  puVar1[8] = *(undefined8 *)(param_1 + 0x40);
  return;
}



// FUNCTION 143f4bfe6 FUN_143f4bfe6 body=151 status=ok
// SIG undefined FUN_143f4bfe6(void)

void FUN_143f4bfe6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e063e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f6360;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  puVar1[8] = *(undefined8 *)(param_1 + 0x40);
  return;
}



// FUNCTION 143f4c07e FUN_143f4c07e body=189 status=ok
// SIG undefined FUN_143f4c07e(void)

void FUN_143f4c07e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  _RTL_CRITICAL_SECTION *p_Var4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e063e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f6360;
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
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  p_Var1[1].Type = (short)uVar3;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)uVar3 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)uVar3 >> 0x20);
  p_Var4 = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  p_Var1[1].CriticalSection = p_Var4;
  if (p_Var4 != (_RTL_CRITICAL_SECTION *)0x0) {
    LOCK();
    p_Var4->LockCount = p_Var4->LockCount + 1;
    UNLOCK();
  }
  p_Var1[1].ProcessLocksList.Flink = *(_LIST_ENTRY **)(param_1 + 0x40);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f4c12b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f4c158 FUN_143f4c158 body=64 status=ok
// SIG undefined FUN_143f4c158(void)

undefined8 FUN_143f4c158(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_148ab2baa(*(longlong *)(param_1 + 0x28) + 0x10,*(undefined8 *)(param_1 + 0x30),
                  *(undefined8 *)(param_1 + 0x40),param_2);
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 143f4c198 FUN_143f4c198 body=64 status=ok
// SIG undefined FUN_143f4c198(void)

undefined8 * FUN_143f4c198(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4f63d0;
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



// FUNCTION 143f4c1dc FUN_143f4c1dc body=81 status=ok
// SIG undefined FUN_143f4c1dc(void)

undefined8 FUN_143f4c1dc(longlong param_1)

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



// FUNCTION 143f4c232 FUN_143f4c232 body=89 status=ok
// SIG undefined FUN_143f4c232(void)

bool FUN_143f4c232(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_143f4c27d;
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
LAB_143f4c27d:
  return lVar6 == param_2;
}



// FUNCTION 143f4c2a8 FUN_143f4c2a8 body=118 status=ok
// SIG undefined FUN_143f4c2a8(void)

void FUN_143f4c2a8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f6440;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f63d0;
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



// FUNCTION 143f4c31e FUN_143f4c31e body=118 status=ok
// SIG undefined FUN_143f4c31e(void)

void FUN_143f4c31e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f6440;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f63d0;
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



// FUNCTION 143f4c394 FUN_143f4c394 body=156 status=ok
// SIG undefined FUN_143f4c394(void)

void FUN_143f4c394(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f6440;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f63d0;
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
                    /* WARNING: Could not recover jumptable at 0x000143f4c420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f4c430 FUN_143f4c430 body=66 status=ok
// SIG undefined FUN_143f4c430(void)

void FUN_143f4c430(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_143f4c4d2(param_1 + 0x28,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f4c474 FUN_143f4c474 body=93 status=ok
// SIG undefined FUN_143f4c474(void)

undefined8 FUN_143f4c474(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_143f4c4d2(param_1 + 0x28,&local_10);
    uVar1 = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f4c4d2 FUN_143f4c4d2 body=209 status=ok
// SIG undefined FUN_143f4c4d2(void)

void FUN_143f4c4d2(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar3 = *param_1;
    lVar5 = FUN_1447210f0(lVar2);
    lVar6 = FUN_148aab5b0(lVar3);
    if (lVar5 == lVar6) {
      FUN_1408e4d18(lVar2 + 0x3a0,&local_38);
      if (((local_38 != 0) && (*(int *)(lVar3 + 0x20) != 0)) &&
         (plVar4 = *(longlong **)(lVar3 + 0x18), plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x60))(plVar4,local_38,*(undefined8 *)(lVar3 + 0x48),param_3);
      }
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_30 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar1 = (int *)((longlong)local_30 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_30 + 0x10))(local_30);
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f4c5a4 FUN_143f4c5a4 body=64 status=ok
// SIG undefined FUN_143f4c5a4(void)

undefined8 * FUN_143f4c5a4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4f64b0;
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



// FUNCTION 143f4c5e8 FUN_143f4c5e8 body=81 status=ok
// SIG undefined FUN_143f4c5e8(void)

undefined8 FUN_143f4c5e8(longlong param_1)

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



// FUNCTION 143f4c63e FUN_143f4c63e body=89 status=ok
// SIG undefined FUN_143f4c63e(void)

bool FUN_143f4c63e(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_143f4c689;
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
LAB_143f4c689:
  return lVar6 == param_2;
}



// FUNCTION 143f4c6b4 FUN_143f4c6b4 body=118 status=ok
// SIG undefined FUN_143f4c6b4(void)

void FUN_143f4c6b4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f38d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f64b0;
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



// FUNCTION 143f4c72a FUN_143f4c72a body=118 status=ok
// SIG undefined FUN_143f4c72a(void)

void FUN_143f4c72a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f38d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f64b0;
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



// FUNCTION 143f4c7a0 FUN_143f4c7a0 body=156 status=ok
// SIG undefined FUN_143f4c7a0(void)

void FUN_143f4c7a0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f38d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f64b0;
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
                    /* WARNING: Could not recover jumptable at 0x000143f4c82c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f4c83c FUN_143f4c83c body=66 status=ok
// SIG undefined FUN_143f4c83c(void)

void FUN_143f4c83c(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_143f4c8de(param_1 + 0x28,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f4c880 FUN_143f4c880 body=93 status=ok
// SIG undefined FUN_143f4c880(void)

undefined8 FUN_143f4c880(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_143f4c8de(param_1 + 0x28,&local_10);
    uVar1 = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f4c8de FUN_143f4c8de body=214 status=ok
// SIG undefined FUN_143f4c8de(void)

void FUN_143f4c8de(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *param_1;
  FUN_1408e4d18(*param_2 + 0x3a0,&local_28);
  if (local_28 != 0) {
    uVar4 = *(undefined8 *)(lVar3 + 0x48);
    local_38 = local_28;
    local_30 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_20 + 1) = (int)local_20[1] + 1;
      UNLOCK();
    }
    if ((*(int *)(lVar3 + 0x30) != 0) &&
       (plVar5 = *(longlong **)(lVar3 + 0x28), plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 0x60))(plVar5,&local_38,uVar4);
    }
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
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
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_20 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f4c9b6 FUN_143f4c9b6 body=64 status=ok
// SIG undefined FUN_143f4c9b6(void)

undefined8 * FUN_143f4c9b6(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4f6520;
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



// FUNCTION 143f4c9fa FUN_143f4c9fa body=81 status=ok
// SIG undefined FUN_143f4c9fa(void)

undefined8 FUN_143f4c9fa(longlong param_1)

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



// FUNCTION 143f4ca50 FUN_143f4ca50 body=89 status=ok
// SIG undefined FUN_143f4ca50(void)

bool FUN_143f4ca50(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_143f4ca9b;
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
LAB_143f4ca9b:
  return lVar6 == param_2;
}



// FUNCTION 143f4cac6 FUN_143f4cac6 body=118 status=ok
// SIG undefined FUN_143f4cac6(void)

void FUN_143f4cac6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f38d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f6520;
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



// FUNCTION 143f4cb3c FUN_143f4cb3c body=118 status=ok
// SIG undefined FUN_143f4cb3c(void)

void FUN_143f4cb3c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f38d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f6520;
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



// FUNCTION 143f4cbb2 FUN_143f4cbb2 body=156 status=ok
// SIG undefined FUN_143f4cbb2(void)

void FUN_143f4cbb2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f38d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f6520;
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
                    /* WARNING: Could not recover jumptable at 0x000143f4cc3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f4cc4e FUN_143f4cc4e body=66 status=ok
// SIG undefined FUN_143f4cc4e(void)

void FUN_143f4cc4e(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_143f4ccf0(param_1 + 0x28,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f4cc92 FUN_143f4cc92 body=93 status=ok
// SIG undefined FUN_143f4cc92(void)

undefined8 FUN_143f4cc92(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_143f4ccf0(param_1 + 0x28,&local_10);
    uVar1 = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f4ccf0 FUN_143f4ccf0 body=214 status=ok
// SIG undefined FUN_143f4ccf0(void)

void FUN_143f4ccf0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *param_1;
  FUN_1408e4d18(*param_2 + 0x3a0,&local_28);
  if (local_28 != 0) {
    uVar4 = *(undefined8 *)(lVar3 + 0x48);
    local_38 = local_28;
    local_30 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_20 + 1) = (int)local_20[1] + 1;
      UNLOCK();
    }
    if ((*(int *)(lVar3 + 0x40) != 0) &&
       (plVar5 = *(longlong **)(lVar3 + 0x38), plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 0x60))(plVar5,&local_38,uVar4);
    }
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
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
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_20 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f4cdc8 FUN_143f4cdc8 body=29 status=ok
// SIG undefined FUN_143f4cdc8(void)

undefined8 FUN_143f4cdc8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f4cdfa FUN_143f4cdfa body=93 status=ok
// SIG undefined FUN_143f4cdfa(void)

void FUN_143f4cdfa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e4d10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f6670;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f4ce58 FUN_143f4ce58 body=93 status=ok
// SIG undefined FUN_143f4ce58(void)

void FUN_143f4ce58(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e4d10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f6670;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f4ceb6 FUN_143f4ceb6 body=126 status=ok
// SIG undefined FUN_143f4ceb6(void)

void FUN_143f4ceb6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4e4d10;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f6670;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f4cf25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f4cf48 FUN_143f4cf48 body=33 status=ok
// SIG undefined FUN_143f4cf48(void)

undefined1 FUN_143f4cf48(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  if (param_4 == 2) {
    FUN_1413575ba();
  }
  else {
    FUN_14116350a(*(undefined8 *)(param_1 + 0x18));
  }
  return 1;
}



// FUNCTION 143f4cf6a FUN_143f4cf6a body=232 status=ok
// SIG undefined FUN_143f4cf6a(void)

undefined8 FUN_143f4cf6a(undefined8 *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  fVar1 = *param_2;
  uVar3 = *param_1;
  FUN_14131cafa(uVar3,&local_40);
  if ((longlong)local_38 == 0) {
    bVar4 = false;
    uVar5 = 0;
  }
  else {
    lVar6 = 0;
    uVar5 = 0;
    bVar4 = false;
    do {
      fVar2 = *(float *)(*(longlong *)(local_40 + lVar6) + 0xc4);
      if (0.0 < fVar2) {
        *(float *)(*(longlong *)(local_40 + lVar6) + 0xc4) = fVar2 - fVar1;
        uVar5 = 1;
        if (*(float *)(*(longlong *)(local_40 + lVar6) + 0xc4) <= 0.0) {
          *(undefined4 *)(*(longlong *)(local_40 + lVar6) + 0xc4) = 0;
          bVar4 = true;
          uVar5 = 1;
        }
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)local_38 << 4 != lVar6);
  }
  FUN_14131cf14();
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (bVar4) {
    FUN_1458eaba4(uVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 143f4d05e FUN_143f4d05e body=12 status=ok
// SIG undefined FUN_143f4d05e(void)

void FUN_143f4d05e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143f4d067. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143f4d06a FUN_143f4d06a body=29 status=ok
// SIG undefined FUN_143f4d06a(void)

undefined8 FUN_143f4d06a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f4d088 FUN_143f4d088 body=29 status=ok
// SIG undefined FUN_143f4d088(void)

undefined8 FUN_143f4d088(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f4d224 FUN_143f4d224 body=93 status=ok
// SIG undefined FUN_143f4d224(void)

void FUN_143f4d224(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f6ae0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143f4d282 FUN_143f4d282 body=93 status=ok
// SIG undefined FUN_143f4d282(void)

void FUN_143f4d282(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f6ae0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143f4d2e0 FUN_143f4d2e0 body=126 status=ok
// SIG undefined FUN_143f4d2e0(void)

void FUN_143f4d2e0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f6ae0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f4d34f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f4d35e FUN_143f4d35e body=20 status=ok
// SIG undefined FUN_143f4d35e(void)

undefined8 FUN_143f4d35e(longlong param_1)

{
  FUN_1458eaba4(*(undefined8 *)(param_1 + 0x20));
  return 0;
}



// FUNCTION 143f4d372 FUN_143f4d372 body=266 status=ok
// SIG undefined FUN_143f4d372(void)

undefined8 FUN_143f4d372(longlong param_1)

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
    if (iVar1 == 2) goto LAB_143f4d476;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143f4d476;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143f4d476:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143f4d42a;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1458eaba4(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_143f4d42a;
    }
  }
  uVar6 = 0;
LAB_143f4d42a:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f4d47e FUN_143f4d47e body=58 status=ok
// SIG undefined FUN_143f4d47e(void)

undefined8 FUN_143f4d47e(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = *param_1;
  FUN_14164c43e(lVar2);
  plVar3 = *(longlong **)(lVar2 + 0x1c0);
  *(undefined8 *)(lVar2 + 0x1b8) = 0;
  *(undefined8 *)(lVar2 + 0x1c0) = 0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  return 0;
}



// FUNCTION 143f4d4c2 FUN_143f4d4c2 body=12 status=ok
// SIG undefined FUN_143f4d4c2(void)

void FUN_143f4d4c2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143f4d4cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143f4d4ce FUN_143f4d4ce body=29 status=ok
// SIG undefined FUN_143f4d4ce(void)

undefined8 FUN_143f4d4ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f4d4ec FUN_143f4d4ec body=132 status=ok
// SIG undefined FUN_143f4d4ec(void)

undefined8 * FUN_143f4d4ec(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4f6ce0;
  plVar3 = param_1 + 5;
  if (*(int *)(param_1 + 6) != 0) {
    puVar2 = (undefined8 *)*plVar3;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143f4d53d;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 6) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143f4d53d:
  plVar3 = (longlong *)param_1[4];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f4d584 FUN_143f4d584 body=140 status=ok
// SIG undefined FUN_143f4d584(void)

void FUN_143f4d584(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f6d50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f6ce0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  FUN_141509b10(puVar1 + 5,param_1 + 0x28);
  return;
}



// FUNCTION 143f4d610 FUN_143f4d610 body=140 status=ok
// SIG undefined FUN_143f4d610(void)

void FUN_143f4d610(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f6d50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f6ce0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  FUN_141509b10(puVar1 + 5,param_1 + 0x28);
  return;
}



// FUNCTION 143f4d69c FUN_143f4d69c body=179 status=ok
// SIG undefined FUN_143f4d69c(void)

void FUN_143f4d69c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f6d50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f6ce0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  p_Var1->Flags = 0;
  p_Var1->CreatorBackTraceIndexHigh = 0;
  p_Var1->SpareWORD = 0;
  p_Var1[1].Type = 0;
  p_Var1[1].CreatorBackTraceIndex = 0;
  FUN_141509b10(&p_Var1->Flags,param_1 + 0x28);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f4d73f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f4d75a FUN_143f4d75a body=20 status=ok
// SIG undefined FUN_143f4d75a(void)

undefined1 FUN_143f4d75a(longlong param_1)

{
  FUN_143f4d76e(param_1 + 0x18);
  return 1;
}



// FUNCTION 143f4d76e FUN_143f4d76e body=248 status=ok
// SIG undefined FUN_143f4d76e(void)

void FUN_143f4d76e(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  void *_Src;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_2 + 1);
  lVar6 = (longlong)local_30;
  _Src = (void *)*param_2;
  if (lVar6 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar6 * 2);
  }
  plVar2 = (longlong *)param_1[1];
  if (plVar2 != (longlong *)0x0) {
    iVar5 = (int)plVar2[1];
    do {
      if (iVar5 == 0) goto LAB_143f4d837;
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    if ((*param_1 != 0) &&
       (plVar3 = (longlong *)param_1[2], plVar3 != (longlong *)0x0 && (int)param_1[3] != 0)) {
      (**(code **)(*plVar3 + 0x60))
                (plVar3,*(undefined4 *)(*(longlong *)(*param_1 + 0x38) + 0x30),&local_38);
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
LAB_143f4d837:
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f4d868 FUN_143f4d868 body=132 status=ok
// SIG undefined FUN_143f4d868(void)

undefined8 * FUN_143f4d868(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4f6f80;
  plVar3 = param_1 + 5;
  if (*(int *)(param_1 + 6) != 0) {
    puVar2 = (undefined8 *)*plVar3;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143f4d8b9;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 6) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143f4d8b9:
  plVar3 = (longlong *)param_1[4];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f4d900 FUN_143f4d900 body=140 status=ok
// SIG undefined FUN_143f4d900(void)

void FUN_143f4d900(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f6d50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f6f80;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  FUN_146281d3c(puVar1 + 5,param_1 + 0x28);
  return;
}



// FUNCTION 143f4d98c FUN_143f4d98c body=140 status=ok
// SIG undefined FUN_143f4d98c(void)

void FUN_143f4d98c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f6d50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f6f80;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  FUN_146281d3c(puVar1 + 5,param_1 + 0x28);
  return;
}



// FUNCTION 143f4da18 FUN_143f4da18 body=179 status=ok
// SIG undefined FUN_143f4da18(void)

void FUN_143f4da18(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f6d50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f6f80;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  p_Var1->Flags = 0;
  p_Var1->CreatorBackTraceIndexHigh = 0;
  p_Var1->SpareWORD = 0;
  p_Var1[1].Type = 0;
  p_Var1[1].CreatorBackTraceIndex = 0;
  FUN_146281d3c(&p_Var1->Flags,param_1 + 0x28);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f4dabb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f4dacc FUN_143f4dacc body=66 status=ok
// SIG undefined FUN_143f4dacc(void)

void FUN_143f4dacc(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_3;
  FUN_143f4db56(param_1 + 0x18,param_2,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f4db10 FUN_143f4db10 body=68 status=ok
// SIG undefined FUN_143f4db10(void)

undefined8 FUN_143f4db10(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_3;
  FUN_143f4db56(param_1 + 0x18,param_2,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f4db56 FUN_143f4db56 body=312 status=ok
// SIG undefined FUN_143f4db56(void)

void FUN_143f4db56(longlong *param_1,undefined8 *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_78 [32];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar2 = *param_3;
  local_58 = (void *)0x0;
  local_50 = *(int *)(param_2 + 1);
  lVar7 = (longlong)local_50;
  _Src = (void *)*param_2;
  if (lVar7 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,_Src,lVar7 * 2);
  }
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_143f4dc5e;
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
    if (*param_1 != 0) {
      if (iVar2 == 0) {
        plVar4 = (longlong *)param_1[2];
        if (plVar4 != (longlong *)0x0 && (int)param_1[3] != 0) {
          (**(code **)(*plVar4 + 0x60))(plVar4,&local_58);
        }
      }
      else {
        local_48[0] = 0;
        local_48[1] = 0;
        plVar4 = (longlong *)param_1[2];
        if ((plVar4 != (longlong *)0x0 && (int)param_1[3] != 0) &&
           ((**(code **)(*plVar4 + 0x60))(plVar4,local_48), local_48[0] != 0)) {
          FUN_1400020a8();
        }
      }
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
LAB_143f4dc5e:
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f4dc90 FUN_143f4dc90 body=64 status=ok
// SIG undefined FUN_143f4dc90(void)

undefined8 * FUN_143f4dc90(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4f6ff0;
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



// FUNCTION 143f4dcd4 FUN_143f4dcd4 body=81 status=ok
// SIG undefined FUN_143f4dcd4(void)

undefined8 FUN_143f4dcd4(longlong param_1)

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



// FUNCTION 143f4dd2c FUN_143f4dd2c body=89 status=ok
// SIG undefined FUN_143f4dd2c(void)

bool FUN_143f4dd2c(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_143f4dd77;
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
LAB_143f4dd77:
  return lVar6 == param_2;
}



// FUNCTION 143f4dda2 FUN_143f4dda2 body=118 status=ok
// SIG undefined FUN_143f4dda2(void)

void FUN_143f4dda2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e4d10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f6ff0;
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



// FUNCTION 143f4de18 FUN_143f4de18 body=118 status=ok
// SIG undefined FUN_143f4de18(void)

void FUN_143f4de18(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e4d10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f6ff0;
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



// FUNCTION 143f4de8e FUN_143f4de8e body=156 status=ok
// SIG undefined FUN_143f4de8e(void)

void FUN_143f4de8e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4e4d10;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f6ff0;
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
                    /* WARNING: Could not recover jumptable at 0x000143f4df1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f4df2a FUN_143f4df2a body=111 status=ok
// SIG undefined FUN_143f4df2a(void)

void FUN_143f4df2a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_143f4df85:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_143f4df85;
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
                    /* WARNING: Could not recover jumptable at 0x000143f4df81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143f4df9a FUN_143f4df9a body=111 status=ok
// SIG undefined FUN_143f4df9a(void)

ulonglong FUN_143f4df9a(longlong param_1)

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
LAB_143f4dffe:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_143f4dffe;
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



// FUNCTION 143f4e00a FUN_143f4e00a body=64 status=ok
// SIG undefined FUN_143f4e00a(void)

undefined8 * FUN_143f4e00a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4f7060;
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



// FUNCTION 143f4e04e FUN_143f4e04e body=81 status=ok
// SIG undefined FUN_143f4e04e(void)

undefined8 FUN_143f4e04e(longlong param_1)

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



// FUNCTION 143f4e0a4 FUN_143f4e0a4 body=89 status=ok
// SIG undefined FUN_143f4e0a4(void)

bool FUN_143f4e0a4(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_143f4e0ef;
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
LAB_143f4e0ef:
  return lVar6 == param_2;
}



// FUNCTION 143f4e11a FUN_143f4e11a body=126 status=ok
// SIG undefined FUN_143f4e11a(void)

void FUN_143f4e11a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f70d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f7060;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 143f4e198 FUN_143f4e198 body=126 status=ok
// SIG undefined FUN_143f4e198(void)

void FUN_143f4e198(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f70d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f7060;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 143f4e216 FUN_143f4e216 body=164 status=ok
// SIG undefined FUN_143f4e216(void)

void FUN_143f4e216(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f70d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f7060;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  p_Var1[1].CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
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
                    /* WARNING: Could not recover jumptable at 0x000143f4e2aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f4e2ba FUN_143f4e2ba body=65 status=ok
// SIG undefined FUN_143f4e2ba(void)

void FUN_143f4e2ba(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_143f4e35a(param_1 + 0x28,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f4e2fc FUN_143f4e2fc body=92 status=ok
// SIG undefined FUN_143f4e2fc(void)

undefined8 FUN_143f4e2fc(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_143f4e35a(param_1 + 0x28,&local_c);
    uVar1 = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f4e35a FUN_143f4e35a body=512 status=ok
// SIG undefined FUN_143f4e35a(void)

void FUN_143f4e35a(longlong *param_1,int *param_2,char *param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  longlong *plStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar4 = *param_2;
  lVar6 = *param_1;
  if (*(longlong *)(lVar6 + 0x58) != 0) {
    FUN_1446f470e(&local_50,L"SHIFT",1);
    FUN_143f475c8(lVar6);
    local_38 = local_50;
    plVar7 = (longlong *)FUN_1401e3228();
    if (plVar7 == (longlong *)0x0) {
      local_48 = (longlong *)0x0;
      plStack_40 = (longlong *)0x0;
    }
    else {
      (**(code **)(*plVar7 + 0x80))(plVar7,&local_48);
      if (local_48 != (longlong *)0x0) {
        (**(code **)(*local_48 + 0x30))(local_48,(int)param_1[2],(undefined8 *)(lVar6 + 0x58));
        *(undefined8 *)(lVar6 + 0x58) = 0;
      }
    }
    plVar7 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_40)(plStack_40);
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
  cVar3 = *param_3;
  if (*(int *)(lVar6 + 0x34) == 0) {
LAB_143f4e46f:
    lVar9 = 0;
  }
  else {
    uVar5 = *(uint *)(lVar6 + 0x30);
    lVar9 = 0;
    if ((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c9647dc)) {
      plVar7 = (longlong *)
               ((ulonglong)((uVar5 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
      if ((plVar7 != (longlong *)0x0) &&
         (((int)plVar7[2] == *(int *)(lVar6 + 0x34) && ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)))
         ) {
        if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
          lVar9 = *plVar7;
        }
        else {
          lVar9 = 0;
        }
        lVar9 = *(longlong *)(lVar9 + 0x48);
        if (lVar9 != 0) {
          lVar8 = FUN_140b7066c();
          if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) goto LAB_143f4e471;
        }
      }
      goto LAB_143f4e46f;
    }
  }
LAB_143f4e471:
  if (iVar4 == 0) {
    uVar10 = 1;
    if (cVar3 == '\0') goto LAB_143f4e4e7;
    if ((lVar9 != 0) &&
       (cVar3 = *(char *)(lVar9 + 0x408), *(undefined1 *)(lVar9 + 0x408) = 1, cVar3 == '\0')) {
      FUN_145e797e2(lVar9 + 0x288,1);
    }
    FUN_143f4764a(param_1[1]);
    if (*(int *)(lVar6 + 0x50) == 0) goto LAB_143f4e4ee;
  }
  else {
    uVar10 = 4;
    if (lVar9 != 0) {
      local_48 = (longlong *)CONCAT44(local_48._4_4_,(int)param_1[2]);
      FUN_1447cbafe(lVar9 + 0x410,&local_38,&local_48,0);
    }
LAB_143f4e4e7:
    *(undefined4 *)(lVar6 + 0x50) = uVar10;
  }
  *(undefined1 *)(lVar6 + 0x18) = 1;
LAB_143f4e4ee:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f4e55c FUN_143f4e55c body=104 status=ok
// SIG undefined FUN_143f4e55c(void)

undefined8 * FUN_143f4e55c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4f7140;
  plVar3 = (longlong *)param_1[7];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f4e5c8 FUN_143f4e5c8 body=81 status=ok
// SIG undefined FUN_143f4e5c8(void)

undefined8 FUN_143f4e5c8(longlong param_1)

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



// FUNCTION 143f4e61e FUN_143f4e61e body=89 status=ok
// SIG undefined FUN_143f4e61e(void)

bool FUN_143f4e61e(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_143f4e669;
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
LAB_143f4e669:
  return lVar6 == param_2;
}



// FUNCTION 143f4e694 FUN_143f4e694 body=143 status=ok
// SIG undefined FUN_143f4e694(void)

void FUN_143f4e694(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e4c90;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f7140;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143f4e724 FUN_143f4e724 body=143 status=ok
// SIG undefined FUN_143f4e724(void)

void FUN_143f4e724(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e4c90;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f7140;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143f4e7b4 FUN_143f4e7b4 body=181 status=ok
// SIG undefined FUN_143f4e7b4(void)

void FUN_143f4e7b4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  _RTL_CRITICAL_SECTION *p_Var4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4e4c90;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f7140;
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
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  p_Var1[1].Type = (short)uVar3;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)uVar3 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)uVar3 >> 0x20);
  p_Var4 = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  p_Var1[1].CriticalSection = p_Var4;
  if (p_Var4 != (_RTL_CRITICAL_SECTION *)0x0) {
    LOCK();
    p_Var4->LockCount = p_Var4->LockCount + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f4e859. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f4e86a FUN_143f4e86a body=63 status=ok
// SIG undefined FUN_143f4e86a(void)

void FUN_143f4e86a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_4;
  FUN_143f4e908(param_1 + 0x28);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f4e8aa FUN_143f4e8aa body=93 status=ok
// SIG undefined FUN_143f4e8aa(void)

undefined8 FUN_143f4e8aa(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_4;
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_143f4e908(param_1 + 0x28,&local_c);
    uVar1 = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f4e908 FUN_143f4e908 body=714 status=ok
// SIG undefined FUN_143f4e908(void)

void FUN_143f4e908(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_68 [40];
  longlong *local_40;
  int local_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = *param_1;
  if (*param_2 == 0) {
    *(int *)(lVar4 + 0x4c) = *(int *)(lVar4 + 0x4c) + 1;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
  }
  if ((*param_2 != 0x200) || (*(char *)(lVar4 + 0x49) == '\0')) {
    *(undefined4 *)(lVar4 + 0x50) = 2;
    *(undefined1 *)(lVar4 + 0x18) = 1;
    goto LAB_143f4eb94;
  }
  plVar9 = (longlong *)FUN_140a68038(1);
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
LAB_143f4eac9:
    *(undefined4 *)(lVar4 + 0x50) = 2;
    *(undefined1 *)(lVar4 + 0x18) = 1;
  }
  else {
    (**(code **)(*plVar9 + 0x70))(plVar9,&local_40);
    plVar3 = local_40;
    plVar9 = (longlong *)CONCAT44(uStack_34,local_38);
    if (local_40 == (longlong *)0x0) goto LAB_143f4eac9;
    local_40 = (longlong *)0x0;
    local_38 = 0;
    FUN_1446efa72(&local_40,0,3,0x10);
    local_38 = 3;
    plVar5 = *(longlong **)(lVar4 + 0x10);
    if (plVar5 == (longlong *)0x0) {
LAB_143f4eadb:
      *local_40 = (longlong)&PTR_LAB_149e06450;
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 1;
      lVar6 = DAT_14c758608 + 1;
      if (lVar10 == 0) {
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 2;
        lVar6 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar6;
      local_40[2] = lVar10;
      *local_40 = (longlong)&PTR_FUN_14b4f71b0;
      local_40[3] = 0;
      local_40[4] = 0;
      local_40[5] = lVar4;
    }
    else {
      iVar8 = (int)plVar5[1];
      do {
        if (iVar8 == 0) goto LAB_143f4eadb;
        LOCK();
        iVar7 = (int)plVar5[1];
        bVar12 = iVar8 == iVar7;
        if (bVar12) {
          *(int *)(plVar5 + 1) = iVar8 + 1;
          iVar7 = iVar8;
        }
        iVar8 = iVar7;
        UNLOCK();
      } while (!bVar12);
      lVar6 = *(longlong *)(lVar4 + 8);
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      *local_40 = (longlong)&PTR_LAB_149e06450;
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
      local_40[2] = lVar11;
      *local_40 = (longlong)&PTR_FUN_14b4f71b0;
      local_40[3] = lVar6;
      local_40[4] = (longlong)plVar5;
      LOCK();
      *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
      UNLOCK();
      local_40[5] = lVar4;
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
    (**(code **)(*plVar3 + 0x90))(plVar3,param_1[1],&local_40);
    if (local_38 == 0) {
LAB_143f4eb68:
      if (local_40 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_40 != (longlong *)0x0) {
      (**(code **)*local_40)(local_40,0);
      FUN_1446efa72(&local_40,0,0,0x10);
      local_38 = 0;
      goto LAB_143f4eb68;
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar9 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
LAB_143f4eb94:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f4ebe6 FUN_143f4ebe6 body=64 status=ok
// SIG undefined FUN_143f4ebe6(void)

undefined8 * FUN_143f4ebe6(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4f71b0;
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



// FUNCTION 143f4ec2a FUN_143f4ec2a body=81 status=ok
// SIG undefined FUN_143f4ec2a(void)

undefined8 FUN_143f4ec2a(longlong param_1)

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



// FUNCTION 143f4ec80 FUN_143f4ec80 body=89 status=ok
// SIG undefined FUN_143f4ec80(void)

bool FUN_143f4ec80(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_143f4eccb;
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
LAB_143f4eccb:
  return lVar6 == param_2;
}



// FUNCTION 143f4ecf6 FUN_143f4ecf6 body=118 status=ok
// SIG undefined FUN_143f4ecf6(void)

void FUN_143f4ecf6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f71b0;
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



// FUNCTION 143f4ed6c FUN_143f4ed6c body=118 status=ok
// SIG undefined FUN_143f4ed6c(void)

void FUN_143f4ed6c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f71b0;
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



// FUNCTION 143f4ede2 FUN_143f4ede2 body=156 status=ok
// SIG undefined FUN_143f4ede2(void)

void FUN_143f4ede2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f71b0;
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
                    /* WARNING: Could not recover jumptable at 0x000143f4ee6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f4ee9a FUN_143f4ee9a body=66 status=ok
// SIG undefined FUN_143f4ee9a(void)

undefined8 FUN_143f4ee9a(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar2 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x28);
    if (param_2 == '\0') {
      *(undefined4 *)(lVar1 + 0x50) = 2;
      *(undefined1 *)(lVar1 + 0x18) = 1;
    }
    else {
      *(int *)(lVar1 + 0x4c) = *(int *)(lVar1 + 0x4c) + 1;
      FUN_143f4764a();
    }
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 143f4eedc FUN_143f4eedc body=29 status=ok
// SIG undefined FUN_143f4eedc(void)

undefined8 FUN_143f4eedc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f4ef0e FUN_143f4ef0e body=93 status=ok
// SIG undefined FUN_143f4ef0e(void)

void FUN_143f4ef0e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4edb10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f72b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143f4ef6c FUN_143f4ef6c body=93 status=ok
// SIG undefined FUN_143f4ef6c(void)

void FUN_143f4ef6c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4edb10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f72b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143f4efca FUN_143f4efca body=126 status=ok
// SIG undefined FUN_143f4efca(void)

void FUN_143f4efca(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4edb10;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f72b0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f4f039. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f4f048 FUN_143f4f048 body=65 status=ok
// SIG undefined FUN_143f4f048(void)

void FUN_143f4f048(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_143f4f0ce(param_1 + 0x18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f4f08a FUN_143f4f08a body=67 status=ok
// SIG undefined FUN_143f4f08a(void)

undefined8 FUN_143f4f08a(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_143f4f0ce(param_1 + 0x18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f4f0ce FUN_143f4f0ce body=118 status=ok
// SIG undefined FUN_143f4f0ce(void)

void FUN_143f4f0ce(longlong *param_1,int *param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_2 == 0) {
    lVar1 = *param_1;
    FUN_14119d664(*(undefined8 *)(lVar1 + 0x180),local_30);
    FUN_1413f4416(*(undefined8 *)(lVar1 + 8),(int)param_1[1],&DAT_14cb97920,local_30);
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f4f146 FUN_143f4f146 body=29 status=ok
// SIG undefined FUN_143f4f146(void)

undefined8 FUN_143f4f146(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f4f178 FUN_143f4f178 body=85 status=ok
// SIG undefined FUN_143f4f178(void)

void FUN_143f4f178(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f7320;
  return;
}



// FUNCTION 143f4f1ce FUN_143f4f1ce body=85 status=ok
// SIG undefined FUN_143f4f1ce(void)

void FUN_143f4f1ce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f7320;
  return;
}



// FUNCTION 143f4f224 FUN_143f4f224 body=118 status=ok
// SIG undefined FUN_143f4f224(void)

void FUN_143f4f224(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f7320;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f4f28b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f4f29f FUN_143f4f29f body=83 status=ok
// SIG undefined FUN_143f4f29f(void)

void FUN_143f4f29f(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    plVar3 = (longlong *)param_1[3];
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
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 143f4f2f2 FUN_143f4f2f2 body=248 status=ok
// SIG undefined FUN_143f4f2f2(void)

void FUN_143f4f2f2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x7ffffffffffffff) * 2]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 5)) {
      uVar3 = uVar4 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 143f4f3ea FUN_143f4f3ea body=57 status=ok
// SIG undefined FUN_143f4f3ea(void)

undefined8 * FUN_143f4f3ea(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4f74e0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f4f438 FUN_143f4f438 body=167 status=ok
// SIG undefined FUN_143f4f438(void)

void FUN_143f4f438(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b4e4ea0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b4f74e0;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  return;
}



// FUNCTION 143f4f4e0 FUN_143f4f4e0 body=167 status=ok
// SIG undefined FUN_143f4f4e0(void)

void FUN_143f4f4e0(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b4e4ea0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b4f74e0;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  return;
}



// FUNCTION 143f4f588 FUN_143f4f588 body=206 status=ok
// SIG undefined FUN_143f4f588(void)

void FUN_143f4f588(longlong param_1,LPCRITICAL_SECTION param_2)

{
  DWORD DVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  void *_Src;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14b4e4ea0;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14b4f74e0;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var2->EntryCount = 0;
  p_Var2->ContentionCount = 0;
  DVar1 = *(DWORD *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  p_Var2->Flags = DVar1;
  if ((longlong)(int)DVar1 == 0) {
    p_Var2->CreatorBackTraceIndexHigh = 0;
    p_Var2->SpareWORD = 0;
  }
  else {
    FUN_1446dd670(&p_Var2->EntryCount,DVar1,0);
    memcpy(*(void **)&p_Var2->EntryCount,_Src,(longlong)(int)DVar1 * 2);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f4f644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f4f656 FUN_143f4f656 body=66 status=ok
// SIG undefined FUN_143f4f656(void)

void FUN_143f4f656(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_3;
  FUN_143f4f6e0(param_1 + 0x18,&local_9,param_4);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f4f69a FUN_143f4f69a body=68 status=ok
// SIG undefined FUN_143f4f69a(void)

undefined8 FUN_143f4f69a(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_3;
  FUN_143f4f6e0(param_1 + 0x18,&local_9,param_4);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f4f6e0 FUN_143f4f6e0 body=279 status=ok
// SIG undefined FUN_143f4f6e0(void)

void FUN_143f4f6e0(longlong *param_1,char *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  ushort uVar5;
  ulonglong uVar6;
  ushort uVar7;
  ulonglong uVar8;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[2];
  if (iVar1 == *(int *)(lVar2 + 0x178)) {
    if (1 < iVar1) {
      lVar4 = 0;
      while( true ) {
        uVar5 = *(ushort *)(param_1[1] + lVar4);
        uVar6 = (ulonglong)uVar5;
        uVar7 = *(ushort *)(*(longlong *)(lVar2 + 0x170) + lVar4);
        if (uVar5 != uVar7) break;
        if (uVar5 == 0) goto LAB_143f4f76b;
LAB_143f4f72d:
        lVar4 = lVar4 + 2;
      }
      if ((uVar7 | uVar5) < 0x80) {
        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
        uVar8 = (ulonglong)uVar7;
        uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
        if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar8]) goto LAB_143f4f72d;
      }
      if (uVar5 != uVar7) {
        return;
      }
    }
  }
  else if (*(int *)(lVar2 + 0x178) + iVar1 != 1) {
    return;
  }
LAB_143f4f76b:
  if ((((*param_2 != '\0') && (*(longlong *)(param_3 + 8) != 0)) &&
      (*(longlong **)(param_3 + 0x100) != (longlong *)0x0)) &&
     (cVar3 = (**(code **)(**(longlong **)(param_3 + 0x100) + 0x20))(), cVar3 != '\0')) {
    FUN_1461f4a06(lVar2 + 0x18,param_3);
    *(undefined4 *)(lVar2 + 0x130) = *(undefined4 *)(param_3 + 0x118);
    FUN_143f494f8(lVar2);
    return;
  }
  FUN_148aaf464(lVar2);
  *(undefined4 *)(lVar2 + 0x154) = 0;
  if (*(int *)(lVar2 + 0x158) == 0) {
    return;
  }
  *(int *)(lVar2 + 0x154) = *(int *)(lVar2 + 0x158);
  *(undefined4 *)(lVar2 + 0x158) = 0;
  FUN_143f48db6(lVar2);
  return;
}



// FUNCTION 143f4f7f8 FUN_143f4f7f8 body=29 status=ok
// SIG undefined FUN_143f4f7f8(void)

undefined8 FUN_143f4f7f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f4f82a FUN_143f4f82a body=91 status=ok
// SIG undefined FUN_143f4f82a(void)

void FUN_143f4f82a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f75c0;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f4f886 FUN_143f4f886 body=91 status=ok
// SIG undefined FUN_143f4f886(void)

void FUN_143f4f886(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f75c0;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f4f8e2 FUN_143f4f8e2 body=124 status=ok
// SIG undefined FUN_143f4f8e2(void)

void FUN_143f4f8e2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f75c0;
  *(undefined1 *)&(p_Var1->ProcessLocksList).Blink = *(undefined1 *)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f4f94f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f4f963 FUN_143f4f963 body=1440 status=ok
// SIG undefined FUN_143f4f963(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f4f963(void)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  wchar_t *local_50;
  int local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1446f470e(&DAT_14cb97850,L"UNSET",1);
  local_50 = L"Online";
  local_48 = 6;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"OnlinePresence";
  local_48 = 0xe;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"Online";
  local_48 = 6;
  FUN_140208c1e(&DAT_14cb97858,local_58,local_54,&local_50);
  atexit((_func_5014 *)&LAB_143f44c00);
  local_50 = L"Offline";
  local_48 = 7;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"OnlinePresence";
  local_48 = 0xe;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"Offline";
  local_48 = 7;
  FUN_140208c1e(&DAT_14cb97868,local_58,local_54,&local_50);
  atexit((_func_5014 *)&LAB_143f44c14);
  local_50 = L"Away";
  local_48 = 4;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"OnlinePresence";
  local_48 = 0xe;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"Away";
  local_48 = 4;
  FUN_140208c1e(&DAT_14cb97878,local_58,local_54,&local_50);
  atexit((_func_5014 *)&LAB_143f44c28);
  local_50 = L"DoNotDisturb";
  local_48 = 0xc;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"OnlinePresence";
  local_48 = 0xe;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"Do Not Disturb";
  local_48 = 0xe;
  FUN_140208c1e(&DAT_14cb97888,local_58,local_54,&local_50);
  atexit((_func_5014 *)&LAB_143f44c3c);
  local_50 = L"Chat";
  local_48 = 4;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"OnlinePresence";
  local_48 = 0xe;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"Chat";
  local_48 = 4;
  FUN_140208c1e(&DAT_14cb97898,local_58,local_54,&local_50);
  atexit((_func_5014 *)&LAB_143f44c50);
  DAT_14cb978a8 = 0;
  FUN_140056680(&DAT_14cb978b0,L"GameplayEnded");
  atexit((_func_5014 *)&LAB_143f45435);
  FUN_140056680(&DAT_14cb978c0,L"GBX.GAMEPLAY_SESSION_ID");
  atexit((_func_5014 *)&LAB_143f45446);
  local_50 = L"AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb978d0 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cb978d8,L"TextChat",1);
  FUN_1446f470e(&DAT_14cb978e0,L"Voice",1);
  local_50 = (wchar_t *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48 = 2;
  *(undefined ***)local_50 = &PTR_LAB_14a177500;
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
  *(longlong *)(local_50 + 8) = lVar3;
  *(undefined ***)local_50 = &PTR_FUN_14a380e50;
  *(code **)(local_50 + 0xc) = FUN_148aac0f4;
  local_68 = 0x20001;
  FUN_14156bb10(&DAT_14cb978e8,L"SetTalkerInputVolume",
                L"Sets the input volume for the primary local talker in GbxVoice.",&local_50);
  if (local_48 == 0) {
LAB_143f4fd4e:
    if (local_50 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (wchar_t *)0x0) {
    (*(code *)**(undefined8 **)local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
    goto LAB_143f4fd4e;
  }
  atexit(FUN_143f4697b);
  local_50 = (wchar_t *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48 = 2;
  *(undefined ***)local_50 = &PTR_LAB_14a177500;
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
  *(longlong *)(local_50 + 8) = lVar3;
  *(undefined ***)local_50 = &PTR_FUN_14a380e50;
  *(code **)(local_50 + 0xc) = FUN_148aac185;
  local_68 = 0x20001;
  FUN_14156bb10(&DAT_14cb978f8,L"SetTalkerOutputVolume",
                L"Sets the output volume for the primary local talker in GbxVoice.",&local_50);
  if (local_48 != 0) {
    if (local_50 == (wchar_t *)0x0) goto LAB_143f4fe3a;
    (*(code *)**(undefined8 **)local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
  }
  if (local_50 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
LAB_143f4fe3a:
  atexit(FUN_143f469c0);
  FUN_140056680(&DAT_14cb97920,L"PlatformSessionId");
  atexit((_func_5014 *)&LAB_143f47d7e);
  FUN_140056680(&DAT_14cb97930,L"PlatformSessionOwner");
  atexit((_func_5014 *)&LAB_143f47d8f);
  FUN_140056680(&DAT_14cb97940,L"PlatformSessionId");
  atexit((_func_5014 *)&LAB_143f47da0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f4ff04 FUN_143f4ff04 body=57 status=ok
// SIG undefined FUN_143f4ff04(void)

void FUN_143f4ff04(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb97988 == 0) {
    uVar1 = FUN_146587c13();
    DAT_14cb97988 = FUN_14171c317(FUN_146587c42,uVar1,L"EGbxAnalyticsProviderShiftTimestamp");
  }
  return;
}



// FUNCTION 143f4ff3d FUN_143f4ff3d body=41 status=ok
// SIG undefined FUN_143f4ff3d(void)

void FUN_143f4ff3d(void)

{
  DAT_14cb97a18 = 0;
  if (DAT_14cb97a10 != 0) {
    FUN_1400020a8();
  }
  FUN_146164d6a();
  return;
}



// FUNCTION 143f4ff66 FUN_143f4ff66 body=2877 status=ok
// SIG undefined FUN_143f4ff66(void)

void FUN_143f4ff66(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  byte bVar9;
  undefined1 auStack_228 [32];
  undefined4 local_208;
  undefined8 *local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  void *local_1e0;
  uint local_1d8;
  undefined4 local_1d4;
  void *local_1d0;
  uint local_1c8;
  undefined4 local_1c4;
  undefined2 local_1bf;
  void *local_1b8;
  uint local_1b0;
  undefined4 local_1ac;
  void *local_1a8;
  uint local_1a0;
  undefined4 local_19c;
  code *local_198 [2];
  undefined8 *local_188;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  void *local_148;
  undefined8 local_140;
  void *local_138;
  undefined8 local_130;
  undefined2 local_127;
  longlong local_120;
  undefined1 local_118;
  longlong local_110;
  undefined8 local_108;
  undefined1 local_100 [32];
  byte local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98;
  code *local_88 [2];
  undefined8 *local_78;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_228;
  if ((0x7ffffffe < (int)param_2[3] - 2U) && ((int)param_2[0xe] < 1)) {
    if ((int)param_2[0xc] < 1) goto LAB_143f509eb;
    plVar6 = param_2 + 9;
    if ((longlong *)param_2[0xb] != (longlong *)0x0) {
      plVar6 = (longlong *)param_2[0xb];
    }
    if ((int)plVar6[1] < 1) goto LAB_143f509eb;
  }
  iVar2 = *(int *)(*param_2 + 0x58);
  bVar9 = 0 < iVar2 | *(byte *)(param_1 + 0x80);
  local_1a8 = (void *)0x0;
  local_1a0 = *(uint *)(param_1 + 0x68);
  lVar8 = (longlong)(int)local_1a0;
  pvVar3 = *(void **)(param_1 + 0x60);
  if (lVar8 == 0) {
    local_19c = 0;
  }
  else {
    FUN_1446dd670(&local_1a8,local_1a0,0);
    memcpy(local_1a8,pvVar3,lVar8 * 2);
  }
  local_1b8 = (void *)0x0;
  local_1b0 = *(uint *)(param_1 + 0x78);
  lVar8 = (longlong)(int)local_1b0;
  pvVar3 = *(void **)(param_1 + 0x70);
  if (lVar8 == 0) {
    local_1ac = 0;
  }
  else {
    FUN_1446dd670(&local_1b8,local_1b0,0);
    memcpy(local_1b8,pvVar3,lVar8 * 2);
  }
  pvVar3 = local_1a8;
  uStack_1e8 = *param_2;
  local_1e0 = (void *)0x0;
  lVar8 = (longlong)(int)local_1a0;
  local_1d8 = local_1a0;
  local_1f0 = param_1;
  if (lVar8 == 0) {
    local_1d4 = 0;
  }
  else {
    FUN_1446dd670(&local_1e0,local_1a0,0);
    memcpy(local_1e0,pvVar3,lVar8 * 2);
  }
  pvVar3 = local_1b8;
  local_1d0 = (void *)0x0;
  lVar8 = (longlong)(int)local_1b0;
  local_1c8 = local_1b0;
  if (lVar8 == 0) {
    local_1c4 = 0;
  }
  else {
    FUN_1446dd670(&local_1d0,local_1b0,0);
    memcpy(local_1d0,pvVar3,lVar8 * 2);
  }
  local_1bf = CONCAT11(iVar2 == 2 & bVar9,bVar9);
  if (DAT_14c86a9f8 == '\x01') {
    iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar2 == 2) goto LAB_143f50566;
    if (iVar2 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_143f50566;
    }
    pvVar3 = local_1e0;
    local_158 = (undefined4)local_1f0;
    uStack_154 = local_1f0._4_4_;
    uStack_150 = (undefined4)uStack_1e8;
    uStack_14c = uStack_1e8._4_4_;
    local_148 = (void *)0x0;
    lVar8 = (longlong)(int)local_1d8;
    local_140 = CONCAT44(local_140._4_4_,local_1d8);
    if (lVar8 == 0) {
      local_140 = (ulonglong)local_1d8;
    }
    else {
      FUN_1446dd670(&local_148,local_1d8,0);
      memcpy(local_148,pvVar3,lVar8 * 2);
    }
    pvVar3 = local_1d0;
    local_138 = (void *)0x0;
    lVar8 = (longlong)(int)local_1c8;
    local_130 = CONCAT44(local_130._4_4_,local_1c8);
    if (lVar8 == 0) {
      local_130 = (ulonglong)local_1c8;
    }
    else {
      FUN_1446dd670(&local_138,local_1c8,0);
      memcpy(local_138,pvVar3,lVar8 * 2);
    }
    local_127 = local_1bf;
    local_120 = *param_2;
    local_118 = (undefined1)param_2[1];
    local_110 = param_2[2];
    param_2[2] = 0;
    local_108._0_4_ = (undefined4)param_2[3];
    local_108._4_4_ = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_2[3] = 0;
    local_e0 = *(byte *)(param_2 + 8);
    (*(code *)(&PTR_LAB_14a184230)[local_e0])(local_100,param_2 + 4);
    local_c8 = param_2[0xb];
    if (local_c8 == 0) {
      local_d8 = (undefined4)param_2[9];
      uStack_d4 = *(undefined4 *)((longlong)param_2 + 0x4c);
      uStack_d0 = (undefined4)param_2[10];
      uStack_cc = *(undefined4 *)((longlong)param_2 + 0x54);
    }
    param_2[0xb] = 0;
    local_c0._0_4_ = (undefined4)param_2[0xc];
    local_c0._4_4_ = *(undefined4 *)((longlong)param_2 + 100);
    param_2[0xc] = 0x100000000;
    local_b8 = param_2[0xd];
    param_2[0xd] = 0;
    local_b0._0_4_ = (undefined4)param_2[0xe];
    local_b0._4_4_ = *(undefined4 *)((longlong)param_2 + 0x74);
    param_2[0xe] = 0;
    local_a8 = param_2[0xf];
    param_2[0xf] = 0;
    local_a0._0_4_ = (undefined4)param_2[0x10];
    local_a0._4_4_ = *(undefined4 *)((longlong)param_2 + 0x84);
    param_2[0x10] = 0;
    local_98 = param_2[0x11];
    local_88[0] = (code *)0x0;
    puVar7 = (undefined8 *)FUN_14001cc68(0xd0,8);
    *puVar7 = &PTR_LAB_14b4f8350;
    *(undefined4 *)(puVar7 + 1) = local_158;
    *(undefined4 *)((longlong)puVar7 + 0xc) = uStack_154;
    *(undefined4 *)(puVar7 + 2) = uStack_150;
    *(undefined4 *)((longlong)puVar7 + 0x14) = uStack_14c;
    puVar7[3] = local_148;
    local_148 = (void *)0x0;
    *(undefined4 *)(puVar7 + 4) = (undefined4)local_140;
    *(undefined4 *)((longlong)puVar7 + 0x24) = local_140._4_4_;
    local_140 = 0;
    puVar7[5] = local_138;
    local_138 = (void *)0x0;
    *(undefined4 *)(puVar7 + 6) = (undefined4)local_130;
    *(undefined4 *)((longlong)puVar7 + 0x34) = local_130._4_4_;
    local_130 = 0;
    *(undefined2 *)((longlong)puVar7 + 0x39) = local_127;
    *(undefined1 *)(puVar7 + 9) = local_118;
    puVar7[8] = local_120;
    puVar7[10] = local_110;
    local_110 = 0;
    *(undefined4 *)(puVar7 + 0xb) = (undefined4)local_108;
    *(undefined4 *)((longlong)puVar7 + 0x5c) = local_108._4_4_;
    local_108 = 0;
    *(byte *)(puVar7 + 0x10) = local_e0;
    local_78 = puVar7;
    (*(code *)(&PTR_LAB_14a184230)[local_e0])(puVar7 + 0xc,local_100);
    if (local_c8 == 0) {
      *(undefined4 *)(puVar7 + 0x11) = local_d8;
      *(undefined4 *)((longlong)puVar7 + 0x8c) = uStack_d4;
      *(undefined4 *)(puVar7 + 0x12) = uStack_d0;
      *(undefined4 *)((longlong)puVar7 + 0x94) = uStack_cc;
    }
    puVar7[0x13] = local_c8;
    local_c8 = 0;
    *(undefined4 *)(puVar7 + 0x14) = (undefined4)local_c0;
    *(undefined4 *)((longlong)puVar7 + 0xa4) = local_c0._4_4_;
    local_c0 = 0x100000000;
    puVar7[0x15] = local_b8;
    local_b8 = 0;
    *(undefined4 *)(puVar7 + 0x16) = (undefined4)local_b0;
    *(undefined4 *)((longlong)puVar7 + 0xb4) = local_b0._4_4_;
    local_b0 = 0;
    puVar7[0x17] = local_a8;
    local_a8 = 0;
    *(undefined4 *)(puVar7 + 0x18) = (undefined4)local_a0;
    *(undefined4 *)((longlong)puVar7 + 0xc4) = local_a0._4_4_;
    local_a0 = 0;
    puVar7[0x19] = local_98;
    if (puVar7 != (undefined8 *)&DAT_fffffffffffffff8) {
      local_88[0] = FUN_143f50c08;
    }
    local_208 = 1;
    FUN_14014aede(&local_1f8,local_88);
    if (local_1f8 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_1f8 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_1f8)(local_1f8,1);
      }
    }
  }
  else {
LAB_143f50566:
    pvVar3 = local_1e0;
    local_158 = (undefined4)local_1f0;
    uStack_154 = local_1f0._4_4_;
    uStack_150 = (undefined4)uStack_1e8;
    uStack_14c = uStack_1e8._4_4_;
    local_148 = (void *)0x0;
    lVar8 = (longlong)(int)local_1d8;
    local_140 = CONCAT44(local_140._4_4_,local_1d8);
    if (lVar8 == 0) {
      local_140 = (ulonglong)local_1d8;
    }
    else {
      FUN_1446dd670(&local_148,local_1d8,0);
      memcpy(local_148,pvVar3,lVar8 * 2);
    }
    pvVar3 = local_1d0;
    local_138 = (void *)0x0;
    lVar8 = (longlong)(int)local_1c8;
    local_130 = CONCAT44(local_130._4_4_,local_1c8);
    if (lVar8 == 0) {
      local_130 = (ulonglong)local_1c8;
    }
    else {
      FUN_1446dd670(&local_138,local_1c8,0);
      memcpy(local_138,pvVar3,lVar8 * 2);
    }
    local_127 = local_1bf;
    local_120 = *param_2;
    local_118 = (undefined1)param_2[1];
    local_110 = param_2[2];
    param_2[2] = 0;
    local_108._0_4_ = (undefined4)param_2[3];
    local_108._4_4_ = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_2[3] = 0;
    local_e0 = *(byte *)(param_2 + 8);
    (*(code *)(&PTR_LAB_14a184230)[local_e0])(local_100,param_2 + 4);
    local_c8 = param_2[0xb];
    if (local_c8 == 0) {
      local_d8 = (undefined4)param_2[9];
      uStack_d4 = *(undefined4 *)((longlong)param_2 + 0x4c);
      uStack_d0 = (undefined4)param_2[10];
      uStack_cc = *(undefined4 *)((longlong)param_2 + 0x54);
    }
    param_2[0xb] = 0;
    local_c0._0_4_ = (undefined4)param_2[0xc];
    local_c0._4_4_ = *(undefined4 *)((longlong)param_2 + 100);
    param_2[0xc] = 0x100000000;
    local_b8 = param_2[0xd];
    param_2[0xd] = 0;
    local_b0._0_4_ = (undefined4)param_2[0xe];
    local_b0._4_4_ = *(undefined4 *)((longlong)param_2 + 0x74);
    param_2[0xe] = 0;
    local_a8 = param_2[0xf];
    param_2[0xf] = 0;
    local_a0._0_4_ = (undefined4)param_2[0x10];
    local_a0._4_4_ = *(undefined4 *)((longlong)param_2 + 0x84);
    param_2[0x10] = 0;
    local_98 = param_2[0x11];
    local_198[0] = (code *)0x0;
    puVar7 = (undefined8 *)FUN_14001cc68(0xd0,8);
    *puVar7 = &PTR_FUN_14b4f8510;
    *(undefined4 *)(puVar7 + 1) = local_158;
    *(undefined4 *)((longlong)puVar7 + 0xc) = uStack_154;
    *(undefined4 *)(puVar7 + 2) = uStack_150;
    *(undefined4 *)((longlong)puVar7 + 0x14) = uStack_14c;
    puVar7[3] = local_148;
    local_148 = (void *)0x0;
    *(undefined4 *)(puVar7 + 4) = (undefined4)local_140;
    *(undefined4 *)((longlong)puVar7 + 0x24) = local_140._4_4_;
    local_140 = 0;
    puVar7[5] = local_138;
    local_138 = (void *)0x0;
    *(undefined4 *)(puVar7 + 6) = (undefined4)local_130;
    *(undefined4 *)((longlong)puVar7 + 0x34) = local_130._4_4_;
    local_130 = 0;
    *(undefined2 *)((longlong)puVar7 + 0x39) = local_127;
    *(undefined1 *)(puVar7 + 9) = local_118;
    puVar7[8] = local_120;
    puVar7[10] = local_110;
    local_110 = 0;
    *(undefined4 *)(puVar7 + 0xb) = (undefined4)local_108;
    *(undefined4 *)((longlong)puVar7 + 0x5c) = local_108._4_4_;
    local_108 = 0;
    *(byte *)(puVar7 + 0x10) = local_e0;
    local_188 = puVar7;
    (*(code *)(&PTR_LAB_14a184230)[local_e0])(puVar7 + 0xc,local_100);
    if (local_c8 == 0) {
      *(undefined4 *)(puVar7 + 0x11) = local_d8;
      *(undefined4 *)((longlong)puVar7 + 0x8c) = uStack_d4;
      *(undefined4 *)(puVar7 + 0x12) = uStack_d0;
      *(undefined4 *)((longlong)puVar7 + 0x94) = uStack_cc;
    }
    puVar7[0x13] = local_c8;
    local_c8 = 0;
    *(undefined4 *)(puVar7 + 0x14) = (undefined4)local_c0;
    *(undefined4 *)((longlong)puVar7 + 0xa4) = local_c0._4_4_;
    local_c0 = 0x100000000;
    puVar7[0x15] = local_b8;
    local_b8 = 0;
    *(undefined4 *)(puVar7 + 0x16) = (undefined4)local_b0;
    *(undefined4 *)((longlong)puVar7 + 0xb4) = local_b0._4_4_;
    local_b0 = 0;
    puVar7[0x17] = local_a8;
    local_a8 = 0;
    *(undefined4 *)(puVar7 + 0x18) = (undefined4)local_a0;
    *(undefined4 *)((longlong)puVar7 + 0xc4) = local_a0._4_4_;
    local_a0 = 0;
    puVar7[0x19] = local_98;
    if (puVar7 != (undefined8 *)&DAT_fffffffffffffff8) {
      local_198[0] = FUN_143f528fa;
    }
    FUN_1411532a3(local_198);
  }
  FUN_1404eec70(local_a8,local_a0 & 0xffffffff);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  FUN_1404eecb3(local_b8,local_b0 & 0xffffffff);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  FUN_1404eec06(&local_d8);
  (*(code *)(&PTR_FUN_14a1842f0)[local_e0])(local_100);
  if (local_110 != 0) {
    FUN_1400020a8();
  }
  if (local_138 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_148 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_1d0 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_1e0 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_1b8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_1a8 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_143f509eb:
  FUN_1404eec70(param_2[0xf],(int)param_2[0x10]);
  if (param_2[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_1404eecb3(param_2[0xd],(int)param_2[0xe]);
  if (param_2[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_1404eec06(param_2 + 9);
  (*(code *)(&PTR_FUN_14a1842f0)[*(byte *)(param_2 + 8)])(param_2 + 4);
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f50abc FUN_143f50abc body=69 status=ok
// SIG undefined FUN_143f50abc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f50abc(void)

{
  _DAT_14cb97dd8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143f50afe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb97de0,1);
  return;
}



// FUNCTION 143f50b01 FUN_143f50b01 body=71 status=ok
// SIG undefined FUN_143f50b01(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f50b01(void)

{
  longlong *plVar1;
  
  _DAT_14cb97df0 = &PTR_FUN_14b4dae90;
  if (DAT_14cb97e10 != 0) {
    plVar1 = &DAT_14cb97e30;
    if (DAT_14cb97e20 != (longlong *)0x0) {
      plVar1 = DAT_14cb97e20;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_1412b2176(&DAT_14cb97df0);
  return;
}



// FUNCTION 143f50b48 FUN_143f50b48 body=71 status=ok
// SIG undefined FUN_143f50b48(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f50b48(void)

{
  longlong *plVar1;
  
  _DAT_14cb97e50 = &PTR_FUN_14b4dae90;
  if (DAT_14cb97e70 != 0) {
    plVar1 = &DAT_14cb97e90;
    if (DAT_14cb97e80 != (longlong *)0x0) {
      plVar1 = DAT_14cb97e80;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_1412b2176(&DAT_14cb97e50);
  return;
}



// FUNCTION 143f50b8f FUN_143f50b8f body=71 status=ok
// SIG undefined FUN_143f50b8f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f50b8f(void)

{
  longlong *plVar1;
  
  _DAT_14cb97eb0 = &PTR_FUN_14b4dae90;
  if (DAT_14cb97ed0 != 0) {
    plVar1 = &DAT_14cb97ef0;
    if (DAT_14cb97ee0 != (longlong *)0x0) {
      plVar1 = DAT_14cb97ee0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_1412b2176(&DAT_14cb97eb0);
  return;
}



// FUNCTION 143f50bd6 FUN_143f50bd6 body=49 status=ok
// SIG undefined FUN_143f50bd6(void)

void FUN_143f50bd6(void)

{
  FUN_14581342f(DAT_14cb97f38,DAT_14cb97f40);
  if (DAT_14cb97f38 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143f50c08 FUN_143f50c08 body=1145 status=ok
// SIG undefined FUN_143f50c08(void)

void FUN_143f50c08(undefined4 *param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  void *local_148;
  undefined8 local_140;
  void *local_138;
  undefined8 local_130;
  undefined2 local_127;
  undefined8 local_120;
  undefined1 local_118;
  longlong local_110;
  undefined8 local_108;
  undefined1 local_100 [32];
  byte local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  code *local_88 [2];
  undefined8 *local_78;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_158 = *param_1;
  uStack_154 = param_1[1];
  uStack_150 = param_1[2];
  uStack_14c = param_1[3];
  local_148 = (void *)0x0;
  uVar1 = param_1[6];
  pvVar2 = *(void **)(param_1 + 4);
  local_140 = CONCAT44(local_140._4_4_,uVar1);
  if ((longlong)(int)uVar1 == 0) {
    local_140 = (ulonglong)uVar1;
  }
  else {
    FUN_1446dd670(&local_148,uVar1,0);
    memcpy(local_148,pvVar2,(longlong)(int)uVar1 * 2);
  }
  local_138 = (void *)0x0;
  uVar1 = param_1[10];
  pvVar2 = *(void **)(param_1 + 8);
  local_130 = CONCAT44(local_130._4_4_,uVar1);
  if ((longlong)(int)uVar1 == 0) {
    local_130 = (ulonglong)uVar1;
  }
  else {
    FUN_1446dd670(&local_138,uVar1,0);
    memcpy(local_138,pvVar2,(longlong)(int)uVar1 * 2);
  }
  local_127 = *(undefined2 *)((longlong)param_1 + 0x31);
  local_120 = *(undefined8 *)(param_1 + 0xe);
  local_118 = *(undefined1 *)(param_1 + 0x10);
  local_110 = *(longlong *)(param_1 + 0x12);
  *(undefined8 *)(param_1 + 0x12) = 0;
  local_108._0_4_ = param_1[0x14];
  local_108._4_4_ = param_1[0x15];
  *(undefined8 *)(param_1 + 0x14) = 0;
  local_e0 = *(byte *)(param_1 + 0x1e);
  (*(code *)(&PTR_LAB_14a184230)[local_e0])(local_100,param_1 + 0x16);
  local_c8 = *(longlong *)(param_1 + 0x24);
  if (local_c8 == 0) {
    local_d8 = param_1[0x20];
    uStack_d4 = param_1[0x21];
    uStack_d0 = param_1[0x22];
    uStack_cc = param_1[0x23];
  }
  *(undefined8 *)(param_1 + 0x24) = 0;
  local_c0._0_4_ = param_1[0x26];
  local_c0._4_4_ = param_1[0x27];
  *(undefined8 *)(param_1 + 0x26) = 0x100000000;
  local_b8 = *(longlong *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  local_b0._0_4_ = param_1[0x2a];
  local_b0._4_4_ = param_1[0x2b];
  *(undefined8 *)(param_1 + 0x2a) = 0;
  local_a8 = *(longlong *)(param_1 + 0x2c);
  *(undefined8 *)(param_1 + 0x2c) = 0;
  local_a0._0_4_ = param_1[0x2e];
  local_a0._4_4_ = param_1[0x2f];
  *(undefined8 *)(param_1 + 0x2e) = 0;
  local_98 = *(undefined8 *)(param_1 + 0x30);
  local_88[0] = (code *)0x0;
  puVar3 = (undefined8 *)FUN_14001cc68(0xd0,8);
  *puVar3 = &PTR_FUN_14b4f8370;
  *(undefined4 *)(puVar3 + 1) = local_158;
  *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_154;
  *(undefined4 *)(puVar3 + 2) = uStack_150;
  *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_14c;
  puVar3[3] = local_148;
  local_148 = (void *)0x0;
  *(undefined4 *)(puVar3 + 4) = (undefined4)local_140;
  *(undefined4 *)((longlong)puVar3 + 0x24) = local_140._4_4_;
  local_140 = 0;
  puVar3[5] = local_138;
  local_138 = (void *)0x0;
  *(undefined4 *)(puVar3 + 6) = (undefined4)local_130;
  *(undefined4 *)((longlong)puVar3 + 0x34) = local_130._4_4_;
  local_130 = 0;
  *(undefined2 *)((longlong)puVar3 + 0x39) = local_127;
  *(undefined1 *)(puVar3 + 9) = local_118;
  puVar3[8] = local_120;
  puVar3[10] = local_110;
  local_110 = 0;
  *(undefined4 *)(puVar3 + 0xb) = (undefined4)local_108;
  *(undefined4 *)((longlong)puVar3 + 0x5c) = local_108._4_4_;
  local_108 = 0;
  *(byte *)(puVar3 + 0x10) = local_e0;
  local_78 = puVar3;
  (*(code *)(&PTR_LAB_14a184230)[local_e0])(puVar3 + 0xc,local_100);
  if (local_c8 == 0) {
    *(undefined4 *)(puVar3 + 0x11) = local_d8;
    *(undefined4 *)((longlong)puVar3 + 0x8c) = uStack_d4;
    *(undefined4 *)(puVar3 + 0x12) = uStack_d0;
    *(undefined4 *)((longlong)puVar3 + 0x94) = uStack_cc;
  }
  puVar3[0x13] = local_c8;
  local_c8 = 0;
  *(undefined4 *)(puVar3 + 0x14) = (undefined4)local_c0;
  *(undefined4 *)((longlong)puVar3 + 0xa4) = local_c0._4_4_;
  local_c0 = 0x100000000;
  puVar3[0x15] = local_b8;
  local_b8 = 0;
  *(undefined4 *)(puVar3 + 0x16) = (undefined4)local_b0;
  *(undefined4 *)((longlong)puVar3 + 0xb4) = local_b0._4_4_;
  local_b0 = 0;
  puVar3[0x17] = local_a8;
  local_a8 = 0;
  *(undefined4 *)(puVar3 + 0x18) = (undefined4)local_a0;
  *(undefined4 *)((longlong)puVar3 + 0xc4) = local_a0._4_4_;
  local_a0 = 0;
  puVar3[0x19] = local_98;
  if (puVar3 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_88[0] = FUN_143f51174;
  }
  FUN_1411532a3(local_88);
  FUN_1404eec70(local_a8,local_a0 & 0xffffffff);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  FUN_1404eecb3(local_b8,local_b0 & 0xffffffff);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  FUN_1404eec06(&local_d8);
  (*(code *)(&PTR_FUN_14a1842f0)[local_e0])(local_100);
  if (local_110 != 0) {
    FUN_1400020a8();
  }
  if (local_138 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_148 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f5108c FUN_143f5108c body=29 status=ok
// SIG undefined FUN_143f5108c(void)

void FUN_143f5108c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143f510aa FUN_143f510aa body=201 status=ok
// SIG undefined FUN_143f510aa(void)

undefined8 * FUN_143f510aa(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14b4f8350;
  FUN_1404eec70(param_1[0x17],*(undefined4 *)(param_1 + 0x18));
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_1404eecb3(param_1[0x15],*(undefined4 *)(param_1 + 0x16));
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_1404eec06(param_1 + 0x11);
  (*(code *)(&PTR_FUN_14a1842f0)[*(byte *)(param_1 + 0x10)])(param_1 + 0xc);
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f51174 FUN_143f51174 body=2101 status=ok
// SIG undefined FUN_143f51174(void)

void FUN_143f51174(undefined4 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  void *pvVar4;
  code *pcVar5;
  byte bVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  bool bVar14;
  undefined1 auStack_1d8 [32];
  longlong local_1b8;
  longlong *plStack_1b0;
  undefined1 local_1a8;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  void *local_188;
  undefined8 local_180;
  void *local_178;
  undefined8 local_170;
  undefined2 local_167;
  undefined8 local_160;
  longlong local_158;
  undefined1 local_150;
  longlong local_148;
  undefined8 local_140;
  undefined1 local_138 [32];
  byte local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  longlong local_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  longlong local_e0;
  undefined8 local_d8;
  longlong local_d0;
  longlong local_c8 [2];
  longlong *local_b8;
  longlong local_a8 [4];
  code *local_88;
  longlong *local_78;
  longlong local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar12 = *param_2;
  if (DAT_14c846b14 == '\x01') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c83f0fc) && (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1)) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      bVar6 = FUN_14054d46e(&DAT_14c846b20,L"nothreading");
      DAT_14c83f0f8 = bVar6 ^ 1;
      _Init_thread_footer(&DAT_14c83f0fc);
    }
    if (DAT_14c83f0f8 != 1) {
      if ((local_40 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_1d8,param_1 + 0xe);
      }
      FUN_143f51ba0(param_1,param_1 + 0xe,lVar12);
      return;
    }
  }
  local_c8[0] = 0;
  local_b8 = (longlong *)0x0;
  local_198 = *param_1;
  uStack_194 = param_1[1];
  uStack_190 = param_1[2];
  uStack_18c = param_1[3];
  local_188 = (void *)0x0;
  uVar3 = param_1[6];
  pvVar4 = *(void **)(param_1 + 4);
  local_180 = CONCAT44(local_180._4_4_,uVar3);
  if ((longlong)(int)uVar3 == 0) {
    local_180 = (ulonglong)uVar3;
  }
  else {
    FUN_1446dd670(&local_188,uVar3,0);
    memcpy(local_188,pvVar4,(longlong)(int)uVar3 * 2);
  }
  local_178 = (void *)0x0;
  uVar3 = param_1[10];
  pvVar4 = *(void **)(param_1 + 8);
  local_170 = CONCAT44(local_170._4_4_,uVar3);
  if ((longlong)(int)uVar3 == 0) {
    local_170 = (ulonglong)uVar3;
  }
  else {
    FUN_1446dd670(&local_178,uVar3,0);
    memcpy(local_178,pvVar4,(longlong)(int)uVar3 * 2);
  }
  local_167 = *(undefined2 *)((longlong)param_1 + 0x31);
  local_160._0_4_ = 0;
  if (lVar12 == 0) {
    iVar7 = 0;
    uVar3 = (uint)local_160;
  }
  else {
    uVar3 = *(uint *)(lVar12 + 0xc);
    local_160 = (ulonglong)uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    iVar7 = *(int *)(lVar12 + 0x10);
    if (*(int *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar13 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar13);
      }
      LOCK();
      iVar7 = *(int *)(lVar12 + 0x10);
      bVar14 = iVar7 == 0;
      if (bVar14) {
        *(int *)(lVar12 + 0x10) = iVar13;
        iVar7 = 0;
      }
      UNLOCK();
      uVar3 = (uint)local_160;
      if (bVar14) {
        iVar7 = iVar13;
      }
    }
  }
  local_160._0_4_ = uVar3;
  local_160 = CONCAT44(iVar7,(uint)local_160);
  local_158 = *(longlong *)(param_1 + 0xe);
  local_150 = *(undefined1 *)(param_1 + 0x10);
  local_148 = *(longlong *)(param_1 + 0x12);
  *(undefined8 *)(param_1 + 0x12) = 0;
  local_140._0_4_ = param_1[0x14];
  local_140._4_4_ = param_1[0x15];
  *(undefined8 *)(param_1 + 0x14) = 0;
  local_118 = *(byte *)(param_1 + 0x1e);
  (*(code *)(&PTR_LAB_14a184230)[local_118])(local_138,param_1 + 0x16);
  local_100 = *(longlong *)(param_1 + 0x24);
  if (local_100 == 0) {
    local_110 = param_1[0x20];
    uStack_10c = param_1[0x21];
    uStack_108 = param_1[0x22];
    uStack_104 = param_1[0x23];
  }
  *(undefined8 *)(param_1 + 0x24) = 0;
  local_f8._0_4_ = param_1[0x26];
  local_f8._4_4_ = param_1[0x27];
  *(undefined8 *)(param_1 + 0x26) = 0x100000000;
  local_f0 = *(longlong *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  local_e8._0_4_ = param_1[0x2a];
  local_e8._4_4_ = param_1[0x2b];
  *(undefined8 *)(param_1 + 0x2a) = 0;
  local_e0 = *(longlong *)(param_1 + 0x2c);
  *(undefined8 *)(param_1 + 0x2c) = 0;
  local_d8._0_4_ = param_1[0x2e];
  local_d8._4_4_ = param_1[0x2f];
  *(undefined8 *)(param_1 + 0x2e) = 0;
  local_d0 = *(longlong *)(param_1 + 0x30);
  local_88 = (code *)0x0;
  plVar8 = (longlong *)FUN_14001cc68(0xd8,8);
  *plVar8 = (longlong)&PTR_LAB_14b4f8390;
  *(undefined4 *)(plVar8 + 1) = local_198;
  *(undefined4 *)((longlong)plVar8 + 0xc) = uStack_194;
  *(undefined4 *)(plVar8 + 2) = uStack_190;
  *(undefined4 *)((longlong)plVar8 + 0x14) = uStack_18c;
  plVar8[3] = (longlong)local_188;
  local_188 = (void *)0x0;
  *(undefined4 *)(plVar8 + 4) = (undefined4)local_180;
  *(undefined4 *)((longlong)plVar8 + 0x24) = local_180._4_4_;
  local_180 = 0;
  plVar8[5] = (longlong)local_178;
  local_178 = (void *)0x0;
  *(undefined4 *)(plVar8 + 6) = (undefined4)local_170;
  *(undefined4 *)((longlong)plVar8 + 0x34) = local_170._4_4_;
  local_170 = 0;
  *(undefined2 *)((longlong)plVar8 + 0x39) = local_167;
  plVar8[8] = local_160;
  *(undefined1 *)(plVar8 + 10) = local_150;
  plVar8[9] = local_158;
  plVar8[0xb] = local_148;
  local_148 = 0;
  *(undefined4 *)(plVar8 + 0xc) = (undefined4)local_140;
  *(undefined4 *)((longlong)plVar8 + 100) = local_140._4_4_;
  local_140 = 0;
  *(byte *)(plVar8 + 0x11) = local_118;
  local_78 = plVar8;
  (*(code *)(&PTR_LAB_14a184230)[local_118])(plVar8 + 0xd,local_138);
  if (local_100 == 0) {
    *(undefined4 *)(plVar8 + 0x12) = local_110;
    *(undefined4 *)((longlong)plVar8 + 0x94) = uStack_10c;
    *(undefined4 *)(plVar8 + 0x13) = uStack_108;
    *(undefined4 *)((longlong)plVar8 + 0x9c) = uStack_104;
  }
  plVar8[0x14] = local_100;
  local_100 = 0;
  *(undefined4 *)(plVar8 + 0x15) = (undefined4)local_f8;
  *(undefined4 *)((longlong)plVar8 + 0xac) = local_f8._4_4_;
  local_f8 = 0x100000000;
  plVar8[0x16] = local_f0;
  local_f0 = 0;
  *(undefined4 *)(plVar8 + 0x17) = (undefined4)local_e8;
  *(undefined4 *)((longlong)plVar8 + 0xbc) = local_e8._4_4_;
  local_e8 = 0;
  plVar8[0x18] = local_e0;
  local_e0 = 0;
  *(undefined4 *)(plVar8 + 0x19) = (undefined4)local_d8;
  *(undefined4 *)((longlong)plVar8 + 0xcc) = local_d8._4_4_;
  local_d8 = 0;
  plVar8[0x1a] = local_d0;
  if (plVar8 != (longlong *)&DAT_fffffffffffffff8) {
    local_88 = FUN_143f52000;
  }
  FUN_14170b918(&local_1b8,local_c8);
  plVar8 = plStack_1b0;
  local_1a8 = 1;
  if (plStack_1b0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_1b0 + 1) = (int)plStack_1b0[1] + 1;
    UNLOCK();
  }
  if (DAT_14c846b14 == '\x01') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c83f0fc) && (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1)) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      bVar6 = FUN_14054d46e(&DAT_14c846b20,L"nothreading");
      DAT_14c83f0f8 = bVar6 ^ 1;
      _Init_thread_footer(&DAT_14c83f0fc);
    }
    pcVar5 = local_88;
    if (DAT_14c83f0f8 != 1) {
      plVar11 = local_78;
      if (local_78 == (longlong *)0x0) {
        plVar11 = &local_68;
      }
      uVar10 = (**(code **)(*plVar11 + 8))();
      (*pcVar5)(uVar10);
      *(undefined4 *)(local_1b8 + 0x80) = 0;
      FUN_140b576f0();
      goto LAB_143f5172e;
    }
  }
  plVar11 = DAT_14c8442c0;
  puVar9 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  puVar9[1] = 0;
  *puVar9 = TAsyncQueuedWork<void>::vftable;
  puVar9[2] = local_88;
  puVar9[4] = local_78;
  local_78 = (longlong *)0x0;
  *(undefined4 *)(puVar9 + 8) = local_58;
  *(undefined4 *)((longlong)puVar9 + 0x44) = uStack_54;
  *(undefined4 *)(puVar9 + 9) = uStack_50;
  *(undefined4 *)((longlong)puVar9 + 0x4c) = uStack_4c;
  puVar9[6] = local_68;
  puVar9[7] = uStack_60;
  if (local_88 != (code *)0x0) {
    local_88 = (code *)0x0;
  }
  puVar9[10] = local_1b8;
  puVar9[0xb] = plStack_1b0;
  local_1b8 = 0;
  plStack_1b0 = (longlong *)0x0;
  *(undefined1 *)(puVar9 + 0xc) = 0;
  (**(code **)(*plVar11 + 0x18))(plVar11,puVar9,3);
LAB_143f5172e:
  plVar11 = plStack_1b0;
  if (plStack_1b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_1b0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_1b0)(plStack_1b0);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if (local_88 != (code *)0x0) {
    plVar11 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar11 = &local_68;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if (local_c8[0] != 0) {
    plVar11 = local_b8;
    if (local_b8 == (longlong *)0x0) {
      plVar11 = local_a8;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar8 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  FUN_1404eec70(local_e0,local_d8 & 0xffffffff);
  if (local_e0 != 0) {
    FUN_1400020a8();
  }
  FUN_1404eecb3(local_f0,local_e8 & 0xffffffff);
  if (local_f0 != 0) {
    FUN_1400020a8();
  }
  FUN_1404eec06(&local_110);
  (*(code *)(&PTR_FUN_14a1842f0)[local_118])(local_138);
  if (local_148 != 0) {
    FUN_1400020a8();
  }
  if (local_178 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_188 != (void *)0x0) {
    FUN_1400020a8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_1d8);
}



// FUNCTION 143f519be FUN_143f519be body=243 status=ok
// SIG undefined FUN_143f519be(void)

undefined8 * FUN_143f519be(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)FUN_14001cc68(0xd0,8);
  *param_2 = puVar6;
  *puVar6 = &PTR_FUN_14b4f8370;
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  uVar5 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)puVar6 + 0xc) = uVar3;
  *(undefined4 *)(puVar6 + 2) = uVar4;
  *(undefined4 *)((longlong)puVar6 + 0x14) = uVar5;
  puVar6[3] = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  pvVar2 = *(void **)(param_1 + 0x18);
  *(int *)(puVar6 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar6 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(puVar6 + 3,iVar1,0);
    memcpy((void *)puVar6[3],pvVar2,(longlong)iVar1 * 2);
  }
  puVar6[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  pvVar2 = *(void **)(param_1 + 0x28);
  *(int *)(puVar6 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar6 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(puVar6 + 5,iVar1,0);
    memcpy((void *)puVar6[5],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined2 *)((longlong)puVar6 + 0x39) = *(undefined2 *)(param_1 + 0x39);
  FUN_1404dce0c(puVar6 + 8,param_1 + 0x40);
  return puVar6 + 1;
}



// FUNCTION 143f51ab8 FUN_143f51ab8 body=29 status=ok
// SIG undefined FUN_143f51ab8(void)

void FUN_143f51ab8(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143f51ad6 FUN_143f51ad6 body=201 status=ok
// SIG undefined FUN_143f51ad6(void)

undefined8 * FUN_143f51ad6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4f8370;
  FUN_1404eec70(param_1[0x17],*(undefined4 *)(param_1 + 0x18));
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_1404eecb3(param_1[0x15],*(undefined4 *)(param_1 + 0x16));
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_1404eec06(param_1 + 0x11);
  (*(code *)(&PTR_FUN_14a1842f0)[*(byte *)(param_1 + 0x10)])(param_1 + 0xc);
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f51ba0 FUN_143f51ba0 body=1119 status=ok
// SIG undefined FUN_143f51ba0(void)

void FUN_143f51ba0(longlong *param_1,longlong *param_2,longlong param_3)

{
  ushort uVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_158 [44];
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  longlong local_120;
  undefined8 uStack_118;
  longlong local_110;
  int local_108;
  undefined4 local_104;
  code *local_100;
  undefined1 *local_f8;
  longlong *local_f0;
  longlong local_e8;
  undefined4 *local_e0;
  undefined4 *local_d8;
  undefined4 *local_d0;
  longlong local_c8;
  void *local_c0;
  int local_b8;
  undefined4 local_b4;
  void *local_b0;
  int local_a8;
  undefined4 local_a4;
  undefined1 local_98 [8];
  undefined4 *local_90;
  longlong *local_88;
  undefined4 *local_80;
  longlong local_78;
  undefined4 *local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if ((param_3 != 0) && (*(longlong *)(param_3 + 0x2b8) != 0)) {
    local_124 = 0;
    local_128 = 0;
    local_12c = 0;
    local_f0 = param_2;
    local_c8 = param_3;
    if (1 < *(uint *)(*param_1 + 0x78)) {
      local_e8 = param_1[1];
      local_e0 = &local_124;
      local_d8 = &local_12c;
      local_d0 = &local_128;
      local_c0 = (void *)0x0;
      local_b8 = (int)param_1[3];
      lVar7 = (longlong)local_b8;
      pvVar2 = (void *)param_1[2];
      if (lVar7 == 0) {
        local_b4 = 0;
      }
      else {
        FUN_1446dd670(&local_c0,local_b8,0);
        memcpy(local_c0,pvVar2,lVar7 * 2);
      }
      local_b0 = (void *)0x0;
      local_a8 = (int)param_1[5];
      lVar7 = (longlong)local_a8;
      pvVar2 = (void *)param_1[4];
      if (lVar7 == 0) {
        local_a4 = 0;
      }
      else {
        FUN_1446dd670(&local_b0,local_a8,0);
        memcpy(local_b0,pvVar2,lVar7 * 2);
      }
      iVar4 = (int)param_2[0xe];
      if (0 < iVar4) {
        lVar6 = 0;
        lVar7 = 0;
        do {
          if (*(int *)(param_2[0xd] + 0x38 + lVar6) != 0) {
            local_88 = (longlong *)(param_2[0xd] + lVar6);
            local_90 = local_e0;
            local_80 = local_d0;
            local_78 = local_e8;
            local_70 = local_d8;
            local_68 = local_f0;
            local_100 = FUN_143f52152;
            local_f8 = local_98;
            FUN_1418bf8c5(local_c8,&local_c0,&local_b0,&local_100);
            iVar4 = (int)param_2[0xe];
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x40;
        } while (lVar7 < iVar4);
      }
      if (local_b0 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_c0 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    local_e8 = param_1[1];
    local_e0 = &local_124;
    local_d8 = &local_12c;
    local_d0 = &local_128;
    local_c0 = (void *)0x0;
    local_b8 = (int)param_1[3];
    lVar7 = (longlong)local_b8;
    pvVar2 = (void *)param_1[2];
    if (lVar7 == 0) {
      local_b4 = 0;
      local_f0 = param_2;
      local_c8 = param_3;
    }
    else {
      local_f0 = param_2;
      local_c8 = param_3;
      FUN_1446dd670(&local_c0,local_b8,0);
      memcpy(local_c0,pvVar2,lVar7 * 2);
    }
    if (0 < (int)param_2[0xc]) {
      lVar7 = 0;
      do {
        local_88 = (longlong *)param_2[0xb];
        if ((longlong *)param_2[0xb] == (longlong *)0x0) {
          local_88 = param_2 + 9;
        }
        local_88 = local_88 + lVar7 * 2;
        local_90 = local_e0;
        local_80 = local_d0;
        local_78 = local_e8;
        local_70 = local_d8;
        local_68 = local_f0;
        local_f8 = local_98;
        local_100 = FUN_143f5253c;
        FUN_1400021e4(*local_f0 + 0x3c,&local_120);
        local_108 = (int)uStack_118;
        uVar3 = (int)uStack_118 - 1;
        if ((int)uStack_118 == 0) {
          uVar3 = 0;
        }
        if (0 < (int)uVar3) {
          uVar5 = 0;
          do {
            uVar1 = *(ushort *)(local_120 + uVar5 * 2);
            *(ushort *)(local_120 + uVar5 * 2) = (ushort)(uVar1 - 0x41 < 0x1a) * 0x20 + uVar1;
            uVar5 = uVar5 + 1;
          } while (uVar3 != uVar5);
        }
        local_110 = local_120;
        local_104 = uStack_118._4_4_;
        local_120 = 0;
        uStack_118 = 0;
        FUN_1418bf8c5(local_c8,&local_c0,&local_110,&local_100);
        if (local_110 != 0) {
          FUN_1400020a8();
        }
        if (local_120 != 0) {
          FUN_1400020a8();
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < (int)param_2[0xc]);
    }
    if (local_c0 != (void *)0x0) {
      FUN_1400020a8();
    }
    if ((*(char *)((longlong)param_1 + 0x31) == '\x01') &&
       ((0 < DAT_14cb97f28 & (*(byte *)((longlong)param_1 + 0x32) ^ 1)) == 0)) {
      DAT_14cb97f28 = *(byte *)((longlong)param_1 + 0x32) + 1;
    }
  }
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f52000 FUN_143f52000 body=96 status=ok
// SIG undefined FUN_143f52000(void)

void FUN_143f52000(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (((*(int *)(param_1 + 0x3c) != 0) && (uVar1 = *(uint *)(param_1 + 0x38), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    puVar2 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar2 != (undefined8 *)0x0) && (*(int *)(puVar2 + 2) == *(int *)(param_1 + 0x3c))) &&
       ((*(uint *)(puVar2 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar2 + 1) & 0x10200000) == 0) {
        uVar3 = *puVar2;
      }
      else {
        uVar3 = 0;
      }
      FUN_143f51ba0(param_1,param_1 + 0x40,uVar3);
      return;
    }
  }
  return;
}



// FUNCTION 143f52064 FUN_143f52064 body=5 status=ok
// SIG undefined FUN_143f52064(void)

longlong FUN_143f52064(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 143f5206a FUN_143f5206a body=29 status=ok
// SIG undefined FUN_143f5206a(void)

void FUN_143f5206a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143f52088 FUN_143f52088 body=201 status=ok
// SIG undefined FUN_143f52088(void)

undefined8 * FUN_143f52088(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14b4f8390;
  FUN_1404eec70(param_1[0x18],*(undefined4 *)(param_1 + 0x19));
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_1404eecb3(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_1404eec06(param_1 + 0x12);
  (*(code *)(&PTR_FUN_14a1842f0)[*(byte *)(param_1 + 0x11)])(param_1 + 0xd);
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f52152 FUN_143f52152 body=901 status=ok
// SIG undefined FUN_143f52152(void)

void FUN_143f52152(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_518 [32];
  undefined8 local_4f8;
  undefined1 local_4f0 [1024];
  undefined1 *local_f0;
  undefined8 local_e8;
  undefined **local_e0 [5];
  longlong local_b8;
  undefined8 local_b0;
  undefined ***local_a8;
  undefined **local_a0 [5];
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_5c;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_518;
  local_a8 = local_a0;
  local_b8 = 0;
  local_b0 = 0x800000000;
  local_e0[0] = &PTR_FUN_14b4f83b0;
  local_78 = 0;
  local_70 = 0x800000000;
  local_a0[0] = &PTR_FUN_14b4f8450;
  local_60 = 0;
  local_5c = 0;
  local_50 = (undefined8 *)0x0;
  **(int **)(param_1 + 8) = **(int **)(param_1 + 8) + 1;
  local_f0 = (undefined1 *)0x0;
  local_e8 = 0x8000000000;
  lVar7 = *(longlong *)(param_1 + 0x10);
  uVar4 = *(uint *)(lVar7 + 0x38);
  local_68 = param_2;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar4);
  }
  if (0x80 < uVar4) {
    FUN_148ab6520(local_4f0);
    lVar7 = *(longlong *)(param_1 + 0x10);
    uVar4 = *(uint *)(lVar7 + 0x38);
  }
  if (uVar4 != 0) {
    lVar6 = (longlong)(int)uVar4 * 0x30;
    lVar7 = *(longlong *)(lVar7 + 0x30) + 0x28;
    do {
      FUN_14133869c(lVar7 + -0x28,local_e0);
      **(int **)(param_1 + 0x18) = **(int **)(param_1 + 0x18) + 1;
      if (((&DAT_14b4f84e8)[*(byte *)(lVar7 + -8)] == '\0') &&
         (iVar3 = FUN_140e5a5c0(*(undefined8 *)(param_1 + 0x20),lVar7), uVar2 = local_e8, iVar3 == 1
         )) {
        lVar8 = (longlong)(int)local_e8;
        uVar4 = (int)local_e8 + 1;
        local_e8 = CONCAT44(local_e8._4_4_,uVar4);
        if (local_e8._4_4_ < uVar4) {
          FUN_148ab6604(local_4f0,uVar2 & 0xffffffff);
        }
        puVar5 = local_f0;
        if (local_f0 == (undefined1 *)0x0) {
          puVar5 = local_4f0;
        }
        *(longlong *)(puVar5 + lVar8 * 8) = lVar7 + -0x28;
        **(int **)(param_1 + 0x28) = **(int **)(param_1 + 0x28) + 1;
      }
      lVar7 = lVar7 + 0x30;
      lVar6 = lVar6 + -0x30;
    } while (lVar6 != 0);
  }
  lVar7 = (longlong)*(int *)(*(longlong *)(param_1 + 0x30) + 0x80);
  if (lVar7 != 0) {
    lVar7 = lVar7 * 0x30;
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x78) + 0x28;
    do {
      FUN_14133869c(lVar6 + -0x28,local_e0);
      **(int **)(param_1 + 0x18) = **(int **)(param_1 + 0x18) + 1;
      if (((&DAT_14b4f84e8)[*(byte *)(lVar6 + -8)] == '\0') &&
         (iVar3 = FUN_140e5a5c0(*(undefined8 *)(param_1 + 0x20),lVar6), uVar2 = local_e8, iVar3 == 1
         )) {
        lVar8 = (longlong)(int)local_e8;
        uVar4 = (int)local_e8 + 1;
        local_e8 = CONCAT44(local_e8._4_4_,uVar4);
        if (local_e8._4_4_ < uVar4) {
          FUN_148ab6604(local_4f0,uVar2 & 0xffffffff);
        }
        puVar5 = local_f0;
        if (local_f0 == (undefined1 *)0x0) {
          puVar5 = local_4f0;
        }
        *(longlong *)(puVar5 + lVar8 * 8) = lVar6 + -0x28;
        **(int **)(param_1 + 0x28) = **(int **)(param_1 + 0x28) + 1;
      }
      lVar6 = lVar6 + 0x30;
      lVar7 = lVar7 + -0x30;
    } while (lVar7 != 0);
  }
  lVar7 = (longlong)(int)local_e8;
  if (lVar7 != 0) {
    puVar5 = local_4f0;
    if (local_f0 != (undefined1 *)0x0) {
      puVar5 = local_f0;
    }
    (*(code *)(*local_a8)[5])(local_a8,&DAT_14cb97a38);
    local_60 = 1;
    lVar6 = 0;
    do {
      uVar1 = *(undefined8 *)(puVar5 + lVar6);
      local_4f8 = 0;
      (*(code *)local_e0[0][3])(local_e0,&local_4f8);
      FUN_14133869c(uVar1,local_e0);
      (*(code *)local_e0[0][4])(local_e0);
      lVar6 = lVar6 + 8;
    } while (lVar7 * 8 != lVar6);
    local_60 = 0;
    (*(code *)(*local_a8)[6])();
  }
  if (local_f0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  local_e0[0] = &PTR_FUN_14b4f83b0;
  if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)(local_50,1);
  }
  local_a0[0] = &PTR_LAB_14a185980;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  local_e0[0] = &PTR_LAB_14a185980;
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_518) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f524d8 FUN_143f524d8 body=100 status=ok
// SIG undefined FUN_143f524d8(void)

void FUN_143f524d8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b4f83b0;
  puVar1 = (undefined8 *)param_1[0x12];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[8] = &PTR_LAB_14a185980;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_14a185980;
  if (param_1[5] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143f5253c FUN_143f5253c body=956 status=ok
// SIG undefined FUN_143f5253c(void)

void FUN_143f5253c(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_528 [40];
  char *local_500;
  undefined4 local_4f8;
  undefined1 local_4f4;
  undefined1 local_4f0 [1024];
  undefined1 *local_f0;
  undefined8 local_e8;
  undefined **local_e0 [5];
  longlong local_b8;
  undefined8 local_b0;
  undefined ***local_a8;
  undefined **local_a0 [5];
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_5c;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_528;
  local_a8 = local_a0;
  local_b8 = 0;
  local_b0 = 0x800000000;
  local_e0[0] = &PTR_FUN_14b4f83b0;
  local_78 = 0;
  local_70 = 0x800000000;
  local_a0[0] = &PTR_FUN_14b4f8450;
  local_60 = 0;
  local_5c = 0;
  local_50 = (undefined8 *)0x0;
  **(int **)(param_1 + 8) = **(int **)(param_1 + 8) + 1;
  local_f0 = (undefined1 *)0x0;
  local_e8 = 0x8000000000;
  plVar5 = *(longlong **)(param_1 + 0x10);
  uVar4 = *(uint *)(plVar5 + 1);
  local_68 = param_2;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar4);
  }
  if (0x80 < uVar4) {
    FUN_148ab6520(local_4f0);
    plVar5 = *(longlong **)(param_1 + 0x10);
    uVar4 = *(uint *)(plVar5 + 1);
  }
  if (uVar4 != 0) {
    lVar8 = (longlong)(int)uVar4 * 0x30;
    lVar9 = *plVar5 + 0x28;
    do {
      FUN_14133869c(lVar9 + -0x28,local_e0);
      **(int **)(param_1 + 0x18) = **(int **)(param_1 + 0x18) + 1;
      if (((&DAT_14b4f84e8)[*(byte *)(lVar9 + -8)] == '\0') &&
         (iVar3 = FUN_140e5a5c0(*(undefined8 *)(param_1 + 0x20),lVar9), uVar2 = local_e8, iVar3 == 1
         )) {
        lVar10 = (longlong)(int)local_e8;
        uVar4 = (int)local_e8 + 1;
        local_e8 = CONCAT44(local_e8._4_4_,uVar4);
        if (local_e8._4_4_ < uVar4) {
          FUN_148ab6604(local_4f0,uVar2 & 0xffffffff);
        }
        puVar6 = local_f0;
        if (local_f0 == (undefined1 *)0x0) {
          puVar6 = local_4f0;
        }
        *(longlong *)(puVar6 + lVar10 * 8) = lVar9 + -0x28;
        **(int **)(param_1 + 0x28) = **(int **)(param_1 + 0x28) + 1;
      }
      lVar9 = lVar9 + 0x30;
      lVar8 = lVar8 + -0x30;
    } while (lVar8 != 0);
  }
  lVar8 = (longlong)(int)local_e8;
  if (lVar8 != 0) {
    puVar6 = local_f0;
    if (local_f0 == (undefined1 *)0x0) {
      puVar6 = local_4f0;
    }
    (*(code *)(*local_a8)[5])(local_a8,&DAT_14cb97a38);
    local_60 = 1;
    lVar9 = 0;
    do {
      uVar1 = *(undefined8 *)(puVar6 + lVar9);
      local_500 = (char *)0x0;
      (*(code *)local_e0[0][3])(local_e0,&local_500);
      FUN_14133869c(uVar1,local_e0);
      (*(code *)local_e0[0][4])(local_e0);
      lVar9 = lVar9 + 8;
    } while (lVar8 * 8 != lVar9);
    local_60 = 0;
    (*(code *)(*local_a8)[6])();
  }
  if (*(int *)(*(longlong *)(param_1 + 0x30) + 0x70) != 0) {
    local_500 = "event_contexts";
    local_4f8 = 0xe;
    local_4f4 = 0;
    uVar4 = FUN_14001a6c0(&local_500,1);
    local_500 = (char *)(ulonglong)uVar4;
    (*(code *)(*local_a8)[5])(local_a8,&local_500);
    lVar8 = *(longlong *)(param_1 + 0x30);
    iVar3 = *(int *)(lVar8 + 0x70);
    if (0 < iVar3) {
      lVar9 = 0;
      do {
        if (*(int *)(*(longlong *)(lVar8 + 0x68) + 0x38 + lVar9 * 0x40) != 0) {
          lVar7 = *(longlong *)(lVar8 + 0x68) + lVar9 * 0x40;
          local_500 = (char *)0x0;
          (*(code *)(*local_a8)[3])(local_a8,&local_500);
          lVar10 = (longlong)*(int *)(lVar7 + 0x38);
          if (lVar10 != 0) {
            lVar7 = *(longlong *)(lVar7 + 0x30);
            lVar10 = lVar10 * 0x30;
            do {
              FUN_14133869c(lVar7,local_e0);
              lVar7 = lVar7 + 0x30;
              lVar10 = lVar10 + -0x30;
            } while (lVar10 != 0);
          }
          (*(code *)(*local_a8)[4])();
          iVar3 = *(int *)(lVar8 + 0x70);
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < iVar3);
    }
    (*(code *)(*local_a8)[6])();
  }
  if (local_f0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  local_e0[0] = &PTR_FUN_14b4f83b0;
  if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)(local_50,1);
  }
  local_a0[0] = &PTR_LAB_14a185980;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  local_e0[0] = &PTR_LAB_14a185980;
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_528) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f528fa FUN_143f528fa body=2101 status=ok
// SIG undefined FUN_143f528fa(void)

void FUN_143f528fa(undefined4 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  void *pvVar4;
  code *pcVar5;
  byte bVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  bool bVar14;
  undefined1 auStack_1d8 [32];
  longlong local_1b8;
  longlong *plStack_1b0;
  undefined1 local_1a8;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  void *local_188;
  undefined8 local_180;
  void *local_178;
  undefined8 local_170;
  undefined2 local_167;
  undefined8 local_160;
  longlong local_158;
  undefined1 local_150;
  longlong local_148;
  undefined8 local_140;
  undefined1 local_138 [32];
  byte local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  longlong local_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  longlong local_e0;
  undefined8 local_d8;
  longlong local_d0;
  longlong local_c8 [2];
  longlong *local_b8;
  longlong local_a8 [4];
  code *local_88;
  longlong *local_78;
  longlong local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar12 = *param_2;
  if (DAT_14c846b14 == '\x01') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c83f0fc) && (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1)) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      bVar6 = FUN_14054d46e(&DAT_14c846b20,L"nothreading");
      DAT_14c83f0f8 = bVar6 ^ 1;
      _Init_thread_footer(&DAT_14c83f0fc);
    }
    if (DAT_14c83f0f8 != 1) {
      if ((local_40 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_1d8,param_1 + 0xe);
      }
      FUN_143f51ba0(param_1,param_1 + 0xe,lVar12);
      return;
    }
  }
  local_c8[0] = 0;
  local_b8 = (longlong *)0x0;
  local_198 = *param_1;
  uStack_194 = param_1[1];
  uStack_190 = param_1[2];
  uStack_18c = param_1[3];
  local_188 = (void *)0x0;
  uVar3 = param_1[6];
  pvVar4 = *(void **)(param_1 + 4);
  local_180 = CONCAT44(local_180._4_4_,uVar3);
  if ((longlong)(int)uVar3 == 0) {
    local_180 = (ulonglong)uVar3;
  }
  else {
    FUN_1446dd670(&local_188,uVar3,0);
    memcpy(local_188,pvVar4,(longlong)(int)uVar3 * 2);
  }
  local_178 = (void *)0x0;
  uVar3 = param_1[10];
  pvVar4 = *(void **)(param_1 + 8);
  local_170 = CONCAT44(local_170._4_4_,uVar3);
  if ((longlong)(int)uVar3 == 0) {
    local_170 = (ulonglong)uVar3;
  }
  else {
    FUN_1446dd670(&local_178,uVar3,0);
    memcpy(local_178,pvVar4,(longlong)(int)uVar3 * 2);
  }
  local_167 = *(undefined2 *)((longlong)param_1 + 0x31);
  local_160._0_4_ = 0;
  if (lVar12 == 0) {
    iVar7 = 0;
    uVar3 = (uint)local_160;
  }
  else {
    uVar3 = *(uint *)(lVar12 + 0xc);
    local_160 = (ulonglong)uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    iVar7 = *(int *)(lVar12 + 0x10);
    if (*(int *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar13 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar13);
      }
      LOCK();
      iVar7 = *(int *)(lVar12 + 0x10);
      bVar14 = iVar7 == 0;
      if (bVar14) {
        *(int *)(lVar12 + 0x10) = iVar13;
        iVar7 = 0;
      }
      UNLOCK();
      uVar3 = (uint)local_160;
      if (bVar14) {
        iVar7 = iVar13;
      }
    }
  }
  local_160._0_4_ = uVar3;
  local_160 = CONCAT44(iVar7,(uint)local_160);
  local_158 = *(longlong *)(param_1 + 0xe);
  local_150 = *(undefined1 *)(param_1 + 0x10);
  local_148 = *(longlong *)(param_1 + 0x12);
  *(undefined8 *)(param_1 + 0x12) = 0;
  local_140._0_4_ = param_1[0x14];
  local_140._4_4_ = param_1[0x15];
  *(undefined8 *)(param_1 + 0x14) = 0;
  local_118 = *(byte *)(param_1 + 0x1e);
  (*(code *)(&PTR_LAB_14a184230)[local_118])(local_138,param_1 + 0x16);
  local_100 = *(longlong *)(param_1 + 0x24);
  if (local_100 == 0) {
    local_110 = param_1[0x20];
    uStack_10c = param_1[0x21];
    uStack_108 = param_1[0x22];
    uStack_104 = param_1[0x23];
  }
  *(undefined8 *)(param_1 + 0x24) = 0;
  local_f8._0_4_ = param_1[0x26];
  local_f8._4_4_ = param_1[0x27];
  *(undefined8 *)(param_1 + 0x26) = 0x100000000;
  local_f0 = *(longlong *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  local_e8._0_4_ = param_1[0x2a];
  local_e8._4_4_ = param_1[0x2b];
  *(undefined8 *)(param_1 + 0x2a) = 0;
  local_e0 = *(longlong *)(param_1 + 0x2c);
  *(undefined8 *)(param_1 + 0x2c) = 0;
  local_d8._0_4_ = param_1[0x2e];
  local_d8._4_4_ = param_1[0x2f];
  *(undefined8 *)(param_1 + 0x2e) = 0;
  local_d0 = *(longlong *)(param_1 + 0x30);
  local_88 = (code *)0x0;
  plVar8 = (longlong *)FUN_14001cc68(0xd8,8);
  *plVar8 = (longlong)&PTR_LAB_14b4f8530;
  *(undefined4 *)(plVar8 + 1) = local_198;
  *(undefined4 *)((longlong)plVar8 + 0xc) = uStack_194;
  *(undefined4 *)(plVar8 + 2) = uStack_190;
  *(undefined4 *)((longlong)plVar8 + 0x14) = uStack_18c;
  plVar8[3] = (longlong)local_188;
  local_188 = (void *)0x0;
  *(undefined4 *)(plVar8 + 4) = (undefined4)local_180;
  *(undefined4 *)((longlong)plVar8 + 0x24) = local_180._4_4_;
  local_180 = 0;
  plVar8[5] = (longlong)local_178;
  local_178 = (void *)0x0;
  *(undefined4 *)(plVar8 + 6) = (undefined4)local_170;
  *(undefined4 *)((longlong)plVar8 + 0x34) = local_170._4_4_;
  local_170 = 0;
  *(undefined2 *)((longlong)plVar8 + 0x39) = local_167;
  plVar8[8] = local_160;
  *(undefined1 *)(plVar8 + 10) = local_150;
  plVar8[9] = local_158;
  plVar8[0xb] = local_148;
  local_148 = 0;
  *(undefined4 *)(plVar8 + 0xc) = (undefined4)local_140;
  *(undefined4 *)((longlong)plVar8 + 100) = local_140._4_4_;
  local_140 = 0;
  *(byte *)(plVar8 + 0x11) = local_118;
  local_78 = plVar8;
  (*(code *)(&PTR_LAB_14a184230)[local_118])(plVar8 + 0xd,local_138);
  if (local_100 == 0) {
    *(undefined4 *)(plVar8 + 0x12) = local_110;
    *(undefined4 *)((longlong)plVar8 + 0x94) = uStack_10c;
    *(undefined4 *)(plVar8 + 0x13) = uStack_108;
    *(undefined4 *)((longlong)plVar8 + 0x9c) = uStack_104;
  }
  plVar8[0x14] = local_100;
  local_100 = 0;
  *(undefined4 *)(plVar8 + 0x15) = (undefined4)local_f8;
  *(undefined4 *)((longlong)plVar8 + 0xac) = local_f8._4_4_;
  local_f8 = 0x100000000;
  plVar8[0x16] = local_f0;
  local_f0 = 0;
  *(undefined4 *)(plVar8 + 0x17) = (undefined4)local_e8;
  *(undefined4 *)((longlong)plVar8 + 0xbc) = local_e8._4_4_;
  local_e8 = 0;
  plVar8[0x18] = local_e0;
  local_e0 = 0;
  *(undefined4 *)(plVar8 + 0x19) = (undefined4)local_d8;
  *(undefined4 *)((longlong)plVar8 + 0xcc) = local_d8._4_4_;
  local_d8 = 0;
  plVar8[0x1a] = local_d0;
  if (plVar8 != (longlong *)&DAT_fffffffffffffff8) {
    local_88 = FUN_143f53326;
  }
  FUN_14170b918(&local_1b8,local_c8);
  plVar8 = plStack_1b0;
  local_1a8 = 1;
  if (plStack_1b0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_1b0 + 1) = (int)plStack_1b0[1] + 1;
    UNLOCK();
  }
  if (DAT_14c846b14 == '\x01') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c83f0fc) && (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1)) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      bVar6 = FUN_14054d46e(&DAT_14c846b20,L"nothreading");
      DAT_14c83f0f8 = bVar6 ^ 1;
      _Init_thread_footer(&DAT_14c83f0fc);
    }
    pcVar5 = local_88;
    if (DAT_14c83f0f8 != 1) {
      plVar11 = local_78;
      if (local_78 == (longlong *)0x0) {
        plVar11 = &local_68;
      }
      uVar10 = (**(code **)(*plVar11 + 8))();
      (*pcVar5)(uVar10);
      *(undefined4 *)(local_1b8 + 0x80) = 0;
      FUN_140b576f0();
      goto LAB_143f52eb4;
    }
  }
  plVar11 = DAT_14c8442c0;
  puVar9 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  puVar9[1] = 0;
  *puVar9 = TAsyncQueuedWork<void>::vftable;
  puVar9[2] = local_88;
  puVar9[4] = local_78;
  local_78 = (longlong *)0x0;
  *(undefined4 *)(puVar9 + 8) = local_58;
  *(undefined4 *)((longlong)puVar9 + 0x44) = uStack_54;
  *(undefined4 *)(puVar9 + 9) = uStack_50;
  *(undefined4 *)((longlong)puVar9 + 0x4c) = uStack_4c;
  puVar9[6] = local_68;
  puVar9[7] = uStack_60;
  if (local_88 != (code *)0x0) {
    local_88 = (code *)0x0;
  }
  puVar9[10] = local_1b8;
  puVar9[0xb] = plStack_1b0;
  local_1b8 = 0;
  plStack_1b0 = (longlong *)0x0;
  *(undefined1 *)(puVar9 + 0xc) = 0;
  (**(code **)(*plVar11 + 0x18))(plVar11,puVar9,3);
LAB_143f52eb4:
  plVar11 = plStack_1b0;
  if (plStack_1b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_1b0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_1b0)(plStack_1b0);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if (local_88 != (code *)0x0) {
    plVar11 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar11 = &local_68;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if (local_c8[0] != 0) {
    plVar11 = local_b8;
    if (local_b8 == (longlong *)0x0) {
      plVar11 = local_a8;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar8 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  FUN_1404eec70(local_e0,local_d8 & 0xffffffff);
  if (local_e0 != 0) {
    FUN_1400020a8();
  }
  FUN_1404eecb3(local_f0,local_e8 & 0xffffffff);
  if (local_f0 != 0) {
    FUN_1400020a8();
  }
  FUN_1404eec06(&local_110);
  (*(code *)(&PTR_FUN_14a1842f0)[local_118])(local_138);
  if (local_148 != 0) {
    FUN_1400020a8();
  }
  if (local_178 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_188 != (void *)0x0) {
    FUN_1400020a8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_1d8);
}



// FUNCTION 143f53144 FUN_143f53144 body=243 status=ok
// SIG undefined FUN_143f53144(void)

undefined8 * FUN_143f53144(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)FUN_14001cc68(0xd0,8);
  *param_2 = puVar6;
  *puVar6 = &PTR_FUN_14b4f8510;
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  uVar5 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)puVar6 + 0xc) = uVar3;
  *(undefined4 *)(puVar6 + 2) = uVar4;
  *(undefined4 *)((longlong)puVar6 + 0x14) = uVar5;
  puVar6[3] = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  pvVar2 = *(void **)(param_1 + 0x18);
  *(int *)(puVar6 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar6 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(puVar6 + 3,iVar1,0);
    memcpy((void *)puVar6[3],pvVar2,(longlong)iVar1 * 2);
  }
  puVar6[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  pvVar2 = *(void **)(param_1 + 0x28);
  *(int *)(puVar6 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar6 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(puVar6 + 5,iVar1,0);
    memcpy((void *)puVar6[5],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined2 *)((longlong)puVar6 + 0x39) = *(undefined2 *)(param_1 + 0x39);
  FUN_1404dce0c(puVar6 + 8,param_1 + 0x40);
  return puVar6 + 1;
}



// FUNCTION 143f5323e FUN_143f5323e body=29 status=ok
// SIG undefined FUN_143f5323e(void)

void FUN_143f5323e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143f5325c FUN_143f5325c body=201 status=ok
// SIG undefined FUN_143f5325c(void)

undefined8 * FUN_143f5325c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4f8510;
  FUN_1404eec70(param_1[0x17],*(undefined4 *)(param_1 + 0x18));
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_1404eecb3(param_1[0x15],*(undefined4 *)(param_1 + 0x16));
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_1404eec06(param_1 + 0x11);
  (*(code *)(&PTR_FUN_14a1842f0)[*(byte *)(param_1 + 0x10)])(param_1 + 0xc);
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f53326 FUN_143f53326 body=96 status=ok
// SIG undefined FUN_143f53326(void)

void FUN_143f53326(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (((*(int *)(param_1 + 0x3c) != 0) && (uVar1 = *(uint *)(param_1 + 0x38), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    puVar2 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar2 != (undefined8 *)0x0) && (*(int *)(puVar2 + 2) == *(int *)(param_1 + 0x3c))) &&
       ((*(uint *)(puVar2 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar2 + 1) & 0x10200000) == 0) {
        uVar3 = *puVar2;
      }
      else {
        uVar3 = 0;
      }
      FUN_143f51ba0(param_1,param_1 + 0x40,uVar3);
      return;
    }
  }
  return;
}



// FUNCTION 143f5338a FUN_143f5338a body=5 status=ok
// SIG undefined FUN_143f5338a(void)

longlong FUN_143f5338a(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 143f53390 FUN_143f53390 body=29 status=ok
// SIG undefined FUN_143f53390(void)

void FUN_143f53390(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143f533ae FUN_143f533ae body=201 status=ok
// SIG undefined FUN_143f533ae(void)

undefined8 * FUN_143f533ae(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14b4f8530;
  FUN_1404eec70(param_1[0x18],*(undefined4 *)(param_1 + 0x19));
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_1404eecb3(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_1404eec06(param_1 + 0x12);
  (*(code *)(&PTR_FUN_14a1842f0)[*(byte *)(param_1 + 0x11)])(param_1 + 0xd);
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f534fc FUN_143f534fc body=29 status=ok
// SIG undefined FUN_143f534fc(void)

undefined8 FUN_143f534fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f5352e FUN_143f5352e body=85 status=ok
// SIG undefined FUN_143f5352e(void)

void FUN_143f5352e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f85c0;
  return;
}



// FUNCTION 143f53584 FUN_143f53584 body=85 status=ok
// SIG undefined FUN_143f53584(void)

void FUN_143f53584(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f85c0;
  return;
}



// FUNCTION 143f535da FUN_143f535da body=118 status=ok
// SIG undefined FUN_143f535da(void)

void FUN_143f535da(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f85c0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f53641. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f53656 FUN_143f53656 body=16 status=ok
// SIG undefined FUN_143f53656(void)

undefined1 FUN_143f53656(void)

{
  FUN_143f53666();
  return 1;
}



// FUNCTION 143f53666 FUN_143f53666 body=231 status=ok
// SIG undefined FUN_143f53666(void)

void FUN_143f53666(void)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = "Shift";
  local_18 = 5;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
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
  plVar2 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar1,&local_20,1);
  uVar3 = (**(code **)(*plVar2 + 0x50))(plVar2);
  FUN_145d5b89c(uVar3);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f5374e FUN_143f5374e body=1249 status=ok
// SIG undefined FUN_143f5374e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f5374e(void)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined **local_c0;
  undefined8 local_b8;
  char *local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  char *local_98;
  int local_90;
  undefined1 local_8c;
  undefined8 local_88;
  undefined **local_78;
  undefined1 *local_70;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b8 = 1;
  local_c0 = &PTR_FUN_14b4f7ff0;
  local_c8 = 0;
  FUN_14282b410(L"/Script/GbxShiftExtensions",&PTR_FUN_14b4f8010,1,0);
  FUN_1446f470e(&DAT_14cb979c8,L"UNSET",1);
  DAT_14cb979f0 = 0;
  DAT_14cb979f8 = 0;
  DAT_14cb979d0 = 0;
  _DAT_14cb979d8 = 0;
  _DAT_14cb979fc = 0xffffffff00000080;
  DAT_14cb97a04 = 0;
  DAT_14cb97a10 = 0;
  DAT_14cb97a18 = 0;
  atexit(FUN_143f4ff3d);
  local_98 = "ms";
  local_90 = 2;
  local_8c = 0;
  uVar2 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb97a20 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cb97a28,L"metric_name",1);
  FUN_1446f470e(&DAT_14cb97a30,L"metric_value",1);
  FUN_1446f470e(&DAT_14cb97a38,L"metric_values",1);
  local_98 = "AssetRegistry";
  local_90 = 0xd;
  local_8c = 0;
  uVar2 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb97a48 = (ulonglong)uVar2;
  FUN_145fd9b22();
  atexit((_func_5014 *)&LAB_143f50aa4);
  local_98 = "fps_aggregate";
  local_90 = 0xd;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  FUN_14147d486(&DAT_14cb97c08,uVar3,6);
  _DAT_14cb97c08 = &PTR_FUN_14b4f8340;
  FUN_146587ea0();
  atexit((_func_5014 *)&LAB_143f50ab0);
  DAT_14cb97dd0 = 0;
  local_98 = (char *)CONCAT44(local_98._4_4_,1);
  local_c8 = CONCAT44(local_c8._4_4_,1);
  FUN_14078dbce(&DAT_14cb97dd8,L"shift.fps.gbxanalytics",&local_98,
                L"If true, shift fps data will be reported through the gbx analytics api.");
  atexit(FUN_143f50abc);
  local_88 = 0;
  local_78 = &PTR_LAB_14b4daeb0;
  local_70 = &LAB_143f53478;
  local_98 = &LAB_148a660f2;
  local_a8 = "render_sleep";
  local_a0 = 0xc;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  FUN_1412d94ec(&DAT_14cb97df0,uVar3,0x6f,&local_98);
  atexit(FUN_143f50b01);
  local_88 = 0;
  local_78 = &PTR_LAB_14b4daeb0;
  local_70 = &LAB_143f534a4;
  local_98 = &LAB_148a660f2;
  local_a8 = "render_wait_occlusion";
  local_a0 = 0x15;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  FUN_1412d94ec(&DAT_14cb97e50,uVar3,0x6f,&local_98);
  atexit(FUN_143f50b48);
  local_88 = 0;
  local_78 = &PTR_LAB_14b4daeb0;
  local_70 = &LAB_143f534d0;
  local_98 = &LAB_148a660f2;
  local_a8 = "render_wait_present";
  local_a0 = 0x13;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  FUN_1412d94ec(&DAT_14cb97eb0,uVar3,0x6f,&local_98);
  atexit(FUN_143f50b8f);
  _DAT_14cb97f18 = 0xffffff9cffffff9d;
  DAT_14cb97f20 = 0;
  _DAT_14cb97f28 = 0;
  DAT_14cb97f30 = 0;
  DAT_14cb97f38 = 0;
  _DAT_14cb97f40 = 0;
  _DAT_14cb97f48 = 0x100;
  DAT_14cb97f4c = 0x80;
  _DAT_14cb97f50 = 0x101;
  atexit(FUN_143f50bd6);
  uVar4 = FUN_145ffd894();
  local_98 = (char *)0x0;
  local_90 = 0;
  FUN_1446efa72(&local_98,0,2,0x10);
  local_90 = 2;
  *(undefined ***)local_98 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_98 + 0x10) = lVar5;
  *(undefined ***)local_98 = &PTR_FUN_14b4f85c0;
  FUN_1448b6402(uVar4,&DAT_14cb97f58,&local_98);
  if (local_90 != 0) {
    if (local_98 == (char *)0x0) goto LAB_143f53ba8;
    (*(code *)**(undefined8 **)local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90 = 0;
  }
  if (local_98 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_143f53ba8:
  local_98 = (char *)0x800000014b4f8236;
  local_a8 = (char *)CONCAT44(local_a8._4_4_,0x12);
  local_90 = FUN_14577453c();
  local_8c = 1;
  FUN_146587db8(&local_98);
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f53c35 FUN_143f53c35 body=152 status=ok
// SIG undefined FUN_143f53c35(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f53c35(void)

{
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  _DAT_14cb97f68 = 0;
  _DAT_14cb97f70 = 0;
  _DAT_14cb97f78 = 0;
  _DAT_14cb97f80 = 0;
  _DAT_14cb97f88 = 0;
  _DAT_14cb97f90 = 0;
  _DAT_14cb97f98 = 0;
  _DAT_14cb97fa0 = 0;
  _DAT_14cb97fa8 = 0xffffffff;
  _DAT_14cb97fb0 = 0;
  uRam000000014cb97fb8 = 0;
  atexit((_func_5014 *)&LAB_143f53c30);
  local_18 = 0x800000014b4f8844;
  local_10 = FUN_14577453c();
  local_c = 1;
  FUN_146015e62(&local_18);
  return;
}



// FUNCTION 143f53cd0 FUN_143f53cd0 body=55 status=ok
// SIG undefined FUN_143f53cd0(void)

void FUN_143f53cd0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb98018 == 0) {
    uVar1 = FUN_14107678f();
    DAT_14cb98018 = FUN_14171c317(FUN_14658813a,uVar1,L"EGbxBeaconStatusCode");
  }
  return;
}



// FUNCTION 143f53d07 FUN_143f53d07 body=55 status=ok
// SIG undefined FUN_143f53d07(void)

void FUN_143f53d07(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb98030 == 0) {
    uVar1 = FUN_14107678f();
    DAT_14cb98030 = FUN_14171c317(FUN_146588169,uVar1,L"EGbxBeaconPlayerStatus");
  }
  return;
}



// FUNCTION 143f53d3e FUN_143f53d3e body=55 status=ok
// SIG undefined FUN_143f53d3e(void)

void FUN_143f53d3e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb981d8 == 0) {
    uVar1 = FUN_14107678f();
    DAT_14cb981d8 = FUN_14171c317(FUN_1465889b1,uVar1,L"EDedicatedServerAuthType");
  }
  return;
}



// FUNCTION 143f53d75 FUN_143f53d75 body=55 status=ok
// SIG undefined FUN_143f53d75(void)

void FUN_143f53d75(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb981f0 == 0) {
    uVar1 = FUN_14107678f();
    DAT_14cb981f0 = FUN_14171c317(FUN_1465889e0,uVar1,L"EDedicatedServerAuthStatus");
  }
  return;
}



// FUNCTION 143f53dac FUN_143f53dac body=55 status=ok
// SIG undefined FUN_143f53dac(void)

void FUN_143f53dac(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb98208 == 0) {
    uVar1 = FUN_14107678f();
    DAT_14cb98208 = FUN_14171c317(FUN_146588a0f,uVar1,L"EDedicatedServerHostStatus");
  }
  return;
}



// FUNCTION 143f53de3 FUN_143f53de3 body=69 status=ok
// SIG undefined FUN_143f53de3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f53de3(void)

{
  _DAT_14cb98230 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143f53e25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb98238,1);
  return;
}



// FUNCTION 143f53e45 FUN_143f53e45 body=69 status=ok
// SIG undefined FUN_143f53e45(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f53e45(void)

{
  _DAT_14cb98518 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143f53e87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb98520,1);
  return;
}



// FUNCTION 143f53e8a FUN_143f53e8a body=807 status=ok
// SIG undefined FUN_143f53e8a(void)

void FUN_143f53e8a(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  ushort uVar2;
  ushort uVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined2 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(longlong *)(param_1 + 0x138) = param_2;
  if (DAT_14cadad70 == param_2) {
    if (*(char *)(param_1 + 0x99) == '\0') {
      *(undefined1 *)(param_1 + 0x99) = 1;
      FUN_148aba4d0(param_1 + 0xa0,param_1 + 0x99);
      FUN_148ab7e1e(param_1);
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      FUN_140056680(&local_40,&DAT_14c846b20);
      puVar1 = (undefined8 *)(param_1 + 0xf0);
      puVar6 = &DAT_149dfb77a;
      FUN_14020fad6(puVar1,&DAT_149dfb77a);
      puVar4 = &DAT_149dfb77a;
      if (local_38 != 0) {
        puVar4 = local_40;
      }
      local_58 = 0;
      FUN_14063337c(puVar4,L"addr=",puVar1,1);
      FUN_14020fad6(param_1 + 0xe0,&DAT_149dfb77a);
      puVar4 = &DAT_149dfb77a;
      if (local_38 != 0) {
        puVar4 = local_40;
      }
      local_58 = 0;
      FUN_14063337c(puVar4,L"region=",param_1 + 0xe0,1);
      FUN_14020fad6(param_1 + 0x100,&DAT_149dfb77a);
      puVar4 = &DAT_149dfb77a;
      if (local_38 != 0) {
        puVar4 = local_40;
      }
      local_58 = 0;
      FUN_14063337c(puVar4,L"aws_token=",param_1 + 0x100,1);
      FUN_140056680(&local_50);
      puVar4 = local_50;
      if (local_48 == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      if (*(int *)(param_1 + 0xf8) != 0) {
        puVar6 = (undefined2 *)*puVar1;
      }
      lVar5 = 0;
      while( true ) {
        uVar2 = *(ushort *)((longlong)puVar6 + lVar5);
        uVar8 = (uint)uVar2;
        uVar3 = *(ushort *)((longlong)puVar4 + lVar5);
        uVar7 = (uint)uVar3;
        if (uVar2 != uVar3) {
          if ((uVar3 | uVar2) < 0x80) {
            uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar3];
            if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_143f54136;
          }
          iVar9 = uVar8 - uVar7;
          goto LAB_143f54162;
        }
        if (uVar2 == 0) break;
LAB_143f54136:
        lVar5 = lVar5 + 2;
      }
      iVar9 = 0;
LAB_143f54162:
      if (local_50 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (iVar9 == 0) {
        FUN_14020fad6(puVar1,&DAT_149dfb77a);
        FUN_148ab7e7c(param_1);
      }
      else {
        FUN_143f54e7a(param_1);
      }
      if (local_40 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (*(char *)(param_1 + 0xb8) == '\x02') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
    }
  }
  else {
    if (DAT_14cadad78 != param_2) {
      if (DAT_14cadad80 == param_2) {
        if (*(char *)(param_1 + 0xb8) != '\x04') goto LAB_143f54188;
        *(undefined1 *)(param_1 + 0xb8) = 5;
        if (*(char *)(param_1 + 0x134) == '\0') {
          *(undefined1 *)(param_1 + 0x134) = 1;
        }
      }
      else {
        if (DAT_14cadad88 == param_2) {
          if (*(char *)(param_1 + 0xb8) != '\x05') goto LAB_143f54188;
          *(undefined1 *)(param_1 + 0xb8) = 6;
        }
        else {
          if ((DAT_14cadad10 != param_2) || (*(byte *)(param_1 + 0xb8) < 2)) goto LAB_143f54188;
          *(undefined1 *)(param_1 + 0xb8) = 7;
        }
        if (*(char *)(param_1 + 0x134) != '\0') {
          *(undefined1 *)(param_1 + 0x134) = 0;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
    }
    if (*(char *)(param_1 + 0xb8) == '\x03') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
    }
  }
LAB_143f54188:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f541e2 FUN_143f541e2 body=1513 status=ok
// SIG undefined FUN_143f541e2(void)

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_143f541e2(longlong param_1)

{
  undefined8 uVar1;
  bool bVar2;
  ulonglong uVar3;
  float fVar4;
  undefined1 auStack_5a8 [32];
  undefined8 *local_588;
  undefined1 *local_580;
  longlong *local_578;
  ulonglong *local_570;
  longlong local_568 [3];
  ulonglong local_550 [3];
  undefined1 local_538 [96];
  ulonglong local_4d8;
  ulonglong local_4c8;
  float local_4ac;
  undefined4 local_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined1 local_488;
  undefined1 local_480 [16];
  longlong local_470;
  undefined1 local_460 [32];
  byte local_440;
  undefined4 local_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined1 local_418;
  undefined1 local_410 [16];
  longlong local_400;
  undefined1 local_3f0 [32];
  byte local_3d0;
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined1 local_3a8;
  longlong local_3a0;
  char local_398;
  longlong local_390;
  undefined1 local_380 [32];
  byte local_360;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  longlong local_348;
  undefined1 local_338 [32];
  byte local_318;
  undefined1 local_310 [32];
  longlong local_2f0;
  undefined4 local_2e8;
  longlong local_2e0;
  undefined4 local_2d8;
  undefined1 local_2c8 [152];
  undefined1 local_230 [8];
  undefined1 local_228;
  undefined1 local_220 [16];
  undefined1 local_210 [64];
  undefined1 local_1d0 [8];
  undefined1 local_1c8;
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [64];
  undefined1 local_170 [8];
  undefined1 local_168;
  undefined1 local_160 [16];
  undefined1 local_150 [64];
  undefined1 local_110 [8];
  undefined1 local_108;
  undefined1 local_100 [16];
  undefined1 local_f0 [64];
  undefined1 local_b0 [8];
  undefined1 local_a8;
  undefined1 local_a0 [16];
  undefined1 local_90 [64];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_5a8;
  fVar4 = (float)(*(double *)(param_1 + 0x58) / (double)*(int *)(param_1 + 0x60));
  local_4ac = fVar4;
  FUN_1405d5a96(local_538);
  local_550[1] = 0;
  local_550[2] = 0;
  FUN_148aba3c6(local_a0,local_550 + 1);
  local_a8 = 0;
  FUN_1400b22c2(&local_358,"Server.FrameRate.Avg");
  local_588 = (undefined8 *)local_b0;
  local_580 = local_a0;
  FUN_1470b2fc2(local_90,&local_358,(double)fVar4,1);
  FUN_1470b36bb(local_90);
  if (CONCAT44(uStack_354,local_358) != 0) {
    FUN_1400020a8();
  }
  FUN_148aba3c6(local_100,local_550 + 1);
  local_108 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  FUN_1400b22c2(&local_358,"Server.FrameRate.Min");
  local_588 = (undefined8 *)local_110;
  local_580 = local_100;
  FUN_1470b2fc2(local_f0,&local_358,uVar1,1);
  FUN_1470b36bb(local_f0);
  if (CONCAT44(uStack_354,local_358) != 0) {
    FUN_1400020a8();
  }
  FUN_148aba3c6(local_160,local_550 + 1);
  local_168 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  FUN_1400b22c2(&local_358,"Server.FrameRate.Max");
  local_588 = (undefined8 *)local_170;
  local_580 = local_160;
  FUN_1470b2fc2(local_150,&local_358,uVar1,1);
  FUN_1470b36bb(local_150);
  if (CONCAT44(uStack_354,local_358) != 0) {
    FUN_1400020a8();
  }
  FUN_148aba3c6(local_1c0,local_550 + 1);
  local_1c8 = 0;
  uVar3 = local_4d8 >> 10;
  FUN_1400b22c2(&local_358,"Server.Memory.PeakUsedPhysicalKB");
  local_588 = (undefined8 *)local_1d0;
  local_580 = local_1c0;
  FUN_1470b2fc2(local_1b0,&local_358,(double)uVar3,1);
  FUN_1470b36bb(local_1b0);
  if (CONCAT44(uStack_354,local_358) != 0) {
    FUN_1400020a8();
  }
  FUN_148aba3c6(local_220,local_550 + 1);
  local_228 = 0;
  uVar3 = local_4c8 >> 10;
  FUN_1400b22c2(&local_358,"Server.Memory.PeakUsedVirtualKB");
  local_588 = (undefined8 *)local_230;
  local_580 = local_220;
  FUN_1470b2fc2(local_210,&local_358,(double)uVar3,1);
  FUN_1470b36bb(local_210);
  if (CONCAT44(uStack_354,local_358) != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_358,&DAT_149dfb77a);
  local_588 = (undefined8 *)&local_3c8;
  local_3c8 = local_358;
  uStack_3c4 = uStack_354;
  uStack_3c0 = uStack_350;
  uStack_3bc = uStack_34c;
  local_3a8 = 4;
  FUN_140d767d6(&local_3a0,&DAT_14cb982d0,3,&DAT_149dfb77a);
  if ((*(longlong *)(local_3a0 + 0x3c) == 0) || (*(char *)(local_3a0 + 0x38) < local_398)) {
    FUN_140056680(&local_358,&DAT_149dfb77a);
    local_588 = (undefined8 *)&local_4a8;
    local_4a8 = local_358;
    uStack_4a4 = uStack_354;
    uStack_4a0 = uStack_350;
    uStack_49c = uStack_34c;
    local_488 = 4;
    FUN_140d767d6(local_480,&DAT_14cb982d0,3,&DAT_149dfb77a);
    FUN_140d76846(&local_358,local_480);
    bVar2 = false;
  }
  else {
    local_550[0] = local_4c8 >> 10;
    local_568[2] = local_4d8 >> 10;
    local_568[0] = 0;
    local_568[1] = 0;
    FUN_140056680(&local_358,&DAT_149dfb77a);
    local_588 = (undefined8 *)&local_438;
    local_438 = local_358;
    uStack_434 = uStack_354;
    uStack_430 = uStack_350;
    uStack_42c = uStack_34c;
    local_418 = 4;
    FUN_140d767d6(local_410,&DAT_14cb982d0,3,&DAT_149dfb77a);
    local_588 = (undefined8 *)(param_1 + 0x48);
    local_580 = (undefined1 *)(param_1 + 0x50);
    local_578 = local_568 + 2;
    local_570 = local_550;
    FUN_148ab7cd7(&local_358,local_410,local_568,&local_4ac);
    bVar2 = true;
  }
  FUN_14027c224(local_2c8,&local_358);
  FUN_14027c198(local_2c8);
  FUN_1404eec70(local_2e0,local_2d8);
  if (local_2e0 != 0) {
    FUN_1400020a8();
  }
  FUN_1404eecb3(local_2f0,local_2e8);
  if (local_2f0 != 0) {
    FUN_1400020a8();
  }
  FUN_1404eec06(local_310);
  (*(code *)(&PTR_FUN_14a1842f0)[local_318])(local_338);
  if (local_348 != 0) {
    FUN_1400020a8();
  }
  if (bVar2) {
    (*(code *)(&PTR_FUN_14a1842f0)[local_3d0])(local_3f0);
    local_470 = local_568[0];
    if (local_400 != 0) {
      FUN_1400020a8();
      local_470 = local_568[0];
    }
  }
  else {
    (*(code *)(&PTR_FUN_14a1842f0)[local_440])(local_460);
  }
  if (local_470 != 0) {
    FUN_1400020a8();
  }
  (*(code *)(&PTR_FUN_14a1842f0)[local_360])(local_380);
  if (local_390 != 0) {
    FUN_1400020a8();
  }
  FUN_1470b6b15(0,0);
  if ((local_50 ^ (ulonglong)auStack_5a8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f547cc FUN_143f547cc body=179 status=ok
// SIG undefined FUN_143f547cc(void)

void FUN_143f547cc(longlong param_1,byte param_2)

{
  char cVar1;
  uint uVar2;
  char cVar3;
  longlong *plVar4;
  
  cVar1 = *(char *)(param_1 + 0xb8);
  *(byte *)(param_1 + 0xb8) = param_2;
  cVar3 = '\x01';
  if (param_2 < 8) {
    cVar3 = (char)(0x10101010001 >> (param_2 * '\b' & 0x3f));
  }
  if (cVar3 != *(char *)(param_1 + 0x134)) {
    *(char *)(param_1 + 0x134) = cVar3;
  }
  if ((((cVar1 == '\0') && (*(int *)(param_1 + 0x2c) != 0)) &&
      (uVar2 = *(uint *)(param_1 + 0x28), -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)(param_1 + 0x2c))) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
      FUN_1415aa586(*plVar4 + 0x200,&DAT_14cb98530);
    }
  }
  FUN_143f54880(param_1);
  return;
}



// FUNCTION 143f54880 FUN_143f54880 body=1059 status=ok
// SIG undefined FUN_143f54880(void)

void FUN_143f54880(longlong param_1)

{
  uint uVar1;
  void *_Src;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  uint uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined2 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 *puStack_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(char *)(param_1 + 0x128) == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_c8);
  }
  *(undefined1 *)(param_1 + 0x128) = 1;
  lVar4 = FUN_140773fe2();
  if (((lVar4 == 0) || (*(char *)(param_1 + 0x99) != '\x03')) ||
     (*(longlong *)(param_1 + 0x110) == 0)) goto LAB_143f54907;
  local_70 = 0xffffffff00000000;
  local_78 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  puStack_48 = (undefined8 *)0x0;
  local_40 = 0;
  uVar1 = *(uint *)(param_1 + 0xf8);
  if ((int)uVar1 < 2) {
    FUN_140056680(&local_98,L"127.0.0.1");
  }
  else {
    local_98 = (void *)0x0;
    _Src = *(void **)(param_1 + 0xf0);
    uStack_90 = uVar1;
    FUN_1446dd670(&local_98,(ulonglong)uVar1,0);
    memcpy(local_98,_Src,(ulonglong)uVar1 * 2);
  }
  local_68 = *(undefined2 *)(param_1 + 0xd8);
  local_88 = (undefined4)local_98;
  uStack_84 = local_98._4_4_;
  uStack_80 = uStack_90;
  uStack_7c = uStack_8c;
  iVar3 = *(int *)(param_1 + 0xe8) + -1;
  if (*(int *)(param_1 + 0xe8) == 0) {
    iVar3 = 0;
  }
  FUN_1402980a2(&local_60,*(undefined8 *)(param_1 + 0xe0),iVar3);
  local_50 = 0x10;
  if (local_40 != 3) {
    FUN_1446efa72(&puStack_48,0,3,0x10);
    local_40 = 3;
  }
  puVar2 = puStack_48;
  *puStack_48 = &PTR_LAB_14b4fe830;
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
  puStack_48[2] = lVar5;
  *puStack_48 = &PTR_FUN_14b4fe7c0;
  puStack_48[3] = 0;
  if (param_1 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0xc);
    *(uint *)(puStack_48 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar3 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar3 = *(int *)(lVar4 + 0x10);
      bVar7 = iVar3 == 0;
      if (bVar7) {
        *(int *)(lVar4 + 0x10) = iVar6;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar7) {
        iVar3 = iVar6;
      }
    }
  }
  *(int *)((longlong)puVar2 + 0x1c) = iVar3;
  puVar2[4] = &LAB_143f5645a;
  *(undefined1 *)(param_1 + 0x129) = 1;
  local_a8 = (undefined8 *)0x0;
  local_a0 = 0;
  FUN_1446efa72(&local_a8,0,3,0x10);
  puVar2 = local_a8;
  local_a0 = 3;
  *local_a8 = &PTR_LAB_14b4fe910;
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
  local_a8[2] = lVar5;
  *local_a8 = &PTR_FUN_14b4fe8a0;
  local_a8[3] = 0;
  iVar3 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_a8 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar3 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar3 = *(int *)(lVar4 + 0x10);
      bVar7 = iVar3 == 0;
      if (bVar7) {
        *(int *)(lVar4 + 0x10) = iVar6;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar7) {
        iVar3 = iVar6;
      }
    }
  }
  *(int *)((longlong)puVar2 + 0x1c) = iVar3;
  puVar2[4] = FUN_143f5649e;
  FUN_148a61ac5(*(undefined8 *)(param_1 + 0x110),&local_88,&local_a8);
  if (local_40 == 0) {
LAB_143f54bc4:
    if (puStack_48 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (puStack_48 != (undefined8 *)0x0) {
    (**(code **)*puStack_48)(puStack_48,0);
    FUN_1446efa72(&puStack_48,0,0,0x10);
    local_40 = 0;
    goto LAB_143f54bc4;
  }
  FUN_148a630ba(&local_88);
LAB_143f54907:
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f54cbe FUN_143f54cbe body=443 status=ok
// SIG undefined FUN_143f54cbe(void)

void FUN_143f54cbe(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  undefined1 auStack_98 [40];
  undefined8 *local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(char *)(param_1 + 0x128) == '\x01') {
    *(undefined1 *)(param_1 + 0x128) = 0;
    lVar5 = FUN_140773fe2();
    if (lVar5 != 0) {
      if ((DAT_14c86a9f8 == '\x01') &&
         (iVar1 = *(int *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0xc60), iVar1 != 2)) {
        if (iVar1 != 1) goto LAB_143f54d39;
        DVar3 = FUN_140ad26c0();
        DVar4 = GetCurrentThreadId();
        if (DVar3 != DVar4) goto LAB_143f54d39;
      }
      if (*(longlong *)(param_1 + 0x110) != 0) {
        local_70 = (undefined8 *)0x0;
        local_68 = 0;
        FUN_1446efa72(&local_70,0,2,0x10);
        local_68 = 2;
        *local_70 = &PTR_LAB_14b4fe910;
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
        local_70[2] = lVar6;
        *local_70 = &PTR_FUN_14b4fe9f0;
        local_70[3] = param_1;
        FUN_148a622b4(*(undefined8 *)(param_1 + 0x110),0,&local_70);
        if ((DAT_14cb98550 & 1) == 0) {
          fVar7 = 10.0;
          do {
            FUN_14000f986(0x3dcccccd);
            FUN_140185c36(lVar5,0x3dcccccd);
            fVar7 = fVar7 + -0.1;
            if ((DAT_14cb98550 & 1) != 0) break;
          } while (0.0 < fVar7);
        }
      }
    }
  }
LAB_143f54d39:
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f54e7a FUN_143f54e7a body=3782 status=ok
// SIG undefined FUN_143f54e7a(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_143f54e7a(longlong param_1)

{
  int *piVar1;
  char *pcVar2;
  void *_Src;
  byte *pbVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *******ppppppplVar8;
  longlong ******pppppplVar9;
  longlong *****ppppplVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  int iVar14;
  int iVar15;
  undefined2 *puVar16;
  longlong lVar17;
  int iVar18;
  bool bVar19;
  undefined1 auStack_178 [32];
  longlong ******local_158;
  longlong *******local_150;
  undefined1 local_148;
  longlong *****local_138;
  int local_130;
  longlong *****local_128;
  int local_120;
  longlong *******local_118;
  undefined8 local_110;
  undefined2 local_108;
  undefined1 local_106;
  undefined8 local_100;
  wchar_t *local_f8;
  undefined4 local_f0;
  longlong local_e8;
  longlong *local_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  longlong *****local_c8;
  undefined8 uStack_c0;
  longlong *******local_b8;
  ulonglong uStack_b0;
  undefined2 *local_a8;
  undefined8 uStack_a0;
  longlong ******local_98;
  undefined8 uStack_90;
  longlong ******local_88;
  ulonglong uStack_80;
  longlong ******local_78;
  undefined8 uStack_70;
  longlong *******local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  pcVar2 = (char *)(param_1 + 0x99);
  if (*(char *)(param_1 + 0x99) != '\x02') {
    *(undefined1 *)(param_1 + 0x99) = 2;
    FUN_148aba4d0(param_1 + 0xa0,pcVar2);
  }
  if (*(int *)(param_1 + 0xf8) + 0x7fffffffU < 0x80000007) {
    FUN_1446f470e(&local_68,L"WINDOWS",1);
    plVar7 = (longlong *)FUN_140272950(&local_68);
    if (plVar7 != (longlong *)0x0) {
      local_a8 = (undefined2 *)((ulonglong)local_a8 & 0xffffffffffffff00);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c872ef8) && (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1))
      {
        FUN_1459825b0(&DAT_14c872ee0);
        atexit(FUN_1427868a5);
        _Init_thread_footer(&DAT_14c872ef8);
      }
      (**(code **)(*plVar7 + 0xe0))(plVar7,&local_68,&DAT_14c872ee0,&local_a8);
      cVar5 = (*(code *)(*local_68)[0x13])();
      if (cVar5 == '\0') {
        FUN_140056680(&local_78,&DAT_149dfb77a);
      }
      else {
        (*(code *)(*local_68)[0x10])(local_68,&local_78,0);
      }
      if ((int)uStack_70 < 2) {
        local_88 = (longlong ******)0x0;
        uStack_80 = 0;
        (**(code **)(*plVar7 + 200))(plVar7,&local_88);
        if ((int)uStack_80 < 1) {
          FUN_140056680(&local_98,&DAT_149dfb77a);
        }
        else {
          (*(code *)(**local_88)[0x10])(*local_88,&local_98,0);
        }
        if (local_78 != (longlong ******)0x0) {
          FUN_1400020a8();
        }
        local_78 = local_98;
        uStack_70 = uStack_90;
        FUN_146b12a16(local_88,uStack_80 & 0xffffffff);
        if (local_88 != (longlong ******)0x0) {
          FUN_1400020a8();
        }
        if (1 < (int)uStack_70) goto LAB_143f54fab;
      }
      else {
LAB_143f54fab:
        FUN_1402980a2((undefined8 *)(param_1 + 0xf0),local_78,(int)uStack_70 + -1);
      }
      if (local_78 != (longlong ******)0x0) {
        FUN_1400020a8();
      }
      plVar7 = uStack_60;
      if (uStack_60 != (longlong *)0x0) {
        LOCK();
        plVar11 = uStack_60 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
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
    }
  }
  if (*(int *)(param_1 + 0xe8) < 2) {
    FUN_1400b22c2(&local_68,"us-east-1");
    if ((longlong ********)(param_1 + 0xe0) == &local_68) {
      if (local_68 != (longlong *******)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0xe0) != 0) {
        FUN_1400020a8();
      }
      *(longlong ********)(param_1 + 0xe0) = local_68;
      local_68 = (longlong *******)0x0;
      *(int *)(param_1 + 0xe8) = (int)uStack_60;
      *(undefined4 *)(param_1 + 0xec) = uStack_60._4_4_;
    }
  }
  *(undefined4 *)(param_1 + 0xd8) = 0xffffffff;
  plVar7 = (longlong *)FUN_140773fe2();
  if ((plVar7 == (longlong *)0x0) || (*(char *)(param_1 + 0x98) != '\0')) goto LAB_143f558e6;
  local_78 = (longlong ******)0x0;
  uStack_70 = 0;
  local_88 = (longlong ******)0x0;
  uStack_80 = 0;
  local_98 = (longlong ******)0x0;
  uStack_90 = 0;
  local_a8 = (undefined2 *)0x0;
  uStack_a0 = 0;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  local_158 = (longlong ******)0x0;
  FUN_14063337c(&DAT_14c846b20,L"-AUTH_FILE=",&local_a8,1);
  if ((int)uStack_a0 < 2) {
    local_68 = (longlong *******)0x0;
    uStack_60 = (longlong *)0x0;
    local_b8 = (longlong *******)0x0;
    uStack_b0 = 0;
    local_c8 = (longlong *****)0x0;
    uStack_c0 = 0;
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    local_158 = (longlong ******)0x0;
    FUN_14063337c(&DAT_14c846b20,L"AUTH_TYPE=",&local_68,1);
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    local_158 = (longlong ******)0x0;
    FUN_14063337c(&DAT_14c846b20,L"AUTH_LOGIN=",&local_b8,1);
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    local_158 = (longlong ******)0x0;
    FUN_14063337c(&DAT_14c846b20,L"AUTH_PASSWORD=",&local_c8,1);
    ppppppplVar8 = (longlong *******)&local_68;
    iVar15 = (int)uStack_60;
    if ((int)uStack_60 < 2) {
      ppppppplVar8 = &local_78;
      iVar15 = (int)uStack_70;
    }
    iVar14 = 0;
    iVar18 = iVar15 + -1;
    if (iVar15 == 0) {
      iVar18 = iVar14;
    }
    FUN_1402980a2(&local_78,*ppppppplVar8,iVar18);
    ppppppplVar8 = (longlong *******)&local_b8;
    iVar15 = (int)uStack_b0;
    if ((int)uStack_b0 < 2) {
      ppppppplVar8 = &local_88;
      iVar15 = (int)uStack_80;
    }
    iVar18 = iVar15 + -1;
    if (iVar15 == 0) {
      iVar18 = iVar14;
    }
    FUN_1402980a2(&local_88,*ppppppplVar8,iVar18);
    pppppplVar9 = &local_c8;
    iVar15 = (int)uStack_c0;
    if ((int)uStack_c0 < 2) {
      pppppplVar9 = (longlong ******)&local_98;
      iVar15 = (int)uStack_90;
    }
    iVar18 = iVar15 + -1;
    if (iVar15 == 0) {
      iVar18 = iVar14;
    }
    FUN_1402980a2(&local_98,*pppppplVar9,iVar18);
    if (local_c8 != (longlong *****)0x0) {
      FUN_1400020a8();
    }
    ppppppplVar8 = local_68;
    if (local_b8 != (longlong *******)0x0) {
      FUN_1400020a8();
      ppppppplVar8 = local_68;
    }
  }
  else {
    if ((((((*(int *)(param_1 + 0x2c) == 0) || (uVar6 = *(uint *)(param_1 + 0x28), (int)uVar6 < 0))
          || (DAT_14c9647dc <= (int)uVar6)) ||
         ((plVar11 = (longlong *)
                     ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
          plVar11 == (longlong *)0x0 || ((int)plVar11[2] != *(int *)(param_1 + 0x2c))))) ||
        (((*(uint *)(plVar11 + 1) & 0x10200000) != 0 ||
         ((*plVar11 == 0 || (lVar17 = *(longlong *)(*plVar11 + 0x1e0), lVar17 == 0)))))) ||
       (lVar17 = *(longlong *)(lVar17 + 0x30), lVar17 == 0)) {
      FUN_140056680(&local_b8,&DAT_149dfb77a);
    }
    else {
      local_b8 = (longlong *******)0x0;
      uVar6 = *(uint *)(lVar17 + 0x1c8);
      _Src = *(void **)(lVar17 + 0x1c0);
      uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar6);
      if ((longlong)(int)uVar6 == 0) {
        uStack_b0 = (ulonglong)uVar6;
      }
      else {
        FUN_1446dd670(&local_b8,uVar6,0);
        memcpy(local_b8,_Src,(longlong)(int)uVar6 * 2);
      }
    }
    puVar16 = &DAT_149dfb77a;
    if ((int)uStack_a0 != 0) {
      puVar16 = local_a8;
    }
    ppppppplVar8 = (longlong *******)&DAT_149dfb77a;
    if ((int)uStack_b0 != 0) {
      ppppppplVar8 = local_b8;
    }
    FUN_140002266(&local_c8,L"%ls%ls",ppppppplVar8,puVar16);
    local_d8 = 0;
    uStack_d0 = 0;
    ppppplVar10 = (longlong *****)&DAT_149dfb77a;
    if ((int)uStack_c0 != 0) {
      ppppplVar10 = local_c8;
    }
    cVar5 = FUN_14158b496(&local_d8,ppppplVar10,0);
    uVar4 = uStack_d0;
    if (cVar5 != '\0') {
      lVar17 = (longlong)(int)uStack_d0;
      uVar6 = (int)uStack_d0 + 1;
      uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar6);
      if (uStack_d0._4_4_ < uVar6) {
        FUN_1447403be(&local_d8,uVar4 & 0xffffffff);
      }
      *(undefined1 *)(local_d8 + lVar17) = 0;
      local_58 = 0;
      local_68 = (longlong *******)0x0;
      uStack_60 = (longlong *)0x0;
      local_50 = 0xf;
      FUN_1401d7cf8(&local_68,local_d8);
      local_f8 = L"UnspecifiedFile";
      local_f0 = 0xf;
      local_108 = 0;
      local_106 = 0;
      local_100 = 0;
      local_118 = (longlong *******)&local_68;
      if (0xf < local_50) {
        local_118 = local_68;
      }
      local_110 = local_58;
      FUN_141183efe(&local_e8,&local_118,&local_108,&local_f8);
      if (local_e8 == 0) {
        puVar13 = &DAT_14c9a1308;
      }
      else {
        puVar13 = (undefined8 *)FUN_1446e60f4(local_e8,&DAT_14cb98538);
      }
      pbVar3 = (byte *)*puVar13;
      if ((pbVar3 == (byte *)0x0) || ((*pbVar3 & 3) != 1)) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(undefined8 *)(pbVar3 + 8);
      }
      FUN_1400b22c2(&local_118,uVar12);
      if (local_e8 == 0) {
        puVar13 = &DAT_14c9a1308;
      }
      else {
        puVar13 = (undefined8 *)FUN_1446e60f4(local_e8,&DAT_14cb98540);
      }
      pbVar3 = (byte *)*puVar13;
      if ((pbVar3 == (byte *)0x0) || ((*pbVar3 & 3) != 1)) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(undefined8 *)(pbVar3 + 8);
      }
      FUN_1400b22c2(&local_128,uVar12);
      if (local_e8 == 0) {
        puVar13 = &DAT_14c9a1308;
      }
      else {
        puVar13 = (undefined8 *)FUN_1446e60f4(local_e8,&DAT_14cb98548);
      }
      pbVar3 = (byte *)*puVar13;
      iVar15 = 0;
      if ((pbVar3 == (byte *)0x0) || ((*pbVar3 & 3) != 1)) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(undefined8 *)(pbVar3 + 8);
      }
      FUN_1400b22c2(&local_138,uVar12);
      ppppppplVar8 = (longlong *******)&local_118;
      iVar18 = (int)local_110;
      if ((int)local_110 < 2) {
        ppppppplVar8 = &local_78;
        iVar18 = (int)uStack_70;
      }
      iVar14 = iVar18 + -1;
      if (iVar18 == 0) {
        iVar14 = iVar15;
      }
      FUN_1402980a2(&local_78,*ppppppplVar8,iVar14);
      pppppplVar9 = &local_128;
      if (local_120 < 2) {
        pppppplVar9 = (longlong ******)&local_88;
        local_120 = (int)uStack_80;
      }
      iVar18 = local_120 + -1;
      if (local_120 == 0) {
        iVar18 = iVar15;
      }
      FUN_1402980a2(&local_88,*pppppplVar9,iVar18);
      pppppplVar9 = &local_138;
      if (local_130 < 2) {
        pppppplVar9 = (longlong ******)&local_98;
        local_130 = (int)uStack_90;
      }
      iVar18 = local_130 + -1;
      if (local_130 == 0) {
        iVar18 = iVar15;
      }
      FUN_1402980a2(&local_98,*pppppplVar9,iVar18);
      if (local_138 != (longlong *****)0x0) {
        FUN_1400020a8();
      }
      if (local_128 != (longlong *****)0x0) {
        FUN_1400020a8();
      }
      if (local_118 != (longlong *******)0x0) {
        FUN_1400020a8();
      }
      if (local_e0 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_e0 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
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
      FUN_1401d9a90(&local_68);
    }
    if (local_d8 != 0) {
      FUN_1400020a8();
    }
    ppppppplVar8 = local_b8;
    if (local_c8 != (longlong *****)0x0) {
      FUN_1400020a8();
      ppppppplVar8 = local_b8;
    }
  }
  if (ppppppplVar8 != (longlong *******)0x0) {
    FUN_1400020a8();
  }
  if ((1 < (int)uStack_80) && (1 < (int)uStack_90)) {
    if (*(char *)(param_1 + 0x98) != '\x01') {
      *(undefined1 *)(param_1 + 0x98) = 1;
    }
    local_68 = (longlong *******)0x0;
    uStack_60 = (longlong *)((ulonglong)uStack_60 & 0xffffffff00000000);
    FUN_1446efa72(&local_68,0,3,0x10);
    ppppppplVar8 = local_68;
    uStack_60 = (longlong *)CONCAT44(uStack_60._4_4_,3);
    *local_68 = (longlong ******)&PTR_LAB_14b4fea80;
    LOCK();
    UNLOCK();
    pppppplVar9 = (longlong ******)(DAT_14c758608 + 1);
    lVar17 = DAT_14c758608 + 1;
    if (pppppplVar9 == (longlong ******)0x0) {
      LOCK();
      UNLOCK();
      pppppplVar9 = (longlong ******)(DAT_14c758608 + 2);
      lVar17 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar17;
    local_68[2] = pppppplVar9;
    *local_68 = (longlong ******)&PTR_FUN_14b4fe6e0;
    local_68[3] = (longlong ******)0x0;
    iVar15 = 0;
    if (param_1 != 0) {
      uVar6 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_68 + 3) = uVar6;
      if ((int)uVar6 < DAT_14c9647dc) {
        lVar17 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
      }
      else {
        lVar17 = 0;
      }
      iVar15 = *(int *)(lVar17 + 0x10);
      if (*(int *)(lVar17 + 0x10) == 0) {
        LOCK();
        iVar15 = DAT_14c964868 + 1;
        UNLOCK();
        iVar18 = DAT_14c964868 + 1;
        bVar19 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar15;
        if (bVar19) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).")
          ;
        }
        LOCK();
        iVar15 = *(int *)(lVar17 + 0x10);
        bVar19 = iVar15 == 0;
        if (bVar19) {
          *(int *)(lVar17 + 0x10) = iVar18;
          iVar15 = 0;
        }
        UNLOCK();
        if (bVar19) {
          iVar15 = iVar18;
        }
      }
    }
    *(int *)((longlong)ppppppplVar8 + 0x1c) = iVar15;
    ppppppplVar8[4] = (longlong ******)FUN_143f56048;
    if (*(int *)(param_1 + 0x2c) == 0) {
LAB_143f55b85:
      uVar12 = 0;
    }
    else {
      uVar6 = *(uint *)(param_1 + 0x28);
      uVar12 = 0;
      if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c9647dc)) {
        puVar13 = (undefined8 *)
                  ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
        if ((puVar13 == (undefined8 *)0x0) ||
           ((*(int *)(puVar13 + 2) != *(int *)(param_1 + 0x2c) ||
            ((*(uint *)(puVar13 + 1) & 0x10200000) != 0)))) goto LAB_143f55b85;
        uVar12 = *puVar13;
      }
    }
    local_158 = (longlong ******)&local_98;
    local_148 = 1;
    local_150 = (longlong *******)&local_68;
    (**(code **)(*plVar7 + 0x2a0))(plVar7,0,uVar12,&local_88);
  }
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != (longlong ******)0x0) {
    FUN_1400020a8();
  }
  if (local_88 != (longlong ******)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (longlong ******)0x0) {
    FUN_1400020a8();
  }
LAB_143f558e6:
  plVar7 = (longlong *)FUN_140773fe2();
  if ((plVar7 != (longlong *)0x0) && (*(char *)(param_1 + 0x98) == '\0')) {
    local_68 = (longlong *******)0x0;
    uStack_60 = (longlong *)0x0;
    FUN_140f7cb10(&local_68,L"../../../gbxgamelift.txt",0,0);
    if (1 < (int)uStack_60) {
      if (*(int *)(param_1 + 0xf8) == 0) {
        puVar16 = &DAT_149dfb77a;
      }
      else {
        puVar16 = *(undefined2 **)(param_1 + 0xf0);
      }
      FUN_140002266(&local_78,L"%ls:%d",puVar16,*(undefined4 *)(param_1 + 0xd8));
      if (*(char *)(param_1 + 0x98) != '\x02') {
        *(undefined1 *)(param_1 + 0x98) = 2;
      }
      local_88 = (longlong ******)0x0;
      uStack_80 = uStack_80 & 0xffffffff00000000;
      FUN_1446efa72(&local_88,0,3,0x10);
      pppppplVar9 = local_88;
      uStack_80 = CONCAT44(uStack_80._4_4_,3);
      *local_88 = (longlong *****)&PTR_LAB_14b4daf00;
      LOCK();
      UNLOCK();
      ppppplVar10 = (longlong *****)(DAT_14c758608 + 1);
      lVar17 = DAT_14c758608 + 1;
      if (ppppplVar10 == (longlong *****)0x0) {
        LOCK();
        UNLOCK();
        ppppplVar10 = (longlong *****)(DAT_14c758608 + 2);
        lVar17 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar17;
      local_88[2] = ppppplVar10;
      *local_88 = (longlong *****)&PTR_FUN_14b4fe750;
      local_88[3] = (longlong *****)0x0;
      iVar15 = 0;
      if (param_1 != 0) {
        uVar6 = *(uint *)(param_1 + 0xc);
        *(uint *)(local_88 + 3) = uVar6;
        if ((int)uVar6 < DAT_14c9647dc) {
          lVar17 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
        }
        else {
          lVar17 = 0;
        }
        iVar15 = *(int *)(lVar17 + 0x10);
        if (*(int *)(lVar17 + 0x10) == 0) {
          LOCK();
          iVar15 = DAT_14c964868 + 1;
          UNLOCK();
          iVar18 = DAT_14c964868 + 1;
          bVar19 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar15;
          if (bVar19) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar18);
          }
          LOCK();
          iVar15 = *(int *)(lVar17 + 0x10);
          bVar19 = iVar15 == 0;
          if (bVar19) {
            *(int *)(lVar17 + 0x10) = iVar18;
            iVar15 = 0;
          }
          UNLOCK();
          if (bVar19) {
            iVar15 = iVar18;
          }
        }
      }
      *(int *)((longlong)pppppplVar9 + 0x1c) = iVar15;
      pppppplVar9[4] = (longlong *****)FUN_143f56164;
      FUN_1400b22c2(&local_98,"gamelift");
      local_158 = (longlong ******)&local_88;
      (**(code **)(*plVar7 + 0x2c0))(plVar7,&local_98,&local_78,&local_68);
      if (local_98 != (longlong ******)0x0) {
        FUN_1400020a8();
      }
      if (local_78 != (longlong ******)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_68 != (longlong *******)0x0) {
      FUN_1400020a8();
    }
  }
  if (*(char *)(param_1 + 0x98) == '\0') {
    if (*pcVar2 != '\x04') {
      *(undefined1 *)(param_1 + 0x99) = 4;
      FUN_148aba4d0(param_1 + 0xa0,pcVar2);
    }
    FUN_148ab8508(param_1);
  }
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f55d42 FUN_143f55d42 body=267 status=ok
// SIG undefined FUN_143f55d42(void)

void FUN_143f55d42(longlong param_1,longlong param_2,undefined8 *param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_4 == '\0') {
    FUN_143f54e7a(param_1);
  }
  else {
    (**(code **)(*(longlong *)*param_3 + 0x60))((longlong *)*param_3,&local_38);
    FUN_140b127b8(&local_38,&DAT_149e01f72,1,1);
    iVar4 = local_30 + -1;
    if (local_30 == 0) {
      iVar4 = 0;
    }
    if (6 < iVar4) {
      FUN_1402980a2(param_1 + 0xf0,local_38);
    }
    FUN_148ab80f4(param_1);
    if (local_38 != 0) {
      FUN_1400020a8();
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



// FUNCTION 143f55e4e FUN_143f55e4e body=260 status=ok
// SIG undefined FUN_143f55e4e(void)

void FUN_143f55e4e(longlong param_1,longlong param_2,undefined8 *param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_4 == '\0') {
    FUN_143f54e7a(param_1);
  }
  else {
    (**(code **)(*(longlong *)*param_3 + 0x60))((longlong *)*param_3,&local_38);
    FUN_140b127b8(&local_38,&DAT_149e01f72,1,1);
    if (1 < local_30) {
      FUN_1402980a2(param_1 + 0x100,local_38,local_30 + -1);
    }
    FUN_148ab830a(param_1);
    if (local_38 != 0) {
      FUN_1400020a8();
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



// FUNCTION 143f55f54 FUN_143f55f54 body=243 status=ok
// SIG undefined FUN_143f55f54(void)

void FUN_143f55f54(longlong param_1,longlong param_2,undefined8 *param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_4 != '\0') {
    (**(code **)(*(longlong *)*param_3 + 0x60))((longlong *)*param_3,&local_38);
    FUN_140b127b8(&local_38,&DAT_149e01f72,1,1);
    if (1 < local_30) {
      FUN_1402980a2(param_1 + 0xe0,local_38,local_30 + -1);
    }
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_143f54e7a(param_1);
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



// FUNCTION 143f56048 FUN_143f56048 body=267 status=ok
// SIG undefined FUN_143f56048(void)

void FUN_143f56048(longlong param_1,int param_2,longlong param_3,char param_4)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_40;
  code *local_38;
  undefined8 **local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = FUN_140773fe2();
  if (lVar1 != 0 && param_2 == 0) {
    if (param_4 != '\x01' || param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
    }
    local_58 = 0;
    uStack_50 = 0;
    local_30 = &local_40;
    local_38 = FUN_143f00bd4;
    local_40 = &local_58;
    bifrost::users::displayName(*(undefined4 *)(param_3 + 0x248));
    if ((longlong *)(param_1 + 0x118) == &local_58) {
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x118) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x118) = local_58;
      local_58 = 0;
      *(undefined4 *)(param_1 + 0x120) = (undefined4)uStack_50;
      *(undefined4 *)(param_1 + 0x124) = uStack_50._4_4_;
    }
    *(longlong *)(param_1 + 0x110) = param_3;
    FUN_143f561ba(param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f56164 FUN_143f56164 body=85 status=ok
// SIG undefined FUN_143f56164(void)

void FUN_143f56164(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_140773fe2();
  if (lVar1 == 0) {
    return;
  }
  if (param_3 == '\x01' && param_2 != 0) {
    *(longlong *)(param_1 + 0x110) = param_2;
    FUN_143f561ba(param_1);
    return;
  }
  FUN_143f5622a(param_1);
  return;
}



// FUNCTION 143f561ba FUN_143f561ba body=112 status=ok
// SIG undefined FUN_143f561ba(void)

void FUN_143f561ba(longlong param_1)

{
  if (*(char *)(param_1 + 0x99) != '\x03') {
    *(undefined1 *)(param_1 + 0x99) = 3;
    FUN_148aba4d0(param_1 + 0xa0,param_1 + 0x99);
  }
  FUN_148ab8508(param_1);
  return;
}



// FUNCTION 143f5622a FUN_143f5622a body=73 status=ok
// SIG undefined FUN_143f5622a(void)

void FUN_143f5622a(longlong param_1)

{
  if (*(char *)(param_1 + 0x99) != '\x05') {
    *(undefined1 *)(param_1 + 0x99) = 5;
    FUN_148aba4d0(param_1 + 0xa0,param_1 + 0x99);
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_142797bc0(0,0);
    return;
  }
  return;
}



// FUNCTION 143f56274 FUN_143f56274 body=484 status=ok
// SIG undefined FUN_143f56274(void)

void FUN_143f56274(longlong param_1,uint param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined4 local_48;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(uint *)(param_1 + 300) = param_2;
  if ((*(char *)(param_1 + 0x128) == '\x01') && (*(char *)(param_1 + 0x129) == '\0')) {
    if (param_2 < 3) {
      pwVar5 = (wchar_t *)(&PTR_u_Pending_14b4feae8)[param_2];
    }
    else {
      pwVar5 = L"Unknown";
    }
    FUN_140056680(local_40,pwVar5);
    lVar3 = FUN_140773fe2();
    if (((lVar3 != 0) && (*(int *)(param_1 + 0x130) != *(int *)(param_1 + 300))) &&
       (*(longlong *)(param_1 + 0x110) != 0)) {
      *(int *)(param_1 + 0x130) = *(int *)(param_1 + 300);
      local_50 = (undefined8 *)0x0;
      local_48 = 0;
      FUN_1446efa72(&local_50,0,3,0x10);
      puVar2 = local_50;
      local_48 = 3;
      *local_50 = &PTR_LAB_14b4fe910;
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
      local_50[2] = lVar4;
      *local_50 = &PTR_FUN_14b4fe8a0;
      local_50[3] = 0;
      iVar7 = 0;
      if (param_1 != 0) {
        uVar1 = *(uint *)(param_1 + 0xc);
        *(uint *)(local_50 + 3) = uVar1;
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar3 = 0;
        }
        iVar7 = *(int *)(lVar3 + 0x10);
        if (*(int *)(lVar3 + 0x10) == 0) {
          LOCK();
          iVar7 = DAT_14c964868 + 1;
          UNLOCK();
          iVar6 = DAT_14c964868 + 1;
          bVar8 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar7;
          if (bVar8) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar6);
          }
          LOCK();
          iVar7 = *(int *)(lVar3 + 0x10);
          bVar8 = iVar7 == 0;
          if (bVar8) {
            *(int *)(lVar3 + 0x10) = iVar6;
            iVar7 = 0;
          }
          UNLOCK();
          if (bVar8) {
            iVar7 = iVar6;
          }
        }
      }
      *(int *)((longlong)puVar2 + 0x1c) = iVar7;
      puVar2[4] = FUN_143f56a02;
      FUN_148a621b3(*(undefined8 *)(param_1 + 0x110),*(undefined4 *)(param_1 + 0x130),&local_50);
    }
    if (local_40[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f5649e FUN_143f5649e body=1350 status=ok
// SIG undefined FUN_143f5649e(void)

void FUN_143f5649e(longlong param_1,longlong param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  DWORD DVar5;
  DWORD DVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 *local_80;
  int local_78;
  undefined8 local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((param_2 == 0) || (param_3 != 1)) || (*(longlong *)(param_1 + 0x110) != param_2))
  goto LAB_143f568d8;
  *(undefined1 *)(param_1 + 0x129) = 0;
  if (*(char *)(param_1 + 0x128) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_a8);
  }
  FUN_143f56274(param_1,*(char *)(param_1 + 0xb8) != '\x01');
  if (((((*(int *)(param_1 + 0x2c) == 0) || (uVar3 = *(uint *)(param_1 + 0x28), (int)uVar3 < 0)) ||
       ((DAT_14c9647dc <= (int)uVar3 ||
        ((plVar10 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
         plVar10 == (longlong *)0x0 || ((int)plVar10[2] != *(int *)(param_1 + 0x2c))))))) ||
      ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)) ||
     ((*plVar10 == 0 || (*(char *)(*plVar10 + 0x1f8) != '\x01')))) goto LAB_143f568d8;
  uVar7 = FUN_1401cb356();
  lVar13 = DAT_14cb98528;
  iVar11 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  if (iVar11 == 0x40000002) {
    uVar8 = 0;
  }
  else {
    bVar14 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar11 != 2)) {
      if (iVar11 == 1) {
        DVar5 = FUN_140ad26c0();
        DVar6 = GetCurrentThreadId();
        bVar14 = DVar5 == DVar6;
      }
      else {
        bVar14 = false;
      }
    }
    uVar8 = (ulonglong)(bVar14 ^ 1);
  }
  uVar2 = *(undefined4 *)(lVar13 + uVar8 * 4);
  local_80 = (undefined8 *)0x0;
  local_78 = 0;
  FUN_1446efa72(&local_80,0,3,0x10);
  puVar4 = local_80;
  local_78 = 3;
  *local_80 = &PTR_LAB_149e02020;
  LOCK();
  UNLOCK();
  lVar9 = DAT_14c758608 + 1;
  lVar13 = DAT_14c758608 + 1;
  if (lVar9 == 0) {
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 2;
    lVar13 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar13;
  local_80[2] = lVar9;
  *local_80 = &PTR_FUN_14b4fe980;
  local_80[3] = 0;
  iVar11 = 0;
  if (param_1 != 0) {
    uVar3 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_80 + 3) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar13 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar13 = 0;
    }
    iVar11 = *(int *)(lVar13 + 0x10);
    if (*(int *)(lVar13 + 0x10) == 0) {
      LOCK();
      iVar11 = DAT_14c964868 + 1;
      UNLOCK();
      iVar12 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar11;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar12);
      }
      LOCK();
      iVar11 = *(int *)(lVar13 + 0x10);
      bVar14 = iVar11 == 0;
      if (bVar14) {
        *(int *)(lVar13 + 0x10) = iVar12;
        iVar11 = 0;
      }
      UNLOCK();
      if (bVar14) {
        iVar11 = iVar12;
      }
    }
  }
  *(int *)((longlong)puVar4 + 0x1c) = iVar11;
  puVar4[4] = FUN_143f541e2;
  local_88 = uVar2;
  FUN_1405f67fc(uVar7,&local_70,&local_80,L"UGbxSparkServer_SendStats");
  *(undefined8 *)(param_1 + 0x70) = local_70;
  local_70 = 0;
  plVar10 = *(longlong **)(param_1 + 0x78);
  *(longlong **)(param_1 + 0x78) = local_68;
  local_68 = (longlong *)0x0;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar10 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
    if (local_68 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_68 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_68 + 0x10))();
      }
    }
  }
  if (local_78 == 0) {
LAB_143f5675c:
    if (local_80 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_80 != (undefined8 *)0x0) {
    (**(code **)*local_80)(local_80,0);
    FUN_1446efa72(&local_80,0,0,0x10);
    local_78 = 0;
    goto LAB_143f5675c;
  }
  uVar7 = FUN_1401cb356();
  local_80 = (undefined8 *)0x0;
  local_78 = 0;
  FUN_1446efa72(&local_80,0,3,0x10);
  puVar4 = local_80;
  local_78 = 3;
  *local_80 = &PTR_LAB_149e02020;
  LOCK();
  UNLOCK();
  lVar9 = DAT_14c758608 + 1;
  lVar13 = DAT_14c758608 + 1;
  if (lVar9 == 0) {
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 2;
    lVar13 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar13;
  local_80[2] = lVar9;
  *local_80 = &PTR_FUN_14b4fe980;
  local_80[3] = 0;
  iVar11 = 0;
  if (param_1 != 0) {
    uVar3 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_80 + 3) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar13 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar13 = 0;
    }
    iVar11 = *(int *)(lVar13 + 0x10);
    if (*(int *)(lVar13 + 0x10) == 0) {
      LOCK();
      iVar11 = DAT_14c964868 + 1;
      UNLOCK();
      iVar12 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar11;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar12);
      }
      LOCK();
      iVar11 = *(int *)(lVar13 + 0x10);
      bVar14 = iVar11 == 0;
      if (bVar14) {
        *(int *)(lVar13 + 0x10) = iVar12;
        iVar11 = 0;
      }
      UNLOCK();
      if (bVar14) {
        iVar11 = iVar12;
      }
    }
  }
  *(int *)((longlong)puVar4 + 0x1c) = iVar11;
  puVar4[4] = FUN_148ab7d42;
  local_88 = 0;
  FUN_1405f67fc(uVar7,&local_70,&local_80,L"UGbxSparkServer_Tick");
  *(undefined8 *)(param_1 + 0x80) = local_70;
  local_70 = 0;
  plVar10 = *(longlong **)(param_1 + 0x88);
  *(longlong **)(param_1 + 0x88) = local_68;
  local_68 = (longlong *)0x0;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar10 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
    if (local_68 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_68 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_68 + 0x10))();
      }
    }
  }
  if (local_78 != 0) {
    if (local_80 == (undefined8 *)0x0) goto LAB_143f568d8;
    (**(code **)*local_80)(local_80,0);
    FUN_1446efa72(&local_80,0,0,0x10);
    local_78 = 0;
  }
  if (local_80 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143f568d8:
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f56a02 FUN_143f56a02 body=217 status=ok
// SIG undefined FUN_143f56a02(void)

void FUN_143f56a02(longlong param_1,longlong param_2)

{
  wchar_t *pwVar1;
  undefined1 auStack_48 [40];
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x110) == param_2)) {
    if ((ulonglong)*(uint *)(param_1 + 0x130) < 3) {
      pwVar1 = (wchar_t *)(&PTR_u_Pending_14b4feae8)[*(uint *)(param_1 + 0x130)];
    }
    else {
      pwVar1 = L"Unknown";
    }
    FUN_140056680(local_20,pwVar1);
    if ((*(char *)(param_1 + 0x128) == '\x01') &&
       (*(int *)(param_1 + 300) != *(int *)(param_1 + 0x130))) {
      FUN_143f56274(param_1);
    }
    if (local_20[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f56b76 FUN_143f56b76 body=29 status=ok
// SIG undefined FUN_143f56b76(void)

undefined8 FUN_143f56b76(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f56ba8 FUN_143f56ba8 body=85 status=ok
// SIG undefined FUN_143f56ba8(void)

void FUN_143f56ba8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1e1a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4fe400;
  return;
}



// FUNCTION 143f56bfe FUN_143f56bfe body=85 status=ok
// SIG undefined FUN_143f56bfe(void)

void FUN_143f56bfe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1e1a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4fe400;
  return;
}



// FUNCTION 143f56c54 FUN_143f56c54 body=118 status=ok
// SIG undefined FUN_143f56c54(void)

void FUN_143f56c54(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b4fe400;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f56cbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f56cca FUN_143f56cca body=59 status=ok
// SIG undefined FUN_143f56cca(void)

void FUN_143f56cca(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_143f56d44();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f56d06 FUN_143f56d06 body=61 status=ok
// SIG undefined FUN_143f56d06(void)

undefined8 FUN_143f56d06(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_143f56d44();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f56d44 FUN_143f56d44 body=577 status=ok
// SIG undefined FUN_143f56d44(void)

void FUN_143f56d44(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  void *pvVar3;
  int iVar4;
  longlong lVar5;
  char *pcVar6;
  longlong lVar7;
  undefined1 auStack_d8 [32];
  longlong local_b8 [2];
  longlong local_a8;
  longlong local_90;
  longlong local_80;
  longlong local_70;
  undefined4 local_68;
  longlong local_60;
  void *local_50;
  int local_48;
  undefined4 local_44;
  void *local_40;
  uint local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar5 = *param_1;
  if (lVar5 != 0) {
    if (*(longlong *)(lVar5 + 0x1f0) != 0) {
      FUN_1459f1912();
    }
    iVar4 = FUN_14490d72a(lVar5);
    if (iVar4 == 3) {
      pcVar6 = "Client";
    }
    else {
      lVar2 = *(longlong *)(*(longlong *)(lVar5 + 0x1f0) + 0x30);
      if (lVar2 == 0) {
        pcVar6 = "Listen server";
      }
      else {
        pcVar6 = "Listen server";
        if (*(char *)(lVar2 + 0x2dc) != '\0') {
          pcVar6 = "Dedicated server";
        }
      }
    }
    FUN_1400b22c2(local_b8,pcVar6);
    lVar2 = local_b8[0];
    uVar1 = *(uint *)(lVar5 + 0x5d0);
    if ((int)uVar1 < 2) {
      FUN_1400b22c2(&local_40,"local");
    }
    else {
      local_40 = (void *)0x0;
      pvVar3 = *(void **)(lVar5 + 0x5c8);
      local_38 = uVar1;
      FUN_1446dd670(&local_40,(ulonglong)uVar1,0);
      memcpy(local_40,pvVar3,(ulonglong)uVar1 * 2);
    }
    local_50 = (void *)0x0;
    local_48 = *(int *)(lVar5 + 0x5f8);
    lVar7 = (longlong)local_48;
    pvVar3 = *(void **)(lVar5 + 0x5f0);
    if (lVar7 == 0) {
      local_44 = 0;
    }
    else {
      FUN_1446dd670(&local_50,local_48,0);
      memcpy(local_50,pvVar3,lVar7 * 2);
    }
    lVar5 = FUN_1405e677a(DAT_14cb0d2b0,lVar5);
    FUN_145ad1184(local_b8,lVar5 + 0x160);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    FUN_1447a1747(local_70,local_68);
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    if (local_80 != 0) {
      FUN_1400020a8();
    }
    if (local_90 != 0) {
      FUN_1400020a8();
    }
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    if (local_b8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_50 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_40 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (lVar2 != 0) {
      FUN_1400020a8(lVar2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f56f86 FUN_143f56f86 body=29 status=ok
// SIG undefined FUN_143f56f86(void)

undefined8 FUN_143f56f86(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f56fb8 FUN_143f56fb8 body=93 status=ok
// SIG undefined FUN_143f56fb8(void)

void FUN_143f56fb8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4fe910;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4fe9f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f57016 FUN_143f57016 body=93 status=ok
// SIG undefined FUN_143f57016(void)

void FUN_143f57016(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4fe910;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4fe9f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f57074 FUN_143f57074 body=126 status=ok
// SIG undefined FUN_143f57074(void)

void FUN_143f57074(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4fe910;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4fe9f0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f570e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f57122 FUN_143f57122 body=61 status=ok
// SIG undefined FUN_143f57122(void)

undefined1 FUN_143f57122(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x110) == param_2)) {
    DAT_14cb98550 = 1;
    if (*(char *)(*(longlong *)(param_1 + 0x18) + 0x128) == '\x01') {
      FUN_143f54880();
    }
    else {
      FUN_142797bc0(0,0);
    }
  }
  return 1;
}



// FUNCTION 143f5715f FUN_143f5715f body=2074 status=ok
// SIG undefined FUN_143f5715f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f5715f(void)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined **ppuStack_80;
  undefined8 local_78;
  undefined4 local_64;
  char *local_60;
  int local_58;
  undefined1 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNetGame",&PTR_FUN_14b4f9f00,3,0);
  ppuStack_80 = &PTR_FUN_14b4faee0;
  local_78 = 2;
  local_88 = 0xb;
  FUN_14282b410(L"/Script/GbxNetGame",0,0,&PTR_FUN_14b4faf20);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNetGame",&PTR_FUN_14b4fb400,1,0);
  local_60 = "AssetRegistry";
  local_58 = 0xd;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cb98178 = (ulonglong)uVar2;
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNetGame",&PTR_FUN_14b4fbbf0,1,0);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNetGame",&PTR_FUN_14b4fbf40,1,0);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNetGame",&PTR_FUN_14b4fc3b0,1,0);
  local_60 = "UnixSocketPath";
  local_58 = 0xe;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cb981c8 = (ulonglong)uVar2;
  ppuStack_80 = &PTR_FUN_14b4fc980;
  local_88 = 0;
  local_78 = 3;
  FUN_14282b410(L"/Script/GbxNetGame",&PTR_FUN_14b4fc9e0,1,0);
  local_60 = (char *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,2,0x10);
  local_58 = 2;
  *(undefined ***)local_60 = &PTR_LAB_14a1e1a40;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_60 + 0x10) = lVar4;
  *(undefined ***)local_60 = &PTR_FUN_14b4fe400;
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14156bb80(&DAT_14cb98230,L"gbx.IdentifyNetwork",
                L"logs information related to the network connection status.",&local_60);
  if (local_58 != 0) {
    if (local_60 == (char *)0x0) goto LAB_143f573c9;
    (*(code *)**(undefined8 **)local_60)(local_60,0);
    FUN_1446efa72(&local_60,0,0,0x10);
    local_58 = 0;
  }
  if (local_60 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_143f573c9:
  atexit(FUN_143f53de3);
  local_60 = "generic_travel";
  local_58 = 0xe;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cb98240 = (ulonglong)uVar2;
  local_60 = "remote_console";
  local_58 = 0xe;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cb98248 = (ulonglong)uVar2;
  local_60 = "server_beacon";
  local_58 = 0xd;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cb98250 = (ulonglong)uVar2;
  local_60 = (char *)0x800000014b4fcaf0;
  local_64 = 10;
  local_58 = FUN_14577453c();
  local_54 = 1;
  FUN_146588a78(&local_60);
  _DAT_14cb98264 = 0;
  FUN_14052b5e0(&DAT_14cb98260,"sections",0);
  _DAT_14cb98270 = "sections";
  _DAT_14cb9827c = 0;
  FUN_14052b5e0(&DAT_14cb98278,L"rInvalid resolution in tiff: zero or negative.",0);
  _DAT_14cb98288 = L"rInvalid resolution in tiff: zero or negative.";
  _DAT_14cb98294 = 0;
  FUN_14052b5e0(&DAT_14cb98290,"roles",0);
  _DAT_14cb982a0 = "roles";
  _DAT_14cb982ac = 0;
  FUN_14052b5e0(&DAT_14cb982a8,&DAT_14b400ca8,0);
  _DAT_14cb982b8 = &DAT_14b400ca8;
  FUN_140056680(&DAT_14cb982c0,L"-MISSING-");
  atexit((_func_5014 *)&LAB_143f53e28);
  local_60 = "spark_server_stats";
  local_58 = 0x12;
  local_54 = 0;
  uVar3 = FUN_14001a6c0(&local_60,1);
  FUN_14147d486(&DAT_14cb982d0,uVar3,6);
  _DAT_14cb982d0 = &PTR_FUN_14b4fe3f8;
  _DAT_14cb98328 = 1;
  atexit((_func_5014 *)&LAB_143f53e39);
  local_60 = "server_identity";
  local_58 = 0xf;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  FUN_1446f470e(&local_60,L"spark_server_stats",1);
  _DAT_14cb98490 = 0;
  local_60 = "server_frame_time_avg";
  local_58 = 0x15;
  local_54 = 0;
  _DAT_14cb98488 = (ulonglong)uVar2;
  uVar2 = FUN_14001a6c0(&local_60,1);
  FUN_1446f470e(&local_60,L"spark_server_stats",1);
  _DAT_14cb984a0 = 0;
  local_60 = "server_frame_time_min";
  local_58 = 0x15;
  local_54 = 0;
  _DAT_14cb98498 = (ulonglong)uVar2;
  uVar2 = FUN_14001a6c0(&local_60,1);
  FUN_1446f470e(&local_60,L"spark_server_stats",1);
  _DAT_14cb984b0 = 0;
  local_60 = "server_frame_time_max";
  local_58 = 0x15;
  local_54 = 0;
  _DAT_14cb984a8 = (ulonglong)uVar2;
  uVar2 = FUN_14001a6c0(&local_60,1);
  FUN_1446f470e(&local_60,L"spark_server_stats",1);
  _DAT_14cb984c0 = 0;
  local_60 = "server_memory_peak_phys_kb";
  local_58 = 0x1a;
  local_54 = 0;
  _DAT_14cb984b8 = (ulonglong)uVar2;
  uVar2 = FUN_14001a6c0(&local_60,1);
  FUN_1446f470e(&local_60,L"spark_server_stats",1);
  _DAT_14cb984d0 = 0;
  local_60 = "server_memory_peak_virt_kb";
  local_58 = 0x1a;
  local_54 = 0;
  _DAT_14cb984c8 = (ulonglong)uVar2;
  uVar2 = FUN_14001a6c0(&local_60,1);
  FUN_1446f470e(&local_60,L"spark_server_stats",1);
  _DAT_14cb984e0 = 0;
  local_60 = "server_population_players";
  local_58 = 0x19;
  local_54 = 0;
  _DAT_14cb984d8 = (ulonglong)uVar2;
  uVar2 = FUN_14001a6c0(&local_60,1);
  FUN_1446f470e(&local_60,L"spark_server_stats",1);
  _DAT_14cb984f0 = 0;
  local_60 = "server_population_groups";
  local_58 = 0x18;
  local_54 = 0;
  _DAT_14cb984e8 = (ulonglong)uVar2;
  uVar2 = FUN_14001a6c0(&local_60,1);
  FUN_1446f470e(&local_60,L"spark_server_stats",1);
  _DAT_14cb98500 = 0;
  local_60 = "server_population_servers";
  local_58 = 0x19;
  local_54 = 0;
  _DAT_14cb984f8 = (ulonglong)uVar2;
  uVar2 = FUN_14001a6c0(&local_60,1);
  FUN_1446f470e(&local_60,L"spark_server_stats",1);
  _DAT_14cb98510 = 0;
  local_60 = (char *)CONCAT44(local_60._4_4_,0x43960000);
  local_88 = CONCAT44(local_88._4_4_,0x40);
  _DAT_14cb98508 = (ulonglong)uVar2;
  FUN_140a6b41e(&DAT_14cb98518,L"Gbx.SparkServer.StatsDelaySeconds",&local_60,
                L"The number of seconds delay between sending server stats to datadog");
  atexit(FUN_143f53e45);
  local_60 = "ServerNeedAuth";
  local_58 = 0xe;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cb98530 = (ulonglong)uVar2;
  local_60 = "service";
  local_58 = 7;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cb98538 = (ulonglong)uVar2;
  local_60 = "user";
  local_58 = 4;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cb98540 = (ulonglong)uVar2;
  local_60 = "password";
  local_58 = 8;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cb98548 = (ulonglong)uVar2;
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f5797c FUN_143f5797c body=57 status=ok
// SIG undefined FUN_143f5797c(void)

void FUN_143f5797c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb98560 == 0) {
    uVar1 = FUN_146589057();
    DAT_14cb98560 = FUN_14171c317(FUN_146589086,uVar1,L"EMicropatchEntryType");
  }
  return;
}



// FUNCTION 143f579b5 FUN_143f579b5 body=69 status=ok
// SIG undefined FUN_143f579b5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f579b5(void)

{
  _DAT_14cb98590 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143f579f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb98598,1);
  return;
}



// FUNCTION 143f579fa FUN_143f579fa body=69 status=ok
// SIG undefined FUN_143f579fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f579fa(void)

{
  _DAT_14cb985a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143f57a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb985a8,1);
  return;
}



// FUNCTION 143f57a80 FUN_143f57a80 body=1221 status=ok
// SIG undefined FUN_143f57a80(void)

ulonglong FUN_143f57a80(int param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong **pplVar11;
  undefined1 auStack_238 [32];
  longlong *local_218;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  longlong local_1b0 [2];
  undefined1 local_1a0 [8];
  longlong *local_198;
  longlong local_188 [2];
  wchar_t *local_178;
  int local_170;
  longlong local_168 [2];
  undefined2 *local_158;
  int local_150;
  longlong local_148 [2];
  undefined8 local_138 [6];
  longlong local_108 [2];
  undefined8 local_f8 [6];
  longlong local_c8;
  longlong *local_b8 [2];
  longlong local_a8 [4];
  longlong local_88;
  longlong *local_80;
  undefined8 local_78 [7];
  ulonglong local_40;
  undefined7 uVar12;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_238;
  FUN_148abb9fc(param_3,&local_88,&DAT_149e06196);
  FUN_148abbabc(&local_88,&local_158);
  plVar5 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_80 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  FUN_148abb9fc(param_3,&local_88,&DAT_149e06196);
  FUN_148abbabc(&local_88,local_168);
  plVar5 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_80 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  FUN_148abb9fc(param_3,&local_88,&DAT_149e06196);
  FUN_148abbabc(&local_88,&local_178);
  plVar5 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_80 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  iVar7 = 0;
  if (1 < local_170) {
    iVar3 = _wtoi(local_178);
    iVar7 = 0;
    if (0 < iVar3) {
      iVar7 = iVar3;
    }
  }
  FUN_148abc2ba(param_3,&local_88,iVar7);
  FUN_148abbabc(&local_88,local_188);
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_80 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)local_80 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_80 + 0x10))(local_80);
      }
    }
  }
  FUN_148abb9fc(param_3,local_1a0,&DAT_149e06196);
  if (local_198 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_198 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_198)(local_198);
      LOCK();
      piVar1 = (int *)((longlong)local_198 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_198 + 0x10))(local_198);
      }
    }
  }
  FUN_148abbabc(param_3,local_1b0);
  puVar8 = local_158;
  if (local_150 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  pplVar11 = (longlong **)0x0;
  lVar4 = FUN_140277b32(0,0,puVar8,0);
  if (lVar4 == 0) goto LAB_143f57e79;
  local_c8 = *param_4;
  local_b8[0] = (longlong *)0x0;
  if (local_c8 == 0) {
    local_88 = 0;
    local_78[0] = 0;
  }
  else {
    pplVar11 = local_b8;
    plVar5 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_4[2];
    }
    (**(code **)*plVar5)(plVar5,pplVar11);
    local_88 = local_c8;
    local_78[0] = 0;
    if (local_c8 != 0) {
      plVar5 = local_b8[0];
      if (local_b8[0] == (longlong *)0x0) {
        plVar5 = local_a8;
      }
      (**(code **)*plVar5)(plVar5,local_78);
    }
  }
  local_218 = &local_88;
  FUN_143f5a31c(&local_1c8,local_168,lVar4,*(undefined8 *)(lVar4 + 0x10));
  if (local_c8 != 0) {
    plVar5 = local_b8[0];
    if (local_b8[0] == (longlong *)0x0) {
      plVar5 = local_a8;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (CONCAT44(uStack_1bc,uStack_1c0) != 0) {
    if (param_1 == 1) {
      local_148[0] = *param_4;
      local_138[0] = 0;
      if (local_148[0] != 0) {
        plVar5 = param_4 + 4;
        if ((longlong *)param_4[2] != (longlong *)0x0) {
          plVar5 = (longlong *)param_4[2];
        }
        (**(code **)*plVar5)(plVar5,local_138);
      }
      puVar6 = &local_208;
      local_1f8 = local_1b8;
      local_208 = local_1c8;
      uStack_204 = uStack_1c4;
      uStack_200 = uStack_1c0;
      uStack_1fc = uStack_1bc;
      plVar5 = local_1b0;
      plVar9 = local_188;
      plVar10 = local_148;
    }
    else {
      if (param_1 != 0) goto LAB_143f57e76;
      local_108[0] = *param_4;
      local_f8[0] = 0;
      if (local_108[0] != 0) {
        plVar5 = param_4 + 4;
        if ((longlong *)param_4[2] != (longlong *)0x0) {
          plVar5 = (longlong *)param_4[2];
        }
        (**(code **)*plVar5)(plVar5,local_f8);
      }
      puVar6 = &local_1e8;
      local_1d8 = local_1b8;
      local_1e8 = local_1c8;
      uStack_1e4 = uStack_1c4;
      uStack_1e0 = uStack_1c0;
      uStack_1dc = uStack_1bc;
      plVar5 = local_188;
      plVar9 = local_1b0;
      plVar10 = local_108;
    }
    cVar2 = FUN_143f59e72(puVar6,plVar5,plVar9,plVar10);
    if (cVar2 != '\0') {
      uVar12 = (undefined7)((ulonglong)pplVar11 >> 8);
      pplVar11 = (longlong **)CONCAT71(uVar12,1);
      if ((*(byte *)(param_2 + 3) & 1) != 0) {
        FUN_148abc325(lVar4);
        pplVar11 = (longlong **)CONCAT71(uVar12,1);
      }
      goto LAB_143f57e79;
    }
  }
LAB_143f57e76:
  pplVar11 = (longlong **)0x0;
LAB_143f57e79:
  if (local_1b0[0] != 0) {
    FUN_1400020a8();
  }
  if (local_188[0] != 0) {
    FUN_1400020a8();
  }
  if (local_178 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_168[0] != 0) {
    FUN_1400020a8();
  }
  if (local_158 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  plVar5 = *(longlong **)(param_3 + 8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar5 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  if (*param_4 != 0) {
    plVar5 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if ((local_40 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)pplVar11 & 0xffffffff;
}



// FUNCTION 143f57f46 FUN_143f57f46 body=1584 status=ok
// SIG undefined FUN_143f57f46(void)

undefined4 FUN_143f57f46(int param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  int *piVar1;
  undefined8 uVar2;
  void *pvVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined2 *puVar11;
  int iVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined1 auStack_1c8 [40];
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  longlong local_188;
  longlong local_180;
  longlong local_178;
  undefined8 local_170;
  undefined2 *local_168;
  int local_160;
  undefined4 local_15c;
  undefined2 *local_158;
  int local_150;
  undefined4 local_14c;
  undefined1 local_148 [8];
  longlong *local_140;
  longlong local_130 [2];
  wchar_t *local_120;
  int local_118;
  void *local_110;
  int local_108;
  void *local_100;
  int local_f8;
  longlong local_f0;
  longlong *local_e8;
  undefined2 *local_d8;
  int local_d0;
  longlong local_c8 [2];
  undefined8 local_b8 [6];
  longlong local_88 [2];
  undefined8 local_78 [7];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  FUN_148abb9fc(param_3,&local_f0,&DAT_149e06196);
  FUN_148abbabc(&local_f0,&local_d8);
  plVar9 = local_e8;
  if (local_e8 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_e8 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*local_e8)(local_e8);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  FUN_148abb9fc(param_3,&local_f0,&DAT_149e06196);
  FUN_148abbabc(&local_f0,&local_100);
  plVar9 = local_e8;
  if (local_e8 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_e8 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*local_e8)(local_e8);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  FUN_148abb9fc(param_3,&local_f0,&DAT_149e06196);
  FUN_148abbabc(&local_f0,&local_110);
  plVar9 = local_e8;
  if (local_e8 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_e8 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*local_e8)(local_e8);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  FUN_148abb9fc(param_3,&local_f0,&DAT_149e06196);
  FUN_148abbabc(&local_f0,&local_120);
  plVar9 = local_e8;
  if (local_e8 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_e8 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*local_e8)(local_e8);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  iVar12 = 0;
  if (local_118 - 2U < 0x7fffffff) {
    iVar5 = _wtoi(local_120);
    iVar12 = 0;
    if (0 < iVar5) {
      iVar12 = iVar5;
    }
  }
  FUN_148abc2ba(param_3,&local_f0,iVar12);
  FUN_148abbabc(&local_f0,local_130);
  if (local_e8 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_e8 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_e8)(local_e8);
      LOCK();
      piVar1 = (int *)((longlong)local_e8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_e8 + 0x10))(local_e8);
      }
    }
  }
  FUN_148abb9fc(param_3,local_148,&DAT_149e06196);
  if (local_140 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_140 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_140)(local_140);
      LOCK();
      piVar1 = (int *)((longlong)local_140 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_140 + 0x10))(local_140);
      }
    }
  }
  FUN_148abbabc(param_3,&local_f0);
  pvVar3 = local_100;
  local_158 = (undefined2 *)0x0;
  local_150 = local_f8;
  if ((longlong)local_f8 == 0) {
    local_14c = 0;
  }
  else {
    FUN_1446dd670(&local_158,local_f8,0);
    memcpy(local_158,pvVar3,(longlong)local_f8 * 2);
  }
  pvVar3 = local_110;
  local_168 = (undefined2 *)0x0;
  local_160 = local_108;
  if ((longlong)local_108 == 0) {
    local_15c = 0;
  }
  else {
    FUN_1446dd670(&local_168,local_108,0);
    memcpy(local_168,pvVar3,(longlong)local_108 * 2);
  }
  puVar11 = local_d8;
  if (local_d0 == 0) {
    puVar11 = &DAT_149dfb77a;
  }
  uVar6 = 0;
  lVar7 = FUN_140277b32(0,0,puVar11,0);
  if (lVar7 == 0) goto LAB_143f5827f;
  lVar8 = FUN_1410a549c();
  if (((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
      (*(longlong *)
        (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
       == lVar8 + 0x30)) && (plVar9 = *(longlong **)(lVar7 + 0x28), plVar9 != (longlong *)0x0)) {
LAB_143f5838a:
    lVar8 = plVar9[10];
    while( true ) {
      if (lVar8 == 0) goto LAB_143f583aa;
      if ((~*(uint *)(*(longlong *)(lVar8 + 8) + 0x18) & 0x8001) == 0) break;
      lVar8 = *(longlong *)(lVar8 + 0x18);
    }
    puVar11 = local_168;
    if (local_160 == 0) {
      puVar11 = &DAT_149dfb77a;
    }
    cVar4 = FUN_1402ca022(*(undefined8 *)(lVar8 + 0x20),puVar11);
    if (cVar4 != '\0') goto LAB_143f5844d;
LAB_143f583f0:
    plVar15 = (longlong *)(lVar8 + 0x18);
    do {
      for (lVar8 = *plVar15; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x18)) {
        if ((~*(uint *)(*(longlong *)(lVar8 + 8) + 0x18) & 0x8001) == 0) {
          puVar11 = &DAT_149dfb77a;
          if (local_160 != 0) {
            puVar11 = local_168;
          }
          cVar4 = FUN_1402ca022(*(undefined8 *)(lVar8 + 0x20),puVar11);
          if (cVar4 == '\0') goto LAB_143f583f0;
          goto LAB_143f5844d;
        }
      }
      plVar9 = (longlong *)(**(code **)(*plVar9 + 0x2b0))(plVar9);
      plVar15 = plVar9 + 10;
    } while (plVar9 != (longlong *)0x0);
  }
LAB_143f5827c:
  uVar6 = 0;
LAB_143f5827f:
  if (local_168 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_158 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_f0 != 0) {
    FUN_1400020a8();
  }
  if (local_130[0] != 0) {
    FUN_1400020a8();
  }
  if (local_120 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_110 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_100 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  plVar9 = *(longlong **)(param_3 + 8);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar15 = plVar9 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
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
  if (*param_4 != 0) {
    plVar9 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar9 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  if ((local_40 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
LAB_143f583aa:
  plVar9 = (longlong *)(**(code **)(*plVar9 + 0x2b0))(plVar9);
  uVar6 = 0;
  if (plVar9 == (longlong *)0x0) goto LAB_143f5827f;
  goto LAB_143f5838a;
LAB_143f5844d:
  uVar2 = *(undefined8 *)(lVar7 + 0x28);
  puVar11 = local_158;
  if (local_150 == 0) {
    puVar11 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_170,puVar11,1);
  lVar10 = FUN_148abc069(lVar7,local_170,uVar2);
  if (lVar10 != 0) {
    lVar10 = lVar10 + *(int *)(lVar8 + 0x44);
    if (param_1 == 1) {
      local_c8[0] = *param_4;
      local_b8[0] = 0;
      if (local_c8[0] != 0) {
        plVar9 = param_4 + 4;
        if ((longlong *)param_4[2] != (longlong *)0x0) {
          plVar9 = (longlong *)param_4[2];
        }
        (**(code **)*plVar9)(plVar9,local_b8);
      }
      plVar9 = &local_1a0;
      plVar15 = &local_f0;
      plVar13 = local_130;
      plVar14 = local_c8;
      local_1a0 = lVar7;
      local_198 = lVar8;
      local_190 = lVar10;
    }
    else {
      if (param_1 != 0) goto LAB_143f5827c;
      local_88[0] = *param_4;
      local_78[0] = 0;
      if (local_88[0] != 0) {
        plVar9 = param_4 + 4;
        if ((longlong *)param_4[2] != (longlong *)0x0) {
          plVar9 = (longlong *)param_4[2];
        }
        (**(code **)*plVar9)(plVar9,local_78);
      }
      plVar9 = &local_188;
      plVar15 = local_130;
      plVar13 = &local_f0;
      plVar14 = local_88;
      local_188 = lVar7;
      local_180 = lVar8;
      local_178 = lVar10;
    }
    uVar6 = FUN_143f59e72(plVar9,plVar15,plVar13,plVar14);
    goto LAB_143f5827f;
  }
  goto LAB_143f5827c;
}



// FUNCTION 143f58577 FUN_143f58577 body=967 status=ok
// SIG undefined FUN_143f58577(void)

ulonglong FUN_143f58577(int param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  wchar_t *_Str;
  longlong lVar7;
  undefined2 *puVar8;
  ulonglong uVar9;
  ushort uVar10;
  ulonglong uVar11;
  ushort uVar12;
  ulonglong uVar13;
  float fVar14;
  undefined1 auStack_b8 [40];
  longlong local_90;
  int local_88;
  undefined2 *local_80;
  int local_78;
  undefined2 *local_70;
  int local_68;
  undefined2 *local_60;
  int local_58;
  undefined4 uStack_54;
  wchar_t *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_148abb9fc(param_3,&local_60,&DAT_149e06196);
  FUN_148abbabc(&local_60,&local_48);
  plVar6 = (longlong *)CONCAT44(uStack_54,local_58);
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
  FUN_148abb9fc(param_3,&local_60,&DAT_149e06196);
  FUN_148abbabc(&local_60,&local_70);
  plVar6 = (longlong *)CONCAT44(uStack_54,local_58);
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
  FUN_148abb9fc(param_3,&local_60,&DAT_149e06196);
  FUN_148abbabc(&local_60,&local_80);
  plVar6 = (longlong *)CONCAT44(uStack_54,local_58);
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
  FUN_148abbabc(param_3,&local_60);
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  puVar8 = local_70;
  if (local_68 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  plVar6 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar8,1);
  if (plVar6 == (longlong *)0x0) {
    uVar9 = 0;
    goto LAB_143f58893;
  }
  _Str = local_48;
  if (local_40 == 0) {
    _Str = L"";
  }
  iVar4 = _wtoi(_Str);
  if (iVar4 == 1) {
    fVar14 = (float)(**(code **)(*plVar6 + 0xb8))(plVar6);
    FUN_140002266(&local_90,&DAT_149e02016,(double)fVar14);
  }
  else if (iVar4 == 0) {
    uVar5 = (**(code **)(*plVar6 + 0xb0))(plVar6);
    FUN_140002266(&local_90,&DAT_149e25cfc,uVar5);
  }
  else {
    (**(code **)(*plVar6 + 0xc0))(plVar6,&local_90);
  }
  uVar9 = CONCAT71((int7)((ulonglong)&local_90 >> 8),1);
  if (param_1 == 1) {
    puVar8 = local_80;
    iVar3 = local_78;
    iVar4 = local_58;
    if (local_88 == local_58) {
      if (1 < local_88) {
        lVar7 = 0;
        while( true ) {
          uVar10 = *(ushort *)(local_90 + lVar7);
          uVar11 = (ulonglong)uVar10;
          uVar12 = *(ushort *)((longlong)local_60 + lVar7);
          if (uVar10 != uVar12) break;
          if (uVar10 == 0) goto joined_r0x000143f5885d;
LAB_143f5880e:
          lVar7 = lVar7 + 2;
        }
        if ((uVar12 | uVar10) < 0x80) {
          uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
          uVar13 = (ulonglong)uVar12;
          uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
          if ((&DAT_149e05da0)[uVar11] == (&DAT_149e05da0)[uVar13]) goto LAB_143f5880e;
        }
        if (uVar10 != uVar12) goto LAB_143f58884;
      }
    }
    else {
joined_r0x000143f58856:
      local_78 = iVar3;
      if (iVar4 + local_88 != 1) {
LAB_143f58884:
        uVar9 = 0;
        goto LAB_143f58886;
      }
    }
joined_r0x000143f5885d:
    if (local_78 == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    (**(code **)(*plVar6 + 0x98))(plVar6,puVar8,0xd000000,0);
  }
  else if (param_1 == 0) {
    puVar8 = local_60;
    iVar3 = local_58;
    iVar4 = local_78;
    if (local_88 != local_78) goto joined_r0x000143f58856;
    local_78 = local_58;
    if (1 < local_88) {
      lVar7 = 0;
      while( true ) {
        uVar10 = *(ushort *)(local_90 + lVar7);
        uVar11 = (ulonglong)uVar10;
        uVar12 = *(ushort *)((longlong)local_80 + lVar7);
        if (uVar10 != uVar12) break;
        if (uVar10 == 0) goto joined_r0x000143f5885d;
LAB_143f587ac:
        lVar7 = lVar7 + 2;
      }
      if ((uVar12 | uVar10) < 0x80) {
        uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
        uVar13 = (ulonglong)uVar12;
        uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
        if ((&DAT_149e05da0)[uVar11] == (&DAT_149e05da0)[uVar13]) goto LAB_143f587ac;
      }
      if (uVar10 != uVar12) goto LAB_143f58884;
    }
    goto joined_r0x000143f5885d;
  }
LAB_143f58886:
  if (local_90 != 0) {
    FUN_1400020a8(local_90);
  }
LAB_143f58893:
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_80 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_70 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  plVar6 = *(longlong **)(param_3 + 8);
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
  if (*param_4 != 0) {
    plVar6 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 143f5893f FUN_143f5893f body=1266 status=ok
// SIG undefined FUN_143f5893f(void)

ulonglong FUN_143f5893f(int param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  wchar_t *_Str;
  undefined2 *puVar11;
  ulonglong uVar12;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  wchar_t *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  code **local_b0;
  code *local_a8;
  code *local_a0;
  undefined2 *local_98;
  int local_90;
  wchar_t *local_88;
  int local_80;
  undefined2 *local_78;
  int local_70;
  undefined4 uStack_6c;
  undefined2 *local_60;
  int local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_148abb9fc(param_3,&local_78,&DAT_149e06196);
  FUN_148abbabc(&local_78,&local_60);
  plVar6 = (longlong *)CONCAT44(uStack_6c,local_70);
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
  FUN_148abb9fc(param_3,&local_78,&DAT_149e06196);
  FUN_148abbabc(&local_78,&local_88);
  plVar6 = (longlong *)CONCAT44(uStack_6c,local_70);
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
  _Str = local_88;
  if (local_80 == 0) {
    _Str = L"";
  }
  iVar5 = _wtoi(_Str);
  FUN_148abb9fc(param_3,&local_78,&DAT_149e06196);
  FUN_148abbabc(&local_78,&local_98);
  plVar6 = (longlong *)CONCAT44(uStack_6c,local_70);
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
  FUN_148abbabc(param_3,&local_78);
  puVar11 = local_60;
  if (local_58 == 0) {
    puVar11 = &DAT_149dfb77a;
  }
  uVar9 = 0;
  plVar6 = (longlong *)FUN_140277b32(0,0,puVar11,0);
  if (plVar6 == (longlong *)0x0) goto LAB_143f58bdb;
  puVar11 = local_98;
  if (local_90 == 0) {
    puVar11 = &DAT_149dfb77a;
  }
  uVar7 = FUN_140277b32(0,0,puVar11,0);
  if (uVar7 == 0) {
LAB_143f58b12:
    uVar9 = 0;
    if (local_90 - 2U < 0x7fffffff) goto LAB_143f58bdb;
    uVar7 = 0;
  }
  else {
    lVar8 = FUN_1402d2740();
    if ((*(int *)(*(longlong *)(uVar7 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
        != lVar8 + 0x30)) goto LAB_143f58b12;
  }
  puVar11 = local_78;
  if (local_70 == 0) {
    puVar11 = &DAT_149dfb77a;
  }
  uVar9 = FUN_140277b32(0,0,puVar11,0);
  if (uVar9 == 0) {
LAB_143f58b79:
    uVar9 = 0;
    if (local_70 - 2U < 0x7fffffff) goto LAB_143f58bdb;
  }
  else {
    lVar8 = FUN_1402d2740();
    if ((*(int *)(*(longlong *)(uVar9 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar9 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
        != lVar8 + 0x30)) goto LAB_143f58b79;
  }
  if (DAT_14cac6e60 == 0) {
    local_b0 = &local_50;
    local_50 = FUN_144a7958c;
    local_a0 = FUN_14081d0ea;
    local_a8 = FUN_142b47bc4;
    local_b8 = &LAB_1478989f1;
    local_c0 = &LAB_146391124;
    local_c8 = L"Engine";
    local_d0 = 0x10000000000;
    local_d8 = 0x10000005;
    local_e0 = 0x10;
    local_e8 = 0x620;
    FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
  }
  if ((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(plVar6[2] + 0x38)) &&
     (*(longlong *)(*(longlong *)(plVar6[2] + 0x30) + (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8)
      == DAT_14cac6e60 + 0x30)) {
    uVar12 = uVar9;
    if (param_1 == 0) {
      uVar12 = uVar7;
    }
    uVar10 = (**(code **)(*plVar6 + 0x610))(plVar6,iVar5);
    if (uVar10 == uVar12) {
      if (param_1 == 0) {
        uVar7 = uVar9;
      }
      (**(code **)(*plVar6 + 0x638))(plVar6,iVar5,uVar7);
      if ((longlong)(int)plVar6[0x44] < 1) {
        if ((DAT_14c76142c != 1) || ((*(byte *)(plVar6 + 0x3f) & 2) == 0)) {
          cVar3 = (**(code **)(*plVar6 + 0x508))(plVar6,0,1,0);
          *(byte *)(plVar6 + 0x3f) = *(byte *)(plVar6 + 0x3f) & 0xfd | cVar3 * '\x02';
        }
      }
      else {
        lVar8 = *(longlong *)(plVar6[0x43] + -8 + (longlong)(int)plVar6[0x44] * 8);
        *(byte *)(lVar8 + 0x608) = *(byte *)(lVar8 + 0x608) | 2;
        *(undefined4 *)(lVar8 + 0x10) = 3;
        *(undefined4 *)(lVar8 + 200) = 0xffffffff;
      }
      uVar9 = CONCAT71((int7)(uVar9 >> 8),1);
      if ((~*(byte *)((longlong)plVar6 + 0x9c) & 3) == 0) {
        bVar4 = *(byte *)((longlong)plVar6 + 0x9d);
        if ((bVar4 & 1) != 0) {
          if ((plVar6[0x16] != 0) || (lVar8 = FUN_1448abda6(plVar6), lVar8 != 0))
          goto LAB_143f58bdb;
          bVar4 = *(byte *)((longlong)plVar6 + 0x9d);
        }
        *(byte *)((longlong)plVar6 + 0x9d) = bVar4 | 1;
        FUN_1401057d4(plVar6);
        FUN_14010586c(&DAT_14cad0140,plVar6);
      }
      goto LAB_143f58bdb;
    }
  }
  uVar9 = 0;
LAB_143f58bdb:
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_88 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  plVar6 = *(longlong **)(param_3 + 8);
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
  if (*param_4 != 0) {
    plVar6 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 143f58e32 FUN_143f58e32 body=2242 status=ok
// SIG undefined FUN_143f58e32(void)

/* WARNING: Removing unreachable block (ram,0x000143f591b3) */
/* WARNING: Removing unreachable block (ram,0x000143f591c2) */

void FUN_143f58e32(longlong param_1,undefined8 param_2)

{
  void *pvVar1;
  char cVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  uint *puVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  longlong *plVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  longlong *local_180;
  longlong local_170;
  longlong *local_168;
  longlong local_160;
  int local_158;
  longlong local_150;
  longlong local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  void *local_128;
  int local_120;
  undefined4 local_11c;
  void *local_118;
  int local_110;
  undefined4 local_10c;
  void *local_108;
  int local_100;
  void *local_f8;
  int local_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  longlong local_d8 [2];
  uint local_c8 [4];
  uint *local_b8;
  int local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  longlong local_98;
  undefined4 local_90;
  longlong local_88 [2];
  undefined8 local_78 [6];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  cVar2 = FUN_1467b17c6(param_2,DAT_14cb98588);
  if (cVar2 != '\0') {
    local_170 = param_1;
    FUN_1457bafe8(param_2);
    local_b8 = (uint *)0x0;
    local_b0 = 0;
    local_d8[0] = 0;
    local_d8[1] = 0;
    local_ac = 0xffffffff00000080;
    local_a4 = 0;
    local_98 = 0;
    local_90 = 0;
    if ((longlong)local_158 == 0) {
      local_e8 = 0;
      uStack_e0 = 0;
      iVar16 = 0;
    }
    else {
      lVar14 = (longlong)local_158 << 4;
      lVar10 = local_160;
      do {
        FUN_148abbe5e(lVar10);
        lVar10 = lVar10 + 0x10;
        lVar14 = lVar14 + -0x10;
      } while (lVar14 != 0);
      local_e8 = 0;
      uStack_e0 = 0;
      uVar19 = 1;
      uVar21 = 0;
      iVar11 = 0;
      iVar9 = 0;
      iVar5 = 0;
      if (local_b0 != 0) {
        puVar3 = local_b8;
        if (local_b8 == (uint *)0x0) {
          puVar3 = local_c8;
        }
        uVar18 = *puVar3;
        if (uVar18 == 0) {
          iVar5 = local_b0 + 0x1e;
          if (-1 < local_b0 + -1) {
            iVar5 = local_b0 + -1;
          }
          uVar21 = 0;
          uVar19 = (ulonglong)(uint)(iVar5 >> 5);
          if (iVar5 >> 5 < 1) {
            uVar19 = 0;
          }
          iVar11 = 0;
          do {
            if (uVar19 == uVar21) {
              iVar16 = 0;
              goto LAB_143f592e6;
            }
            iVar11 = iVar11 + 0x20;
            uVar18 = puVar3[uVar21 + 1];
            uVar21 = uVar21 + 1;
          } while (uVar18 == 0);
        }
        else {
          uVar21 = 0;
        }
        uVar19 = (ulonglong)(-uVar18 & uVar18);
        uVar8 = uVar19 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar5 = (iVar11 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        iVar9 = local_b0;
        if (local_b0 <= iVar5) {
          iVar5 = local_b0;
        }
      }
      iVar16 = 0;
      if (iVar5 != iVar9) {
        uVar18 = 0xffffffff;
        do {
          FUN_14058ae9c(&local_108,(longlong)iVar5 * 0x28 + local_d8[0]);
          pvVar1 = local_108;
          local_118 = (void *)0x0;
          lVar10 = (longlong)local_100;
          local_110 = local_100;
          if (lVar10 == 0) {
            local_10c = 0;
          }
          else {
            FUN_1446dd670(&local_118,local_100,0);
            memcpy(local_118,pvVar1,lVar10 * 2);
          }
          pvVar1 = local_f8;
          local_128 = (void *)0x0;
          lVar10 = (longlong)local_f0;
          local_120 = local_f0;
          if (lVar10 == 0) {
            local_11c = 0;
          }
          else {
            FUN_1446dd670(&local_128,local_f0,0);
            memcpy(local_128,pvVar1,lVar10 * 2);
          }
          FUN_148abb666(&local_150,&local_118);
          uVar8 = uStack_e0;
          lVar10 = (longlong)(int)uStack_e0;
          uVar15 = (int)uStack_e0 + 1;
          uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar15);
          if (uStack_e0._4_4_ < uVar15) {
            FUN_148abd1a2(&local_e8,uVar8 & 0xffffffff);
          }
          *(undefined2 *)(local_e8 + lVar10 * 0x28) = (undefined2)local_150;
          *(undefined8 *)(local_e8 + 8 + lVar10 * 0x28) = 0;
          *(longlong *)(local_e8 + 8 + lVar10 * 0x28) = local_148;
          *(undefined4 *)(local_e8 + 0x10 + lVar10 * 0x28) = (undefined4)local_140;
          *(undefined4 *)(local_e8 + 0x14 + lVar10 * 0x28) = local_140._4_4_;
          *(undefined8 *)(local_e8 + 0x18 + lVar10 * 0x28) = 0;
          *(undefined8 *)(local_e8 + 0x18 + lVar10 * 0x28) = local_138;
          *(undefined4 *)(local_e8 + 0x20 + lVar10 * 0x28) = (undefined4)local_130;
          *(undefined4 *)(local_e8 + 0x24 + lVar10 * 0x28) = local_130._4_4_;
          local_130 = 0;
          local_138 = 0;
          local_140 = 0;
          local_148 = 0;
          if (local_128 != (void *)0x0) {
            FUN_1400020a8();
          }
          if (local_118 != (void *)0x0) {
            FUN_1400020a8();
          }
          if (local_f8 != (void *)0x0) {
            FUN_1400020a8();
          }
          if (local_108 != (void *)0x0) {
            FUN_1400020a8();
          }
          uVar18 = uVar18 & ~(uint)uVar19;
          puVar3 = local_b8;
          if (local_b8 == (uint *)0x0) {
            puVar3 = local_c8;
          }
          iVar5 = (int)uVar21;
          lVar10 = (longlong)iVar5;
          uVar15 = puVar3[lVar10] & uVar18;
          if (uVar15 == 0) {
            iVar16 = local_b0 + 0x1e;
            if (-1 < local_b0 + -1) {
              iVar16 = local_b0 + -1;
            }
            iVar16 = iVar16 >> 5;
            iVar11 = iVar11 + 0x20;
            iVar4 = iVar16;
            if (iVar16 < iVar5) {
              iVar4 = iVar5;
            }
            if (iVar5 < iVar16) {
              lVar14 = 0;
              do {
                uVar15 = puVar3[lVar10 + lVar14 + 1];
                if (uVar15 != 0) {
                  uVar21 = (ulonglong)(iVar5 + (int)lVar14 + 1);
                  uVar18 = 0xffffffff;
                  goto LAB_143f59299;
                }
                iVar11 = iVar11 + 0x20;
                lVar14 = lVar14 + 1;
              } while (iVar4 - lVar10 != lVar14);
              uVar18 = 0xffffffff;
              iVar5 = iVar4;
            }
            uVar21 = (ulonglong)(iVar5 + 1);
            iVar5 = local_b0;
          }
          else {
LAB_143f59299:
            uVar19 = (ulonglong)(-uVar15 & uVar15);
            uVar8 = uVar19 * 2 + 1;
            lVar10 = 0x3f;
            if (uVar8 != 0) {
              for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
              }
            }
            iVar5 = (iVar11 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
            if (local_b0 <= iVar5) {
              iVar5 = local_b0;
            }
          }
        } while (iVar5 != iVar9);
        iVar16 = (int)uStack_e0;
      }
    }
LAB_143f592e6:
    lVar10 = local_e8;
    local_168 = (longlong *)(local_170 + 0x28);
    if (iVar16 == *(int *)(local_170 + 0x30) - *(int *)(local_170 + 0x5c)) {
      iVar5 = 0;
      if (iVar16 != 0) {
        lVar14 = local_e8 + (longlong)iVar16 * 0x28;
        lVar20 = local_e8;
        do {
          iVar5 = *(int *)(lVar20 + 0x10) + -1;
          if (*(int *)(lVar20 + 0x10) == 0) {
            iVar5 = 0;
          }
          if (0 < iVar5) {
            iVar9 = 0;
            do {
              iVar9 = iVar9 + 1;
            } while (iVar5 != iVar9);
          }
          iVar5 = FUN_148abd236(local_168);
          if (iVar5 == -1) goto LAB_143f593f5;
          if (((*local_168 + (longlong)iVar5 * 0x40 == 0) ||
              (*local_168 + (longlong)iVar5 * 0x40 == -0x10)) ||
             (cVar2 = FUN_148abb908(), cVar2 == '\0')) goto LAB_143f593f5;
          lVar20 = lVar20 + 0x28;
          iVar5 = iVar16;
        } while (lVar20 != lVar14);
      }
    }
    else {
LAB_143f593f5:
      puVar3 = (uint *)(local_170 + 0x38);
      iVar5 = *(int *)(local_170 + 0x50);
      plVar17 = local_168;
      if (iVar5 == 0) {
        uVar8 = 1;
        uVar21 = 0;
        iVar9 = 0;
        iVar11 = 0;
      }
      else {
        puVar7 = *(uint **)(local_170 + 0x48);
        if (*(uint **)(local_170 + 0x48) == (uint *)0x0) {
          puVar7 = puVar3;
        }
        uVar18 = *puVar7;
        if (uVar18 == 0) {
          iVar9 = iVar5 + 0x1e;
          if (-1 < iVar5 + -1) {
            iVar9 = iVar5 + -1;
          }
          uVar21 = 0;
          uVar19 = (ulonglong)(uint)(iVar9 >> 5);
          if (iVar9 >> 5 < 1) {
            uVar19 = uVar21;
          }
          iVar9 = 0;
          do {
            if (uVar19 == uVar21) goto LAB_143f595ea;
            iVar9 = iVar9 + 0x20;
            uVar18 = puVar7[uVar21 + 1];
            uVar21 = uVar21 + 1;
          } while (uVar18 == 0);
        }
        else {
          uVar21 = 0;
          iVar9 = 0;
        }
        uVar8 = (ulonglong)(-uVar18 & uVar18);
        uVar19 = uVar8 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar11 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        if (iVar5 <= iVar11) {
          iVar11 = iVar5;
        }
      }
      if (iVar11 < iVar5) {
        uVar18 = 0xffffffff;
        lVar10 = local_170;
        do {
          lVar14 = *plVar17;
          lVar20 = (longlong)iVar11 * 0x40;
          if (*(char *)(lVar14 + 0x10 + lVar20) == '\x01') {
            local_88[0] = DAT_14cb985c0;
            local_78[0] = 0;
            if (DAT_14cb985c0 != 0) {
              puVar6 = DAT_14cb985d0;
              if (DAT_14cb985d0 == (undefined8 *)0x0) {
                puVar6 = &DAT_14cb985e0;
              }
              (**(code **)*puVar6)(puVar6,local_78);
              lVar10 = local_170;
            }
            puVar13 = &DAT_149dfb77a;
            if (*(int *)(lVar14 + 0x30 + lVar20) != 0) {
              puVar13 = *(undefined2 **)(lVar14 + 0x28 + lVar20);
            }
            puVar12 = &DAT_149dfb77a;
            if (*(int *)(lVar14 + 0x20 + lVar20) != 0) {
              puVar12 = *(undefined2 **)(lVar14 + 0x18 + lVar20);
            }
            local_180 = local_88;
            local_188 = 0;
            FUN_143f596f6(lVar10,1,puVar12,puVar13);
            iVar5 = *(int *)(local_170 + 0x50);
            lVar10 = local_170;
            plVar17 = local_168;
          }
          uVar18 = uVar18 & ~(uint)uVar8;
          puVar7 = *(uint **)(lVar10 + 0x48);
          if (*(uint **)(lVar10 + 0x48) == (uint *)0x0) {
            puVar7 = puVar3;
          }
          iVar11 = (int)uVar21;
          lVar14 = (longlong)iVar11;
          uVar15 = puVar7[lVar14] & uVar18;
          if (uVar15 == 0) {
            iVar16 = iVar5 + 0x1e;
            if (-1 < iVar5 + -1) {
              iVar16 = iVar5 + -1;
            }
            iVar16 = iVar16 >> 5;
            iVar4 = iVar16;
            if (iVar16 < iVar11) {
              iVar4 = iVar11;
            }
            if (iVar16 <= iVar11) break;
            lVar20 = 0;
            while( true ) {
              iVar9 = iVar9 + 0x20;
              uVar15 = puVar7[lVar14 + lVar20 + 1];
              if (uVar15 != 0) break;
              lVar20 = lVar20 + 1;
              if (iVar4 - lVar14 == lVar20) goto LAB_143f595ea;
            }
            uVar21 = (ulonglong)(iVar11 + (int)lVar20 + 1);
            uVar18 = 0xffffffff;
          }
          uVar8 = (ulonglong)(-uVar15 & uVar15);
          uVar19 = uVar8 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar19 != 0) {
            for (; uVar19 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          iVar11 = (iVar9 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        } while (iVar11 < iVar5);
      }
LAB_143f595ea:
      FUN_148abd302(plVar17,uStack_e0 & 0xffffffff);
      if ((longlong)(int)uStack_e0 != 0) {
        lVar10 = (longlong)(int)uStack_e0 * 0x28;
        lVar14 = local_e8;
        do {
          local_150 = lVar14 + 8;
          local_148 = lVar14;
          FUN_148abd692(plVar17,&local_108,&local_150);
          lVar14 = lVar14 + 0x28;
          lVar10 = lVar10 + -0x28;
        } while (lVar10 != 0);
      }
      FUN_1408cdca6(local_170,1,0);
      lVar10 = local_e8;
      iVar5 = (int)uStack_e0;
    }
    FUN_148abd164(lVar10,iVar5);
    if (local_e8 != 0) {
      FUN_1400020a8();
    }
    local_90 = 0;
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    FUN_1407a3a68(local_d8);
    FUN_1447a1747(local_160,local_158);
    if (local_160 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f596f6 FUN_143f596f6 body=1898 status=ok
// SIG undefined FUN_143f596f6(void)

/* WARNING: Removing unreachable block (ram,0x000143f59b05) */
/* WARNING: Removing unreachable block (ram,0x000143f59b0c) */
/* WARNING: Removing unreachable block (ram,0x000143f59b1b) */

void FUN_143f596f6(undefined8 param_1,undefined4 param_2,undefined8 param_3,longlong param_4,
                  short *param_5,longlong *param_6)

{
  int *piVar1;
  void *_Src;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  wchar_t *pwVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_1f8 [32];
  wchar_t **local_1d8;
  undefined8 local_1d0;
  undefined1 local_1c0 [16];
  void *local_1b0;
  uint local_1a8;
  undefined2 local_1a0;
  undefined1 local_19e;
  undefined1 local_19d;
  void *local_198;
  ulonglong uStack_190;
  wchar_t *local_188;
  undefined8 uStack_180;
  undefined1 local_178;
  wchar_t *local_170;
  longlong *local_168;
  int local_160;
  int local_15c;
  wchar_t *local_158;
  longlong *plStack_150;
  int local_148;
  int local_144;
  wchar_t *local_138;
  undefined8 uStack_130;
  wchar_t *local_128;
  int local_120;
  wchar_t *local_118;
  int local_110;
  wchar_t *local_108;
  longlong *local_f8 [2];
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  longlong *local_b8 [2];
  longlong local_a8 [4];
  wchar_t *local_88;
  int local_80;
  undefined4 uStack_7c;
  longlong *local_78;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if (param_4 == 0) goto LAB_143f59726;
  FUN_148abbc26(&local_170,param_4);
  local_c8 = *param_6;
  local_b8[0] = (longlong *)0x0;
  if (local_c8 != 0) {
    plVar6 = param_6 + 4;
    if ((longlong *)param_6[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_6[2];
    }
    (**(code **)*plVar6)(plVar6,local_b8);
  }
  FUN_140056680(&local_1b0,param_3);
  _Src = local_1b0;
  local_1a0 = 0;
  local_19e = 0;
  local_198 = (void *)0x0;
  local_188 = (wchar_t *)0x0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_190 = (ulonglong)local_1a8;
  if ((longlong)(int)local_1a8 != 0) {
    FUN_1446dd670(&local_198,local_1a8,0);
    memcpy(local_198,_Src,(longlong)(int)local_1a8 * 2);
  }
  iVar4 = local_160;
  if (local_170 != (wchar_t *)0x0) {
    iVar3 = local_15c;
    if ((local_15c < 0) && (iVar3 = *(int *)(local_170 + 4) + -1, *(int *)(local_170 + 4) == 0)) {
      iVar3 = 0;
    }
    if ((iVar3 != local_160) && (cVar2 = FUN_148abc862(&local_170,&DAT_149e06140), cVar2 != '\0')) {
      local_160 = iVar4 + 1;
      FUN_148abb9fc(&local_170,&local_88,&DAT_149e06196);
      FUN_148abbabc(&local_88,&local_158);
      plVar6 = (longlong *)CONCAT44(uStack_7c,local_80);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar6 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
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
      cVar2 = FUN_1405b43cc(&local_158);
      if (cVar2 != '\0') {
        pwVar7 = local_158;
        if ((int)plStack_150 == 0) {
          pwVar7 = L"";
        }
        iVar4 = _wtoi(pwVar7);
        local_1a0 = CONCAT11((char)iVar4,(char)local_1a0);
        FUN_148abb9fc(&local_170,&local_88,&DAT_149e06196);
        FUN_148abbabc(&local_88,&local_118);
        plVar6 = (longlong *)CONCAT44(uStack_7c,local_80);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar8 = plVar6 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
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
        cVar2 = FUN_1405b43cc(&local_118);
        if (cVar2 != '\0') {
          pwVar7 = local_118;
          if (local_110 == 0) {
            pwVar7 = L"";
          }
          iVar4 = _wtoi(pwVar7);
          local_19e = (char)iVar4;
          FUN_148abb9fc(&local_170,&local_88,&DAT_149e06196);
          FUN_148abbabc(&local_88,&local_128);
          plVar6 = (longlong *)CONCAT44(uStack_7c,local_80);
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            plVar8 = plVar6 + 1;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)*plVar8 == 0) {
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
          cVar2 = FUN_1405b43cc(&local_128);
          if (cVar2 != '\0') {
            pwVar7 = local_128;
            if (local_120 == 0) {
              pwVar7 = L"";
            }
            iVar4 = _wtoi(pwVar7);
            local_19d = (char)iVar4;
            FUN_148abb9fc(&local_170,&local_88,&DAT_149e06144);
            FUN_148abbabc(&local_88,&local_138);
            if (local_188 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            local_188 = local_138;
            uStack_180 = uStack_130;
            local_138 = (wchar_t *)0x0;
            uStack_130 = 0;
            plVar6 = (longlong *)CONCAT44(uStack_7c,local_80);
            if (plVar6 != (longlong *)0x0) {
              LOCK();
              plVar8 = plVar6 + 1;
              *(int *)plVar8 = (int)*plVar8 + -1;
              UNLOCK();
              if ((int)*plVar8 == 0) {
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
            FUN_140056680(&local_88,L"MatchAll");
            pwVar7 = local_88;
            if ((int)uStack_180 == local_80) {
              bVar9 = true;
              if (1 < (int)uStack_180) {
                iVar4 = wcscmp(local_188,local_88);
                bVar9 = iVar4 == 0;
              }
            }
            else {
              bVar9 = local_80 + (int)uStack_180 == 1;
            }
            local_178 = bVar9;
            if (pwVar7 != (wchar_t *)0x0) {
              FUN_1400020a8(pwVar7);
            }
            cVar2 = FUN_148abc862(&local_170,&DAT_149e06196);
            if (cVar2 != '\0') {
              local_160 = local_160 + 1;
              local_1a0 = CONCAT11(local_1a0._1_1_,1);
            }
          }
          if (local_128 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
        }
        if (local_118 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
      }
      if (local_158 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if (local_c8 != 0) {
    plVar6 = local_b8[0];
    if (local_b8[0] == (longlong *)0x0) {
      plVar6 = local_a8;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (local_1b0 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (((char)local_1a0 == '\x01') && (local_1a0._1_1_ == '\x01')) {
    if ((param_5 == (short *)0x0) || (*param_5 == 0)) {
      if ((int)uStack_180 < 2) goto LAB_143f599df;
    }
    else {
      FUN_140056680(local_1c0);
      cVar2 = FUN_148abbb92(&local_1a0,local_1c0);
      if (cVar2 != '\0') {
LAB_143f599df:
        puVar5 = (undefined8 *)FUN_148abbcf2(param_1,local_19e);
        if (puVar5 != (undefined8 *)0x0) {
          local_108 = (wchar_t *)*param_6;
          local_f8[0] = (longlong *)0x0;
          if (local_108 != (wchar_t *)0x0) {
            plVar6 = param_6 + 4;
            if ((longlong *)param_6[2] != (longlong *)0x0) {
              plVar6 = (longlong *)param_6[2];
            }
            (**(code **)*plVar6)(plVar6,local_f8);
          }
          local_78 = local_f8[0];
          local_88 = local_108;
          plVar6 = local_168;
          if (local_168 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_168 + 1) = (int)local_168[1] + 1;
            UNLOCK();
          }
          if (*(int *)(puVar5 + 1) == 0) {
            plVar8 = (longlong *)0x0;
          }
          else {
            plVar8 = (longlong *)*puVar5;
          }
          local_f8[0] = (longlong *)0x0;
          local_68 = local_e8;
          uStack_60 = uStack_e0;
          local_58 = local_d8;
          uStack_50 = uStack_d0;
          if (local_108 != (wchar_t *)0x0) {
            local_108 = (wchar_t *)0x0;
          }
          local_148 = local_160;
          local_144 = local_15c;
          if (local_168 == (longlong *)0x0) {
            local_158 = local_170;
            plStack_150 = (longlong *)0x0;
            local_1d0 = 0;
            local_1d8 = &local_88;
            (**(code **)(*plVar8 + 0x58))(plVar8,param_2,&local_1a0);
          }
          else {
            LOCK();
            *(int *)(local_168 + 1) = (int)local_168[1] + 1;
            UNLOCK();
            local_f8[0] = (longlong *)0x0;
            plStack_150 = local_168;
            local_158 = local_170;
            local_1d8 = &local_88;
            local_1d0 = 0;
            (**(code **)(*plVar8 + 0x58))(plVar8,param_2,&local_1a0,&local_158);
            LOCK();
            plVar8 = plVar6 + 1;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)*plVar8 == 0) {
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
          if (local_108 != (wchar_t *)0x0) {
            plVar6 = local_f8[0];
            if (local_f8[0] == (longlong *)0x0) {
              plVar6 = &local_e8;
            }
            (**(code **)(*plVar6 + 0x10))();
          }
        }
      }
    }
  }
  if (local_188 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_198 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_168 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_168 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
LAB_143f59726:
  if (*param_6 != 0) {
    plVar6 = param_6 + 4;
    if ((longlong *)param_6[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_6[2];
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if ((local_40 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f59e72 FUN_143f59e72 body=1144 status=ok
// SIG undefined FUN_143f59e72(void)

ulonglong FUN_143f59e72(longlong *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  undefined2 *puVar7;
  ulonglong uVar8;
  undefined *puVar9;
  wchar_t *pwVar10;
  bool bVar11;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined8 local_b0;
  ulonglong local_a8;
  code *local_a0;
  undefined8 local_90;
  longlong lStack_88;
  longlong local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined1 local_60;
  wchar_t *local_58;
  undefined8 uStack_50;
  undefined8 *local_48;
  code *local_40;
  undefined8 **local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (((*param_1 == 0) || (plVar4 = (longlong *)param_1[1], plVar4 == (longlong *)0x0)) ||
     (lVar2 = param_1[2], lVar2 == 0)) {
    uVar8 = 0;
    goto LAB_143f59f53;
  }
  local_58 = (wchar_t *)0x0;
  uStack_50 = 0;
  if (*(int *)(param_2 + 1) - 2U < 0x7fffffff) {
    uVar8 = 0;
    local_a0 = (code *)0x0;
    local_b0 = 0;
    local_a8 = local_a8 & 0xffffffff00000000;
    local_b8 = lVar2;
    (**(code **)(*plVar4 + 0xf0))(plVar4,&local_58,lVar2,0);
    pwVar10 = local_58;
    pwVar6 = L"";
    if (*(int *)(param_2 + 1) != 0) {
      pwVar6 = (wchar_t *)*param_2;
    }
    pwVar5 = L"";
    if ((int)uStack_50 != 0) {
      pwVar5 = local_58;
    }
    iVar1 = wcscmp(pwVar5,pwVar6);
    if (iVar1 == 0) {
      plVar4 = (longlong *)param_1[1];
      lVar2 = param_1[2];
      goto LAB_143f59f45;
    }
  }
  else {
LAB_143f59f45:
    if (*(int *)(param_3 + 1) == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    else {
      puVar7 = (undefined2 *)*param_3;
    }
    if (puVar7 == (undefined2 *)0x0) {
      uVar8 = 0;
      pwVar10 = local_58;
    }
    else {
      local_a8 = DAT_14c872be8;
      local_b0 = CONCAT44(local_b0._4_4_,0x8000000);
      local_b8 = 0;
      uVar8 = 0;
      lVar2 = (**(code **)(*plVar4 + 0xf8))(plVar4,puVar7,lVar2,0);
      pwVar10 = local_58;
      if (lVar2 != 0) {
        pwVar6 = L"";
        if (*(int *)(param_3 + 1) != 0) {
          pwVar6 = (wchar_t *)*param_3;
        }
        pwVar5 = L"";
        if ((int)uStack_50 != 0) {
          pwVar5 = local_58;
        }
        iVar1 = wcscmp(pwVar5,pwVar6);
        uVar8 = 1;
        if (iVar1 != 0) {
          uVar3 = FUN_148abc736(param_1[1]);
          if (uVar3 == 0) {
LAB_143f5a104:
            lVar2 = FUN_148abc736(param_1[1]);
            uVar8 = CONCAT71((int7)(uVar8 >> 8),1);
            pwVar10 = local_58;
            if (lVar2 != 0) {
              puVar9 = *(undefined **)(lVar2 + 8);
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c952900) &&
                 (FUN_144b3d300(&DAT_14c952900), DAT_14c952900 == -1)) {
                local_a8 = FUN_1446ddbd2();
                local_a0 = FUN_1468e4cee;
                local_b8 = 0x800000008001;
                local_b0 = 0;
                FUN_14000176a(&DAT_14c9528b0,L"FSetProperty",0x800000000000,0);
                atexit(FUN_142817fb7);
                _Init_thread_footer(&DAT_14c952900);
              }
              pwVar10 = local_58;
              if (DAT_14c9528b8 == 0) {
                bVar11 = puVar9 != (undefined *)0x0;
                if (puVar9 != &DAT_14c9528b0 && bVar11) {
                  do {
                    puVar9 = *(undefined **)(puVar9 + 0x30);
                    bVar11 = puVar9 != (undefined *)0x0;
                    if (puVar9 == &DAT_14c9528b0) break;
                  } while (puVar9 != (undefined *)0x0);
                }
                if (bVar11) goto LAB_143f5a18f;
              }
              else if ((*(ulonglong *)(puVar9 + 0x18) & DAT_14c9528b8) != 0) {
LAB_143f5a18f:
                lStack_88 = (longlong)*(int *)(lVar2 + 0x44) + *param_1;
                local_90 = *(undefined8 *)(lVar2 + 0x70);
                local_80 = *(longlong *)(lVar2 + 0x78);
                uStack_78 = *(undefined4 *)(lVar2 + 0x80);
                uStack_74 = *(undefined4 *)(lVar2 + 0x84);
                uStack_70 = *(undefined4 *)(lVar2 + 0x88);
                local_48 = &local_90;
                local_38 = &local_48;
                local_40 = FUN_14281ab14;
                FUN_1402609e8();
                pwVar10 = local_58;
              }
            }
          }
          else {
            puVar9 = *(undefined **)(uVar3 + 8);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c951f40) && (FUN_144b3d300(&DAT_14c951f40), DAT_14c951f40 == -1))
            {
              local_a8 = FUN_1446ddbd2();
              local_a0 = FUN_140eb3340;
              local_b8 = 0x400000008001;
              local_b0 = 0;
              FUN_14000176a(&DAT_14c951ef0,L"FMapProperty",0x400000000000,0);
              atexit(FUN_142815b60);
              _Init_thread_footer(&DAT_14c951f40);
            }
            uVar8 = uVar3;
            if (DAT_14c951ef8 == 0) {
              bVar11 = puVar9 != (undefined *)0x0;
              if (puVar9 != &DAT_14c951ef0 && bVar11) {
                do {
                  puVar9 = *(undefined **)(puVar9 + 0x30);
                  bVar11 = puVar9 != (undefined *)0x0;
                  if (puVar9 == &DAT_14c951ef0) break;
                } while (puVar9 != (undefined *)0x0);
              }
              if (!bVar11) goto LAB_143f5a104;
            }
            else if ((*(ulonglong *)(puVar9 + 0x18) & DAT_14c951ef8) == 0) goto LAB_143f5a104;
            local_80 = (longlong)*(int *)(uVar3 + 0x44) + *param_1;
            local_60 = *(undefined1 *)(uVar3 + 0x98);
            local_90 = *(undefined8 *)(uVar3 + 0x70);
            lStack_88 = *(longlong *)(uVar3 + 0x78);
            uStack_78 = *(undefined4 *)(uVar3 + 0x80);
            uStack_74 = *(undefined4 *)(uVar3 + 0x84);
            uStack_70 = *(undefined4 *)(uVar3 + 0x88);
            uStack_6c = *(undefined4 *)(uVar3 + 0x8c);
            local_68 = *(undefined8 *)(uVar3 + 0x90);
            FUN_140458c30();
            uVar8 = CONCAT71((int7)(uVar3 >> 8),1);
            pwVar10 = local_58;
          }
        }
      }
    }
  }
  if (pwVar10 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar10);
  }
LAB_143f59f53:
  if (*param_4 != 0) {
    plVar4 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if ((local_30 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 143f5a2eb FUN_143f5a2eb body=49 status=ok
// SIG undefined FUN_143f5a2eb(void)

void FUN_143f5a2eb(void)

{
  FUN_1465891f3(DAT_14cb98638,DAT_14cb98640);
  if (DAT_14cb98638 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143f5a31c FUN_143f5a31c body=3223 status=ok
// SIG undefined FUN_143f5a31c(void)

longlong *
FUN_143f5a31c(longlong *param_1,undefined8 *param_2,longlong param_3,wchar_t *param_4,
             longlong *param_5)

{
  ushort uVar1;
  ushort uVar2;
  void *_Src;
  wchar_t *pwVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  wchar_t *pwVar9;
  undefined *puVar10;
  undefined2 *puVar11;
  undefined *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  longlong *plVar17;
  wchar_t *pwVar18;
  bool bVar19;
  undefined1 auStack_138 [32];
  longlong *local_118;
  longlong *local_110;
  undefined *local_108;
  code *local_100;
  int local_ec;
  longlong *local_e8;
  wchar_t *local_e0;
  longlong local_d8;
  longlong *local_d0;
  wchar_t *local_c8;
  int local_c0;
  undefined2 *local_b8;
  undefined8 uStack_b0;
  wchar_t *local_a8;
  int local_a0;
  undefined4 local_9c;
  undefined2 *local_98;
  ulonglong uStack_90;
  void *local_80;
  int local_78;
  int local_74;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_e0 = param_4;
  if (param_3 == 0 || param_4 == (wchar_t *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    local_68 = 0;
    local_80 = (void *)0x0;
    local_78 = *(int *)(param_2 + 1);
    lVar13 = (longlong)local_78;
    _Src = (void *)*param_2;
    local_70 = param_3;
    if (lVar13 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,local_78,0);
      memcpy(local_80,_Src,lVar13 * 2);
      if (local_78 - 2U < 0x7fffffff) {
        local_ec = -1;
        local_e8 = (longlong *)0x400000008001;
        local_d8 = param_3;
        local_d0 = param_1;
LAB_143f5a42c:
        local_98 = (undefined2 *)0x0;
        uStack_90 = 0;
        FUN_140056680(&local_a8,&DAT_149e0635c);
        local_110 = (longlong *)((ulonglong)local_110 & 0xffffffff00000000);
        local_118 = (longlong *)CONCAT44(local_118._4_4_,1);
        cVar4 = FUN_1407cdbc6(&local_80,&local_a8,&local_98,&local_80);
        if (local_a8 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        if (cVar4 == '\0') {
          iVar6 = local_78 + -1;
          if (local_78 == 0) {
            iVar6 = 0;
          }
          FUN_1402980a2(&local_98,local_80,iVar6);
          local_78 = 0;
          if (local_74 != 0) {
            FUN_1446f8c06(&local_80,0);
          }
        }
        cVar4 = FUN_144a38768(&local_98,&DAT_149e2b50c,1,1);
        lVar13 = local_68;
        puVar11 = local_98;
        if (cVar4 != '\0') {
          local_a8 = (wchar_t *)0x0;
          lVar13 = (longlong)(int)uStack_90;
          local_a0 = (int)uStack_90;
          if (lVar13 == 0) {
            local_9c = 0;
          }
          else {
            FUN_1446dd670(&local_a8,uStack_90 & 0xffffffff,0);
            memcpy(local_a8,puVar11,lVar13 * 2);
          }
          local_b8 = (undefined2 *)0x0;
          uStack_b0 = 0;
          FUN_140056680(&local_c8,&DAT_149e2b508);
          local_110 = (longlong *)((ulonglong)local_110 & 0xffffffff00000000);
          local_118 = (longlong *)CONCAT44(local_118._4_4_,1);
          FUN_1407cdbc6(&local_a8,&local_c8,&local_98,&local_b8);
          if (local_c8 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          local_110 = (longlong *)CONCAT44(local_110._4_4_,0xffffffff);
          local_118 = (longlong *)((ulonglong)local_118 & 0xffffffff00000000);
          iVar6 = FUN_1447ee042(&local_b8,&DAT_149e2b50c,1,1);
          if (iVar6 != -1) {
            local_118 = (longlong *)((ulonglong)local_118 & 0xffffffff00000000);
            local_110 = (longlong *)CONCAT44(local_110._4_4_,0xffffffff);
            iVar7 = FUN_1447ee042(&local_b8,&DAT_149e2b50c,1,1);
            iVar6 = (int)uStack_b0 + -1;
            puVar11 = local_b8;
            if ((int)uStack_b0 == 0) {
              iVar6 = 0;
              puVar11 = &DAT_149dfb77a;
            }
            if (iVar7 < iVar6) {
              iVar6 = iVar7;
            }
            if (iVar6 < 1) {
              iVar6 = 0;
            }
            FUN_14006620a(&local_c8,puVar11,iVar6);
            pwVar9 = L"";
            if (local_c0 != 0) {
              pwVar9 = local_c8;
            }
            local_ec = _wtoi(pwVar9);
            if (local_c8 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
          }
          if (-1 < local_ec) {
            puVar11 = &DAT_149dfb77a;
            if ((int)uStack_90 != 0) {
              puVar11 = local_98;
            }
            FUN_1446f470e(&local_c8,puVar11,0);
            pwVar3 = local_c8;
            pwVar9 = local_e0;
            pwVar18 = local_c8;
            while (pwVar18 != (wchar_t *)0x0) {
              for (lVar13 = *(longlong *)(pwVar9 + 0x28); lVar13 != 0;
                  lVar13 = *(longlong *)(lVar13 + 0x18)) {
                puVar12 = *(undefined **)(lVar13 + 8);
                if ((~*(uint *)(puVar12 + 0x18) & 0x8001) == 0) goto LAB_143f5a8f2;
              }
              pwVar9 = (wchar_t *)(**(code **)(*(longlong *)pwVar9 + 0x2b0))(pwVar9);
              pwVar18 = pwVar9;
            }
LAB_143f5a85c:
            lVar13 = local_68;
            if (local_68 == 0) goto LAB_143f5abcd;
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c951f40) && (FUN_144b3d300(&DAT_14c951f40), DAT_14c951f40 == -1))
            {
              local_108 = (undefined *)FUN_1446ddbd2();
              local_100 = FUN_140eb3340;
              local_118 = local_e8;
              local_110 = (longlong *)0x0;
              FUN_14000176a(&DAT_14c951ef0,L"FMapProperty",0x400000000000,0);
              atexit(FUN_142815b60);
              _Init_thread_footer(&DAT_14c951f40);
            }
            puVar12 = *(undefined **)(lVar13 + 8);
            if (DAT_14c951ef8 == 0) {
              bVar19 = puVar12 != (undefined *)0x0;
              puVar10 = puVar12;
              if (puVar12 != &DAT_14c951ef0 && bVar19) {
                do {
                  puVar10 = *(undefined **)(puVar10 + 0x30);
                  bVar19 = puVar10 != (undefined *)0x0;
                  if (puVar10 == &DAT_14c951ef0) break;
                } while (puVar10 != (undefined *)0x0);
              }
              if (bVar19) goto LAB_143f5ac83;
              goto LAB_143f5abcd;
            }
            if ((*(ulonglong *)(puVar12 + 0x18) & DAT_14c951ef8) == 0) goto LAB_143f5abcd;
LAB_143f5ac83:
            uVar14 = 0;
            goto LAB_143f5a904;
          }
          goto LAB_143f5abcd;
        }
        if (local_68 == 0) {
LAB_143f5a9fd:
          puVar11 = &DAT_149dfb77a;
          if ((int)uStack_90 != 0) {
            puVar11 = local_98;
          }
          FUN_1446f470e(&local_a8,puVar11,0);
          pwVar3 = local_a8;
          pwVar9 = local_e0;
          pwVar18 = local_a8;
          while (pwVar18 != (wchar_t *)0x0) {
            for (lVar13 = *(longlong *)(pwVar9 + 0x28); lVar13 != 0;
                lVar13 = *(longlong *)(lVar13 + 0x18)) {
              if ((~*(uint *)(*(longlong *)(lVar13 + 8) + 0x18) & 0x8001) == 0) goto LAB_143f5aaaf;
            }
            pwVar9 = (wchar_t *)(**(code **)(*(longlong *)pwVar9 + 0x2b0))(pwVar9);
            pwVar18 = pwVar9;
          }
LAB_143f5aa64:
          local_68 = 0;
        }
        else {
          puVar12 = *(undefined **)(local_68 + 8);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1)) {
            local_108 = (undefined *)FUN_1446ddbd2();
            local_100 = FUN_1403a682c;
            local_110 = (longlong *)0x0;
            local_118 = (longlong *)0x108001;
            FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
            atexit(FUN_142818c9e);
            _Init_thread_footer(&DAT_14c952a58);
          }
          if (DAT_14c952a10 == 0) {
            bVar19 = puVar12 != (undefined *)0x0;
            if (puVar12 != &DAT_14c952a08 && bVar19) {
              do {
                puVar12 = *(undefined **)(puVar12 + 0x30);
                bVar19 = puVar12 != (undefined *)0x0;
                if (puVar12 == &DAT_14c952a08) break;
              } while (puVar12 != (undefined *)0x0);
            }
            if (!bVar19) goto LAB_143f5a9fd;
          }
          else if ((*(ulonglong *)(puVar12 + 0x18) & DAT_14c952a10) == 0) goto LAB_143f5a9fd;
          for (plVar8 = *(longlong **)(lVar13 + 0x70); plVar8 != (longlong *)0x0;
              plVar8 = (longlong *)(**(code **)(*plVar8 + 0x2b0))(plVar8)) {
            for (lVar13 = plVar8[10]; lVar13 != 0; lVar13 = *(longlong *)(lVar13 + 0x18)) {
              if ((~*(uint *)(*(longlong *)(lVar13 + 8) + 0x18) & 0x8001) == 0) goto LAB_143f5a606;
            }
          }
        }
        goto LAB_143f5abf1;
      }
    }
    lVar13 = 0;
    lVar15 = param_3;
LAB_143f5af40:
    *param_1 = lVar15;
    param_1[1] = lVar13;
    param_1[2] = param_3;
    if (local_80 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if (*param_5 != 0) {
    plVar8 = param_5 + 4;
    if ((longlong *)param_5[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_5[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
LAB_143f5a8f2:
  if (*(wchar_t **)(lVar13 + 0x20) != pwVar3) {
    pwVar18 = (wchar_t *)(lVar13 + 0x18);
    do {
      for (lVar13 = *(longlong *)pwVar18; lVar13 != 0; lVar13 = *(longlong *)(lVar13 + 0x18)) {
        puVar12 = *(undefined **)(lVar13 + 8);
        if ((~*(uint *)(puVar12 + 0x18) & 0x8001) == 0) goto LAB_143f5a8f2;
      }
      pwVar9 = (wchar_t *)(**(code **)(*(longlong *)pwVar9 + 0x2b0))(pwVar9);
      pwVar18 = pwVar9 + 0x28;
    } while (pwVar9 != (wchar_t *)0x0);
    goto LAB_143f5a85c;
  }
  uVar14 = CONCAT71((int7)((ulonglong)pwVar3 >> 8),lVar13 != local_68);
LAB_143f5a904:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
    FUN_1446ddbd2();
    local_100 = FUN_140b31576;
    local_108 = &DAT_14c951a38;
    local_110 = (longlong *)0x0;
    local_118 = (longlong *)0x208001;
    FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0);
    atexit(FUN_14280cbf7);
    _Init_thread_footer(&DAT_14c951ae0);
  }
  if (DAT_14c951a98 == 0) {
    bVar19 = puVar12 != (undefined *)0x0;
    if (puVar12 != &DAT_14c951a90 && bVar19) {
      do {
        puVar12 = *(undefined **)(puVar12 + 0x30);
        bVar19 = puVar12 != (undefined *)0x0;
        if (puVar12 == &DAT_14c951a90) break;
      } while (puVar12 != (undefined *)0x0);
    }
    if (!bVar19) goto LAB_143f5a943;
LAB_143f5ab07:
    local_118 = &local_70;
    FUN_148abc3d5(lVar13,local_ec,uVar14 & 0xffffffff,&local_68);
  }
  else {
    if ((*(ulonglong *)(puVar12 + 0x18) & DAT_14c951a98) != 0) goto LAB_143f5ab07;
LAB_143f5a943:
    puVar12 = *(undefined **)(lVar13 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951f40) && (FUN_144b3d300(&DAT_14c951f40), DAT_14c951f40 == -1)) {
      local_108 = (undefined *)FUN_1446ddbd2();
      local_100 = FUN_140eb3340;
      local_118 = local_e8;
      local_110 = (longlong *)0x0;
      FUN_14000176a(&DAT_14c951ef0,L"FMapProperty",0x400000000000,0);
      atexit(FUN_142815b60);
      _Init_thread_footer(&DAT_14c951f40);
    }
    if (DAT_14c951ef8 == 0) {
      bVar19 = puVar12 != (undefined *)0x0;
      if (puVar12 != &DAT_14c951ef0 && bVar19) {
        do {
          puVar12 = *(undefined **)(puVar12 + 0x30);
          bVar19 = puVar12 != (undefined *)0x0;
          if (puVar12 == &DAT_14c951ef0) break;
        } while (puVar12 != (undefined *)0x0);
      }
      if (bVar19) goto LAB_143f5ab69;
    }
    else if ((*(ulonglong *)(puVar12 + 0x18) & DAT_14c951ef8) != 0) {
LAB_143f5ab69:
      local_110 = &local_70;
      local_118 = &local_68;
      FUN_148abc46b(lVar13,&local_98,local_ec,uVar14 & 0xffffffff);
      goto LAB_143f5abcd;
    }
    puVar12 = *(undefined **)(lVar13 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952900) && (FUN_144b3d300(&DAT_14c952900), DAT_14c952900 == -1)) {
      local_108 = (undefined *)FUN_1446ddbd2();
      local_100 = FUN_1468e4cee;
      local_118 = (longlong *)0x800000008001;
      local_110 = (longlong *)0x0;
      FUN_14000176a(&DAT_14c9528b0,L"FSetProperty",0x800000000000,0);
      atexit(FUN_142817fb7);
      _Init_thread_footer(&DAT_14c952900);
    }
    if (DAT_14c9528b8 == 0) {
      bVar19 = puVar12 != (undefined *)0x0;
      if (puVar12 != &DAT_14c9528b0 && bVar19) {
        do {
          puVar12 = *(undefined **)(puVar12 + 0x30);
          bVar19 = puVar12 != (undefined *)0x0;
          if (puVar12 == &DAT_14c9528b0) break;
        } while (puVar12 != (undefined *)0x0);
      }
      if (bVar19) goto LAB_143f5ac1d;
    }
    else if ((*(ulonglong *)(puVar12 + 0x18) & DAT_14c9528b8) != 0) {
LAB_143f5ac1d:
      local_118 = &local_70;
      FUN_148abc6ce(lVar13,local_ec,uVar14 & 0xffffffff,&local_68);
    }
  }
LAB_143f5abcd:
  if (local_b8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_a8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
LAB_143f5abf1:
  if (local_98 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  param_3 = local_70;
  lVar13 = local_68;
  lVar15 = local_d8;
  param_1 = local_d0;
  if (0x7ffffffe < local_78 - 2U) goto LAB_143f5af40;
  goto LAB_143f5a42c;
LAB_143f5aaaf:
  if (*(wchar_t **)(lVar13 + 0x20) != pwVar3) {
    pwVar18 = (wchar_t *)(lVar13 + 0x18);
    do {
      for (lVar13 = *(longlong *)pwVar18; lVar13 != 0; lVar13 = *(longlong *)(lVar13 + 0x18)) {
        if ((~*(uint *)(*(longlong *)(lVar13 + 8) + 0x18) & 0x8001) == 0) goto LAB_143f5aaaf;
      }
      pwVar9 = (wchar_t *)(**(code **)(*(longlong *)pwVar9 + 0x2b0))(pwVar9);
      pwVar18 = pwVar9 + 0x28;
    } while (pwVar9 != (wchar_t *)0x0);
    goto LAB_143f5aa64;
  }
  iVar6 = *(int *)(lVar13 + 0x44);
  local_68 = lVar13;
LAB_143f5aac1:
  local_70 = local_70 + iVar6;
  goto LAB_143f5abf1;
LAB_143f5a606:
  FUN_1400021e4(lVar13 + 0x20,&local_a8);
  if ((int)uStack_90 == local_a0) {
    bVar19 = true;
    if (1 < (int)uStack_90) {
      lVar15 = 0;
      while( true ) {
        uVar1 = *(ushort *)((longlong)local_98 + lVar15);
        uVar5 = (uint)uVar1;
        uVar2 = *(ushort *)((longlong)local_a8 + lVar15);
        uVar16 = (uint)uVar2;
        if (uVar1 != uVar2) {
          if ((uVar2 | uVar1) < 0x80) {
            uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar16 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_143f5a652;
          }
          iVar6 = uVar5 - uVar16;
          goto LAB_143f5a696;
        }
        if (uVar1 == 0) break;
LAB_143f5a652:
        lVar15 = lVar15 + 2;
      }
      iVar6 = 0;
LAB_143f5a696:
      bVar19 = iVar6 == 0;
    }
  }
  else {
    bVar19 = local_a0 + (int)uStack_90 == 1;
  }
  if (local_a8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (bVar19) {
    iVar6 = *(int *)(lVar13 + 0x44);
    local_68 = lVar13;
    goto LAB_143f5aac1;
  }
  plVar17 = (longlong *)(lVar13 + 0x18);
  do {
    for (lVar13 = *plVar17; lVar13 != 0; lVar13 = *(longlong *)(lVar13 + 0x18)) {
      if ((~*(uint *)(*(longlong *)(lVar13 + 8) + 0x18) & 0x8001) == 0) goto LAB_143f5a606;
    }
    plVar8 = (longlong *)(**(code **)(*plVar8 + 0x2b0))(plVar8);
    plVar17 = plVar8 + 10;
  } while (plVar8 != (longlong *)0x0);
  goto LAB_143f5abf1;
}



// FUNCTION 143f5afd2 FUN_143f5afd2 body=64 status=ok
// SIG undefined FUN_143f5afd2(void)

undefined8 * FUN_143f5afd2(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4ff340;
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



// FUNCTION 143f5b026 FUN_143f5b026 body=118 status=ok
// SIG undefined FUN_143f5b026(void)

void FUN_143f5b026(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4ff340;
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



// FUNCTION 143f5b09c FUN_143f5b09c body=118 status=ok
// SIG undefined FUN_143f5b09c(void)

void FUN_143f5b09c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4ff340;
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



// FUNCTION 143f5b112 FUN_143f5b112 body=156 status=ok
// SIG undefined FUN_143f5b112(void)

void FUN_143f5b112(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b4ff340;
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
                    /* WARNING: Could not recover jumptable at 0x000143f5b19e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f5b1b8 FUN_143f5b1b8 body=20 status=ok
// SIG undefined FUN_143f5b1b8(void)

undefined1 FUN_143f5b1b8(longlong param_1)

{
  FUN_143f5b1cc(param_1 + 0x18);
  return 1;
}



// FUNCTION 143f5b1cc FUN_143f5b1cc body=174 status=ok
// SIG undefined FUN_143f5b1cc(void)

void FUN_143f5b1cc(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  bool bVar7;
  
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return;
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
    if (((((*param_1 != 0) && (*(int *)((longlong)param_1 + 0x14) != 0)) &&
         (uVar2 = *(uint *)(param_1 + 2), -1 < (int)uVar2)) &&
        (((int)uVar2 < DAT_14c9647dc &&
         (plVar6 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
         plVar6 != (longlong *)0x0)))) &&
       (((int)plVar6[2] == *(int *)((longlong)param_1 + 0x14) &&
        (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (*plVar6 != 0)))))) {
      FUN_148abbddc();
    }
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
                    /* WARNING: Could not recover jumptable at 0x000143f5b268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143f5b27a FUN_143f5b27a body=304 status=ok
// SIG undefined FUN_143f5b27a(void)

void FUN_143f5b27a(void)

{
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  code *local_50;
  undefined1 *local_48 [2];
  undefined8 local_38;
  undefined **local_28;
  code *local_20;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_38 = 0;
  local_28 = &PTR_LAB_14b4ff3b0;
  local_20 = FUN_143f5b3ac;
  local_48[0] = &LAB_148abdac0;
  if (DAT_14cac7648 == 0) {
    local_70 = &local_50;
    local_50 = FUN_144a7958c;
    local_60 = FUN_14081d0ea;
    local_68 = FUN_143242436;
    local_78 = &LAB_14789ef1f;
    local_80 = &LAB_1417b008f;
    local_88 = L"Engine";
    local_90 = 0x8000000000;
    local_98 = 0x10000004;
    local_a0 = 0x10;
    local_a8 = 0x2b0;
    FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
  }
  FUN_145ac7e0a(DAT_14cac7648,local_48);
  if ((local_8 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f5b3ac FUN_143f5b3ac body=208 status=ok
// SIG undefined FUN_143f5b3ac(void)

void FUN_143f5b3ac(longlong *param_1)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  
  if ((longlong)(int)param_1[0x44] < 1) {
    if ((DAT_14c76142c != 1) || ((*(byte *)(param_1 + 0x3f) & 2) == 0)) {
      cVar1 = (**(code **)(*param_1 + 0x508))(param_1,0,1,0);
      *(byte *)(param_1 + 0x3f) = *(byte *)(param_1 + 0x3f) & 0xfd | cVar1 * '\x02';
    }
  }
  else {
    lVar3 = *(longlong *)(param_1[0x43] + -8 + (longlong)(int)param_1[0x44] * 8);
    *(byte *)(lVar3 + 0x608) = *(byte *)(lVar3 + 0x608) | 2;
    *(undefined4 *)(lVar3 + 0x10) = 3;
    *(undefined4 *)(lVar3 + 200) = 0xffffffff;
  }
  if ((~*(byte *)((longlong)param_1 + 0x9c) & 3) == 0) {
    bVar2 = *(byte *)((longlong)param_1 + 0x9d);
    if ((bVar2 & 1) == 0) {
LAB_143f5b458:
      *(byte *)((longlong)param_1 + 0x9d) = bVar2 | 1;
      FUN_1401057d4(param_1);
      FUN_14010586c(&DAT_14cad0140,param_1);
      return;
    }
    if (param_1[0x16] == 0) {
      lVar3 = FUN_1448abda6(param_1);
      if (lVar3 == 0) {
        bVar2 = *(byte *)((longlong)param_1 + 0x9d);
        goto LAB_143f5b458;
      }
    }
  }
  return;
}



// FUNCTION 143f5b47c FUN_143f5b47c body=531 status=ok
// SIG undefined FUN_143f5b47c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f5b47c(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_6c;
  code *local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined8 local_58;
  undefined **local_48;
  code *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14098d3d2(FUN_143f5797c,L"/Script/ShiftMicropatching",L"EMicropatchEntryType",&DAT_14cb98558);
  local_68 = (code *)&DAT_14b4fec73;
  local_60 = 2;
  local_5c = 0;
  uVar2 = FUN_14001a6c0(&local_68,1);
  DAT_14cb98588 = (ulonglong)uVar2;
  local_78 = 0;
  FUN_141471170(&DAT_14cb98590,L"gbx.Micropatch.PostLoadLimit",&DAT_14c763b04,
                L"Limits the number of post-load micropatch requests that can happen in a given tick."
               );
  atexit(FUN_143f579b5);
  local_78 = 0;
  FUN_141471170(&DAT_14cb985a0,L"gbx.Micropatch.EnableLogging",&DAT_14cb985b0,
                L"Turns on/off micropatch logging.");
  atexit(FUN_143f579fa);
  DAT_14cb985d0 = 0;
  DAT_14cb985e0 = &PTR_LAB_149e05580;
  _DAT_14cb985e8 = &DAT_143f5afb8;
  DAT_14cb985c0 = &LAB_1467ba4c2;
  atexit((_func_5014 *)&LAB_143f57a3f);
  DAT_14cb98618 = 0;
  _DAT_14cb98620 = 0;
  atexit((_func_5014 *)&LAB_143f59e61);
  FUN_1400b22c2(&local_68,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_68,&DAT_14cb98628);
  if (cVar1 == '\0') {
    _DAT_14cb98628 = 0;
    uRam000000014cb98630 = 0;
  }
  if (local_68 != (code *)0x0) {
    FUN_1400020a8();
  }
  DAT_14cb98638 = 0;
  _DAT_14cb98640 = 0;
  atexit(FUN_143f5a2eb);
  local_58 = 0;
  local_48 = &PTR_LAB_149e01e20;
  local_40 = FUN_143f5b27a;
  local_68 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14cb98648,10,&local_68);
  local_68 = (code *)0x800000014b4feebe;
  local_6c = 0x12;
  local_60 = FUN_14577453c();
  local_5c = 1;
  FUN_1465890b6(&local_68);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f5b690 FUN_143f5b690 body=57 status=ok
// SIG undefined FUN_143f5b690(void)

void FUN_143f5b690(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb98740 == 0) {
    uVar1 = FUN_14658928b();
    DAT_14cb98740 = FUN_14171c317(FUN_14658970d,uVar1,L"EPlayerInteractionType");
  }
  return;
}



// FUNCTION 143f5b6d8 FUN_143f5b6d8 body=166 status=ok
// SIG undefined FUN_143f5b6d8(void)

void FUN_143f5b6d8(void)

{
  FUN_14282b410(L"/Script/ShiftUI",&PTR_FUN_14b4ffa00,1,0,0,0,0);
  FUN_14282b410(L"/Script/ShiftUI",&PTR_FUN_14b500bf0,1,0,0,0,0);
  FUN_14098d3d2(FUN_143f5b690,L"/Script/ShiftUI",L"EPlayerInteractionType",&DAT_14cb98738);
  FUN_14282b410(L"/Script/ShiftUI",&PTR_FUN_14b5012e0,1,0,0,0,0);
  return;
}



// FUNCTION 143f5b780 FUN_143f5b780 body=69 status=ok
// SIG undefined FUN_143f5b780(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f5b780(void)

{
  _DAT_14cb98780 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143f5b7c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb98788,1);
  return;
}



// FUNCTION 143f5b7c6 FUN_143f5b7c6 body=109 status=ok
// SIG undefined FUN_143f5b7c6(void)

void FUN_143f5b7c6(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [36];
  undefined1 local_24 [4];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  FUN_144a13f80(param_1 + 0x1f0,local_24,&local_20,0);
  FUN_144a8b5fe(param_1 + 0x240,local_20);
  FUN_14571a8e6(param_1,1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f5b834 FUN_143f5b834 body=347 status=ok
// SIG undefined FUN_143f5b834(void)

ulonglong FUN_143f5b834(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  ulonglong unaff_RSI;
  undefined7 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  
  lVar6 = *param_1;
  plVar8 = (longlong *)param_1[1];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  plVar9 = plVar8;
  if (lVar6 == 0) {
    unaff_RSI = 0;
  }
  else {
    do {
      uVar5 = (undefined7)(unaff_RSI >> 8);
      unaff_RSI = CONCAT71(uVar5,lVar6 == *param_2);
      plVar8 = plVar9;
      if (lVar6 == *param_2) {
        unaff_RSI = CONCAT71(uVar5,1);
        break;
      }
      plVar7 = *(longlong **)(lVar6 + 0x1c8);
      if (plVar7 == (longlong *)0x0) {
LAB_143f5b89b:
        plVar7 = (longlong *)0x0;
        lVar6 = 0;
      }
      else {
        iVar4 = (int)plVar7[1];
        do {
          if (iVar4 == 0) goto LAB_143f5b89b;
          LOCK();
          iVar3 = (int)plVar7[1];
          bVar10 = iVar4 == iVar3;
          if (bVar10) {
            *(int *)(plVar7 + 1) = iVar4 + 1;
            iVar3 = iVar4;
          }
          iVar4 = iVar3;
          UNLOCK();
        } while (!bVar10);
        lVar6 = *(longlong *)(lVar6 + 0x1c0);
      }
      if (plVar7 == plVar9) {
        if (plVar9 == (longlong *)0x0) {
          plVar8 = (longlong *)0x0;
        }
        else {
          LOCK();
          plVar1 = plVar7 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar2 = (int *)((longlong)plVar7 + 0xc);
            *piVar2 = *piVar2 + -1;
            iVar4 = *piVar2;
            UNLOCK();
            plVar1 = plVar7;
            plVar7 = plVar9;
            goto joined_r0x000143f5b8e5;
          }
        }
      }
      else {
        plVar8 = plVar7;
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
            iVar4 = *piVar2;
            UNLOCK();
            plVar1 = plVar9;
joined_r0x000143f5b8e5:
            plVar8 = plVar7;
            if (iVar4 == 0) {
              (**(code **)(*plVar1 + 0x10))();
            }
          }
        }
      }
      plVar9 = plVar8;
    } while (lVar6 != 0);
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar8 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  plVar8 = (longlong *)param_1[1];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar8 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  plVar8 = (longlong *)param_2[1];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar8 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  return unaff_RSI & 0xffffffff;
}



// FUNCTION 143f5b990 FUN_143f5b990 body=4853 status=ok
// SIG undefined FUN_143f5b990(void)

void FUN_143f5b990(longlong param_1)

{
  int *piVar1;
  ulonglong uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  char cVar9;
  int iVar10;
  uint *puVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  longlong *plVar23;
  longlong *plVar24;
  bool bVar25;
  undefined1 auStack_308 [32];
  longlong **local_2e8;
  longlong local_2d8;
  ulonglong local_2d0;
  longlong local_2c8;
  longlong *local_2c0;
  longlong *local_2b8;
  longlong *local_2b0;
  longlong *local_2a8;
  undefined1 local_298 [8];
  longlong *local_290;
  undefined1 local_288;
  undefined1 uStack_287;
  undefined6 uStack_286;
  longlong *local_280;
  ulonglong uStack_278;
  undefined2 local_270;
  undefined8 *local_268;
  ulonglong uStack_260;
  undefined1 local_258 [8];
  longlong *local_250;
  longlong local_248;
  longlong *local_240;
  undefined2 local_1d8;
  undefined8 *local_1d0;
  int local_1c8;
  longlong local_a0;
  undefined4 local_98;
  undefined8 local_70;
  longlong *local_68;
  undefined1 local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_308;
  local_2d8 = param_1 + -0x28;
  if (*(char *)(param_1 + 0x14b) == '\0') {
    FUN_140a504fe(&local_248);
    local_270 = CONCAT11(1,DAT_14c96b1e1);
    local_1d8 = local_270;
    local_268 = (undefined8 *)0x0;
    uStack_260 = 0;
    if (local_1c8 == 0) {
LAB_143f5bc8c:
      if (local_1d0 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_1d0 != (undefined8 *)0x0) {
      (**(code **)*local_1d0)(local_1d0,0);
      FUN_1446efa72(&local_1d0,0,0,0x10);
      local_1c8 = 0;
      goto LAB_143f5bc8c;
    }
    local_1d0 = (undefined8 *)0x0;
    local_1c8 = 0;
    if ((int)uStack_260 == 0) {
LAB_143f5bcf7:
      if (local_268 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_268 != (undefined8 *)0x0) {
      (**(code **)*local_268)(local_268,0);
      FUN_1446efa72(&local_268,0,0,0x10);
      uStack_260 = uStack_260 & 0xffffffff00000000;
      goto LAB_143f5bcf7;
    }
    local_2e8 = &local_2b0;
    FUN_140a536a8(&local_288,"SOverlay",
                  ".\\../Plugins/ShiftUI/ShiftUIPlugin/Source/Private/ShiftUI.cpp",0xa2);
    if (local_280 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_280 + 1) = (int)local_280[1] + 1;
      UNLOCK();
    }
    plVar23 = *(longlong **)(param_1 + 0x198);
    *(ulonglong *)(param_1 + 400) = CONCAT62(uStack_286,CONCAT11(uStack_287,local_288));
    *(longlong **)(param_1 + 0x198) = local_280;
    if (plVar23 != (longlong *)0x0) {
      LOCK();
      plVar13 = plVar23 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*plVar23)(plVar23);
        LOCK();
        piVar1 = (int *)((longlong)plVar23 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar23 + 0x10))(plVar23);
        }
      }
    }
    FUN_140a4ff16(&local_288,local_258,&local_248);
    if (local_250 != (longlong *)0x0) {
      LOCK();
      plVar23 = local_250 + 1;
      *(int *)plVar23 = (int)*plVar23 + -1;
      UNLOCK();
      if ((int)*plVar23 == 0) {
        (**(code **)*local_250)(local_250);
        LOCK();
        piVar1 = (int *)((longlong)local_250 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_250 + 0x10))(local_250);
        }
      }
    }
    plVar23 = local_280;
    if (local_280 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_280 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*local_280)(local_280);
        LOCK();
        piVar1 = (int *)((longlong)plVar23 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar23 + 0x10))(plVar23);
        }
      }
    }
    FUN_140a54e77(local_a0,local_98);
    if (local_a0 != 0) {
      FUN_1400020a8();
    }
    FUN_140a4ff8c(&local_248);
    if (*(longlong *)(param_1 + 400) == 0) {
LAB_143f5c5a0:
      FUN_145dc291a(local_2d8);
    }
    else {
      FUN_14635688a(&local_248);
      local_60 = 1;
      local_288 = DAT_14c96b1e1;
      uStack_287 = 1;
      local_1d8 = CONCAT11(1,DAT_14c96b1e1);
      local_280 = (longlong *)0x0;
      uStack_278 = 0;
      if (local_1c8 == 0) {
LAB_143f5be75:
        if (local_1d0 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_1d0 != (undefined8 *)0x0) {
        (**(code **)*local_1d0)(local_1d0,0);
        FUN_1446efa72(&local_1d0,0,0,0x10);
        local_1c8 = 0;
        goto LAB_143f5be75;
      }
      local_1d0 = (undefined8 *)0x0;
      local_1c8 = 0;
      if ((int)uStack_278 == 0) {
LAB_143f5bee0:
        if (local_280 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_280 != (longlong *)0x0) {
        (**(code **)*local_280)(local_280,0);
        FUN_1446efa72(&local_280,0,0,0x10);
        uStack_278 = uStack_278 & 0xffffffff00000000;
        goto LAB_143f5bee0;
      }
      plVar13 = local_68;
      local_70 = *(undefined8 *)(param_1 + 400);
      plVar23 = *(longlong **)(param_1 + 0x198);
      if (plVar23 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar23 + 1) = (int)plVar23[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar23 + 1) = (int)plVar23[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar23 + 1) = (int)plVar23[1] + 1;
        UNLOCK();
      }
      plVar24 = plVar23;
      if (local_68 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_68 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          puVar7 = (undefined8 *)*local_68;
          local_68 = plVar23;
          (*(code *)*puVar7)(plVar13);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar24 = local_68;
          if (*piVar1 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
            plVar24 = local_68;
          }
        }
      }
      local_68 = plVar24;
      local_2e8 = &local_2c0;
      FUN_14611196c(&local_2b0,"SSafeZone",
                    ".\\../Plugins/ShiftUI/ShiftUIPlugin/Source/Private/ShiftUI.cpp",0xab);
      if (local_2a8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_2a8 + 1) = (int)local_2a8[1] + 1;
        UNLOCK();
      }
      plVar13 = *(longlong **)(param_1 + 0x188);
      *(longlong **)(param_1 + 0x180) = local_2b0;
      *(longlong **)(param_1 + 0x188) = local_2a8;
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar24 = plVar13 + 1;
        *(int *)plVar24 = (int)*plVar24 + -1;
        UNLOCK();
        if ((int)*plVar24 == 0) {
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
      FUN_145ff525e(&local_2b0,local_298,&local_248);
      if (local_290 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_290 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*local_290)(local_290);
          LOCK();
          piVar1 = (int *)((longlong)local_290 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_290 + 0x10))(local_290);
          }
        }
      }
      plVar13 = local_2a8;
      if (local_2a8 != (longlong *)0x0) {
        LOCK();
        plVar24 = local_2a8 + 1;
        *(int *)plVar24 = (int)*plVar24 + -1;
        UNLOCK();
        if ((int)*plVar24 == 0) {
          (**(code **)*local_2a8)(local_2a8);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
      if (plVar23 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar23 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plVar23)(plVar23);
          LOCK();
          piVar1 = (int *)((longlong)plVar23 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar23 + 0x10))(plVar23);
          }
        }
        LOCK();
        plVar13 = plVar23 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plVar23)(plVar23);
          LOCK();
          piVar1 = (int *)((longlong)plVar23 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar23 + 0x10))(plVar23);
          }
        }
      }
      FUN_146356908(&local_248);
      if (*(longlong *)(param_1 + 0x180) == 0) goto LAB_143f5c5a0;
      plVar13 = (longlong *)FUN_14001cc68(0xc0);
      plVar13[1] = (longlong)&DAT_100000001;
      *plVar13 = (longlong)&PTR_FUN_14b504970;
      plVar23 = plVar13 + 2;
      memset(plVar23,0,0xb0);
      FUN_148ac5190(plVar23);
      if (plVar13 == (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x160) = 0x10;
        plVar23 = *(longlong **)(param_1 + 0x168);
        plVar24 = (longlong *)&DAT_00000010;
        if (plVar23 != (longlong *)0x0) {
          *(undefined8 *)(param_1 + 0x168) = 0;
LAB_143f5c1de:
          LOCK();
          plVar24 = plVar23 + 1;
          *(int *)plVar24 = (int)*plVar24 + -1;
          UNLOCK();
          if ((int)*plVar24 == 0) {
            (**(code **)*plVar23)(plVar23);
            LOCK();
            piVar1 = (int *)((longlong)plVar23 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar23 + 0x10))(plVar23);
            }
          }
          if (plVar13 != (longlong *)0x0) goto LAB_143f5c202;
          goto LAB_143f5c21f;
        }
      }
      else {
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
        *(longlong **)(param_1 + 0x160) = plVar23;
        plVar23 = *(longlong **)(param_1 + 0x168);
        if (plVar13 == plVar23) {
          LOCK();
          plVar23 = plVar13 + 1;
          *(int *)plVar23 = (int)*plVar23 + -1;
          UNLOCK();
          if ((int)*plVar23 == 0) {
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
        else {
          *(longlong **)(param_1 + 0x168) = plVar13;
          if (plVar23 != (longlong *)0x0) goto LAB_143f5c1de;
        }
LAB_143f5c202:
        LOCK();
        plVar23 = plVar13 + 1;
        *(int *)plVar23 = (int)*plVar23 + -1;
        UNLOCK();
        if ((int)*plVar23 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
LAB_143f5c21f:
        plVar24 = *(longlong **)(param_1 + 0x160);
      }
      plVar23 = (longlong *)(param_1 + 0x160);
      if (plVar24 == (longlong *)0x0) goto LAB_143f5c5a0;
      local_2a8 = *(longlong **)(param_1 + 0x168);
      if (local_2a8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_2a8 + 1) = (int)local_2a8[1] + 1;
        UNLOCK();
      }
      local_2b0 = plVar24;
      cVar9 = (**(code **)(*plVar24 + 0xe0))(plVar24,&local_2b0);
      if (cVar9 == '\0') goto LAB_143f5c5a0;
      lVar12 = *plVar23;
      if (*(int *)(lVar12 + 0x88) != 3) {
        FUN_1446efa72((longlong *)(lVar12 + 0x80),0,3,0x10);
        *(undefined4 *)(lVar12 + 0x88) = 3;
      }
      puVar7 = *(undefined8 **)(lVar12 + 0x80);
      *puVar7 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar17 = DAT_14c758608 + 1;
      lVar12 = DAT_14c758608 + 1;
      if (lVar17 == 0) {
        LOCK();
        UNLOCK();
        lVar17 = DAT_14c758608 + 2;
        lVar12 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar12;
      puVar7[2] = lVar17;
      *puVar7 = &PTR_FUN_14b504900;
      puVar7[3] = 0;
      if (local_2d8 == 0) {
        iVar22 = 0;
      }
      else {
        uVar14 = *(uint *)(param_1 + -0x1c);
        *(uint *)(puVar7 + 3) = uVar14;
        if ((int)uVar14 < DAT_14c9647dc) {
          lVar12 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
        }
        else {
          lVar12 = 0;
        }
        iVar22 = *(int *)(lVar12 + 0x10);
        if (*(int *)(lVar12 + 0x10) == 0) {
          LOCK();
          iVar22 = DAT_14c964868 + 1;
          UNLOCK();
          iVar10 = DAT_14c964868 + 1;
          bVar25 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar22;
          if (bVar25) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar10);
          }
          LOCK();
          iVar22 = *(int *)(lVar12 + 0x10);
          bVar25 = iVar22 == 0;
          if (bVar25) {
            *(int *)(lVar12 + 0x10) = iVar10;
            iVar22 = 0;
          }
          UNLOCK();
          if (bVar25) {
            iVar22 = iVar10;
          }
        }
      }
      *(int *)((longlong)puVar7 + 0x1c) = iVar22;
      puVar7[4] = FUN_145e204a6;
      *(undefined4 *)(puVar7 + 5) = 0;
      lVar12 = *plVar23;
      if (*(int *)(lVar12 + 0x98) != 3) {
        FUN_1446efa72((longlong *)(lVar12 + 0x90),0,3,0x10);
        *(undefined4 *)(lVar12 + 0x98) = 3;
      }
      puVar7 = *(undefined8 **)(lVar12 + 0x90);
      *puVar7 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar17 = DAT_14c758608 + 1;
      lVar12 = DAT_14c758608 + 1;
      if (lVar17 == 0) {
        LOCK();
        UNLOCK();
        lVar17 = DAT_14c758608 + 2;
        lVar12 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar12;
      puVar7[2] = lVar17;
      *puVar7 = &PTR_FUN_14b504900;
      puVar7[3] = 0;
      if (local_2d8 == 0) {
        iVar22 = 0;
      }
      else {
        uVar14 = *(uint *)(param_1 + -0x1c);
        *(uint *)(puVar7 + 3) = uVar14;
        if ((int)uVar14 < DAT_14c9647dc) {
          lVar12 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
        }
        else {
          lVar12 = 0;
        }
        iVar22 = *(int *)(lVar12 + 0x10);
        if (*(int *)(lVar12 + 0x10) == 0) {
          LOCK();
          iVar22 = DAT_14c964868 + 1;
          UNLOCK();
          iVar10 = DAT_14c964868 + 1;
          bVar25 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar22;
          if (bVar25) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar10);
          }
          LOCK();
          iVar22 = *(int *)(lVar12 + 0x10);
          bVar25 = iVar22 == 0;
          if (bVar25) {
            *(int *)(lVar12 + 0x10) = iVar10;
            iVar22 = 0;
          }
          UNLOCK();
          if (bVar25) {
            iVar22 = iVar10;
          }
        }
      }
      *(int *)((longlong)puVar7 + 0x1c) = iVar22;
      puVar7[4] = &LAB_148abe37a;
      *(undefined4 *)(puVar7 + 5) = 0;
      lVar12 = *plVar23;
      if (*(int *)(lVar12 + 0x20) != 3) {
        FUN_1446efa72((longlong *)(lVar12 + 0x18),0,3,0x10);
        *(undefined4 *)(lVar12 + 0x20) = 3;
      }
      puVar7 = *(undefined8 **)(lVar12 + 0x18);
      *puVar7 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar17 = DAT_14c758608 + 1;
      lVar12 = DAT_14c758608 + 1;
      if (lVar17 == 0) {
        LOCK();
        UNLOCK();
        lVar17 = DAT_14c758608 + 2;
        lVar12 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar12;
      puVar7[2] = lVar17;
      *puVar7 = &PTR_FUN_14b504900;
      puVar7[3] = 0;
      if (local_2d8 == 0) {
        iVar22 = 0;
      }
      else {
        uVar14 = *(uint *)(param_1 + -0x1c);
        *(uint *)(puVar7 + 3) = uVar14;
        if ((int)uVar14 < DAT_14c9647dc) {
          lVar12 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
        }
        else {
          lVar12 = 0;
        }
        iVar22 = *(int *)(lVar12 + 0x10);
        if (*(int *)(lVar12 + 0x10) == 0) {
          LOCK();
          iVar22 = DAT_14c964868 + 1;
          UNLOCK();
          iVar10 = DAT_14c964868 + 1;
          bVar25 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar22;
          if (bVar25) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar10);
          }
          LOCK();
          iVar22 = *(int *)(lVar12 + 0x10);
          bVar25 = iVar22 == 0;
          if (bVar25) {
            *(int *)(lVar12 + 0x10) = iVar10;
            iVar22 = 0;
          }
          UNLOCK();
          if (bVar25) {
            iVar22 = iVar10;
          }
        }
      }
      *(int *)((longlong)puVar7 + 0x1c) = iVar22;
      puVar7[4] = FUN_146172af2;
      *(undefined4 *)(puVar7 + 5) = 0;
      lVar12 = *plVar23;
      if (*(int *)(lVar12 + 0xa8) != 3) {
        FUN_1446efa72((longlong *)(lVar12 + 0xa0),0,3,0x10);
        *(undefined4 *)(lVar12 + 0xa8) = 3;
      }
      puVar7 = *(undefined8 **)(lVar12 + 0xa0);
      *puVar7 = &PTR_LAB_14b504de0;
      LOCK();
      UNLOCK();
      lVar17 = DAT_14c758608 + 1;
      lVar12 = DAT_14c758608 + 1;
      if (lVar17 == 0) {
        LOCK();
        UNLOCK();
        lVar17 = DAT_14c758608 + 2;
        lVar12 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar12;
      puVar7[2] = lVar17;
      *puVar7 = &PTR_FUN_14b504d70;
      puVar7[3] = 0;
      if (local_2d8 == 0) {
        iVar22 = 0;
      }
      else {
        uVar14 = *(uint *)(param_1 + -0x1c);
        *(uint *)(puVar7 + 3) = uVar14;
        if ((int)uVar14 < DAT_14c9647dc) {
          lVar12 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
        }
        else {
          lVar12 = 0;
        }
        iVar22 = *(int *)(lVar12 + 0x10);
        if (*(int *)(lVar12 + 0x10) == 0) {
          LOCK();
          iVar22 = DAT_14c964868 + 1;
          UNLOCK();
          iVar10 = DAT_14c964868 + 1;
          bVar25 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar22;
          if (bVar25) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar10);
          }
          LOCK();
          iVar22 = *(int *)(lVar12 + 0x10);
          bVar25 = iVar22 == 0;
          if (bVar25) {
            *(int *)(lVar12 + 0x10) = iVar10;
            iVar22 = 0;
          }
          UNLOCK();
          if (bVar25) {
            iVar22 = iVar10;
          }
        }
      }
      *(int *)((longlong)puVar7 + 0x1c) = iVar22;
      puVar7[4] = &LAB_146172c46;
      *(undefined4 *)(puVar7 + 5) = 0;
      FUN_140763f46(*(undefined8 *)(param_1 + 400),&local_248,1);
      local_2c0 = *(longlong **)(*(longlong *)(param_1 + 0x160) + 0x60);
      plVar13 = *(longlong **)(*(longlong *)(param_1 + 0x160) + 0x68);
      if (plVar13 == (longlong *)0x0) {
        local_2b8 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
        local_2b8 = plVar13;
      }
      FUN_140a4fd40(&local_248,&local_2c0);
      plVar24 = local_2b8;
      if (local_2b8 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_2b8 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*local_2b8)(local_2b8);
          LOCK();
          piVar1 = (int *)((longlong)plVar24 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar24 + 0x10))(plVar24);
          }
        }
      }
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar24 = plVar13 + 1;
        *(int *)plVar24 = (int)*plVar24 + -1;
        UNLOCK();
        if ((int)*plVar24 == 0) {
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
      FUN_1407640b6(&local_248);
      FUN_140763f46(*(undefined8 *)(param_1 + 400),&local_248,2);
      local_2c0 = *(longlong **)(*(longlong *)(param_1 + 0x160) + 0x50);
      plVar13 = *(longlong **)(*(longlong *)(param_1 + 0x160) + 0x58);
      if (plVar13 == (longlong *)0x0) {
        local_2b8 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
        local_2b8 = plVar13;
      }
      FUN_140a4fd40(&local_248,&local_2c0);
      plVar24 = local_2b8;
      if (local_2b8 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_2b8 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*local_2b8)(local_2b8);
          LOCK();
          piVar1 = (int *)((longlong)plVar24 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar24 + 0x10))(plVar24);
          }
        }
      }
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar24 = plVar13 + 1;
        *(int *)plVar24 = (int)*plVar24 + -1;
        UNLOCK();
        if ((int)*plVar24 == 0) {
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
      FUN_1407640b6(&local_248);
      plVar13 = (longlong *)FUN_1459d8286();
      lVar12 = plVar13[0x22];
      if (lVar12 == 0) {
        (**(code **)(*plVar13 + 1000))(plVar13);
        lVar12 = plVar13[0x22];
      }
      plVar13 = *(longlong **)(DAT_14cb0d2b0 + 0xc20);
      uVar6 = *(undefined4 *)(lVar12 + 0x28);
      local_248 = *(longlong *)(param_1 + 0x180);
      plVar24 = *(longlong **)(param_1 + 0x188);
      if (plVar24 == (longlong *)0x0) {
        local_240 = (longlong *)0x0;
        (**(code **)(*plVar13 + 0x2d8))();
      }
      else {
        LOCK();
        *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
        UNLOCK();
        local_240 = plVar24;
        (**(code **)(*plVar13 + 0x2d8))(plVar13,&local_248,uVar6);
        LOCK();
        plVar13 = plVar24 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plVar24)(plVar24);
          LOCK();
          piVar1 = (int *)((longlong)plVar24 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar24 + 0x10))(plVar24);
          }
        }
      }
      plVar13 = (longlong *)FUN_14001cc68(0x60,0x10);
      FUN_14613add4(plVar13);
      if (plVar13 == (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x170) = 0x10;
        plVar24 = *(longlong **)(param_1 + 0x178);
        if (plVar24 != (longlong *)0x0) {
          *(undefined8 *)(param_1 + 0x178) = 0;
LAB_143f5c855:
          LOCK();
          plVar8 = plVar24 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
            (**(code **)*plVar24)(plVar24);
            LOCK();
            piVar1 = (int *)((longlong)plVar24 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar24 + 0x10))(plVar24);
            }
          }
          if (plVar13 != (longlong *)0x0) goto LAB_143f5c8d7;
        }
      }
      else {
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
        *(longlong **)(param_1 + 0x170) = plVar13 + 2;
        plVar24 = *(longlong **)(param_1 + 0x178);
        if (plVar13 == plVar24) {
          LOCK();
          plVar24 = plVar13 + 1;
          *(int *)plVar24 = (int)*plVar24 + -1;
          UNLOCK();
          if ((int)*plVar24 == 0) {
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
        else {
          *(longlong **)(param_1 + 0x178) = plVar13;
          if (plVar24 != (longlong *)0x0) goto LAB_143f5c855;
        }
LAB_143f5c8d7:
        LOCK();
        plVar24 = plVar13 + 1;
        *(int *)plVar24 = (int)*plVar24 + -1;
        UNLOCK();
        if ((int)*plVar24 == 0) {
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
      (**(code **)(**(longlong **)(param_1 + 0x170) + 8))(*(longlong **)(param_1 + 0x170),*plVar23);
    }
    *(undefined1 *)(param_1 + 0x14b) = 1;
  }
  if (*(char *)(param_1 + 0x156) == '\x01') {
    FUN_148abe3ce(local_2d8);
  }
  uVar19 = 0;
  local_2d0 = 0;
  if (*(char *)(param_1 + 0x154) == '\x01') {
    local_2d0 = (ulonglong)
                CONCAT31((int3)((uint)*(int *)(param_1 + 0x1d0) >> 8),
                         *(int *)(param_1 + 0x1fc) < *(int *)(param_1 + 0x1d0));
  }
  local_2c8 = param_1 + 0x218;
  iVar22 = *(int *)(param_1 + 0x240);
  if (iVar22 == 0) {
    uVar18 = 1;
    iVar20 = 0;
    iVar10 = 0;
  }
  else {
    puVar11 = *(uint **)(param_1 + 0x238);
    if (*(uint **)(param_1 + 0x238) == (uint *)0x0) {
      puVar11 = (uint *)(param_1 + 0x228);
    }
    uVar14 = *puVar11;
    if (uVar14 == 0) {
      iVar10 = iVar22 + 0x1e;
      if (-1 < iVar22 + -1) {
        iVar10 = iVar22 + -1;
      }
      uVar19 = 0;
      uVar18 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar18 = uVar19;
      }
      iVar20 = 0;
      do {
        if (uVar18 == uVar19) goto LAB_143f5ba99;
        iVar20 = iVar20 + 0x20;
        uVar14 = puVar11[uVar19 + 1];
        uVar19 = uVar19 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar19 = 0;
      iVar20 = 0;
    }
    uVar18 = (ulonglong)(-uVar14 & uVar14);
    uVar2 = uVar18 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar10 = (iVar20 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar22 <= iVar10) {
      iVar10 = iVar22;
    }
  }
  if (iVar10 != iVar22) {
    uVar14 = 0xffffffff;
    do {
      FUN_144a8b5fe(param_1 + 0x1c8,
                    *(undefined8 *)(*(longlong *)(param_1 + 0x218) + (longlong)iVar10 * 0x10));
      uVar14 = ~(uint)uVar18 & uVar14;
      puVar11 = *(uint **)(param_1 + 0x238);
      if (*(uint **)(param_1 + 0x238) == (uint *)0x0) {
        puVar11 = (uint *)(param_1 + 0x228);
      }
      iVar5 = *(int *)(param_1 + 0x240);
      iVar10 = (int)uVar19;
      lVar12 = (longlong)iVar10;
      uVar21 = puVar11[lVar12] & uVar14;
      if (uVar21 == 0) {
        iVar15 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar15 = iVar5 + -1;
        }
        iVar15 = iVar15 >> 5;
        iVar20 = iVar20 + 0x20;
        iVar16 = iVar15;
        if (iVar15 < iVar10) {
          iVar16 = iVar10;
        }
        if (iVar10 < iVar15) {
          lVar17 = 0;
          do {
            uVar21 = puVar11[lVar12 + lVar17 + 1];
            if (uVar21 != 0) {
              uVar19 = (ulonglong)(iVar10 + (int)lVar17 + 1);
              uVar14 = 0xffffffff;
              goto LAB_143f5bbf1;
            }
            iVar20 = iVar20 + 0x20;
            lVar17 = lVar17 + 1;
          } while (iVar16 - lVar12 != lVar17);
          uVar14 = 0xffffffff;
          lVar12 = (longlong)iVar16;
        }
        uVar19 = lVar12 + 1U & 0xffffffff;
        iVar10 = iVar5;
      }
      else {
LAB_143f5bbf1:
        uVar18 = (ulonglong)(-uVar21 & uVar21);
        uVar2 = uVar18 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar10 = (iVar20 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar5 <= iVar10) {
          iVar10 = iVar5;
        }
      }
    } while (iVar10 != iVar22);
  }
LAB_143f5ba99:
  FUN_1408d9e0e(local_2c8,0);
  if (*(char *)(param_1 + 0x158) != '\0') {
    FUN_146036c9c(1);
    *(undefined1 *)(param_1 + 0x158) = 0;
  }
  if ((*(char *)(param_1 + 0x154) != '\x01') ||
     (*(int *)(param_1 + 0x1d0) <= *(int *)(param_1 + 0x1fc))) {
    if ((*(char *)(param_1 + 0x14d) == '\x01') &&
       (((*(longlong **)(param_1 + 0x160) != (longlong *)0x0 &&
         (lVar12 = (**(code **)(**(longlong **)(param_1 + 0x160) + 0xf8))(), lVar12 != 0)) &&
        (plVar23 = *(longlong **)(param_1 + 0x170), plVar23 != (longlong *)0x0)))) {
      plVar13 = *(longlong **)(param_1 + 0x160);
      plVar24 = *(longlong **)(param_1 + 0x178);
      if (plVar24 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
        UNLOCK();
      }
      (**(code **)(*plVar23 + 0x58))(plVar23);
      if ((int)local_240 < 2) {
        bVar25 = false;
      }
      else {
        lVar12 = 7;
        lVar17 = 0;
LAB_143f5c134:
        uVar3 = *(ushort *)(local_248 + lVar17);
        uVar4 = *(ushort *)((longlong)&DAT_14b457594 + lVar17);
        if (uVar3 == uVar4) {
          iVar22 = 0;
          if ((uVar3 == 0) || (lVar12 == 1)) goto LAB_143f5c925;
LAB_143f5c159:
          lVar12 = lVar12 + -1;
          lVar17 = lVar17 + 2;
          goto LAB_143f5c134;
        }
        if ((uVar4 | uVar3) < 0x80) {
          if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[(uint)uVar4]) {
            iVar22 = (uint)(byte)(&DAT_149e05da0)[uVar3] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar4]
            ;
            goto LAB_143f5c925;
          }
          if (lVar12 == 1) {
            iVar22 = 0;
            goto LAB_143f5c925;
          }
          goto LAB_143f5c159;
        }
        iVar22 = (uint)uVar3 - (uint)uVar4;
LAB_143f5c925:
        bVar25 = iVar22 == 0;
      }
      if (local_248 != 0) {
        FUN_1400020a8();
      }
      if (bVar25) {
        if (plVar24 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
          UNLOCK();
        }
        plVar8 = (longlong *)plVar13[7];
        plVar13[6] = (longlong)plVar23;
        plVar13[7] = (longlong)plVar24;
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar23 = plVar8 + 1;
          *(int *)plVar23 = (int)*plVar23 + -1;
          UNLOCK();
          if ((int)*plVar23 == 0) {
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
        cVar9 = (**(code **)(*plVar13 + 0xd8))(plVar13);
        if (cVar9 != '\0') {
          *(undefined1 *)(plVar13 + 5) = 0;
        }
      }
      if (plVar24 != (longlong *)0x0) {
        LOCK();
        plVar23 = plVar24 + 1;
        *(int *)plVar23 = (int)*plVar23 + -1;
        UNLOCK();
        if ((int)*plVar23 == 0) {
          (**(code **)*plVar24)(plVar24);
          LOCK();
          piVar1 = (int *)((longlong)plVar24 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar24 + 0x10))(plVar24);
          }
        }
      }
      *(undefined2 *)(param_1 + 0x14d) = 0x100;
    }
    if (((((*(longlong *)(param_1 + 0x180) == 0) ||
          (cVar9 = *(char *)(*(longlong *)(param_1 + 0x180) + 0x39), cVar9 != DAT_14c96b238)) ||
         ((*(longlong *)(param_1 + 400) == 0 ||
          (*(char *)(*(longlong *)(param_1 + 400) + 0x39) != cVar9)))) &&
        (*(longlong **)(param_1 + 0x160) != (longlong *)0x0)) &&
       ((((cVar9 = (**(code **)(**(longlong **)(param_1 + 0x160) + 0x120))(), cVar9 != '\0' ||
          (cVar9 = (**(code **)(**(longlong **)(param_1 + 0x160) + 0x138))(), cVar9 != '\0')) &&
         (uVar19 = local_2d0, FUN_146036bc6(local_2d8,local_2d0 & 0xffffffff), (char)uVar19 != '\0')
         ) && ((*(longlong **)(param_1 + 0x170) != (longlong *)0x0 &&
               (cVar9 = (**(code **)(**(longlong **)(param_1 + 0x170) + 0x78))(), cVar9 != '\0')))))
       ) {
      *(undefined1 *)(param_1 + 0x14c) = 1;
    }
    if (*(longlong **)(param_1 + 0x160) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x160) + 0xd0))();
    }
    if ((*(char *)(param_1 + 0x14c) == '\x01') && (*(char *)(param_1 + 0x14e) == '\x01')) {
      FUN_141600210(local_2d8);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f5cc86 FUN_143f5cc86 body=293 status=ok
// SIG undefined FUN_143f5cc86(void)

void FUN_143f5cc86(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  void *_Src;
  undefined4 uVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong **)(param_1 + 0x198) != (longlong *)0x0) {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x198) + 0x20))();
    if (((cVar3 != '\0') && (DAT_14cb987b8 = param_2, *(char *)(param_1 + 0x176) == '\0')) &&
       (*(char *)(param_1 + 0x175) == '\0')) {
      if (*(longlong **)(param_1 + 0x188) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x188) + 0x140))();
      }
      uVar2 = DAT_14cb987b8;
      plVar1 = *(longlong **)(param_1 + 0x198);
      if (plVar1 != (longlong *)0x0) {
        local_50 = (void *)0x0;
        local_48 = *(int *)(param_4 + 1);
        lVar4 = (longlong)local_48;
        _Src = (void *)*param_4;
        if (lVar4 == 0) {
          local_44 = 0;
        }
        else {
          FUN_1446dd670(&local_50,local_48,0);
          memcpy(local_50,_Src,lVar4 * 2);
        }
        (**(code **)(*plVar1 + 0x68))(plVar1,param_3,&local_50,uVar2);
        (**(code **)(**(longlong **)(param_1 + 0x198) + 0x90))();
      }
      *(undefined1 *)(param_1 + 0x175) = 1;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f5ce1a FUN_143f5ce1a body=44 status=ok
// SIG undefined FUN_143f5ce1a(void)

void FUN_143f5ce1a(longlong param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  code *pcVar2;
  void *pvVar3;
  undefined8 uVar4;
  longlong *plVar5;
  void **ppvVar6;
  undefined1 auStack_b8 [40];
  undefined1 auStack_90 [4];
  undefined1 auStack_8c [4];
  longlong *aplStack_88 [2];
  undefined1 auStack_78 [8];
  void *pvStack_70;
  int iStack_68;
  int iStack_64;
  void *pvStack_60;
  int iStack_58;
  int iStack_54;
  wchar_t *pwStack_50;
  undefined4 uStack_48;
  ulonglong uStack_40;
  
  if (((*(char *)(*(longlong *)(DAT_14cb98ab0 + 0x28) + 0x170) != '\x01') ||
      (*(longlong *)(param_1 + 0x198) == 0)) ||
     (*(longlong *)(*(longlong *)(param_1 + 0x198) + 0x40) == 0)) {
    return;
  }
  uStack_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1400b22c2(&pvStack_70,&DAT_149e02088);
  FUN_1400b22c2(&pvStack_60,&DAT_149e02088);
  if (param_3 == '\0') {
    auStack_78[0] = 0;
    pwStack_50 = L"Error_Invite_Room_Title";
    uStack_48 = 0x17;
    FUN_1446e940c(auStack_8c,&pwStack_50);
    pwStack_50 = L"ShiftUI";
    uStack_48 = 7;
    FUN_1446e940c(auStack_90,&pwStack_50);
    pwStack_50 = L"Failed To Send Game Invite";
    uStack_48 = 0x1a;
    FUN_140208c1e(aplStack_88,auStack_90,auStack_8c,&pwStack_50);
    plVar5 = aplStack_88[0];
    if (*(code **)(*aplStack_88[0] + 0x50) != FUN_144828418) {
      plVar5 = (longlong *)(**(code **)(*aplStack_88[0] + 0x50))();
    }
    FUN_1447a1fc0(plVar5);
    pcVar2 = *(code **)(*aplStack_88[0] + 0x28);
    if (pcVar2 == FUN_14482841c) {
      ppvVar6 = (void **)(aplStack_88[0] + 3);
      if (aplStack_88[0][5] != 0) {
        ppvVar6 = (void **)(aplStack_88[0][5] + 8);
      }
    }
    else if (pcVar2 == (code *)&LAB_14010c34c) {
      ppvVar6 = (void **)(aplStack_88[0] + 2);
    }
    else {
      ppvVar6 = (void **)(*pcVar2)(aplStack_88[0]);
    }
    if (&pvStack_70 != ppvVar6) {
      iVar1 = *(int *)(ppvVar6 + 1);
      pvVar3 = *ppvVar6;
      iStack_68 = iVar1;
      if (iVar1 == 0 && iStack_64 == 0) {
        iStack_64 = 0;
      }
      else {
        FUN_1446dd670(&pvStack_70,iVar1);
        if (iVar1 != 0) {
          memcpy(pvStack_70,pvVar3,(longlong)iVar1 * 2);
        }
      }
    }
    if (aplStack_88[0] != (longlong *)0x0) {
      (**(code **)(*aplStack_88[0] + 0x10))();
    }
    pwStack_50 = L"Error_Invite_Room_Desc";
    uStack_48 = 0x16;
    FUN_1446e940c(auStack_8c,&pwStack_50);
    pwStack_50 = L"ShiftUI";
    uStack_48 = 7;
    FUN_1446e940c(auStack_90,&pwStack_50);
    pwStack_50 = L"Unable to invite player to game";
    uStack_48 = 0x1f;
  }
  else {
    auStack_78[0] = 1;
    pwStack_50 = L"Invite_Room_Title";
    uStack_48 = 0x11;
    FUN_1446e940c(auStack_8c,&pwStack_50);
    pwStack_50 = L"ShiftUI";
    uStack_48 = 7;
    FUN_1446e940c(auStack_90,&pwStack_50);
    pwStack_50 = L"Game Invite Sent";
    uStack_48 = 0x10;
    FUN_140208c1e(aplStack_88,auStack_90,auStack_8c,&pwStack_50);
    plVar5 = aplStack_88[0];
    if (*(code **)(*aplStack_88[0] + 0x50) != FUN_144828418) {
      plVar5 = (longlong *)(**(code **)(*aplStack_88[0] + 0x50))();
    }
    FUN_1447a1fc0(plVar5);
    pcVar2 = *(code **)(*aplStack_88[0] + 0x28);
    if (pcVar2 == FUN_14482841c) {
      ppvVar6 = (void **)(aplStack_88[0] + 3);
      if (aplStack_88[0][5] != 0) {
        ppvVar6 = (void **)(aplStack_88[0][5] + 8);
      }
    }
    else if (pcVar2 == (code *)&LAB_14010c34c) {
      ppvVar6 = (void **)(aplStack_88[0] + 2);
    }
    else {
      ppvVar6 = (void **)(*pcVar2)(aplStack_88[0]);
    }
    if (&pvStack_70 != ppvVar6) {
      iVar1 = *(int *)(ppvVar6 + 1);
      pvVar3 = *ppvVar6;
      iStack_68 = iVar1;
      if (iVar1 == 0 && iStack_64 == 0) {
        iStack_64 = 0;
      }
      else {
        FUN_1446dd670(&pvStack_70,iVar1);
        if (iVar1 != 0) {
          memcpy(pvStack_70,pvVar3,(longlong)iVar1 * 2);
        }
      }
    }
    if (aplStack_88[0] != (longlong *)0x0) {
      (**(code **)(*aplStack_88[0] + 0x10))();
    }
    pwStack_50 = L"Invite_Room_Desc";
    uStack_48 = 0x10;
    FUN_1446e940c(auStack_8c,&pwStack_50);
    pwStack_50 = L"ShiftUI";
    uStack_48 = 7;
    FUN_1446e940c(auStack_90,&pwStack_50);
    pwStack_50 = L"Invitation was successfully sent.";
    uStack_48 = 0x21;
  }
  FUN_140208c1e(aplStack_88,auStack_90,auStack_8c,&pwStack_50);
  plVar5 = aplStack_88[0];
  if (*(code **)(*aplStack_88[0] + 0x50) != FUN_144828418) {
    plVar5 = (longlong *)(**(code **)(*aplStack_88[0] + 0x50))();
  }
  FUN_1447a1fc0(plVar5);
  pcVar2 = *(code **)(*aplStack_88[0] + 0x28);
  if (pcVar2 == FUN_14482841c) {
    ppvVar6 = (void **)(aplStack_88[0] + 3);
    if (aplStack_88[0][5] != 0) {
      ppvVar6 = (void **)(aplStack_88[0][5] + 8);
    }
  }
  else if (pcVar2 == (code *)&LAB_14010c34c) {
    ppvVar6 = (void **)(aplStack_88[0] + 2);
  }
  else {
    ppvVar6 = (void **)(*pcVar2)(aplStack_88[0]);
  }
  if (&pvStack_60 != ppvVar6) {
    iVar1 = *(int *)(ppvVar6 + 1);
    pvVar3 = *ppvVar6;
    iStack_58 = iVar1;
    if (iVar1 == 0 && iStack_54 == 0) {
      iStack_54 = 0;
    }
    else {
      FUN_1446dd670(&pvStack_60,iVar1);
      if (iVar1 != 0) {
        memcpy(pvStack_60,pvVar3,(longlong)iVar1 * 2);
      }
    }
  }
  if (aplStack_88[0] != (longlong *)0x0) {
    (**(code **)(*aplStack_88[0] + 0x10))();
  }
  if (DAT_14cb98810 != (longlong *)0x0) {
    uVar4 = (**(code **)(*DAT_14cb98810 + 0xf8))();
    FUN_148abf534(uVar4,"Player_Profile_Invite_To_Game_Response",auStack_78);
  }
  if (pvStack_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (pvStack_70 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((uStack_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f5ce46 FUN_143f5ce46 body=1255 status=ok
// SIG undefined FUN_143f5ce46(void)

void FUN_143f5ce46(undefined8 param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  code *pcVar2;
  void *pvVar3;
  undefined8 uVar4;
  longlong *plVar5;
  void **ppvVar6;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [4];
  undefined1 local_8c [4];
  longlong *local_88 [2];
  undefined1 local_78 [8];
  void *local_70;
  int local_68;
  int local_64;
  void *local_60;
  int local_58;
  int local_54;
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1400b22c2(&local_70,&DAT_149e02088);
  FUN_1400b22c2(&local_60,&DAT_149e02088);
  if (param_3 == '\0') {
    local_78[0] = 0;
    local_50 = L"Error_Invite_Room_Title";
    local_48 = 0x17;
    FUN_1446e940c(local_8c,&local_50);
    local_50 = L"ShiftUI";
    local_48 = 7;
    FUN_1446e940c(local_90,&local_50);
    local_50 = L"Failed To Send Game Invite";
    local_48 = 0x1a;
    FUN_140208c1e(local_88,local_90,local_8c,&local_50);
    plVar5 = local_88[0];
    if (*(code **)(*local_88[0] + 0x50) != FUN_144828418) {
      plVar5 = (longlong *)(**(code **)(*local_88[0] + 0x50))();
    }
    FUN_1447a1fc0(plVar5);
    pcVar2 = *(code **)(*local_88[0] + 0x28);
    if (pcVar2 == FUN_14482841c) {
      ppvVar6 = (void **)(local_88[0] + 3);
      if (local_88[0][5] != 0) {
        ppvVar6 = (void **)(local_88[0][5] + 8);
      }
    }
    else if (pcVar2 == (code *)&LAB_14010c34c) {
      ppvVar6 = (void **)(local_88[0] + 2);
    }
    else {
      ppvVar6 = (void **)(*pcVar2)(local_88[0]);
    }
    if (&local_70 != ppvVar6) {
      iVar1 = *(int *)(ppvVar6 + 1);
      pvVar3 = *ppvVar6;
      local_68 = iVar1;
      if (iVar1 == 0 && local_64 == 0) {
        local_64 = 0;
      }
      else {
        FUN_1446dd670(&local_70,iVar1);
        if (iVar1 != 0) {
          memcpy(local_70,pvVar3,(longlong)iVar1 * 2);
        }
      }
    }
    if (local_88[0] != (longlong *)0x0) {
      (**(code **)(*local_88[0] + 0x10))();
    }
    local_50 = L"Error_Invite_Room_Desc";
    local_48 = 0x16;
    FUN_1446e940c(local_8c,&local_50);
    local_50 = L"ShiftUI";
    local_48 = 7;
    FUN_1446e940c(local_90,&local_50);
    local_50 = L"Unable to invite player to game";
    local_48 = 0x1f;
  }
  else {
    local_78[0] = 1;
    local_50 = L"Invite_Room_Title";
    local_48 = 0x11;
    FUN_1446e940c(local_8c,&local_50);
    local_50 = L"ShiftUI";
    local_48 = 7;
    FUN_1446e940c(local_90,&local_50);
    local_50 = L"Game Invite Sent";
    local_48 = 0x10;
    FUN_140208c1e(local_88,local_90,local_8c,&local_50);
    plVar5 = local_88[0];
    if (*(code **)(*local_88[0] + 0x50) != FUN_144828418) {
      plVar5 = (longlong *)(**(code **)(*local_88[0] + 0x50))();
    }
    FUN_1447a1fc0(plVar5);
    pcVar2 = *(code **)(*local_88[0] + 0x28);
    if (pcVar2 == FUN_14482841c) {
      ppvVar6 = (void **)(local_88[0] + 3);
      if (local_88[0][5] != 0) {
        ppvVar6 = (void **)(local_88[0][5] + 8);
      }
    }
    else if (pcVar2 == (code *)&LAB_14010c34c) {
      ppvVar6 = (void **)(local_88[0] + 2);
    }
    else {
      ppvVar6 = (void **)(*pcVar2)(local_88[0]);
    }
    if (&local_70 != ppvVar6) {
      iVar1 = *(int *)(ppvVar6 + 1);
      pvVar3 = *ppvVar6;
      local_68 = iVar1;
      if (iVar1 == 0 && local_64 == 0) {
        local_64 = 0;
      }
      else {
        FUN_1446dd670(&local_70,iVar1);
        if (iVar1 != 0) {
          memcpy(local_70,pvVar3,(longlong)iVar1 * 2);
        }
      }
    }
    if (local_88[0] != (longlong *)0x0) {
      (**(code **)(*local_88[0] + 0x10))();
    }
    local_50 = L"Invite_Room_Desc";
    local_48 = 0x10;
    FUN_1446e940c(local_8c,&local_50);
    local_50 = L"ShiftUI";
    local_48 = 7;
    FUN_1446e940c(local_90,&local_50);
    local_50 = L"Invitation was successfully sent.";
    local_48 = 0x21;
  }
  FUN_140208c1e(local_88,local_90,local_8c,&local_50);
  plVar5 = local_88[0];
  if (*(code **)(*local_88[0] + 0x50) != FUN_144828418) {
    plVar5 = (longlong *)(**(code **)(*local_88[0] + 0x50))();
  }
  FUN_1447a1fc0(plVar5);
  pcVar2 = *(code **)(*local_88[0] + 0x28);
  if (pcVar2 == FUN_14482841c) {
    ppvVar6 = (void **)(local_88[0] + 3);
    if (local_88[0][5] != 0) {
      ppvVar6 = (void **)(local_88[0][5] + 8);
    }
  }
  else if (pcVar2 == (code *)&LAB_14010c34c) {
    ppvVar6 = (void **)(local_88[0] + 2);
  }
  else {
    ppvVar6 = (void **)(*pcVar2)(local_88[0]);
  }
  if (&local_60 != ppvVar6) {
    iVar1 = *(int *)(ppvVar6 + 1);
    pvVar3 = *ppvVar6;
    local_58 = iVar1;
    if (iVar1 == 0 && local_54 == 0) {
      local_54 = 0;
    }
    else {
      FUN_1446dd670(&local_60,iVar1);
      if (iVar1 != 0) {
        memcpy(local_60,pvVar3,(longlong)iVar1 * 2);
      }
    }
  }
  if (local_88[0] != (longlong *)0x0) {
    (**(code **)(*local_88[0] + 0x10))();
  }
  if (DAT_14cb98810 != (longlong *)0x0) {
    uVar4 = (**(code **)(*DAT_14cb98810 + 0xf8))();
    FUN_148abf534(uVar4,"Player_Profile_Invite_To_Game_Response",local_78);
  }
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_70 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f5d32e FUN_143f5d32e body=1311 status=ok
// SIG undefined FUN_143f5d32e(void)

void FUN_143f5d32e(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong lVar1;
  void *pvVar2;
  byte bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ushort uVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  longlong lVar13;
  ushort uVar14;
  ulonglong uVar15;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined4 *local_f8;
  ulonglong *local_f0;
  longlong local_e8;
  undefined4 local_e0;
  longlong local_d8;
  undefined4 local_d0;
  void *local_c8;
  int local_c0;
  undefined4 local_bc;
  undefined8 *local_b8;
  undefined4 local_b0;
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  undefined4 *local_98;
  int local_90;
  undefined4 local_88 [2];
  void *local_80;
  int local_78;
  undefined4 local_74;
  void *local_70;
  int local_68;
  undefined4 local_64;
  void *local_60;
  int local_58;
  undefined4 local_54;
  undefined2 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((((char)(*(longlong **)(DAT_14cb98ab0 + 0x28))[0x2e] == '\x01') &&
      (*(longlong *)(param_1 + 0x198) != 0)) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x198) + 0x40), lVar1 != 0)) {
    uVar4 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
    plVar5 = (longlong *)FUN_140773fe2();
    if (((plVar5 != (longlong *)0x0) &&
        (lVar6 = (**(code **)(*plVar5 + 0x2d0))(plVar5,param_2,uVar4), lVar6 != 0)) &&
       (*(longlong *)(lVar6 + 0x2b8) != 0)) {
      FUN_14150a9d5(&local_98,lVar6,4);
      local_a8 = (void *)0x0;
      local_a0 = *(int *)(param_3 + 1);
      lVar13 = (longlong)local_a0;
      pvVar2 = (void *)*param_3;
      if (lVar13 == 0) {
        local_9c = 0;
      }
      else {
        FUN_1446dd670(&local_a8,local_a0,0);
        memcpy(local_a8,pvVar2,lVar13 * 2);
      }
      bVar3 = 1;
      puVar12 = local_98;
      if ((longlong)local_90 != 0) {
        puVar12 = local_98 + (longlong)local_90 * 0x10;
        puVar11 = local_98;
LAB_143f5d475:
        if (puVar11[4] != local_a0) {
          if (puVar11[4] + local_a0 == 1) goto LAB_143f5d4e6;
          goto LAB_143f5d4d8;
        }
        if (1 < local_a0) {
          lVar13 = 0;
          do {
            uVar9 = *(ushort *)(*(longlong *)(puVar11 + 2) + lVar13);
            uVar10 = (ulonglong)uVar9;
            uVar14 = *(ushort *)((longlong)local_a8 + lVar13);
            if (uVar9 == uVar14) {
              if (uVar9 == 0) break;
            }
            else {
              if (0x7f < (uVar14 | uVar9)) goto LAB_143f5d4c5;
              uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
              uVar15 = (ulonglong)uVar14;
              uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
              if ((&DAT_149e05da0)[uVar10] != (&DAT_149e05da0)[uVar15]) goto LAB_143f5d4c5;
            }
            lVar13 = lVar13 + 2;
          } while( true );
        }
        goto LAB_143f5d4e6;
      }
LAB_143f5d4e9:
      if (local_a8 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (!(bool)(bVar3 | puVar12 == (undefined4 *)0x0)) {
        local_c8 = (void *)0x0;
        local_c0 = *(int *)(param_3 + 1);
        lVar13 = (longlong)local_c0;
        pvVar2 = (void *)*param_3;
        local_d8 = lVar1;
        local_d0 = param_2;
        if (lVar13 == 0) {
          local_bc = 0;
        }
        else {
          FUN_1446dd670(&local_c8,local_c0,0);
          memcpy(local_c8,pvVar2,lVar13 * 2);
        }
        local_b8 = (undefined8 *)0x0;
        local_b0 = 0;
        FUN_1446efa72(&local_b8,0,4,0x10);
        pvVar2 = local_c8;
        local_b0 = 4;
        *local_b8 = &PTR_LAB_14b505290;
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 1;
        lVar13 = DAT_14c758608 + 1;
        if (lVar7 == 0) {
          LOCK();
          UNLOCK();
          lVar7 = DAT_14c758608 + 2;
          lVar13 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar13;
        local_b8[2] = lVar7;
        *local_b8 = &PTR_FUN_14b506050;
        local_b8[3] = local_d8;
        *(undefined4 *)(local_b8 + 4) = local_d0;
        local_b8[5] = 0;
        lVar13 = (longlong)local_c0;
        *(int *)(local_b8 + 6) = local_c0;
        if (lVar13 == 0) {
          *(undefined4 *)((longlong)local_b8 + 0x34) = 0;
        }
        else {
          puVar8 = local_b8 + 5;
          FUN_1446dd670(puVar8,local_c0,0);
          memcpy((void *)*puVar8,pvVar2,lVar13 * 2);
        }
        local_88[0] = *puVar12;
        local_80 = (void *)0x0;
        local_78 = puVar12[4];
        lVar13 = (longlong)local_78;
        pvVar2 = *(void **)(puVar12 + 2);
        if (lVar13 == 0) {
          local_74 = 0;
        }
        else {
          FUN_1446dd670(&local_80,local_78,0);
          memcpy(local_80,pvVar2,lVar13 * 2);
        }
        local_70 = (void *)0x0;
        local_68 = puVar12[8];
        lVar13 = (longlong)local_68;
        pvVar2 = *(void **)(puVar12 + 6);
        if (lVar13 == 0) {
          local_64 = 0;
        }
        else {
          FUN_1446dd670(&local_70,local_68,0);
          memcpy(local_70,pvVar2,lVar13 * 2);
        }
        local_60 = (void *)0x0;
        local_58 = puVar12[0xc];
        lVar13 = (longlong)local_58;
        pvVar2 = *(void **)(puVar12 + 10);
        if (lVar13 == 0) {
          local_54 = 0;
        }
        else {
          FUN_1446dd670(&local_60,local_58,0);
          memcpy(local_60,pvVar2,lVar13 * 2);
        }
        local_50 = *(undefined2 *)(puVar12 + 0xe);
        local_f8 = local_88;
        local_f0 = &local_48;
        FUN_148abf780(&local_e8);
        local_108 = 1;
        FUN_14624c942(lVar1,lVar6,&local_e8,&local_b8);
        FUN_141323308(local_e8,local_e0);
        if (local_e8 != 0) {
          FUN_1400020a8();
        }
        if (local_60 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_70 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_80 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_c8 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      FUN_141323308(local_98,local_90);
      if (local_98 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_143f5d4c5:
  if (uVar9 == uVar14) {
LAB_143f5d4e6:
    bVar3 = 0;
    puVar12 = puVar11;
    goto LAB_143f5d4e9;
  }
LAB_143f5d4d8:
  puVar11 = puVar11 + 0x10;
  if (puVar11 == puVar12) goto LAB_143f5d4e9;
  goto LAB_143f5d475;
}



// FUNCTION 143f5d84e FUN_143f5d84e body=441 status=ok
// SIG undefined FUN_143f5d84e(void)

void FUN_143f5d84e(longlong param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  ushort uVar6;
  ulonglong uVar7;
  ushort uVar8;
  undefined *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if (((*(char *)(*(longlong *)(DAT_14cb98ab0 + 0x28) + 0x170) == '\x01') &&
      (*(longlong *)(param_1 + 0x198) != 0)) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x198) + 0x40) != 0)) {
    if (DAT_14cb98910 != DAT_14cb9893c) {
      puVar9 = &DAT_14cb98940;
      if (DAT_14cb98948 != (undefined *)0x0) {
        puVar9 = DAT_14cb98948;
      }
      iVar4 = *(int *)(puVar9 + (ulonglong)(DAT_14cb98950 - 1U & param_2) * 4);
      while (iVar4 != -1) {
        lVar10 = DAT_14cb98908 + (longlong)iVar4 * 0x20;
        if (*(uint *)(DAT_14cb98908 + (longlong)iVar4 * 0x20) == param_2) goto LAB_143f5d8e9;
        iVar4 = *(int *)(lVar10 + 0x18);
      }
    }
    lVar10 = 0;
LAB_143f5d8e9:
    if ((longlong)*(int *)(lVar10 + 0x10) != 0) {
      plVar3 = *(longlong **)(lVar10 + 8);
      plVar5 = plVar3 + (longlong)*(int *)(lVar10 + 0x10) * 0x19;
      iVar4 = (int)param_3[1];
LAB_143f5d912:
      plVar1 = plVar5 + -0x18;
      plVar5 = plVar5 + -0x19;
      if (iVar4 != (int)*plVar1) {
        if ((int)*plVar1 + iVar4 == 1) goto LAB_143f5d97c;
        goto LAB_143f5d975;
      }
      if (1 < iVar4) {
        lVar10 = 0;
        do {
          uVar6 = *(ushort *)(*param_3 + lVar10);
          uVar7 = (ulonglong)uVar6;
          uVar8 = *(ushort *)(*plVar5 + lVar10);
          if (uVar6 == uVar8) {
            if (uVar6 == 0) break;
          }
          else {
            if (0x7f < (uVar8 | uVar6)) goto LAB_143f5d965;
            uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
            uVar11 = (ulonglong)uVar8;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar7] != (&DAT_149e05da0)[uVar11]) goto LAB_143f5d965;
          }
          lVar10 = lVar10 + 2;
        } while( true );
      }
      goto LAB_143f5d97c;
    }
  }
  return;
LAB_143f5d965:
  if (uVar6 == uVar8) {
LAB_143f5d97c:
    iVar4 = (int)((ulonglong)((longlong)plVar5 - (longlong)plVar3) >> 3) * -0x3d70a3d7;
    if (iVar4 == -1) {
      return;
    }
    if (DAT_14cb98910 == DAT_14cb9893c) goto LAB_143f5d9e8;
    puVar9 = &DAT_14cb98940;
    if (DAT_14cb98948 != (undefined *)0x0) {
      puVar9 = DAT_14cb98948;
    }
    iVar2 = *(int *)(puVar9 + (ulonglong)(DAT_14cb98950 - 1U & param_2) * 4);
    goto joined_r0x000143f5d9c6;
  }
LAB_143f5d975:
  if (plVar5 == plVar3) {
    return;
  }
  goto LAB_143f5d912;
joined_r0x000143f5d9c6:
  if (iVar2 == -1) {
LAB_143f5d9e8:
    lVar10 = 0;
LAB_143f5d9ea:
    FUN_148abfbc6(lVar10 + 8,iVar4);
    FUN_14154d759();
    return;
  }
  lVar10 = DAT_14cb98908 + (longlong)iVar2 * 0x20;
  if (*(uint *)(DAT_14cb98908 + (longlong)iVar2 * 0x20) == param_2) goto LAB_143f5d9ea;
  iVar2 = *(int *)(lVar10 + 0x18);
  goto joined_r0x000143f5d9c6;
}



// FUNCTION 143f5da08 FUN_143f5da08 body=46 status=ok
// SIG undefined FUN_143f5da08(void)

void FUN_143f5da08(longlong param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_48 [44];
  undefined1 auStack_1c [4];
  ulonglong uStack_18;
  
  if (((*(char *)(*(longlong *)(DAT_14cb98ab0 + 0x28) + 0x170) != '\x01') ||
      (*(longlong *)(param_1 + 0x198) == 0)) ||
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x198) + 0x40), lVar1 == 0)) {
    return;
  }
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(lVar1 + 0x1c0) != *(int *)(lVar1 + 0x1ec)) {
    lVar2 = lVar1 + 0x1f0;
    if (*(longlong *)(lVar1 + 0x1f8) != 0) {
      lVar2 = *(longlong *)(lVar1 + 0x1f8);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(lVar1 + 0x200) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        lVar2 = *(longlong *)(lVar1 + 0x1b8) + (longlong)iVar3 * 0x60;
        if (*(uint *)(*(longlong *)(lVar1 + 0x1b8) + (longlong)iVar3 * 0x60) == param_2)
        goto LAB_148abe4d0;
        iVar3 = *(int *)(lVar2 + 0x58);
      } while (iVar3 != -1);
    }
  }
  lVar2 = 0;
LAB_148abe4d0:
  FUN_14482b35e(lVar2 + 8,auStack_1c,param_3,0);
  FUN_143f60b98(lVar1,param_2);
  if ((uStack_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f5da54 FUN_143f5da54 body=251 status=ok
// SIG undefined FUN_143f5da54(void)

undefined1 * FUN_143f5da54(longlong param_1,undefined1 *param_2)

{
  undefined1 auStack_118 [32];
  undefined1 local_f8 [8];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_d8;
  undefined1 local_d0 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_f8[0] = 1;
  local_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  memset(local_d0,0,0x88);
  local_48 = 0x1100020702;
  local_c0 = 0;
  uStack_b8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  *param_2 = 1;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = (undefined4)local_48;
  param_2[0xb4] = local_48._4_1_;
  FUN_14493db24(local_f8);
  if ((*(int *)(param_1 + 0x268) != 0) && (*(longlong **)(param_1 + 0x260) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(param_1 + 0x260) + 0x60))();
  }
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f5dbf8 FUN_143f5dbf8 body=47 status=ok
// SIG undefined FUN_143f5dbf8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f5dbf8(void)

{
  _DAT_14cb988b0 = 0;
  if (DAT_14cb988a8 != 0) {
    FUN_1400020a8();
  }
  FUN_1459740fc(&DAT_14cb98868);
  return;
}



// FUNCTION 143f5dc27 FUN_143f5dc27 body=41 status=ok
// SIG undefined FUN_143f5dc27(void)

void FUN_143f5dc27(void)

{
  DAT_14cb98900 = 0;
  if (DAT_14cb988f8 != 0) {
    FUN_1400020a8();
  }
  FUN_1461794e2();
  return;
}



// FUNCTION 143f5dc50 FUN_143f5dc50 body=41 status=ok
// SIG undefined FUN_143f5dc50(void)

void FUN_143f5dc50(void)

{
  DAT_14cb98950 = 0;
  if (DAT_14cb98948 != 0) {
    FUN_1400020a8();
  }
  FUN_146170f0a();
  return;
}



// FUNCTION 143f5dc79 FUN_143f5dc79 body=47 status=ok
// SIG undefined FUN_143f5dc79(void)

void FUN_143f5dc79(void)

{
  DAT_14cb989a0 = 0;
  if (DAT_14cb98998 != 0) {
    FUN_1400020a8();
  }
  FUN_1456c3d4c(&DAT_14cb98958);
  return;
}



// FUNCTION 143f5dca8 FUN_143f5dca8 body=47 status=ok
// SIG undefined FUN_143f5dca8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f5dca8(void)

{
  _DAT_14cb989f0 = 0;
  if (DAT_14cb989e8 != 0) {
    FUN_1400020a8();
  }
  FUN_1456c3d4c(&DAT_14cb989a8);
  return;
}



// FUNCTION 143f5dcd7 FUN_143f5dcd7 body=169 status=ok
// SIG undefined FUN_143f5dcd7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f5dcd7(void)

{
  DAT_14cb98a40 = 0;
  if (DAT_14cb98a38 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb98a00 = 0;
  if (DAT_14cb98a04 != 0) {
    FUN_1447a08a2(&DAT_14cb989f8,0);
  }
  _DAT_14cb98a28 = 0xffffffff;
  _DAT_14cb98a20 = 0;
  if (0x80 < DAT_14cb98a24) {
    DAT_14cb98a24 = 0x80;
    FUN_1446efbd8(&DAT_14cb98a08,0);
  }
  if (DAT_14cb98a18 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb989f8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143f5dd80 FUN_143f5dd80 body=242 status=ok
// SIG undefined FUN_143f5dd80(void)

void FUN_143f5dd80(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  undefined **local_50 [3];
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_2 + 0x10))(param_2,&local_60,&DAT_14a184c9c,param_1);
  plVar1 = local_60;
  if (local_60 != (longlong *)0x0) {
    cohtml::Property::Property((Property *)local_50,"service",true);
    local_50[0] = &PTR_FUN_14b503b60;
    local_38 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_58,(Property *)local_50);
    cohtml::Property::~Property((Property *)local_50);
    cohtml::Property::Property((Property *)local_50,"text",true);
    local_50[0] = &PTR_FUN_14b503b60;
    local_38 = 0x10;
    (**(code **)(*local_60 + 0x18))(local_60,local_58,(Property *)local_50);
    cohtml::Property::~Property((Property *)local_50);
  }
  cohtml::TypeDescription::~TypeDescription((TypeDescription *)&local_60);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


