// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148dd47ce FUN_148dd47ce body=105 status=ok
// SIG undefined FUN_148dd47ce(void)

ulonglong FUN_148dd47ce(longlong param_1,undefined8 param_2)

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
LAB_148dd482c:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148dd482c;
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
      (**(code **)(param_1 + 0x28))
                (lVar4 + *(int *)(param_1 + 0x30),param_2,*(undefined4 *)(param_1 + 8));
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



// FUNCTION 148dd483a FUN_148dd483a body=27 status=ok
// SIG undefined FUN_148dd483a(void)

void FUN_148dd483a(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x18] = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  return;
}



// FUNCTION 148dd4856 FUN_148dd4856 body=143 status=ok
// SIG undefined FUN_148dd4856(void)

void FUN_148dd4856(longlong param_1,int param_2)

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



// FUNCTION 148dd48e6 FUN_148dd48e6 body=397 status=ok
// SIG undefined FUN_148dd48e6(void)

longlong *
FUN_148dd48e6(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = *(undefined4 *)(param_3 + 1);
  uVar5 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar6 = (undefined8 *)*param_1;
  FUN_141085fe4(param_2,&local_50);
  plVar3 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
  }
  *puVar6 = &PTR_LAB_14b99a5a0;
  *(undefined4 *)(puVar6 + 1) = *param_4;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  puVar6[2] = lVar8;
  *puVar6 = &PTR_FUN_14b99a530;
  puVar6[3] = local_50;
  puVar6[4] = local_48;
  if (local_48 == (longlong *)0x0) {
    puVar6[5] = uVar5;
    *(undefined4 *)(puVar6 + 6) = uVar4;
  }
  else {
    LOCK();
    *(int *)((longlong)local_48 + 0xc) = *(int *)((longlong)local_48 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar6 + 6) = uVar4;
    puVar6[5] = uVar5;
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
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_48 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dd4a76 FUN_148dd4a76 body=64 status=ok
// SIG undefined FUN_148dd4a76(void)

undefined8 * FUN_148dd4a76(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99a530;
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



// FUNCTION 148dd4aba FUN_148dd4aba body=81 status=ok
// SIG undefined FUN_148dd4aba(void)

undefined8 FUN_148dd4aba(longlong param_1)

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



// FUNCTION 148dd4b12 FUN_148dd4b12 body=89 status=ok
// SIG undefined FUN_148dd4b12(void)

bool FUN_148dd4b12(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148dd4b5d;
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
LAB_148dd4b5d:
  return lVar6 == param_2;
}



// FUNCTION 148dd4b94 FUN_148dd4b94 body=118 status=ok
// SIG undefined FUN_148dd4b94(void)

void FUN_148dd4b94(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b99a5a0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_14b99a530;
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



// FUNCTION 148dd4c0a FUN_148dd4c0a body=118 status=ok
// SIG undefined FUN_148dd4c0a(void)

void FUN_148dd4c0a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b99a5a0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_14b99a530;
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



// FUNCTION 148dd4c80 FUN_148dd4c80 body=156 status=ok
// SIG undefined FUN_148dd4c80(void)

void FUN_148dd4c80(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b99a5a0;
  p_Var6 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var6;
  *(undefined ***)p_Var1 = &PTR_FUN_14b99a530;
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
                    /* WARNING: Could not recover jumptable at 0x000148dd4d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dd4d1c FUN_148dd4d1c body=112 status=ok
// SIG undefined FUN_148dd4d1c(void)

void FUN_148dd4d1c(longlong param_1,undefined8 param_2,undefined8 param_3)

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
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18),param_2,
                   param_3,*(undefined4 *)(param_1 + 8));
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
                    /* WARNING: Could not recover jumptable at 0x000148dd4d6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148dd4d82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))
            ((longlong)*(int *)(param_1 + 0x30),param_2,param_3,*(undefined4 *)(param_1 + 8));
  return;
}



// FUNCTION 148dd4d8c FUN_148dd4d8c body=105 status=ok
// SIG undefined FUN_148dd4d8c(void)

ulonglong FUN_148dd4d8c(longlong param_1,undefined8 param_2,undefined8 param_3)

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
LAB_148dd4dea:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148dd4dea;
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
      (**(code **)(param_1 + 0x28))
                (lVar4 + *(int *)(param_1 + 0x30),param_2,param_3,*(undefined4 *)(param_1 + 8));
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



// FUNCTION 148dd4df8 FUN_148dd4df8 body=397 status=ok
// SIG undefined FUN_148dd4df8(void)

longlong *
FUN_148dd4df8(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = *(undefined4 *)(param_3 + 1);
  uVar5 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar6 = (undefined8 *)*param_1;
  FUN_141085fe4(param_2,&local_50);
  plVar3 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
  }
  *puVar6 = &PTR_LAB_14b42c990;
  *(undefined4 *)(puVar6 + 1) = *param_4;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  puVar6[2] = lVar8;
  *puVar6 = &PTR_FUN_14b99a610;
  puVar6[3] = local_50;
  puVar6[4] = local_48;
  if (local_48 == (longlong *)0x0) {
    puVar6[5] = uVar5;
    *(undefined4 *)(puVar6 + 6) = uVar4;
  }
  else {
    LOCK();
    *(int *)((longlong)local_48 + 0xc) = *(int *)((longlong)local_48 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar6 + 6) = uVar4;
    puVar6[5] = uVar5;
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
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_48 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dd4f88 FUN_148dd4f88 body=64 status=ok
// SIG undefined FUN_148dd4f88(void)

undefined8 * FUN_148dd4f88(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99a610;
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



// FUNCTION 148dd4fcc FUN_148dd4fcc body=81 status=ok
// SIG undefined FUN_148dd4fcc(void)

undefined8 FUN_148dd4fcc(longlong param_1)

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



// FUNCTION 148dd5024 FUN_148dd5024 body=89 status=ok
// SIG undefined FUN_148dd5024(void)

bool FUN_148dd5024(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148dd506f;
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
LAB_148dd506f:
  return lVar6 == param_2;
}



// FUNCTION 148dd509a FUN_148dd509a body=118 status=ok
// SIG undefined FUN_148dd509a(void)

void FUN_148dd509a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42c990;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_14b99a610;
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



// FUNCTION 148dd5110 FUN_148dd5110 body=118 status=ok
// SIG undefined FUN_148dd5110(void)

void FUN_148dd5110(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42c990;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_14b99a610;
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



// FUNCTION 148dd5186 FUN_148dd5186 body=156 status=ok
// SIG undefined FUN_148dd5186(void)

void FUN_148dd5186(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b42c990;
  p_Var6 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var6;
  *(undefined ***)p_Var1 = &PTR_FUN_14b99a610;
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
                    /* WARNING: Could not recover jumptable at 0x000148dd5212. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dd5222 FUN_148dd5222 body=112 status=ok
// SIG undefined FUN_148dd5222(void)

void FUN_148dd5222(longlong param_1)

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
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18),
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
                    /* WARNING: Could not recover jumptable at 0x000148dd5273. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148dd5288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),*(undefined4 *)(param_1 + 8));
  return;
}



// FUNCTION 148dd5292 FUN_148dd5292 body=105 status=ok
// SIG undefined FUN_148dd5292(void)

ulonglong FUN_148dd5292(longlong param_1)

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
LAB_148dd52f0:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148dd52f0;
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
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),*(undefined4 *)(param_1 + 8));
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



// FUNCTION 148dd52fc FUN_148dd52fc body=64 status=ok
// SIG undefined FUN_148dd52fc(void)

undefined8 * FUN_148dd52fc(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99a680;
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



// FUNCTION 148dd5340 FUN_148dd5340 body=81 status=ok
// SIG undefined FUN_148dd5340(void)

undefined8 FUN_148dd5340(longlong param_1)

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



// FUNCTION 148dd5398 FUN_148dd5398 body=89 status=ok
// SIG undefined FUN_148dd5398(void)

bool FUN_148dd5398(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148dd53e3;
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
LAB_148dd53e3:
  return lVar6 == param_2;
}



// FUNCTION 148dd540e FUN_148dd540e body=118 status=ok
// SIG undefined FUN_148dd540e(void)

void FUN_148dd540e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a491750;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_14b99a680;
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



// FUNCTION 148dd5484 FUN_148dd5484 body=118 status=ok
// SIG undefined FUN_148dd5484(void)

void FUN_148dd5484(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a491750;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_14b99a680;
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



// FUNCTION 148dd54fa FUN_148dd54fa body=156 status=ok
// SIG undefined FUN_148dd54fa(void)

void FUN_148dd54fa(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a491750;
  p_Var6 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var6;
  *(undefined ***)p_Var1 = &PTR_FUN_14b99a680;
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
                    /* WARNING: Could not recover jumptable at 0x000148dd5586. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dd5596 FUN_148dd5596 body=112 status=ok
// SIG undefined FUN_148dd5596(void)

void FUN_148dd5596(longlong param_1)

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
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18),
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
                    /* WARNING: Could not recover jumptable at 0x000148dd55e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148dd55fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),*(undefined4 *)(param_1 + 8));
  return;
}



// FUNCTION 148dd5606 FUN_148dd5606 body=105 status=ok
// SIG undefined FUN_148dd5606(void)

ulonglong FUN_148dd5606(longlong param_1)

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
LAB_148dd5664:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148dd5664;
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
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),*(undefined4 *)(param_1 + 8));
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



// FUNCTION 148dd5670 FUN_148dd5670 body=62 status=ok
// SIG undefined FUN_148dd5670(void)

void FUN_148dd5670(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148dd56ae(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x38,8);
  }
  return;
}



// FUNCTION 148dd56ae FUN_148dd56ae body=104 status=ok
// SIG undefined FUN_148dd56ae(void)

ulonglong FUN_148dd56ae(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x38) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148dd56e4;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x38,8);
      param_2 = param_2 / 0x38;
    }
  }
LAB_148dd56e4:
  return param_2 & 0xffffffff;
}



// FUNCTION 148dd5716 FUN_148dd5716 body=48 status=ok
// SIG undefined FUN_148dd5716(void)

void FUN_148dd5716(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x38,8);
  }
  return;
}



// FUNCTION 148dd5746 FUN_148dd5746 body=48 status=ok
// SIG undefined FUN_148dd5746(void)

void FUN_148dd5746(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x70,8);
  }
  return;
}



// FUNCTION 148dd5776 FUN_148dd5776 body=9 status=ok
// SIG undefined FUN_148dd5776(void)

void FUN_148dd5776(longlong param_1)

{
  FUN_144017f3e(param_1 + 0x10);
  return;
}



// FUNCTION 148dd5780 FUN_148dd5780 body=29 status=ok
// SIG undefined FUN_148dd5780(void)

undefined8 FUN_148dd5780(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dd579e FUN_148dd579e body=68 status=ok
// SIG undefined FUN_148dd579e(void)

undefined8 * FUN_148dd579e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99a710;
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



// FUNCTION 148dd57e6 FUN_148dd57e6 body=81 status=ok
// SIG undefined FUN_148dd57e6(void)

undefined8 FUN_148dd57e6(longlong param_1)

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



// FUNCTION 148dd583e FUN_148dd583e body=91 status=ok
// SIG undefined FUN_148dd583e(void)

bool FUN_148dd583e(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148dd586e;
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
LAB_148dd586e:
  return lVar6 == param_2;
}



// FUNCTION 148dd58b6 FUN_148dd58b6 body=118 status=ok
// SIG undefined FUN_148dd58b6(void)

void FUN_148dd58b6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9d10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99a710;
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



// FUNCTION 148dd592c FUN_148dd592c body=118 status=ok
// SIG undefined FUN_148dd592c(void)

void FUN_148dd592c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9d10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99a710;
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



// FUNCTION 148dd59a2 FUN_148dd59a2 body=156 status=ok
// SIG undefined FUN_148dd59a2(void)

void FUN_148dd59a2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9d10;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b99a710;
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
                    /* WARNING: Could not recover jumptable at 0x000148dd5a2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dd5a3e FUN_148dd5a3e body=104 status=ok
// SIG undefined FUN_148dd5a3e(void)

void FUN_148dd5a3e(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148dd5a8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148dd5a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148dd5aa6 FUN_148dd5aa6 body=68 status=ok
// SIG undefined FUN_148dd5aa6(void)

undefined8 * FUN_148dd5aa6(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99a780;
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



// FUNCTION 148dd5aee FUN_148dd5aee body=81 status=ok
// SIG undefined FUN_148dd5aee(void)

undefined8 FUN_148dd5aee(longlong param_1)

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



// FUNCTION 148dd5b46 FUN_148dd5b46 body=89 status=ok
// SIG undefined FUN_148dd5b46(void)

bool FUN_148dd5b46(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148dd5b91;
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
LAB_148dd5b91:
  return lVar6 == param_2;
}



// FUNCTION 148dd5bbc FUN_148dd5bbc body=118 status=ok
// SIG undefined FUN_148dd5bbc(void)

void FUN_148dd5bbc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99a780;
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



// FUNCTION 148dd5c32 FUN_148dd5c32 body=118 status=ok
// SIG undefined FUN_148dd5c32(void)

void FUN_148dd5c32(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99a780;
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



// FUNCTION 148dd5ca8 FUN_148dd5ca8 body=156 status=ok
// SIG undefined FUN_148dd5ca8(void)

void FUN_148dd5ca8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b99a780;
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
                    /* WARNING: Could not recover jumptable at 0x000148dd5d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dd5d44 FUN_148dd5d44 body=100 status=ok
// SIG undefined FUN_148dd5d44(void)

void FUN_148dd5d44(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148dd5d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148dd5d9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148dd5da8 FUN_148dd5da8 body=100 status=ok
// SIG undefined FUN_148dd5da8(void)

ulonglong FUN_148dd5da8(longlong param_1)

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
LAB_148dd5e01:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148dd5e01;
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



// FUNCTION 148dd5e0c FUN_148dd5e0c body=68 status=ok
// SIG undefined FUN_148dd5e0c(void)

undefined8 * FUN_148dd5e0c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99a7f0;
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



// FUNCTION 148dd5e54 FUN_148dd5e54 body=81 status=ok
// SIG undefined FUN_148dd5e54(void)

undefined8 FUN_148dd5e54(longlong param_1)

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



// FUNCTION 148dd5eac FUN_148dd5eac body=89 status=ok
// SIG undefined FUN_148dd5eac(void)

bool FUN_148dd5eac(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148dd5ef7;
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
LAB_148dd5ef7:
  return lVar6 == param_2;
}



// FUNCTION 148dd5f22 FUN_148dd5f22 body=118 status=ok
// SIG undefined FUN_148dd5f22(void)

void FUN_148dd5f22(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42a7c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99a7f0;
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



// FUNCTION 148dd5f98 FUN_148dd5f98 body=156 status=ok
// SIG undefined FUN_148dd5f98(void)

void FUN_148dd5f98(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b42a7c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b99a7f0;
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
                    /* WARNING: Could not recover jumptable at 0x000148dd6024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dd6034 FUN_148dd6034 body=104 status=ok
// SIG undefined FUN_148dd6034(void)

void FUN_148dd6034(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148dd6081. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148dd6092. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148dd609c FUN_148dd609c body=68 status=ok
// SIG undefined FUN_148dd609c(void)

undefined8 * FUN_148dd609c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99a860;
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



// FUNCTION 148dd60e4 FUN_148dd60e4 body=81 status=ok
// SIG undefined FUN_148dd60e4(void)

undefined8 FUN_148dd60e4(longlong param_1)

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



// FUNCTION 148dd613c FUN_148dd613c body=89 status=ok
// SIG undefined FUN_148dd613c(void)

bool FUN_148dd613c(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148dd6187;
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
LAB_148dd6187:
  return lVar6 == param_2;
}



// FUNCTION 148dd61b2 FUN_148dd61b2 body=118 status=ok
// SIG undefined FUN_148dd61b2(void)

void FUN_148dd61b2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7890;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99a860;
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



// FUNCTION 148dd6228 FUN_148dd6228 body=118 status=ok
// SIG undefined FUN_148dd6228(void)

void FUN_148dd6228(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7890;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99a860;
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



// FUNCTION 148dd629e FUN_148dd629e body=156 status=ok
// SIG undefined FUN_148dd629e(void)

void FUN_148dd629e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f7890;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b99a860;
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
                    /* WARNING: Could not recover jumptable at 0x000148dd632a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dd633a FUN_148dd633a body=104 status=ok
// SIG undefined FUN_148dd633a(void)

void FUN_148dd633a(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148dd6387. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148dd6398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148dd63a2 FUN_148dd63a2 body=101 status=ok
// SIG undefined FUN_148dd63a2(void)

ulonglong FUN_148dd63a2(longlong param_1)

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
LAB_148dd63fc:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148dd63fc;
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



// FUNCTION 148dd6408 FUN_148dd6408 body=29 status=ok
// SIG undefined FUN_148dd6408(void)

undefined8 FUN_148dd6408(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dd6440 FUN_148dd6440 body=29 status=ok
// SIG undefined FUN_148dd6440(void)

bool FUN_148dd6440(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148dd645e FUN_148dd645e body=26 status=ok
// SIG undefined FUN_148dd645e(void)

bool FUN_148dd645e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148dd6478 FUN_148dd6478 body=24 status=ok
// SIG undefined FUN_148dd6478(void)

bool FUN_148dd6478(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148dd6490 FUN_148dd6490 body=101 status=ok
// SIG undefined FUN_148dd6490(void)

void FUN_148dd6490(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b99a8d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148dd64f6 FUN_148dd64f6 body=101 status=ok
// SIG undefined FUN_148dd64f6(void)

void FUN_148dd64f6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b99a8d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148dd655c FUN_148dd655c body=134 status=ok
// SIG undefined FUN_148dd655c(void)

void FUN_148dd655c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b99a8d0;
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
                    /* WARNING: Could not recover jumptable at 0x000148dd65d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dd65e2 FUN_148dd65e2 body=39 status=ok
// SIG undefined FUN_148dd65e2(void)

void FUN_148dd65e2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148dd6605. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148dd660a FUN_148dd660a body=146 status=ok
// SIG undefined FUN_148dd660a(void)

bool FUN_148dd660a(longlong param_1)

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



// FUNCTION 148dd669e FUN_148dd669e body=147 status=ok
// SIG undefined FUN_148dd669e(void)

void FUN_148dd669e(longlong param_1,int param_2)

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



// FUNCTION 148dd6732 FUN_148dd6732 body=230 status=ok
// SIG undefined FUN_148dd6732(void)

undefined8 * FUN_148dd6732(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 148dd681a FUN_148dd681a body=450 status=ok
// SIG undefined FUN_148dd681a(void)

longlong * FUN_148dd681a(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar4 = (undefined8 *)*param_1;
  FUN_141085fe4(param_2,&local_38);
  plVar3 = local_30;
  if (local_30 == (longlong *)0x0) {
    *puVar4 = &PTR_LAB_14b99acd0;
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
    *puVar4 = &PTR_FUN_14b99a9a0;
    puVar4[3] = local_38;
    puVar4[4] = 0;
    puVar4[5] = &LAB_1442179b2;
  }
  else {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    *puVar4 = &PTR_LAB_14b99acd0;
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
    *puVar4 = &PTR_FUN_14b99a9a0;
    puVar4[3] = local_38;
    puVar4[4] = local_30;
    LOCK();
    *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
    UNLOCK();
    puVar4[5] = &LAB_1442179b2;
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dd69e0 FUN_148dd69e0 body=64 status=ok
// SIG undefined FUN_148dd69e0(void)

undefined8 * FUN_148dd69e0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99a9a0;
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



// FUNCTION 148dd6a24 FUN_148dd6a24 body=81 status=ok
// SIG undefined FUN_148dd6a24(void)

undefined8 FUN_148dd6a24(longlong param_1)

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



// FUNCTION 148dd6a7c FUN_148dd6a7c body=89 status=ok
// SIG undefined FUN_148dd6a7c(void)

bool FUN_148dd6a7c(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148dd6ac7;
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
LAB_148dd6ac7:
  return lVar6 == param_2;
}



// FUNCTION 148dd6afe FUN_148dd6afe body=118 status=ok
// SIG undefined FUN_148dd6afe(void)

void FUN_148dd6afe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b99acd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99a9a0;
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



// FUNCTION 148dd6b74 FUN_148dd6b74 body=118 status=ok
// SIG undefined FUN_148dd6b74(void)

void FUN_148dd6b74(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b99acd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99a9a0;
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



// FUNCTION 148dd6bea FUN_148dd6bea body=156 status=ok
// SIG undefined FUN_148dd6bea(void)

void FUN_148dd6bea(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b99acd0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b99a9a0;
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
                    /* WARNING: Could not recover jumptable at 0x000148dd6c76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dd6c86 FUN_148dd6c86 body=98 status=ok
// SIG undefined FUN_148dd6c86(void)

void FUN_148dd6c86(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148dd6ccf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148dd6cde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 148dd6ce8 FUN_148dd6ce8 body=94 status=ok
// SIG undefined FUN_148dd6ce8(void)

ulonglong FUN_148dd6ce8(longlong param_1)

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
LAB_148dd6d3b:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_148dd6d3b;
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



// FUNCTION 148dd6d48 FUN_148dd6d48 body=132 status=ok
// SIG undefined FUN_148dd6d48(void)

void FUN_148dd6d48(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148dd6dd2 FUN_148dd6dd2 body=81 status=ok
// SIG undefined FUN_148dd6dd2(void)

undefined8 FUN_148dd6dd2(longlong param_1)

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



// FUNCTION 148dd6e2a FUN_148dd6e2a body=89 status=ok
// SIG undefined FUN_148dd6e2a(void)

bool FUN_148dd6e2a(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148dd6e75;
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
LAB_148dd6e75:
  return lVar6 == param_2;
}



// FUNCTION 148dd6e84 FUN_148dd6e84 body=118 status=ok
// SIG undefined FUN_148dd6e84(void)

void FUN_148dd6e84(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b99aa80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99aa10;
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



// FUNCTION 148dd6efa FUN_148dd6efa body=118 status=ok
// SIG undefined FUN_148dd6efa(void)

void FUN_148dd6efa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b99aa80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99aa10;
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



// FUNCTION 148dd6f70 FUN_148dd6f70 body=156 status=ok
// SIG undefined FUN_148dd6f70(void)

void FUN_148dd6f70(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b99aa80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b99aa10;
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
                    /* WARNING: Could not recover jumptable at 0x000148dd6ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dd700c FUN_148dd700c body=98 status=ok
// SIG undefined FUN_148dd700c(void)

void FUN_148dd700c(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148dd7055. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148dd7064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 148dd7070 FUN_148dd7070 body=48 status=ok
// SIG undefined FUN_148dd7070(void)

void FUN_148dd7070(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,4);
  }
  return;
}



// FUNCTION 148dd70a0 FUN_148dd70a0 body=68 status=ok
// SIG undefined FUN_148dd70a0(void)

undefined8 * FUN_148dd70a0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99aaf0;
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



// FUNCTION 148dd70e8 FUN_148dd70e8 body=81 status=ok
// SIG undefined FUN_148dd70e8(void)

undefined8 FUN_148dd70e8(longlong param_1)

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



// FUNCTION 148dd7140 FUN_148dd7140 body=89 status=ok
// SIG undefined FUN_148dd7140(void)

bool FUN_148dd7140(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148dd718b;
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
LAB_148dd718b:
  return lVar6 == param_2;
}



// FUNCTION 148dd71b6 FUN_148dd71b6 body=118 status=ok
// SIG undefined FUN_148dd71b6(void)

void FUN_148dd71b6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b99aaf0;
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



// FUNCTION 148dd722c FUN_148dd722c body=118 status=ok
// SIG undefined FUN_148dd722c(void)

void FUN_148dd722c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b99aaf0;
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



// FUNCTION 148dd72a2 FUN_148dd72a2 body=156 status=ok
// SIG undefined FUN_148dd72a2(void)

void FUN_148dd72a2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b99aaf0;
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
                    /* WARNING: Could not recover jumptable at 0x000148dd732e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dd733e FUN_148dd733e body=94 status=ok
// SIG undefined FUN_148dd733e(void)

void FUN_148dd733e(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148dd7386. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148dd7391. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 148dd739c FUN_148dd739c body=9 status=ok
// SIG undefined FUN_148dd739c(void)

void FUN_148dd739c(longlong param_1)

{
  FUN_145a38fa8(param_1 + 0x10);
  return;
}



// FUNCTION 148dd73a6 FUN_148dd73a6 body=29 status=ok
// SIG undefined FUN_148dd73a6(void)

undefined8 FUN_148dd73a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dd73c4 FUN_148dd73c4 body=68 status=ok
// SIG undefined FUN_148dd73c4(void)

undefined8 * FUN_148dd73c4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99ab80;
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



// FUNCTION 148dd740c FUN_148dd740c body=81 status=ok
// SIG undefined FUN_148dd740c(void)

undefined8 FUN_148dd740c(longlong param_1)

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



// FUNCTION 148dd7464 FUN_148dd7464 body=89 status=ok
// SIG undefined FUN_148dd7464(void)

bool FUN_148dd7464(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148dd74af;
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
LAB_148dd74af:
  return lVar6 == param_2;
}



// FUNCTION 148dd74da FUN_148dd74da body=118 status=ok
// SIG undefined FUN_148dd74da(void)

void FUN_148dd74da(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b99ab80;
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



// FUNCTION 148dd7550 FUN_148dd7550 body=156 status=ok
// SIG undefined FUN_148dd7550(void)

void FUN_148dd7550(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b99ab80;
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
                    /* WARNING: Could not recover jumptable at 0x000148dd75dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dd75ec FUN_148dd75ec body=98 status=ok
// SIG undefined FUN_148dd75ec(void)

void FUN_148dd75ec(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148dd7635. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148dd7644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 148dd7652 FUN_148dd7652 body=81 status=ok
// SIG undefined FUN_148dd7652(void)

undefined8 FUN_148dd7652(longlong param_1)

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



// FUNCTION 148dd76aa FUN_148dd76aa body=91 status=ok
// SIG undefined FUN_148dd76aa(void)

bool FUN_148dd76aa(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148dd76da;
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
LAB_148dd76da:
  return lVar6 == param_2;
}



// FUNCTION 148dd7722 FUN_148dd7722 body=118 status=ok
// SIG undefined FUN_148dd7722(void)

void FUN_148dd7722(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b982300;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99abf0;
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



// FUNCTION 148dd7798 FUN_148dd7798 body=118 status=ok
// SIG undefined FUN_148dd7798(void)

void FUN_148dd7798(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b982300;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99abf0;
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



// FUNCTION 148dd780e FUN_148dd780e body=156 status=ok
// SIG undefined FUN_148dd780e(void)

void FUN_148dd780e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b982300;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b99abf0;
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
                    /* WARNING: Could not recover jumptable at 0x000148dd789a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dd78aa FUN_148dd78aa body=98 status=ok
// SIG undefined FUN_148dd78aa(void)

void FUN_148dd78aa(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148dd78f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148dd7902. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 148dd790c FUN_148dd790c body=116 status=ok
// SIG undefined FUN_148dd790c(void)

undefined8 * FUN_148dd790c(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  
  cVar2 = FUN_144729dda(param_1 + 0x168);
  if (cVar2 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
    uVar1 = DAT_14c8464e8;
    param_2[2] = DAT_14c8464e0;
    param_2[3] = uVar1;
    param_2[4] = DAT_14c8464f0;
    uVar1 = DAT_14c846500;
    param_2[5] = DAT_14c8464f8;
    param_2[6] = uVar1;
    param_2[7] = DAT_14c846508;
  }
  else {
    lVar3 = FUN_14479d2ce(param_1 + 0x168);
    FUN_148dd7980(param_2,lVar3 + 0xae0);
  }
  return param_2;
}



// FUNCTION 148dd7980 FUN_148dd7980 body=112 status=ok
// SIG undefined FUN_148dd7980(void)

longlong * FUN_148dd7980(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar6 = DAT_14c950c29;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if ((lVar1 != 0 & bVar6) == 1) {
    FUN_1456cec3c();
  }
  lVar1 = param_2[2];
  lVar2 = param_2[3];
  lVar3 = param_2[4];
  lVar4 = param_2[5];
  lVar5 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = lVar5;
  param_1[4] = lVar3;
  param_1[5] = lVar4;
  param_1[2] = lVar1;
  param_1[3] = lVar2;
  return param_1;
}



// FUNCTION 148dd79f0 FUN_148dd79f0 body=512 status=ok
// SIG undefined FUN_148dd79f0(void)

void FUN_148dd79f0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined1 local_b0 [112];
  longlong local_40;
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar1 = param_1 + 0x168;
  cVar2 = FUN_144729dda(lVar1);
  if (cVar2 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_d8);
  }
  if (*(longlong *)(param_1 + 0x1e0) == 0) goto LAB_148dd7a54;
  FUN_148dd7c46(*(longlong *)(param_1 + 0x1e0),&local_40,param_1);
  if (local_38 == 0) {
    uVar3 = FUN_1458b6df2();
    local_38 = FUN_14477b664(uVar3);
  }
  if (local_30 == 0) {
    if ((((local_38 == 0) || (local_40 == 0)) ||
        (plVar4 = *(longlong **)(local_38 + 0xb8), plVar4 == (longlong *)0x0)) ||
       (cVar2 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar2 == '\0')) goto LAB_148dd7a54;
    uVar3 = (**(code **)(*plVar4 + 0x110))(plVar4);
    local_30 = FUN_144aff482(uVar3,&local_40);
    if (local_30 == 0) goto LAB_148dd7a54;
  }
  plVar4 = (longlong *)FUN_14479d2ce(param_1 + 0x70);
  if ((plVar4 == (longlong *)0x0) || (cVar2 = (**(code **)(*plVar4 + 0x700))(plVar4), cVar2 == '\0')
     ) goto LAB_148dd7a54;
  local_b8 = local_40;
  FUN_1411374b4(local_b0,plVar4,&local_b8,&DAT_14c846480);
  uVar3 = FUN_140faf1c8(local_b0,plVar4);
  uVar3 = FUN_140faf27a(uVar3,plVar4);
  lVar5 = FUN_14127ef9a(uVar3);
  FUN_14119d0c2(local_b0);
  if (lVar5 == 0) {
LAB_148dd7b55:
    lVar5 = 0;
  }
  else {
    lVar6 = FUN_1411e624c();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        != lVar6 + 0x30)) goto LAB_148dd7b55;
  }
  FUN_14485c47a(lVar1,lVar5);
  uVar3 = FUN_14479d2ce(lVar1);
  cVar2 = FUN_14113f0c0(param_1 + 0x1d0);
  if (cVar2 != '\0') {
    FUN_148baaf9b(param_1 + 0x1d0,uVar3);
  }
  FUN_14479d2ce(lVar1);
LAB_148dd7a54:
  if ((local_28 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148dd7c06 FUN_148dd7c06 body=63 status=ok
// SIG undefined FUN_148dd7c06(void)

void FUN_148dd7c06(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)(param_1 + 0x168);
  cVar1 = FUN_144729dda(puVar3);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(puVar3);
    (**(code **)(*plVar2 + 0x5c8))(plVar2,0);
    *puVar3 = 0;
  }
  return;
}



// FUNCTION 148dd7c46 FUN_148dd7c46 body=543 status=ok
// SIG undefined FUN_148dd7c46(void)

undefined8 FUN_148dd7c46(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_3 + 0x161) == '\x01') {
    lVar6 = FUN_1403ca30c(param_3);
    if (lVar6 == 0) {
      FUN_148bb1e30(param_2,param_1 + 400);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
    }
    plVar1 = (longlong *)(param_1 + 0x1a8);
    lVar2 = param_1 + 0x1b8;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    iVar9 = 0;
    local_98 = param_2;
    local_60 = lVar2;
    if (*(int *)(param_1 + 0x1d0) != 0) {
      FUN_1449c0562(&local_68);
      iVar9 = *(int *)(param_1 + 0x1d0);
    }
    local_78 = local_58;
    uVar7 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_88 = local_68;
    local_80 = local_60;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    iVar5 = local_78._4_4_;
    local_90 = plVar1;
    if ((local_78._4_4_ != iVar9) || (param_2 = local_98, local_78 = uVar7, local_60 != lVar2)) {
      do {
        local_78 = uVar7;
        plVar10 = (longlong *)(*local_90 + (longlong)iVar5 * 0x38);
        lVar8 = *(longlong *)(*local_90 + 8 + (longlong)iVar5 * 0x38);
        if (lVar8 == 0) {
          uVar7 = FUN_14110242a();
          lVar8 = FUN_14477b664(uVar7);
          plVar10[1] = lVar8;
        }
        if (((plVar10[2] == 0) && (lVar8 != 0)) && (*plVar10 != 0)) {
          plVar3 = *(longlong **)(lVar8 + 0xb8);
          if ((plVar3 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
            lVar8 = 0;
          }
          else {
            uVar7 = (**(code **)(*plVar3 + 0x110))(plVar3);
            lVar8 = FUN_144aff482(uVar7,plVar10);
          }
          plVar10[2] = lVar8;
        }
        cVar4 = FUN_144a851c4(lVar6);
        if (cVar4 != '\0') {
          plVar10 = plVar10 + 3;
          param_2 = local_98;
          goto LAB_148dd7d58;
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        param_2 = local_98;
        iVar5 = local_78._4_4_;
        uVar7 = local_78;
      } while ((local_80 != lVar2 || local_78._4_4_ != iVar9) || local_90 != plVar1);
    }
  }
  plVar10 = (longlong *)(param_1 + 400);
LAB_148dd7d58:
  FUN_148bb1e30(param_2,plVar10);
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148dd7e6c FUN_148dd7e6c body=38 status=ok
// SIG undefined FUN_148dd7e6c(void)

void FUN_148dd7e6c(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = FUN_148dd7e92();
  if (cVar1 == '\0') {
    return;
  }
  FUN_148dd7f62(param_1,1);
  return;
}



// FUNCTION 148dd7e92 FUN_148dd7e92 body=207 status=ok
// SIG undefined FUN_148dd7e92(void)

byte FUN_148dd7e92(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (*(longlong *)(param_1 + 0x1e0) == 0) {
    return 0;
  }
  lVar7 = param_1;
  lVar4 = FUN_1403ca30c();
  bVar2 = (byte)lVar7;
  if (lVar4 != 0) {
    lVar7 = *(longlong *)(param_1 + 0x1e0);
    lVar6 = *(longlong *)(lVar7 + 0x200);
    if (lVar6 == 0) {
      uVar5 = FUN_14110242a();
      lVar6 = FUN_14477b664(uVar5);
      *(longlong *)(lVar7 + 0x200) = lVar6;
    }
    if (((*(longlong *)(lVar7 + 0x208) == 0) && (lVar6 != 0)) && (*(longlong *)(lVar7 + 0x1f8) != 0)
       ) {
      plVar1 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
        uVar5 = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
        uVar5 = FUN_144aff482(uVar5,(longlong *)(lVar7 + 0x1f8));
      }
      *(undefined8 *)(lVar7 + 0x208) = uVar5;
    }
    bVar2 = FUN_144a851c4(lVar4);
  }
  return lVar4 != 0 & bVar2;
}



// FUNCTION 148dd7f62 FUN_148dd7f62 body=1958 status=ok
// SIG undefined FUN_148dd7f62(void)

void FUN_148dd7f62(longlong param_1,char param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  longlong *local_a8;
  longlong lStack_a0;
  longlong local_98;
  undefined1 local_88 [16];
  longlong local_78;
  longlong *local_70;
  int local_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    FUN_148dd8930(param_1,&local_78);
    if (local_78 != 0) {
      lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1e0) + 0x230);
      if (lVar9 != 0) {
        plVar15 = *(longlong **)(*(longlong *)(param_1 + 0x1e0) + 0x228);
        plVar2 = (longlong *)(param_1 + 0x180);
        lVar9 = lVar9 * 0x18;
        do {
          lVar11 = plVar15[1];
          if (lVar11 == 0) {
            uVar10 = FUN_145cd97be();
            lVar11 = FUN_14477b664(uVar10);
            plVar15[1] = lVar11;
          }
          if (plVar15[2] == 0) {
            if ((lVar11 != 0) && (*plVar15 != 0)) {
              plVar3 = *(longlong **)(lVar11 + 0xb8);
              if ((plVar3 == (longlong *)0x0) ||
                 (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
                plVar15[2] = 0;
              }
              else {
                uVar10 = (**(code **)(*plVar3 + 0x110))(plVar3);
                lVar11 = FUN_144aff482(uVar10,plVar15);
                plVar15[2] = lVar11;
                if (lVar11 != 0) {
                  lVar11 = plVar15[1];
                  goto LAB_148dd80a4;
                }
              }
            }
          }
          else {
LAB_148dd80a4:
            if (param_2 == '\0') {
              if (lVar11 == 0) {
                lVar11 = FUN_145cd97be();
              }
              lVar14 = *plVar15;
              uVar12 = FUN_14477b664(lVar11);
              uVar5 = ((uint)(uVar12 >> 0x14) & 0xffff ^ (uint)(uVar12 >> 4)) * -0x7a143595;
              uVar6 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
              uVar5 = (uint)((ulonglong)lVar14 >> 0x10);
              uVar16 = (uint)lVar14 & 0xffff;
              uVar7 = FUN_144a78877(((uint)lVar14 << 0x10 | uVar16) +
                                    (int)((ulonglong)lVar14 >> 0x20) +
                                    (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar16 >> 4),
                                    uVar6 >> 0x10 ^ uVar6);
              iVar8 = FUN_148de5926(plVar2,uVar7,plVar15);
              if (iVar8 != -1) {
                local_b0 = local_78;
                lVar11 = plVar15[1];
                if (lVar11 == 0) {
                  uVar10 = FUN_145cd97be();
                  lVar11 = FUN_14477b664(uVar10);
                  plVar15[1] = lVar11;
                }
                lVar14 = plVar15[2];
                if (lVar14 == 0) {
                  if (lVar11 == 0) {
                    lVar14 = 0;
                  }
                  else {
                    lVar14 = 0;
                    if (*plVar15 != 0) {
                      plVar3 = *(longlong **)(lVar11 + 0xb8);
                      if ((plVar3 == (longlong *)0x0) ||
                         (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
                        lVar14 = 0;
                      }
                      else {
                        uVar10 = (**(code **)(*plVar3 + 0x110))(plVar3);
                        lVar14 = FUN_144aff482(uVar10,plVar15);
                      }
                      plVar15[2] = lVar14;
                    }
                  }
                }
                local_a8 = (longlong *)0x0;
                lStack_a0 = 0;
                local_98 = 0;
                uVar10 = FUN_145cd97be();
                lStack_a0 = FUN_14477b664(uVar10);
                lVar11 = FUN_145cd97be();
                uVar10 = FUN_145cd97be();
                FUN_1402d1bfa(&local_68,uVar10,lVar14);
                if (local_a8 != (longlong *)CONCAT44(uStack_64,local_68)) {
                  local_98 = 0;
                }
                local_a8 = (longlong *)CONCAT44(uStack_64,local_68);
                lVar13 = FUN_145cd97be();
                if (lVar11 == 0) {
LAB_148dd82c7:
                  lVar13 = lVar11;
                }
                else if (lVar13 == 0) {
                  lVar13 = 0;
                }
                else if ((*(int *)(lVar13 + 0x38) <= *(int *)(lVar11 + 0x38)) &&
                        (*(longlong *)
                          (*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8) ==
                         lVar13 + 0x30)) goto LAB_148dd82c7;
                if (lStack_a0 != lVar13) {
                  local_98 = 0;
                }
                uVar10 = FUN_14477b664(lVar13);
                lVar11 = FUN_14477b664(uVar10);
                lStack_a0 = lVar11;
                if ((lVar11 == 0 || local_a8 == (longlong *)0x0) && (lVar14 = local_98, lVar11 == 0)
                   ) {
                  lVar11 = FUN_145cd97be();
                  lVar14 = local_98;
                }
                local_98 = lVar14;
                uVar12 = FUN_14477b664(lVar11);
                uVar5 = ((uint)(uVar12 >> 0x14) & 0xffff ^ (uint)(uVar12 >> 4)) * -0x7a143595;
                uVar6 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
                uVar5 = (uint)((ulonglong)local_a8 >> 0x10);
                uVar16 = (uint)local_a8 & 0xffff;
                uVar7 = FUN_144a78877(((uint)local_a8 << 0x10 | uVar16) +
                                      (int)((ulonglong)local_a8 >> 0x20) +
                                      (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar16 >> 4),
                                      uVar6 >> 0x10 ^ uVar6);
                iVar8 = FUN_148de5926(plVar2,uVar7,&local_a8);
                if (iVar8 == -1) {
                  lVar11 = 0;
                }
                else {
                  lVar11 = (longlong)iVar8 * 0x28 + *plVar2;
                }
                lVar14 = plVar15[1];
                if (lVar14 == 0) {
                  uVar10 = FUN_145cd97be();
                  lVar14 = FUN_14477b664(uVar10);
                  plVar15[1] = lVar14;
                }
                lVar13 = plVar15[2];
                if (lVar13 == 0) {
                  if (lVar14 == 0) {
                    lVar13 = 0;
                  }
                  else {
                    lVar13 = 0;
                    if (*plVar15 != 0) {
                      plVar3 = *(longlong **)(lVar14 + 0xb8);
                      if ((plVar3 == (longlong *)0x0) ||
                         (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
                        lVar13 = 0;
                      }
                      else {
                        uVar10 = (**(code **)(*plVar3 + 0x110))(plVar3);
                        lVar13 = FUN_144aff482(uVar10,plVar15);
                      }
                      plVar15[2] = lVar13;
                    }
                  }
                }
                FUN_14590094c(local_b0,lVar13,lVar11 + 0x18);
                lVar11 = plVar15[1];
                if (lVar11 == 0) {
                  uVar10 = FUN_145cd97be();
                  lVar11 = FUN_14477b664(uVar10);
                  plVar15[1] = lVar11;
                }
                lVar14 = plVar15[2];
                if (lVar14 == 0) {
                  if (lVar11 == 0) {
                    lVar14 = 0;
                  }
                  else {
                    lVar14 = 0;
                    if (*plVar15 != 0) {
                      plVar3 = *(longlong **)(lVar11 + 0xb8);
                      if ((plVar3 == (longlong *)0x0) ||
                         (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
                        lVar14 = 0;
                      }
                      else {
                        uVar10 = (**(code **)(*plVar3 + 0x110))(plVar3);
                        lVar14 = FUN_144aff482(uVar10,plVar15);
                      }
                      plVar15[2] = lVar14;
                    }
                  }
                }
                local_a8 = (longlong *)0x0;
                lStack_a0 = 0;
                local_98 = 0;
                uVar10 = FUN_145cd97be();
                lStack_a0 = FUN_14477b664(uVar10);
                lVar11 = FUN_145cd97be();
                uVar10 = FUN_145cd97be();
                FUN_1402d1bfa(&local_68,uVar10,lVar14);
                if (local_a8 != (longlong *)CONCAT44(uStack_64,local_68)) {
                  local_98 = 0;
                }
                local_a8 = (longlong *)CONCAT44(uStack_64,local_68);
                lVar13 = FUN_145cd97be();
                if (lVar11 == 0) {
LAB_148dd8604:
                  lVar13 = lVar11;
                }
                else if (lVar13 == 0) {
                  lVar13 = 0;
                }
                else if ((*(int *)(lVar13 + 0x38) <= *(int *)(lVar11 + 0x38)) &&
                        (*(longlong *)
                          (*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8) ==
                         lVar13 + 0x30)) goto LAB_148dd8604;
                if (lStack_a0 != lVar13) {
                  local_98 = 0;
                }
                uVar10 = FUN_14477b664(lVar13);
                lStack_a0 = FUN_14477b664(uVar10);
                if ((lStack_a0 != 0) && (local_a8 != (longlong *)0x0)) {
                  local_98 = lVar14;
                }
                FUN_148de64b8(plVar2,&local_a8);
              }
            }
            else {
              if (lVar11 == 0) {
                lVar11 = FUN_145cd97be();
              }
              lVar14 = *plVar15;
              uVar12 = FUN_14477b664(lVar11);
              uVar5 = ((uint)(uVar12 >> 0x14) & 0xffff ^ (uint)(uVar12 >> 4)) * -0x7a143595;
              uVar6 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
              uVar5 = (uint)((ulonglong)lVar14 >> 0x10);
              uVar16 = (uint)lVar14 & 0xffff;
              uVar7 = FUN_144a78877(((uint)lVar14 << 0x10 | uVar16) +
                                    (int)((ulonglong)lVar14 >> 0x20) +
                                    (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar16 >> 4),
                                    uVar6 >> 0x10 ^ uVar6);
              iVar8 = FUN_148de5926(plVar2,uVar7,plVar15);
              if (iVar8 == -1) {
                local_a8 = plVar15;
                FUN_148de5a50(plVar2,&local_68,&local_a8);
                lVar13 = local_78;
                lVar18 = (longlong)local_68;
                lVar11 = *(longlong *)(param_1 + 0x180);
                FUN_148dd8abc(local_88,param_1,plVar15);
                lVar14 = plVar15[1];
                if (lVar14 == 0) {
                  uVar10 = FUN_145cd97be();
                  lVar14 = FUN_14477b664(uVar10);
                  plVar15[1] = lVar14;
                }
                lVar17 = plVar15[2];
                if (lVar17 == 0) {
                  if (lVar14 == 0) {
                    lVar17 = 0;
                  }
                  else {
                    lVar17 = 0;
                    if (*plVar15 != 0) {
                      plVar3 = *(longlong **)(lVar14 + 0xb8);
                      local_b0 = lVar11;
                      if ((plVar3 == (longlong *)0x0) ||
                         (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
                        lVar17 = 0;
                      }
                      else {
                        uVar10 = (**(code **)(*plVar3 + 0x110))(plVar3);
                        lVar17 = FUN_144aff482(uVar10,plVar15);
                      }
                      plVar15[2] = lVar17;
                      lVar11 = local_b0;
                    }
                  }
                }
                FUN_145ab76ac(lVar13,&local_a8,lVar17,local_88);
                *(longlong **)(lVar18 * 0x28 + 0x18 + lVar11) = local_a8;
              }
            }
          }
          plVar15 = plVar15 + 3;
          lVar9 = lVar9 + -0x18;
        } while (lVar9 != 0);
      }
    }
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_70 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_70 + 0x10))(local_70);
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148dd870a FUN_148dd870a body=46 status=ok
// SIG undefined FUN_148dd870a(void)

void FUN_148dd870a(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = FUN_148dd7e92();
  if (cVar1 == '\0') {
    return;
  }
  FUN_148dd7f62(param_1,0);
  FUN_148dd8738(param_1);
  return;
}



// FUNCTION 148dd8738 FUN_148dd8738 body=503 status=ok
// SIG undefined FUN_148dd8738(void)

void FUN_148dd8738(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    FUN_148dd8930(param_1,&local_40);
    if (local_40 != 0) {
      lVar6 = *(longlong *)(param_1 + 0x1e0);
      lVar5 = *(longlong *)(lVar6 + 0x218);
      if (lVar5 == 0) {
        uVar4 = FUN_145cd97be();
        lVar5 = FUN_14477b664(uVar4);
        *(longlong *)(lVar6 + 0x218) = lVar5;
      }
      if (((*(longlong *)(lVar6 + 0x220) == 0) && (lVar5 != 0)) &&
         (*(longlong *)(lVar6 + 0x210) != 0)) {
        plVar8 = *(longlong **)(lVar5 + 0xb8);
        if ((plVar8 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar3 == '\0')) {
          uVar4 = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar8 + 0x110))(plVar8);
          uVar4 = FUN_144aff482(uVar4,(longlong *)(lVar6 + 0x210));
        }
        *(undefined8 *)(lVar6 + 0x220) = uVar4;
      }
      FUN_1414a7868(local_40);
      lVar6 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1e0) + 0x230);
      if (lVar6 != 0) {
        plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x1e0) + 0x228);
        lVar6 = lVar6 * 0x18;
        do {
          lVar5 = plVar8[1];
          if (lVar5 == 0) {
            uVar4 = FUN_145cd97be();
            lVar5 = FUN_14477b664(uVar4);
            plVar8[1] = lVar5;
          }
          lVar7 = plVar8[2];
          if (lVar7 == 0) {
            if (lVar5 == 0) {
              lVar7 = 0;
            }
            else {
              lVar7 = 0;
              if (*plVar8 != 0) {
                plVar2 = *(longlong **)(lVar5 + 0xb8);
                if ((plVar2 == (longlong *)0x0) ||
                   (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
                  lVar7 = 0;
                }
                else {
                  uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
                  lVar7 = FUN_144aff482(uVar4,plVar8);
                }
                plVar8[2] = lVar7;
              }
            }
          }
          FUN_1414a7868(local_40,lVar7);
          plVar8 = plVar8 + 3;
          lVar6 = lVar6 + -0x18;
        } while (lVar6 != 0);
      }
    }
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_38 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148dd8930 FUN_148dd8930 body=395 status=ok
// SIG undefined FUN_148dd8930(void)

undefined8 * FUN_148dd8930(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(longlong *)(param_1 + 0x170) == 0) || (lVar4 = *(longlong *)(param_1 + 0x178), lVar4 == 0)
      ) || (*(int *)(lVar4 + 8) < 1)) {
    lVar4 = FUN_1403ca30c(param_1);
    if (((lVar4 == 0) || (*(longlong *)(lVar4 + 0x88) == 0)) ||
       ((*(longlong **)(lVar4 + 0x90) == (longlong *)0x0 ||
        (lVar4 = (**(code **)(**(longlong **)(lVar4 + 0x90) + 0x10))(), lVar4 == 0)))) {
      local_38 = 0;
      plStack_30 = (longlong *)0x0;
      *(undefined8 *)(param_1 + 0x170) = 0;
      plVar5 = *(longlong **)(param_1 + 0x178);
      if (plVar5 != (longlong *)0x0) {
LAB_148dd8a1f:
        plVar6 = plStack_30;
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))();
        }
        goto LAB_148dd8a2b;
      }
    }
    else {
      FUN_141260192(lVar4,&local_38,&DAT_14cb8c380);
      *(undefined8 *)(param_1 + 0x170) = local_38;
      plVar5 = *(longlong **)(param_1 + 0x178);
      if (plVar5 != plStack_30) {
        if (plStack_30 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plStack_30 + 0xc) = *(int *)((longlong)plStack_30 + 0xc) + 1;
          UNLOCK();
          plVar5 = *(longlong **)(param_1 + 0x178);
        }
        plVar6 = plStack_30;
        if (plVar5 != (longlong *)0x0) goto LAB_148dd8a1f;
LAB_148dd8a2b:
        *(longlong **)(param_1 + 0x178) = plVar6;
      }
      plVar5 = plStack_30;
      if (plStack_30 != (longlong *)0x0) {
        LOCK();
        plVar6 = plStack_30 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plStack_30)(plStack_30);
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
    lVar4 = *(longlong *)(param_1 + 0x178);
    *param_2 = 0;
    param_2[1] = lVar4;
    if (lVar4 == 0) goto LAB_148dd8a98;
  }
  else {
    *param_2 = 0;
    param_2[1] = lVar4;
  }
  iVar3 = *(int *)(lVar4 + 8);
  do {
    if (iVar3 == 0) {
      param_2[1] = 0;
      goto LAB_148dd8a98;
    }
    LOCK();
    iVar2 = *(int *)(lVar4 + 8);
    bVar7 = iVar3 == iVar2;
    if (bVar7) {
      *(int *)(lVar4 + 8) = iVar3 + 1;
      iVar2 = iVar3;
    }
    iVar3 = iVar2;
    UNLOCK();
  } while (!bVar7);
  if (param_2[1] != 0) {
    *param_2 = *(undefined8 *)(param_1 + 0x170);
  }
LAB_148dd8a98:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148dd8abc FUN_148dd8abc body=390 status=ok
// SIG undefined FUN_148dd8abc(void)

longlong * FUN_148dd8abc(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar4 = (undefined8 *)*param_1;
  FUN_141085fe4(param_2,&local_48);
  plVar3 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  *puVar4 = &PTR_LAB_14b99bb80;
  FUN_145a25158(puVar4 + 1,param_3);
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
  puVar4[4] = lVar6;
  *puVar4 = &PTR_FUN_14b99bb10;
  puVar4[5] = local_48;
  puVar4[6] = plVar3;
  if (plVar3 == (longlong *)0x0) {
    puVar4[7] = FUN_148dd8c46;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    puVar4[7] = FUN_148dd8c46;
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
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_40 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dd8c46 FUN_148dd8c46 body=1033 status=ok
// SIG undefined FUN_148dd8c46(void)

void FUN_148dd8c46(longlong param_1,char param_2,undefined8 param_3,longlong *param_4)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x1e0) == 0) goto LAB_148dd8d2f;
  lVar5 = param_4[1];
  if (lVar5 == 0) {
    uVar4 = FUN_145cd97be();
    lVar5 = FUN_14477b664(uVar4);
    param_4[1] = lVar5;
  }
  if (param_4[2] == 0) {
    if ((lVar5 == 0) || (*param_4 == 0)) goto LAB_148dd8d2f;
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      param_4[2] = 0;
      goto LAB_148dd8d2f;
    }
    uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar5 = FUN_144aff482(uVar4,param_4);
    param_4[2] = lVar5;
    if (lVar5 == 0) goto LAB_148dd8d2f;
  }
  lVar5 = *(longlong *)(param_1 + 0x1e0);
  lVar6 = *(longlong *)(lVar5 + 0x218);
  if (lVar6 == 0) {
    uVar4 = FUN_145cd97be();
    lVar6 = FUN_14477b664(uVar4);
    *(longlong *)(lVar5 + 0x218) = lVar6;
  }
  if (*(longlong *)(lVar5 + 0x220) == 0) {
    if ((lVar6 == 0) || (*(longlong *)(lVar5 + 0x210) == 0)) goto LAB_148dd8d2f;
    plVar2 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      *(undefined8 *)(lVar5 + 0x220) = 0;
      goto LAB_148dd8d2f;
    }
    uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar6 = FUN_144aff482(uVar4,(longlong *)(lVar5 + 0x210));
    *(longlong *)(lVar5 + 0x220) = lVar6;
    if (lVar6 == 0) goto LAB_148dd8d2f;
  }
  FUN_148dd8930(param_1,&local_50);
  if (local_50 != 0) {
    if (param_2 == '\0') {
      lVar5 = *(longlong *)(param_1 + 0x1e0);
      lVar6 = *(longlong *)(lVar5 + 0x218);
      if (lVar6 == 0) {
        uVar4 = FUN_145cd97be();
        lVar6 = FUN_14477b664(uVar4);
        *(longlong *)(lVar5 + 0x218) = lVar6;
      }
      lVar7 = *(longlong *)(lVar5 + 0x220);
      if (((lVar7 == 0) && (lVar7 = 0, lVar6 != 0)) && (*(longlong *)(lVar5 + 0x210) != 0)) {
        plVar2 = *(longlong **)(lVar6 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
          lVar7 = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar7 = FUN_144aff482(uVar4,(longlong *)(lVar5 + 0x210));
        }
        *(longlong *)(lVar5 + 0x220) = lVar7;
      }
      cVar3 = FUN_140f722bc(local_50,lVar7,param_3);
      if (cVar3 == '\0') {
        lVar5 = *(longlong *)(param_1 + 0x1e0);
        lVar6 = *(longlong *)(lVar5 + 0x218);
        if (lVar6 == 0) {
          uVar4 = FUN_145cd97be();
          lVar6 = FUN_14477b664(uVar4);
          *(longlong *)(lVar5 + 0x218) = lVar6;
        }
        lVar7 = *(longlong *)(lVar5 + 0x220);
        if (((lVar7 == 0) && (lVar7 = 0, lVar6 != 0)) && (*(longlong *)(lVar5 + 0x210) != 0)) {
          plVar2 = *(longlong **)(lVar6 + 0xb8);
          if ((plVar2 == (longlong *)0x0) ||
             (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
            lVar7 = 0;
          }
          else {
            uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
            lVar7 = FUN_144aff482(uVar4,(longlong *)(lVar5 + 0x210));
          }
          *(longlong *)(lVar5 + 0x220) = lVar7;
        }
        FUN_1412e0f8a(local_50,lVar7,param_3);
      }
    }
    else if ((param_2 == '\x01') && (cVar3 = FUN_148dd9050(param_1,param_3), cVar3 == '\0')) {
      lVar5 = *(longlong *)(param_1 + 0x1e0);
      lVar6 = *(longlong *)(lVar5 + 0x218);
      if (lVar6 == 0) {
        uVar4 = FUN_145cd97be();
        lVar6 = FUN_14477b664(uVar4);
        *(longlong *)(lVar5 + 0x218) = lVar6;
      }
      lVar7 = *(longlong *)(lVar5 + 0x220);
      if (((lVar7 == 0) && (lVar7 = 0, lVar6 != 0)) && (*(longlong *)(lVar5 + 0x210) != 0)) {
        plVar2 = *(longlong **)(lVar6 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
          lVar7 = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar7 = FUN_144aff482(uVar4,(longlong *)(lVar5 + 0x210));
        }
        *(longlong *)(lVar5 + 0x220) = lVar7;
      }
      FUN_1412d5418(local_50,lVar7,param_3);
    }
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_48 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
LAB_148dd8d2f:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148dd9050 FUN_148dd9050 body=509 status=ok
// SIG undefined FUN_148dd9050(void)

ulonglong FUN_148dd9050(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x1e0) == 0) {
    uVar9 = 0;
  }
  else {
    FUN_148dd8930(param_1,&local_40);
    if (local_40 != 0) {
      lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1e0) + 0x230);
      if (lVar4 != 0) {
        plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x1e0) + 0x228);
        lVar4 = lVar4 * 0x18;
        do {
          lVar6 = plVar8[1];
          if (lVar6 == 0) {
            uVar5 = FUN_145cd97be();
            lVar6 = FUN_14477b664(uVar5);
            plVar8[1] = lVar6;
          }
          lVar7 = plVar8[2];
          if (lVar7 == 0) {
            if ((lVar6 != 0) && (*plVar8 != 0)) {
              plVar2 = *(longlong **)(lVar6 + 0xb8);
              if ((plVar2 == (longlong *)0x0) ||
                 (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
                plVar8[2] = 0;
              }
              else {
                uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
                lVar7 = FUN_144aff482(uVar5,plVar8);
                plVar8[2] = lVar7;
                if (lVar7 != 0) {
                  lVar6 = plVar8[1];
                  goto LAB_148dd9103;
                }
              }
            }
          }
          else {
LAB_148dd9103:
            if (lVar6 == 0) {
              uVar5 = FUN_145cd97be();
              lVar6 = FUN_14477b664(uVar5);
              plVar8[1] = lVar6;
              lVar7 = plVar8[2];
              if (lVar7 == 0) {
                if (lVar6 == 0) {
                  lVar7 = 0;
                }
                else {
                  lVar7 = 0;
                  if (*plVar8 != 0) {
                    plVar2 = *(longlong **)(lVar6 + 0xb8);
                    if ((plVar2 == (longlong *)0x0) ||
                       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
                      lVar7 = 0;
                    }
                    else {
                      uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
                      lVar7 = FUN_144aff482(uVar5,plVar8);
                    }
                    plVar8[2] = lVar7;
                  }
                }
              }
            }
            cVar3 = FUN_140f722bc(local_40,lVar7,param_2);
            if (cVar3 != '\0') {
              uVar9 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
              goto LAB_148dd9200;
            }
          }
          plVar8 = plVar8 + 3;
          lVar4 = lVar4 + -0x18;
        } while (lVar4 != 0);
      }
    }
    uVar9 = 0;
LAB_148dd9200:
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_38 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 148dd928c FUN_148dd928c body=104 status=ok
// SIG undefined FUN_148dd928c(void)

void FUN_148dd928c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x1e8);
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x240);
  if ((longlong)*(int *)(param_1 + 0x210) != 0) {
    lVar1 = (longlong)*(int *)(param_1 + 0x210) << 6;
    lVar2 = *(longlong *)(param_1 + 0x208) + 0x20;
    do {
      (**(code **)(*param_2 + 8))(param_2,lVar2);
      lVar2 = lVar2 + 0x40;
      lVar1 = lVar1 + -0x40;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 148dd92f4 FUN_148dd92f4 body=96 status=ok
// SIG undefined FUN_148dd92f4(void)

void FUN_148dd92f4(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x58);
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0xb0);
  if ((longlong)*(int *)(param_1 + 0x80) != 0) {
    lVar1 = (longlong)*(int *)(param_1 + 0x80) << 6;
    lVar2 = *(longlong *)(param_1 + 0x78) + 0x20;
    do {
      (**(code **)(*param_2 + 8))(param_2,lVar2);
      lVar2 = lVar2 + 0x40;
      lVar1 = lVar1 + -0x40;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 148dd9354 FUN_148dd9354 body=90 status=ok
// SIG undefined FUN_148dd9354(void)

void FUN_148dd9354(undefined8 param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446ddc76(&local_20,"StasisOwner",1);
  FUN_1489a646a(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dd93b0 FUN_148dd93b0 body=220 status=ok
// SIG undefined FUN_148dd93b0(void)

longlong * FUN_148dd93b0(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar4 = (longlong *)FUN_14001cc68(0x1b0,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b99bc50;
  plVar1 = plVar4 + 2;
  FUN_148dd9490(plVar1,param_1,param_3);
  local_40 = plVar1;
  local_38 = plVar4;
  FUN_148de676c(&local_40,plVar1);
  plVar3 = local_38;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
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



// FUNCTION 148dd9490 FUN_148dd9490 body=314 status=ok
// SIG undefined FUN_148dd9490(void)

undefined8 * FUN_148dd9490(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148e18372();
  *param_1 = &PTR_FUN_14b99ad50;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  FUN_1446ddc76(&local_28,"TargetList",1);
  if (*(int *)(param_3 + 0x18) != *(int *)(param_3 + 0x44)) {
    uVar1 = (uint)((ulonglong)local_28 >> 0x10);
    uVar4 = (uint)local_28 & 0xffff;
    lVar3 = param_3 + 0x48;
    if (*(longlong *)(param_3 + 0x50) != 0) {
      lVar3 = *(longlong *)(param_3 + 0x50);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_3 + 0x58) - 1U &
                             (int)((ulonglong)local_28 >> 0x20) + ((uint)local_28 << 0x10 | uVar4) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = *(longlong *)(param_3 + 0x10) + (longlong)iVar2 * 0x38;
        if (*(longlong *)(*(longlong *)(param_3 + 0x10) + (longlong)iVar2 * 0x38) == local_28) {
          if (lVar3 + 8 != 0 && lVar3 != 0) {
            FUN_1457d43e4(lVar3 + 8,&local_30);
            if (param_1[0x31] != local_30) {
              param_1[0x33] = 0;
            }
            param_1[0x31] = local_30;
          }
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x30);
      } while (iVar2 != -1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148dd95cc FUN_148dd95cc body=1184 status=ok
// SIG undefined FUN_148dd95cc(void)

undefined8 FUN_148dd95cc(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  undefined4 local_60;
  undefined8 local_58;
  code *local_50;
  undefined4 local_48;
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar4 = FUN_148e19118();
  uVar10 = 1;
  if (iVar4 != 0) goto LAB_148dd95f7;
  lVar5 = *(longlong *)(param_1 + 400);
  if (lVar5 == 0) {
    uVar10 = FUN_145cd97be();
    lVar5 = FUN_14477b664(uVar10);
    *(longlong *)(param_1 + 400) = lVar5;
  }
  plVar1 = (longlong *)(param_1 + 0x188);
  lVar6 = *(longlong *)(param_1 + 0x198);
  if (lVar6 == 0) {
    if ((lVar5 != 0) && (*plVar1 != 0)) {
      plVar2 = *(longlong **)(lVar5 + 0xb8);
      if (plVar2 != (longlong *)0x0) {
        cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
        if (cVar3 != '\0') {
          uVar10 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar6 = FUN_144aff482(uVar10,plVar1);
          *(longlong *)(param_1 + 0x198) = lVar6;
          if (lVar6 != 0) {
            lVar5 = *(longlong *)(param_1 + 400);
            goto LAB_148dd98d5;
          }
          goto LAB_148dd96ac;
        }
      }
      *(undefined8 *)(param_1 + 0x198) = 0;
    }
  }
  else {
LAB_148dd98d5:
    uVar10 = *(undefined8 *)(param_1 + 0x38);
    if (lVar5 == 0) {
      uVar8 = FUN_145cd97be();
      lVar5 = FUN_14477b664(uVar8);
      *(longlong *)(param_1 + 400) = lVar5;
      lVar6 = *(longlong *)(param_1 + 0x198);
      if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*plVar1 != 0)) {
        plVar2 = *(longlong **)(lVar5 + 0xb8);
        if (plVar2 == (longlong *)0x0) {
LAB_148dd9a61:
          lVar6 = 0;
        }
        else {
          cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
          if (cVar3 == '\0') goto LAB_148dd9a61;
          uVar8 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar6 = FUN_144aff482(uVar8,plVar1);
        }
        *(longlong *)(param_1 + 0x198) = lVar6;
      }
    }
    FUN_144a79b68(local_68,lVar6);
    local_60 = 0x19105;
    local_58 = 0;
    FUN_1446ddc76(local_40,"StasisOwner",1);
    uVar8 = FUN_145764230(param_1,local_40,0);
    FUN_1489913b4(uVar8,local_68,uVar10);
  }
LAB_148dd96ac:
  lVar5 = *(longlong *)(param_1 + 0x38);
  if (lVar5 != 0) {
    lVar6 = FUN_144a2f878();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        == lVar6 + 0x30)) {
      local_50 = FUN_148dd9a6e;
      local_48 = 0;
      FUN_148de6814(local_40,param_1);
      FUN_1448b6402(lVar5 + 0x4e80,&local_50,local_40);
      FUN_1449db362(local_40);
    }
  }
  FUN_1446ddc76(local_40,"Skill",1);
  uVar10 = 0;
  lVar5 = FUN_14105cc4c(param_1,local_40,0);
  if (lVar5 == 0) goto LAB_148dd95f7;
  lVar6 = FUN_144a82bde();
  if (((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
      (*(longlong *)
        (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
       != lVar6 + 0x30)) || (uVar10 = 0, (*(byte *)(lVar5 + 0x248) & 1) != 0)) goto LAB_148dd95f7;
  lVar6 = *(longlong *)(lVar5 + 0x40);
  if (lVar6 != 0) {
    local_50 = (code *)&LAB_148dd9ab2;
    local_48 = 0;
    FUN_148de6cf8(local_40,param_1);
    FUN_140725f8c(lVar6 + 0x2d0,&local_50,local_40);
    FUN_1449db362(local_40);
  }
  local_50 = (code *)&LAB_148dd9c3a;
  local_48 = 0;
  FUN_148dd9ab8(local_40,param_1);
  lVar7 = FUN_1403ca43f();
  lVar6 = *(longlong *)(lVar7 + 0x28);
  if (lVar6 == 0) {
    uVar10 = FUN_14110242a();
    lVar6 = FUN_14477b664(uVar10);
    *(longlong *)(lVar7 + 0x28) = lVar6;
  }
  lVar9 = *(longlong *)(lVar7 + 0x30);
  if (((lVar9 == 0) && (lVar9 = 0, lVar6 != 0)) && (*(longlong *)(lVar7 + 0x20) != 0)) {
    plVar1 = *(longlong **)(lVar6 + 0xb8);
    if (plVar1 == (longlong *)0x0) {
LAB_148dd9a68:
      lVar9 = 0;
    }
    else {
      cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1);
      if (cVar3 == '\0') goto LAB_148dd9a68;
      uVar10 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar9 = FUN_144aff482(uVar10,(longlong *)(lVar7 + 0x20));
    }
    *(longlong *)(lVar7 + 0x30) = lVar9;
  }
  FUN_145942c6c(lVar5,&local_50,lVar9,local_40);
  FUN_1449db362(local_40);
  FUN_1446ddc76(local_40,"ControlledChaos",1);
  uVar10 = 0;
  cVar3 = FUN_1408814c2(param_1,local_40,0);
  if ((cVar3 != '\0') && (lVar6 = *(longlong *)(param_1 + 0xa8), lVar6 != 0)) {
    lVar7 = FUN_145a894b8();
    if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        == lVar7 + 0x30)) {
      lVar6 = FUN_14108b142(lVar6 + 0x50);
      if (lVar6 != 0) {
        local_50 = FUN_148dd9dc6;
        local_48 = 0;
        FUN_148dd9c44(local_40,param_1);
        FUN_1457ef27a(lVar5,&local_50,lVar6,local_40);
        FUN_1449db362(local_40);
      }
    }
  }
LAB_148dd95f7:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dd9a6e FUN_148dd9a6e body=68 status=ok
// SIG undefined FUN_148dd9a6e(void)

void FUN_148dd9a6e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    lVar2 = FUN_145a894b8();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_148bab028(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 148dd9ab8 FUN_148dd9ab8 body=386 status=ok
// SIG undefined FUN_148dd9ab8(void)

longlong * FUN_148dd9ab8(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148dd9bc9:
    *puVar5 = &PTR_LAB_149e06450;
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
    *puVar5 = &PTR_FUN_14b99bd50;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148dd9bc9;
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
    *puVar5 = &PTR_LAB_149e06450;
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
    *puVar5 = &PTR_FUN_14b99bd50;
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



// FUNCTION 148dd9c44 FUN_148dd9c44 body=386 status=ok
// SIG undefined FUN_148dd9c44(void)

longlong * FUN_148dd9c44(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148dd9d55:
    *puVar5 = &PTR_LAB_14b42a7c0;
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
    *puVar5 = &PTR_FUN_14b99bdc0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148dd9d55;
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
    *puVar5 = &PTR_LAB_14b42a7c0;
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
    *puVar5 = &PTR_FUN_14b99bdc0;
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



// FUNCTION 148dd9dc6 FUN_148dd9dc6 body=343 status=ok
// SIG undefined FUN_148dd9dc6(void)

void FUN_148dd9dc6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_d8 [40];
  undefined1 local_b0 [8];
  undefined1 local_a8 [40];
  undefined4 local_80;
  undefined8 **local_78 [3];
  ushort local_60;
  byte local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a8[0] = 0;
  local_80 = 0;
  FUN_14575a19a(local_a8,0);
  FUN_1447c3578(param_4,local_78,local_a8);
  local_50 = FUN_144a7ecd0(local_78);
  puVar2 = &local_50;
  local_38 = 4;
  local_30 = 3;
  FUN_1446ddc76(local_b0,"Unstable",1);
  FUN_1408834b4(param_1,local_b0,puVar2);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_38) {
      puVar2 = (undefined4 *)CONCAT44(uStack_4c,local_50);
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < local_38) {
    FUN_1400020a8(CONCAT44(uStack_4c,local_50));
  }
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar3 = local_78;
    if (0x18 < local_60) {
      pppuVar3 = (undefined8 ***)local_78[0];
    }
    (*pcVar1)(pppuVar3);
  }
  if (0x18 < local_60) {
    FUN_1400020a8(local_78[0]);
  }
  FUN_144a5ac3a(local_a8);
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dd9f1e FUN_148dd9f1e body=455 status=ok
// SIG undefined FUN_148dd9f1e(void)

void FUN_148dd9f1e(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  undefined4 local_48;
  undefined8 local_40;
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar5 = *(longlong *)(param_1 + 400);
  if (lVar5 == 0) {
    uVar4 = FUN_145cd97be();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 400) = lVar5;
  }
  plVar1 = (longlong *)(param_1 + 0x188);
  lVar6 = *(longlong *)(param_1 + 0x198);
  if (lVar6 == 0) {
    if ((lVar5 == 0) || (*plVar1 == 0)) goto LAB_148dd9fc9;
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if (plVar2 != (longlong *)0x0) {
      cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
      if (cVar3 != '\0') {
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar6 = FUN_144aff482(uVar4,plVar1);
        *(longlong *)(param_1 + 0x198) = lVar6;
        if (lVar6 == 0) goto LAB_148dd9fc9;
        lVar5 = *(longlong *)(param_1 + 400);
        goto LAB_148dd9ffd;
      }
    }
    *(undefined8 *)(param_1 + 0x198) = 0;
    goto LAB_148dd9fc9;
  }
LAB_148dd9ffd:
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  if (lVar5 == 0) {
    uVar7 = FUN_145cd97be();
    lVar5 = FUN_14477b664(uVar7);
    *(longlong *)(param_1 + 400) = lVar5;
    lVar6 = *(longlong *)(param_1 + 0x198);
    if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*plVar1 != 0)) {
      plVar2 = *(longlong **)(lVar5 + 0xb8);
      if (plVar2 == (longlong *)0x0) {
LAB_148dda0e2:
        lVar6 = 0;
      }
      else {
        cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
        if (cVar3 == '\0') goto LAB_148dda0e2;
        uVar7 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar6 = FUN_144aff482(uVar7,plVar1);
      }
      *(longlong *)(param_1 + 0x198) = lVar6;
    }
  }
  FUN_144a79b68(local_50,lVar6);
  local_48 = 0x19105;
  local_40 = 0;
  FUN_1446ddc76(local_38,"StasisOwner",1);
  uVar7 = FUN_145764230(param_1,local_38,0);
  FUN_1489914d0(uVar7,local_50,uVar4);
LAB_148dd9fc9:
  FUN_148e19e1c(param_1,param_2);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dda0e6 FUN_148dda0e6 body=123 status=ok
// SIG undefined FUN_148dda0e6(void)

void FUN_148dda0e6(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  cVar2 = FUN_144709e00(*param_2,"Unstable");
  if ((cVar2 != '\0') && (lVar1 = *(longlong *)(param_1 + 0xa8), lVar1 != 0)) {
    lVar3 = FUN_145a894b8();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      uVar4 = FUN_144a7ecd0(param_3);
      FUN_148bab058(lVar1,uVar4);
    }
  }
  FUN_148e19ff0(param_1,param_2,param_3);
  return;
}



// FUNCTION 148dda162 FUN_148dda162 body=132 status=ok
// SIG undefined FUN_148dda162(void)

void FUN_148dda162(undefined8 param_1,char param_2)

{
  int *piVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146078160(param_1,&local_30);
  if (param_2 == '\0') {
    FUN_148dd7c06(local_30);
  }
  else {
    FUN_148dd79f0();
  }
  if (local_28 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_28 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dda1f8 FUN_148dda1f8 body=134 status=ok
// SIG undefined FUN_148dda1f8(void)

undefined8 FUN_148dda1f8(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146078160(param_2,&local_28);
  FUN_148dd790c(local_28,param_1);
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dda282 FUN_148dda282 body=97 status=ok
// SIG undefined FUN_148dda282(void)

undefined8 * FUN_148dda282(undefined8 *param_1)

{
  FUN_1411b9bf0();
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 10;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 10;
  memset(param_1 + 0x12,0,0x100);
  *param_1 = &PTR_FUN_14b99ae10;
  return param_1;
}



// FUNCTION 148dda2e4 FUN_148dda2e4 body=147 status=ok
// SIG undefined FUN_148dda2e4(void)

undefined8 * FUN_148dda2e4(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x178);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b99c0f0;
  plVar1 = plVar3 + 2;
  memset(plVar1,0,0x168);
  FUN_145c42fa8(plVar1);
  plVar3[2] = (longlong)&PTR_FUN_14b63ef40;
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



// FUNCTION 148dda378 FUN_148dda378 body=96 status=ok
// SIG undefined FUN_148dda378(void)

void FUN_148dda378(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_1458ad644();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_14485c47a(param_1 + 0x2d,param_2);
                    /* WARNING: Could not recover jumptable at 0x000148dda3d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xa0))(param_1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 148dda3d8 FUN_148dda3d8 body=92 status=ok
// SIG undefined FUN_148dda3d8(void)

void FUN_148dda3d8(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = FUN_144729dda(param_1 + 0x168);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0x168);
    cVar1 = FUN_148ddba9c(plVar2 + 0x24,param_2);
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000148dda431. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x3b0))(plVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 148dda434 FUN_148dda434 body=101 status=ok
// SIG undefined FUN_148dda434(void)

void FUN_148dda434(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FUN_144729dda(param_1 + 0x168);
  if (cVar2 == '\0') {
    return;
  }
  lVar1 = FUN_14479d2ce(param_1 + 0x168);
  FUN_148ddbed2(lVar1 + 0x120,param_2,param_1 + 0x170,param_3);
  return;
}



// FUNCTION 148dda49a FUN_148dda49a body=83 status=ok
// SIG undefined FUN_148dda49a(void)

void FUN_148dda49a(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  
  cVar1 = FUN_144729dda(param_1 + 0x168);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 0x168);
    if (0 < *(int *)(lVar2 + 0x238)) {
      uVar3 = *(int *)(lVar2 + 0x238) + 1;
      do {
        FUN_148ddb9b0(lVar2 + 0x120,uVar3 - 2);
        uVar3 = uVar3 - 1;
      } while (1 < uVar3);
    }
  }
  return;
}



// FUNCTION 148dda4ee FUN_148dda4ee body=130 status=ok
// SIG undefined FUN_148dda4ee(void)

undefined4 FUN_148dda4ee(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  
  cVar1 = FUN_144729dda(param_1 + 0x168);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 0x168);
    if ((longlong)*(int *)(lVar2 + 0x238) != 0) {
      lVar3 = *(longlong *)(lVar2 + 0x230);
      lVar2 = (longlong)*(int *)(lVar2 + 0x238) * 0xa8;
      do {
        if (*(longlong *)(lVar3 + 0x18) == param_2) {
          if (lVar3 == 0) {
            return 0;
          }
          puVar4 = (undefined4 *)(lVar3 + 0xa0);
          if (*(char *)(lVar3 + 0x81) != '\0') {
            puVar4 = (undefined4 *)(lVar3 + 0x28);
          }
          return *puVar4;
        }
        lVar3 = lVar3 + 0xa8;
        lVar2 = lVar2 + -0xa8;
      } while (lVar2 != 0);
    }
  }
  return 0;
}



// FUNCTION 148dda570 FUN_148dda570 body=70 status=ok
// SIG undefined FUN_148dda570(void)

void FUN_148dda570(longlong param_1)

{
  longlong lVar1;
  
  if ((((*(byte *)(param_1 + 0x30) & 2) != 0) && (*(longlong *)(param_1 + 0x1a8) != 0)) &&
     (*(longlong *)(param_1 + 0x180) != 0)) {
    lVar1 = FUN_1403ca30c(param_1);
    if (lVar1 != 0) {
      FUN_1458a0064(*(undefined8 *)(param_1 + 0x1a8));
      return;
    }
  }
  return;
}



// FUNCTION 148dda5ce FUN_148dda5ce body=422 status=ok
// SIG undefined FUN_148dda5ce(void)

/* WARNING: Removing unreachable block (ram,0x000148dda6a3) */
/* WARNING: Removing unreachable block (ram,0x000148dda6a9) */
/* WARNING: Removing unreachable block (ram,0x000148dda6b7) */

void FUN_148dda5ce(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined1 auStack_d8 [40];
  undefined4 local_b0;
  byte local_ac;
  longlong local_a8;
  longlong lStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar3 = FUN_14479d2ce();
  if (lVar3 == 0) goto LAB_148dda741;
  if (param_2 == '\0') {
    if ((*(char *)(param_1 + 0x1a4) == '\x01') &&
       (FUN_145863238(lVar3 + 0x68d8,*(undefined4 *)(param_1 + 0x1a0)),
       *(char *)(param_1 + 0x1a4) == '\x01')) {
      *(undefined1 *)(param_1 + 0x1a4) = 0;
    }
    goto LAB_148dda741;
  }
  if ((*(char *)(param_1 + 0x1a4) != '\0') || (lVar1 = *(longlong *)(param_1 + 400), lVar1 == 0))
  goto LAB_148dda741;
  local_84 = 0;
  local_60 = 0;
  local_58 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_54 = 0xffffffff00000080;
  local_4c = 0;
  local_40 = 0;
  local_38 = 0;
  lStack_a0 = *(longlong *)(param_1 + 0x198);
  if (lStack_a0 == 0) {
    lStack_a0 = 0;
  }
  else {
    LOCK();
    *(int *)(lStack_a0 + 8) = *(int *)(lStack_a0 + 8) + 1;
    UNLOCK();
  }
  local_a8 = lVar1;
  FUN_140fbc5b2(lVar3 + 0x68d8,&local_b0,&local_a8);
  if (&local_b0 != (undefined4 *)(param_1 + 0x1a0)) {
    if ((local_ac & 1) == 0) {
      if (*(char *)(param_1 + 0x1a4) != '\x01') goto LAB_148dda737;
      uVar2 = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x1a0) = local_b0;
      uVar2 = 1;
    }
    *(undefined1 *)(param_1 + 0x1a4) = uVar2;
  }
LAB_148dda737:
  FUN_141519bc8(&local_a8);
LAB_148dda741:
  if ((local_28 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148dda776 FUN_148dda776 body=168 status=ok
// SIG undefined FUN_148dda776(void)

undefined8 * FUN_148dda776(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(400);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b99c110;
  plVar1 = plVar3 + 2;
  memset(plVar1,0,0x180);
  FUN_145c42fa8(plVar1);
  plVar3[2] = (longlong)&PTR_FUN_14b63efe0;
  plVar3[0x2f] = 0;
  plVar3[0x30] = 0;
  plVar3[0x31] = 0;
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



// FUNCTION 148dda81e FUN_148dda81e body=102 status=ok
// SIG undefined FUN_148dda81e(void)

void FUN_148dda81e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x200);
  (**(code **)(*param_2 + 8))(param_2,param_1 + 600);
  if ((longlong)*(int *)(param_1 + 0x228) != 0) {
    lVar1 = (longlong)*(int *)(param_1 + 0x228) << 6;
    lVar2 = *(longlong *)(param_1 + 0x220) + 0x20;
    do {
      (**(code **)(*param_2 + 8))(param_2,lVar2);
      lVar2 = lVar2 + 0x40;
      lVar1 = lVar1 + -0x40;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 148dda884 FUN_148dda884 body=96 status=ok
// SIG undefined FUN_148dda884(void)

void FUN_148dda884(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [44];
  undefined1 local_1c [16];
  undefined1 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 400);
  if ((lVar1 != 0) &&
     ((*(longlong *)(lVar1 + 0xe0) == 0 || (*(char *)(*(longlong *)(lVar1 + 0xe0) + 0xa0) != '\0')))
     ) {
    local_c = 0;
    FUN_14103b778(lVar1,local_1c,1);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dda924 FUN_148dda924 body=102 status=ok
// SIG undefined FUN_148dda924(void)

void FUN_148dda924(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x1e8);
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x240);
  if ((longlong)*(int *)(param_1 + 0x210) != 0) {
    lVar1 = (longlong)*(int *)(param_1 + 0x210) << 6;
    lVar2 = *(longlong *)(param_1 + 0x208) + 0x20;
    do {
      (**(code **)(*param_2 + 8))(param_2,lVar2);
      lVar2 = lVar2 + 0x40;
      lVar1 = lVar1 + -0x40;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 148dda98a FUN_148dda98a body=102 status=ok
// SIG undefined FUN_148dda98a(void)

void FUN_148dda98a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x1e8);
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x240);
  if ((longlong)*(int *)(param_1 + 0x210) != 0) {
    lVar1 = (longlong)*(int *)(param_1 + 0x210) << 6;
    lVar2 = *(longlong *)(param_1 + 0x208) + 0x20;
    do {
      (**(code **)(*param_2 + 8))(param_2,lVar2);
      lVar2 = lVar2 + 0x40;
      lVar1 = lVar1 + -0x40;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 148dda9f0 FUN_148dda9f0 body=138 status=ok
// SIG undefined FUN_148dda9f0(void)

void FUN_148dda9f0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145ceaed8(param_1,&local_40);
  FUN_148dda434(local_40,param_2,param_3);
  if (local_38 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_38 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ddaa90 FUN_148ddaa90 body=122 status=ok
// SIG undefined FUN_148ddaa90(void)

void FUN_148ddaa90(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145ceaed8(param_1,&local_28);
  FUN_148dda3d8(local_28,param_2);
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



// FUNCTION 148ddab1c FUN_148ddab1c body=122 status=ok
// SIG undefined FUN_148ddab1c(void)

void FUN_148ddab1c(undefined8 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148ddaba8(param_1,&local_30);
  FUN_148dda5ce(local_30,param_2);
  if (local_28 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_28 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ddaba8 FUN_148ddaba8 body=144 status=ok
// SIG undefined FUN_148ddaba8(void)

undefined8 * FUN_148ddaba8(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140df5234(param_1,&local_28);
  *param_2 = local_28;
  param_2[1] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ddac3c FUN_148ddac3c body=116 status=ok
// SIG undefined FUN_148ddac3c(void)

void FUN_148ddac3c(undefined8 param_1)

{
  int *piVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145ceaed8(param_1,&local_28);
  FUN_148dda49a(local_28);
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



// FUNCTION 148ddacc2 FUN_148ddacc2 body=119 status=ok
// SIG undefined FUN_148ddacc2(void)

undefined4 FUN_148ddacc2(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145ceaed8(param_1,&local_28);
  uVar3 = FUN_148dda4ee(local_28,param_2);
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



// FUNCTION 148ddad3a FUN_148ddad3a body=116 status=ok
// SIG undefined FUN_148ddad3a(void)

void FUN_148ddad3a(undefined8 param_1)

{
  int *piVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_148ddadc0(param_1,&local_28);
  FUN_148dda884(local_28);
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



// FUNCTION 148ddadc0 FUN_148ddadc0 body=144 status=ok
// SIG undefined FUN_148ddadc0(void)

undefined8 * FUN_148ddadc0(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140df5234(param_1,&local_28);
  *param_2 = local_28;
  param_2[1] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ddae54 FUN_148ddae54 body=155 status=ok
// SIG undefined FUN_148ddae54(void)

undefined8 * FUN_148ddae54(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  *param_1 = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x82) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(param_2);
  }
  param_1[3] = param_2;
  *(undefined1 *)((longlong)param_1 + 0x82) = param_3;
  return param_1;
}



// FUNCTION 148ddaef0 FUN_148ddaef0 body=100 status=ok
// SIG undefined FUN_148ddaef0(void)

void FUN_148ddaef0(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [45];
  undefined1 local_1b [2];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_148ddaf56();
  if (*(longlong *)(param_2 + 0x120) != 0) {
    local_19 = 0;
    local_1b[0] = 1;
    FUN_14421fc20(*(longlong *)(param_2 + 0x120),local_1b,*(undefined8 *)(param_1 + 0x18));
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ddaf56 FUN_148ddaf56 body=290 status=ok
// SIG undefined FUN_148ddaf56(void)

void FUN_148ddaf56(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0x30);
  lVar2 = param_1 + 0x40;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  iVar4 = 0;
  local_40 = lVar2;
  if (*(int *)(param_1 + 0x58) != 0) {
    FUN_1449c0562(&local_48);
    iVar4 = *(int *)(param_1 + 0x58);
  }
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_68 = local_48;
  local_60 = local_40;
  local_70 = plVar1;
  if ((iStack_34 != iVar4) || (local_40 != lVar2)) {
    do {
      plVar3 = *(longlong **)(*local_70 + 8 + (longlong)iStack_54 * 0x18);
      if ((plVar3 != (longlong *)0x0) && ((*(uint *)(plVar3 + 1) >> 0x1e & 1) == 0)) {
        (**(code **)(*plVar3 + 0x2b0))();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (local_70 != plVar1 || (local_60 != lVar2 || iStack_54 != iVar4));
  }
  FUN_148de8b48(plVar1);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ddb07a FUN_148ddb07a body=119 status=ok
// SIG undefined FUN_148ddb07a(void)

void FUN_148ddb07a(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [45];
  undefined1 local_1b [2];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined1 *)(param_1 + 0x81) = 1;
  *(undefined1 *)(param_1 + 0x82) = *(undefined1 *)(param_2 + 0x128);
  FUN_148ddb0f2();
  if (*(longlong *)(param_2 + 0x120) != 0) {
    local_19 = 0;
    local_1b[0] = 0;
    FUN_14421fc20(*(longlong *)(param_2 + 0x120),local_1b,*(undefined8 *)(param_1 + 0x18));
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ddb0f2 FUN_148ddb0f2 body=347 status=ok
// SIG undefined FUN_148ddb0f2(void)

undefined8 FUN_148ddb0f2(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  byte bVar2;
  undefined1 *puVar3;
  uint uVar4;
  byte bVar5;
  longlong lVar6;
  byte *pbVar7;
  uint uVar8;
  undefined1 auStack_78 [42];
  undefined1 local_4e;
  undefined1 local_4d;
  byte local_4c [3];
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0x81) == '\x01') {
    bVar5 = *(byte *)(param_1 + 0x20);
    if (bVar5 == 0) {
LAB_148ddb241:
      uVar1 = 0;
      goto LAB_148ddb1d9;
    }
  }
  else {
    if ((longlong)*(int *)(param_1 + 0xa0) == 0) {
      bVar5 = 0;
    }
    else {
      lVar6 = 0;
      bVar5 = 0;
      do {
        bVar5 = bVar5 | (byte)(1 << (*(byte *)(*(longlong *)(param_1 + 0x98) + 0xc + lVar6) & 0x1f))
        ;
        lVar6 = lVar6 + 0x10;
      } while ((longlong)*(int *)(param_1 + 0xa0) * 0x10 != lVar6);
    }
    if (*(byte *)(param_1 + 0x20) == bVar5) goto LAB_148ddb241;
    *(byte *)(param_1 + 0x20) = bVar5;
  }
  uVar4 = 0;
  do {
    bVar2 = (byte)uVar4;
    uVar8 = 1 << (bVar2 & 0x1f) & (uint)bVar5;
    if ((uVar8 != 0) != ((*(byte *)(param_1 + 0x80) >> (uVar4 & 0x1f) & 1) != 0)) {
      if (uVar8 == 0) {
        lVar6 = *(longlong *)(param_2 + 0x120);
        if (lVar6 != 0) {
          local_49 = 1;
          local_4d = 5;
          puVar3 = &local_4d;
          pbVar7 = local_4c + 2;
          local_4c[2] = bVar2;
          goto LAB_148ddb1b8;
        }
      }
      else {
        lVar6 = *(longlong *)(param_2 + 0x120);
        if (lVar6 != 0) {
          local_4c[1] = 1;
          local_4e = 4;
          puVar3 = &local_4e;
          pbVar7 = local_4c;
          local_4c[0] = bVar2;
LAB_148ddb1b8:
          FUN_14421fc20(lVar6,puVar3,*(undefined8 *)(param_1 + 0x18),pbVar7);
        }
      }
      FUN_148ddb67c(param_1,uVar4,uVar8 != 0);
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 != 6);
  *(byte *)(param_1 + 0x80) = bVar5;
  uVar1 = 1;
LAB_148ddb1d9:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 148ddb24e FUN_148ddb24e body=45 status=ok
// SIG undefined FUN_148ddb24e(void)

void FUN_148ddb24e(undefined8 param_1,undefined8 param_2)

{
  FUN_148ddb0f2();
  FUN_148ddb27c(param_1,param_2);
  FUN_148ddb32a(param_1,param_2);
  return;
}



// FUNCTION 148ddb27c FUN_148ddb27c body=174 status=ok
// SIG undefined FUN_148ddb27c(void)

ulonglong FUN_148ddb27c(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  
  if (*(char *)(param_1 + 0x81) == '\0') {
    if ((longlong)*(int *)(param_1 + 0xa0) == 0) {
      iVar1 = 0;
    }
    else {
      lVar3 = 0;
      fVar4 = 0.0;
      do {
        fVar5 = *(float *)(*(longlong *)(param_1 + 0x98) + lVar3);
        if ((0.0 < fVar5) &&
           (fVar5 = *(float *)(*(longlong *)(param_1 + 0x98) + 4 + lVar3) / fVar5, fVar4 <= fVar5))
        {
          fVar4 = fVar5;
        }
        lVar3 = lVar3 + 0x10;
      } while ((longlong)*(int *)(param_1 + 0xa0) * 0x10 != lVar3);
      iVar1 = (int)(fVar4 * 100.0);
    }
    *(int *)(param_1 + 0x24) = iVar1;
  }
  if (*(char *)(param_1 + 0x88) == '\0') {
    iVar1 = *(int *)(param_1 + 0x24);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x24);
    if (*(int *)(param_1 + 0x84) == iVar1) {
      uVar2 = 0;
      goto LAB_148ddb317;
    }
  }
  *(int *)(param_1 + 0x84) = iVar1;
  *(undefined1 *)(param_1 + 0x88) = 1;
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (*(longlong *)(param_2 + 0x120) != 0) {
    FUN_148ddc3be();
  }
LAB_148ddb317:
  return uVar2 & 0xffffffff;
}



// FUNCTION 148ddb32a FUN_148ddb32a body=93 status=ok
// SIG undefined FUN_148ddb32a(void)

ulonglong FUN_148ddb32a(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  
  if (*(char *)(param_1 + 0x81) == '\0') {
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0xa0);
  }
  if (*(char *)(param_1 + 0x90) == '\0') {
    iVar1 = *(int *)(param_1 + 0x28);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x28);
    if (*(int *)(param_1 + 0x8c) == iVar1) {
      uVar2 = 0;
      goto LAB_148ddb378;
    }
  }
  *(int *)(param_1 + 0x8c) = iVar1;
  *(undefined1 *)(param_1 + 0x90) = 1;
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (*(longlong *)(param_2 + 0x120) != 0) {
    FUN_148ddc3be();
  }
LAB_148ddb378:
  return uVar2 & 0xffffffff;
}



// FUNCTION 148ddb388 FUN_148ddb388 body=348 status=ok
// SIG undefined FUN_148ddb388(void)

void FUN_148ddb388(longlong *param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  longlong *plVar1;
  bool bVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  plVar1 = param_1 + 0x13;
  iVar6 = (int)param_1[0x14];
  *(uint *)(param_1 + 0x14) = iVar6 + 1U;
  plVar4 = param_1;
  if (*(uint *)((longlong)param_1 + 0xa4) < iVar6 + 1U) {
    plVar4 = plVar1;
    FUN_148de84e8(plVar1,iVar6);
  }
  lVar5 = *plVar1;
  lVar8 = (longlong)iVar6 * 0x10;
  *(undefined4 *)(lVar5 + lVar8) = param_3;
  *(undefined4 *)(lVar5 + 4 + lVar8) = param_3;
  *(undefined4 *)(lVar5 + 8 + lVar8) = param_4;
  *(undefined1 *)(lVar5 + 0xc + lVar8) = param_5;
  *(undefined1 *)(lVar5 + 0xd + lVar8) = param_6;
  if (*(char *)(param_2 + 0x130) == '\x01') {
    uVar3 = *(uint *)(param_1 + 0x14);
    if ((0 < (int)uVar3) && (*(int *)(param_2 + 300) < (int)uVar3)) {
      lVar5 = 8;
      uVar7 = 0;
      bVar2 = false;
      do {
        if ((!bVar2) ||
           (*(float *)(*plVar1 + lVar5) < *(float *)(*plVar1 + 8 + (longlong)(int)plVar4 * 0x10))) {
          bVar2 = true;
          plVar4 = (longlong *)(uVar7 & 0xffffffff);
        }
        uVar7 = uVar7 + 1;
        lVar5 = lVar5 + 0x10;
      } while (uVar3 != uVar7);
      if (bVar2) {
        iVar6 = ~(uint)plVar4 + uVar3;
        if (iVar6 != 0) {
          lVar5 = (longlong)(int)(uint)plVar4 * 0x10;
          memmove((void *)(param_1[0x13] + lVar5),(void *)(lVar5 + param_1[0x13] + 0x10),
                  (longlong)iVar6 << 4);
          uVar3 = *(uint *)(param_1 + 0x14);
        }
        *(uint *)(param_1 + 0x14) = uVar3 - 1;
        FUN_148de856e(plVar1);
      }
    }
  }
  FUN_140705884(param_2,param_1);
  FUN_148ddb0f2(param_1,param_2);
  return;
}



// FUNCTION 148ddb4e4 FUN_148ddb4e4 body=116 status=ok
// SIG undefined FUN_148ddb4e4(void)

void FUN_148ddb4e4(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  float *pfVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0xa0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x98);
    lVar4 = 0;
    do {
      pfVar3 = (float *)FUN_148de860a(param_2,*(undefined1 *)(lVar2 + 0xc + lVar4),
                                      lVar2 + 0xc + lVar4);
      *pfVar3 = *(float *)(lVar2 + 8 + lVar4) + *pfVar3;
      pfVar3[1] = (float)((int)pfVar3[1] + 1);
      *(byte *)(pfVar3 + 2) =
           *(byte *)(pfVar3 + 2) | (byte)(1 << (*(byte *)(lVar2 + 0xd + lVar4) & 0x1f));
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar4);
  }
  return;
}



// FUNCTION 148ddb558 FUN_148ddb558 body=291 status=ok
// SIG undefined FUN_148ddb558(void)

void FUN_148ddb558(longlong param_1,undefined8 param_2,float param_3)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar7 = (ulonglong)*(int *)(param_1 + 0xa0);
  if (0 < (longlong)uVar7) {
    plVar1 = (longlong *)(param_1 + 0x98);
    iVar8 = -*(int *)(param_1 + 0xa0);
    lVar6 = uVar7 << 4;
    do {
      *(float *)(*plVar1 + -0xc + lVar6) = *(float *)(*plVar1 + -0xc + lVar6) - param_3;
      lVar2 = *plVar1;
      if (*(float *)(lVar2 + -0xc + lVar6) <= 0.0) {
        uVar5 = *(uint *)(param_1 + 0xa0);
        if (uVar7 != uVar5) {
          memmove((void *)(lVar2 + lVar6 + -0x10),(void *)(lVar2 + lVar6),
                  (longlong)(int)(uVar5 + iVar8) << 4);
          uVar5 = *(uint *)(param_1 + 0xa0);
        }
        *(uint *)(param_1 + 0xa0) = uVar5 - 1;
        FUN_148de856e(plVar1);
      }
      iVar8 = iVar8 + 1;
      lVar6 = lVar6 + -0x10;
      bVar3 = 1 < uVar7;
      uVar7 = uVar7 - 1;
    } while (bVar3);
    cVar4 = FUN_148ddb0f2(param_1,param_2);
    if (((cVar4 != '\0') || (cVar4 = FUN_148ddb27c(param_1,param_2), cVar4 != '\0')) ||
       (cVar4 = FUN_148ddb32a(param_1,param_2), cVar4 != '\0')) {
      FUN_140705884(param_2,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 148ddb67c FUN_148ddb67c body=138 status=ok
// SIG undefined FUN_148ddb67c(void)

void FUN_148ddb67c(longlong param_1,char param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if ((*(char *)(param_1 + 0x82) == '\x01') && (*(longlong *)(param_1 + 0x18) != 0)) {
    lVar1 = FUN_1403ca43f();
    if ((longlong)*(int *)(lVar1 + 0x290) != 0) {
      lVar3 = *(longlong *)(lVar1 + 0x288);
      lVar1 = (longlong)*(int *)(lVar1 + 0x290) * 0x60;
      do {
        if (*(char *)(lVar3 + 0x28) == param_2) {
          if (lVar3 == 0) {
            return;
          }
          plVar2 = (longlong *)FUN_148ddb706(param_1,lVar3,param_3);
          if (plVar2 == (longlong *)0x0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x000148ddb703. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar2 + 0x2b8))(plVar2,param_3,0,*(code **)(*plVar2 + 0x2b8));
          return;
        }
        lVar3 = lVar3 + 0x60;
        lVar1 = lVar1 + -0x60;
      } while (lVar1 != 0);
    }
  }
  return;
}



// FUNCTION 148ddb706 FUN_148ddb706 body=550 status=ok
// SIG undefined FUN_148ddb706(void)

undefined8 FUN_148ddb706(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined4 local_d0;
  undefined1 local_c8;
  undefined1 local_c0;
  undefined1 local_b8;
  undefined1 local_b0;
  longlong *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  byte *local_60;
  longlong **local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar1 = (longlong *)(param_1 + 0x30);
  iVar7 = *(int *)(param_1 + 0x38);
  iVar9 = *(int *)(param_1 + 100);
  if (iVar7 != iVar9) {
    bVar4 = *(byte *)(param_2 + 0x28);
    lVar10 = param_1 + 0x68;
    if (*(longlong *)(param_1 + 0x70) != 0) {
      lVar10 = *(longlong *)(param_1 + 0x70);
    }
    iVar11 = *(int *)(lVar10 + (ulonglong)(*(int *)(param_1 + 0x78) - 1U & (uint)bVar4) * 4);
    if (iVar11 != -1) {
      do {
        if (*(byte *)(*plVar1 + (longlong)iVar11 * 0x18) == bVar4) goto LAB_148ddb84c;
        iVar11 = *(int *)(*plVar1 + (longlong)iVar11 * 0x18 + 0x10);
      } while (iVar11 != -1);
    }
  }
  if (param_3 == '\0') {
    uVar13 = 0;
  }
  else {
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_98 = *(undefined4 *)(param_2 + 0x38);
    uStack_94 = *(undefined4 *)(param_2 + 0x3c);
    uStack_90 = *(undefined4 *)(param_2 + 0x40);
    uStack_8c = *(undefined4 *)(param_2 + 0x44);
    local_88 = *(undefined8 *)(param_2 + 0x48);
    uVar2 = *(undefined8 *)(param_2 + 0x2c);
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x428);
    uVar5 = FUN_1412fe774(param_2);
    uVar13 = 0;
    local_b8 = 0;
    local_c0 = 0;
    local_c8 = 0;
    local_b0 = 1;
    local_d0 = 2;
    local_d8 = &local_78;
    plVar6 = (longlong *)FUN_140e3e35e(uVar5,uVar3,uVar2,&local_98);
    if (plVar6 != (longlong *)0x0) {
      iVar7 = *(int *)(param_2 + 0x58);
      if ((longlong)iVar7 != 0) {
        lVar10 = *(longlong *)(param_2 + 0x50);
        lVar12 = 0;
        do {
          (**(code **)(*plVar6 + 0xa00))
                    (plVar6,*(undefined8 *)(lVar10 + lVar12),*(undefined4 *)(lVar10 + 8 + lVar12));
          lVar12 = lVar12 + 0xc;
        } while ((longlong)iVar7 * 0xc != lVar12);
      }
      local_a0 = plVar6;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(plVar6);
      }
      local_58 = &local_a0;
      local_60 = (byte *)(param_2 + 0x28);
      FUN_148de8e6c(plVar1,local_4c);
      bVar4 = *(byte *)(param_2 + 0x28);
      iVar7 = *(int *)(param_1 + 0x38);
      iVar9 = *(int *)(param_1 + 100);
LAB_148ddb84c:
      if (iVar7 != iVar9) {
        lVar10 = param_1 + 0x68;
        if (*(longlong *)(param_1 + 0x70) != 0) {
          lVar10 = *(longlong *)(param_1 + 0x70);
        }
        iVar7 = *(int *)(lVar10 + (ulonglong)(*(int *)(param_1 + 0x78) - 1U & (uint)bVar4) * 4);
        if (iVar7 != -1) {
          do {
            pbVar8 = (byte *)(*plVar1 + (longlong)iVar7 * 0x18);
            if (*pbVar8 == bVar4) goto LAB_148ddb856;
            iVar7 = *(int *)(pbVar8 + 0x10);
          } while (iVar7 != -1);
        }
      }
      pbVar8 = (byte *)0x0;
LAB_148ddb856:
      uVar13 = *(undefined8 *)(pbVar8 + 8);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13;
}



// FUNCTION 148ddb92e FUN_148ddb92e body=130 status=ok
// SIG undefined FUN_148ddb92e(void)

void FUN_148ddb92e(longlong param_1,undefined4 param_2)

{
  bool bVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)*(int *)(param_1 + 0x118);
  if (0 < (longlong)uVar3) {
    lVar2 = uVar3 * 0xa8;
    do {
      lVar2 = lVar2 + -0xa8;
      FUN_148ddb558(*(longlong *)(param_1 + 0x110) + lVar2,param_1,param_2);
      if (*(int *)(*(longlong *)(param_1 + 0x110) + 0xa0 + lVar2) < 1) {
        FUN_148ddb9b0(param_1,(int)uVar3 + -1);
      }
      bVar1 = 1 < uVar3;
      uVar3 = uVar3 - 1;
    } while (bVar1);
  }
  return;
}



// FUNCTION 148ddb9b0 FUN_148ddb9b0 body=234 status=ok
// SIG undefined FUN_148ddb9b0(void)

void FUN_148ddb9b0(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [37];
  undefined1 local_33 [2];
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x118))) {
    plVar1 = (longlong *)(param_1 + 0x110);
    lVar3 = *plVar1;
    lVar4 = (ulonglong)param_2 * 0xa8;
    lVar2 = *(longlong *)(lVar3 + 0x18 + lVar4);
    if (lVar2 != 0) {
      if (*(longlong *)(lVar3 + lVar4 + 0x10) != 0) {
        FUN_14480f766(lVar2 + 0x4e80);
        lVar3 = *plVar1;
      }
      *(undefined8 *)(lVar3 + 0x10 + lVar4) = 0;
      lVar3 = *plVar1;
    }
    FUN_148ddaf56(lVar3 + lVar4);
    FUN_148ddbe78(plVar1,param_2);
    if (*(longlong *)(param_1 + 0x120) != 0) {
      local_31 = 0;
      local_33[0] = 1;
      FUN_14421fc20(*(longlong *)(param_1 + 0x120),local_33,lVar2);
    }
    FUN_1407058ce(param_1);
    FUN_140705914(param_1);
    *(undefined8 *)(param_1 + 0x104) = 0xffffffffffffffff;
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ddba9c FUN_148ddba9c body=354 status=ok
// SIG undefined FUN_148ddba9c(void)

ulonglong FUN_148ddba9c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  undefined8 unaff_RDI;
  ulonglong uVar4;
  undefined1 auStack_88 [32];
  ulonglong *local_68;
  undefined1 local_60;
  undefined8 local_58;
  ulonglong local_50;
  code *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *param_2;
  if ((((lVar2 == 0) || ((*(uint *)(lVar2 + 8) >> 0x1e & 1) != 0)) ||
      (*(float *)(param_2 + 1) <= 0.0)) || (*(char *)(lVar2 + 0x5d30) == '\x02')) {
    uVar4 = 0;
  }
  else {
    lVar2 = FUN_148ddbc00();
    local_60 = *(undefined1 *)((longlong)param_2 + 0x11);
    local_68 = (ulonglong *)CONCAT71(local_68._1_7_,(char)param_2[2]);
    FUN_148ddb388(lVar2,param_1,(int)param_2[1],*(undefined4 *)((longlong)param_2 + 0xc));
    piVar3 = (int *)(lVar2 + 0xa0);
    if (*(char *)(lVar2 + 0x81) != '\0') {
      piVar3 = (int *)(lVar2 + 0x28);
    }
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if ((*piVar3 == 1) && (*(longlong *)(param_1 + 0x120) != 0)) {
      lVar1 = *param_2;
      if ((lVar1 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar1);
      }
      local_50 = 0;
      FUN_14485c47a(&local_50,lVar1);
      local_48 = FUN_148ddbdc6;
      local_40 = 0;
      local_68 = &local_50;
      FUN_148ddbcb2(*param_2 + 0x4e80,&local_58,*(undefined8 *)(param_1 + 0x120));
      *(undefined8 *)(lVar2 + 0x10) = local_58;
      if (*(longlong *)(param_1 + 0x120) != 0) {
        local_48._0_2_ = (ushort)(byte)local_48;
        local_50 = local_50 & 0xffffffffffffff00;
        FUN_14421fc20(*(longlong *)(param_1 + 0x120),&local_50,*param_2);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ddbc00 FUN_148ddbc00 body=178 status=ok
// SIG undefined FUN_148ddbc00(void)

longlong FUN_148ddbc00(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0x110);
  iVar1 = *(int *)(param_1 + 0x118);
  lVar3 = (longlong)iVar1;
  if (lVar3 != 0) {
    lVar2 = lVar3 * 0xa8;
    lVar4 = lVar5;
    do {
      if (*(longlong *)(lVar4 + 0x18) == param_2) {
        if (lVar4 != 0) {
          return lVar4;
        }
        break;
      }
      lVar4 = lVar4 + 0xa8;
      lVar2 = lVar2 + -0xa8;
    } while (lVar2 != 0);
  }
  *(uint *)(param_1 + 0x118) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x11c) < iVar1 + 1U) {
    FUN_148bbd57a((longlong *)(param_1 + 0x110),iVar1);
    lVar5 = *(longlong *)(param_1 + 0x110);
  }
  lVar5 = lVar3 * 0xa8 + lVar5;
  FUN_148ddae54(lVar5,param_2,*(undefined1 *)(param_1 + 0x128));
  FUN_1407058ce(param_1);
  FUN_140705914(param_1);
  *(undefined8 *)(param_1 + 0x104) = 0xffffffffffffffff;
  return lVar5;
}



// FUNCTION 148ddbcb2 FUN_148ddbcb2 body=274 status=ok
// SIG undefined FUN_148ddbcb2(void)

undefined8
FUN_148ddbcb2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
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
  *local_50 = &PTR_LAB_14b99c200;
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
  *local_50 = &PTR_FUN_14b99c190;
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



// FUNCTION 148ddbdc6 FUN_148ddbdc6 body=176 status=ok
// SIG undefined FUN_148ddbdc6(void)

void FUN_148ddbdc6(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  undefined8 local_28;
  undefined1 local_1a;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = param_2;
  cVar1 = FUN_144729dda();
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(&local_28);
    if ((longlong)*(int *)(param_1 + 0x238) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x230);
      lVar5 = (longlong)*(int *)(param_1 + 0x238) * 0xa8;
      do {
        if (*(longlong *)(lVar4 + 0x18) == lVar2) {
          if (lVar4 != 0) {
            local_19 = 0;
            uVar3 = FUN_14479d2ce(&local_28);
            local_29 = 2;
            FUN_14421fc20(param_1,&local_29,uVar3,&local_1a);
          }
          break;
        }
        lVar4 = lVar4 + 0xa8;
        lVar5 = lVar5 + -0xa8;
      } while (lVar5 != 0);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ddbe78 FUN_148ddbe78 body=89 status=ok
// SIG undefined FUN_148ddbe78(void)

void FUN_148ddbe78(longlong *param_1,uint param_2)

{
  int iVar1;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0xa8 + *param_1);
  FUN_148bbced2(_Dst);
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0xa8),(longlong)(int)(~param_2 + iVar1) * 0xa8);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  FUN_148de941e(param_1);
  return;
}



// FUNCTION 148ddbed2 FUN_148ddbed2 body=937 status=ok
// SIG undefined FUN_148ddbed2(void)

void FUN_148ddbed2(longlong param_1,longlong param_2,undefined8 param_3,float param_4)

{
  undefined1 *puVar1;
  float fVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  ulonglong unaff_RBP;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 auStack_168 [32];
  float local_148;
  undefined4 local_140;
  undefined1 local_138;
  ulonglong local_130;
  longlong local_128;
  longlong *local_120;
  undefined8 local_118;
  undefined1 *local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined1 *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  longlong local_d8 [2];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  uint local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  longlong local_98;
  undefined4 local_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_168;
  iVar9 = *(int *)(param_1 + 0x118);
  if ((longlong)iVar9 != 0) {
    lVar11 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x110) + 0x18 + lVar11) == param_2) {
        uVar13 = (lVar11 >> 3) * -0x30c30c30c30c30c3;
        uVar12 = (uint)uVar13;
        if ((int)uVar12 < iVar9 && -1 < (int)uVar12) {
          uVar10 = 0;
          local_b8 = 0;
          local_b0 = 0;
          local_d8[0] = 0;
          local_d8[1] = 0;
          local_ac = 0xffffffff00000080;
          local_a4 = 0;
          local_98 = 0;
          local_90 = 0;
          local_128 = param_2;
          FUN_148ddb4e4(*(longlong *)(param_1 + 0x110) + (ulonglong)(uVar12 & 0x7fffffff) * 0xa8);
          FUN_148ddb9b0(param_1,uVar13 & 0xffffffff);
          uStack_f0 = local_c8;
          local_f8 = &DAT_100000000;
          local_e8 = 0xffffffff;
          local_e0 = 0;
          if (local_b0 != 0) {
            FUN_1449c0562(&local_f8);
            uVar10 = (ulonglong)local_b0;
          }
          local_108 = local_e8;
          uVar6 = local_108;
          local_100 = local_e0;
          local_fc = local_dc;
          local_118 = local_f8;
          local_110 = uStack_f0;
          local_120 = local_d8;
          local_108._4_4_ = (int)((ulonglong)local_e8 >> 0x20);
          iVar9 = local_108._4_4_;
          uVar13 = uVar10;
          if ((local_108._4_4_ != (int)uVar10) || (local_108 = uVar6, uStack_f0 != local_c8)) {
            do {
              local_108 = uVar6;
              local_130 = uVar13;
              puVar1 = (undefined1 *)(*local_120 + (longlong)iVar9 * 0x18);
              local_f8 = (undefined1 *)0x0;
              uStack_f0 = (undefined1 *)0x0;
              bVar7 = puVar1[0xc];
              iVar9 = 0;
              if ((bVar7 & 4) != 0) {
                uStack_f0 = &DAT_00000001;
                FUN_148de3c14(&local_f8,0);
                *local_f8 = 2;
                bVar7 = puVar1[0xc];
                iVar9 = (int)uStack_f0;
              }
              if ((bVar7 & 8) != 0) {
                uStack_f0 = (undefined1 *)CONCAT44(uStack_f0._4_4_,iVar9 + 1U);
                if (uStack_f0._4_4_ < iVar9 + 1U) {
                  FUN_148de3c14(&local_f8,iVar9);
                }
                local_f8[iVar9] = 3;
                bVar7 = puVar1[0xc];
                iVar9 = (int)uStack_f0;
              }
              if ((bVar7 & 2) != 0) {
                uStack_f0 = (undefined1 *)CONCAT44(uStack_f0._4_4_,iVar9 + 1U);
                if (uStack_f0._4_4_ < iVar9 + 1U) {
                  FUN_148de3c14(&local_f8,iVar9);
                }
                local_f8[iVar9] = 1;
                iVar9 = (int)uStack_f0;
              }
              puVar5 = local_f8;
              if (iVar9 != 0) {
                lVar11 = 0;
                do {
                  uVar3 = puVar5[lVar11];
                  uVar4 = *(undefined4 *)(puVar1 + 8);
                  fVar2 = *(float *)(puVar1 + 4);
                  unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),*puVar1);
                  cVar8 = FUN_14113f0c0(param_3);
                  if (cVar8 != '\0') {
                    local_148 = fVar2 * param_4;
                    local_140 = uVar4;
                    local_138 = uVar3;
                    FUN_148bb2264(param_3,local_128,3,unaff_RBP & 0xffffffff);
                  }
                  lVar11 = lVar11 + 1;
                  uVar10 = local_130;
                } while (iVar9 != lVar11);
              }
              if (local_f8 != (undefined1 *)0x0) {
                FUN_1400020a8(local_f8);
              }
              local_108 = CONCAT44(local_108._4_4_,(uint)local_108 & ~local_118._4_4_);
              FUN_1449c0562(&local_118);
              iVar9 = local_108._4_4_;
              uVar13 = local_130;
              uVar6 = local_108;
            } while (local_120 != local_d8 ||
                     (local_110 != local_c8 || local_108._4_4_ != (int)uVar10));
          }
          local_90 = 0;
          if (local_98 != 0) {
            FUN_1400020a8();
          }
          FUN_148de3c92(local_d8);
        }
        break;
      }
      lVar11 = lVar11 + 0xa8;
    } while ((longlong)iVar9 * 0xa8 - lVar11 != 0);
  }
  if ((local_80 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ddc27c FUN_148ddc27c body=166 status=ok
// SIG undefined FUN_148ddc27c(void)

void FUN_148ddc27c(longlong param_1,float *param_2,longlong param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  
  if ((longlong)*(int *)(param_1 + 0x118) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x110);
    lVar2 = (longlong)*(int *)(param_1 + 0x118) * 0xa8;
    do {
      if (*(longlong *)(lVar3 + 0x18) == param_3) {
        if (lVar3 != 0) {
          if (*(char *)(lVar3 + 0x81) == '\x01') {
            fVar4 = (float)*(int *)(lVar3 + 0x24) / 100.0;
          }
          else if ((longlong)*(int *)(lVar3 + 0xa0) == 0) {
            fVar4 = 0.0;
          }
          else {
            lVar2 = 0;
            fVar4 = 0.0;
            do {
              fVar5 = *(float *)(*(longlong *)(lVar3 + 0x98) + lVar2);
              if ((0.0 < fVar5) &&
                 (fVar5 = *(float *)(*(longlong *)(lVar3 + 0x98) + 4 + lVar2) / fVar5,
                 fVar4 <= fVar5)) {
                fVar4 = fVar5;
              }
              lVar2 = lVar2 + 0x10;
            } while ((longlong)*(int *)(lVar3 + 0xa0) * 0x10 != lVar2);
          }
          *param_2 = fVar4;
          uVar1 = 1;
          goto LAB_148ddc2b1;
        }
        break;
      }
      lVar3 = lVar3 + 0xa8;
      lVar2 = lVar2 + -0xa8;
    } while (lVar2 != 0);
  }
  uVar1 = 0;
LAB_148ddc2b1:
  *(undefined1 *)(param_2 + 1) = uVar1;
  return;
}



// FUNCTION 148ddc322 FUN_148ddc322 body=29 status=ok
// SIG undefined FUN_148ddc322(void)

undefined8 FUN_148ddc322(longlong param_1,undefined8 param_2)

{
  FUN_148ddc27c(param_1 + 0x120);
  return param_2;
}



// FUNCTION 148ddc340 FUN_148ddc340 body=125 status=ok
// SIG undefined FUN_148ddc340(void)

void FUN_148ddc340(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  
  FUN_144a7e84a();
  FUN_148ddb92e(param_1 + 0x24,param_2);
  if ((longlong)(int)param_1[0x47] != 0) {
    lVar1 = 0;
    do {
      if (0 < *(int *)(param_1[0x46] + 0xa0 + lVar1)) {
        return;
      }
      lVar1 = lVar1 + 0xa8;
    } while ((longlong)(int)param_1[0x47] * 0xa8 - lVar1 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x000148ddc3af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x3b0))(param_1,0);
  return;
}



// FUNCTION 148ddc3be FUN_148ddc3be body=133 status=ok
// SIG undefined FUN_148ddc3be(void)

void FUN_148ddc3be(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  bool bVar9;
  
  plVar3 = *(longlong **)(param_1 + 0x118);
  if (plVar3 != (longlong *)0x0) {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) {
        return;
      }
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar9 = iVar7 == iVar5;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar4 = *(longlong *)(param_1 + 0x110);
    if (lVar4 != 0) {
      cVar6 = FUN_144729dda(lVar4 + 0x28);
      if (cVar6 != '\0') {
        uVar8 = FUN_14479d2ce(lVar4 + 0x28);
        FUN_141272f14(lVar4 + 0x10,uVar8);
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
                    /* WARNING: Could not recover jumptable at 0x000148ddc436. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148ddc443 FUN_148ddc443 body=154 status=ok
// SIG undefined FUN_148ddc443(void)

void FUN_148ddc443(longlong *param_1,longlong *param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar5 = *param_1;
    lVar6 = (longlong)(int)param_1[1] * 0x18;
    do {
      lVar2 = FUN_14896f0e0(lVar5);
      if (lVar2 != 0) {
        pcVar1 = (code *)*param_2;
        plVar4 = (longlong *)param_2[2];
        if ((longlong *)param_2[2] == (longlong *)0x0) {
          plVar4 = param_2 + 4;
        }
        uVar3 = (**(code **)(*plVar4 + 8))();
        (*pcVar1)(uVar3,lVar2);
      }
      lVar5 = lVar5 + 0x18;
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != 0);
  }
  if (*param_2 != 0) {
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
                    /* WARNING: Could not recover jumptable at 0x000148ddc4ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x10))(plVar4);
    return;
  }
  return;
}



// FUNCTION 148ddc4dd FUN_148ddc4dd body=154 status=ok
// SIG undefined FUN_148ddc4dd(void)

void FUN_148ddc4dd(longlong *param_1,longlong *param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar5 = *param_1;
    lVar6 = (longlong)(int)param_1[1] * 0x18;
    do {
      lVar2 = FUN_148ddc578(lVar5);
      if (lVar2 != 0) {
        pcVar1 = (code *)*param_2;
        plVar4 = (longlong *)param_2[2];
        if ((longlong *)param_2[2] == (longlong *)0x0) {
          plVar4 = param_2 + 4;
        }
        uVar3 = (**(code **)(*plVar4 + 8))();
        (*pcVar1)(uVar3,lVar2);
      }
      lVar5 = lVar5 + 0x18;
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != 0);
  }
  if (*param_2 != 0) {
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
                    /* WARNING: Could not recover jumptable at 0x000148ddc564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x10))(plVar4);
    return;
  }
  return;
}



// FUNCTION 148ddc578 FUN_148ddc578 body=124 status=ok
// SIG undefined FUN_148ddc578(void)

longlong FUN_148ddc578(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    local_50 = *param_1;
    FUN_1446dcdd4(local_48);
    lVar1 = FUN_1488878b6(local_48);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    param_1[2] = lVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ddc5f6 FUN_148ddc5f6 body=28 status=ok
// SIG undefined FUN_148ddc5f6(void)

undefined2 * FUN_148ddc5f6(undefined2 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  return param_1;
}



// FUNCTION 148ddc612 FUN_148ddc612 body=165 status=ok
// SIG undefined FUN_148ddc612(void)

void FUN_148ddc612(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40 [8];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_1465b5952();
  FUN_1446ddc76(&local_38,"ReplicatedProfileMask",1);
  uVar1 = FUN_144a87586(uVar1,local_38);
  FUN_1446ddc76(local_40,"ReplicatedProfileMask",1);
  local_48 = 4;
  FUN_145a5fc38(param_2,param_1 + 8,local_40,uVar1);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ddc6b8 FUN_148ddc6b8 body=26 status=ok
// SIG undefined FUN_148ddc6b8(void)

void FUN_148ddc6b8(undefined8 param_1)

{
  thunk_FUN_1412d7b64();
  FUN_148ddc6d2(param_1);
  return;
}



// FUNCTION 148ddc6d2 FUN_148ddc6d2 body=143 status=ok
// SIG undefined FUN_148ddc6d2(void)

void FUN_148ddc6d2(longlong param_1)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  longlong local_48;
  longlong local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148ddcafc(param_1,0);
  FUN_148ddc89e(param_1,local_50);
  FUN_148ddca7a(param_1 + 0x88,local_50);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((*(byte *)(param_1 + 0x50) & 2) != 0) {
    FUN_148ddcafc(param_1,1);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ddc770 FUN_148ddc770 body=91 status=ok
// SIG undefined FUN_148ddc770(void)

void FUN_148ddc770(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_148ddcafc(param_1,0);
  *(undefined8 *)(param_1 + 0x78) = 0;
  plVar3 = *(longlong **)(param_1 + 0x80);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x80) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000148ddc7bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148ddc7de FUN_148ddc7de body=128 status=ok
// SIG undefined FUN_148ddc7de(void)

int FUN_148ddc7de(longlong param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  if ((lVar1 != 0) && ((longlong)*(int *)(lVar1 + 0x58) != 0)) {
    lVar2 = *(longlong *)(lVar1 + 0x50);
    lVar3 = 0;
    do {
      if ((((*(int *)(lVar2 + 0x18 + lVar3) == *param_2) &&
           (*(int *)(lVar2 + 0x1c + lVar3) == param_2[1])) &&
          (*(int *)(lVar2 + 0x20 + lVar3) == param_2[2])) &&
         (*(int *)(lVar2 + 0x24 + lVar3) == param_2[3])) {
        if ((int)(lVar3 / 0x60) == -1) {
          return 0;
        }
        return 1 << ((byte)(lVar3 / 0x60) & 0x1f);
      }
      lVar3 = lVar3 + 0x60;
    } while ((longlong)*(int *)(lVar1 + 0x58) * 0x60 != lVar3);
  }
  return 0;
}



// FUNCTION 148ddc85e FUN_148ddc85e body=64 status=ok
// SIG undefined FUN_148ddc85e(void)

void FUN_148ddc85e(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0xb8) != param_2) {
    *(char *)(param_1 + 0xb8) = param_2;
    FUN_148ddc6d2();
    if ((*(byte *)(param_1 + 0x30) & 2) != 0) {
      *(undefined1 *)(param_1 + 0xb9) = *(undefined1 *)(param_1 + 0xb8);
      FUN_145885050(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 148ddc89e FUN_148ddc89e body=475 status=ok
// SIG undefined FUN_148ddc89e(void)

byte * FUN_148ddc89e(longlong param_1,byte *param_2)

{
  byte bVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  param_2[0x28] = 0;
  param_2[0x29] = 0;
  param_2[0x2a] = 0;
  param_2[0x2b] = 0;
  param_2[0x2c] = 0;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  param_2[0x2f] = 0;
  lVar12 = *(longlong *)(param_1 + 0x58);
  if (0 < *(int *)(lVar12 + 0x58)) {
    lVar10 = 0;
    do {
      bVar3 = *(byte *)(param_1 + 0xb8);
      if ((*(byte *)(param_1 + 0x30) & 2) == 0) {
        bVar3 = bVar3 | *(byte *)(param_1 + 0xb9);
      }
      if ((bVar3 >> ((uint)lVar10 & 0x1f) & 1) != 0) {
        lVar12 = *(longlong *)(lVar12 + 0x50);
        lVar6 = lVar10 * 0x60;
        bVar3 = *(byte *)(lVar12 + 0x30 + lVar6);
        bVar4 = *param_2;
        bVar1 = param_2[1];
        bVar5 = bVar3 & 1;
        bVar7 = (bVar4 | bVar3) & 2;
        *param_2 = bVar4 & 0xfd | bVar5 | bVar7;
        bVar3 = (*(byte *)(lVar12 + 0x30 + lVar6) | bVar4) & 0xc;
        *param_2 = bVar3 | bVar4 & 0xf1 | bVar5 | bVar7;
        bVar8 = (*(byte *)(lVar12 + 0x30 + lVar6) | bVar4) & 0x30;
        *param_2 = bVar8 | bVar3 | bVar4 & 0xc1 | bVar5 | bVar7;
        *param_2 = (bVar4 | *(byte *)(lVar12 + 0x30 + lVar6)) & 0xc0 |
                   bVar8 | bVar3 | bVar4 & 1 | bVar5 | bVar7;
        bVar3 = *(byte *)(lVar12 + 0x31 + lVar6);
        bVar4 = bVar3 & 1;
        bVar7 = (bVar1 | bVar3) & 2;
        param_2[1] = bVar1 & 0xfd | bVar4 | bVar7;
        bVar5 = (*(byte *)(lVar12 + 0x31 + lVar6) | bVar1) & 0xc;
        param_2[1] = bVar5 | bVar1 & 0xf1 | bVar4 | bVar7;
        bVar8 = (*(byte *)(lVar12 + 0x31 + lVar6) | bVar1) & 0x10;
        param_2[1] = bVar5 | bVar1 & 0xe1 | bVar4 | bVar7 | bVar8;
        *(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) | *(uint *)(lVar12 + 0x58 + lVar6);
        *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) | *(uint *)(lVar12 + 0x5c + lVar6);
        bVar3 = *(byte *)(lVar12 + 0x31 + lVar6);
        bVar9 = bVar3 & 0x20;
        bVar3 = (bVar3 | bVar1) & 0x40;
        param_2[1] = bVar5 | bVar1 & 0xa1 | bVar4 | bVar7 | bVar8 | bVar9 | bVar3;
        param_2[1] = bVar5 | bVar1 & 0x21 | bVar4 | bVar7 | bVar8 | bVar9 | bVar3 |
                     (bVar1 | *(byte *)(lVar12 + 0x31 + lVar6)) & 0x80;
        lVar2 = (longlong)*(int *)(lVar12 + 0x40 + lVar6);
        if (lVar2 != 0) {
          lVar11 = *(longlong *)(lVar12 + 0x38 + lVar6);
          lVar2 = lVar2 * 0x18;
          do {
            FUN_148de94ca(param_2 + 8,lVar11);
            lVar11 = lVar11 + 0x18;
            lVar2 = lVar2 + -0x18;
          } while (lVar2 != 0);
        }
        lVar2 = (longlong)*(int *)(lVar12 + lVar6 + 0x50);
        if (lVar2 != 0) {
          lVar12 = *(longlong *)(lVar12 + lVar6 + 0x48);
          lVar2 = lVar2 * 0x18;
          do {
            FUN_148de95ee(param_2 + 0x18,lVar12);
            lVar12 = lVar12 + 0x18;
            lVar2 = lVar2 + -0x18;
          } while (lVar2 != 0);
        }
      }
      lVar10 = lVar10 + 1;
      lVar12 = *(longlong *)(param_1 + 0x58);
    } while (lVar10 < *(int *)(lVar12 + 0x58));
  }
  return param_2;
}



// FUNCTION 148ddca7a FUN_148ddca7a body=129 status=ok
// SIG undefined FUN_148ddca7a(void)

undefined2 * FUN_148ddca7a(undefined2 *param_1,undefined2 *param_2)

{
  *param_1 = *param_2;
  if (param_1 != param_2) {
    if (*(longlong *)(param_1 + 4) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_2 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
    *(undefined8 *)(param_2 + 8) = 0;
    if (*(longlong *)(param_1 + 0xc) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_2 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
    *(undefined8 *)(param_2 + 0x10) = 0;
  }
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  return param_1;
}



// FUNCTION 148ddcafc FUN_148ddcafc body=1543 status=ok
// SIG undefined FUN_148ddcafc(void)

void FUN_148ddcafc(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  byte bVar5;
  char cVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  byte *pbVar11;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  longlong *plStack_d0;
  char local_b9;
  undefined1 *local_b8;
  undefined8 local_a8;
  undefined **local_98;
  char *local_90;
  longlong local_88;
  undefined1 *local_78;
  undefined8 local_68;
  undefined **local_58;
  char *local_50;
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_b9 = param_2;
  plVar7 = (longlong *)FUN_14479d2ce(param_1 + 0x68);
  if ((plVar7 == (longlong *)0x0) || (lVar3 = plVar7[0xd0a], lVar3 == 0)) {
LAB_148ddcdaf:
    if ((param_2 == '\0') || (*(longlong *)(param_1 + 0x78) != 0)) goto LAB_148ddcdbf;
    if (plVar7 != (longlong *)0x0) goto LAB_148ddcf31;
LAB_148ddcf61:
    local_d8 = 0;
    plStack_d0 = (longlong *)0x0;
  }
  else {
    if ((*(byte *)(param_1 + 0x88) & 1) == 0) {
      if ((*(byte *)(param_1 + 0x88) & 2) != 0) {
        if (param_2 == '\0') {
LAB_148ddcbb2:
          FUN_1400bc8c2(lVar3 + 0x1b70,param_1 + 0x70);
        }
        else {
LAB_148ddcb93:
          FUN_1400bc96c(lVar3 + 0x1b70,param_1 + 0x70);
        }
      }
    }
    else if (param_2 == '\0') {
      FUN_1400bc8c2(lVar3 + 0x11f0,param_1 + 0x70);
      if ((*(byte *)(param_1 + 0x88) & 2) != 0) goto LAB_148ddcbb2;
    }
    else {
      FUN_1400bc96c();
      if ((*(byte *)(param_1 + 0x88) & 2) != 0) goto LAB_148ddcb93;
    }
    if ((*(byte *)(param_1 + 0x88) & 4) == 0) {
      if ((*(byte *)(param_1 + 0x88) & 8) != 0) {
        if (param_2 == '\0') {
LAB_148ddcc21:
          FUN_1400bc8c2(lVar3 + 0x1218,param_1 + 0x70);
        }
        else {
LAB_148ddcc02:
          FUN_1400bc96c(lVar3 + 0x1218,param_1 + 0x70);
        }
      }
    }
    else if (param_2 == '\0') {
      FUN_1400bc8c2(lVar3 + 0x11c8,param_1 + 0x70);
      if ((*(byte *)(param_1 + 0x88) & 8) != 0) goto LAB_148ddcc21;
    }
    else {
      FUN_1400bc96c();
      if ((*(byte *)(param_1 + 0x88) & 8) != 0) goto LAB_148ddcc02;
    }
    if ((*(byte *)(param_1 + 0x88) & 0x10) == 0) {
      if ((*(byte *)(param_1 + 0x88) & 0x20) != 0) {
        if (param_2 == '\0') {
LAB_148ddcc90:
          FUN_1400bc8c2(lVar3 + 0x1bc0,param_1 + 0x70);
        }
        else {
LAB_148ddcc71:
          FUN_1400bc96c(lVar3 + 0x1bc0,param_1 + 0x70);
        }
      }
    }
    else if (param_2 == '\0') {
      FUN_1400bc8c2(lVar3 + 0x1b98,param_1 + 0x70);
      if ((*(byte *)(param_1 + 0x88) & 0x20) != 0) goto LAB_148ddcc90;
    }
    else {
      FUN_1400bc96c();
      if ((*(byte *)(param_1 + 0x88) & 0x20) != 0) goto LAB_148ddcc71;
    }
    bVar5 = *(byte *)(param_1 + 0x88);
    if ((bVar5 & 0x40) != 0) {
      if (param_2 == '\0') {
        FUN_1400bc8c2(lVar3 + 0x1be8,param_1 + 0x70);
      }
      else {
        FUN_1400bc96c();
      }
      bVar5 = *(byte *)(param_1 + 0x88);
    }
    if ((char)bVar5 < '\0') {
      if (param_2 == '\0') {
        FUN_1400bc8c2(lVar3 + 0x1c60,param_1 + 0x70);
        if ((*(byte *)(param_1 + 0x89) & 1) != 0) goto LAB_148ddd03c;
      }
      else {
        FUN_1400bc96c();
        if ((*(byte *)(param_1 + 0x89) & 1) != 0) goto LAB_148ddcd75;
      }
    }
    else if ((*(byte *)(param_1 + 0x89) & 1) != 0) {
      if (param_2 == '\0') {
LAB_148ddd03c:
        FUN_1400bc8c2(lVar3 + 0x1c10,param_1 + 0x70);
      }
      else {
LAB_148ddcd75:
        FUN_1400bc96c(lVar3 + 0x1c10,param_1 + 0x70);
      }
    }
    pbVar11 = (byte *)(param_1 + 0x89);
    if ((*pbVar11 & 2) == 0) {
      if ((*pbVar11 & 4) != 0) {
        if (param_2 == '\0') {
LAB_148ddcd94:
          FUN_1400bc8c2(lVar3 + 0x3638,param_1 + 0x70);
        }
        else {
LAB_148ddcd25:
          FUN_1400bc96c(lVar3 + 0x3638,param_1 + 0x70);
        }
      }
    }
    else if (param_2 == '\0') {
      FUN_1400bc8c2(lVar3 + 0x1c38,param_1 + 0x70);
      if ((*pbVar11 & 4) != 0) goto LAB_148ddcd94;
    }
    else {
      FUN_1400bc96c();
      if ((*pbVar11 & 4) != 0) goto LAB_148ddcd25;
    }
    if ((*pbVar11 & 8) == 0) {
      if ((*pbVar11 & 0x10) == 0) goto LAB_148ddcdaf;
      if (param_2 == '\0') goto LAB_148ddd016;
LAB_148ddcf17:
      FUN_1400bc96c(lVar3 + 0x4170,param_1 + 0x70);
    }
    else {
      if (param_2 == '\0') {
        FUN_1400bc8c2(lVar3 + 0x3660,param_1 + 0x70);
        if ((*pbVar11 & 0x10) == 0) goto LAB_148ddcdbf;
LAB_148ddd016:
        FUN_1400bc8c2(lVar3 + 0x4170,param_1 + 0x70);
        goto LAB_148ddcdbf;
      }
      FUN_1400bc96c();
      if ((*pbVar11 & 0x10) != 0) goto LAB_148ddcf17;
    }
    if (*(longlong *)(param_1 + 0x78) != 0) goto LAB_148ddcdbf;
LAB_148ddcf31:
    lVar3 = plVar7[0x78];
    if (lVar3 == 0) goto LAB_148ddcf61;
    lVar9 = FUN_144a5dd5e();
    if (((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
         != lVar9 + 0x30)) || (*(longlong *)(lVar3 + 0x508) == 0)) goto LAB_148ddcf61;
    uVar8 = FUN_1459cbe9a();
    cVar6 = FUN_144a7ca96((longlong *)(lVar3 + 0x508),uVar8);
    if ((cVar6 == '\0') || (lVar3 = *(longlong *)(lVar3 + 0x508), lVar3 == 0)) goto LAB_148ddcf61;
    FUN_14888a1e8(lVar3,&local_d8);
  }
  plVar1 = plStack_d0;
  if ((undefined8 *)(param_1 + 0x78) != &local_d8) {
    *(undefined8 *)(param_1 + 0x78) = local_d8;
    local_d8 = 0;
    plVar4 = *(longlong **)(param_1 + 0x80);
    if (plStack_d0 != plVar4) {
      plStack_d0 = (longlong *)0x0;
      *(longlong **)(param_1 + 0x80) = plVar1;
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
  plVar1 = plStack_d0;
  if (plStack_d0 != (longlong *)0x0) {
    LOCK();
    plVar4 = plStack_d0 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plStack_d0)(plStack_d0);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
LAB_148ddcdbf:
  if (*(longlong *)(param_1 + 0x78) != 0) {
    local_68 = 0;
    local_58 = &PTR_LAB_14b99c340;
    local_78 = &LAB_14422565e;
    local_50 = &local_b9;
    local_48 = param_1;
    FUN_148ddc443(param_1 + 0x90);
    local_a8 = 0;
    local_98 = &PTR_LAB_14b99c360;
    local_b8 = &LAB_1442256c4;
    local_90 = &local_b9;
    local_88 = param_1;
    FUN_148ddc4dd(param_1 + 0xa0);
  }
  if (plVar7 != (longlong *)0x0) {
    if (local_b9 == '\x01') {
      local_e0 = 0;
      local_e8 = 0;
      FUN_140d78b8a(plVar7 + 0xc1d,*(undefined8 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0xb0),1
                   );
      uVar10 = *(ulonglong *)(param_1 + 0x70);
      FUN_1407af814(plVar7,uVar10,*(undefined4 *)(param_1 + 0xb4),0);
    }
    else {
      FUN_140bc1ec4(plVar7 + 0xc1d,*(undefined8 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0xb0),0
                   );
      uVar10 = *(ulonglong *)(param_1 + 0x70);
      FUN_140bc2046(plVar7,uVar10,*(undefined4 *)(param_1 + 0xb4),0);
    }
    bVar5 = *(byte *)(param_1 + 0x89);
    if ((bVar5 & 0x40) != 0) {
      uVar10 = CONCAT71((int7)(uVar10 >> 8),local_b9);
      (**(code **)(*plVar7 + 0x330))(plVar7,uVar10);
      bVar5 = *(byte *)(param_1 + 0x89);
    }
    if ((bVar5 & 0x20) != 0) {
      uVar10 = CONCAT71((int7)(uVar10 >> 8),local_b9) ^ 1;
      FUN_1405e47c6(plVar7,uVar10);
      bVar5 = *(byte *)(param_1 + 0x89);
    }
    if (((char)bVar5 < '\0') && ((*(byte *)(param_1 + 0x30) & 2) != 0)) {
      uVar8 = (**(code **)(plVar7[0x10c] + 0x10))(plVar7 + 0x10c);
      FUN_140a82c5a(uVar8,CONCAT71((int7)(uVar10 >> 8),local_b9) ^ 1,param_1 + 0x70);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ddd104 FUN_148ddd104 body=577 status=ok
// SIG undefined FUN_148ddd104(void)

undefined8 * FUN_148ddd104(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  char *pcVar10;
  
  plVar7 = (longlong *)FUN_14001cc68(0xd0);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14b99c380;
  plVar1 = plVar7 + 2;
  memset(plVar1,0,0xc0);
  FUN_145c43014(plVar1);
  plVar7[2] = (longlong)&PTR_FUN_14b63f480;
  plVar7[0xd] = 0;
  plVar7[0xe] = 0;
  plVar7[0xf] = 0;
  plVar7[0x10] = 0;
  plVar7[0x11] = 0;
  plVar7[0x12] = 0;
  *(undefined2 *)(plVar7 + 0x13) = 0;
  plVar7[0x14] = 0;
  plVar7[0x15] = 0;
  plVar7[0x16] = 0;
  plVar7[0x17] = 0;
  *(undefined8 *)((longlong)plVar7 + 0xba) = 0;
  *(undefined8 *)((longlong)plVar7 + 0xc2) = 0;
  lVar8 = *(longlong *)(param_3 + 0x18);
  plVar5 = *(longlong **)(param_3 + 0x20);
  if (plVar5 == (longlong *)0x0) {
    plVar7[0xd] = lVar8;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    plVar6 = (longlong *)plVar7[0xe];
    plVar7[0xd] = lVar8;
    if (plVar5 == plVar6) {
      LOCK();
      plVar6 = plVar5 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar3 = (int *)((longlong)plVar5 + 0xc);
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3;
        UNLOCK();
        plVar6 = plVar5;
joined_r0x000148ddd309:
        if (iVar4 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    else {
      plVar7[0xe] = (longlong)plVar5;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar6 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar3 = (int *)((longlong)plVar6 + 0xc);
          *piVar3 = *piVar3 + -1;
          iVar4 = *piVar3;
          UNLOCK();
          goto joined_r0x000148ddd309;
        }
      }
    }
    LOCK();
    plVar6 = plVar5 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (((*(longlong *)(*(longlong *)(param_3 + 8) + 0x88) != 0) &&
      (plVar5 = *(longlong **)(*(longlong *)(param_3 + 8) + 0x90), plVar5 != (longlong *)0x0)) &&
     (lVar8 = (**(code **)(*plVar5 + 8))(), lVar8 != 0)) {
    lVar9 = FUN_144a2f878();
    if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
        == lVar9 + 0x30)) goto LAB_148ddd24a;
  }
  lVar8 = 0;
LAB_148ddd24a:
  FUN_14485c47a(plVar7 + 0xf,lVar8);
  DAT_14cbd2c88 = DAT_14cbd2c88 + 1;
  plVar7[0x10] = DAT_14cbd2c88 << 0x20 | (ulonglong)DAT_14cbd2c60;
  iVar4 = *(int *)(param_1 + 0x58);
  if (0 < (longlong)iVar4) {
    pcVar10 = (char *)(*(longlong *)(param_1 + 0x50) + 0x28);
    lVar8 = 0;
    do {
      if (*pcVar10 == '\x01') {
        *(byte *)(plVar7 + 0x19) = *(byte *)(plVar7 + 0x19) | (byte)(1 << ((byte)lVar8 & 0x1f));
      }
      lVar8 = lVar8 + 1;
      pcVar10 = pcVar10 + 0x60;
    } while (iVar4 != lVar8);
  }
  *param_2 = plVar1;
  param_2[1] = plVar7;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  return param_2;
}



// FUNCTION 148ddd346 FUN_148ddd346 body=121 status=ok
// SIG undefined FUN_148ddd346(void)

void FUN_148ddd346(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_148ddd3d0(param_2,&local_28);
  FUN_148ddc85e(local_28,0);
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



// FUNCTION 148ddd3d0 FUN_148ddd3d0 body=144 status=ok
// SIG undefined FUN_148ddd3d0(void)

undefined8 * FUN_148ddd3d0(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140df5234(param_1,&local_28);
  *param_2 = local_28;
  param_2[1] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ddd464 FUN_148ddd464 body=168 status=ok
// SIG undefined FUN_148ddd464(void)

void FUN_148ddd464(undefined8 param_1,undefined8 param_2,char param_3)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148ddd3d0(param_1,&local_38);
  bVar3 = FUN_148ddc7de(local_38,param_2);
  bVar2 = ~bVar3 & *(byte *)(local_38 + 0xb8);
  if (param_3 != '\0') {
    bVar2 = *(byte *)(local_38 + 0xb8) | bVar3;
  }
  FUN_148ddc85e(local_38,bVar2);
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



// FUNCTION 148ddd520 FUN_148ddd520 body=134 status=ok
// SIG undefined FUN_148ddd520(void)

void FUN_148ddd520(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_2 + 0x20) == DAT_14cbd2cb0) {
    local_28 = *param_3;
    local_20 = param_3[1];
    FUN_140805e68(param_1 + 0x70,&local_28,1);
    FUN_144a7b126(param_1 + 0x70,&local_11,1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_143e2f026(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ddd5b0 FUN_148ddd5b0 body=228 status=ok
// SIG undefined FUN_148ddd5b0(void)

void FUN_148ddd5b0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_2 == DAT_14cbd2cf0) {
    iVar4 = *(int *)(param_1 + 0xe4);
    if (*(int *)(param_1 + 0xec) < *(int *)(param_1 + 0xe4)) {
      iVar4 = *(int *)(param_1 + 0xec);
    }
    *(int *)(param_1 + 0xec) = iVar4;
    FUN_141085fe4(param_1,&local_38);
    local_28 = local_38;
    local_20 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
    }
    FUN_14112dc38(param_1 + 0x98,&local_28);
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
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ddd696 FUN_148ddd696 body=75 status=ok
// SIG undefined FUN_148ddd696(void)

void FUN_148ddd696(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_1403ae288(param_1 + 0xc0);
  if (cVar1 != '\0') {
    lVar2 = FUN_14008e0ae(param_1 + 0xc0);
    FUN_1409d461e(lVar2,(*(float *)(lVar2 + 0x30) - *(float *)(lVar2 + 0x24)) * 0.0,0);
    return;
  }
  return;
}



// FUNCTION 148ddd6e2 FUN_148ddd6e2 body=54 status=ok
// SIG undefined FUN_148ddd6e2(void)

undefined8 FUN_148ddd6e2(undefined8 param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar4;
  undefined8 uVar3;
  
  fVar1 = (float)FUN_148ddd81c();
  fVar2 = 0.0;
  uVar4 = 0;
  if (0.0 < fVar1) {
    uVar3 = FUN_148ddd874(param_1);
    uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
    fVar2 = (float)uVar3 / fVar1;
  }
  return CONCAT44(uVar4,fVar2);
}



// FUNCTION 148ddd718 FUN_148ddd718 body=260 status=ok
// SIG undefined FUN_148ddd718(void)

void FUN_148ddd718(longlong param_1,float param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  lVar1 = param_1 + 0xc0;
  cVar2 = FUN_14486ea84(lVar1);
  if (cVar2 == '\0') {
    return;
  }
  uVar3 = FUN_14008e0ae(lVar1);
  fVar5 = (float)FUN_143d46e84(uVar3);
  iVar4 = 0;
  do {
    fVar6 = param_2;
    param_2 = fVar6 - fVar5;
    iVar4 = (uint)(0.0 <= param_2) + iVar4;
    if (param_2 < 0.0) break;
  } while (iVar4 < *(int *)(param_1 + 0xe4));
  FUN_145884ed6(param_1,iVar4);
  if (iVar4 < *(int *)(param_1 + 0xe4)) {
    uVar3 = FUN_14008e0ae(lVar1);
    FUN_1409d461e(uVar3,~-(uint)(0.0 <= param_2) & (uint)fVar6 |
                        (uint)param_2 & -(uint)(0.0 <= param_2),1);
    return;
  }
  uVar3 = FUN_14008e0ae(lVar1);
  FUN_1414daa56(uVar3,0x3f800000,0x3f800000);
  return;
}



// FUNCTION 148ddd81c FUN_148ddd81c body=87 status=ok
// SIG undefined FUN_148ddd81c(void)

undefined8 FUN_148ddd81c(longlong param_1)

{
  int iVar1;
  char cVar2;
  float fVar3;
  undefined4 uVar5;
  undefined8 uVar4;
  
  cVar2 = FUN_14486ea84(param_1 + 0xc0);
  fVar3 = 0.0;
  uVar5 = 0;
  if (cVar2 != '\0') {
    iVar1 = *(int *)(param_1 + 0xe4);
    uVar4 = FUN_140280ec4(0);
    uVar4 = FUN_144a87362(uVar4);
    uVar4 = FUN_143d46e84(uVar4);
    uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
    fVar3 = (float)uVar4 * (float)iVar1;
  }
  return CONCAT44(uVar5,fVar3);
}



// FUNCTION 148ddd874 FUN_148ddd874 body=145 status=ok
// SIG undefined FUN_148ddd874(void)

undefined8 FUN_148ddd874(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  
  lVar1 = param_1 + 0xc0;
  cVar3 = FUN_14486ea84(lVar1);
  fVar6 = 0.0;
  uVar7 = 0;
  if (cVar3 != '\0') {
    iVar2 = *(int *)(param_1 + 0xec);
    uVar4 = FUN_140280ec4(lVar1);
    uVar4 = FUN_144a87362(uVar4);
    uVar4 = FUN_143d46e84(uVar4);
    uVar7 = (undefined4)((ulonglong)uVar4 >> 0x20);
    fVar6 = (float)uVar4 * (float)iVar2;
    if (*(int *)(param_1 + 0xec) < *(int *)(param_1 + 0xe4)) {
      uVar4 = FUN_140280ec4(lVar1);
      uVar4 = FUN_144a87362(uVar4);
      fVar5 = (float)FUN_143d46ea6(uVar4);
      fVar6 = fVar6 + fVar5;
    }
  }
  return CONCAT44(uVar7,fVar6);
}



// FUNCTION 148ddd906 FUN_148ddd906 body=12 status=ok
// SIG undefined FUN_148ddd906(void)

void FUN_148ddd906(longlong param_1)

{
  FUN_14486ea84(param_1 + 0xc0);
  return;
}



// FUNCTION 148ddd912 thunk_FUN_148ddd874 body=5 status=ok
// SIG undefined thunk_FUN_148ddd874(void)

void thunk_FUN_148ddd874(void)

{
  FUN_148ddd874();
  return;
}



// FUNCTION 148ddd918 FUN_148ddd918 body=123 status=ok
// SIG undefined FUN_148ddd918(void)

void FUN_148ddd918(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141088a78(param_1,&local_30);
  FUN_1442216fe(local_30,param_2);
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



// FUNCTION 148ddd994 FUN_148ddd994 body=131 status=ok
// SIG undefined FUN_148ddd994(void)

void FUN_148ddd994(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_141088a78(param_1,&local_40);
  FUN_1442215d0(local_40,param_2,param_3);
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
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ddda18 FUN_148ddda18 body=123 status=ok
// SIG undefined FUN_148ddda18(void)

void FUN_148ddda18(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141088a78(param_1,&local_30);
  FUN_1442214e8(local_30,param_2);
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



// FUNCTION 148ddda94 FUN_148ddda94 body=252 status=ok
// SIG undefined FUN_148ddda94(void)

longlong *
FUN_148ddda94(undefined8 param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_3;
  local_38 = (longlong *)param_3[1];
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)FUN_14001cc68(200,0x10);
  FUN_148deb094(plVar4,&local_40,param_4);
  plVar1 = plVar4 + 2;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_148debd2c(&local_30,plVar1);
  plVar3 = local_28;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dddb94 FUN_148dddb94 body=252 status=ok
// SIG undefined FUN_148dddb94(void)

longlong *
FUN_148dddb94(undefined8 param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_3;
  local_38 = (longlong *)param_3[1];
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)FUN_14001cc68(200,0x10);
  FUN_148debdd4(plVar4,&local_40,param_4);
  plVar1 = plVar4 + 2;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_148dec808(&local_30,plVar1);
  plVar3 = local_28;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dddc94 FUN_148dddc94 body=252 status=ok
// SIG undefined FUN_148dddc94(void)

longlong *
FUN_148dddc94(undefined8 param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_3;
  local_38 = (longlong *)param_3[1];
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)FUN_14001cc68(200,0x10);
  FUN_148dec8b0(plVar4,&local_40,param_4);
  plVar1 = plVar4 + 2;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_148ded320(&local_30,plVar1);
  plVar3 = local_28;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dddd94 FUN_148dddd94 body=252 status=ok
// SIG undefined FUN_148dddd94(void)

longlong *
FUN_148dddd94(undefined8 param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_3;
  local_38 = (longlong *)param_3[1];
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)FUN_14001cc68(200,0x10);
  FUN_148dedf1c(plVar4,&local_40,param_4);
  plVar1 = plVar4 + 2;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_148deea26(&local_30,plVar1);
  plVar3 = local_28;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ddde94 FUN_148ddde94 body=252 status=ok
// SIG undefined FUN_148ddde94(void)

longlong *
FUN_148ddde94(undefined8 param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_3;
  local_38 = (longlong *)param_3[1];
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)FUN_14001cc68(200,0x10);
  FUN_148def700(plVar4,&local_40,param_4);
  plVar1 = plVar4 + 2;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_148defeb2(&local_30,plVar1);
  plVar3 = local_28;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dddfc4 FUN_148dddfc4 body=40 status=ok
// SIG undefined FUN_148dddfc4(void)

void FUN_148dddfc4(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_148dddfec();
  if (lVar1 == 0) {
    return;
  }
  FUN_148dde02a(param_1,lVar1);
  return;
}



// FUNCTION 148dddfec FUN_148dddfec body=61 status=ok
// SIG undefined FUN_148dddfec(void)

longlong FUN_148dddfec(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1405b657a();
  if (lVar1 != 0) {
    lVar2 = FUN_144a2f878();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 148dde02a FUN_148dde02a body=128 status=ok
// SIG undefined FUN_148dde02a(void)

void FUN_148dde02a(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148deff5a(local_38,param_1);
  FUN_14100c9d8(param_2 + 0x6170,local_40,local_38);
  FUN_1449db362(local_38);
  uVar1 = FUN_1404281d6(param_2);
  FUN_148dde0b2(param_1,uVar1);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dde0b2 FUN_148dde0b2 body=67 status=ok
// SIG undefined FUN_148dde0b2(void)

void FUN_148dde0b2(longlong param_1,undefined8 param_2)

{
  if ((*(byte *)(param_1 + 0x58) & 1) != 0) {
    FUN_148dde45c(param_1);
  }
  FUN_14485c47a(param_1 + 0x40,param_2);
  if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
    return;
  }
  FUN_148dde1d4(param_1);
  return;
}



// FUNCTION 148dde0f6 FUN_148dde0f6 body=138 status=ok
// SIG undefined FUN_148dde0f6(void)

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_148dde0f6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = local_40 + 1;
  local_40[1] = 0;
  local_30 = 0;
  local_40[0] = param_1;
  FUN_14009d848(plVar1,param_3);
  FUN_1448b6402(param_1 + 0x28,param_2,plVar1);
  FUN_1449db362(plVar1);
  FUN_148dde182(local_40);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dde182 FUN_148dde182 body=82 status=ok
// SIG undefined FUN_148dde182(void)

void FUN_148dde182(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if ((longlong)*(int *)(lVar1 + 0x30) != 0) {
    lVar2 = 0;
    do {
      if ((*(int *)(*(longlong *)(lVar1 + 0x28) + 8 + lVar2) != 0) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x28) + lVar2) != 0)) {
        if ((*(byte *)(lVar1 + 0x58) & 1) != 0) {
          return;
        }
        *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) | 1;
        FUN_148dde1d4();
        return;
      }
      lVar2 = lVar2 + 0x10;
    } while ((longlong)*(int *)(lVar1 + 0x30) * 0x10 != lVar2);
  }
  if ((*(byte *)(lVar1 + 0x58) & 1) == 0) {
    return;
  }
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
  FUN_148dde45c();
  return;
}



// FUNCTION 148dde1d4 FUN_148dde1d4 body=138 status=ok
// SIG undefined FUN_148dde1d4(void)

void FUN_148dde1d4(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144729dda(param_1 + 0x40);
  if (cVar1 != '\0') {
    uVar2 = FUN_14479d2ce(param_1 + 0x40);
    FUN_148dde260(local_38,param_1);
    local_48 = param_1 + 0x48;
    FUN_14107bdda(uVar2,local_38,1,0);
    FUN_1449db362(local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dde260 FUN_148dde260 body=450 status=ok
// SIG undefined FUN_148dde260(void)

longlong * FUN_148dde260(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar4 = (undefined8 *)*param_1;
  FUN_140df6136(param_2,&local_38);
  plVar3 = local_30;
  if (local_30 == (longlong *)0x0) {
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
    *puVar4 = &PTR_FUN_14b99da10;
    puVar4[3] = local_38;
    puVar4[4] = 0;
    puVar4[5] = &LAB_148dde426;
  }
  else {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
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
    *puVar4 = &PTR_FUN_14b99da10;
    puVar4[3] = local_38;
    puVar4[4] = local_30;
    LOCK();
    *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
    UNLOCK();
    puVar4[5] = &LAB_148dde426;
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dde45c FUN_148dde45c body=65 status=ok
// SIG undefined FUN_148dde45c(void)

void FUN_148dde45c(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_144729dda(param_1 + 0x40);
  if (cVar2 != '\0') {
    uVar1 = FUN_14479d2ce(param_1 + 0x40);
    FUN_141083f38(uVar1,param_1 + 0x48,1);
    return;
  }
  return;
}



// FUNCTION 148dde49e FUN_148dde49e body=252 status=ok
// SIG undefined FUN_148dde49e(void)

longlong *
FUN_148dde49e(undefined8 param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_3;
  local_38 = (longlong *)param_3[1];
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)FUN_14001cc68(200,0x10);
  FUN_148df121a(plVar4,&local_40,param_4);
  plVar1 = plVar4 + 2;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_148df1b4e(&local_30,plVar1);
  plVar3 = local_28;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dde59e FUN_148dde59e body=252 status=ok
// SIG undefined FUN_148dde59e(void)

longlong *
FUN_148dde59e(undefined8 param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_3;
  local_38 = (longlong *)param_3[1];
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)FUN_14001cc68(200,0x10);
  FUN_148df1bf6(plVar4,&local_40,param_4);
  plVar1 = plVar4 + 2;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_148df252a(&local_30,plVar1);
  plVar3 = local_28;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dde69e FUN_148dde69e body=252 status=ok
// SIG undefined FUN_148dde69e(void)

longlong *
FUN_148dde69e(undefined8 param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_3;
  local_38 = (longlong *)param_3[1];
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)FUN_14001cc68(200,0x10);
  FUN_148df25d2(plVar4,&local_40,param_4);
  plVar1 = plVar4 + 2;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_148df2f06(&local_30,plVar1);
  plVar3 = local_28;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dde79e FUN_148dde79e body=252 status=ok
// SIG undefined FUN_148dde79e(void)

longlong *
FUN_148dde79e(undefined8 param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_3;
  local_38 = (longlong *)param_3[1];
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)FUN_14001cc68(200,0x10);
  FUN_148df3786(plVar4,&local_40,param_4);
  plVar1 = plVar4 + 2;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_148df423a(&local_30,plVar1);
  plVar3 = local_28;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dde89e FUN_148dde89e body=252 status=ok
// SIG undefined FUN_148dde89e(void)

longlong *
FUN_148dde89e(undefined8 param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_3;
  local_38 = (longlong *)param_3[1];
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)FUN_14001cc68(200,0x10);
  FUN_148df42e2(plVar4,&local_40,param_4);
  plVar1 = plVar4 + 2;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_148df4d96(&local_30,plVar1);
  plVar3 = local_28;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dde9cc FUN_148dde9cc body=408 status=ok
// SIG undefined FUN_148dde9cc(void)

void FUN_148dde9cc(longlong param_1,char param_2,longlong *param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar7 = *(longlong *)(param_1 + 0x50);
  if (((((int)param_4 < 0 || lVar7 == 0) || (*(int *)(lVar7 + 0x60) <= (int)param_4)) ||
      (param_3 == (longlong *)0x0)) ||
     (lVar7 = (ulonglong)param_4 * 0x60 + *(longlong *)(lVar7 + 0x58), lVar7 == 0))
  goto LAB_148ddea5d;
  uVar2 = FUN_1403ec9c0();
  plVar3 = (longlong *)(**(code **)(*param_3 + 0x288))(param_3,uVar2);
  if (plVar3 == (longlong *)0x0) goto LAB_148ddea5d;
  uVar2 = FUN_1403ec9c0();
  plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
  if (plVar4 == (longlong *)0x0 || plVar3 == plVar4) goto LAB_148ddea5d;
  plVar3 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4);
  if (plVar3 == (longlong *)0x0) {
LAB_148ddeab9:
    plVar4 = (longlong *)0x0;
  }
  else {
    lVar5 = (**(code **)(*plVar3 + 8))(plVar3);
    lVar6 = FUN_14049e780();
    if ((lVar6 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38))) goto LAB_148ddeab9;
    plVar4 = (longlong *)0x0;
    if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
        lVar6 + 0x30) {
      plVar4 = plVar3;
    }
  }
  iVar1 = *(int *)(lVar7 + 0x30);
  if ((longlong)iVar1 != 0) {
    lVar7 = *(longlong *)(lVar7 + 0x28);
    lVar5 = 0;
    do {
      if (param_2 == '\x01') {
        local_78 = *(undefined8 *)(lVar7 + lVar5);
        local_70 = *(undefined4 *)(lVar7 + 8 + lVar5);
        local_68 = 0;
        FUN_145a50812(plVar4,&local_78,0);
      }
      else if (param_2 == '\0') {
        local_60 = *(undefined8 *)(lVar7 + lVar5);
        local_58 = *(undefined4 *)(lVar7 + 8 + lVar5);
        local_50 = 0;
        FUN_1458d2958(plVar4,&local_60,0,0);
      }
      lVar5 = lVar5 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar5);
  }
LAB_148ddea5d:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ddeb66 FUN_148ddeb66 body=64 status=ok
// SIG undefined FUN_148ddeb66(void)

void FUN_148ddeb66(longlong param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar2 = *(int *)(param_1 + 0x70);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x68);
    lVar5 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar5);
      bVar1 = *(byte *)(lVar4 + 0x18);
      if ((bVar1 & 1) == 0) {
        *(byte *)(lVar4 + 0x18) = bVar1 | 1;
        FUN_140834d9a();
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)iVar2 * 0x10 != lVar5);
  }
  return;
}



// FUNCTION 148ddeba6 FUN_148ddeba6 body=190 status=ok
// SIG undefined FUN_148ddeba6(void)

void FUN_148ddeba6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar7 = *(longlong *)(param_1 + 0x68);
  iVar3 = *(int *)(param_1 + 0x70);
  uVar6 = 0;
  if ((longlong)iVar3 != 0) {
    lVar8 = 0;
    do {
      lVar4 = *(longlong *)(lVar7 + lVar8);
      FUN_1412f7df2(lVar4);
      FUN_1418ab4f2(lVar4 + 0x20);
      lVar4 = *(longlong *)(lVar7 + lVar8);
      *(undefined8 *)(lVar4 + 0x50) = 0;
      plVar5 = *(longlong **)(lVar4 + 0x58);
      if (plVar5 != (longlong *)0x0) {
        *(undefined8 *)(lVar4 + 0x58) = 0;
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
      lVar8 = lVar8 + 0x10;
    } while ((longlong)iVar3 * 0x10 != lVar8);
    uVar6 = *(undefined4 *)(param_1 + 0x70);
    lVar7 = *(longlong *)(param_1 + 0x68);
  }
  FUN_148bba155(lVar7,uVar6);
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(int *)(param_1 + 0x74) == 0) {
    return;
  }
  FUN_148df6af6(param_1 + 0x68);
  return;
}



// FUNCTION 148ddec64 FUN_148ddec64 body=412 status=ok
// SIG undefined FUN_148ddec64(void)

void FUN_148ddec64(longlong param_1,longlong *param_2,uint param_3,char param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar7 = *(longlong *)(param_1 + 0xa8);
  if (((((int)param_3 < 0 || lVar7 == 0) || (*(int *)(lVar7 + 0x68) <= (int)param_3)) ||
      (param_2 == (longlong *)0x0)) ||
     (lVar7 = (ulonglong)param_3 * 0x48 + *(longlong *)(lVar7 + 0x60), lVar7 == 0))
  goto LAB_148ddecf9;
  uVar2 = FUN_1403ec9c0();
  plVar3 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar2);
  if (plVar3 == (longlong *)0x0) goto LAB_148ddecf9;
  uVar2 = FUN_1403ec9c0();
  plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
  if (plVar4 == (longlong *)0x0 || plVar3 == plVar4) goto LAB_148ddecf9;
  plVar3 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4);
  if (plVar3 == (longlong *)0x0) {
LAB_148dded55:
    plVar4 = (longlong *)0x0;
  }
  else {
    lVar5 = (**(code **)(*plVar3 + 8))(plVar3);
    lVar6 = FUN_14049e780();
    if ((lVar6 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38))) goto LAB_148dded55;
    plVar4 = (longlong *)0x0;
    if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
        lVar6 + 0x30) {
      plVar4 = plVar3;
    }
  }
  iVar1 = *(int *)(lVar7 + 0x40);
  if ((longlong)iVar1 != 0) {
    lVar7 = *(longlong *)(lVar7 + 0x38);
    lVar5 = 0;
    do {
      if (param_4 == '\x01') {
        local_78 = *(undefined8 *)(lVar7 + lVar5);
        local_70 = *(undefined4 *)(lVar7 + 8 + lVar5);
        local_68 = 0;
        FUN_145a50812(plVar4,&local_78,0);
      }
      else if (param_4 == '\0') {
        local_60 = *(undefined8 *)(lVar7 + lVar5);
        local_58 = *(undefined4 *)(lVar7 + 8 + lVar5);
        local_50 = 0;
        FUN_1458d2958(plVar4,&local_60,0,0);
      }
      lVar5 = lVar5 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar5);
  }
LAB_148ddecf9:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ddee02 FUN_148ddee02 body=1406 status=ok
// SIG undefined FUN_148ddee02(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_148ddee02(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  char cVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong local_a0;
  longlong local_98;
  longlong *local_90;
  longlong *local_88;
  longlong local_80;
  longlong *local_78;
  longlong local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  cVar7 = (**(code **)(*(longlong *)*param_3 + 0x50))();
  if (cVar7 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_d8);
  }
  FUN_1404e37f4(*param_3,&local_70,&DAT_14cb8b8c0);
  if (local_70 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    goto LAB_148ddef85;
  }
  local_a8 = param_2;
  plVar8 = (longlong *)FUN_14001cc68(0x88,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14b99e950;
  local_b8 = plVar8 + 2;
  plVar8[2] = 0;
  plVar8[3] = 0;
  plVar8[4] = 0;
  plVar8[5] = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  plVar8[8] = 0;
  plVar8[9] = 0;
  plVar8[10] = 0;
  plVar8[0xb] = 0;
  plVar8[0xc] = 0;
  plVar8[0xd] = 0;
  plVar8[0xe] = 0;
  plVar8[0xf] = 0;
  plVar8[0x10] = 0;
  FUN_1413ea01e();
  plVar8[2] = (longlong)&PTR_FUN_14b6477b0;
  plVar8[0xc] = 0;
  plVar8[0xd] = 0;
  plVar8[0xe] = 0;
  plVar8[0xf] = 0;
  plVar8[0x10] = 0;
  lVar12 = param_3[3];
  plVar11 = (longlong *)param_3[4];
  if (plVar11 == (longlong *)0x0) {
    plVar8[0xc] = lVar12;
  }
  else {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    plVar10 = (longlong *)plVar8[0xd];
    plVar8[0xc] = lVar12;
    if (plVar11 == plVar10) {
      LOCK();
      plVar10 = plVar11 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
        plVar10 = plVar11;
joined_r0x000148ddf306:
        if (iVar3 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
    else {
      plVar8[0xd] = (longlong)plVar11;
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
          iVar3 = *piVar2;
          UNLOCK();
          goto joined_r0x000148ddf306;
        }
      }
    }
    LOCK();
    plVar10 = plVar11 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  if ((*(longlong *)(param_3[1] + 0x88) == 0) ||
     (plVar11 = *(longlong **)(param_3[1] + 0x90), plVar11 == (longlong *)0x0)) {
    uVar9 = 0;
  }
  else {
    uVar9 = (**(code **)(*plVar11 + 8))();
  }
  FUN_14485c47a(plVar8 + 0xe,uVar9);
  if (0 < *(int *)(param_1 + 0x60)) {
    local_b0 = plVar8 + 0xf;
    local_98 = param_1 + 0x48;
    local_a0 = param_1 + 0x30;
    lVar14 = 0x38;
    lVar12 = 0;
    do {
      plVar10 = (longlong *)FUN_148df6b4d();
      plVar11 = plVar10 + 2;
      local_90 = plVar11;
      local_88 = plVar10;
      FUN_148df6cde(&local_90,plVar11);
      iVar3 = (int)plVar8[0x10];
      *(uint *)(plVar8 + 0x10) = iVar3 + 1U;
      if (*(uint *)((longlong)plVar8 + 0x84) < iVar3 + 1U) {
        FUN_148df6d86(local_b0,iVar3);
      }
      plVar1 = local_88;
      lVar4 = *local_b0;
      lVar13 = (longlong)iVar3 * 0x10;
      *(longlong **)(lVar4 + lVar13) = plVar11;
      *(longlong **)(lVar4 + 8 + lVar13) = plVar10;
      if (plVar10 == (longlong *)0x0) {
        local_78 = (longlong *)0x0;
        local_80 = 0x10;
      }
      else {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
        local_80 = *(longlong *)(lVar4 + lVar13);
        local_78 = (longlong *)((longlong *)(lVar4 + lVar13))[1];
        if (local_78 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_78 + 1) = (int)local_78[1] + 1;
          UNLOCK();
        }
      }
      if (local_88 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_88 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*local_88)(local_88);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
      if (plVar8 == (longlong *)0x0) {
        *(longlong **)(local_80 + 0x50) = local_b8;
        plVar11 = *(longlong **)(local_80 + 0x58);
        if (plVar11 != (longlong *)0x0) {
          *(undefined8 *)(local_80 + 0x58) = 0;
LAB_148ddf266:
          LOCK();
          plVar10 = plVar11 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar2 = (int *)((longlong)plVar11 + 0xc);
            *piVar2 = *piVar2 + -1;
            iVar3 = *piVar2;
            UNLOCK();
joined_r0x000148ddf256:
            if (iVar3 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
            }
          }
        }
      }
      else {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        *(longlong **)(local_80 + 0x50) = local_b8;
        plVar11 = *(longlong **)(local_80 + 0x58);
        if (plVar8 == plVar11) {
          LOCK();
          plVar11 = plVar8 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar2 = (int *)((longlong)plVar8 + 0xc);
            *piVar2 = *piVar2 + -1;
            iVar3 = *piVar2;
            UNLOCK();
            plVar11 = plVar8;
            goto joined_r0x000148ddf256;
          }
        }
        else {
          *(longlong **)(local_80 + 0x58) = plVar8;
          if (plVar11 != (longlong *)0x0) goto LAB_148ddf266;
        }
      }
      lVar4 = local_80;
      *(int *)(local_80 + 0x60) = (int)lVar12;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cbd2e60) && (FUN_144b3d300(&DAT_14cbd2e60), DAT_14cbd2e60 == -1))
      {
        DAT_14cbd2e50 = 0;
        _DAT_14cbd2e58 = 0;
        atexit(FUN_144221f23);
        _Init_thread_footer(&DAT_14cbd2e60);
      }
      uVar6 = _DAT_14cbd2e58;
      FUN_140b47c46(DAT_14cbd2e50,_DAT_14cbd2e58 & 0xffffffff);
      uVar5 = _DAT_14cbd2e58 >> 0x20;
      _DAT_14cbd2e58 = _DAT_14cbd2e58 & 0xffffffff00000000;
      if (((longlong)uVar6 < 0) && ((int)uVar5 != 0)) {
        FUN_14896cd66(&DAT_14cbd2e50,0);
      }
      FUN_1404e3746(&DAT_14cbd2e50,local_98);
      FUN_1404e3746(&DAT_14cbd2e50,*(longlong *)(param_1 + 0x58) + lVar14 + 0x18);
      FUN_148ddf381(*param_3,&local_80,local_a0,*(longlong *)(param_1 + 0x58) + lVar14);
      FUN_1404e38dc(local_70,*param_3,lVar4 + 0x20,&DAT_14cbd2e50);
      plVar11 = local_78;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_78 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*local_78)(local_78);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
      lVar12 = lVar12 + 1;
      lVar14 = lVar14 + 0x60;
    } while (lVar12 < *(int *)(param_1 + 0x60));
  }
  param_2 = local_a8;
  *local_a8 = (longlong)local_b8;
  local_a8[1] = (longlong)plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
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
LAB_148ddef85:
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_68 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar2 = (int *)((longlong)local_68 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_68 + 0x10))(local_68);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148ddf381 FUN_148ddf381 body=151 status=ok
// SIG undefined FUN_148ddf381(void)

void FUN_148ddf381(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_4 = (longlong *)*param_4;
  if ((param_4 != (longlong *)0x0) || (param_4 = (longlong *)*param_3, param_4 != (longlong *)0x0))
  {
    local_20 = *param_2;
    local_18 = (longlong *)param_2[1];
    if (local_18 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_18 + 1) = (int)local_18[1] + 1;
      UNLOCK();
    }
    (**(code **)(*param_4 + 0x18))(param_4,param_1,&local_20);
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
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ddf41a FUN_148ddf41a body=509 status=ok
// SIG undefined FUN_148ddf41a(void)

undefined8 * FUN_148ddf41a(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_b8 [32];
  undefined1 **local_98;
  longlong *local_88;
  longlong *local_80;
  undefined1 *local_78 [2];
  undefined8 local_68;
  undefined **local_58;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar4 = (longlong *)FUN_14001cc68(0xd0,0x10);
  FUN_148df6e0c(plVar4);
  local_88 = plVar4 + 2;
  lVar2 = *(longlong *)(param_3 + 0x18);
  plVar3 = *(longlong **)(param_3 + 0x20);
  local_80 = plVar4;
  if (plVar3 == (longlong *)0x0) {
    plVar4[0x17] = lVar2;
    plVar6 = (longlong *)plVar4[0x18];
    if (plVar6 == (longlong *)0x0) goto LAB_148ddf534;
    plVar4[0x18] = 0;
LAB_148ddf4a0:
    LOCK();
    plVar4 = plVar6 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    if (plVar3 == (longlong *)0x0) goto LAB_148ddf534;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    plVar4[0x17] = lVar2;
    plVar6 = (longlong *)plVar4[0x18];
    if (plVar3 == plVar6) {
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
    else {
      plVar4[0x18] = (longlong)plVar3;
      if (plVar6 != (longlong *)0x0) goto LAB_148ddf4a0;
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
LAB_148ddf534:
  if ((*(longlong *)(*(longlong *)(param_3 + 8) + 0x88) == 0) ||
     (plVar3 = *(longlong **)(*(longlong *)(param_3 + 8) + 0x90), plVar3 == (longlong *)0x0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(*plVar3 + 8))();
  }
  plVar3 = local_88;
  FUN_14485c47a(local_88 + 0x17,uVar5);
  local_98 = local_78;
  local_68 = 0;
  local_58 = &PTR_LAB_14b99ea50;
  local_78[0] = &LAB_1442269c0;
  FUN_148ddf618(param_1,param_1 + 0x60,param_3,&local_88);
  plVar4 = local_80;
  *param_2 = plVar3;
  param_2[1] = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
    UNLOCK();
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_80 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_80)(local_80);
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
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148ddf618 FUN_148ddf618 body=391 status=ok
// SIG undefined FUN_148ddf618(void)

void FUN_148ddf618(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4,
                  longlong *param_5)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined4 local_d0 [4];
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d8 = param_1;
  FUN_148df6eca(local_d0,param_4);
  local_b8 = *param_4 + 0x58;
  local_c0 = *(undefined8 *)(param_3 + 0x10);
  local_b0 = 0;
  local_a8 = 0;
  FUN_141368656(&local_b0,local_d0);
  local_80 = 0;
  local_78 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_74 = 0xffffffff00000080;
  local_6c = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  FUN_1449db362(local_d0);
  if (0 < (int)param_2[1]) {
    local_d8 = local_d8 + 0x50;
    lVar6 = 0x28;
    lVar7 = 0;
    do {
      lVar1 = *param_2;
      local_d0[0] = (undefined4)lVar7;
      pcVar2 = (code *)*param_5;
      plVar5 = (longlong *)param_5[2];
      if ((longlong *)param_5[2] == (longlong *)0x0) {
        plVar5 = param_5 + 4;
      }
      uVar4 = (**(code **)(*plVar5 + 8))();
      iVar3 = (*pcVar2)(uVar4,local_d0,lVar1 + lVar6 + -0x28);
      if (iVar3 != -1) {
        FUN_1413ebae6(&local_c0,iVar3,local_d8);
        FUN_1413ebae6(&local_c0,iVar3,lVar1 + lVar6);
      }
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x48;
    } while (lVar7 < (int)param_2[1]);
  }
  FUN_1413685a0(&local_c0);
  if (*param_5 != 0) {
    plVar5 = param_5 + 4;
    if ((longlong *)param_5[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_5[2];
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ddf7a0 FUN_148ddf7a0 body=797 status=ok
// SIG undefined FUN_148ddf7a0(void)

void FUN_148ddf7a0(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong *local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar15 = (int)param_1[4];
  if (iVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar15);
  }
  local_c0 = param_1 + 3;
  if (*(int *)((longlong)param_1 + 0x24) < iVar15) {
    FUN_148df7496(local_c0);
  }
  lVar12 = (longlong)*(int *)(*param_2 + 0x38);
  if (lVar12 != 0) {
    lVar5 = *(longlong *)(*param_2 + 0x30);
    local_b8 = lVar12 * 0x68;
    lVar12 = 0;
    iVar15 = 0;
    do {
      iVar3 = (int)param_1[4];
      *(uint *)(param_1 + 4) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0x24) < iVar3 + 1U) {
        FUN_148df7506(local_c0,iVar3);
      }
      lVar6 = *local_c0;
      lVar16 = (longlong)iVar3 * 0x50;
      *(undefined8 *)(lVar6 + 0x48 + lVar16) = 0;
      puVar1 = (undefined8 *)(lVar6 + 0x38 + lVar16);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(lVar6 + 0x28 + lVar16);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(lVar6 + lVar16) = 0xffffffffffffffff;
      *(undefined8 *)(lVar6 + 8 + lVar16) = 0;
      uVar7 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      puVar1 = (undefined8 *)(lVar6 + 0x10 + lVar16);
      *puVar1 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      puVar1[1] = uVar7;
      *(undefined8 *)(lVar6 + 0x20 + lVar16) = DAT_14c8464f0;
      uVar10 = DAT_14c8464e8._4_4_;
      uVar9 = (undefined4)DAT_14c8464e8;
      uVar8 = DAT_14c8464e0._4_4_;
      puVar2 = (undefined4 *)(lVar6 + 0x38 + lVar16);
      *puVar2 = (undefined4)DAT_14c8464e0;
      puVar2[1] = uVar8;
      puVar2[2] = uVar9;
      puVar2[3] = uVar10;
      *(undefined8 *)(lVar6 + 0x48 + lVar16) = DAT_14c8464f0;
      *(int *)(lVar6 + lVar16) = iVar15;
      lVar17 = lVar12 + 0x20 + lVar5;
      lVar13 = FUN_14479d2ce(lVar17);
      if (lVar13 == 0) {
        if (*(longlong *)(lVar5 + 0x28 + lVar12) != 0) {
          lVar13 = FUN_140007850();
          cVar11 = (*(code *)PTR_FUN_14c758760)();
          if ((lVar13 == 0) || (cVar11 == '\0')) {
            FUN_14485c47a(lVar17,lVar13);
            if (lVar13 == 0) goto LAB_148ddf9bf;
          }
          else {
            uVar4 = *(uint *)(lVar13 + 0xc);
            if ((int)uVar4 < DAT_14c9647dc) {
              lVar14 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
            }
            else {
              lVar14 = 0;
            }
            if ((*(uint *)(lVar14 + 8) & 0x8400000) == 0) {
              FUN_14485c47a(lVar17,lVar13);
            }
          }
          if ((*(uint *)(lVar13 + 8) >> 0x1e & 1) == 0) goto LAB_148ddf8a9;
        }
LAB_148ddf9bf:
        local_b0 = 0;
      }
      else {
LAB_148ddf8a9:
        lVar17 = FUN_144a797b2();
        if ((((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) < *(int *)(lVar17 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar17 + 0x38) * 8) != lVar17 + 0x30)) ||
            (lVar17 = FUN_1459d7a82(), lVar17 == 0)) ||
           (*(int *)(lVar13 + 0x38) < *(int *)(lVar17 + 0x38))) goto LAB_148ddf9bf;
        if (*(longlong *)(*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(lVar17 + 0x38) * 8) !=
            lVar17 + 0x30) {
          lVar13 = 0;
        }
        local_b0 = lVar13;
        if ((lVar13 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar13);
        }
      }
      puVar2 = (undefined4 *)(lVar6 + 8 + lVar16);
      local_c8 = lVar5 + 0x48 + lVar12;
      FUN_148993d90(&local_a8,lVar5 + lVar12,lVar5 + 8 + lVar12,&local_b0);
      puVar2[4] = local_98;
      puVar2[5] = uStack_94;
      puVar2[6] = uStack_90;
      puVar2[7] = uStack_8c;
      *puVar2 = local_a8;
      puVar2[1] = uStack_a4;
      puVar2[2] = uStack_a0;
      puVar2[3] = uStack_9c;
      lVar13 = local_88;
      if (DAT_14c950c29 == '\x01') {
        if (local_88 == 0) {
          lVar13 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar13 = local_88;
        }
      }
      lVar17 = lVar6 + lVar16;
      *(longlong *)(lVar6 + lVar16 + 0x28) = lVar13;
      *(undefined8 *)(lVar17 + 0x40) = local_70;
      *(undefined8 *)(lVar17 + 0x48) = uStack_68;
      *(undefined4 *)(lVar17 + 0x30) = local_80;
      *(undefined4 *)(lVar17 + 0x34) = uStack_7c;
      *(undefined4 *)(lVar17 + 0x38) = uStack_78;
      *(undefined4 *)(lVar17 + 0x3c) = uStack_74;
      lVar12 = lVar12 + 0x68;
      iVar15 = iVar15 + 1;
    } while (local_b8 != lVar12);
  }
  (**(code **)(*param_1 + 0x10))(param_1);
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ddfac0 FUN_148ddfac0 body=69 status=ok
// SIG undefined FUN_148ddfac0(void)

undefined8 FUN_148ddfac0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 < 0 || *(int *)(param_1 + 0x20) <= iVar1) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    iVar1 = 0;
  }
  if (*(int *)(param_1 + 0x20) <= iVar1) {
    return 0;
  }
  *(int *)(param_1 + 0x10) = iVar1 + 1;
  uVar2 = FUN_148ddfb06();
  return uVar2;
}



// FUNCTION 148ddfb06 FUN_148ddfb06 body=83 status=ok
// SIG undefined FUN_148ddfb06(void)

undefined4 FUN_148ddfb06(longlong *param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x18))(param_1,param_2,param_4);
  if ((char)uVar1 != '\0') {
    *param_3 = param_4;
    uVar2 = FUN_14479d2ce((longlong)*(int *)(param_4 + 4) * 0xc + *param_2);
    FUN_14485c47a(param_3 + 1,uVar2);
  }
  return uVar1;
}



// FUNCTION 148ddfb5a FUN_148ddfb5a body=199 status=ok
// SIG undefined FUN_148ddfb5a(void)

void FUN_148ddfb5a(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((longlong)*(int *)(param_1 + 0x20) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x18);
    lVar4 = (longlong)*(int *)(param_1 + 0x20) * 0x50;
    do {
      local_68 = 0;
      uStack_60 = 0;
      cVar3 = FUN_148ddfb06(param_1,param_2,&local_68,lVar5);
      if (cVar3 != '\0') {
        iVar2 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
          FUN_148df759a(param_3,iVar2);
        }
        puVar1 = (undefined4 *)(*param_3 + (longlong)iVar2 * 0x10);
        *puVar1 = (undefined4)local_68;
        puVar1[1] = local_68._4_4_;
        puVar1[2] = (undefined4)uStack_60;
        puVar1[3] = uStack_60._4_4_;
      }
      lVar5 = lVar5 + 0x50;
      lVar4 = lVar4 + -0x50;
    } while (lVar4 != 0);
  }
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ddfc22 FUN_148ddfc22 body=178 status=ok
// SIG undefined FUN_148ddfc22(void)

undefined8 FUN_148ddfc22(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_2 + 0x20);
  if (lVar1 == DAT_14cbd2e70) {
    param_1 = param_1 + 0x458;
  }
  else if (lVar1 == DAT_14cbd2e78) {
    param_1 = param_1 + 0x478;
  }
  else {
    if (lVar1 != DAT_14cbd2e88) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    param_1 = param_1 + 0x488;
  }
  local_38 = *param_3;
  local_30 = param_3[1];
  FUN_140805e68(param_1,&local_38,1);
  FUN_144a7b126(param_1,&local_21,1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ddfcea FUN_148ddfcea body=388 status=ok
// SIG undefined FUN_148ddfcea(void)

void FUN_148ddfcea(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  longlong local_50;
  longlong *local_48;
  code *local_40;
  undefined4 local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_144222288();
  FUN_148ddfe70(param_1,&local_50);
  if (local_50 != 0) {
    local_58 = *(char *)(param_1 + 0xe0) == '\x01';
    FUN_140a41f04(local_50,&local_30,*(undefined8 *)(param_1 + 0x428),param_1 + 0xe8);
    plVar1 = local_28;
    if ((longlong *)(param_1 + 0x498) != &local_30) {
      *(longlong *)(param_1 + 0x498) = local_30;
      local_30 = 0;
      plVar3 = *(longlong **)(param_1 + 0x4a0);
      if (local_28 != plVar3) {
        local_28 = (longlong *)0x0;
        *(longlong **)(param_1 + 0x4a0) = plVar1;
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
    plVar1 = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_28 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    lVar4 = *(longlong *)(param_1 + 0x498);
    if (lVar4 != 0) {
      local_40 = FUN_148ddff1e;
      local_38 = 0;
      FUN_148df7620(&local_30,param_1);
      FUN_140e0aeb0(lVar4 + 0x130,&local_40,&local_30);
      FUN_1449db362(&local_30);
    }
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


