// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1488f0150 FUN_1488f0150 body=156 status=ok
// SIG undefined FUN_1488f0150(void)

void FUN_1488f0150(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e7b60;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4168d0;
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
                    /* WARNING: Could not recover jumptable at 0x0001488f01dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488f01ec FUN_1488f01ec body=98 status=ok
// SIG undefined FUN_1488f01ec(void)

void FUN_1488f01ec(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001488f0235. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001488f0244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 1488f024e FUN_1488f024e body=94 status=ok
// SIG undefined FUN_1488f024e(void)

ulonglong FUN_1488f024e(longlong param_1)

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
LAB_1488f02a1:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1488f02a1;
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



// FUNCTION 1488f02ac FUN_1488f02ac body=209 status=ok
// SIG undefined FUN_1488f02ac(void)

int FUN_1488f02ac(uint param_1,undefined8 *param_2)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb85780 != DAT_14cb857ac) {
    puVar2 = &DAT_14cb857b0;
    if (DAT_14cb857b8 != (undefined *)0x0) {
      puVar2 = DAT_14cb857b8;
    }
    iVar3 = *(int *)(puVar2 + (ulonglong)(DAT_14cb857c0 - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        local_40 = *param_2;
        local_38 = *(undefined8 *)(DAT_14cb85778 + (longlong)iVar3 * 0x20);
        cVar1 = FUN_140bf1e82(&local_38,&local_40);
        if (cVar1 != '\0') goto LAB_1488f02d9;
        iVar3 = *(int *)(DAT_14cb85778 + 0x18 + (longlong)iVar3 * 0x20);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_1488f02d9:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar3;
}



// FUNCTION 1488f037e FUN_1488f037e body=38 status=ok
// SIG undefined FUN_1488f037e(void)

undefined8 FUN_1488f037e(undefined8 param_1,int param_2)

{
  FUN_1488f03a4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488f03a4 FUN_1488f03a4 body=59 status=ok
// SIG undefined FUN_1488f03a4(void)

void FUN_1488f03a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b416960;
  FUN_140f21544(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_140af926c(param_1);
  return;
}



// FUNCTION 1488f03e0 FUN_1488f03e0 body=89 status=ok
// SIG undefined FUN_1488f03e0(void)

void FUN_1488f03e0(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 8,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 3)) {
    uVar3 = uVar1 >> 3 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,8,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 1488f043a FUN_1488f043a body=143 status=ok
// SIG undefined FUN_1488f043a(void)

void FUN_1488f043a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x58,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x58)) {
      uVar5 = uVar4 / 0x58 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x58,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1488f04ca FUN_1488f04ca body=31 status=ok
// SIG undefined FUN_1488f04ca(void)

undefined8 FUN_1488f04ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488f04f0 FUN_1488f04f0 body=29 status=ok
// SIG undefined FUN_1488f04f0(void)

bool FUN_1488f04f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1488f050e FUN_1488f050e body=26 status=ok
// SIG undefined FUN_1488f050e(void)

bool FUN_1488f050e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1488f0528 FUN_1488f0528 body=93 status=ok
// SIG undefined FUN_1488f0528(void)

void FUN_1488f0528(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b416ff0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1488f0586 FUN_1488f0586 body=126 status=ok
// SIG undefined FUN_1488f0586(void)

void FUN_1488f0586(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b416ff0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488f05f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488f0604 FUN_1488f0604 body=142 status=ok
// SIG undefined FUN_1488f0604(void)

bool FUN_1488f0604(longlong param_1)

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



// FUNCTION 1488f0694 FUN_1488f0694 body=62 status=ok
// SIG undefined FUN_1488f0694(void)

void FUN_1488f0694(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1488f06d2(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1488f06d2 FUN_1488f06d2 body=93 status=ok
// SIG undefined FUN_1488f06d2(void)

ulonglong FUN_1488f06d2(uint param_1,uint param_2)

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



// FUNCTION 1488f0730 FUN_1488f0730 body=132 status=ok
// SIG undefined FUN_1488f0730(void)

void FUN_1488f0730(longlong param_1,int param_2)

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



// FUNCTION 1488f07b6 FUN_1488f07b6 body=62 status=ok
// SIG undefined FUN_1488f07b6(void)

void FUN_1488f07b6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1488f07f4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1488f07f4 FUN_1488f07f4 body=93 status=ok
// SIG undefined FUN_1488f07f4(void)

ulonglong FUN_1488f07f4(uint param_1,uint param_2)

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



// FUNCTION 1488f0852 FUN_1488f0852 body=31 status=ok
// SIG undefined FUN_1488f0852(void)

undefined8 FUN_1488f0852(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488f088c FUN_1488f088c body=29 status=ok
// SIG undefined FUN_1488f088c(void)

bool FUN_1488f088c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1488f08aa FUN_1488f08aa body=26 status=ok
// SIG undefined FUN_1488f08aa(void)

bool FUN_1488f08aa(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1488f08c4 FUN_1488f08c4 body=24 status=ok
// SIG undefined FUN_1488f08c4(void)

bool FUN_1488f08c4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1488f08dc FUN_1488f08dc body=93 status=ok
// SIG undefined FUN_1488f08dc(void)

void FUN_1488f08dc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b417060;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1488f093a FUN_1488f093a body=93 status=ok
// SIG undefined FUN_1488f093a(void)

void FUN_1488f093a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b417060;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1488f0998 FUN_1488f0998 body=126 status=ok
// SIG undefined FUN_1488f0998(void)

void FUN_1488f0998(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e6310;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b417060;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488f0a07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488f0a16 FUN_1488f0a16 body=64 status=ok
// SIG undefined FUN_1488f0a16(void)

void FUN_1488f0a16(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001488f0a53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1488f0a56 FUN_1488f0a56 body=179 status=ok
// SIG undefined FUN_1488f0a56(void)

bool FUN_1488f0a56(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_48,0);
    lVar3 = local_48;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488f0b0a FUN_1488f0b0a body=48 status=ok
// SIG undefined FUN_1488f0b0a(void)

void FUN_1488f0b0a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1488f0b3a FUN_1488f0b3a body=402 status=ok
// SIG undefined FUN_1488f0b3a(void)

undefined4 * FUN_1488f0b3a(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  undefined4 local_98 [2];
  uint *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong lStack_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1488f0cce(param_1,local_98);
  local_48 = 0;
  local_58 = 0;
  lStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  puVar1 = (undefined8 *)*param_3;
  local_90[2] = *(uint *)(puVar1 + 1);
  *(undefined8 *)local_90 = *puVar1;
  local_90[4] = 0;
  local_90[5] = 0;
  *(undefined1 *)(local_90 + 6) = 0;
  FUN_14014e938(local_90 + 8,&local_78);
  if (lStack_50 != 0) {
    FUN_1400020a8();
  }
  local_90[0x16] = 0xffffffff;
  local_88 = CONCAT44(local_88._4_4_,local_98[0]);
  if (local_90[2] == 0) {
    uVar4 = *local_90;
  }
  else {
    uVar4 = FUN_144a78877(*local_90,local_90[2]);
  }
  cVar3 = FUN_1488f0dbc(param_1,uVar4,local_90,&local_88);
  uVar2 = (undefined4)local_88;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_90[0x17] = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_90[0x16] =
           *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = (undefined4)local_88;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1488f0f16(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1488f0cce FUN_1488f0cce body=238 status=ok
// SIG undefined FUN_1488f0cce(void)

int * FUN_1488f0cce(longlong *param_1,int *param_2)

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
      FUN_14488f93c(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x60);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x60) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x60 + *param_1;
  return param_2;
}



// FUNCTION 1488f0dbc FUN_1488f0dbc body=123 status=ok
// SIG undefined FUN_1488f0dbc(void)

undefined8 FUN_1488f0dbc(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar2 = FUN_1488f0e38(), iVar2 != -1)) {
    lVar1 = *param_1;
    if (*(longlong *)(lVar1 + 0x48 + (longlong)iVar2 * 0x60) != 0) {
      FUN_1400020a8();
    }
    memmove((void *)(lVar1 + (longlong)iVar2 * 0x60),param_3,0x58);
    FUN_1488f0e9c(param_1,*param_4);
    *param_4 = iVar2;
    return 1;
  }
  return 0;
}



// FUNCTION 1488f0e38 FUN_1488f0e38 body=99 status=ok
// SIG undefined FUN_1488f0e38(void)

int FUN_1488f0e38(longlong *param_1,uint param_2,int *param_3)

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
        lVar4 = (longlong)iVar1 * 0x60;
        if ((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + lVar4 + 8) == param_3[2])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x58 + lVar4);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1488f0e9c FUN_1488f0e9c body=122 status=ok
// SIG undefined FUN_1488f0e9c(void)

void FUN_1488f0e9c(longlong *param_1,int param_2)

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



// FUNCTION 1488f0f16 FUN_1488f0f16 body=463 status=ok
// SIG undefined FUN_1488f0f16(void)

void FUN_1488f0f16(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar4 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar3 != uVar8);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar4 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar9 = local_68._4_4_;
      local_68 = uVar4;
      do {
        piVar2 = (int *)(*local_80 + (longlong)iVar9 * 0x60);
        iVar5 = *(int *)(*local_80 + 8 + (longlong)iVar9 * 0x60);
        if (iVar5 == 0) {
          iVar5 = *piVar2;
        }
        else {
          iVar5 = FUN_144a78877(*piVar2,iVar5);
        }
        uVar6 = (longlong)iVar5 & (longlong)(int)param_1[9] - 1U;
        iVar5 = (int)uVar6;
        piVar2[0x17] = iVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        piVar2[0x16] = *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4) = iVar9;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar9 = local_68._4_4_;
        uVar4 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488f10e6 FUN_1488f10e6 body=133 status=ok
// SIG undefined FUN_1488f10e6(void)

longlong FUN_1488f10e6(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_1488f116c();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x20;
    if (lVar3 + lVar2 != 0) goto LAB_1488f111f;
  }
  local_30 = param_3;
  FUN_1488f11cc(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 << 5;
LAB_1488f111f:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488f116c FUN_1488f116c body=95 status=ok
// SIG undefined FUN_1488f116c(void)

int FUN_1488f116c(longlong *param_1,uint param_2,int *param_3)

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
        if ((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + lVar4 + 8) == param_3[2])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x18 + lVar4);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1488f11cc FUN_1488f11cc body=284 status=ok
// SIG undefined FUN_1488f11cc(void)

undefined4 * FUN_1488f11cc(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1488f12ea(param_1,local_48);
  puVar1 = (undefined8 *)*param_4;
  *(undefined4 *)(local_40 + 1) = *(undefined4 *)(puVar1 + 1);
  *local_40 = *puVar1;
  local_40[2] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar2 = FUN_1488f13d0(param_1,param_3,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x1c) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1488f14a0(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488f12ea FUN_1488f12ea body=229 status=ok
// SIG undefined FUN_1488f12ea(void)

int * FUN_1488f12ea(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar6);
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



// FUNCTION 1488f13d0 FUN_1488f13d0 body=93 status=ok
// SIG undefined FUN_1488f13d0(void)

undefined8 FUN_1488f13d0(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar7 = FUN_1488f116c(), iVar7 != -1)) {
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
    FUN_1488f142e(param_1,*param_4);
    *param_4 = iVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 1488f142e FUN_1488f142e body=114 status=ok
// SIG undefined FUN_1488f142e(void)

void FUN_1488f142e(longlong *param_1,int param_2)

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



// FUNCTION 1488f14a0 FUN_1488f14a0 body=459 status=ok
// SIG undefined FUN_1488f14a0(void)

void FUN_1488f14a0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar4 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar3 != uVar8);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar4 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar9 = local_68._4_4_;
      local_68 = uVar4;
      do {
        piVar2 = (int *)(*local_80 + (longlong)iVar9 * 0x20);
        iVar5 = *(int *)(*local_80 + 8 + (longlong)iVar9 * 0x20);
        if (iVar5 == 0) {
          iVar5 = *piVar2;
        }
        else {
          iVar5 = FUN_144a78877(*piVar2,iVar5);
        }
        uVar6 = (longlong)iVar5 & (longlong)(int)param_1[9] - 1U;
        iVar5 = (int)uVar6;
        piVar2[7] = iVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        piVar2[6] = *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4) = iVar9;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar9 = local_68._4_4_;
        uVar4 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488f166c FUN_1488f166c body=141 status=ok
// SIG undefined FUN_1488f166c(void)

longlong FUN_1488f166c(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_1488f0e38();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x60;
    if (lVar3 + lVar2 != 0) goto LAB_1488f16a9;
  }
  local_30 = param_3;
  FUN_1488f16fa(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0x60;
LAB_1488f16a9:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488f16fa FUN_1488f16fa body=366 status=ok
// SIG undefined FUN_1488f16fa(void)

undefined4 * FUN_1488f16fa(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  undefined4 local_98 [2];
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong lStack_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1488f0cce(param_1,local_98);
  local_48 = 0;
  local_58 = 0;
  lStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  puVar1 = (undefined8 *)*param_4;
  *(undefined4 *)(local_90 + 1) = *(undefined4 *)(puVar1 + 1);
  *local_90 = *puVar1;
  local_90[2] = 0;
  *(undefined1 *)(local_90 + 3) = 0;
  FUN_14014e938(local_90 + 4,&local_78);
  if (lStack_50 != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(local_90 + 0xb) = 0xffffffff;
  cVar2 = FUN_1488f0dbc(param_1,param_3,local_90);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_90 + 0x5c) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_90 + 0xb) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_98[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1488f0f16(param_1);
    }
  }
  *param_2 = local_98[0];
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488f186a FUN_1488f186a body=149 status=ok
// SIG undefined FUN_1488f186a(void)

void FUN_1488f186a(longlong *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  
  iVar3 = (int)param_1[1];
  if (iVar3 != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = param_2[2];
    if (iVar2 != 0) {
      iVar3 = FUN_144a78877(*param_2,iVar2);
    }
    if (iVar2 == 0) {
      iVar3 = *param_2;
    }
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 + ((longlong)iVar3 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = *param_1 + (longlong)iVar3 * 0x60;
        if ((*(int *)(*param_1 + (longlong)iVar3 * 0x60) == *param_2) &&
           (*(int *)(lVar1 + 8) == param_2[2])) {
          FUN_1488f1900(param_1);
          return;
        }
        iVar3 = *(int *)(lVar1 + 0x58);
      } while (iVar3 != -1);
    }
  }
  return;
}



// FUNCTION 1488f1900 FUN_1488f1900 body=133 status=ok
// SIG undefined FUN_1488f1900(void)

void FUN_1488f1900(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x60;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x5c + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x58 + lVar6 * 0x60);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar1 + lVar6 * 0x60 + 0x58);
  }
  *puVar3 = *(undefined4 *)(lVar1 + lVar2 + 0x58);
  if (*(longlong *)(*param_1 + 0x48 + lVar2) != 0) {
    FUN_1400020a8();
  }
  FUN_1488f0e9c(param_1,param_2);
  return;
}



// FUNCTION 1488f1986 FUN_1488f1986 body=132 status=ok
// SIG undefined FUN_1488f1986(void)

void FUN_1488f1986(longlong param_1,int param_2)

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



// FUNCTION 1488f1a0c FUN_1488f1a0c body=103 status=ok
// SIG undefined FUN_1488f1a0c(void)

undefined8 FUN_1488f1a0c(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x18,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar2 / 0x18)) {
    uVar4 = uVar2 / 0x18 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar3 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x18,8);
  }
  return uVar3;
}



// FUNCTION 1488f1a74 FUN_1488f1a74 body=71 status=ok
// SIG undefined FUN_1488f1a74(void)

undefined8 * FUN_1488f1a74(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 1488f1abc FUN_1488f1abc body=147 status=ok
// SIG undefined FUN_1488f1abc(void)

void FUN_1488f1abc(longlong param_1,int param_2)

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



// FUNCTION 1488f1b50 FUN_1488f1b50 body=29 status=ok
// SIG undefined FUN_1488f1b50(void)

undefined8 FUN_1488f1b50(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488f1b88 FUN_1488f1b88 body=29 status=ok
// SIG undefined FUN_1488f1b88(void)

bool FUN_1488f1b88(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1488f1ba6 FUN_1488f1ba6 body=26 status=ok
// SIG undefined FUN_1488f1ba6(void)

bool FUN_1488f1ba6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1488f1bc0 FUN_1488f1bc0 body=24 status=ok
// SIG undefined FUN_1488f1bc0(void)

bool FUN_1488f1bc0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1488f1bd8 FUN_1488f1bd8 body=93 status=ok
// SIG undefined FUN_1488f1bd8(void)

void FUN_1488f1bd8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1e1a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b417210;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1488f1c36 FUN_1488f1c36 body=93 status=ok
// SIG undefined FUN_1488f1c36(void)

void FUN_1488f1c36(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1e1a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b417210;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1488f1c94 FUN_1488f1c94 body=126 status=ok
// SIG undefined FUN_1488f1c94(void)

void FUN_1488f1c94(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1e1a40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b417210;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488f1d03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488f1d12 FUN_1488f1d12 body=40 status=ok
// SIG undefined FUN_1488f1d12(void)

void FUN_1488f1d12(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001488f1d37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1488f1d3a FUN_1488f1d3a body=152 status=ok
// SIG undefined FUN_1488f1d3a(void)

bool FUN_1488f1d3a(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488f1dd4 FUN_1488f1dd4 body=132 status=ok
// SIG undefined FUN_1488f1dd4(void)

longlong FUN_1488f1dd4(undefined4 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = FUN_1488f1e5a();
  if (iVar1 != -1) {
    lVar2 = (longlong)iVar1 * 0x20;
    if (DAT_14cb85a50 + lVar2 != 0) goto LAB_1488f1e0d;
  }
  local_28 = param_2;
  FUN_1488f1f20(&local_1c,param_1);
  lVar2 = (longlong)local_1c << 5;
LAB_1488f1e0d:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 + DAT_14cb85a50 + 8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488f1e5a FUN_1488f1e5a body=196 status=ok
// SIG undefined FUN_1488f1e5a(void)

int FUN_1488f1e5a(uint param_1,undefined8 *param_2)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb85a58 != DAT_14cb85a84) {
    puVar2 = &DAT_14cb85a88;
    if (DAT_14cb85a90 != (undefined *)0x0) {
      puVar2 = DAT_14cb85a90;
    }
    iVar3 = *(int *)(puVar2 + (ulonglong)(DAT_14cb85a98 - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        local_40 = *param_2;
        local_38 = *(undefined8 *)(DAT_14cb85a50 + (longlong)iVar3 * 0x20);
        cVar1 = FUN_1460869b8(&local_38,&local_40);
        if (cVar1 != '\0') goto LAB_1488f1efa;
        iVar3 = *(int *)(DAT_14cb85a50 + 0x18 + (longlong)iVar3 * 0x20);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_1488f1efa:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488f1f20 FUN_1488f1f20 body=292 status=ok
// SIG undefined FUN_1488f1f20(void)

undefined4 * FUN_1488f1f20(undefined4 *param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined *puVar4;
  ulonglong uVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1488f2046(local_48);
  *local_40 = *(undefined8 *)*param_3;
  local_40[1] = 0;
  local_40[2] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar2 = FUN_1488f2154(param_2,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = DAT_14cb85a58 - DAT_14cb85a84;
    iVar6 = 1;
    if (3 < uVar3) {
      uVar5 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar6 <= DAT_14cb85a98)) {
      param_2 = DAT_14cb85a98 - 1U & param_2;
      *(uint *)((longlong)local_40 + 0x1c) = param_2;
      puVar4 = DAT_14cb85a90;
      if (DAT_14cb85a90 == (undefined *)0x0) {
        puVar4 = &DAT_14cb85a88;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)(puVar4 + ((longlong)DAT_14cb85a98 - 1U & (longlong)(int)param_2) * 4);
      puVar4 = DAT_14cb85a90;
      if (DAT_14cb85a90 == (undefined *)0x0) {
        puVar4 = &DAT_14cb85a88;
      }
      *(undefined4 *)(puVar4 + ((longlong)DAT_14cb85a98 - 1U & (longlong)(int)param_2) * 4) =
           local_48[0];
    }
    else {
      DAT_14cb85a98 = iVar6;
      FUN_1488f227a();
    }
  }
  *param_1 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488f2046 FUN_1488f2046 body=269 status=ok
// SIG undefined FUN_1488f2046(void)

int * FUN_1488f2046(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb85a80;
  iVar4 = DAT_14cb85a58;
  if (DAT_14cb85a84 == 0) {
    iVar2 = DAT_14cb85a58 + 1;
    bVar7 = DAT_14cb85a5c == DAT_14cb85a58;
    DAT_14cb85a58 = iVar2;
    if (bVar7) {
      FUN_1447711aa(&DAT_14cb85a50,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14cb85a60,1);
    puVar3 = DAT_14cb85a70;
    if (DAT_14cb85a70 == (undefined *)0x0) {
      puVar3 = &DAT_14cb85a60;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  }
  else {
    lVar6 = (longlong)DAT_14cb85a80;
    DAT_14cb85a80 = *(int *)(DAT_14cb85a50 + 4 + lVar6 * 0x20);
    DAT_14cb85a84 = DAT_14cb85a84 + -1;
    iVar4 = iVar2;
    if (DAT_14cb85a84 != 0) {
      *(undefined4 *)(DAT_14cb85a50 + (longlong)DAT_14cb85a80 * 0x20) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14cb85a60;
  if (DAT_14cb85a70 != (undefined *)0x0) {
    puVar3 = DAT_14cb85a70;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x20 + DAT_14cb85a50;
  return param_1;
}



// FUNCTION 1488f2154 FUN_1488f2154 body=165 status=ok
// SIG undefined FUN_1488f2154(void)

undefined8 FUN_1488f2154(undefined8 param_1,undefined8 *param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cb85a58 - DAT_14cb85a84 != 1) {
    local_30 = *param_2;
    iVar6 = FUN_145ed1d58();
    if (iVar6 != -1) {
      puVar1 = (undefined4 *)(DAT_14cb85a50 + (longlong)iVar6 * 0x20);
      if (*(longlong *)(DAT_14cb85a50 + 8 + (longlong)iVar6 * 0x20) != 0) {
        FUN_1400020a8();
      }
      uVar2 = *(undefined4 *)param_2;
      uVar3 = *(undefined4 *)((longlong)param_2 + 4);
      uVar4 = *(undefined4 *)(param_2 + 1);
      uVar5 = *(undefined4 *)((longlong)param_2 + 0xc);
      *(undefined8 *)(puVar1 + 4) = param_2[2];
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      FUN_1488f21fa(*param_3);
      *param_3 = iVar6;
      uVar7 = 1;
      goto LAB_1488f217f;
    }
  }
  uVar7 = 0;
LAB_1488f217f:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488f21fa FUN_1488f21fa body=128 status=ok
// SIG undefined FUN_1488f21fa(void)

void FUN_1488f21fa(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cb85a50;
  if (DAT_14cb85a84 != 0) {
    *(int *)(DAT_14cb85a50 + (longlong)DAT_14cb85a80 * 0x20) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x20) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb85a84) {
    iVar4 = DAT_14cb85a80;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x20) = iVar4;
  DAT_14cb85a84 = DAT_14cb85a84 + 1;
  puVar3 = &DAT_14cb85a60;
  if (DAT_14cb85a70 != (undefined *)0x0) {
    puVar3 = DAT_14cb85a70;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cb85a80 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 1488f227a FUN_1488f227a body=480 status=ok
// SIG undefined FUN_1488f227a(void)

void FUN_1488f227a(void)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined *puVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb85a90 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb85a90,0,0,4);
  }
  uVar2 = DAT_14cb85a98;
  uVar3 = local_50;
  if (DAT_14cb85a98 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb85a88,0,DAT_14cb85a98,4);
    if (0 < (int)uVar2) {
      do {
        puVar5 = DAT_14cb85a90;
        if (DAT_14cb85a90 == (undefined *)0x0) {
          puVar5 = &DAT_14cb85a88;
        }
        *(undefined4 *)(puVar5 + (ulonglong)(DAT_14cb85a98 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb85a60;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb85a78 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb85a50;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar3 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar3;
      do {
        lVar1 = *local_68;
        lVar6 = (longlong)iVar4 * 0x20;
        uVar9 = (longlong)
                (int)((uint)((ulonglong)*(undefined8 *)(lVar1 + lVar6) >> 0x20) ^
                     (uint)*(undefined8 *)(lVar1 + lVar6)) & (longlong)(int)DAT_14cb85a98 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x1c + lVar6) = iVar8;
        puVar5 = DAT_14cb85a90;
        if (DAT_14cb85a90 == (undefined *)0x0) {
          puVar5 = &DAT_14cb85a88;
        }
        *(undefined4 *)(lVar1 + 0x18 + lVar6) =
             *(undefined4 *)(puVar5 + ((longlong)(int)DAT_14cb85a98 - 1U & uVar9) * 4);
        puVar5 = DAT_14cb85a90;
        if (DAT_14cb85a90 == (undefined *)0x0) {
          puVar5 = &DAT_14cb85a88;
        }
        *(int *)(puVar5 + ((longlong)iVar8 & (longlong)(int)DAT_14cb85a98 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar3 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar3;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488f245c FUN_1488f245c body=132 status=ok
// SIG undefined FUN_1488f245c(void)

void FUN_1488f245c(longlong param_1,int param_2)

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



// FUNCTION 1488f24e2 FUN_1488f24e2 body=266 status=ok
// SIG undefined FUN_1488f24e2(void)

void FUN_1488f24e2(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar13 = (longlong)(int)uVar1;
  if (lVar13 != 0) {
    lVar2 = *param_1;
    bVar4 = FUN_1488f25ec(lVar2,*param_2);
    uVar10 = 0;
    uVar7 = 0;
    do {
      uVar11 = (ulonglong)uVar7;
      uVar3 = uVar7 + 1;
      if ((int)(uVar7 + 1) < (int)uVar1) {
        uVar3 = uVar1;
      }
      lVar12 = lVar2 + 8 + uVar11 * 8;
      uVar8 = uVar7;
      uVar6 = uVar11;
      do {
        uVar6 = uVar6 + 1;
        uVar9 = uVar3;
        if (lVar13 <= (longlong)uVar6) break;
        bVar5 = FUN_1488f25ec(lVar12,*param_2);
        uVar8 = uVar8 + 1;
        lVar12 = lVar12 + 8;
        uVar9 = uVar8;
      } while ((bVar4 & 1) == bVar5);
      if ((bVar4 & 1) == 0) {
        if (uVar10 != uVar7) {
          memmove((void *)(lVar2 + (longlong)(int)uVar10 * 8),(void *)(lVar2 + uVar11 * 8),
                  (longlong)(int)(uVar9 - uVar7) << 3);
        }
        uVar10 = uVar10 + (uVar9 - uVar7);
      }
      uVar7 = uVar9;
      bVar4 = bVar4 ^ 1;
    } while ((longlong)uVar6 < lVar13);
    *(uint *)(param_1 + 1) = uVar10;
  }
  return;
}



// FUNCTION 1488f25ec FUN_1488f25ec body=53 status=ok
// SIG undefined FUN_1488f25ec(void)

ulonglong FUN_1488f25ec(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1);
  }
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    uVar2 = FUN_144729dda(param_2);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1488f2622 FUN_1488f2622 body=274 status=ok
// SIG undefined FUN_1488f2622(void)

void FUN_1488f2622(undefined8 param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  undefined *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  lVar1 = DAT_14cb85a50;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb85a58 != DAT_14cb85a84) {
    puVar4 = &DAT_14cb85a88;
    if (DAT_14cb85a90 != (undefined *)0x0) {
      puVar4 = DAT_14cb85a90;
    }
    uVar3 = (longlong)(int)((uint)((ulonglong)param_1 >> 0x20) ^ (uint)param_1) &
            (longlong)DAT_14cb85a98 - 1U;
    if ((longlong)*(int *)(puVar4 + uVar3 * 4) != -1) {
      lVar6 = (longlong)*(int *)(puVar4 + uVar3 * 4) * 0x20;
      local_38 = *(undefined8 *)(DAT_14cb85a50 + lVar6);
      local_40 = param_1;
      cVar2 = FUN_140d09c9e();
      if (cVar2 == '\0') {
        lVar1 = lVar1 + lVar6;
        do {
          lVar5 = lVar1;
          lVar6 = (longlong)*(int *)(lVar5 + 0x18);
          if (lVar6 == -1) goto LAB_1488f264a;
          lVar6 = lVar6 * 0x20;
          lVar1 = DAT_14cb85a50 + lVar6;
          local_38 = *(undefined8 *)(DAT_14cb85a50 + lVar6);
          local_40 = param_1;
          cVar2 = FUN_140d09c9e(&local_38,&local_40);
        } while (cVar2 == '\0');
        puVar7 = (undefined4 *)(lVar5 + 0x18);
      }
      else {
        puVar7 = (undefined4 *)(puVar4 + uVar3 * 4);
      }
      FUN_1488f2736(*puVar7);
    }
  }
LAB_1488f264a:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488f2736 FUN_1488f2736 body=96 status=ok
// SIG undefined FUN_1488f2736(void)

void FUN_1488f2736(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  longlong lVar4;
  
  puVar3 = &DAT_14cb85a88;
  if (DAT_14cb85a90 != (undefined *)0x0) {
    puVar3 = DAT_14cb85a90;
  }
  lVar4 = (longlong)*(int *)(DAT_14cb85a50 + 0x1c + (longlong)param_1 * 0x20);
  iVar2 = *(int *)(puVar3 + lVar4 * 4);
  if (iVar2 == param_1) {
    puVar1 = (undefined4 *)(puVar3 + lVar4 * 4);
  }
  else {
    do {
      lVar4 = (longlong)iVar2;
      iVar2 = *(int *)(DAT_14cb85a50 + 0x18 + lVar4 * 0x20);
    } while (iVar2 != param_1);
    puVar1 = (undefined4 *)(DAT_14cb85a50 + lVar4 * 0x20 + 0x18);
  }
  *puVar1 = *(undefined4 *)(DAT_14cb85a50 + (longlong)param_1 * 0x20 + 0x18);
  FUN_1488f2796();
  return;
}



// FUNCTION 1488f2796 FUN_1488f2796 body=48 status=ok
// SIG undefined FUN_1488f2796(void)

void FUN_1488f2796(int param_1)

{
  if (*(longlong *)(DAT_14cb85a50 + 8 + (longlong)param_1 * 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_1488f21fa(param_1);
  return;
}



// FUNCTION 1488f27c6 FUN_1488f27c6 body=67 status=ok
// SIG undefined FUN_1488f27c6(void)

void FUN_1488f27c6(longlong param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 != 0) {
    pcVar1 = (char *)(param_1 + 0x24);
    do {
      if (*pcVar1 == '\x01') {
        *pcVar1 = '\0';
      }
      if (pcVar1[-0x10] == '\x01') {
        pcVar1[-0x10] = '\0';
      }
      if (*(longlong **)(pcVar1 + -0x24) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(pcVar1 + -0x24) + 0x10))();
      }
      pcVar1 = pcVar1 + 0x28;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1488f280a FUN_1488f280a body=95 status=ok
// SIG undefined FUN_1488f280a(void)

int FUN_1488f280a(longlong *param_1,uint param_2,int *param_3)

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
        if ((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + lVar4 + 8) == param_3[2])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x18 + lVar4);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1488f286a FUN_1488f286a body=130 status=ok
// SIG undefined FUN_1488f286a(void)

void FUN_1488f286a(longlong *param_1,longlong *param_2)

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



// FUNCTION 1488f28ee FUN_1488f28ee body=324 status=ok
// SIG undefined FUN_1488f28ee(void)

undefined4 * FUN_1488f28ee(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1488f2a34(param_1,local_48);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  local_40[2] = *(uint *)(puVar1 + 1);
  *(undefined8 *)local_40 = *puVar1;
  *(undefined8 *)(local_40 + 4) = *puVar2;
  local_40[6] = 0xffffffff;
  local_4c = local_48[0];
  if (local_40[2] == 0) {
    uVar5 = *local_40;
  }
  else {
    uVar5 = FUN_144a78877(*local_40,local_40[2]);
  }
  cVar4 = FUN_1488f2b1a(param_1,uVar5,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
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
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[7] = uVar5;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      local_40[6] = *(uint *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_1488f2bea(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1488f2a34 FUN_1488f2a34 body=229 status=ok
// SIG undefined FUN_1488f2a34(void)

int * FUN_1488f2a34(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar6);
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



// FUNCTION 1488f2b1a FUN_1488f2b1a body=93 status=ok
// SIG undefined FUN_1488f2b1a(void)

undefined8 FUN_1488f2b1a(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar7 = FUN_1488f280a(), iVar7 != -1)) {
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
    FUN_1488f2b78(param_1,*param_4);
    *param_4 = iVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 1488f2b78 FUN_1488f2b78 body=114 status=ok
// SIG undefined FUN_1488f2b78(void)

void FUN_1488f2b78(longlong *param_1,int param_2)

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



// FUNCTION 1488f2bea FUN_1488f2bea body=459 status=ok
// SIG undefined FUN_1488f2bea(void)

void FUN_1488f2bea(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar4 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar3 != uVar8);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar4 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar9 = local_68._4_4_;
      local_68 = uVar4;
      do {
        piVar2 = (int *)(*local_80 + (longlong)iVar9 * 0x20);
        iVar5 = *(int *)(*local_80 + 8 + (longlong)iVar9 * 0x20);
        if (iVar5 == 0) {
          iVar5 = *piVar2;
        }
        else {
          iVar5 = FUN_144a78877(*piVar2,iVar5);
        }
        uVar6 = (longlong)iVar5 & (longlong)(int)param_1[9] - 1U;
        iVar5 = (int)uVar6;
        piVar2[7] = iVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        piVar2[6] = *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4) = iVar9;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar9 = local_68._4_4_;
        uVar4 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488f2db6 FUN_1488f2db6 body=58 status=ok
// SIG undefined FUN_1488f2db6(void)

void FUN_1488f2db6(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_144a5dc74(param_1);
    *(undefined1 *)(param_1 + 0x14) = 0;
    *(undefined1 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined1 *)(param_1 + 0x24) = 0;
    param_1 = param_1 + 0x28;
  }
  return;
}



// FUNCTION 1488f2df0 FUN_1488f2df0 body=145 status=ok
// SIG undefined FUN_1488f2df0(void)

void FUN_1488f2df0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  if (param_2 <= (int)uVar1) {
    uVar5 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x34) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar3 = (longlong)(int)uVar2;
      }
      else {
        lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x28,0);
      uVar5 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
        uVar5 = uVar4 / 0x28 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x34) = (int)uVar5;
    FUN_1488f2e82(param_1,param_2,uVar5,0x28);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1488f2e82 FUN_1488f2e82 body=141 status=ok
// SIG undefined FUN_1488f2e82(void)

void FUN_1488f2e82(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x28);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x28);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x28,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x28),param_1,(longlong)param_2 * 0x28);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x28,param_2,param_3,param_4);
  return;
}



// FUNCTION 1488f2f10 FUN_1488f2f10 body=92 status=ok
// SIG undefined FUN_1488f2f10(void)

void FUN_1488f2f10(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x28);
  if (*(longlong *)(param_1 + 0x28) == 0) {
    lVar3 = param_1;
  }
  _Dst = (void *)(lVar3 + 0x28);
  FUN_1488f27c6(_Dst);
  iVar1 = *(int *)(param_1 + 0x30);
  iVar2 = iVar1 - (param_2 + 1);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (ulonglong)param_2 * 0x28),(longlong)iVar2 * 0x28);
    iVar1 = *(int *)(param_1 + 0x30);
  }
  *(uint *)(param_1 + 0x30) = iVar1 - param_2;
  return;
}



// FUNCTION 1488f2f6c FUN_1488f2f6c body=58 status=ok
// SIG undefined FUN_1488f2f6c(void)

void FUN_1488f2f6c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1488f2fa6(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
  if (iVar1 == *(int *)(param_1 + 0x34)) {
    return;
  }
  *(int *)(param_1 + 0x34) = iVar1;
  FUN_1488f2e82(param_1,*(undefined4 *)(param_1 + 0x30),iVar1,0x28);
  return;
}



// FUNCTION 1488f2fa6 FUN_1488f2fa6 body=129 status=ok
// SIG undefined FUN_1488f2fa6(void)

ulonglong FUN_1488f2fa6(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 1;
  if (1 < param_1) {
    iVar2 = param_2 - param_1;
    if ((ulonglong)((longlong)iVar2 * 0x28) < 0x4000) {
      if (iVar2 < 0x41 || (int)(param_2 * 2) <= (int)(param_1 * 3)) {
        return (ulonglong)param_2;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_2;
    }
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x28,0);
      uVar1 = uVar1 / 0x28;
    }
  }
  return uVar1;
}



// FUNCTION 1488f3028 FUN_1488f3028 body=92 status=ok
// SIG undefined FUN_1488f3028(void)

void FUN_1488f3028(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x38 + *param_1);
  FUN_1405d7ab2(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x38 + (longlong)_Dst),(longlong)iVar2 * 0x38);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1488f3084 FUN_1488f3084 body=62 status=ok
// SIG undefined FUN_1488f3084(void)

void FUN_1488f3084(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1488f30c2(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x38,8);
  }
  return;
}



// FUNCTION 1488f30c2 FUN_1488f30c2 body=104 status=ok
// SIG undefined FUN_1488f30c2(void)

ulonglong FUN_1488f30c2(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x38) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1488f30f8;
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
LAB_1488f30f8:
  return param_2 & 0xffffffff;
}



// FUNCTION 1488f312a FUN_1488f312a body=67 status=ok
// SIG undefined FUN_1488f312a(void)

void FUN_1488f312a(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145cc589e(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1488f32b2(param_1);
    return;
  }
  FUN_1488f316e(param_1);
  FUN_145cc589e(param_1,0);
  return;
}



// FUNCTION 1488f316e FUN_1488f316e body=322 status=ok
// SIG undefined FUN_1488f316e(void)

void FUN_1488f316e(longlong *param_1)

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



// FUNCTION 1488f32b2 FUN_1488f32b2 body=441 status=ok
// SIG undefined FUN_1488f32b2(void)

void FUN_1488f32b2(longlong *param_1)

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
        lVar10 = (longlong)iVar5 * 0x38;
        iVar6 = FUN_140ba40f9(lVar3 + lVar10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x34 + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x30 + lVar10) =
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



// FUNCTION 1488f346c FUN_1488f346c body=48 status=ok
// SIG undefined FUN_1488f346c(void)

void FUN_1488f346c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1488f349c FUN_1488f349c body=48 status=ok
// SIG undefined FUN_1488f349c(void)

void FUN_1488f349c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1488f34cc FUN_1488f34cc body=48 status=ok
// SIG undefined FUN_1488f34cc(void)

void FUN_1488f34cc(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1488f34fc FUN_1488f34fc body=29 status=ok
// SIG undefined FUN_1488f34fc(void)

undefined8 FUN_1488f34fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488f3534 FUN_1488f3534 body=29 status=ok
// SIG undefined FUN_1488f3534(void)

bool FUN_1488f3534(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1488f3552 FUN_1488f3552 body=26 status=ok
// SIG undefined FUN_1488f3552(void)

bool FUN_1488f3552(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1488f356c FUN_1488f356c body=24 status=ok
// SIG undefined FUN_1488f356c(void)

bool FUN_1488f356c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1488f3584 FUN_1488f3584 body=93 status=ok
// SIG undefined FUN_1488f3584(void)

void FUN_1488f3584(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8bcc20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b417360;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1488f35e2 FUN_1488f35e2 body=93 status=ok
// SIG undefined FUN_1488f35e2(void)

void FUN_1488f35e2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8bcc20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b417360;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1488f3640 FUN_1488f3640 body=126 status=ok
// SIG undefined FUN_1488f3640(void)

void FUN_1488f3640(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a8bcc20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b417360;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488f36af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488f36be FUN_1488f36be body=48 status=ok
// SIG undefined FUN_1488f36be(void)

void FUN_1488f36be(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001488f36eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1488f36ee FUN_1488f36ee body=163 status=ok
// SIG undefined FUN_1488f36ee(void)

bool FUN_1488f36ee(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3);
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



// FUNCTION 1488f3792 FUN_1488f3792 body=29 status=ok
// SIG undefined FUN_1488f3792(void)

undefined8 FUN_1488f3792(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488f37ca FUN_1488f37ca body=29 status=ok
// SIG undefined FUN_1488f37ca(void)

bool FUN_1488f37ca(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1488f37e8 FUN_1488f37e8 body=26 status=ok
// SIG undefined FUN_1488f37e8(void)

bool FUN_1488f37e8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1488f3802 FUN_1488f3802 body=24 status=ok
// SIG undefined FUN_1488f3802(void)

bool FUN_1488f3802(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1488f381a FUN_1488f381a body=93 status=ok
// SIG undefined FUN_1488f381a(void)

void FUN_1488f381a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8bcd00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4173d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1488f3878 FUN_1488f3878 body=93 status=ok
// SIG undefined FUN_1488f3878(void)

void FUN_1488f3878(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8bcd00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4173d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1488f38d6 FUN_1488f38d6 body=126 status=ok
// SIG undefined FUN_1488f38d6(void)

void FUN_1488f38d6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a8bcd00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4173d0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488f3945. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488f3954 FUN_1488f3954 body=48 status=ok
// SIG undefined FUN_1488f3954(void)

void FUN_1488f3954(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001488f3981. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1488f3984 FUN_1488f3984 body=163 status=ok
// SIG undefined FUN_1488f3984(void)

bool FUN_1488f3984(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3);
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



// FUNCTION 1488f3a28 FUN_1488f3a28 body=29 status=ok
// SIG undefined FUN_1488f3a28(void)

undefined8 FUN_1488f3a28(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488f3a60 FUN_1488f3a60 body=29 status=ok
// SIG undefined FUN_1488f3a60(void)

bool FUN_1488f3a60(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1488f3a7e FUN_1488f3a7e body=26 status=ok
// SIG undefined FUN_1488f3a7e(void)

bool FUN_1488f3a7e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1488f3a98 FUN_1488f3a98 body=24 status=ok
// SIG undefined FUN_1488f3a98(void)

bool FUN_1488f3a98(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1488f3ab0 FUN_1488f3ab0 body=93 status=ok
// SIG undefined FUN_1488f3ab0(void)

void FUN_1488f3ab0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b403cd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b417440;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1488f3b0e FUN_1488f3b0e body=93 status=ok
// SIG undefined FUN_1488f3b0e(void)

void FUN_1488f3b0e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b403cd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b417440;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1488f3b6c FUN_1488f3b6c body=126 status=ok
// SIG undefined FUN_1488f3b6c(void)

void FUN_1488f3b6c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b403cd0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b417440;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488f3bdb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488f3bea FUN_1488f3bea body=40 status=ok
// SIG undefined FUN_1488f3bea(void)

void FUN_1488f3bea(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001488f3c0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1488f3c12 FUN_1488f3c12 body=152 status=ok
// SIG undefined FUN_1488f3c12(void)

bool FUN_1488f3c12(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488f3cac FUN_1488f3cac body=29 status=ok
// SIG undefined FUN_1488f3cac(void)

undefined8 FUN_1488f3cac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488f3ce4 FUN_1488f3ce4 body=29 status=ok
// SIG undefined FUN_1488f3ce4(void)

bool FUN_1488f3ce4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1488f3d02 FUN_1488f3d02 body=26 status=ok
// SIG undefined FUN_1488f3d02(void)

bool FUN_1488f3d02(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1488f3d1c FUN_1488f3d1c body=24 status=ok
// SIG undefined FUN_1488f3d1c(void)

bool FUN_1488f3d1c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1488f3d34 FUN_1488f3d34 body=93 status=ok
// SIG undefined FUN_1488f3d34(void)

void FUN_1488f3d34(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b403b80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4174b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1488f3d92 FUN_1488f3d92 body=93 status=ok
// SIG undefined FUN_1488f3d92(void)

void FUN_1488f3d92(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b403b80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4174b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1488f3df0 FUN_1488f3df0 body=126 status=ok
// SIG undefined FUN_1488f3df0(void)

void FUN_1488f3df0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b403b80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4174b0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488f3e5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488f3e6e FUN_1488f3e6e body=48 status=ok
// SIG undefined FUN_1488f3e6e(void)

void FUN_1488f3e6e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001488f3e9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1488f3e9e FUN_1488f3e9e body=163 status=ok
// SIG undefined FUN_1488f3e9e(void)

bool FUN_1488f3e9e(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3);
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



// FUNCTION 1488f3f42 FUN_1488f3f42 body=29 status=ok
// SIG undefined FUN_1488f3f42(void)

undefined8 FUN_1488f3f42(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488f3f7a FUN_1488f3f7a body=29 status=ok
// SIG undefined FUN_1488f3f7a(void)

bool FUN_1488f3f7a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1488f3f98 FUN_1488f3f98 body=26 status=ok
// SIG undefined FUN_1488f3f98(void)

bool FUN_1488f3f98(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1488f3fb2 FUN_1488f3fb2 body=24 status=ok
// SIG undefined FUN_1488f3fb2(void)

bool FUN_1488f3fb2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1488f3fca FUN_1488f3fca body=93 status=ok
// SIG undefined FUN_1488f3fca(void)

void FUN_1488f3fca(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b417520;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1488f4028 FUN_1488f4028 body=93 status=ok
// SIG undefined FUN_1488f4028(void)

void FUN_1488f4028(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b417520;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1488f4086 FUN_1488f4086 body=126 status=ok
// SIG undefined FUN_1488f4086(void)

void FUN_1488f4086(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e6310;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b417520;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488f40f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488f4104 FUN_1488f4104 body=64 status=ok
// SIG undefined FUN_1488f4104(void)

void FUN_1488f4104(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001488f4141. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1488f4144 FUN_1488f4144 body=179 status=ok
// SIG undefined FUN_1488f4144(void)

bool FUN_1488f4144(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_48,0);
    lVar3 = local_48;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488f41f8 FUN_1488f41f8 body=29 status=ok
// SIG undefined FUN_1488f41f8(void)

undefined8 FUN_1488f41f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488f4230 FUN_1488f4230 body=29 status=ok
// SIG undefined FUN_1488f4230(void)

bool FUN_1488f4230(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1488f424e FUN_1488f424e body=26 status=ok
// SIG undefined FUN_1488f424e(void)

bool FUN_1488f424e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1488f4268 FUN_1488f4268 body=24 status=ok
// SIG undefined FUN_1488f4268(void)

bool FUN_1488f4268(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1488f4280 FUN_1488f4280 body=93 status=ok
// SIG undefined FUN_1488f4280(void)

void FUN_1488f4280(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b403fd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b417590;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1488f42de FUN_1488f42de body=93 status=ok
// SIG undefined FUN_1488f42de(void)

void FUN_1488f42de(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b403fd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b417590;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1488f433c FUN_1488f433c body=126 status=ok
// SIG undefined FUN_1488f433c(void)

void FUN_1488f433c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b403fd0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b417590;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488f43ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488f43ba FUN_1488f43ba body=99 status=ok
// SIG undefined FUN_1488f43ba(void)

void FUN_1488f43ba(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
  local_28 = *(undefined4 *)(param_3 + 1);
  local_30 = *param_3;
  (**(code **)(param_1 + 0x20))(uVar1,param_2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488f441e FUN_1488f441e body=179 status=ok
// SIG undefined FUN_1488f441e(void)

bool FUN_1488f441e(longlong param_1,undefined4 param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    local_38 = (undefined4)param_3[1];
    local_40 = *param_3;
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488f44d2 FUN_1488f44d2 body=29 status=ok
// SIG undefined FUN_1488f44d2(void)

undefined8 FUN_1488f44d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488f450a FUN_1488f450a body=29 status=ok
// SIG undefined FUN_1488f450a(void)

bool FUN_1488f450a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1488f4528 FUN_1488f4528 body=26 status=ok
// SIG undefined FUN_1488f4528(void)

bool FUN_1488f4528(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1488f4542 FUN_1488f4542 body=24 status=ok
// SIG undefined FUN_1488f4542(void)

bool FUN_1488f4542(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1488f455a FUN_1488f455a body=93 status=ok
// SIG undefined FUN_1488f455a(void)

void FUN_1488f455a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b417790;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b417600;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1488f45b8 FUN_1488f45b8 body=93 status=ok
// SIG undefined FUN_1488f45b8(void)

void FUN_1488f45b8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b417790;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b417600;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1488f4616 FUN_1488f4616 body=126 status=ok
// SIG undefined FUN_1488f4616(void)

void FUN_1488f4616(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b417790;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b417600;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488f4685. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488f4694 FUN_1488f4694 body=58 status=ok
// SIG undefined FUN_1488f4694(void)

void FUN_1488f4694(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001488f46cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1488f46ce FUN_1488f46ce body=173 status=ok
// SIG undefined FUN_1488f46ce(void)

bool FUN_1488f46ce(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488f477e FUN_1488f477e body=132 status=ok
// SIG undefined FUN_1488f477e(void)

void FUN_1488f477e(longlong param_1,int param_2)

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



// FUNCTION 1488f4804 FUN_1488f4804 body=62 status=ok
// SIG undefined FUN_1488f4804(void)

void FUN_1488f4804(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1488f4842(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1488f4842 FUN_1488f4842 body=93 status=ok
// SIG undefined FUN_1488f4842(void)

ulonglong FUN_1488f4842(uint param_1,uint param_2)

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



// FUNCTION 1488f48a6 FUN_1488f48a6 body=243 status=ok
// SIG undefined FUN_1488f48a6(void)

void FUN_1488f48a6(undefined8 *param_1,longlong param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_188 [36];
  undefined1 local_164 [11];
  undefined1 local_159;
  longlong local_158;
  ulonglong *local_150;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_188;
  plVar3 = (longlong *)FUN_14479d2ce(param_2 + 0x14);
  if (plVar3 != (longlong *)0x0) {
    FUN_1449daf8c(&local_158,plVar3,0);
    local_159 = 0;
    puVar1 = (undefined1 *)*local_150 + 1;
    if ((undefined1 *)local_150[1] < puVar1) {
      (**(code **)(local_158 + 0x170))(&local_158,&local_159,1);
    }
    else {
      local_159 = *(undefined1 *)*local_150;
      *local_150 = (ulonglong)puVar1;
    }
    FUN_14011750a(*param_1,&local_158);
    lVar2 = param_1[1];
    FUN_14011750a(lVar2,&local_158);
    FUN_1488ee54e(&local_158,lVar2 + 0x10);
    (**(code **)(*plVar3 + 0x308))(plVar3,local_164,&local_158,0);
    FUN_1449daebe(&local_158);
  }
  if ((local_20 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488f499a FUN_1488f499a body=110 status=ok
// SIG undefined FUN_1488f499a(void)

int FUN_1488f499a(longlong *param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      do {
        cVar2 = FUN_140ba41f1(lVar4 + (longlong)iVar1 * 0x38,param_3);
        if (cVar2 != '\0') {
          return iVar1;
        }
        lVar4 = *param_1;
        iVar1 = *(int *)(lVar4 + 0x30 + (longlong)iVar1 * 0x38);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1488f4a08 FUN_1488f4a08 body=386 status=ok
// SIG undefined FUN_1488f4a08(void)

uint * FUN_1488f4a08(longlong param_1,uint *param_2,longlong *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  uint *puVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 auStack_78 [36];
  uint local_54;
  uint local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1488f4b8c(param_1,local_50);
  puVar2 = (undefined8 *)*param_3;
  puVar3 = (uint *)param_3[1];
  *(undefined8 *)(local_48 + 4) = puVar2[2];
  uVar4 = puVar2[1];
  *(undefined8 *)local_48 = *puVar2;
  *(undefined8 *)(local_48 + 2) = uVar4;
  local_48[6] = *puVar3;
  local_48[7] = 0xffffffff;
  local_54 = local_50[0];
  uVar1 = local_48[2];
  if (uVar1 != 0) {
    uVar7 = FUN_144a78877(*local_48,uVar1);
    local_50[0] = (uint)uVar7;
    param_3 = (longlong *)(uVar7 & 0xffffffff);
  }
  uVar10 = *local_48;
  uVar6 = local_48[5];
  if (uVar6 != 0) {
    local_50[0] = FUN_144a78877(local_48[3],uVar6);
  }
  uVar7 = (ulonglong)param_3 & 0xffffffff;
  if (uVar1 == 0) {
    uVar7 = (ulonglong)uVar10;
  }
  if (uVar6 == 0) {
    local_50[0] = local_48[3];
  }
  uVar10 = local_50[0] + (int)(uVar7 >> 2) + (uint)uVar7 * 0x40 + 0x9e3779b9 ^ (uint)uVar7;
  cVar5 = FUN_1488f4c72(param_1,uVar10,local_48,&local_54);
  uVar1 = local_54;
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
      uVar10 = *(int *)(param_1 + 0x48) - 1U & uVar10;
      local_48[8] = uVar10;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      local_48[7] = *(uint *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar10) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(uint *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar10) * 4) =
           local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_1488f4dbe(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488f4b8c FUN_1488f4b8c body=230 status=ok
// SIG undefined FUN_1488f4b8c(void)

int * FUN_1488f4b8c(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_14042c636(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x24);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x24) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x24 + *param_1;
  return param_2;
}



// FUNCTION 1488f4c72 FUN_1488f4c72 body=102 status=ok
// SIG undefined FUN_1488f4c72(void)

undefined8 FUN_1488f4c72(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar8 = FUN_1488f4cd8(), iVar8 != -1)) {
    lVar2 = *param_1;
    lVar9 = (longlong)iVar8;
    uVar4 = *param_3;
    uVar5 = param_3[1];
    uVar6 = param_3[2];
    uVar7 = param_3[3];
    uVar3 = *(undefined8 *)(param_3 + 4);
    *(undefined4 *)(lVar2 + 0x18 + lVar9 * 0x24) = param_3[6];
    *(undefined8 *)(lVar2 + 0x10 + lVar9 * 0x24) = uVar3;
    puVar1 = (undefined4 *)(lVar2 + lVar9 * 0x24);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
    FUN_1488f4d4c(param_1,*param_4);
    *param_4 = iVar8;
    return 1;
  }
  return 0;
}



// FUNCTION 1488f4cd8 FUN_1488f4cd8 body=116 status=ok
// SIG undefined FUN_1488f4cd8(void)

int FUN_1488f4cd8(longlong *param_1,uint param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar3 = *param_1;
      do {
        lVar5 = (longlong)iVar2;
        if ((((*(int *)(lVar3 + lVar5 * 0x24) == *param_3) &&
             (lVar1 = lVar3 + lVar5 * 0x24, *(int *)(lVar1 + 8) == param_3[2])) &&
            (*(int *)(lVar1 + 0xc) == param_3[3])) && (*(int *)(lVar1 + 0x14) == param_3[5])) {
          return iVar2;
        }
        iVar2 = *(int *)(lVar3 + 0x1c + lVar5 * 0x24);
      } while (iVar2 != -1);
    }
  }
  return -1;
}



// FUNCTION 1488f4d4c FUN_1488f4d4c body=114 status=ok
// SIG undefined FUN_1488f4d4c(void)

void FUN_1488f4d4c(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x24) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x24);
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



// FUNCTION 1488f4dbe FUN_1488f4dbe body=508 status=ok
// SIG undefined FUN_1488f4dbe(void)

void FUN_1488f4dbe(longlong *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint uVar11;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar7,4);
    if (0 < (int)uVar7) {
      do {
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)((longlong)plVar10 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar7 != uVar11);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    local_6c = local_4c;
    local_90 = param_1;
    while (iVar5 = local_78._4_4_, local_78._4_4_ < (int)local_80[3]) {
      lVar8 = *local_90;
      puVar2 = (uint *)(lVar8 + (longlong)local_78._4_4_ * 0x24);
      uVar7 = puVar2[2];
      if (uVar7 != 0) {
        lVar8 = FUN_144a78877(*puVar2,uVar7);
        uVar11 = (uint)lVar8;
      }
      uVar6 = (uint)lVar8;
      uVar3 = *puVar2;
      uVar4 = puVar2[5];
      if (uVar4 != 0) {
        uVar6 = FUN_144a78877(puVar2[3],uVar4);
      }
      if (uVar7 == 0) {
        uVar11 = uVar3;
      }
      if (uVar4 == 0) {
        uVar6 = puVar2[3];
      }
      uVar9 = (longlong)(int)(uVar6 + (uVar11 >> 2) + uVar11 * 0x40 + 0x9e3779b9 ^ uVar11) &
              (longlong)(int)param_1[9] - 1U;
      uVar7 = (uint)uVar9;
      puVar2[8] = uVar7;
      plVar10 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar10 = plVar1;
      }
      puVar2[7] = *(uint *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
      plVar10 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar10 = plVar1;
      }
      *(int *)((longlong)plVar10 + ((longlong)(int)uVar7 & (longlong)(int)param_1[9] - 1U) * 4) =
           iVar5;
      local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
      FUN_1449c0562(&local_88);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488f4fbc FUN_1488f4fbc body=259 status=ok
// SIG undefined FUN_1488f4fbc(void)

void FUN_1488f4fbc(longlong *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  uint unaff_EBX;
  
  uVar5 = *(uint *)(param_1 + 1);
  if (uVar5 != *(uint *)((longlong)param_1 + 0x34)) {
    uVar2 = param_2[2];
    if (uVar2 != 0) {
      uVar5 = FUN_144a78877(*param_2,uVar2);
      unaff_EBX = uVar5;
    }
    uVar3 = *param_2;
    uVar4 = param_2[5];
    if (uVar4 != 0) {
      uVar5 = FUN_144a78877(param_2[3],uVar4);
    }
    if (uVar2 == 0) {
      unaff_EBX = uVar3;
    }
    if (uVar4 == 0) {
      uVar5 = param_2[3];
    }
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    uVar5 = *(uint *)((longlong)plVar6 +
                     ((longlong)
                      (int)(uVar5 + (unaff_EBX >> 2) + unaff_EBX * 0x40 + 0x9e3779b9 ^ unaff_EBX) &
                     (longlong)(int)param_1[9] - 1U) * 4);
    if (uVar5 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*param_1 + (longlong)(int)uVar5 * 0x24);
        if ((((*puVar1 == *param_2) && (puVar1[2] == param_2[2])) && (puVar1[3] == param_2[3])) &&
           (puVar1[5] == param_2[5])) {
          FUN_1488f50c0(param_1);
          return;
        }
        uVar5 = puVar1[7];
      } while (uVar5 != 0xffffffff);
    }
  }
  return;
}



// FUNCTION 1488f50c0 FUN_1488f50c0 body=87 status=ok
// SIG undefined FUN_1488f50c0(void)

void FUN_1488f50c0(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x24;
  lVar6 = (longlong)*(int *)(lVar1 + 0x20);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x1c + lVar6 * 0x24);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x24 + 0x1c);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x1c);
  FUN_1488f4d4c();
  return;
}



// FUNCTION 1488f5118 FUN_1488f5118 body=132 status=ok
// SIG undefined FUN_1488f5118(void)

void FUN_1488f5118(longlong param_1,int param_2)

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



// FUNCTION 1488f519e FUN_1488f519e body=62 status=ok
// SIG undefined FUN_1488f519e(void)

void FUN_1488f519e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1488f51dc(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1488f51dc FUN_1488f51dc body=93 status=ok
// SIG undefined FUN_1488f51dc(void)

ulonglong FUN_1488f51dc(uint param_1,uint param_2)

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



// FUNCTION 1488f5240 FUN_1488f5240 body=243 status=ok
// SIG undefined FUN_1488f5240(void)

void FUN_1488f5240(undefined8 *param_1,longlong param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_188 [36];
  undefined1 local_164 [11];
  undefined1 local_159;
  longlong local_158;
  ulonglong *local_150;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_188;
  plVar3 = (longlong *)FUN_14479d2ce(param_2 + 0x14);
  if (plVar3 != (longlong *)0x0) {
    FUN_1449daf8c(&local_158,plVar3,0);
    local_159 = 5;
    puVar1 = (undefined1 *)*local_150 + 1;
    if ((undefined1 *)local_150[1] < puVar1) {
      (**(code **)(local_158 + 0x170))(&local_158,&local_159,1);
    }
    else {
      local_159 = *(undefined1 *)*local_150;
      *local_150 = (ulonglong)puVar1;
    }
    FUN_14011750a(*param_1,&local_158);
    lVar2 = param_1[1];
    FUN_14011750a(lVar2,&local_158);
    FUN_1488ee54e(&local_158,lVar2 + 0x10);
    (**(code **)(*plVar3 + 0x308))(plVar3,local_164,&local_158,0);
    FUN_1449daebe(&local_158);
  }
  if ((local_20 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488f533a FUN_1488f533a body=224 status=ok
// SIG undefined FUN_1488f533a(void)

void FUN_1488f533a(undefined8 *param_1,longlong param_2)

{
  undefined1 *puVar1;
  longlong *plVar2;
  undefined1 auStack_188 [36];
  undefined1 local_164 [11];
  undefined1 local_159;
  longlong local_158;
  ulonglong *local_150;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_188;
  plVar2 = (longlong *)FUN_14479d2ce(param_2 + 0x14);
  if (plVar2 != (longlong *)0x0) {
    FUN_1449daf8c(&local_158,plVar2,0);
    local_159 = 6;
    puVar1 = (undefined1 *)*local_150 + 1;
    if ((undefined1 *)local_150[1] < puVar1) {
      (**(code **)(local_158 + 0x170))(&local_158,&local_159,1);
    }
    else {
      local_159 = *(undefined1 *)*local_150;
      *local_150 = (ulonglong)puVar1;
    }
    FUN_14011750a(*param_1,&local_158);
    FUN_14011750a(param_1[1],&local_158);
    (**(code **)(*plVar2 + 0x308))(plVar2,local_164,&local_158,0);
    FUN_1449daebe(&local_158);
  }
  if ((local_20 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488f541c FUN_1488f541c body=132 status=ok
// SIG undefined FUN_1488f541c(void)

void FUN_1488f541c(longlong param_1,int param_2)

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



// FUNCTION 1488f54a8 FUN_1488f54a8 body=225 status=ok
// SIG undefined FUN_1488f54a8(void)

void FUN_1488f54a8(undefined8 *param_1,longlong param_2)

{
  undefined1 *puVar1;
  longlong *plVar2;
  undefined1 auStack_188 [36];
  undefined1 local_164 [11];
  undefined1 local_159;
  longlong local_158;
  ulonglong *local_150;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_188;
  plVar2 = (longlong *)FUN_14479d2ce(param_2 + 0x14);
  if (plVar2 != (longlong *)0x0) {
    FUN_1449daf8c(&local_158,plVar2,0);
    local_159 = 1;
    puVar1 = (undefined1 *)*local_150 + 1;
    if ((undefined1 *)local_150[1] < puVar1) {
      (**(code **)(local_158 + 0x170))(&local_158,&local_159,1);
    }
    else {
      local_159 = *(undefined1 *)*local_150;
      *local_150 = (ulonglong)puVar1;
    }
    FUN_14011750a(*param_1,&local_158);
    FUN_1488ee6ed(&local_158,param_1[1]);
    (**(code **)(*plVar2 + 0x308))(plVar2,local_164,&local_158,0);
    FUN_1449daebe(&local_158);
  }
  if ((local_20 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488f5590 FUN_1488f5590 body=243 status=ok
// SIG undefined FUN_1488f5590(void)

void FUN_1488f5590(undefined8 *param_1,longlong param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_188 [36];
  undefined1 local_164 [11];
  undefined1 local_159;
  longlong local_158;
  ulonglong *local_150;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_188;
  plVar3 = (longlong *)FUN_14479d2ce(param_2 + 0x14);
  if (plVar3 != (longlong *)0x0) {
    FUN_1449daf8c(&local_158,plVar3,0);
    local_159 = 2;
    puVar1 = (undefined1 *)*local_150 + 1;
    if ((undefined1 *)local_150[1] < puVar1) {
      (**(code **)(local_158 + 0x170))(&local_158,&local_159,1);
    }
    else {
      local_159 = *(undefined1 *)*local_150;
      *local_150 = (ulonglong)puVar1;
    }
    FUN_14011750a(*param_1,&local_158);
    lVar2 = param_1[1];
    FUN_1488ebd87(&local_158,lVar2);
    FUN_1488ecbf6(&local_158,lVar2 + 0xc);
    (**(code **)(*plVar3 + 0x308))(plVar3,local_164,&local_158,0);
    FUN_1449daebe(&local_158);
  }
  if ((local_20 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488f5684 FUN_1488f5684 body=62 status=ok
// SIG undefined FUN_1488f5684(void)

void FUN_1488f5684(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1488f56c2(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1488f56c2 FUN_1488f56c2 body=93 status=ok
// SIG undefined FUN_1488f56c2(void)

ulonglong FUN_1488f56c2(uint param_1,uint param_2)

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



// FUNCTION 1488f5726 FUN_1488f5726 body=225 status=ok
// SIG undefined FUN_1488f5726(void)

void FUN_1488f5726(undefined8 *param_1,longlong param_2)

{
  undefined1 *puVar1;
  longlong *plVar2;
  undefined1 auStack_188 [36];
  undefined1 local_164 [11];
  undefined1 local_159;
  longlong local_158;
  ulonglong *local_150;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_188;
  plVar2 = (longlong *)FUN_14479d2ce(param_2 + 0x14);
  if (plVar2 != (longlong *)0x0) {
    FUN_1449daf8c(&local_158,plVar2,0);
    local_159 = 4;
    puVar1 = (undefined1 *)*local_150 + 1;
    if ((undefined1 *)local_150[1] < puVar1) {
      (**(code **)(local_158 + 0x170))(&local_158,&local_159,1);
    }
    else {
      local_159 = *(undefined1 *)*local_150;
      *local_150 = (ulonglong)puVar1;
    }
    FUN_14011750a(*param_1,&local_158);
    FUN_1488ebd87(&local_158,param_1[1]);
    (**(code **)(*plVar2 + 0x308))(plVar2,local_164,&local_158,0);
    FUN_1449daebe(&local_158);
  }
  if ((local_20 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488f580e FUN_1488f580e body=243 status=ok
// SIG undefined FUN_1488f580e(void)

void FUN_1488f580e(undefined8 *param_1,longlong param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_188 [36];
  undefined1 local_164 [11];
  undefined1 local_159;
  longlong local_158;
  ulonglong *local_150;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_188;
  plVar3 = (longlong *)FUN_14479d2ce(param_2 + 0x14);
  if (plVar3 != (longlong *)0x0) {
    FUN_1449daf8c(&local_158,plVar3,0);
    local_159 = 3;
    puVar1 = (undefined1 *)*local_150 + 1;
    if ((undefined1 *)local_150[1] < puVar1) {
      (**(code **)(local_158 + 0x170))(&local_158,&local_159,1);
    }
    else {
      local_159 = *(undefined1 *)*local_150;
      *local_150 = (ulonglong)puVar1;
    }
    FUN_14011750a(*param_1,&local_158);
    lVar2 = param_1[1];
    FUN_1488ebd87(&local_158,lVar2);
    FUN_140077068(&local_158,lVar2 + 0x10);
    (**(code **)(*plVar3 + 0x308))(plVar3,local_164,&local_158,0);
    FUN_1449daebe(&local_158);
  }
  if ((local_20 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488f5908 FUN_1488f5908 body=208 status=ok
// SIG undefined FUN_1488f5908(void)

void FUN_1488f5908(undefined8 *param_1,longlong param_2)

{
  undefined1 *puVar1;
  longlong *plVar2;
  undefined1 auStack_188 [36];
  undefined1 local_164 [11];
  undefined1 local_159;
  longlong local_158;
  ulonglong *local_150;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_188;
  plVar2 = (longlong *)FUN_14479d2ce(param_2 + 0x14);
  if (plVar2 != (longlong *)0x0) {
    FUN_1449daf8c(&local_158,plVar2,0);
    local_159 = 0;
    puVar1 = (undefined1 *)*local_150 + 1;
    if ((undefined1 *)local_150[1] < puVar1) {
      (**(code **)(local_158 + 0x170))(&local_158,&local_159,1);
    }
    else {
      local_159 = *(undefined1 *)*local_150;
      *local_150 = (ulonglong)puVar1;
    }
    FUN_14011750a(*param_1,&local_158);
    (**(code **)(*plVar2 + 0x308))(plVar2,local_164,&local_158,0);
    FUN_1449daebe(&local_158);
  }
  if ((local_20 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488f59da FUN_1488f59da body=103 status=ok
// SIG undefined FUN_1488f59da(void)

undefined8 FUN_1488f59da(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 * 0xc,4);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar2 / 0xc)) {
    uVar4 = uVar2 / 0xc & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar3 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0xc,4);
  }
  return uVar3;
}



// FUNCTION 1488f5a42 FUN_1488f5a42 body=147 status=ok
// SIG undefined FUN_1488f5a42(void)

void FUN_1488f5a42(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1488f5ad6 FUN_1488f5ad6 body=343 status=ok
// SIG undefined FUN_1488f5ad6(void)

undefined4 * FUN_1488f5ad6(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1488f5c2e(param_1,local_40);
  lVar9 = *param_3;
  puVar2 = (undefined8 *)param_3[1];
  *local_38 = &PTR_FUN_14a184370;
  bVar1 = *(byte *)(lVar9 + 0x18);
  *(byte *)(local_38 + 3) = bVar1;
  (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[bVar1])(local_38 + 1,lVar9 + 8);
  local_38[4] = *puVar2;
  lVar9 = puVar2[1];
  local_38[5] = lVar9;
  if (lVar9 != 0) {
    LOCK();
    *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(local_38 + 6) = 0xffffffff;
  local_44 = local_40[0];
  uVar5 = FUN_140ba40f9(local_38);
  cVar4 = FUN_1488f5d10(param_1,uVar5,local_38,&local_44);
  uVar3 = local_44;
  if (cVar4 == '\0') {
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
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      *(uint *)((longlong)local_38 + 0x34) = uVar5;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 6) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_1488f32b2(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488f5c2e FUN_1488f5c2e body=226 status=ok
// SIG undefined FUN_1488f5c2e(void)

int * FUN_1488f5c2e(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1447030e2(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x38);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x38) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 1488f5d10 FUN_1488f5d10 body=121 status=ok
// SIG undefined FUN_1488f5d10(void)

undefined8 FUN_1488f5d10(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
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
  int iVar14;
  longlong lVar15;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar14 = FUN_1488f499a(), iVar14 != -1)) {
    lVar2 = *param_1;
    lVar15 = (longlong)iVar14 * 0x38;
    FUN_14878d922(lVar2 + lVar15);
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    uVar7 = param_3[4];
    uVar8 = param_3[5];
    uVar9 = param_3[6];
    uVar10 = param_3[7];
    uVar11 = param_3[9];
    uVar12 = param_3[10];
    uVar13 = param_3[0xb];
    puVar1 = (undefined4 *)(lVar2 + 0x20 + lVar15);
    *puVar1 = param_3[8];
    puVar1[1] = uVar11;
    puVar1[2] = uVar12;
    puVar1[3] = uVar13;
    puVar1 = (undefined4 *)(lVar2 + 0x10 + lVar15);
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
    puVar1[2] = uVar9;
    puVar1[3] = uVar10;
    puVar1 = (undefined4 *)(lVar2 + lVar15);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_1488f5d8a(param_1,*param_4);
    *param_4 = iVar14;
    return 1;
  }
  return 0;
}



// FUNCTION 1488f5d8a FUN_1488f5d8a body=116 status=ok
// SIG undefined FUN_1488f5d8a(void)

void FUN_1488f5d8a(longlong *param_1,int param_2)

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



// FUNCTION 1488f5dfe FUN_1488f5dfe body=123 status=ok
// SIG undefined FUN_1488f5dfe(void)

void FUN_1488f5dfe(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4162e0;
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_1488f5e7a(param_1 + 0x12);
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_1488f5ff0(param_1 + 8);
  return;
}



// FUNCTION 1488f5e7a FUN_1488f5e7a body=52 status=ok
// SIG undefined FUN_1488f5e7a(void)

void FUN_1488f5e7a(longlong *param_1)

{
  FUN_1488f5eae();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1488f5eae FUN_1488f5eae body=321 status=ok
// SIG undefined FUN_1488f5eae(void)

void FUN_1488f5eae(longlong *param_1)

{
  longlong *plVar1;
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
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
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
      if (*(longlong *)(*local_68 + 0x48 + (longlong)iStack_4c * 0x60) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1448fc38a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488f5ff0 FUN_1488f5ff0 body=52 status=ok
// SIG undefined FUN_1488f5ff0(void)

void FUN_1488f5ff0(longlong *param_1)

{
  FUN_1488f6024();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1488f6024 FUN_1488f6024 body=89 status=ok
// SIG undefined FUN_1488f6024(void)

void FUN_1488f6024(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1488f607e FUN_1488f607e body=111 status=ok
// SIG undefined FUN_1488f607e(void)

undefined8 *
FUN_1488f607e(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 *local_38;
  undefined8 *local_30;
  code *local_28;
  undefined8 *local_20;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = &local_11;
  *param_2 = 0;
  param_2[1] = 0;
  local_20 = &local_40;
  local_28 = FUN_143ded838;
  local_40 = param_3;
  local_30 = param_2;
  local_11 = param_4;
  FUN_1488f60ee(0,&local_28,0);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488f60ee FUN_1488f60ee body=684 status=ok
// SIG undefined FUN_1488f60ee(void)

void FUN_1488f60ee(longlong *param_1,undefined8 *param_2,char param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
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
  cVar3 = (**(code **)(*param_1 + 0x300))();
  if (cVar3 == '\0') {
    plVar1 = param_1 + 0x4f;
    plVar2 = param_1 + 0x51;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    iStack_54 = 0;
    uStack_50 = 0;
    uStack_60 = plVar2;
    if ((int)param_1[0x54] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar6 = (int)param_1[0x54];
    }
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    iStack_74 = iStack_54;
    local_88 = (undefined4)local_68;
    uStack_84 = local_68._4_4_;
    uStack_80 = (undefined4)uStack_60;
    uStack_7c = uStack_60._4_4_;
    local_90 = plVar1;
    if ((iStack_54 != iVar6) || (uStack_60 != plVar2)) {
      do {
        lVar4 = *(longlong *)(*local_90 + 0x10 + (longlong)iStack_74 * 0x20);
        if (lVar4 != 0) {
          plVar7 = (longlong *)(*local_90 + (longlong)iStack_74 * 0x20 + 0x10);
          if (param_3 != '\0') {
            FUN_144837e54(lVar4,0);
            lVar4 = *plVar7;
          }
          cVar3 = FUN_140dddae6(lVar4 + 0x48);
          if ((cVar3 != '\0') &&
             (plVar7 = *(longlong **)(*plVar7 + 0x30), plVar7 != (longlong *)0x0)) {
            lVar4 = (**(code **)(*plVar7 + 8))(plVar7);
            lVar5 = FUN_146533f80();
            if ((lVar5 != 0) &&
               ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38) &&
                (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
                 == lVar5 + 0x30)))) {
              (*(code *)*param_2)(param_2[1],plVar7);
            }
          }
        }
        local_78 = local_78 & ~uStack_84;
        FUN_1449c0562(&local_88);
      } while (local_90 != plVar1 ||
               ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar2 || iStack_74 != iVar6));
    }
  }
  else {
    plVar1 = param_1 + 0x39;
    plVar2 = param_1 + 0x3b;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    iStack_54 = 0;
    uStack_50 = 0;
    uStack_60 = plVar2;
    if ((int)param_1[0x3e] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar6 = (int)param_1[0x3e];
    }
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    iStack_74 = iStack_54;
    local_88 = (undefined4)local_68;
    uStack_84 = local_68._4_4_;
    uStack_80 = (undefined4)uStack_60;
    uStack_7c = uStack_60._4_4_;
    local_90 = plVar1;
    if ((iStack_54 != iVar6) || (uStack_60 != plVar2)) {
      do {
        plVar7 = *(longlong **)(*local_90 + 0x10 + (longlong)iStack_74 * 0x20);
        if (plVar7 != (longlong *)0x0) {
          lVar4 = (**(code **)(*plVar7 + 8))(plVar7);
          lVar5 = FUN_146533f80();
          if (((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
              lVar5 + 0x30)) {
            (*(code *)*param_2)(param_2[1],plVar7);
          }
        }
        local_78 = local_78 & ~uStack_84;
        FUN_1449c0562(&local_88);
      } while (local_90 != plVar1 ||
               ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar2 || iStack_74 != iVar6));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488f639c FUN_1488f639c body=8 status=ok
// SIG undefined FUN_1488f639c(void)

undefined8 FUN_1488f639c(void)

{
  return DAT_14cb85cf0;
}



// FUNCTION 1488f63d2 FUN_1488f63d2 body=35 status=ok
// SIG undefined FUN_1488f63d2(void)

void FUN_1488f63d2(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1488f63f6(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001488f63e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x38))();
    return;
  }
  FUN_1488eba52();
  return;
}



// FUNCTION 1488f63f6 FUN_1488f63f6 body=194 status=ok
// SIG undefined FUN_1488f63f6(void)

longlong FUN_1488f63f6(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  
  plVar2 = (longlong *)FUN_146106916();
  lVar3 = *param_1;
  if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
    uVar1 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    plVar5 = plVar2 + 7;
    if ((longlong *)plVar2[8] != (longlong *)0x0) {
      plVar5 = (longlong *)plVar2[8];
    }
    iVar4 = *(int *)((longlong)plVar5 +
                    (ulonglong)
                    ((int)plVar2[9] - 1U &
                    (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                    (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)(*plVar2 + (longlong)iVar4 * 0x18);
        if (*plVar5 == lVar3) {
          if (plVar5 + 1 != (longlong *)0x0 && plVar5 != (longlong *)0x0) {
            return plVar5[1];
          }
          break;
        }
        iVar4 = (int)plVar5[2];
      } while (iVar4 != -1);
    }
  }
  if (lVar3 == 0) {
    plVar2 = (longlong *)FUN_1488eba4a();
    lVar3 = *plVar2;
  }
  else {
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 1488f64d8 FUN_1488f64d8 body=40 status=ok
// SIG undefined FUN_1488f64d8(void)

undefined8 FUN_1488f64d8(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1488f63f6(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 1488f6500 FUN_1488f6500 body=76 status=ok
// SIG undefined FUN_1488f6500(void)

undefined8 FUN_1488f6500(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_1488f63f6(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x0001488f6541. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 1488f65a2 FUN_1488f65a2 body=44 status=ok
// SIG undefined FUN_1488f65a2(void)

undefined8 FUN_1488f65a2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_14049cbd6(param_3);
  lVar2 = FUN_1411db1ae(uVar1);
  if (lVar2 != 0) {
    uVar1 = FUN_1414875dc(lVar2);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1488f65ce FUN_1488f65ce body=58 status=ok
// SIG undefined FUN_1488f65ce(void)

void FUN_1488f65ce(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_1410cfc16();
  if (lVar2 != 0) {
    cVar1 = FUN_146002902(lVar2,param_2);
    if (cVar1 != '\0') {
      FUN_1488f6608(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1488f6608 FUN_1488f6608 body=215 status=ok
// SIG undefined FUN_1488f6608(void)

void FUN_1488f6608(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  lVar3 = FUN_1488f671a();
  if ((lVar3 == 0) || (plVar1 = *(longlong **)(param_1 + 0xa0), plVar1 == (longlong *)0x0)) {
    return;
  }
  lVar4 = (**(code **)(*plVar1 + 8))(plVar1);
  lVar5 = FUN_146539ce6();
  if (lVar5 == 0) {
    return;
  }
  if (*(int *)(lVar4 + 0x38) < *(int *)(lVar5 + 0x38)) {
    return;
  }
  if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
      lVar5 + 0x30) {
    return;
  }
  cVar2 = *(char *)(lVar3 + 0x34);
  if (cVar2 == '\x02') {
    uVar6 = FUN_14479d2ce(param_1 + 0x68);
    cVar2 = FUN_1488f683e(param_1,uVar6);
  }
  else {
    if (cVar2 != '\x01') {
      if (cVar2 != '\0') {
        return;
      }
      uVar6 = FUN_14479d2ce(param_1 + 0x68);
      cVar2 = FUN_1488f683e(param_1,uVar6);
      if (cVar2 != '\0') goto LAB_1488f66ce;
      goto LAB_1488f668f;
    }
    uVar6 = FUN_14479d2ce(param_1 + 0x68);
    cVar2 = FUN_1488f6768(param_1,uVar6);
  }
  if (cVar2 == '\0') {
LAB_1488f66ce:
    FUN_14891e236(plVar1);
    return;
  }
LAB_1488f668f:
  FUN_14891e1d8(plVar1);
  return;
}



// FUNCTION 1488f66e0 FUN_1488f66e0 body=58 status=ok
// SIG undefined FUN_1488f66e0(void)

void FUN_1488f66e0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_1410cfc16();
  if (lVar2 != 0) {
    cVar1 = FUN_146002902(lVar2,param_2);
    if (cVar1 != '\0') {
      FUN_1488f6608(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1488f671a FUN_1488f671a body=78 status=ok
// SIG undefined FUN_1488f671a(void)

longlong * FUN_1488f671a(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_1464b13ac();
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



// FUNCTION 1488f6768 FUN_1488f6768 body=213 status=ok
// SIG undefined FUN_1488f6768(void)

ulonglong FUN_1488f6768(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_1410cfc16();
  if (lVar2 == 0) {
    uVar5 = 0;
  }
  else {
    local_48 = 0;
    uStack_40 = 0;
    FUN_1410cfcf6(lVar2);
    if (param_2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_1458cdfb6();
      uVar3 = FUN_144718840(param_2,uVar3);
    }
    lVar2 = local_48;
    lVar4 = (longlong)(int)uStack_40;
    if (lVar4 == 0) {
      uVar5 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    }
    else {
      lVar6 = 0;
      do {
        uVar1 = FUN_1457fbefe(*(undefined8 *)(lVar2 + lVar6),uVar3);
        uVar5 = (ulonglong)uVar1;
        if ((char)uVar1 == '\0') break;
        bVar7 = lVar4 * 8 + -8 != lVar6;
        lVar6 = lVar6 + 8;
      } while (bVar7);
    }
    if (local_48 != 0) {
      FUN_1400020a8(local_48);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 1488f683e FUN_1488f683e body=217 status=ok
// SIG undefined FUN_1488f683e(void)

ulonglong FUN_1488f683e(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_1410cfc16();
  if (lVar2 == 0) {
    uVar5 = 0;
  }
  else {
    local_48 = 0;
    uStack_40 = 0;
    FUN_1410cfcf6(lVar2);
    if (param_2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_1458cdfb6();
      uVar3 = FUN_144718840(param_2,uVar3);
    }
    lVar2 = local_48;
    lVar4 = (longlong)(int)uStack_40;
    if (lVar4 == 0) {
      uVar5 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    }
    else {
      lVar6 = 0;
      do {
        uVar1 = FUN_1457fbefe(*(undefined8 *)(lVar2 + lVar6),uVar3);
        if ((char)uVar1 != '\0') break;
        bVar7 = lVar4 * 8 + -8 != lVar6;
        lVar6 = lVar6 + 8;
      } while (bVar7);
      uVar5 = (ulonglong)uVar1 ^ 1;
    }
    if (local_48 != 0) {
      FUN_1400020a8(local_48);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488f6918 FUN_1488f6918 body=171 status=ok
// SIG undefined FUN_1488f6918(void)

void FUN_1488f6918(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_68 [32];
  undefined8 **local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140f3dc14(*(undefined8 *)(param_1 + 0xa0),local_48);
  cVar2 = FUN_144a7fca4(local_48);
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
  if (cVar2 != '\0') {
    FUN_140170a76(param_1,&DAT_14cb86238);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488f69c4 FUN_1488f69c4 body=869 status=ok
// SIG undefined FUN_1488f69c4(void)

void FUN_1488f69c4(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  code *local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_145927284();
  lVar6 = FUN_1488f671a(param_1);
  if (lVar6 != 0) {
    lVar2 = param_1 + 0x88;
    uVar7 = FUN_146539c1e();
    FUN_140005f6c(lVar2,uVar7,0,0);
    local_88 = CONCAT44(local_88._4_4_,*(undefined4 *)(lVar6 + 0x30));
    local_80 = (longlong *)0x0;
    uStack_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0xf00000d0;
    local_48 = 0;
    local_40 = 0x3f800000;
    FUN_1489013b4(lVar2,&local_38);
    FUN_140f85fd4(local_38 + 8,&local_88);
    plVar3 = (longlong *)CONCAT44(uStack_2c,local_30);
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
    FUN_1446ddc76(&local_38,"TimedArea",1);
    FUN_1489013b4(lVar2,&local_88);
    plVar3 = local_80;
    *(code **)(local_88 + 100) = local_38;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_80 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    plVar3 = *(longlong **)(param_1 + 0x88);
    plVar4 = *(longlong **)(param_1 + 0x90);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
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
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    (**(code **)(*plVar3 + 0x10))(plVar3,&local_88);
    plVar3 = local_80;
    if ((longlong *)(param_1 + 0xa0) != &local_88) {
      *(longlong *)(param_1 + 0xa0) = local_88;
      local_88 = 0;
      plVar5 = *(longlong **)(param_1 + 0xa8);
      if (local_80 != plVar5) {
        local_80 = (longlong *)0x0;
        *(longlong **)(param_1 + 0xa8) = plVar3;
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
      }
    }
    plVar3 = local_80;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_80 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
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
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    lVar6 = *(longlong *)(param_1 + 0xa0);
    if (lVar6 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x88);
      plVar3 = *(longlong **)(param_1 + 0x90);
      if (plVar3 == (longlong *)0x0) {
        local_80 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
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
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        local_80 = plVar3;
      }
      local_88 = lVar2;
      uVar7 = FUN_14891f2c4(param_1);
      FUN_14113df4c(lVar6,uVar7,&local_88);
      plVar4 = local_80;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_80 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
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
      lVar6 = *(longlong *)(param_1 + 0xa0);
      local_38 = FUN_1488f6918;
      local_30 = 0;
      FUN_148901408(&local_88,param_1);
      FUN_1448b6402(lVar6 + 0x18,&local_38,&local_88);
      FUN_1449db362(&local_88);
      (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x10))();
      FUN_1488f6608(param_1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488f6d2a FUN_1488f6d2a body=105 status=ok
// SIG undefined FUN_1488f6d2a(void)

void FUN_1488f6d2a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_146556530();
  (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))();
  *(undefined8 *)(param_1 + 0xa0) = 0;
  plVar3 = *(longlong **)(param_1 + 0xa8);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xa8) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x0001488f6d87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1488f6d94 FUN_1488f6d94 body=266 status=ok
// SIG undefined FUN_1488f6d94(void)

longlong * FUN_1488f6d94(undefined8 param_1,longlong *param_2)

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
  plVar4 = (longlong *)FUN_14001cc68(0xc0,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b4181a0;
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
  plVar4[0xf] = 0;
  plVar4[0x10] = 0;
  plVar4[0x11] = 0;
  plVar4[0x12] = 0;
  plVar4[2] = (longlong)&PTR_FUN_14b4181c0;
  plVar4[0x13] = 0;
  plVar4[0x14] = 0;
  plVar4[0x15] = 0;
  plVar4[0x16] = 0;
  plVar4[0x17] = 0;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_1489019fe(&local_30,plVar1);
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



// FUNCTION 1488f6ea2 FUN_1488f6ea2 body=370 status=ok
// SIG undefined FUN_1488f6ea2(void)

void FUN_1488f6ea2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined8 local_78 [3];
  code *local_60;
  undefined4 local_58;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = FUN_1488f7016();
  if (param_2 == 0 || lVar1 == 0) goto LAB_1488f6ede;
  if ((*(byte *)(param_2 + 99) & 8) == 0) {
    FUN_140c7ce82(param_2,1);
  }
  if (*(longlong *)(lVar1 + 0xc0) == 0) {
LAB_1488f6f34:
    lVar2 = *(longlong *)(param_2 + 0x1c8);
  }
  else {
    lVar2 = FUN_144a545f2(param_2,*(longlong *)(lVar1 + 0xc0),0);
    if (lVar2 == 0) goto LAB_1488f6f34;
  }
  FUN_141068c44(param_1,local_50);
  uVar3 = FUN_141068cca(param_1);
  FUN_140f4ea62(lVar1 + 0x18,local_78,uVar3,local_50);
  plVar4 = (longlong *)FUN_1488f7064(param_2);
  FUN_140486fc4(plVar4,lVar2,*(undefined8 *)(lVar1 + 0xc0));
  local_88 = 0;
  FUN_144927a08(plVar4,lVar1 + 0x60,0,0);
  (**(code **)(*plVar4 + 0x5f8))(plVar4,local_78[0]);
  local_60 = FUN_1488f7114;
  local_58 = 0;
  FUN_148901aa6(local_50,param_1);
  FUN_14490d954(plVar4 + 0x5e,&local_60,local_50);
  FUN_1449db362(local_50);
  FUN_140b506a4(plVar4);
  FUN_14485c47a(param_1 + 0x60,plVar4);
LAB_1488f6ede:
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488f7016 FUN_1488f7016 body=78 status=ok
// SIG undefined FUN_1488f7016(void)

longlong * FUN_1488f7016(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_1464b1442();
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



// FUNCTION 1488f7064 FUN_1488f7064 body=175 status=ok
// SIG undefined FUN_1488f7064(void)

undefined8 FUN_1488f7064(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_140d37e32();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488f7114 FUN_1488f7114 body=356 status=ok
// SIG undefined FUN_1488f7114(void)

void FUN_1488f7114(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_b8 [36];
  undefined1 local_94 [12];
  undefined1 local_88 [12];
  undefined1 local_7c [12];
  undefined8 local_70;
  undefined4 local_68;
  char local_60 [16];
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 != (longlong *)0x0) {
    uVar1 = FUN_140427846();
    plVar2 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_140427846();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
        if (lVar4 != 0) {
          lVar5 = FUN_1488f7016(param_1);
          if (lVar5 != 0) {
            local_68 = *(undefined4 *)(lVar5 + 0x50);
            local_70 = *(undefined8 *)(lVar5 + 0x48);
            FUN_141068b5c(param_1,local_60);
            if (local_60[0] == '\x01') {
              FUN_144a659ac(local_50,local_7c,4);
              FUN_141607fd8(lVar4,local_7c);
              FUN_144a659ac(local_50,local_88,3);
              FUN_141607fca(lVar4,local_88);
              uVar1 = FUN_1447210f0(param_2);
              FUN_144a659ac(local_50,local_94,2);
              FUN_146196522(lVar4,local_94,uVar1);
            }
            if (local_38 != 0) {
              FUN_1400020a8();
            }
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488f727a FUN_1488f727a body=109 status=ok
// SIG undefined FUN_1488f727a(void)

void FUN_1488f727a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  longlong *plVar5;
  
  if (param_2 != 0) {
    lVar1 = param_1 + 0x60;
    cVar4 = FUN_144729dda(lVar1);
    if (cVar4 != '\0') {
      lVar2 = FUN_14479d2ce(lVar1);
      FUN_140457ffc(lVar2 + 0x2f0,param_1);
      uVar3 = FUN_14479d2ce(lVar1);
      FUN_1401bf202(uVar3);
      plVar5 = (longlong *)FUN_14479d2ce(lVar1);
                    /* WARNING: Could not recover jumptable at 0x0001488f72dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x420))(plVar5,0,*(code **)(*plVar5 + 0x420));
      return;
    }
  }
  return;
}



// FUNCTION 1488f72ec FUN_1488f72ec body=158 status=ok
// SIG undefined FUN_1488f72ec(void)

longlong * FUN_1488f72ec(undefined8 param_1,longlong *param_2)

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
  plVar4 = (longlong *)FUN_148901f8f();
  plVar1 = plVar4 + 2;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_148902034(&local_30,plVar1);
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



// FUNCTION 1488f738e FUN_1488f738e body=1154 status=ok
// SIG undefined FUN_1488f738e(void)

void FUN_1488f738e(longlong param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8;
  undefined1 local_19c [12];
  undefined1 local_190 [12];
  undefined1 local_184 [12];
  undefined8 local_178;
  undefined4 local_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  char local_100 [16];
  undefined1 local_f0 [24];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined1 local_c8 [50];
  byte local_96;
  longlong local_88;
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  lVar3 = FUN_1488f7812();
  if (((param_2 == 0 || lVar3 == 0) || (lVar4 = FUN_1447210f0(param_2), lVar4 == 0)) ||
     (((*(longlong *)(lVar3 + 0x90) == 0 ||
       (plVar5 = (longlong *)FUN_144a545f2(param_2,*(longlong *)(lVar3 + 0x90),0),
       plVar5 == (longlong *)0x0)) &&
      (plVar5 = *(longlong **)(param_2 + 0x1c8), plVar5 == (longlong *)0x0)))) goto LAB_1488f73d1;
  FUN_1411371f6(local_c8);
  local_96 = local_96 | 6;
  (**(code **)(*plVar5 + 0x4a8))(plVar5,&local_168,*(undefined8 *)(lVar3 + 0x90),0);
  local_148 = *(double *)(lVar3 + 0x50) + local_148;
  dStack_140 = *(double *)(lVar3 + 0x58) + dStack_140;
  local_138 = *(double *)(lVar3 + 0x60) + local_138;
  dStack_130 = *(double *)(lVar3 + 0x68) + dStack_130;
  local_168 = *(double *)(lVar3 + 0x30) + local_168;
  dStack_160 = *(double *)(lVar3 + 0x38) + dStack_160;
  local_158 = *(double *)(lVar3 + 0x40) + local_158;
  dStack_150 = *(double *)(lVar3 + 0x48) + dStack_150;
  local_128 = *(double *)(lVar3 + 0x70) + local_128;
  dStack_120 = *(double *)(lVar3 + 0x78) + dStack_120;
  local_118 = *(double *)(lVar3 + 0x80) + local_118;
  dStack_110 = *(double *)(lVar3 + 0x88) + dStack_110;
  lVar6 = FUN_14092c0b8();
  lVar8 = lVar6 + 0x58;
  lVar7 = FUN_14479d2ce(lVar8);
  if (lVar7 == 0) {
    if (*(longlong *)(lVar6 + 0x60) != 0) {
      lVar7 = FUN_140007850();
      cVar2 = (*(code *)PTR_FUN_14c758760)();
      if ((lVar7 == 0) || (cVar2 == '\0')) {
        FUN_14485c47a(lVar8,lVar7);
        if (lVar7 == 0) goto LAB_1488f75d1;
      }
      else {
        uVar1 = *(uint *)(lVar7 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar6 = 0;
        }
        if ((*(uint *)(lVar6 + 8) & 0x8400000) == 0) {
          FUN_14485c47a(lVar8,lVar7);
        }
      }
      if ((*(uint *)(lVar7 + 8) >> 0x1e & 1) == 0) goto LAB_1488f74ee;
    }
LAB_1488f75d1:
    lVar6 = 0;
  }
  else {
LAB_1488f74ee:
    lVar8 = FUN_144a797b2();
    if ((((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8
           ) != lVar8 + 0x30)) || (lVar8 = FUN_140929c72(), lVar8 == 0)) ||
       (*(int *)(lVar7 + 0x38) < *(int *)(lVar8 + 0x38))) goto LAB_1488f75d1;
    lVar6 = 0;
    if (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
        lVar8 + 0x30) {
      lVar6 = lVar7;
    }
  }
  lVar8 = FUN_141037e38(lVar4,lVar6,&local_168,local_c8);
  if (lVar8 != 0) {
    lVar6 = param_1 + 0x60;
    FUN_14485c47a(lVar6,lVar8);
    local_100[0] = '\0';
    local_d8 = 0;
    FUN_1489020dc(local_100,lVar6);
    plVar9 = (longlong *)FUN_1447262c2(local_100);
    if (plVar9 == (longlong *)0x0) {
LAB_1488f7778:
      FUN_144a5ac3a(local_100);
    }
    else {
      uVar10 = FUN_140427846();
      plVar9 = (longlong *)(**(code **)(*plVar9 + 0x288))(plVar9,uVar10);
      if (plVar9 == (longlong *)0x0) goto LAB_1488f7778;
      uVar10 = FUN_140427846();
      plVar11 = (longlong *)FUN_144718840(plVar9,uVar10);
      if (plVar9 == plVar11) goto LAB_1488f7778;
      FUN_144a5ac3a(local_100);
      if ((plVar11 != (longlong *)0x0) &&
         (lVar7 = (**(code **)(*plVar11 + 0x10))(plVar11), lVar7 != 0)) {
        local_170 = *(undefined4 *)(lVar3 + 0x20);
        local_178 = *(undefined8 *)(lVar3 + 0x18);
        FUN_141068b5c(param_1,local_100);
        if (local_100[0] == '\x01') {
          FUN_144a659ac(local_f0,local_184,4);
          FUN_141607fd8(lVar7,local_184);
          FUN_144a659ac(local_f0,local_190,3);
          FUN_141607fca(lVar7,local_190);
          FUN_144a659ac(local_f0,local_19c,2);
          FUN_146196522(lVar7,local_19c,lVar4);
        }
        if (CONCAT44(uStack_d4,local_d8) != 0) {
          FUN_1400020a8();
        }
      }
    }
    plVar9 = *(longlong **)(lVar8 + 0x1c8);
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x588))(plVar9,2);
      lVar4 = FUN_14479d2ce(lVar6);
      if ((*(byte *)(lVar4 + 100) & 1) == 0) {
        (**(code **)(*plVar9 + 0x490))(plVar9,plVar5,&DAT_14cadad98,*(undefined8 *)(lVar3 + 0x90));
        local_1a8 = 0;
        FUN_144927a08(plVar9,lVar3 + 0x30,0,0);
        local_1a8 = 0;
        FUN_14113775c(lVar8,&local_168,0,0);
      }
    }
  }
  if (local_88 != 0) {
    if (local_78 == (longlong *)0x0) {
      local_78 = local_68;
    }
    (**(code **)(*local_78 + 0x10))();
  }
LAB_1488f73d1:
  if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488f7812 FUN_1488f7812 body=78 status=ok
// SIG undefined FUN_1488f7812(void)

longlong * FUN_1488f7812(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_1464b14d8();
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



// FUNCTION 1488f7860 FUN_1488f7860 body=56 status=ok
// SIG undefined FUN_1488f7860(void)

void FUN_1488f7860(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_14479d2ce((undefined8 *)(param_1 + 0x60));
    if (lVar1 != 0) {
      FUN_140aeefbc(lVar1,0,1);
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
  }
  return;
}



// FUNCTION 1488f789c FUN_1488f789c body=158 status=ok
// SIG undefined FUN_1488f789c(void)

longlong * FUN_1488f789c(undefined8 param_1,longlong *param_2)

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
  plVar4 = (longlong *)FUN_148902130();
  plVar1 = plVar4 + 2;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_1489021d4(&local_30,plVar1);
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



// FUNCTION 1488f793e FUN_1488f793e body=94 status=ok
// SIG undefined FUN_1488f793e(void)

void FUN_1488f793e(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1488f799c();
  if (((lVar1 != 0) && (param_2 != 0)) && (*(longlong *)(lVar1 + 0x20) != 0)) {
    lVar2 = FUN_144a78b9e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      FUN_1487bd4ea(param_2,lVar1 + 0x18);
      return;
    }
  }
  return;
}



// FUNCTION 1488f799c FUN_1488f799c body=78 status=ok
// SIG undefined FUN_1488f799c(void)

longlong * FUN_1488f799c(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_1464b156e();
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



// FUNCTION 1488f79ea FUN_1488f79ea body=93 status=ok
// SIG undefined FUN_1488f79ea(void)

void FUN_1488f79ea(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1488f799c();
  if (param_2 != 0 && lVar1 != 0) {
    lVar2 = FUN_144a78b9e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      FUN_1487bdc90(param_2,lVar1 + 0x18);
      return;
    }
  }
  return;
}



// FUNCTION 1488f7a4c FUN_1488f7a4c body=234 status=ok
// SIG undefined FUN_1488f7a4c(void)

longlong * FUN_1488f7a4c(undefined8 param_1,longlong *param_2)

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
  plVar4 = (longlong *)FUN_14001cc68(0x70,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b418350;
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
  plVar4[2] = (longlong)&PTR_FUN_14b418370;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_1489022ca(&local_30,plVar1);
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



// FUNCTION 1488f7b3a FUN_1488f7b3a body=213 status=ok
// SIG undefined FUN_1488f7b3a(void)

void FUN_1488f7b3a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  code *local_40;
  undefined4 local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x58) == '\x01') {
    lVar2 = FUN_1410d0064();
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x170) != 0)) {
      lVar3 = FUN_1411531be();
      lVar2 = *(longlong *)(lVar2 + 0x170);
      if (((lVar2 != 0) &&
          (((lVar3 != 0 && (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 != 0)) &&
           (*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38))))) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) {
        local_40 = FUN_1488f7c10;
        local_38 = 0;
        FUN_148902372(local_30,param_1);
        FUN_1403524de(lVar2 + 0x4b0,&local_40,local_30);
        FUN_1449db362(local_30);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488f7c10 FUN_1488f7c10 body=167 status=ok
// SIG undefined FUN_1488f7c10(void)

void FUN_1488f7c10(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = FUN_1488f8006();
  if ((lVar3 != 0) && (plVar1 = *(longlong **)(lVar3 + 0x20), plVar1 != (longlong *)0x0)) {
    uVar4 = FUN_141068cca(param_1);
    FUN_1410d9770(param_1,local_58);
    cVar2 = (**(code **)(*plVar1 + 0x28))(plVar1,local_58,uVar4,param_2);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (cVar2 == '\0') goto LAB_1488f7c8e;
  }
  FUN_140170a76(param_1,&DAT_14cb86220);
LAB_1488f7c8e:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488f7cb8 FUN_1488f7cb8 body=121 status=ok
// SIG undefined FUN_1488f7cb8(void)

void FUN_1488f7cb8(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 0x58) == '\x01') {
    lVar2 = FUN_1410d0064();
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x170) != 0)) {
      lVar3 = FUN_1411531be();
      lVar2 = *(longlong *)(lVar2 + 0x170);
      if (((lVar2 != 0) &&
          (((lVar3 != 0 && (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 != 0)) &&
           (*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38))))) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) {
        FUN_140457ffc(lVar2 + 0x4b0,param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1488f7d32 FUN_1488f7d32 body=386 status=ok
// SIG undefined FUN_1488f7d32(void)

longlong * FUN_1488f7d32(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_1488f7e43:
    *puVar5 = &PTR_LAB_14a1c8830;
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
    *puVar5 = &PTR_FUN_14b418410;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1488f7e43;
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
    *puVar5 = &PTR_LAB_14a1c8830;
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
    *puVar5 = &PTR_FUN_14b418410;
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



// FUNCTION 1488f8006 FUN_1488f8006 body=78 status=ok
// SIG undefined FUN_1488f8006(void)

longlong * FUN_1488f8006(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_1464b1604();
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



// FUNCTION 1488f805e FUN_1488f805e body=63 status=ok
// SIG undefined FUN_1488f805e(void)

longlong FUN_1488f805e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148902eee(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x30 + *param_1;
  FUN_148902ed2(lVar2);
  return lVar2;
}



// FUNCTION 1488f809e FUN_1488f809e body=2059 status=ok
// SIG undefined FUN_1488f809e(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1488f809e(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 ****ppppuVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 ***pppuVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong lVar15;
  bool bVar16;
  undefined4 uVar17;
  undefined1 auStack_1278 [32];
  undefined8 ***local_1258;
  undefined8 local_1250;
  undefined8 uStack_1248;
  longlong local_1238;
  undefined8 local_1230;
  undefined8 local_1228;
  undefined4 local_1220;
  longlong local_1218;
  longlong local_1210 [5];
  undefined4 local_11e8;
  undefined8 ***local_11a8;
  ulonglong uStack_11a0;
  undefined8 local_1198;
  ushort local_1190;
  byte local_1188;
  longlong local_1178;
  undefined1 local_116c;
  undefined1 local_1168;
  undefined4 uStack_1164;
  undefined4 local_1160;
  undefined4 uStack_115c;
  undefined8 local_1158;
  undefined8 local_1150;
  undefined4 local_1148;
  undefined8 local_1144;
  undefined4 local_113c;
  undefined5 local_1138;
  undefined3 uStack_1133;
  undefined5 uStack_1130;
  undefined8 local_1128;
  undefined2 local_1120;
  longlong local_1118;
  int local_1110;
  undefined8 local_1108;
  longlong lStack_1100;
  undefined8 local_10f8;
  undefined8 uStack_10f0;
  undefined8 local_10e8;
  undefined8 uStack_10e0;
  undefined8 local_10d8;
  undefined8 uStack_10d0;
  undefined8 local_10c8;
  undefined8 local_10b8 [13];
  undefined1 local_1050 [40];
  longlong local_1028;
  longlong local_1018 [3];
  longlong local_1000;
  longlong *local_98;
  undefined8 local_90;
  undefined1 local_88 [40];
  ulonglong local_60;
  undefined8 uStack_48;
  
  uStack_48 = 0x1488f80b4;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1278;
  local_1230 = param_3;
  lVar5 = FUN_1488f88aa();
  local_1238 = FUN_1410d0064(param_1);
  if (local_1238 == 0 || (param_2 == 0 || lVar5 == 0)) goto LAB_1488f8340;
  lVar13 = *(longlong *)(lVar5 + 0xe0);
  if (lVar13 != 0) {
    uVar6 = FUN_141068cca(param_1);
    FUN_1410d9770(param_1,local_1018);
    cVar2 = FUN_143de47f6(lVar13,param_2,local_1018,uVar6);
    if (local_1000 != 0) {
      FUN_1400020a8();
    }
    if (cVar2 == '\0') goto LAB_1488f8340;
  }
  if ((longlong)*(int *)(lVar5 + 0xd8) != 0) {
    lVar13 = *(longlong *)(lVar5 + 0xd0);
    lVar15 = (longlong)*(int *)(lVar5 + 0xd8) << 4;
    do {
      ppppuVar7 = (undefined8 ****)FUN_141068cca(param_1);
      FUN_1410d9770(param_1,local_1018);
      local_1258 = ppppuVar7;
      FUN_143d26f48(lVar5,&local_1178,lVar13,local_1018);
      cVar2 = FUN_1412b46ca(&local_1178);
      if (local_1000 != 0) {
        FUN_1400020a8();
      }
      if (cVar2 == '\0') goto LAB_1488f8340;
      lVar13 = lVar13 + 0x10;
      lVar15 = lVar15 + -0x10;
    } while (lVar15 != 0);
  }
  local_1218 = 0;
  if (*(longlong *)(lVar5 + 0x50) == 0) {
    FUN_141068c44(param_1,&local_1178);
    uVar6 = FUN_141068cca(param_1);
    plVar8 = local_1018;
    FUN_140f4ea62(lVar5 + 0x18,plVar8,uVar6,&local_1178);
  }
  else {
    FUN_141068c44(param_1,local_1018);
    local_1178 = FUN_141068cca(param_1);
    pcVar1 = *(code **)(lVar5 + 0x50);
    plVar8 = (longlong *)(lVar5 + 0x70);
    if (*(longlong **)(lVar5 + 0x60) != (longlong *)0x0) {
      plVar8 = *(longlong **)(lVar5 + 0x60);
    }
    uVar6 = (**(code **)(*plVar8 + 8))();
    plVar8 = local_1210;
    (*pcVar1)(plVar8,uVar6,&local_1178,local_1018);
  }
  local_1218 = *plVar8;
  if (local_1218 == 0) goto LAB_1488f8340;
  FUN_1446dcdd4(local_88,&local_1218);
  plVar8 = (longlong *)FUN_1400d6974(local_88);
  if (plVar8 == (longlong *)0x0) goto LAB_1488f8340;
  local_98 = (longlong *)0x0;
  local_90 = 0x1000000000;
  (**(code **)(*plVar8 + 0x50))(plVar8,param_2,local_1018,0);
  uVar3 = FUN_140fb0704(local_1018,0,0xbf800000);
  if ((-1 < (int)uVar3) && ((int)uVar3 < (int)local_90)) {
    plVar8 = local_1018;
    if (local_98 != (longlong *)0x0) {
      plVar8 = local_98;
    }
    plVar8 = (longlong *)FUN_1400d690e(plVar8 + (ulonglong)uVar3 * 0x1f);
    if (plVar8 != (longlong *)0x0) {
      lVar13 = (**(code **)(*plVar8 + 8))(plVar8);
      lVar15 = FUN_14653ac1a();
      if (((lVar15 != 0) && (*(int *)(lVar15 + 0x38) <= *(int *)(lVar13 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(lVar15 + 0x38) * 8) ==
          lVar15 + 0x30)) {
        ppppuVar7 = (undefined8 ****)FUN_141068cca(param_1);
        FUN_1410d9770(param_1,&local_1178);
        local_1220 = *(undefined4 *)(lVar5 + 0xf8);
        local_1228 = *(undefined8 *)(lVar5 + 0xf0);
        local_1258 = ppppuVar7;
        FUN_14883b542(lVar5,local_1050,&local_1228,&local_1178);
        if (CONCAT44(uStack_115c,local_1160) != 0) {
          FUN_1400020a8();
        }
        cVar2 = FUN_1401144ce(local_1050);
        if (cVar2 != '\0') {
          if (*(char *)(lVar5 + 0xfc) == '\x01') {
            uVar6 = FUN_1410d0064(param_1);
            plVar9 = (longlong *)FUN_14007a5e6(uVar6);
            if ((plVar9 != (longlong *)0x0) &&
               (cVar2 = (**(code **)(*plVar9 + 200))(plVar9,local_1050), cVar2 != '\0'))
            goto LAB_1488f8463;
          }
          local_116c = 0;
          local_1168 = 0;
          uStack_1164 = 0;
          local_1160 = 0;
          local_1158 = 0;
          local_1150 = DAT_14cb7bd68;
          local_1148 = DAT_14cb7bd70;
          local_1144 = DAT_14cb7bd80;
          local_113c = DAT_14cb7bd88;
          local_1128 = 0;
          local_1120 = 0;
          local_1118 = 0;
          local_1138 = 0;
          uStack_1133 = 0;
          uStack_1130 = 0;
          local_1110 = 0xc000;
          local_1108 = 0;
          lStack_1100 = 0;
          local_10f8 = 0;
          uStack_10f0 = 0;
          local_10e8 = 0;
          uStack_10e0 = 0;
          local_10d8 = 0;
          uStack_10d0 = 0;
          local_10c8 = 0;
          local_1178 = param_2;
          if (DAT_14c950c29 == '\x01') {
            FUN_14689c22e(param_2);
          }
          local_10f8 = *(undefined8 *)(lVar5 + 0x138);
          lVar13 = *(longlong *)(param_2 + 0x1c8);
          if (lVar13 == 0) {
            puVar11 = &DAT_14c8464e0;
            uVar4 = (undefined4)DAT_14c8464f0;
            uVar17 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
          }
          else {
            puVar11 = (undefined8 *)(lVar13 + 0x260);
            uVar4 = (undefined4)*(undefined8 *)(lVar13 + 0x270);
            uVar17 = (undefined4)((ulonglong)*(undefined8 *)(lVar13 + 0x270) >> 0x20);
          }
          uStack_10f0 = *puVar11;
          local_10e8 = puVar11[1];
          uStack_10e0 = CONCAT44(uVar17,uVar4);
          puVar11 = &DAT_14c846480;
          if (lVar13 != 0) {
            puVar11 = (undefined8 *)(lVar13 + 0x240);
          }
          puVar14 = local_10b8;
          for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
            *puVar14 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar14 = puVar14 + 1;
          }
          lVar13 = *(longlong *)(lVar5 + 0x148);
          lStack_1100 = param_2;
          if (lVar13 == 0) {
            uVar6 = FUN_1418621d0();
            lVar13 = FUN_14477b664(uVar6);
            *(longlong *)(lVar5 + 0x148) = lVar13;
          }
          bVar16 = true;
          if (*(longlong *)(lVar5 + 0x150) == 0) {
            if (*(longlong *)(lVar5 + 0x140) == 0) {
              bVar16 = false;
              goto LAB_1488f860d;
            }
            if (lVar13 != 0) {
              plVar9 = *(longlong **)(lVar13 + 0xb8);
              if ((plVar9 == (longlong *)0x0) ||
                 (cVar2 = (**(code **)(*plVar9 + 0x108))(), cVar2 == '\0')) {
                lVar15 = 0;
              }
              else {
                uVar6 = (**(code **)(*plVar9 + 0x110))(plVar9);
                lVar15 = FUN_144aff482(uVar6,(longlong *)(lVar5 + 0x140));
              }
              *(longlong *)(lVar5 + 0x150) = lVar15;
              lVar13 = *(longlong *)(lVar5 + 0x148);
              bVar16 = lVar15 != 0;
              goto LAB_1488f860d;
            }
            local_1120 = local_1120 & 0xff;
LAB_1488f8619:
            lVar13 = FUN_1418621d0();
          }
          else {
LAB_1488f860d:
            local_1120 = CONCAT11(bVar16,(undefined1)local_1120);
            if (lVar13 == 0) goto LAB_1488f8619;
          }
          ppppuVar7 = *(undefined8 *****)(lVar5 + 0x140);
          uVar10 = FUN_14477b664(lVar13);
          uVar6 = *(undefined8 *)(lVar5 + 0x150);
          local_11a8 = ppppuVar7;
          uVar10 = FUN_14477b664(uVar10);
          uStack_11a0 = FUN_14477b664(uVar10);
          local_1198 = uVar6;
          FUN_1411f1bdc(local_1210,&local_11a8);
          if ((local_1118 != CONCAT71(local_1210[0]._1_7_,(undefined1)local_1210[0])) ||
             (local_1110 != 0xc000)) {
            local_1110 = 0xc000;
            local_1108 = 0;
            local_1118 = CONCAT71(local_1210[0]._1_7_,(undefined1)local_1210[0]);
          }
          FUN_140ac173c(&local_1150,local_1050);
          local_1210[0]._0_1_ = 0;
          local_11e8 = 0;
          FUN_1456bb102(local_1210,param_2);
          FUN_1447c3578(lVar5 + 0x100,&local_11a8,local_1210);
          uVar4 = FUN_1405d5f74(&local_11a8);
          pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_1188 * 0x120));
          if (pcVar1 != (code *)0x0) {
            ppppuVar7 = &local_11a8;
            if (0x18 < local_1190) {
              ppppuVar7 = (undefined8 ****)local_11a8;
            }
            (*pcVar1)(ppppuVar7);
          }
          if (0x18 < local_1190) {
            FUN_1400020a8(local_11a8);
          }
          FUN_144a5ac3a(local_1210);
          local_11a8 = (undefined8 ***)0x0;
          uStack_11a0 = 0;
          FUN_1488d0b40(local_1210,plVar8 + 0x12);
          local_1250 = 0;
          uStack_1248 = 0;
          local_1258 = &local_11a8;
          FUN_1411f3ef0(local_1238,local_1210,&local_1178,uVar4);
          FUN_140485912(local_1210);
          if (*(longlong *)(lVar5 + 0x90) != 0) {
            if ((longlong)(int)uStack_11a0 != 0) {
              lVar13 = (longlong)(int)uStack_11a0 * 0x300;
              pppuVar12 = local_11a8;
              do {
                FUN_14136441e(pppuVar12,0);
                pcVar1 = *(code **)(lVar5 + 0x90);
                plVar8 = *(longlong **)(lVar5 + 0xa0);
                if (*(longlong **)(lVar5 + 0xa0) == (longlong *)0x0) {
                  plVar8 = (longlong *)(lVar5 + 0xb0);
                }
                uVar6 = (**(code **)(*plVar8 + 8))();
                (*pcVar1)(uVar6);
                pppuVar12 = pppuVar12 + 0x60;
                lVar13 = lVar13 + -0x300;
              } while (lVar13 != 0);
            }
          }
          FUN_14111cc1e(local_1230,&local_11a8);
          FUN_140771728(local_11a8,uStack_11a0 & 0xffffffff);
          if (local_11a8 != (undefined8 ***)0x0) {
            FUN_1400020a8();
          }
        }
LAB_1488f8463:
        if (local_1028 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  FUN_14034c5a2(local_1018);
LAB_1488f8340:
  if ((local_60 ^ (ulonglong)auStack_1278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488f88aa FUN_1488f88aa body=78 status=ok
// SIG undefined FUN_1488f88aa(void)

longlong * FUN_1488f88aa(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_1464b1730();
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



// FUNCTION 1488f88f8 FUN_1488f88f8 body=324 status=ok
// SIG undefined FUN_1488f88f8(void)

void FUN_1488f88f8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  code *local_f8;
  undefined4 local_f0;
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  longlong *local_a8;
  longlong local_98 [4];
  longlong local_78;
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar1 = FUN_1488f8a3e();
  if (lVar1 != 0 && param_2 != 0) {
    local_a8 = (longlong *)0x0;
    local_78 = 0;
    local_68 = (longlong *)0x0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_c0 = FUN_141068cca(param_1);
    FUN_141068c44(param_1,&local_d8);
    local_f8 = FUN_1488f8c0e;
    local_f0 = 0;
    FUN_1488f8a8c(local_e8,param_1);
    uVar2 = FUN_1410d0064(param_1);
    local_108 = local_e8;
    FUN_1411cff2e(param_1 + 0x60,lVar1 + 0x158,uVar2,&local_d8);
    FUN_1449db362(local_e8);
    if (local_78 != 0) {
      plVar3 = local_68;
      if (local_68 == (longlong *)0x0) {
        plVar3 = local_58;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_b8 != 0) {
      plVar3 = local_a8;
      if (local_a8 == (longlong *)0x0) {
        plVar3 = local_98;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488f8a3e FUN_1488f8a3e body=78 status=ok
// SIG undefined FUN_1488f8a3e(void)

longlong * FUN_1488f8a3e(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_1464b1cbc();
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



// FUNCTION 1488f8a8c FUN_1488f8a8c body=386 status=ok
// SIG undefined FUN_1488f8a8c(void)

longlong * FUN_1488f8a8c(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_1488f8b9d:
    *puVar5 = &PTR_LAB_149e020b0;
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
    *puVar5 = &PTR_FUN_14b4185b0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1488f8b9d;
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
    *puVar5 = &PTR_LAB_149e020b0;
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
    *puVar5 = &PTR_FUN_14b4185b0;
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



// FUNCTION 1488f8c0e FUN_1488f8c0e body=292 status=ok
// SIG undefined FUN_1488f8c0e(void)

void FUN_1488f8c0e(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong uStack_40;
  undefined1 local_38 [4];
  char local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_140a262da(param_1 + 0x60);
  if (cVar1 != '\0') {
    local_48 = 0;
    uStack_40 = 0;
    if (*(int *)(param_1 + 0x40) < 1) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_14479d2ce(*(undefined8 *)(param_1 + 0x38));
    }
    FUN_1488f809e(param_1,uVar2,&local_48);
    uVar2 = FUN_1410d0064(param_1);
    plVar3 = (longlong *)FUN_14007a5e6(uVar2);
    uVar4 = uStack_40 & 0xffffffff;
    if (plVar3 != (longlong *)0x0) {
      if ((int)uStack_40 == 0) {
        uVar4 = 0;
      }
      else {
        lVar6 = (longlong)(int)uStack_40 * 0x300;
        lVar5 = local_48;
        do {
          uVar2 = FUN_14136441e(lVar5,0);
          cVar1 = FUN_1415b545a(uVar2);
          if (cVar1 != '\0') {
            (**(code **)(*plVar3 + 0x10))(plVar3,local_38,uVar2,lVar5);
            if (local_34 == '\x01') {
              local_34 = '\0';
            }
          }
          lVar5 = lVar5 + 0x300;
          lVar6 = lVar6 + -0x300;
        } while (lVar6 != 0);
        uVar4 = uStack_40 & 0xffffffff;
      }
    }
    FUN_140771728(local_48,uVar4);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488f8d42 FUN_1488f8d42 body=158 status=ok
// SIG undefined FUN_1488f8d42(void)

longlong * FUN_1488f8d42(undefined8 param_1,longlong *param_2)

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
  plVar4 = (longlong *)FUN_1489032e4();
  plVar1 = plVar4 + 2;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_1489033d8(&local_30,plVar1);
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



// FUNCTION 1488f8de6 FUN_1488f8de6 body=211 status=ok
// SIG undefined FUN_1488f8de6(void)

void FUN_1488f8de6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  
  if (*(char *)(param_1 + 0x58) == '\x01') {
    plVar9 = *(longlong **)(param_1 + 0x10);
    bVar3 = true;
    if (plVar9 == (longlong *)0x0) {
LAB_1488f8e42:
      uVar8 = 0;
      plVar9 = (longlong *)0x0;
    }
    else {
      iVar7 = (int)plVar9[1];
      do {
        if (iVar7 == 0) goto LAB_1488f8e42;
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
      uVar8 = *(undefined8 *)(param_1 + 8);
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
      bVar3 = false;
    }
    uVar5 = DAT_14cb85d58;
    lVar10 = (longlong)(int)DAT_14cb85d58;
    DAT_14cb85d58 = DAT_14cb85d58 + 1;
    if (DAT_14cb85d5c < DAT_14cb85d58) {
      FUN_148903480(&DAT_14cb85d50,uVar5);
    }
    lVar4 = DAT_14cb85d50;
    *(undefined8 *)(DAT_14cb85d50 + lVar10 * 0x10) = uVar8;
    *(longlong **)(lVar4 + 8 + lVar10 * 0x10) = plVar9;
    if (!bVar3) {
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
                    /* WARNING: Could not recover jumptable at 0x0001488f8e9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar9 + 0x10))(plVar9);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1488f8eba FUN_1488f8eba body=205 status=ok
// SIG undefined FUN_1488f8eba(void)

void FUN_1488f8eba(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *plStack_20;
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x58) == '\x01') {
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar3 == (longlong *)0x0) {
LAB_1488f8efa:
      local_28 = 0;
      plStack_20 = (longlong *)0x0;
    }
    else {
      iVar5 = (int)plVar3[1];
      do {
        if (iVar5 == 0) goto LAB_1488f8efa;
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
      local_28 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      plStack_20 = plVar3;
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
    local_18 = &local_28;
    FUN_148903506(&DAT_14cb85d50);
    plVar3 = plStack_20;
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_20 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_20)(plStack_20);
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
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488f8f88 FUN_1488f8f88 body=250 status=ok
// SIG undefined FUN_1488f8f88(void)

void FUN_1488f8f88(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  
  if (param_2 != 0) {
    uVar6 = FUN_145a8464a();
    lVar7 = FUN_144718840(param_2,uVar6);
    if (lVar7 != 0) {
      plVar8 = *(longlong **)(param_1 + 0x10);
      bVar3 = true;
      if (plVar8 == (longlong *)0x0) {
LAB_1488f900e:
        uVar6 = 0;
        plVar8 = (longlong *)0x0;
      }
      else {
        iVar5 = (int)plVar8[1];
        do {
          if (iVar5 == 0) goto LAB_1488f900e;
          LOCK();
          iVar4 = (int)plVar8[1];
          bVar9 = iVar5 == iVar4;
          if (bVar9) {
            *(int *)(plVar8 + 1) = iVar5 + 1;
            iVar4 = iVar5;
          }
          iVar5 = iVar4;
          UNLOCK();
        } while (!bVar9);
        uVar6 = *(undefined8 *)(param_1 + 8);
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
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
        bVar3 = false;
      }
      iVar5 = *(int *)(lVar7 + 0x10);
      *(uint *)(lVar7 + 0x10) = iVar5 + 1U;
      if (*(uint *)(lVar7 + 0x14) < iVar5 + 1U) {
        FUN_148903480((longlong *)(lVar7 + 8),iVar5);
      }
      lVar7 = *(longlong *)(lVar7 + 8);
      *(undefined8 *)(lVar7 + (longlong)iVar5 * 0x10) = uVar6;
      *(longlong **)(lVar7 + 8 + (longlong)iVar5 * 0x10) = plVar8;
      if (!bVar3) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
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
                    /* WARNING: Could not recover jumptable at 0x0001488f9064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar8 + 0x10))(plVar8);
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1488f9082 FUN_1488f9082 body=238 status=ok
// SIG undefined FUN_1488f9082(void)

void FUN_1488f9082(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    uVar6 = FUN_145a8464a();
    lVar7 = FUN_144718840(param_2,uVar6);
    if (lVar7 != 0) {
      plVar3 = *(longlong **)(param_1 + 0x10);
      if (plVar3 == (longlong *)0x0) {
LAB_1488f90e3:
        local_38 = 0;
        plStack_30 = (longlong *)0x0;
      }
      else {
        iVar5 = (int)plVar3[1];
        do {
          if (iVar5 == 0) goto LAB_1488f90e3;
          LOCK();
          iVar4 = (int)plVar3[1];
          bVar8 = iVar5 == iVar4;
          if (bVar8) {
            *(int *)(plVar3 + 1) = iVar5 + 1;
            iVar4 = iVar5;
          }
          iVar5 = iVar4;
          UNLOCK();
        } while (!bVar8);
        local_38 = *(undefined8 *)(param_1 + 8);
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        plStack_30 = plVar3;
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
      local_28 = &local_38;
      FUN_148903506(lVar7 + 8);
      plVar3 = plStack_30;
      if (plStack_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_30 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_30)(plStack_30);
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488f9184 FUN_1488f9184 body=234 status=ok
// SIG undefined FUN_1488f9184(void)

longlong * FUN_1488f9184(undefined8 param_1,longlong *param_2)

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
  plVar4 = (longlong *)FUN_14001cc68(0x70,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b418670;
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
  plVar4[2] = (longlong)&PTR_FUN_14b418690;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_14890365a(&local_30,plVar1);
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



// FUNCTION 1488f9272 FUN_1488f9272 body=629 status=ok
// SIG undefined FUN_1488f9272(void)

void FUN_1488f9272(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [32];
  code *local_78;
  undefined4 local_70;
  undefined1 local_68 [24];
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = FUN_1488f94e8();
  if (param_2 != 0 && lVar3 != 0) {
    lVar4 = FUN_140fb15e0();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
         ) == lVar4 + 0x30)) {
      local_78 = FUN_1488f9536;
      local_70 = 0;
      FUN_148903702(local_68,param_1);
      FUN_140fee05c(param_2 + 0x508,&local_78,local_68);
      FUN_1449db362(local_68);
      local_78 = (code *)&LAB_1488f9576;
      local_70 = 0;
      FUN_148903bec(local_68,param_1,&local_78);
      FUN_1457b5dfe(param_2 + 0x3b8,&local_78,local_68);
      FUN_1449db362(local_68);
      uVar1 = FUN_1437ea93c(param_2);
      *(undefined1 *)(param_1 + 0x98) = uVar1;
      if (*(char *)(lVar3 + 0x52) == '\x01') {
        FUN_1410d9770(param_1,local_68);
        FUN_1447325ac(local_68,&local_78,1);
        FUN_1400bc96c(param_2 + 0x390,&local_78);
        if (local_50 != 0) {
          FUN_1400020a8();
        }
      }
      if ((*(char *)(lVar3 + 0x50) == '\x01') && (*(char *)(param_1 + 0x98) == '\0')) {
        FUN_140af934a(param_2,1);
      }
      cVar2 = FUN_140d0050e(param_2);
      if (cVar2 != '\0') {
        if (*(char *)(lVar3 + 0x51) == '\x01') {
          FUN_14152b6d4(param_2,0);
        }
        else {
          FUN_140170a76(param_1,&DAT_14cb86280);
        }
      }
      cVar2 = FUN_140114204((undefined8 *)(lVar3 + 0x18));
      if (cVar2 != '\0') {
        *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(lVar3 + 0x20);
        *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(lVar3 + 0x18);
        FUN_1447715ec(param_1 + 0x70,lVar3 + 0x28);
        uVar5 = FUN_141068cca(param_1);
        FUN_141068c44(param_1,local_68);
        FUN_140d84843(param_1 + 0x60,local_68,&DAT_14c948618,uVar5);
        local_78 = FUN_1488f9582;
        local_70 = 0;
        FUN_1489041c0(local_68,param_1);
        FUN_1489040d8(param_2 + 0x3d0,&local_78,local_68);
        FUN_1449db362(local_68);
        FUN_147e22fdc(param_2);
        FUN_1488f9582(param_1);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488f94e8 FUN_1488f94e8 body=78 status=ok
// SIG undefined FUN_1488f94e8(void)

longlong * FUN_1488f94e8(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_1464b1de8();
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



// FUNCTION 1488f9536 FUN_1488f9536 body=62 status=ok
// SIG undefined FUN_1488f9536(void)

void FUN_1488f9536(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_140170a76(param_1,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488f9582 FUN_1488f9582 body=123 status=ok
// SIG undefined FUN_1488f9582(void)

void FUN_1488f9582(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)FUN_141068cca();
  FUN_140e1bd88(local_30,param_3);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x2b0))(plVar1);
    if (lVar2 != 0) {
      FUN_140bc53f1(param_1 + 0x60,local_30,lVar2,0);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488f95fe FUN_1488f95fe body=284 status=ok
// SIG undefined FUN_1488f95fe(void)

void FUN_1488f95fe(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  undefined1 local_60 [24];
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = FUN_1488f94e8();
  if (param_2 != 0 && lVar1 != 0) {
    lVar2 = FUN_140fb15e0();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      if (*(char *)(lVar1 + 0x52) == '\x01') {
        FUN_1410d9770(param_1,local_60);
        FUN_1447325ac(local_60,local_68,1);
        FUN_1400bc8c2(param_2 + 0x390,local_68);
        if (local_48 != 0) {
          FUN_1400020a8();
        }
      }
      FUN_140457ffc(param_2 + 0x508,param_1);
      FUN_140457ffc(param_2 + 0x3b8,param_1);
      FUN_140457ffc(param_2 + 0x3d0,param_1);
      if ((*(char *)(lVar1 + 0x50) == '\x01') && (*(char *)(param_1 + 0x98) == '\0')) {
        FUN_140af934a(param_2,0);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


