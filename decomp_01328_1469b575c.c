// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1469b575c FUN_1469b575c body=101 status=ok
// SIG undefined FUN_1469b575c(void)

ulonglong FUN_1469b575c(longlong param_1)

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
LAB_1469b57b6:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1469b57b6;
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



// FUNCTION 1469b57c4 FUN_1469b57c4 body=9 status=ok
// SIG undefined FUN_1469b57c4(void)

void FUN_1469b57c4(longlong param_1)

{
  FUN_146a1e686(param_1 + 0x10);
  return;
}



// FUNCTION 1469b57ce FUN_1469b57ce body=29 status=ok
// SIG undefined FUN_1469b57ce(void)

undefined8 FUN_1469b57ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469b57ec FUN_1469b57ec body=195 status=ok
// SIG undefined FUN_1469b57ec(void)

void FUN_1469b57ec(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x90) != 0) && (*(longlong *)(param_2 + 0x98) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x98) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x90) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x98);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x90) = param_2;
    if (*(longlong **)(param_2 + 0x98) == plVar2) goto LAB_1469b5883;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x98);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x98) = plVar2;
      goto LAB_1469b5883;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x98) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1469b5883:
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
                    /* WARNING: Could not recover jumptable at 0x0001469b58a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1469b58b0 FUN_1469b58b0 body=19 status=ok
// SIG undefined FUN_1469b58b0(void)

undefined8 FUN_1469b58b0(undefined8 param_1,undefined8 *param_2)

{
  (*(code *)*param_2)();
  return param_1;
}



// FUNCTION 1469b58e2 FUN_1469b58e2 body=35 status=ok
// SIG undefined FUN_1469b58e2(void)

undefined8 FUN_1469b58e2(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_144a81a0a();
  (**(code **)(*plVar1 + 0x50))(plVar1,param_2);
  return param_2;
}



// FUNCTION 1469b5906 FUN_1469b5906 body=35 status=ok
// SIG undefined FUN_1469b5906(void)

undefined8 FUN_1469b5906(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_144a81a0a();
  (**(code **)(*plVar1 + 0x50))(plVar1,param_2);
  return param_2;
}



// FUNCTION 1469b592a FUN_1469b592a body=75 status=ok
// SIG undefined FUN_1469b592a(void)

undefined4 *
FUN_1469b592a(longlong *param_1,undefined4 *param_2,undefined4 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  
  uVar4 = (**(code **)(*param_1 + 0x38))(param_1,param_3);
  *param_2 = uVar4;
  *(undefined1 *)(param_2 + 1) = 1;
  plVar3 = *(longlong **)(param_4 + 0x10);
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
  return param_2;
}



// FUNCTION 1469b597a FUN_1469b597a body=31 status=ok
// SIG undefined FUN_1469b597a(void)

undefined8 FUN_1469b597a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469b59c2 FUN_1469b59c2 body=101 status=ok
// SIG undefined FUN_1469b59c2(void)

void FUN_1469b59c2(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 1) != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  param_2 = (undefined8 *)*param_2;
  *param_2 = &DAT_149efe500;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_149efd8c0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = uVar1;
  param_2[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1469b5a28 FUN_1469b5a28 body=101 status=ok
// SIG undefined FUN_1469b5a28(void)

void FUN_1469b5a28(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 1) != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  param_2 = (undefined8 *)*param_2;
  *param_2 = &DAT_149efe500;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_149efd8c0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = uVar1;
  param_2[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1469b5a8e FUN_1469b5a8e body=134 status=ok
// SIG undefined FUN_1469b5a8e(void)

void FUN_1469b5a8e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined **)p_Var1 = &DAT_149efe500;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149efd8c0;
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
                    /* WARNING: Could not recover jumptable at 0x0001469b5b05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1469b5b24 FUN_1469b5b24 body=25 status=ok
// SIG undefined FUN_1469b5b24(void)

undefined8 FUN_1469b5b24(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1469b5b40 FUN_1469b5b40 body=1 status=ok
// SIG undefined FUN_1469b5b40(void)

void FUN_1469b5b40(void)

{
  return;
}



// FUNCTION 1469b5b42 FUN_1469b5b42 body=29 status=ok
// SIG undefined FUN_1469b5b42(void)

undefined8 FUN_1469b5b42(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469b5b60 FUN_1469b5b60 body=29 status=ok
// SIG undefined FUN_1469b5b60(void)

undefined8 FUN_1469b5b60(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469b5b8a FUN_1469b5b8a body=91 status=ok
// SIG undefined FUN_1469b5b8a(void)

void FUN_1469b5b8a(longlong param_1,int param_2,int param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uStack_20 = (double)param_3;
  local_28 = (double)param_2;
  FUN_1469b5c96(SUB84(uStack_20,0),&local_28);
  *(undefined4 *)(param_1 + 0x10) = (undefined4)local_28;
  *(undefined4 *)(param_1 + 0x14) = local_28._4_4_;
  *(undefined4 *)(param_1 + 0x18) = (undefined4)uStack_20;
  *(undefined4 *)(param_1 + 0x1c) = uStack_20._4_4_;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469b5bfe FUN_1469b5bfe body=148 status=ok
// SIG undefined FUN_1469b5bfe(void)

void FUN_1469b5bfe(longlong *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined1 auStack_48 [32];
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == (undefined4 *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
  }
  else {
    *(undefined4 *)(param_1 + 4) = *param_2;
    *(undefined4 *)((longlong)param_1 + 0x24) = param_2[1];
    *(int *)(param_1 + 5) = param_2[2] + -1;
    *(int *)((longlong)param_1 + 0x2c) = param_2[3] + -1;
  }
  (**(code **)(*param_1 + 0x20))(param_1,&local_28);
  cVar1 = FUN_1469b5c96(param_1,&local_28);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x28))(param_1,(int)local_28,(int)local_20);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469b5c96 FUN_1469b5c96 body=120 status=ok
// SIG undefined FUN_1469b5c96(void)

undefined8 FUN_1469b5c96(longlong param_1,double *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  double dVar4;
  
  iVar1 = *(int *)(param_1 + 0x28);
  iVar3 = *(int *)(param_1 + 0x24);
  if ((*(int *)(param_1 + 0x2c) - iVar3) * (iVar1 - *(int *)(param_1 + 0x20)) < 1) {
    uVar2 = 0;
  }
  else {
    dVar4 = (double)*(int *)(param_1 + 0x20);
    if ((*param_2 < dVar4) || (dVar4 = (double)iVar1, dVar4 < *param_2)) {
      *param_2 = dVar4;
      iVar3 = *(int *)(param_1 + 0x24);
      uVar2 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
    }
    else {
      uVar2 = 0;
    }
    dVar4 = (double)iVar3;
    if ((param_2[1] < dVar4) || (dVar4 = (double)*(int *)(param_1 + 0x2c), dVar4 < param_2[1])) {
      param_2[1] = dVar4;
      uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    }
  }
  return uVar2;
}



// FUNCTION 1469b5d0e FUN_1469b5d0e body=132 status=ok
// SIG undefined FUN_1469b5d0e(void)

void FUN_1469b5d0e(longlong param_1,int param_2)

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



// FUNCTION 1469b5d94 FUN_1469b5d94 body=41 status=ok
// SIG undefined FUN_1469b5d94(void)

void FUN_1469b5d94(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return;
  }
  FUN_1469b5ddc(lVar1);
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 1469b5dbe FUN_1469b5dbe body=29 status=ok
// SIG undefined FUN_1469b5dbe(void)

undefined8 FUN_1469b5dbe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469b5ddc FUN_1469b5ddc body=54 status=ok
// SIG undefined FUN_1469b5ddc(void)

void FUN_1469b5ddc(longlong param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x6c) == '\x01') {
    *(undefined1 *)(param_1 + 0x6c) = 0;
  }
  if (*(char *)(param_1 + 100) == '\x01') {
    *(undefined1 *)(param_1 + 100) = 0;
  }
  if (*(char *)(param_1 + 0x5c) == '\x01') {
    *(undefined1 *)(param_1 + 0x5c) = 0;
  }
  if (*(char *)(param_1 + 0x54) == '\x01') {
    *(undefined1 *)(param_1 + 0x54) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 1469b5e12 FUN_1469b5e12 body=125 status=ok
// SIG undefined FUN_1469b5e12(void)

void FUN_1469b5e12(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3) == *param_2) {
        if ((int)(~uVar3 >> 4) != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 0x10;
    } while (lVar4 << 4 != uVar3);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1469b5e90(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar4 * 0x10) = *param_2;
  *(longlong *)(lVar2 + 8 + lVar4 * 0x10) = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



// FUNCTION 1469b5e90 FUN_1469b5e90 body=132 status=ok
// SIG undefined FUN_1469b5e90(void)

void FUN_1469b5e90(longlong param_1,int param_2)

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



// FUNCTION 1469b5f16 FUN_1469b5f16 body=322 status=ok
// SIG undefined FUN_1469b5f16(void)

void FUN_1469b5f16(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
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



// FUNCTION 1469b605a FUN_1469b605a body=132 status=ok
// SIG undefined FUN_1469b605a(void)

void FUN_1469b605a(longlong param_1,int param_2)

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



// FUNCTION 1469b60e0 FUN_1469b60e0 body=130 status=ok
// SIG undefined FUN_1469b60e0(void)

void FUN_1469b60e0(longlong *param_1,longlong *param_2)

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



// FUNCTION 1469b6164 FUN_1469b6164 body=106 status=ok
// SIG undefined FUN_1469b6164(void)

void FUN_1469b6164(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)(int)param_2 * 0x10 + lVar1);
  FUN_1449db362(_Dst);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x10),(longlong)iVar3 << 4);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 1469b61ce FUN_1469b61ce body=62 status=ok
// SIG undefined FUN_1469b61ce(void)

void FUN_1469b61ce(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1469b620c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1469b620c FUN_1469b620c body=93 status=ok
// SIG undefined FUN_1469b620c(void)

ulonglong FUN_1469b620c(uint param_1,uint param_2)

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



// FUNCTION 1469b626a FUN_1469b626a body=263 status=ok
// SIG undefined FUN_1469b626a(void)

void FUN_1469b626a(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  iVar1 = (int)param_1[1];
  lVar13 = (longlong)iVar1;
  if (lVar13 != 0) {
    plVar2 = (longlong *)*param_1;
    iVar12 = 0;
    bVar7 = *plVar2 == *(longlong *)*param_2;
    iVar4 = 0;
    do {
      lVar10 = (longlong)iVar4;
      iVar8 = iVar4 + 1;
      if (iVar4 + 1 < iVar1) {
        iVar8 = iVar1;
      }
      plVar9 = plVar2 + lVar10 * 2 + 2;
      iVar5 = iVar4;
      lVar11 = lVar10;
      do {
        lVar11 = lVar11 + 1;
        iVar6 = iVar8;
        if (lVar13 <= lVar11) break;
        lVar3 = *plVar9;
        iVar5 = iVar5 + 1;
        plVar9 = plVar9 + 2;
        iVar6 = iVar5;
      } while (bVar7 == (lVar3 == *(longlong *)*param_2));
      iVar8 = iVar6 - iVar4;
      if (bVar7 == false) {
        if (iVar12 != iVar4) {
          memmove(plVar2 + (longlong)iVar12 * 2,plVar2 + lVar10 * 2,(longlong)iVar8 << 4);
        }
        iVar12 = iVar12 + iVar8;
      }
      else {
        FUN_145e1062d(plVar2 + lVar10 * 2,iVar8);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar4 = iVar6;
    } while (lVar11 < lVar13);
    *(int *)(param_1 + 1) = iVar12;
  }
  return;
}



// FUNCTION 1469b6372 FUN_1469b6372 body=124 status=ok
// SIG undefined FUN_1469b6372(void)

void FUN_1469b6372(longlong param_1,int param_2)

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
    FUN_1469b63f0(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1469b63f0 FUN_1469b63f0 body=132 status=ok
// SIG undefined FUN_1469b63f0(void)

void FUN_1469b63f0(void *param_1,int param_2,undefined8 param_3)

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



// FUNCTION 1469b6474 FUN_1469b6474 body=29 status=ok
// SIG undefined FUN_1469b6474(void)

undefined8 FUN_1469b6474(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469b6496 FUN_1469b6496 body=132 status=ok
// SIG undefined FUN_1469b6496(void)

void FUN_1469b6496(longlong param_1,int param_2)

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



// FUNCTION 1469b651c FUN_1469b651c body=89 status=ok
// SIG undefined FUN_1469b651c(void)

void FUN_1469b651c(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x10 + *param_1);
  FUN_145e1056b(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1469b6576 FUN_1469b6576 body=62 status=ok
// SIG undefined FUN_1469b6576(void)

void FUN_1469b6576(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1469b65b4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1469b65b4 FUN_1469b65b4 body=93 status=ok
// SIG undefined FUN_1469b65b4(void)

ulonglong FUN_1469b65b4(uint param_1,uint param_2)

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



// FUNCTION 1469b6612 FUN_1469b6612 body=24 status=ok
// SIG undefined FUN_1469b6612(void)

void FUN_1469b6612(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001469b6626. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1469b662a FUN_1469b662a body=29 status=ok
// SIG undefined FUN_1469b662a(void)

undefined8 FUN_1469b662a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469b6648 FUN_1469b6648 body=89 status=ok
// SIG undefined FUN_1469b6648(void)

void FUN_1469b6648(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x10 + *param_1);
  FUN_145e105e4(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1469b66a2 FUN_1469b66a2 body=62 status=ok
// SIG undefined FUN_1469b66a2(void)

void FUN_1469b66a2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1469b66e0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1469b66e0 FUN_1469b66e0 body=93 status=ok
// SIG undefined FUN_1469b66e0(void)

ulonglong FUN_1469b66e0(uint param_1,uint param_2)

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



// FUNCTION 1469b673e FUN_1469b673e body=38 status=ok
// SIG undefined FUN_1469b673e(void)

undefined8 FUN_1469b673e(undefined8 param_1,int param_2)

{
  FUN_14120b380();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469b676a FUN_1469b676a body=9 status=ok
// SIG undefined FUN_1469b676a(void)

void FUN_1469b676a(longlong param_1)

{
  FUN_1469b6826(param_1 + 0x10);
  return;
}



// FUNCTION 1469b6774 FUN_1469b6774 body=29 status=ok
// SIG undefined FUN_1469b6774(void)

undefined8 FUN_1469b6774(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469b6792 FUN_1469b6792 body=38 status=ok
// SIG undefined FUN_1469b6792(void)

undefined8 FUN_1469b6792(undefined8 param_1,int param_2)

{
  FUN_1469b6826();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469b6826 FUN_1469b6826 body=224 status=ok
// SIG undefined FUN_1469b6826(void)

void FUN_1469b6826(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149efe260;
  param_1[0x4d] = &PTR_LAB_149efe4b0;
  FUN_1449db362(param_1 + 0x72);
  FUN_1449db362(param_1 + 0x70);
  FUN_1449db362(param_1 + 0x6d);
  FUN_1449db362(param_1 + 0x69);
  FUN_141515cba(param_1 + 0x57);
  plVar3 = (longlong *)param_1[0x56];
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
  plVar3 = (longlong *)param_1[0x54];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  FUN_1449db362(param_1 + 0x51);
  if ((longlong *)param_1[0x4e] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x4e] + 0x10))();
  }
  *param_1 = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 1469b6906 FUN_1469b6906 body=311 status=ok
// SIG undefined FUN_1469b6906(void)

void FUN_1469b6906(longlong *param_1)

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
      plVar3 = *(longlong **)(*local_68 + 0x10 + (longlong)iStack_4c * 0x20);
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
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469b6a3e FUN_1469b6a3e body=180 status=ok
// SIG undefined FUN_1469b6a3e(void)

void FUN_1469b6a3e(undefined4 param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  bool bVar6;
  ulonglong uVar7;
  
  uVar4 = (ulonglong)DAT_14c867988;
  if ((longlong)uVar4 < 1) {
    return;
  }
  bVar6 = false;
  DAT_14c867994 = DAT_14c867994 + 1;
  do {
    lVar5 = uVar4 * 0x10 + -8;
    uVar7 = uVar4;
    while (((*(int *)(DAT_14c867980 + lVar5) != 0 &&
            (plVar1 = *(longlong **)(DAT_14c867980 + -8 + lVar5), plVar1 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1), cVar3 != '\0'))) {
      lVar5 = lVar5 + -0x10;
      bVar2 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar2) {
        DAT_14c867994 = DAT_14c867994 + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1469b6acb;
      }
    }
    uVar4 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  DAT_14c867994 = DAT_14c867994 + -1;
LAB_1469b6acb:
  FUN_14474d06a(&DAT_14c867980,0);
  return;
}



// FUNCTION 1469b6af2 FUN_1469b6af2 body=130 status=ok
// SIG undefined FUN_1469b6af2(void)

void FUN_1469b6af2(longlong *param_1,longlong *param_2)

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



// FUNCTION 1469b6b76 FUN_1469b6b76 body=147 status=ok
// SIG undefined FUN_1469b6b76(void)

void FUN_1469b6b76(longlong param_1,int param_2)

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



// FUNCTION 1469b6c0a FUN_1469b6c0a body=110 status=ok
// SIG undefined FUN_1469b6c0a(void)

void FUN_1469b6c0a(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x78);
  if (param_2 <= (int)uVar1) {
    iVar5 = 7;
    if (7 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (7 < *(uint *)(param_1 + 0x7c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x7c) = iVar5;
    FUN_1469b1d36(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1469b6c7a FUN_1469b6c7a body=89 status=ok
// SIG undefined FUN_1469b6c7a(void)

void FUN_1469b6c7a(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x10 + *param_1);
  FUN_1402c4db1(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1469b6cd4 FUN_1469b6cd4 body=62 status=ok
// SIG undefined FUN_1469b6cd4(void)

void FUN_1469b6cd4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1469b6d12(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1469b6d12 FUN_1469b6d12 body=93 status=ok
// SIG undefined FUN_1469b6d12(void)

ulonglong FUN_1469b6d12(uint param_1,uint param_2)

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



// FUNCTION 1469b6d70 FUN_1469b6d70 body=48 status=ok
// SIG undefined FUN_1469b6d70(void)

void FUN_1469b6d70(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 1469b6da0 FUN_1469b6da0 body=62 status=ok
// SIG undefined FUN_1469b6da0(void)

void FUN_1469b6da0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1469b6e6a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 1469b6dde FUN_1469b6dde body=139 status=ok
// SIG undefined FUN_1469b6dde(void)

void FUN_1469b6dde(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 0x10 + (longlong)(int)param_2 * 0x18);
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
  iVar6 = ~param_2 + iVar5;
  if (iVar6 != 0) {
    iVar7 = 1;
    if (iVar6 < 1) {
      iVar7 = iVar6;
    }
    memmove((void *)(lVar3 + (longlong)(int)param_2 * 0x18),
            (void *)(lVar3 + (longlong)(iVar5 - iVar7) * 0x18),(longlong)iVar7 * 0x18);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 1469b6e6a FUN_1469b6e6a body=112 status=ok
// SIG undefined FUN_1469b6e6a(void)

ulonglong FUN_1469b6e6a(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1469b6ea4;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x18,8);
      param_2 = param_2 / 0x18;
    }
  }
LAB_1469b6ea4:
  return param_2 & 0xffffffff;
}



// FUNCTION 1469b6eda FUN_1469b6eda body=48 status=ok
// SIG undefined FUN_1469b6eda(void)

void FUN_1469b6eda(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 1469b6f0a FUN_1469b6f0a body=119 status=ok
// SIG undefined FUN_1469b6f0a(void)

void FUN_1469b6f0a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_149ef9e80;
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
  FUN_144760e21(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001469b6f75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1469b6f8c FUN_1469b6f8c body=21 status=ok
// SIG undefined FUN_1469b6f8c(void)

void FUN_1469b6f8c(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = &PTR_FUN_149efef08;
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined4 *)((longlong)param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1469b6fa2 FUN_1469b6fa2 body=87 status=ok
// SIG undefined FUN_1469b6fa2(void)

void FUN_1469b6fa2(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x28);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
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
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001469b6ff5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1469b6ffa FUN_1469b6ffa body=226 status=ok
// SIG undefined FUN_1469b6ffa(void)

undefined4 FUN_1469b6ffa(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  
  if ((longlong)*(int *)(param_1 + 0x78) < 1) {
    uVar6 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x70);
    lVar7 = (longlong)*(int *)(param_1 + 0x78) * 0x10;
    lVar9 = *(longlong *)(lVar2 + -0x10 + lVar7);
    plVar3 = *(longlong **)(lVar2 + -8 + lVar7);
    if (plVar3 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      iVar5 = (int)plVar3[1];
      do {
        plVar8 = (longlong *)0x0;
        if (iVar5 == 0) break;
        LOCK();
        iVar4 = (int)plVar3[1];
        bVar10 = iVar5 == iVar4;
        if (bVar10) {
          *(int *)(plVar3 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        iVar5 = iVar4;
        UNLOCK();
        plVar8 = plVar3;
      } while (!bVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    if (plVar8 == (longlong *)0x0) {
      lVar9 = 0;
    }
    if (lVar9 == *param_2 && lVar9 != 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_14497f9ca((longlong *)(param_1 + 0x70));
    }
    if (plVar8 != (longlong *)0x0) {
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
  }
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar3 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  return uVar6;
}



// FUNCTION 1469b70dc FUN_1469b70dc body=85 status=ok
// SIG undefined FUN_1469b70dc(void)

undefined4 FUN_1469b70dc(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  
  if ((*param_2 == 0) || (*(int *)(param_1 + 0x78) < 1)) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_14497f9ca(param_1 + 0x70);
  }
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
  return uVar4;
}



// FUNCTION 1469b7132 FUN_1469b7132 body=137 status=ok
// SIG undefined FUN_1469b7132(void)

undefined4 FUN_1469b7132(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  uVar4 = FUN_1469b71bc(param_1,&local_28,10);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469b71bc FUN_1469b71bc body=311 status=ok
// SIG undefined FUN_1469b71bc(void)

ulonglong FUN_1469b71bc(longlong param_1,longlong *param_2,uint param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 unaff_RDI;
  ulonglong uVar8;
  bool bVar9;
  
  if (*(int *)(param_1 + 0x150) != *(int *)(param_1 + 0x17c)) {
    lVar4 = param_1 + 0x180;
    if (*(longlong *)(param_1 + 0x188) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x188);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 400) - 1U & param_3) * 4);
    if (iVar6 != -1) {
      do {
        lVar4 = *(longlong *)(param_1 + 0x148) + (longlong)iVar6 * 0x30;
        if (*(uint *)(*(longlong *)(param_1 + 0x148) + (longlong)iVar6 * 0x30) == param_3) {
          if ((lVar4 + 8U & 0xfffffffffffffff7) != 0) {
            lVar5 = (longlong)*(int *)(lVar4 + 0x10) * 0x10;
            plVar2 = *(longlong **)(*(longlong *)(lVar4 + 8) + -8 + lVar5);
            if (plVar2 == (longlong *)0x0) {
              uVar8 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),*param_2 == 0);
              goto LAB_1469b71d6;
            }
            lVar4 = *(longlong *)(*(longlong *)(lVar4 + 8) + -0x10 + lVar5);
            LOCK();
            *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
            UNLOCK();
            iVar6 = (int)plVar2[1];
            goto LAB_1469b7288;
          }
          break;
        }
        iVar6 = *(int *)(lVar4 + 0x28);
      } while (iVar6 != -1);
    }
  }
  uVar8 = 0;
  goto LAB_1469b71d6;
  while( true ) {
    LOCK();
    iVar3 = (int)plVar2[1];
    bVar9 = iVar6 == iVar3;
    if (bVar9) {
      *(int *)(plVar2 + 1) = iVar6 + 1;
      iVar3 = iVar6;
    }
    iVar6 = iVar3;
    UNLOCK();
    plVar7 = plVar2;
    if (bVar9) break;
LAB_1469b7288:
    plVar7 = (longlong *)0x0;
    if (iVar6 == 0) break;
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar2 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar2 + 0x10))();
  }
  if (plVar7 == (longlong *)0x0) {
    lVar4 = 0;
  }
  uVar8 = CONCAT71((int7)((ulonglong)lVar4 >> 8),lVar4 == *param_2);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar7 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
LAB_1469b71d6:
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar2 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  return uVar8 & 0xffffffff;
}



// FUNCTION 1469b72f4 FUN_1469b72f4 body=22 status=ok
// SIG undefined FUN_1469b72f4(void)

undefined8 FUN_1469b72f4(undefined8 param_1,undefined8 param_2)

{
  FUN_1469b730a();
  return param_2;
}



// FUNCTION 1469b730a FUN_1469b730a body=229 status=ok
// SIG undefined FUN_1469b730a(void)

undefined8 * FUN_1469b730a(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  
  if (*(int *)(param_1 + 0x150) != *(int *)(param_1 + 0x17c)) {
    lVar5 = param_1 + 0x180;
    if (*(longlong *)(param_1 + 0x188) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x188);
    }
    iVar7 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 400) - 1U & 10) * 4);
    if (iVar7 != -1) {
      do {
        lVar5 = *(longlong *)(param_1 + 0x148) + (longlong)iVar7 * 0x30;
        if (*(int *)(*(longlong *)(param_1 + 0x148) + (longlong)iVar7 * 0x30) == 10) {
          if ((lVar5 + 8U & 0xfffffffffffffff7) != 0) {
            lVar6 = (longlong)*(int *)(lVar5 + 0x10) * 0x10;
            plVar2 = *(longlong **)(*(longlong *)(lVar5 + 8) + -8 + lVar6);
            if (plVar2 != (longlong *)0x0) {
              uVar3 = *(undefined8 *)(*(longlong *)(lVar5 + 8) + -0x10 + lVar6);
              LOCK();
              *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
              UNLOCK();
              *param_2 = 0;
              param_2[1] = plVar2;
              iVar7 = (int)plVar2[1];
              goto LAB_1469b73b8;
            }
          }
          break;
        }
        iVar7 = *(int *)(lVar5 + 0x28);
      } while (iVar7 != -1);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
  while( true ) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar8 = iVar7 == iVar4;
    if (bVar8) {
      *(int *)(plVar2 + 1) = iVar7 + 1;
      iVar4 = iVar7;
    }
    iVar7 = iVar4;
    UNLOCK();
    if (bVar8) break;
LAB_1469b73b8:
    if (iVar7 == 0) {
      param_2[1] = 0;
      break;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar2 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar2 + 0x10))();
  }
  if (param_2[1] != 0) {
    *param_2 = uVar3;
  }
  return param_2;
}



// FUNCTION 1469b73f0 FUN_1469b73f0 body=107 status=ok
// SIG undefined FUN_1469b73f0(void)

void FUN_1469b73f0(longlong param_1,char param_2)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(char *)(param_1 + 0x48) = param_2;
  if (param_2 == '\0') {
    local_50[0] = 1;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
    FUN_1428f6564(0,local_50);
    FUN_1428f6884(local_50);
  }
  else {
    *(undefined1 *)(param_1 + 0x49) = 1;
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469b745c FUN_1469b745c body=16 status=ok
// SIG undefined FUN_1469b745c(void)

void FUN_1469b745c(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_141653418(param_1,10,param_2,param_3);
  return;
}



// FUNCTION 1469b746c FUN_1469b746c body=131 status=ok
// SIG undefined FUN_1469b746c(void)

undefined4 FUN_1469b746c(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  uVar4 = FUN_1469b74f0(param_1,&local_28);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469b74f0 FUN_1469b74f0 body=329 status=ok
// SIG undefined FUN_1469b74f0(void)

ulonglong FUN_1469b74f0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 unaff_RDI;
  ulonglong uVar8;
  bool bVar9;
  
  if (*(int *)(param_1 + 0x210) != *(int *)(param_1 + 0x23c)) {
    lVar5 = param_1 + 0x240;
    if (*(longlong *)(param_1 + 0x248) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x248);
    }
    iVar6 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x250) - 1U & 10) * 4);
    if (iVar6 != -1) {
      do {
        lVar5 = *(longlong *)(param_1 + 0x208) + (longlong)iVar6 * 0x30;
        if (*(int *)(*(longlong *)(param_1 + 0x208) + (longlong)iVar6 * 0x30) == 10) {
          if (((longlong *)(lVar5 + 8) != (longlong *)0x0 && lVar5 != 0) &&
             (0 < (longlong)*(int *)(lVar5 + 0x10))) {
            lVar3 = *(longlong *)(lVar5 + 8);
            lVar5 = (longlong)*(int *)(lVar5 + 0x10) * 0x10;
            plVar2 = *(longlong **)(lVar3 + -8 + lVar5);
            if (plVar2 == (longlong *)0x0) {
              uVar8 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),*param_2 == 0);
              goto LAB_1469b750a;
            }
            lVar5 = *(longlong *)(lVar3 + -0x10 + lVar5);
            LOCK();
            *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
            UNLOCK();
            iVar6 = (int)plVar2[1];
            goto LAB_1469b75ce;
          }
          break;
        }
        iVar6 = *(int *)(lVar5 + 0x28);
      } while (iVar6 != -1);
    }
  }
  uVar8 = 0;
  goto LAB_1469b750a;
  while( true ) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar9 = iVar6 == iVar4;
    if (bVar9) {
      *(int *)(plVar2 + 1) = iVar6 + 1;
      iVar4 = iVar6;
    }
    iVar6 = iVar4;
    UNLOCK();
    plVar7 = plVar2;
    if (bVar9) break;
LAB_1469b75ce:
    plVar7 = (longlong *)0x0;
    if (iVar6 == 0) break;
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar2 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar2 + 0x10))();
  }
  if (plVar7 == (longlong *)0x0) {
    lVar5 = 0;
  }
  uVar8 = CONCAT71((int7)((ulonglong)lVar5 >> 8),lVar5 == *param_2);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar7 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
LAB_1469b750a:
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar2 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  return uVar8 & 0xffffffff;
}



// FUNCTION 1469b763a FUN_1469b763a body=479 status=ok
// SIG undefined FUN_1469b763a(void)

ulonglong FUN_1469b763a(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  ulonglong uVar11;
  bool bVar12;
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
  plVar2 = (longlong *)(param_1 + 0x208);
  lVar3 = param_1 + 0x218;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar3;
  if (*(int *)(param_1 + 0x230) == 0) {
    iVar10 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar10 = *(int *)(param_1 + 0x230);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar2;
  if ((iStack_54 != iVar10) || (uStack_60 != lVar3)) {
    do {
      lVar8 = (longlong)*(int *)(*local_90 + 0x10 + (longlong)iStack_74 * 0x30);
      if (0 < lVar8) {
        lVar4 = *(longlong *)(*local_90 + (longlong)iStack_74 * 0x30 + 8);
        lVar8 = lVar8 * 0x10;
        plVar5 = *(longlong **)(lVar4 + -8 + lVar8);
        if (plVar5 == (longlong *)0x0) {
          if (*param_2 == 0) goto LAB_1469b7812;
        }
        else {
          lVar8 = *(longlong *)(lVar4 + -0x10 + lVar8);
          LOCK();
          *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
          UNLOCK();
          iVar7 = (int)plVar5[1];
          do {
            if (iVar7 == 0) {
              plVar9 = (longlong *)0x0;
              break;
            }
            LOCK();
            iVar6 = (int)plVar5[1];
            bVar12 = iVar7 == iVar6;
            if (bVar12) {
              *(int *)(plVar5 + 1) = iVar7 + 1;
              iVar6 = iVar7;
            }
            iVar7 = iVar6;
            UNLOCK();
            plVar9 = plVar5;
          } while (!bVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar5 + 0x10))();
          }
          lVar4 = *param_2;
          if (plVar9 == (longlong *)0x0) {
            lVar8 = 0;
          }
          else {
            LOCK();
            plVar5 = plVar9 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)*plVar5 == 0) {
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
          if (lVar8 == lVar4) {
LAB_1469b7812:
            uVar11 = CONCAT71((int7)((ulonglong)&local_88 >> 8),1);
            goto LAB_1469b76da;
          }
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar2 || (CONCAT44(uStack_7c,uStack_80) != lVar3 || iStack_74 != iVar10));
  }
  uVar11 = 0;
LAB_1469b76da:
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar2 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar11 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469b781a FUN_1469b781a body=973 status=ok
// SIG undefined FUN_1469b781a(void)

void FUN_1469b781a(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 auStack_328 [32];
  undefined1 local_308;
  longlong local_300;
  longlong *local_2f8;
  undefined8 local_2f0;
  longlong local_2e8;
  undefined8 local_2e0;
  undefined4 local_2d8;
  undefined4 local_2d4;
  longlong local_2d0;
  longlong local_2c8;
  undefined1 local_2c0 [136];
  undefined **local_238;
  undefined2 local_230;
  undefined1 local_22e;
  undefined8 local_22c;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined *local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  longlong *local_1e8;
  undefined8 uStack_1e0;
  undefined4 local_1d8;
  undefined2 local_1d4;
  undefined7 local_1d0;
  undefined4 uStack_1c9;
  undefined8 local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  longlong *local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_328;
  lVar3 = *(longlong *)(param_1 + 0x1e8);
  if (lVar3 != 0) {
    iVar9 = 0;
    local_230 = 0;
    local_22e = 0;
    local_22c = 0xffffffff00000000;
    local_220 = 0;
    local_238 = &PTR_FUN_149eda650;
    local_218 = 0;
    uStack_210 = 0;
    local_208 = 0;
    local_200 = &DAT_14c96b1e8;
    local_1f8 = 0;
    uStack_1f0 = 0;
    local_1e8 = (longlong *)0x0;
    uStack_1e0 = 0;
    local_1d8 = 0x3f800000;
    local_1d4 = 0;
    local_1d0 = 0;
    uStack_1c9 = 0;
    local_2c8 = *(longlong *)(param_1 + 0x1f0);
    if (local_2c8 != 0) {
      LOCK();
      *(int *)(local_2c8 + 8) = *(int *)(local_2c8 + 8) + 1;
      UNLOCK();
    }
    local_2d0 = lVar3;
    FUN_1403d061a(local_2c0,&local_238,&local_2d0);
    plVar2 = (longlong *)(param_1 + 0x208);
    lVar3 = param_1 + 0x218;
    local_1c0 = 0x100000000;
    local_1b0 = 0xffffffff;
    local_1a8 = 0;
    local_1b8 = lVar3;
    if (*(int *)(param_1 + 0x230) != 0) {
      FUN_1449c0562(&local_1c0);
      iVar9 = *(int *)(param_1 + 0x230);
    }
    local_2e0 = local_1b0;
    uVar4 = local_2e0;
    local_2d8 = local_1a8;
    local_2d4 = local_1a4;
    local_2f0 = local_1c0;
    local_2e8 = local_1b8;
    local_2e0._4_4_ = (int)((ulonglong)local_1b0 >> 0x20);
    local_300 = param_1;
    local_2f8 = plVar2;
    if ((local_2e0._4_4_ != iVar9) || (local_1b8 != lVar3)) {
      iVar5 = local_2e0._4_4_;
      local_2e0 = uVar4;
      do {
        local_1c0 = CONCAT71(local_1c0._1_7_,DAT_14c96b238);
        local_98 = (longlong *)0x0;
        local_90 = 0x400000000;
        local_88 = 0;
        local_70 = 0;
        uStack_68 = 0;
        local_80 = 0;
        uStack_78 = 0;
        local_308 = DAT_14c96b238;
        FUN_1404dd558(*local_2f8 + (longlong)iVar5 * 0x30 + 8,&local_1c0,0,0);
        lVar7 = (longlong)(int)local_90;
        if (0 < lVar7) {
          uVar8 = lVar7 + 1;
          lVar7 = lVar7 * 0x48 + -0x10;
          do {
            plVar6 = local_98;
            if (local_98 == (longlong *)0x0) {
              plVar6 = &local_1b8;
            }
            (**(code **)(**(longlong **)((longlong)plVar6 + lVar7) + 200))
                      (*(longlong **)((longlong)plVar6 + lVar7),local_2c0);
            uVar8 = uVar8 - 1;
            lVar7 = lVar7 + -0x48;
          } while (1 < uVar8);
        }
        FUN_1447fa21a(&local_1c0);
        local_2e0 = CONCAT44(local_2e0._4_4_,(uint)local_2e0 & ~local_2f0._4_4_);
        FUN_1449c0562(&local_2f0);
        iVar5 = local_2e0._4_4_;
        uVar4 = local_2e0;
      } while (local_2f8 != plVar2 || (local_2e8 != lVar3 || local_2e0._4_4_ != iVar9));
    }
    local_2e0 = uVar4;
    lVar3 = local_300;
    (**(code **)(**(longlong **)(local_300 + 0x1e8) + 0x10))
              (*(longlong **)(local_300 + 0x1e8),0,&local_238);
    if (*(int *)(lVar3 + 0x210) != *(int *)(lVar3 + 0x23c)) {
      FUN_1469e5fa2(plVar2);
      FUN_1469e60ea(plVar2);
    }
    *(undefined8 *)(lVar3 + 0x1e8) = 0;
    plVar2 = *(longlong **)(lVar3 + 0x1f0);
    if (plVar2 != (longlong *)0x0) {
      *(undefined8 *)(lVar3 + 0x1f0) = 0;
      LOCK();
      plVar6 = plVar2 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
    FUN_1469ac82c(local_2c0);
    plVar2 = local_1e8;
    local_238 = &PTR_FUN_149eda650;
    if (local_1e8 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_1e8 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_1e8)(local_1e8);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469b7be8 FUN_1469b7be8 body=941 status=ok
// SIG undefined FUN_1469b7be8(void)

void FUN_1469b7be8(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_2a8 [32];
  undefined1 *local_288;
  undefined1 local_271;
  LARGE_INTEGER local_270;
  longlong *local_268;
  undefined8 local_258;
  longlong *local_250;
  undefined8 local_248;
  longlong *local_240;
  undefined8 local_238;
  longlong *local_230;
  undefined8 local_228;
  longlong *local_220;
  longlong local_218;
  longlong *local_210;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  FUN_14589483e();
  *(undefined8 *)(param_1 + 0x298) = *param_2;
  plVar2 = (longlong *)param_2[1];
  plVar6 = *(longlong **)(param_1 + 0x2a0);
  if (plVar6 != plVar2) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar6 = *(longlong **)(param_1 + 0x2a0);
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x2a0) = plVar2;
  }
  FUN_1469b7f96(param_1,&local_218);
  lVar4 = local_218;
  FUN_1469b80c8(&local_208);
  (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,&local_258);
  local_248 = local_258;
  local_240 = local_250;
  if (local_250 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_250 + 1) = (int)local_250[1] + 1;
    UNLOCK();
  }
  uVar5 = FUN_1469b8142(&local_208,&local_248);
  local_288 = &local_271;
  FUN_1469e620a(&local_270,"SWeakWidget",
                ".\\Runtime/Slate/Private/Framework/Application/SlateUser.cpp",0x225);
  FUN_1469b81c8(&local_270,&local_238,uVar5);
  local_228 = local_238;
  local_220 = local_230;
  if (local_230 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_230 + 1) = (int)local_230[1] + 1;
    UNLOCK();
  }
  FUN_140763be6(lVar4,&local_228);
  if (local_230 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_230 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_230)(local_230);
      LOCK();
      piVar1 = (int *)((longlong)local_230 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_230 + 0x10))(local_230);
      }
    }
  }
  if (local_268 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_268 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_268)(local_268);
      LOCK();
      piVar1 = (int *)((longlong)local_268 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_268 + 0x10))(local_268);
      }
    }
  }
  if (local_250 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_250 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  FUN_1469b823c(&local_208);
  lVar4 = local_218;
  plVar3 = DAT_14c98e618;
  fVar8 = (float)(**(code **)(*DAT_14c98e618 + 0x58))(DAT_14c98e618);
  plVar2 = *(longlong **)(local_218 + 0x510);
  plVar6 = *(longlong **)(local_218 + 0x518);
  if (plVar6 == (longlong *)0x0) {
    fVar9 = (float)(**(code **)(*plVar2 + 0xf8))();
    FUN_1405d299c(lVar4,fVar8 * fVar9);
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    fVar9 = (float)(**(code **)(*plVar2 + 0xf8))();
    FUN_1405d299c(lVar4,fVar8 * fVar9);
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
  local_208 = *param_3;
  local_204 = param_3[1];
  puVar7 = &DAT_14c84635c;
  if ((*(byte *)(local_218 + 0x31) & 0x20) != 0) {
    puVar7 = (undefined8 *)(local_218 + 0x168);
  }
  local_238 = *puVar7;
  local_288 = (undefined1 *)((ulonglong)local_288 & 0xffffffffffffff00);
  local_200 = local_208;
  local_1fc = local_204;
  (**(code **)(*plVar3 + 0x110))(plVar3,&local_270);
  ((LARGE_INTEGER *)(param_1 + 0x2c8))->QuadPart = (LONGLONG)local_270;
  FUN_1469807c6(local_218);
  if ((*(float *)(local_218 + 0x35c) != 0.0) || (NAN(*(float *)(local_218 + 0x35c)))) {
    *(undefined4 *)(local_218 + 0x35c) = 0;
    (**(code **)(**(longlong **)(local_218 + 0x510) + 0x98))();
  }
  thunk_FUN_1616686ea(local_218);
  QueryPerformanceCounter(&local_270);
  *(double *)(param_1 + 0x2d8) = (double)local_270.QuadPart * DAT_14c83f420 + 16777216.0;
  if (local_210 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_210 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  if ((local_50 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469b7f96 FUN_1469b7f96 body=304 status=ok
// SIG undefined FUN_1469b7f96(void)

undefined8 * FUN_1469b7f96(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  undefined1 local_30 [8];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(longlong *)(param_1 + 0x288) == 0) || (lVar5 = *(longlong *)(param_1 + 0x290), lVar5 == 0)
      ) || (*(int *)(lVar5 + 8) < 1)) {
    FUN_1469800c2(param_2);
    local_40 = *param_2;
    *(undefined8 *)(param_1 + 0x288) = local_40;
    local_38 = (longlong *)param_2[1];
    plVar4 = *(longlong **)(param_1 + 0x290);
    if (plVar4 != local_38) {
      if (local_38 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_38 + 0xc) = *(int *)((longlong)local_38 + 0xc) + 1;
        UNLOCK();
        plVar4 = *(longlong **)(param_1 + 0x290);
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))();
        }
      }
      *(longlong **)(param_1 + 0x290) = local_38;
      local_40 = *param_2;
      local_38 = (longlong *)param_2[1];
    }
    plVar4 = DAT_14c98e618;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
    }
    (**(code **)(*plVar4 + 0x10))(plVar4,local_30,&local_40,0);
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_28 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar1 = (int *)((longlong)local_28 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_28 + 0x10))(local_28);
        }
      }
    }
  }
  else {
    iVar3 = *(int *)(lVar5 + 8);
    uVar6 = 0;
    do {
      if (iVar3 == 0) {
        lVar5 = 0;
        goto LAB_1469b809e;
      }
      LOCK();
      iVar2 = *(int *)(lVar5 + 8);
      bVar7 = iVar3 == iVar2;
      if (bVar7) {
        *(int *)(lVar5 + 8) = iVar3 + 1;
        iVar2 = iVar3;
      }
      iVar3 = iVar2;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x288);
LAB_1469b809e:
    *param_2 = uVar6;
    param_2[1] = lVar5;
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1469b80c8 FUN_1469b80c8 body=120 status=ok
// SIG undefined FUN_1469b80c8(void)

longlong FUN_1469b80c8(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined2 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  local_30 = CONCAT11(1,DAT_14c96b23c);
  local_28 = 0;
  uStack_20 = 0;
  *(undefined2 *)(param_1 + 0x70) = local_30;
  FUN_144a450dc(param_1 + 0x78,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469b8142 FUN_1469b8142 body=133 status=ok
// SIG undefined FUN_1469b8142(void)

longlong FUN_1469b8142(longlong param_1,undefined8 *param_2)

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
  plVar5 = *(longlong **)(param_1 + 0x1b0);
  *(undefined8 *)(param_1 + 0x1a8) = uVar3;
  *(longlong *)(param_1 + 0x1b0) = lVar4;
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
  plVar5 = (longlong *)param_2[1];
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



// FUNCTION 1469b81c8 FUN_1469b81c8 body=115 status=ok
// SIG undefined FUN_1469b81c8(void)

longlong * FUN_1469b81c8(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_146ad7d26(*param_1,param_3);
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



// FUNCTION 1469b823c FUN_1469b823c body=64 status=ok
// SIG undefined FUN_1469b823c(void)

void FUN_1469b823c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x1b0);
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
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 1469b827c FUN_1469b827c body=105 status=ok
// SIG undefined FUN_1469b827c(void)

undefined8 FUN_1469b827c(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  bool bVar4;
  
  if (((int)param_2 < 10) && (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc))) {
    lVar1 = param_1 + 0xe0;
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      lVar1 = *(longlong *)(param_1 + 0xe8);
    }
    iVar3 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0xf0) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        bVar4 = *(uint *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar3 * 0x14) == param_2;
        uVar2 = CONCAT71((int7)(int3)((uint)iVar3 >> 8),bVar4);
        if (bVar4) {
          return uVar2;
        }
        iVar3 = *(int *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar3 * 0x14 + 0xc);
      } while (iVar3 != -1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1469b82e6 FUN_1469b82e6 body=263 status=ok
// SIG undefined FUN_1469b82e6(void)

void FUN_1469b82e6(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar3 = *(longlong *)(param_1 + 0x90);
  if ((lVar3 != 0) && (0 < *(int *)(lVar3 + 0x130))) {
    lVar5 = lVar3 + 8;
    if (*(longlong *)(lVar3 + 0x128) != 0) {
      lVar5 = *(longlong *)(lVar3 + 0x128);
    }
    lVar3 = *(longlong *)(lVar5 + 0x38);
    plVar4 = *(longlong **)(lVar5 + 0x40);
    if (plVar4 == (longlong *)0x0) {
      lVar5 = *param_2;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      lVar5 = *param_2;
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
    if (lVar5 == lVar3) {
      *(undefined8 *)(param_1 + 0x90) = 0;
      plVar4 = *(longlong **)(param_1 + 0x98);
      if (plVar4 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x98) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x0001469b8390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1469b83ee FUN_1469b83ee body=243 status=ok
// SIG undefined FUN_1469b83ee(void)

void FUN_1469b83ee(longlong param_1,undefined8 *param_2,undefined8 *param_3)

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
  plVar5 = *(longlong **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(longlong *)(param_1 + 0x20) = lVar4;
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
  uVar3 = *param_3;
  lVar4 = param_3[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(longlong *)(param_1 + 0x30) = lVar4;
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
  plVar5 = (longlong *)param_2[1];
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
  plVar5 = (longlong *)param_3[1];
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
                    /* WARNING: Could not recover jumptable at 0x0001469b84d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1469b84e2 FUN_1469b84e2 body=109 status=ok
// SIG undefined FUN_1469b84e2(void)

void FUN_1469b84e2(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)param_1[7];
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
  plVar3 = (longlong *)param_1[3];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  FUN_1447de57f(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1469b8550 FUN_1469b8550 body=198 status=ok
// SIG undefined FUN_1469b8550(void)

void FUN_1469b8550(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x1e8) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x1f0);
    if (plVar5 == (longlong *)0x0) goto LAB_1469b85df;
    *(undefined8 *)(param_1 + 0x1f0) = 0;
LAB_1469b85a9:
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1469b85df;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar4 = plVar5;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x1e8) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x1f0);
    if (plVar4 != plVar5) {
      *(longlong **)(param_1 + 0x1f0) = plVar4;
      if (plVar5 == (longlong *)0x0) goto LAB_1469b85df;
      goto LAB_1469b85a9;
    }
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_1469b85df;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_1469b85df:
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001469b8609. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1469b8616 FUN_1469b8616 body=178 status=ok
// SIG undefined FUN_1469b8616(void)

longlong * FUN_1469b8616(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar7 = *(longlong **)(param_1 + 0x278);
  bVar3 = true;
  if (plVar7 == (longlong *)0x0) {
LAB_1469b8675:
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar7[1];
    do {
      if (iVar5 == 0) goto LAB_1469b8675;
      LOCK();
      iVar4 = (int)plVar7[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar7 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar8);
    if (*(longlong *)(param_1 + 0x270) != 0) {
      plVar6 = (longlong *)FUN_14142e2d2(*(longlong *)(param_1 + 0x270) + 0x308);
      plVar2 = (longlong *)*plVar6;
      *param_2 = (longlong)plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      *(int *)(param_2 + 1) = (int)plVar6[1];
      goto LAB_1469b869b;
    }
    bVar3 = false;
  }
  plVar6 = (longlong *)FUN_140e82300();
  plVar2 = (longlong *)*plVar6;
  *param_2 = (longlong)plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(int *)(param_2 + 1) = (int)plVar6[1];
  if (bVar3) {
    return param_2;
  }
LAB_1469b869b:
  LOCK();
  plVar2 = plVar7 + 1;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)*plVar2 == 0) {
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  return param_2;
}



// FUNCTION 1469b86c8 FUN_1469b86c8 body=204 status=ok
// SIG undefined FUN_1469b86c8(void)

longlong FUN_1469b86c8(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  
  plVar2 = *(longlong **)(param_1 + 0x278);
  if (plVar2 == (longlong *)0x0) {
    return 0;
  }
  iVar7 = (int)plVar2[1];
  do {
    if (iVar7 == 0) {
      return 0;
    }
    LOCK();
    iVar5 = (int)plVar2[1];
    bVar9 = iVar7 == iVar5;
    if (bVar9) {
      *(int *)(plVar2 + 1) = iVar7 + 1;
      iVar5 = iVar7;
    }
    iVar7 = iVar5;
    UNLOCK();
  } while (!bVar9);
  lVar8 = *(longlong *)(param_1 + 0x270);
  if (lVar8 == 0) {
    lVar8 = 0;
    goto LAB_1469b8775;
  }
  plVar3 = *(longlong **)(lVar8 + 0x510);
  plVar4 = *(longlong **)(lVar8 + 0x518);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (plVar3 == (longlong *)0x0) {
LAB_1469b8732:
    lVar8 = 0x1160;
  }
  else {
    cVar6 = (**(code **)(*plVar3 + 200))();
    lVar8 = 0x10b0;
    if (cVar6 == '\0') goto LAB_1469b8732;
  }
  lVar8 = lVar8 + *(longlong *)(param_1 + 0x280);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
LAB_1469b8775:
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
  return lVar8;
}



// FUNCTION 1469b8794 FUN_1469b8794 body=53 status=ok
// SIG undefined FUN_1469b8794(void)

undefined1 * FUN_1469b8794(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  undefined1 *puVar2;
  
  cVar1 = FUN_1459b8360(param_1 + 0x298);
  puVar2 = &DAT_14c96b23b;
  if (cVar1 != '\0') {
    puVar2 = &DAT_14c96b23c;
  }
  *param_2 = *puVar2;
  return param_2;
}



// FUNCTION 1469b87ca FUN_1469b87ca body=147 status=ok
// SIG undefined FUN_1469b87ca(void)

undefined8 * FUN_1469b87ca(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  float fVar2;
  float fVar3;
  
  cVar1 = FUN_1459b8360(param_1 + 0x298);
  fVar3 = 0.0;
  if (cVar1 != '\0') {
    fVar3 = (float)FUN_14692f614(param_1 + 0x298);
    fVar2 = sinf(fVar3 * 34.55752);
    fVar3 = (1.0 - fVar3) * (fVar2 + 1.0) * 0.5 * 0.4;
  }
  *(undefined4 *)(param_2 + 1) = 0x3f800000;
  *param_2 = &DAT_3f8000003f800000;
  *(float *)((longlong)param_2 + 0xc) = fVar3;
  *(undefined1 *)(param_2 + 2) = 0;
  return param_2;
}



// FUNCTION 1469b885e FUN_1469b885e body=239 status=ok
// SIG undefined FUN_1469b885e(void)

void FUN_1469b885e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 local_98;
  longlong *local_90;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14692f10e(&local_98,0,0x3f800000,0);
  FUN_146980d02(param_1 + 0x30,&local_98);
  FUN_1402bc42a(&local_98);
  local_90 = *(longlong **)(param_1 + -600);
  if (local_90 == (longlong *)0x0) {
LAB_1469b88dd:
    local_98 = 0;
    local_90 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)local_90[1];
    do {
      if (iVar5 == 0) goto LAB_1469b88dd;
      LOCK();
      iVar4 = (int)local_90[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(local_90 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    local_98 = *(undefined8 *)(param_1 + -0x260);
  }
  local_a8 = 1;
  FUN_14692f220(param_1 + 0x30,&local_98,0,0);
  plVar3 = local_90;
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_90 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469b894e FUN_1469b894e body=207 status=ok
// SIG undefined FUN_1469b894e(void)

void FUN_1469b894e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  lVar3 = *(longlong *)(param_1 + 0x120);
  if (lVar3 != 0) {
    lVar4 = *param_2;
    if ((lVar4 == 0) || (*(char *)(param_1 + 0x141) != '\x01')) {
      FUN_1469b8a1e(lVar3,&DAT_14c98dec8);
    }
    else {
      lVar5 = param_2[1];
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
      }
      FUN_14149270a(lVar3);
      plVar6 = *(longlong **)(lVar3 + 0x18);
      *(longlong *)(lVar3 + 0x10) = lVar4;
      *(longlong *)(lVar3 + 0x18) = lVar5;
      FUN_140a5503c(lVar3);
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
    }
  }
  plVar6 = (longlong *)param_2[1];
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
                    /* WARNING: Could not recover jumptable at 0x0001469b89fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1469b8a1e FUN_1469b8a1e body=97 status=ok
// SIG undefined FUN_1469b8a1e(void)

longlong FUN_1469b8a1e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  FUN_14149270a();
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  *(longlong *)(param_1 + 0x18) = lVar4;
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
  FUN_140a5503c(param_1);
  return param_1;
}



// FUNCTION 1469b8a80 FUN_1469b8a80 body=197 status=ok
// SIG undefined FUN_1469b8a80(void)

void FUN_1469b8a80(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  lVar3 = *param_2;
  lVar4 = *(longlong *)(param_1 + 0x128);
  if (lVar3 == 0) {
    if (lVar4 != 0) {
      FUN_1469b8a1e(lVar4,&DAT_14c98dec8);
    }
  }
  else if (lVar4 != 0) {
    lVar5 = param_2[1];
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    FUN_14149270a(lVar4);
    plVar6 = *(longlong **)(lVar4 + 0x18);
    *(longlong *)(lVar4 + 0x10) = lVar3;
    *(longlong *)(lVar4 + 0x18) = lVar5;
    FUN_140a5503c(lVar4);
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
  }
  plVar6 = (longlong *)param_2[1];
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
                    /* WARNING: Could not recover jumptable at 0x0001469b8b23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1469b8b46 FUN_1469b8b46 body=223 status=ok
// SIG undefined FUN_1469b8b46(void)

undefined1 * FUN_1469b8b46(longlong param_1,undefined1 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  bool bVar9;
  
  plVar8 = *(longlong **)(param_1 + 0x278);
  bVar5 = true;
  if (plVar8 == (longlong *)0x0) {
LAB_1469b8bc4:
    plVar8 = (longlong *)0x0;
  }
  else {
    iVar7 = (int)plVar8[1];
    do {
      if (iVar7 == 0) goto LAB_1469b8bc4;
      LOCK();
      iVar6 = (int)plVar8[1];
      bVar9 = iVar7 == iVar6;
      if (bVar9) {
        *(int *)(plVar8 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar9);
    lVar2 = *(longlong *)(param_1 + 0x270);
    if (lVar2 != 0) {
      plVar3 = *(longlong **)(lVar2 + 0x510);
      plVar4 = *(longlong **)(lVar2 + 0x518);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x38))();
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar4 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
    }
    bVar5 = false;
  }
  *param_2 = 1;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  if (!bVar5) {
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
  return param_2;
}



// FUNCTION 1469b8c26 FUN_1469b8c26 body=243 status=ok
// SIG undefined FUN_1469b8c26(void)

undefined1 * FUN_1469b8c26(longlong param_1,undefined1 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  longlong *plVar9;
  bool bVar10;
  
  plVar9 = *(longlong **)(param_1 + 0x278);
  bVar5 = true;
  if (plVar9 == (longlong *)0x0) {
LAB_1469b8cb6:
    plVar9 = (longlong *)0x0;
  }
  else {
    iVar8 = (int)plVar9[1];
    do {
      if (iVar8 == 0) goto LAB_1469b8cb6;
      LOCK();
      iVar6 = (int)plVar9[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar9 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    lVar2 = *(longlong *)(param_1 + 0x270);
    if (lVar2 != 0) {
      plVar3 = *(longlong **)(lVar2 + 0x510);
      plVar4 = *(longlong **)(lVar2 + 0x518);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      if (plVar3 != (longlong *)0x0) {
        bVar7 = (**(code **)(*plVar3 + 0x70))(plVar3);
        (**(code **)(*plVar3 + 0x40 + (ulonglong)bVar7 * 8))(plVar3);
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar4 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
    }
    bVar5 = false;
  }
  *param_2 = 1;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  if (!bVar5) {
    LOCK();
    plVar3 = plVar9 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  return param_2;
}



// FUNCTION 1469b8d1a FUN_1469b8d1a body=368 status=ok
// SIG undefined FUN_1469b8d1a(void)

undefined8 FUN_1469b8d1a(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_78 [40];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  wchar_t *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar7 = *(longlong **)(param_1 + 0x278);
  bVar3 = true;
  if (plVar7 == (longlong *)0x0) {
LAB_1469b8ddd:
    plVar7 = (longlong *)0x0;
LAB_1469b8ddf:
    local_48 = L"Maximize";
    local_40 = 8;
    FUN_1446e940c(local_4c,&local_48);
    local_48 = L"WindowTitleBar";
    local_40 = 0xe;
    FUN_1446e940c(local_50,&local_48);
    FUN_140208bae(param_2,local_50,local_4c,L"Maximize");
    if (bVar3) goto LAB_1469b8e5d;
  }
  else {
    iVar6 = (int)plVar7[1];
    do {
      if (iVar6 == 0) goto LAB_1469b8ddd;
      LOCK();
      iVar4 = (int)plVar7[1];
      bVar8 = iVar6 == iVar4;
      if (bVar8) {
        *(int *)(plVar7 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar8);
    if ((*(longlong *)(param_1 + 0x270) == 0) || (cVar5 = FUN_1469819c8(), cVar5 == '\0')) {
      bVar3 = false;
      goto LAB_1469b8ddf;
    }
    local_48 = L"MaximizeRestoreDown";
    local_40 = 0x13;
    FUN_1446e940c(local_4c,&local_48);
    local_48 = L"WindowTitleBar";
    local_40 = 0xe;
    FUN_1446e940c(local_50,&local_48);
    FUN_140208bae(param_2,local_50,local_4c,L"Restore Down");
  }
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
LAB_1469b8e5d:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1469b8e8c FUN_1469b8e8c body=160 status=ok
// SIG undefined FUN_1469b8e8c(void)

undefined1 * FUN_1469b8e8c(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  bool bVar7;
  
  plVar6 = *(longlong **)(param_1 + 0x278);
  bVar3 = true;
  if (plVar6 == (longlong *)0x0) {
LAB_1469b8ecb:
    plVar6 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar6[1];
    do {
      if (iVar5 == 0) goto LAB_1469b8ecb;
      LOCK();
      iVar4 = (int)plVar6[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar6 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    if (*(longlong *)(param_1 + 0x270) != 0) {
      FUN_14698158e();
    }
    bVar3 = false;
  }
  *param_2 = 1;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  if (!bVar3) {
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
  return param_2;
}



// FUNCTION 1469b8f2c FUN_1469b8f2c body=767 status=ok
// SIG undefined FUN_1469b8f2c(void)

undefined8 * FUN_1469b8f2c(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined2 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong *plVar14;
  double dVar15;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar12 = (longlong *)*param_2;
  FUN_140056680(&local_58,L"BindingContext");
  puVar10 = local_58;
  if (local_50 == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  uVar13 = 0;
  uVar7 = (ulonglong)(local_50 - 1);
  if (local_50 == 0) {
    uVar7 = uVar13;
  }
  uVar4 = FUN_144a49b4a(uVar7,puVar10);
  iVar5 = FUN_14047c88e(plVar12,uVar4,&local_58);
  if (iVar5 == -1) {
LAB_1469b8fc3:
    plVar12 = (longlong *)0x0;
  }
  else {
    lVar6 = (longlong)iVar5 * 0x28 + *plVar12;
    if (lVar6 == 0) {
      uVar13 = 0;
      goto LAB_1469b8fc3;
    }
    uVar13 = *(ulonglong *)(lVar6 + 0x10);
    plVar12 = *(longlong **)(lVar6 + 0x18);
    if (plVar12 == (longlong *)0x0) goto LAB_1469b8fc3;
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  plVar11 = (longlong *)*param_2;
  FUN_140056680(&local_58,L"CommandName");
  puVar10 = local_58;
  if (local_50 == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  uVar7 = 0;
  uVar8 = (ulonglong)(local_50 - 1);
  if (local_50 == 0) {
    uVar8 = uVar7;
  }
  uVar4 = FUN_144a49b4a(uVar8,puVar10);
  iVar5 = FUN_14047c88e(plVar11,uVar4,&local_58);
  if (iVar5 == -1) {
LAB_1469b9047:
    plVar11 = (longlong *)0x0;
  }
  else {
    lVar6 = (longlong)iVar5 * 0x28 + *plVar11;
    if (lVar6 == 0) {
      uVar7 = 0;
      goto LAB_1469b9047;
    }
    uVar7 = *(ulonglong *)(lVar6 + 0x10);
    plVar11 = *(longlong **)(lVar6 + 0x18);
    if (plVar11 == (longlong *)0x0) goto LAB_1469b9047;
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  plVar14 = (longlong *)*param_2;
  FUN_140056680(&local_58,L"ChordIndex");
  puVar10 = local_58;
  if (local_50 == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  uVar8 = 0;
  uVar9 = (ulonglong)(local_50 - 1);
  if (local_50 == 0) {
    uVar9 = uVar8;
  }
  uVar4 = FUN_144a49b4a(uVar9,puVar10);
  iVar5 = FUN_14047c88e(plVar14,uVar4,&local_58);
  if (iVar5 != -1) {
    lVar6 = (longlong)iVar5 * 0x28 + *plVar14;
    if (lVar6 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(ulonglong *)(lVar6 + 0x10);
      plVar14 = *(longlong **)(lVar6 + 0x18);
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        UNLOCK();
        goto LAB_1469b90ce;
      }
    }
  }
  plVar14 = (longlong *)0x0;
LAB_1469b90ce:
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14047e026(uVar13,&local_58);
  puVar10 = local_58;
  if (local_50 == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_60,puVar10,1);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14047e026(uVar7,&local_58);
  puVar10 = local_58;
  if (local_50 == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_68,puVar10,1);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (uVar8 == 0) {
    uVar3 = 0;
  }
  else {
    dVar15 = (double)FUN_141360850(uVar8);
    uVar3 = (undefined1)(longlong)dVar15;
  }
  *param_1 = local_60;
  param_1[1] = local_68;
  *(undefined1 *)(param_1 + 2) = uVar3;
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar14 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar11 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1469b922c FUN_1469b922c body=1136 status=ok
// SIG undefined FUN_1469b922c(void)

undefined8 FUN_1469b922c(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  byte bVar8;
  byte bVar9;
  undefined4 uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined2 *puVar16;
  longlong *plVar17;
  ulonglong uVar18;
  longlong *plVar19;
  longlong *plVar20;
  undefined1 auStack_b8 [40];
  ulonglong local_90;
  ulonglong local_88;
  longlong *local_80;
  longlong *local_78;
  undefined1 local_70 [8];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar20 = (longlong *)*param_2;
  FUN_140056680(&local_58,L"Control");
  puVar16 = local_58;
  if (local_50 == 0) {
    puVar16 = &DAT_149dfb77a;
  }
  uVar18 = 0;
  uVar13 = (ulonglong)(local_50 - 1);
  if (local_50 == 0) {
    uVar13 = uVar18;
  }
  uVar10 = FUN_144a49b4a(uVar13,puVar16);
  iVar11 = FUN_14047c88e(plVar20,uVar10,&local_58);
  if (iVar11 == -1) {
LAB_1469b92c3:
    local_78 = (longlong *)0x0;
  }
  else {
    lVar12 = (longlong)iVar11 * 0x28 + *plVar20;
    if (lVar12 == 0) {
      uVar18 = 0;
      goto LAB_1469b92c3;
    }
    uVar18 = *(ulonglong *)(lVar12 + 0x10);
    local_78 = *(longlong **)(lVar12 + 0x18);
    if (local_78 == (longlong *)0x0) goto LAB_1469b92c3;
    LOCK();
    *(int *)(local_78 + 1) = (int)local_78[1] + 1;
    UNLOCK();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  plVar20 = (longlong *)*param_2;
  FUN_140056680(&local_58,&DAT_149eff40a);
  puVar16 = local_58;
  if (local_50 == 0) {
    puVar16 = &DAT_149dfb77a;
  }
  uVar13 = 0;
  uVar14 = (ulonglong)(local_50 - 1);
  if (local_50 == 0) {
    uVar14 = uVar13;
  }
  uVar10 = FUN_144a49b4a(uVar14,puVar16);
  iVar11 = FUN_14047c88e(plVar20,uVar10,&local_58);
  if (iVar11 == -1) {
LAB_1469b934c:
    local_80 = (longlong *)0x0;
  }
  else {
    lVar12 = (longlong)iVar11 * 0x28 + *plVar20;
    if (lVar12 == 0) {
      uVar13 = 0;
      goto LAB_1469b934c;
    }
    uVar13 = *(ulonglong *)(lVar12 + 0x10);
    local_80 = *(longlong **)(lVar12 + 0x18);
    if (local_80 == (longlong *)0x0) goto LAB_1469b934c;
    LOCK();
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
    UNLOCK();
  }
  local_88 = uVar18;
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  plVar20 = (longlong *)*param_2;
  FUN_140056680(&local_58,L"Shift");
  puVar16 = local_58;
  if (local_50 == 0) {
    puVar16 = &DAT_149dfb77a;
  }
  uVar18 = 0;
  uVar14 = (ulonglong)(local_50 - 1);
  if (local_50 == 0) {
    uVar14 = uVar18;
  }
  uVar10 = FUN_144a49b4a(uVar14,puVar16);
  iVar11 = FUN_14047c88e(plVar20,uVar10,&local_58);
  if (iVar11 == -1) {
LAB_1469b93de:
    plVar20 = (longlong *)0x0;
  }
  else {
    lVar12 = (longlong)iVar11 * 0x28 + *plVar20;
    if (lVar12 == 0) {
      uVar18 = 0;
      goto LAB_1469b93de;
    }
    uVar18 = *(ulonglong *)(lVar12 + 0x10);
    plVar20 = *(longlong **)(lVar12 + 0x18);
    if (plVar20 == (longlong *)0x0) goto LAB_1469b93de;
    LOCK();
    *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
    UNLOCK();
  }
  local_90 = uVar13;
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  plVar17 = (longlong *)*param_2;
  FUN_140056680(&local_58,L"Command");
  puVar16 = local_58;
  if (local_50 == 0) {
    puVar16 = &DAT_149dfb77a;
  }
  uVar13 = 0;
  uVar14 = (ulonglong)(local_50 - 1);
  if (local_50 == 0) {
    uVar14 = uVar13;
  }
  uVar10 = FUN_144a49b4a(uVar14,puVar16);
  iVar11 = FUN_14047c88e(plVar17,uVar10,&local_58);
  if (iVar11 == -1) {
LAB_1469b9460:
    plVar17 = (longlong *)0x0;
  }
  else {
    lVar12 = (longlong)iVar11 * 0x28 + *plVar17;
    if (lVar12 == 0) {
      uVar13 = 0;
      goto LAB_1469b9460;
    }
    uVar13 = *(ulonglong *)(lVar12 + 0x10);
    plVar17 = *(longlong **)(lVar12 + 0x18);
    if (plVar17 == (longlong *)0x0) goto LAB_1469b9460;
    LOCK();
    *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
    UNLOCK();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  plVar19 = (longlong *)*param_2;
  FUN_140056680(&local_58,&DAT_149e17ca2);
  puVar16 = local_58;
  if (local_50 == 0) {
    puVar16 = &DAT_149dfb77a;
  }
  uVar14 = 0;
  uVar15 = (ulonglong)(local_50 - 1);
  if (local_50 == 0) {
    uVar15 = uVar14;
  }
  uVar10 = FUN_144a49b4a(uVar15,puVar16);
  iVar11 = FUN_14047c88e(plVar19,uVar10,&local_58);
  if (iVar11 != -1) {
    lVar12 = (longlong)iVar11 * 0x28 + *plVar19;
    if (lVar12 == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = *(ulonglong *)(lVar12 + 0x10);
      plVar19 = *(longlong **)(lVar12 + 0x18);
      if (plVar19 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
        UNLOCK();
        goto LAB_1469b94ea;
      }
    }
  }
  plVar19 = (longlong *)0x0;
LAB_1469b94ea:
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (uVar13 == 0) {
    cVar5 = '\0';
  }
  else {
    cVar5 = FUN_140b87404(uVar13);
  }
  cVar6 = FUN_140b87404(uVar18);
  cVar7 = FUN_140b87404(local_90);
  bVar8 = FUN_140b87404(local_88);
  bVar9 = bVar8 | 2;
  if (cVar7 == '\0') {
    bVar9 = bVar8;
  }
  bVar8 = bVar9 + 4;
  if (cVar6 == '\0') {
    bVar8 = bVar9;
  }
  bVar9 = bVar8 | 8;
  if (cVar5 == '\0') {
    bVar9 = bVar8;
  }
  FUN_14047e026(uVar14,&local_58);
  puVar16 = local_58;
  if (local_50 == 0) {
    puVar16 = &DAT_149dfb77a;
  }
  FUN_1446f470e(local_70,puVar16,1);
  local_68 = 0;
  uStack_60 = 0;
  FUN_140d66a10(param_1,local_70,bVar9);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  plVar4 = local_78;
  plVar3 = local_80;
  if (plVar19 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar19 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar19)(plVar19);
      LOCK();
      piVar2 = (int *)((longlong)plVar19 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
      }
    }
  }
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    plVar19 = plVar17 + 1;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)*plVar19 == 0) {
      (**(code **)*plVar17)(plVar17);
      LOCK();
      piVar2 = (int *)((longlong)plVar17 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
      }
    }
  }
  if (plVar20 != (longlong *)0x0) {
    LOCK();
    plVar17 = plVar20 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)*plVar20)(plVar20);
      LOCK();
      piVar2 = (int *)((longlong)plVar20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
      }
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar20 = plVar3 + 1;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)*plVar20 == 0) {
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
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar20 = plVar4 + 1;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)*plVar20 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1469b969e FUN_1469b969e body=549 status=ok
// SIG undefined FUN_1469b969e(void)

void FUN_1469b969e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  longlong lVar15;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 uStack_78;
  longlong *local_70;
  byte local_68;
  longlong local_60;
  longlong local_58;
  undefined1 local_50;
  undefined1 local_4f;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*param_1 != 0) {
    lVar4 = param_2[0xd];
    lVar5 = param_2[0xe];
    lVar15 = 0;
    bVar10 = true;
    do {
      bVar14 = bVar10;
      local_50 = (undefined1)lVar15;
      local_4f = 0;
      local_60 = lVar5;
      local_58 = lVar4;
      FUN_1469e7838(*param_1,&local_60);
      uVar8 = (uint)((ulonglong)local_60 >> 0x10);
      uVar12 = (uint)local_60 & 0xffff;
      uVar9 = (uint)((ulonglong)local_58 >> 0x10);
      uVar13 = (uint)local_58 & 0xffff;
      lVar11 = FUN_1469ea28e(*param_1,((uint)local_58 << 0x10 | uVar13) +
                                      (int)((ulonglong)local_58 >> 0x20) +
                                      (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar13 >> 4) ^
                                      ((uint)local_60 << 0x10 | uVar12) +
                                      (int)((ulonglong)local_60 >> 0x20) +
                                      (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar12 >> 4),&local_60);
      puVar6 = *(undefined8 **)(*param_2 + lVar15 * 0x10);
      plVar7 = *(longlong **)(*param_2 + 8 + lVar15 * 0x10);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
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
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      if (puVar6 == (undefined8 *)0x0) {
        local_80 = CONCAT44(DAT_14c966e80._4_4_,(undefined4)DAT_14c966e80);
        uStack_78 = CONCAT44(DAT_14c966e88._4_4_,(undefined4)DAT_14c966e88);
        local_70 = DAT_14c966e90;
        if (DAT_14c966e90 != (longlong *)0x0) {
          LOCK();
          *(int *)(DAT_14c966e90 + 1) = (int)DAT_14c966e90[1] + 1;
          UNLOCK();
        }
        local_68 = local_68 & 0xf0;
      }
      else {
        local_80 = *puVar6;
        uStack_78 = puVar6[1];
        local_70 = (longlong *)puVar6[2];
        if (local_70 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_70 + 1) = (int)local_70[1] + 1;
          UNLOCK();
        }
        local_68 = *(byte *)(puVar6 + 3);
      }
      FUN_1413a517a(lVar11,&local_80);
      plVar1 = local_70;
      *(byte *)(lVar11 + 0x18) = local_68;
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_70 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
      if (plVar7 != (longlong *)0x0) {
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
      }
      lVar15 = 1;
      bVar10 = false;
    } while (bVar14);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469b98c4 FUN_1469b98c4 body=790 status=ok
// SIG undefined FUN_1469b98c4(void)

void FUN_1469b98c4(longlong param_1,longlong *param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  uint uVar6;
  char cVar7;
  byte bVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  uint local_90;
  int iStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  longlong *local_80;
  longlong *local_78;
  undefined2 local_70;
  undefined8 ***local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0xbc)) {
    lVar9 = param_2[0xe];
    uVar6 = (uint)((ulonglong)lVar9 >> 0x10);
    uVar12 = (uint)lVar9 & 0xffff;
    lVar11 = param_1 + 0xc0;
    if (*(longlong *)(param_1 + 200) != 0) {
      lVar11 = *(longlong *)(param_1 + 200);
    }
    iVar10 = *(int *)(lVar11 + (ulonglong)
                               (*(int *)(param_1 + 0xd0) - 1U &
                               (int)((ulonglong)lVar9 >> 0x20) + ((uint)lVar9 << 0x10 | uVar12) +
                               (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar12 >> 4)) * 4);
    if (iVar10 != -1) {
      do {
        lVar11 = *(longlong *)(param_1 + 0x88) + (longlong)iVar10 * 0x80;
        if (*(longlong *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar10 * 0x80) == lVar9)
        goto LAB_1469b9959;
        iVar10 = *(int *)(lVar11 + 0x78);
      } while (iVar10 != -1);
    }
  }
  lVar11 = 0;
LAB_1469b9959:
  param_3 = param_3 & 0xff;
  plVar3 = (longlong *)(*(longlong *)(lVar11 + 0x58) + (ulonglong)(param_3 * 0x50));
  lVar9 = *(longlong *)(lVar11 + 0x58) + (ulonglong)(param_3 * 0x50);
  local_60 = lVar9 + 0x10;
  local_68 = (undefined8 ***)&DAT_100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  if (*(int *)(lVar9 + 0x28) != 0) {
    FUN_1449c0562(&local_68);
  }
  local_90 = local_58;
  iStack_8c = iStack_54;
  local_88 = local_50;
  local_84 = local_4c;
  local_a0 = (undefined8 ****)local_68;
  local_98 = local_60;
  local_70 = 0;
  local_a8 = plVar3;
  local_80 = plVar3;
  local_78 = plVar3;
  if (iStack_54 < *(int *)(local_60 + 0x18)) {
    do {
      if (*(longlong *)(*local_a8 + 0x20 + (longlong)iStack_8c * 0x30) == param_2[0xd]) {
        FUN_1469ea49e(local_80);
        local_70 = CONCAT11(local_70._1_1_,1);
        goto LAB_1469b9a56;
      }
      local_90 = local_90 & ~local_a0._4_4_;
      FUN_1449c0562(&local_a0);
    } while (iStack_8c < *(int *)(local_98 + 0x18));
    if ((local_70 & 1) != 0) {
LAB_1469b9a56:
      if (local_70._1_1_ == '\x01') {
        FUN_1469ea458(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34));
      }
    }
  }
  uVar4 = *(undefined8 *)(*param_2 + (ulonglong)(param_3 << 4));
  plVar5 = *(longlong **)(*param_2 + 8 + (ulonglong)(param_3 << 4));
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  cVar7 = FUN_1403e7f2a(uVar4);
  if (cVar7 == '\0') {
    bVar8 = 0;
  }
  else {
    bVar8 = FUN_14171cb38(uVar4);
    bVar8 = bVar8 ^ 1;
  }
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
  if (bVar8 != 0) {
    local_68 = (undefined8 ***)param_2[0xd];
    local_a8 = *(longlong **)(*param_2 + (ulonglong)(param_3 << 4));
    plVar5 = *(longlong **)(*param_2 + 8 + (ulonglong)(param_3 << 4));
    if (plVar5 == (longlong *)0x0) {
      local_a0 = &local_68;
      FUN_1459a4fb6(plVar3,local_44);
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      local_a0 = &local_68;
      FUN_1459a4fb6(plVar3,local_44);
      LOCK();
      plVar3 = plVar5 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  }
  FUN_1469b969e(*(undefined8 *)(param_1 + 0x128),param_2);
  FUN_1469ea5ca(param_1 + 0x148,param_2);
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469b9bdc FUN_1469b9bdc body=479 status=ok
// SIG undefined FUN_1469b9bdc(void)

undefined8 FUN_1469b9bdc(longlong param_1,longlong param_2)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  ulonglong uVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  undefined *puVar10;
  int iVar11;
  longlong lVar12;
  
  iVar11 = (int)((ulonglong)param_2 >> 0x20);
  uVar7 = (ushort)((ulonglong)param_2 >> 0x10);
  uVar6 = (ushort)param_2;
  uVar5 = (ulonglong)DAT_14c98e728;
  if (DAT_14c98e728 != DAT_14c98e754) {
    uVar4 = (uint)((ulonglong)param_1 >> 0x10);
    uVar8 = (uint)param_1 & 0xffff;
    puVar10 = &DAT_14c98e758;
    if (DAT_14c98e760 != (undefined *)0x0) {
      puVar10 = DAT_14c98e760;
    }
    uVar5 = (ulonglong)
            *(uint *)(puVar10 +
                     (ulonglong)
                     (DAT_14c98e768 - 1U &
                     (int)((ulonglong)param_1 >> 0x20) + ((uint)param_1 << 0x10 | uVar8) +
                     (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar8 >> 4)) * 4);
    if (*(uint *)(puVar10 +
                 (ulonglong)
                 (DAT_14c98e768 - 1U &
                 (int)((ulonglong)param_1 >> 0x20) + ((uint)param_1 << 0x10 | uVar8) +
                 (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar8 >> 4)) * 4) != 0xffffffff) {
      do {
        lVar12 = (longlong)(int)uVar5 * 0xb0;
        uVar5 = DAT_14c98e720 + lVar12;
        if (*(longlong *)(DAT_14c98e720 + lVar12) == param_1) {
          if ((longlong *)(uVar5 + 8) != (longlong *)0x0 && uVar5 != 0) {
            if (*(int *)(uVar5 + 0x10) != *(int *)(uVar5 + 0x3c)) {
              lVar12 = uVar5 + 0x40;
              if (*(longlong *)(uVar5 + 0x48) != 0) {
                lVar12 = *(longlong *)(uVar5 + 0x48);
              }
              iVar9 = *(int *)(lVar12 + (ulonglong)
                                        (*(int *)(uVar5 + 0x50) - 1U &
                                        iVar11 + ((int)param_2 << 0x10 | (uint)uVar6) +
                                        ((uint)uVar7 << 0x13 | (uint)uVar7) + (uint)(uVar6 >> 4)) *
                                        4);
              if (iVar9 != -1) {
                lVar12 = *(longlong *)(uVar5 + 8);
                do {
                  if (*(longlong *)(lVar12 + (longlong)iVar9 * 0x20) == param_2) {
                    return 0;
                  }
                  iVar9 = *(int *)((longlong)iVar9 * 0x20 + lVar12 + 0x18);
                } while (iVar9 != -1);
              }
            }
            piVar1 = (int *)(uVar5 + 0x60);
            piVar3 = (int *)(uVar5 + 0x8c);
            if (*piVar1 != *piVar3) {
              lVar12 = uVar5 + 0x90;
              if (*(longlong *)(uVar5 + 0x98) != 0) {
                lVar12 = *(longlong *)(uVar5 + 0x98);
              }
              iVar11 = *(int *)(lVar12 + (ulonglong)
                                         (*(int *)(uVar5 + 0xa0) - 1U &
                                         iVar11 + ((int)param_2 << 0x10 | (uint)uVar6) +
                                         ((uint)uVar7 << 0x13 | (uint)uVar7) + (uint)(uVar6 >> 4)) *
                                         4);
              if (iVar11 != -1) {
                uVar5 = *(ulonglong *)(uVar5 + 0x58);
                do {
                  if (*(longlong *)(uVar5 + (longlong)iVar11 * 0x20) == param_2) goto LAB_1469b9beb;
                  iVar11 = *(int *)((longlong)iVar11 * 0x20 + uVar5 + 0x18);
                } while (iVar11 != -1);
              }
            }
            if (*piVar3 < *piVar1) {
              return 0;
            }
          }
          goto LAB_1469b9beb;
        }
        puVar2 = (uint *)(uVar5 + 0xa8);
        uVar5 = (ulonglong)*puVar2;
      } while (*puVar2 != 0xffffffff);
      uVar5 = 0xffffffff;
    }
  }
LAB_1469b9beb:
  return CONCAT71((int7)(uVar5 >> 8),1);
}



// FUNCTION 1469b9dd4 FUN_1469b9dd4 body=587 status=ok
// SIG undefined FUN_1469b9dd4(void)

undefined8 FUN_1469b9dd4(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [16];
  longlong local_98 [2];
  longlong *local_88 [2];
  longlong local_78;
  ulonglong uStack_70;
  undefined8 local_60;
  undefined4 local_58;
  wchar_t *local_50;
  undefined4 local_48;
  longlong *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = 0;
  uStack_70 = 0;
  local_60 = 0;
  local_58 = 0;
  FUN_1469ba020(0,local_88);
  local_50 = (wchar_t *)CONCAT44(local_50._4_4_,4);
  FUN_14023423e(&local_40,local_88);
  FUN_140056680(local_98,L"Modifiers");
  FUN_140233eec(&local_78,local_98,&local_50);
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 0x10))();
    local_40 = (longlong *)0x0;
    local_38 = 0;
  }
  if (local_88[0] != (longlong *)0x0) {
    (**(code **)(*local_88[0] + 0x10))();
  }
  FUN_1469ba794(param_1,local_88,param_3);
  local_50 = (wchar_t *)CONCAT44(local_50._4_4_,4);
  FUN_14023423e(&local_40,local_88);
  FUN_140056680(local_98,&DAT_149e17ca2);
  FUN_140233eec(&local_78,local_98,&local_50);
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 0x10))();
    local_40 = (longlong *)0x0;
    local_38 = 0;
  }
  if (local_88[0] != (longlong *)0x0) {
    (**(code **)(*local_88[0] + 0x10))();
  }
  local_50 = L"InputText";
  local_48 = 9;
  FUN_1446e940c(local_88,&local_50);
  local_50 = L"FInputChord";
  local_48 = 0xb;
  FUN_1446e940c(local_98,&local_50);
  FUN_140208bae(&local_50,local_98,local_88,L"{Modifiers}{Key}");
  FUN_14023409e(local_a8,&local_50,1);
  FUN_140233c04(param_2,local_a8,&local_78);
  if (local_50 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_50 + 0x10))();
  }
  FUN_14010f8af(local_78,uStack_70 & 0xffffffff);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469ba020 FUN_1469ba020 body=1906 status=ok
// SIG undefined FUN_1469ba020(void)

undefined8 FUN_1469ba020(longlong *param_1,undefined8 param_2,longlong **param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  longlong **pplVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_128 [36];
  undefined4 local_104;
  longlong **local_100;
  undefined8 local_f8;
  undefined1 local_ec [4];
  undefined1 local_e8 [16];
  longlong local_d8 [2];
  longlong local_c8;
  ulonglong uStack_c0;
  longlong *local_b8 [2];
  longlong *local_a8;
  undefined4 local_a0;
  longlong *local_98;
  undefined4 local_90;
  longlong *local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined4 local_70;
  wchar_t *local_68;
  undefined4 local_60;
  longlong *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_68 = L"KeyName_Control";
  local_60 = 0xf;
  local_f8 = param_2;
  FUN_1446e940c(&local_88,&local_68);
  local_68 = L"FInputChord";
  local_60 = 0xb;
  FUN_1446e940c(&local_98,&local_68);
  FUN_140208bae(&local_78,&local_98,&local_88,L"Ctrl");
  local_68 = L"KeyName_Command";
  local_60 = 0xf;
  FUN_1446e940c(&local_98,&local_68);
  local_68 = L"FInputChord";
  local_60 = 0xb;
  FUN_1446e940c(&local_a8,&local_68);
  FUN_140208bae(&local_88,&local_a8,&local_98,&DAT_149e3af04);
  local_68 = L"KeyName_Alt";
  local_60 = 0xb;
  FUN_1446e940c(&local_a8,&local_68);
  local_68 = L"FInputChord";
  local_60 = 0xb;
  FUN_1446e940c(local_b8,&local_68);
  FUN_140208bae(&local_98,local_b8,&local_a8,&DAT_149eff40a);
  local_68 = L"KeyName_Shift";
  local_60 = 0xd;
  FUN_1446e940c(local_b8,&local_68);
  local_68 = L"FInputChord";
  local_60 = 0xb;
  FUN_1446e940c(&local_c8,&local_68);
  FUN_140208bae(&local_a8,&local_c8,local_b8,L"Shift");
  lVar3 = DAT_14c966e80;
  lVar1 = *param_1;
  if (lVar1 == DAT_14c966e80) {
    pplVar6 = (longlong **)FUN_140e82300();
  }
  else {
    local_68 = L"ModAppender";
    local_60 = 0xb;
    FUN_1446e940c(&local_c8,&local_68);
    local_68 = L"FInputChord";
    local_60 = 0xb;
    FUN_1446e940c(local_d8,&local_68);
    FUN_140208bae(local_b8,local_d8,&local_c8,&DAT_149e06124);
    pplVar6 = local_b8;
    if (*param_3 != (longlong *)0x0) {
      pplVar6 = param_3;
    }
  }
  plVar2 = *pplVar6;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  local_104 = *(undefined4 *)(pplVar6 + 1);
  if ((lVar1 != lVar3) && (local_b8[0] != (longlong *)0x0)) {
    (**(code **)(*local_b8[0] + 0x10))();
  }
  local_c8 = 0;
  uStack_c0 = 0;
  uVar10 = *(uint *)(param_1 + 3);
  uVar9 = 0;
  if ((uVar10 & 2) != 0) {
    local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
    local_58 = local_78;
    if (local_78 != (longlong *)0x0) {
      (**(code **)(*local_78 + 8))();
    }
    local_50 = local_70;
    FUN_140002266(local_d8,L"Mod%d",1);
    FUN_140233eec(&local_c8,local_d8,&local_68);
    if (local_d8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x10))();
    }
    uVar10 = *(uint *)(param_1 + 3);
    uVar9 = 1;
  }
  if ((uVar10 & 8) != 0) {
    local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
    local_58 = local_88;
    if (local_88 != (longlong *)0x0) {
      (**(code **)(*local_88 + 8))();
    }
    local_50 = local_80;
    uVar9 = uVar9 + 1;
    FUN_140002266(local_d8,L"Mod%d",uVar9);
    FUN_140233eec(&local_c8,local_d8,&local_68);
    if (local_d8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x10))();
    }
    uVar10 = *(uint *)(param_1 + 3);
  }
  if ((uVar10 & 4) != 0) {
    local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
    local_58 = local_98;
    if (local_98 != (longlong *)0x0) {
      (**(code **)(*local_98 + 8))();
    }
    local_50 = local_90;
    uVar9 = uVar9 + 1;
    FUN_140002266(local_d8,L"Mod%d",uVar9);
    FUN_140233eec(&local_c8,local_d8,&local_68);
    if (local_d8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x10))();
    }
    uVar10 = *(uint *)(param_1 + 3);
  }
  local_100 = param_3;
  if ((uVar10 & 1) != 0) {
    local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
    local_58 = local_a8;
    if (local_a8 != (longlong *)0x0) {
      (**(code **)(*local_a8 + 8))();
    }
    local_50 = local_a0;
    uVar9 = uVar9 + 1;
    FUN_140002266(local_d8,L"Mod%d",uVar9);
    FUN_140233eec(&local_c8,local_d8,&local_68);
    if (local_d8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x10))();
    }
  }
  uVar10 = 1;
  do {
    if (uVar9 < uVar10) {
      plVar7 = (longlong *)FUN_140e82300();
      local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
      local_58 = (longlong *)*plVar7;
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 8))();
      }
      local_50 = (undefined4)plVar7[1];
      FUN_140002266(local_d8,L"Mod%d",uVar10);
      FUN_140233eec(&local_c8,local_d8,&local_68);
      if (local_d8[0] != 0) {
        FUN_1400020a8();
      }
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 0x10))();
      }
      puVar8 = (undefined8 *)FUN_140e82300();
      local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
      local_58 = (longlong *)*puVar8;
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 8))();
      }
      uVar5 = *(undefined4 *)(puVar8 + 1);
    }
    else {
      local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
      uVar5 = local_104;
      local_58 = plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2);
        uVar5 = local_104;
      }
    }
    local_50 = uVar5;
    FUN_140002266(local_d8,L"Appender%d",uVar10);
    FUN_140233eec(&local_c8,local_d8,&local_68);
    if (local_d8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x10))();
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 != 5);
  local_68 = L"FourModifiers";
  local_60 = 0xd;
  FUN_1446e940c(local_d8,&local_68);
  local_68 = L"FInputChord";
  local_60 = 0xb;
  FUN_1446e940c(local_ec,&local_68);
  FUN_140208bae(&local_68,local_ec,local_d8,
                L"{Mod1}{Appender1}{Mod2}{Appender2}{Mod3}{Appender3}{Mod4}{Appender4}");
  FUN_14023409e(local_e8,&local_68,1);
  uVar4 = local_f8;
  FUN_140233c04(local_f8,local_e8,&local_c8);
  if (local_68 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_68 + 0x10))();
  }
  FUN_14010f8af(local_c8,uStack_c0 & 0xffffffff);
  pplVar6 = local_100;
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  if (local_a8 != (longlong *)0x0) {
    (**(code **)(*local_a8 + 0x10))();
  }
  if (local_98 != (longlong *)0x0) {
    (**(code **)(*local_98 + 0x10))();
  }
  if (local_88 != (longlong *)0x0) {
    (**(code **)(*local_88 + 0x10))();
  }
  if (local_78 != (longlong *)0x0) {
    (**(code **)(*local_78 + 0x10))();
  }
  if (*pplVar6 != (longlong *)0x0) {
    (**(code **)(**pplVar6 + 0x10))();
    *pplVar6 = (longlong *)0x0;
    *(undefined4 *)(pplVar6 + 1) = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1469ba794 FUN_1469ba794 body=144 status=ok
// SIG undefined FUN_1469ba794(void)

undefined8 FUN_1469ba794(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 auStack_58 [32];
  longlong *local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a5dc74(param_2);
  cVar1 = FUN_1403e7f2a(param_1);
  if (cVar1 != '\0') {
    cVar1 = FUN_14171cb38(param_1);
    if (cVar1 == '\0') {
      FUN_1459c4454(param_1,local_38,param_3);
      FUN_140008f88(param_2,local_38);
      if (local_38[0] != (longlong *)0x0) {
        (**(code **)(*local_38[0] + 0x10))();
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469ba826 FUN_1469ba826 body=190 status=ok
// SIG undefined FUN_1469ba826(void)

uint FUN_1469ba826(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  
  if (*param_1 == *param_2) {
    uVar1 = *(uint *)(param_1 + 3);
    uVar2 = *(uint *)(param_2 + 3);
    if (((uVar2 ^ uVar1) & 0xf) == 0) {
      return 1;
    }
    bVar4 = (byte)uVar1;
    if ((uVar2 & 4) == 0 || (char)((uVar1 & 4) >> 2) != '\0') {
      if (((((uVar1 & 2) == 0 & (byte)((uVar2 & 2) >> 1)) == 0) &&
          (((uVar1 & 1) == 0 & (byte)uVar2) == 0)) &&
         ((uVar2 & 8) == 0 || (char)((uVar1 & 8) >> 3) != '\0')) {
        return 3;
      }
      if ((bVar4 >> 2 & (uVar2 & 4) == 0) != 0) {
        return 0;
      }
    }
    if ((bVar4 >> 1 & (uVar2 & 2) == 0) == 0) {
      uVar3 = 0;
      if ((bVar4 & (uVar2 & 1) == 0) == 0) {
        uVar3 = 2;
        if ((uVar1 & 8) != 0) {
          uVar3 = uVar2 >> 2 & 2;
        }
      }
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 1469ba8e4 FUN_1469ba8e4 body=29 status=ok
// SIG undefined FUN_1469ba8e4(void)

undefined8 * FUN_1469ba8e4(undefined8 *param_1)

{
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}



// FUNCTION 1469ba902 FUN_1469ba902 body=260 status=ok
// SIG undefined FUN_1469ba902(void)

undefined8 * FUN_1469ba902(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_14009d848();
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,2,0x10);
  local_38 = 2;
  *local_40 = &DAT_149efe500;
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
  local_40[2] = lVar2;
  *local_40 = &PTR_FUN_149f021d0;
  local_40[3] = &LAB_1428fb9ea;
  FUN_144a450dc(param_1 + 2,&local_40);
  FUN_1449db362(&local_40);
  FUN_1449db362(param_2);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469baa08 FUN_1469baa08 body=97 status=ok
// SIG undefined FUN_1469baa08(void)

undefined8 * FUN_1469baa08(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_14009d848();
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  FUN_14096c7c0(param_1 + 2,param_3);
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1449db362(param_2);
  FUN_1449db362(param_3);
  return param_1;
}



// FUNCTION 1469baa6a FUN_1469baa6a body=265 status=ok
// SIG undefined FUN_1469baa6a(void)

undefined8 *
FUN_1469baa6a(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_14009d848();
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  FUN_14096c7c0(param_1 + 2,param_3);
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_1446efa72(param_1 + 4,0,3,0x10);
  *(undefined4 *)(param_1 + 5) = 3;
  puVar1 = (undefined8 *)param_1[4];
  *puVar1 = &PTR_LAB_149f022b0;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  FUN_14096c7c0(puVar1 + 1,param_4);
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  puVar1[3] = lVar3;
  *puVar1 = &PTR_FUN_149f02240;
  puVar1[4] = FUN_1469bab74;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = param_5;
  FUN_1449db362(param_2);
  FUN_1449db362(param_3);
  FUN_1449db362(param_4);
  return param_1;
}



// FUNCTION 1469bab74 FUN_1469bab74 body=75 status=ok
// SIG undefined FUN_1469bab74(void)

undefined4 FUN_1469bab74(longlong *param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  
  if (((int)param_1[1] != 0) && ((longlong *)*param_1 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*(longlong *)*param_1 + 0x30))();
    if (cVar1 != '\0') {
      if ((int)param_1[1] == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = (longlong *)*param_1;
      }
      uVar2 = (**(code **)(*plVar3 + 0x58))();
      goto LAB_1469babaa;
    }
  }
  uVar2 = 0;
LAB_1469babaa:
  FUN_1449db362(param_1);
  return uVar2;
}



// FUNCTION 1469babc0 FUN_1469babc0 body=136 status=ok
// SIG undefined FUN_1469babc0(void)

undefined8 *
FUN_1469babc0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_14009d848();
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  FUN_14096c7c0(param_1 + 2,param_3);
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_1469eaea6(param_1 + 4,param_4);
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = param_5;
  FUN_1449db362(param_2);
  FUN_1449db362(param_3);
  FUN_1449db362(param_4);
  return param_1;
}



// FUNCTION 1469bac48 FUN_1469bac48 body=130 status=ok
// SIG undefined FUN_1469bac48(void)

undefined8 FUN_1469bac48(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1469baccc(param_1,&local_30);
  FUN_1469b9dd4(local_30,param_2,*(undefined1 *)(param_1 + 0x81));
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
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469baccc FUN_1469baccc body=89 status=ok
// SIG undefined FUN_1469baccc(void)

undefined8 * FUN_1469baccc(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  
  uVar1 = *(undefined8 *)*param_1;
  cVar3 = FUN_1403e7f2a(uVar1);
  if (cVar3 != '\0') {
    cVar3 = FUN_14171cb38(uVar1);
    if (cVar3 == '\0') {
      puVar4 = (undefined8 *)*param_1;
      goto LAB_1469bacfe;
    }
  }
  puVar4 = (undefined8 *)(*param_1 + 0x10);
LAB_1469bacfe:
  *param_2 = *puVar4;
  lVar2 = puVar4[1];
  param_2[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1469bad26 FUN_1469bad26 body=376 status=ok
// SIG undefined FUN_1469bad26(void)

void FUN_1469bad26(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_58 = 0;
  local_b0 = param_3;
  FUN_14009d848(&local_98,param_3);
  FUN_14096c7c0(&local_88,param_4);
  FUN_1469eaea6(&local_78,param_5);
  FUN_14096c7c0(&local_68,param_6);
  local_58 = param_7;
  local_a8 = *param_2;
  local_a0 = param_2[1];
  if (local_a0 != 0) {
    LOCK();
    *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
    UNLOCK();
  }
  (**(code **)(*param_1 + 0x10))(param_1,&local_a8,&local_98);
  FUN_1449db362(&local_68);
  FUN_1449db362(&local_78);
  FUN_1449db362(&local_88);
  FUN_1449db362(&local_98);
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
  FUN_1449db362(local_b0);
  FUN_1449db362(param_4);
  FUN_1449db362(param_5);
  FUN_1449db362(param_6);
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469baea0 FUN_1469baea0 body=282 status=ok
// SIG undefined FUN_1469baea0(void)

void FUN_1469baea0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined4 local_98;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  local_60 = 0;
  FUN_14096c7c0(&local_68,param_4);
  local_78 = 0;
  local_70 = 0;
  FUN_14009d848(&local_78,param_3);
  local_88 = *param_2;
  local_80 = param_2[1];
  if (local_80 != 0) {
    LOCK();
    *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
    UNLOCK();
  }
  local_98 = param_5;
  local_a0 = &local_48;
  local_a8 = &local_58;
  FUN_1469bad26(param_1,&local_88,&local_78,&local_68);
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
  FUN_1449db362(param_3);
  FUN_1449db362(param_4);
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469bafbc FUN_1469bafbc body=151 status=ok
// SIG undefined FUN_1469bafbc(void)

bool FUN_1469bafbc(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  lVar4 = FUN_1469bb054(param_1,&local_28);
  if (lVar4 != 0) {
    FUN_1469bb22e(lVar4);
  }
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar4 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469bb054 FUN_1469bb054 body=473 status=ok
// SIG undefined FUN_1469bb054(void)

longlong FUN_1469bb054(longlong param_1,ulonglong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  ulonglong local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar3 = *param_2;
  if (uVar3 == 0) {
    lVar5 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x9c)) {
      uVar6 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      lVar5 = param_1 + 0xa0;
      if (*(longlong *)(param_1 + 0xa8) != 0) {
        lVar5 = *(longlong *)(param_1 + 0xa8);
      }
      iVar7 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0xb0) - 1U & (uVar6 >> 0x10 ^ uVar6))
                               * 4);
      if (iVar7 != -1) {
        do {
          lVar5 = *(longlong *)(param_1 + 0x68) + (longlong)iVar7 * 0x60;
          if (*(ulonglong *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar7 * 0x60) == uVar3) {
            if (lVar5 != 0) {
              lVar5 = lVar5 + 0x10;
              goto LAB_1469bb1dc;
            }
            break;
          }
          iVar7 = *(int *)(lVar5 + 0x58);
        } while (iVar7 != -1);
      }
    }
    local_58 = 0;
    local_50 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_4c = 0xffffffff00000080;
    local_44 = 0;
    local_38 = 0;
    local_30 = 0;
    local_80 = (longlong *)param_2[1];
    if (local_80 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_80 + 1) = (int)local_80[1] + 1;
      UNLOCK();
    }
    local_98 = &local_78;
    local_88 = uVar3;
    lVar5 = FUN_1469bbaa4(0,&local_88,0xffffffff00000001,1);
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
    local_30 = 0;
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    FUN_1469ec152(&local_78);
  }
LAB_1469bb1dc:
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
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469bb22e FUN_1469bb22e body=97 status=ok
// SIG undefined FUN_1469bb22e(void)

undefined8 FUN_1469bb22e(longlong *param_1)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined7 uVar4;
  byte bVar5;
  longlong *plVar6;
  
  plVar6 = param_1;
  if ((((int)param_1[3] != 0) && (plVar6 = (longlong *)param_1[2], plVar6 != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(*plVar6 + 0x30))(), cVar1 != '\0')) {
    if ((int)param_1[3] == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = (longlong *)param_1[2];
    }
    cVar1 = (**(code **)(*plVar6 + 0x58))();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  bVar5 = (byte)plVar6;
  if ((int)param_1[1] != 0) {
    bVar5 = 0;
    if ((longlong *)*param_1 != (longlong *)0x0) {
      uVar3 = (**(code **)(*(longlong *)*param_1 + 0x60))();
      bVar5 = (byte)uVar3;
      uVar4 = (undefined7)((ulonglong)uVar3 >> 8);
      bVar2 = 1;
      goto LAB_1469bb27f;
    }
  }
  bVar2 = 0;
  uVar4 = 0;
LAB_1469bb27f:
  return CONCAT71(uVar4,bVar2 & bVar5);
}



// FUNCTION 1469bb290 FUN_1469bb290 body=188 status=ok
// SIG undefined FUN_1469bb290(void)

ulonglong FUN_1469bb290(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 unaff_RBX;
  ulonglong uVar7;
  undefined1 auStack_58 [40];
  undefined8 local_30;
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
  lVar5 = FUN_1469bb054(param_1,&local_30);
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (((lVar5 != 0) && (*(int *)(lVar5 + 0x18) != 0)) &&
     (*(longlong **)(lVar5 + 0x10) != (longlong *)0x0)) {
    cVar3 = (**(code **)(**(longlong **)(lVar5 + 0x10) + 0x30))();
    if (cVar3 != '\0') {
      if (*(int *)(lVar5 + 0x18) == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = *(longlong **)(lVar5 + 0x10);
      }
      uVar4 = (**(code **)(*plVar6 + 0x58))();
      uVar7 = (ulonglong)uVar4;
    }
  }
  plVar6 = (longlong *)param_2[1];
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469bb34e FUN_1469bb34e body=172 status=ok
// SIG undefined FUN_1469bb34e(void)

undefined1 * FUN_1469bb34e(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_3;
  local_20 = param_3[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  lVar4 = FUN_1469bb054(param_1,&local_28);
  if (lVar4 == 0) {
    *param_2 = DAT_14c96b238;
  }
  else {
    FUN_1469bb3fe(lVar4,param_2);
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469bb3fe FUN_1469bb3fe body=99 status=ok
// SIG undefined FUN_1469bb3fe(void)

undefined1 * FUN_1469bb3fe(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  
  uVar2 = DAT_14c96b238;
  if (((*(int *)(param_1 + 0x38) != 0) && (*(longlong **)(param_1 + 0x30) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x30))(), uVar2 = DAT_14c96b238,
     cVar1 != '\0')) {
    if (*(int *)(param_1 + 0x38) == 0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = *(longlong **)(param_1 + 0x30);
    }
    cVar1 = (**(code **)(*plVar3 + 0x58))();
    puVar4 = &DAT_14c96b1e1;
    if (cVar1 != '\0') {
      puVar4 = &DAT_14c96b238;
    }
    uVar2 = *puVar4;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 1469bb462 FUN_1469bb462 body=188 status=ok
// SIG undefined FUN_1469bb462(void)

undefined4 FUN_1469bb462(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  lVar5 = FUN_1469bb054(param_1,&local_28);
  if (((lVar5 != 0) && (*(int *)(lVar5 + 0x28) != 0)) &&
     (*(longlong **)(lVar5 + 0x20) != (longlong *)0x0)) {
    cVar3 = (**(code **)(**(longlong **)(lVar5 + 0x20) + 0x30))();
    if (cVar3 != '\0') {
      if (*(int *)(lVar5 + 0x28) == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = *(longlong **)(lVar5 + 0x20);
      }
      uVar4 = (**(code **)(*plVar6 + 0x58))();
      goto LAB_1469bb4d5;
    }
  }
  uVar4 = 0;
LAB_1469bb4d5:
  plVar6 = (longlong *)param_2[1];
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469bb520 FUN_1469bb520 body=138 status=ok
// SIG undefined FUN_1469bb520(void)

void FUN_1469bb520(undefined8 param_1,longlong param_2)

{
  ushort uVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *(undefined1 *)(param_2 + 10);
  uVar1 = *(ushort *)(param_2 + 8);
  local_20 = *(undefined8 *)(param_2 + 0x20);
  local_18 = *(undefined8 *)(param_2 + 0x28);
  local_10 = *(longlong *)(param_2 + 0x30);
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  local_30 = (uVar1 & 0xc0) != 0;
  local_38 = (uVar1 & 3) != 0;
  FUN_1469bb5ac(param_1,&local_20,CONCAT71((int7)((ulonglong)local_18 >> 8),(uVar1 & 0xc) != 0),
                (uVar1 & 0x30) != 0);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469bb5ac FUN_1469bb5ac body=1024 status=ok
// SIG undefined FUN_1469bb5ac(void)

ulonglong FUN_1469bb5ac(undefined8 param_1,undefined8 *param_2,byte param_3,char param_4,
                       char param_5,char param_6,char param_7)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  byte bVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auStack_168 [32];
  longlong local_148;
  longlong *local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong *local_128;
  undefined1 local_120;
  longlong *local_118;
  undefined8 local_110;
  longlong *local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  longlong local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong *local_c8;
  undefined1 local_c0;
  longlong local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98 [4];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  cVar5 = FUN_1469af6ea(DAT_14c98e618);
  if (cVar5 == '\0') {
    bVar9 = param_3 | 2;
    if (param_4 == '\0') {
      bVar9 = param_3;
    }
    bVar6 = bVar9 + 4;
    if (param_5 == '\0') {
      bVar6 = bVar9;
    }
    bVar9 = bVar6 | 8;
    if (param_6 == '\0') {
      bVar9 = bVar6;
    }
    local_f0 = *param_2;
    local_e8 = param_2[1];
    local_e0 = param_2[2];
    if (local_e0 != 0) {
      LOCK();
      *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
      UNLOCK();
    }
    plVar11 = (longlong *)&local_d8;
    FUN_140d66a10(plVar11,&local_f0,bVar9);
    cVar5 = FUN_1403e7f2a(plVar11);
    bVar4 = true;
    if ((cVar5 != '\0') && (cVar5 = FUN_14171cb38(&local_d8), cVar5 == '\0')) {
      plVar11 = local_98;
      local_78 = 0;
      local_70 = 0;
      local_98[0] = 0;
      local_98[1] = 0;
      local_6c = 0xffffffff00000080;
      local_64 = 0;
      local_58 = 0;
      local_50 = 0;
      FUN_1469bb9ae(param_1,plVar11);
      local_b0 = local_98 + 2;
      local_b8 = 0x100000000;
      local_a8 = 0xffffffff;
      local_a0 = 0;
      if (local_70 != 0) {
        FUN_1449c0562(&local_b8);
      }
      local_100 = local_a8;
      uVar3 = local_100;
      local_f8 = local_a0;
      local_f4 = local_9c;
      local_110 = local_b8;
      local_108 = local_b0;
      local_100._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
      local_118 = plVar11;
      local_100 = uVar3;
      if (local_100._4_4_ < (int)local_b0[3]) {
        iVar7 = local_100._4_4_;
        do {
          uVar3 = *(undefined8 *)(*local_118 + (longlong)iVar7 * 0x10);
          FUN_145939d0e();
          FUN_1411a8b42(&local_b8,uVar3,&local_d8,0);
          bVar4 = true;
          if (local_b8 != 0) {
            local_138 = local_d8;
            uStack_134 = uStack_d4;
            uStack_130 = uStack_d0;
            uStack_12c = uStack_cc;
            local_128 = local_c8;
            if (local_c8 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_c8 + 1) = (int)local_c8[1] + 1;
              UNLOCK();
            }
            local_120 = local_c0;
            cVar5 = FUN_1469bba30(local_b8,&local_138);
            if (cVar5 != '\0') {
              local_148 = local_b8;
              local_140 = local_b0;
              if (local_b0 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
                UNLOCK();
              }
              lVar8 = FUN_1469bb054(param_1,&local_148);
              if (lVar8 != 0) {
                if (((*(int *)(lVar8 + 0x18) == 0) ||
                    (*(longlong **)(lVar8 + 0x10) == (longlong *)0x0)) ||
                   (cVar5 = (**(code **)(**(longlong **)(lVar8 + 0x10) + 0x30))(), cVar5 == '\0')) {
LAB_1469bb97d:
                  if ((param_7 == '\0') || (*(int *)(lVar8 + 0x40) == 1)) {
                    FUN_1469bb22e(lVar8);
                    plVar11 = (longlong *)CONCAT71((int7)((ulonglong)plVar11 >> 8),1);
                    bVar4 = false;
                    goto LAB_1469bb810;
                  }
                }
                else {
                  if (*(int *)(lVar8 + 0x18) == 0) {
                    plVar10 = (longlong *)0x0;
                  }
                  else {
                    plVar10 = *(longlong **)(lVar8 + 0x10);
                  }
                  cVar5 = (**(code **)(*plVar10 + 0x58))();
                  if (cVar5 != '\0') goto LAB_1469bb97d;
                }
                bVar4 = false;
                plVar11 = (longlong *)0x0;
              }
            }
          }
LAB_1469bb810:
          plVar10 = local_b0;
          if (local_b0 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_b0 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_b0)(local_b0);
              LOCK();
              piVar2 = (int *)((longlong)plVar10 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar10 + 0x10))(plVar10);
              }
            }
          }
          if (!bVar4) break;
          local_100 = CONCAT44(local_100._4_4_,(uint)local_100 & ~local_110._4_4_);
          FUN_1449c0562(&local_110);
          iVar7 = local_100._4_4_;
        } while (local_100._4_4_ < (int)local_108[3]);
      }
      else {
        bVar4 = true;
      }
      local_50 = 0;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      FUN_14472eaf0(local_98);
    }
    if (local_c8 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_c8 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*local_c8)(local_c8);
        LOCK();
        piVar2 = (int *)((longlong)local_c8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_c8 + 0x10))(local_c8);
        }
      }
    }
    if (!bVar4) goto LAB_1469bb5ef;
  }
  plVar11 = (longlong *)0x0;
LAB_1469bb5ef:
  plVar10 = (longlong *)param_2[2];
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
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)plVar11 & 0xffffff01;
}



// FUNCTION 1469bb9ae FUN_1469bb9ae body=129 status=ok
// SIG undefined FUN_1469bb9ae(void)

void FUN_1469bb9ae(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  local_40 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_3c = 0xffffffff00000080;
  local_34 = 0;
  local_28 = 0;
  local_20 = 0;
  FUN_1469bbf68(0,param_2,&local_68);
  local_20 = 0;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_1469ec152(&local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469bba30 FUN_1469bba30 body=116 status=ok
// SIG undefined FUN_1469bba30(void)

ulonglong FUN_1469bba30(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  undefined8 unaff_RSI;
  undefined7 uVar6;
  ulonglong uVar5;
  
  plVar3 = *(longlong **)*param_1;
  uVar6 = (undefined7)((ulonglong)unaff_RSI >> 8);
  if ((*plVar3 == *param_2) && (((*(uint *)(param_2 + 3) ^ *(uint *)(plVar3 + 3)) & 0xf) == 0)) {
    uVar5 = CONCAT71(uVar6,1);
  }
  else {
    plVar3 = (longlong *)((longlong *)*param_1)[2];
    if ((*plVar3 == *param_2) &&
       (uVar4 = *(uint *)(param_2 + 3) ^ *(uint *)(plVar3 + 3), (uVar4 & 7) == 0)) {
      uVar5 = CONCAT71(uVar6,(uVar4 & 8) == 0);
    }
    else {
      uVar5 = 0;
    }
  }
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
  return uVar5 & 0xffffffff;
}



// FUNCTION 1469bbaa4 FUN_1469bbaa4 body=1218 status=ok
// SIG undefined FUN_1469bbaa4(void)

longlong FUN_1469bbaa4(longlong param_1,ulonglong *param_2,char param_3,char param_4,
                      undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 local_6c [4];
  ulonglong local_68;
  longlong *plStack_60;
  ulonglong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar9 = *(longlong **)(param_1 + 0x10);
  if (plVar9 == (longlong *)0x0) {
LAB_1469bbae4:
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
    local_68 = 0;
    plStack_60 = (longlong *)0x0;
    uVar10 = 0;
  }
  else {
    iVar7 = (int)plVar9[1];
    do {
      if (iVar7 == 0) goto LAB_1469bbae4;
      LOCK();
      iVar4 = (int)plVar9[1];
      bVar12 = iVar7 == iVar4;
      if (bVar12) {
        *(int *)(plVar9 + 1) = iVar7 + 1;
        iVar4 = iVar7;
      }
      iVar7 = iVar4;
      UNLOCK();
    } while (!bVar12);
    uVar10 = *(ulonglong *)(param_1 + 8);
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    local_68 = uVar10;
    plStack_60 = plVar9;
    local_58 = uVar10;
    plStack_50 = plVar9;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
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
  }
  uVar6 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  iVar7 = FUN_1469ec2de(param_5,uVar6 >> 0x10 ^ uVar6,&local_68);
  plVar9 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if (iVar7 == -1) {
    FUN_1469ec3c2(param_5,local_6c,&local_58);
  }
  plVar9 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if (iVar7 == -1) {
    if (((*(int *)(param_1 + 0x130) == 0) || (*(longlong **)(param_1 + 0x128) == (longlong *)0x0))
       || (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x128) + 0x30))(), cVar5 == '\0')) {
LAB_1469bbc87:
      uVar10 = *param_2;
      plVar9 = (longlong *)param_2[1];
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x9c)) {
        uVar6 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        lVar11 = param_1 + 0xa0;
        if (*(longlong *)(param_1 + 0xa8) != 0) {
          lVar11 = *(longlong *)(param_1 + 0xa8);
        }
        iVar7 = *(int *)(lVar11 + (ulonglong)
                                  (*(int *)(param_1 + 0xb0) - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
        if (iVar7 != -1) {
          do {
            lVar11 = *(longlong *)(param_1 + 0x68) + (longlong)iVar7 * 0x60;
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar7 * 0x60) == uVar10)
            goto LAB_1469bbcaa;
            iVar7 = *(int *)(lVar11 + 0x58);
          } while (iVar7 != -1);
        }
      }
      lVar11 = 0;
LAB_1469bbcaa:
      lVar8 = lVar11 + 0x10;
      if (lVar11 == 0) {
        lVar8 = 0;
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
      if (param_3 == '\x01' && lVar8 == 0) {
        if (*(int *)(param_1 + 0x120) < 1) goto LAB_1469bbe38;
        lVar11 = 0;
        lVar8 = 0;
        do {
          plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x118) + 8 + lVar11 * 0x10);
          if (plVar9 != (longlong *)0x0) {
            lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x118) + lVar11 * 0x10);
            LOCK();
            *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
            UNLOCK();
            bVar12 = true;
            if ((lVar3 != 0) && (0 < (int)plVar9[1])) {
              iVar7 = (int)plVar9[1];
              do {
                if (iVar7 == 0) {
                  local_78 = param_5;
                  lVar8 = FUN_1469bbaa4(0,param_2,1,0);
                  goto LAB_1469bbdab;
                }
                LOCK();
                iVar4 = (int)plVar9[1];
                bVar12 = iVar7 == iVar4;
                if (bVar12) {
                  *(int *)(plVar9 + 1) = iVar7 + 1;
                  iVar4 = iVar7;
                }
                iVar7 = iVar4;
                UNLOCK();
              } while (!bVar12);
              local_78 = param_5;
              lVar8 = FUN_1469bbaa4(lVar3,param_2,1,0);
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
LAB_1469bbdab:
              bVar12 = lVar8 == 0;
            }
            LOCK();
            piVar2 = (int *)((longlong)plVar9 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
            if (!bVar12) break;
          }
          lVar11 = lVar11 + 1;
        } while ((int)lVar11 < *(int *)(param_1 + 0x120));
      }
    }
    else {
      if (*(int *)(param_1 + 0x130) == 0) {
        plVar9 = (longlong *)0x0;
      }
      else {
        plVar9 = *(longlong **)(param_1 + 0x128);
      }
      cVar5 = (**(code **)(*plVar9 + 0x58))(plVar9,param_2);
      if (cVar5 != '\0') goto LAB_1469bbc87;
LAB_1469bbe38:
      lVar8 = 0;
    }
    if (param_4 != '\x01' || lVar8 != 0) goto LAB_1469bbb9f;
    if (0 < *(int *)(param_1 + 0x110)) {
      lVar11 = 0;
      lVar8 = 0;
      do {
        plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x108) + 8 + lVar11 * 0x10);
        if (plVar9 != (longlong *)0x0) {
          lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x108) + lVar11 * 0x10);
          LOCK();
          *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
          UNLOCK();
          bVar12 = true;
          if ((lVar3 != 0) && (0 < (int)plVar9[1])) {
            iVar7 = (int)plVar9[1];
            do {
              if (iVar7 == 0) {
                local_78 = param_5;
                lVar8 = FUN_1469bbaa4(0,param_2,0,1);
                goto LAB_1469bbf05;
              }
              LOCK();
              iVar4 = (int)plVar9[1];
              bVar12 = iVar7 == iVar4;
              if (bVar12) {
                *(int *)(plVar9 + 1) = iVar7 + 1;
                iVar4 = iVar7;
              }
              iVar7 = iVar4;
              UNLOCK();
            } while (!bVar12);
            local_78 = param_5;
            lVar8 = FUN_1469bbaa4(lVar3,param_2,0,1);
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
LAB_1469bbf05:
            bVar12 = lVar8 == 0;
          }
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
          if (!bVar12) break;
        }
        lVar11 = lVar11 + 1;
      } while ((int)lVar11 < *(int *)(param_1 + 0x110));
      goto LAB_1469bbb9f;
    }
  }
  lVar8 = 0;
LAB_1469bbb9f:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar8;
}



// FUNCTION 1469bbf68 FUN_1469bbf68 body=589 status=ok
// SIG undefined FUN_1469bbf68(void)

void FUN_1469bbf68(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_88 [44];
  undefined1 local_5c [4];
  ulonglong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 == (longlong *)0x0) {
LAB_1469bbf99:
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
    uVar8 = 0;
  }
  else {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_1469bbf99;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar10 = iVar7 == iVar5;
      if (bVar10) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar10);
    uVar8 = *(ulonglong *)(param_1 + 8);
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    local_58 = uVar8;
    plStack_50 = plVar3;
    local_48 = uVar8;
    plStack_40 = plVar3;
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
  }
  uVar6 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  iVar7 = FUN_1469ec2de(param_3,uVar6 >> 0x10 ^ uVar6,&local_58);
  plVar3 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (iVar7 == -1) {
    FUN_1469ec3c2(param_3,local_5c,&local_48);
  }
  plVar3 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((iVar7 == -1) && (FUN_144731a98(param_2,param_1 + 0x18), 0 < *(int *)(param_1 + 0x110))) {
    lVar9 = 0;
    do {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x108) + 8 + lVar9 * 0x10);
      if (plVar3 != (longlong *)0x0) {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x108) + lVar9 * 0x10);
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        if ((lVar4 != 0) && (0 < (int)plVar3[1])) {
          iVar7 = (int)plVar3[1];
          do {
            if (iVar7 == 0) {
              FUN_1469bbf68(0,param_2,param_3);
              goto LAB_1469bc12b;
            }
            LOCK();
            iVar5 = (int)plVar3[1];
            bVar10 = iVar7 == iVar5;
            if (bVar10) {
              *(int *)(plVar3 + 1) = iVar7 + 1;
              iVar5 = iVar7;
            }
            iVar7 = iVar5;
            UNLOCK();
          } while (!bVar10);
          FUN_1469bbf68(lVar4,param_2,param_3);
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
LAB_1469bc12b:
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
      lVar9 = lVar9 + 1;
    } while ((int)lVar9 < *(int *)(param_1 + 0x110));
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469bc1b6 FUN_1469bc1b6 body=671 status=ok
// SIG undefined FUN_1469bc1b6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1469bc1b6(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  bool bVar11;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14287c17c(*(undefined8 *)(param_1 + 0x20),&local_48);
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  FUN_146a59378(*(undefined8 *)(param_1 + 0x40),&local_48);
  plVar9 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if ((char)param_2 == '\0') {
    FUN_1469bc456(param_1);
  }
  else {
    FUN_14694781c(param_3,&local_48);
    lVar4 = *(longlong *)(param_1 + 0x60);
    plVar9 = *(longlong **)(lVar4 + 0x2e8);
    if (plVar9 == (longlong *)0x0) {
LAB_1469bc29b:
      *(undefined1 *)(*_DAT_000000e8 + 0x151) = 1;
    }
    else {
      iVar7 = (int)plVar9[1];
      do {
        if (iVar7 == 0) goto LAB_1469bc29b;
        LOCK();
        iVar6 = (int)plVar9[1];
        bVar10 = iVar7 == iVar6;
        if (bVar10) {
          *(int *)(plVar9 + 1) = iVar7 + 1;
          iVar6 = iVar7;
        }
        iVar7 = iVar6;
        UNLOCK();
      } while (!bVar10);
      *(undefined1 *)(**(longlong **)(*(longlong *)(lVar4 + 0x2e0) + 0xe8) + 0x151) = 1;
      LOCK();
      plVar1 = plVar9 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar9)();
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))();
        }
      }
    }
    lVar4 = *(longlong *)(param_1 + 0x60);
    plVar9 = *(longlong **)(lVar4 + 0x2e8);
    bVar10 = true;
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
          goto LAB_1469bc2ea;
        }
        LOCK();
        iVar6 = (int)plVar9[1];
        bVar11 = iVar7 == iVar6;
        if (bVar11) {
          *(int *)(plVar9 + 1) = iVar7 + 1;
          iVar6 = iVar7;
        }
        iVar7 = iVar6;
        UNLOCK();
      } while (!bVar11);
      lVar8 = *(longlong *)(lVar4 + 0x2e0);
      bVar10 = false;
    }
LAB_1469bc2ea:
    puVar5 = *(undefined8 **)(lVar8 + 0xe8);
    local_58 = local_48;
    local_50 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
      UNLOCK();
    }
    local_68 = *(undefined8 *)(param_1 + 0x40);
    local_60 = *(longlong **)(param_1 + 0x48);
    if (local_60 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_60 + 1) = (int)local_60[1] + 1;
      UNLOCK();
    }
    (**(code **)(*(longlong *)*puVar5 + 0x28))((longlong *)*puVar5,&local_68,&local_58);
    plVar1 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_60 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    plVar1 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_50 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    if (!bVar10) {
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
    plVar9 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_40)(plStack_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
  }
  thunk_FUN_146946e70(param_1,param_2,param_3);
  *(undefined8 *)(param_1 + 0x40) = 0;
  plVar9 = *(longlong **)(param_1 + 0x48);
  if (plVar9 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x48) = 0;
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
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469bc456 FUN_1469bc456 body=2895 status=ok
// SIG undefined FUN_1469bc456(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1469bc456(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  int iVar10;
  char cVar11;
  int iVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  bool bVar16;
  bool bVar17;
  float fVar18;
  undefined1 auStack_698 [32];
  undefined8 *local_678;
  undefined8 local_668;
  longlong *local_660;
  longlong local_658;
  longlong *local_650;
  undefined8 local_648;
  longlong *local_640;
  longlong local_638;
  longlong *local_630;
  longlong local_628;
  longlong *local_620;
  undefined8 local_618;
  longlong *local_610;
  longlong local_608;
  longlong *local_600;
  undefined8 local_5f8;
  longlong *local_5f0;
  longlong local_5e8;
  longlong *local_5e0;
  longlong local_5d8;
  longlong *local_5d0;
  longlong local_5c8;
  longlong *local_5c0;
  undefined1 local_5b8 [8];
  longlong *local_5b0;
  longlong *local_5a8;
  undefined1 *local_5a0;
  undefined8 local_598;
  longlong *local_590;
  undefined1 local_580 [8];
  longlong *local_578;
  undefined1 *local_570;
  undefined8 local_568;
  longlong *local_560;
  undefined8 local_550;
  longlong *local_548;
  undefined8 local_540;
  longlong *local_538;
  longlong local_530;
  longlong *local_528;
  undefined8 local_520;
  longlong *local_518;
  longlong *local_510;
  undefined4 local_508;
  undefined1 local_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  longlong local_4e8;
  longlong *local_4e0;
  longlong local_4d8;
  longlong *local_4d0;
  undefined8 local_4c8;
  longlong *local_4c0;
  longlong local_318;
  longlong *local_310;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_698;
  lVar7 = *(longlong *)(param_1 + 0x40);
  plVar8 = *(longlong **)(lVar7 + 0x2c8);
  if (plVar8 == (longlong *)0x0) goto LAB_1469bc4e1;
  iVar12 = (int)plVar8[1];
  do {
    if (iVar12 == 0) goto LAB_1469bc4e1;
    LOCK();
    iVar10 = (int)plVar8[1];
    bVar16 = iVar12 == iVar10;
    if (bVar16) {
      *(int *)(plVar8 + 1) = iVar12 + 1;
      iVar10 = iVar12;
    }
    iVar12 = iVar10;
    UNLOCK();
  } while (!bVar16);
  lVar7 = *(longlong *)(lVar7 + 0x2c0);
  if (lVar7 != 0) {
    fVar5 = *(float *)(*(longlong *)(param_1 + 0x20) + 0x380);
    fVar6 = *(float *)(*(longlong *)(param_1 + 0x20) + 900);
    fVar18 = (float)FUN_145788320();
    FUN_1469bf126(*(undefined8 *)(lVar7 + 0xe8),&local_4d8);
    FUN_14627df0c(&local_318);
    FUN_14162fdc4();
    lVar13 = DAT_14c98e9c0;
    local_510 = *(longlong **)(DAT_14c98e9c0 + 0x218);
    if (local_510 != (longlong *)0x0) {
      (**(code **)(*local_510 + 8))();
    }
    local_508 = *(undefined4 *)(lVar13 + 0x220);
    local_500 = 1;
    local_4f8 = 0;
    uStack_4f0 = 0;
    lVar13 = FUN_14627f7ee(&local_318);
    *(undefined1 *)(lVar13 + 0x1e1) = 0;
    *(float *)(lVar13 + 0x1e4) = (1.0 / fVar18) * fVar5;
    *(float *)(lVar13 + 0x1e8) = fVar6 * (1.0 / fVar18);
    FUN_14287c17c(*(undefined8 *)(param_1 + 0x20),&local_598);
    FUN_1469802d2(&local_568,local_598);
    *(undefined8 *)(lVar13 + 0x1ec) = local_568;
    *(undefined1 *)(lVar13 + 0x234) = 0;
    local_678 = &local_520;
    FUN_1461c0e96(&local_4c8,"SWindow",
                  ".\\Runtime/Slate/Private/Framework/Docking/FDockingDragOperation.cpp",0x14d);
    FUN_1462139ea(&local_4c8,&local_4e8,lVar13);
    if (local_4c0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_4c0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_4c0)(local_4c0);
        LOCK();
        piVar2 = (int *)((longlong)local_4c0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_4c0 + 0x10))(local_4c0);
        }
      }
    }
    FUN_14627e134(&local_318);
    cVar11 = FUN_146a580ce(*(undefined8 *)(param_1 + 0x40));
    if (cVar11 == '\x02') {
      uVar9 = *(undefined8 *)(param_1 + 0x40);
      FUN_14162fdc4();
      local_318 = DAT_14c98e9c0;
      local_310 = DAT_14c98e9c8;
      if (DAT_14c98e9c8 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c98e9c8 + 1) = (int)DAT_14c98e9c8[1] + 1;
        UNLOCK();
      }
      FUN_146a58e30(uVar9,&local_318);
      plVar1 = local_310;
      if (local_310 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_310 + 1;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)*plVar15 == 0) {
          (**(code **)*local_310)(local_310);
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
    FUN_1469bec34(&local_318);
    local_530 = local_4e8;
    local_528 = local_4e0;
    if (local_4e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_4e0 + 1) = (int)local_4e0[1] + 1;
      UNLOCK();
    }
    FUN_1469bf252(&local_318,&local_530);
    FUN_1469bed42(&local_4c8);
    FUN_1469bed62(local_580);
    local_570 = local_580;
    FUN_1469ece9a(&local_568,".\\Runtime/Slate/Private/Framework/Docking/FDockingDragOperation.cpp",
                  0x163);
    plVar1 = local_560;
    if (local_560 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_560 + 1) = (int)local_560[1] + 1;
      UNLOCK();
    }
    FUN_1469bee4e(&local_568,&local_550,&local_4c8);
    local_540 = local_550;
    local_538 = local_548;
    if (local_548 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_548 + 1) = (int)local_548[1] + 1;
      UNLOCK();
    }
    FUN_1469becbc(&local_318,&local_540);
    FUN_14627f6ee(local_5b8);
    local_5a8 = &local_5c8;
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    local_5c8 = lVar7;
    local_5c0 = plVar8;
    local_5a0 = local_5b8;
    FUN_1469eca5c(&local_598,".\\Runtime/Slate/Private/Framework/Docking/FDockingDragOperation.cpp",
                  0x15f);
    FUN_1469beec8(&local_598,&local_520,&local_318);
    if (local_590 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_590 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
        (**(code **)*local_590)(local_590);
        LOCK();
        piVar2 = (int *)((longlong)local_590 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_590 + 0x10))(local_590);
        }
      }
    }
    plVar15 = local_5c0;
    if (local_5c0 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_5c0 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_5c0)(local_5c0);
        LOCK();
        piVar2 = (int *)((longlong)plVar15 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
    }
    if (local_5b0 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_5b0 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
        (**(code **)*local_5b0)(local_5b0);
        LOCK();
        piVar2 = (int *)((longlong)local_5b0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_5b0 + 0x10))(local_5b0);
        }
      }
    }
    if (local_548 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_548 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
        (**(code **)*local_548)(local_548);
        LOCK();
        piVar2 = (int *)((longlong)local_548 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_548 + 0x10))(local_548);
        }
      }
    }
    if (local_560 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_560 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
        (**(code **)*local_560)(local_560);
        LOCK();
        piVar2 = (int *)((longlong)local_560 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_560 + 0x10))(local_560);
        }
      }
    }
    if (local_578 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_578 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
        (**(code **)*local_578)(local_578);
        LOCK();
        piVar2 = (int *)((longlong)local_578 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_578 + 0x10))(local_578);
        }
      }
    }
    FUN_140a4ff8c(&local_4c8);
    FUN_1469bef46(&local_318);
    cVar11 = FUN_146a580ce(*(undefined8 *)(param_1 + 0x40));
    if ((cVar11 == '\0') ||
       (cVar11 = FUN_146a580ce(*(undefined8 *)(param_1 + 0x40)), plVar15 = DAT_14c98e618,
       cVar11 == '\x02')) {
      FUN_14162fdc4();
      lVar7 = DAT_14c98e9c0;
      plVar15 = *(longlong **)(DAT_14c98e9c0 + 0x230);
      bVar16 = true;
      if (plVar15 == (longlong *)0x0) {
LAB_1469bc9e2:
        plVar15 = (longlong *)0x0;
      }
      else {
        iVar12 = (int)plVar15[1];
        do {
          if (iVar12 == 0) goto LAB_1469bc9e2;
          LOCK();
          iVar10 = (int)plVar15[1];
          bVar17 = iVar12 == iVar10;
          if (bVar17) {
            *(int *)(plVar15 + 1) = iVar12 + 1;
            iVar10 = iVar12;
          }
          iVar12 = iVar10;
          plVar3 = DAT_14c98e618;
          UNLOCK();
        } while (!bVar17);
        lVar7 = *(longlong *)(lVar7 + 0x228);
        if (lVar7 != 0) {
          LOCK();
          *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
          UNLOCK();
          local_5e8 = local_4e8;
          local_5e0 = local_4e0;
          if (local_4e0 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_4e0 + 1) = (int)local_4e0[1] + 1;
            UNLOCK();
          }
          local_678 = (undefined8 *)CONCAT71(local_678._1_7_,1);
          local_5d8 = lVar7;
          local_5d0 = plVar15;
          FUN_1469a8322(plVar3,&local_318,&local_5e8,&local_5d8);
          local_5f8 = local_520;
          local_5f0 = local_518;
          if (local_518 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_518 + 1) = (int)local_518[1] + 1;
            UNLOCK();
          }
          FUN_140763be6(local_318,&local_5f8);
          plVar3 = local_310;
          if (local_310 != (longlong *)0x0) {
            LOCK();
            plVar4 = local_310 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
              (**(code **)*local_310)(local_310);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
          goto LAB_1469bcaa0;
        }
        bVar16 = false;
      }
      plVar3 = DAT_14c98e618;
      local_608 = local_4e8;
      local_600 = local_4e0;
      if (local_4e0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_4e0 + 1) = (int)local_4e0[1] + 1;
        UNLOCK();
      }
      (**(code **)(*plVar3 + 0x10))(plVar3,&local_318,&local_608,1);
      local_618 = local_520;
      local_610 = local_518;
      if (local_518 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_518 + 1) = (int)local_518[1] + 1;
        UNLOCK();
      }
      FUN_140763be6(local_318,&local_618);
      plVar3 = local_310;
      if (local_310 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_310 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_310)(local_310);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      if (!bVar16) goto LAB_1469bcaa0;
    }
    else {
      if (local_4d8 == 0) {
        local_658 = local_4e8;
        local_650 = local_4e0;
        if (local_4e0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_4e0 + 1) = (int)local_4e0[1] + 1;
          UNLOCK();
        }
        (**(code **)(*plVar15 + 0x10))(plVar15,&local_318,&local_658,1);
        local_668 = local_520;
        local_660 = local_518;
        if (local_518 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_518 + 1) = (int)local_518[1] + 1;
          UNLOCK();
        }
        puVar14 = &local_668;
      }
      else {
        local_628 = local_4d8;
        local_620 = local_4d0;
        if (local_4d0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_4d0 + 1) = (int)local_4d0[1] + 1;
          UNLOCK();
        }
        local_638 = local_4e8;
        local_630 = local_4e0;
        if (local_4e0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_4e0 + 1) = (int)local_4e0[1] + 1;
          UNLOCK();
        }
        local_678 = (undefined8 *)CONCAT71(local_678._1_7_,1);
        FUN_1469a8322(plVar15,&local_318,&local_638,&local_628);
        local_648 = local_520;
        local_640 = local_518;
        if (local_518 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_518 + 1) = (int)local_518[1] + 1;
          UNLOCK();
        }
        puVar14 = &local_648;
      }
      FUN_140763be6(local_318,puVar14);
      plVar15 = local_310;
      if (local_310 != (longlong *)0x0) {
LAB_1469bcaa0:
        LOCK();
        plVar3 = plVar15 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
    }
    local_318 = *(longlong *)(param_1 + 0x40);
    local_310 = *(longlong **)(param_1 + 0x48);
    if (local_310 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_310 + 1) = (int)local_310[1] + 1;
      UNLOCK();
    }
    FUN_1469bd63c(local_568,&local_318,0xffffffff,0);
    plVar15 = local_310;
    if (local_310 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_310 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_310)(local_310);
        LOCK();
        piVar2 = (int *)((longlong)plVar15 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
    }
    lVar7 = *(longlong *)(param_1 + 0x60);
    plVar15 = *(longlong **)(lVar7 + 0x2e8);
    if (plVar15 == (longlong *)0x0) {
LAB_1469bcb80:
      *(undefined1 *)(*_DAT_000000e8 + 0x151) = 1;
    }
    else {
      iVar12 = (int)plVar15[1];
      do {
        if (iVar12 == 0) goto LAB_1469bcb80;
        LOCK();
        iVar10 = (int)plVar15[1];
        bVar16 = iVar12 == iVar10;
        if (bVar16) {
          *(int *)(plVar15 + 1) = iVar12 + 1;
          iVar10 = iVar12;
        }
        iVar12 = iVar10;
        UNLOCK();
      } while (!bVar16);
      *(undefined1 *)(**(longlong **)(*(longlong *)(lVar7 + 0x2e0) + 0xe8) + 0x151) = 1;
      LOCK();
      plVar3 = plVar15 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar15)();
        LOCK();
        piVar2 = (int *)((longlong)plVar15 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar15 + 0x10))();
        }
      }
    }
    lVar7 = *(longlong *)(param_1 + 0x60);
    plVar15 = *(longlong **)(lVar7 + 0x2e8);
    bVar16 = true;
    if (plVar15 == (longlong *)0x0) {
      plVar15 = (longlong *)0x0;
      lVar13 = 0;
    }
    else {
      iVar12 = (int)plVar15[1];
      lVar13 = 0;
      do {
        if (iVar12 == 0) {
          plVar15 = (longlong *)0x0;
          goto LAB_1469bcbfd;
        }
        LOCK();
        iVar10 = (int)plVar15[1];
        bVar17 = iVar12 == iVar10;
        if (bVar17) {
          *(int *)(plVar15 + 1) = iVar12 + 1;
          iVar10 = iVar12;
        }
        iVar12 = iVar10;
        UNLOCK();
      } while (!bVar17);
      lVar13 = *(longlong *)(lVar7 + 0x2e0);
      bVar16 = false;
    }
LAB_1469bcbfd:
    puVar14 = *(undefined8 **)(lVar13 + 0xe8);
    local_318 = local_4e8;
    local_310 = local_4e0;
    if (local_4e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_4e0 + 1) = (int)local_4e0[1] + 1;
      UNLOCK();
    }
    local_4c8 = *(undefined8 *)(param_1 + 0x40);
    local_4c0 = *(longlong **)(param_1 + 0x48);
    if (local_4c0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_4c0 + 1) = (int)local_4c0[1] + 1;
      UNLOCK();
    }
    (**(code **)(*(longlong *)*puVar14 + 0x28))((longlong *)*puVar14,&local_4c8,&local_318);
    plVar3 = local_4c0;
    if (local_4c0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_4c0 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_4c0)(local_4c0);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    plVar3 = local_310;
    if (local_310 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_310 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_310)(local_310);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (!bVar16) {
      LOCK();
      plVar3 = plVar15 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
    if (local_518 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_518 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
        (**(code **)*local_518)(local_518);
        LOCK();
        piVar2 = (int *)((longlong)local_518 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_518 + 0x10))(local_518);
        }
      }
    }
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      plVar15 = plVar1 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
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
    if (local_4e0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_4e0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_4e0)(local_4e0);
        LOCK();
        piVar2 = (int *)((longlong)local_4e0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_4e0 + 0x10))(local_4e0);
        }
      }
    }
    if (local_4d0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_4d0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_4d0)(local_4d0);
        LOCK();
        piVar2 = (int *)((longlong)local_4d0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_4d0 + 0x10))(local_4d0);
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
LAB_1469bc4e1:
  if ((local_80 ^ (ulonglong)auStack_698) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469bcfa6 FUN_1469bcfa6 body=66 status=ok
// SIG undefined FUN_1469bcfa6(void)

undefined8 * FUN_1469bcfa6(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  
  lVar3 = *(longlong *)(param_1 + 0x2e8);
  if (lVar3 == 0) {
    lVar3 = 0;
    uVar4 = 0;
  }
  else {
    iVar2 = *(int *)(lVar3 + 8);
    uVar4 = 0;
    do {
      if (iVar2 == 0) {
        lVar3 = 0;
        goto LAB_1469bcfd8;
      }
      LOCK();
      iVar1 = *(int *)(lVar3 + 8);
      bVar5 = iVar2 == iVar1;
      if (bVar5) {
        *(int *)(lVar3 + 8) = iVar2 + 1;
        iVar1 = iVar2;
      }
      iVar2 = iVar1;
      UNLOCK();
    } while (!bVar5);
    uVar4 = *(undefined8 *)(param_1 + 0x2e0);
  }
LAB_1469bcfd8:
  *param_2 = uVar4;
  param_2[1] = lVar3;
  return param_2;
}



// FUNCTION 1469bcfe8 FUN_1469bcfe8 body=249 status=ok
// SIG undefined FUN_1469bcfe8(void)

void FUN_1469bcfe8(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  undefined1 auStack_78 [40];
  float local_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*(longlong *)(param_1 + 0xa0) == 0) || (*(longlong *)(param_1 + 0xa8) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0xa8) + 8) < 1)) {
    FUN_1469bd0e2(param_1,&local_50);
    fVar1 = *(float *)(param_2 + 0x20) - (float)(double)CONCAT44(fStack_4c,local_50);
    fVar2 = *(float *)(param_2 + 0x24) - (float)(double)CONCAT44(fStack_44,local_48);
    fStack_44 = (float)((double)fVar2 + *(double *)(param_1 + 0xc0));
    local_48 = (float)((double)fVar1 + *(double *)(param_1 + 0xb8));
    local_50 = fVar1;
    fStack_4c = fVar2;
    FUN_146980f9e(*(undefined8 *)(param_1 + 0x20),&local_50);
    FUN_1469807c6(*(undefined8 *)(param_1 + 0x20),CONCAT44(fVar2,fVar1));
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469bd0e2 FUN_1469bd0e2 body=131 status=ok
// SIG undefined FUN_1469bd0e2(void)

double * FUN_1469bd0e2(longlong param_1,double *param_2)

{
  double dVar1;
  char cVar2;
  float *pfVar3;
  double *pdVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  
  cVar2 = FUN_146a580d6(*(undefined8 *)(param_1 + 0x40));
  pfVar3 = (float *)&DAT_14c84635c;
  if ((*(byte *)(*(longlong *)(param_1 + 0x40) + 0x31) & 0x20) != 0) {
    pfVar3 = (float *)(*(longlong *)(param_1 + 0x40) + 0x168);
  }
  pdVar4 = (double *)&DAT_14c98e8e0;
  if (cVar2 == '\0') {
    pdVar4 = (double *)&DAT_14c98e8f0;
  }
  pdVar5 = (double *)&DAT_14c98e8e8;
  if (cVar2 == '\0') {
    pdVar5 = (double *)&DAT_14c98e8f8;
  }
  dVar6 = (double)pfVar3[1];
  if (*pdVar5 <= (double)pfVar3[1]) {
    dVar6 = *pdVar5;
  }
  dVar7 = (double)*pfVar3;
  if (*pdVar4 <= (double)*pfVar3) {
    dVar7 = *pdVar4;
  }
  dVar1 = *(double *)(param_1 + 0x58);
  *param_2 = dVar7 * *(double *)(param_1 + 0x50);
  param_2[1] = dVar6 * dVar1;
  return param_2;
}



// FUNCTION 1469bd166 FUN_1469bd166 body=467 status=ok
// SIG undefined FUN_1469bd166(void)

void FUN_1469bd166(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  char cVar4;
  longlong *plVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1469bd33a(*param_2,&local_48);
  local_38 = local_48;
  local_30 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  local_58 = *(undefined8 *)(param_1 + 0x60);
  plVar2 = *(longlong **)(param_1 + 0x68);
  local_50 = plVar2;
  if (plVar2 == (longlong *)0x0) {
    cVar4 = FUN_1428f8c97(&local_58,&local_38);
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    cVar4 = FUN_1428f8c97(&local_58,&local_38);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar2 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
  }
  plVar2 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_30 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  if (cVar4 == '\0') {
    *(undefined8 *)(param_1 + 0x90) = *param_2;
    plVar2 = (longlong *)param_2[1];
    plVar5 = *(longlong **)(param_1 + 0x98);
    if (plVar5 != plVar2) {
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
        UNLOCK();
        plVar5 = *(longlong **)(param_1 + 0x98);
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))();
        }
      }
      *(longlong **)(param_1 + 0x98) = plVar2;
    }
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x510);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x58))();
    }
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    FUN_1469bd33a(*param_2,&local_38);
    FUN_146a59378(uVar3,&local_38);
    plVar2 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_30 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
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



// FUNCTION 1469bd33a FUN_1469bd33a body=136 status=ok
// SIG undefined FUN_1469bd33a(void)

undefined8 * FUN_1469bd33a(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  
  if (((*(longlong *)(param_1 + 0x210) == 0) ||
      (plVar5 = *(longlong **)(param_1 + 0x218), plVar5 == (longlong *)0x0)) || ((int)plVar5[1] < 1)
     ) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar3 = (int)plVar5[1];
    plVar4 = (longlong *)0x0;
    do {
      if (iVar3 == 0) {
        plVar5 = (longlong *)0x0;
        goto LAB_1469bd38f;
      }
      LOCK();
      iVar2 = (int)plVar5[1];
      bVar6 = iVar3 == iVar2;
      if (bVar6) {
        *(int *)(plVar5 + 1) = iVar3 + 1;
        iVar2 = iVar3;
      }
      iVar3 = iVar2;
      UNLOCK();
    } while (!bVar6);
    plVar4 = *(longlong **)(param_1 + 0x210);
LAB_1469bd38f:
    (**(code **)(*plVar4 + 600))(plVar4,param_2);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar5 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
  }
  return param_2;
}



// FUNCTION 1469bd3c2 FUN_1469bd3c2 body=632 status=ok
// SIG undefined FUN_1469bd3c2(void)

void FUN_1469bd3c2(longlong param_1,float *param_2)

{
  int *piVar1;
  longlong *plVar2;
  float fVar3;
  longlong *plVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  float fVar10;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar4 = *(longlong **)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  FUN_1402bacd4(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)param_2);
  thunk_FUN_1616686ea(*(undefined8 *)(param_1 + 0x20));
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  fVar3 = param_2[2];
  fVar10 = fVar3 * 0.0;
  local_b8 = CONCAT44(param_2[4] + fVar10,fVar10 + param_2[3]);
  local_a8 = CONCAT44(param_2[1] * fVar3,fVar10);
  local_b0 = CONCAT44(fVar10,fVar3 * *param_2);
  FUN_144b01024(&local_b8,&local_48);
  FUN_146980786(uVar5,&local_48);
  FUN_14285ff5a(&local_b8);
  local_c8 = 2;
  FUN_14692f186(&local_b8,&local_48,0,0x3d4ccccd);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  FUN_146981226(uVar5,&local_48);
  uVar8 = FUN_145da7a3c(*(undefined8 *)(param_1 + 0x20));
  FUN_146980f52(uVar5,&local_b8,uVar8,&local_48);
  dVar6 = (double)param_2[1];
  dVar7 = (double)*param_2;
  dVar9 = dVar7;
  if (*param_2 <= param_2[1]) {
    dVar9 = dVar6;
  }
  dVar9 = 800.0 / dVar9;
  if (1.0 <= dVar9) {
    dVar9 = 1.0;
  }
  if (dVar9 <= 0.10000000149011612) {
    dVar9 = 0.10000000149011612;
  }
  *(double *)(param_1 + 0xb8) = dVar7 * (double)(float)dVar9;
  *(double *)(param_1 + 0xc0) = dVar6 * (double)(float)dVar9;
  uVar5 = *(undefined8 *)(param_1 + 0x70);
  local_48 = *(undefined8 *)(param_1 + 0x40);
  plStack_40 = *(longlong **)(param_1 + 0x48);
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
    UNLOCK();
  }
  FUN_1469bd63c(uVar5,&local_48,0xffffffff,0);
  plVar4 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_40 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  FUN_146a59378(*(undefined8 *)(param_1 + 0x40),&local_48);
  plVar4 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_40 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  FUN_1402bc42a(&local_b8);
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469bd63c FUN_1469bd63c body=722 status=ok
// SIG undefined FUN_1469bd63c(void)

void FUN_1469bd63c(longlong *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong *plStack_80;
  longlong local_78 [3];
  int local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_146a584e0(*param_2,&local_88);
  uVar7 = FUN_1469cd036(param_1,&local_88,param_3);
  uVar4 = *param_2;
  (**(code **)(*param_1 + 600))(param_1,&local_58);
  plStack_80 = *(longlong **)(local_58 + 0x2e8);
  if (plStack_80 == (longlong *)0x0) {
LAB_1469bd6b1:
    local_88 = 0;
    plStack_80 = (longlong *)0x0;
    bVar11 = true;
  }
  else {
    iVar8 = (int)plStack_80[1];
    do {
      if (iVar8 == 0) goto LAB_1469bd6b1;
      LOCK();
      iVar6 = (int)plStack_80[1];
      bVar11 = iVar8 == iVar6;
      if (bVar11) {
        *(int *)(plStack_80 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar11);
    local_88 = *(longlong *)(local_58 + 0x2e0);
    LOCK();
    *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
    UNLOCK();
    bVar11 = false;
  }
  plVar9 = plStack_80;
  FUN_146a58e30(uVar4,&local_88);
  plVar3 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_80 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (!bVar11) {
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
  plVar9 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_50 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  FUN_146a584e0(*param_2,local_78 + 2);
  if ((longlong)(int)param_1[0x51] != 0) {
    plVar9 = (longlong *)param_1[0x50];
    lVar10 = (longlong)(int)param_1[0x51] << 5;
    do {
      if ((*plVar9 == local_78[2]) &&
         ((((int)plVar9[1] == -1 || (local_60 == -1)) || ((int)plVar9[1] == local_60))))
      goto LAB_1469bd760;
      plVar9 = plVar9 + 4;
      lVar10 = lVar10 + -0x20;
    } while (lVar10 != 0);
  }
  plVar9 = (longlong *)0x0;
LAB_1469bd760:
  if ((int)plVar9[2] == 4) {
    local_78[0] = 0;
    local_78[1] = 0;
    local_88 = 0;
    plStack_80 = (longlong *)0x0;
    if (*(char *)((longlong)plVar9 + 0x14) == '\0') {
      plVar9 = &local_88;
    }
    else {
      plVar9 = local_78;
    }
    *(undefined4 *)(plVar9 + 1) = 1;
    FUN_1469eebc8(plVar9,0);
    puVar5 = (undefined8 *)*plVar9;
    *puVar5 = *param_2;
    lVar10 = param_2[1];
    puVar5[1] = lVar10;
    if (lVar10 != 0) {
      LOCK();
      *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
      UNLOCK();
    }
    uVar4 = *param_2;
    local_58 = param_1[0x52];
    local_50 = (longlong *)param_1[0x53];
    if (local_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
    }
    FUN_146a584ee(uVar4,&local_58);
    (**(code **)(*param_1 + 600))(param_1,&local_58);
    FUN_1469c570a(local_58,&local_88);
    plVar9 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_50 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    FUN_1469cd42a(&local_88);
  }
  else {
    FUN_1469cd470(param_1,param_2,uVar7,param_4);
    (**(code **)(*param_1 + 0x290))(param_1);
    FUN_1469cd550(param_1[0x52]);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469bd910 FUN_1469bd910 body=1188 status=ok
// SIG undefined FUN_1469bd910(void)

void FUN_1469bd910(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  char cVar9;
  int iVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  float *pfVar14;
  bool bVar15;
  undefined4 uVar16;
  float fVar17;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined1 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  undefined1 local_110 [112];
  longlong *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  float local_78;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  cVar9 = FUN_1469e4b60(param_1 + 0xa0);
  if (cVar9 == '\0') {
    lVar4 = *param_2;
    lVar5 = param_2[1];
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 0xc) = *(int *)(lVar5 + 0xc) + 1;
      UNLOCK();
    }
    plVar13 = *(longlong **)(param_1 + 0xa8);
    *(longlong *)(param_1 + 0xa0) = lVar4;
    *(longlong *)(param_1 + 0xa8) = lVar5;
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar13 + 0x10))();
      }
    }
    *(int *)(param_1 + 0xb0) = (int)param_2[2];
    plVar13 = (longlong *)param_2[1];
    if (plVar13 == (longlong *)0x0) {
LAB_1469bd9e4:
      plVar13 = (longlong *)0x0;
    }
    else {
      iVar10 = (int)plVar13[1];
      do {
        if (iVar10 == 0) goto LAB_1469bd9e4;
        LOCK();
        iVar8 = (int)plVar13[1];
        bVar15 = iVar10 == iVar8;
        if (bVar15) {
          *(int *)(plVar13 + 1) = iVar10 + 1;
          iVar8 = iVar10;
        }
        iVar10 = iVar8;
        UNLOCK();
      } while (!bVar15);
    }
    plVar6 = (longlong *)*param_2;
    FUN_14285ff5a(local_110);
    local_188 = CONCAT71(local_188._1_7_,2);
    FUN_14692f186(local_110,&local_88,0);
    if (plVar6 == (longlong *)0x0 || plVar13 == (longlong *)0x0) {
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      FUN_146981226(uVar7,&local_88);
      uVar16 = FUN_145da7a3c(*(undefined8 *)(param_1 + 0x20));
      FUN_146980f52(uVar7,local_110,uVar16,&local_88);
      local_178 = 0x3f800000;
      uStack_174 = 0x3f800000;
      uStack_170 = 0x3f800000;
      uStack_16c = 0x3f800000;
      local_168 = 1;
      local_160 = 0;
      uStack_158 = 0;
      FUN_140a5c650(*(longlong *)(param_1 + 0x20) + 0x240,*(longlong *)(param_1 + 0x20),&local_178);
      FUN_1449db362(&local_160);
      local_88 = 0;
      uStack_80 = (longlong *)0x0;
      FUN_146a59378(*(undefined8 *)(param_1 + 0x40),&local_88);
      plVar6 = uStack_80;
      if (uStack_80 != (longlong *)0x0) {
        LOCK();
        plVar11 = uStack_80 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*uStack_80)(uStack_80);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      FUN_1402bc42a(local_110);
      if (plVar13 == (longlong *)0x0) goto LAB_1469bd954;
    }
    else {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
      local_a0 = plVar6;
      local_98 = plVar13;
      FUN_146947736(param_3,&local_88,&local_a0);
      plVar11 = local_98;
      if (local_98 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_98 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_98)(local_98);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
      LOCK();
      plVar11 = plVar13 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
      uVar3 = *(uint *)(param_2 + 2);
      fVar17 = (float)uStack_80 * 0.0;
      local_a0 = (longlong *)CONCAT44(local_78 + fVar17,fVar17 + uStack_80._4_4_);
      local_90 = CONCAT44(local_88._4_4_ * (float)uStack_80,fVar17);
      local_98 = (longlong *)CONCAT44(fVar17,(float)local_88 * (float)uStack_80);
      pfVar14 = &local_120;
      FUN_144b01024(&local_a0,pfVar14);
      if (uVar3 < 4) {
        fVar17 = local_118 - local_120;
        switch(uVar3) {
        case 0:
          pfVar14 = &local_118;
          break;
        case 1:
          pfVar14 = &local_114;
          local_120 = local_11c;
          fVar17 = local_114 - local_11c;
          break;
        case 3:
          pfVar14 = &local_11c;
          local_120 = local_11c;
          fVar17 = local_114 - local_11c;
        }
        *pfVar14 = fVar17 * 0.5 + local_120;
      }
      uVar16 = FUN_145da7a3c(*(undefined8 *)(param_1 + 0x20));
      FUN_146980f52(*(undefined8 *)(param_1 + 0x20),local_110,uVar16,&local_120);
      lVar4 = *(longlong *)(param_1 + 0x20);
      plVar11 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
      if (plVar11 == (longlong *)0x0) {
        plVar11 = DAT_14c96b350;
      }
      FUN_1446f470e(&local_150,L"Docking.Cross.PreviewWindowTint",1);
      local_188 = 0;
      puVar12 = (undefined8 *)(**(code **)(*plVar11 + 0x38))(plVar11,local_150,0,&DAT_14c75ed64);
      local_148 = *puVar12;
      uStack_140 = puVar12[1];
      local_138 = 1;
      local_130 = 0;
      uStack_128 = 0;
      FUN_140a5c650(lVar4 + 0x240,lVar4,&local_148);
      FUN_1449db362(&local_130);
      uVar7 = *(undefined8 *)(param_1 + 0x40);
      (**(code **)(*plVar6 + 600))(plVar6,&local_a0);
      FUN_146a59378(uVar7,&local_a0);
      plVar6 = local_98;
      if (local_98 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_98 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*local_98)(local_98);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      FUN_1402bc42a(local_110);
    }
    LOCK();
    plVar6 = plVar13 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
LAB_1469bd954:
  if ((local_50 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469bddb6 FUN_1469bddb6 body=412 status=ok
// SIG undefined FUN_1469bddb6(void)

longlong *
FUN_1469bddb6(longlong *param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4,
             undefined8 param_5)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = FUN_14001cc68(200,0x10);
  local_48 = *param_4;
  local_40 = param_4[1];
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  local_58 = *param_3;
  uStack_54 = param_3[1];
  uStack_50 = param_3[2];
  uStack_4c = param_3[3];
  local_68 = param_5;
  FUN_1469bdf56(lVar2,param_2,&local_58,&local_48);
  *param_1 = lVar2;
  plVar3 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_149f02340;
  plVar3[2] = lVar2;
  param_1[1] = (longlong)plVar3;
  if ((lVar2 == 0) ||
     (((*(longlong *)(lVar2 + 8) != 0 && (*(longlong *)(lVar2 + 0x10) != 0)) &&
      (0 < *(int *)(*(longlong *)(lVar2 + 0x10) + 8))))) goto LAB_1469bdef8;
  if (plVar3 == (longlong *)0x0) {
    *(longlong *)(lVar2 + 8) = lVar2;
    plVar4 = *(longlong **)(lVar2 + 0x10);
    if (plVar4 == (longlong *)0x0) goto LAB_1469bdef8;
LAB_1469bdead:
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
    *(longlong **)(lVar2 + 0x10) = plVar3;
    if (plVar3 == (longlong *)0x0) goto LAB_1469bdef8;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(longlong *)(lVar2 + 8) = lVar2;
    if (*(longlong **)(lVar2 + 0x10) != plVar3) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar4 = *(longlong **)(lVar2 + 0x10);
      if (plVar4 != (longlong *)0x0) goto LAB_1469bdead;
      *(longlong **)(lVar2 + 0x10) = plVar3;
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
LAB_1469bdef8:
  plVar3 = (longlong *)param_4[1];
  if (plVar3 != (longlong *)0x0) {
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1469bdf56 FUN_1469bdf56 body=2142 status=ok
// SIG undefined FUN_1469bdf56(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1469bdf56(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4,
             undefined4 *param_5)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_858 [32];
  undefined1 *local_838;
  undefined1 local_821;
  undefined1 local_820 [8];
  longlong *local_818;
  undefined8 local_808;
  longlong *local_800;
  undefined1 local_7f8 [8];
  longlong *local_7f0;
  undefined8 *local_7e8;
  undefined1 *local_7e0;
  undefined1 local_7d8 [8];
  longlong *local_7d0;
  undefined1 local_7c0 [8];
  longlong *local_7b8;
  undefined1 *local_7b0;
  undefined8 local_7a8;
  longlong *local_7a0;
  undefined8 local_790;
  longlong *local_788;
  undefined8 local_780;
  longlong *local_778;
  undefined8 local_770;
  longlong *local_768;
  undefined8 local_760;
  undefined8 local_758;
  undefined1 local_750;
  undefined8 local_748;
  undefined8 uStack_740;
  undefined8 local_738;
  longlong *local_730;
  undefined8 local_728;
  longlong *local_720;
  undefined1 local_718 [16];
  undefined1 local_708 [432];
  undefined1 local_558 [464];
  longlong local_388;
  longlong *plStack_380;
  undefined8 local_1e0;
  longlong *local_1d8;
  undefined8 local_160;
  undefined1 local_158;
  undefined1 local_150 [256];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_858;
  FUN_146946e4a();
  *param_1 = &PTR_FUN_149effa60;
  param_1[8] = *param_2;
  lVar11 = param_2[1];
  param_1[9] = lVar11;
  if (lVar11 != 0) {
    LOCK();
    *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
    UNLOCK();
  }
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  *(undefined4 *)(param_1 + 10) = *param_3;
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar4;
  *(undefined4 *)(param_1 + 0xb) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar6;
  param_1[0xc] = *param_4;
  lVar11 = param_4[1];
  param_1[0xd] = lVar11;
  if (lVar11 != 0) {
    LOCK();
    *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
    UNLOCK();
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_146a58380(*param_2,&local_388);
  if (((*(longlong *)(local_388 + 0x210) == 0) ||
      (plVar10 = *(longlong **)(local_388 + 0x218), plVar10 == (longlong *)0x0)) ||
     ((int)plVar10[1] < 1)) {
LAB_1469be055:
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  else {
    iVar9 = (int)plVar10[1];
    do {
      if (iVar9 == 0) goto LAB_1469be055;
      LOCK();
      iVar7 = (int)plVar10[1];
      bVar13 = iVar9 == iVar7;
      if (bVar13) {
        *(int *)(plVar10 + 1) = iVar9 + 1;
        iVar7 = iVar9;
      }
      iVar9 = iVar7;
      UNLOCK();
    } while (!bVar13);
    param_1[0x10] = *(undefined8 *)(local_388 + 0x210);
    param_1[0x11] = plVar10;
    LOCK();
    *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar12 = plVar10 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
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
  plVar10 = plStack_380;
  if (plStack_380 != (longlong *)0x0) {
    LOCK();
    plVar12 = plStack_380 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plStack_380)(plStack_380);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  uVar4 = param_5[1];
  uVar5 = param_5[2];
  uVar6 = param_5[3];
  *(undefined4 *)(param_1 + 0x17) = *param_5;
  *(undefined4 *)((longlong)param_1 + 0xbc) = uVar4;
  *(undefined4 *)(param_1 + 0x18) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0xc4) = uVar6;
  plVar10 = DAT_14c98e618;
  FUN_1469801e0(local_718);
  (**(code **)(*plVar10 + 0x10))(plVar10,&local_388,local_718,0);
  plVar10 = plStack_380;
  if (plStack_380 == (longlong *)0x0) {
    param_1[4] = local_388;
    plVar12 = (longlong *)param_1[5];
    if (plVar12 == (longlong *)0x0) goto LAB_1469be10d;
    param_1[5] = 0;
LAB_1469be758:
    LOCK();
    plVar10 = plVar12 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 != 0) goto LAB_1469be10d;
    (**(code **)*plVar12)(plVar12);
    LOCK();
    piVar1 = (int *)((longlong)plVar12 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar9 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(plStack_380 + 1) = (int)plStack_380[1] + 1;
    UNLOCK();
    param_1[4] = local_388;
    plVar12 = (longlong *)param_1[5];
    if (plStack_380 != plVar12) {
      param_1[5] = plStack_380;
      if (plVar12 == (longlong *)0x0) goto LAB_1469be10d;
      goto LAB_1469be758;
    }
    LOCK();
    plVar12 = plStack_380 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 != 0) goto LAB_1469be10d;
    (**(code **)*plStack_380)(plStack_380);
    LOCK();
    piVar1 = (int *)((longlong)plVar10 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar9 = *piVar1;
    UNLOCK();
    plVar12 = plVar10;
  }
  if (iVar9 == 0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
LAB_1469be10d:
  plVar10 = plStack_380;
  plVar12 = param_1 + 4;
  if (plStack_380 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_380 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_380)(plStack_380);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  FUN_146981c16(*plVar12,0);
  lVar11 = *plVar12;
  if ((*(float *)(lVar11 + 0x35c) != 0.45) || (NAN(*(float *)(lVar11 + 0x35c)))) {
    *(undefined4 *)(lVar11 + 0x35c) = 0x3ee66666;
    (**(code **)(**(longlong **)(lVar11 + 0x510) + 0x98))(*(longlong **)(lVar11 + 0x510),0x3ee66666)
    ;
    lVar11 = *plVar12;
  }
  FUN_140a562d0(&local_388);
  plVar10 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar10 == (longlong *)0x0) {
    plVar10 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_760,"Docking.Background",1);
  local_758 = (**(code **)(*plVar10 + 0x50))(plVar10,local_760,0,0);
  local_750 = 1;
  local_748 = 0;
  uStack_740 = 0;
  local_158 = 1;
  local_160 = local_758;
  FUN_144a450dc(local_150,&local_748);
  FUN_1449db362(&local_748);
  FUN_1469bec34(local_558);
  FUN_1469bed42(local_708);
  FUN_1469bed62(local_7c0);
  local_7b0 = local_7c0;
  FUN_1469ece9a(&local_7a8,".\\Runtime/Slate/Private/Framework/Docking/FDockingDragOperation.cpp",
                0x11a);
  if (local_7a0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_7a0 + 1) = (int)local_7a0[1] + 1;
    UNLOCK();
  }
  plVar10 = (longlong *)param_1[0xf];
  param_1[0xe] = local_7a8;
  param_1[0xf] = local_7a0;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar10 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
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
  FUN_1469bee4e(&local_7a8,&local_790,local_708);
  local_780 = local_790;
  local_778 = local_788;
  if (local_788 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_788 + 1) = (int)local_788[1] + 1;
    UNLOCK();
  }
  FUN_1469becbc(local_558);
  FUN_14627f6ee(local_7f8);
  lVar3 = param_1[8];
  local_800 = *(longlong **)(lVar3 + 0x2c8);
  if (local_800 == (longlong *)0x0) {
LAB_1469be315:
    local_808 = 0;
    local_800 = (longlong *)0x0;
  }
  else {
    iVar9 = (int)local_800[1];
    do {
      if (iVar9 == 0) goto LAB_1469be315;
      LOCK();
      iVar7 = (int)local_800[1];
      bVar13 = iVar9 == iVar7;
      if (bVar13) {
        *(int *)(local_800 + 1) = iVar9 + 1;
        iVar7 = iVar9;
      }
      iVar9 = iVar7;
      UNLOCK();
    } while (!bVar13);
    local_808 = *(undefined8 *)(lVar3 + 0x2c0);
  }
  local_7e8 = &local_808;
  local_7e0 = local_7f8;
  FUN_1469eca5c(local_7d8,".\\Runtime/Slate/Private/Framework/Docking/FDockingDragOperation.cpp",
                0x116);
  FUN_1469beec8(local_7d8,&local_770,local_558);
  plVar12 = local_1d8;
  plVar10 = local_768;
  if (local_768 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_768 + 1) = (int)local_768[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_768 + 1) = (int)local_768[1] + 1;
    UNLOCK();
  }
  local_1e0 = local_770;
  local_1d8 = local_768;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar12 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  local_838 = &local_821;
  FUN_140a55c32(local_820,"SBorder",
                ".\\Runtime/Slate/Private/Framework/Docking/FDockingDragOperation.cpp",0x113);
  FUN_140a530e4(local_820,&local_738,&local_388);
  local_728 = local_738;
  local_720 = local_730;
  if (local_730 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_730 + 1) = (int)local_730[1] + 1;
    UNLOCK();
  }
  FUN_140763be6(lVar11,&local_728);
  if (local_730 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_730 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_730)(local_730);
      LOCK();
      piVar1 = (int *)((longlong)local_730 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_730 + 0x10))(local_730);
      }
    }
  }
  if (local_818 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_818 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_818)(local_818);
      LOCK();
      piVar1 = (int *)((longlong)local_818 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_818 + 0x10))(local_818);
      }
    }
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar10 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
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
  if (local_768 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_768 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_768)(local_768);
      LOCK();
      piVar1 = (int *)((longlong)local_768 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_768 + 0x10))(local_768);
      }
    }
  }
  if (local_7d0 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_7d0 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_7d0)(local_7d0);
      LOCK();
      piVar1 = (int *)((longlong)local_7d0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_7d0 + 0x10))(local_7d0);
      }
    }
  }
  plVar10 = local_800;
  if (local_800 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_800 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_800)(local_800);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if (local_7f0 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_7f0 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_7f0)(local_7f0);
      LOCK();
      piVar1 = (int *)((longlong)local_7f0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_7f0 + 0x10))(local_7f0);
      }
    }
  }
  if (local_788 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_788 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_788)(local_788);
      LOCK();
      piVar1 = (int *)((longlong)local_788 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_788 + 0x10))(local_788);
      }
    }
  }
  if (local_7a0 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_7a0 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_7a0)(local_7a0);
      LOCK();
      piVar1 = (int *)((longlong)local_7a0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_7a0 + 0x10))(local_7a0);
      }
    }
  }
  if (local_7b8 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_7b8 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_7b8)(local_7b8);
      LOCK();
      piVar1 = (int *)((longlong)local_7b8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_7b8 + 0x10))(local_7b8);
      }
    }
  }
  FUN_140a4ff8c(local_708);
  FUN_1469bef46(local_558);
  FUN_140a59028(&local_388);
  lVar11 = param_1[0xc];
  plVar10 = *(longlong **)(lVar11 + 0x2e8);
  if (plVar10 == (longlong *)0x0) {
LAB_1469be601:
    plVar10 = _DAT_000000e8;
    FUN_1469de4a0(*_DAT_000000e8);
    *(undefined1 *)(*plVar10 + 0x151) = 0;
  }
  else {
    iVar9 = (int)plVar10[1];
    do {
      if (iVar9 == 0) goto LAB_1469be601;
      LOCK();
      iVar7 = (int)plVar10[1];
      bVar13 = iVar9 == iVar7;
      if (bVar13) {
        *(int *)(plVar10 + 1) = iVar9 + 1;
        iVar7 = iVar9;
      }
      iVar9 = iVar7;
      UNLOCK();
    } while (!bVar13);
    plVar12 = *(longlong **)(*(longlong *)(lVar11 + 0x2e0) + 0xe8);
    FUN_1469de4a0(*plVar12);
    *(undefined1 *)(*plVar12 + 0x151) = 0;
    LOCK();
    plVar12 = plVar10 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
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
  cVar8 = FUN_146a57ad6(param_1[8]);
  if (cVar8 != '\0') {
    FUN_14162fdc4();
    local_388 = 0;
    plStack_380 = (longlong *)0x0;
    FUN_1469befb0(DAT_14c98e9c0);
  }
  plVar10 = (longlong *)param_4[1];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar10 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
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
  if ((local_50 ^ (ulonglong)auStack_858) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469be7b6 FUN_1469be7b6 body=804 status=ok
// SIG undefined FUN_1469be7b6(void)

undefined8 FUN_1469be7b6(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined7 uVar13;
  undefined8 uVar12;
  longlong *plVar14;
  longlong lVar15;
  bool bVar16;
  bool bVar17;
  undefined1 auStack_a8 [32];
  int local_88;
  undefined4 local_84;
  longlong local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_88 = (int)param_3;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  (**(code **)(*(longlong *)*param_2 + 600))((longlong *)*param_2,&local_58);
  plVar14 = *(longlong **)(local_58 + 0x2e8);
  local_84 = (undefined4)CONCAT71((int7)((ulonglong)param_3 >> 8),1);
  if (plVar14 == (longlong *)0x0) {
    plVar14 = (longlong *)0x0;
    lVar15 = 0;
  }
  else {
    iVar9 = (int)plVar14[1];
    lVar15 = 0;
    do {
      if (iVar9 == 0) {
        plVar14 = (longlong *)0x0;
        goto LAB_1469be82f;
      }
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
    lVar15 = *(longlong *)(local_58 + 0x2e0);
    local_84 = 0;
  }
LAB_1469be82f:
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_50 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x60);
  plVar10 = *(longlong **)(lVar3 + 0x2e8);
  bVar16 = true;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
    local_80 = 0;
  }
  else {
    iVar9 = (int)plVar10[1];
    local_80 = 0;
    do {
      if (iVar9 == 0) {
        plVar10 = (longlong *)0x0;
        goto LAB_1469be896;
      }
      LOCK();
      iVar6 = (int)plVar10[1];
      bVar17 = iVar9 == iVar6;
      if (bVar17) {
        *(int *)(plVar10 + 1) = iVar9 + 1;
        iVar6 = iVar9;
      }
      iVar9 = iVar6;
      UNLOCK();
    } while (!bVar17);
    local_80 = *(longlong *)(lVar3 + 0x2e0);
    bVar16 = false;
  }
LAB_1469be896:
  local_58 = *param_2;
  local_50 = (longlong *)param_2[1];
  if (local_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
  }
  FUN_146a58434(*(undefined8 *)(param_1 + 0x40),&local_78);
  plVar5 = local_70;
  local_68 = local_78;
  local_60 = local_70;
  if (local_70 == (longlong *)0x0) {
    uVar8 = FUN_1428f8c97(&local_68,&local_58);
    uVar11 = (ulonglong)uVar8;
  }
  else {
    LOCK();
    *(int *)(local_70 + 1) = (int)local_70[1] + 1;
    UNLOCK();
    uVar8 = FUN_1428f8c97(&local_68,&local_58);
    uVar11 = (ulonglong)uVar8;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar5 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  }
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_70 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  plVar5 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_50 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((char)uVar11 == '\0') {
    cVar7 = FUN_146a580ce(*(undefined8 *)(param_1 + 0x40));
    uVar13 = (undefined7)(uVar11 >> 8);
    if (cVar7 == '\x02') {
      if (local_88 == 0) {
        uVar12 = CONCAT71(uVar13,1);
      }
      else {
        FUN_14162fdc4();
        uVar12 = CONCAT71(uVar13,lVar15 != DAT_14c98e9c0);
      }
      goto LAB_1469be993;
    }
    cVar7 = FUN_146a580ce(*(undefined8 *)(param_1 + 0x40));
    lVar3 = local_80;
    uVar12 = CONCAT71(uVar13,lVar15 == local_80);
    if (cVar7 != '\0') goto LAB_1469be993;
    iVar9 = (**(code **)(*(longlong *)*param_2 + 0x240))();
    if (iVar9 == 2) {
      lVar4 = *param_2;
      plVar5 = (longlong *)param_2[1];
      if (plVar5 == (longlong *)0x0) {
        bVar17 = *(int *)(lVar4 + 0x298) == 0;
      }
      else {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        bVar17 = *(int *)(lVar4 + 0x298) == 0;
        LOCK();
        plVar2 = plVar5 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
    }
    else {
      bVar17 = false;
    }
    if (lVar15 == lVar3) {
      uVar12 = CONCAT71(uVar13,local_88 == 0 | bVar17);
      goto LAB_1469be993;
    }
  }
  uVar12 = 0;
LAB_1469be993:
  if (!bVar16) {
    LOCK();
    plVar5 = plVar10 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  if ((char)local_84 == '\0') {
    LOCK();
    plVar10 = plVar14 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12;
}



// FUNCTION 1469beadc FUN_1469beadc body=243 status=ok
// SIG undefined FUN_1469beadc(void)

void FUN_1469beadc(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149effa60;
  if (param_1[8] != 0) {
    FUN_1469bc456(param_1);
  }
  plVar3 = (longlong *)param_1[0x15];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0x13];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0x11];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0xf];
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
  plVar3 = (longlong *)param_1[0xd];
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
  plVar3 = (longlong *)param_1[9];
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
  FUN_14695359c(param_1);
  return;
}



// FUNCTION 1469bebd0 FUN_1469bebd0 body=99 status=ok
// SIG undefined FUN_1469bebd0(void)

undefined8 * FUN_1469bebd0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  
  if (((*(longlong *)(param_1 + 0x210) == 0) || (lVar2 = *(longlong *)(param_1 + 0x218), lVar2 == 0)
      ) || (*(int *)(lVar2 + 8) < 1)) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = 0;
    param_2[1] = lVar2;
    iVar3 = *(int *)(lVar2 + 8);
    do {
      if (iVar3 == 0) {
        param_2[1] = 0;
        return param_2;
      }
      LOCK();
      iVar1 = *(int *)(lVar2 + 8);
      bVar4 = iVar3 == iVar1;
      if (bVar4) {
        *(int *)(lVar2 + 8) = iVar3 + 1;
        iVar1 = iVar3;
      }
      iVar3 = iVar1;
      UNLOCK();
    } while (!bVar4);
    if (param_2[1] != 0) {
      *param_2 = *(undefined8 *)(param_1 + 0x210);
    }
  }
  return param_2;
}



// FUNCTION 1469bec34 FUN_1469bec34 body=134 status=ok
// SIG undefined FUN_1469bec34(void)

longlong FUN_1469bec34(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined2 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined1 *)(param_1 + 0x1b8) = 1;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  local_30 = CONCAT11(1,DAT_14c96b23c);
  local_28 = 0;
  uStack_20 = 0;
  *(undefined2 *)(param_1 + 0x70) = local_30;
  FUN_144a450dc(param_1 + 0x78,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469becbc FUN_1469becbc body=133 status=ok
// SIG undefined FUN_1469becbc(void)

longlong FUN_1469becbc(longlong param_1,undefined8 *param_2)

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
  plVar5 = *(longlong **)(param_1 + 0x1c8);
  *(undefined8 *)(param_1 + 0x1c0) = uVar3;
  *(longlong *)(param_1 + 0x1c8) = lVar4;
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
  plVar5 = (longlong *)param_2[1];
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



// FUNCTION 1469bed42 FUN_1469bed42 body=31 status=ok
// SIG undefined FUN_1469bed42(void)

longlong FUN_1469bed42(longlong param_1)

{
  FUN_140a5071c();
  *(undefined2 *)(param_1 + 0x1a8) = 0;
  return param_1;
}



// FUNCTION 1469bed62 FUN_1469bed62 body=235 status=ok
// SIG undefined FUN_1469bed62(void)

undefined8 * FUN_1469bed62(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *(undefined4 *)(puVar3 + 3) = 0x3f800000;
  *puVar3 = &PTR_FUN_149f019a0;
  *(undefined8 *)((longlong)puVar3 + 0x34) = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  *(undefined1 *)(puVar3 + 6) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = 0xffffffff;
  *(undefined1 *)(puVar3 + 8) = 1;
  *(undefined8 *)((longlong)puVar3 + 0x44) = 0;
  *(undefined1 *)((longlong)puVar3 + 0x4c) = 0;
  *param_1 = puVar3;
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149f019c0;
  plVar4[2] = (longlong)puVar3;
  param_1[1] = plVar4;
  if (puVar3 != (undefined8 *)0x0) {
    if (plVar4 == (longlong *)0x0) {
      puVar3[1] = puVar3;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      puVar3[1] = puVar3;
      if ((longlong *)puVar3[2] != plVar4) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        plVar2 = (longlong *)puVar3[2];
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))();
          }
        }
        puVar3[2] = plVar4;
      }
      LOCK();
      plVar2 = plVar4 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  }
  return param_1;
}



// FUNCTION 1469bee4e FUN_1469bee4e body=122 status=ok
// SIG undefined FUN_1469bee4e(void)

longlong * FUN_1469bee4e(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_1469c935c(*param_1,param_3,*(undefined8 *)param_1[2]);
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



// FUNCTION 1469beec8 FUN_1469beec8 body=126 status=ok
// SIG undefined FUN_1469beec8(void)

longlong * FUN_1469beec8(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_1469bf322(*param_1,param_3,*(undefined8 *)param_1[2],((undefined8 *)param_1[2])[1]);
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



// FUNCTION 1469bef46 FUN_1469bef46 body=105 status=ok
// SIG undefined FUN_1469bef46(void)

void FUN_1469bef46(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x1c8);
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
  plVar3 = *(longlong **)(param_1 + 0x1b0);
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
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 1469befb0 FUN_1469befb0 body=352 status=ok
// SIG undefined FUN_1469befb0(void)

void FUN_1469befb0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  bool bVar10;
  bool bVar11;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined8 *local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  bVar4 = true;
  bVar10 = true;
  if (*param_2 != 0) {
    cVar5 = FUN_146a580d6();
    bVar10 = cVar5 != '\0';
  }
  puVar8 = *(undefined8 **)(param_1 + 0x1e0);
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
    lVar9 = 0;
  }
  else {
    iVar6 = *(int *)(puVar8 + 1);
    lVar9 = 0;
    do {
      if (iVar6 == 0) {
        puVar8 = (undefined8 *)0x0;
        goto LAB_1469bf01a;
      }
      LOCK();
      iVar2 = *(int *)(puVar8 + 1);
      bVar11 = iVar6 == iVar2;
      if (bVar11) {
        *(int *)(puVar8 + 1) = iVar6 + 1;
        iVar2 = iVar6;
      }
      iVar6 = iVar2;
      UNLOCK();
    } while (!bVar11);
    lVar9 = *(longlong *)(param_1 + 0x1d8);
    bVar4 = false;
  }
LAB_1469bf01a:
  if ((bVar10) && (lVar9 != *param_2)) {
    if (*param_2 == 0) {
      local_40 = 0;
    }
    else {
      FUN_146a5cc14();
      local_40 = *param_2;
    }
    local_38 = param_2[1];
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      UNLOCK();
    }
    if (!bVar4) {
      LOCK();
      *(int *)(puVar8 + 1) = *(int *)(puVar8 + 1) + 1;
      UNLOCK();
    }
    local_50 = lVar9;
    local_48 = puVar8;
    FUN_1469e35aa(param_1 + 0x1e8,&local_50,&local_40);
    *(longlong *)(param_1 + 0x1d8) = *param_2;
    plVar3 = (longlong *)param_2[1];
    plVar7 = *(longlong **)(param_1 + 0x1e0);
    if (plVar7 != plVar3) {
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        plVar7 = *(longlong **)(param_1 + 0x1e0);
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
      *(longlong **)(param_1 + 0x1e0) = plVar3;
    }
  }
  if (!bVar4) {
    LOCK();
    piVar1 = (int *)(puVar8 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar8)(puVar8);
      LOCK();
      piVar1 = (int *)((longlong)puVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469bf126 FUN_1469bf126 body=298 status=ok
// SIG undefined FUN_1469bf126(void)

undefined8 * FUN_1469bf126(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = *param_1;
  plVar8 = *(longlong **)(lVar4 + 0xc0);
  bVar5 = true;
  if (plVar8 == (longlong *)0x0) {
LAB_1469bf1b4:
    plVar8 = (longlong *)0x0;
LAB_1469bf1b6:
    FUN_14162fdc4();
    lVar6 = DAT_14c98e9c0;
    *param_2 = 0;
    lVar4 = *(longlong *)(lVar6 + 0x230);
    param_2[1] = lVar4;
    if (lVar4 != 0) {
      iVar7 = *(int *)(lVar4 + 8);
      do {
        if (iVar7 == 0) {
          param_2[1] = 0;
          goto LAB_1469bf207;
        }
        LOCK();
        iVar3 = *(int *)(lVar4 + 8);
        bVar9 = iVar7 == iVar3;
        if (bVar9) {
          *(int *)(lVar4 + 8) = iVar7 + 1;
          iVar3 = iVar7;
        }
        iVar7 = iVar3;
        UNLOCK();
      } while (!bVar9);
      if (param_2[1] != 0) {
        *param_2 = *(undefined8 *)(lVar6 + 0x228);
      }
    }
LAB_1469bf207:
    if (bVar5) goto LAB_1469bf228;
  }
  else {
    iVar7 = (int)plVar8[1];
    do {
      if (iVar7 == 0) goto LAB_1469bf1b4;
      LOCK();
      iVar3 = (int)plVar8[1];
      bVar9 = iVar7 == iVar3;
      if (bVar9) {
        *(int *)(plVar8 + 1) = iVar7 + 1;
        iVar3 = iVar7;
      }
      iVar7 = iVar3;
      plVar1 = DAT_14c98e618;
      UNLOCK();
    } while (!bVar9);
    lVar4 = *(longlong *)(lVar4 + 0xb8);
    if (lVar4 == 0) {
      bVar5 = false;
      goto LAB_1469bf1b6;
    }
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    local_30 = lVar4;
    local_28 = plVar8;
    (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
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
LAB_1469bf228:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1469bf252 FUN_1469bf252 body=133 status=ok
// SIG undefined FUN_1469bf252(void)

longlong FUN_1469bf252(longlong param_1,undefined8 *param_2)

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
  plVar5 = *(longlong **)(param_1 + 0x1b0);
  *(undefined8 *)(param_1 + 0x1a8) = uVar3;
  *(longlong *)(param_1 + 0x1b0) = lVar4;
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
  plVar5 = (longlong *)param_2[1];
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



// FUNCTION 1469bf2d8 FUN_1469bf2d8 body=74 status=ok
// SIG undefined FUN_1469bf2d8(void)

undefined8 * FUN_1469bf2d8(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  
  *param_2 = 0;
  lVar2 = *(longlong *)(param_1 + 0x230);
  param_2[1] = lVar2;
  if (lVar2 != 0) {
    iVar3 = *(int *)(lVar2 + 8);
    do {
      if (iVar3 == 0) {
        param_2[1] = 0;
        return param_2;
      }
      LOCK();
      iVar1 = *(int *)(lVar2 + 8);
      bVar4 = iVar3 == iVar1;
      if (bVar4) {
        *(int *)(lVar2 + 8) = iVar3 + 1;
        iVar1 = iVar3;
      }
      iVar3 = iVar1;
      UNLOCK();
    } while (!bVar4);
    if (param_2[1] != 0) {
      *param_2 = *(undefined8 *)(param_1 + 0x228);
    }
  }
  return param_2;
}



// FUNCTION 1469bf322 FUN_1469bf322 body=8730 status=ok
// SIG undefined FUN_1469bf322(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1469bf322(ulonglong param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong *plVar21;
  undefined ***pppuVar22;
  bool bVar23;
  undefined1 auStack_21e8 [32];
  undefined1 *local_21c8;
  ulonglong local_21b8;
  undefined4 local_21b0;
  undefined4 local_21ac;
  undefined4 local_21a8;
  undefined4 local_21a4;
  longlong *local_21a0;
  longlong local_2198;
  longlong local_2190;
  undefined1 local_2181;
  undefined1 local_2180 [8];
  longlong *local_2178;
  undefined8 local_2168;
  longlong *local_2160;
  undefined1 local_2151;
  undefined1 local_2150 [8];
  longlong *local_2148;
  undefined8 local_2138;
  longlong *plStack_2130;
  undefined2 local_2120;
  undefined8 local_2118;
  undefined4 local_2110;
  undefined8 local_2108;
  longlong *local_2100;
  undefined8 local_20f8;
  longlong *local_20f0;
  undefined1 local_20e1;
  undefined1 local_20e0 [8];
  longlong *local_20d8;
  undefined8 local_20c8;
  longlong *plStack_20c0;
  undefined2 local_20b0;
  undefined8 local_20a8;
  undefined4 local_20a0;
  undefined8 local_2098;
  longlong *local_2090;
  undefined8 local_2088;
  longlong *local_2080;
  undefined1 local_2071;
  undefined1 local_2070 [8];
  longlong *local_2068;
  undefined8 local_2058;
  longlong *plStack_2050;
  undefined2 local_2040;
  undefined8 local_2038;
  undefined4 local_2030;
  undefined8 local_2028;
  longlong *local_2020;
  undefined8 local_2018;
  longlong *local_2010;
  undefined1 local_2001;
  undefined1 local_2000 [8];
  longlong *local_1ff8;
  undefined8 local_1fe8;
  longlong *plStack_1fe0;
  undefined2 local_1fd0;
  undefined8 local_1fc8;
  undefined4 local_1fc0;
  undefined8 local_1fb8;
  longlong *local_1fb0;
  undefined8 local_1fa8;
  longlong *local_1fa0;
  undefined1 local_1f91;
  undefined1 local_1f90 [8];
  longlong *local_1f88;
  undefined8 local_1f78;
  longlong *plStack_1f70;
  undefined2 local_1f60;
  undefined8 local_1f58;
  undefined4 local_1f50;
  undefined8 local_1f48;
  longlong *local_1f40;
  undefined8 local_1f38;
  longlong *local_1f30;
  undefined1 local_1f21;
  undefined1 local_1f20 [8];
  longlong *local_1f18;
  undefined8 *local_1f08;
  undefined8 local_1f00;
  longlong *local_1ef8;
  undefined2 local_1ee8;
  undefined8 local_1ee0;
  undefined8 uStack_1ed8;
  undefined8 local_1ed0;
  longlong *local_1ec8;
  undefined8 local_1ec0;
  longlong *local_1eb8;
  undefined1 local_1ea9;
  undefined1 local_1ea8 [8];
  longlong *local_1ea0;
  undefined1 local_1e89;
  undefined8 local_1e88;
  longlong *local_1e80;
  undefined8 local_1e70;
  longlong *local_1e68;
  undefined8 local_1e60;
  longlong *local_1e58;
  undefined8 local_1e50;
  longlong *local_1e48;
  undefined8 local_1e40;
  longlong *local_1e38;
  undefined8 *local_1e30;
  undefined8 local_1e28;
  longlong *local_1e20;
  undefined2 local_1e10;
  undefined8 local_1e08;
  undefined8 uStack_1e00;
  undefined8 local_1df8;
  longlong *local_1df0;
  undefined8 local_1de8;
  longlong *plStack_1de0;
  undefined8 local_1dd8;
  longlong *local_1dd0;
  undefined8 local_1dc8;
  longlong *local_1dc0;
  undefined2 local_1db8;
  undefined8 local_1db0;
  undefined8 uStack_1da8;
  undefined8 local_1da0;
  longlong *plStack_1d98;
  undefined8 local_1d90;
  longlong *plStack_1d88;
  undefined1 local_1d80 [16];
  undefined1 local_1d70;
  undefined8 local_1d68;
  undefined8 uStack_1d60;
  undefined8 local_1d58;
  undefined8 local_1d50;
  undefined1 local_1d48;
  undefined8 local_1d40;
  undefined8 uStack_1d38;
  undefined8 local_1d30;
  undefined1 *puStack_1d28;
  undefined4 local_1d20;
  undefined1 local_1d1c;
  undefined8 local_1d18;
  undefined8 uStack_1d10;
  undefined1 local_1d08 [16];
  undefined1 local_1cf8;
  undefined8 local_1cf0;
  undefined8 uStack_1ce8;
  undefined4 local_1ce0;
  undefined1 local_1cdc;
  undefined8 local_1cd8;
  undefined8 uStack_1cd0;
  undefined8 local_1cc8;
  longlong *local_1cc0;
  undefined8 local_1cb8;
  longlong *local_1cb0;
  undefined8 local_1ca8;
  longlong *plStack_1ca0;
  undefined2 local_1c90 [4];
  undefined1 local_1c88 [16];
  undefined8 local_1c78;
  longlong *plStack_1c70;
  undefined2 local_1c60 [4];
  undefined1 local_1c58 [16];
  undefined1 local_1c48 [88];
  undefined1 local_1bf0 [88];
  undefined1 local_1b98 [64];
  undefined4 local_1b58;
  undefined1 local_1b54;
  undefined4 local_1b50;
  undefined1 local_1b4c;
  undefined1 local_1b40 [64];
  undefined4 local_1b00;
  undefined1 local_1afc;
  undefined4 local_1af8;
  undefined1 local_1af4;
  undefined1 local_1ae8 [64];
  undefined4 local_1aa8;
  undefined1 local_1aa4;
  undefined4 local_1aa0;
  undefined1 local_1a9c;
  undefined1 local_1a90 [64];
  undefined4 local_1a50;
  undefined1 local_1a4c;
  undefined4 local_1a48;
  undefined1 local_1a44;
  undefined8 local_1a38 [8];
  undefined4 local_19f8;
  undefined1 local_19f4;
  undefined4 local_19f0;
  undefined1 local_19ec;
  undefined8 local_19e0 [8];
  undefined4 local_19a0;
  undefined1 local_199c;
  undefined4 local_1998;
  undefined1 local_1994;
  longlong *local_1988 [11];
  undefined8 local_1930;
  longlong *local_1928;
  code *local_18d8 [2];
  undefined ***local_18c8;
  undefined **local_18b8;
  ulonglong local_18b0;
  undefined2 local_1868;
  undefined1 local_1860 [320];
  undefined4 local_1720;
  undefined1 local_1718 [112];
  undefined2 local_16a8;
  undefined1 local_16a0 [320];
  undefined4 local_1560;
  undefined1 local_1558 [112];
  undefined2 local_14e8;
  undefined1 local_14e0 [320];
  undefined4 local_13a0;
  undefined1 local_1398 [112];
  undefined2 local_1328;
  undefined1 local_1320 [320];
  undefined4 local_11e0;
  undefined8 local_11d8;
  longlong *local_11d0;
  undefined2 local_1168;
  undefined1 local_1160 [304];
  undefined1 local_1030;
  undefined8 local_1028;
  longlong *local_1020;
  undefined1 local_f68 [8];
  longlong *local_f60;
  longlong *local_db0 [24];
  undefined8 local_cf0;
  longlong *local_ce8;
  undefined2 local_c80;
  undefined1 local_c78 [304];
  undefined1 local_b48;
  undefined8 local_b40;
  longlong *local_b38;
  wchar_t *local_a80;
  undefined4 local_a78;
  undefined4 uStack_a74;
  undefined1 local_8c8 [8];
  longlong *local_8c0;
  undefined2 local_858;
  undefined1 local_850 [320];
  wchar_t *local_710;
  longlong *plStack_708;
  undefined1 local_700;
  undefined8 local_6f8;
  undefined8 uStack_6f0;
  undefined2 local_6a0;
  undefined1 local_698 [304];
  undefined8 local_568;
  undefined1 local_560;
  undefined4 local_558 [4];
  undefined4 local_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined4 local_538;
  undefined1 local_534;
  undefined1 local_530 [88];
  undefined1 *local_4d8;
  longlong *plStack_4d0;
  undefined4 local_318;
  ulonglong local_60;
  undefined8 uStack_48;
  
  uStack_48 = 0x1469bf338;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_21e8;
  lVar13 = *param_3;
  *(longlong *)(param_1 + 0x2e0) = lVar13;
  plVar15 = (longlong *)param_3[1];
  plVar21 = *(longlong **)(param_1 + 0x2e8);
  local_21a0 = param_4;
  if (plVar21 != plVar15) {
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar15 + 0xc) = *(int *)((longlong)plVar15 + 0xc) + 1;
      UNLOCK();
      plVar21 = *(longlong **)(param_1 + 0x2e8);
    }
    if (plVar21 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar21 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar21 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x2e8) = plVar15;
    lVar13 = *param_3;
  }
  uVar16 = *(undefined8 *)(lVar13 + 0xe8);
  plVar15 = *(longlong **)(param_1 + 0x10);
  if (plVar15 == (longlong *)0x0) {
LAB_1469bf3bc:
    local_4d8 = (undefined1 *)0x0;
    plStack_4d0 = (longlong *)0x0;
  }
  else {
    iVar11 = (int)plVar15[1];
    do {
      if (iVar11 == 0) goto LAB_1469bf3bc;
      LOCK();
      iVar10 = (int)plVar15[1];
      bVar23 = iVar11 == iVar10;
      if (bVar23) {
        *(int *)(plVar15 + 1) = iVar11 + 1;
        iVar10 = iVar11;
      }
      iVar11 = iVar10;
      UNLOCK();
    } while (!bVar23);
    local_4d8 = *(undefined1 **)(param_1 + 8);
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    LOCK();
    plVar21 = plVar15 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    plStack_4d0 = plVar15;
    if ((int)*plVar21 == 0) {
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
  FUN_1469c153e(uVar16,&local_4d8);
  plVar15 = plStack_4d0;
  if (plStack_4d0 != (longlong *)0x0) {
    LOCK();
    plVar21 = plStack_4d0 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*plStack_4d0)(plStack_4d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x2d8) = *(undefined1 *)(param_2 + 0x1b8);
  *(undefined2 *)(param_1 + 0x2f0) = 0;
  plVar15 = *(longlong **)(param_1 + 0x10);
  if (plVar15 == (longlong *)0x0) {
LAB_1469bf423:
    local_1c78 = 0;
    plStack_1c70 = (longlong *)0x0;
  }
  else {
    iVar11 = (int)plVar15[1];
    do {
      if (iVar11 == 0) goto LAB_1469bf423;
      LOCK();
      iVar10 = (int)plVar15[1];
      bVar23 = iVar11 == iVar10;
      if (bVar23) {
        *(int *)(plVar15 + 1) = iVar11 + 1;
        iVar10 = iVar11;
      }
      iVar11 = iVar10;
      UNLOCK();
    } while (!bVar23);
    local_1c78 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    LOCK();
    plVar21 = plVar15 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    plStack_1c70 = plVar15;
    if ((int)*plVar21 == 0) {
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
  local_4d8 = &LAB_1469c16a8;
  plStack_4d0 = (longlong *)((ulonglong)plStack_4d0 & 0xffffffff00000000);
  FUN_1469c16d2(local_1c60,&local_1c78);
  plVar15 = *(longlong **)(param_1 + 0x10);
  local_2190 = param_2;
  if (plVar15 == (longlong *)0x0) {
LAB_1469bf46f:
    local_1ca8 = 0;
    plStack_1ca0 = (longlong *)0x0;
  }
  else {
    iVar11 = (int)plVar15[1];
    do {
      if (iVar11 == 0) goto LAB_1469bf46f;
      LOCK();
      iVar10 = (int)plVar15[1];
      bVar23 = iVar11 == iVar10;
      if (bVar23) {
        *(int *)(plVar15 + 1) = iVar11 + 1;
        iVar10 = iVar11;
      }
      iVar11 = iVar10;
      UNLOCK();
    } while (!bVar23);
    local_1ca8 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    LOCK();
    plVar21 = plVar15 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    plStack_1ca0 = plVar15;
    if ((int)*plVar21 == 0) {
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
  local_4d8 = &LAB_1469c1758;
  plStack_4d0 = (longlong *)((ulonglong)plStack_4d0 & 0xffffffff00000000);
  FUN_1469c16d2(local_1c90,&local_1ca8);
  FUN_140a504fe(&local_4d8);
  local_21c8 = local_1398;
  FUN_140a536a8(&local_710,"SOverlay",".\\Runtime/Slate/Private/Framework/Docking/SDockingArea.cpp",
                0x1e);
  FUN_140a4ff16(&local_710,&local_1cb8,&local_4d8);
  plVar15 = plStack_708;
  if (plStack_708 != (longlong *)0x0) {
    LOCK();
    plVar21 = plStack_708 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*plStack_708)(plStack_708);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  FUN_1415b5e16(&local_4d8);
  FUN_140a5296a(local_1398);
  local_18c8 = (undefined ***)0x0;
  local_18b8 = &PTR_LAB_149f02bf0;
  local_18d8[0] = FUN_1428fbcb2;
  local_21b8 = param_1;
  local_18b0 = param_1;
  FUN_1469c1782(local_1398);
  FUN_140a50426(local_1558);
  local_1ce0 = 0x3f800000;
  local_1cdc = 1;
  local_1cd8 = 0;
  uStack_1cd0 = 0;
  lVar13 = FUN_140a5475a(local_1558);
  *(undefined4 *)(lVar13 + 0x40) = 2;
  *(undefined1 *)(lVar13 + 0x44) = 1;
  *(undefined4 *)(lVar13 + 0x48) = 2;
  *(undefined1 *)(lVar13 + 0x4c) = 1;
  FUN_140a570d8(&local_4d8);
  local_710 = L"NoTabsDockedText";
  plStack_708._0_4_ = 0x10;
  FUN_1446e940c(local_1a38,&local_710);
  local_710 = L"SDockingArea";
  plStack_708 = (longlong *)CONCAT44(plStack_708._4_4_,0xc);
  FUN_1446e940c(local_1a90,&local_710);
  FUN_140208bae(local_db0,local_1a90,local_1a38,L"This asset editor has no docked tabs.");
  FUN_14023423e(local_1d08,local_db0);
  local_1cf8 = 1;
  local_1cf0 = 0;
  uStack_1ce8 = 0;
  lVar14 = FUN_140a54906(&local_4d8,local_1d08);
  FUN_1446ddc76(local_19e0,"HintText",1);
  plVar15 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar15 == (longlong *)0x0) {
    plVar15 = DAT_14c96b350;
  }
  uVar16 = FUN_140a57516(plVar15,local_19e0[0],0,0);
  *(undefined8 *)(lVar14 + 0x1d0) = uVar16;
  local_21c8 = local_1b98;
  FUN_140a54526(local_8c8,"STextBlock",".\\Runtime/Slate/Private/Framework/Docking/SDockingArea.cpp"
                ,0x35);
  FUN_140a52852(local_8c8,&local_b40,lVar14);
  local_11d8 = local_b40;
  local_11d0 = local_b38;
  if (local_b38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_b38 + 1) = (int)local_b38[1] + 1;
    UNLOCK();
  }
  uVar16 = FUN_140a4fe8e(lVar13,&local_11d8);
  uVar16 = FUN_140a52392(local_1398,uVar16);
  FUN_140a50426(local_1718);
  lVar13 = FUN_140a52578(local_1718);
  local_710 = (wchar_t *)0x4080000040800000;
  plStack_708 = (longlong *)0x4080000040800000;
  local_700 = 1;
  local_6f8 = 0;
  uStack_6f0 = 0;
  *(undefined1 *)(lVar13 + 0x28) = 1;
  *(undefined4 *)(lVar13 + 0x18) = 0x40800000;
  *(undefined4 *)(lVar13 + 0x1c) = 0x40800000;
  *(undefined4 *)(lVar13 + 0x20) = 0x40800000;
  *(undefined4 *)(lVar13 + 0x24) = 0x40800000;
  FUN_144a450dc(lVar13 + 0x30,&local_6f8);
  FUN_1449db362(&local_6f8);
  *(undefined4 *)(lVar13 + 0x40) = 2;
  *(undefined1 *)(lVar13 + 0x44) = 1;
  *(undefined4 *)(lVar13 + 0x48) = 2;
  *(undefined1 *)(lVar13 + 0x4c) = 1;
  FUN_140a53334(&local_710);
  local_1d30 = 0x3f800000;
  puStack_1d28 = &DAT_3f8000003f800000;
  local_1d20 = CONCAT22(local_1d20._2_2_,3);
  local_1d1c = 1;
  local_1d18 = 0;
  uStack_1d10 = 0;
  local_548 = 0x3f800000;
  uStack_544 = 0;
  uStack_540 = 0x3f800000;
  uStack_53c = 0x3f800000;
  local_538 = local_1d20;
  local_534 = 1;
  FUN_144a450dc(local_530,&local_1d18);
  FUN_1449db362(&local_1d18);
  FUN_1446ddc76(&local_1d58,"Icons.Help",1);
  plVar15 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar15 == (longlong *)0x0) {
    plVar15 = DAT_14c96b350;
  }
  local_1d50 = (**(code **)(*plVar15 + 0x50))(plVar15,local_1d58,0,0);
  local_1d48 = 1;
  local_1d40 = 0;
  uStack_1d38 = 0;
  local_560 = 1;
  local_568 = local_1d50;
  FUN_144a450dc(local_558,&local_1d40);
  FUN_1449db362(&local_1d40);
  local_a80 = L"NoTabsDockedTooltip";
  local_a78 = 0x13;
  FUN_1446e940c(local_1ae8,&local_a80);
  local_a80 = L"SDockingArea";
  local_a78 = 0xc;
  FUN_1446e940c(local_1b40,&local_a80);
  FUN_140208bae(local_1988,local_1b40,local_1ae8,
                L"To recover your tabs, you can reopen them from the Window menu, or drag and drop them back from floating windows.\nYou can also reset your editor layout completely from the Window > Load Layout menu, but this affects all editor windows."
               );
  FUN_14023423e(local_1d80,local_1988);
  local_1d70 = 1;
  local_1d68 = 0;
  uStack_1d60 = 0;
  uVar17 = FUN_14576721a(&local_710,local_1d80);
  local_21c8 = local_1bf0;
  FUN_140a554b8(&local_a80,"SImage",".\\Runtime/Slate/Private/Framework/Docking/SDockingArea.cpp",
                0x3f);
  FUN_140a52c70(&local_a80,&local_1930,uVar17);
  local_1028 = local_1930;
  local_1020 = local_1928;
  if (local_1928 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1928 + 1) = (int)local_1928[1] + 1;
    UNLOCK();
  }
  uVar17 = FUN_140a4fe8e(lVar13,&local_1028);
  uVar16 = FUN_140a52392(uVar16,uVar17);
  local_21c8 = local_1c48;
  FUN_140a541dc(local_f68,"SHorizontalBox",
                ".\\Runtime/Slate/Private/Framework/Docking/SDockingArea.cpp",0x21);
  FUN_140a50ec6(local_f68,&local_cf0,uVar16);
  uVar20 = local_21b8;
  local_1cc8 = local_cf0;
  local_1cc0 = local_ce8;
  if (local_ce8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_ce8 + 1) = (int)local_ce8[1] + 1;
    UNLOCK();
    if (local_ce8 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_ce8 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
        (**(code **)*local_ce8)(local_ce8);
        LOCK();
        piVar1 = (int *)((longlong)local_ce8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_ce8 + 0x10))(local_ce8);
        }
      }
    }
  }
  if (local_f60 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_f60 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*local_f60)(local_f60);
      LOCK();
      piVar1 = (int *)((longlong)local_f60 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_f60 + 0x10))(local_f60);
      }
    }
  }
  plVar15 = local_1020;
  if (local_1020 != (longlong *)0x0) {
    LOCK();
    plVar21 = local_1020 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*local_1020)(local_1020);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  if (local_1928 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_1928 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*local_1928)(local_1928);
      LOCK();
      piVar1 = (int *)((longlong)local_1928 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1928 + 0x10))(local_1928);
      }
    }
  }
  plVar15 = (longlong *)CONCAT44(uStack_a74,local_a78);
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar21 = plVar15 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
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
  if (local_1988[0] != (longlong *)0x0) {
    (**(code **)(*local_1988[0] + 0x10))();
  }
  FUN_140a55a86(&local_710);
  FUN_140a509a6(local_1718);
  plVar15 = local_11d0;
  if (local_11d0 != (longlong *)0x0) {
    LOCK();
    plVar21 = local_11d0 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*local_11d0)(local_11d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  if (local_b38 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_b38 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*local_b38)(local_b38);
      LOCK();
      piVar1 = (int *)((longlong)local_b38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_b38 + 0x10))(local_b38);
      }
    }
  }
  if (local_8c0 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_8c0 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*local_8c0)(local_8c0);
      LOCK();
      piVar1 = (int *)((longlong)local_8c0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_8c0 + 0x10))(local_8c0);
      }
    }
  }
  if (local_db0[0] != (longlong *)0x0) {
    (**(code **)(*local_db0[0] + 0x10))();
  }
  FUN_140a59ae6(&local_4d8);
  FUN_140a509a6(local_1558);
  if (local_18d8[0] != (code *)0x0) {
    pppuVar22 = local_18c8;
    if (local_18c8 == (undefined ***)0x0) {
      pppuVar22 = &local_18b8;
    }
    (*(code *)(*pppuVar22)[2])();
  }
  FUN_145ab33da(local_1398);
  FUN_140a504fe(local_8c8);
  local_1db8 = CONCAT11(1,DAT_14c96b23c);
  local_1db0 = 0;
  uStack_1da8 = 0;
  local_858 = local_1db8;
  FUN_144a450dc(local_850,&local_1db0);
  FUN_1449db362(&local_1db0);
  FUN_140a4fdf2(&local_1930,0);
  FUN_140a5296a(&local_a80);
  FUN_140a50426(&local_b40);
  uVar16 = FUN_140a52578(&local_b40);
  thunk_FUN_140a5071c(&local_cf0);
  local_b48 = 0;
  local_1e10 = CONCAT11(1,DAT_14c96b1e1);
  local_1e08 = 0;
  uStack_1e00 = 0;
  local_c80 = local_1e10;
  FUN_144a450dc(local_c78,&local_1e08);
  FUN_1449db362(&local_1e08);
  local_1e30 = &local_1cb8;
  FUN_1469edaf4(&local_1e28,0x51);
  if (local_1e20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1e20 + 1) = (int)local_1e20[1] + 1;
    UNLOCK();
  }
  plVar15 = *(longlong **)(uVar20 + 0x2a8);
  *(undefined8 *)(uVar20 + 0x2a0) = local_1e28;
  *(longlong **)(uVar20 + 0x2a8) = local_1e20;
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar21 = plVar15 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
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
  FUN_1469c1818(&local_1e28,&local_1df8,&local_cf0);
  local_1de8 = local_1df8;
  plStack_1de0 = local_1df0;
  if (local_1df0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1df0 + 1) = (int)local_1df0[1] + 1;
    UNLOCK();
  }
  uVar16 = FUN_140a4fe8e(uVar16,&local_1de8);
  uVar16 = FUN_140a52392(&local_a80,uVar16);
  FUN_140a50426(local_db0);
  FUN_140a504fe(local_f68);
  FUN_140a4fdf2(local_1988,0);
  FUN_1469c18d8(&local_4d8);
  local_318 = *(undefined4 *)(*local_21a0 + 0x20);
  local_21c8 = &local_1e89;
  FUN_1469edd7a(&local_1e88,"SSplitter",
                ".\\Runtime/Slate/Private/Framework/Docking/SDockingArea.cpp",0x5a);
  if (local_1e80 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1e80 + 1) = (int)local_1e80[1] + 1;
    UNLOCK();
  }
  plVar15 = *(longlong **)(uVar20 + 0x288);
  *(undefined8 *)(uVar20 + 0x280) = local_1e88;
  *(longlong **)(uVar20 + 0x288) = local_1e80;
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar21 = plVar15 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
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
  FUN_1469c19be(&local_1e88,&local_1e70,&local_4d8);
  local_1e60 = local_1e70;
  local_1e58 = local_1e68;
  if (local_1e68 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1e68 + 1) = (int)local_1e68[1] + 1;
    UNLOCK();
  }
  uVar17 = FUN_140a4fd40(local_1988,&local_1e60);
  uVar17 = FUN_140a5058c(local_f68,uVar17);
  FUN_140a4fdf2(local_19e0,0);
  local_19a0 = 2;
  local_199c = 1;
  local_1998 = 2;
  local_1994 = 1;
  uVar18 = FUN_145acdaa4(local_19e0,&local_1cc8);
  uVar17 = FUN_140a5058c(uVar17,uVar18);
  local_21c8 = &local_1ea9;
  FUN_140a536a8(local_1ea8,"SOverlay",".\\Runtime/Slate/Private/Framework/Docking/SDockingArea.cpp",
                0x57);
  FUN_140a4ff16(local_1ea8,&local_1e50,uVar17);
  local_1e40 = local_1e50;
  local_1e38 = local_1e48;
  if (local_1e48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1e48 + 1) = (int)local_1e48[1] + 1;
    UNLOCK();
  }
  uVar17 = FUN_140a4fe8e(local_db0,&local_1e40);
  uVar16 = FUN_140a52392(uVar16,uVar17);
  FUN_140a50426(&local_1028);
  uVar17 = FUN_140a52578(&local_1028);
  thunk_FUN_140a5071c(&local_11d8);
  local_1030 = 1;
  local_1ee8 = CONCAT11(1,DAT_14c96b1e1);
  local_1ee0 = 0;
  uStack_1ed8 = 0;
  local_1168 = local_1ee8;
  FUN_144a450dc(local_1160,&local_1ee0);
  FUN_1449db362(&local_1ee0);
  local_1f08 = &local_1cb8;
  FUN_1469edaf4(&local_1f00,0x68);
  if (local_1ef8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1ef8 + 1) = (int)local_1ef8[1] + 1;
    UNLOCK();
  }
  plVar15 = *(longlong **)(uVar20 + 0x2b8);
  *(undefined8 *)(uVar20 + 0x2b0) = local_1f00;
  *(longlong **)(uVar20 + 0x2b8) = local_1ef8;
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar21 = plVar15 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
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
  FUN_1469c1818(&local_1f00,&local_1ed0,&local_11d8);
  local_1ec0 = local_1ed0;
  local_1eb8 = local_1ec8;
  if (local_1ec8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1ec8 + 1) = (int)local_1ec8[1] + 1;
    UNLOCK();
  }
  uVar17 = FUN_140a4fe8e(uVar17,&local_1ec0);
  uVar16 = FUN_140a52392(uVar16,uVar17);
  local_21c8 = &local_1f21;
  FUN_140a541dc(local_1f20,"SHorizontalBox",
                ".\\Runtime/Slate/Private/Framework/Docking/SDockingArea.cpp",0x4d);
  FUN_140a50ec6(local_1f20,&local_1dd8,uVar16);
  local_1dc8 = local_1dd8;
  local_1dc0 = local_1dd0;
  if (local_1dd0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1dd0 + 1) = (int)local_1dd0[1] + 1;
    UNLOCK();
  }
  uVar16 = FUN_140a4fd40(&local_1930,&local_1dc8);
  uVar16 = FUN_140a5058c(local_8c8,uVar16);
  FUN_140a4fdf2(local_1a38,0);
  *(undefined8 *)(uVar20 + 0x2d0) = local_1a38[0];
  local_19f8 = 0;
  local_19f4 = 1;
  local_19f0 = 1;
  local_19ec = 1;
  uVar16 = FUN_140a5058c(uVar16,local_1a38);
  FUN_140a4fdf2(local_1a90,0);
  uVar20 = local_21b8;
  local_1a50 = 1;
  local_1a4c = 1;
  local_1a48 = 0;
  local_1a44 = 1;
  FUN_1469c1a32(&local_710);
  local_1f60 = local_1c60[0];
  local_1f58 = 0;
  local_1f50 = 0;
  FUN_140fe25fc(&local_1f58);
  local_6a0 = local_1f60;
  FUN_144a450dc(local_698,&local_1f58);
  uVar19 = FUN_1449db362(&local_1f58);
  plVar15 = *(longlong **)(uVar20 + 0x10);
  if (plVar15 == (longlong *)0x0) {
LAB_1469c025b:
    local_21a8 = (undefined4)CONCAT71((int7)(uVar19 >> 8),1);
    local_1f78 = 0;
    plStack_1f70 = (longlong *)0x0;
  }
  else {
    uVar19 = (ulonglong)*(uint *)(plVar15 + 1);
    do {
      uVar12 = (uint)uVar19;
      if (uVar12 == 0) goto LAB_1469c025b;
      LOCK();
      uVar4 = *(uint *)(plVar15 + 1);
      if (uVar12 == uVar4) {
        *(uint *)(plVar15 + 1) = uVar12 + 1;
      }
      else {
        uVar19 = (ulonglong)uVar4;
      }
      UNLOCK();
    } while (uVar12 != uVar4);
    uVar17 = *(undefined8 *)(uVar20 + 8);
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    LOCK();
    plVar21 = plVar15 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    local_21a8 = 0;
    local_1f78 = uVar17;
    plStack_1f70 = plVar15;
  }
  plVar15 = plStack_1f70;
  FUN_1469c1a5c(&local_710,&local_1f78);
  local_558[0] = 0;
  FUN_1469ee016(local_1f90,0x78,&local_1f91);
  FUN_1469c1ae2(local_1f90,&local_1f48,&local_710);
  local_1f38 = local_1f48;
  local_1f30 = local_1f40;
  if (local_1f40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1f40 + 1) = (int)local_1f40[1] + 1;
    UNLOCK();
  }
  uVar17 = FUN_140a4fd40(local_1a90,&local_1f38);
  uVar16 = FUN_140a5058c(uVar16,uVar17);
  FUN_140a4fdf2(local_1ae8,0);
  local_1aa8 = 3;
  local_1aa4 = 1;
  local_1aa0 = 0;
  local_1a9c = 1;
  FUN_1469c1a32(local_1398);
  local_1fd0 = local_1c60[0];
  local_1fc8 = 0;
  local_1fc0 = 0;
  FUN_140fe25fc(&local_1fc8,local_1c58);
  local_1328 = local_1fd0;
  FUN_144a450dc(local_1320,&local_1fc8);
  uVar19 = FUN_1449db362(&local_1fc8);
  plVar21 = *(longlong **)(uVar20 + 0x10);
  if (plVar21 == (longlong *)0x0) {
LAB_1469c039d:
    local_21ac = (undefined4)CONCAT71((int7)(uVar19 >> 8),1);
    local_1fe8 = 0;
    plStack_1fe0 = (longlong *)0x0;
  }
  else {
    uVar19 = (ulonglong)*(uint *)(plVar21 + 1);
    do {
      uVar12 = (uint)uVar19;
      if (uVar12 == 0) goto LAB_1469c039d;
      LOCK();
      uVar4 = *(uint *)(plVar21 + 1);
      if (uVar12 == uVar4) {
        *(uint *)(plVar21 + 1) = uVar12 + 1;
      }
      else {
        uVar19 = (ulonglong)uVar4;
      }
      UNLOCK();
    } while (uVar12 != uVar4);
    uVar17 = *(undefined8 *)(uVar20 + 8);
    LOCK();
    *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
    UNLOCK();
    LOCK();
    plVar5 = plVar21 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar21)(plVar21);
      LOCK();
      piVar1 = (int *)((longlong)plVar21 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
      }
    }
    LOCK();
    *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
    UNLOCK();
    local_21ac = 0;
    local_1fe8 = uVar17;
    plStack_1fe0 = plVar21;
  }
  plVar21 = plStack_1fe0;
  FUN_1469c1a5c(local_1398,&local_1fe8);
  local_11e0 = 2;
  FUN_1469ee016(local_2000,0x81,&local_2001);
  FUN_1469c1ae2(local_2000,&local_1fb8,local_1398);
  local_1fa8 = local_1fb8;
  local_1fa0 = local_1fb0;
  if (local_1fb0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1fb0 + 1) = (int)local_1fb0[1] + 1;
    UNLOCK();
  }
  uVar17 = FUN_140a4fd40(local_1ae8,&local_1fa8);
  uVar16 = FUN_140a5058c(uVar16,uVar17);
  uVar17 = FUN_140a4fdf2(local_1b40,0);
  local_1b00 = 0;
  local_1afc = 1;
  local_1af8 = 1;
  local_21a0 = (longlong *)
               CONCAT44(local_21a0._4_4_,(int)CONCAT71((int7)((ulonglong)uVar17 >> 8),1));
  local_1af4 = 1;
  FUN_1469c1a32(local_1558);
  local_2040 = local_1c60[0];
  local_2038 = 0;
  local_2030 = 0;
  FUN_140fe25fc(&local_2038,local_1c58);
  local_14e8 = local_2040;
  FUN_144a450dc(local_14e0,&local_2038);
  FUN_1449db362(&local_2038);
  plVar5 = *(longlong **)(uVar20 + 0x10);
  if (plVar5 == (longlong *)0x0) {
LAB_1469c04e4:
    local_2058 = 0;
    plStack_2050 = (longlong *)0x0;
  }
  else {
    iVar11 = (int)plVar5[1];
    do {
      if (iVar11 == 0) goto LAB_1469c04e4;
      LOCK();
      iVar10 = (int)plVar5[1];
      bVar23 = iVar11 == iVar10;
      if (bVar23) {
        *(int *)(plVar5 + 1) = iVar11 + 1;
        iVar10 = iVar11;
      }
      iVar11 = iVar10;
      UNLOCK();
    } while (!bVar23);
    uVar17 = *(undefined8 *)(uVar20 + 8);
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar6 = plVar5 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    local_21a0 = (longlong *)((ulonglong)local_21a0 & 0xffffffff00000000);
    local_2058 = uVar17;
    plStack_2050 = plVar5;
  }
  plVar5 = plStack_2050;
  FUN_1469c1a5c(local_1558,&local_2058);
  local_13a0 = 1;
  FUN_1469ee016(local_2070,0x8a,&local_2071);
  FUN_1469c1ae2(local_2070,&local_2028,local_1558);
  local_2018 = local_2028;
  local_2010 = local_2020;
  if (local_2020 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2020 + 1) = (int)local_2020[1] + 1;
    UNLOCK();
  }
  uVar17 = FUN_140a4fd40(local_1b40,&local_2018);
  uVar16 = FUN_140a5058c(uVar16,uVar17);
  uVar17 = FUN_140a4fdf2(local_1b98,0);
  local_1b58 = 0;
  local_1b54 = 1;
  local_1b50 = 3;
  local_21a4 = (undefined4)CONCAT71((int7)((ulonglong)uVar17 >> 8),1);
  local_1b4c = 1;
  FUN_1469c1a32(local_1718);
  local_20b0 = local_1c60[0];
  local_20a8 = 0;
  local_20a0 = 0;
  FUN_140fe25fc(&local_20a8,local_1c58);
  local_16a8 = local_20b0;
  FUN_144a450dc(local_16a0,&local_20a8);
  FUN_1449db362(&local_20a8);
  plVar6 = *(longlong **)(local_21b8 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_1469c062a:
    local_20c8 = 0;
    plStack_20c0 = (longlong *)0x0;
  }
  else {
    iVar11 = (int)plVar6[1];
    do {
      if (iVar11 == 0) goto LAB_1469c062a;
      LOCK();
      iVar10 = (int)plVar6[1];
      bVar23 = iVar11 == iVar10;
      if (bVar23) {
        *(int *)(plVar6 + 1) = iVar11 + 1;
        iVar10 = iVar11;
      }
      iVar11 = iVar10;
      UNLOCK();
    } while (!bVar23);
    uVar17 = *(undefined8 *)(local_21b8 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    local_21a4 = 0;
    local_20c8 = uVar17;
    plStack_20c0 = plVar6;
  }
  plVar6 = plStack_20c0;
  FUN_1469c1a5c(local_1718,&local_20c8);
  local_1560 = 3;
  FUN_1469ee016(local_20e0,0x93,&local_20e1);
  FUN_1469c1ae2(local_20e0,&local_2098,local_1718);
  local_2088 = local_2098;
  local_2080 = local_2090;
  if (local_2090 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2090 + 1) = (int)local_2090[1] + 1;
    UNLOCK();
  }
  uVar17 = FUN_140a4fd40(local_1b98,&local_2088);
  local_2198 = FUN_140a5058c(uVar16,uVar17);
  FUN_140a4fdf2(local_1bf0,0);
  FUN_1469c1a32(local_18d8);
  local_2120 = local_1c90[0];
  local_2118 = 0;
  local_2110 = 0;
  FUN_140fe25fc(&local_2118);
  local_1868 = local_2120;
  FUN_144a450dc(local_1860,&local_2118);
  FUN_1449db362(&local_2118);
  plVar7 = *(longlong **)(local_21b8 + 0x10);
  uVar20 = local_21b8;
  if (plVar7 == (longlong *)0x0) {
LAB_1469c0750:
    local_2138 = 0;
    plStack_2130 = (longlong *)0x0;
    local_21b0 = (undefined4)CONCAT71((int7)(uVar20 >> 8),1);
  }
  else {
    uVar20 = (ulonglong)*(uint *)(plVar7 + 1);
    do {
      uVar12 = (uint)uVar20;
      if (uVar12 == 0) goto LAB_1469c0750;
      LOCK();
      uVar4 = *(uint *)(plVar7 + 1);
      if (uVar12 == uVar4) {
        *(uint *)(plVar7 + 1) = uVar12 + 1;
      }
      else {
        uVar20 = (ulonglong)uVar4;
      }
      UNLOCK();
    } while (uVar12 != uVar4);
    uVar16 = *(undefined8 *)(local_21b8 + 8);
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    plVar3 = plVar7 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    local_21b0 = 0;
    local_2138 = uVar16;
    plStack_2130 = plVar7;
  }
  plVar7 = plStack_2130;
  FUN_1469c1a5c(local_18d8,&local_2138);
  local_1720 = 4;
  FUN_1469ee016(local_2150,0x9a,&local_2151);
  FUN_1469c1ae2(local_2150,&local_2108,local_18d8);
  local_20f8 = local_2108;
  local_20f0 = local_2100;
  if (local_2100 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2100 + 1) = (int)local_2100[1] + 1;
    UNLOCK();
  }
  uVar16 = FUN_140a4fd40(local_1bf0,&local_20f8);
  uVar16 = FUN_140a5058c(local_2198,uVar16);
  FUN_140a4fdf2(local_1c48,0);
  local_2168 = local_1cb8;
  local_2160 = local_1cb0;
  if (local_1cb0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1cb0 + 1) = (int)local_1cb0[1] + 1;
    UNLOCK();
  }
  local_2198 = local_21b8 + 0x1e0;
  uVar17 = FUN_140a4fd40(local_1c48,&local_2168);
  uVar16 = FUN_140a5058c(uVar16,uVar17);
  local_21c8 = &local_2181;
  FUN_140a536a8(local_2180,"SOverlay",".\\Runtime/Slate/Private/Framework/Docking/SDockingArea.cpp",
                0x49);
  FUN_140a4ff16(local_2180,&local_1da0,uVar16);
  local_1d90 = local_1da0;
  plStack_1d88 = plStack_1d98;
  if (plStack_1d98 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_1d98 + 1) = (int)plStack_1d98[1] + 1;
    UNLOCK();
  }
  FUN_140a58896(local_2198,&local_1d90);
  plVar3 = plStack_1d88;
  if (plStack_1d88 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_1d88 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_1d88)(plStack_1d88);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (plStack_1d98 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_1d98 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_1d98)(plStack_1d98);
      LOCK();
      piVar1 = (int *)((longlong)plStack_1d98 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plStack_1d98 + 0x10))(plStack_1d98);
      }
    }
  }
  if (local_2178 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_2178 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_2178)(local_2178);
      LOCK();
      piVar1 = (int *)((longlong)local_2178 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2178 + 0x10))(local_2178);
      }
    }
  }
  plVar3 = local_2160;
  if (local_2160 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_2160 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_2160)(local_2160);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_1415b5e50(local_1c48);
  plVar3 = local_20f0;
  if (local_20f0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_20f0 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_20f0)(local_20f0);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_2100 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_2100 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_2100)(local_2100);
      LOCK();
      piVar1 = (int *)((longlong)local_2100 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2100 + 0x10))(local_2100);
      }
    }
  }
  if (local_2148 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_2148 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_2148)(local_2148);
      LOCK();
      piVar1 = (int *)((longlong)local_2148 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2148 + 0x10))(local_2148);
      }
    }
  }
  if ((char)local_21b0 == '\0') {
    LOCK();
    plVar3 = plVar7 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  FUN_1469c1b56(local_18d8);
  FUN_1415b5e50(local_1bf0);
  plVar7 = local_2080;
  if (local_2080 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_2080 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_2080)(local_2080);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (local_2090 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_2090 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_2090)(local_2090);
      LOCK();
      piVar1 = (int *)((longlong)local_2090 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2090 + 0x10))(local_2090);
      }
    }
  }
  if (local_20d8 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_20d8 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_20d8)(local_20d8);
      LOCK();
      piVar1 = (int *)((longlong)local_20d8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_20d8 + 0x10))(local_20d8);
      }
    }
  }
  if ((char)local_21a4 == '\0') {
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  FUN_1469c1b56(local_1718);
  FUN_1415b5e50(local_1b98);
  plVar6 = local_2010;
  if (local_2010 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_2010 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_2010)(local_2010);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  uVar20 = local_21b8;
  if (local_2020 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_2020 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_2020)(local_2020);
      LOCK();
      piVar1 = (int *)((longlong)local_2020 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2020 + 0x10))(local_2020);
      }
    }
  }
  if (local_2068 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_2068 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_2068)(local_2068);
      LOCK();
      piVar1 = (int *)((longlong)local_2068 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2068 + 0x10))(local_2068);
      }
    }
  }
  if ((char)local_21a0 == '\0') {
    LOCK();
    plVar6 = plVar5 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  FUN_1469c1b56(local_1558);
  FUN_1415b5e50(local_1b40);
  plVar5 = local_1fa0;
  if (local_1fa0 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_1fa0 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_1fa0)(local_1fa0);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  uVar9 = local_21ac;
  if (local_1fb0 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1fb0 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_1fb0)(local_1fb0);
      LOCK();
      piVar1 = (int *)((longlong)local_1fb0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1fb0 + 0x10))(local_1fb0);
      }
    }
  }
  if (local_1ff8 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1ff8 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_1ff8)(local_1ff8);
      LOCK();
      piVar1 = (int *)((longlong)local_1ff8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1ff8 + 0x10))(local_1ff8);
      }
    }
  }
  if ((char)uVar9 == '\0') {
    LOCK();
    plVar5 = plVar21 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar21)(plVar21);
      LOCK();
      piVar1 = (int *)((longlong)plVar21 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
      }
    }
  }
  FUN_1469c1b56(local_1398);
  FUN_1415b5e50(local_1ae8);
  plVar21 = local_1f30;
  if (local_1f30 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1f30 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_1f30)(local_1f30);
      LOCK();
      piVar1 = (int *)((longlong)plVar21 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
      }
    }
  }
  uVar9 = local_21a8;
  if (local_1f40 != (longlong *)0x0) {
    LOCK();
    plVar21 = local_1f40 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*local_1f40)(local_1f40);
      LOCK();
      piVar1 = (int *)((longlong)local_1f40 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1f40 + 0x10))(local_1f40);
      }
    }
  }
  if (local_1f88 != (longlong *)0x0) {
    LOCK();
    plVar21 = local_1f88 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*local_1f88)(local_1f88);
      LOCK();
      piVar1 = (int *)((longlong)local_1f88 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1f88 + 0x10))(local_1f88);
      }
    }
  }
  if ((char)uVar9 == '\0') {
    LOCK();
    plVar21 = plVar15 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
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
  FUN_1469c1b56(&local_710);
  FUN_1415b5e50(local_1a90);
  FUN_1415b5e50(local_1a38);
  plVar15 = local_1dc0;
  if (local_1dc0 != (longlong *)0x0) {
    LOCK();
    plVar21 = local_1dc0 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*local_1dc0)(local_1dc0);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  lVar13 = local_2190;
  if (local_1dd0 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_1dd0 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*local_1dd0)(local_1dd0);
      LOCK();
      piVar1 = (int *)((longlong)local_1dd0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1dd0 + 0x10))(local_1dd0);
      }
    }
  }
  if (local_1f18 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_1f18 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*local_1f18)(local_1f18);
      LOCK();
      piVar1 = (int *)((longlong)local_1f18 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1f18 + 0x10))(local_1f18);
      }
    }
  }
  plVar15 = local_1eb8;
  if (local_1eb8 != (longlong *)0x0) {
    LOCK();
    plVar21 = local_1eb8 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*local_1eb8)(local_1eb8);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  if (local_1ec8 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_1ec8 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*local_1ec8)(local_1ec8);
      LOCK();
      piVar1 = (int *)((longlong)local_1ec8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1ec8 + 0x10))(local_1ec8);
      }
    }
  }
  if (local_1ef8 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_1ef8 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*local_1ef8)(local_1ef8);
      LOCK();
      piVar1 = (int *)((longlong)local_1ef8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1ef8 + 0x10))(local_1ef8);
      }
    }
  }
  FUN_140a4ff8c(&local_11d8);
  FUN_140a509a6(&local_1028);
  plVar15 = local_1e38;
  if (local_1e38 != (longlong *)0x0) {
    LOCK();
    plVar21 = local_1e38 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*local_1e38)(local_1e38);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  if (local_1e48 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_1e48 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*local_1e48)(local_1e48);
      LOCK();
      piVar1 = (int *)((longlong)local_1e48 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1e48 + 0x10))(local_1e48);
      }
    }
  }
  if (local_1ea0 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_1ea0 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*local_1ea0)(local_1ea0);
      LOCK();
      piVar1 = (int *)((longlong)local_1ea0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1ea0 + 0x10))(local_1ea0);
      }
    }
  }
  FUN_1415b5e50(local_19e0);
  plVar15 = local_1e58;
  if (local_1e58 != (longlong *)0x0) {
    LOCK();
    plVar21 = local_1e58 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*local_1e58)(local_1e58);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  if (local_1e68 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_1e68 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*local_1e68)(local_1e68);
      LOCK();
      piVar1 = (int *)((longlong)local_1e68 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1e68 + 0x10))(local_1e68);
      }
    }
  }
  if (local_1e80 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_1e80 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*local_1e80)(local_1e80);
      LOCK();
      piVar1 = (int *)((longlong)local_1e80 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1e80 + 0x10))(local_1e80);
      }
    }
  }
  FUN_1469c1b96(&local_4d8);
  FUN_1415b5e50(local_1988);
  FUN_1415b5e16(local_f68);
  FUN_140a509a6(local_db0);
  plVar15 = plStack_1de0;
  if (plStack_1de0 != (longlong *)0x0) {
    LOCK();
    plVar21 = plStack_1de0 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*plStack_1de0)(plStack_1de0);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  if (local_1df0 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_1df0 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*local_1df0)(local_1df0);
      LOCK();
      piVar1 = (int *)((longlong)local_1df0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1df0 + 0x10))(local_1df0);
      }
    }
  }
  if (local_1e20 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_1e20 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*local_1e20)(local_1e20);
      LOCK();
      piVar1 = (int *)((longlong)local_1e20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1e20 + 0x10))(local_1e20);
      }
    }
  }
  FUN_140a4ff8c(&local_cf0);
  FUN_140a509a6(&local_b40);
  FUN_145ab33da(&local_a80);
  FUN_1415b5e50(&local_1930);
  FUN_1415b5e16(local_8c8);
  *(undefined1 *)(uVar20 + 0x2f2) = 0;
  puVar8 = *(undefined1 **)(lVar13 + 0x1a8);
  if (puVar8 != (undefined1 *)0x0) {
    plVar15 = *(longlong **)(lVar13 + 0x1b0);
    local_4d8 = puVar8;
    plStack_4d0 = plVar15;
    if (plVar15 == (longlong *)0x0) {
      FUN_1469c1bfe(uVar20,&local_4d8);
    }
    else {
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
      FUN_1469c1bfe(uVar20);
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        plVar21 = plVar15 + 1;
        *(int *)plVar21 = (int)*plVar21 + -1;
        UNLOCK();
        if ((int)*plVar21 == 0) {
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
  }
  puVar8 = *(undefined1 **)(lVar13 + 0x1c0);
  if (puVar8 != (undefined1 *)0x0) {
    plVar15 = *(longlong **)(lVar13 + 0x1c8);
    local_4d8 = puVar8;
    plStack_4d0 = plVar15;
    if (plVar15 == (longlong *)0x0) {
      FUN_1469c1f3e(uVar20,&local_4d8,0xffffffff);
    }
    else {
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
      FUN_1469c1f3e(uVar20,&local_4d8,0xffffffff);
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        plVar21 = plVar15 + 1;
        *(int *)plVar21 = (int)*plVar21 + -1;
        UNLOCK();
        if ((int)*plVar21 == 0) {
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
  }
  plVar15 = local_1cc0;
  if (local_1cc0 != (longlong *)0x0) {
    LOCK();
    plVar21 = local_1cc0 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*local_1cc0)(local_1cc0);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  if (local_1cb0 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_1cb0 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*local_1cb0)(local_1cb0);
      LOCK();
      piVar1 = (int *)((longlong)local_1cb0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1cb0 + 0x10))(local_1cb0);
      }
    }
  }
  FUN_1449db362(local_1c88);
  FUN_1449db362(local_1c58);
  if ((local_60 ^ (ulonglong)auStack_21e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469c153e FUN_1469c153e body=360 status=ok
// SIG undefined FUN_1469c153e(void)

void FUN_1469c153e(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *param_1;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = param_2;
  if (0 < *(int *)(lVar2 + 0x80)) {
    lVar8 = 8;
    lVar7 = 0;
    do {
      uVar5 = uStack_50;
      lVar3 = *(longlong *)(lVar2 + 0x78);
      if (((*(longlong *)(lVar3 + -8 + lVar8) != 0) && (*(longlong *)(lVar3 + lVar8) != 0)) &&
         (0 < *(int *)(*(longlong *)(lVar3 + lVar8) + 8))) {
        lVar9 = (longlong)(int)uStack_50;
        uVar6 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar6);
        if (uStack_50._4_4_ < uVar6) {
          FUN_1469feb22(&local_58,uVar5 & 0xffffffff);
        }
        *(undefined8 *)(local_58 + lVar9 * 0x10) = *(undefined8 *)(lVar3 + -8 + lVar8);
        lVar3 = *(longlong *)(lVar3 + lVar8);
        *(longlong *)(local_58 + 8 + lVar9 * 0x10) = lVar3;
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
          UNLOCK();
        }
      }
      lVar7 = lVar7 + 1;
      lVar8 = lVar8 + 0x10;
    } while (lVar7 < *(int *)(lVar2 + 0x80));
  }
  FUN_1469feac2((longlong *)(lVar2 + 0x78),&local_58);
  FUN_1469feba7(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  lVar2 = *param_1;
  uVar4 = *local_60;
  lVar7 = local_60[1];
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 0xc) = *(int *)(lVar7 + 0xc) + 1;
    UNLOCK();
  }
  iVar1 = *(int *)(lVar2 + 0x80);
  *(uint *)(lVar2 + 0x80) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x84) < iVar1 + 1U) {
    FUN_1469feb22((longlong *)(lVar2 + 0x78),iVar1);
  }
  lVar2 = *(longlong *)(lVar2 + 0x78);
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 0x10) = uVar4;
  *(longlong *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = lVar7;
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469c16d2 FUN_1469c16d2 body=133 status=ok
// SIG undefined FUN_1469c16d2(void)

undefined2 * FUN_1469c16d2(undefined2 *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(undefined4 *)(param_3 + 1);
  local_28 = *param_3;
  *param_1 = 0x119;
  FUN_1469ed2c8(param_1 + 4,param_2);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469c1782 FUN_1469c1782 body=143 status=ok
// SIG undefined FUN_1469c1782(void)

longlong FUN_1469c1782(longlong param_1)

{
  undefined1 auStack_68 [32];
  undefined2 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1469ed78a(local_30);
  local_48 = 0x119;
  local_40 = 0;
  local_38 = 0;
  FUN_140fe25fc(&local_40,local_30);
  FUN_1449db362(local_30);
  *(undefined2 *)(param_1 + 0x70) = local_48;
  FUN_144a450dc(param_1 + 0x78,&local_40);
  FUN_1449db362(&local_40);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469c1812 thunk_FUN_140a5071c body=5 status=ok
// SIG undefined thunk_FUN_140a5071c(void)

undefined8 * thunk_FUN_140a5071c(undefined8 *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
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
  plVar1 = DAT_14c844840;
  *param_1 = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = DAT_14c96b238;
  *(undefined1 *)((longlong)param_1 + 0x71) = 1;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x11) = 0x101;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa1) = 1;
  *(undefined4 *)(param_1 + 0x15) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  uVar4 = DAT_14c8463f8._4_4_;
  uVar3 = (undefined4)DAT_14c8463f8;
  uVar2 = DAT_14c8463f0._4_4_;
  *(undefined4 *)(param_1 + 0x1c) = (undefined4)DAT_14c8463f0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar2;
  *(undefined4 *)(param_1 + 0x1d) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar4;
  *(undefined1 *)(param_1 + 0x1e) = 1;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
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
  plVar1 = DAT_14c844840;
  param_1[0x2e] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  return param_1;
}



// FUNCTION 1469c1818 FUN_1469c1818 body=190 status=ok
// SIG undefined FUN_1469c1818(void)

longlong * FUN_1469c1818(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a515e6(*param_1,param_3);
  lVar1 = *param_1;
  local_30 = **(undefined8 **)param_1[2];
  local_28 = (*(undefined8 **)param_1[2])[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_1469db132(lVar1,param_3,&local_30);
  plVar2 = (longlong *)*param_1;
  bVar5 = *(byte *)(plVar2 + 6);
  bVar4 = 0x20;
  if ((bVar5 & 0x10) == 0) {
    cVar3 = (**(code **)(*plVar2 + 0x220))(plVar2);
    bVar4 = cVar3 << 5;
    bVar5 = *(byte *)(plVar2 + 6);
  }
  *(byte *)(plVar2 + 6) = bVar5 & 0xdf | bVar4;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469c18d8 FUN_1469c18d8 body=229 status=ok
// SIG undefined FUN_1469c18d8(void)

longlong FUN_1469c18d8(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  lVar1 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar1 == 0) {
    lVar1 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_38,"Splitter",1);
  uVar2 = FUN_1469d78d0(lVar1,local_38,0,0);
  *(undefined8 *)(param_1 + 0x1b8) = uVar2;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  *(undefined4 *)(param_1 + 0x1c8) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x1cc) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x1d0) = 0x41a00000;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined1 *)(param_1 + 0x1dc) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1ec) = 0;
  *(undefined8 *)(param_1 + 500) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x20c) = 0;
  *(undefined8 *)(param_1 + 0x214) = 0;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469c19be FUN_1469c19be body=115 status=ok
// SIG undefined FUN_1469c19be(void)

longlong * FUN_1469c19be(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_146a9bc30(*param_1,param_3);
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



// FUNCTION 1469c1a32 FUN_1469c1a32 body=42 status=ok
// SIG undefined FUN_1469c1a32(void)

longlong FUN_1469c1a32(longlong param_1)

{
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  return param_1;
}



// FUNCTION 1469c1a5c FUN_1469c1a5c body=133 status=ok
// SIG undefined FUN_1469c1a5c(void)

longlong FUN_1469c1a5c(longlong param_1,undefined8 *param_2)

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
  plVar5 = *(longlong **)(param_1 + 0x1b0);
  *(undefined8 *)(param_1 + 0x1a8) = uVar3;
  *(longlong *)(param_1 + 0x1b0) = lVar4;
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
  plVar5 = (longlong *)param_2[1];
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



// FUNCTION 1469c1ae2 FUN_1469c1ae2 body=115 status=ok
// SIG undefined FUN_1469c1ae2(void)

longlong * FUN_1469c1ae2(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_1469d65b4(*param_1,param_3);
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



// FUNCTION 1469c1b56 FUN_1469c1b56 body=64 status=ok
// SIG undefined FUN_1469c1b56(void)

void FUN_1469c1b56(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x1b0);
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
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 1469c1b96 FUN_1469c1b96 body=104 status=ok
// SIG undefined FUN_1469c1b96(void)

void FUN_1469c1b96(longlong param_1)

{
  FUN_1449db362(param_1 + 0x210);
  FUN_1449db362(param_1 + 0x200);
  FUN_1449db362(param_1 + 0x1f0);
  FUN_1449db362(param_1 + 0x1e0);
  FUN_1469e50ce(*(undefined8 *)(param_1 + 0x1a8),*(undefined4 *)(param_1 + 0x1b0));
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FUN_1400020a8();
  }
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 1469c1bfe FUN_1469c1bfe body=831 status=ok
// SIG undefined FUN_1469c1bfe(void)

void FUN_1469c1bfe(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_118 [40];
  undefined8 local_f0;
  longlong *local_e8;
  code *local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined1 local_d0;
  undefined1 local_c8 [16];
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong *plStack_a0;
  undefined4 local_98;
  undefined1 local_90 [16];
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *plStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(char *)(param_1 + 0x2d8) == '\x01') {
    lVar4 = *param_2;
    local_e0 = FUN_1469c3a7a;
    local_d8 = 0;
    FUN_1469c38f8(&local_b8,param_1);
    FUN_14627e1fa(lVar4,&local_b8);
    FUN_1449db362(&local_b8);
  }
  local_68 = 0;
  plStack_60 = (longlong *)0x0;
  local_b8 = *param_2;
  local_b0 = param_2[1];
  if (local_b0 != 0) {
    LOCK();
    *(int *)(local_b0 + 8) = *(int *)(local_b0 + 8) + 1;
    UNLOCK();
  }
  local_a8 = 0;
  plStack_a0 = (longlong *)0x0;
  local_98 = 0;
  FUN_144a5dc74(local_90);
  plVar3 = plStack_a0;
  plVar5 = DAT_14c98ded0;
  local_a8 = DAT_14c98dec8;
  local_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  if (DAT_14c98ded0 == (longlong *)0x0) {
    if (plStack_a0 == (longlong *)0x0) goto LAB_1469c1cee;
    plStack_a0 = (longlong *)0x0;
LAB_1469c1f02:
    LOCK();
    plVar5 = plVar3 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_1469c1cee;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(DAT_14c98ded0 + 1) = (int)DAT_14c98ded0[1] + 1;
    UNLOCK();
    if (plVar5 != plStack_a0) {
      bVar6 = plStack_a0 == (longlong *)0x0;
      plStack_a0 = plVar5;
      if (bVar6) goto LAB_1469c1cee;
      goto LAB_1469c1f02;
    }
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_1469c1cee;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar5;
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_1469c1cee:
  local_98 = 0;
  FUN_1469811c6(*param_2,&local_e0);
  FUN_140008f88(local_90,&local_e0);
  local_80 = local_d0;
  FUN_144a450dc(&local_78,local_c8);
  FUN_1449db362(local_c8);
  if (local_e0 != (code *)0x0) {
    (**(code **)(*(longlong *)local_e0 + 0x10))();
  }
  (**(code **)(*DAT_14c98e618 + 0x138))(DAT_14c98e618,&local_e0,&local_b8,&local_68);
  FUN_1469c3b8e(*(undefined8 *)(param_1 + 0x2d0),&local_e0);
  lVar4 = *param_2;
  local_f0 = local_68;
  local_e8 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
    UNLOCK();
  }
  FUN_1469c3bf0(lVar4,&local_f0);
  plVar3 = (longlong *)CONCAT44(uStack_d4,local_d8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar3 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  FUN_140767b54(&local_b8);
  plVar3 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar5 = plStack_60 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  lVar4 = *param_2;
  *(longlong *)(param_1 + 0x2c0) = lVar4;
  plVar3 = (longlong *)param_2[1];
  plVar5 = *(longlong **)(param_1 + 0x2c8);
  if (plVar5 != plVar3) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar5 = *(longlong **)(param_1 + 0x2c8);
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x2c8) = plVar3;
    lVar4 = *param_2;
  }
  local_e0 = FUN_1469c3c76;
  local_d8 = 0;
  FUN_1469ee6e4(&local_b8,param_1);
  FUN_1448b6402(lVar4 + 0x538,&local_e0,&local_b8);
  FUN_1449db362(&local_b8);
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469c1f3e FUN_1469c1f3e body=702 status=ok
// SIG undefined FUN_1469c1f3e(void)

void FUN_1469c1f3e(longlong param_1,undefined8 *param_2,int param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  longlong *plStack_180;
  undefined8 local_178;
  longlong local_170;
  undefined4 local_168;
  undefined1 local_164;
  undefined1 local_160 [16];
  undefined1 *local_150;
  undefined8 local_148;
  undefined1 *local_140;
  undefined4 local_138;
  undefined8 local_130;
  longlong local_128;
  undefined4 local_120;
  undefined1 local_11c;
  undefined1 local_118 [16];
  undefined1 local_108 [24];
  undefined4 local_f0;
  undefined1 local_ec;
  undefined1 local_e8 [16];
  undefined4 local_d8;
  undefined1 local_d4;
  undefined1 local_d0 [48];
  undefined1 local_a0 [104];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_146a9ba7a(*(undefined8 *)(param_1 + 0x280),local_108);
  local_130 = *param_2;
  local_128 = param_2[1];
  if (local_128 != 0) {
    LOCK();
    *(int *)(local_128 + 8) = *(int *)(local_128 + 8) + 1;
    UNLOCK();
  }
  local_140 = &LAB_1469c7f20;
  local_138 = 0;
  FUN_1469c80f4(&local_120,&local_130);
  local_d8 = local_120;
  local_d4 = local_11c;
  FUN_144a450dc(local_d0,local_118);
  FUN_1449db362(local_118);
  local_150 = &LAB_1469c7f2a;
  local_148._0_4_ = 0;
  FUN_1469c8180(&local_140,param_2);
  FUN_144a450dc(local_a0,&local_140);
  local_178 = *param_2;
  local_170 = param_2[1];
  if (local_170 != 0) {
    LOCK();
    *(int *)(local_170 + 8) = *(int *)(local_170 + 8) + 1;
    UNLOCK();
  }
  local_150 = &LAB_1469c82ae;
  local_148 = (longlong *)((ulonglong)local_148._4_4_ << 0x20);
  FUN_1469c82bc(&local_168,&local_178,&local_150);
  local_f0 = local_168;
  local_ec = local_164;
  FUN_144a450dc(local_e8,local_160);
  FUN_1449db362(local_160);
  local_150 = (undefined1 *)*param_2;
  local_148 = (longlong *)param_2[1];
  if (local_148 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_148 + 1) = (int)local_148[1] + 1;
    UNLOCK();
  }
  FUN_1469c8348(local_108,&local_150);
  plVar3 = local_148;
  if (local_148 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_148 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_148)(local_148);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_1449db362(&local_140);
  FUN_1469c83d0(local_108);
  plVar3 = (longlong *)(param_1 + 0x290);
  if (param_3 == -1) {
    iVar8 = *(int *)(param_1 + 0x298);
    *(uint *)(param_1 + 0x298) = iVar8 + 1U;
    if (*(uint *)(param_1 + 0x29c) < iVar8 + 1U) {
      FUN_1469efd28(plVar3,iVar8);
    }
    lVar4 = *plVar3;
    *(undefined8 *)(lVar4 + (longlong)iVar8 * 0x10) = *param_2;
    lVar5 = param_2[1];
    *(longlong *)(lVar4 + 8 + (longlong)iVar8 * 0x10) = lVar5;
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
  }
  else {
    FUN_1469c84bc(plVar3,param_2,param_3);
  }
  plVar3 = (longlong *)*param_2;
  plVar6 = *(longlong **)(param_1 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_1469c2198:
    local_188 = 0;
    plStack_180 = (longlong *)0x0;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_1469c2198;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar9 = iVar8 == iVar7;
      if (bVar9) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar9);
    local_188 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar6 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    plStack_180 = plVar6;
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
  (**(code **)(*plVar3 + 0x248))(plVar3,&local_188);
  if ((local_38 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469c21fe FUN_1469c21fe body=397 status=ok
// SIG undefined FUN_1469c21fe(void)

void FUN_1469c21fe(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  int iVar8;
  char cVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar4 = *(longlong **)(param_3 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    FUN_1469ee30c();
    cVar9 = (**(code **)(*plVar4 + 0x50))(plVar4,&DAT_14c98e9e8);
    if (cVar9 != '\0') {
      lVar5 = *(longlong *)(param_3 + 0x78);
      puVar6 = *(undefined8 **)(param_3 + 0x80);
      if (puVar6 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
        UNLOCK();
      }
      if (lVar5 != 0) {
        plVar4 = *(longlong **)(param_1 + 0x10);
        if (plVar4 == (longlong *)0x0) {
LAB_1469c22d0:
          local_58 = 0;
          plStack_50 = (longlong *)0x0;
          bVar11 = true;
        }
        else {
          iVar10 = (int)plVar4[1];
          do {
            if (iVar10 == 0) goto LAB_1469c22d0;
            LOCK();
            iVar8 = (int)plVar4[1];
            bVar11 = iVar10 == iVar8;
            if (bVar11) {
              *(int *)(plVar4 + 1) = iVar10 + 1;
              iVar8 = iVar10;
            }
            iVar10 = iVar8;
            UNLOCK();
          } while (!bVar11);
          uVar7 = *(undefined8 *)(param_1 + 8);
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          LOCK();
          plVar3 = plVar4 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          bVar11 = false;
          local_58 = uVar7;
          plStack_50 = plVar4;
        }
        plVar4 = plStack_50;
        cVar9 = FUN_1469be7b6(lVar5,&local_58,1);
        plVar3 = plStack_50;
        if (plStack_50 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_50 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plStack_50)(plStack_50);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
        if (!bVar11) {
          LOCK();
          plVar3 = plVar4 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
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
        if (cVar9 != '\0') {
          *(undefined1 *)(param_1 + 0x2f0) = 1;
        }
      }
      if (puVar6 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar6 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar6)(puVar6);
          LOCK();
          piVar1 = (int *)((longlong)puVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
          }
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469c23a4 FUN_1469c23a4 body=118 status=ok
// SIG undefined FUN_1469c23a4(void)

void FUN_1469c23a4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  
  plVar3 = *(longlong **)(param_2 + 0x78);
  if (plVar3 != (longlong *)0x0) {
    FUN_1469ee30c();
    cVar5 = (**(code **)(*plVar3 + 0x50))(plVar3,&DAT_14c98e9e8);
    if (cVar5 != '\0') {
      lVar4 = *(longlong *)(param_2 + 0x78);
      plVar3 = *(longlong **)(param_2 + 0x80);
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
      if (lVar4 != 0) {
        *(undefined1 *)(param_1 + 0x2f0) = 0;
      }
    }
  }
  return;
}



// FUNCTION 1469c241a FUN_1469c241a body=185 status=ok
// SIG undefined FUN_1469c241a(void)

undefined1 * FUN_1469c241a(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  
  plVar3 = *(longlong **)(param_4 + 0x78);
  if (plVar3 != (longlong *)0x0) {
    FUN_1469ee30c();
    cVar5 = (**(code **)(*plVar3 + 0x50))(plVar3);
    if (cVar5 != '\0') {
      lVar4 = *(longlong *)(param_4 + 0x78);
      plVar3 = *(longlong **)(param_4 + 0x80);
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
      if (lVar4 != 0) {
        *(undefined1 *)(param_1 + 0x2f0) = 0;
      }
    }
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 1469c24d4 FUN_1469c24d4 body=708 status=ok
// SIG undefined FUN_1469c24d4(void)

undefined1 * FUN_1469c24d4(undefined8 param_1,undefined1 *param_2,int param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 uVar5;
  char cVar6;
  longlong *plVar7;
  undefined1 auStack_258 [40];
  undefined1 local_230 [8];
  longlong *local_228;
  undefined1 *local_220;
  undefined1 local_218 [8];
  longlong *local_210;
  undefined8 local_200;
  longlong *local_1f8;
  undefined8 local_1f0;
  longlong *local_1e8;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_258;
  plVar7 = *(longlong **)(param_4 + 0x78);
  if (plVar7 != (longlong *)0x0) {
    FUN_1469ee30c();
    cVar6 = (**(code **)(*plVar7 + 0x50))(plVar7);
    if (cVar6 != '\0') {
      lVar4 = *(longlong *)(param_4 + 0x78);
      plVar7 = *(longlong **)(param_4 + 0x80);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      if (lVar4 == 0) {
        uVar5 = 0;
      }
      else {
        if (param_3 == 4) {
          FUN_1469bed42(&local_1f0);
          FUN_1469bed62(local_230);
          local_220 = local_230;
          FUN_1469ece9a(local_218,".\\Runtime/Slate/Private/Framework/Docking/SDockingArea.cpp",0xdf
                       );
          FUN_1469bee4e(local_218,&local_200,&local_1f0);
          if (local_210 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_210 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_210)(local_210);
              LOCK();
              piVar2 = (int *)((longlong)local_210 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*local_210 + 0x10))(local_210);
              }
            }
          }
          if (local_228 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_228 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_228)(local_228);
              LOCK();
              piVar2 = (int *)((longlong)local_228 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*local_228 + 0x10))(local_228);
              }
            }
          }
          FUN_140a4ff8c(&local_1f0);
          plVar1 = local_1f8;
          local_1f0 = local_200;
          local_1e8 = local_1f8;
          if (local_1f8 == (longlong *)0x0) {
            FUN_1469c1f3e(param_1,&local_1f0,0xffffffff);
          }
          else {
            LOCK();
            *(int *)(local_1f8 + 1) = (int)local_1f8[1] + 1;
            UNLOCK();
            FUN_1469c1f3e(param_1,&local_1f0,0xffffffff);
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
          }
          local_1f0 = *(undefined8 *)(lVar4 + 0x40);
          local_1e8 = *(longlong **)(lVar4 + 0x48);
          if (local_1e8 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_1e8 + 1) = (int)local_1e8[1] + 1;
            UNLOCK();
          }
          FUN_1469bd63c(local_200,&local_1f0,0xffffffff,0);
          plVar1 = local_1e8;
          if (local_1e8 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_1e8 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_1e8)(local_1e8);
              LOCK();
              piVar2 = (int *)((longlong)plVar1 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar1 + 0x10))(plVar1);
              }
            }
          }
          if (local_1f8 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_1f8 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_1f8)(local_1f8);
              LOCK();
              piVar2 = (int *)((longlong)local_1f8 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*local_1f8 + 0x10))(local_1f8);
              }
            }
          }
        }
        else {
          FUN_1469c279a(param_1,param_3,param_4);
        }
        uVar5 = 1;
      }
      goto LAB_1469c250b;
    }
  }
  uVar5 = 0;
  plVar7 = (longlong *)0x0;
LAB_1469c250b:
  *param_2 = uVar5;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  if (plVar7 != (longlong *)0x0) {
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
  }
  if ((local_40 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469c279a FUN_1469c279a body=1297 status=ok
// SIG undefined FUN_1469c279a(void)

void FUN_1469c279a(longlong param_1,uint param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_278 [40];
  longlong local_250;
  undefined1 *local_248;
  longlong *local_240;
  undefined1 local_238 [8];
  longlong *local_230;
  undefined1 *local_228;
  undefined1 local_220 [8];
  longlong *local_218;
  undefined8 local_208;
  longlong *local_200;
  undefined8 local_1f8;
  longlong *local_1f0;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_278;
  lVar12 = *(longlong *)(param_3 + 0x78);
  plVar5 = *(longlong **)(param_3 + 0x80);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
  iVar7 = FUN_146a9e414(*(undefined8 *)(param_1 + 0x280));
  if (((iVar7 != 0 || (param_2 & 0xfffffffd) != 0) && (iVar7 != 1 || (param_2 & 0xfffffffd) != 1))
     && (1 < *(int *)(param_1 + 0x298))) {
    thunk_FUN_140a5071c(&local_1f8);
    FUN_1469c5e86(&local_248);
    uVar8 = FUN_146a9e414(*(undefined8 *)(param_1 + 0x280));
    FUN_1469c5f5e(local_248,local_238,uVar8);
    local_228 = local_238;
    FUN_1469eec4e(local_220,".\\Runtime/Slate/Private/Framework/Docking/SDockingArea.cpp",0x21e);
    FUN_1469c5fc4(local_220,&local_208,&local_1f8);
    plVar1 = local_218;
    if (local_218 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_218 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_218)(local_218);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    plVar1 = local_230;
    if (local_230 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_230 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_230)(local_230);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    if (local_240 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_240 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_240)(local_240);
        LOCK();
        piVar2 = (int *)((longlong)local_240 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_240 + 0x10))(local_240);
        }
      }
    }
    FUN_140a4ff8c(&local_1f8);
    uVar6 = local_208;
    if (0 < *(int *)(param_1 + 0x298)) {
      lVar9 = 0;
      lVar11 = 0;
      local_250 = lVar12;
      do {
        FUN_1469c1f3e(uVar6,*(longlong *)(param_1 + 0x290) + lVar9,0xffffffff);
        lVar12 = local_250;
        lVar11 = lVar11 + 1;
        uVar4 = *(uint *)(param_1 + 0x298);
        uVar10 = (ulonglong)(int)uVar4;
        lVar9 = lVar9 + 0x10;
      } while (lVar11 < (longlong)uVar10);
      while (0 < (int)uVar4) {
        iVar7 = (int)uVar10 + -1;
        FUN_1469efdae(param_1 + 0x290,iVar7);
        FUN_1469efe24(param_1 + 0x290);
        FUN_146a9bbe0(*(undefined8 *)(param_1 + 0x280),iVar7);
        uVar4 = *(uint *)(param_1 + 0x298);
        uVar10 = (ulonglong)uVar4;
      }
    }
    plVar1 = local_200;
    local_1f8 = uVar6;
    local_1f0 = local_200;
    if (local_200 == (longlong *)0x0) {
      FUN_1469c1f3e(param_1,&local_1f8,0xffffffff);
    }
    else {
      LOCK();
      *(int *)(local_200 + 1) = (int)local_200[1] + 1;
      UNLOCK();
      FUN_1469c1f3e(param_1,&local_1f8,0xffffffff);
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
      plVar1 = local_200;
      if (local_200 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_200 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_200)(local_200);
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
    iVar7 = FUN_146a9e414(*(undefined8 *)(param_1 + 0x280));
    FUN_146a9e40c(*(undefined8 *)(param_1 + 0x280),iVar7 == 0);
  }
  FUN_1469bed42(&local_1f8);
  FUN_1469bed62(local_238);
  local_248 = local_238;
  FUN_1469ece9a(local_220,".\\Runtime/Slate/Private/Framework/Docking/SDockingArea.cpp",0x237);
  FUN_1469bee4e(local_220,&local_208,&local_1f8);
  if (local_218 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_218 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_218)(local_218);
      LOCK();
      piVar2 = (int *)((longlong)local_218 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_218 + 0x10))(local_218);
      }
    }
  }
  if (local_230 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_230 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_230)(local_230);
      LOCK();
      piVar2 = (int *)((longlong)local_230 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_230 + 0x10))(local_230);
      }
    }
  }
  FUN_140a4ff8c(&local_1f8);
  plVar1 = local_200;
  if (param_2 < 2) {
    lVar9 = *(longlong *)(param_1 + 0x290);
  }
  else {
    lVar9 = (longlong)(*(int *)(param_1 + 0x298) + -1) * 0x10 + *(longlong *)(param_1 + 0x290);
  }
  local_1f8 = local_208;
  local_1f0 = local_200;
  if (local_200 == (longlong *)0x0) {
    FUN_1469c6038(param_1,&local_1f8,param_2,lVar9);
  }
  else {
    LOCK();
    *(int *)(local_200 + 1) = (int)local_200[1] + 1;
    UNLOCK();
    FUN_1469c6038(param_1,&local_1f8,param_2,lVar9);
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
  }
  local_1f8 = *(undefined8 *)(lVar12 + 0x40);
  local_1f0 = *(longlong **)(lVar12 + 0x48);
  if (local_1f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1f0 + 1) = (int)local_1f0[1] + 1;
    UNLOCK();
  }
  FUN_1469bd63c(local_208,&local_1f8,0xffffffff,0);
  plVar1 = local_1f0;
  if (local_1f0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_1f0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_1f0)(local_1f0);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (local_200 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_200 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_200)(local_200);
      LOCK();
      piVar2 = (int *)((longlong)local_200 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_200 + 0x10))(local_200);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x2f0) = 0;
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
  if ((local_48 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469c2cac FUN_1469c2cac body=223 status=ok
// SIG undefined FUN_1469c2cac(void)

void FUN_1469c2cac(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined1 *)(param_1 + 0x2f0) = 0;
  plVar6 = *(longlong **)(param_1 + 0x2c8);
  bVar3 = true;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    lVar7 = 0;
  }
  else {
    iVar5 = (int)plVar6[1];
    lVar7 = 0;
    do {
      if (iVar5 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_1469c2d01;
      }
      LOCK();
      iVar4 = (int)plVar6[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar8);
    lVar7 = *(longlong *)(param_1 + 0x2c0);
    bVar3 = false;
  }
LAB_1469c2d01:
  if (((*(char *)(param_1 + 0x2d8) == '\x01') && (*(char *)(param_1 + 0x2f2) == '\x01')) &&
     ((lVar7 == 0 || (lVar7 != *param_2)))) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_14627e1fa(lVar7,&local_38);
    FUN_1449db362(&local_38);
    FUN_14698158e(lVar7);
  }
  if (!bVar3) {
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
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469c2d8c FUN_1469c2d8c body=132 status=ok
// SIG undefined FUN_1469c2d8c(void)

undefined8 * FUN_1469c2d8c(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 == (longlong *)0x0) {
LAB_1469c2dff:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1469c2dff;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
    uVar4 = *(undefined8 *)(param_1 + 8);
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
    *param_2 = uVar4;
    param_2[1] = plVar3;
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



// FUNCTION 1469c2e10 FUN_1469c2e10 body=132 status=ok
// SIG undefined FUN_1469c2e10(void)

undefined8 * FUN_1469c2e10(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 == (longlong *)0x0) {
LAB_1469c2e83:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1469c2e83;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
    uVar4 = *(undefined8 *)(param_1 + 8);
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
    *param_2 = uVar4;
    param_2[1] = plVar3;
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



// FUNCTION 1469c2e94 FUN_1469c2e94 body=99 status=ok
// SIG undefined FUN_1469c2e94(void)

undefined8 * FUN_1469c2e94(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  
  if (((*(longlong *)(param_1 + 0x2c0) == 0) || (lVar2 = *(longlong *)(param_1 + 0x2c8), lVar2 == 0)
      ) || (*(int *)(lVar2 + 8) < 1)) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = 0;
    param_2[1] = lVar2;
    iVar3 = *(int *)(lVar2 + 8);
    do {
      if (iVar3 == 0) {
        param_2[1] = 0;
        return param_2;
      }
      LOCK();
      iVar1 = *(int *)(lVar2 + 8);
      bVar4 = iVar3 == iVar1;
      if (bVar4) {
        *(int *)(lVar2 + 8) = iVar3 + 1;
        iVar1 = iVar3;
      }
      iVar3 = iVar1;
      UNLOCK();
    } while (!bVar4);
    if (param_2[1] != 0) {
      *param_2 = *(undefined8 *)(param_1 + 0x2c0);
    }
  }
  return param_2;
}



// FUNCTION 1469c2ef8 FUN_1469c2ef8 body=826 status=ok
// SIG undefined FUN_1469c2ef8(void)

void FUN_1469c2ef8(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  bool bVar12;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *plStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar7 = (**(code **)(*param_1 + 0x288))();
  if (iVar7 == 0) {
    *(undefined1 *)((longlong)param_1 + 0x2f1) = 0;
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x2f1) = 1;
    plVar3 = (longlong *)param_1[0x59];
    if (plVar3 != (longlong *)0x0) {
      iVar7 = (int)plVar3[1];
      do {
        if (iVar7 == 0) goto LAB_1469c2f2e;
        LOCK();
        iVar6 = (int)plVar3[1];
        bVar11 = iVar7 == iVar6;
        if (bVar11) {
          *(int *)(plVar3 + 1) = iVar7 + 1;
          iVar6 = iVar7;
        }
        iVar7 = iVar6;
        UNLOCK();
      } while (!bVar11);
      lVar9 = param_1[0x58];
      if ((lVar9 != 0 & *(byte *)(param_1 + 0x5b)) == 1) {
        if (param_2 == 0) {
          *(undefined1 *)((longlong)param_1 + 0x2f2) = 1;
          if (*(longlong **)(lVar9 + 0x510) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(lVar9 + 0x510) + 0x58))();
          }
          plVar10 = (longlong *)param_1[0x5d];
          bVar11 = true;
          if (plVar10 == (longlong *)0x0) {
            plVar10 = (longlong *)0x0;
            lVar9 = 0;
          }
          else {
            iVar7 = (int)plVar10[1];
            lVar9 = 0;
            do {
              if (iVar7 == 0) {
                plVar10 = (longlong *)0x0;
                goto LAB_1469c30a2;
              }
              LOCK();
              iVar6 = (int)plVar10[1];
              bVar12 = iVar7 == iVar6;
              if (bVar12) {
                *(int *)(plVar10 + 1) = iVar7 + 1;
                iVar6 = iVar7;
              }
              iVar7 = iVar6;
              UNLOCK();
            } while (!bVar12);
            lVar9 = param_1[0x5c];
            bVar11 = false;
          }
LAB_1469c30a2:
          uVar4 = *(undefined8 *)(lVar9 + 0xe8);
          plVar5 = (longlong *)param_1[2];
          if (plVar5 == (longlong *)0x0) {
LAB_1469c30b6:
            local_58 = 0;
            plStack_50 = (longlong *)0x0;
          }
          else {
            iVar7 = (int)plVar5[1];
            do {
              if (iVar7 == 0) goto LAB_1469c30b6;
              LOCK();
              iVar6 = (int)plVar5[1];
              bVar12 = iVar7 == iVar6;
              if (bVar12) {
                *(int *)(plVar5 + 1) = iVar7 + 1;
                iVar6 = iVar7;
              }
              iVar7 = iVar6;
              UNLOCK();
            } while (!bVar12);
            local_58 = param_1[1];
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
            LOCK();
            plVar1 = plVar5 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            plStack_50 = plVar5;
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
          FUN_1469c3234(uVar4,&local_58);
          plVar5 = plStack_50;
          if (plStack_50 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_50 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_50)(plStack_50);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
          if (!bVar11) {
            LOCK();
            plVar5 = plVar10 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)*plVar5 == 0) {
              (**(code **)*plVar10)(plVar10);
              LOCK();
              piVar2 = (int *)((longlong)plVar10 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar10 + 0x10))(plVar10);
              }
            }
          }
        }
        else if (param_2 == 1) {
          plVar10 = (longlong *)param_1[0x5d];
          bVar11 = true;
          if (plVar10 == (longlong *)0x0) {
            plVar10 = (longlong *)0x0;
            lVar8 = 0;
          }
          else {
            iVar7 = (int)plVar10[1];
            lVar8 = 0;
            do {
              if (iVar7 == 0) {
                plVar10 = (longlong *)0x0;
                goto LAB_1469c2fc1;
              }
              LOCK();
              iVar6 = (int)plVar10[1];
              bVar12 = iVar7 == iVar6;
              if (bVar12) {
                *(int *)(plVar10 + 1) = iVar7 + 1;
                iVar6 = iVar7;
              }
              iVar7 = iVar6;
              UNLOCK();
            } while (!bVar12);
            lVar8 = param_1[0x5c];
            bVar11 = false;
          }
LAB_1469c2fc1:
          uVar4 = *(undefined8 *)(lVar8 + 0xe8);
          plVar5 = (longlong *)param_1[2];
          if (plVar5 == (longlong *)0x0) {
LAB_1469c2fd5:
            local_58 = 0;
            plStack_50 = (longlong *)0x0;
          }
          else {
            iVar7 = (int)plVar5[1];
            do {
              if (iVar7 == 0) goto LAB_1469c2fd5;
              LOCK();
              iVar6 = (int)plVar5[1];
              bVar12 = iVar7 == iVar6;
              if (bVar12) {
                *(int *)(plVar5 + 1) = iVar7 + 1;
                iVar6 = iVar7;
              }
              iVar7 = iVar6;
              UNLOCK();
            } while (!bVar12);
            local_58 = param_1[1];
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
            LOCK();
            plVar1 = plVar5 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            plStack_50 = plVar5;
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
          FUN_1469c3234(uVar4,&local_58);
          plVar5 = plStack_50;
          if (plStack_50 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_50 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_50)(plStack_50);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
          if (!bVar11) {
            LOCK();
            plVar5 = plVar10 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)*plVar5 == 0) {
              (**(code **)*plVar10)(plVar10);
              LOCK();
              piVar2 = (int *)((longlong)plVar10 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar10 + 0x10))(plVar10);
              }
            }
          }
          FUN_14698158e(lVar9);
        }
      }
      LOCK();
      plVar10 = plVar3 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
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
LAB_1469c2f2e:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1469c335e(param_1);
  return;
}



// FUNCTION 1469c3234 FUN_1469c3234 body=296 status=ok
// SIG undefined FUN_1469c3234(void)

void FUN_1469c3234(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*(longlong *)*param_2 + 0x280))((longlong *)*param_2,&local_38);
  if (local_30 == (longlong *)0x0) {
    if (local_38 == 0) goto LAB_1469c3320;
    lVar4 = *param_1;
LAB_1469c32aa:
    iVar3 = *(int *)(lVar4 + 0x90);
    *(uint *)(lVar4 + 0x90) = iVar3 + 1U;
    if (*(uint *)(lVar4 + 0x94) < iVar3 + 1U) {
      FUN_14608fdac((longlong *)(lVar4 + 0x88),iVar3);
    }
    lVar4 = *(longlong *)(lVar4 + 0x88);
    *(longlong *)(lVar4 + (longlong)iVar3 * 0x10) = local_38;
    *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = local_30;
    if (local_30 == (longlong *)0x0) goto LAB_1469c3320;
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
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
  else {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
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
    if (local_38 != 0) {
      lVar4 = *param_1;
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
      goto LAB_1469c32aa;
    }
  }
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
LAB_1469c3320:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469c335e FUN_1469c335e body=1433 status=ok
// SIG undefined FUN_1469c335e(void)

void FUN_1469c335e(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  byte bVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_108 [40];
  longlong local_e0;
  undefined1 local_d8;
  undefined1 local_d7;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0;
  undefined1 local_bf;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  longlong *local_a0;
  longlong *local_98;
  uint local_90;
  longlong local_88;
  longlong *plStack_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1469c6670(param_1,&local_98);
  uVar12 = (ulonglong)(int)local_90;
  if ((longlong)uVar12 < 1) goto LAB_1469c3501;
  plVar9 = local_98 + uVar12 * 2;
  plVar13 = local_98;
  do {
    plVar2 = (longlong *)*plVar13;
    plVar3 = (longlong *)plVar13[1];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    iVar7 = (**(code **)(*plVar2 + 0x240))(plVar2);
    if (iVar7 == 0) {
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      *(undefined1 *)(plVar2 + 0x6f) = 0;
      local_88 = 0;
      plStack_80 = (longlong *)0x0;
      local_78 = 1;
      local_70 = 0;
      uStack_68 = 0;
      FUN_140a55872(plVar2[0x56] + 0x28,plVar2[0x56] + 0x20,&local_88);
      FUN_1449db362(&local_70);
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
        goto LAB_1469c33ef;
      }
    }
    else if (plVar3 != (longlong *)0x0) {
LAB_1469c33ef:
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
    plVar13 = plVar13 + 2;
  } while (plVar13 != plVar9);
  *(undefined1 *)((longlong)param_1 + 0x2f3) = 1;
  if (((param_1[0x58] != 0) && (plVar13 = (longlong *)param_1[0x59], plVar13 != (longlong *)0x0)) &&
     (0 < (int)plVar13[1])) {
    iVar7 = (int)plVar13[1];
    do {
      if (iVar7 == 0) goto LAB_1469c34ed;
      LOCK();
      iVar5 = (int)plVar13[1];
      bVar16 = iVar7 == iVar5;
      if (bVar16) {
        *(int *)(plVar13 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar16);
    lVar10 = param_1[0x58];
    if (lVar10 != 0) {
      plVar9 = (longlong *)param_1[0x5d];
      local_e0 = lVar10;
      if (plVar9 == (longlong *)0x0) {
LAB_1469c3563:
        if (DAT_00000152 == '\0') goto LAB_1469c35e5;
LAB_1469c356d:
        lVar10 = local_e0;
        (**(code **)(*param_1 + 0x260))(param_1,&local_88);
        lVar4 = local_88;
        lVar14 = (longlong)(int)plStack_80;
        uVar12 = 0;
        if (lVar14 == 0) {
          bVar8 = 0;
          uVar11 = 0;
        }
        else {
          lVar15 = 0;
          bVar8 = 0;
          do {
            FUN_146a58938(*(undefined8 *)(lVar4 + lVar15),&local_a8);
            plVar9 = local_a0;
            if (local_a8 == lVar10) {
              cVar6 = FUN_146a580ce(*(undefined8 *)(lVar4 + lVar15));
              plVar9 = local_a0;
              if (local_a0 != (longlong *)0x0) {
                LOCK();
                plVar2 = local_a0 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)*local_a0)(local_a0);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar9 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar9 + 0x10))(plVar9);
                  }
                }
              }
              lVar10 = local_e0;
              if (cVar6 == '\0') {
                uVar11 = CONCAT71((int7)((ulonglong)local_e0 >> 8),1);
                goto LAB_1469c3885;
              }
            }
            else if (local_a0 != (longlong *)0x0) {
              LOCK();
              plVar2 = local_a0 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*local_a0)(local_a0);
                LOCK();
                piVar1 = (int *)((longlong)plVar9 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar9 + 0x10))(plVar9);
                }
              }
            }
            cVar6 = FUN_146a580ce(*(undefined8 *)(lVar4 + lVar15));
            bVar8 = bVar8 | cVar6 == '\x02';
            lVar15 = lVar15 + 0x10;
          } while (lVar14 * 0x10 != lVar15);
          uVar11 = 0;
LAB_1469c3885:
          uVar12 = (ulonglong)plStack_80 & 0xffffffff;
        }
        FUN_1469ec9dc(local_88,uVar12);
        if (local_88 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        iVar7 = (int)plVar9[1];
        do {
          if (iVar7 == 0) goto LAB_1469c3563;
          LOCK();
          iVar5 = (int)plVar9[1];
          bVar16 = iVar7 == iVar5;
          if (bVar16) {
            *(int *)(plVar9 + 1) = iVar7 + 1;
            iVar5 = iVar7;
          }
          iVar7 = iVar5;
          UNLOCK();
        } while (!bVar16);
        cVar6 = *(char *)(param_1[0x5c] + 0x152);
        LOCK();
        plVar2 = plVar9 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
        if (cVar6 != '\0') goto LAB_1469c356d;
LAB_1469c35e5:
        bVar8 = 0;
        uVar11 = 0;
      }
      FUN_1469c6820(param_1[0x54],&local_88);
      iVar7 = (int)plStack_80;
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      if (iVar7 == 0) {
        local_c0 = DAT_14c96b1e1;
        local_bf = 1;
        local_b8 = 0;
        uStack_b0 = 0;
        FUN_14020e622(param_1[0x54]);
      }
      FUN_1469c6820(param_1[0x56],&local_88);
      iVar7 = (int)plStack_80;
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      if (iVar7 == 0) {
        local_d8 = DAT_14c96b1e1;
        local_d7 = 1;
        local_d0 = 0;
        uStack_c8 = 0;
        FUN_14020e622(param_1[0x56]);
      }
      *(byte *)((longlong)param_1 + 0x2f3) = (byte)uVar11 ^ 1;
      if ((byte)uVar11 == 0) {
        FUN_1469c691c(param_1[0x54]);
        FUN_1469c691c(param_1[0x56]);
        bVar8 = bVar8 ^ 1;
      }
      else {
        bVar8 = 0;
      }
      FUN_1469c6996(param_1,&local_88);
      FUN_1469c6a30(local_88,1,uVar11 & 0xffffffff,bVar8);
      FUN_1469c6be6(param_1,&local_a8);
      FUN_1469c6a30(local_a8,0,uVar11 & 0xffffffff,bVar8);
      plVar9 = *(longlong **)(local_e0 + 0x630);
      plVar2 = *(longlong **)(local_e0 + 0x638);
      if (plVar2 == (longlong *)0x0) {
        if (plVar9 != (longlong *)0x0) {
LAB_1469c3766:
          (**(code **)(*plVar9 + 0x18))(plVar9,uVar11 & 0xffffffff);
        }
      }
      else {
        LOCK();
        *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
        UNLOCK();
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
        if (plVar9 != (longlong *)0x0) {
          plVar9 = *(longlong **)(local_e0 + 0x630);
          plVar2 = *(longlong **)(local_e0 + 0x638);
          if (plVar2 == (longlong *)0x0) goto LAB_1469c3766;
          LOCK();
          *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
          UNLOCK();
          (**(code **)(*plVar9 + 0x18))(plVar9,uVar11 & 0xffffffff);
          LOCK();
          plVar9 = plVar2 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
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
      }
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_a0 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*local_a0)(local_a0);
          LOCK();
          piVar1 = (int *)((longlong)local_a0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_a0 + 0x10))(local_a0);
          }
        }
      }
      plVar9 = plStack_80;
      if (plStack_80 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_80 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plStack_80)(plStack_80);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
    }
    LOCK();
    plVar9 = plVar13 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
LAB_1469c34ed:
  FUN_1469c6c7c(param_1);
  FUN_1469c3c76(param_1);
  uVar12 = (ulonglong)local_90;
LAB_1469c3501:
  FUN_1469eeec9(local_98,uVar12 & 0xffffffff);
  if (local_98 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469c38f8 FUN_1469c38f8 body=386 status=ok
// SIG undefined FUN_1469c38f8(void)

longlong * FUN_1469c38f8(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_1469c3a09:
    *puVar5 = &PTR_LAB_149f02f40;
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
    *puVar5 = &PTR_FUN_149f02ed0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1469c3a09;
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
    *puVar5 = &PTR_LAB_149f02f40;
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
    *puVar5 = &PTR_FUN_149f02ed0;
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



// FUNCTION 1469c3a7a FUN_1469c3a7a body=274 status=ok
// SIG undefined FUN_1469c3a7a(void)

void FUN_1469c3a7a(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x260))(param_1,&local_30);
  if (0 < local_28) {
    lVar5 = 0;
    lVar4 = 0;
    do {
      FUN_146a5cbf6(*(undefined8 *)(local_30 + lVar5));
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 0x10;
    } while (lVar4 < local_28);
  }
  lVar5 = -1;
  lVar4 = 0;
  while (lVar5 = lVar5 + 1, lVar5 < local_28) {
    puVar1 = (undefined8 *)(local_30 + lVar4);
    lVar4 = lVar4 + 0x10;
    cVar3 = FUN_146a5ca8a(*puVar1);
    if (cVar3 == '\0') goto LAB_1469c3b51;
  }
  if (0 < local_28) {
    lVar5 = 0;
    lVar4 = 0;
    do {
      FUN_146a5870a(*(undefined8 *)(local_30 + lVar5));
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 0x10;
    } while (lVar4 < local_28);
  }
  plVar2 = DAT_14c98e618;
  local_40 = *param_2;
  local_38 = param_2[1];
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
    UNLOCK();
  }
  (**(code **)(*plVar2 + 0x140))(plVar2,&local_40);
LAB_1469c3b51:
  FUN_1469ec9dc(local_30,local_28);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469c3b8e FUN_1469c3b8e body=97 status=ok
// SIG undefined FUN_1469c3b8e(void)

longlong FUN_1469c3b8e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  FUN_14149270a();
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  *(longlong *)(param_1 + 0x18) = lVar4;
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
  FUN_140a5503c(param_1);
  return param_1;
}



// FUNCTION 1469c3bf0 FUN_1469c3bf0 body=133 status=ok
// SIG undefined FUN_1469c3bf0(void)

void FUN_1469c3bf0(longlong param_1,undefined8 *param_2)

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
  plVar5 = *(longlong **)(param_1 + 0x638);
  *(undefined8 *)(param_1 + 0x630) = uVar3;
  *(longlong *)(param_1 + 0x638) = lVar4;
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
  plVar5 = (longlong *)param_2[1];
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
                    /* WARNING: Could not recover jumptable at 0x0001469c3c69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1469c3c76 FUN_1469c3c76 body=169 status=ok
// SIG undefined FUN_1469c3c76(void)

void FUN_1469c3c76(longlong *param_1)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  uint local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x260))(param_1,&local_28);
  uVar2 = (ulonglong)local_20;
  if (0 < (int)local_20) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      cVar1 = FUN_146a57bcc(*(undefined8 *)(local_28 + lVar3));
      if (cVar1 != '\0') {
        FUN_14162fdc4();
        FUN_1469c6316(DAT_14c98e9c0,lVar3 + local_28);
        uVar2 = (ulonglong)local_20;
        break;
      }
      lVar4 = lVar4 + 1;
      uVar2 = (ulonglong)(int)local_20;
      lVar3 = lVar3 + 0x10;
    } while (lVar4 < (longlong)uVar2);
  }
  FUN_1469ec9dc(local_28,uVar2);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469c3d20 FUN_1469c3d20 body=1232 status=ok
// SIG undefined FUN_1469c3d20(void)

undefined8 * FUN_1469c3d20(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  longlong *plVar12;
  longlong lVar13;
  float fVar14;
  undefined1 auStack_118 [36];
  undefined4 local_f4;
  undefined8 local_f0;
  undefined8 *local_e8;
  undefined1 local_e0 [8];
  longlong local_d8;
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined1 local_c0 [8];
  longlong *local_b8;
  double local_b0;
  double local_a8;
  undefined1 local_a0 [8];
  longlong *local_98;
  double local_90;
  double local_88;
  float local_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar10 = *(longlong **)(param_1 + 0x2c8);
  uVar8 = local_60;
  local_e8 = param_2;
  if (plVar10 == (longlong *)0x0) {
LAB_1469c3d65:
    local_f4 = (undefined4)CONCAT71((int7)(uVar8 >> 8),1);
    plVar10 = (longlong *)0x0;
LAB_1469c3d6d:
    FUN_14627f6ee(&local_70);
    local_f0 = CONCAT44(fStack_6c,local_70);
    plVar12 = (longlong *)CONCAT44(fStack_64,local_68);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      plVar4 = (longlong *)CONCAT44(fStack_64,local_68);
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
    bVar11 = true;
  }
  else {
    uVar8 = (ulonglong)*(uint *)(plVar10 + 1);
    do {
      uVar7 = (uint)uVar8;
      if (uVar7 == 0) goto LAB_1469c3d65;
      LOCK();
      uVar3 = *(uint *)(plVar10 + 1);
      if (uVar7 == uVar3) {
        *(uint *)(plVar10 + 1) = uVar7 + 1;
      }
      else {
        uVar8 = (ulonglong)uVar3;
      }
      UNLOCK();
    } while (uVar7 != uVar3);
    lVar9 = *(longlong *)(param_1 + 0x2c0);
    if ((lVar9 == 0) || (*(char *)(param_1 + 0x2d8) != '\x01')) {
      local_f4 = 0;
      goto LAB_1469c3d6d;
    }
    FUN_14698095c(lVar9,&local_70);
    if ((*(byte *)(lVar9 + 0x369) & 1) == 0) {
      FUN_14697fe60(lVar9,&local_80,0);
      local_68 = local_68 - (local_80 + local_78);
      fStack_64 = fStack_64 - (fStack_7c + fStack_74);
    }
    fVar14 = (float)FUN_145788320(local_70,fStack_6c);
    local_88 = (double)((fStack_64 - fStack_6c) * (1.0 / fVar14));
    local_90 = (double)((1.0 / fVar14) * (local_68 - local_70));
    FUN_1469c41f2(&local_80);
    local_f0 = CONCAT44(fStack_7c,local_80);
    plVar12 = (longlong *)CONCAT44(fStack_74,local_78);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      plVar4 = (longlong *)CONCAT44(fStack_74,local_78);
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
    uVar6 = FUN_1469819c8(lVar9);
    local_a8 = (double)fStack_6c * (1.0 / (double)fVar14);
    local_b0 = (1.0 / (double)fVar14) * (double)local_70;
    FUN_1469c42fe(local_f0,local_a0,&local_b0,uVar6);
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_98 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_98)(local_98);
        LOCK();
        piVar2 = (int *)((longlong)local_98 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_98 + 0x10))(local_98);
        }
      }
    }
    local_f4 = 0;
    bVar11 = false;
  }
  uVar6 = FUN_146a9e414(*(undefined8 *)(param_1 + 0x280));
  FUN_1469c4372(local_f0,local_c0,uVar6);
  if (local_b8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_b8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_b8)(local_b8);
      LOCK();
      piVar2 = (int *)((longlong)local_b8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_b8 + 0x10))(local_b8);
      }
    }
  }
  if (0 < *(int *)(param_1 + 0x298)) {
    lVar9 = 0;
    lVar13 = 0;
    do {
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x290) + lVar9);
      (**(code **)(*plVar4 + 0x280))(plVar4,&local_70);
      if (CONCAT44(fStack_6c,local_70) != 0) {
        local_d8 = CONCAT44(fStack_64,local_68);
        if (local_d8 != 0) {
          LOCK();
          *(int *)(local_d8 + 8) = *(int *)(local_d8 + 8) + 1;
          UNLOCK();
        }
        FUN_1469c43d8(local_f0,local_d0,local_e0);
        plVar4 = local_c8;
        bVar11 = true;
        if (local_c8 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_c8 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_c8)(local_c8);
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
      plVar4 = (longlong *)CONCAT44(fStack_64,local_68);
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
      lVar13 = lVar13 + 1;
      lVar9 = lVar9 + 0x10;
    } while (lVar13 < *(int *)(param_1 + 0x298));
  }
  puVar5 = local_e8;
  uVar6 = local_f4;
  if (bVar11) {
    *local_e8 = local_f0;
    local_e8[1] = plVar12;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      bVar11 = false;
      goto LAB_1469c4165;
    }
  }
  else {
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar12 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    *puVar5 = 0;
    puVar5[1] = 0;
  }
  bVar11 = true;
  plVar12 = (longlong *)0x0;
LAB_1469c4165:
  if ((char)uVar6 == '\0') {
    LOCK();
    plVar4 = plVar10 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if (!bVar11) {
    LOCK();
    plVar10 = plVar12 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar5;
}



// FUNCTION 1469c41f2 FUN_1469c41f2 body=268 status=ok
// SIG undefined FUN_1469c41f2(void)

undefined8 * FUN_1469c41f2(undefined8 *param_1,double *param_2)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  
  puVar5 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  dVar2 = param_2[1];
  dVar3 = *param_2;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *(undefined4 *)(puVar5 + 3) = 0x3f800000;
  *(undefined4 *)(puVar5 + 4) = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  *puVar5 = &PTR_FUN_149f019e0;
  *(undefined4 *)(puVar5 + 7) = 1;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = (double)(float)dVar3;
  puVar5[0xb] = (double)(float)dVar2;
  *(undefined1 *)(puVar5 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar5 + 100) = 0;
  *param_1 = puVar5;
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_149f01a20;
  plVar6[2] = (longlong)puVar5;
  param_1[1] = plVar6;
  if (puVar5 != (undefined8 *)0x0) {
    if (plVar6 == (longlong *)0x0) {
      puVar5[1] = puVar5;
    }
    else {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      puVar5[1] = puVar5;
      if ((longlong *)puVar5[2] != plVar6) {
        LOCK();
        *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
        UNLOCK();
        plVar4 = (longlong *)puVar5[2];
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))();
          }
        }
        puVar5[2] = plVar6;
      }
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
    }
  }
  return param_1;
}



// FUNCTION 1469c42fe FUN_1469c42fe body=116 status=ok
// SIG undefined FUN_1469c42fe(void)

undefined8 *
FUN_1469c42fe(longlong param_1,undefined8 *param_2,undefined4 *param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  *(undefined4 *)(param_1 + 0x38) = 2;
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  *(undefined4 *)(param_1 + 0x40) = *param_3;
  *(undefined4 *)(param_1 + 0x44) = uVar4;
  *(undefined4 *)(param_1 + 0x48) = uVar5;
  *(undefined4 *)(param_1 + 0x4c) = uVar6;
  *(undefined1 *)(param_1 + 0x60) = param_4;
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 == (longlong *)0x0) {
LAB_1469c4362:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar8 = (int)plVar3[1];
    do {
      if (iVar8 == 0) goto LAB_1469c4362;
      LOCK();
      iVar7 = (int)plVar3[1];
      bVar9 = iVar8 == iVar7;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar9);
    *param_2 = *(undefined8 *)(param_1 + 8);
    param_2[1] = plVar3;
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



// FUNCTION 1469c4372 FUN_1469c4372 body=101 status=ok
// SIG undefined FUN_1469c4372(void)

undefined8 * FUN_1469c4372(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  *(undefined4 *)(param_1 + 0x20) = param_3;
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 == (longlong *)0x0) {
LAB_1469c43c7:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1469c43c7;
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
    *param_2 = *(undefined8 *)(param_1 + 8);
    param_2[1] = plVar3;
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



// FUNCTION 1469c43d8 FUN_1469c43d8 body=228 status=ok
// SIG undefined FUN_1469c43d8(void)

undefined8 * FUN_1469c43d8(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  iVar7 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar7 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar7 + 1U) {
    FUN_1469e518c((longlong *)(param_1 + 0x28),iVar7);
  }
  lVar3 = *(longlong *)(param_1 + 0x28);
  *(undefined8 *)(lVar3 + (longlong)iVar7 * 0x10) = *param_3;
  lVar4 = param_3[1];
  *(longlong *)(lVar3 + 8 + (longlong)iVar7 * 0x10) = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x10);
  if (plVar5 == (longlong *)0x0) {
LAB_1469c4471:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar7 = (int)plVar5[1];
    do {
      if (iVar7 == 0) goto LAB_1469c4471;
      LOCK();
      iVar6 = (int)plVar5[1];
      bVar8 = iVar7 == iVar6;
      if (bVar8) {
        *(int *)(plVar5 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar8);
    *param_2 = *(undefined8 *)(param_1 + 8);
    param_2[1] = plVar5;
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
  plVar5 = (longlong *)param_3[1];
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
  return param_2;
}



// FUNCTION 1469c44bc FUN_1469c44bc body=722 status=ok
// SIG undefined FUN_1469c44bc(void)

ulonglong FUN_1469c44bc(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  float *pfVar5;
  undefined8 unaff_RBX;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  longlong local_e0;
  undefined8 local_d8;
  longlong local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),2);
  if (*(char *)(param_1 + 0x2f3) != '\x01') goto LAB_1469c451d;
  pfVar5 = (float *)FUN_144b013ec();
  fVar7 = pfVar5[2];
  fVar8 = fVar7 * 0.0;
  local_a8 = CONCAT44(pfVar5[4] + fVar8,fVar8 + pfVar5[3]);
  local_98 = CONCAT44(pfVar5[1] * fVar7,fVar8);
  local_a0 = CONCAT44(fVar8,fVar7 * *pfVar5);
  FUN_144b01024(&local_a8,&local_b8);
  fVar8 = local_b0 * 0.5;
  pfVar5 = (float *)FUN_144b013ec(*param_2);
  fVar7 = pfVar5[2];
  fVar9 = fVar7 * 0.0;
  local_a8 = CONCAT44(pfVar5[4] + fVar9,fVar9 + pfVar5[3]);
  local_98 = CONCAT44(pfVar5[1] * fVar7,fVar9);
  local_a0 = CONCAT44(fVar9,fVar7 * *pfVar5);
  FUN_144b01024(&local_a8,&local_c8);
  if (local_bc <= local_ac) {
    local_ac = local_bc;
  }
  fVar7 = fVar8;
  if (local_c0 <= fVar8) {
    fVar7 = local_c0;
  }
  if (local_b4 <= local_c4) {
    local_b4 = local_c4;
  }
  if (local_b8 <= local_c8) {
    local_b8 = local_c8;
  }
  if (local_ac < local_b4) {
LAB_1469c4759:
    if (local_ac < local_b4 || fVar7 < local_b8) {
LAB_1469c475d:
      uVar4 = *(undefined8 *)(param_1 + 0x2b0);
      local_e8 = *param_2;
      local_e0 = param_2[1];
      if (local_e0 != 0) {
        LOCK();
        *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
        UNLOCK();
      }
      FUN_1469c4790(uVar4,&local_e8);
      uVar6 = CONCAT71((int7)((ulonglong)&local_c8 >> 8),1);
      goto LAB_1469c451d;
    }
  }
  else {
    if (local_c0 <= local_b0) {
      local_b0 = local_c0;
    }
    if (fVar8 <= local_c8) {
      fVar8 = local_c8;
    }
    if (local_b0 < fVar8) goto LAB_1469c4759;
    if ((local_ac < local_b4 || fVar7 < local_b8) ||
       ((fVar7 - local_b8) * (local_ac - local_b4) <= (local_b0 - fVar8) * (local_ac - local_b4)))
    goto LAB_1469c475d;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x2a0);
  local_d8 = *param_2;
  local_d0 = param_2[1];
  if (local_d0 != 0) {
    LOCK();
    *(int *)(local_d0 + 8) = *(int *)(local_d0 + 8) + 1;
    UNLOCK();
  }
  FUN_1469c4790(uVar4,&local_d8);
  uVar6 = 0;
LAB_1469c451d:
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
  if ((local_90 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469c4790 FUN_1469c4790 body=1696 status=ok
// SIG undefined FUN_1469c4790(void)

void FUN_1469c4790(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  float fVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  float *pfVar10;
  longlong lVar11;
  bool bVar12;
  float fVar13;
  undefined1 auStack_328 [32];
  undefined8 local_308;
  longlong local_300;
  undefined8 local_2f8;
  longlong local_2f0;
  float local_2e8;
  undefined1 local_2e4;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined4 local_2d0;
  undefined1 local_2cc;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  longlong local_2b0;
  undefined8 local_2a8;
  longlong *plStack_2a0;
  undefined8 *local_298;
  longlong local_290;
  code *local_288;
  undefined8 local_280;
  undefined8 local_270;
  longlong local_268;
  undefined1 local_260;
  undefined1 local_25f;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  longlong local_240;
  code *local_238;
  undefined4 local_230;
  undefined4 uStack_22c;
  longlong local_228;
  longlong *local_220 [52];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_328;
  local_248 = *param_2;
  local_240 = param_2[1];
  if (local_240 != 0) {
    LOCK();
    *(int *)(local_240 + 8) = *(int *)(local_240 + 8) + 1;
    UNLOCK();
  }
  cVar7 = FUN_1469c4fea(param_1,&local_248);
  if (cVar7 == '\0') {
    local_260 = DAT_14c96b23c;
    local_25f = 1;
    local_258 = 0;
    uStack_250 = 0;
    FUN_14020e622(param_1);
    FUN_1469db5d2(&local_228);
    local_238 = FUN_1469db612;
    local_230 = 0;
    FUN_1469f5dfc(&local_288,param_1,&local_238);
    FUN_144a450dc(local_80,&local_288);
    FUN_1449db362(&local_288);
    local_238 = FUN_1469db6fa;
    local_230 = 0;
    FUN_1469f640c(&local_288,param_1,&local_238);
    FUN_144a450dc(local_70,&local_288);
    FUN_1449db362(&local_288);
    local_270 = *param_2;
    local_268 = param_2[1];
    if (local_268 != 0) {
      LOCK();
      *(int *)(local_268 + 8) = *(int *)(local_268 + 8) + 1;
      UNLOCK();
    }
    local_288 = FUN_1469db88a;
    local_280 = (longlong *)((ulonglong)local_280._4_4_ << 0x20);
    FUN_1469db7ee(&local_228,param_1,&local_288,&local_270);
    local_290 = param_1 + 0x298;
    local_298 = param_2;
    FUN_1469f5628(&local_288);
    FUN_1469dc03e(&local_288,&local_238,&local_228);
    plVar3 = local_280;
    if (local_280 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_280 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_280)(local_280);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    FUN_1449db362(local_60);
    FUN_1449db362(local_70);
    FUN_1449db362(local_80);
    FUN_140a4ff8c(&local_228);
    FUN_146a58688(*param_2,&local_228);
    fVar13 = (float)FUN_1469cdd46(local_228,param_2);
    plVar3 = local_220[0];
    if (local_220[0] != (longlong *)0x0) {
      LOCK();
      plVar4 = local_220[0] + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_220[0])(local_220[0]);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    plVar3 = DAT_14c98e618;
    if ((fVar13 == 0.0) && (!NAN(fVar13))) {
      plVar4 = *(longlong **)(param_1 + 0x10);
      if (plVar4 == (longlong *)0x0) {
LAB_1469c4a52:
        local_2a8 = 0;
        plStack_2a0 = (longlong *)0x0;
        (**(code **)(*plVar3 + 0x28))(plVar3,&local_228);
      }
      else {
        iVar8 = (int)plVar4[1];
        do {
          if (iVar8 == 0) goto LAB_1469c4a52;
          LOCK();
          iVar6 = (int)plVar4[1];
          bVar12 = iVar8 == iVar6;
          if (bVar12) {
            *(int *)(plVar4 + 1) = iVar8 + 1;
            iVar6 = iVar8;
          }
          iVar8 = iVar6;
          UNLOCK();
        } while (!bVar12);
        local_2a8 = *(undefined8 *)(param_1 + 8);
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        plStack_2a0 = plVar4;
        (**(code **)(*plVar3 + 0x28))(plVar3,&local_228);
        LOCK();
        plVar3 = plVar4 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
      if (local_228 != 0) {
        FUN_146a58688(*param_2,&local_288);
        pfVar10 = (float *)FUN_144b013ec(local_288);
        fVar13 = *pfVar10;
        pfVar10 = (float *)FUN_144b013ec(local_228);
        plVar3 = local_280;
        fVar2 = *pfVar10;
        if (local_280 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_280 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*local_280)(local_280);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
        FUN_146a58688(*param_2,&local_288);
        FUN_1469cddd8(local_288,param_2,fVar13 / fVar2);
        plVar3 = local_280;
        if (local_280 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_280 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*local_280)(local_280);
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
      plVar3 = local_220[0];
      if (local_220[0] != (longlong *)0x0) {
        LOCK();
        plVar4 = local_220[0] + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_220[0])(local_220[0]);
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
    FUN_1469dc104(param_1,&local_228);
    if (local_220[0] != (longlong *)0x0) {
      LOCK();
      plVar3 = local_220[0] + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_220[0])(local_220[0]);
        LOCK();
        piVar1 = (int *)((longlong)local_220[0] + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_220[0] + 0x10))(local_220[0]);
        }
      }
    }
    if (local_228 != 0) {
      local_2b8 = *param_2;
      local_2b0 = param_2[1];
      if (local_2b0 != 0) {
        LOCK();
        *(int *)(local_2b0 + 8) = *(int *)(local_2b0 + 8) + 1;
        UNLOCK();
      }
      FUN_1428f9dd0(&local_2b8,0);
    }
    FUN_140767c14(*(undefined8 *)(param_1 + 0x268),&local_228,0xffffffff);
    local_2d0 = 0x3f800000;
    local_2cc = 1;
    local_2c8 = 0;
    uStack_2c0 = 0;
    lVar9 = FUN_140767d84(local_220);
    local_2e8 = (float)DAT_14c98e8e0;
    local_2e4 = 1;
    local_2e0 = 0;
    uStack_2d8 = 0;
    *(undefined1 *)(lVar9 + 0xac) = 1;
    *(float *)(lVar9 + 0xa8) = local_2e8;
    FUN_144a450dc(lVar9 + 0xb0,&local_2e0);
    FUN_1449db362(&local_2e0);
    *(undefined4 *)(lVar9 + 0x40) = 1;
    *(undefined1 *)(lVar9 + 0x44) = 1;
    local_280 = (longlong *)CONCAT44(uStack_22c,local_230);
    local_288 = local_238;
    if (local_280 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_280 + 1) = (int)local_280[1] + 1;
      UNLOCK();
    }
    FUN_145aaf878(lVar9,&local_288);
    plVar3 = local_280;
    if (local_280 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_280 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_280)(local_280);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    FUN_140767802(&local_228);
    iVar8 = *(int *)(param_1 + 0x280);
    *(uint *)(param_1 + 0x280) = iVar8 + 1U;
    if (*(uint *)(param_1 + 0x284) < iVar8 + 1U) {
      FUN_1469fcfa0((longlong *)(param_1 + 0x278),iVar8);
    }
    lVar9 = *(longlong *)(param_1 + 0x278);
    lVar11 = (longlong)iVar8 * 0x20;
    *(undefined8 *)(lVar9 + lVar11) = *param_2;
    lVar5 = param_2[1];
    *(longlong *)(lVar9 + 8 + lVar11) = lVar5;
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    *(code **)(lVar9 + lVar11 + 0x10) = local_238;
    lVar5 = CONCAT44(uStack_22c,local_230);
    *(longlong *)(lVar9 + lVar11 + 0x18) = lVar5;
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    local_2f8 = *param_2;
    local_2f0 = param_2[1];
    if (local_2f0 != 0) {
      LOCK();
      *(int *)(local_2f0 + 8) = *(int *)(local_2f0 + 8) + 1;
      UNLOCK();
    }
    cVar7 = FUN_1428f9e74(&local_2f8);
    if (cVar7 != '\0') {
      local_308 = *param_2;
      local_300 = param_2[1];
      if (local_300 != 0) {
        LOCK();
        *(int *)(local_300 + 8) = *(int *)(local_300 + 8) + 1;
        UNLOCK();
      }
      FUN_1469dc1be(param_1,&local_308,0);
    }
    plVar3 = (longlong *)CONCAT44(uStack_22c,local_230);
    if (plVar3 != (longlong *)0x0) {
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
  }
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
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
  if ((local_50 ^ (ulonglong)auStack_328) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469c4e32 FUN_1469c4e32 body=242 status=ok
// SIG undefined FUN_1469c4e32(void)

void FUN_1469c4e32(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  cVar4 = FUN_1469c5226(param_1,&local_28);
  if (cVar4 != '\0') {
    FUN_146a58688(*param_2,&local_38);
    local_48 = *param_2;
    local_40 = param_2[1];
    if (local_40 != 0) {
      LOCK();
      *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
      UNLOCK();
    }
    FUN_1469d2190(local_38,&local_48);
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
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469c4f26 FUN_1469c4f26 body=194 status=ok
// SIG undefined FUN_1469c4f26(void)

ulonglong FUN_1469c4f26(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  undefined8 unaff_RBX;
  ulonglong uVar7;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = *(undefined8 *)(param_1 + 0x2a0);
  local_30 = *param_2;
  local_28 = param_2[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  cVar5 = FUN_1469c4fea(uVar3,&local_30);
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (cVar5 == '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x2b0);
    local_40 = *param_2;
    local_38 = param_2[1];
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      UNLOCK();
    }
    uVar6 = FUN_1469c4fea(uVar3,&local_40);
    uVar7 = (ulonglong)uVar6;
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469c4fea FUN_1469c4fea body=374 status=ok
// SIG undefined FUN_1469c4fea(void)

ulonglong FUN_1469c4fea(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  undefined8 unaff_RBX;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  plVar8 = *(longlong **)(param_1 + 0x278);
  lVar6 = (longlong)*(int *)(param_1 + 0x280);
  if (lVar6 == 0) {
    unaff_RBX = 0;
    plVar9 = plVar8;
  }
  else {
    lVar7 = lVar6 * 0x20;
    plVar2 = plVar8 + lVar6 * 4;
    do {
      local_68 = *plVar8;
      local_60 = plVar8[1];
      if (local_60 != 0) {
        LOCK();
        *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
        UNLOCK();
      }
      local_58 = plVar8[2];
      local_50 = plVar8[3];
      if (local_50 != 0) {
        LOCK();
        *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
        UNLOCK();
      }
      bVar5 = lVar3 == local_68 && lVar3 != 0;
      unaff_RBX = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar5);
      FUN_1469dc62e(&local_68);
      plVar9 = plVar8;
      if (bVar5) break;
      plVar8 = plVar8 + 4;
      lVar7 = lVar7 + -0x20;
      plVar9 = plVar2;
    } while (lVar7 != 0);
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar4 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
    LOCK();
    plVar8 = plVar4 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
    LOCK();
    plVar8 = plVar4 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar4 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),(byte)unaff_RBX & plVar9 != (longlong *)0x0) &
         0xffffffff;
}



// FUNCTION 1469c5162 FUN_1469c5162 body=194 status=ok
// SIG undefined FUN_1469c5162(void)

ulonglong FUN_1469c5162(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  undefined8 unaff_RBX;
  ulonglong uVar7;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = *(undefined8 *)(param_1 + 0x2a0);
  local_30 = *param_2;
  local_28 = param_2[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  cVar5 = FUN_1469c5226(uVar3,&local_30);
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (cVar5 == '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x2b0);
    local_40 = *param_2;
    local_38 = param_2[1];
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      UNLOCK();
    }
    uVar6 = FUN_1469c5226(uVar3,&local_40);
    uVar7 = (ulonglong)uVar6;
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469c5226 FUN_1469c5226 body=685 status=ok
// SIG undefined FUN_1469c5226(void)

bool FUN_1469c5226(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  undefined1 local_b0;
  undefined1 local_af;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar2 = *param_2;
  plVar9 = (longlong *)param_2[1];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  iVar6 = -1;
  if ((longlong)*(int *)(param_1 + 0x280) != 0) {
    plVar5 = *(longlong **)(param_1 + 0x278);
    plVar8 = plVar5 + (longlong)*(int *)(param_1 + 0x280) * 4;
    iVar6 = 0;
    local_b8 = param_2;
    do {
      lVar7 = *plVar5;
      local_60 = plVar5[1];
      if (local_60 != 0) {
        LOCK();
        *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
        UNLOCK();
      }
      local_58 = plVar5[2];
      local_50 = (longlong *)plVar5[3];
      if (local_50 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
        UNLOCK();
      }
      local_68 = lVar7;
      FUN_1469dc62e(&local_68);
      param_2 = local_b8;
      if (lVar7 == lVar2) goto LAB_1469c52fe;
      plVar5 = plVar5 + 4;
      iVar6 = iVar6 + 1;
    } while (plVar5 != plVar8);
    iVar6 = -1;
  }
LAB_1469c52fe:
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar9 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  if (iVar6 != -1) {
    lVar2 = *(longlong *)(param_1 + 0x278);
    lVar7 = (longlong)iVar6 * 0x20;
    local_68 = *(longlong *)(lVar2 + lVar7);
    local_60 = *(longlong *)(lVar2 + 8 + lVar7);
    if (local_60 != 0) {
      LOCK();
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      UNLOCK();
    }
    lVar3 = *(longlong *)(lVar2 + lVar7 + 0x10);
    local_50 = *(longlong **)(lVar2 + lVar7 + 0x18);
    if (local_50 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
      plVar9 = local_50;
    }
    local_58 = lVar3;
    FUN_1469dc376((longlong *)(param_1 + 0x278),iVar6);
    uVar4 = *(undefined8 *)(param_1 + 0x268);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    local_78 = lVar3;
    local_70 = plVar9;
    FUN_1469779b4(uVar4,&local_78);
    plVar9 = local_70;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_70 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    local_88 = *param_2;
    local_80 = param_2[1];
    if (local_80 != 0) {
      LOCK();
      *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
      UNLOCK();
    }
    FUN_1469dc3c8(param_1,&local_88);
    FUN_1469dc550(param_1);
    local_98 = *param_2;
    local_90 = param_2[1];
    if (local_90 != 0) {
      LOCK();
      *(int *)(local_90 + 8) = *(int *)(local_90 + 8) + 1;
      UNLOCK();
    }
    FUN_1428f9dd0(&local_98,0);
    if (*(int *)(param_1 + 0x280) == 0) {
      local_b0 = DAT_14c96b1e1;
      local_af = 1;
      local_a8 = 0;
      uStack_a0 = 0;
      FUN_14020e622(param_1);
    }
    FUN_1469dc62e(&local_68);
  }
  plVar9 = (longlong *)param_2[1];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar9 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar6 != -1;
}



// FUNCTION 1469c54d4 FUN_1469c54d4 body=194 status=ok
// SIG undefined FUN_1469c54d4(void)

ulonglong FUN_1469c54d4(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  undefined8 unaff_RBX;
  ulonglong uVar7;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = *(undefined8 *)(param_1 + 0x2a0);
  local_30 = *param_2;
  local_28 = param_2[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  cVar5 = FUN_1469c5598(uVar3,&local_30);
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (cVar5 == '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x2b0);
    local_40 = *param_2;
    local_38 = param_2[1];
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      UNLOCK();
    }
    uVar6 = FUN_1469c5598(uVar3,&local_40);
    uVar7 = (ulonglong)uVar6;
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469c5598 FUN_1469c5598 body=368 status=ok
// SIG undefined FUN_1469c5598(void)

undefined4 FUN_1469c5598(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = *param_2;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(param_1 + 0x280);
  local_80 = param_1;
  if ((longlong)iVar3 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x278);
    uVar9 = 0;
    do {
      lVar6 = *(longlong *)(lVar5 + uVar9);
      local_60 = *(longlong *)(lVar5 + 8 + uVar9);
      if (local_60 != 0) {
        LOCK();
        *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
        UNLOCK();
      }
      lVar10 = lVar5 + uVar9;
      local_58 = *(undefined8 *)(lVar10 + 0x10);
      local_50 = *(longlong *)(lVar10 + 0x18);
      if (local_50 != 0) {
        LOCK();
        *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
        UNLOCK();
      }
      local_68 = lVar6;
      FUN_1469dc62e(&local_68);
      if (lVar6 == lVar4) {
        uVar8 = (undefined4)CONCAT71((int7)((ulonglong)lVar5 >> 8),(int)(~uVar9 >> 5) != 0);
        goto LAB_1469c5651;
      }
      uVar9 = uVar9 + 0x20;
    } while (lVar10 + 0x20 != (longlong)iVar3 * 0x20 + lVar5);
  }
  uVar8 = 0;
LAB_1469c5651:
  if (plVar7 != (longlong *)0x0) {
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
  }
  plVar7 = (longlong *)param_2[1];
  if ((char)uVar8 != '\0') {
    local_78 = *param_2;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    local_70 = plVar7;
    FUN_1469dc1be(local_80,&local_78,1);
    plVar7 = (longlong *)param_2[1];
  }
  if (plVar7 != (longlong *)0x0) {
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
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469c570a FUN_1469c570a body=215 status=ok
// SIG undefined FUN_1469c570a(void)

void FUN_1469c570a(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong)(int)param_2[1] != 0) {
    puVar3 = (undefined8 *)*param_2;
    puVar2 = puVar3 + (longlong)(int)param_2[1] * 2;
    do {
      uVar1 = *(undefined8 *)(param_1 + 0x2a0);
      local_40 = *puVar3;
      local_38 = puVar3[1];
      if (local_38 != 0) {
        LOCK();
        *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
        UNLOCK();
      }
      FUN_1469c4790(uVar1,&local_40);
      puVar3 = puVar3 + 2;
    } while (puVar3 != puVar2);
  }
  if ((longlong)(int)param_2[3] != 0) {
    puVar3 = (undefined8 *)param_2[2];
    puVar2 = puVar3 + (longlong)(int)param_2[3] * 2;
    do {
      uVar1 = *(undefined8 *)(param_1 + 0x2b0);
      local_50 = *puVar3;
      local_48 = puVar3[1];
      if (local_48 != 0) {
        LOCK();
        *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
        UNLOCK();
      }
      FUN_1469c4790(uVar1,&local_50);
      puVar3 = puVar3 + 2;
    } while (puVar3 != puVar2);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469c57e2 FUN_1469c57e2 body=284 status=ok
// SIG undefined FUN_1469c57e2(void)

longlong * FUN_1469c57e2(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  void *local_30;
  uint local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1469c5900(*(undefined8 *)(param_1 + 0x2a0),&local_30);
  if ((longlong)(int)local_28 != 0) {
    *(uint *)(param_2 + 1) = local_28;
    FUN_1469eebc8(param_2,0);
    memmove((void *)*param_2,local_30,(longlong)(int)local_28 << 4);
    local_28 = 0;
  }
  FUN_1469ec9dc(local_30,0);
  if (local_30 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1469c5900(*(undefined8 *)(param_1 + 0x2b0),&local_30);
  lVar2 = (longlong)(int)local_28;
  if (lVar2 != 0) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + local_28;
    if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar1) < local_28) {
      FUN_1469eebc8(param_2,iVar1);
    }
    memmove((void *)((longlong)iVar1 * 0x10 + *param_2),local_30,lVar2 << 4);
    local_28 = 0;
  }
  FUN_1469ec9dc(local_30,0);
  if (local_30 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469c5900 FUN_1469c5900 body=241 status=ok
// SIG undefined FUN_1469c5900(void)

longlong * FUN_1469c5900(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  param_2[1] = 0;
  if ((longlong)*(int *)(param_1 + 0x280) != 0) {
    puVar4 = *(undefined8 **)(param_1 + 0x278);
    puVar3 = puVar4 + (longlong)*(int *)(param_1 + 0x280) * 4;
    do {
      local_50 = *puVar4;
      local_48 = puVar4[1];
      if (local_48 != 0) {
        LOCK();
        *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
        UNLOCK();
      }
      local_40 = puVar4[2];
      local_38 = puVar4[3];
      if (local_38 != 0) {
        LOCK();
        *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
        UNLOCK();
      }
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1469eebc8(param_2,iVar1);
      }
      lVar2 = *param_2;
      *(undefined8 *)(lVar2 + (longlong)iVar1 * 0x10) = local_50;
      *(longlong *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = local_48;
      if (local_48 != 0) {
        LOCK();
        *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
        UNLOCK();
      }
      FUN_1469dc62e(&local_50);
      puVar4 = puVar4 + 4;
    } while (puVar4 != puVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469c59f8 FUN_1469c59f8 body=1159 status=ok
// SIG undefined FUN_1469c59f8(void)

int FUN_1469c59f8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  longlong local_a8;
  ulonglong local_a0;
  undefined1 local_98;
  undefined1 local_97;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong *local_80;
  longlong *local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(int *)(param_1 + 0x298) < 1) {
    iVar11 = 2;
  }
  else {
    local_b0 = (longlong *)(param_1 + 0x290);
    uVar14 = 0;
    iVar11 = 2;
    do {
      lVar3 = *local_b0;
      lVar15 = (longlong)(int)uVar14 * 0x10;
      plVar12 = (longlong *)(lVar3 + lVar15);
      iVar6 = (**(code **)(**(longlong **)(lVar3 + lVar15) + 0x288))();
      if (iVar6 <= iVar11) {
        iVar11 = iVar6;
      }
      iVar7 = (**(code **)(**(longlong **)(lVar3 + lVar15) + 0x240))();
      plVar8 = local_b0;
      if (iVar7 == 1) {
        lVar3 = *plVar12;
        plVar12 = (longlong *)plVar12[1];
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        if (iVar6 == 2) {
LAB_1469c5b38:
          FUN_1469efdae(local_b0,uVar14);
          FUN_1469efe24(plVar8);
          FUN_146a9bbe0(*(undefined8 *)(param_1 + 0x280),uVar14);
        }
        else {
          if (*(int *)(lVar3 + 0x298) == 1) {
            fVar17 = *(float *)(lVar3 + 0x278);
            uVar9 = 1;
LAB_1469c5b72:
            plVar8 = *(longlong **)(lVar3 + 0x290);
            uVar10 = (ulonglong)uVar9;
            fVar16 = 0.0;
            do {
              fVar16 = fVar16 + *(float *)(*plVar8 + 0x278);
              plVar8 = plVar8 + 2;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
          else {
            iVar6 = FUN_146a9e414(*(undefined8 *)(lVar3 + 0x280));
            iVar7 = FUN_146a9e414(*(undefined8 *)(param_1 + 0x280));
            if (iVar6 != iVar7) goto LAB_1469c5aa0;
            uVar9 = *(uint *)(lVar3 + 0x298);
            fVar17 = *(float *)(lVar3 + 0x278);
            fVar16 = 0.0;
            if (0 < (int)uVar9) goto LAB_1469c5b72;
          }
          plVar8 = local_b0;
          FUN_1469efdae(local_b0,uVar14);
          FUN_1469efe24(plVar8);
          FUN_146a9bbe0(*(undefined8 *)(param_1 + 0x280),uVar14);
          if (0 < *(int *)(lVar3 + 0x298)) {
            local_a0 = (ulonglong)uVar14;
            lVar15 = 8;
            lVar13 = 0;
            local_a8 = param_1;
            do {
              local_80 = *(longlong **)(*(longlong *)(lVar3 + 0x290) + -8 + lVar15);
              local_78 = *(longlong **)(*(longlong *)(lVar3 + 0x290) + lVar15);
              if (local_78 == (longlong *)0x0) {
                plVar8 = (longlong *)0x0;
              }
              else {
                LOCK();
                *(int *)(local_78 + 1) = (int)local_78[1] + 1;
                UNLOCK();
                plVar8 = local_78;
              }
              uVar10 = local_a0 + lVar13;
              *(float *)(local_80 + 0x4f) = *(float *)(local_80 + 0x4f) * (fVar17 / fVar16);
              (**(code **)(*local_80 + 0x298))();
              FUN_1469c1f3e(local_a8,&local_80,uVar10 & 0xffffffff);
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
              lVar13 = lVar13 + 1;
              lVar15 = lVar15 + 0x10;
            } while (lVar13 < *(int *)(lVar3 + 0x298));
            uVar14 = uVar14 + (int)lVar13;
            param_1 = local_a8;
          }
        }
LAB_1469c5aa3:
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar8 = plVar12 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
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
      else if (iVar7 == 0) {
        plVar12 = (longlong *)plVar12[1];
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        if (iVar6 == 2) goto LAB_1469c5b38;
LAB_1469c5aa0:
        uVar14 = uVar14 + 1;
        goto LAB_1469c5aa3;
      }
    } while ((int)uVar14 < *(int *)(param_1 + 0x298));
    if ((*(int *)(param_1 + 0x298) == 1) &&
       ((iVar6 = (**(code **)(**(longlong **)*local_b0 + 0x240))(), iVar6 == 1 ||
        (iVar6 = (**(code **)(**(longlong **)*local_b0 + 0x240))(), iVar6 == 2)))) {
      plVar8 = local_b0;
      lVar3 = *(longlong *)*local_b0;
      plVar12 = (longlong *)((longlong *)*local_b0)[1];
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
      }
      FUN_1469efdae(local_b0,0);
      FUN_1469efe24(plVar8);
      FUN_146a9bbe0(*(undefined8 *)(param_1 + 0x280),0);
      uVar4 = *(undefined8 *)(param_1 + 0x280);
      FUN_146a9e414(*(undefined8 *)(lVar3 + 0x280));
      FUN_146a9e40c(uVar4);
      if (0 < (longlong)*(int *)(lVar3 + 0x298)) {
        fVar17 = *(float *)(lVar3 + 0x278);
        fVar16 = 0.0;
        lVar15 = 0;
        do {
          fVar16 = fVar16 + *(float *)(*(longlong *)(*(longlong *)(lVar3 + 0x290) + lVar15) + 0x278)
          ;
          lVar15 = lVar15 + 0x10;
        } while ((longlong)*(int *)(lVar3 + 0x298) * 0x10 != lVar15);
        lVar15 = 0;
        lVar13 = 0;
        do {
          lVar5 = *(longlong *)(lVar3 + 0x290);
          plVar8 = *(longlong **)(lVar5 + lVar15);
          *(float *)(plVar8 + 0x4f) = *(float *)(plVar8 + 0x4f) * (fVar17 / fVar16);
          (**(code **)(*plVar8 + 0x298))();
          FUN_1469c1f3e(param_1,lVar5 + lVar15,0xffffffff);
          lVar13 = lVar13 + 1;
          lVar15 = lVar15 + 0x10;
        } while (lVar13 < *(int *)(lVar3 + 0x298));
      }
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar12 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
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
    if ((((iVar11 == 1) && (iVar11 = 1, *(longlong *)(param_1 + 0x268) != 0)) &&
        (*(longlong *)(param_1 + 0x270) != 0)) && (0 < *(int *)(*(longlong *)(param_1 + 0x270) + 8))
       ) {
      local_98 = DAT_14c96b1e1;
      local_97 = 1;
      local_90 = 0;
      uStack_88 = 0;
      FUN_14020e622(param_1);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar11;
}



// FUNCTION 1469c5e80 thunk_FUN_140a5071c body=5 status=ok
// SIG undefined thunk_FUN_140a5071c(void)

undefined8 * thunk_FUN_140a5071c(undefined8 *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
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
  plVar1 = DAT_14c844840;
  *param_1 = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = DAT_14c96b238;
  *(undefined1 *)((longlong)param_1 + 0x71) = 1;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x11) = 0x101;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa1) = 1;
  *(undefined4 *)(param_1 + 0x15) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  uVar4 = DAT_14c8463f8._4_4_;
  uVar3 = (undefined4)DAT_14c8463f8;
  uVar2 = DAT_14c8463f0._4_4_;
  *(undefined4 *)(param_1 + 0x1c) = (undefined4)DAT_14c8463f0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar2;
  *(undefined4 *)(param_1 + 0x1d) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar4;
  *(undefined1 *)(param_1 + 0x1e) = 1;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
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
  plVar1 = DAT_14c844840;
  param_1[0x2e] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  return param_1;
}



// FUNCTION 1469c5e86 FUN_1469c5e86 body=215 status=ok
// SIG undefined FUN_1469c5e86(void)

undefined8 * FUN_1469c5e86(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *(undefined4 *)(puVar3 + 3) = 0x3f800000;
  *puVar3 = &PTR_FUN_149f01a00;
  *(undefined4 *)(puVar3 + 4) = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  *param_1 = puVar3;
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149f01a50;
  plVar4[2] = (longlong)puVar3;
  param_1[1] = plVar4;
  if (puVar3 != (undefined8 *)0x0) {
    if (plVar4 == (longlong *)0x0) {
      puVar3[1] = puVar3;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      puVar3[1] = puVar3;
      if ((longlong *)puVar3[2] != plVar4) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        plVar2 = (longlong *)puVar3[2];
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))();
          }
        }
        puVar3[2] = plVar4;
      }
      LOCK();
      plVar2 = plVar4 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  }
  return param_1;
}



// FUNCTION 1469c5f5e FUN_1469c5f5e body=101 status=ok
// SIG undefined FUN_1469c5f5e(void)

undefined8 * FUN_1469c5f5e(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  *(undefined4 *)(param_1 + 0x20) = param_3;
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 == (longlong *)0x0) {
LAB_1469c5fb3:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1469c5fb3;
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
    *param_2 = *(undefined8 *)(param_1 + 8);
    param_2[1] = plVar3;
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



// FUNCTION 1469c5fc4 FUN_1469c5fc4 body=116 status=ok
// SIG undefined FUN_1469c5fc4(void)

longlong * FUN_1469c5fc4(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_1469c7f3c(*param_1,*(undefined8 *)param_1[2]);
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



// FUNCTION 1469c6038 FUN_1469c6038 body=713 status=ok
// SIG undefined FUN_1469c6038(void)

void FUN_1469c6038(longlong param_1,undefined8 param_2,uint param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined1 auStack_258 [32];
  undefined8 local_238;
  longlong *local_230;
  undefined1 local_228 [8];
  longlong *local_220;
  undefined1 *local_218;
  undefined1 local_210 [8];
  longlong *local_208;
  undefined8 local_1f8;
  longlong *local_1f0;
  undefined8 local_1e8;
  longlong *local_1e0;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_258;
  iVar4 = FUN_146a9e414(*(undefined8 *)(param_1 + 0x280));
  if ((iVar4 != 0 || (param_3 & 0xfffffffd) != 0) && (iVar4 != 1 || (param_3 & 0xfffffffd) != 1)) {
    iVar4 = *(int *)(param_1 + 0x298);
    iVar6 = FUN_146a9e414(*(undefined8 *)(param_1 + 0x280));
    if (iVar4 != 1) {
      thunk_FUN_140a5071c(&local_1e8);
      FUN_1469c5e86(&local_238);
      FUN_1469c5f5e(local_238,local_228,iVar6 == 0);
      local_218 = local_228;
      FUN_1469eec4e(local_210,".\\Runtime/Slate/Private/Framework/Docking/SDockingSplitter.cpp",
                    0x114);
      FUN_1469c5fc4(local_210,&local_1f8,&local_1e8);
      if (local_208 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_208 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_208)(local_208);
          LOCK();
          piVar2 = (int *)((longlong)local_208 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_208 + 0x10))(local_208);
          }
        }
      }
      if (local_220 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_220 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_220)(local_220);
          LOCK();
          piVar2 = (int *)((longlong)local_220 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_220 + 0x10))(local_220);
          }
        }
      }
      if (local_230 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_230 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_230)(local_230);
          LOCK();
          piVar2 = (int *)((longlong)local_230 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_230 + 0x10))(local_230);
          }
        }
      }
      FUN_140a4ff8c(&local_1e8);
      plVar1 = local_1f0;
      local_1e8 = local_1f8;
      local_1e0 = local_1f0;
      if (local_1f0 == (longlong *)0x0) {
        FUN_1469c87a2(param_1,param_4,&local_1e8);
        plVar7 = (longlong *)0x0;
        uVar8 = local_1f8;
      }
      else {
        LOCK();
        *(int *)(local_1f0 + 1) = (int)local_1f0[1] + 1;
        UNLOCK();
        FUN_1469c87a2(param_1,param_4);
        plVar7 = local_1f0;
        uVar8 = local_1f8;
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
            plVar7 = local_1f0;
            uVar8 = local_1f8;
            if (*piVar2 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
              plVar7 = local_1f0;
              uVar8 = local_1f8;
            }
          }
        }
      }
      FUN_1469c1f3e(uVar8,param_4,0xffffffff);
      FUN_1469c6038(uVar8,param_2,param_3,param_4);
      if (plVar7 != (longlong *)0x0) {
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
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_258);
    }
    FUN_146a9e40c(*(undefined8 *)(param_1 + 0x280),iVar6 == 0);
  }
  iVar4 = -1;
  if ((longlong)*(int *)(param_1 + 0x298) != 0) {
    lVar5 = 0;
    iVar6 = 0;
    do {
      iVar4 = iVar6;
      if (*(longlong *)(*(longlong *)(param_1 + 0x290) + lVar5) == *param_4) break;
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 0x10;
      iVar4 = -1;
    } while ((longlong)*(int *)(param_1 + 0x298) * 0x10 != lVar5);
  }
  if (param_3 < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_258);
  }
  if ((local_40 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    FUN_1469c1f3e(param_1,param_2,iVar4 + 1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469c6316 FUN_1469c6316 body=595 status=ok
// SIG undefined FUN_1469c6316(void)

void FUN_1469c6316(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *param_2;
  plVar8 = *(longlong **)(lVar3 + 0x2c8);
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    lVar10 = 0;
  }
  else {
    iVar6 = (int)plVar8[1];
    lVar10 = 0;
    do {
      if (iVar6 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_1469c6353;
      }
      LOCK();
      iVar4 = (int)plVar8[1];
      bVar13 = iVar6 == iVar4;
      if (bVar13) {
        *(int *)(plVar8 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar13);
    lVar10 = *(longlong *)(lVar3 + 0x2c0);
  }
LAB_1469c6353:
  plVar12 = *(longlong **)(param_1 + 0x10);
  plVar9 = plVar8;
  if (plVar12 != (longlong *)0x0) {
    iVar6 = (int)plVar12[1];
    do {
      if (iVar6 == 0) goto LAB_1469c6360;
      LOCK();
      iVar4 = (int)plVar12[1];
      bVar13 = iVar6 == iVar4;
      if (bVar13) {
        *(int *)(plVar12 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar13);
    lVar3 = *(longlong *)(param_1 + 8);
    LOCK();
    plVar2 = plVar12 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
    if ((lVar10 == lVar3 && lVar10 != 0) &&
       (iVar6 = *(int *)(param_1 + 0x1d0), local_68 = lVar10, local_50 = param_2,
       (longlong)iVar6 != 0)) {
      lVar3 = *(longlong *)(param_1 + 0x1c8);
      uVar7 = 0;
      lVar11 = 0;
      do {
        cVar5 = FUN_1469ffa00(&local_50,lVar3 + uVar7);
        lVar10 = local_68;
        if (cVar5 != '\0') {
          if ((int)(~uVar7 >> 5) != 0) {
            lVar3 = *(longlong *)(param_1 + 0x1c8);
            lVar11 = (lVar11 >> 0x20) * 0x20;
            plVar12 = *(longlong **)(lVar3 + 0x18 + lVar11);
            if (plVar12 != (longlong *)0x0) {
              iVar6 = (int)plVar12[1];
              lVar10 = 0;
              goto LAB_1469c6515;
            }
            plVar12 = (longlong *)0x0;
            lVar10 = 0;
            goto LAB_1469c64f5;
          }
          break;
        }
        lVar11 = lVar11 + 0x100000000;
        uVar7 = uVar7 + 0x20;
      } while ((longlong)iVar6 * 0x20 != uVar7);
    }
  }
  goto LAB_1469c6360;
  while( true ) {
    LOCK();
    iVar4 = (int)plVar12[1];
    bVar13 = iVar6 == iVar4;
    if (bVar13) {
      *(int *)(plVar12 + 1) = iVar6 + 1;
      iVar4 = iVar6;
    }
    iVar6 = iVar4;
    UNLOCK();
    if (bVar13) break;
LAB_1469c6515:
    if (iVar6 == 0) {
      plVar12 = (longlong *)0x0;
      goto LAB_1469c64f5;
    }
  }
  lVar10 = *(longlong *)(lVar3 + lVar11 + 0x10);
LAB_1469c64f5:
  if (plVar12 == plVar8) {
    if (plVar8 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      LOCK();
      plVar8 = plVar12 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
  }
  else {
    plVar9 = plVar12;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar8 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
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
  }
LAB_1469c6360:
  local_60 = *param_2;
  local_58 = param_2[1];
  if (local_58 != 0) {
    LOCK();
    *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
    UNLOCK();
  }
  FUN_1469d61bc(lVar10,&local_60);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar9 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469c6584 FUN_1469c6584 body=38 status=ok
// SIG undefined FUN_1469c6584(void)

void FUN_1469c6584(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x2f1) = 0;
  FUN_1469c65aa();
  FUN_1469c2ef8(param_1,3);
  return;
}



// FUNCTION 1469c65aa FUN_1469c65aa body=197 status=ok
// SIG undefined FUN_1469c65aa(void)

void FUN_1469c65aa(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_58 [40];
  undefined1 local_30;
  undefined1 local_2f;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = DAT_14c96b238;
  local_2f = 1;
  local_28 = 0;
  uStack_20 = 0;
  FUN_14020e622();
  plVar3 = *(longlong **)(param_1 + 0x270);
  if (plVar3 != (longlong *)0x0) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1469c6652;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
    plVar4 = *(longlong **)(param_1 + 0x268);
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
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x290))(plVar4);
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
LAB_1469c6652:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469c6670 FUN_1469c6670 body=430 status=ok
// SIG undefined FUN_1469c6670(void)

longlong * FUN_1469c6670(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_78 [32];
  void *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  param_2[1] = 0;
  if (0 < *(int *)(param_1 + 0x298)) {
    lVar9 = 0;
    lVar8 = 0;
    do {
      lVar10 = *(longlong *)(param_1 + 0x290);
      iVar7 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar7 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar7 + 1U) {
        FUN_1469efd28(param_2,iVar7);
      }
      lVar3 = *param_2;
      *(undefined8 *)(lVar3 + (longlong)iVar7 * 0x10) = *(undefined8 *)(lVar10 + lVar9);
      lVar4 = *(longlong *)(lVar10 + 8 + lVar9);
      *(longlong *)(lVar3 + 8 + (longlong)iVar7 * 0x10) = lVar4;
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      iVar7 = (**(code **)(**(longlong **)(lVar10 + lVar9) + 0x240))();
      if ((iVar7 == 1) ||
         (iVar7 = (**(code **)(**(longlong **)(lVar10 + lVar9) + 0x240))(), iVar7 == 2)) {
        uVar5 = *(undefined8 *)(lVar10 + lVar9);
        plVar6 = *(longlong **)(lVar10 + 8 + lVar9);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
        }
        FUN_1469c6670(uVar5,&local_58);
        lVar10 = (longlong)(int)local_50;
        if (lVar10 != 0) {
          iVar7 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar7 + local_50;
          if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar7) < local_50) {
            FUN_1469efd28(param_2,iVar7);
          }
          memmove((void *)((longlong)iVar7 * 0x10 + *param_2),local_58,lVar10 << 4);
          local_50 = 0;
        }
        FUN_1469eeec9(local_58,0);
        if (local_58 != (void *)0x0) {
          FUN_1400020a8();
        }
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
      }
      lVar8 = lVar8 + 1;
      lVar9 = lVar9 + 0x10;
    } while (lVar8 < *(int *)(param_1 + 0x298));
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1469c6820 FUN_1469c6820 body=251 status=ok
// SIG undefined FUN_1469c6820(void)

longlong * FUN_1469c6820(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = 0;
  param_2[1] = 0;
  if ((longlong)*(int *)(param_1 + 0x280) != 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x278);
    puVar4 = puVar3 + (longlong)*(int *)(param_1 + 0x280) * 4;
    do {
      local_58 = *puVar3;
      local_50 = puVar3[1];
      if (local_50 != 0) {
        LOCK();
        *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
        UNLOCK();
      }
      local_48 = puVar3[2];
      local_40 = puVar3[3];
      if (local_40 != 0) {
        LOCK();
        *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
        UNLOCK();
      }
      FUN_146a584e0(local_58,&local_68);
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_1469fd0c2(param_2,iVar2);
      }
      puVar1 = (undefined4 *)(*param_2 + (longlong)iVar2 * 0x10);
      *puVar1 = local_68;
      puVar1[1] = uStack_64;
      puVar1[2] = uStack_60;
      puVar1[3] = uStack_5c;
      FUN_1469dc62e(&local_58);
      puVar3 = puVar3 + 4;
    } while (puVar3 != puVar4);
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469c691c FUN_1469c691c body=120 status=ok
// SIG undefined FUN_1469c691c(void)

void FUN_1469c691c(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0x421c000000000000;
  uStack_30 = 0;
  local_28 = 1;
  local_20 = 0;
  uStack_18 = 0;
  if (*(longlong *)(param_1 + 0x200) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x200) + 8);
  }
  FUN_140a58e4a(param_1 + 0x218,uVar1,&local_38);
  FUN_1449db362(&local_20);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469c6996 FUN_1469c6996 body=150 status=ok
// SIG undefined FUN_1469c6996(void)

undefined8 * FUN_1469c6996(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1469c9188(param_1,&local_28,1);
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



// FUNCTION 1469c6a30 FUN_1469c6a30 body=436 status=ok
// SIG undefined FUN_1469c6a30(void)

void FUN_1469c6a30(longlong param_1,int param_2,char param_3,char param_4)

{
  float fVar1;
  longlong lVar2;
  undefined8 *puVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_b8 [40];
  float local_90 [4];
  undefined1 auStack_80 [8];
  undefined8 local_78 [2];
  float local_68 [6];
  undefined8 local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c98e8bc) && (FUN_144b3d300(&DAT_14c98e8bc), DAT_14c98e8bc == -1)) {
    lVar2 = (**(code **)(*DAT_14c98e618 + 0x48))();
    DAT_14c98e8b8 = *(float *)(lVar2 + 0x20);
    _Init_thread_footer(&DAT_14c98e8bc);
  }
  fVar6 = DAT_14c98e8b8;
  *(undefined1 *)(param_1 + 0x378) = 1;
  lVar2 = *(longlong *)(param_1 + 0x2b0);
  fVar1 = *(float *)(lVar2 + 0x34);
  if (param_2 == 1) {
    fVar6 = 0.0;
    if (param_3 == '\0') {
      fVar6 = 128.0;
      fVar5 = 2.0;
    }
    else {
      fVar5 = 25.0;
    }
    puVar3 = local_50;
    fVar6 = fVar6 + *(float *)(lVar2 + 0x30);
    local_68[0] = *(float *)(lVar2 + 0x28) + 8.0;
    pfVar4 = local_68;
  }
  else {
    if (param_4 == '\0') {
      fVar5 = 0.0;
    }
    else {
      fVar5 = 5.0;
    }
    if (param_3 == '\0') {
      local_90[0] = 25.0;
    }
    else {
      local_90[0] = fVar6 + 12.0;
    }
    puVar3 = (undefined8 *)(auStack_80 + 8);
    fVar6 = *(float *)(lVar2 + 0x30) + 0.0;
    local_90[0] = local_90[0] + *(float *)(lVar2 + 0x28);
    pfVar4 = local_90;
  }
  pfVar4[1] = *(float *)(lVar2 + 0x2c) + fVar5;
  pfVar4[2] = fVar6;
  pfVar4[3] = fVar1 + 0.0;
  *(undefined1 *)(pfVar4 + 4) = 1;
  *puVar3 = 0;
  puVar3[1] = 0;
  FUN_140a55872(lVar2 + 0x28,lVar2 + 0x20);
  FUN_1449db362(puVar3);
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469c6be6 FUN_1469c6be6 body=147 status=ok
// SIG undefined FUN_1469c6be6(void)

undefined8 * FUN_1469c6be6(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1469c9188(param_1,&local_28,0);
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



// FUNCTION 1469c6c7c FUN_1469c6c7c body=808 status=ok
// SIG undefined FUN_1469c6c7c(void)

void FUN_1469c6c7c(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((((param_1[0x4d] == 0) || (plVar9 = (longlong *)param_1[0x4e], plVar9 == (longlong *)0x0)) ||
      ((int)plVar9[1] < 1)) || ((int)plVar9[1] < 1)) {
    iVar6 = (**(code **)(*param_1 + 0x240))(param_1);
    if ((iVar6 != 2) || (plVar9 = (longlong *)param_1[2], plVar9 == (longlong *)0x0))
    goto LAB_1469c6f74;
    iVar6 = (int)plVar9[1];
    do {
      if (iVar6 == 0) goto LAB_1469c6f74;
      LOCK();
      iVar5 = (int)plVar9[1];
      bVar13 = iVar6 == iVar5;
      if (bVar13) {
        *(int *)(plVar9 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar13);
    lVar11 = param_1[1];
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    plVar8 = plVar9 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
    LOCK();
    plVar8 = plVar9 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    plVar10 = plVar9;
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        lVar7 = *plVar9;
        goto LAB_1469c6d69;
      }
    }
  }
  else {
    plVar8 = (longlong *)0x0;
    iVar6 = (int)plVar9[1];
    do {
      iVar5 = iVar6;
      if (iVar5 == 0) {
        plVar9 = (longlong *)0x0;
        goto LAB_1469c6d73;
      }
      LOCK();
      iVar6 = (int)plVar9[1];
      bVar13 = iVar5 == iVar6;
      if (bVar13) {
        *(int *)(plVar9 + 1) = iVar5 + 1;
        iVar6 = iVar5;
      }
      UNLOCK();
    } while (!bVar13);
    plVar8 = (longlong *)param_1[0x4d];
LAB_1469c6d73:
    (**(code **)(*plVar8 + 600))(plVar8,&local_48);
    plVar10 = plStack_40;
    lVar11 = local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      LOCK();
      plVar8 = plVar10 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
      plVar8 = plStack_40;
      if (plStack_40 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_40 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plStack_40)(plStack_40);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
    }
    if (iVar5 != 0) {
      LOCK();
      plVar8 = plVar9 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          lVar7 = *plVar9;
LAB_1469c6d69:
          (**(code **)(lVar7 + 0x10))(plVar9);
        }
      }
    }
  }
  if (((lVar11 != 0) && (*(longlong *)(lVar11 + 0x2c0) != 0)) &&
     ((plVar9 = *(longlong **)(lVar11 + 0x2c8), plVar9 != (longlong *)0x0 && (0 < (int)plVar9[1]))))
  {
    iVar6 = (int)plVar9[1];
    do {
      if (iVar6 == 0) goto LAB_1469c6f52;
      LOCK();
      iVar5 = (int)plVar9[1];
      bVar13 = iVar6 == iVar5;
      if (bVar13) {
        *(int *)(plVar9 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar13);
    lVar11 = *(longlong *)(lVar11 + 0x2c0);
    LOCK();
    plVar8 = plVar9 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
    if ((lVar11 != 0) && (lVar11 = param_1[0x53], (longlong)(int)lVar11 != 0)) {
      lVar7 = param_1[0x52];
      lVar12 = 0;
      do {
        iVar6 = (**(code **)(**(longlong **)(lVar7 + lVar12) + 0x240))();
        plVar9 = *(longlong **)(lVar7 + lVar12);
        if ((iVar6 == 0) && (*(char *)((longlong)plVar9 + 0x39) == DAT_14c96b238)) {
          plVar8 = *(longlong **)(lVar7 + 8 + lVar12);
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
          }
          cVar4 = FUN_14692f5de(plVar9 + 0x5f);
          if (cVar4 != '\0') {
            FUN_1469c8b9e(plVar9,0);
          }
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            plVar9 = plVar8 + 1;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)*plVar9 == 0) {
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
          break;
        }
        iVar6 = (**(code **)(*plVar9 + 0x240))(plVar9);
        if (iVar6 == 1) {
          uVar3 = *(undefined8 *)(lVar7 + lVar12);
          plVar9 = *(longlong **)(lVar7 + 8 + lVar12);
          if (plVar9 == (longlong *)0x0) {
            FUN_1469c6c7c(uVar3);
          }
          else {
            LOCK();
            *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
            UNLOCK();
            FUN_1469c6c7c(uVar3);
            LOCK();
            plVar8 = plVar9 + 1;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)*plVar8 == 0) {
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
        }
        lVar12 = lVar12 + 0x10;
      } while ((longlong)(int)lVar11 * 0x10 != lVar12);
    }
  }
LAB_1469c6f52:
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar10 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
LAB_1469c6f74:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469c6fa6 FUN_1469c6fa6 body=2240 status=ok
// SIG undefined FUN_1469c6fa6(void)

undefined4
FUN_1469c6fa6(undefined8 param_1,undefined8 param_2,float *param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_188 [32];
  undefined1 local_168;
  undefined8 *local_160;
  undefined1 local_158;
  undefined4 local_150;
  float *local_148;
  undefined8 uStack_140;
  float *local_138;
  undefined8 uStack_130;
  float *local_128;
  undefined8 uStack_120;
  float *local_118;
  undefined8 uStack_110;
  float *local_108;
  uint local_100;
  uint local_fc;
  float *local_f8;
  uint local_f0;
  uint local_ec;
  float *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  float local_d0;
  undefined8 local_cc;
  undefined8 local_c4;
  float local_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  undefined8 local_ac;
  byte local_a4;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  fVar2 = *param_3;
  fVar3 = param_3[1];
  uVar4 = *(undefined8 *)param_3;
  fVar8 = fVar2 * 0.3;
  if (150.0 <= fVar8) {
    fVar8 = 150.0;
  }
  if (fVar8 <= 5.0) {
    fVar8 = 5.0;
  }
  fVar11 = fVar3 * 0.3;
  if (150.0 <= fVar11) {
    fVar11 = 150.0;
  }
  if (fVar11 <= 5.0) {
    fVar11 = 5.0;
  }
  fVar10 = fVar2 - fVar8;
  local_e8 = (float *)0x0;
  uStack_e0._0_4_ = 1;
  uStack_e0._4_4_ = 0;
  FUN_140752556(&local_e8,0);
  iVar5 = (uint)uStack_e0;
  *local_e8 = fVar8;
  local_e8[1] = fVar11;
  lVar7 = (longlong)(int)(uint)uStack_e0;
  uStack_e0._0_4_ = (uint)uStack_e0 + 1;
  if (uStack_e0._4_4_ < (uint)uStack_e0) {
    FUN_140752556(&local_e8,iVar5);
  }
  uVar6 = (uint)uStack_e0;
  fVar9 = fVar3 - fVar11;
  local_e8[lVar7 * 2] = fVar10;
  local_e8[lVar7 * 2 + 1] = fVar11;
  lVar7 = (longlong)(int)(uint)uStack_e0;
  uStack_e0._0_4_ = (uint)uStack_e0 + 1;
  if (uStack_e0._4_4_ < (uint)uStack_e0) {
    FUN_140752556(&local_e8,uVar6);
  }
  uVar6 = (uint)uStack_e0;
  local_e8[lVar7 * 2] = fVar10;
  local_e8[lVar7 * 2 + 1] = fVar9;
  lVar7 = (longlong)(int)(uint)uStack_e0;
  uStack_e0._0_4_ = (uint)uStack_e0 + 1;
  if (uStack_e0._4_4_ < (uint)uStack_e0) {
    FUN_140752556(&local_e8,uVar6);
  }
  uVar6 = (uint)uStack_e0;
  local_e8[lVar7 * 2] = fVar8;
  local_e8[lVar7 * 2 + 1] = fVar9;
  lVar7 = (longlong)(int)(uint)uStack_e0;
  uStack_e0._0_4_ = (uint)uStack_e0 + 1;
  if (uStack_e0._4_4_ < (uint)uStack_e0) {
    FUN_140752556(&local_e8,uVar6);
  }
  local_e8[lVar7 * 2] = fVar8;
  local_e8[lVar7 * 2 + 1] = fVar11;
  local_f8 = local_e8;
  local_f0 = (uint)uStack_e0;
  local_ec = uStack_e0._4_4_;
  local_e8 = (float *)0x0;
  uStack_e0 = 0;
  local_c4 = *(undefined8 *)param_3;
  local_d8 = *(undefined8 *)(param_3 + 3);
  local_d0 = param_3[2];
  local_cc = 0;
  local_bc = param_3[7];
  fStack_b8 = param_3[8];
  fStack_b4 = param_3[9];
  fStack_b0 = param_3[10];
  local_ac = *(undefined8 *)(param_3 + 0xb);
  local_a4 = *(char *)(param_3 + 0xd) * '\x02' & 2;
  local_160 = &DAT_149e1e2f8;
  local_150 = 0x3f800000;
  local_158 = 1;
  local_168 = 0;
  FUN_146955074(param_5,param_6);
  if (local_e8 != (float *)0x0) {
    FUN_1400020a8();
  }
  local_e8 = (float *)0x0;
  uStack_e0._0_4_ = 1;
  uStack_e0._4_4_ = 0;
  FUN_140752556(&local_e8,0);
  iVar5 = (uint)uStack_e0;
  local_e8[0] = 0.0;
  local_e8[1] = 0.0;
  lVar7 = (longlong)(int)(uint)uStack_e0;
  uStack_e0._0_4_ = (uint)uStack_e0 + 1;
  if (uStack_e0._4_4_ < (uint)uStack_e0) {
    FUN_140752556(&local_e8,iVar5);
  }
  uVar6 = (uint)uStack_e0;
  local_e8[lVar7 * 2] = fVar2;
  local_e8[lVar7 * 2 + 1] = 0.0;
  lVar7 = (longlong)(int)(uint)uStack_e0;
  uStack_e0._0_4_ = (uint)uStack_e0 + 1;
  if (uStack_e0._4_4_ < (uint)uStack_e0) {
    FUN_140752556(&local_e8,uVar6);
  }
  uVar6 = (uint)uStack_e0;
  local_e8[lVar7 * 2] = fVar2;
  local_e8[lVar7 * 2 + 1] = fVar3;
  lVar7 = (longlong)(int)(uint)uStack_e0;
  uStack_e0._0_4_ = (uint)uStack_e0 + 1;
  if (uStack_e0._4_4_ < (uint)uStack_e0) {
    FUN_140752556(&local_e8,uVar6);
  }
  uVar6 = (uint)uStack_e0;
  pfVar1 = param_3 + 7;
  local_e8[lVar7 * 2] = 0.0;
  local_e8[lVar7 * 2 + 1] = fVar3;
  lVar7 = (longlong)(int)(uint)uStack_e0;
  uStack_e0._0_4_ = (uint)uStack_e0 + 1;
  if (uStack_e0._4_4_ < (uint)uStack_e0) {
    FUN_140752556(&local_e8,uVar6);
  }
  (local_e8 + lVar7 * 2)[0] = 0.0;
  (local_e8 + lVar7 * 2)[1] = 0.0;
  local_108 = local_e8;
  local_100 = (uint)uStack_e0;
  local_fc = uStack_e0._4_4_;
  local_e8 = (float *)0x0;
  uStack_e0 = 0;
  local_c4 = *(undefined8 *)param_3;
  local_d8 = *(undefined8 *)(param_3 + 3);
  local_d0 = param_3[2];
  local_cc = 0;
  local_bc = *pfVar1;
  fStack_b8 = param_3[8];
  fStack_b4 = param_3[9];
  fStack_b0 = param_3[10];
  local_ac = *(undefined8 *)(param_3 + 0xb);
  local_a4 = *(char *)(param_3 + 0xd) * '\x02' & 2;
  local_160 = &DAT_149e1e2f8;
  local_150 = 0x3f800000;
  local_158 = 1;
  local_168 = 0;
  FUN_146955074(param_5,param_6);
  if (local_e8 != (float *)0x0) {
    FUN_1400020a8();
  }
  local_e8 = (float *)0x0;
  uStack_e0._0_4_ = 1;
  uStack_e0._4_4_ = 0;
  FUN_140752556(&local_e8,0);
  iVar5 = (uint)uStack_e0;
  local_e8[0] = 0.0;
  local_e8[1] = 0.0;
  lVar7 = (longlong)(int)(uint)uStack_e0;
  uStack_e0._0_4_ = (uint)uStack_e0 + 1;
  if (uStack_e0._4_4_ < (uint)uStack_e0) {
    FUN_140752556(&local_e8,iVar5);
  }
  local_e8[lVar7 * 2] = fVar8;
  local_e8[lVar7 * 2 + 1] = fVar11;
  local_118 = local_e8;
  uStack_110 = uStack_e0;
  local_e8 = (float *)0x0;
  uStack_e0 = 0;
  local_c4 = *(undefined8 *)param_3;
  local_d8 = *(undefined8 *)(param_3 + 3);
  local_d0 = param_3[2];
  local_cc = 0;
  local_bc = *pfVar1;
  fStack_b8 = param_3[8];
  fStack_b4 = param_3[9];
  fStack_b0 = param_3[10];
  local_ac = *(undefined8 *)(param_3 + 0xb);
  local_a4 = *(char *)(param_3 + 0xd) * '\x02' & 2;
  local_160 = &DAT_149e1e2f8;
  local_150 = 0x3f800000;
  local_158 = 1;
  local_168 = 0;
  FUN_146955074(param_5,param_6);
  if (local_e8 != (float *)0x0) {
    FUN_1400020a8();
  }
  local_e8 = (float *)0x0;
  uStack_e0._0_4_ = 1;
  uStack_e0._4_4_ = 0;
  FUN_140752556(&local_e8,0);
  iVar5 = (uint)uStack_e0;
  *(ulonglong *)local_e8 = (ulonglong)(uint)fVar2;
  lVar7 = (longlong)(int)(uint)uStack_e0;
  uStack_e0._0_4_ = (uint)uStack_e0 + 1;
  if (uStack_e0._4_4_ < (uint)uStack_e0) {
    FUN_140752556(&local_e8,iVar5);
  }
  *(ulonglong *)(local_e8 + lVar7 * 2) = CONCAT44(fVar11,fVar10);
  local_128 = local_e8;
  uStack_120 = uStack_e0;
  local_e8 = (float *)0x0;
  uStack_e0 = 0;
  local_c4 = *(undefined8 *)param_3;
  local_d8 = *(undefined8 *)(param_3 + 3);
  local_d0 = param_3[2];
  local_cc = 0;
  local_bc = *pfVar1;
  fStack_b8 = param_3[8];
  fStack_b4 = param_3[9];
  fStack_b0 = param_3[10];
  local_ac = *(undefined8 *)(param_3 + 0xb);
  local_a4 = *(char *)(param_3 + 0xd) * '\x02' & 2;
  local_160 = &DAT_149e1e2f8;
  local_150 = 0x3f800000;
  local_158 = 1;
  local_168 = 0;
  FUN_146955074(param_5,param_6);
  if (local_e8 != (float *)0x0) {
    FUN_1400020a8();
  }
  local_e8 = (float *)0x0;
  uStack_e0._0_4_ = 1;
  uStack_e0._4_4_ = 0;
  FUN_140752556(&local_e8,0);
  iVar5 = (uint)uStack_e0;
  *(undefined8 *)local_e8 = uVar4;
  lVar7 = (longlong)(int)(uint)uStack_e0;
  uStack_e0._0_4_ = (uint)uStack_e0 + 1;
  if (uStack_e0._4_4_ < (uint)uStack_e0) {
    FUN_140752556(&local_e8,iVar5);
  }
  *(ulonglong *)(local_e8 + lVar7 * 2) = CONCAT44(fVar9,fVar10);
  local_138 = local_e8;
  uStack_130 = uStack_e0;
  local_e8 = (float *)0x0;
  uStack_e0 = 0;
  local_c4 = *(undefined8 *)param_3;
  local_d8 = *(undefined8 *)(param_3 + 3);
  local_d0 = param_3[2];
  local_cc = 0;
  local_bc = *pfVar1;
  fStack_b8 = param_3[8];
  fStack_b4 = param_3[9];
  fStack_b0 = param_3[10];
  local_ac = *(undefined8 *)(param_3 + 0xb);
  local_a4 = *(char *)(param_3 + 0xd) * '\x02' & 2;
  local_160 = &DAT_149e1e2f8;
  local_150 = 0x3f800000;
  local_158 = 1;
  local_168 = 0;
  FUN_146955074(param_5,param_6);
  if (local_e8 != (float *)0x0) {
    FUN_1400020a8();
  }
  local_e8 = (float *)0x0;
  uStack_e0._0_4_ = 1;
  uStack_e0._4_4_ = 0;
  FUN_140752556(&local_e8,0);
  iVar5 = (uint)uStack_e0;
  *(ulonglong *)local_e8 = (ulonglong)(uint)fVar3 << 0x20;
  lVar7 = (longlong)(int)(uint)uStack_e0;
  uStack_e0._0_4_ = (uint)uStack_e0 + 1;
  if (uStack_e0._4_4_ < (uint)uStack_e0) {
    FUN_140752556(&local_e8,iVar5);
  }
  *(ulonglong *)(local_e8 + lVar7 * 2) = CONCAT44(fVar9,fVar8);
  local_148 = local_e8;
  uStack_140 = uStack_e0;
  local_e8 = (float *)0x0;
  uStack_e0 = 0;
  local_c4 = *(undefined8 *)param_3;
  local_d8 = *(undefined8 *)(param_3 + 3);
  local_d0 = param_3[2];
  local_cc = 0;
  local_bc = *pfVar1;
  fStack_b8 = param_3[8];
  fStack_b4 = param_3[9];
  fStack_b0 = param_3[10];
  local_ac = *(undefined8 *)(param_3 + 0xb);
  local_a4 = *(char *)(param_3 + 0xd) * '\x02' & 2;
  local_160 = &DAT_149e1e2f8;
  local_150 = 0x3f800000;
  local_158 = 1;
  local_168 = 0;
  FUN_146955074(param_5,param_6);
  if (local_e8 != (float *)0x0) {
    FUN_1400020a8();
  }
  if ((local_a0 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return param_6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469c787e FUN_1469c787e body=181 status=ok
// SIG undefined FUN_1469c787e(void)

void FUN_1469c787e(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = *(longlong **)(param_2 + 0x78);
  if (plVar2 != (longlong *)0x0) {
    FUN_1469ee30c();
    cVar5 = (**(code **)(*plVar2 + 0x50))(plVar2,&DAT_14c98e9e8);
    if (cVar5 != '\0') {
      lVar3 = *(longlong *)(param_2 + 0x78);
      puVar4 = *(undefined8 **)(param_2 + 0x80);
      if (puVar4 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
        UNLOCK();
      }
      if (lVar3 != 0) {
        local_38 = 0;
        uStack_30 = 0;
        local_28 = 0;
        FUN_1469bd910(lVar3,&local_38,param_2);
      }
      if (puVar4 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar4 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar4)(puVar4);
          LOCK();
          piVar1 = (int *)((longlong)puVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
          }
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



// FUNCTION 1469c7944 FUN_1469c7944 body=522 status=ok
// SIG undefined FUN_1469c7944(void)

undefined1 * FUN_1469c7944(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar8 = *(longlong **)(param_4 + 0x78);
  if (plVar8 == (longlong *)0x0) {
LAB_1469c7972:
    plVar8 = (longlong *)0x0;
  }
  else {
    FUN_1469ee30c();
    cVar6 = (**(code **)(*plVar8 + 0x50))(plVar8);
    if (cVar6 == '\0') goto LAB_1469c7972;
    lVar3 = *(longlong *)(param_4 + 0x78);
    plVar8 = *(longlong **)(param_4 + 0x80);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    if (lVar3 != 0) {
      local_68 = 0;
      plVar4 = *(longlong **)(param_1 + 0x1e8);
      local_60 = plVar4;
      if (plVar4 == (longlong *)0x0) {
LAB_1469c7a5c:
        FUN_1428f8d22(local_58,&local_68,param_3,param_4);
      }
      else {
        iVar7 = (int)plVar4[1];
        do {
          if (iVar7 == 0) {
            local_60 = (longlong *)0x0;
            goto LAB_1469c7a5c;
          }
          LOCK();
          iVar5 = (int)plVar4[1];
          bVar9 = iVar7 == iVar5;
          if (bVar9) {
            *(int *)(plVar4 + 1) = iVar7 + 1;
            iVar5 = iVar7;
          }
          iVar7 = iVar5;
          UNLOCK();
        } while (!bVar9);
        if (plVar4 == (longlong *)0x0) goto LAB_1469c7a5c;
        local_68 = *(undefined8 *)(param_1 + 0x1e0);
        FUN_1428f8d22(local_58,&local_68,param_3,param_4);
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
      FUN_1469bd910(lVar3,local_58,param_4);
      *param_2 = 1;
      param_2[0x20] = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      memset(param_2 + 0x28,0,0x88);
      *(undefined4 *)(param_2 + 0xb0) = 0x20702;
      param_2[0xb4] = 0;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_50 + 0x10))();
        }
      }
      goto LAB_1469c79a3;
    }
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_1469c79a3:
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1469c7b52 FUN_1469c7b52 body=508 status=ok
// SIG undefined FUN_1469c7b52(void)

undefined1 * FUN_1469c7b52(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar3 = *(longlong **)(param_4 + 0x78);
  if (plVar3 != (longlong *)0x0) {
    FUN_1469ee30c();
    cVar6 = (**(code **)(*plVar3 + 0x50))(plVar3);
    if (cVar6 != '\0') {
      lVar4 = *(longlong *)(param_4 + 0x78);
      plVar3 = *(longlong **)(param_4 + 0x80);
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
      if (lVar4 != 0) {
        local_68 = 0;
        plVar3 = *(longlong **)(param_1 + 0x1e8);
        local_60 = plVar3;
        if (plVar3 == (longlong *)0x0) {
LAB_1469c7cb3:
          FUN_1428f8d22(&local_58,&local_68,param_3,param_4);
        }
        else {
          iVar7 = (int)plVar3[1];
          do {
            if (iVar7 == 0) {
              local_60 = (longlong *)0x0;
              goto LAB_1469c7cb3;
            }
            LOCK();
            iVar5 = (int)plVar3[1];
            bVar8 = iVar7 == iVar5;
            if (bVar8) {
              *(int *)(plVar3 + 1) = iVar7 + 1;
              iVar5 = iVar7;
            }
            iVar7 = iVar5;
            UNLOCK();
          } while (!bVar8);
          if (plVar3 == (longlong *)0x0) goto LAB_1469c7cb3;
          local_68 = *(undefined8 *)(param_1 + 0x1e0);
          FUN_1428f8d22(&local_58,&local_68,param_3,param_4);
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
        plVar3 = local_50;
        if (local_50 != (longlong *)0x0) {
          iVar7 = (int)local_50[1];
          do {
            if (iVar7 == 0) {
              bVar8 = true;
              goto LAB_1469c7d2b;
            }
            LOCK();
            iVar5 = (int)local_50[1];
            bVar8 = iVar7 == iVar5;
            if (bVar8) {
              *(int *)(local_50 + 1) = iVar7 + 1;
              iVar5 = iVar7;
            }
            iVar7 = iVar5;
            UNLOCK();
          } while (!bVar8);
          bVar8 = local_58 == (longlong *)0x0;
          if (!bVar8) {
            (**(code **)(*local_58 + 0x270))(local_58,param_2,local_48,param_4);
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
LAB_1469c7d2b:
          if (local_50 != (longlong *)0x0) {
            LOCK();
            piVar2 = (int *)((longlong)local_50 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_50 + 0x10))();
            }
          }
          if (!bVar8) goto LAB_1469c7bad;
        }
      }
    }
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_1469c7bad:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1469c7d50 FUN_1469c7d50 body=136 status=ok
// SIG undefined FUN_1469c7d50(void)

undefined8 * FUN_1469c7d50(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  
  if (((*(longlong *)(param_1 + 0x268) == 0) ||
      (plVar5 = *(longlong **)(param_1 + 0x270), plVar5 == (longlong *)0x0)) || ((int)plVar5[1] < 1)
     ) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar3 = (int)plVar5[1];
    plVar4 = (longlong *)0x0;
    do {
      if (iVar3 == 0) {
        plVar5 = (longlong *)0x0;
        goto LAB_1469c7da5;
      }
      LOCK();
      iVar2 = (int)plVar5[1];
      bVar6 = iVar3 == iVar2;
      if (bVar6) {
        *(int *)(plVar5 + 1) = iVar3 + 1;
        iVar2 = iVar3;
      }
      iVar3 = iVar2;
      UNLOCK();
    } while (!bVar6);
    plVar4 = *(longlong **)(param_1 + 0x268);
LAB_1469c7da5:
    (**(code **)(*plVar4 + 600))(plVar4,param_2);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar5 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
  }
  return param_2;
}



// FUNCTION 1469c7dd8 FUN_1469c7dd8 body=257 status=ok
// SIG undefined FUN_1469c7dd8(void)

undefined8 * FUN_1469c7dd8(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(longlong *)(param_1 + 0x268) == 0) ||
      (plVar5 = *(longlong **)(param_1 + 0x270), plVar5 == (longlong *)0x0)) || ((int)plVar5[1] < 1)
     ) {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  iVar3 = (int)plVar5[1];
  plVar4 = (longlong *)0x0;
  do {
    if (iVar3 == 0) {
      plVar5 = (longlong *)0x0;
      goto LAB_1469c7e4b;
    }
    LOCK();
    iVar2 = (int)plVar5[1];
    bVar6 = iVar3 == iVar2;
    if (bVar6) {
      *(int *)(plVar5 + 1) = iVar3 + 1;
      iVar2 = iVar3;
    }
    iVar3 = iVar2;
    UNLOCK();
  } while (!bVar6);
  plVar4 = *(longlong **)(param_1 + 0x268);
LAB_1469c7e4b:
  (**(code **)(*plVar4 + 600))(plVar4,&local_30);
  *param_2 = local_30;
  param_2[1] = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_28 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar1 = (int *)((longlong)local_28 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_28 + 0x10))(local_28);
        }
      }
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469c7eda FUN_1469c7eda body=69 status=ok
// SIG undefined FUN_1469c7eda(void)

undefined1 * FUN_1469c7eda(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 1469c7f3c FUN_1469c7f3c body=439 status=ok
// SIG undefined FUN_1469c7f3c(void)

void FUN_1469c7f3c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_2b8 [32];
  undefined1 *local_298;
  undefined1 local_281;
  longlong local_280;
  longlong *local_278;
  undefined8 local_268;
  longlong *local_260;
  undefined8 local_258;
  longlong *local_250;
  undefined1 local_248 [448];
  undefined4 local_88;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  FUN_1469c18d8(local_248);
  local_88 = *(undefined4 *)(*param_2 + 0x20);
  local_298 = &local_281;
  FUN_1469edd7a(&local_280,"SSplitter",
                ".\\Runtime/Slate/Private/Framework/Docking/SDockingSplitter.cpp",0xf);
  if (local_278 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_278 + 1) = (int)local_278[1] + 1;
    UNLOCK();
  }
  plVar3 = (longlong *)param_1[0x51];
  param_1[0x50] = local_280;
  param_1[0x51] = (longlong)local_278;
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
  FUN_1469c19be(&local_280,&local_268,local_248);
  local_258 = local_268;
  local_250 = local_260;
  if (local_260 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_260 + 1) = (int)local_260[1] + 1;
    UNLOCK();
  }
  FUN_140a58896(param_1 + 0x3c,&local_258);
  plVar3 = local_250;
  if (local_250 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_250 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_250)(local_250);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_260 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_260 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_260)(local_260);
      LOCK();
      piVar2 = (int *)((longlong)local_260 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_260 + 0x10))(local_260);
      }
    }
  }
  if (local_278 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_278 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_278)(local_278);
      LOCK();
      piVar2 = (int *)((longlong)local_278 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_278 + 0x10))(local_278);
      }
    }
  }
  FUN_1469c1b96(local_248);
  *(undefined4 *)(param_1 + 0x4f) = *(undefined4 *)(*param_2 + 0x18);
  (**(code **)(*param_1 + 0x298))(param_1);
  if ((local_28 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469c80f4 FUN_1469c80f4 body=138 status=ok
// SIG undefined FUN_1469c80f4(void)

undefined4 * FUN_1469c80f4(undefined4 *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(undefined4 *)(param_3 + 1);
  local_28 = *param_3;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  FUN_1469ef078(param_1 + 2,param_2);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469c8180 FUN_1469c8180 body=302 status=ok
// SIG undefined FUN_1469c8180(void)

longlong * FUN_1469c8180(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  uVar6 = *param_2;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 == (longlong *)0x0) {
    *puVar5 = &PTR_LAB_149e01f80;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_149f030b0;
    puVar5[3] = uVar6;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e01f80;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_149f030b0;
    puVar5[3] = uVar6;
    puVar5[4] = plVar7;
    LOCK();
    *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  }
  return param_1;
}



// FUNCTION 1469c82bc FUN_1469c82bc body=138 status=ok
// SIG undefined FUN_1469c82bc(void)

undefined4 * FUN_1469c82bc(undefined4 *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(undefined4 *)(param_3 + 1);
  local_28 = *param_3;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  FUN_1469ef88a(param_1 + 2,param_2);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469c8348 FUN_1469c8348 body=136 status=ok
// SIG undefined FUN_1469c8348(void)

longlong FUN_1469c8348(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 8) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x10);
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 8) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x10);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 != 0) {
        return param_1;
      }
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      iVar2 = *piVar1;
      UNLOCK();
      goto joined_r0x0001469c83a1;
    }
    *(longlong **)(param_1 + 0x10) = plVar4;
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
  }
  LOCK();
  plVar4 = plVar5 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 != 0) {
    return param_1;
  }
  (**(code **)*plVar5)(plVar5);
  LOCK();
  piVar1 = (int *)((longlong)plVar5 + 0xc);
  *piVar1 = *piVar1 + -1;
  iVar2 = *piVar1;
  UNLOCK();
  plVar4 = plVar5;
joined_r0x0001469c83a1:
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return param_1;
}



// FUNCTION 1469c83d0 FUN_1469c83d0 body=235 status=ok
// SIG undefined FUN_1469c83d0(void)

void FUN_1469c83d0(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if ((int)param_1[0x10] == -1) {
      uVar3 = FUN_1469eef12();
      *(undefined4 *)(param_1 + 0x10) = uVar3;
    }
    else {
      FUN_1469eef6e(param_1[0xf],param_1);
    }
    pcVar2 = (code *)param_1[0x12];
    if (pcVar2 != (code *)0x0) {
      local_34 = (undefined4)param_1[0x10];
      plVar5 = param_1 + 0x16;
      if ((longlong *)param_1[0x14] != (longlong *)0x0) {
        plVar5 = (longlong *)param_1[0x14];
      }
      local_40 = lVar1;
      uVar4 = (**(code **)(*plVar5 + 8))();
      (*pcVar2)(uVar4,&local_40,&local_34);
    }
  }
  if (param_1[0x12] != 0) {
    plVar5 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  FUN_1469e50f4(param_1);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469c84bc FUN_1469c84bc body=130 status=ok
// SIG undefined FUN_1469c84bc(void)

int FUN_1469c84bc(longlong *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1469efd28(param_1,iVar1);
  }
  lVar4 = (longlong)param_3 * 0x10;
  memmove((void *)(*param_1 + lVar4 + 0x10),(void *)(*param_1 + lVar4),
          (ulonglong)(uint)(iVar1 - param_3) << 4);
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + lVar4) = *param_2;
  lVar3 = param_2[1];
  *(longlong *)(lVar2 + 8 + lVar4) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return param_3;
}



// FUNCTION 1469c853e FUN_1469c853e body=200 status=ok
// SIG undefined FUN_1469c853e(void)

void FUN_1469c853e(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 600))(param_1,&local_20);
  if (local_20 != 0) {
    plVar3 = *(longlong **)(local_20 + 0x2e8);
    if (plVar3 == (longlong *)0x0) {
LAB_1469c85bb:
      FUN_1469c8608(0);
    }
    else {
      iVar5 = (int)plVar3[1];
      do {
        if (iVar5 == 0) goto LAB_1469c85bb;
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
      FUN_1469c8608(*(undefined8 *)(local_20 + 0x2e0));
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
  }
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_18 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar1 = (int *)((longlong)local_18 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_18 + 0x10))(local_18);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469c8608 FUN_1469c8608 body=408 status=ok
// SIG undefined FUN_1469c8608(void)

void FUN_1469c8608(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 *local_50;
  undefined4 local_48;
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1469de4a0();
  if (*(char *)(param_1 + 0x151) == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + 8);
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
    }
    uVar6 = FUN_1401cb356();
    local_50 = (undefined8 *)0x0;
    local_48 = 0;
    FUN_1446efa72(&local_50,0,3,0x10);
    local_48 = 3;
    *local_50 = &PTR_LAB_149e02020;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    local_50[2] = lVar7;
    *local_50 = &PTR_FUN_149f04ae0;
    local_50[3] = uVar2;
    local_50[4] = plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
    }
    local_58 = 0x40a00000;
    FUN_1405f67fc(uVar6,&local_40,&local_50,L"FTabManager_RequestSavePersistentLayout_Lambda_OnTick"
                 );
    if ((undefined8 *)(param_1 + 0x158) != &local_40) {
      *(undefined8 *)(param_1 + 0x158) = local_40;
      local_40 = 0;
      plVar4 = *(longlong **)(param_1 + 0x160);
      *(longlong **)(param_1 + 0x160) = local_38;
      local_38 = (longlong *)0x0;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))();
        }
      }
    }
    if (local_38 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_38 + 0x10))();
      }
    }
    FUN_1449db362(&local_50);
    if (plVar3 != (longlong *)0x0) {
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



// FUNCTION 1469c87a2 FUN_1469c87a2 body=716 status=ok
// SIG undefined FUN_1469c87a2(void)

void FUN_1469c87a2(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  longlong *plStack_b0;
  longlong local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined1 local_88 [16];
  undefined1 *local_78;
  undefined4 local_70;
  longlong local_68;
  longlong local_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar7 = -1;
  if ((longlong)*(int *)(param_1 + 0x298) != 0) {
    lVar6 = 0;
    iVar8 = 0;
    do {
      iVar7 = iVar8;
      if (*(longlong *)(*(longlong *)(param_1 + 0x290) + lVar6) == *param_2) break;
      iVar8 = iVar8 + 1;
      lVar6 = lVar6 + 0x10;
      iVar7 = -1;
    } while ((longlong)*(int *)(param_1 + 0x298) * 0x10 != lVar6);
  }
  plVar5 = (longlong *)(*(longlong *)(param_1 + 0x290) + (longlong)iVar7 * 0x10);
  lVar6 = *param_3;
  lVar2 = param_3[1];
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  plVar3 = (longlong *)plVar5[1];
  *plVar5 = lVar6;
  plVar5[1] = lVar2;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar3 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  plVar5 = (longlong *)*param_3;
  *(undefined4 *)(plVar5 + 0x4f) = *(undefined4 *)(*param_2 + 0x278);
  (**(code **)(*plVar5 + 0x298))();
  lVar6 = FUN_146a9bbd0(*(undefined8 *)(param_1 + 0x280),iVar7);
  local_68 = *param_3;
  local_60 = param_3[1];
  if (local_60 != 0) {
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
    UNLOCK();
  }
  local_78 = &LAB_1469c7f20;
  local_70 = 0;
  FUN_1469c80f4(&local_58,&local_68,&local_78);
  *(undefined1 *)(lVar6 + 0x3c) = local_54;
  *(undefined4 *)(lVar6 + 0x38) = local_58;
  FUN_144a450dc(lVar6 + 0x40,local_50);
  FUN_1449db362(local_50);
  local_78 = &LAB_1469c7f2a;
  local_70 = 0;
  FUN_1469c8a70(lVar6 + 0x68,param_3,&local_78);
  local_a0 = *param_3;
  local_98 = param_3[1];
  if (local_98 != 0) {
    LOCK();
    *(int *)(local_98 + 8) = *(int *)(local_98 + 8) + 1;
    UNLOCK();
  }
  local_78 = &LAB_1469c82ae;
  local_70 = 0;
  FUN_1469c82bc(&local_90,&local_a0);
  *(undefined1 *)(lVar6 + 0x24) = local_8c;
  *(undefined4 *)(lVar6 + 0x20) = local_90;
  FUN_144a450dc(lVar6 + 0x28,local_88);
  FUN_1449db362(local_88);
  lVar2 = *param_3;
  lVar4 = param_3[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  FUN_14149270a(lVar6);
  plVar5 = *(longlong **)(lVar6 + 0x18);
  *(longlong *)(lVar6 + 0x10) = lVar2;
  *(longlong *)(lVar6 + 0x18) = lVar4;
  FUN_140a5503c(lVar6);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  param_3 = (longlong *)*param_3;
  plVar5 = *(longlong **)(param_1 + 0x10);
  if (plVar5 == (longlong *)0x0) {
LAB_1469c89fe:
    local_b8 = 0;
    plStack_b0 = (longlong *)0x0;
  }
  else {
    iVar7 = (int)plVar5[1];
    do {
      if (iVar7 == 0) goto LAB_1469c89fe;
      LOCK();
      iVar8 = (int)plVar5[1];
      bVar9 = iVar7 == iVar8;
      if (bVar9) {
        *(int *)(plVar5 + 1) = iVar7 + 1;
        iVar8 = iVar7;
      }
      iVar7 = iVar8;
      UNLOCK();
    } while (!bVar9);
    local_b8 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    plStack_b0 = plVar5;
    if ((int)*plVar3 == 0) {
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
  (**(code **)(*param_3 + 0x248))(param_3,&local_b8);
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469c8a70 FUN_1469c8a70 body=302 status=ok
// SIG undefined FUN_1469c8a70(void)

void FUN_1469c8a70(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  uVar6 = *param_2;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 == (longlong *)0x0) {
    *puVar5 = &PTR_LAB_149e01f80;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_149f030b0;
    puVar5[3] = uVar6;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e01f80;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_149f030b0;
    puVar5[3] = uVar6;
    puVar5[4] = plVar7;
    LOCK();
    *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
                    /* WARNING: Could not recover jumptable at 0x0001469c8b27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x10))(plVar7);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1469c8b9e FUN_1469c8b9e body=299 status=ok
// SIG undefined FUN_1469c8b9e(void)

void FUN_1469c8b9e(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = param_1 + 0x2f8;
  cVar6 = FUN_14692f5de(lVar3);
  if (param_2 == '\0') {
    if (cVar6 == '\0') goto LAB_1469c8ca0;
    local_28 = *(longlong **)(param_1 + 0x10);
    if (local_28 == (longlong *)0x0) {
      local_28 = (longlong *)0x0;
      local_30 = 0;
    }
    else {
      iVar7 = (int)local_28[1];
      local_30 = 0;
      do {
        if (iVar7 == 0) {
          local_28 = (longlong *)0x0;
          goto LAB_1469c8c58;
        }
        LOCK();
        iVar5 = (int)local_28[1];
        bVar8 = iVar7 == iVar5;
        if (bVar8) {
          *(int *)(local_28 + 1) = iVar7 + 1;
          iVar5 = iVar7;
        }
        iVar7 = iVar5;
        UNLOCK();
      } while (!bVar8);
      local_30 = *(undefined8 *)(param_1 + 8);
    }
LAB_1469c8c58:
    local_38 = 1;
    FUN_14692f220(lVar3,&local_30,0,0);
  }
  else {
    if (cVar6 != '\0') goto LAB_1469c8ca0;
    local_28 = *(longlong **)(param_1 + 0x10);
    if (local_28 == (longlong *)0x0) {
      local_28 = (longlong *)0x0;
      local_30 = 0;
    }
    else {
      iVar7 = (int)local_28[1];
      local_30 = 0;
      do {
        if (iVar7 == 0) {
          local_28 = (longlong *)0x0;
          goto LAB_1469c8c30;
        }
        LOCK();
        iVar5 = (int)local_28[1];
        bVar8 = iVar7 == iVar5;
        if (bVar8) {
          *(int *)(local_28 + 1) = iVar7 + 1;
          iVar5 = iVar7;
        }
        iVar7 = iVar5;
        UNLOCK();
      } while (!bVar8);
      local_30 = *(undefined8 *)(param_1 + 8);
    }
LAB_1469c8c30:
    local_38 = 1;
    FUN_14692f4ee(lVar3,&local_30,0,0);
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
LAB_1469c8ca0:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469c8cca FUN_1469c8cca body=258 status=ok
// SIG undefined FUN_1469c8cca(void)

longlong * FUN_1469c8cca(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  void *local_50;
  uint local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  param_2[1] = 0;
  if (0 < *(int *)(param_1 + 0x298)) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x290) + lVar3);
      (**(code **)(*plVar2 + 0x260))(plVar2,&local_50);
      lVar5 = (longlong)(int)local_48;
      if (lVar5 != 0) {
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + local_48;
        if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar1) < local_48) {
          FUN_1469eebc8(param_2,iVar1);
        }
        memmove((void *)((longlong)iVar1 * 0x10 + *param_2),local_50,lVar5 << 4);
        local_48 = 0;
      }
      FUN_1469ec9dc(local_50,0);
      if (local_50 != (void *)0x0) {
        FUN_1400020a8();
      }
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x10;
    } while (lVar4 < *(int *)(param_1 + 0x298));
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469c8dce FUN_1469c8dce body=85 status=ok
// SIG undefined FUN_1469c8dce(void)

int FUN_1469c8dce(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x298) < 1) {
    iVar3 = 0;
  }
  else {
    lVar2 = 0;
    lVar4 = 0;
    iVar3 = 0;
    do {
      iVar1 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x290) + lVar2) + 0x268))();
      iVar3 = iVar3 + iVar1;
      lVar4 = lVar4 + 1;
      lVar2 = lVar2 + 0x10;
    } while (lVar4 < *(int *)(param_1 + 0x298));
  }
  return iVar3;
}



// FUNCTION 1469c8e24 FUN_1469c8e24 body=536 status=ok
// SIG undefined FUN_1469c8e24(void)

undefined8 * FUN_1469c8e24(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong *local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  longlong local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1469c5e86(&local_78);
  uVar4 = FUN_146a9e414(*(undefined8 *)(param_1 + 0x280));
  FUN_1469c5f5e(local_78,&local_68,uVar4);
  FUN_1469c903e(local_68,&local_58,*(undefined4 *)(param_1 + 0x278));
  plVar3 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_70 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)local_70 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_70 + 0x10))(local_70);
      }
    }
  }
  if (0 < *(int *)(param_1 + 0x298)) {
    lVar6 = 0;
    lVar5 = 0;
    bVar7 = false;
    do {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x290) + lVar6);
      (**(code **)(*plVar3 + 0x280))(plVar3,&local_68);
      if (local_68 != 0) {
        local_98 = local_68;
        local_90 = local_60;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_60 + 1) = (int)local_60[1] + 1;
          UNLOCK();
        }
        FUN_1469c90a4(local_58,local_88,&local_98);
        plVar3 = local_80;
        bVar7 = true;
        if (local_80 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_80 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_80)(local_80);
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
      plVar3 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_60 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x10;
    } while (lVar5 < *(int *)(param_1 + 0x298));
    if (bVar7) {
      *param_2 = local_58;
      param_2[1] = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
        UNLOCK();
      }
      goto LAB_1469c8feb;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_1469c8feb:
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_50 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469c903e FUN_1469c903e body=102 status=ok
// SIG undefined FUN_1469c903e(void)

undefined8 * FUN_1469c903e(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  *(undefined4 *)(param_1 + 0x18) = param_3;
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 == (longlong *)0x0) {
LAB_1469c9094:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1469c9094;
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
    *param_2 = *(undefined8 *)(param_1 + 8);
    param_2[1] = plVar3;
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



// FUNCTION 1469c90a4 FUN_1469c90a4 body=228 status=ok
// SIG undefined FUN_1469c90a4(void)

undefined8 * FUN_1469c90a4(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  iVar7 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar7 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar7 + 1U) {
    FUN_1469e518c((longlong *)(param_1 + 0x28),iVar7);
  }
  lVar3 = *(longlong *)(param_1 + 0x28);
  *(undefined8 *)(lVar3 + (longlong)iVar7 * 0x10) = *param_3;
  lVar4 = param_3[1];
  *(longlong *)(lVar3 + 8 + (longlong)iVar7 * 0x10) = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x10);
  if (plVar5 == (longlong *)0x0) {
LAB_1469c913d:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar7 = (int)plVar5[1];
    do {
      if (iVar7 == 0) goto LAB_1469c913d;
      LOCK();
      iVar6 = (int)plVar5[1];
      bVar8 = iVar7 == iVar6;
      if (bVar8) {
        *(int *)(plVar5 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar8);
    *param_2 = *(undefined8 *)(param_1 + 8);
    param_2[1] = plVar5;
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
  plVar5 = (longlong *)param_3[1];
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
  return param_2;
}



// FUNCTION 1469c9188 FUN_1469c9188 body=376 status=ok
// SIG undefined FUN_1469c9188(void)

longlong * FUN_1469c9188(longlong *param_1,longlong *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  do {
    if ((param_3 == 0) || (iVar2 = FUN_146a9e414(param_1[0x50]), iVar2 == 1)) {
      plVar8 = (longlong *)param_1[0x52];
      if ((longlong)(int)param_1[0x53] != 0) {
        plVar6 = plVar8 + (longlong)(int)param_1[0x53] * 2;
        do {
          plVar5 = (longlong *)*plVar8;
          plVar7 = (longlong *)plVar8[1];
          if (plVar7 == (longlong *)0x0) {
            if (*(char *)((longlong)plVar5 + 0x39) == DAT_14c96b238) goto LAB_1469c9286;
          }
          else {
            LOCK();
            *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
            UNLOCK();
            if (*(char *)((longlong)plVar5 + 0x39) == DAT_14c96b238) goto LAB_1469c923e;
            LOCK();
            plVar5 = plVar7 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)*plVar5 == 0) {
              (**(code **)*plVar7)(plVar7);
              LOCK();
              piVar1 = (int *)((longlong)plVar7 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar7 + 0x10))(plVar7);
              }
            }
          }
          plVar8 = plVar8 + 2;
        } while (plVar8 != plVar6);
        plVar8 = (longlong *)param_1[0x52];
      }
      plVar5 = (longlong *)*plVar8;
      plVar7 = (longlong *)plVar8[1];
    }
    else {
      lVar4 = (longlong)((int)param_1[0x53] + -1) * 0x10;
      plVar5 = *(longlong **)(param_1[0x52] + lVar4);
      plVar7 = *(longlong **)(param_1[0x52] + 8 + lVar4);
    }
    if (plVar7 == (longlong *)0x0) {
LAB_1469c9286:
      plVar7 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
LAB_1469c923e:
    uVar3 = (**(code **)(*plVar5 + 0x240))(plVar5);
    if ((uVar3 == 0) || (2 < uVar3)) {
      *param_2 = (longlong)plVar5;
      param_2[1] = (longlong)plVar7;
      if (plVar7 == (longlong *)0x0) {
        return param_2;
      }
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      goto LAB_1469c929c;
    }
    param_1 = plVar5;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      FUN_1469c9188(plVar5,param_2,param_3);
      LOCK();
      plVar8 = plVar7 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
LAB_1469c929c:
      LOCK();
      plVar8 = plVar7 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
      return param_2;
    }
  } while( true );
}



// FUNCTION 1469c9300 FUN_1469c9300 body=91 status=ok
// SIG undefined FUN_1469c9300(void)

bool FUN_1469c9300(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  
  iVar1 = *(int *)(param_1 + 0x298);
  if ((longlong)iVar1 < 1) {
    bVar5 = true;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x290);
    lVar4 = 0;
    do {
      iVar3 = (**(code **)(**(longlong **)(lVar2 + lVar4) + 0x278))();
      if (iVar3 == 1) break;
      bVar5 = (longlong)iVar1 * 0x10 + -0x10 != lVar4;
      lVar4 = lVar4 + 0x10;
    } while (bVar5);
    bVar5 = iVar3 == 1;
  }
  return bVar5;
}



// FUNCTION 1469c935c FUN_1469c935c body=7643 status=ok
// SIG undefined FUN_1469c935c(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1469c935c(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined1 auStack_1fc8 [32];
  undefined8 *local_1fa8;
  undefined8 local_1fa0;
  longlong *local_1f98;
  undefined8 local_1f90;
  undefined8 local_1f88;
  undefined8 local_1f80;
  longlong local_1f78;
  undefined1 local_1f69;
  undefined8 local_1f68;
  longlong *local_1f60;
  undefined1 local_1f49;
  longlong local_1f48;
  longlong *local_1f40;
  undefined1 local_1f29;
  longlong local_1f28;
  longlong *local_1f20;
  undefined1 local_1f09;
  code *local_1f08;
  undefined4 local_1f00;
  undefined4 uStack_1efc;
  double local_1ef0;
  double dStack_1ee8;
  undefined1 local_1ee0;
  undefined8 local_1ed8;
  undefined8 uStack_1ed0;
  undefined8 local_1ec8;
  longlong *local_1ec0;
  undefined1 local_1eb8 [4];
  undefined1 local_1eb4 [4];
  longlong *local_1eb0 [2];
  undefined1 local_1ea0 [16];
  undefined1 local_1e90;
  undefined8 local_1e88;
  undefined8 uStack_1e80;
  undefined8 local_1e78;
  undefined8 uStack_1e70;
  undefined1 local_1e68;
  undefined8 local_1e60;
  undefined8 uStack_1e58;
  undefined8 local_1e48;
  longlong *local_1e40;
  undefined8 local_1e38;
  longlong *local_1e30;
  undefined1 local_1e21;
  code *local_1e20;
  longlong *local_1e18;
  undefined1 local_1e01;
  undefined8 local_1e00;
  longlong *local_1df8;
  undefined1 local_1de8 [4];
  undefined1 local_1de4 [4];
  longlong *local_1de0 [2];
  undefined1 local_1dd0 [16];
  undefined1 local_1dc0;
  undefined8 local_1db8;
  undefined8 uStack_1db0;
  undefined8 local_1da8;
  longlong *local_1da0;
  undefined8 local_1d98;
  longlong *local_1d90;
  undefined8 local_1d88;
  longlong *local_1d80;
  undefined8 local_1d78;
  longlong *local_1d70;
  undefined8 local_1d68;
  longlong *local_1d60;
  undefined4 local_1d58;
  undefined1 local_1d54;
  undefined8 local_1d50;
  undefined8 uStack_1d48;
  undefined1 local_1d39;
  undefined8 local_1d38;
  longlong *local_1d30;
  undefined1 local_1d19;
  longlong local_1d18;
  longlong *local_1d10;
  undefined1 local_1cf9;
  undefined8 local_1cf8;
  longlong *local_1cf0;
  undefined8 local_1ce8;
  longlong *local_1ce0;
  undefined2 local_1cd8;
  undefined8 local_1cd0;
  undefined8 uStack_1cc8;
  undefined8 local_1cc0;
  longlong *local_1cb8;
  undefined8 local_1cb0;
  longlong *local_1ca8;
  undefined8 local_1ca0;
  longlong *local_1c98;
  undefined2 local_1c90;
  undefined8 local_1c88;
  undefined8 uStack_1c80;
  undefined8 local_1c78;
  longlong *local_1c70;
  undefined1 local_1c68 [8];
  longlong *local_1c60;
  undefined2 local_1c50;
  undefined8 local_1c48;
  undefined8 uStack_1c40;
  longlong local_1c38;
  longlong *plStack_1c30;
  undefined1 local_1c28;
  undefined8 local_1c20;
  undefined8 uStack_1c18;
  undefined8 local_1c10;
  longlong *local_1c08;
  undefined8 local_1c00;
  undefined8 local_1bf8;
  undefined1 local_1bf0;
  undefined8 local_1be8;
  undefined8 uStack_1be0;
  undefined2 local_1bd8;
  undefined8 local_1bd0;
  undefined8 uStack_1bc8;
  undefined4 local_1bc0;
  undefined1 local_1bbc;
  undefined8 local_1bb8;
  undefined8 uStack_1bb0;
  undefined2 local_1ba8;
  undefined8 local_1ba0;
  undefined8 uStack_1b98;
  undefined8 local_1b90;
  undefined1 local_1b88 [8];
  longlong *plStack_1b80;
  undefined8 local_1b70;
  undefined8 uStack_1b68;
  undefined1 local_1b60;
  undefined1 local_1b58 [16];
  undefined4 local_1b48;
  undefined1 local_1b44;
  undefined4 local_1b40;
  undefined1 local_1b3c;
  longlong local_1b30;
  longlong *local_1b28;
  code *local_1ad8;
  undefined4 local_1ad0;
  double local_1930;
  double dStack_1928;
  undefined1 local_1920;
  undefined1 local_1918 [16];
  code *local_1908;
  undefined8 uStack_1900;
  undefined1 local_18f8;
  undefined8 local_18f0;
  undefined8 uStack_18e8;
  undefined8 local_1760;
  undefined8 local_1758;
  longlong local_1750;
  undefined1 local_1748 [16];
  undefined8 local_1738;
  undefined8 uStack_1730;
  undefined1 local_1728;
  undefined1 local_1720 [56];
  undefined1 local_16e8 [336];
  code *local_1598;
  ulonglong uStack_1590;
  code *local_1588;
  ulonglong local_1580;
  code *pcStack_1578;
  ulonglong local_1570;
  undefined1 local_13f0 [40];
  undefined2 local_13c8;
  undefined1 local_13c0 [672];
  undefined1 local_1120 [112];
  undefined2 local_10b0;
  undefined1 local_10a8 [42];
  undefined1 local_107e;
  undefined8 local_f78;
  longlong *local_f70;
  undefined1 local_df0 [440];
  undefined1 local_c38 [8];
  longlong *local_c30;
  undefined1 local_b78 [112];
  undefined2 local_b08;
  undefined1 local_b00 [448];
  undefined1 *local_940;
  longlong *plStack_938;
  undefined1 local_930;
  undefined8 local_928;
  undefined8 uStack_920;
  longlong local_880 [24];
  undefined1 local_7c0 [112];
  undefined2 local_750;
  undefined1 local_748 [320];
  undefined1 local_608 [424];
  undefined8 local_460;
  longlong *local_458;
  undefined4 local_44c;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined1 local_438;
  undefined1 local_430 [16];
  undefined1 local_420 [328];
  undefined1 local_2d8 [112];
  undefined2 local_268;
  undefined1 local_260 [320];
  undefined1 local_120 [192];
  ulonglong local_60;
  undefined8 uStack_48;
  
  uStack_48 = 0x1469c9372;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1fc8;
  FUN_1469cb138();
  FUN_1469cb498(param_1 + 0x50,*param_3 + 0x20);
  *(undefined4 *)(param_1 + 0x4f) = *(undefined4 *)(*param_3 + 0x18);
  (**(code **)(*param_1 + 0x298))(param_1);
  *(undefined1 *)(param_1 + 0x6f) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2f1) = *(undefined1 *)(param_2 + 0x1a8);
  *(undefined1 *)(param_1 + 0x5e) = *(undefined1 *)(param_2 + 0x1a9);
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  FUN_14692f10e(&local_1598,0,0x3e19999a,0);
  plVar8 = param_1 + 0x5f;
  FUN_146980d02(plVar8,&local_1598);
  FUN_1402bc42a(&local_1598);
  if (*(char *)(*param_3 + 0x30) == '\x01') {
    FUN_14692f5e4(plVar8);
  }
  else {
    FUN_14285ff8c(plVar8);
  }
  lVar7 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar7 == 0) {
    lVar7 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_1b90,"Docking.UnhideTabwellButton",1);
  local_1f78 = FUN_141492734(lVar7,local_1b90,0,0);
  FUN_140a504fe(local_608);
  FUN_140a4fdf2(local_880,0);
  FUN_140a5296a(local_1120);
  local_1ba8 = CONCAT11(1,DAT_14c96b23c);
  local_1ba0 = 0;
  uStack_1b98 = 0;
  local_10b0 = local_1ba8;
  FUN_144a450dc(local_10a8,&local_1ba0);
  FUN_1449db362(&local_1ba0);
  FUN_140a50426(&local_1ad8);
  plVar8 = (longlong *)FUN_140a52578(&local_1ad8);
  param_1[0x54] = *plVar8;
  local_1f98 = (longlong *)FUN_140a52392(local_1120,plVar8);
  FUN_140a50426(local_2d8);
  local_1bc0 = 0x3f800000;
  local_1bbc = 1;
  local_1bb8 = 0;
  uStack_1bb0 = 0;
  lVar7 = FUN_140a5475a(local_2d8);
  *(undefined4 *)(lVar7 + 0x48) = 3;
  *(undefined1 *)(lVar7 + 0x4c) = 1;
  local_1598 = (code *)0x0;
  uStack_1590 = 0;
  local_1588 = (code *)CONCAT71(local_1588._1_7_,1);
  local_1580 = 0;
  pcStack_1578 = (code *)0x0;
  *(undefined1 *)(lVar7 + 0x28) = 1;
  *(undefined8 *)(lVar7 + 0x18) = 0;
  *(undefined8 *)(lVar7 + 0x20) = 0;
  FUN_144a450dc(lVar7 + 0x30,&local_1580);
  FUN_1449db362(&local_1580);
  FUN_1407679b0(local_b78);
  local_1bd8 = CONCAT11(1,DAT_14c96b23c);
  local_1bd0 = 0;
  uStack_1bc8 = 0;
  local_b08 = local_1bd8;
  FUN_144a450dc(local_b00,&local_1bd0);
  FUN_1449db362(&local_1bd0);
  FUN_145aafb3e(local_7c0);
  uVar9 = FUN_145aaf900(local_7c0);
  FUN_140a50678(&local_1908);
  local_1598 = (code *)&LAB_1469cb594;
  uStack_1590 = uStack_1590 & 0xffffffff00000000;
  FUN_1469cb4f0(&local_1908,param_1,&local_1598);
  local_1c00 = 0;
  local_1bf8 = 0x4024000000000000;
  local_1bf0 = 1;
  local_1be8 = 0;
  uStack_1be0 = 0;
  local_1750 = CONCAT71(local_1750._1_7_,1);
  local_1760 = 0;
  local_1758 = 0x4024000000000000;
  FUN_144a450dc(local_1748,&local_1be8);
  FUN_1449db362(&local_1be8);
  local_1fa8 = &local_1c78;
  FUN_140a52ce6(local_c38,"SSpacer",
                ".\\Runtime/Slate/Private/Framework/Docking/SDockingTabStack.cpp",0x77);
  FUN_140a50c6a(local_c38,&local_1f48,&local_1908);
  local_1f28 = local_1f48;
  local_1f20 = local_1f40;
  if (local_1f40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1f40 + 1) = (int)local_1f40[1] + 1;
    UNLOCK();
  }
  uVar9 = FUN_145aaf878(uVar9,&local_1f28);
  uVar9 = FUN_145aaf822(local_b78,uVar9);
  FUN_145aafb3e(local_df0);
  uVar10 = FUN_145aaf900(local_df0);
  uVar11 = FUN_1469cb5a0(&local_1598);
  plVar8 = (longlong *)param_1[2];
  if (plVar8 == (longlong *)0x0) {
LAB_1469c975c:
    local_1c38 = 0;
    plStack_1c30 = (longlong *)0x0;
    local_1fa0 = (longlong *)CONCAT44(local_1fa0._4_4_,(int)CONCAT71((int7)(uVar11 >> 8),1));
  }
  else {
    uVar11 = (ulonglong)*(uint *)(plVar8 + 1);
    do {
      uVar6 = (uint)uVar11;
      if (uVar6 == 0) goto LAB_1469c975c;
      LOCK();
      uVar3 = *(uint *)(plVar8 + 1);
      if (uVar6 == uVar3) {
        *(uint *)(plVar8 + 1) = uVar6 + 1;
      }
      else {
        uVar11 = (ulonglong)uVar3;
      }
      UNLOCK();
    } while (uVar6 != uVar3);
    lVar14 = param_1[1];
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar12 = plVar8 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    local_1fa0 = (longlong *)((ulonglong)local_1fa0._4_4_ << 0x20);
    local_1c38 = lVar14;
    plStack_1c30 = plVar8;
  }
  plVar8 = plStack_1c30;
  local_1c28 = 1;
  local_1c20 = 0;
  uStack_1c18 = 0;
  FUN_1469e5248(local_13f0,&local_1c38);
  FUN_1469e52c4(&local_1c38);
  local_1c50 = CONCAT11(1,(char)param_1[0x5e]);
  local_1c48 = 0;
  uStack_1c40 = 0;
  local_13c8 = local_1c50;
  FUN_144a450dc(local_13c0,&local_1c48);
  FUN_1449db362(&local_1c48);
  FUN_1469f0438(&local_1b30,&local_1ca0);
  if (local_1b28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1b28 + 1) = (int)local_1b28[1] + 1;
    UNLOCK();
  }
  plVar12 = (longlong *)param_1[0x53];
  param_1[0x52] = local_1b30;
  param_1[0x53] = (longlong)local_1b28;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar15 = plVar12 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
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
  FUN_1469cb5de(&local_1b30,&local_1c10,&local_1598);
  local_1f68 = local_1c10;
  local_1f60 = local_1c08;
  if (local_1c08 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1c08 + 1) = (int)local_1c08[1] + 1;
    UNLOCK();
  }
  uVar10 = FUN_145aaf878(uVar10,&local_1f68);
  uVar9 = FUN_145aaf822(uVar9,uVar10);
  local_1fa8 = &local_1cb0;
  FUN_14076837c(local_1b88,"SVerticalBox",
                ".\\Runtime/Slate/Private/Framework/Docking/SDockingTabStack.cpp",0x72);
  FUN_14076784c(local_1b88,&local_1f08,uVar9);
  local_1e18 = (longlong *)CONCAT44(uStack_1efc,local_1f00);
  local_1e20 = local_1f08;
  if (local_1e18 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1e18 + 1) = (int)local_1e18[1] + 1;
    UNLOCK();
  }
  uVar9 = FUN_140a4fe8e(lVar7,&local_1e20);
  uVar9 = FUN_140a52392(local_1f98,uVar9);
  FUN_140a50426(local_120);
  plVar12 = (longlong *)FUN_140a52578(local_120);
  param_1[0x55] = *plVar12;
  local_940 = &DAT_40a00000;
  plStack_938 = (longlong *)0x0;
  local_930 = 1;
  local_928 = 0;
  uStack_920 = 0;
  *(undefined1 *)(plVar12 + 5) = 1;
  *(undefined4 *)(plVar12 + 3) = 0x40a00000;
  *(undefined4 *)((longlong)plVar12 + 0x1c) = 0;
  *(undefined4 *)(plVar12 + 4) = 0;
  *(undefined4 *)((longlong)plVar12 + 0x24) = 0;
  FUN_144a450dc(plVar12 + 6,&local_928);
  FUN_1449db362(&local_928);
  *(undefined4 *)(plVar12 + 9) = 2;
  *(undefined1 *)((longlong)plVar12 + 0x4c) = 1;
  uVar9 = FUN_140a52392(uVar9,plVar12);
  local_1fa8 = &local_1cc0;
  FUN_140a541dc(&local_940,"SHorizontalBox",
                ".\\Runtime/Slate/Private/Framework/Docking/SDockingTabStack.cpp",0x66);
  FUN_140a50ec6(&local_940,&local_1e00,uVar9);
  local_1d38 = local_1e00;
  local_1d30 = local_1df8;
  if (local_1df8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1df8 + 1) = (int)local_1df8[1] + 1;
    UNLOCK();
  }
  uVar9 = FUN_140a4fd40(local_880,&local_1d38);
  uVar9 = FUN_140a5058c(local_608,uVar9);
  local_1fa8 = &local_1ce8;
  FUN_140a536a8(local_1c68,"SOverlay",
                ".\\Runtime/Slate/Private/Framework/Docking/SDockingTabStack.cpp",99);
  FUN_140a4ff16(local_1c68,&local_1d18,uVar9);
  plVar12 = local_1d10;
  if (local_1d10 == (longlong *)0x0) {
    param_1[0x57] = local_1d18;
    plVar15 = (longlong *)param_1[0x58];
    if (plVar15 != (longlong *)0x0) {
      param_1[0x58] = 0;
LAB_1469cafeb:
      LOCK();
      plVar12 = plVar15 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar2 = (int *)((longlong)plVar15 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar4 = *piVar2;
        UNLOCK();
joined_r0x0001469cafd2:
        if (iVar4 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_1d10 + 1) = (int)local_1d10[1] + 1;
    UNLOCK();
    param_1[0x57] = local_1d18;
    plVar15 = (longlong *)param_1[0x58];
    if (local_1d10 == plVar15) {
      LOCK();
      plVar15 = local_1d10 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
        (**(code **)*local_1d10)(local_1d10);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar4 = *piVar2;
        UNLOCK();
        plVar15 = plVar12;
        goto joined_r0x0001469cafd2;
      }
    }
    else {
      param_1[0x58] = (longlong)local_1d10;
      if (plVar15 != (longlong *)0x0) goto LAB_1469cafeb;
    }
  }
  plVar12 = local_1d10;
  if (local_1d10 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_1d10 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*local_1d10)(local_1d10);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  plVar12 = local_1c60;
  if (local_1c60 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_1c60 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*local_1c60)(local_1c60);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  plVar12 = local_1d30;
  if (local_1d30 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_1d30 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*local_1d30)(local_1d30);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  plVar12 = local_1df8;
  if (local_1df8 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_1df8 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*local_1df8)(local_1df8);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  plVar12 = plStack_938;
  if (plStack_938 != (longlong *)0x0) {
    LOCK();
    plVar15 = plStack_938 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*plStack_938)(plStack_938);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  FUN_140a509a6(local_120);
  plVar12 = local_1e18;
  if (local_1e18 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_1e18 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*local_1e18)(local_1e18);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  plVar12 = (longlong *)CONCAT44(uStack_1efc,local_1f00);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar15 = plVar12 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
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
  if (plStack_1b80 != (longlong *)0x0) {
    LOCK();
    plVar12 = plStack_1b80 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plStack_1b80)(plStack_1b80);
      LOCK();
      piVar2 = (int *)((longlong)plStack_1b80 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plStack_1b80 + 0x10))(plStack_1b80);
      }
    }
  }
  plVar12 = local_1f60;
  if (local_1f60 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_1f60 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*local_1f60)(local_1f60);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  if (local_1c08 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_1c08 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_1c08)(local_1c08);
      LOCK();
      piVar2 = (int *)((longlong)local_1c08 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1c08 + 0x10))(local_1c08);
      }
    }
  }
  if (local_1b28 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_1b28 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_1b28)(local_1b28);
      LOCK();
      piVar2 = (int *)((longlong)local_1b28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1b28 + 0x10))(local_1b28);
      }
    }
  }
  if ((char)local_1fa0 == '\0') {
    LOCK();
    plVar12 = plVar8 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
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
  FUN_1449db362(local_13c0);
  FUN_1469e52c4(local_13f0);
  FUN_140a4ff8c(&local_1598);
  FUN_140767f30(local_df0);
  plVar8 = local_1f20;
  if (local_1f20 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_1f20 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_1f20)(local_1f20);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  plVar8 = local_1f40;
  if (local_1f40 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_1f40 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_1f40)(local_1f40);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if (local_c30 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_c30 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_c30)(local_c30);
      LOCK();
      piVar2 = (int *)((longlong)local_c30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_c30 + 0x10))(local_c30);
      }
    }
  }
  FUN_1449db362(local_1748);
  FUN_140a4ff8c(&local_1908);
  FUN_140767f30(local_7c0);
  FUN_14149255e(local_b78);
  FUN_140a509a6(local_2d8);
  FUN_140a509a6(&local_1ad8);
  FUN_145ab33da(local_1120);
  FUN_1415b5e50(local_880);
  FUN_1415b5e16(local_608);
  FUN_1407679b0(local_2d8);
  local_1c90 = CONCAT11(1,DAT_14c96b23c);
  local_1c88 = 0;
  uStack_1c80 = 0;
  local_268 = local_1c90;
  FUN_144a450dc(local_260,&local_1c88);
  FUN_1449db362(&local_1c88);
  FUN_145aafb3e(local_120);
  uVar9 = FUN_145aaf900(local_120);
  FUN_140a562d0(local_608);
  local_1598 = FUN_1469cb6f6;
  uStack_1590 = uStack_1590 & 0xffffffff00000000;
  FUN_1469cb652(local_608,param_1,&local_1598);
  local_1598 = FUN_1469cb800;
  uStack_1590 = uStack_1590 & 0xffffffff00000000;
  FUN_1469cb748(local_608,param_1,&local_1598);
  local_1598 = FUN_1469cb8e8;
  uStack_1590 = uStack_1590 & 0xffffffff00000000;
  FUN_1469cb834(local_608,param_1,&local_1598);
  local_44c = 3;
  local_1908 = FUN_1469cba6e;
  uStack_1900 = (longlong *)((ulonglong)uStack_1900._4_4_ << 0x20);
  FUN_1469f1058(&local_1598,param_1,&local_1908);
  FUN_144a450dc(local_420,&local_1598);
  FUN_1449db362(&local_1598);
  local_1598 = (code *)0x0;
  uStack_1590 = 0;
  local_1588 = (code *)CONCAT71(local_1588._1_7_,1);
  local_1580 = 0;
  pcStack_1578 = (code *)0x0;
  local_448 = 0;
  uStack_440 = 0;
  local_438 = 1;
  FUN_144a450dc(local_430,&local_1580);
  FUN_1449db362(&local_1580);
  FUN_1407679b0(local_7c0);
  local_1cd8 = CONCAT11(1,DAT_14c96b23c);
  local_1cd0 = 0;
  uStack_1cc8 = 0;
  local_750 = local_1cd8;
  FUN_144a450dc(local_748,&local_1cd0);
  FUN_1449db362(&local_1cd0);
  FUN_145aafb3e(local_880);
  param_1[0x56] = local_880[0];
  uVar10 = FUN_145aaf900(local_880);
  uVar10 = FUN_145aaf822(local_7c0,uVar10);
  FUN_145aafb3e(&local_940);
  uVar13 = FUN_145aaf900(&local_940);
  FUN_140a53334(local_b78);
  local_1598 = FUN_1469cbe00;
  uStack_1590 = uStack_1590 & 0xffffffff00000000;
  FUN_1469cbd4c(local_b78,param_1,&local_1598);
  local_1fa8 = (undefined8 *)&local_1cf9;
  FUN_140a554b8(local_1c68,"SImage",
                ".\\Runtime/Slate/Private/Framework/Docking/SDockingTabStack.cpp",0xa9);
  FUN_140a52c70(local_1c68,&local_1cf8,local_b78);
  local_1ce8 = local_1cf8;
  local_1ce0 = local_1cf0;
  if (local_1cf0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1cf0 + 1) = (int)local_1cf0[1] + 1;
    UNLOCK();
  }
  uVar13 = FUN_145aaf878(uVar13,&local_1ce8);
  uVar10 = FUN_145aaf822(uVar10,uVar13);
  local_1fa8 = (undefined8 *)&local_1d19;
  FUN_14076837c(&local_1d18,"SVerticalBox",
                ".\\Runtime/Slate/Private/Framework/Docking/SDockingTabStack.cpp",0x9f);
  FUN_14076784c(&local_1d18,&local_1cc0,uVar10);
  plVar12 = local_458;
  plVar8 = local_1cb8;
  if (local_1cb8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1cb8 + 1) = (int)local_1cb8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_1cb8 + 1) = (int)local_1cb8[1] + 1;
    UNLOCK();
  }
  local_460 = local_1cc0;
  local_458 = local_1cb8;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar15 = plVar12 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
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
  local_1fa0 = plVar8;
  local_1fa8 = (undefined8 *)&local_1d39;
  FUN_140a55c32(&local_1d38,"SBorder",
                ".\\Runtime/Slate/Private/Framework/Docking/SDockingTabStack.cpp",0x97);
  FUN_140a530e4(&local_1d38,&local_1cb0,local_608);
  local_1ca0 = local_1cb0;
  local_1c98 = local_1ca8;
  if (local_1ca8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1ca8 + 1) = (int)local_1ca8[1] + 1;
    UNLOCK();
  }
  uVar9 = FUN_145aaf878(uVar9,&local_1ca0);
  local_1f80 = FUN_145aaf822(local_2d8,uVar9);
  FUN_145aafb3e(local_c38);
  local_1d58 = 0x3f800000;
  local_1d54 = 1;
  local_1d50 = 0;
  uStack_1d48 = 0;
  local_1f88 = FUN_140767d84(local_c38);
  FUN_140a504fe(local_df0);
  FUN_140a4fdf2(&local_1b30,0);
  FUN_140a562d0(local_1120);
  local_1598 = FUN_1469cbea4;
  uStack_1590 = uStack_1590 & 0xffffffff00000000;
  FUN_1469cb834(local_1120,param_1,&local_1598);
  local_1598 = FUN_1469cc000;
  uStack_1590 = uStack_1590 & 0xffffffff00000000;
  FUN_1469cbf48(local_1120,param_1,&local_1598);
  local_107e = 1;
  local_1598 = FUN_1469cc152;
  uStack_1590 = uStack_1590 & 0xffffffff00000000;
  FUN_1469cc0a8(local_1120,param_1,&local_1598);
  FUN_140a570d8(&local_1598);
  local_1908 = (code *)0x149f00164;
  uStack_1900._0_4_ = 0xf;
  FUN_1446e940c(local_1de4,&local_1908);
  local_1908 = (code *)0x149f00184;
  uStack_1900 = (longlong *)CONCAT44(uStack_1900._4_4_,0xc);
  FUN_1446e940c(local_1de8,&local_1908);
  FUN_140208bae(local_1de0,local_1de8,local_1de4,L"Empty Tab!");
  FUN_14023423e(local_1dd0,local_1de0);
  local_1dc0 = 1;
  local_1db8 = 0;
  uStack_1db0 = 0;
  uVar9 = FUN_140a54906(&local_1598,local_1dd0);
  local_1fa8 = (undefined8 *)&local_1e01;
  FUN_140a54526(&local_1e00,"STextBlock",
                ".\\Runtime/Slate/Private/Framework/Docking/SDockingTabStack.cpp",0xbe);
  FUN_140a52852(&local_1e00,&local_1da8,uVar9);
  plVar12 = local_f70;
  plVar8 = local_1da0;
  if (local_1da0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1da0 + 1) = (int)local_1da0[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_1da0 + 1) = (int)local_1da0[1] + 1;
    UNLOCK();
  }
  local_f78 = local_1da8;
  local_f70 = local_1da0;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar15 = plVar12 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
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
  local_1fa8 = (undefined8 *)&local_1e21;
  FUN_140a55c32(&local_1e20,"SBorder",
                ".\\Runtime/Slate/Private/Framework/Docking/SDockingTabStack.cpp",0xb8);
  if (local_1e18 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1e18 + 1) = (int)local_1e18[1] + 1;
    UNLOCK();
  }
  plVar12 = (longlong *)param_1[0x5a];
  param_1[0x59] = (longlong)local_1e20;
  param_1[0x5a] = (longlong)local_1e18;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar15 = plVar12 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
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
  local_1f98 = plVar8;
  FUN_140a530e4(&local_1e20,&local_1d98,local_1120);
  local_1d88 = local_1d98;
  local_1d80 = local_1d90;
  if (local_1d90 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1d90 + 1) = (int)local_1d90[1] + 1;
    UNLOCK();
  }
  uVar9 = FUN_140a4fd40(&local_1b30,&local_1d88);
  local_1f90 = FUN_140a5058c(local_df0,uVar9);
  FUN_140a4fdf2(local_1b88,0);
  local_1908 = (code *)0x0;
  uStack_1900 = (longlong *)0x0;
  local_18f8 = 1;
  local_18f0 = 0;
  uStack_18e8 = 0;
  local_1b70 = 0;
  uStack_1b68 = 0;
  local_1b60 = 1;
  FUN_144a450dc(local_1b58,&local_18f0);
  FUN_1449db362(&local_18f0);
  local_1b48 = 1;
  local_1b44 = 1;
  local_1b40 = 1;
  local_1b3c = 1;
  FUN_145ab3d24(&local_1908);
  lVar7 = local_1f78;
  local_1750 = local_1f78;
  local_1f08 = FUN_1469cc300;
  local_1f00 = 0;
  FUN_1469f1ac0(&local_1ad8,param_1);
  FUN_144a450dc(local_16e8,&local_1ad8);
  FUN_1449db362(&local_1ad8);
  local_1e78 = 0;
  uStack_1e70 = 0;
  local_1e68 = 1;
  local_1e60 = 0;
  uStack_1e58 = 0;
  local_1738 = 0;
  uStack_1730 = 0;
  local_1728 = 1;
  FUN_144a450dc(local_1720,&local_1e60);
  FUN_1449db362(&local_1e60);
  local_1ad8 = FUN_1469cc3f0;
  local_1ad0 = 0;
  FUN_1469cc34c(&local_1908,param_1,&local_1ad8);
  local_1ad8 = FUN_1469cc4fa;
  local_1ad0 = 0;
  FUN_1469cc442(&local_1908,param_1,&local_1ad8);
  local_1ad8 = FUN_1469cc62a;
  local_1ad0 = 0;
  FUN_1469cc560(&local_1908,param_1,&local_1ad8);
  local_1ad8 = (code *)0x149f001b2;
  local_1ad0 = 0x14;
  FUN_1446e940c(local_1eb4,&local_1ad8);
  local_1ad8 = (code *)0x149f00184;
  local_1ad0 = 0xc;
  FUN_1446e940c(local_1eb8,&local_1ad8);
  FUN_140208bae(local_1eb0,local_1eb8,local_1eb4,L"Show Tabs");
  FUN_14023423e(local_1ea0,local_1eb0);
  local_1e90 = 1;
  local_1e88 = 0;
  uStack_1e80 = 0;
  lVar14 = FUN_1469cc670(&local_1908,local_1ea0);
  FUN_140a50678(&local_1ad8);
  dStack_1ee8 = (double)*(float *)(lVar7 + 0x34);
  local_1ef0 = (double)*(float *)(lVar7 + 0x30);
  local_1ee0 = 1;
  local_1ed8 = 0;
  uStack_1ed0 = 0;
  local_1920 = 1;
  local_1930 = local_1ef0;
  dStack_1928 = dStack_1ee8;
  FUN_144a450dc(local_1918,&local_1ed8);
  FUN_1449db362(&local_1ed8);
  local_1fa8 = (undefined8 *)&local_1f09;
  FUN_140a52ce6(&local_1f08,"SSpacer",
                ".\\Runtime/Slate/Private/Framework/Docking/SDockingTabStack.cpp",0xd3);
  FUN_140a50c6a(&local_1f08,&local_1ec8,&local_1ad8);
  plVar12 = local_1ec0;
  plVar8 = local_1fa0;
  if (local_1ec0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1ec0 + 1) = (int)local_1ec0[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_1ec0 + 1) = (int)local_1ec0[1] + 1;
    UNLOCK();
  }
  plVar15 = *(longlong **)(lVar14 + 0x1b0);
  *(undefined8 *)(lVar14 + 0x1a8) = local_1ec8;
  *(longlong **)(lVar14 + 0x1b0) = local_1ec0;
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar15 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  local_1fa8 = (undefined8 *)&local_1f29;
  FUN_145ab3730(&local_1f28,"SButton",
                ".\\Runtime/Slate/Private/Framework/Docking/SDockingTabStack.cpp",0xc9);
  FUN_145ab34ca(&local_1f28,&local_1e48,lVar14);
  plVar15 = local_1f98;
  local_1e38 = local_1e48;
  local_1e30 = local_1e40;
  if (local_1e40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1e40 + 1) = (int)local_1e40[1] + 1;
    UNLOCK();
  }
  uVar9 = FUN_140a4fd40(local_1b88,&local_1e38);
  uVar9 = FUN_140a5058c(local_1f90,uVar9);
  local_1fa8 = (undefined8 *)&local_1f49;
  FUN_140a536a8(&local_1f48,"SOverlay",
                ".\\Runtime/Slate/Private/Framework/Docking/SDockingTabStack.cpp",0xb3);
  if (local_1f40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1f40 + 1) = (int)local_1f40[1] + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[0x5c];
  param_1[0x5b] = local_1f48;
  param_1[0x5c] = (longlong)local_1f40;
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
  FUN_140a4ff16(&local_1f48,&local_1d78,uVar9);
  local_1d68 = local_1d78;
  local_1d60 = local_1d70;
  if (local_1d70 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1d70 + 1) = (int)local_1d70[1] + 1;
    UNLOCK();
  }
  uVar9 = FUN_145aaf878(local_1f88,&local_1d68);
  uVar9 = FUN_145aaf822(local_1f80,uVar9);
  local_1fa8 = (undefined8 *)&local_1f69;
  FUN_14076837c(&local_1f68,"SVerticalBox",
                ".\\Runtime/Slate/Private/Framework/Docking/SDockingTabStack.cpp",0x90);
  FUN_14076784c(&local_1f68,&local_1c78,uVar9);
  local_1c10 = local_1c78;
  local_1c08 = local_1c70;
  if (local_1c70 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1c70 + 1) = (int)local_1c70[1] + 1;
    UNLOCK();
  }
  FUN_140a58896(param_1 + 0x3c,&local_1c10);
  plVar5 = local_1c08;
  if (local_1c08 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1c08 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_1c08)(local_1c08);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (local_1c70 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1c70 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_1c70)(local_1c70);
      LOCK();
      piVar2 = (int *)((longlong)local_1c70 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1c70 + 0x10))(local_1c70);
      }
    }
  }
  plVar5 = local_1f60;
  if (local_1f60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1f60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_1f60)(local_1f60);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  plVar5 = local_1d60;
  if (local_1d60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1d60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_1d60)(local_1d60);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (local_1d70 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1d70 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_1d70)(local_1d70);
      LOCK();
      piVar2 = (int *)((longlong)local_1d70 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1d70 + 0x10))(local_1d70);
      }
    }
  }
  if (local_1f40 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1f40 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_1f40)(local_1f40);
      LOCK();
      piVar2 = (int *)((longlong)local_1f40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1f40 + 0x10))(local_1f40);
      }
    }
  }
  plVar5 = local_1e30;
  if (local_1e30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1e30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_1e30)(local_1e30);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (local_1e40 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1e40 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_1e40)(local_1e40);
      LOCK();
      piVar2 = (int *)((longlong)local_1e40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1e40 + 0x10))(local_1e40);
      }
    }
  }
  plVar5 = local_1f20;
  if (local_1f20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1f20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_1f20)(local_1f20);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar12 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  if (local_1ec0 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_1ec0 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_1ec0)(local_1ec0);
      LOCK();
      piVar2 = (int *)((longlong)local_1ec0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1ec0 + 0x10))(local_1ec0);
      }
    }
  }
  plVar12 = (longlong *)CONCAT44(uStack_1efc,local_1f00);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar12 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  FUN_1449db362(local_1918);
  FUN_140a4ff8c(&local_1ad8);
  if (local_1eb0[0] != (longlong *)0x0) {
    (**(code **)(*local_1eb0[0] + 0x10))();
  }
  FUN_145ab35f4(&local_1908);
  FUN_1415b5e50(local_1b88);
  plVar12 = local_1d80;
  if (local_1d80 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1d80 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_1d80)(local_1d80);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  if (local_1d90 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_1d90 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_1d90)(local_1d90);
      LOCK();
      piVar2 = (int *)((longlong)local_1d90 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1d90 + 0x10))(local_1d90);
      }
    }
  }
  if (local_1e18 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_1e18 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_1e18)(local_1e18);
      LOCK();
      piVar2 = (int *)((longlong)local_1e18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1e18 + 0x10))(local_1e18);
      }
    }
  }
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar15 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
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
  if (local_1da0 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_1da0 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_1da0)(local_1da0);
      LOCK();
      piVar2 = (int *)((longlong)local_1da0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1da0 + 0x10))(local_1da0);
      }
    }
  }
  if (local_1df8 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_1df8 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_1df8)(local_1df8);
      LOCK();
      piVar2 = (int *)((longlong)local_1df8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1df8 + 0x10))(local_1df8);
      }
    }
  }
  if (local_1de0[0] != (longlong *)0x0) {
    (**(code **)(*local_1de0[0] + 0x10))();
  }
  FUN_140a59ae6(&local_1598);
  FUN_140a59028(local_1120);
  FUN_1415b5e50(&local_1b30);
  FUN_1415b5e16(local_df0);
  FUN_140767f30(local_c38);
  plVar12 = local_1c98;
  if (local_1c98 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_1c98 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*local_1c98)(local_1c98);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  if (local_1ca8 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_1ca8 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_1ca8)(local_1ca8);
      LOCK();
      piVar2 = (int *)((longlong)local_1ca8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1ca8 + 0x10))(local_1ca8);
      }
    }
  }
  plVar12 = local_1d30;
  if (local_1d30 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_1d30 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*local_1d30)(local_1d30);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar8 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
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
  if (local_1cb8 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_1cb8 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_1cb8)(local_1cb8);
      LOCK();
      piVar2 = (int *)((longlong)local_1cb8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1cb8 + 0x10))(local_1cb8);
      }
    }
  }
  if (local_1d10 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_1d10 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_1d10)(local_1d10);
      LOCK();
      piVar2 = (int *)((longlong)local_1d10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1d10 + 0x10))(local_1d10);
      }
    }
  }
  plVar8 = local_1ce0;
  if (local_1ce0 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_1ce0 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_1ce0)(local_1ce0);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if (local_1cf0 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_1cf0 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_1cf0)(local_1cf0);
      LOCK();
      piVar2 = (int *)((longlong)local_1cf0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1cf0 + 0x10))(local_1cf0);
      }
    }
  }
  if (local_1c60 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_1c60 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_1c60)(local_1c60);
      LOCK();
      piVar2 = (int *)((longlong)local_1c60 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1c60 + 0x10))(local_1c60);
      }
    }
  }
  FUN_140a55a86(local_b78);
  FUN_140767f30(&local_940);
  FUN_140767f30(local_880);
  FUN_14149255e(local_7c0);
  FUN_140a59028(local_608);
  FUN_140767f30(local_120);
  FUN_14149255e(local_2d8);
  if (*(char *)((longlong)param_1 + 0x2f1) != '\x01') goto LAB_1469caefd;
  local_1598 = DAT_14c98dec8;
  uStack_1590 = DAT_14c98ded0;
  if (DAT_14c98ded0 == 0) {
    local_1580 = 0;
LAB_1469cb06a:
    pcStack_1578 = DAT_14c98dec8;
    local_1570 = 0;
    local_1588 = DAT_14c98dec8;
  }
  else {
    LOCK();
    *(int *)(DAT_14c98ded0 + 8) = *(int *)(DAT_14c98ded0 + 8) + 1;
    UNLOCK();
    local_1580 = DAT_14c98ded0;
    local_1588 = DAT_14c98dec8;
    if (DAT_14c98ded0 == 0) goto LAB_1469cb06a;
    LOCK();
    *(int *)(DAT_14c98ded0 + 8) = *(int *)(DAT_14c98ded0 + 8) + 1;
    UNLOCK();
    pcStack_1578 = DAT_14c98dec8;
    local_1570 = DAT_14c98ded0;
    if (DAT_14c98ded0 != 0) {
      LOCK();
      *(int *)(DAT_14c98ded0 + 8) = *(int *)(DAT_14c98ded0 + 8) + 1;
      UNLOCK();
    }
  }
  FUN_1469cc8f2(&local_1908);
  FUN_1469cc6ba(param_1,&local_1908,&local_1598);
  plVar8 = uStack_1900;
  if (uStack_1900 != (longlong *)0x0) {
    LOCK();
    plVar12 = uStack_1900 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*uStack_1900)(uStack_1900);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  FUN_1469ccc24(&local_1598);
LAB_1469caefd:
  if ((local_60 ^ (ulonglong)auStack_1fc8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


