// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1489ac08e FUN_1489ac08e body=288 status=ok
// SIG undefined FUN_1489ac08e(void)

undefined8 * FUN_1489ac08e(longlong param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  void *_Src;
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x50) != *(int *)(param_1 + 0x7c)) {
    lVar1 = *param_3;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar4 = (uint)lVar1 & 0xffff;
    lVar3 = param_1 + 0x80;
    if (*(longlong *)(param_1 + 0x88) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x88);
    }
    iVar5 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x90) - 1U &
                             (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar4) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x48) + (longlong)iVar5 * 0x38;
        if (*(longlong *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar5 * 0x38) == lVar1) {
          if (lVar3 + 8 != 0 && lVar3 != 0) {
            FUN_1489ac1ae(lVar3 + 8,param_2,param_4);
            goto LAB_1489ac0dd;
          }
          break;
        }
        iVar5 = *(int *)(lVar3 + 0x30);
      } while (iVar5 != -1);
    }
  }
  *param_2 = 0;
  iVar5 = (int)param_4[1];
  _Src = (void *)*param_4;
  *(int *)(param_2 + 1) = iVar5;
  if ((longlong)iVar5 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar5,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar5 * 2);
  }
LAB_1489ac0dd:
  if (*param_4 != 0) {
    FUN_1400020a8();
  }
  return param_2;
}



// FUNCTION 1489ac1ae FUN_1489ac1ae body=326 status=ok
// SIG undefined FUN_1489ac1ae(void)

undefined8 * FUN_1489ac1ae(undefined8 *param_1,undefined8 *param_2,undefined8 ***param_3)

{
  int iVar1;
  void *_Src;
  code *pcVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_78 [40];
  undefined8 **local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 4) == '\b') {
    *param_2 = 0;
    iVar1 = *(int *)(param_1 + 1);
    _Src = (void *)*param_1;
    *(int *)(param_2 + 1) = iVar1;
    if ((longlong)iVar1 != 0) {
      FUN_1446dd670(param_2,iVar1,0);
      memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
    }
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1400b56fe(local_50,param_1,8);
    pppuVar3 = local_50;
    if (local_30 == 0) {
      pppuVar3 = param_3;
    }
    *param_2 = 0;
    iVar1 = *(int *)(pppuVar3 + 1);
    param_3 = (undefined8 ***)*param_3;
    *(int *)(param_2 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      pppuVar3 = (undefined8 ***)local_50[0];
      if (local_30 == 0) {
        pppuVar3 = param_3;
      }
      FUN_1446dd670(param_2,iVar1,0);
      memcpy((void *)*param_2,pppuVar3,(longlong)iVar1 * 2);
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
    if (pcVar2 != (code *)0x0) {
      pppuVar3 = local_50;
      if (0x18 < local_38) {
        pppuVar3 = (undefined8 ***)local_50[0];
      }
      (*pcVar2)(pppuVar3);
    }
    if (0x18 < local_38) {
      FUN_1400020a8(local_50[0]);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489ac2fa FUN_1489ac2fa body=107 status=ok
// SIG undefined FUN_1489ac2fa(void)

/* WARNING: Removing unreachable block (ram,0x0001489ac32c) */
/* WARNING: Removing unreachable block (ram,0x0001489ac308) */
/* WARNING: Removing unreachable block (ram,0x0001489ac31e) */
/* WARNING: Removing unreachable block (ram,0x0001489ac337) */
/* WARNING: Removing unreachable block (ram,0x0001489ac320) */

void FUN_1489ac2fa(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_14cb8ccc0;
  LOCK();
  UNLOCK();
  DAT_14cb8ccc0 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    DAT_14cb8ccc8 = DAT_14cb8ccc8 + -1;
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
    DAT_14cb8ccc8 = DAT_14cb8ccc8 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1489ac366 FUN_1489ac366 body=62 status=ok
// SIG undefined FUN_1489ac366(void)

void FUN_1489ac366(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1489ac3a4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1489ac3a4 FUN_1489ac3a4 body=93 status=ok
// SIG undefined FUN_1489ac3a4(void)

ulonglong FUN_1489ac3a4(uint param_1,uint param_2)

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



// FUNCTION 1489ac402 FUN_1489ac402 body=31 status=ok
// SIG undefined FUN_1489ac402(void)

undefined8 FUN_1489ac402(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489ac436 FUN_1489ac436 body=85 status=ok
// SIG undefined FUN_1489ac436(void)

void FUN_1489ac436(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b432a60;
  return;
}



// FUNCTION 1489ac48c FUN_1489ac48c body=118 status=ok
// SIG undefined FUN_1489ac48c(void)

void FUN_1489ac48c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b432a60;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489ac4f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489ac502 FUN_1489ac502 body=101 status=ok
// SIG undefined FUN_1489ac502(void)

undefined8 FUN_1489ac502(void)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14589fbaa(local_20);
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



// FUNCTION 1489ac568 FUN_1489ac568 body=45 status=ok
// SIG undefined FUN_1489ac568(void)

longlong FUN_1489ac568(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x20;
  FUN_145812ac4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489ac596 FUN_1489ac596 body=54 status=ok
// SIG undefined FUN_1489ac596(void)

longlong FUN_1489ac596(longlong param_1,int param_2)

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



// FUNCTION 1489ac5cc FUN_1489ac5cc body=124 status=ok
// SIG undefined FUN_1489ac5cc(void)

void FUN_1489ac5cc(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (param_2 <= (int)uVar1) {
    iVar6 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x14) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar5 = (longlong)(int)uVar2;
      }
      else {
        lVar5 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 3,0);
      iVar3 = (int)(uVar4 >> 3);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x14) = iVar6;
    FUN_1489ac64a(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1489ac64a FUN_1489ac64a body=132 status=ok
// SIG undefined FUN_1489ac64a(void)

void FUN_1489ac64a(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 8);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 8,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 8),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 8,param_2,param_3,8);
  return;
}



// FUNCTION 1489ac6f6 FUN_1489ac6f6 body=96 status=ok
// SIG undefined FUN_1489ac6f6(void)

void FUN_1489ac6f6(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 1489ac756 FUN_1489ac756 body=127 status=ok
// SIG undefined FUN_1489ac756(void)

void FUN_1489ac756(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x3c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0xc,0);
      iVar4 = (int)(uVar3 / 0xc);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x3c) = iVar5;
    FUN_1489ac7d6(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1489ac7d6 FUN_1489ac7d6 body=140 status=ok
// SIG undefined FUN_1489ac7d6(void)

void FUN_1489ac7d6(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x30);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0xc);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x30,0,param_3,0xc);
    memmove(*(void **)((longlong)param_1 + 0x30),param_1,(longlong)param_2 * 0xc);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x30,param_2,param_3,0xc);
  return;
}



// FUNCTION 1489ac87a FUN_1489ac87a body=29 status=ok
// SIG undefined FUN_1489ac87a(void)

bool FUN_1489ac87a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1489ac898 FUN_1489ac898 body=26 status=ok
// SIG undefined FUN_1489ac898(void)

bool FUN_1489ac898(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1489ac8bc FUN_1489ac8bc body=152 status=ok
// SIG undefined FUN_1489ac8bc(void)

void FUN_1489ac8bc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b433340;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  puVar1[6] = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
                    /* WARNING: Could not recover jumptable at 0x0001489ac949. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)(puVar3,puVar1 + 6);
    return;
  }
  return;
}



// FUNCTION 1489ac954 FUN_1489ac954 body=179 status=ok
// SIG undefined FUN_1489ac954(void)

void FUN_1489ac954(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b433340;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x0001489ac9f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489aca08 FUN_1489aca08 body=44 status=ok
// SIG undefined FUN_1489aca08(void)

void FUN_1489aca08(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001489aca31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}



// FUNCTION 1489aca34 FUN_1489aca34 body=9 status=ok
// SIG undefined FUN_1489aca34(void)

void FUN_1489aca34(longlong param_1)

{
  FUN_140333dee(param_1 + 0x10);
  return;
}



// FUNCTION 1489aca3e FUN_1489aca3e body=29 status=ok
// SIG undefined FUN_1489aca3e(void)

undefined8 FUN_1489aca3e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489aca5c FUN_1489aca5c body=167 status=ok
// SIG undefined FUN_1489aca5c(void)

void FUN_1489aca5c(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1489acad7;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1489acad7;
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
LAB_1489acad7:
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
                    /* WARNING: Could not recover jumptable at 0x0001489acaf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1489acb03 FUN_1489acb03 body=188 status=ok
// SIG undefined FUN_1489acb03(void)

undefined8 * FUN_1489acb03(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x1d8,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14b432d80;
  FUN_140effda4(puVar2 + 2,param_1,param_2);
  puVar2[2] = &PTR_FUN_14b4318a0;
  puVar2[0x30] = 0;
  *(undefined4 *)(puVar2 + 0x31) = 0;
  uVar1 = DAT_14c8464e8;
  puVar2[0x32] = DAT_14c8464e0;
  puVar2[0x33] = uVar1;
  puVar2[0x34] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  puVar2[0x35] = DAT_14c8464e0;
  puVar2[0x36] = uVar1;
  puVar2[0x37] = DAT_14c8464f0;
  *(undefined1 *)(puVar2 + 0x38) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x1ca) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x1c4) = 0;
  return puVar2;
}



// FUNCTION 1489acbca FUN_1489acbca body=29 status=ok
// SIG undefined FUN_1489acbca(void)

undefined8 FUN_1489acbca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489acbe8 FUN_1489acbe8 body=167 status=ok
// SIG undefined FUN_1489acbe8(void)

void FUN_1489acbe8(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1489acc63;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1489acc63;
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
LAB_1489acc63:
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
                    /* WARNING: Could not recover jumptable at 0x0001489acc83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1489acc90 FUN_1489acc90 body=9 status=ok
// SIG undefined FUN_1489acc90(void)

void FUN_1489acc90(longlong param_1)

{
  FUN_140333e92(param_1 + 0x10);
  return;
}



// FUNCTION 1489acc9a FUN_1489acc9a body=29 status=ok
// SIG undefined FUN_1489acc9a(void)

undefined8 FUN_1489acc9a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489accb8 FUN_1489accb8 body=167 status=ok
// SIG undefined FUN_1489accb8(void)

void FUN_1489accb8(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1489acd33;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1489acd33;
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
LAB_1489acd33:
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
                    /* WARNING: Could not recover jumptable at 0x0001489acd53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1489acd70 FUN_1489acd70 body=93 status=ok
// SIG undefined FUN_1489acd70(void)

void FUN_1489acd70(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c7440;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b432dc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489acdce FUN_1489acdce body=93 status=ok
// SIG undefined FUN_1489acdce(void)

void FUN_1489acdce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c7440;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b432dc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489ace2c FUN_1489ace2c body=126 status=ok
// SIG undefined FUN_1489ace2c(void)

void FUN_1489ace2c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c7440;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b432dc0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489ace9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489acec8 FUN_1489acec8 body=93 status=ok
// SIG undefined FUN_1489acec8(void)

void FUN_1489acec8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b432e30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489acf26 FUN_1489acf26 body=93 status=ok
// SIG undefined FUN_1489acf26(void)

void FUN_1489acf26(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b432e30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489acf84 FUN_1489acf84 body=126 status=ok
// SIG undefined FUN_1489acf84(void)

void FUN_1489acf84(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a3a3510;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b432e30;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489acff3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489ad010 FUN_1489ad010 body=21 status=ok
// SIG undefined FUN_1489ad010(void)

undefined8 FUN_1489ad010(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1489ad026 FUN_1489ad026 body=48 status=ok
// SIG undefined FUN_1489ad026(void)

void FUN_1489ad026(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1489ad056 FUN_1489ad056 body=48 status=ok
// SIG undefined FUN_1489ad056(void)

void FUN_1489ad056(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1489ad086 FUN_1489ad086 body=48 status=ok
// SIG undefined FUN_1489ad086(void)

void FUN_1489ad086(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1489ad0b6 FUN_1489ad0b6 body=48 status=ok
// SIG undefined FUN_1489ad0b6(void)

void FUN_1489ad0b6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1489ad0e6 FUN_1489ad0e6 body=31 status=ok
// SIG undefined FUN_1489ad0e6(void)

undefined8 FUN_1489ad0e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489ad10c FUN_1489ad10c body=29 status=ok
// SIG undefined FUN_1489ad10c(void)

bool FUN_1489ad10c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1489ad12a FUN_1489ad12a body=26 status=ok
// SIG undefined FUN_1489ad12a(void)

bool FUN_1489ad12a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1489ad144 FUN_1489ad144 body=93 status=ok
// SIG undefined FUN_1489ad144(void)

void FUN_1489ad144(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b433010;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489ad1a2 FUN_1489ad1a2 body=126 status=ok
// SIG undefined FUN_1489ad1a2(void)

void FUN_1489ad1a2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b433010;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489ad211. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489ad220 FUN_1489ad220 body=142 status=ok
// SIG undefined FUN_1489ad220(void)

bool FUN_1489ad220(longlong param_1)

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
    (**(code **)(param_1 + 0x20))(lVar2);
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



// FUNCTION 1489ad2b0 FUN_1489ad2b0 body=31 status=ok
// SIG undefined FUN_1489ad2b0(void)

undefined8 FUN_1489ad2b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489ad2e8 FUN_1489ad2e8 body=93 status=ok
// SIG undefined FUN_1489ad2e8(void)

void FUN_1489ad2e8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4332c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b433080;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489ad346 FUN_1489ad346 body=93 status=ok
// SIG undefined FUN_1489ad346(void)

void FUN_1489ad346(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4332c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b433080;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489ad3a4 FUN_1489ad3a4 body=126 status=ok
// SIG undefined FUN_1489ad3a4(void)

void FUN_1489ad3a4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4332c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b433080;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489ad413. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489ad432 FUN_1489ad432 body=31 status=ok
// SIG undefined FUN_1489ad432(void)

undefined8 FUN_1489ad432(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489ad46a FUN_1489ad46a body=93 status=ok
// SIG undefined FUN_1489ad46a(void)

void FUN_1489ad46a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4330f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489ad4c8 FUN_1489ad4c8 body=126 status=ok
// SIG undefined FUN_1489ad4c8(void)

void FUN_1489ad4c8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4330f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489ad537. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489ad546 FUN_1489ad546 body=21 status=ok
// SIG undefined FUN_1489ad546(void)

undefined8 FUN_1489ad546(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1489ad55e FUN_1489ad55e body=76 status=ok
// SIG undefined FUN_1489ad55e(void)

void FUN_1489ad55e(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b3d9970;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  FUN_144a5dc74(param_1 + 6);
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  return;
}



// FUNCTION 1489ad5aa FUN_1489ad5aa body=44 status=ok
// SIG undefined FUN_1489ad5aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1489ad5aa(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb8d5ac = _DAT_14cb8d5ac + -1;
  *param_1 = DAT_14cb8d5a0;
  DAT_14cb8d5a0 = param_1;
  return;
}



// FUNCTION 1489ad5d6 FUN_1489ad5d6 body=80 status=ok
// SIG undefined FUN_1489ad5d6(void)

void FUN_1489ad5d6(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b3d99a0;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return;
}



// FUNCTION 1489ad626 FUN_1489ad626 body=581 status=ok
// SIG undefined FUN_1489ad626(void)

void FUN_1489ad626(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_118 [40];
  longlong *local_f0;
  undefined4 local_e8;
  uint uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  undefined8 local_88;
  int local_80;
  undefined8 local_7c;
  int local_74;
  longlong local_68;
  undefined4 local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1489b1cd8(param_1,0);
  }
  lVar2 = DAT_14cb8d3c0;
  if (DAT_14cb8d3c0 != 0) {
    local_88 = 0;
    local_80 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_7c = 0xffffffff00000080;
    local_74 = 0;
    local_68 = 0;
    local_60 = 0;
    FUN_1487f451e(&local_a8,DAT_14cb8d3c0 + 0x2e8);
    local_58 = *(undefined8 *)(lVar2 + 0x338);
    iVar5 = (int)uStack_a0 - local_74;
    if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar5);
    }
    if (*(int *)((longlong)param_1 + 0xc) < iVar5) {
      FUN_1489b1cd8(param_1);
    }
    local_c8 = 0x100000000;
    local_b8 = 0xffffffff;
    uStack_b0 = 0;
    uStack_c0 = local_98;
    if (local_80 == 0) {
      iVar5 = 0;
    }
    else {
      FUN_1449c0562(&local_c8);
      iVar5 = local_80;
    }
    uStack_d0 = CONCAT44(uStack_ac,uStack_b0);
    local_d8 = local_b8;
    uVar3 = local_d8;
    local_e8 = (undefined4)local_c8;
    uStack_e4 = local_c8._4_4_;
    uStack_e0 = (undefined4)uStack_c0;
    uStack_dc = uStack_c0._4_4_;
    local_d8._4_4_ = (int)((ulonglong)local_b8 >> 0x20);
    local_f0 = &local_a8;
    if ((local_d8._4_4_ != iVar5) || (uStack_c0 != local_98)) {
      iVar4 = local_d8._4_4_;
      local_d8 = uVar3;
      do {
        lVar1 = *(longlong *)(*local_f0 + 0x10 + (longlong)iVar4 * 0x20);
        if (lVar1 != 0) {
          local_c8 = *(longlong *)(lVar1 + 0x30);
          FUN_145747a3a(lVar2,&local_c8,lVar1);
          *(longlong *)(lVar1 + 0x30) = local_c8;
          if ((local_c8 != 0) && (*(char *)(local_c8 + 0x18) == '\x01')) {
            iVar4 = (int)param_1[1];
            *(uint *)(param_1 + 1) = iVar4 + 1U;
            if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
              FUN_1489b1d38(param_1,iVar4);
            }
            *(longlong *)(*param_1 + (longlong)iVar4 * 8) = local_c8;
          }
        }
        local_d8 = CONCAT44(local_d8._4_4_,(uint)local_d8 & ~uStack_e4);
        FUN_1449c0562(&local_e8);
        iVar4 = local_d8._4_4_;
        uVar3 = local_d8;
      } while (local_f0 != &local_a8 ||
               ((undefined1 *)CONCAT44(uStack_dc,uStack_e0) != local_98 || local_d8._4_4_ != iVar5))
      ;
    }
    local_d8 = uVar3;
    local_60 = 0;
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    FUN_1406d03ec(&local_a8);
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489ad86e FUN_1489ad86e body=51 status=ok
// SIG undefined FUN_1489ad86e(void)

longlong FUN_1489ad86e(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((DAT_14cb8d3c0 == 0) || (lVar1 = FUN_1407d7d9c(DAT_14cb8d3c0,param_1), lVar1 == 0)) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    if (*(char *)(lVar1 + 0x18) != '\0') {
      lVar2 = lVar1;
    }
  }
  return lVar2;
}



// FUNCTION 1489ad8a2 FUN_1489ad8a2 body=54 status=ok
// SIG undefined FUN_1489ad8a2(void)

longlong FUN_1489ad8a2(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((DAT_14cb8d3c0 == 0) || (lVar1 = FUN_1407d7f24(DAT_14cb8d3c0,param_1,param_2), lVar1 == 0)) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    if (*(char *)(lVar1 + 0x18) != '\0') {
      lVar2 = lVar1;
    }
  }
  return lVar2;
}



// FUNCTION 1489ad8d8 FUN_1489ad8d8 body=132 status=ok
// SIG undefined FUN_1489ad8d8(void)

void FUN_1489ad8d8(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar1 >> 0x10 ^ uVar1) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x10) == param_2) {
          FUN_1489b1e32(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x10 + *param_1 + 8);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 1489ad95c FUN_1489ad95c body=108 status=ok
// SIG undefined FUN_1489ad95c(void)

void FUN_1489ad95c(longlong param_1,uint *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  
  *param_3 = 0;
  if (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x6c)) {
    lVar2 = param_1 + 0x70;
    if (*(longlong *)(param_1 + 0x78) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x78);
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x80) - 1U & *param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x38) + (longlong)iVar1 * 0x38;
        if (*(uint *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar1 * 0x38) == *param_2) {
          if (lVar2 == 0) {
            return;
          }
          if ((longlong *)(lVar2 + 0x28) == (longlong *)0x0) {
            return;
          }
          lVar2 = *(longlong *)(lVar2 + 0x28);
          if (lVar2 == 0) {
            return;
          }
          *param_3 = lVar2;
          return;
        }
        iVar1 = *(int *)(lVar2 + 0x30);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1489ad9cc FUN_1489ad9cc body=230 status=ok
// SIG undefined FUN_1489ad9cc(void)

longlong * FUN_1489ad9cc(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14001cc68(0x78,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b434020;
  plVar1 = plVar4 + 2;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[8] = 0;
  plVar4[9] = 0;
  plVar4[10] = 0;
  plVar4[0xb] = 0;
  plVar4[0xc] = 0;
  plVar4[0xd] = 0;
  plVar4[0xe] = 0;
  plVar4[2] = (longlong)&PTR_FUN_14b434040;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_1489b202e(&local_30,plVar1);
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489adab6 FUN_1489adab6 body=444 status=ok
// SIG undefined FUN_1489adab6(void)

void FUN_1489adab6(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_218 [40];
  code *local_1f0;
  undefined4 local_1e8;
  undefined2 local_1e0 [2];
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1c8;
  code *local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_218;
  if (param_2 != 0) {
    uVar1 = FUN_144a800f8();
    plVar2 = (longlong *)FUN_144718840(param_2,uVar1);
    if (plVar2 != (longlong *)0x0) {
      lVar3 = FUN_1489adc74(param_1);
      if (lVar3 != 0) {
        local_1e0[0] = 0;
        local_1dc = 0;
        local_1d8 = 0;
        local_1d0 = 0x10;
        local_1c8 = 0;
        FUN_14070e804();
        local_48 = 0;
        local_40 = 0;
        local_60 = (code *)0x0;
        uStack_58 = 0;
        uStack_54 = 0;
        uStack_50 = 0;
        FUN_14070e270(local_1e0,lVar3 + 0x18);
        (**(code **)(*param_1 + 0x30))(param_1,local_1e0);
        FUN_141068c44(param_1,&local_1f0);
        uStack_58 = local_1e8;
        local_60 = local_1f0;
        local_1f0 = FUN_1489ade42;
        local_1e8 = 0;
        FUN_1489adcc2(&local_48,param_1,&local_1f0);
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110) < DAT_14cb8d740) {
          FUN_144b3d300(&DAT_14cb8d740);
          if (DAT_14cb8d740 == -1) {
            FUN_1446ddc76(&DAT_14cb8d738,"MissionObjective",1);
            _Init_thread_footer(&DAT_14cb8d740);
          }
        }
        uStack_54 = (undefined4)DAT_14cb8d738;
        uStack_50 = (undefined4)((ulonglong)DAT_14cb8d738 >> 0x20);
        uVar1 = (**(code **)(*plVar2 + 0x40))(plVar2);
        FUN_14070dfbe(uVar1,&local_1f0,local_1e0,1);
        *(undefined4 *)(param_1 + 0xc) = local_1f0._0_4_;
        FUN_1404967de(local_1e0);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489adc74 FUN_1489adc74 body=78 status=ok
// SIG undefined FUN_1489adc74(void)

longlong * FUN_1489adc74(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_1464bc38a();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
          lVar3 + 0x30) {
        return (longlong *)0x0;
      }
      return plVar1;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 1489adcc2 FUN_1489adcc2 body=384 status=ok
// SIG undefined FUN_1489adcc2(void)

void FUN_1489adcc2(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_1489addd5:
    *puVar5 = &PTR_LAB_14b3e9b40;
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
    *puVar5 = &PTR_FUN_14b434080;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1489addd5;
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
    *puVar5 = &PTR_LAB_14b3e9b40;
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
    *puVar5 = &PTR_FUN_14b434080;
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
                    /* WARNING: Could not recover jumptable at 0x0001489addd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1489ade42 FUN_1489ade42 body=160 status=ok
// SIG undefined FUN_1489ade42(void)

void FUN_1489ade42(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *param_2;
  if (lVar3 != 0) {
    lVar1 = FUN_144a6c4d8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_1489ade84;
  }
  lVar3 = 0;
LAB_1489ade84:
  uVar2 = FUN_1410d0064();
  local_28 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1460028be(uVar2,lVar3);
  FUN_140170a76(param_1,&DAT_14cb8dce0);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489adee6 FUN_1489adee6 body=76 status=ok
// SIG undefined FUN_1489adee6(void)

void FUN_1489adee6(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    uVar2 = FUN_144a800f8();
    plVar3 = (longlong *)FUN_144718840(param_2,uVar2);
    if (plVar3 != (longlong *)0x0) {
      uVar1 = *(undefined4 *)(param_1 + 0x60);
      uVar2 = (**(code **)(*plVar3 + 0x40))(plVar3);
      FUN_14573d240(uVar2,uVar1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1489adf32 FUN_1489adf32 body=9 status=ok
// SIG undefined FUN_1489adf32(void)

void FUN_1489adf32(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x464) = param_2;
  return;
}



// FUNCTION 1489adf3c FUN_1489adf3c body=7 status=ok
// SIG undefined FUN_1489adf3c(void)

void FUN_1489adf3c(longlong param_1,uint param_2)

{
  *(uint *)(param_1 + 0x228) = *(uint *)(param_1 + 0x228) | param_2;
  return;
}



// FUNCTION 1489adf7c FUN_1489adf7c body=40 status=ok
// SIG undefined FUN_1489adf7c(void)

undefined8 FUN_1489adf7c(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14107dcc2(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 1489adfda FUN_1489adfda body=376 status=ok
// SIG undefined FUN_1489adfda(void)

void FUN_1489adfda(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  byte *pbVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  FUN_144837e54(param_2,0);
  if (*(longlong *)(param_2 + 0x30) == 0) {
    puVar6 = (undefined8 *)FUN_14889016e(&DAT_14cb8d790);
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_FUN_14b3d99d0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    FUN_1407d81c6(param_1,param_2);
  }
  if (*(int *)(param_2 + 0x40) != *(int *)(param_2 + 0x44)) {
    lVar3 = *(longlong *)(param_2 + 0x30);
    if (lVar3 != 0) {
      plVar1 = (longlong *)(lVar3 + 0x18);
      FUN_14063ab1b(*(undefined8 *)(lVar3 + 0x18),*(undefined4 *)(lVar3 + 0x20));
      *(undefined4 *)(lVar3 + 0x20) = 0;
      if (*(int *)(lVar3 + 0x24) != 0) {
        FUN_1489b243e(plVar1);
      }
      if (*(longlong *)(param_2 + 0x48) == 0) {
        puVar6 = &DAT_14c9a1308;
      }
      else {
        puVar6 = (undefined8 *)FUN_1446e60f4(*(longlong *)(param_2 + 0x48),&DAT_14cb8d768);
      }
      pbVar4 = (byte *)*puVar6;
      plVar7 = &DAT_14c9a1270;
      if ((pbVar4 != (byte *)0x0) && ((*pbVar4 & 2) != 0)) {
        plVar7 = *(longlong **)(pbVar4 + 8);
      }
      if ((longlong)(int)plVar7[2] != 0) {
        lVar9 = *plVar7;
        lVar10 = (longlong)(int)plVar7[2] << 4;
        do {
          iVar2 = *(int *)(lVar3 + 0x20);
          *(uint *)(lVar3 + 0x20) = iVar2 + 1U;
          if (*(uint *)(lVar3 + 0x24) < iVar2 + 1U) {
            FUN_1489b246e(plVar1,iVar2);
          }
          lVar5 = *plVar1;
          lVar11 = lVar5 + (longlong)iVar2 * 0x2e8;
          FUN_140d943f0(lVar11);
          uVar8 = (**(code **)(*(longlong *)(lVar5 + (longlong)iVar2 * 0x2e8) + 8))(lVar11);
          FUN_1402057ac(lVar9,lVar11,uVar8,0);
          FUN_1400bc0d4(lVar11,lVar9);
          lVar9 = lVar9 + 0x10;
          lVar10 = lVar10 + -0x10;
        } while (lVar10 != 0);
      }
    }
    *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_2 + 0x44);
  }
  return;
}



// FUNCTION 1489ae180 FUN_1489ae180 body=190 status=ok
// SIG undefined FUN_1489ae180(void)

undefined8 * FUN_1489ae180(undefined8 *param_1,longlong *param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  pbVar1 = (byte *)*param_2;
  if ((pbVar1 != (byte *)0x0) && ((*pbVar1 & 3) != 0)) {
    uVar2 = FUN_1408db3b0(pbVar1,"statemachine");
    local_30 = 0;
    FUN_1400bc2c2(uVar2,&local_28);
    *param_1 = local_28;
    if (*param_2 == 0) {
      puVar3 = &DAT_14c9a1308;
    }
    else {
      puVar3 = (undefined8 *)FUN_1408db3b0(*param_2,"state");
    }
    local_30 = 0;
    FUN_1400bc2c2(puVar3,&local_28);
    param_1[1] = local_28;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489ae240 FUN_1489ae240 body=252 status=ok
// SIG undefined FUN_1489ae240(void)

undefined8 FUN_1489ae240(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  byte *pbVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  pbVar3 = (byte *)*param_2;
  if ((pbVar3 != (byte *)0x0) && ((~*pbVar3 & 3) == 0)) {
    puVar5 = (undefined8 *)FUN_1408db3b0(pbVar3,"costrequirements");
    pbVar3 = (byte *)*puVar5;
    plVar4 = (longlong *)puVar5[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if ((pbVar3 != (byte *)0x0) && ((*pbVar3 & 3) != 0)) {
      if ((*pbVar3 & 2) == 0) {
        puVar5 = &DAT_14c9a1288;
      }
      else {
        puVar5 = (undefined8 *)(*(longlong *)(pbVar3 + 8) + 0x18);
      }
      FUN_1446f470e(local_58,L"CostSource",1);
      FUN_1446dcdd4(local_50,local_58);
      FUN_14045886c(puVar5,local_50);
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
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
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489ae33d FUN_1489ae33d body=491 status=ok
// SIG undefined FUN_1489ae33d(void)

undefined8 FUN_1489ae33d(undefined8 param_1,longlong param_2,longlong *param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_118 [32];
  undefined8 **local_f8;
  undefined8 *local_e8;
  undefined4 local_e0;
  undefined1 local_d8 [32];
  longlong local_b8;
  longlong *local_a8;
  longlong local_98 [4];
  longlong local_78;
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_3 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*param_3 + 0x180))(param_3);
  }
  uVar4 = 0;
  lVar3 = FUN_140149a73(uVar2,0);
  if (lVar3 != 0) {
    if ((longlong)*(int *)(param_2 + 0x30) != 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      lVar6 = (longlong)*(int *)(param_2 + 0x30) << 4;
      do {
        uVar2 = FUN_148844d56(lVar5);
        cVar1 = FUN_140251310(param_1,uVar2);
        if ((cVar1 != '\0') && (cVar1 = FUN_1414c623e(lVar5), cVar1 != '\0')) {
          cVar1 = FUN_140a262da(lVar5);
          goto joined_r0x0001489ae4dd;
        }
        lVar5 = lVar5 + 0x10;
        lVar6 = lVar6 + -0x10;
      } while (lVar6 != 0);
    }
    uVar2 = FUN_1489ae52a(param_2 + 0x28);
    local_e8 = (undefined8 *)0x0;
    local_e0 = 0;
    FUN_1446efa72(&local_e8,0,2,0x10);
    local_e0 = 2;
    *local_e8 = &PTR_LAB_149e020b0;
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
    local_e8[2] = lVar6;
    *local_e8 = &PTR_FUN_14b4340f0;
    memset(local_d8,0,0xa0);
    local_f8 = &local_e8;
    FUN_140d841ec(uVar2,param_1,lVar3,local_d8);
    if (local_78 != 0) {
      if (local_68 == (longlong *)0x0) {
        local_68 = local_58;
      }
      (**(code **)(*local_68 + 0x10))();
    }
    if (local_b8 != 0) {
      if (local_a8 == (longlong *)0x0) {
        local_a8 = local_98;
      }
      (**(code **)(*local_a8 + 0x10))();
    }
    cVar1 = FUN_140a262da(uVar2);
    FUN_1449db362(&local_e8);
joined_r0x0001489ae4dd:
    if (cVar1 == '\0') {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1489ae52a FUN_1489ae52a body=59 status=ok
// SIG undefined FUN_1489ae52a(void)

longlong FUN_1489ae52a(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146557282(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x10 + *param_1;
  FUN_1489b2505(lVar2);
  return lVar2;
}



// FUNCTION 1489ae566 FUN_1489ae566 body=129 status=ok
// SIG undefined FUN_1489ae566(void)

void FUN_1489ae566(undefined8 *param_1)

{
  (**(code **)*param_1)();
  memset(param_1 + 1,0,0xb8);
  *param_1 = &PTR_FUN_14b023840;
  *(undefined1 *)((longlong)param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[4] = &PTR_FUN_14b023870;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x62) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0xe] = &PTR_FUN_14b023870;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xaa) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb2) = 0;
  return;
}



// FUNCTION 1489ae5e8 FUN_1489ae5e8 body=263 status=ok
// SIG undefined FUN_1489ae5e8(void)

undefined8 FUN_1489ae5e8(undefined8 param_1,undefined8 *param_2)

{
  byte *pbVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  pbVar1 = (byte *)*param_2;
  if ((pbVar1 != (byte *)0x0) && ((~*pbVar1 & 3) == 0)) {
    lVar2 = *(longlong *)(pbVar1 + 8);
    FUN_1446ddc76(local_58,"conditionamount",1);
    FUN_1446dcdd4(local_50,local_58);
    FUN_14045886c(lVar2 + 0x18,local_50);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    pbVar1 = (byte *)*param_2;
    puVar3 = &DAT_14c9a1288;
    if ((pbVar1 != (byte *)0x0) && ((*pbVar1 & 2) != 0)) {
      puVar3 = (undefined8 *)(*(longlong *)(pbVar1 + 8) + 0x18);
    }
    FUN_1446ddc76(local_58,"conditionattribute",1);
    FUN_1446dcdd4(local_50,local_58);
    FUN_14045886c(puVar3,local_50);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489ae6f0 FUN_1489ae6f0 body=78 status=ok
// SIG undefined FUN_1489ae6f0(void)

void FUN_1489ae6f0(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_14b3e4af0;
  FUN_144a5dc74(param_1 + 3);
  param_1[5] = DAT_14caa8578;
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}



// FUNCTION 1489ae776 FUN_1489ae776 body=40 status=ok
// SIG undefined FUN_1489ae776(void)

undefined8 FUN_1489ae776(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140de970a(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 1489ae7a6 FUN_1489ae7a6 body=32 status=ok
// SIG undefined FUN_1489ae7a6(void)

bool FUN_1489ae7a6(longlong param_1,char param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(param_1 + 0x458);
  if (param_2 == '\0') {
    puVar1 = (uint *)(param_1 + 0x228);
  }
  return (*puVar1 & 3) == 1;
}



// FUNCTION 1489ae7c6 FUN_1489ae7c6 body=32 status=ok
// SIG undefined FUN_1489ae7c6(void)

bool FUN_1489ae7c6(longlong param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if ((*(uint *)(param_1 + 0x228) & 3) != 1) {
    bVar1 = (*(uint *)(param_1 + 0x458) & 3) == 1;
  }
  return bVar1;
}



// FUNCTION 1489ae7e6 FUN_1489ae7e6 body=105 status=ok
// SIG undefined FUN_1489ae7e6(void)

ulonglong FUN_1489ae7e6(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 *puVar2;
  
  cVar1 = *(char *)(param_2 + 0x10);
  if (cVar1 == '\x02') {
    if (*(char *)(param_1 + 0x488) != '\0') goto LAB_1489ae81e;
    if (*(char *)(param_1 + 0x908) != '\x01') {
      return 0;
    }
  }
  else {
    if (cVar1 != '\x01') {
      if (cVar1 != '\0') {
        return 0;
      }
      if (*(char *)(param_1 + 0x488) == '\0') {
        return 0;
      }
LAB_1489ae81e:
      param_1 = param_1 + 0x10;
      goto LAB_1489ae822;
    }
    if (*(char *)(param_1 + 0x908) == '\0') {
      return 0;
    }
  }
  param_1 = param_1 + 0x490;
LAB_1489ae822:
  if (param_1 == 0) {
    return 0;
  }
  puVar2 = (undefined1 *)(param_1 + 0x458);
  if (*(char *)(param_2 + 0x11) == '\0') {
    puVar2 = (undefined1 *)(param_1 + 0x228);
  }
  return CONCAT71((int7)((ulonglong)(param_1 + 0x228) >> 8),*puVar2) & 0xffffffffffffff01;
}



// FUNCTION 1489ae850 FUN_1489ae850 body=317 status=ok
// SIG undefined FUN_1489ae850(void)

undefined4 FUN_1489ae850(undefined8 param_1,char param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_978 [40];
  undefined8 local_950;
  undefined1 local_948;
  undefined1 local_940 [16];
  undefined1 local_930 [552];
  uint local_708;
  uint local_4d8;
  char local_4b8;
  undefined1 local_4b0 [552];
  uint local_288;
  uint local_58;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_978;
  FUN_144a44f9a(local_940,param_1);
  local_4b8 = '\0';
  local_38 = '\0';
  local_950 = 0;
  local_948 = 0;
  FUN_140931e3c(param_1,&local_950,local_940);
  if (((local_4b8 != '\x01') || (((local_708 & 3) != 1 && ((local_4d8 & 3) != 1)))) &&
     ((uVar2 = 0, local_38 != '\x01' || (((local_288 & 3) != 1 && ((local_58 & 3) != 1))))))
  goto LAB_1489ae948;
  uVar2 = 0;
  if (param_2 == '\x02') {
    if (local_4b8 != '\0') goto LAB_1489ae936;
    if (local_38 != '\x01') goto LAB_1489ae948;
LAB_1489ae928:
    puVar1 = local_4b0;
  }
  else {
    if (param_2 == '\x01') {
      if (local_38 == '\0') goto LAB_1489ae948;
      goto LAB_1489ae928;
    }
    if ((param_2 != '\0') || (local_4b8 == '\0')) goto LAB_1489ae948;
LAB_1489ae936:
    puVar1 = local_930;
  }
  if (puVar1 != (undefined1 *)0x0) {
    uVar2 = *(undefined4 *)(puVar1 + 0x464);
  }
LAB_1489ae948:
  FUN_14023c33c(local_940);
  if ((local_30 ^ (ulonglong)auStack_978) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1489ae990 FUN_1489ae990 body=102 status=ok
// SIG undefined FUN_1489ae990(void)

void FUN_1489ae990(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_14080eed4();
  if (lVar1 != 0) {
    local_1c = 0;
    local_28 = 0xffffffff;
    local_30 = param_2;
    FUN_141094e00(lVar1,&local_30,param_3);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489ae9f8 FUN_1489ae9f8 body=191 status=ok
// SIG undefined FUN_1489ae9f8(void)

undefined8 FUN_1489ae9f8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  uVar3 = 0;
  if (param_2 != 0 && *(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
    uVar3 = 0;
    if (lVar1 != 0) {
      lVar2 = FUN_144a6c4d8();
      uVar3 = 0;
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (uVar3 = 0,
         *(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         == lVar2 + 0x30)) {
        uVar3 = FUN_140566488();
        plVar4 = (longlong *)FUN_144718840(lVar1,uVar3);
        uVar3 = 0;
        if (plVar4 != (longlong *)0x0) {
          lVar1 = (**(code **)(*plVar4 + 0x20))(plVar4);
          uVar3 = 0;
          if (lVar1 != 0) {
            uVar3 = FUN_145784846(lVar1,&local_28);
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489aeab8 FUN_1489aeab8 body=207 status=ok
// SIG undefined FUN_1489aeab8(void)

undefined8 FUN_1489aeab8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = param_2;
  uVar3 = 0;
  if (param_2 != 0 && *(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
    uVar3 = 0;
    if (lVar1 != 0) {
      lVar2 = FUN_144a6c4d8();
      uVar3 = 0;
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (uVar3 = 0,
         *(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         == lVar2 + 0x30)) {
        uVar3 = FUN_140566488();
        plVar4 = (longlong *)FUN_144718840(lVar1,uVar3);
        uVar3 = 0;
        if (plVar4 != (longlong *)0x0) {
          lVar1 = (**(code **)(*plVar4 + 0x20))(plVar4);
          uVar3 = 0;
          if (lVar1 != 0) {
            local_30 = 0;
            uVar3 = FUN_14654fd22(lVar1,&local_28);
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489aeb88 FUN_1489aeb88 body=200 status=ok
// SIG undefined FUN_1489aeb88(void)

ulonglong FUN_1489aeb88(longlong param_1,longlong param_2)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uVar7;
  
  if ((param_2 != 0 && *(longlong *)(param_1 + 0x10) != 0) &&
     (plVar4 = (longlong *)FUN_14080eed4(), plVar4 != (longlong *)0x0)) {
    iVar2 = (int)plVar4[1];
    if ((longlong)iVar2 != 0) {
      lVar3 = *plVar4;
      lVar5 = 0;
      do {
        if (*(longlong *)(lVar3 + 0x68 + lVar5) == param_2) {
          uVar6 = (int)(lVar5 >> 3) * -0xf0f0f0f;
          if ((int)uVar6 < 0) {
            return 0;
          }
          if (iVar2 <= (int)uVar6) {
            return 0;
          }
          uVar7 = FUN_1406400be(plVar4);
          fVar1 = *(float *)(lVar3 + 0x84 + (ulonglong)(uVar6 & 0x7fffffff) * 0x88);
          uVar6 = -(uint)(fVar1 < 0.0);
          return (ulonglong)(uVar6 & 0x7f7fffff) |
                 CONCAT44((int)((ulonglong)uVar7 >> 0x20),~uVar6 & (uint)((float)uVar7 - fVar1));
        }
        lVar5 = lVar5 + 0x88;
      } while ((longlong)iVar2 * 0x88 != lVar5);
    }
  }
  return 0;
}



// FUNCTION 1489aec50 FUN_1489aec50 body=269 status=ok
// SIG undefined FUN_1489aec50(void)

void FUN_1489aec50(longlong param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  void *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar4 = 0xe0;
    if ((char)param_2 == '\0') {
      lVar4 = 200;
    }
    lVar4 = lVar4 + param_1;
    if (lVar4 != 0) {
      local_50 = (void *)0x0;
      local_48 = *(int *)(lVar4 + 0x10);
      lVar5 = (longlong)local_48;
      pvVar2 = *(void **)(lVar4 + 8);
      if (lVar5 != 0) {
        FUN_1489b276c(&local_50,local_48);
        memcpy(local_50,pvVar2,lVar5 << 4);
        pvVar2 = local_50;
        lVar4 = (longlong)local_48;
        if (lVar4 != 0) {
          lVar5 = 0;
          do {
            puVar1 = (undefined4 *)((longlong)pvVar2 + lVar5);
            local_68 = *puVar1;
            uStack_64 = puVar1[1];
            uStack_60 = (undefined4)*(longlong *)(puVar1 + 2);
            uStack_5c = puVar1[3];
            lVar6 = *(longlong *)(puVar1 + 2);
            if ((lVar6 == 0) || (cVar3 = FUN_144729dda(&local_68), cVar3 == '\0')) {
              lVar6 = 0;
            }
            FUN_1458ddd08(param_1,lVar6,param_2);
            lVar5 = lVar5 + 0x10;
          } while (lVar4 * 0x10 != lVar5);
        }
        if (local_50 != (void *)0x0) {
          FUN_1400020a8(local_50);
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489aed5e FUN_1489aed5e body=51 status=ok
// SIG undefined FUN_1489aed5e(void)

byte FUN_1489aed5e(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x50))();
  if (*(longlong *)(lVar2 + 8) == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = FUN_144729dda(lVar2);
    bVar1 = *(longlong *)(lVar2 + 8) != 0 & bVar1;
  }
  return bVar1;
}



// FUNCTION 1489aed92 FUN_1489aed92 body=59 status=ok
// SIG undefined FUN_1489aed92(void)

bool FUN_1489aed92(undefined8 param_1,byte param_2)

{
  bool bVar1;
  longlong lVar2;
  
  lVar2 = FUN_140c84c00();
  if (param_2 < 2 && lVar2 != 0) {
    bVar1 = 0.0 <= *(float *)(lVar2 + 0x948 + (ulonglong)param_2 * 8);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



// FUNCTION 1489aedce FUN_1489aedce body=141 status=ok
// SIG undefined FUN_1489aedce(void)

void FUN_1489aedce(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_14b433848;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(undefined1 *)(param_1 + 0x124) = 0;
  param_1[0x125] = 0;
  *(undefined4 *)(param_1 + 0x126) = 0;
  *(undefined1 *)((longlong)param_1 + 0x934) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[0x127] = 0;
  param_1[0x128] = 0;
  *(undefined4 *)(param_1 + 0x129) = 0xbf800000;
  *(undefined1 *)((longlong)param_1 + 0x94c) = 0;
  *(undefined4 *)(param_1 + 0x12a) = 0xbf800000;
  *(undefined1 *)((longlong)param_1 + 0x954) = 0;
  *(undefined4 *)(param_1 + 299) = 0;
  param_1[0x13c] = 0;
  param_1[0x13d] = 0x1000000000;
  param_1[0x13e] = 0;
  param_1[0x13f] = 0;
  param_1[0x140] = 0;
  return;
}



// FUNCTION 1489aee5c FUN_1489aee5c body=160 status=ok
// SIG undefined FUN_1489aee5c(void)

undefined8 FUN_1489aee5c(longlong param_1,undefined8 param_2)

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
  FUN_140002266(param_2,L"%ls::FUsableManager",puVar2);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1489aef0c FUN_1489aef0c body=266 status=ok
// SIG undefined FUN_1489aef0c(void)

void FUN_1489aef0c(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 0x1b90) != *(int *)(param_1 + 0x1bb4)) {
    uVar3 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    lVar5 = param_1 + 0x1bb8;
    if (*(longlong *)(param_1 + 0x1bc0) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x1bc0);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x1bc8) - 1U & (uVar3 >> 0x10 ^ uVar3))
                             * 4);
    if (iVar4 != -1) {
      lVar5 = param_1 + 0x1b28;
      if (*(longlong *)(param_1 + 0x1b88) != 0) {
        lVar5 = *(longlong *)(param_1 + 0x1b88);
      }
      do {
        puVar1 = (ulonglong *)(lVar5 + (longlong)iVar4 * 0x18);
        if (*puVar1 == param_2) {
          if (puVar1 + 1 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) {
            uVar2 = puVar1[1];
            FUN_144a44f9a(&local_28,param_3);
            *(undefined4 *)(uVar2 + 0x938) = local_28;
            *(undefined4 *)(uVar2 + 0x93c) = uStack_24;
            *(undefined4 *)(uVar2 + 0x940) = uStack_20;
            *(undefined4 *)(uVar2 + 0x944) = uStack_1c;
          }
          break;
        }
        iVar4 = (int)puVar1[2];
      } while (iVar4 != -1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489af018 FUN_1489af018 body=16 status=ok
// SIG undefined FUN_1489af018(void)

undefined8 * FUN_1489af018(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  return param_1;
}



// FUNCTION 1489af028 FUN_1489af028 body=84 status=ok
// SIG undefined FUN_1489af028(void)

longlong * FUN_1489af028(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 2;
  if (param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_2 + 0x18))(param_2);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *param_1 = lVar1;
    param_1[1] = (longlong)param_2;
  }
  return param_1;
}



// FUNCTION 1489af07c FUN_1489af07c body=408 status=ok
// SIG undefined FUN_1489af07c(void)

void FUN_1489af07c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  byte *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_145ae5ad4();
  local_60 = 0;
  local_50 = 0;
  uVar4 = FUN_144a8232a(&DAT_14cb8dd60);
  FUN_14131b4b0(&local_48,uVar4,&local_50,&local_60);
  if ((local_48 == (byte *)0x0) || ((*local_48 & 0x6b) != 3)) {
    FUN_14009b010(&local_48,3,0);
  }
  else {
    local_68 = 0;
    FUN_1401412e0(&local_48,&local_60,1,0);
    FUN_1446dcc2e(&local_48,&local_60);
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_58 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar2 = (int *)((longlong)local_58 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_58 + 0x10))(local_58);
        }
      }
    }
  }
  FUN_1458e8c12(param_1,param_2,&local_48,1);
  iVar3 = *(int *)(param_1 + 0x178);
  if ((longlong)iVar3 != 0) {
    lVar5 = 0;
    do {
      FUN_14131a58a();
      lVar5 = lVar5 + 0x10;
    } while ((longlong)iVar3 * 0x10 != lVar5);
    FUN_1458e8cea(param_1,param_2,0);
  }
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar4 = 0;
  }
  FUN_141683dd2(uVar4,param_2,param_1,0xffffffff);
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
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489af216 FUN_1489af216 body=299 status=ok
// SIG undefined FUN_1489af216(void)

void FUN_1489af216(longlong param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar5 = *param_2;
  if (param_3 + 1 < *(int *)(lVar5 + 0x1f8)) {
    lVar6 = (longlong)param_3;
    lVar3 = *(longlong *)(lVar5 + 0x1f0);
    uVar7 = lVar6 + 1;
    lVar8 = lVar6 * 0x70 + 0xd8;
    lVar9 = lVar6 * 0x50 + 0x5c;
    do {
      if (*(longlong *)(*(longlong *)(lVar5 + 0x1f0) + lVar9) == *(longlong *)(lVar3 + lVar6 * 0x50)
         ) {
        lVar5 = *(longlong *)(param_1 + 0x78);
        *(undefined8 *)(lVar5 + -0x68 + lVar8) = 0;
        plVar4 = *(longlong **)(lVar5 + -0x60 + lVar8);
        if (plVar4 != (longlong *)0x0) {
          *(undefined8 *)(lVar5 + -0x60 + lVar8) = 0;
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
        plVar4 = (longlong *)(lVar5 + lVar8);
        FUN_1447715ec(plVar4 + -0xb,&DAT_14c9485f0);
        plVar4[-1] = 0;
        plVar4 = (longlong *)*plVar4;
        if (plVar4 != (longlong *)0x0) {
          *(undefined8 *)(lVar5 + lVar8) = 0;
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
        FUN_1489af216(param_1,param_2,uVar7 & 0xffffffff);
        lVar5 = *param_2;
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x70;
      lVar9 = lVar9 + 0x50;
    } while ((longlong)uVar7 < (longlong)*(int *)(lVar5 + 0x1f8));
  }
  return;
}



// FUNCTION 1489af342 FUN_1489af342 body=522 status=ok
// SIG undefined FUN_1489af342(void)

void FUN_1489af342(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [8];
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [40];
  undefined8 local_98;
  undefined1 local_90 [40];
  undefined8 local_68;
  undefined1 local_60 [24];
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_68 = param_2;
  FUN_1447a97f4(local_60,param_3);
  local_98 = local_68;
  FUN_1447a97f4(local_90,local_60);
  plVar3 = (longlong *)FUN_143e61a3a(param_1 + 0x270,&local_98);
  if (plVar3 == (longlong *)0x0) {
    local_c8 = local_68;
    FUN_1447a97f4(local_c0,local_60);
    plVar3 = (longlong *)FUN_143e61a3a(param_1 + 0x260,&local_c8);
    if (plVar3 != (longlong *)0x0) goto LAB_1489af3b5;
  }
  else {
LAB_1489af3b5:
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 != (undefined8 *)0x0) goto LAB_1489af3c1;
  }
  puVar4 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  iVar1 = *(int *)(param_1 + 0x25c);
  *(int *)(param_1 + 0x25c) = iVar1 + 1;
  *puVar4 = &PTR_FUN_14b433f68;
  *(int *)(puVar4 + 1) = iVar1;
  *(undefined8 *)((longlong)puVar4 + 0xc) = 0;
  FUN_14485c47a((longlong)puVar4 + 0xc,param_2);
  FUN_1447a97f4(puVar4 + 3,param_3);
  *(undefined1 *)(puVar4 + 8) = 3;
  *puVar4 = &PTR_FUN_14b434008;
  puVar4[9] = 0;
  puVar4[10] = 0;
  puVar4[0xb] = 2;
  iVar1 = *(int *)(param_1 + 0x268);
  *(uint *)(param_1 + 0x268) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x26c) < iVar1 + 1U) {
    FUN_145840b16((longlong *)(param_1 + 0x260),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x260) + (longlong)iVar1 * 8) = puVar4;
LAB_1489af3c1:
  if ((longlong *)*param_4 != (longlong *)0x0 && (int)param_4[1] != 0) {
    cVar2 = (**(code **)(*(longlong *)*param_4 + 0x30))();
    if (cVar2 != '\0') {
      local_d8 = 0;
      local_d0 = 0;
      FUN_1461bf8dc(&local_d8,param_4);
      FUN_1461bf95a(puVar4 + 9,local_e0,&local_d8);
      FUN_1449db362(&local_d8);
    }
  }
  FUN_140f1049c(param_1);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489af54e FUN_1489af54e body=113 status=ok
// SIG undefined FUN_1489af54e(void)

undefined8 *
FUN_1489af54e(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_14001cc68(0x88,0x10);
  FUN_14128c032(uVar1,param_3,param_4);
  *param_2 = uVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14b434780;
  puVar2[2] = uVar1;
  param_2[1] = puVar2;
  return param_2;
}



// FUNCTION 1489af5c0 FUN_1489af5c0 body=185 status=ok
// SIG undefined FUN_1489af5c0(void)

undefined8 * FUN_1489af5c0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  char cVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar1 != '\0') {
      local_40 = 0;
      local_38 = 0;
      FUN_1489b360c(&local_40,param_3);
      FUN_1489b3524(param_1 + 0x180,&local_48,&local_40);
      FUN_1449db362(&local_40);
      *param_2 = local_48;
    }
  }
  FUN_1449db362(param_3);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489af67a FUN_1489af67a body=114 status=ok
// SIG undefined FUN_1489af67a(void)

void FUN_1489af67a(longlong param_1,longlong *param_2,int *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x178) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x170);
    lVar3 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar3);
      if ((((*(int *)(lVar2 + 0x5c) == *param_3) && (*(int *)(lVar2 + 0x60) == param_3[1])) &&
          (*(int *)(lVar2 + 100) == param_3[2])) && (*(int *)(lVar2 + 0x68) == param_3[3])) {
        *param_2 = lVar2;
        lVar1 = *(longlong *)(lVar1 + 8 + lVar3);
        param_2[1] = lVar1;
        if (lVar1 == 0) {
          return;
        }
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
        return;
      }
      lVar3 = lVar3 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x178) * 0x10 != lVar3);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



// FUNCTION 1489af6ec FUN_1489af6ec body=192 status=ok
// SIG undefined FUN_1489af6ec(void)

undefined8 FUN_1489af6ec(undefined8 param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145d632de(param_1,&local_40);
  puVar2 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar2 = local_40;
  }
  FUN_145ac2604(local_58);
  FUN_1400021e4(local_58,&local_50);
  puVar1 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar1 = local_50;
  }
  FUN_140002266(param_2,L"%s: %s",puVar1,puVar2);
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489af7ae FUN_1489af7ae body=150 status=ok
// SIG undefined FUN_1489af7ae(void)

undefined8 FUN_1489af7ae(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_14485c47a(&local_28);
  local_20 = local_28;
  iVar2 = FUN_1489b3690((longlong *)(param_1 + 0x70),
                        (uint)((ulonglong)local_28 >> 0x20) ^ (uint)local_28);
  if (iVar2 != -1) {
    lVar1 = *(longlong *)(param_1 + 0x70);
    lVar3 = (longlong)iVar2 * 0x30;
    if ((lVar1 + lVar3 + 8U & 0xfffffffffffffff7) != 0) {
      uVar4 = CONCAT71((int7)((ulonglong)lVar3 >> 8),*(undefined1 *)(lVar1 + lVar3 + 0x20));
      goto LAB_1489af827;
    }
  }
  uVar4 = 0;
LAB_1489af827:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489af846 FUN_1489af846 body=134 status=ok
// SIG undefined FUN_1489af846(void)

void FUN_1489af846(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 0x31) & 0x10) == 0) {
    local_30 = 0;
    FUN_14485c47a(&local_30);
    lVar1 = FUN_145d6a70c(param_1 + 0x70,(uint)((ulonglong)local_30 >> 0x20) ^ (uint)local_30,
                          &local_30);
    if (*(char *)(lVar1 + 0x18) == '\0') {
      FUN_14656324a(param_1,param_2);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489af8d4 FUN_1489af8d4 body=141 status=ok
// SIG undefined FUN_1489af8d4(void)

ulonglong FUN_1489af8d4(short *param_1,longlong *param_2)

{
  ushort uVar1;
  longlong lVar2;
  short sVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  longlong lVar5;
  
  sVar3 = *param_1;
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (0 < sVar3) {
    lVar5 = 0;
    do {
      uVar1 = *(ushort *)(*(longlong *)(param_1 + 4) + lVar5 * 2);
      if ((-1 < (short)uVar1) && ((int)(short)uVar1 < *(int *)(*param_2 + 200))) {
        lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0xc0) + (ulonglong)uVar1 * 8);
        if ((DAT_14c950c29 == '\x01') && (lVar2 != 0)) {
          FUN_1456cec3c(lVar2);
        }
        else if (lVar2 == 0) goto LAB_1489af939;
        if (*(char *)(lVar2 + 0xec) != '\x01') {
          uVar4 = 0;
          break;
        }
        sVar3 = *param_1;
      }
LAB_1489af939:
      lVar5 = lVar5 + 1;
    } while (lVar5 < sVar3);
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 1489af962 FUN_1489af962 body=330 status=ok
// SIG undefined FUN_1489af962(void)

undefined8 FUN_1489af962(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar5 = FUN_1489af8d4();
  iVar7 = 0;
  uVar8 = 0;
  uVar4 = local_68;
  if (cVar5 != '\0') {
    plVar1 = (longlong *)(param_1 + 0x18);
    lVar2 = param_1 + 0x28;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    local_50 = lVar2;
    if (*(int *)(param_1 + 0x40) != 0) {
      FUN_1449c0562(&local_58);
      iVar7 = *(int *)(param_1 + 0x40);
    }
    local_68 = local_48;
    uVar4 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_78 = local_58;
    local_70 = local_50;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    uVar8 = 1;
    local_80 = plVar1;
    if ((local_68._4_4_ != iVar7) || (local_50 != lVar2)) {
      iVar6 = local_68._4_4_;
      local_68 = uVar4;
      do {
        lVar3 = *(longlong *)(*local_80 + 8 + (longlong)iVar6 * 0x18);
        if ((lVar3 != 0) && (cVar5 = FUN_1489af8d4(lVar3,param_2), cVar5 == '\0')) {
          uVar8 = 0;
          uVar4 = local_68;
          break;
        }
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar6 = local_68._4_4_;
        uVar4 = local_68;
      } while (local_80 != plVar1 || (local_70 != lVar2 || local_68._4_4_ != iVar7));
    }
  }
  local_68 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 1489afaae FUN_1489afaae body=49 status=ok
// SIG undefined FUN_1489afaae(void)

longlong * FUN_1489afaae(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_145978b04();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 1489afadf FUN_1489afadf body=92 status=ok
// SIG undefined FUN_1489afadf(void)

bool FUN_1489afadf(void)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140056680(&local_28,&DAT_149dfb77a);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1 < local_20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489afb3c FUN_1489afb3c body=63 status=ok
// SIG undefined FUN_1489afb3c(void)

longlong FUN_1489afb3c(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1489b3d68(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x30 + *param_1;
  FUN_1489b3d58(lVar2);
  return lVar2;
}



// FUNCTION 1489afb7c FUN_1489afb7c body=502 status=ok
// SIG undefined FUN_1489afb7c(void)

undefined4 FUN_1489afb7c(longlong param_1,short *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  byte *local_80;
  longlong *local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar6 = 0xffffffff;
  if (-1 < *param_2) {
    local_40 = 0;
    local_48 = 0;
    cVar3 = FUN_145c0e4ba(*(undefined8 *)(param_1 + 0x1b0));
    uVar5 = local_48;
    uVar6 = 0xffffffff;
    if (cVar3 != '\0') {
      local_4c = FUN_140b9fef0(local_48,param_2,0);
      uVar6 = 0xffffffff;
      if (-1 < local_4c) {
        lVar4 = FUN_140b9ffa8(param_1,&local_4c);
        if (lVar4 != 0) {
          local_60 = local_40;
          local_54 = *(undefined4 *)(lVar4 + 0x28);
          local_68 = uVar5;
          local_58 = *(undefined4 *)param_2;
          local_70 = param_1;
          cVar3 = FUN_143e5d0fe(lVar4);
          if (cVar3 == '\0') {
            local_98 = 0;
            local_88 = 0;
            uVar5 = FUN_144a8232a(&DAT_14cb8dd60);
            FUN_14131b4b0(&local_80,uVar5,&local_88,&local_98);
            if ((local_80 != (byte *)0x0) && ((*local_80 & 0x68) == 0 && (*local_80 & 3) != 0)) {
              local_a8 = 0;
              FUN_1401412e0(&local_80,&local_98,1,0);
              FUN_1458e8c12(lVar4,&local_70,&local_98,1);
              if (local_90 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_90 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*local_90)(local_90);
                  LOCK();
                  piVar2 = (int *)((longlong)local_90 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*local_90 + 0x10))(local_90);
                  }
                }
              }
            }
            FUN_141683dd2(param_1,&local_70,lVar4,0xffffffff);
            if (local_78 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_78 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_78)(local_78);
                LOCK();
                piVar2 = (int *)((longlong)local_78 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*local_78 + 0x10))(local_78);
                }
              }
            }
          }
          uVar6 = *(undefined4 *)(lVar4 + 0x28);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489afd74 FUN_1489afd74 body=99 status=ok
// SIG undefined FUN_1489afd74(void)

void FUN_1489afd74(undefined8 param_1,longlong param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined1 auStack_48 [32];
  undefined1 local_28;
  undefined1 local_20;
  undefined2 local_18;
  undefined4 local_14;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    local_10 = 0;
    local_14 = 0;
    local_18 = 0;
    local_20 = param_5;
    local_28 = param_4;
    FUN_1489afdd8();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489afdd8 FUN_1489afdd8 body=973 status=ok
// SIG undefined FUN_1489afdd8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1489afdd8(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 *param_4,
                  byte param_5,byte param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined8 *local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  longlong *plStack_a0;
  byte *local_90;
  longlong *local_88;
  longlong local_80;
  undefined4 local_78;
  longlong local_70;
  longlong *local_68;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d8 = 0;
  FUN_1401412e0(param_2 + 0x68,&local_90,1,0);
  puVar7 = &DAT_14c9a1288;
  if ((local_90 != (byte *)0x0) && ((*local_90 & 2) != 0)) {
    puVar7 = (undefined8 *)(*(longlong *)(local_90 + 8) + 0x18);
  }
  plStack_a0 = (longlong *)CONCAT44(plStack_a0._4_4_,DAT_14cb8db20);
  local_a8 = DAT_14cb8db18;
  FUN_1448075d0(&local_70);
  FUN_14045886c(puVar7,&local_70);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((param_5 | param_6) == 1) {
    lVar3 = *(longlong *)(param_2 + 0x38);
    if ((((lVar3 != 0) && (*(int *)(lVar3 + 0x30) != 0)) && (*(int *)(lVar3 + 0x34) != 0)) &&
       (*(int *)(lVar3 + 0x30) != DAT_14c948000)) {
      plStack_a0 = (longlong *)CONCAT44(plStack_a0._4_4_,DAT_14cb8dd20);
      local_a8 = _DAT_14cb8dd18;
      FUN_1448075d0(&local_70);
      local_d0 = (undefined8 *)FUN_14039d0c8(&local_90,&local_70);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      plStack_a0 = (longlong *)CONCAT44(plStack_a0._4_4_,DAT_14cb8dd20);
      local_a8 = _DAT_14cb8dd18;
      FUN_1448075d0(&local_70,&local_a8);
      uVar5 = FUN_144a06846(param_2 + 0x68,&local_70);
      plVar6 = (longlong *)FUN_144a06846(uVar5,*(longlong *)(param_2 + 0x38) + 0x30);
      local_a8 = *plVar6;
      plStack_a0 = (longlong *)plVar6[1];
      if (plStack_a0 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_a0 + 1) = (int)plStack_a0[1] + 1;
        UNLOCK();
      }
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      if (param_5 != 0) {
        pbVar4 = (byte *)*local_d0;
        puVar7 = &DAT_14c9a1288;
        if ((pbVar4 != (byte *)0x0) && ((*pbVar4 & 2) != 0)) {
          puVar7 = (undefined8 *)(*(longlong *)(pbVar4 + 8) + 0x18);
        }
        FUN_140b14644(puVar7,0);
        local_70 = *(longlong *)(param_2 + 0x38) + 0x30;
        local_68 = &local_a8;
        FUN_140141a0c(puVar7,&local_80,&local_70,0);
      }
      plVar6 = plStack_a0;
      if (plStack_a0 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_a0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_a0)(plStack_a0);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
    }
    if (param_6 != 0) {
      plStack_a0 = (longlong *)CONCAT44(plStack_a0._4_4_,DAT_14cb8dd20);
      local_a8 = _DAT_14cb8dd18;
      FUN_1448075d0(&local_70);
      uVar5 = FUN_144a06846(&local_90,&local_70);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      local_a8 = 0;
      plStack_a0 = (longlong *)0x0;
      FUN_14009b010(&local_a8,3,0);
      local_78 = DAT_14cb8dd20;
      local_80 = _DAT_14cb8dd18;
      FUN_1448075d0(&local_70);
      if (local_a8 != 0) {
        local_d8 = 0;
        FUN_14014191c(local_a8,&local_70,uVar5,0);
      }
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      local_b8 = *param_4;
      uStack_b4 = param_4[1];
      uStack_b0 = param_4[2];
      uStack_ac = param_4[3];
      FUN_140c1c7d8(&local_a8,param_3);
      plVar6 = plStack_a0;
      if (plStack_a0 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_a0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_a0)(plStack_a0);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      goto LAB_1489b011f;
    }
  }
  local_c8 = *param_4;
  uStack_c4 = param_4[1];
  uStack_c0 = param_4[2];
  uStack_bc = param_4[3];
  FUN_140c1c83a(local_90,param_3);
LAB_1489b011f:
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_88 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar2 = (int *)((longlong)local_88 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_88 + 0x10))(local_88);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489b01a6 FUN_1489b01a6 body=99 status=ok
// SIG undefined FUN_1489b01a6(void)

void FUN_1489b01a6(void)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  local_10 = 0xffff;
  lVar1 = FUN_140b9fe48();
  if (lVar1 != 0) {
    FUN_1489af07c(lVar1,&local_28);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489b020a FUN_1489b020a body=616 status=ok
// SIG undefined FUN_1489b020a(void)

undefined8
FUN_1489b020a(longlong param_1,short *param_2,longlong *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((-1 < *param_2) && ((byte *)*param_4 != (byte *)0x0)) && ((*(byte *)*param_4 & 0x6b) == 3)) {
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0xffff;
    lVar6 = FUN_140b9fe48();
    if ((lVar6 != 0) && ((*(char *)(lVar6 + 0x8a) != '\x01' || (*(char *)(lVar6 + 0x8b) == '\x01')))
       ) {
      iVar3 = *(int *)(param_1 + 0x1f8);
      if ((longlong)iVar3 != 0) {
        lVar11 = 0;
        do {
          if (*(longlong *)(*(longlong *)(param_1 + 0x1f0) + lVar11) == *param_3) {
            uVar9 = (int)(lVar11 >> 4) * -0x33333333;
            if ((int)uVar9 < iVar3 && -1 < (int)uVar9) {
              lVar11 = (ulonglong)(uVar9 & 0x7fffffff) * 0x50;
              if ((byte)(*(char *)(*(longlong *)(param_1 + 0x1f0) + 8 + lVar11) - 1U) < 2) {
                lVar10 = (ulonglong)(uVar9 & 0x7fffffff) * 0x70;
                iVar3 = *(int *)(*(longlong *)(lVar6 + 0x78) + 0x10 + lVar10);
                if (iVar3 != 0) {
                  lVar10 = *(longlong *)(lVar6 + 0x78) + lVar10;
                  uVar7 = 0;
                  if ((*(int *)(lVar10 + 0x14) == 0) || (iVar3 == DAT_14c948000))
                  goto LAB_1489b02c8;
                  pcVar4 = (code *)*param_5;
                  plVar8 = param_5 + 4;
                  if ((longlong *)param_5[2] != (longlong *)0x0) {
                    plVar8 = (longlong *)param_5[2];
                  }
                  uVar7 = (**(code **)(*plVar8 + 8))();
                  cVar5 = (*pcVar4)(uVar7,param_4);
                  if (cVar5 != '\0') {
                    lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1f0) + 0x24 + lVar11);
                    if (lVar11 == -1) {
                      plVar8 = (longlong *)(lVar6 + 0x68);
                    }
                    else {
                      plVar8 = (longlong *)(*(longlong *)(lVar6 + 0x78) + 0x60 + lVar11 * 0x70);
                      if (1 < (byte)(*(char *)(*(longlong *)(param_1 + 0x1f0) + 8 + lVar11 * 0x50) -
                                    1U)) {
                        plVar8 = (longlong *)(*(longlong *)(lVar6 + 0x78) + lVar11 * 0x70);
                      }
                    }
                    if (*plVar8 == 0) {
                      plVar8 = &DAT_14c9a1308;
                    }
                    else {
                      plVar8 = (longlong *)FUN_1446e60f4(*plVar8,param_3);
                    }
                    lVar11 = *plVar8;
                    plVar8 = (longlong *)plVar8[1];
                    if (plVar8 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
                      UNLOCK();
                    }
                    if (lVar11 != 0) {
                      local_78 = 0;
                      FUN_14014191c(lVar11,lVar10 + 0x10,param_4,0);
                    }
                    FUN_1458e8cea(lVar6,&local_68,0);
                    FUN_141683dd2(param_1,&local_68,lVar6,0xffffffff);
                    uVar7 = 1;
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
                    goto LAB_1489b02c8;
                  }
                }
              }
            }
            break;
          }
          lVar11 = lVar11 + 0x50;
        } while ((longlong)iVar3 * 0x50 != lVar11);
      }
    }
  }
  uVar7 = 0;
LAB_1489b02c8:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489b0474 FUN_1489b0474 body=298 status=ok
// SIG undefined FUN_1489b0474(void)

void FUN_1489b0474(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
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
  if (*param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x160);
    lVar2 = param_1 + 0x170;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = lVar2;
    if (*(int *)(param_1 + 0x188) == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = *(int *)(param_1 + 0x188);
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar4 = local_60;
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar5 = local_60._4_4_;
    local_78 = plVar1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar4, uStack_48 != lVar2)) {
      do {
        local_60 = uVar4;
        lVar3 = *(longlong *)(*local_78 + 8 + (longlong)iVar5 * 0x18);
        if (lVar3 != 0) {
          FUN_1489b402e(lVar3 + 0xa8,param_2);
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar5 = local_60._4_4_;
        uVar4 = local_60;
      } while (local_78 != plVar1 ||
               (CONCAT44(uStack_64,uStack_68) != lVar2 || local_60._4_4_ != iVar6));
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489b05a0 FUN_1489b05a0 body=105 status=ok
// SIG undefined FUN_1489b05a0(void)

void FUN_1489b05a0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  local_20 = 0xffff;
  lVar1 = FUN_140b9fe48();
  if (lVar1 != 0) {
    FUN_143e5d6e8(lVar1,&local_38,param_3);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489b060a FUN_1489b060a body=95 status=ok
// SIG undefined FUN_1489b060a(void)

void FUN_1489b060a(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  local_20 = 0xffff;
  lVar1 = FUN_140b9fe48();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x158) = param_3;
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489b066a FUN_1489b066a body=364 status=ok
// SIG undefined FUN_1489b066a(void)

undefined8 FUN_1489b066a(longlong param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x168) != *(int *)(param_1 + 0x194)) {
    lVar3 = param_1 + 0x198;
    if (*(longlong *)(param_1 + 0x1a0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x1a0);
    }
    uVar5 = *(uint *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x1a8) - 1U & *param_3) * 4);
    if (uVar5 != 0xffffffff) {
      while (puVar1 = (uint *)(*(longlong *)(param_1 + 0x160) + (longlong)(int)uVar5 * 0x18),
            *puVar1 != *param_3) {
        uVar5 = puVar1[4];
        if (uVar5 == 0xffffffff) {
          return 0;
        }
      }
      if (puVar1 + 2 != (uint *)0x0 && puVar1 != (uint *)0x0) {
        lVar3 = *(longlong *)(puVar1 + 2);
        if ((DAT_14c950c29 == '\x01') && (lVar3 != 0)) {
          FUN_1456cec3c(lVar3);
        }
        else if (lVar3 == 0) {
          return 0;
        }
        lVar3 = *(longlong *)(lVar3 + 0x38);
        if ((lVar3 != 0) && (*(int *)(lVar3 + 0xb0) != *(int *)(lVar3 + 0xdc))) {
          lVar4 = lVar3 + 0xe0;
          if (*(longlong *)(lVar3 + 0xe8) != 0) {
            lVar4 = *(longlong *)(lVar3 + 0xe8);
          }
          iVar6 = *(int *)(lVar4 + (ulonglong)(*(int *)(lVar3 + 0xf0) - 1U & *param_2) * 4);
          if (iVar6 != -1) {
            while (lVar4 = *(longlong *)(lVar3 + 0xa8) + (longlong)iVar6 * 0x38,
                  *(uint *)(*(longlong *)(lVar3 + 0xa8) + (longlong)iVar6 * 0x38) != *param_2) {
              iVar6 = *(int *)(lVar4 + 0x30);
              if (iVar6 == -1) {
                return 0;
              }
            }
            if ((ushort *)(lVar4 + 0x28) != (ushort *)0x0 && lVar4 != 0) {
              uVar2 = *(ushort *)(lVar4 + 0x28);
              if ((-1 < (short)uVar2) && ((int)(short)uVar2 < *(int *)(param_1 + 200))) {
                return *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + (ulonglong)uVar2 * 8);
              }
            }
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1489b07d6 FUN_1489b07d6 body=112 status=ok
// SIG undefined FUN_1489b07d6(void)

void FUN_1489b07d6(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = FUN_140b9ffa8();
  if ((lVar4 != 0) && (iVar1 = *(int *)(param_1 + 200), (longlong)iVar1 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0xc0);
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar5);
      if ((lVar3 != 0) && (*(char *)(lVar3 + 0xe8) == '\x01')) {
        FUN_1458f0160(param_1,lVar4,lVar3 + 0x50);
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return;
}



// FUNCTION 1489b0846 FUN_1489b0846 body=296 status=ok
// SIG undefined FUN_1489b0846(void)

void FUN_1489b0846(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 0x1e0) = 0;
    *(undefined2 *)(param_2 + 0x8a) = 0;
    FUN_14120ddce(param_2 + 0xf8);
    local_68 = 0;
    uStack_60 = 0;
    if (*(int *)(param_2 + 0x2c) == 2) {
      FUN_1447a97f4(local_50,*(longlong *)(param_3 + 0x10) + 0x80);
      local_78 = param_1;
      FUN_1414e7168(&local_68,param_2,&DAT_14cb8dc00,local_50);
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    uVar2 = FUN_144a8232a(&DAT_14cb8dd48);
    FUN_143e5c798(param_2,param_3,uVar2);
    if (((*(longlong *)(param_1 + 0x1b0) != 0) &&
        (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x1e0), lVar1 != 0)) &&
       (lVar1 = *(longlong *)(lVar1 + 0x68), lVar1 != 0)) {
      FUN_14144be2e(lVar1,param_3 + 0x18,1);
    }
    FUN_141683dd2(param_1,param_3,param_2,0xffffffff);
    *(undefined1 *)(param_1 + 0x1e0) = 1;
    FUN_1414e70fc(&local_68);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489b0970 FUN_1489b0970 body=803 status=ok
// SIG undefined FUN_1489b0970(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1489b0970(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  uint uVar12;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80 [4];
  undefined8 local_70;
  longlong *local_68;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar5 = (longlong *)FUN_144a8232a(&DAT_14cb8dd48);
  iVar2 = *(int *)(param_1 + 0x1f8);
  if ((longlong)iVar2 != 0) {
    lVar9 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x1f0) + lVar9) == *plVar5) {
        uVar12 = (int)(lVar9 >> 4) * -0x33333333;
        if ((int)uVar12 < iVar2 && -1 < (int)uVar12) {
          lVar9 = (ulonglong)(uVar12 & 0x7fffffff) * 0x50;
          if ((byte)(*(char *)(*(longlong *)(param_1 + 0x1f0) + 8 + lVar9) - 1U) < 2) {
            local_98 = 0;
            uStack_90 = 0;
            local_88 = 0;
            local_80[0] = 0xffff;
            lVar6 = FUN_140b9fe48(param_1,param_2);
            if (lVar6 != 0) {
              lVar10 = (ulonglong)(uVar12 & 0x7fffffff) * 0x70;
              iVar2 = *(int *)(*(longlong *)(lVar6 + 0x78) + 0x10 + lVar10);
              if (((iVar2 != 0) &&
                  (lVar10 = *(longlong *)(lVar6 + 0x78) + lVar10, piVar11 = (int *)(lVar10 + 0x10),
                  *(int *)(lVar10 + 0x14) != 0)) && (iVar2 != DAT_14c948000)) {
                local_a8 = DAT_14cb8dcf8;
                local_a0 = (longlong *)CONCAT44(local_a0._4_4_,DAT_14cb8dd00);
                FUN_1448075d0(&local_70);
                iVar2 = *piVar11;
                iVar4 = (int)local_70;
                if (local_58 != 0) {
                  FUN_1400020a8();
                }
                if (iVar2 != iVar4) {
                  lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1f0) + 0x24 + lVar9);
                  if (lVar9 == -1) {
                    lVar10 = lVar6 + 0x68;
                  }
                  else {
                    lVar10 = *(longlong *)(lVar6 + 0x78) + 0x60 + lVar9 * 0x70;
                    if (1 < (byte)(*(char *)(*(longlong *)(param_1 + 0x1f0) + 8 + lVar9 * 0x50) - 1U
                                  )) {
                      lVar10 = *(longlong *)(lVar6 + 0x78) + lVar9 * 0x70;
                    }
                  }
                  local_a0 = (longlong *)CONCAT44(local_a0._4_4_,DAT_14cb8dd4c._4_4_);
                  local_a8 = _DAT_14cb8dd48;
                  FUN_1448075d0(&local_70,&local_a8);
                  puVar7 = (undefined8 *)FUN_144a06846(lVar10,&local_70);
                  local_a8 = *puVar7;
                  local_a0 = (longlong *)puVar7[1];
                  if (local_a0 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
                    UNLOCK();
                  }
                  if (local_58 != 0) {
                    FUN_1400020a8();
                  }
                  puVar7 = (undefined8 *)FUN_144a06846(&local_a8,piVar11);
                  local_70 = *puVar7;
                  local_68 = (longlong *)puVar7[1];
                  if (local_68 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(local_68 + 1) = (int)local_68[1] + 1;
                    UNLOCK();
                  }
                  pcVar3 = (code *)*param_3;
                  plVar5 = param_3 + 4;
                  if ((longlong *)param_3[2] != (longlong *)0x0) {
                    plVar5 = (longlong *)param_3[2];
                  }
                  uVar8 = (**(code **)(*plVar5 + 8))();
                  (*pcVar3)(uVar8,&local_70);
                  if (((*(longlong *)(param_1 + 0x1b0) != 0) &&
                      (lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x1e0), lVar9 != 0))
                     && (lVar9 = *(longlong *)(lVar9 + 0x68), lVar9 != 0)) {
                    FUN_14144be2e(lVar9,local_80,1);
                  }
                  plVar5 = local_68;
                  if (local_68 != (longlong *)0x0) {
                    LOCK();
                    plVar1 = local_68 + 1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)*plVar1 == 0) {
                      (**(code **)*local_68)(local_68);
                      LOCK();
                      piVar11 = (int *)((longlong)plVar5 + 0xc);
                      *piVar11 = *piVar11 + -1;
                      UNLOCK();
                      if (*piVar11 == 0) {
                        (**(code **)(*plVar5 + 0x10))(plVar5);
                      }
                    }
                  }
                  plVar5 = local_a0;
                  if (local_a0 != (longlong *)0x0) {
                    LOCK();
                    plVar1 = local_a0 + 1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)*plVar1 == 0) {
                      (**(code **)*local_a0)(local_a0);
                      LOCK();
                      piVar11 = (int *)((longlong)plVar5 + 0xc);
                      *piVar11 = *piVar11 + -1;
                      UNLOCK();
                      if (*piVar11 == 0) {
                        (**(code **)(*plVar5 + 0x10))(plVar5);
                      }
                    }
                  }
                }
              }
            }
          }
        }
        break;
      }
      lVar9 = lVar9 + 0x50;
    } while ((longlong)iVar2 * 0x50 != lVar9);
  }
  if (*param_3 != 0) {
    plVar5 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489b0c94 FUN_1489b0c94 body=280 status=ok
// SIG undefined FUN_1489b0c94(void)

void FUN_1489b0c94(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar2 = (longlong *)FUN_144a8232a(&DAT_14cb8dd48);
  iVar1 = *(int *)(param_1 + 0x1f8);
  if ((longlong)iVar1 != 0) {
    lVar4 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x1f0) + lVar4) == *plVar2) {
        uVar5 = (int)(lVar4 >> 4) * -0x33333333;
        if (((int)uVar5 < iVar1 && -1 < (int)uVar5) &&
           ((byte)(*(char *)(*(longlong *)(param_1 + 0x1f0) + 8 +
                            (ulonglong)(uVar5 & 0x7fffffff) * 0x50) - 1U) < 2)) {
          local_48 = 0;
          uStack_40 = 0;
          local_38 = 0;
          local_30 = 0xffff;
          lVar4 = FUN_140b9fe48(param_1,param_2);
          if (lVar4 != 0) {
            uVar3 = FUN_144a8232a(&DAT_14cb8dd48);
            local_58 = param_4;
            FUN_143e5cb34(lVar4,&local_48,uVar3,param_3);
          }
        }
        break;
      }
      lVar4 = lVar4 + 0x50;
    } while ((longlong)iVar1 * 0x50 != lVar4);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489b0dae FUN_1489b0dae body=309 status=ok
// SIG undefined FUN_1489b0dae(void)

undefined4 FUN_1489b0dae(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar3 = (longlong *)FUN_144a8232a(&DAT_14cb8dd48);
  iVar1 = *(int *)(param_1 + 0x1f8);
  if ((longlong)iVar1 != 0) {
    lVar5 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x1f0) + lVar5) == *plVar3) {
        uVar6 = (int)(lVar5 >> 4) * -0x33333333;
        if (((int)uVar6 < iVar1 && -1 < (int)uVar6) &&
           ((byte)(*(char *)(*(longlong *)(param_1 + 0x1f0) + 8 +
                            (ulonglong)(uVar6 & 0x7fffffff) * 0x50) - 1U) < 2)) {
          local_68 = 0;
          uStack_60 = 0;
          local_58 = 0;
          local_50 = 0xffff;
          lVar5 = FUN_140b9fe48(param_1,param_2);
          if (lVar5 != 0) {
            FUN_1446dcdd4(local_48,param_3);
            uVar4 = FUN_144a8232a(&DAT_14cb8dd48);
            uVar2 = FUN_143e5c9e6(lVar5,&local_68,uVar4,local_48);
            if (local_30 != 0) {
              FUN_1400020a8();
            }
            goto LAB_1489b0e0d;
          }
        }
        break;
      }
      lVar5 = lVar5 + 0x50;
    } while ((longlong)iVar1 * 0x50 != lVar5);
  }
  uVar2 = 0;
LAB_1489b0e0d:
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489b0ee4 FUN_1489b0ee4 body=184 status=ok
// SIG undefined FUN_1489b0ee4(void)

undefined8 FUN_1489b0ee4(undefined8 param_1,undefined8 param_2,short *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_3 < 0) {
    FUN_1447a97f4(param_2,&DAT_14c9485f0);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
  }
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  local_20 = 0xffff;
  lVar1 = FUN_140b9fe48(0,param_3,&local_38);
  if (lVar1 == 0) {
    FUN_1447a97f4(param_2,&DAT_14c9485f0);
  }
  else {
    uVar2 = FUN_144a8232a(&DAT_14cb8dd48);
    FUN_143e5d05a(lVar1,param_2,&local_38,uVar2);
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1489b0f9e FUN_1489b0f9e body=175 status=ok
// SIG undefined FUN_1489b0f9e(void)

int FUN_1489b0f9e(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  uVar1 = *(uint *)(param_2 + 4);
  lVar4 = param_2 + 8;
  if (1 < (int)uVar1) {
    lVar4 = *(longlong *)(param_2 + 0x18);
  }
  if (0 < *(int *)(param_2 + 0x24)) {
    lVar4 = *(longlong *)(param_2 + 0x18);
  }
  if ((longlong)*(int *)(param_1 + 0x1f8) != 0) {
    plVar7 = *(longlong **)(param_1 + 0x1f0);
    plVar8 = plVar7 + (longlong)*(int *)(param_1 + 0x1f8) * 10;
    iVar5 = 0;
    uVar6 = 0;
    do {
      if ((int)uVar1 <= (int)uVar6) {
        return -1;
      }
      plVar3 = (longlong *)FUN_144a8232a(lVar4 + (ulonglong)uVar6 * 0xc);
      if (*plVar3 != *plVar7) {
        return -1;
      }
      uVar2 = uVar6 + 1;
      if ((byte)((char)plVar7[1] - 1U) < 2) {
        if ((int)uVar1 <= (int)(uVar6 + 1)) {
          return -1;
        }
        uVar2 = uVar6 + 2;
      }
      uVar6 = uVar2;
      if (uVar1 == uVar6) {
        return iVar5;
      }
      iVar5 = iVar5 + 1;
      plVar7 = plVar7 + 10;
    } while (plVar7 != plVar8);
  }
  return -1;
}



// FUNCTION 1489b104e FUN_1489b104e body=136 status=ok
// SIG undefined FUN_1489b104e(void)

longlong FUN_1489b104e(longlong param_1,longlong param_2,longlong *param_3,char param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x1f8);
  if ((longlong)iVar1 != 0) {
    lVar3 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x1f0) + lVar3) == *param_3) {
        uVar2 = (int)(lVar3 >> 4) * -0x33333333;
        if (iVar1 <= (int)uVar2 || (int)uVar2 < 0) {
          return 0;
        }
        if ((param_4 != '\0') &&
           (1 < (byte)(*(char *)(*(longlong *)(param_1 + 0x1f0) + 8 +
                                (ulonglong)(uVar2 & 0x7fffffff) * 0x50) - 1U))) {
          return 0;
        }
        return (ulonglong)(uVar2 & 0x7fffffff) * 0x70 + *(longlong *)(param_2 + 0x78);
      }
      lVar3 = lVar3 + 0x50;
    } while ((longlong)iVar1 * 0x50 != lVar3);
  }
  return 0;
}



// FUNCTION 1489b10d6 FUN_1489b10d6 body=114 status=ok
// SIG undefined FUN_1489b10d6(void)

undefined4 * FUN_1489b10d6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  local_20 = 0xffff;
  lVar1 = FUN_140b9fe48();
  if (lVar1 == 0) {
    puVar2 = &DAT_14c9485f0;
  }
  else {
    puVar2 = (undefined4 *)FUN_1413fa874(lVar1,&local_38,param_3);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489b114a FUN_1489b114a body=48 status=ok
// SIG undefined FUN_1489b114a(void)

bool FUN_1489b114a(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  bool bVar1;
  
  FUN_1447715ec(param_4,param_3);
  bVar1 = false;
  if ((*param_4 != 0) && (param_4[1] != 0)) {
    bVar1 = *param_4 != DAT_14c948000;
  }
  return bVar1;
}



// FUNCTION 1489b117a FUN_1489b117a body=48 status=ok
// SIG undefined FUN_1489b117a(void)

bool FUN_1489b117a(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  bool bVar1;
  
  FUN_1447715ec(param_4,param_3);
  bVar1 = false;
  if ((*param_4 != 0) && (param_4[1] != 0)) {
    bVar1 = *param_4 != DAT_14c948000;
  }
  return bVar1;
}



// FUNCTION 1489b11aa FUN_1489b11aa body=121 status=ok
// SIG undefined FUN_1489b11aa(void)

void FUN_1489b11aa(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14131a58a(param_1,param_2 + 0x68);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0xffff;
  FUN_140fe4ff6(param_1,param_2,&local_48);
  FUN_1458e8cea(param_2,&local_48,0);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489b1224 FUN_1489b1224 body=120 status=ok
// SIG undefined FUN_1489b1224(void)

undefined8 FUN_1489b1224(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  local_28 = 0;
  FUN_1418b4370(&local_30,param_3);
  FUN_140d7df68(param_1 + 0x280,param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489b129e FUN_1489b129e body=51 status=ok
// SIG undefined FUN_1489b129e(void)

undefined8 FUN_1489b129e(longlong param_1,longlong *param_2)

{
  char cVar1;
  
  if ((*param_2 != 0) && (cVar1 = FUN_14480f766(param_1 + 0x2b0), cVar1 != '\0')) {
    *param_2 = 0;
    return 1;
  }
  return 0;
}



// FUNCTION 1489b12d2 FUN_1489b12d2 body=435 status=ok
// SIG undefined FUN_1489b12d2(void)

void FUN_1489b12d2(longlong param_1,int param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  longlong local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *(longlong *)(param_1 + 0x270);
  iVar4 = -1;
  if ((longlong)*(int *)(param_1 + 0x278) != 0) {
    lVar5 = (longlong)*(int *)(param_1 + 0x278) << 3;
    lVar6 = 0;
    do {
      if (*(int *)(*(longlong *)(lVar3 + lVar6 * 8) + 8) == param_2) {
        iVar4 = (int)lVar6;
        break;
      }
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  puVar1 = *(undefined8 **)(lVar3 + (longlong)iVar4 * 8);
  *(undefined8 *)(lVar3 + (longlong)iVar4 * 8) = 0;
  FUN_140f1002a(param_1 + 0x270);
  plVar2 = (longlong *)FUN_14479d2ce((longlong)puVar1 + 0xc);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x2c8))(plVar2,puVar1 + 3,*(undefined4 *)(param_3 + 0x28));
  }
  if ((longlong)*(int *)(puVar1 + 10) != 0) {
    lVar3 = 0;
    do {
      if ((*(int *)(puVar1[9] + 8 + lVar3) != 0) && (*(longlong *)(puVar1[9] + lVar3) != 0))
      goto LAB_1489b1406;
      lVar3 = lVar3 + 0x10;
    } while ((longlong)*(int *)(puVar1 + 10) * 0x10 != lVar3);
  }
  if ((longlong)*(int *)(param_1 + 0x2b8) != 0) {
    lVar3 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 0x2b0) + 8 + lVar3) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + lVar3) != 0)) goto LAB_1489b1406;
      lVar3 = lVar3 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x2b8) * 0x10 != lVar3);
  }
LAB_1489b13c7:
  FUN_140f1049c(param_1);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1489b1406:
  local_50 = 0;
  uStack_48 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_40 = 5;
  local_70 = FUN_14479d2ce((longlong)puVar1 + 0xc);
  FUN_1447715ec(&local_68,puVar1 + 3);
  local_40 = *(undefined4 *)(param_3 + 0x28);
  FUN_1489b42d6(puVar1 + 9,&local_70);
  FUN_1489b42d6(param_1 + 0x2b0,&local_70);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  goto LAB_1489b13c7;
}



// FUNCTION 1489b1486 FUN_1489b1486 body=45 status=ok
// SIG undefined FUN_1489b1486(void)

longlong FUN_1489b1486(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x20;
  FUN_141518300(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489b14b4 FUN_1489b14b4 body=45 status=ok
// SIG undefined FUN_1489b14b4(void)

longlong FUN_1489b14b4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_141518300(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489b14e2 FUN_1489b14e2 body=59 status=ok
// SIG undefined FUN_1489b14e2(void)

undefined8 * FUN_1489b14e2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b433f68;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489b151e FUN_1489b151e body=139 status=ok
// SIG undefined FUN_1489b151e(void)

void FUN_1489b151e(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x60);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x60,0,param_3,0x18);
    memmove(*(void **)((longlong)param_1 + 0x60),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x60,param_2,param_3,0x18);
  return;
}



// FUNCTION 1489b15aa FUN_1489b15aa body=54 status=ok
// SIG undefined FUN_1489b15aa(void)

longlong FUN_1489b15aa(longlong param_1,int param_2)

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



// FUNCTION 1489b15e0 FUN_1489b15e0 body=614 status=ok
// SIG undefined FUN_1489b15e0(void)

void FUN_1489b15e0(longlong param_1,longlong *param_2,longlong *param_3)

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
          FUN_140b24874(param_3,iVar2);
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
        FUN_1489b15e0(uVar4,&local_168,param_3);
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



// FUNCTION 1489b1848 FUN_1489b1848 body=308 status=ok
// SIG undefined FUN_1489b1848(void)

void FUN_1489b1848(longlong param_1,undefined8 param_2,longlong *param_3)

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
          FUN_140b24874(param_3,iVar3);
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



// FUNCTION 1489b197e FUN_1489b197e body=739 status=ok
// SIG undefined FUN_1489b197e(void)

void FUN_1489b197e(longlong param_1,longlong *param_2,longlong *param_3)

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
LAB_1489b1aa2:
          lVar7 = FUN_144a78d6a();
          if ((lVar7 == 0) || (*(int *)(lVar8 + 0x38) < *(int *)(lVar7 + 0x38))) goto LAB_1489b1ab6;
          lVar9 = 0;
          if (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
              lVar7 + 0x30) {
            lVar9 = lVar8;
          }
        }
        else {
          if (lVar8 != 0) goto LAB_1489b1aa2;
LAB_1489b1ab6:
          lVar9 = 0;
        }
        if ((*(int *)(lVar9 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
            lVar9 + 0x30)) {
          iVar2 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
            FUN_140b24874(param_3,iVar2);
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
        FUN_1489b197e(uVar4,&local_168,param_3);
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



// FUNCTION 1489b1c62 FUN_1489b1c62 body=38 status=ok
// SIG undefined FUN_1489b1c62(void)

undefined8 FUN_1489b1c62(undefined8 param_1,int param_2)

{
  FUN_1489b1c88();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489b1c88 FUN_1489b1c88 body=79 status=ok
// SIG undefined FUN_1489b1c88(void)

void FUN_1489b1c88(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b434008;
  FUN_144760e21(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b433f68;
  if (param_1[6] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1489b1cd8 FUN_1489b1cd8 body=95 status=ok
// SIG undefined FUN_1489b1cd8(void)

void FUN_1489b1cd8(longlong param_1,uint param_2)

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



// FUNCTION 1489b1d38 FUN_1489b1d38 body=132 status=ok
// SIG undefined FUN_1489b1d38(void)

void FUN_1489b1d38(longlong param_1,int param_2)

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



// FUNCTION 1489b1dbe FUN_1489b1dbe body=116 status=ok
// SIG undefined FUN_1489b1dbe(void)

void FUN_1489b1dbe(longlong *param_1,int param_2)

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



// FUNCTION 1489b1e32 FUN_1489b1e32 body=90 status=ok
// SIG undefined FUN_1489b1e32(void)

void FUN_1489b1e32(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 8 + lVar5 * 0x10);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x10 + 8);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_14120dab0();
  return;
}



// FUNCTION 1489b1e8c FUN_1489b1e8c body=132 status=ok
// SIG undefined FUN_1489b1e8c(void)

void FUN_1489b1e8c(longlong param_1,int param_2)

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



// FUNCTION 1489b1f12 FUN_1489b1f12 body=79 status=ok
// SIG undefined FUN_1489b1f12(void)

void FUN_1489b1f12(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)*param_2) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x38) == *param_2) {
          FUN_1489b1f62();
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x38 + *param_1 + 0x30);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1489b1f62 FUN_1489b1f62 body=125 status=ok
// SIG undefined FUN_1489b1f62(void)

void FUN_1489b1f62(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x38;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x34 + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x30 + lVar6 * 0x38);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar1 + lVar6 * 0x38 + 0x30);
  }
  *puVar3 = *(undefined4 *)(lVar1 + lVar2 + 0x30);
  if (*(longlong *)(*param_1 + 0x18 + lVar2) != 0) {
    FUN_1400020a8();
  }
  FUN_1489b1dbe(param_1,param_2);
  return;
}



// FUNCTION 1489b1fe0 FUN_1489b1fe0 body=9 status=ok
// SIG undefined FUN_1489b1fe0(void)

void FUN_1489b1fe0(longlong param_1)

{
  FUN_140fae274(param_1 + 0x10);
  return;
}



// FUNCTION 1489b1fea FUN_1489b1fea body=29 status=ok
// SIG undefined FUN_1489b1fea(void)

undefined8 FUN_1489b1fea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489b2008 FUN_1489b2008 body=38 status=ok
// SIG undefined FUN_1489b2008(void)

undefined8 FUN_1489b2008(undefined8 param_1,int param_2)

{
  FUN_140fae274();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489b202e FUN_1489b202e body=167 status=ok
// SIG undefined FUN_1489b202e(void)

void FUN_1489b202e(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1489b20a9;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1489b20a9;
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
LAB_1489b20a9:
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
                    /* WARNING: Could not recover jumptable at 0x0001489b20c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1489b20d6 FUN_1489b20d6 body=64 status=ok
// SIG undefined FUN_1489b20d6(void)

undefined8 * FUN_1489b20d6(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b434080;
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



// FUNCTION 1489b211a FUN_1489b211a body=81 status=ok
// SIG undefined FUN_1489b211a(void)

undefined8 FUN_1489b211a(longlong param_1)

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



// FUNCTION 1489b2172 FUN_1489b2172 body=89 status=ok
// SIG undefined FUN_1489b2172(void)

bool FUN_1489b2172(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1489b21bd;
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
LAB_1489b21bd:
  return lVar6 == param_2;
}



// FUNCTION 1489b21e8 FUN_1489b21e8 body=118 status=ok
// SIG undefined FUN_1489b21e8(void)

void FUN_1489b21e8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9b40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b434080;
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



// FUNCTION 1489b225e FUN_1489b225e body=118 status=ok
// SIG undefined FUN_1489b225e(void)

void FUN_1489b225e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9b40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b434080;
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



// FUNCTION 1489b22d4 FUN_1489b22d4 body=156 status=ok
// SIG undefined FUN_1489b22d4(void)

void FUN_1489b22d4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9b40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b434080;
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
                    /* WARNING: Could not recover jumptable at 0x0001489b2360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489b2370 FUN_1489b2370 body=104 status=ok
// SIG undefined FUN_1489b2370(void)

void FUN_1489b2370(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001489b23bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001489b23ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 1489b23d8 FUN_1489b23d8 body=101 status=ok
// SIG undefined FUN_1489b23d8(void)

ulonglong FUN_1489b23d8(longlong param_1)

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
LAB_1489b2432:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1489b2432;
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



// FUNCTION 1489b243e FUN_1489b243e body=48 status=ok
// SIG undefined FUN_1489b243e(void)

void FUN_1489b243e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x2e8,8);
  }
  return;
}



// FUNCTION 1489b246e FUN_1489b246e body=150 status=ok
// SIG undefined FUN_1489b246e(void)

void FUN_1489b246e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x2e8,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x2e8)) {
      uVar5 = uVar4 / 0x2e8 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x2e8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1489b2505 FUN_1489b2505 body=5 status=ok
// SIG undefined FUN_1489b2505(void)

undefined8 * FUN_1489b2505(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 1489b250a FUN_1489b250a body=103 status=ok
// SIG undefined FUN_1489b250a(void)

undefined8 FUN_1489b250a(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x14,4);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xcccccccccccccccd),0);
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar2 / 0x14)) {
    uVar4 = uVar2 / 0x14 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar3 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x14,4);
  }
  return uVar3;
}



// FUNCTION 1489b2572 FUN_1489b2572 body=147 status=ok
// SIG undefined FUN_1489b2572(void)

void FUN_1489b2572(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x14,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x14)) {
      uVar5 = uVar4 / 0x14 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x14,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1489b2606 FUN_1489b2606 body=31 status=ok
// SIG undefined FUN_1489b2606(void)

undefined8 FUN_1489b2606(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489b263a FUN_1489b263a body=85 status=ok
// SIG undefined FUN_1489b263a(void)

void FUN_1489b263a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b434190;
  return;
}



// FUNCTION 1489b2690 FUN_1489b2690 body=118 status=ok
// SIG undefined FUN_1489b2690(void)

void FUN_1489b2690(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b434190;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489b26f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489b2706 FUN_1489b2706 body=101 status=ok
// SIG undefined FUN_1489b2706(void)

undefined8 FUN_1489b2706(void)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145f84e6a(local_20);
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



// FUNCTION 1489b276c FUN_1489b276c body=88 status=ok
// SIG undefined FUN_1489b276c(void)

void FUN_1489b276c(longlong param_1,int param_2)

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



// FUNCTION 1489b27c4 FUN_1489b27c4 body=125 status=ok
// SIG undefined FUN_1489b27c4(void)

void FUN_1489b27c4(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x808);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x100;
    if (0x100 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x100 < *(uint *)(param_1 + 0x80c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x80c) = iVar5;
    FUN_145db445a(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1489b2842 FUN_1489b2842 body=110 status=ok
// SIG undefined FUN_1489b2842(void)

void FUN_1489b2842(longlong param_1,int param_2)

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
    FUN_1489b28b2(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1489b28b2 FUN_1489b28b2 body=132 status=ok
// SIG undefined FUN_1489b28b2(void)

void FUN_1489b28b2(void *param_1,int param_2,undefined8 param_3)

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



// FUNCTION 1489b2936 FUN_1489b2936 body=141 status=ok
// SIG undefined FUN_1489b2936(void)

void FUN_1489b2936(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,8);
  return;
}



// FUNCTION 1489b29c4 FUN_1489b29c4 body=75 status=ok
// SIG undefined FUN_1489b29c4(void)

void FUN_1489b29c4(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x20),
              (longlong)*(int *)((longlong)param_1 + 0x28) << 3);
      FUN_1446efa72((longlong)param_1 + 0x20,0,0,8);
      return;
    }
  }
  return;
}



// FUNCTION 1489b2a10 FUN_1489b2a10 body=127 status=ok
// SIG undefined FUN_1489b2a10(void)

void FUN_1489b2a10(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x68);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x6c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x18,0);
      iVar4 = (int)(uVar3 / 0x18);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x6c) = iVar5;
    FUN_1489b151e(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1489b2a90 FUN_1489b2a90 body=83 status=ok
// SIG undefined FUN_1489b2a90(void)

void FUN_1489b2a90(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 << 3,0);
  iVar1 = (int)(uVar2 >> 3);
  iVar3 = 0x7fffffff;
  if ((int)param_2 <= iVar1) {
    iVar3 = iVar1;
  }
  if (iVar3 == *(int *)(param_1 + 0x8c)) {
    return;
  }
  *(int *)(param_1 + 0x8c) = iVar3;
  FUN_1489b2936(param_1,*(undefined4 *)(param_1 + 0x88));
  return;
}



// FUNCTION 1489b2ae4 FUN_1489b2ae4 body=119 status=ok
// SIG undefined FUN_1489b2ae4(void)

void FUN_1489b2ae4(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x10;
    if (0x10 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x8c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x8c) = iVar5;
    FUN_1489b2936(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1489b2b60 FUN_1489b2b60 body=81 status=ok
// SIG undefined FUN_1489b2b60(void)

undefined8 FUN_1489b2b60(longlong param_1)

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



// FUNCTION 1489b2bb8 FUN_1489b2bb8 body=89 status=ok
// SIG undefined FUN_1489b2bb8(void)

bool FUN_1489b2bb8(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1489b2c03;
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
LAB_1489b2c03:
  return lVar6 == param_2;
}



// FUNCTION 1489b2c2e FUN_1489b2c2e body=118 status=ok
// SIG undefined FUN_1489b2c2e(void)

void FUN_1489b2c2e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a78e0f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b434450;
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



// FUNCTION 1489b2ca4 FUN_1489b2ca4 body=156 status=ok
// SIG undefined FUN_1489b2ca4(void)

void FUN_1489b2ca4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a78e0f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b434450;
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
                    /* WARNING: Could not recover jumptable at 0x0001489b2d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489b2d40 FUN_1489b2d40 body=104 status=ok
// SIG undefined FUN_1489b2d40(void)

void FUN_1489b2d40(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001489b2d8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001489b2d9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 1489b2da8 FUN_1489b2da8 body=143 status=ok
// SIG undefined FUN_1489b2da8(void)

void FUN_1489b2da8(longlong param_1,int param_2)

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
    uVar5 = FUN_144a3809e(lVar4 * 0x70,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x70,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1489b2e38 FUN_1489b2e38 body=89 status=ok
// SIG undefined FUN_1489b2e38(void)

void FUN_1489b2e38(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x70 + *param_1);
  FUN_145ae5bf7(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x70 + (longlong)_Dst),(longlong)iVar2 * 0x70);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1489b2e92 FUN_1489b2e92 body=62 status=ok
// SIG undefined FUN_1489b2e92(void)

void FUN_1489b2e92(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1489b2ed0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x70,8);
  }
  return;
}



// FUNCTION 1489b2ed0 FUN_1489b2ed0 body=104 status=ok
// SIG undefined FUN_1489b2ed0(void)

ulonglong FUN_1489b2ed0(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x70) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1489b2f06;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x70,8);
      param_2 = param_2 / 0x70;
    }
  }
LAB_1489b2f06:
  return param_2 & 0xffffffff;
}



// FUNCTION 1489b2f38 FUN_1489b2f38 body=139 status=ok
// SIG undefined FUN_1489b2f38(void)

void FUN_1489b2f38(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x30;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x2c + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x28 + lVar6 * 0x30);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar1 + lVar6 * 0x30 + 0x28);
  }
  *puVar3 = *(undefined4 *)(lVar1 + lVar2 + 0x28);
  if (*(longlong *)(*param_1 + 0x18 + lVar2) != 0) {
    FUN_1400020a8();
  }
  FUN_14709f0a8(param_1,param_2,1);
  return;
}



// FUNCTION 1489b2fde FUN_1489b2fde body=29 status=ok
// SIG undefined FUN_1489b2fde(void)

bool FUN_1489b2fde(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1489b2ffc FUN_1489b2ffc body=26 status=ok
// SIG undefined FUN_1489b2ffc(void)

bool FUN_1489b2ffc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1489b3016 FUN_1489b3016 body=93 status=ok
// SIG undefined FUN_1489b3016(void)

void FUN_1489b3016(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b434d90;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4344c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489b3074 FUN_1489b3074 body=126 status=ok
// SIG undefined FUN_1489b3074(void)

void FUN_1489b3074(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b434d90;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4344c0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489b30e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489b30f2 FUN_1489b30f2 body=40 status=ok
// SIG undefined FUN_1489b30f2(void)

void FUN_1489b30f2(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001489b3117. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1489b311e FUN_1489b311e body=114 status=ok
// SIG undefined FUN_1489b311e(void)

void FUN_1489b311e(longlong *param_1,int param_2)

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



// FUNCTION 1489b3192 FUN_1489b3192 body=118 status=ok
// SIG undefined FUN_1489b3192(void)

void FUN_1489b3192(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  void *_Dst;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (ulonglong)param_2 * 0x10);
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
  if (~param_2 + iVar5 != 0) {
    _Dst = (void *)(lVar3 + (ulonglong)param_2 * 0x10);
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~param_2 + iVar5) << 4);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 1489b3208 FUN_1489b3208 body=62 status=ok
// SIG undefined FUN_1489b3208(void)

void FUN_1489b3208(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1489b3246(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1489b3246 FUN_1489b3246 body=93 status=ok
// SIG undefined FUN_1489b3246(void)

ulonglong FUN_1489b3246(uint param_1,uint param_2)

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



// FUNCTION 1489b32bc FUN_1489b32bc body=29 status=ok
// SIG undefined FUN_1489b32bc(void)

undefined8 FUN_1489b32bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489b32da FUN_1489b32da body=31 status=ok
// SIG undefined FUN_1489b32da(void)

undefined8 FUN_1489b32da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489b3314 FUN_1489b3314 body=29 status=ok
// SIG undefined FUN_1489b3314(void)

bool FUN_1489b3314(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1489b3332 FUN_1489b3332 body=26 status=ok
// SIG undefined FUN_1489b3332(void)

bool FUN_1489b3332(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1489b334c FUN_1489b334c body=93 status=ok
// SIG undefined FUN_1489b334c(void)

void FUN_1489b334c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4345a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4347a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489b33aa FUN_1489b33aa body=126 status=ok
// SIG undefined FUN_1489b33aa(void)

void FUN_1489b33aa(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4345a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4347a0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489b3419. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489b3428 FUN_1489b3428 body=40 status=ok
// SIG undefined FUN_1489b3428(void)

void FUN_1489b3428(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001489b344d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1489b3450 FUN_1489b3450 body=48 status=ok
// SIG undefined FUN_1489b3450(void)

void FUN_1489b3450(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 1489b3480 FUN_1489b3480 body=164 status=ok
// SIG undefined FUN_1489b3480(void)

void FUN_1489b3480(longlong *param_1,undefined8 param_2)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1489b3500;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1489b3500:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1489b3524 FUN_1489b3524 body=230 status=ok
// SIG undefined FUN_1489b3524(void)

undefined8 * FUN_1489b3524(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1489b360c FUN_1489b360c body=130 status=ok
// SIG undefined FUN_1489b360c(void)

void FUN_1489b360c(longlong *param_1,longlong *param_2)

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



// FUNCTION 1489b3690 FUN_1489b3690 body=193 status=ok
// SIG undefined FUN_1489b3690(void)

int FUN_1489b3690(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_48 = *param_3;
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x30);
        cVar1 = FUN_14472ecf8(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_1489b36b9;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x28 + (longlong)iVar4 * 0x30);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_1489b36b9:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 1489b3752 FUN_1489b3752 body=31 status=ok
// SIG undefined FUN_1489b3752(void)

undefined8 FUN_1489b3752(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489b378c FUN_1489b378c body=29 status=ok
// SIG undefined FUN_1489b378c(void)

bool FUN_1489b378c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1489b37aa FUN_1489b37aa body=26 status=ok
// SIG undefined FUN_1489b37aa(void)

bool FUN_1489b37aa(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1489b37c4 FUN_1489b37c4 body=93 status=ok
// SIG undefined FUN_1489b37c4(void)

void FUN_1489b37c4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541440;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b434810;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489b3822 FUN_1489b3822 body=126 status=ok
// SIG undefined FUN_1489b3822(void)

void FUN_1489b3822(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a541440;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b434810;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489b3891. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489b38a0 FUN_1489b38a0 body=40 status=ok
// SIG undefined FUN_1489b38a0(void)

void FUN_1489b38a0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001489b38c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1489b38c8 FUN_1489b38c8 body=114 status=ok
// SIG undefined FUN_1489b38c8(void)

void FUN_1489b38c8(longlong *param_1,int param_2)

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



// FUNCTION 1489b393a FUN_1489b393a body=114 status=ok
// SIG undefined FUN_1489b393a(void)

void FUN_1489b393a(longlong *param_1,int param_2)

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



// FUNCTION 1489b39ac FUN_1489b39ac body=663 status=ok
// SIG undefined FUN_1489b39ac(void)

void FUN_1489b39ac(undefined8 *param_1,uint param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_98 [40];
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_3;
  if (param_2 != 0) {
    iVar11 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar9 = iVar11;
joined_r0x0001489b39f8:
    do {
      iVar12 = iVar11 * 2 + 1;
      if (iVar12 < (int)param_2) {
        iVar8 = iVar11 * 2 + 2;
        uVar4 = *(undefined8 *)*local_70;
        if ((iVar8 < (int)param_2) &&
           (cVar7 = FUN_145c0ef50(uVar4,param_1[(longlong)iVar8 * 3 + 1],
                                  param_1[(longlong)iVar12 * 3 + 1]), cVar7 == '\0')) {
          iVar12 = iVar8;
        }
        cVar7 = FUN_145c0ef50(uVar4,param_1[(longlong)iVar11 * 3 + 1],
                              param_1[(longlong)iVar12 * 3 + 1]);
        if (cVar7 != '\0') {
          puVar2 = param_1 + (longlong)iVar11 * 3;
          puVar3 = param_1 + (longlong)iVar12 * 3;
          local_58 = puVar2[2];
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar2[2] = puVar3[2];
          uVar6 = puVar3[1];
          *puVar2 = *puVar3;
          puVar2[1] = uVar6;
          puVar3[2] = local_58;
          local_68._0_4_ = (undefined4)uVar4;
          local_68._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_60._0_4_ = (undefined4)uVar5;
          uStack_60._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          *(undefined4 *)puVar3 = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar3 + 4) = local_68._4_4_;
          *(undefined4 *)(puVar3 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_60._4_4_;
          iVar11 = iVar12;
          local_68 = uVar4;
          uStack_60 = uVar5;
          goto joined_r0x0001489b39f8;
        }
      }
      bVar13 = iVar9 != 0;
      iVar11 = iVar9 + -1;
      iVar9 = iVar11;
    } while (bVar13);
    if (1 < (int)param_2) {
      uVar10 = (ulonglong)param_2 - 1;
      local_58 = param_1[2];
      uVar4 = *param_1;
      uVar5 = param_1[1];
      param_1[2] = param_1[uVar10 * 3 + 2];
      uVar6 = (param_1 + uVar10 * 3)[1];
      *param_1 = param_1[uVar10 * 3];
      param_1[1] = uVar6;
      param_1[uVar10 * 3 + 2] = local_58;
      local_68._0_4_ = (undefined4)uVar4;
      local_68._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_60._0_4_ = (undefined4)uVar5;
      uStack_60._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      puVar2 = param_1 + uVar10 * 3;
      *(undefined4 *)puVar2 = (undefined4)local_68;
      *(undefined4 *)((longlong)puVar2 + 4) = local_68._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_60;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_60._4_4_;
      local_68 = uVar4;
      uStack_60 = uVar5;
      if (param_2 != 2) {
        do {
          iVar11 = 0;
          iVar12 = 1;
          iVar9 = 0;
          do {
            iVar11 = iVar11 + 2;
            uVar4 = *(undefined8 *)*local_70;
            iVar8 = iVar12;
            if (((longlong)iVar11 < (longlong)uVar10) &&
               (cVar7 = FUN_145c0ef50(uVar4,param_1[(longlong)iVar11 * 3 + 1],
                                      param_1[(longlong)iVar12 * 3 + 1]), cVar7 == '\0')) {
              iVar8 = iVar11;
            }
            cVar7 = FUN_145c0ef50(uVar4,param_1[(longlong)iVar9 * 3 + 1],
                                  param_1[(longlong)iVar8 * 3 + 1]);
            if (cVar7 == '\0') break;
            puVar2 = param_1 + (longlong)iVar9 * 3;
            puVar3 = param_1 + (longlong)iVar8 * 3;
            local_58 = puVar2[2];
            uVar4 = *puVar2;
            uVar5 = puVar2[1];
            puVar2[2] = puVar3[2];
            uVar6 = puVar3[1];
            *puVar2 = *puVar3;
            puVar2[1] = uVar6;
            puVar3[2] = local_58;
            local_68._0_4_ = (undefined4)uVar4;
            local_68._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
            uStack_60._0_4_ = (undefined4)uVar5;
            uStack_60._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
            *(undefined4 *)puVar3 = (undefined4)local_68;
            *(undefined4 *)((longlong)puVar3 + 4) = local_68._4_4_;
            *(undefined4 *)(puVar3 + 1) = (undefined4)uStack_60;
            *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_60._4_4_;
            iVar11 = iVar8 * 2;
            iVar12 = iVar8 * 2 + 1;
            local_68 = uVar4;
            uStack_60 = uVar5;
            iVar9 = iVar8;
          } while ((longlong)iVar12 < (longlong)uVar10);
          uVar1 = uVar10 - 1;
          local_58 = param_1[2];
          uVar4 = *param_1;
          uVar5 = param_1[1];
          param_1[2] = param_1[uVar1 * 3 + 2];
          uVar6 = (param_1 + uVar1 * 3)[1];
          *param_1 = param_1[uVar1 * 3];
          param_1[1] = uVar6;
          param_1[uVar1 * 3 + 2] = local_58;
          local_68._0_4_ = (undefined4)uVar4;
          local_68._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_60._0_4_ = (undefined4)uVar5;
          uStack_60._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          puVar2 = param_1 + uVar1 * 3;
          *(undefined4 *)puVar2 = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar2 + 4) = local_68._4_4_;
          *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_60._4_4_;
          bVar13 = 2 < uVar10;
          uVar10 = uVar1;
          local_68 = uVar4;
          uStack_60 = uVar5;
        } while (bVar13);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489b3c44 FUN_1489b3c44 body=101 status=ok
// SIG undefined FUN_1489b3c44(void)

void FUN_1489b3c44(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x50 + *param_1);
  FUN_145a9b25f(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x50 + (longlong)_Dst),(longlong)iVar2 * 0x50);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1489b3caa FUN_1489b3caa body=62 status=ok
// SIG undefined FUN_1489b3caa(void)

void FUN_1489b3caa(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1489b3ce8(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x50,8);
  }
  return;
}



// FUNCTION 1489b3ce8 FUN_1489b3ce8 body=112 status=ok
// SIG undefined FUN_1489b3ce8(void)

ulonglong FUN_1489b3ce8(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x50) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1489b3d22;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x50,8);
      param_2 = param_2 / 0x50;
    }
  }
LAB_1489b3d22:
  return param_2 & 0xffffffff;
}



// FUNCTION 1489b3d58 FUN_1489b3d58 body=15 status=ok
// SIG undefined FUN_1489b3d58(void)

void FUN_1489b3d58(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 1489b3d68 FUN_1489b3d68 body=147 status=ok
// SIG undefined FUN_1489b3d68(void)

void FUN_1489b3d68(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1489b3dfc FUN_1489b3dfc body=100 status=ok
// SIG undefined FUN_1489b3dfc(void)

void FUN_1489b3dfc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x28);
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
  plVar3 = *(longlong **)(param_1 + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x0001489b3e54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1489b3e7a FUN_1489b3e7a body=29 status=ok
// SIG undefined FUN_1489b3e7a(void)

bool FUN_1489b3e7a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1489b3e98 FUN_1489b3e98 body=26 status=ok
// SIG undefined FUN_1489b3e98(void)

bool FUN_1489b3e98(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1489b3eb2 FUN_1489b3eb2 body=93 status=ok
// SIG undefined FUN_1489b3eb2(void)

void FUN_1489b3eb2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b434880;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489b3f10 FUN_1489b3f10 body=126 status=ok
// SIG undefined FUN_1489b3f10(void)

void FUN_1489b3f10(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b434880;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489b3f7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489b3f8e FUN_1489b3f8e body=158 status=ok
// SIG undefined FUN_1489b3f8e(void)

bool FUN_1489b3f8e(longlong param_1,undefined4 param_2)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
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



// FUNCTION 1489b402e FUN_1489b402e body=122 status=ok
// SIG undefined FUN_1489b402e(void)

undefined8 FUN_1489b402e(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_2;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)((int)((ulonglong)lVar2 >> 0x20) * 0x17 + (int)lVar2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == lVar2) {
          FUN_1489b40a8();
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 1489b40a8 FUN_1489b40a8 body=123 status=ok
// SIG undefined FUN_1489b40a8(void)

void FUN_1489b40a8(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x20;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x1c + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x18 + lVar6 * 0x20);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar1 + lVar6 * 0x20 + 0x18);
  }
  *puVar3 = *(undefined4 *)(lVar1 + lVar2 + 0x18);
  FUN_1449db362(*param_1 + lVar2 + 8);
  FUN_1489b311e(param_1,param_2);
  return;
}



// FUNCTION 1489b4124 FUN_1489b4124 body=31 status=ok
// SIG undefined FUN_1489b4124(void)

undefined8 FUN_1489b4124(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489b415e FUN_1489b415e body=29 status=ok
// SIG undefined FUN_1489b415e(void)

bool FUN_1489b415e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1489b417c FUN_1489b417c body=26 status=ok
// SIG undefined FUN_1489b417c(void)

bool FUN_1489b417c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1489b4196 FUN_1489b4196 body=93 status=ok
// SIG undefined FUN_1489b4196(void)

void FUN_1489b4196(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ca0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4348f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489b41f4 FUN_1489b41f4 body=126 status=ok
// SIG undefined FUN_1489b41f4(void)

void FUN_1489b41f4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9ca0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4348f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489b4263. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489b4272 FUN_1489b4272 body=58 status=ok
// SIG undefined FUN_1489b4272(void)

void FUN_1489b4272(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001489b42a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1489b42d6 FUN_1489b42d6 body=164 status=ok
// SIG undefined FUN_1489b42d6(void)

void FUN_1489b42d6(longlong *param_1,undefined8 param_2)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1489b4356;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1489b4356:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1489b43b0 FUN_1489b43b0 body=319 status=ok
// SIG undefined FUN_1489b43b0(void)

void FUN_1489b43b0(longlong *param_1)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_50;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1402191ca(param_1,0);
  }
  lVar2 = FUN_140161d51();
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1446f84a2(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = *(undefined8 *)(lVar2 + 0x20);
  if ((longlong)*(int *)(lVar2 + 0x48) != 0) {
    puVar3 = *(undefined8 **)(lVar2 + 0x40);
    puVar4 = puVar3 + (longlong)*(int *)(lVar2 + 0x48) * 4;
    do {
      local_50 = *(undefined1 *)(puVar3 + 1);
      local_58 = *puVar3;
      local_48 = (void *)0x0;
      local_40 = *(int *)(puVar3 + 3);
      lVar2 = (longlong)local_40;
      _Src = (void *)puVar3[2];
      if (lVar2 == 0) {
        local_3c = 0;
      }
      else {
        FUN_1401b309e(&local_48,local_40,0);
        memcpy(local_48,_Src,lVar2 << 3);
      }
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1446f84a2(param_1,iVar1);
      }
      *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = local_58;
      if (local_48 != (void *)0x0) {
        FUN_1400020a8();
      }
      puVar3 = puVar3 + 4;
    } while (puVar3 != puVar4);
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489b44f0 FUN_1489b44f0 body=345 status=ok
// SIG undefined FUN_1489b44f0(void)

void FUN_1489b44f0(longlong param_1,longlong *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined1 local_58;
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    FUN_1402191ca(param_2,0);
  }
  lVar2 = FUN_140161d51();
  if (*(longlong *)(lVar2 + 0x20) != param_1) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_1446f84a2(param_2,iVar1);
    }
    *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = *(undefined8 *)(lVar2 + 0x20);
  }
  if ((longlong)*(int *)(lVar2 + 0x48) != 0) {
    plVar4 = *(longlong **)(lVar2 + 0x40);
    plVar3 = plVar4 + (longlong)*(int *)(lVar2 + 0x48) * 4;
    do {
      local_58 = (undefined1)plVar4[1];
      local_60 = *plVar4;
      local_50 = (void *)0x0;
      local_48 = (int)plVar4[3];
      lVar2 = (longlong)local_48;
      _Src = (void *)plVar4[2];
      if (lVar2 == 0) {
        local_44 = 0;
      }
      else {
        FUN_1401b309e(&local_50,local_48,0);
        memcpy(local_50,_Src,lVar2 << 3);
      }
      if (local_60 != param_1) {
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_1446f84a2(param_2,iVar1);
        }
        *(longlong *)(*param_2 + (longlong)iVar1 * 8) = local_60;
      }
      if (local_50 != (void *)0x0) {
        FUN_1400020a8();
      }
      plVar4 = plVar4 + 4;
    } while (plVar4 != plVar3);
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489b464a FUN_1489b464a body=46 status=ok
// SIG undefined FUN_1489b464a(void)

longlong * FUN_1489b464a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x50);
  *param_2 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x58);
  return param_2;
}



// FUNCTION 1489b4678 FUN_1489b4678 body=43 status=ok
// SIG undefined FUN_1489b4678(void)

undefined8 FUN_1489b4678(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_14c9485f0;
  if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(param_1 + 8);
  }
  FUN_141710b0e(puVar1,param_2,1);
  return param_2;
}



// FUNCTION 1489b46dc FUN_1489b46dc body=539 status=ok
// SIG undefined FUN_1489b46dc(void)

void FUN_1489b46dc(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_108 [40];
  undefined8 local_e0;
  longlong *local_d8;
  int local_d0;
  undefined1 local_c8 [4];
  undefined8 local_c4;
  undefined4 local_bc;
  undefined1 local_b8 [4];
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined8 local_a4;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_38;
  undefined2 local_37;
  undefined1 local_35;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1405f1eac();
  cVar3 = FUN_140114204(param_1 + 0x398);
  if (cVar3 != '\0') {
    lVar4 = FUN_1447210f0(param_1);
    if (lVar4 != 0) {
      local_c8[0] = 0;
      local_c4 = 0;
      local_bc = 0;
      local_b8[0] = 0;
      local_b4 = 0;
      uStack_ac = 0;
      local_a4 = 0;
      local_98 = 0xc69c4000;
      local_48 = 0;
      local_40 = 0;
      local_38 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_60 = 0;
      uStack_58 = 0;
      local_50 = 0;
      local_37 = 1;
      local_35 = 0;
      local_34 = 0;
      local_d8 = (longlong *)0x0;
      local_d0 = 0;
      FUN_1446efa72(&local_d8,0,3,0x10);
      plVar1 = local_d8;
      local_d0 = 3;
      *local_d8 = (longlong)&PTR_LAB_14b3e6310;
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
      local_d8[2] = lVar5;
      *local_d8 = (longlong)&PTR_FUN_14b4351e0;
      local_d8[3] = 0;
      FUN_14485c47a(local_d8 + 3,param_1);
      plVar1[4] = (longlong)&LAB_1489b48f8;
      if (local_d8 == (longlong *)0x0 || local_d0 == 0) {
        local_e0 = 0;
      }
      else {
        (**(code **)(*local_d8 + 0x38))(local_d8,&local_e0);
      }
      *(undefined8 *)(param_1 + 0x3d0) = local_e0;
      FUN_1401aa3da((longlong)&uStack_ac + 4,&local_d8);
      lVar4 = FUN_140149a73(lVar4,0);
      if (lVar4 == 0) {
        local_34 = 2;
      }
      else {
        FUN_140983ba6(param_1 + 0x398,lVar4,local_c8);
      }
      FUN_1489b4902(param_1,local_b8);
      FUN_1449db362(&local_d8);
      FUN_1409838b8(local_c8);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489b4902 FUN_1489b4902 body=136 status=ok
// SIG undefined FUN_1489b4902(void)

void FUN_1489b4902(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  longlong *local_40 [2];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 0x390);
  if (lVar1 != 0) {
    FUN_140b12754(param_2,local_30);
    FUN_140233b1a(local_40,local_30);
    thunk_FUN_145c0d508(lVar1,local_40);
    if (local_40[0] != (longlong *)0x0) {
      (**(code **)(*local_40[0] + 0x10))();
    }
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489b498c FUN_1489b498c body=83 status=ok
// SIG undefined FUN_1489b498c(void)

void FUN_1489b498c(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  FUN_1403d8a98();
  uVar2 = FUN_1447210f0(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x3d0);
  lVar3 = FUN_140149a73(uVar2,0);
  if (lVar3 != 0) {
    FUN_140825b72(param_1 + 0x398,uVar1,lVar3,0);
  }
  *(undefined8 *)(param_1 + 0x3d0) = 0;
  return;
}



// FUNCTION 1489b49e0 FUN_1489b49e0 body=592 status=ok
// SIG undefined FUN_1489b49e0(void)

undefined8 * FUN_1489b49e0(longlong param_1,undefined8 *param_2,char *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  longlong local_c0;
  undefined8 *local_b8;
  int local_ac [2];
  int local_a4;
  int local_a0 [2];
  int local_98;
  int local_94 [2];
  int local_8c;
  int local_88 [2];
  int local_80;
  int local_7c [2];
  int local_74;
  undefined4 local_70;
  int local_6c;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*param_3 == '\x01') {
    local_c8 = (longlong *)(param_1 + 0x6e0);
    local_c0 = param_1;
    local_b8 = param_2;
    FUN_1447a97f4(&local_70,param_3 + 0x10);
    if (0 < local_6c) {
      iVar2 = 0;
      do {
        FUN_144a7c8fe(&local_70,local_7c,iVar2,1);
        if ((((((local_7c[0] == DAT_14cb7beb0) && (local_74 == DAT_14cb7beb8)) ||
              ((FUN_144a7c8fe(&local_70,local_88,iVar2,1), local_88[0] == DAT_14cb7bec8 &&
               (local_80 == DAT_14cb7bed0)))) ||
             ((FUN_144a7c8fe(&local_70,local_94,iVar2,1), local_94[0] == DAT_14cb7bee0 &&
              (local_8c == DAT_14cb7bee8)))) ||
            ((FUN_144a7c8fe(&local_70,local_a0,iVar2,1), local_a0[0] == DAT_14cb7bef8 &&
             (local_98 == DAT_14cb7bf00)))) ||
           ((FUN_144a7c8fe(&local_70,local_ac,iVar2,1), local_ac[0] == DAT_14cb7bf10 &&
            (local_a4 == DAT_14cb7bf18)))) {
          FUN_1402b5374(&local_70,iVar2,0);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < local_6c);
    }
    param_1 = local_c0;
    param_2 = local_b8;
    plVar3 = local_c8;
    if (local_58 != 0) {
      FUN_1400020a8();
      param_1 = local_c0;
      param_2 = local_b8;
      plVar3 = local_c8;
    }
  }
  else {
    local_70 = *(undefined4 *)(param_3 + 0x10);
    plVar3 = (longlong *)(param_1 + 0x6e0);
  }
  iVar2 = FUN_140fb1570(plVar3,local_70,param_3);
  if ((iVar2 == -1) || (lVar1 = (longlong)iVar2 * 0x50 + *plVar3, lVar1 == -0x38 || lVar1 == 0)) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    FUN_147e22e4c(param_1,param_2);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}


