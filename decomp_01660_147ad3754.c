// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147ad3754 FUN_147ad3754 body=62 status=ok
// SIG undefined FUN_147ad3754(void)

void FUN_147ad3754(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147ad378f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 147ad3792 FUN_147ad3792 body=177 status=ok
// SIG undefined FUN_147ad3792(void)

bool FUN_147ad3792(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
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



// FUNCTION 147ad3846 FUN_147ad3846 body=31 status=ok
// SIG undefined FUN_147ad3846(void)

undefined8 FUN_147ad3846(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ad3880 FUN_147ad3880 body=29 status=ok
// SIG undefined FUN_147ad3880(void)

bool FUN_147ad3880(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147ad389e FUN_147ad389e body=101 status=ok
// SIG undefined FUN_147ad389e(void)

void FUN_147ad389e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a90c070;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a90a0c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147ad3904 FUN_147ad3904 body=101 status=ok
// SIG undefined FUN_147ad3904(void)

void FUN_147ad3904(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a90c070;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a90a0c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147ad396a FUN_147ad396a body=134 status=ok
// SIG undefined FUN_147ad396a(void)

void FUN_147ad396a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a90c070;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a90a0c0;
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
                    /* WARNING: Could not recover jumptable at 0x000147ad39e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147ad39f0 FUN_147ad39f0 body=62 status=ok
// SIG undefined FUN_147ad39f0(void)

void FUN_147ad39f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147ad3a2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 147ad3a2e FUN_147ad3a2e body=190 status=ok
// SIG undefined FUN_147ad3a2e(void)

bool FUN_147ad3a2e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
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
    local_48 = param_5;
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
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



// FUNCTION 147ad3af0 FUN_147ad3af0 body=196 status=ok
// SIG undefined FUN_147ad3af0(void)

void FUN_147ad3af0(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar4 = (ulonglong)DAT_14cadb9c8;
  if ((longlong)uVar4 < 1) {
    return;
  }
  bVar5 = false;
  DAT_14cadb9d4 = DAT_14cadb9d4 + 1;
  do {
    lVar6 = uVar4 * 0x10 + -8;
    uVar7 = uVar4;
    while (((*(int *)(DAT_14cadb9c0 + lVar6) != 0 &&
            (plVar1 = *(longlong **)(DAT_14cadb9c0 + -8 + lVar6), plVar1 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1,param_2), cVar3 != '\0'))) {
      lVar6 = lVar6 + -0x10;
      bVar2 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar2) {
        DAT_14cadb9d4 = DAT_14cadb9d4 + -1;
        if (!bVar5) {
          return;
        }
        goto LAB_147ad3b89;
      }
    }
    uVar4 = uVar7 - 1;
    bVar5 = true;
  } while (1 < uVar7);
  DAT_14cadb9d4 = DAT_14cadb9d4 + -1;
LAB_147ad3b89:
  FUN_14474d06a(&DAT_14cadb9c0,0);
  return;
}



// FUNCTION 147ad3bb4 FUN_147ad3bb4 body=48 status=ok
// SIG undefined FUN_147ad3bb4(void)

void FUN_147ad3bb4(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x20,8);
  }
  return;
}



// FUNCTION 147ad3be4 FUN_147ad3be4 body=138 status=ok
// SIG undefined FUN_147ad3be4(void)

void FUN_147ad3be4(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
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
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147ad3c6e FUN_147ad3c6e body=114 status=ok
// SIG undefined FUN_147ad3c6e(void)

void FUN_147ad3c6e(longlong *param_1,int param_2)

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



// FUNCTION 147ad3ce0 FUN_147ad3ce0 body=19 status=ok
// SIG undefined FUN_147ad3ce0(void)

void FUN_147ad3ce0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xfe;
  return;
}



// FUNCTION 147ad3cf4 FUN_147ad3cf4 body=132 status=ok
// SIG undefined FUN_147ad3cf4(void)

void FUN_147ad3cf4(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147ad3d7a FUN_147ad3d7a body=31 status=ok
// SIG undefined FUN_147ad3d7a(void)

undefined8 FUN_147ad3d7a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ad3db4 FUN_147ad3db4 body=93 status=ok
// SIG undefined FUN_147ad3db4(void)

void FUN_147ad3db4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca5b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a90a160;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147ad3e12 FUN_147ad3e12 body=93 status=ok
// SIG undefined FUN_147ad3e12(void)

void FUN_147ad3e12(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca5b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a90a160;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147ad3e70 FUN_147ad3e70 body=126 status=ok
// SIG undefined FUN_147ad3e70(void)

void FUN_147ad3e70(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1ca5b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a90a160;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147ad3edf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147ad3eee FUN_147ad3eee body=135 status=ok
// SIG undefined FUN_147ad3eee(void)

void FUN_147ad3eee(longlong param_1,undefined8 param_2,undefined2 *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined2 local_38 [4];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = FUN_14479d2ce(param_1 + 0x18);
  pcVar1 = *(code **)(param_1 + 0x20);
  local_38[0] = *param_3;
  local_30 = *(longlong *)(param_3 + 4);
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  (*pcVar1)(uVar2,param_2,local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ad3f76 FUN_147ad3f76 body=31 status=ok
// SIG undefined FUN_147ad3f76(void)

undefined8 FUN_147ad3f76(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ad3fb0 FUN_147ad3fb0 body=29 status=ok
// SIG undefined FUN_147ad3fb0(void)

bool FUN_147ad3fb0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147ad3fce FUN_147ad3fce body=93 status=ok
// SIG undefined FUN_147ad3fce(void)

void FUN_147ad3fce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a90a240;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a90a1d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147ad402c FUN_147ad402c body=93 status=ok
// SIG undefined FUN_147ad402c(void)

void FUN_147ad402c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a90a240;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a90a1d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147ad408a FUN_147ad408a body=126 status=ok
// SIG undefined FUN_147ad408a(void)

void FUN_147ad408a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a90a240;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a90a1d0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147ad40f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147ad4108 FUN_147ad4108 body=48 status=ok
// SIG undefined FUN_147ad4108(void)

void FUN_147ad4108(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147ad4135. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 147ad4138 FUN_147ad4138 body=163 status=ok
// SIG undefined FUN_147ad4138(void)

bool FUN_147ad4138(longlong param_1,undefined8 param_2,undefined4 param_3)

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



// FUNCTION 147ad41de FUN_147ad41de body=130 status=ok
// SIG undefined FUN_147ad41de(void)

void FUN_147ad41de(longlong *param_1,longlong *param_2)

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



// FUNCTION 147ad4262 FUN_147ad4262 body=119 status=ok
// SIG undefined FUN_147ad4262(void)

void FUN_147ad4262(longlong param_1,int param_2)

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
    FUN_147ad42da(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147ad42da FUN_147ad42da body=141 status=ok
// SIG undefined FUN_147ad42da(void)

void FUN_147ad42da(void *param_1,int param_2,undefined8 param_3)

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



// FUNCTION 147ad4368 FUN_147ad4368 body=335 status=ok
// SIG undefined FUN_147ad4368(void)

undefined4 * FUN_147ad4368(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined2 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147ad44b8(param_1,local_48);
  puVar1 = (undefined2 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  *(undefined2 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar9 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_147ad459e(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
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
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)(local_40 + 2) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_147ad4696(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ad44b8 FUN_147ad44b8 body=230 status=ok
// SIG undefined FUN_147ad44b8(void)

int * FUN_147ad44b8(longlong *param_1,int *param_2)

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
      FUN_140171ad2(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x14);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x14) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x14 + *param_1;
  return param_2;
}



// FUNCTION 147ad459e FUN_147ad459e body=134 status=ok
// SIG undefined FUN_147ad459e(void)

undefined8 FUN_147ad459e(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar3 * 0x14);
        if (*plVar2 == *param_3) {
          lVar1 = *param_3;
          *(int *)(plVar2 + 1) = (int)param_3[1];
          *plVar2 = lVar1;
          FUN_147ad4624(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)((longlong)plVar2 + 0xc);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 147ad4624 FUN_147ad4624 body=114 status=ok
// SIG undefined FUN_147ad4624(void)

void FUN_147ad4624(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x14) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x14);
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



// FUNCTION 147ad4696 FUN_147ad4696 body=473 status=ok
// SIG undefined FUN_147ad4696(void)

void FUN_147ad4696(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar6 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x14);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x10 + lVar6 * 0x14) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xc + lVar6 * 0x14) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ad4870 FUN_147ad4870 body=96 status=ok
// SIG undefined FUN_147ad4870(void)

void FUN_147ad4870(longlong param_1,int param_2)

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



// FUNCTION 147ad48d0 FUN_147ad48d0 body=62 status=ok
// SIG undefined FUN_147ad48d0(void)

void FUN_147ad48d0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147ad490e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 147ad490e FUN_147ad490e body=112 status=ok
// SIG undefined FUN_147ad490e(void)

ulonglong FUN_147ad490e(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147ad4948;
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
LAB_147ad4948:
  return param_2 & 0xffffffff;
}



// FUNCTION 147ad497e FUN_147ad497e body=90 status=ok
// SIG undefined FUN_147ad497e(void)

void FUN_147ad497e(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 8 + (longlong)(int)param_2 * 0x18) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 0x18);
    memmove(_Dst,(void *)((longlong)_Dst + 0x18),(longlong)(int)(~param_2 + iVar2) * 0x18);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 147ad49d8 FUN_147ad49d8 body=93 status=ok
// SIG undefined FUN_147ad49d8(void)

undefined4 *
FUN_147ad49d8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined8 *)(param_1 + 2) = 0;
  iVar1 = *(int *)(param_4 + 1);
  uVar2 = *param_4;
  param_1[4] = iVar1;
  if (iVar1 == 0) {
    param_1[5] = 0;
  }
  else {
    FUN_14580e690(param_1 + 2,iVar1,0);
    FUN_14580e635(*(undefined8 *)(param_1 + 2),uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 147ad4a36 FUN_147ad4a36 body=147 status=ok
// SIG undefined FUN_147ad4a36(void)

void FUN_147ad4a36(longlong param_1,int param_2)

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



// FUNCTION 147ad4ad1 FUN_147ad4ad1 body=46 status=ok
// SIG undefined FUN_147ad4ad1(void)

void FUN_147ad4ad1(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if ((longlong *)*param_1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_1 + 0x10))();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 147ad4b00 FUN_147ad4b00 body=130 status=ok
// SIG undefined FUN_147ad4b00(void)

void FUN_147ad4b00(longlong *param_1,longlong *param_2)

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



// FUNCTION 147ad4b84 FUN_147ad4b84 body=170 status=ok
// SIG undefined FUN_147ad4b84(void)

undefined8 * FUN_147ad4b84(longlong param_1,undefined8 *param_2,float param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  cVar2 = FUN_144729dda();
  if (cVar2 == '\0') {
    puVar5 = &DAT_14c846480;
  }
  else {
    if ((((0.0 < param_3) && (*(char *)(param_1 + 0x38) != '\0')) &&
        (lVar3 = FUN_140d8d9ac(param_1), lVar3 != 0)) &&
       (plVar1 = *(longlong **)(lVar3 + 0x938), plVar1 != (longlong *)0x0)) {
      uVar4 = FUN_14479d2ce(param_1);
      (**(code **)(*plVar1 + 0x30))(plVar1,param_2,param_3,uVar4);
      return param_2;
    }
    lVar3 = FUN_14479d2ce(param_1);
    puVar5 = &DAT_14c846480;
    if (*(longlong *)(lVar3 + 0x1c8) != 0) {
      puVar5 = (undefined8 *)(*(longlong *)(lVar3 + 0x1c8) + 0x240);
    }
  }
  puVar6 = param_2;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  return param_2;
}



// FUNCTION 147ad4c2e FUN_147ad4c2e body=115 status=ok
// SIG undefined FUN_147ad4c2e(void)

void FUN_147ad4c2e(longlong param_1,float param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((0.0 < param_2) && (*(char *)(param_1 + 0x38) != '\0')) {
    lVar2 = FUN_140d8d9ac(param_1);
    if ((lVar2 != 0) && (plVar1 = *(longlong **)(lVar2 + 0x938), plVar1 != (longlong *)0x0)) {
      uVar3 = FUN_14479d2ce(param_1);
                    /* WARNING: Could not recover jumptable at 0x000147ad4c91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x40))(plVar1,param_2,uVar3,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 147ad4ca2 FUN_147ad4ca2 body=288 status=ok
// SIG undefined FUN_147ad4ca2(void)

double * FUN_147ad4ca2(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    lVar6 = FUN_14088b378();
    lVar4 = *(longlong *)(param_1 + 0x1c8);
    if (lVar4 != 0) {
      lVar7 = 0;
      if ((lVar6 == 0) || (lVar5 = *(longlong *)(lVar4 + 0x10), lVar5 == 0)) goto LAB_147ad4d11;
      if (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38)) {
        lVar7 = 0;
        if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
            lVar6 + 0x30) {
          lVar7 = lVar4;
        }
        goto LAB_147ad4d11;
      }
    }
  }
  lVar7 = 0;
LAB_147ad4d11:
  dVar8 = *(double *)(lVar7 + 0x650) * *(double *)(lVar7 + 0x290);
  dVar9 = *(double *)(lVar7 + 0x288) * *(double *)(lVar7 + 0x648);
  dVar10 = *(double *)(lVar7 + 0x280) * *(double *)(lVar7 + 0x640);
  dVar1 = *(double *)(lVar7 + 0x270);
  dVar2 = *(double *)(lVar7 + 0x260);
  dVar3 = *(double *)(lVar7 + 0x268);
  *param_2 = dVar2 - dVar10;
  param_2[1] = dVar3 - dVar9;
  param_2[2] = dVar1 - dVar8;
  param_2[3] = dVar2 + dVar10;
  param_2[4] = dVar3 + dVar9;
  param_2[5] = dVar1 + dVar8;
  *(undefined1 *)(param_2 + 6) = 1;
  return param_2;
}



// FUNCTION 147ad4e72 FUN_147ad4e72 body=26 status=ok
// SIG undefined FUN_147ad4e72(void)

void FUN_147ad4e72(undefined8 param_1)

{
  FUN_144b20ebc();
  FUN_1448215fa(param_1);
  return;
}



// FUNCTION 147ad4e96 FUN_147ad4e96 body=208 status=ok
// SIG undefined FUN_147ad4e96(void)

void FUN_147ad4e96(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1427dc336(local_28);
  switchD_143c3d4dc::caseD_3d(param_1,local_28);
  lVar1 = FUN_1408c3c8e(param_1 + 0x38);
  if (lVar1 != 0) {
    uVar2 = FUN_1408c3c8e(param_1 + 0x38);
    FUN_144750a86(uVar2,&local_58,0,0);
    FUN_1446ddc76(&local_60,"Skeleton",1);
    local_48 = local_60;
    local_40 = local_58;
    uStack_38 = uStack_50;
    local_58 = 0;
    uStack_50 = 0;
    local_30 = 0;
    FUN_1407c67d8(param_2);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ad4f68 FUN_147ad4f68 body=113 status=ok
// SIG undefined FUN_147ad4f68(void)

uint * FUN_147ad4f68(uint *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  param_1[0] = 0;
  param_1[1] = 0;
  if (param_2 != 0) {
    if (*(char *)(param_2 + 0x4f5) == '\x01') {
      *(undefined8 *)param_1 = *(undefined8 *)(param_2 + 0x590);
    }
    else {
      cVar1 = *(char *)(param_2 + 0x1fb);
      iVar2 = FUN_144b261ba(param_2 + 0x410);
      uVar3 = 0x400;
      if (iVar2 == 3) {
        uVar3 = (uint)(*(char *)(param_2 + 0x47a) != '\x02') << 10;
      }
      *param_1 = uVar3 | (uint)(cVar1 != '\0') << 0xc;
    }
  }
  return param_1;
}



// FUNCTION 147ad4fda FUN_147ad4fda body=8 status=ok
// SIG undefined FUN_147ad4fda(void)

uint FUN_147ad4fda(uint *param_1)

{
  return *param_1 >> 0xc & 0xffffff01;
}



// FUNCTION 147ad4fe2 FUN_147ad4fe2 body=119 status=ok
// SIG undefined FUN_147ad4fe2(void)

void FUN_147ad4fe2(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = param_2[2];
  if (DAT_14c846520 <= param_2[2]) {
    dVar1 = DAT_14c846520;
  }
  if (dVar1 <= DAT_14c8464f0) {
    dVar1 = DAT_14c8464f0;
  }
  dVar3 = param_2[1];
  if (DAT_14c846518 <= param_2[1]) {
    dVar3 = DAT_14c846518;
  }
  if (dVar3 <= DAT_14c8464e8) {
    dVar3 = DAT_14c8464e8;
  }
  dVar2 = *param_2;
  if (DAT_14c846510 <= *param_2) {
    dVar2 = DAT_14c846510;
  }
  if (dVar2 <= DAT_14c8464e0) {
    dVar2 = DAT_14c8464e0;
  }
  *(double *)(param_1 + 0x2a8) = dVar2;
  *(double *)(param_1 + 0x2b0) = dVar3;
  *(double *)(param_1 + 0x2b8) = dVar1;
  FUN_1448215fa();
  FUN_147adfa50(param_1 + 0x2d8,param_1);
  return;
}



// FUNCTION 147ad505a FUN_147ad505a body=66 status=ok
// SIG undefined FUN_147ad505a(void)

void FUN_147ad505a(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[0x5a] = *(longlong *)(param_2 + 4);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0x58) = *param_2;
  *(undefined4 *)((longlong)param_1 + 0x2c4) = uVar1;
  *(undefined4 *)(param_1 + 0x59) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x2cc) = uVar3;
  (**(code **)(*param_1 + 0x540))();
  FUN_1448215fa(param_1);
  FUN_147adfa50(param_1 + 0x5b,param_1);
  return;
}



// FUNCTION 147ad50ac FUN_147ad50ac body=22 status=ok
// SIG undefined FUN_147ad50ac(void)

undefined1 FUN_147ad50ac(longlong param_1,uint param_2)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x40))) {
    uVar1 = *(undefined1 *)(*(longlong *)(param_1 + 0x38) + (ulonglong)param_2);
  }
  return uVar1;
}



// FUNCTION 147ad50cc FUN_147ad50cc body=208 status=ok
// SIG undefined FUN_147ad50cc(void)

void FUN_147ad50cc(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1427dc336(local_28);
  switchD_143c3d4dc::caseD_3d(param_1,local_28);
  lVar1 = FUN_1408c3c8e(param_1 + 0x60);
  if (lVar1 != 0) {
    uVar2 = FUN_1408c3c8e(param_1 + 0x60);
    FUN_144750a86(uVar2,&local_58,0,0);
    FUN_1446ddc76(&local_60,"TargetSkeleton",1);
    local_48 = local_60;
    local_40 = local_58;
    uStack_38 = uStack_50;
    local_58 = 0;
    uStack_50 = 0;
    local_30 = 0;
    FUN_1407c67d8(param_2);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ad519d FUN_147ad519d body=314 status=ok
// SIG undefined FUN_147ad519d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_147ad519d(double *param_1,undefined4 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  undefined8 in_RAX;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  
  auVar3._8_8_ = -(ulonglong)(param_1[5] != dRam000000014caddef8);
  auVar3._0_8_ = -(ulonglong)(param_1[4] != _DAT_14caddef0);
  iVar9 = movmskpd((int)in_RAX,auVar3);
  auVar5._8_8_ = -(ulonglong)(param_1[7] != dRam000000014caddf08);
  auVar5._0_8_ = -(ulonglong)(param_1[6] != _DAT_14caddf00);
  uVar11 = movmskpd(param_2,auVar5);
  if ((uVar11 & 0x3fffffff) == 0 && iVar9 == 0) {
    auVar7._8_8_ = -(ulonglong)(param_1[1] != DAT_14cadded8);
    auVar7._0_8_ = -(ulonglong)(*param_1 != DAT_14cadded0);
    uVar11 = movmskpd(iVar9,auVar7);
    auVar8._8_8_ = -(ulonglong)(param_1[3] != dRam000000014caddee8);
    auVar8._0_8_ = -(ulonglong)(param_1[2] != _DAT_14caddee0);
    iVar9 = movmskpd(0,auVar8);
    uVar12 = iVar9 << 2 | uVar11;
    if (uVar12 != 0) {
      auVar2._8_8_ = -(ulonglong)(param_1[1] + DAT_14cadded8 != 0.0);
      auVar2._0_8_ = -(ulonglong)(*param_1 + DAT_14cadded0 != 0.0);
      uVar11 = movmskpd(uVar11,auVar2);
      auVar1._8_8_ = -(ulonglong)(param_1[3] + dRam000000014caddee8 != 0.0);
      auVar1._0_8_ = -(ulonglong)(param_1[2] + _DAT_14caddee0 != 0.0);
      uVar12 = movmskpd(uVar12,auVar1);
      if ((uVar12 & 0x3fffffff) != 0 || uVar11 != 0) goto LAB_147ad51ea;
    }
    auVar4._8_8_ = -(ulonglong)(param_1[9] != dRam000000014caddf18);
    auVar4._0_8_ = -(ulonglong)(param_1[8] != _DAT_14caddf10);
    iVar9 = movmskpd(uVar11,auVar4);
    auVar6._8_8_ = -(ulonglong)(param_1[0xb] != dRam000000014caddf28);
    auVar6._0_8_ = -(ulonglong)(param_1[10] != _DAT_14caddf20);
    uVar11 = movmskpd((int)param_1,auVar6);
    uVar10 = CONCAT71((int7)(CONCAT44((int)((ulonglong)in_RAX >> 0x20),iVar9) >> 8),
                      (uVar11 & 0x3fffffff) == 0 && iVar9 == 0);
  }
  else {
LAB_147ad51ea:
    uVar10 = 0;
  }
  return uVar10;
}



// FUNCTION 147ad52d7 FUN_147ad52d7 body=1040 status=ok
// SIG undefined FUN_147ad52d7(void)

void FUN_147ad52d7(longlong *param_1)

{
  int iVar1;
  ulonglong uVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 *puVar16;
  int iVar17;
  undefined1 auStack_168 [40];
  longlong local_140;
  longlong local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  longlong lStack_120;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  code *local_108;
  undefined4 uStack_100;
  uint uStack_fc;
  longlong *local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  code *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((longlong)(int)param_1[1] != 0) {
    lVar13 = *param_1;
    lVar15 = (longlong)(int)param_1[1] * 0x60;
    do {
      cVar4 = FUN_144a78e48(lVar13);
      if (cVar4 != '\0') goto LAB_147ad56b2;
      lVar13 = lVar13 + 0x60;
      lVar15 = lVar15 + -0x60;
    } while (lVar15 != 0);
  }
  lVar13 = param_1[2];
  lVar15 = FUN_14479d2ce(lVar13 + 0x40);
  if (lVar15 != 0) {
    plVar7 = (longlong *)FUN_14143f0c0();
    lVar14 = plVar7[0x22];
    if (lVar14 == 0) {
      (**(code **)(*plVar7 + 1000))(plVar7);
      lVar14 = plVar7[0x22];
    }
    if (0 < (int)param_1[1] && *(int *)(lVar14 + 0x17c) < *(int *)(lVar14 + 0x150)) {
      local_138 = 0;
      uStack_130 = 0;
      local_140 = lVar14;
      FUN_1401a2688();
      if (0 < (int)param_1[1]) {
        iVar17 = 0;
        do {
          uVar2 = uStack_130;
          lVar14 = (longlong)(int)uStack_130;
          uVar5 = (int)uStack_130 + 1;
          uStack_130 = CONCAT44(uStack_130._4_4_,uVar5);
          if (uStack_130._4_4_ < uVar5) {
            FUN_144a2c682(&local_138,uVar2 & 0xffffffff);
          }
          puVar9 = &DAT_14cadded0;
          puVar16 = (undefined8 *)(lVar14 * 0x60 + local_138);
          for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
            *puVar16 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar16 = puVar16 + 1;
          }
          iVar17 = iVar17 + 1;
        } while (iVar17 < (int)param_1[1]);
      }
      local_c8 = (code *)0x0;
      local_b8 = (longlong *)0x0;
      local_108 = (code *)0x0;
      plVar7 = (longlong *)FUN_14001cc68(0x28,8);
      local_f8 = local_b8;
      pcVar3 = local_c8;
      lVar14 = local_140;
      *plVar7 = (longlong)&PTR_FUN_14a914c00;
      plVar7[1] = (longlong)&local_138;
      plVar7[2] = lVar13;
      plVar7[3] = (longlong)param_1;
      plVar7[4] = (longlong)&local_c8;
      if (plVar7 + 1 != (longlong *)0x0) {
        local_108 = FUN_14351ad82;
      }
      local_c8 = local_108;
      local_b8 = plVar7;
      uStack_b0 = uStack_f0;
      local_a8 = local_e8;
      local_108 = pcVar3;
      uStack_100 = uStack_c0;
      uStack_fc = uStack_bc;
      uStack_e0 = uStack_a0;
      uStack_dc = uStack_9c;
      local_d8 = local_98;
      uStack_d4 = uStack_94;
      uStack_d0 = uStack_90;
      uStack_cc = uStack_8c;
      if (pcVar3 != (code *)0x0) {
        plVar7 = local_f8;
        if (local_f8 == (longlong *)0x0) {
          plVar7 = &local_e8;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      plVar7 = (longlong *)(lVar14 + 0x148);
      lVar10 = lVar14 + 0x158;
      local_128 = 0x100000000;
      local_118 = 0xffffffff;
      uStack_110 = 0;
      lStack_120 = lVar10;
      if (*(int *)(lVar14 + 0x170) == 0) {
        iVar17 = 0;
      }
      else {
        FUN_1449c0562(&local_128);
        iVar17 = *(int *)(lVar14 + 0x170);
      }
      uStack_f0 = local_118;
      uVar8 = uStack_f0;
      local_e8 = CONCAT44(uStack_10c,uStack_110);
      uStack_100 = (undefined4)local_128;
      uStack_fc = local_128._4_4_;
      local_f8 = (longlong *)lStack_120;
      uStack_f0._4_4_ = (int)((ulonglong)local_118 >> 0x20);
      local_108 = (code *)plVar7;
      if ((uStack_f0._4_4_ != iVar17) || (lStack_120 != lVar10)) {
        iVar6 = uStack_f0._4_4_;
        uStack_f0 = uVar8;
        do {
          lVar14 = *(longlong *)local_108;
          uVar5 = FUN_144a750a0(lVar15 + 0x50,lVar14 + (longlong)iVar6 * 0x18 + 8);
          if (((-1 < (int)uVar5) && ((int)uVar5 < *(int *)(lVar13 + 0x88))) &&
             (iVar1 = *(int *)(*(longlong *)(lVar13 + 0x80) + (ulonglong)uVar5 * 4),
             local_128 = CONCAT44(local_128._4_4_,iVar1), iVar1 != -1)) {
            uVar5 = FUN_144a750a0(lVar15 + 0x50,lVar14 + (longlong)iVar6 * 0x18);
            pcVar3 = local_c8;
            if (((-1 < (int)uVar5) && ((int)uVar5 < *(int *)(lVar13 + 0x88))) &&
               (lVar14 = (longlong)*(int *)(*(longlong *)(lVar13 + 0x80) + (ulonglong)uVar5 * 4),
               lVar14 != -1)) {
              plVar11 = local_b8;
              if (local_b8 == (longlong *)0x0) {
                plVar11 = &local_a8;
              }
              uVar8 = (**(code **)(*plVar11 + 8))();
              puVar9 = (undefined8 *)(*pcVar3)(uVar8,&local_128);
              puVar16 = (undefined8 *)(lVar14 * 0x60 + *param_1);
              for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
                *puVar16 = *puVar9;
                puVar9 = puVar9 + 1;
                puVar16 = puVar16 + 1;
              }
            }
          }
          uStack_f0 = CONCAT44(uStack_f0._4_4_,(uint)uStack_f0 & ~uStack_fc);
          FUN_1449c0562(&uStack_100);
          iVar6 = uStack_f0._4_4_;
          uVar8 = uStack_f0;
        } while (local_108 != (code *)plVar7 ||
                 (local_f8 != (longlong *)lVar10 || uStack_f0._4_4_ != iVar17));
      }
      uStack_f0 = uVar8;
      if (local_c8 != (code *)0x0) {
        plVar7 = local_b8;
        if (local_b8 == (longlong *)0x0) {
          plVar7 = &local_a8;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      if (local_138 != 0) {
        FUN_1400020a8();
      }
    }
  }
LAB_147ad56b2:
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ad56e8 FUN_147ad56e8 body=43 status=ok
// SIG undefined FUN_147ad56e8(void)

undefined8 * FUN_147ad56e8(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x78);
  *param_2 = 0;
  param_2[1] = 0;
  if (lVar1 != 0) {
    FUN_147d5d93e(lVar1,param_2,1);
  }
  return param_2;
}



// FUNCTION 147ad5714 FUN_147ad5714 body=291 status=ok
// SIG undefined FUN_147ad5714(void)

ulonglong FUN_147ad5714(char *param_1)

{
  LARGE_INTEGER *unaff_RDI;
  ulonglong uVar1;
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c872bd8 == '\x01') {
    FUN_14350c972(param_1,1);
LAB_147ad573f:
    uVar1 = 0;
  }
  else {
    if (param_1[1] == '\x01') {
      unaff_RDI = &local_20;
      QueryPerformanceCounter(unaff_RDI);
      if (*(double *)(param_1 + 0x18) <=
          ((double)local_20.QuadPart * DAT_14c83f420 + 16777216.0) - *(double *)(param_1 + 0x20)) {
        param_1[0] = '\x01';
        param_1[1] = '\0';
        param_1[0xc] = '\0';
        param_1[0xd] = '\0';
        param_1[0xe] = '\0';
        param_1[0xf] = '\0';
        unaff_RDI = &local_20;
        QueryPerformanceCounter(unaff_RDI);
        *(double *)(param_1 + 0x28) = (double)local_20.QuadPart * DAT_14c83f420 + 16777216.0;
      }
    }
    else if (*param_1 == '\x01') {
      if (0.0 < *(double *)(param_1 + 0x10)) {
        unaff_RDI = &local_20;
        QueryPerformanceCounter(unaff_RDI);
        if (*(double *)(param_1 + 0x10) <=
            ((double)local_20.QuadPart * DAT_14c83f420 + 16777216.0) - *(double *)(param_1 + 0x28))
        {
          uVar1 = 0;
          FUN_14350c972(param_1,0);
          goto LAB_147ad5741;
        }
      }
    }
    else if (param_1[2] != '\0') goto LAB_147ad573f;
    uVar1 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  }
LAB_147ad5741:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1 & 0xffffffff;
}



// FUNCTION 147ad5838 FUN_147ad5838 body=304 status=ok
// SIG undefined FUN_147ad5838(void)

undefined8 FUN_147ad5838(longlong param_1,undefined8 param_2,char param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  
  puVar1 = &DAT_149dfb77a;
  puVar6 = &DAT_149dfb77a;
  puVar2 = &DAT_149dfb77a;
  if (param_3 == '\0') {
    puVar2 = &DAT_149dfb77a;
    puVar6 = &DAT_149dfb77a;
    if (*(int *)(param_1 + 0x98) != 0) {
      puVar6 = *(undefined2 **)(param_1 + 0x90);
    }
    if (*(int *)(param_1 + 0x98) - 2U < 0x7fffffff) {
      puVar2 = (undefined2 *)&DAT_149e01f60;
    }
  }
  puVar7 = &DAT_149dfb77a;
  if (*(int *)(param_1 + 0x48) != 0) {
    puVar7 = *(undefined2 **)(param_1 + 0x40);
  }
  puVar3 = &DAT_149dfb77a;
  if (*(int *)(param_1 + 0x88) != 0) {
    puVar3 = *(undefined2 **)(param_1 + 0x80);
  }
  puVar9 = &DAT_149dfb77a;
  puVar5 = &DAT_149dfb77a;
  if (*(int *)(param_1 + 0x58) != 0) {
    puVar9 = *(undefined2 **)(param_1 + 0x50);
    if (*(int *)(param_1 + 0x58) - 2U < 0x7fffffff) {
      puVar5 = &DAT_149dfb77a;
      if (*(int *)(param_1 + 0x78) - 2U < 0x7fffffff) {
        puVar5 = (undefined2 *)&DAT_149e01f60;
      }
    }
    else {
      puVar5 = &DAT_149dfb77a;
    }
  }
  puVar4 = &DAT_149dfb77a;
  if (*(int *)(param_1 + 0x78) != 0) {
    puVar4 = *(undefined2 **)(param_1 + 0x70);
  }
  puVar8 = &DAT_149dfb77a;
  if (*(int *)(param_1 + 0x88) - 2U < 0x7fffffff) {
    puVar8 = (undefined2 *)&DAT_149e01f60;
  }
  if (*(int *)(param_1 + 0x48) - 2U < 0x7fffffff) {
    puVar1 = (undefined2 *)&DAT_149e01f60;
  }
  FUN_140002266(param_2,L"%s%s%s%s%s%s%s%s%s",puVar4,puVar5,puVar9,puVar8,puVar3,puVar1,puVar7,
                puVar2,puVar6);
  return param_2;
}



// FUNCTION 147ad5968 FUN_147ad5968 body=379 status=ok
// SIG undefined FUN_147ad5968(void)

undefined8 FUN_147ad5968(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  size_t sVar2;
  wchar_t *pwVar3;
  undefined4 uVar4;
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  int local_70;
  wchar_t *local_68;
  int local_60;
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  undefined4 local_40;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145eefa7e(&local_68);
  local_48 = local_68;
  if (local_60 == 0) {
    local_48 = L"";
  }
  local_40 = 0;
  if (local_48 != (wchar_t *)0x0) {
    sVar2 = wcslen(local_48);
    local_40 = (int)sVar2;
  }
  local_38 = L"BenchmarkData/";
  local_30 = 0xe;
  FUN_140bee87a(&local_58,&local_48,2);
  if (local_68 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  FUN_147ad5838(param_1,&local_78,param_3);
  pwVar3 = L"";
  if (local_70 != 0) {
    pwVar3 = local_78;
  }
  local_48 = L"";
  if (local_50 != 0) {
    local_48 = local_58;
  }
  uVar4 = 0;
  uVar1 = 0;
  if (local_48 != (wchar_t *)0x0) {
    sVar2 = wcslen(local_48);
    uVar1 = (int)sVar2;
  }
  local_40 = uVar1;
  local_38 = pwVar3;
  if (pwVar3 != (wchar_t *)0x0) {
    sVar2 = wcslen(pwVar3);
    uVar4 = (int)sVar2;
  }
  local_30 = uVar4;
  FUN_140bee87a(&local_68,&local_48,2);
  pwVar3 = local_68;
  if (local_60 == 0) {
    pwVar3 = L"";
  }
  FUN_140056680(param_2,pwVar3);
  if (local_68 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147ad5ae4 FUN_147ad5ae4 body=66 status=ok
// SIG undefined FUN_147ad5ae4(void)

void FUN_147ad5ae4(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_147ae03a4(param_1,iVar1);
  }
  FUN_147ae037e((longlong)iVar1 * 0x30 + *param_1,param_2);
  return;
}



// FUNCTION 147ad5b26 FUN_147ad5b26 body=411 status=ok
// SIG undefined FUN_147ad5b26(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147ad5b26(char *param_1)

{
  double *pdVar1;
  char *pcVar2;
  double dVar3;
  int iVar4;
  undefined1 auVar5 [16];
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  undefined1 in_XMM2 [16];
  undefined1 auVar10 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  if (*param_1 == '\0') {
    pdVar1 = (double *)(param_1 + 0xb8);
    param_1[200] = '\0';
    param_1[0xc9] = '\0';
    param_1[0xca] = '\0';
    param_1[0xcb] = '\0';
    param_1[0xcc] = '\0';
    param_1[0xcd] = '\0';
    param_1[0xce] = '\0';
    param_1[0xcf] = '\0';
    param_1[0xd0] = '\0';
    param_1[0xd1] = '\0';
    param_1[0xd2] = '\0';
    param_1[0xd3] = '\0';
    param_1[0xd4] = '\0';
    param_1[0xd5] = '\0';
    param_1[0xd6] = '\0';
    param_1[0xd7] = '\0';
    param_1[0xb8] = '\0';
    param_1[0xb9] = '\0';
    param_1[0xba] = '\0';
    param_1[0xbb] = '\0';
    param_1[0xbc] = '\0';
    param_1[0xbd] = '\0';
    param_1[0xbe] = '\0';
    param_1[0xbf] = '\0';
    param_1[0xc0] = '\0';
    param_1[0xc1] = '\0';
    param_1[0xc2] = '\0';
    param_1[0xc3] = '\0';
    param_1[0xc4] = '\0';
    param_1[0xc5] = '\0';
    param_1[0xc6] = '\0';
    param_1[199] = '\0';
    param_1[0xd8] = '\0';
    auVar5 = _DAT_149931e80;
    param_1[0xd9] = '\0';
    param_1[0xda] = '\0';
    param_1[0xdb] = '\0';
    param_1[0xdc] = '\0';
    param_1[0xdd] = '\0';
    param_1[0xde] = '\0';
    param_1[0xdf] = '\0';
    auVar11 = pmovsxbq(in_XMM3,0x100);
    lVar6 = 0;
    auVar10 = pmovsxbq(in_XMM2,0x202);
    do {
      auVar12 = auVar11 ^ auVar5;
      if (auVar12._0_8_ < -0x7ffffffffffffffb) {
        pcVar2 = param_1 + lVar6 * 8 + 0xe8;
        pcVar2[0] = -1;
        pcVar2[1] = -1;
        pcVar2[2] = -1;
        pcVar2[3] = -1;
        pcVar2[4] = -1;
        pcVar2[5] = -1;
        pcVar2[6] = -0x11;
        pcVar2[7] = '\x7f';
      }
      if (auVar12._8_8_ < -0x7ffffffffffffffb) {
        pcVar2 = param_1 + lVar6 * 8 + 0xf0;
        pcVar2[0] = -1;
        pcVar2[1] = -1;
        pcVar2[2] = -1;
        pcVar2[3] = -1;
        pcVar2[4] = -1;
        pcVar2[5] = -1;
        pcVar2[6] = -0x11;
        pcVar2[7] = '\x7f';
      }
      lVar6 = lVar6 + 2;
      lVar7 = auVar11._8_8_;
      auVar11._0_8_ = auVar11._0_8_ + auVar10._0_8_;
      auVar11._8_8_ = lVar7 + auVar10._8_8_;
    } while (lVar6 != 6);
    auVar12 = pmovsxbq(auVar11,0x100);
    lVar6 = 0;
    do {
      auVar11 = auVar12 ^ auVar5;
      if (auVar11._0_8_ < -0x7ffffffffffffffb) {
        pcVar2 = param_1 + lVar6 * 8 + 0x118;
        pcVar2[0] = '\0';
        pcVar2[1] = '\0';
        pcVar2[2] = '\0';
        pcVar2[3] = '\0';
        pcVar2[4] = '\0';
        pcVar2[5] = '\0';
        pcVar2[6] = '\x10';
        pcVar2[7] = '\0';
      }
      if (auVar11._8_8_ < -0x7ffffffffffffffb) {
        pcVar2 = param_1 + lVar6 * 8 + 0x120;
        pcVar2[0] = '\0';
        pcVar2[1] = '\0';
        pcVar2[2] = '\0';
        pcVar2[3] = '\0';
        pcVar2[4] = '\0';
        pcVar2[5] = '\0';
        pcVar2[6] = '\x10';
        pcVar2[7] = '\0';
      }
      lVar6 = lVar6 + 2;
      lVar7 = auVar12._8_8_;
      auVar12._0_8_ = auVar12._0_8_ + auVar10._0_8_;
      auVar12._8_8_ = lVar7 + auVar10._8_8_;
    } while (lVar6 != 6);
    iVar4 = *(int *)(param_1 + 0xc);
    if ((longlong)iVar4 < 1) {
      dVar9 = 0.0;
    }
    else {
      lVar6 = *(longlong *)(param_1 + 0xa0) + 8;
      lVar7 = 0;
      do {
        lVar8 = 0;
        do {
          pdVar1[lVar8] = *(double *)(lVar6 + lVar8 * 8) / (double)iVar4 + pdVar1[lVar8];
          dVar9 = *(double *)(lVar6 + lVar8 * 8);
          dVar3 = *(double *)(param_1 + lVar8 * 8 + 0xe8);
          if (dVar9 <= *(double *)(param_1 + lVar8 * 8 + 0xe8)) {
            dVar3 = dVar9;
          }
          *(double *)(param_1 + lVar8 * 8 + 0xe8) = dVar3;
          dVar9 = *(double *)(lVar6 + lVar8 * 8);
          dVar3 = *(double *)(param_1 + lVar8 * 8 + 0x118);
          if (*(double *)(param_1 + lVar8 * 8 + 0x118) <= dVar9) {
            dVar3 = dVar9;
          }
          *(double *)(param_1 + lVar8 * 8 + 0x118) = dVar3;
          lVar8 = lVar8 + 1;
        } while (lVar8 != 5);
        lVar7 = lVar7 + 1;
        lVar6 = lVar6 + 0x30;
      } while (lVar7 != iVar4);
      dVar9 = *pdVar1;
    }
    *(float *)(param_1 + 0x140) = (float)(1000.0 / dVar9);
  }
  return;
}



// FUNCTION 147ad5cc2 FUN_147ad5cc2 body=1355 status=ok
// SIG undefined FUN_147ad5cc2(void)

/* WARNING: Removing unreachable block (ram,0x000147ad5fb2) */
/* WARNING: Removing unreachable block (ram,0x000147ad5e60) */
/* WARNING: Removing unreachable block (ram,0x000147ad5d84) */
/* WARNING: Removing unreachable block (ram,0x000147ad60c1) */
/* WARNING: Removing unreachable block (ram,0x000147ad604b) */
/* WARNING: Removing unreachable block (ram,0x000147ad6137) */
/* WARNING: Removing unreachable block (ram,0x000147ad5df7) */
/* WARNING: Removing unreachable block (ram,0x000147ad5f2d) */
/* WARNING: Removing unreachable block (ram,0x000147ad61bc) */

void FUN_147ad5cc2(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined2 *puVar7;
  ulonglong uVar8;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined2 *local_a0;
  undefined8 local_98;
  undefined2 *local_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (1 < *(uint *)(param_1 + 0x58)) {
    FUN_140002266(&local_90,L"RunTag:         %s",*(undefined8 *)(param_1 + 0x50));
    iVar4 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar4 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
      FUN_1447a1bd6(param_2,iVar4);
    }
    lVar5 = *param_2;
    lVar6 = (longlong)iVar4 * 0x10;
    *(undefined8 *)(lVar5 + lVar6) = 0;
    *(undefined2 **)(lVar5 + lVar6) = local_90;
    local_90 = (undefined2 *)0x0;
    *(int *)(lVar5 + 8 + lVar6) = (int)local_88;
    *(undefined4 *)(lVar5 + 0xc + lVar6) = local_88._4_4_;
    local_88 = 0;
  }
  if (1 < *(uint *)(param_1 + 0x48)) {
    FUN_140002266(&local_90,L"ScenarioTag:    %s",*(undefined8 *)(param_1 + 0x40));
    iVar4 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar4 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
      FUN_1447a1bd6(param_2,iVar4);
    }
    lVar5 = *param_2;
    lVar6 = (longlong)iVar4 * 0x10;
    *(undefined8 *)(lVar5 + lVar6) = 0;
    *(undefined2 **)(lVar5 + lVar6) = local_90;
    local_90 = (undefined2 *)0x0;
    *(int *)(lVar5 + 8 + lVar6) = (int)local_88;
    *(undefined4 *)(lVar5 + 0xc + lVar6) = local_88._4_4_;
    local_88 = 0;
  }
  if (1 < *(uint *)(param_1 + 0x68)) {
    FUN_140002266(&local_90,L"LocationTag:    %s",*(undefined8 *)(param_1 + 0x60));
    iVar4 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar4 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
      FUN_1447a1bd6(param_2,iVar4);
    }
    lVar5 = *param_2;
    lVar6 = (longlong)iVar4 * 0x10;
    *(undefined8 *)(lVar5 + lVar6) = 0;
    *(undefined2 **)(lVar5 + lVar6) = local_90;
    local_90 = (undefined2 *)0x0;
    *(int *)(lVar5 + 8 + lVar6) = (int)local_88;
    *(undefined4 *)(lVar5 + 0xc + lVar6) = local_88._4_4_;
    local_88 = 0;
  }
  FUN_140002266(&local_90,L"NumFrames:      %d",*(undefined4 *)(param_1 + 0xc));
  iVar4 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
    FUN_1447a1bd6(param_2,iVar4);
  }
  lVar5 = *param_2;
  lVar6 = (longlong)iVar4 * 0x10;
  *(undefined8 *)(lVar5 + lVar6) = 0;
  *(undefined2 **)(lVar5 + lVar6) = local_90;
  *(int *)(lVar5 + 8 + lVar6) = (int)local_88;
  *(undefined4 *)(lVar5 + 0xc + lVar6) = local_88._4_4_;
  local_88 = 0;
  local_90 = (undefined2 *)0x0;
  FUN_140002266(&local_90,L"DurationActual: %.2f seconds",*(undefined8 *)(param_1 + 0x38));
  iVar4 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
    FUN_1447a1bd6(param_2,iVar4);
  }
  lVar5 = *param_2;
  lVar6 = (longlong)iVar4 * 0x10;
  *(undefined8 *)(lVar5 + lVar6) = 0;
  *(undefined2 **)(lVar5 + lVar6) = local_90;
  *(int *)(lVar5 + 8 + lVar6) = (int)local_88;
  *(undefined4 *)(lVar5 + 0xc + lVar6) = local_88._4_4_;
  local_88 = 0;
  local_90 = (undefined2 *)0x0;
  FUN_140002266(&local_90,L" Thread            Avg        Min        Max");
  iVar4 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
    FUN_1447a1bd6(param_2,iVar4);
  }
  lVar5 = *param_2;
  lVar6 = (longlong)iVar4 * 0x10;
  *(undefined8 *)(lVar5 + lVar6) = 0;
  *(undefined2 **)(lVar5 + lVar6) = local_90;
  *(int *)(lVar5 + 8 + lVar6) = (int)local_88;
  *(undefined4 *)(lVar5 + 0xc + lVar6) = local_88._4_4_;
  local_88 = 0;
  local_90 = (undefined2 *)0x0;
  uVar8 = 0;
  do {
    uVar1 = *(undefined8 *)(param_1 + 0x118 + uVar8 * 8);
    uVar2 = *(undefined8 *)(param_1 + 0xb8 + uVar8 * 8);
    uVar3 = *(undefined8 *)(param_1 + 0xe8 + uVar8 * 8);
    FUN_147ad6600(&local_a0,uVar8 & 0xffffffff);
    puVar7 = &DAT_149dfb77a;
    if ((int)local_98 != 0) {
      puVar7 = local_a0;
    }
    local_b8 = uVar3;
    local_b0 = uVar1;
    FUN_140002266(&local_90,L"  %-9s %10.3f %10.3f %10.3f",puVar7,uVar2);
    iVar4 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar4 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
      FUN_1447a1bd6(param_2,iVar4);
    }
    lVar5 = *param_2;
    lVar6 = (longlong)iVar4 * 0x10;
    *(undefined8 *)(lVar5 + lVar6) = 0;
    *(undefined2 **)(lVar5 + lVar6) = local_90;
    *(int *)(lVar5 + 8 + lVar6) = (int)local_88;
    *(undefined4 *)(lVar5 + 0xc + lVar6) = local_88._4_4_;
    local_88 = 0;
    local_90 = (undefined2 *)0x0;
    if (local_a0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 != 5);
  FUN_140002266(&local_90,L"--------------------------------------------");
  iVar4 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
    FUN_1447a1bd6(param_2,iVar4);
  }
  lVar5 = *param_2;
  lVar6 = (longlong)iVar4 * 0x10;
  *(undefined8 *)(lVar5 + lVar6) = 0;
  *(undefined2 **)(lVar5 + lVar6) = local_90;
  *(int *)(lVar5 + 8 + lVar6) = (int)local_88;
  *(undefined4 *)(lVar5 + 0xc + lVar6) = local_88._4_4_;
  local_88 = 0;
  local_90 = (undefined2 *)0x0;
  FUN_140056680(&local_90,&DAT_14a819d62);
  puVar7 = local_90;
  if ((int)local_88 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_a0,L"  %-9s %10.3f",puVar7,(double)*(float *)(param_1 + 0x140));
  iVar4 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
    FUN_1447a1bd6(param_2,iVar4);
  }
  lVar5 = *param_2;
  lVar6 = (longlong)iVar4 * 0x10;
  *(undefined8 *)(lVar5 + lVar6) = 0;
  *(undefined2 **)(lVar5 + lVar6) = local_a0;
  *(int *)(lVar5 + 8 + lVar6) = (int)local_98;
  *(undefined4 *)(lVar5 + 0xc + lVar6) = local_98._4_4_;
  local_98 = 0;
  local_a0 = (undefined2 *)0x0;
  if (local_90 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_80 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ad620e FUN_147ad620e body=93 status=ok
// SIG undefined FUN_147ad620e(void)

void FUN_147ad620e(longlong *param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  
  uVar1 = FUN_14054d1d4();
  if ((int)param_1[1] == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  else {
    puVar2 = (undefined2 *)*param_1;
  }
  FUN_146810e4c(param_2,puVar2,0,uVar1,(param_3 & 0xff) * 4 + 4);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147ad626c FUN_147ad626c body=914 status=ok
// SIG undefined FUN_147ad626c(void)

/* WARNING: Removing unreachable block (ram,0x000147ad6364) */
/* WARNING: Removing unreachable block (ram,0x000147ad657d) */

void FUN_147ad626c(longlong param_1,longlong *param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_188 [32];
  undefined *local_168;
  undefined *local_160;
  undefined *local_158;
  double local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (param_3 != '\0') {
    FUN_140002266(&local_d0,
                  L"RunTag,MachineID,ScenarioTag,BenchmarkID,LocationTag,FPS_Avg,Frame_Avg,Frame_Min,Frame_Max,Game_Avg,Game_Min,Game_Max,Render_Avg,Render_Min,Render_Max,RHI_Avg,RHI_Min,RHI_Max,GPU_Avg,GPU_Min,GPU_Max"
                 );
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_1447a1bd6(param_2,iVar1);
    }
    lVar2 = *param_2;
    lVar3 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar2 + lVar3) = 0;
    *(undefined8 *)(lVar2 + lVar3) = local_d0;
    local_d0 = 0;
    *(undefined4 *)(lVar2 + 8 + lVar3) = (undefined4)local_c8;
    *(undefined4 *)(lVar2 + 0xc + lVar3) = local_c8._4_4_;
    local_c8 = 0;
  }
  puVar4 = &DAT_14a90f866;
  local_158 = &DAT_14a90f866;
  if (*(int *)(param_1 + 0x68) - 2U < 0x7fffffff) {
    local_158 = *(undefined **)(param_1 + 0x60);
  }
  local_160 = &DAT_14a90f866;
  if (*(int *)(param_1 + 0x98) - 2U < 0x7fffffff) {
    local_160 = *(undefined **)(param_1 + 0x90);
  }
  local_168 = &DAT_14a90f866;
  if (*(int *)(param_1 + 0x48) - 2U < 0x7fffffff) {
    local_168 = *(undefined **)(param_1 + 0x40);
  }
  puVar5 = &DAT_14a90f866;
  if (*(int *)(param_1 + 0x88) - 2U < 0x7fffffff) {
    puVar5 = *(undefined **)(param_1 + 0x80);
  }
  local_d8 = *(undefined8 *)(param_1 + 0x138);
  local_e0 = *(undefined8 *)(param_1 + 0x108);
  local_e8 = *(undefined8 *)(param_1 + 0xd8);
  local_f0 = *(undefined8 *)(param_1 + 0x130);
  local_f8 = *(undefined8 *)(param_1 + 0x100);
  local_100 = *(undefined8 *)(param_1 + 0xd0);
  local_108 = *(undefined8 *)(param_1 + 0x128);
  local_110 = *(undefined8 *)(param_1 + 0xf8);
  local_118 = *(undefined8 *)(param_1 + 200);
  local_120 = *(undefined8 *)(param_1 + 0x120);
  local_128 = *(undefined8 *)(param_1 + 0xf0);
  local_130 = *(undefined8 *)(param_1 + 0xc0);
  local_138 = *(undefined8 *)(param_1 + 0x118);
  local_140 = *(undefined8 *)(param_1 + 0xe8);
  local_148 = *(undefined8 *)(param_1 + 0xb8);
  if (*(int *)(param_1 + 0x58) - 2U < 0x7fffffff) {
    puVar4 = *(undefined **)(param_1 + 0x50);
  }
  local_150 = (double)*(float *)(param_1 + 0x140);
  FUN_140002266(&local_d0,
                L"%s,%s,%s,%s,%s,%.3f,%.3f,%.3f,%.3f,%.3f,%.3f,%.3f,%.3f,%.3f,%.3f,%.3f,%.3f,%.3f,%.3f,%.3f,%.3f"
                ,puVar4,puVar5);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1447a1bd6(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar3) = 0;
  *(undefined8 *)(lVar2 + lVar3) = local_d0;
  *(undefined4 *)(lVar2 + 8 + lVar3) = (undefined4)local_c8;
  *(undefined4 *)(lVar2 + 0xc + lVar3) = local_c8._4_4_;
  local_c8 = 0;
  local_d0 = 0;
  if ((local_c0 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ad6600 FUN_147ad6600 body=52 status=ok
// SIG undefined FUN_147ad6600(void)

undefined8 FUN_147ad6600(undefined8 param_1,uint param_2)

{
  undefined *puVar1;
  
  if (param_2 < 5) {
    puVar1 = (&PTR_u_Frame_14a915f68)[param_2];
  }
  else {
    puVar1 = &DAT_14a90fb04;
  }
  FUN_140056680(param_1,puVar1);
  return param_1;
}



// FUNCTION 147ad6644 FUN_147ad6644 body=242 status=ok
// SIG undefined FUN_147ad6644(void)

void FUN_147ad6644(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  (**(code **)(*param_1 + 0x10))(0,&local_48);
  if ((int)uStack_40 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uStack_40 & 0xffffffff);
  }
  if (*(int *)((longlong)param_2 + 0xc) < (int)uStack_40) {
    FUN_147ae04be(param_2);
  }
  lVar2 = local_48;
  if ((int)uStack_40 != 0) {
    lVar5 = (longlong)(int)uStack_40;
    lVar4 = 0;
    do {
      if ((*(longlong **)(lVar2 + lVar4) != (longlong *)0x0) &&
         (lVar3 = (**(code **)(**(longlong **)(lVar2 + lVar4) + 0x388))(), lVar3 != 0)) {
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_147ae051e(param_2,iVar1);
        }
        *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar3;
      }
      lVar4 = lVar4 + 8;
    } while (lVar5 * 8 != lVar4);
  }
  if (local_48 != 0) {
    FUN_1400020a8(local_48);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ad675c FUN_147ad675c body=238 status=ok
// SIG undefined FUN_147ad675c(void)

void FUN_147ad675c(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_2 != 0) && (iVar1 = *(int *)(param_1 + 0x30), (longlong)iVar1 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar5 = 0;
    do {
      plVar3 = (longlong *)
               FUN_1408985b6(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(lVar2 + lVar5),3);
      if (plVar3 != (longlong *)0x0) {
        lVar4 = FUN_1400796d0(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(lVar2 + 8 + lVar5),1);
        if (lVar4 != 0) {
          local_50 = 0;
          FUN_14485c47a(&local_50,param_2);
          local_58 = *(undefined8 *)(lVar2 + 8 + lVar5);
          local_60 = local_50;
          local_48 = local_58;
          (**(code **)(*plVar3 + 0x1f0))(plVar3,&local_60,param_2,0);
        }
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar5);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ad684c FUN_147ad684c body=190 status=ok
// SIG undefined FUN_147ad684c(void)

void FUN_147ad684c(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_2 != 0) && (iVar1 = *(int *)(param_1 + 0x30), (longlong)iVar1 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar4 = 0;
    do {
      plVar3 = (longlong *)
               FUN_1408985b6(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(lVar2 + lVar4),3);
      if (plVar3 != (longlong *)0x0) {
        local_68 = 0;
        uStack_60 = 0;
        FUN_14485c47a(&local_68,param_2);
        uStack_60 = *(undefined8 *)(lVar2 + 8 + lVar4);
        (**(code **)(*plVar3 + 0x1f8))(plVar3,&local_68,param_2,0);
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar4);
  }
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ad6928 FUN_147ad6928 body=44 status=ok
// SIG undefined FUN_147ad6928(void)

void FUN_147ad6928(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_147ad6954(param_1 + 0x150,param_3);
  FUN_1447fd100(param_1,param_2);
  return;
}



// FUNCTION 147ad6954 FUN_147ad6954 body=141 status=ok
// SIG undefined FUN_147ad6954(void)

undefined4 * FUN_147ad6954(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
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
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar6 = param_2[4];
  uVar7 = param_2[5];
  uVar8 = param_2[6];
  uVar9 = param_2[7];
  uVar10 = param_2[9];
  uVar11 = param_2[10];
  uVar12 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar10;
  param_1[10] = uVar11;
  param_1[0xb] = uVar12;
  param_1[4] = uVar6;
  param_1[5] = uVar7;
  param_1[6] = uVar8;
  param_1[7] = uVar9;
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  if (param_1 != param_2) {
    iVar1 = param_2[0x1c];
    param_1[0x1c] = iVar1;
    if (iVar1 == 0 && param_1[0x1d] == 0) {
      param_1[0x1d] = 4;
    }
    else {
      FUN_144780848(param_1 + 0xc,iVar1);
      if (iVar1 != 0) {
        memcpy(param_1 + 0xc,param_2 + 0xc,(longlong)iVar1 << 4);
      }
    }
  }
  uVar13 = *(undefined8 *)(param_2 + 0x1e);
  uVar14 = *(undefined8 *)(param_2 + 0x20);
  uVar15 = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)(param_2 + 0x22);
  *(undefined8 *)(param_1 + 0x24) = uVar15;
  *(undefined8 *)(param_1 + 0x1e) = uVar13;
  *(undefined8 *)(param_1 + 0x20) = uVar14;
  return param_1;
}



// FUNCTION 147ad69e2 FUN_147ad69e2 body=2098 status=ok
// SIG undefined FUN_147ad69e2(void)

void FUN_147ad69e2(longlong param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  bool bVar14;
  longlong lVar15;
  longlong lVar16;
  byte bVar17;
  int iVar18;
  byte *pbVar19;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  longlong local_108;
  longlong local_100;
  undefined8 *local_f8;
  longlong local_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  ulonglong local_d8 [17];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  puVar1 = (undefined8 *)(param_1 + 0x150);
  puVar10 = *(undefined8 **)(param_1 + 0x150);
  local_f8 = puVar1;
  if (puVar10 != *(undefined8 **)(param_1 + 0x160)) {
    local_50 = 0x1100000000;
    FUN_140a40422(&local_e8,puVar1,0,param_1 + 0xa0);
    uVar13 = local_50;
    lVar16 = (longlong)(int)(uint)local_50;
    uVar7 = (uint)local_50 + 1;
    local_50 = CONCAT44(local_50._4_4_,uVar7);
    if (local_50._4_4_ < uVar7) {
      FUN_14738ac8a(local_d8,uVar13 & 0xffffffff);
    }
    local_d8[lVar16] = (ulonglong)local_e8;
    local_118 = 1;
    FUN_1447f936a(param_1,1,local_d8,1);
    FUN_1447f9616(param_1,local_d8,1);
    local_50 = 0x1100000000;
    FUN_140a40386(&local_e8,puVar1,0,param_1 + 0xd0);
    lVar16 = (longlong)(int)(uint)local_50;
    uVar7 = (uint)local_50 + 1;
    if (local_50._4_4_ < uVar7) {
      uVar13 = local_50 & 0xffffffff;
      local_50._0_4_ = uVar7;
      FUN_14738ac8a(local_d8,uVar13);
      uVar7 = (uint)local_50;
    }
    local_50._0_4_ = uVar7;
    local_d8[lVar16] = (ulonglong)local_e8;
    FUN_140a40386(&local_e8,param_1 + 0x170,1,param_1 + 0xd0);
    uVar7 = (uint)local_50;
    lVar16 = (longlong)(int)(uint)local_50;
    local_50._0_4_ = (uint)local_50 + 1;
    if (local_50._4_4_ < (uint)local_50) {
      FUN_14738ac8a(local_d8,uVar7);
    }
    local_d8[lVar16] = (ulonglong)local_e8;
    local_118 = 2;
    FUN_1447f936a(param_1,2,local_d8,2);
    FUN_1447f9616(param_1,local_d8,2);
    puVar10 = *(undefined8 **)(param_1 + 0x150);
  }
  local_50 = 0x1100000000;
  if (puVar10 != (undefined8 *)0x0) {
    bVar2 = *(byte *)(param_1 + 0x15d);
    bVar17 = *(byte *)(param_1 + 0x15f);
    local_e0._0_7_ = CONCAT16(bVar17,(uint6)CONCAT14(bVar2,*(undefined4 *)(param_1 + 0x158)));
    local_e0 = (ulonglong)(uint7)local_e0;
    bVar3 = *(byte *)(param_1 + 0x15e);
    bVar4 = *(byte *)(param_1 + 0x15c);
    local_e8 = puVar10;
    uVar7 = FUN_14472dff0(param_1 + 0x10);
    uVar13 = local_50;
    lVar16 = (longlong)(int)(uint)local_50;
    uVar8 = (uint)local_50 + 1;
    local_50 = CONCAT44(local_50._4_4_,uVar8);
    if (local_50._4_4_ < uVar8) {
      FUN_14738ac8a(local_d8,uVar13 & 0xffffffff);
    }
    local_d8[lVar16] =
         (ulonglong)uVar7 & 0xff |
         (ulonglong)bVar4 << 8 |
         (ulonglong)bVar3 << 0x10 | (ulonglong)bVar2 << 0x20 | (ulonglong)(bVar17 & 1) << 0x30;
    *(uint *)(param_1 + 0x148) = (uint)(byte)local_d8[(int)((uint)local_50 + -1)];
  }
  lVar16 = param_1 + 0x160;
  local_108 = param_1 + 0x10;
  lVar11 = 0;
  bVar6 = true;
  local_100 = param_1;
  local_f0 = lVar16;
  do {
    bVar14 = bVar6;
    local_e8 = *(undefined8 **)(lVar16 + lVar11 * 0x10);
    if (local_e8 != (undefined8 *)0x0) {
      lVar16 = lVar11 * 0x10 + lVar16;
      bVar2 = (&DAT_14a9107da)[lVar11];
      bVar17 = *(byte *)(lVar16 + 0xd);
      bVar3 = *(byte *)(lVar16 + 0xf);
      local_e0._0_7_ = CONCAT16(bVar3,(uint6)CONCAT14(bVar17,*(undefined4 *)(lVar16 + 8)));
      local_e0 = (ulonglong)(uint7)local_e0;
      bVar4 = *(byte *)(lVar16 + 0xe);
      bVar5 = *(byte *)(lVar16 + 0xc);
      uVar7 = FUN_14472dff0(local_108,&local_e8);
      uVar13 = local_50;
      lVar16 = (longlong)(int)(uint)local_50;
      uVar8 = (uint)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,uVar8);
      if (local_50._4_4_ < uVar8) {
        FUN_14738ac8a(local_d8,uVar13 & 0xffffffff);
      }
      local_d8[lVar16] =
           (ulonglong)uVar7 & 0xff |
           (ulonglong)bVar5 << 8 |
           (ulonglong)bVar4 << 0x10 |
           (ulonglong)bVar2 << 0x18 | (ulonglong)bVar17 << 0x20 | (ulonglong)(bVar3 & 1) << 0x30;
      lVar16 = local_f0;
    }
    lVar15 = local_100;
    lVar11 = 1;
    bVar6 = false;
  } while (bVar14);
  local_e8 = *(undefined8 **)(local_100 + 0x1c8);
  if (local_e8 == (undefined8 *)0x0) {
    local_e0 = 0;
    local_e8 = &DAT_14ca94d98;
    uVar7 = FUN_14472dff0(local_108);
    uVar13 = local_50;
    lVar16 = (longlong)(int)(uint)local_50;
    uVar8 = (uint)local_50 + 1;
    local_50 = CONCAT44(local_50._4_4_,uVar8);
    if (local_50._4_4_ < uVar8) {
      FUN_14738ac8a(local_d8,uVar13 & 0xffffffff);
    }
    local_d8[lVar16] = (ulonglong)(uVar7 & 0xff | 0x3080000);
  }
  else {
    bVar2 = *(byte *)(local_100 + 0x1d5);
    bVar17 = *(byte *)(local_100 + 0x1d7);
    local_e0._0_7_ = CONCAT16(bVar17,(uint6)CONCAT14(bVar2,*(undefined4 *)(local_100 + 0x1d0)));
    local_e0 = (ulonglong)(uint7)local_e0;
    bVar3 = *(byte *)(local_100 + 0x1d6);
    bVar4 = *(byte *)(local_100 + 0x1d4);
    uVar7 = FUN_14472dff0(local_108);
    uVar13 = local_50;
    lVar16 = (longlong)(int)(uint)local_50;
    uVar8 = (uint)local_50 + 1;
    local_50 = CONCAT44(local_50._4_4_,uVar8);
    if (local_50._4_4_ < uVar8) {
      FUN_14738ac8a(local_d8,uVar13 & 0xffffffff);
    }
    local_d8[lVar16] =
         (ulonglong)uVar7 & 0xff |
         (ulonglong)bVar4 << 8 |
         (ulonglong)bVar3 << 0x10 | (ulonglong)bVar2 << 0x20 | (ulonglong)(bVar17 & 1) << 0x30 |
         0x3000000;
    lVar15 = local_100;
  }
  if (*(undefined8 **)(lVar15 + 0x1d8) == (undefined8 *)0x0) {
    if ((undefined8 *)*local_f8 != (undefined8 *)0x0) {
      bVar3 = *(byte *)(lVar15 + 0x15d);
      bVar4 = *(byte *)(lVar15 + 0x15f);
      local_e0._0_6_ = (uint6)CONCAT14(bVar3,*(undefined4 *)(lVar15 + 0x158));
      local_e0._0_7_ = CONCAT16(bVar4,(uint6)local_e0);
      bVar2 = *(byte *)(lVar15 + 0x15c);
      bVar17 = *(byte *)(lVar15 + 0x15e);
      local_e8 = (undefined8 *)*local_f8;
      goto LAB_147ad6e2e;
    }
  }
  else {
    bVar3 = *(byte *)(lVar15 + 0x1e5);
    bVar4 = *(byte *)(lVar15 + 0x1e7);
    local_e0._0_6_ = (uint6)CONCAT14(bVar3,*(undefined4 *)(lVar15 + 0x1e0));
    local_e0._0_7_ = CONCAT16(bVar4,(uint6)local_e0);
    bVar2 = *(byte *)(lVar15 + 0x1e4);
    bVar17 = *(byte *)(lVar15 + 0x1e6);
    local_e8 = *(undefined8 **)(lVar15 + 0x1d8);
LAB_147ad6e2e:
    local_e0 = (ulonglong)(uint7)local_e0;
    uVar8 = FUN_14472dff0(local_108);
    uVar13 = local_50;
    iVar18 = (uint)local_50;
    uVar7 = (uint)local_50 + 1;
    local_50 = CONCAT44(local_50._4_4_,uVar7);
    if (local_50._4_4_ < uVar7) {
      FUN_14738ac8a(local_d8,uVar13 & 0xffffffff);
    }
    local_d8[iVar18] =
         ((ulonglong)uVar8 & 0xff) +
         ((ulonglong)bVar2 << 8 |
         (ulonglong)bVar17 << 0x10 | (ulonglong)bVar3 << 0x20 | (ulonglong)(bVar4 & 1) << 0x30) +
         0x4000000;
    lVar15 = local_100;
  }
  *(uint *)(lVar15 + 0x14c) = (uint)(byte)local_d8[(int)((uint)local_50 + -1)];
  local_f0 = lVar15 + 0x180;
  iVar18 = *(int *)(lVar15 + 0x1c0);
  if (iVar18 != 0) {
    if (0 < iVar18) {
      pbVar19 = (byte *)(lVar15 + 399);
      uVar7 = 0x5000000;
      lVar16 = 0;
      do {
        local_e8 = *(undefined8 **)(pbVar19 + -0xf);
        bVar2 = pbVar19[-2];
        bVar17 = *pbVar19;
        local_e0._0_7_ = CONCAT16(bVar17,(uint6)CONCAT14(bVar2,*(undefined4 *)(pbVar19 + -7)));
        local_e0 = (ulonglong)(uint7)local_e0;
        bVar3 = pbVar19[-1];
        bVar4 = pbVar19[-3];
        uVar12 = FUN_14472dff0(local_108,&local_e8);
        uVar13 = local_50;
        lVar11 = (longlong)(int)(uint)local_50;
        uVar8 = (uint)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,uVar8);
        if (local_50._4_4_ < uVar8) {
          local_f8 = (undefined8 *)CONCAT44(local_f8._4_4_,(int)uVar12);
          FUN_14738ac8a(local_d8,uVar13 & 0xffffffff);
          uVar12 = (ulonglong)local_f8 & 0xffffffff;
        }
        local_d8[lVar11] =
             uVar12 & 0xff |
             (ulonglong)bVar4 << 8 |
             (ulonglong)bVar3 << 0x10 |
             (ulonglong)uVar7 | (ulonglong)bVar2 << 0x20 | (ulonglong)(bVar17 & 1) << 0x30;
        lVar16 = lVar16 + 1;
        iVar18 = *(int *)(local_100 + 0x1c0);
        uVar7 = uVar7 + 0x1000000;
        pbVar19 = pbVar19 + 0x10;
      } while (lVar16 < iVar18);
      lVar15 = local_100;
      if (3 < iVar18) goto LAB_147ad70a1;
    }
    uVar7 = iVar18 * 0x1000000 + 0x5000000;
    iVar18 = iVar18 + -4;
    do {
      lVar16 = (longlong)*(int *)(lVar15 + 0x1c0) * 0x10;
      local_e8 = *(undefined8 **)(local_f0 + -0x10 + lVar16);
      bVar2 = *(byte *)(local_f0 + -3 + lVar16);
      bVar17 = *(byte *)(local_f0 + -1 + lVar16);
      local_e0._0_7_ =
           CONCAT16(bVar17,(uint6)CONCAT14(bVar2,*(undefined4 *)(local_f0 + -8 + lVar16)));
      local_e0 = (ulonglong)(uint7)local_e0;
      bVar3 = *(byte *)(local_f0 + -2 + lVar16);
      bVar4 = *(byte *)(local_f0 + -4 + lVar16);
      uVar8 = FUN_14472dff0(local_108,&local_e8);
      uVar13 = local_50;
      lVar16 = (longlong)(int)(uint)local_50;
      uVar9 = (uint)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,uVar9);
      if (local_50._4_4_ < uVar9) {
        FUN_14738ac8a(local_d8,uVar13 & 0xffffffff);
      }
      local_d8[lVar16] =
           (ulonglong)uVar8 & 0xff | (ulonglong)bVar4 << 8 | (ulonglong)bVar3 << 0x10 |
           (ulonglong)uVar7 | (ulonglong)bVar2 << 0x20 | (ulonglong)(bVar17 & 1) << 0x30;
      uVar7 = uVar7 + 0x1000000;
      iVar18 = iVar18 + 1;
      lVar15 = local_100;
    } while (iVar18 != 0);
  }
LAB_147ad70a1:
  local_118 = 0xd;
  FUN_1447f936a(lVar15,0,local_d8,0xd);
  FUN_1447f9616(lVar15,local_d8,0);
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ad722c FUN_147ad722c body=8 status=ok
// SIG undefined FUN_147ad722c(void)

undefined * FUN_147ad722c(void)

{
  return &DAT_14cae3cb0;
}



// FUNCTION 147ad7234 FUN_147ad7234 body=117 status=ok
// SIG undefined FUN_147ad7234(void)

void FUN_147ad7234(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x218);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x218) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x130);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x130) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144846d14(param_1);
  return;
}



// FUNCTION 147ad72aa FUN_147ad72aa body=680 status=ok
// SIG undefined FUN_147ad72aa(void)

void FUN_147ad72aa(longlong param_1,uint param_2,longlong *param_3,undefined8 param_4)

{
  uint *puVar1;
  uint uVar2;
  ulonglong uVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  short *psVar9;
  
  lVar6 = (**(code **)(*param_3 + 0x30))(param_3);
  if ((int)param_2 < 2 || (*(byte *)(lVar6 + 0x29) & 0x40) == 0) {
    lVar6 = param_3[0x43];
  }
  else {
    lVar6 = param_3[0x43];
    if ((*(byte *)((longlong)&DAT_14ca814d0 +
                  (ulonglong)*(ushort *)(&DAT_14ca85070 + (ulonglong)param_2 * 2) * 0x3c + 6) & 0x10
        ) != 0) {
      bVar4 = true;
      goto LAB_147ad7332;
    }
  }
  cVar5 = FUN_144a798df(DAT_14ca85550,param_2);
  if (cVar5 == '\0') {
    return;
  }
  bVar4 = false;
LAB_147ad7332:
  FUN_145fcca64();
  uVar3 = *(ulonglong *)(param_1 + 0xa0);
  uVar7 = param_1 + 0xa0 + ((longlong)uVar3 >> 0x18);
  if ((uVar3 & 1) == 0) {
    uVar7 = uVar3;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar8 = 0;
    do {
      if (*(longlong *)(uVar7 + lVar8 * 4) == DAT_14cade470) {
        uVar3 = *(ulonglong *)(param_1 + 0xb0);
        uVar7 = param_1 + 0xb0 + ((longlong)uVar3 >> 0x18);
        if ((uVar3 & 1) == 0) {
          uVar7 = uVar3;
        }
        psVar9 = (short *)(uVar7 + lVar8);
        goto LAB_147ad73ab;
      }
      lVar8 = lVar8 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar8);
  }
  psVar9 = &DAT_14c9c45cc;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9c45d0) && (FUN_144b3d300(&DAT_14c9c45d0), DAT_14c9c45d0 == -1)) {
    DAT_14c9c45cc = 0xffff;
    _Init_thread_footer(&DAT_14c9c45d0);
  }
LAB_147ad73ab:
  if (*psVar9 != -1) {
    FUN_144b11088(param_4,lVar6);
  }
  if (bVar4) {
    lVar6 = param_3[0x26];
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
    }
    FUN_145e38e46();
    uVar3 = *(ulonglong *)(param_1 + 0xa0);
    uVar7 = param_1 + 0xa0 + ((longlong)uVar3 >> 0x18);
    if ((uVar3 & 1) == 0) {
      uVar7 = uVar3;
    }
    if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
      lVar8 = 0;
      do {
        if (*(longlong *)(uVar7 + lVar8 * 4) == DAT_14cade508) {
          uVar3 = *(ulonglong *)(param_1 + 0xb0);
          uVar7 = param_1 + 0xb0 + ((longlong)uVar3 >> 0x18);
          if ((uVar3 & 1) == 0) {
            uVar7 = uVar3;
          }
          psVar9 = (short *)(uVar7 + lVar8);
          goto LAB_147ad7456;
        }
        lVar8 = lVar8 + 2;
      } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar8);
    }
    psVar9 = &DAT_14c9c45cc;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9c45d0) && (FUN_144b3d300(&DAT_14c9c45d0), DAT_14c9c45d0 == -1)) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
LAB_147ad7456:
    if (*psVar9 != -1) {
      FUN_144b11088(param_4,lVar6);
    }
    if (lVar6 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar6 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812(lVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147ad7552 FUN_147ad7552 body=645 status=ok
// SIG undefined FUN_147ad7552(void)

void FUN_147ad7552(longlong *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4)

{
  float fVar1;
  double dVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  double local_138;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  double dStack_f0;
  double local_d8;
  double dStack_d0;
  double local_b8;
  double dStack_b0;
  double local_98;
  double dStack_90;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_138 = (double)param_4[2];
  local_148 = *(undefined4 *)param_4;
  uStack_144 = *(undefined4 *)((longlong)param_4 + 4);
  uStack_140 = *(undefined4 *)(param_4 + 1);
  uStack_13c = *(undefined4 *)((longlong)param_4 + 0xc);
  FUN_1467fc32a(&local_148,&local_110,&local_128);
  dVar2 = (double)param_4[3];
  uVar8 = *param_4;
  uVar9 = param_4[1];
  uVar3 = param_4[2];
  *param_2 = local_110;
  param_2[1] = local_108;
  param_2[2] = uStack_100;
  param_2[3] = 0;
  param_2[4] = local_128;
  param_2[5] = local_120;
  param_2[6] = uStack_118;
  param_2[7] = 0;
  param_2[8] = uVar8;
  param_2[9] = uVar9;
  param_2[10] = uVar3;
  param_2[0xb] = 0;
  param_2[0xc] = dVar2 * (double)CONCAT44(uStack_144,local_148);
  param_2[0xd] = (double)CONCAT44(uStack_13c,uStack_140) * dVar2;
  param_2[0xe] = local_138 * dVar2;
  param_2[0xf] = 0x3ff0000000000000;
  uVar4 = *(uint *)(param_3 + 1);
  lVar10 = param_1[1];
  *(uint *)(param_1 + 1) = (int)lVar10 + uVar4;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar10) < uVar4) {
    FUN_147ae0bb8(param_1);
  }
  if (0 < (int)param_3[1]) {
    lVar12 = 0;
    lVar10 = 0;
    lVar11 = 0;
    do {
      lVar5 = *param_3;
      dVar2 = (double)*(float *)(lVar5 + 8 + lVar12);
      dVar6 = (double)*(float *)(lVar5 + 4 + lVar12);
      fVar1 = *(float *)(lVar5 + lVar12);
      FUN_14007522e(&local_f8,param_2);
      *(double *)(*param_1 + lVar10) =
           dVar2 * local_b8 + dVar6 * local_d8 + (double)fVar1 * local_f8 + local_98;
      *(double *)(*param_1 + 8 + lVar10) =
           dVar2 * dStack_b0 + dVar6 * dStack_d0 + (double)fVar1 * dStack_f0 + dStack_90;
      lVar5 = *param_3;
      dVar2 = (double)*(float *)(lVar5 + 0x14 + lVar12);
      dVar6 = (double)*(float *)(lVar5 + 0x10 + lVar12);
      dVar7 = (double)*(float *)(lVar5 + 0xc + lVar12);
      FUN_14007522e(&local_f8,param_2);
      *(double *)(*param_1 + 0x10 + lVar10) =
           dVar2 * local_b8 + dVar6 * local_d8 + dVar7 * local_f8 + local_98;
      *(double *)(*param_1 + 0x18 + lVar10) =
           dVar2 * dStack_b0 + dVar6 * dStack_d0 + dVar7 * dStack_f0 + dStack_90;
      lVar11 = lVar11 + 1;
      lVar10 = lVar10 + 0x20;
      lVar12 = lVar12 + 0x18;
    } while (lVar11 < (int)param_3[1]);
  }
  if ((local_70 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ad77d8 FUN_147ad77d8 body=1976 status=ok
// SIG undefined FUN_147ad77d8(void)

void FUN_147ad77d8(longlong *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  void *_Src;
  double dVar2;
  double dVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined4 uVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  double *pdVar19;
  ulonglong uVar20;
  longlong lVar21;
  double dVar22;
  float fVar23;
  float fVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined1 auStack_178 [32];
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  double *local_128;
  undefined8 uStack_120;
  double *local_118;
  uint local_110;
  undefined4 local_10c;
  undefined8 *local_108;
  ulonglong uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_118 = (double *)0x0;
  local_110 = *(uint *)(param_2 + 1);
  lVar14 = (longlong)(int)local_110;
  _Src = (void *)*param_2;
  if (lVar14 == 0) {
    local_10c = 0;
  }
  else {
    FUN_147ae0d60(&local_118,local_110);
    memcpy(local_118,_Src,lVar14 << 5);
    if (0 < (int)local_110) {
      do {
        local_128 = (double *)0x0;
        uStack_120 = 0;
        local_148 = local_118[(ulonglong)local_110 * 4 + -4];
        dStack_140 = (local_118 + (ulonglong)local_110 * 4 + -4)[1];
        pdVar19 = local_118 + (ulonglong)local_110 * 4 + -2;
        local_138 = *(undefined4 *)pdVar19;
        uStack_134 = *(undefined4 *)((longlong)pdVar19 + 4);
        uStack_130 = *(undefined4 *)(pdVar19 + 1);
        uStack_12c = *(undefined4 *)((longlong)pdVar19 + 0xc);
        local_110 = local_110 - 1;
        FUN_147ade27c(&local_118);
        uVar15 = *param_3;
        lVar14 = (longlong)(int)(uint)uStack_120;
        uVar10 = (uint)uStack_120 + 1;
        if (uStack_120._4_4_ < uVar10) {
          uVar18 = uStack_120 & 0xffffffff;
          uStack_120._0_4_ = uVar10;
          FUN_147ade318(&local_128,uVar18);
          uVar10 = (uint)uStack_120;
        }
        uStack_120._0_4_ = uVar10;
        uVar10 = (uint)uStack_120;
        local_128[lVar14 * 6] = local_148;
        (local_128 + lVar14 * 6)[1] = dStack_140;
        *(undefined4 *)(local_128 + lVar14 * 6 + 2) = uVar15;
        local_128[lVar14 * 6 + 3] = 0.0;
        (local_128 + lVar14 * 6 + 3)[1] = 0.0;
        *(undefined1 *)(local_128 + lVar14 * 6 + 5) = 0;
        uVar15 = *param_3;
        uStack_120._0_4_ = (uint)uStack_120 + 1;
        if (uStack_120._4_4_ < (uint)uStack_120) {
          FUN_147ade318(&local_128,uVar10);
        }
        dVar22 = (double)CONCAT44(uStack_134,local_138);
        dVar26 = (double)CONCAT44(uStack_12c,uStack_130);
        while( true ) {
          lVar14 = (longlong)(int)uVar10;
          local_128[lVar14 * 6] = dVar22;
          (local_128 + lVar14 * 6)[1] = dVar26;
          *(undefined4 *)(local_128 + lVar14 * 6 + 2) = uVar15;
          local_128[lVar14 * 6 + 3] = 0.0;
          (local_128 + lVar14 * 6 + 3)[1] = 0.0;
          *(undefined1 *)(local_128 + lVar14 * 6 + 5) = 0;
          dVar22 = local_128[(longlong)(int)(uint)uStack_120 * 6 + -6];
          dVar26 = local_128[(longlong)(int)(uint)uStack_120 * 6 + -5];
          if ((int)local_110 < 1) break;
          uVar18 = 0xffffffff;
          uVar20 = 0;
          fVar23 = 3.4e+38;
          pdVar19 = local_118;
          do {
            fVar24 = (float)((*pdVar19 - dVar22) * (*pdVar19 - dVar22) +
                            (pdVar19[1] - dVar26) * (pdVar19[1] - dVar26));
            if (fVar24 < fVar23) {
              local_158 = pdVar19[2];
              dStack_150 = pdVar19[3];
              uVar18 = uVar20 & 0xffffffff;
              fVar23 = fVar24;
            }
            fVar24 = (float)((pdVar19[2] - dVar22) * (pdVar19[2] - dVar22) +
                            (pdVar19[3] - dVar26) * (pdVar19[3] - dVar26));
            if (fVar24 < fVar23) {
              local_158 = *pdVar19;
              dStack_150 = pdVar19[1];
              uVar18 = uVar20 & 0xffffffff;
              fVar23 = fVar24;
            }
            uVar20 = uVar20 + 1;
            pdVar19 = pdVar19 + 4;
          } while (local_110 != uVar20);
          if (0.0001 <= fVar23) break;
          uVar10 = (uint)uVar18;
          if (~uVar10 + local_110 != 0) {
            memmove(local_118 + (longlong)(int)uVar10 * 4,local_118 + (longlong)(int)uVar10 * 4 + 4,
                    (longlong)(int)(~uVar10 + local_110) << 5);
          }
          local_110 = local_110 - 1;
          FUN_147ade27c(&local_118);
          uVar18 = uStack_120;
          uVar15 = *param_3;
          uVar10 = (uint)uStack_120;
          uVar11 = (uint)uStack_120 + 1;
          uStack_120 = CONCAT44(uStack_120._4_4_,uVar11);
          dVar22 = local_158;
          dVar26 = dStack_150;
          if (uStack_120._4_4_ < uVar11) {
            FUN_147ade318(&local_128,uVar18 & 0xffffffff);
            dVar22 = local_158;
            dVar26 = dStack_150;
          }
        }
        if ((3 < (int)(uint)uStack_120) &&
           ((float)((*local_128 - dVar22) * (*local_128 - dVar22) +
                   (local_128[1] - dVar26) * (local_128[1] - dVar26)) < 0.0001)) {
          uStack_120 = CONCAT44(uStack_120._4_4_,(uint)uStack_120 + -1);
          FUN_147ae0c3e(&local_128);
          lVar14 = (longlong)(int)(uint)uStack_120;
          if (0 < lVar14) {
            uVar18 = lVar14 + 1;
            iVar16 = -(uint)uStack_120;
            lVar14 = lVar14 * 0x30;
            fVar23 = 0.0;
            do {
              iVar12 = (uint)uStack_120 + -1;
              iVar4 = (int)uVar18 + -3;
              if (uVar18 == 2) {
                iVar4 = iVar12;
              }
              uVar18 = uVar18 - 1;
              uVar20 = (longlong)
                       ((ulonglong)(uint)((int)uVar18 >> 0x1f) << 0x20 | uVar18 & 0xffffffff) %
                       (longlong)(int)(uint)uStack_120 & 0xffffffff;
              dVar22 = *(double *)((longlong)local_128 + lVar14 + -0x28);
              dVar2 = dVar22 - local_128[(longlong)iVar4 * 6 + 1];
              dVar26 = *(double *)((longlong)local_128 + lVar14 + -0x30);
              dVar25 = dVar26 - local_128[(longlong)iVar4 * 6];
              dVar27 = dVar25 * dVar25 + dVar2 * dVar2;
              dVar3 = 0.0;
              if (9.99999993922529e-09 < dVar27) {
                dVar2 = dVar2 * (1.0 / SQRT(dVar27));
              }
              else {
                dVar2 = 0.0;
              }
              dVar22 = local_128[uVar20 * 6 + 1] - dVar22;
              dVar26 = local_128[uVar20 * 6] - dVar26;
              dVar28 = dVar26 * dVar26 + dVar22 * dVar22;
              if (9.99999993922529e-09 < dVar28) {
                dVar3 = dVar22 * (1.0 / SQRT(dVar28));
              }
              if (((float)dVar27 < 0.0001) || ((float)dVar28 < 0.0001)) {
LAB_147ad7d25:
                if (uVar18 != (uStack_120 & 0xffffffff)) {
                  memmove((void *)((longlong)local_128 + lVar14 + -0x30),
                          (void *)((longlong)local_128 + lVar14),
                          (longlong)(int)((uint)uStack_120 + iVar16) * 0x30);
                  iVar12 = (uint)uStack_120 + -1;
                }
                uStack_120 = CONCAT44(uStack_120._4_4_,iVar12);
                FUN_147ae0c3e(&local_128);
              }
              else {
                dVar22 = (double)(-(ulonglong)(9.99999993922529e-09 < dVar27) &
                                 (ulonglong)(dVar25 * (1.0 / SQRT(dVar27))));
                dVar26 = (double)(-(ulonglong)(9.99999993922529e-09 < dVar28) &
                                 (ulonglong)(dVar26 * (1.0 / SQRT(dVar28))));
                if ((ABS(dVar22 - dVar26) <= 0.009999999776482582) &&
                   (ABS(dVar2 - dVar3) <= 0.009999999776482582)) goto LAB_147ad7d25;
                dVar26 = dVar22 * dVar3 - dVar26 * dVar2;
                dVar22 = dVar26;
                if (1.0 <= dVar26) {
                  dVar22 = 1.0;
                }
                dVar22 = asin((double)(-(ulonglong)(dVar26 < -1.0) & 0xbff0000000000000 |
                                      ~-(ulonglong)(dVar26 < -1.0) & (ulonglong)dVar22));
                fVar23 = (float)((double)fVar23 + dVar22);
              }
              iVar16 = iVar16 + 1;
              lVar14 = lVar14 + -0x30;
            } while (1 < uVar18);
            if (fVar23 < 0.0) {
              iVar16 = (uint)uStack_120;
              uVar18 = uStack_120 & 0xffffffff;
              local_108 = (undefined8 *)0x0;
              uStack_100 = uStack_120 & 0xffffffff;
              if (uVar18 == 0) {
                uVar10 = 0;
              }
              else {
                FUN_147ade318(&local_108,0);
                if (0 < iVar16) {
                  lVar14 = uVar18 * 0x30;
                  puVar13 = local_108;
                  do {
                    puVar1 = (undefined8 *)((longlong)local_128 + lVar14 + -0x30);
                    uVar5 = *puVar1;
                    uVar6 = puVar1[1];
                    puVar1 = (undefined8 *)((longlong)local_128 + lVar14 + -0x20);
                    uVar7 = *puVar1;
                    uVar8 = puVar1[1];
                    puVar1 = (undefined8 *)((longlong)local_128 + lVar14 + -0x10);
                    uVar9 = puVar1[1];
                    puVar13[4] = *puVar1;
                    puVar13[5] = uVar9;
                    puVar13[2] = uVar7;
                    puVar13[3] = uVar8;
                    *puVar13 = uVar5;
                    puVar13[1] = uVar6;
                    puVar13 = puVar13 + 6;
                    lVar14 = lVar14 + -0x30;
                  } while (lVar14 != 0);
                }
                uVar10 = (uint)uStack_100;
              }
              puVar13 = local_108;
              uStack_120 = CONCAT44(uStack_120._4_4_,uVar10);
              if (uStack_120._4_4_ == 0 && uVar10 == 0) {
                uStack_120 = (ulonglong)uVar10;
              }
              else {
                FUN_147ae0cec(&local_128,uVar10);
                if (uVar10 != 0) {
                  memcpy(local_128,puVar13,(longlong)(int)uVar10 * 0x30);
                }
              }
              if (local_108 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
            }
          }
          iVar16 = (int)param_1[1];
          *(uint *)(param_1 + 1) = iVar16 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar16 + 1U) {
            FUN_147ae0db8(param_1,iVar16);
          }
          pdVar19 = local_128;
          lVar14 = *param_1;
          lVar21 = (longlong)iVar16 * 0x10;
          puVar13 = (undefined8 *)(lVar14 + lVar21);
          *(undefined8 *)(lVar14 + lVar21) = 0;
          lVar17 = (longlong)(int)(uint)uStack_120;
          *(uint *)(lVar14 + 8 + lVar21) = (uint)uStack_120;
          if (lVar17 == 0) {
            *(undefined4 *)((longlong)puVar13 + 0xc) = 0;
          }
          else {
            FUN_147ae0cec(puVar13,uStack_120 & 0xffffffff,0);
            memcpy((void *)*puVar13,pdVar19,lVar17 * 0x30);
          }
        }
        if (local_128 != (double *)0x0) {
          FUN_1400020a8();
        }
      } while (0 < (int)local_110);
    }
  }
  if (local_118 != (double *)0x0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ad7f91 FUN_147ad7f91 body=951 status=ok
// SIG undefined FUN_147ad7f91(void)

undefined8 FUN_147ad7f91(float *param_1,float *param_2,float *param_3,float *param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar13 = param_1[2];
  fVar11 = *param_1;
  fVar10 = param_1[1];
  fVar1 = param_4[2];
  fVar2 = *param_4;
  fVar3 = param_4[1];
  fVar4 = param_2[2];
  fVar12 = fVar4 - fVar13;
  fVar5 = *param_2;
  fVar6 = param_2[1];
  fVar15 = fVar6 - fVar10;
  fVar14 = fVar5 - fVar11;
  fVar7 = param_3[2];
  fVar8 = param_3[1];
  fVar9 = *param_3;
  if (0.0 <= (fVar15 * (fVar7 - fVar13) - fVar12 * (fVar8 - fVar10)) *
             (fVar15 * (fVar1 - fVar13) - (fVar3 - fVar10) * fVar12) +
             (fVar12 * (fVar9 - fVar11) - (fVar7 - fVar13) * fVar14) *
             (fVar12 * (fVar2 - fVar11) - (fVar1 - fVar13) * fVar14) +
             (fVar14 * (fVar8 - fVar10) - (fVar9 - fVar11) * fVar15) *
             (fVar14 * (fVar3 - fVar10) - (fVar2 - fVar11) * fVar15) + param_5) {
    fVar12 = fVar7 - fVar4;
    fVar15 = fVar8 - fVar6;
    fVar14 = fVar9 - fVar5;
    if (0.0 <= (fVar15 * (fVar13 - fVar4) - fVar12 * (fVar10 - fVar6)) *
               (fVar15 * (fVar1 - fVar4) - (fVar3 - fVar6) * fVar12) +
               (fVar12 * (fVar11 - fVar5) - (fVar13 - fVar4) * fVar14) *
               (fVar12 * (fVar2 - fVar5) - (fVar1 - fVar4) * fVar14) +
               (fVar14 * (fVar10 - fVar6) - (fVar11 - fVar5) * fVar15) *
               (fVar14 * (fVar3 - fVar6) - (fVar2 - fVar5) * fVar15) + param_5) {
      fVar13 = fVar13 - fVar7;
      fVar10 = fVar10 - fVar8;
      fVar11 = fVar11 - fVar9;
      if (0.0 <= (fVar10 * (fVar4 - fVar7) - fVar13 * (fVar6 - fVar8)) *
                 (fVar10 * (fVar1 - fVar7) - (fVar3 - fVar8) * fVar13) +
                 (fVar13 * (fVar5 - fVar9) - (fVar4 - fVar7) * fVar11) *
                 (fVar13 * (fVar2 - fVar9) - (fVar1 - fVar7) * fVar11) +
                 (fVar11 * (fVar6 - fVar8) - (fVar5 - fVar9) * fVar10) *
                 (fVar11 * (fVar3 - fVar8) - (fVar2 - fVar9) * fVar10) + param_5) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 147ad8348 FUN_147ad8348 body=72 status=ok
// SIG undefined FUN_147ad8348(void)

void FUN_147ad8348(longlong *param_1,float param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (0 < (int)param_1[1]) {
    lVar2 = 0x20;
    lVar3 = 0;
    do {
      lVar1 = *param_1;
      *(double *)(lVar1 + -8 + lVar2) = *(double *)(lVar1 + -0x20 + lVar2) / (double)param_2;
      *(double *)(lVar1 + lVar2) = *(double *)(lVar1 + -0x18 + lVar2) / (double)param_2;
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x30;
    } while (lVar3 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 147ad8390 FUN_147ad8390 body=447 status=ok
// SIG undefined FUN_147ad8390(void)

bool FUN_147ad8390(double *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  
  lVar3 = (longlong)(int)param_2[1];
  if (lVar3 < 1) {
    fVar13 = 0.0;
  }
  else {
    fVar13 = 0.0;
    lVar5 = 8;
    lVar4 = 1;
    do {
      lVar1 = *param_2;
      dVar8 = *(double *)(lVar1 + lVar5) - param_1[1];
      dVar9 = *(double *)(lVar1 + -8 + lVar5) - *param_1;
      lVar2 = lVar4;
      if (lVar4 == lVar3) {
        lVar2 = 0;
      }
      dVar11 = *(double *)(lVar1 + 8 + lVar2 * 0x10) - param_1[1];
      dVar10 = *(double *)(lVar1 + lVar2 * 0x10) - *param_1;
      dVar12 = dVar9 * dVar11 - dVar10 * dVar8;
      uVar7 = -(ulonglong)(0.0 < dVar12);
      dVar8 = (dVar9 * dVar10 + dVar8 * dVar11) /
              (SQRT(dVar10 * dVar10 + dVar11 * dVar11) * SQRT(dVar9 * dVar9 + dVar8 * dVar8));
      if (1.0 <= dVar8) {
        dVar8 = 1.0;
      }
      if (dVar8 <= -1.0) {
        dVar8 = -1.0;
      }
      dVar9 = dVar8;
      if (1.0 <= dVar8) {
        dVar9 = 1.0;
      }
      dVar8 = acos((double)(-(ulonglong)(dVar8 < -1.0) & 0xbff0000000000000 |
                           ~-(ulonglong)(dVar8 < -1.0) & (ulonglong)dVar9));
      fVar13 = fVar13 + (float)(dVar8 * (double)(uVar7 & 0x3ff0000000000000 |
                                                ~uVar7 & -(ulonglong)(dVar12 < 0.0) &
                                                         0xbff0000000000000));
      lVar5 = lVar5 + 0x10;
      bVar6 = lVar4 != lVar3;
      lVar4 = lVar4 + 1;
    } while (bVar6);
  }
  return 0.001 < ABS(fVar13);
}



// FUNCTION 147ad8550 FUN_147ad8550 body=1881 status=ok
// SIG undefined FUN_147ad8550(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147ad8550(longlong *param_1,double *param_2,undefined8 param_3,float param_4)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  double *pdVar5;
  float *pfVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  uint *puVar10;
  float fVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auStack_158 [32];
  undefined1 local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  longlong local_120;
  uint local_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  longlong local_108;
  uint local_100;
  int iStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  longlong local_f0;
  uint local_e8 [6];
  uint local_d0 [6];
  uint local_b8;
  int iStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  float local_9c;
  undefined8 *local_98;
  float *local_90;
  undefined1 local_84 [4];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_158;
  uVar8 = 0;
  lVar4 = 0x10;
  do {
    uVar8 = uVar8 + (*(double *)((longlong)param_2 + lVar4) != 0.0);
    lVar4 = lVar4 + 0x18;
  } while (lVar4 != 0x118);
  if (*(int *)((longlong)param_1 + 0x144) != 0 || uVar8 != 0) {
    pdVar5 = param_2 + 1;
    plVar7 = param_1 + 0xb;
    uVar9 = 0;
    do {
      if (((longlong)*(int *)((longlong)param_1 + 0x144) <= (longlong)uVar9) && (uVar9 < uVar8)) {
        uVar13 = *(undefined4 *)((longlong)pdVar5 + -4);
        uVar14 = *(undefined4 *)pdVar5;
        uVar15 = *(undefined4 *)((longlong)pdVar5 + 4);
        *(undefined4 *)(plVar7 + -1) = *(undefined4 *)(pdVar5 + -1);
        *(undefined4 *)((longlong)plVar7 + -4) = uVar13;
        *(undefined4 *)plVar7 = uVar14;
        *(undefined4 *)((longlong)plVar7 + 4) = uVar15;
      }
      uVar9 = uVar9 + 1;
      pdVar5 = pdVar5 + 3;
      plVar7 = plVar7 + 2;
    } while (uVar9 != 0xb);
    if (1 < uVar8) {
      if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
        uVar2 = (uint)((ulonglong)CONCAT44(DAT_14c965bf8._4_4_,(uint)DAT_14c965bf8) >> 0x10);
        plVar7 = param_1 + 7;
        if ((longlong *)param_1[8] != (longlong *)0x0) {
          plVar7 = (longlong *)param_1[8];
        }
        iVar3 = *(int *)((longlong)plVar7 +
                        (ulonglong)
                        ((int)param_1[9] - 1U &
                        DAT_14c965bf8._4_4_ +
                        ((uint)DAT_14c965bf8 << 0x10 | (uint)DAT_14c965bf8 & 0xffff) +
                        (uVar2 << 0x13 | uVar2 & 0xffff) + (((uint)DAT_14c965bf8 & 0xffff) >> 4)) *
                        4);
        if (iVar3 != -1) {
          do {
            plVar7 = (longlong *)(*param_1 + (longlong)iVar3 * 0x28);
            if (*plVar7 == CONCAT44(DAT_14c965bf8._4_4_,(uint)DAT_14c965bf8)) {
              uVar13 = SUB84(*param_2,0);
              uVar14 = (undefined4)((ulonglong)*param_2 >> 0x20);
              uVar15 = SUB84(param_2[1],0);
              uVar16 = (undefined4)((ulonglong)param_2[1] >> 0x20);
              uVar17 = SUB84(param_2[3],0);
              uVar18 = (undefined4)((ulonglong)param_2[3] >> 0x20);
              uVar19 = SUB84(param_2[4],0);
              uVar20 = (undefined4)((ulonglong)param_2[4] >> 0x20);
              if (plVar7 == (longlong *)0x0) goto LAB_147ad88da;
              pfVar6 = (float *)(plVar7 + 3);
              goto LAB_147ad8a19;
            }
            iVar3 = (int)plVar7[4];
          } while (iVar3 != -1);
        }
      }
      uVar13 = SUB84(*param_2,0);
      uVar14 = (undefined4)((ulonglong)*param_2 >> 0x20);
      uVar15 = SUB84(param_2[1],0);
      uVar16 = (undefined4)((ulonglong)param_2[1] >> 0x20);
      uVar17 = SUB84(param_2[3],0);
      uVar18 = (undefined4)((ulonglong)param_2[3] >> 0x20);
      uVar19 = SUB84(param_2[4],0);
      uVar20 = (undefined4)((ulonglong)param_2[4] >> 0x20);
LAB_147ad88da:
      if ((((*(float *)((longlong)param_1 + 0x124) == 0.0) &&
           (!NAN(*(float *)((longlong)param_1 + 0x124)))) ||
          (dVar1 = (double)param_1[0x21] - (double)CONCAT44(uVar16,uVar15),
          dVar12 = (double)param_1[0x20] - (double)CONCAT44(uVar14,uVar13),
          10000.0 < dVar12 * dVar12 + dVar1 * dVar1)) ||
         (dVar1 = (double)param_1[0x23] - (double)CONCAT44(uVar20,uVar19),
         dVar12 = (double)param_1[0x22] - (double)CONCAT44(uVar18,uVar17),
         10000.0 < dVar12 * dVar12 + dVar1 * dVar1)) {
        dVar12 = (double)CONCAT44(uVar16,uVar15) - (double)CONCAT44(uVar20,uVar19);
        dVar1 = (double)CONCAT44(uVar14,uVar13) - (double)CONCAT44(uVar18,uVar17);
        *(float *)((longlong)param_1 + 0x124) = (float)(dVar1 * dVar1 + dVar12 * dVar12);
      }
      local_90 = &local_9c;
      local_9c = 1.0;
      local_98 = &DAT_14c965bf8;
      FUN_147ae0e68(param_1);
      if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
        uVar2 = (uint)((ulonglong)CONCAT44(DAT_14c965bf8._4_4_,(uint)DAT_14c965bf8) >> 0x10);
        plVar7 = param_1 + 7;
        if ((longlong *)param_1[8] != (longlong *)0x0) {
          plVar7 = (longlong *)param_1[8];
        }
        iVar3 = *(int *)((longlong)plVar7 +
                        (ulonglong)
                        ((int)param_1[9] - 1U &
                        DAT_14c965bf8._4_4_ +
                        ((uint)DAT_14c965bf8 << 0x10 | (uint)DAT_14c965bf8 & 0xffff) +
                        (uVar2 << 0x13 | uVar2 & 0xffff) + (((uint)DAT_14c965bf8 & 0xffff) >> 4)) *
                        4);
        if (iVar3 != -1) {
          do {
            plVar7 = (longlong *)(*param_1 + (longlong)iVar3 * 0x28);
            if (*plVar7 == CONCAT44(DAT_14c965bf8._4_4_,(uint)DAT_14c965bf8)) goto LAB_147ad8a0e;
            iVar3 = (int)plVar7[4];
          } while (iVar3 != -1);
        }
      }
      plVar7 = (longlong *)0x0;
LAB_147ad8a0e:
      pfVar6 = (float *)(plVar7 + 3);
      if (plVar7 == (longlong *)0x0) {
        pfVar6 = (float *)0x0;
      }
LAB_147ad8a19:
      dVar12 = (double)CONCAT44(uVar16,uVar15) - (double)CONCAT44(uVar20,uVar19);
      dVar1 = (double)CONCAT44(uVar14,uVar13) - (double)CONCAT44(uVar18,uVar17);
      *pfVar6 = (float)(dVar1 * dVar1 + dVar12 * dVar12) / *(float *)((longlong)param_1 + 0x124);
      local_b8 = (uint)DAT_14c965bf8;
      iStack_b4 = DAT_14c965bf8._4_4_;
      uStack_b0 = _DAT_14c965c00;
      uStack_ac = uRam000000014c965c04;
      local_a8 = DAT_14c965c08;
      if (DAT_14c965c08 != 0) {
        LOCK();
        *(int *)(DAT_14c965c08 + 8) = *(int *)(DAT_14c965c08 + 8) + 1;
        UNLOCK();
      }
      local_138 = 0;
      FUN_147ad8caa(param_1,param_3,&local_b8,1);
      param_1[0x20] = CONCAT44(uVar14,uVar13);
      param_1[0x21] = CONCAT44(uVar16,uVar15);
      param_1[0x22] = CONCAT44(uVar18,uVar17);
      param_1[0x23] = CONCAT44(uVar20,uVar19);
      dVar12 = (double)FUN_144afd35e(SUB84(param_2[1] - param_2[4],0),SUB84(*param_2 - param_2[3],0)
                                    );
      dVar12 = (double)FUN_144719204(SUB84((double)((float)dVar12 * 57.295776),0));
      fVar11 = (float)(double)(~-(ulonglong)(dVar12 < 0.0) & (ulonglong)dVar12 |
                              (ulonglong)(dVar12 + 360.0) & -(ulonglong)(dVar12 < 0.0));
      if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
        uVar2 = (uint)((ulonglong)CONCAT44(DAT_14c965c28._4_4_,(uint)DAT_14c965c28) >> 0x10);
        plVar7 = param_1 + 7;
        if ((longlong *)param_1[8] != (longlong *)0x0) {
          plVar7 = (longlong *)param_1[8];
        }
        iVar3 = *(int *)((longlong)plVar7 +
                        (ulonglong)
                        ((int)param_1[9] - 1U &
                        DAT_14c965c28._4_4_ +
                        ((uint)DAT_14c965c28 << 0x10 | (uint)DAT_14c965c28 & 0xffff) +
                        (uVar2 << 0x13 | uVar2 & 0xffff) + (((uint)DAT_14c965c28 & 0xffff) >> 4)) *
                        4);
        if (iVar3 != -1) {
          do {
            plVar7 = (longlong *)(*param_1 + (longlong)iVar3 * 0x28);
            if (*plVar7 == CONCAT44(DAT_14c965c28._4_4_,(uint)DAT_14c965c28)) {
              if ((float *)(plVar7 + 3) != (float *)0x0 && plVar7 != (longlong *)0x0) {
                *(float *)(plVar7 + 3) = fVar11 - *(float *)(param_1 + 0x25);
                puVar10 = local_e8;
                goto LAB_147ad8bb7;
              }
              break;
            }
            iVar3 = (int)plVar7[4];
          } while (iVar3 != -1);
        }
      }
      *(float *)(param_1 + 0x25) = fVar11;
      local_90 = &local_9c;
      local_9c = 0.0;
      local_98 = &DAT_14c965c28;
      FUN_147ae0e68(param_1,local_84);
      puVar10 = local_d0;
LAB_147ad8bb7:
      *puVar10 = (uint)DAT_14c965c28;
      puVar10[1] = DAT_14c965c28._4_4_;
      puVar10[2] = _DAT_14c965c30;
      puVar10[3] = uRam000000014c965c34;
      *(longlong *)(puVar10 + 4) = DAT_14c965c38;
      if (DAT_14c965c38 != 0) {
        LOCK();
        *(int *)(DAT_14c965c38 + 8) = *(int *)(DAT_14c965c38 + 8) + 1;
        UNLOCK();
      }
      local_138 = 0;
      FUN_147ad8caa(param_1,param_3,puVar10,1);
    }
    iVar3 = *(int *)((longlong)param_1 + 0x144);
    if ((1 < iVar3) && (uVar8 < 2)) {
      local_100 = (uint)DAT_14c965bf8;
      iStack_fc = DAT_14c965bf8._4_4_;
      uStack_f8 = _DAT_14c965c00;
      uStack_f4 = uRam000000014c965c04;
      local_f0 = DAT_14c965c08;
      if (DAT_14c965c08 != 0) {
        LOCK();
        *(int *)(DAT_14c965c08 + 8) = *(int *)(DAT_14c965c08 + 8) + 1;
        UNLOCK();
      }
      local_138 = 1;
      FUN_147ad8caa(param_1,param_3,&local_100,0);
      local_118 = (uint)DAT_14c965c28;
      uStack_114 = DAT_14c965c28._4_4_;
      uStack_110 = _DAT_14c965c30;
      uStack_10c = uRam000000014c965c34;
      local_108 = DAT_14c965c38;
      if (DAT_14c965c38 != 0) {
        LOCK();
        *(int *)(DAT_14c965c38 + 8) = *(int *)(DAT_14c965c38 + 8) + 1;
        UNLOCK();
      }
      local_138 = 1;
      FUN_147ad8caa(param_1,param_3,&local_118,0);
      iVar3 = *(int *)((longlong)param_1 + 0x144);
    }
    if ((iVar3 == 0) && (uVar8 == 1)) {
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    else if ((iVar3 == 1) && (uVar8 == 1)) {
      uVar13 = *(undefined4 *)((longlong)param_2 + 4);
      uVar14 = *(undefined4 *)(param_2 + 1);
      uVar15 = *(undefined4 *)((longlong)param_2 + 0xc);
      *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)param_2;
      *(undefined4 *)((longlong)param_1 + 0x134) = uVar13;
      *(undefined4 *)(param_1 + 0x27) = uVar14;
      *(undefined4 *)((longlong)param_1 + 0x13c) = uVar15;
      *(float *)(param_1 + 0x28) = param_4 + *(float *)(param_1 + 0x28);
    }
    else if ((((0 < iVar3) && (uVar8 == 0)) &&
             (*(float *)(param_1 + 0x28) <= 0.25 && *(float *)(param_1 + 0x28) != 0.25)) &&
            (dVar12 = (double)param_1[0x27] - (double)param_1[0xb],
            10000.0 < ((double)param_1[0x26] - (double)param_1[10]) *
                      ((double)param_1[0x26] - (double)param_1[10]) + dVar12 * dVar12)) {
      dVar12 = (double)FUN_144afd35e(SUB84(dVar12,0));
      dVar12 = (double)FUN_144719204(SUB84((double)((float)dVar12 * 57.295776),0));
      local_9c = (float)(double)(~-(ulonglong)(dVar12 < 0.0) & (ulonglong)dVar12 |
                                (ulonglong)(dVar12 + 360.0) & -(ulonglong)(dVar12 < 0.0));
      local_90 = &local_9c;
      local_98 = (undefined8 *)&DAT_14c965c10;
      FUN_147ae13c6(param_1,local_84);
      local_130 = _DAT_14c965c10;
      uStack_12c = uRam000000014c965c14;
      uStack_128 = _DAT_14c965c18;
      uStack_124 = uRam000000014c965c1c;
      local_120 = DAT_14c965c20;
      if (DAT_14c965c20 != 0) {
        LOCK();
        *(int *)(DAT_14c965c20 + 8) = *(int *)(DAT_14c965c20 + 8) + 1;
        UNLOCK();
      }
      local_138 = 1;
      FUN_147ad8caa(param_1,param_3,&local_130,1);
    }
  }
  *(uint *)((longlong)param_1 + 0x144) = uVar8;
  if ((local_80 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ad8caa FUN_147ad8caa body=358 status=ok
// SIG undefined FUN_147ad8caa(void)

void FUN_147ad8caa(longlong *param_1,undefined8 param_2,longlong *param_3,char param_4,byte param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar3 = *param_3;
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar8 = (uint)lVar3 & 0xffff;
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar7 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar8) +
                    (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        plVar7 = (longlong *)(*param_1 + (longlong)iVar6 * 0x28);
        if (*plVar7 == lVar3) {
          if (plVar7 + 3 != (longlong *)0x0 && plVar7 != (longlong *)0x0) {
            iVar6 = 0;
            if (param_4 == '\0') {
              iVar6 = 2 - (uint)param_5;
            }
            lVar5 = plVar7[3];
            local_30 = param_3[1];
            local_28 = param_3[2];
            if (local_28 != 0) {
              LOCK();
              *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
              UNLOCK();
            }
            local_38 = lVar3;
            FUN_147d93f4a(param_2,&local_38,iVar6,(int)lVar5);
            if (param_5 != 0) {
              FUN_147ae1536(param_1,param_3);
            }
          }
          break;
        }
        iVar6 = (int)plVar7[4];
      } while (iVar6 != -1);
    }
  }
  plVar7 = (longlong *)param_3[2];
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ad8e12 FUN_147ad8e12 body=42 status=ok
// SIG undefined FUN_147ad8e12(void)

void FUN_147ad8e12(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x160);
  return;
}



// FUNCTION 147ad8e44 FUN_147ad8e44 body=39 status=ok
// SIG undefined FUN_147ad8e44(void)

void FUN_147ad8e44(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x160,0x10);
  FUN_147ae1690(uVar1,param_1);
  return;
}



// FUNCTION 147ad8e6c FUN_147ad8e6c body=122 status=ok
// SIG undefined FUN_147ad8e6c(void)

longlong FUN_147ad8e6c(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x160,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined2 *)(lVar1 + 0xf8) = 0xffff;
  *(undefined8 *)(lVar1 + 0xfa) = 0;
  *(undefined8 *)(lVar1 + 0x102) = 0;
  *(undefined8 *)(lVar1 + 0x10a) = 0;
  *(undefined8 *)(lVar1 + 0x112) = 0;
  *(undefined8 *)(lVar1 + 0x11a) = 0;
  *(undefined8 *)(lVar1 + 0x122) = 0;
  *(undefined8 *)(lVar1 + 0x12a) = 0;
  *(undefined8 *)(lVar1 + 0x132) = 0;
  *(undefined8 *)(lVar1 + 0x13a) = 0;
  *(undefined8 *)(lVar1 + 0x142) = 0;
  *(undefined8 *)(lVar1 + 0x14a) = 0;
  *(undefined8 *)(lVar1 + 0x152) = 0;
  *(undefined4 *)(lVar1 + 0x15a) = 0;
  return lVar1;
}



// FUNCTION 147ad8ee6 FUN_147ad8ee6 body=42 status=ok
// SIG undefined FUN_147ad8ee6(void)

void FUN_147ad8ee6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x160);
  return;
}



// FUNCTION 147ad8f18 FUN_147ad8f18 body=39 status=ok
// SIG undefined FUN_147ad8f18(void)

void FUN_147ad8f18(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x160,0x10);
  FUN_147ae1690(uVar1,param_1);
  return;
}



// FUNCTION 147ad8f40 FUN_147ad8f40 body=122 status=ok
// SIG undefined FUN_147ad8f40(void)

longlong FUN_147ad8f40(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x160,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined2 *)(lVar1 + 0xf8) = 0xffff;
  *(undefined8 *)(lVar1 + 0xfa) = 0;
  *(undefined8 *)(lVar1 + 0x102) = 0;
  *(undefined8 *)(lVar1 + 0x10a) = 0;
  *(undefined8 *)(lVar1 + 0x112) = 0;
  *(undefined8 *)(lVar1 + 0x11a) = 0;
  *(undefined8 *)(lVar1 + 0x122) = 0;
  *(undefined8 *)(lVar1 + 0x12a) = 0;
  *(undefined8 *)(lVar1 + 0x132) = 0;
  *(undefined8 *)(lVar1 + 0x13a) = 0;
  *(undefined8 *)(lVar1 + 0x142) = 0;
  *(undefined8 *)(lVar1 + 0x14a) = 0;
  *(undefined8 *)(lVar1 + 0x152) = 0;
  *(undefined4 *)(lVar1 + 0x15a) = 0;
  return lVar1;
}



// FUNCTION 147ad8fba FUN_147ad8fba body=42 status=ok
// SIG undefined FUN_147ad8fba(void)

void FUN_147ad8fba(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x160);
  return;
}



// FUNCTION 147ad8fec FUN_147ad8fec body=39 status=ok
// SIG undefined FUN_147ad8fec(void)

void FUN_147ad8fec(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x160,0x10);
  FUN_147ae1690(uVar1,param_1);
  return;
}



// FUNCTION 147ad9014 FUN_147ad9014 body=122 status=ok
// SIG undefined FUN_147ad9014(void)

longlong FUN_147ad9014(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x160,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined2 *)(lVar1 + 0xf8) = 0xffff;
  *(undefined8 *)(lVar1 + 0xfa) = 0;
  *(undefined8 *)(lVar1 + 0x102) = 0;
  *(undefined8 *)(lVar1 + 0x10a) = 0;
  *(undefined8 *)(lVar1 + 0x112) = 0;
  *(undefined8 *)(lVar1 + 0x11a) = 0;
  *(undefined8 *)(lVar1 + 0x122) = 0;
  *(undefined8 *)(lVar1 + 0x12a) = 0;
  *(undefined8 *)(lVar1 + 0x132) = 0;
  *(undefined8 *)(lVar1 + 0x13a) = 0;
  *(undefined8 *)(lVar1 + 0x142) = 0;
  *(undefined8 *)(lVar1 + 0x14a) = 0;
  *(undefined8 *)(lVar1 + 0x152) = 0;
  *(undefined4 *)(lVar1 + 0x15a) = 0;
  return lVar1;
}



// FUNCTION 147ad908e FUN_147ad908e body=42 status=ok
// SIG undefined FUN_147ad908e(void)

void FUN_147ad908e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x160);
  return;
}



// FUNCTION 147ad90c0 FUN_147ad90c0 body=39 status=ok
// SIG undefined FUN_147ad90c0(void)

void FUN_147ad90c0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x160,0x10);
  FUN_147ae1690(uVar1,param_1);
  return;
}



// FUNCTION 147ad90e8 FUN_147ad90e8 body=122 status=ok
// SIG undefined FUN_147ad90e8(void)

longlong FUN_147ad90e8(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x160,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined2 *)(lVar1 + 0xf8) = 0xffff;
  *(undefined8 *)(lVar1 + 0xfa) = 0;
  *(undefined8 *)(lVar1 + 0x102) = 0;
  *(undefined8 *)(lVar1 + 0x10a) = 0;
  *(undefined8 *)(lVar1 + 0x112) = 0;
  *(undefined8 *)(lVar1 + 0x11a) = 0;
  *(undefined8 *)(lVar1 + 0x122) = 0;
  *(undefined8 *)(lVar1 + 0x12a) = 0;
  *(undefined8 *)(lVar1 + 0x132) = 0;
  *(undefined8 *)(lVar1 + 0x13a) = 0;
  *(undefined8 *)(lVar1 + 0x142) = 0;
  *(undefined8 *)(lVar1 + 0x14a) = 0;
  *(undefined8 *)(lVar1 + 0x152) = 0;
  *(undefined4 *)(lVar1 + 0x15a) = 0;
  return lVar1;
}



// FUNCTION 147ad9162 FUN_147ad9162 body=42 status=ok
// SIG undefined FUN_147ad9162(void)

void FUN_147ad9162(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x160);
  return;
}



// FUNCTION 147ad9194 FUN_147ad9194 body=39 status=ok
// SIG undefined FUN_147ad9194(void)

void FUN_147ad9194(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x160,0x10);
  FUN_147ae1690(uVar1,param_1);
  return;
}



// FUNCTION 147ad91bc FUN_147ad91bc body=122 status=ok
// SIG undefined FUN_147ad91bc(void)

longlong FUN_147ad91bc(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x160,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined2 *)(lVar1 + 0xf8) = 0xffff;
  *(undefined8 *)(lVar1 + 0xfa) = 0;
  *(undefined8 *)(lVar1 + 0x102) = 0;
  *(undefined8 *)(lVar1 + 0x10a) = 0;
  *(undefined8 *)(lVar1 + 0x112) = 0;
  *(undefined8 *)(lVar1 + 0x11a) = 0;
  *(undefined8 *)(lVar1 + 0x122) = 0;
  *(undefined8 *)(lVar1 + 0x12a) = 0;
  *(undefined8 *)(lVar1 + 0x132) = 0;
  *(undefined8 *)(lVar1 + 0x13a) = 0;
  *(undefined8 *)(lVar1 + 0x142) = 0;
  *(undefined8 *)(lVar1 + 0x14a) = 0;
  *(undefined8 *)(lVar1 + 0x152) = 0;
  *(undefined4 *)(lVar1 + 0x15a) = 0;
  return lVar1;
}



// FUNCTION 147ad9236 FUN_147ad9236 body=42 status=ok
// SIG undefined FUN_147ad9236(void)

void FUN_147ad9236(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x160);
  return;
}



// FUNCTION 147ad9268 FUN_147ad9268 body=39 status=ok
// SIG undefined FUN_147ad9268(void)

void FUN_147ad9268(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x160,0x10);
  FUN_147ae1690(uVar1,param_1);
  return;
}



// FUNCTION 147ad9290 FUN_147ad9290 body=122 status=ok
// SIG undefined FUN_147ad9290(void)

longlong FUN_147ad9290(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x160,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined2 *)(lVar1 + 0xf8) = 0xffff;
  *(undefined8 *)(lVar1 + 0xfa) = 0;
  *(undefined8 *)(lVar1 + 0x102) = 0;
  *(undefined8 *)(lVar1 + 0x10a) = 0;
  *(undefined8 *)(lVar1 + 0x112) = 0;
  *(undefined8 *)(lVar1 + 0x11a) = 0;
  *(undefined8 *)(lVar1 + 0x122) = 0;
  *(undefined8 *)(lVar1 + 0x12a) = 0;
  *(undefined8 *)(lVar1 + 0x132) = 0;
  *(undefined8 *)(lVar1 + 0x13a) = 0;
  *(undefined8 *)(lVar1 + 0x142) = 0;
  *(undefined8 *)(lVar1 + 0x14a) = 0;
  *(undefined8 *)(lVar1 + 0x152) = 0;
  *(undefined4 *)(lVar1 + 0x15a) = 0;
  return lVar1;
}



// FUNCTION 147ad930a FUN_147ad930a body=42 status=ok
// SIG undefined FUN_147ad930a(void)

void FUN_147ad930a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x160);
  return;
}



// FUNCTION 147ad933c FUN_147ad933c body=39 status=ok
// SIG undefined FUN_147ad933c(void)

void FUN_147ad933c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x160,0x10);
  FUN_147ae1690(uVar1,param_1);
  return;
}



// FUNCTION 147ad9364 FUN_147ad9364 body=122 status=ok
// SIG undefined FUN_147ad9364(void)

longlong FUN_147ad9364(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x160,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined2 *)(lVar1 + 0xf8) = 0xffff;
  *(undefined8 *)(lVar1 + 0xfa) = 0;
  *(undefined8 *)(lVar1 + 0x102) = 0;
  *(undefined8 *)(lVar1 + 0x10a) = 0;
  *(undefined8 *)(lVar1 + 0x112) = 0;
  *(undefined8 *)(lVar1 + 0x11a) = 0;
  *(undefined8 *)(lVar1 + 0x122) = 0;
  *(undefined8 *)(lVar1 + 0x12a) = 0;
  *(undefined8 *)(lVar1 + 0x132) = 0;
  *(undefined8 *)(lVar1 + 0x13a) = 0;
  *(undefined8 *)(lVar1 + 0x142) = 0;
  *(undefined8 *)(lVar1 + 0x14a) = 0;
  *(undefined8 *)(lVar1 + 0x152) = 0;
  *(undefined4 *)(lVar1 + 0x15a) = 0;
  return lVar1;
}



// FUNCTION 147ad93de FUN_147ad93de body=42 status=ok
// SIG undefined FUN_147ad93de(void)

void FUN_147ad93de(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x160);
  return;
}



// FUNCTION 147ad9410 FUN_147ad9410 body=39 status=ok
// SIG undefined FUN_147ad9410(void)

void FUN_147ad9410(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x160,0x10);
  FUN_147ae1690(uVar1,param_1);
  return;
}



// FUNCTION 147ad9438 FUN_147ad9438 body=122 status=ok
// SIG undefined FUN_147ad9438(void)

longlong FUN_147ad9438(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x160,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined2 *)(lVar1 + 0xf8) = 0xffff;
  *(undefined8 *)(lVar1 + 0xfa) = 0;
  *(undefined8 *)(lVar1 + 0x102) = 0;
  *(undefined8 *)(lVar1 + 0x10a) = 0;
  *(undefined8 *)(lVar1 + 0x112) = 0;
  *(undefined8 *)(lVar1 + 0x11a) = 0;
  *(undefined8 *)(lVar1 + 0x122) = 0;
  *(undefined8 *)(lVar1 + 0x12a) = 0;
  *(undefined8 *)(lVar1 + 0x132) = 0;
  *(undefined8 *)(lVar1 + 0x13a) = 0;
  *(undefined8 *)(lVar1 + 0x142) = 0;
  *(undefined8 *)(lVar1 + 0x14a) = 0;
  *(undefined8 *)(lVar1 + 0x152) = 0;
  *(undefined4 *)(lVar1 + 0x15a) = 0;
  return lVar1;
}



// FUNCTION 147ad94b2 FUN_147ad94b2 body=42 status=ok
// SIG undefined FUN_147ad94b2(void)

void FUN_147ad94b2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x160);
  return;
}



// FUNCTION 147ad94e4 FUN_147ad94e4 body=39 status=ok
// SIG undefined FUN_147ad94e4(void)

void FUN_147ad94e4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x160,0x10);
  FUN_147ae1690(uVar1,param_1);
  return;
}



// FUNCTION 147ad950c FUN_147ad950c body=122 status=ok
// SIG undefined FUN_147ad950c(void)

longlong FUN_147ad950c(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x160,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined2 *)(lVar1 + 0xf8) = 0xffff;
  *(undefined8 *)(lVar1 + 0xfa) = 0;
  *(undefined8 *)(lVar1 + 0x102) = 0;
  *(undefined8 *)(lVar1 + 0x10a) = 0;
  *(undefined8 *)(lVar1 + 0x112) = 0;
  *(undefined8 *)(lVar1 + 0x11a) = 0;
  *(undefined8 *)(lVar1 + 0x122) = 0;
  *(undefined8 *)(lVar1 + 0x12a) = 0;
  *(undefined8 *)(lVar1 + 0x132) = 0;
  *(undefined8 *)(lVar1 + 0x13a) = 0;
  *(undefined8 *)(lVar1 + 0x142) = 0;
  *(undefined8 *)(lVar1 + 0x14a) = 0;
  *(undefined8 *)(lVar1 + 0x152) = 0;
  *(undefined4 *)(lVar1 + 0x15a) = 0;
  return lVar1;
}



// FUNCTION 147ad9586 FUN_147ad9586 body=42 status=ok
// SIG undefined FUN_147ad9586(void)

void FUN_147ad9586(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x160);
  return;
}



// FUNCTION 147ad95b8 FUN_147ad95b8 body=39 status=ok
// SIG undefined FUN_147ad95b8(void)

void FUN_147ad95b8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x160,0x10);
  FUN_147ae1690(uVar1,param_1);
  return;
}



// FUNCTION 147ad95e0 FUN_147ad95e0 body=122 status=ok
// SIG undefined FUN_147ad95e0(void)

longlong FUN_147ad95e0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x160,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined2 *)(lVar1 + 0xf8) = 0xffff;
  *(undefined8 *)(lVar1 + 0xfa) = 0;
  *(undefined8 *)(lVar1 + 0x102) = 0;
  *(undefined8 *)(lVar1 + 0x10a) = 0;
  *(undefined8 *)(lVar1 + 0x112) = 0;
  *(undefined8 *)(lVar1 + 0x11a) = 0;
  *(undefined8 *)(lVar1 + 0x122) = 0;
  *(undefined8 *)(lVar1 + 0x12a) = 0;
  *(undefined8 *)(lVar1 + 0x132) = 0;
  *(undefined8 *)(lVar1 + 0x13a) = 0;
  *(undefined8 *)(lVar1 + 0x142) = 0;
  *(undefined8 *)(lVar1 + 0x14a) = 0;
  *(undefined8 *)(lVar1 + 0x152) = 0;
  *(undefined4 *)(lVar1 + 0x15a) = 0;
  return lVar1;
}



// FUNCTION 147ad965a FUN_147ad965a body=42 status=ok
// SIG undefined FUN_147ad965a(void)

void FUN_147ad965a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x160);
  return;
}



// FUNCTION 147ad968c FUN_147ad968c body=39 status=ok
// SIG undefined FUN_147ad968c(void)

void FUN_147ad968c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x160,0x10);
  FUN_147ae1690(uVar1,param_1);
  return;
}



// FUNCTION 147ad96b4 FUN_147ad96b4 body=122 status=ok
// SIG undefined FUN_147ad96b4(void)

longlong FUN_147ad96b4(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x160,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined2 *)(lVar1 + 0xf8) = 0xffff;
  *(undefined8 *)(lVar1 + 0xfa) = 0;
  *(undefined8 *)(lVar1 + 0x102) = 0;
  *(undefined8 *)(lVar1 + 0x10a) = 0;
  *(undefined8 *)(lVar1 + 0x112) = 0;
  *(undefined8 *)(lVar1 + 0x11a) = 0;
  *(undefined8 *)(lVar1 + 0x122) = 0;
  *(undefined8 *)(lVar1 + 0x12a) = 0;
  *(undefined8 *)(lVar1 + 0x132) = 0;
  *(undefined8 *)(lVar1 + 0x13a) = 0;
  *(undefined8 *)(lVar1 + 0x142) = 0;
  *(undefined8 *)(lVar1 + 0x14a) = 0;
  *(undefined8 *)(lVar1 + 0x152) = 0;
  *(undefined4 *)(lVar1 + 0x15a) = 0;
  return lVar1;
}



// FUNCTION 147ad972e FUN_147ad972e body=42 status=ok
// SIG undefined FUN_147ad972e(void)

void FUN_147ad972e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x160);
  return;
}



// FUNCTION 147ad9760 FUN_147ad9760 body=39 status=ok
// SIG undefined FUN_147ad9760(void)

void FUN_147ad9760(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x160,0x10);
  FUN_147ae1690(uVar1,param_1);
  return;
}



// FUNCTION 147ad9788 FUN_147ad9788 body=122 status=ok
// SIG undefined FUN_147ad9788(void)

longlong FUN_147ad9788(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x160,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined2 *)(lVar1 + 0xf8) = 0xffff;
  *(undefined8 *)(lVar1 + 0xfa) = 0;
  *(undefined8 *)(lVar1 + 0x102) = 0;
  *(undefined8 *)(lVar1 + 0x10a) = 0;
  *(undefined8 *)(lVar1 + 0x112) = 0;
  *(undefined8 *)(lVar1 + 0x11a) = 0;
  *(undefined8 *)(lVar1 + 0x122) = 0;
  *(undefined8 *)(lVar1 + 0x12a) = 0;
  *(undefined8 *)(lVar1 + 0x132) = 0;
  *(undefined8 *)(lVar1 + 0x13a) = 0;
  *(undefined8 *)(lVar1 + 0x142) = 0;
  *(undefined8 *)(lVar1 + 0x14a) = 0;
  *(undefined8 *)(lVar1 + 0x152) = 0;
  *(undefined4 *)(lVar1 + 0x15a) = 0;
  return lVar1;
}



// FUNCTION 147ad9802 FUN_147ad9802 body=42 status=ok
// SIG undefined FUN_147ad9802(void)

void FUN_147ad9802(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x160);
  return;
}



// FUNCTION 147ad9834 FUN_147ad9834 body=39 status=ok
// SIG undefined FUN_147ad9834(void)

void FUN_147ad9834(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x160,0x10);
  FUN_147ae1690(uVar1,param_1);
  return;
}



// FUNCTION 147ad985c FUN_147ad985c body=122 status=ok
// SIG undefined FUN_147ad985c(void)

longlong FUN_147ad985c(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x160,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined2 *)(lVar1 + 0xf8) = 0xffff;
  *(undefined8 *)(lVar1 + 0xfa) = 0;
  *(undefined8 *)(lVar1 + 0x102) = 0;
  *(undefined8 *)(lVar1 + 0x10a) = 0;
  *(undefined8 *)(lVar1 + 0x112) = 0;
  *(undefined8 *)(lVar1 + 0x11a) = 0;
  *(undefined8 *)(lVar1 + 0x122) = 0;
  *(undefined8 *)(lVar1 + 0x12a) = 0;
  *(undefined8 *)(lVar1 + 0x132) = 0;
  *(undefined8 *)(lVar1 + 0x13a) = 0;
  *(undefined8 *)(lVar1 + 0x142) = 0;
  *(undefined8 *)(lVar1 + 0x14a) = 0;
  *(undefined8 *)(lVar1 + 0x152) = 0;
  *(undefined4 *)(lVar1 + 0x15a) = 0;
  return lVar1;
}



// FUNCTION 147ad98d6 FUN_147ad98d6 body=42 status=ok
// SIG undefined FUN_147ad98d6(void)

void FUN_147ad98d6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x160);
  return;
}



// FUNCTION 147ad9908 FUN_147ad9908 body=39 status=ok
// SIG undefined FUN_147ad9908(void)

void FUN_147ad9908(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x160,0x10);
  FUN_147ae1690(uVar1,param_1);
  return;
}



// FUNCTION 147ad9930 FUN_147ad9930 body=122 status=ok
// SIG undefined FUN_147ad9930(void)

longlong FUN_147ad9930(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x160,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined2 *)(lVar1 + 0xf8) = 0xffff;
  *(undefined8 *)(lVar1 + 0xfa) = 0;
  *(undefined8 *)(lVar1 + 0x102) = 0;
  *(undefined8 *)(lVar1 + 0x10a) = 0;
  *(undefined8 *)(lVar1 + 0x112) = 0;
  *(undefined8 *)(lVar1 + 0x11a) = 0;
  *(undefined8 *)(lVar1 + 0x122) = 0;
  *(undefined8 *)(lVar1 + 0x12a) = 0;
  *(undefined8 *)(lVar1 + 0x132) = 0;
  *(undefined8 *)(lVar1 + 0x13a) = 0;
  *(undefined8 *)(lVar1 + 0x142) = 0;
  *(undefined8 *)(lVar1 + 0x14a) = 0;
  *(undefined8 *)(lVar1 + 0x152) = 0;
  *(undefined4 *)(lVar1 + 0x15a) = 0;
  return lVar1;
}



// FUNCTION 147ad99aa FUN_147ad99aa body=42 status=ok
// SIG undefined FUN_147ad99aa(void)

void FUN_147ad99aa(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x160);
  return;
}



// FUNCTION 147ad99dc FUN_147ad99dc body=39 status=ok
// SIG undefined FUN_147ad99dc(void)

void FUN_147ad99dc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x160,0x10);
  FUN_147ae1690(uVar1,param_1);
  return;
}



// FUNCTION 147ad9a04 FUN_147ad9a04 body=122 status=ok
// SIG undefined FUN_147ad9a04(void)

longlong FUN_147ad9a04(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x160,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined2 *)(lVar1 + 0xf8) = 0xffff;
  *(undefined8 *)(lVar1 + 0xfa) = 0;
  *(undefined8 *)(lVar1 + 0x102) = 0;
  *(undefined8 *)(lVar1 + 0x10a) = 0;
  *(undefined8 *)(lVar1 + 0x112) = 0;
  *(undefined8 *)(lVar1 + 0x11a) = 0;
  *(undefined8 *)(lVar1 + 0x122) = 0;
  *(undefined8 *)(lVar1 + 0x12a) = 0;
  *(undefined8 *)(lVar1 + 0x132) = 0;
  *(undefined8 *)(lVar1 + 0x13a) = 0;
  *(undefined8 *)(lVar1 + 0x142) = 0;
  *(undefined8 *)(lVar1 + 0x14a) = 0;
  *(undefined8 *)(lVar1 + 0x152) = 0;
  *(undefined4 *)(lVar1 + 0x15a) = 0;
  return lVar1;
}



// FUNCTION 147ad9a7e FUN_147ad9a7e body=42 status=ok
// SIG undefined FUN_147ad9a7e(void)

void FUN_147ad9a7e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x160);
  return;
}



// FUNCTION 147ad9ab0 FUN_147ad9ab0 body=39 status=ok
// SIG undefined FUN_147ad9ab0(void)

void FUN_147ad9ab0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x160,0x10);
  FUN_147ae1690(uVar1,param_1);
  return;
}



// FUNCTION 147ad9ad8 FUN_147ad9ad8 body=122 status=ok
// SIG undefined FUN_147ad9ad8(void)

longlong FUN_147ad9ad8(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x160,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined2 *)(lVar1 + 0xf8) = 0xffff;
  *(undefined8 *)(lVar1 + 0xfa) = 0;
  *(undefined8 *)(lVar1 + 0x102) = 0;
  *(undefined8 *)(lVar1 + 0x10a) = 0;
  *(undefined8 *)(lVar1 + 0x112) = 0;
  *(undefined8 *)(lVar1 + 0x11a) = 0;
  *(undefined8 *)(lVar1 + 0x122) = 0;
  *(undefined8 *)(lVar1 + 0x12a) = 0;
  *(undefined8 *)(lVar1 + 0x132) = 0;
  *(undefined8 *)(lVar1 + 0x13a) = 0;
  *(undefined8 *)(lVar1 + 0x142) = 0;
  *(undefined8 *)(lVar1 + 0x14a) = 0;
  *(undefined8 *)(lVar1 + 0x152) = 0;
  *(undefined4 *)(lVar1 + 0x15a) = 0;
  return lVar1;
}



// FUNCTION 147ad9b52 FUN_147ad9b52 body=42 status=ok
// SIG undefined FUN_147ad9b52(void)

void FUN_147ad9b52(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x160);
  return;
}



// FUNCTION 147ad9b84 FUN_147ad9b84 body=39 status=ok
// SIG undefined FUN_147ad9b84(void)

void FUN_147ad9b84(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x160,0x10);
  FUN_147ae1690(uVar1,param_1);
  return;
}



// FUNCTION 147ad9bac FUN_147ad9bac body=122 status=ok
// SIG undefined FUN_147ad9bac(void)

longlong FUN_147ad9bac(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x160,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined2 *)(lVar1 + 0xf8) = 0xffff;
  *(undefined8 *)(lVar1 + 0xfa) = 0;
  *(undefined8 *)(lVar1 + 0x102) = 0;
  *(undefined8 *)(lVar1 + 0x10a) = 0;
  *(undefined8 *)(lVar1 + 0x112) = 0;
  *(undefined8 *)(lVar1 + 0x11a) = 0;
  *(undefined8 *)(lVar1 + 0x122) = 0;
  *(undefined8 *)(lVar1 + 0x12a) = 0;
  *(undefined8 *)(lVar1 + 0x132) = 0;
  *(undefined8 *)(lVar1 + 0x13a) = 0;
  *(undefined8 *)(lVar1 + 0x142) = 0;
  *(undefined8 *)(lVar1 + 0x14a) = 0;
  *(undefined8 *)(lVar1 + 0x152) = 0;
  *(undefined4 *)(lVar1 + 0x15a) = 0;
  return lVar1;
}



// FUNCTION 147ad9c26 FUN_147ad9c26 body=42 status=ok
// SIG undefined FUN_147ad9c26(void)

void FUN_147ad9c26(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x160);
  return;
}



// FUNCTION 147ad9c58 FUN_147ad9c58 body=39 status=ok
// SIG undefined FUN_147ad9c58(void)

void FUN_147ad9c58(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x160,0x10);
  FUN_147ae1690(uVar1,param_1);
  return;
}



// FUNCTION 147ad9c80 FUN_147ad9c80 body=122 status=ok
// SIG undefined FUN_147ad9c80(void)

longlong FUN_147ad9c80(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x160,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined2 *)(lVar1 + 0xf8) = 0xffff;
  *(undefined8 *)(lVar1 + 0xfa) = 0;
  *(undefined8 *)(lVar1 + 0x102) = 0;
  *(undefined8 *)(lVar1 + 0x10a) = 0;
  *(undefined8 *)(lVar1 + 0x112) = 0;
  *(undefined8 *)(lVar1 + 0x11a) = 0;
  *(undefined8 *)(lVar1 + 0x122) = 0;
  *(undefined8 *)(lVar1 + 0x12a) = 0;
  *(undefined8 *)(lVar1 + 0x132) = 0;
  *(undefined8 *)(lVar1 + 0x13a) = 0;
  *(undefined8 *)(lVar1 + 0x142) = 0;
  *(undefined8 *)(lVar1 + 0x14a) = 0;
  *(undefined8 *)(lVar1 + 0x152) = 0;
  *(undefined4 *)(lVar1 + 0x15a) = 0;
  return lVar1;
}



// FUNCTION 147ad9cfa FUN_147ad9cfa body=42 status=ok
// SIG undefined FUN_147ad9cfa(void)

void FUN_147ad9cfa(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x160);
  return;
}



// FUNCTION 147ad9d2c FUN_147ad9d2c body=39 status=ok
// SIG undefined FUN_147ad9d2c(void)

void FUN_147ad9d2c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x160,0x10);
  FUN_147ae1690(uVar1,param_1);
  return;
}



// FUNCTION 147ad9d54 FUN_147ad9d54 body=122 status=ok
// SIG undefined FUN_147ad9d54(void)

longlong FUN_147ad9d54(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x160,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined2 *)(lVar1 + 0xf8) = 0xffff;
  *(undefined8 *)(lVar1 + 0xfa) = 0;
  *(undefined8 *)(lVar1 + 0x102) = 0;
  *(undefined8 *)(lVar1 + 0x10a) = 0;
  *(undefined8 *)(lVar1 + 0x112) = 0;
  *(undefined8 *)(lVar1 + 0x11a) = 0;
  *(undefined8 *)(lVar1 + 0x122) = 0;
  *(undefined8 *)(lVar1 + 0x12a) = 0;
  *(undefined8 *)(lVar1 + 0x132) = 0;
  *(undefined8 *)(lVar1 + 0x13a) = 0;
  *(undefined8 *)(lVar1 + 0x142) = 0;
  *(undefined8 *)(lVar1 + 0x14a) = 0;
  *(undefined8 *)(lVar1 + 0x152) = 0;
  *(undefined4 *)(lVar1 + 0x15a) = 0;
  return lVar1;
}



// FUNCTION 147ad9dce FUN_147ad9dce body=42 status=ok
// SIG undefined FUN_147ad9dce(void)

void FUN_147ad9dce(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x160);
  return;
}



// FUNCTION 147ad9e00 FUN_147ad9e00 body=39 status=ok
// SIG undefined FUN_147ad9e00(void)

void FUN_147ad9e00(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x160,0x10);
  FUN_147ae1690(uVar1,param_1);
  return;
}



// FUNCTION 147ad9e28 FUN_147ad9e28 body=122 status=ok
// SIG undefined FUN_147ad9e28(void)

longlong FUN_147ad9e28(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x160,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined2 *)(lVar1 + 0xf8) = 0xffff;
  *(undefined8 *)(lVar1 + 0xfa) = 0;
  *(undefined8 *)(lVar1 + 0x102) = 0;
  *(undefined8 *)(lVar1 + 0x10a) = 0;
  *(undefined8 *)(lVar1 + 0x112) = 0;
  *(undefined8 *)(lVar1 + 0x11a) = 0;
  *(undefined8 *)(lVar1 + 0x122) = 0;
  *(undefined8 *)(lVar1 + 0x12a) = 0;
  *(undefined8 *)(lVar1 + 0x132) = 0;
  *(undefined8 *)(lVar1 + 0x13a) = 0;
  *(undefined8 *)(lVar1 + 0x142) = 0;
  *(undefined8 *)(lVar1 + 0x14a) = 0;
  *(undefined8 *)(lVar1 + 0x152) = 0;
  *(undefined4 *)(lVar1 + 0x15a) = 0;
  return lVar1;
}



// FUNCTION 147ad9ea2 FUN_147ad9ea2 body=42 status=ok
// SIG undefined FUN_147ad9ea2(void)

void FUN_147ad9ea2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x160);
  return;
}



// FUNCTION 147ad9ed4 FUN_147ad9ed4 body=39 status=ok
// SIG undefined FUN_147ad9ed4(void)

void FUN_147ad9ed4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x160,0x10);
  FUN_147ae1690(uVar1,param_1);
  return;
}



// FUNCTION 147ad9efc FUN_147ad9efc body=122 status=ok
// SIG undefined FUN_147ad9efc(void)

longlong FUN_147ad9efc(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x160,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined2 *)(lVar1 + 0xf8) = 0xffff;
  *(undefined8 *)(lVar1 + 0xfa) = 0;
  *(undefined8 *)(lVar1 + 0x102) = 0;
  *(undefined8 *)(lVar1 + 0x10a) = 0;
  *(undefined8 *)(lVar1 + 0x112) = 0;
  *(undefined8 *)(lVar1 + 0x11a) = 0;
  *(undefined8 *)(lVar1 + 0x122) = 0;
  *(undefined8 *)(lVar1 + 0x12a) = 0;
  *(undefined8 *)(lVar1 + 0x132) = 0;
  *(undefined8 *)(lVar1 + 0x13a) = 0;
  *(undefined8 *)(lVar1 + 0x142) = 0;
  *(undefined8 *)(lVar1 + 0x14a) = 0;
  *(undefined8 *)(lVar1 + 0x152) = 0;
  *(undefined4 *)(lVar1 + 0x15a) = 0;
  return lVar1;
}



// FUNCTION 147ad9f76 FUN_147ad9f76 body=42 status=ok
// SIG undefined FUN_147ad9f76(void)

void FUN_147ad9f76(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x160);
  return;
}



// FUNCTION 147ad9fa8 FUN_147ad9fa8 body=39 status=ok
// SIG undefined FUN_147ad9fa8(void)

void FUN_147ad9fa8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x160,0x10);
  FUN_147ae1690(uVar1,param_1);
  return;
}



// FUNCTION 147ad9fd0 FUN_147ad9fd0 body=122 status=ok
// SIG undefined FUN_147ad9fd0(void)

longlong FUN_147ad9fd0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x160,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined2 *)(lVar1 + 0xf8) = 0xffff;
  *(undefined8 *)(lVar1 + 0xfa) = 0;
  *(undefined8 *)(lVar1 + 0x102) = 0;
  *(undefined8 *)(lVar1 + 0x10a) = 0;
  *(undefined8 *)(lVar1 + 0x112) = 0;
  *(undefined8 *)(lVar1 + 0x11a) = 0;
  *(undefined8 *)(lVar1 + 0x122) = 0;
  *(undefined8 *)(lVar1 + 0x12a) = 0;
  *(undefined8 *)(lVar1 + 0x132) = 0;
  *(undefined8 *)(lVar1 + 0x13a) = 0;
  *(undefined8 *)(lVar1 + 0x142) = 0;
  *(undefined8 *)(lVar1 + 0x14a) = 0;
  *(undefined8 *)(lVar1 + 0x152) = 0;
  *(undefined4 *)(lVar1 + 0x15a) = 0;
  return lVar1;
}



// FUNCTION 147ada04a FUN_147ada04a body=42 status=ok
// SIG undefined FUN_147ada04a(void)

void FUN_147ada04a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x160);
  return;
}



// FUNCTION 147ada07c FUN_147ada07c body=39 status=ok
// SIG undefined FUN_147ada07c(void)

void FUN_147ada07c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x160,0x10);
  FUN_147ae1690(uVar1,param_1);
  return;
}



// FUNCTION 147ada0a4 FUN_147ada0a4 body=122 status=ok
// SIG undefined FUN_147ada0a4(void)

longlong FUN_147ada0a4(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x160,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined2 *)(lVar1 + 0xf8) = 0xffff;
  *(undefined8 *)(lVar1 + 0xfa) = 0;
  *(undefined8 *)(lVar1 + 0x102) = 0;
  *(undefined8 *)(lVar1 + 0x10a) = 0;
  *(undefined8 *)(lVar1 + 0x112) = 0;
  *(undefined8 *)(lVar1 + 0x11a) = 0;
  *(undefined8 *)(lVar1 + 0x122) = 0;
  *(undefined8 *)(lVar1 + 0x12a) = 0;
  *(undefined8 *)(lVar1 + 0x132) = 0;
  *(undefined8 *)(lVar1 + 0x13a) = 0;
  *(undefined8 *)(lVar1 + 0x142) = 0;
  *(undefined8 *)(lVar1 + 0x14a) = 0;
  *(undefined8 *)(lVar1 + 0x152) = 0;
  *(undefined4 *)(lVar1 + 0x15a) = 0;
  return lVar1;
}



// FUNCTION 147ada11e FUN_147ada11e body=42 status=ok
// SIG undefined FUN_147ada11e(void)

void FUN_147ada11e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x160);
  return;
}



// FUNCTION 147ada150 FUN_147ada150 body=39 status=ok
// SIG undefined FUN_147ada150(void)

void FUN_147ada150(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x160,0x10);
  FUN_147ae1690(uVar1,param_1);
  return;
}



// FUNCTION 147ada178 FUN_147ada178 body=122 status=ok
// SIG undefined FUN_147ada178(void)

longlong FUN_147ada178(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x160,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined2 *)(lVar1 + 0xf8) = 0xffff;
  *(undefined8 *)(lVar1 + 0xfa) = 0;
  *(undefined8 *)(lVar1 + 0x102) = 0;
  *(undefined8 *)(lVar1 + 0x10a) = 0;
  *(undefined8 *)(lVar1 + 0x112) = 0;
  *(undefined8 *)(lVar1 + 0x11a) = 0;
  *(undefined8 *)(lVar1 + 0x122) = 0;
  *(undefined8 *)(lVar1 + 0x12a) = 0;
  *(undefined8 *)(lVar1 + 0x132) = 0;
  *(undefined8 *)(lVar1 + 0x13a) = 0;
  *(undefined8 *)(lVar1 + 0x142) = 0;
  *(undefined8 *)(lVar1 + 0x14a) = 0;
  *(undefined8 *)(lVar1 + 0x152) = 0;
  *(undefined4 *)(lVar1 + 0x15a) = 0;
  return lVar1;
}



// FUNCTION 147ada1f2 FUN_147ada1f2 body=42 status=ok
// SIG undefined FUN_147ada1f2(void)

void FUN_147ada1f2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x160);
  return;
}



// FUNCTION 147ada224 FUN_147ada224 body=39 status=ok
// SIG undefined FUN_147ada224(void)

void FUN_147ada224(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x160,0x10);
  FUN_147ae1690(uVar1,param_1);
  return;
}



// FUNCTION 147ada24c FUN_147ada24c body=122 status=ok
// SIG undefined FUN_147ada24c(void)

longlong FUN_147ada24c(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x160,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined2 *)(lVar1 + 0xf8) = 0xffff;
  *(undefined8 *)(lVar1 + 0xfa) = 0;
  *(undefined8 *)(lVar1 + 0x102) = 0;
  *(undefined8 *)(lVar1 + 0x10a) = 0;
  *(undefined8 *)(lVar1 + 0x112) = 0;
  *(undefined8 *)(lVar1 + 0x11a) = 0;
  *(undefined8 *)(lVar1 + 0x122) = 0;
  *(undefined8 *)(lVar1 + 0x12a) = 0;
  *(undefined8 *)(lVar1 + 0x132) = 0;
  *(undefined8 *)(lVar1 + 0x13a) = 0;
  *(undefined8 *)(lVar1 + 0x142) = 0;
  *(undefined8 *)(lVar1 + 0x14a) = 0;
  *(undefined8 *)(lVar1 + 0x152) = 0;
  *(undefined4 *)(lVar1 + 0x15a) = 0;
  return lVar1;
}



// FUNCTION 147ada2c6 FUN_147ada2c6 body=42 status=ok
// SIG undefined FUN_147ada2c6(void)

void FUN_147ada2c6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x160);
  return;
}



// FUNCTION 147ada2f8 FUN_147ada2f8 body=39 status=ok
// SIG undefined FUN_147ada2f8(void)

void FUN_147ada2f8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x160,0x10);
  FUN_147ae1690(uVar1,param_1);
  return;
}



// FUNCTION 147ada320 FUN_147ada320 body=122 status=ok
// SIG undefined FUN_147ada320(void)

longlong FUN_147ada320(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x160,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined2 *)(lVar1 + 0xf8) = 0xffff;
  *(undefined8 *)(lVar1 + 0xfa) = 0;
  *(undefined8 *)(lVar1 + 0x102) = 0;
  *(undefined8 *)(lVar1 + 0x10a) = 0;
  *(undefined8 *)(lVar1 + 0x112) = 0;
  *(undefined8 *)(lVar1 + 0x11a) = 0;
  *(undefined8 *)(lVar1 + 0x122) = 0;
  *(undefined8 *)(lVar1 + 0x12a) = 0;
  *(undefined8 *)(lVar1 + 0x132) = 0;
  *(undefined8 *)(lVar1 + 0x13a) = 0;
  *(undefined8 *)(lVar1 + 0x142) = 0;
  *(undefined8 *)(lVar1 + 0x14a) = 0;
  *(undefined8 *)(lVar1 + 0x152) = 0;
  *(undefined4 *)(lVar1 + 0x15a) = 0;
  return lVar1;
}



// FUNCTION 147ada39a FUN_147ada39a body=42 status=ok
// SIG undefined FUN_147ada39a(void)

void FUN_147ada39a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x160);
  return;
}



// FUNCTION 147ada3cc FUN_147ada3cc body=39 status=ok
// SIG undefined FUN_147ada3cc(void)

void FUN_147ada3cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x160,0x10);
  FUN_147ae1690(uVar1,param_1);
  return;
}



// FUNCTION 147ada3f4 FUN_147ada3f4 body=122 status=ok
// SIG undefined FUN_147ada3f4(void)

longlong FUN_147ada3f4(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x160,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined2 *)(lVar1 + 0xf8) = 0xffff;
  *(undefined8 *)(lVar1 + 0xfa) = 0;
  *(undefined8 *)(lVar1 + 0x102) = 0;
  *(undefined8 *)(lVar1 + 0x10a) = 0;
  *(undefined8 *)(lVar1 + 0x112) = 0;
  *(undefined8 *)(lVar1 + 0x11a) = 0;
  *(undefined8 *)(lVar1 + 0x122) = 0;
  *(undefined8 *)(lVar1 + 0x12a) = 0;
  *(undefined8 *)(lVar1 + 0x132) = 0;
  *(undefined8 *)(lVar1 + 0x13a) = 0;
  *(undefined8 *)(lVar1 + 0x142) = 0;
  *(undefined8 *)(lVar1 + 0x14a) = 0;
  *(undefined8 *)(lVar1 + 0x152) = 0;
  *(undefined4 *)(lVar1 + 0x15a) = 0;
  return lVar1;
}



// FUNCTION 147ada46e FUN_147ada46e body=42 status=ok
// SIG undefined FUN_147ada46e(void)

void FUN_147ada46e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x130);
  return;
}



// FUNCTION 147ada4a0 FUN_147ada4a0 body=39 status=ok
// SIG undefined FUN_147ada4a0(void)

void FUN_147ada4a0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x130,0x10);
  FUN_147ae1a90(uVar1,param_1);
  return;
}



// FUNCTION 147ada4c8 FUN_147ada4c8 body=78 status=ok
// SIG undefined FUN_147ada4c8(void)

longlong FUN_147ada4c8(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x130,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0x100) = 0;
  *(undefined8 *)(lVar1 + 0x108) = 0;
  *(undefined8 *)(lVar1 + 0x110) = 0;
  *(undefined8 *)(lVar1 + 0x118) = 0;
  *(undefined8 *)(lVar1 + 0x11a) = 0;
  *(undefined8 *)(lVar1 + 0x122) = 0;
  return lVar1;
}



// FUNCTION 147ada516 FUN_147ada516 body=42 status=ok
// SIG undefined FUN_147ada516(void)

void FUN_147ada516(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x130);
  return;
}



// FUNCTION 147ada548 FUN_147ada548 body=39 status=ok
// SIG undefined FUN_147ada548(void)

void FUN_147ada548(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x130,0x10);
  FUN_147ae1a90(uVar1,param_1);
  return;
}



// FUNCTION 147ada570 FUN_147ada570 body=78 status=ok
// SIG undefined FUN_147ada570(void)

longlong FUN_147ada570(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x130,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0x100) = 0;
  *(undefined8 *)(lVar1 + 0x108) = 0;
  *(undefined8 *)(lVar1 + 0x110) = 0;
  *(undefined8 *)(lVar1 + 0x118) = 0;
  *(undefined8 *)(lVar1 + 0x11a) = 0;
  *(undefined8 *)(lVar1 + 0x122) = 0;
  return lVar1;
}



// FUNCTION 147ada5be FUN_147ada5be body=42 status=ok
// SIG undefined FUN_147ada5be(void)

void FUN_147ada5be(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x130);
  return;
}



// FUNCTION 147ada5f0 FUN_147ada5f0 body=39 status=ok
// SIG undefined FUN_147ada5f0(void)

void FUN_147ada5f0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x130,0x10);
  FUN_147ae1a90(uVar1,param_1);
  return;
}



// FUNCTION 147ada618 FUN_147ada618 body=78 status=ok
// SIG undefined FUN_147ada618(void)

longlong FUN_147ada618(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x130,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0x100) = 0;
  *(undefined8 *)(lVar1 + 0x108) = 0;
  *(undefined8 *)(lVar1 + 0x110) = 0;
  *(undefined8 *)(lVar1 + 0x118) = 0;
  *(undefined8 *)(lVar1 + 0x11a) = 0;
  *(undefined8 *)(lVar1 + 0x122) = 0;
  return lVar1;
}



// FUNCTION 147ada666 FUN_147ada666 body=42 status=ok
// SIG undefined FUN_147ada666(void)

void FUN_147ada666(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x130);
  return;
}



// FUNCTION 147ada698 FUN_147ada698 body=39 status=ok
// SIG undefined FUN_147ada698(void)

void FUN_147ada698(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x130,0x10);
  FUN_147ae1a90(uVar1,param_1);
  return;
}



// FUNCTION 147ada6c0 FUN_147ada6c0 body=78 status=ok
// SIG undefined FUN_147ada6c0(void)

longlong FUN_147ada6c0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x130,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0x100) = 0;
  *(undefined8 *)(lVar1 + 0x108) = 0;
  *(undefined8 *)(lVar1 + 0x110) = 0;
  *(undefined8 *)(lVar1 + 0x118) = 0;
  *(undefined8 *)(lVar1 + 0x11a) = 0;
  *(undefined8 *)(lVar1 + 0x122) = 0;
  return lVar1;
}



// FUNCTION 147ada70e FUN_147ada70e body=42 status=ok
// SIG undefined FUN_147ada70e(void)

void FUN_147ada70e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 147ada740 FUN_147ada740 body=39 status=ok
// SIG undefined FUN_147ada740(void)

void FUN_147ada740(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_147ae1cfc(uVar1,param_1);
  return;
}



// FUNCTION 147ada768 FUN_147ada768 body=64 status=ok
// SIG undefined FUN_147ada768(void)

longlong FUN_147ada768(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0xfe) = 0;
  *(undefined8 *)(lVar1 + 0x106) = 0;
  return lVar1;
}



// FUNCTION 147ada7a8 FUN_147ada7a8 body=42 status=ok
// SIG undefined FUN_147ada7a8(void)

void FUN_147ada7a8(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 147ada7da FUN_147ada7da body=39 status=ok
// SIG undefined FUN_147ada7da(void)

void FUN_147ada7da(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_147ae1cfc(uVar1,param_1);
  return;
}



// FUNCTION 147ada802 FUN_147ada802 body=64 status=ok
// SIG undefined FUN_147ada802(void)

longlong FUN_147ada802(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0xfe) = 0;
  *(undefined8 *)(lVar1 + 0x106) = 0;
  return lVar1;
}



// FUNCTION 147ada842 FUN_147ada842 body=99 status=ok
// SIG undefined FUN_147ada842(void)

void FUN_147ada842(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_147ae1e7c(param_1,iVar1);
    }
    FUN_147ae1e53((longlong)iVar1 * 0x38 + *param_1,param_2 - iVar1);
    return;
  }
  if (iVar1 <= param_2) {
    return;
  }
  FUN_147ae1f0c(param_1,param_2,iVar1 - param_2);
  return;
}



// FUNCTION 147ada8a6 FUN_147ada8a6 body=83 status=ok
// SIG undefined FUN_147ada8a6(void)

undefined8 FUN_147ada8a6(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar1 = DAT_14cade6a8;
  if ((DAT_14cade6a8 < 1) ||
     (iVar3 = *(int *)(param_1 + 0xb8) + 1, *(int *)(param_1 + 0xb8) = iVar3, iVar3 < iVar1)) {
    uVar2 = 0;
  }
  else {
    if ((*(byte *)(param_2 + 0x17b) & 0x20) != 0) {
      FUN_144ad9cc6(param_2,1,0);
    }
    *(undefined4 *)(param_1 + 0xb8) = 0;
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 147ada8fa FUN_147ada8fa body=1454 status=ok
// SIG undefined FUN_147ada8fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_147ada8fa(undefined8 *param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
             ulonglong *param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  bool bVar6;
  longlong lVar7;
  undefined1 auStack_b8 [32];
  int local_98;
  undefined1 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0x22] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0x23) = param_2;
  *(undefined1 *)((longlong)param_1 + 0x11c) = 1;
  *(undefined1 *)((longlong)param_1 + 0x11d) = param_3;
  *(undefined4 *)(param_1 + 0x24) = param_4;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae2218) {
    FUN_144b3d300(&DAT_14cae2218);
    if (DAT_14cae2218 == -1) {
      _DAT_14cae2208 = 0x800000014a914340;
      _DAT_14cae2210 = FUN_140b397c6(L"SkinCachePositions",0x12);
      DAT_14cae2214 = 1;
      _Init_thread_footer(&DAT_14cae2218);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae2230) {
    FUN_144b3d300(&DAT_14cae2230);
    if (DAT_14cae2230 == -1) {
      _DAT_14cae2220 = 0x800000014a914366;
      _DAT_14cae2228 = FUN_140b397c6(L"SkinCacheTangents",0x11);
      DAT_14cae222c = 1;
      _Init_thread_footer(&DAT_14cae2230);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae2248) {
    FUN_144b3d300(&DAT_14cae2248);
    if (DAT_14cae2248 == -1) {
      _DAT_14cae2238 = 0x800000014a91438a;
      _DAT_14cae2240 = FUN_140b397c6(L"SkinCacheIntermediateTangents",0x1d);
      DAT_14cae2244 = 1;
      _Init_thread_footer(&DAT_14cae2248);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae2260) {
    FUN_144b3d300(&DAT_14cae2260);
    if (DAT_14cae2260 == -1) {
      _DAT_14cae2250 = 0x800000014a9143c6;
      _DAT_14cae2258 = FUN_140b397c6(L"SkinCacheIntermediateAccumulatedTangents",0x28);
      DAT_14cae225c = 1;
      _Init_thread_footer(&DAT_14cae2260);
    }
  }
  local_60 = param_1 + 0xe;
  local_68 = param_1 + 0x15;
  local_58 = param_1 + 0x1c;
  lVar7 = 0;
  bVar2 = true;
  do {
    bVar6 = bVar2;
    FUN_1446f57c6(&DAT_14cae2208,&local_50);
    *(undefined8 *)((longlong)param_1 + lVar7 * 0x38 + 0x1c) = local_50;
    *(undefined8 *)((longlong)param_1 + lVar7 * 0x38 + 0x24) = *param_6;
    local_98 = *(int *)(param_1 + 0x23) * 3;
    local_78 = 0;
    local_80 = 1;
    local_88 = 0x70;
    local_90 = 0xd;
    FUN_1407fe5c2(param_1 + lVar7 * 7,param_5,L"SkinCachePositions",4);
    *(undefined4 *)(param_1 + lVar7 * 7 + 6) = 0;
    lVar7 = 1;
    bVar2 = false;
  } while (bVar6);
  if (*(char *)((longlong)param_1 + 0x11c) != '\0') {
    uVar5 = 0x3f;
    if (*(longlong *)(&DAT_14ca814b0 + (ulonglong)DAT_14ca85550 * 0x3c) == DAT_14ca81490) {
      uVar5 = 0x23;
    }
    FUN_1446f57c6(&DAT_14cae2220,&local_50);
    *(undefined8 *)((longlong)param_1 + 0x8c) = local_50;
    *(undefined8 *)((longlong)param_1 + 0x94) = *param_6;
    local_98 = *(int *)(param_1 + 0x23) * 2;
    local_78 = 0;
    local_80 = 1;
    local_88 = 0x400;
    local_90 = uVar5;
    FUN_1407fe5c2(local_60,param_5,L"SkinCacheTangents",8);
    *(undefined4 *)(param_1 + 0x14) = 0;
    if (*(char *)((longlong)param_1 + 0x11d) == '\x01') {
      FUN_1446f57c6(&DAT_14cae2238,&local_50);
      *(undefined8 *)((longlong)param_1 + 0xc4) = local_50;
      *(undefined8 *)((longlong)param_1 + 0xcc) = *param_6;
      local_98 = *(int *)(param_1 + 0x23) * 2;
      local_78 = 0;
      local_80 = 1;
      local_88 = 0x400;
      local_90 = uVar5;
      FUN_1407fe5c2(local_68,param_5,L"SkinCacheIntermediateTangents",8);
      *(undefined4 *)(param_1 + 0x1b) = 0;
    }
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_1446f57c6(&DAT_14cae2250,&local_50);
    *(undefined8 *)((longlong)param_1 + 0xfc) = local_50;
    *(undefined8 *)((longlong)param_1 + 0x104) = *param_6;
    local_98 = *(int *)(param_1 + 0x24) << 3;
    local_78 = 0;
    local_80 = 8;
    local_88 = 0x400;
    local_90 = 0x1d;
    FUN_1407fe5c2(local_58,param_5,L"SkinCacheIntermediateAccumulatedTangents",4);
    *(undefined4 *)(param_1 + 0x22) = 0;
    uVar1 = param_1[0x1d];
    puVar3 = (undefined8 *)(*param_5 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 5;
    if ((undefined8 *)param_5[1] < puVar4) {
      FUN_140023dd8(param_5,0x30);
      puVar3 = (undefined8 *)(*param_5 + 7 & 0xfffffffffffffff8);
      puVar4 = puVar3 + 5;
    }
    *param_5 = (ulonglong)puVar4;
    *(int *)(param_5 + 0xc) = (int)param_5[0xc] + 1;
    *(undefined8 **)param_5[6] = puVar3;
    param_5[6] = (ulonglong)(puVar3 + 1);
    puVar3[1] = 0;
    *puVar3 = &PTR_LAB_14a29b380;
    puVar3[2] = uVar1;
    puVar3[3] = 0;
    puVar3[4] = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147adaeaa FUN_147adaeaa body=369 status=ok
// SIG undefined FUN_147adaeaa(void)

void FUN_147adaeaa(undefined8 param_1,longlong *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (0 < (int)param_2[1]) {
    local_70 = param_1;
    FUN_147ae2567(*param_2);
    local_58 = 0;
    uStack_50 = 0;
    iVar1 = (int)param_2[1];
    if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar1);
    }
    if (iVar1 != 0) {
      FUN_1402a9a22(&local_58);
      lVar5 = param_2[1];
      if ((longlong)(int)lVar5 != 0) {
        lVar3 = *param_2;
        lVar9 = 0;
        lVar8 = 0;
        do {
          uVar6 = uStack_50;
          lVar10 = *(longlong *)(lVar3 + lVar9);
          if ((lVar10 != lVar8) &&
             ((uVar2 = *(uint *)(lVar10 + 0x30), lVar8 = lVar10, (param_3 & 0xc00) != 0 ||
              (uVar2 != param_3)))) {
            *(uint *)(lVar10 + 0x30) = param_3;
            uVar4 = *(undefined8 *)(lVar10 + 8);
            lVar10 = (longlong)(int)uStack_50;
            uVar7 = (int)uStack_50 + 1;
            uStack_50 = CONCAT44(uStack_50._4_4_,uVar7);
            if (uStack_50._4_4_ < uVar7) {
              FUN_14742f52c(&local_58,uVar6 & 0xffffffff);
            }
            lVar10 = lVar10 * 0x38;
            *(undefined8 *)(local_58 + lVar10) = 0xffffffffffffffff;
            *(undefined4 *)(local_58 + 8 + lVar10) = 0xffffffff;
            *(undefined8 *)(local_58 + 0x10 + lVar10) = uVar4;
            *(undefined1 *)(local_58 + 0x18 + lVar10) = 3;
            *(uint *)(local_58 + 0x1c + lVar10) = uVar2;
            *(uint *)(local_58 + 0x20 + lVar10) = param_3;
            *(undefined4 *)(local_58 + 0x24 + lVar10) = 0;
            *(undefined1 *)(local_58 + 0x30 + lVar10) = 0;
          }
          lVar9 = lVar9 + 8;
        } while ((longlong)(int)lVar5 * 8 != lVar9);
      }
    }
    local_68 = local_58;
    local_60 = (int)uStack_50;
    FUN_144760590(local_70,&local_68,1);
    FUN_144705e08(local_58,uStack_50 & 0xffffffff);
    FUN_14006d152(&local_58);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147adb01e FUN_147adb01e body=170 status=ok
// SIG undefined FUN_147adb01e(void)

void FUN_147adb01e(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  FUN_147adb0c8(param_2);
  lVar5 = param_1[1];
  if ((longlong)(int)lVar5 != 0) {
    lVar2 = *param_1;
    lVar6 = 0;
    do {
      *(undefined4 *)(*(longlong *)(lVar2 + lVar6) + 0x34) = 0;
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar5 * 8 != lVar6);
    lVar5 = param_1[1];
    if ((longlong)(int)lVar5 != 0) {
      lVar2 = *param_1;
      lVar6 = 0;
      do {
        lVar3 = *(longlong *)(lVar2 + lVar6);
        if (*(int *)(lVar3 + 0x34) == 0) {
          *(undefined4 *)(lVar3 + 0x34) = 1;
          uVar4 = *(undefined8 *)(lVar3 + 8);
          iVar1 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
            FUN_147ae2918(param_2,iVar1);
          }
          *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar4;
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)(int)lVar5 * 8 != lVar6);
    }
  }
  return;
}



// FUNCTION 147adb0c8 FUN_147adb0c8 body=41 status=ok
// SIG undefined FUN_147adb0c8(void)

void FUN_147adb0c8(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_147ae28b8();
  return;
}



// FUNCTION 147adb0f2 FUN_147adb0f2 body=700 status=ok
// SIG undefined FUN_147adb0f2(void)

void FUN_147adb0f2(longlong param_1,int param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  ushort uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  
  lVar11 = *(longlong *)(param_1 + 0x18);
  lVar10 = (longlong)param_2 * 0x150;
  lVar14 = *(longlong *)(lVar11 + 0x20 + lVar10);
  iVar2 = *(int *)(lVar14 + 0x170);
  iVar3 = *(int *)(lVar14 + 0x16c);
  plVar8 = (longlong *)((ulonglong)*(uint *)(lVar14 + 0x168) * 0x10 + lVar14 + 0x148);
  plVar12 = (longlong *)
            (lVar14 + (ulonglong)((uint)((uint)(iVar2 - iVar3) < 2) ^ *(uint *)(lVar14 + 0x168)) *
                      0x10 + 0x148);
  if (*plVar12 == 0) {
    plVar12 = plVar8;
  }
  plVar1 = (longlong *)(lVar11 + lVar10);
  *(undefined2 *)(lVar11 + 0x46 + lVar10) = 0;
  lVar11 = 0;
  bVar5 = true;
  do {
    bVar4 = bVar5;
    if ((*(int *)((longlong)plVar1 + lVar11 * 4 + 8) == iVar2) &&
       ((longlong *)plVar1[lVar11 + 2] == plVar8)) {
      lVar14 = lVar11 * 0x38 + *plVar1;
      break;
    }
    lVar11 = 1;
    lVar14 = 0;
    bVar5 = false;
  } while (bVar4);
  plVar1[0x25] = lVar14;
  lVar11 = 0;
  bVar5 = true;
  while ((*(int *)((longlong)plVar1 + lVar11 * 4 + 8) != iVar3 ||
         ((longlong *)plVar1[lVar11 + 2] != plVar12))) {
    lVar11 = 1;
    bVar4 = !bVar5;
    bVar5 = false;
    if (bVar4) {
      lVar10 = *plVar1;
      lVar11 = 0;
LAB_147adb1cc:
      plVar1[0x26] = lVar11;
      if (lVar14 == 0 || lVar14 == lVar11) {
        uVar9 = (ulonglong)(lVar10 == lVar11);
        *(int *)((longlong)plVar1 + uVar9 * 4 + 8) = iVar2;
        plVar1[uVar9 + 2] = (longlong)plVar8;
        lVar14 = uVar9 * 0x38 + lVar10;
        if (param_3 == (longlong *)0x0) {
          uVar7 = 2;
        }
        else {
          lVar11 = param_3[1];
          uVar6 = (int)lVar11 + 1;
          *(uint *)(param_3 + 1) = uVar6;
          if (*(uint *)((longlong)param_3 + 0xc) < uVar6) {
            FUN_147ade868(param_3);
          }
          *(longlong *)(*param_3 + (longlong)(int)lVar11 * 8) = lVar14;
          lVar10 = *plVar1;
          lVar11 = plVar1[0x26];
          uVar7 = *(ushort *)((longlong)plVar1 + 0x46) | 2;
        }
        plVar1[0x25] = lVar14;
        *(ushort *)((longlong)plVar1 + 0x46) = uVar7;
      }
      else {
        uVar7 = 0;
      }
      if (lVar11 == 0) {
        uVar9 = (ulonglong)(lVar10 == lVar14);
        *(int *)((longlong)plVar1 + uVar9 * 4 + 8) = iVar3;
        plVar1[uVar9 + 2] = (longlong)plVar12;
        lVar11 = uVar9 * 0x38 + lVar10;
        if (param_3 != (longlong *)0x0) {
          lVar14 = param_3[1];
          uVar6 = (int)lVar14 + 1;
          *(uint *)(param_3 + 1) = uVar6;
          if (*(uint *)((longlong)param_3 + 0xc) < uVar6) {
            FUN_147ade868(param_3);
          }
          *(longlong *)(*param_3 + (longlong)(int)lVar14 * 8) = lVar11;
          uVar7 = *(ushort *)((longlong)plVar1 + 0x46);
          lVar10 = *plVar1;
        }
        plVar1[0x26] = lVar11;
        *(ushort *)((longlong)plVar1 + 0x46) = uVar7 | 1;
        uVar7 = 1;
      }
      if (lVar10 == 0) {
        plVar1[0x21] = 0;
        plVar1[0x22] = 0;
        lVar13 = 0;
        lVar11 = 0;
        lVar14 = 0;
      }
      else {
        lVar11 = lVar10 + 0x70;
        if (*(char *)(lVar10 + 0x11c) == '\0') {
          lVar11 = 0;
        }
        plVar1[0x21] = lVar11;
        lVar13 = 0;
        if (*(char *)(lVar10 + 0x11c) == '\x01') {
          lVar13 = 0;
          if (*(char *)(lVar10 + 0x11d) != '\0') {
            lVar13 = lVar10 + 0xa8;
          }
        }
        plVar1[0x22] = lVar13;
        lVar14 = 0;
        if (*(int *)(lVar10 + 0x120) != 0) {
          lVar14 = lVar10 + 0xe0;
        }
      }
      plVar1[0x23] = lVar14;
      if (((param_3 != (longlong *)0x0) && (uVar7 != 0)) &&
         (((plVar1[6] != 0 && (lVar13 != 0)) || (lVar13 = lVar11, lVar11 != 0)))) {
        iVar2 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
          FUN_147ade868(param_3,iVar2);
        }
        *(longlong *)(*param_3 + (longlong)iVar2 * 8) = lVar13;
      }
      return;
    }
  }
  lVar10 = *plVar1;
  lVar11 = lVar11 * 0x38 + lVar10;
  goto LAB_147adb1cc;
}



// FUNCTION 147adb3ae FUN_147adb3ae body=174 status=ok
// SIG undefined FUN_147adb3ae(void)

void FUN_147adb3ae(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = FUN_1448d2108();
  if (((param_2 != 0 && cVar2 == '\x01') && (*(longlong *)(param_2 + 0x28) != 0)) &&
     (*(char *)(*(longlong *)(param_2 + 0x28) + 0x39) == '\x01')) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_147adb96c(param_2,&local_38);
    plVar1 = *(longlong **)(param_2 + 0x28);
    local_48 = &local_38;
    (**(code **)(*plVar1 + 0xe8))
              (plVar1,param_1,
               *(undefined8 *)(*(longlong *)plVar1[8] + (longlong)*(int *)(param_2 + 0x60) * 8));
    FUN_147ade7c3(local_38,uStack_30 & 0xffffffff);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147adb45e FUN_147adb45e body=68 status=ok
// SIG undefined FUN_147adb45e(void)

void FUN_147adb45e(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_147ae2ec8();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_14474875a(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 147adb4a2 FUN_147adb4a2 body=978 status=ok
// SIG undefined FUN_147adb4a2(void)

void FUN_147adb4a2(longlong param_1,int param_2,undefined8 param_3,longlong param_4,longlong param_5
                  ,longlong param_6,uint param_7,undefined4 param_8,longlong *param_9,
                  undefined8 param_10,undefined4 param_11,longlong param_12)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined2 uVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar10 = *(longlong *)(param_1 + 0x18);
  lVar7 = (longlong)param_2;
  lVar8 = lVar7 * 0x150;
  lVar2 = lVar10 + lVar8;
  *(undefined8 *)(lVar10 + lVar8) = param_3;
  *(int *)(lVar10 + 0x40 + lVar8) = param_2;
  *(longlong *)(lVar10 + 0x38 + lVar8) = param_4;
  lVar4 = *(longlong *)
           (**(longlong **)(*(longlong *)(param_1 + 0x28) + 0x40) +
           (longlong)*(int *)(param_1 + 0x60) * 8);
  *(uint *)(lVar10 + 0x54 + lVar8) = param_7;
  if ((param_5 != 0) && ((longlong)*(int *)(param_5 + 0x28) != 0)) {
    lVar10 = 0;
    do {
      if (*(int *)(*(longlong *)(param_5 + 0x20) + lVar10) == param_2) {
        *(undefined4 *)(lVar2 + 0x94) = *(undefined4 *)(param_4 + 0x10);
        uVar9 = 1;
        goto LAB_147adb545;
      }
      lVar10 = lVar10 + 4;
    } while ((longlong)*(int *)(param_5 + 0x28) * 4 != lVar10);
  }
  uVar9 = 0;
LAB_147adb545:
  if (param_6 != 0) {
    if (*(int *)(param_4 + 0x30) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(uint *)(*(longlong *)(param_4 + 0x28) + 8);
    }
    *(uint *)(lVar2 + 0xa0) = uVar5 / param_7;
    uVar9 = 2;
    if (((param_2 < *(int *)(param_6 + 0x28)) && (iVar11 = *(int *)(param_12 + 0xe0), iVar11 != -1))
       && (iVar11 <= *(int *)(param_1 + 0x60))) {
      iVar3 = *(int *)(*(longlong *)(param_6 + 0x20) + 4 + lVar7 * 0xc);
      uVar5 = *(uint *)(*(longlong *)(param_6 + 0x20) + 8 + lVar7 * 0xc);
      iVar11 = (*(int *)(param_1 + 0x60) - iVar11) * uVar5 + iVar3;
      if (*(uint *)(param_6 + 0x44) < (uVar5 - uVar5 % param_7) + iVar11) {
        iVar11 = iVar3;
      }
      *(int *)(lVar2 + 0x98) = iVar11;
    }
  }
  *(undefined2 *)(lVar2 + 0x44) = uVar9;
  *(undefined4 *)(lVar2 + 0x58) = param_8;
  *(undefined4 *)(lVar2 + 0x50) = *(undefined4 *)(param_4 + 0x10);
  (**(code **)(*param_9 + 0x90))(param_9,&local_48);
  lVar10 = *(longlong *)(lVar2 + 0x68);
  if (lVar10 != local_48) {
    *(longlong *)(lVar2 + 0x68) = local_48;
    if (local_48 != 0) {
      LOCK();
      *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
      UNLOCK();
    }
    if (lVar10 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar10 + 8);
      uVar5 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar5 & 0x3fffffff) == 1) {
        FUN_144a54812(lVar10);
      }
    }
  }
  if (local_48 != 0) {
    LOCK();
    puVar1 = (uint *)(local_48 + 8);
    uVar5 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar5 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  (**(code **)(*param_9 + 0x98))(param_9,&local_48);
  lVar10 = *(longlong *)(lVar2 + 0x70);
  if (lVar10 != local_48) {
    *(longlong *)(lVar2 + 0x70) = local_48;
    if (local_48 != 0) {
      LOCK();
      *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
      UNLOCK();
    }
    if (lVar10 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar10 + 8);
      uVar5 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar5 & 0x3fffffff) == 1) {
        FUN_144a54812(lVar10);
      }
    }
  }
  if (local_48 != 0) {
    LOCK();
    puVar1 = (uint *)(local_48 + 8);
    uVar5 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar5 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  (**(code **)(*param_9 + 0xa0))(param_9,&local_48);
  lVar10 = *(longlong *)(lVar2 + 0x78);
  if (lVar10 != local_48) {
    *(longlong *)(lVar2 + 0x78) = local_48;
    if (local_48 != 0) {
      LOCK();
      *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
      UNLOCK();
    }
    if (lVar10 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar10 + 8);
      uVar5 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar5 & 0x3fffffff) == 1) {
        FUN_144a54812(lVar10);
      }
    }
  }
  if (local_48 != 0) {
    LOCK();
    puVar1 = (uint *)(local_48 + 8);
    uVar5 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar5 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  uVar6 = (**(code **)(*param_9 + 0xa8))(param_9);
  *(undefined4 *)(lVar2 + 0x5c) = uVar6;
  (**(code **)(*param_9 + 0x88))(param_9,&local_48);
  lVar10 = *(longlong *)(lVar2 + 0x80);
  if (lVar10 != local_48) {
    *(longlong *)(lVar2 + 0x80) = local_48;
    if (local_48 != 0) {
      LOCK();
      *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
      UNLOCK();
    }
    if (lVar10 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar10 + 8);
      uVar5 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar5 & 0x3fffffff) == 1) {
        FUN_144a54812(lVar10);
      }
    }
  }
  if (local_48 != 0) {
    LOCK();
    puVar1 = (uint *)(local_48 + 8);
    uVar5 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar5 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  uVar6 = (**(code **)(*param_9 + 0x78))(param_9);
  *(undefined4 *)(lVar2 + 0x4c) = uVar6;
  *(uint *)(lVar2 + 0x90) = (uint)(*(int *)(param_4 + 0x10) * *(int *)(param_1 + 0x3c)) >> 2;
  *(longlong **)(lVar2 + 0x20) = param_9;
  *(undefined8 *)(lVar2 + 0x28) = param_10;
  if (((0 < DAT_14c761564) && ((DAT_14c761564 == 1 || (*(char *)(param_4 + 0xc) != '\0')))) &&
     (lVar10 = *(longlong *)(*(longlong *)(lVar4 + 0x28) + 0x18),
     *(longlong *)(lVar2 + 0x30) = lVar10, lVar10 != 0)) {
    *(undefined4 *)(lVar2 + 0x100) = *(undefined4 *)(param_4 + 8);
    *(undefined4 *)(lVar2 + 0xfc) = *(undefined4 *)(param_4 + 4);
    *(undefined4 *)(lVar2 + 0x120) = param_11;
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147adb876 FUN_147adb876 body=96 status=ok
// SIG undefined FUN_147adb876(void)

undefined4 *
FUN_147adb876(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6)

{
  longlong lVar1;
  
  *param_1 = param_6;
  *(undefined8 *)(param_1 + 2) = param_4;
  *(undefined8 *)(param_1 + 4) = param_2;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = param_3;
  *(undefined1 *)((longlong)param_1 + 0x36) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  param_1[0x18] = param_5;
  lVar1 = FUN_147d219ae(param_3,param_5);
  FUN_147ade46a(param_1 + 6,*(undefined4 *)(lVar1 + 8));
  FUN_147adbcb8(param_1);
  return param_1;
}



// FUNCTION 147adb8d6 FUN_147adb8d6 body=113 status=ok
// SIG undefined FUN_147adb8d6(void)

void FUN_147adb8d6(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  
  lVar1 = param_1 + 0x10;
  uVar3 = *(uint *)(param_1 + 0x18);
  if (uVar3 < param_2) {
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    iVar2 = *(int *)(param_1 + 0x1c);
    if (iVar2 < (int)param_2) {
      FUN_147ae3608(lVar1,param_2);
      uVar3 = *(uint *)(param_1 + 0x18);
      iVar2 = *(int *)(param_1 + 0x1c);
    }
    *(uint *)(param_1 + 0x18) = param_2;
    if (iVar2 - uVar3 < param_2 - uVar3) {
      FUN_147ae3678(lVar1);
      return;
    }
  }
  else if (param_2 < uVar3) {
    *(uint *)(param_1 + 0x18) = param_2;
    FUN_147ae3eca(lVar1);
    return;
  }
  return;
}



// FUNCTION 147adb96c FUN_147adb96c body=135 status=ok
// SIG undefined FUN_147adb96c(void)

void FUN_147adb96c(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  FUN_147ade61a(param_2,*(undefined4 *)(param_1 + 0x20),1);
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar5 = 0x25;
    lVar6 = 0;
    do {
      lVar3 = **(longlong **)(*(longlong *)(param_1 + 0x18) + lVar5 * 8);
      lVar4 = *(longlong *)(*param_2 + lVar6 * 8);
      if (lVar4 != lVar3) {
        *(longlong *)(*param_2 + lVar6 * 8) = lVar3;
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
        }
        if (lVar4 != 0) {
          LOCK();
          puVar1 = (uint *)(lVar4 + 8);
          uVar2 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar2 & 0x3fffffff) == 1) {
            FUN_144a54812();
          }
        }
      }
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x2a;
    } while (lVar6 < *(int *)(param_1 + 0x20));
  }
  return;
}



// FUNCTION 147adb9f4 FUN_147adb9f4 body=154 status=ok
// SIG undefined FUN_147adb9f4(void)

undefined8 FUN_147adb9f4(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x10) == param_2) {
          FUN_147ae45b6(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x10 + *param_1 + 8);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 147adba8e FUN_147adba8e body=168 status=ok
// SIG undefined FUN_147adba8e(void)

void FUN_147adba8e(longlong param_1)

{
  longlong lVar1;
  
  FUN_1407f1458();
  *(undefined4 *)(param_1 + 0x30) = 0;
  FUN_1407f1458(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(char *)(param_1 + 0x11c) == '\x01') {
    FUN_1407f1458(param_1 + 0x70);
    *(undefined4 *)(param_1 + 0xa0) = 0;
    FUN_1407f1458(param_1 + 0xa8);
    *(undefined4 *)(param_1 + 0xd8) = 0;
  }
  if (*(int *)(param_1 + 0x120) != 0) {
    FUN_1407f1458(param_1 + 0xe0);
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  FUN_14476820c(param_1 + 0xe0);
  FUN_14476820c(param_1 + 0xa8);
  FUN_14476820c(param_1 + 0x70);
  lVar1 = 0x38;
  do {
    FUN_14476820c(param_1 + lVar1);
    lVar1 = lVar1 + -0x38;
  } while (lVar1 != -0x38);
  return;
}



// FUNCTION 147adbb36 FUN_147adbb36 body=142 status=ok
// SIG undefined FUN_147adbb36(void)

void FUN_147adbb36(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar2 = (int)param_1[1];
  if ((longlong)iVar2 != 0) {
    lVar1 = *param_1;
    iVar4 = 1;
    lVar6 = 0;
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar6) == *param_2) {
        if (iVar4 == 0) {
          return;
        }
        iVar4 = iVar2 - iVar4;
        if (iVar4 != 0) {
          iVar5 = 1;
          if (iVar4 < 1) {
            iVar5 = iVar4;
          }
          memmove((void *)(lVar1 + (lVar3 >> 0x20) * 8),
                  (void *)(lVar1 + (longlong)(iVar2 - iVar5) * 8),(longlong)iVar5 << 3);
          iVar2 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar2 + -1;
        return;
      }
      lVar3 = lVar3 + 0x100000000;
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar2 << 3 != lVar6);
  }
  return;
}



// FUNCTION 147adbbc4 FUN_147adbbc4 body=148 status=ok
// SIG undefined FUN_147adbbc4(void)

void FUN_147adbbc4(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (*(longlong *)(param_1 + 0x58) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x58) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x48) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x40) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_147ade8ed(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147adbc58 FUN_147adbc58 body=31 status=ok
// SIG undefined FUN_147adbc58(void)

undefined8 FUN_147adbc58(longlong param_1,int param_2)

{
  if (param_1 != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x128 + (longlong)param_2 * 0x150);
  }
  return 0;
}



// FUNCTION 147adbc78 FUN_147adbc78 body=31 status=ok
// SIG undefined FUN_147adbc78(void)

undefined8 FUN_147adbc78(longlong param_1,int param_2)

{
  if (param_1 != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x130 + (longlong)param_2 * 0x150);
  }
  return 0;
}



// FUNCTION 147adbc98 FUN_147adbc98 body=31 status=ok
// SIG undefined FUN_147adbc98(void)

undefined8 FUN_147adbc98(longlong param_1,int param_2)

{
  if (param_1 != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x108 + (longlong)param_2 * 0x150);
  }
  return 0;
}



// FUNCTION 147adbcb8 FUN_147adbcb8 body=226 status=ok
// SIG undefined FUN_147adbcb8(void)

void FUN_147adbcb8(longlong param_1)

{
  uint *puVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  
  lVar6 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x108))
                    (*(longlong **)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x60));
  *(undefined1 *)(param_1 + 0x34) = *(undefined1 *)(lVar6 + 0x28);
  bVar2 = *(byte *)(lVar6 + 0x29);
  *(byte *)(param_1 + 0x35) = bVar2;
  *(uint *)(param_1 + 0x38) = (uint)bVar2 * 0x100 + (uint)*(byte *)(lVar6 + 0x28) + 0x101;
  *(uint *)(param_1 + 0x3c) =
       ((uint)*(byte *)(lVar6 + 0x28) + (uint)*(byte *)(lVar6 + 0x29) + 2) * *(int *)(lVar6 + 0x24);
  lVar3 = *(longlong *)(lVar6 + 0x18);
  lVar4 = *(longlong *)(param_1 + 0x40);
  if (lVar4 != lVar3) {
    *(longlong *)(param_1 + 0x40) = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar7 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar7 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  lVar3 = *(longlong *)(lVar6 + 0x60);
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (lVar4 != lVar3) {
    *(longlong *)(param_1 + 0x48) = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar7 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar7 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  iVar5 = FUN_144b26f16(lVar6);
  uVar7 = 2;
  if (iVar5 == 0) {
    uVar7 = (uint)(4 < *(int *)(lVar6 + 0x24));
  }
  *(uint *)(param_1 + 0x30) = uVar7;
  return;
}



// FUNCTION 147adbd9a FUN_147adbd9a body=96 status=ok
// SIG undefined FUN_147adbd9a(void)

longlong FUN_147adbd9a(longlong param_1,byte param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (*(char *)(*(longlong *)(param_1 + 0x178) + 0x115) != '\x01') {
    return 0;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x178) + 0x138);
  if (*(char *)(lVar1 + 0xc1) == '\x01') {
    uVar3 = (ulonglong)
            ((uint)((uint)(*(int *)(lVar1 + 0xcc) - *(int *)(lVar1 + 200)) < 2 & param_2) ^
            *(uint *)(lVar1 + 0xc4));
    uVar2 = 0;
    if (*(char *)(lVar1 + 0x28 + uVar3 * 0x58) != '\0') {
      uVar2 = uVar3;
    }
  }
  else {
    uVar2 = 0;
  }
  return lVar1 + uVar2 * 0x58 + 0x10;
}



// FUNCTION 147adbdfa FUN_147adbdfa body=87 status=ok
// SIG undefined FUN_147adbdfa(void)

undefined8 FUN_147adbdfa(longlong param_1,byte param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    uVar1 = (ulonglong)
            ((uint)((uint)(*(int *)(param_1 + 0xcc) - *(int *)(param_1 + 200)) < 2 & param_2) ^
            *(uint *)(param_1 + 0xc4));
    if (*(longlong *)(param_1 + 0x18 + uVar1 * 0x10) == 0) {
      uVar1 = (ulonglong)*(uint *)(param_1 + 0xc4);
    }
  }
  else {
    uVar1 = 0;
  }
  if (*(char *)(param_1 + 0x14) == '\x01') {
    uVar2 = CONCAT71((int7)(uVar1 * 0x10 >> 8),*(longlong *)(param_1 + 0x18 + uVar1 * 0x10) != 0);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 147adbe52 FUN_147adbe52 body=75 status=ok
// SIG undefined FUN_147adbe52(void)

longlong FUN_147adbe52(longlong param_1,byte param_2)

{
  ulonglong uVar1;
  
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    uVar1 = (ulonglong)
            ((uint)((uint)(*(int *)(param_1 + 0xcc) - *(int *)(param_1 + 200)) < 2 & param_2) ^
            *(uint *)(param_1 + 0xc4));
    if (*(longlong *)(param_1 + 0x18 + uVar1 * 0x10) == 0) {
      uVar1 = (ulonglong)*(uint *)(param_1 + 0xc4);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1 * 0x10 + param_1 + 0x18;
}



// FUNCTION 147adbe9e FUN_147adbe9e body=75 status=ok
// SIG undefined FUN_147adbe9e(void)

longlong FUN_147adbe9e(longlong param_1,byte param_2)

{
  ulonglong uVar1;
  
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    uVar1 = (ulonglong)
            ((uint)((uint)(*(int *)(param_1 + 0xcc) - *(int *)(param_1 + 200)) < 2 & param_2) ^
            *(uint *)(param_1 + 0xc4));
    if (*(longlong *)(param_1 + 0x18 + uVar1 * 0x10) == 0) {
      uVar1 = (ulonglong)*(uint *)(param_1 + 0xc4);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1 * 0x40 + param_1 + 0x40;
}



// FUNCTION 147adbeea FUN_147adbeea body=381 status=ok
// SIG undefined FUN_147adbeea(void)

void FUN_147adbeea(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar7 = (*(undefined8 **)(param_1 + 0x178))[1];
  *param_2 = **(undefined8 **)(param_1 + 0x178);
  param_2[1] = uVar7;
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x178) + 0x18);
  param_2[2] = *(undefined8 *)(*(longlong *)(param_1 + 0x178) + 0x10);
  param_2[3] = uVar7;
  lVar2 = *(longlong *)(param_1 + 0x178);
  uVar4 = *(undefined4 *)(lVar2 + 0x24);
  uVar5 = *(undefined4 *)(lVar2 + 0x28);
  uVar6 = *(undefined4 *)(lVar2 + 0x2c);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(lVar2 + 0x20);
  *(undefined4 *)((longlong)param_2 + 0x24) = uVar4;
  *(undefined4 *)(param_2 + 5) = uVar5;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar6;
  puVar3 = *(undefined8 **)(param_1 + 0x178);
  if (puVar3 != param_2) {
    iVar1 = *(int *)(puVar3 + 0xe);
    *(int *)(param_2 + 0xe) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_2 + 0x74) == 0) {
      *(undefined4 *)((longlong)param_2 + 0x74) = 4;
    }
    else {
      FUN_144780848(param_2 + 6,iVar1);
      if (iVar1 != 0) {
        memcpy(param_2 + 6,puVar3 + 6,(longlong)iVar1 << 4);
      }
    }
  }
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x178) + 0x90);
  param_2[0x11] = *(undefined8 *)(*(longlong *)(param_1 + 0x178) + 0x88);
  param_2[0x12] = uVar7;
  uVar7 = (*(undefined8 **)(param_1 + 0x178))[1];
  param_2[0x18] = **(undefined8 **)(param_1 + 0x178);
  param_2[0x19] = uVar7;
  param_2[0x13] = *(undefined8 *)(*(longlong *)(param_1 + 0x178) + 0x98);
  param_2[0x1a] = *(undefined8 *)(*(longlong *)(param_1 + 0x178) + 0x98);
  param_2[0x14] = *(undefined8 *)(*(longlong *)(param_1 + 0x178) + 0xa0);
  param_2[0x16] = *(undefined8 *)(*(longlong *)(param_1 + 0x178) + 0xb0);
  *(undefined4 *)(param_2 + 0x17) = *(undefined4 *)(*(longlong *)(param_1 + 0x178) + 0xb8);
  param_2[0x15] = *(undefined8 *)(*(longlong *)(param_1 + 0x178) + 0xa8);
  *(undefined1 *)((longlong)param_2 + 0xbc) = *(undefined1 *)(*(longlong *)(param_1 + 0x178) + 0xbc)
  ;
  *(undefined1 *)((longlong)param_2 + 0xbd) = *(undefined1 *)(*(longlong *)(param_1 + 0x178) + 0xbd)
  ;
  *(undefined1 *)((longlong)param_2 + 0xbe) = *(undefined1 *)(*(longlong *)(param_1 + 0x178) + 0xbe)
  ;
  return;
}



// FUNCTION 147adc086 FUN_147adc086 body=227 status=ok
// SIG undefined FUN_147adc086(void)

void FUN_147adc086(int param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  char cVar2;
  ulonglong uVar3;
  undefined1 auStack_d8 [36];
  undefined1 local_b4 [4];
  undefined1 local_b0 [128];
  longlong local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_30 = 0;
  local_28 = 0x800000000;
  FUN_147adc16a(param_3,param_4,local_b0,local_b4);
  cVar2 = FUN_144a798df(DAT_14ca85550,DAT_14c760db4);
  if ((1 < param_1) && (cVar2 != '\0')) {
    uVar3 = local_28 & 0xff;
    iVar1 = *(int *)(param_4 + 0x88);
    *(uint *)(param_4 + 0x88) = iVar1 + 1U;
    if (*(uint *)(param_4 + 0x8c) < iVar1 + 1U) {
      FUN_14738ac8a(param_4,iVar1);
    }
    *(ulonglong *)(param_4 + (longlong)iVar1 * 8) = uVar3 | 0x1000010140000;
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147adc16a FUN_147adc16a body=1981 status=ok
// SIG undefined FUN_147adc16a(void)

void FUN_147adc16a(undefined8 *param_1,longlong param_2,undefined8 param_3,uint *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined8 *puVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  byte *pbVar12;
  int iVar13;
  longlong lVar14;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 local_80;
  undefined8 *local_78;
  uint local_6c;
  uint *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = (undefined8 *)*param_1;
  bVar1 = *(byte *)((longlong)param_1 + 0xd);
  bVar2 = *(byte *)((longlong)param_1 + 0xf);
  local_50._0_7_ = CONCAT16(bVar2,(uint6)CONCAT14(bVar1,*(undefined4 *)(param_1 + 1)));
  local_50 = (ulonglong)(uint7)local_50;
  bVar3 = *(byte *)((longlong)param_1 + 0xe);
  bVar4 = *(byte *)((longlong)param_1 + 0xc);
  local_68 = param_4;
  uVar8 = FUN_14472dff0(param_3);
  iVar13 = *(int *)(param_2 + 0x88);
  *(uint *)(param_2 + 0x88) = iVar13 + 1U;
  local_88 = param_2;
  if (*(uint *)(param_2 + 0x8c) < iVar13 + 1U) {
    FUN_14738ac8a(param_2,iVar13);
  }
  *(ulonglong *)(local_88 + (longlong)iVar13 * 8) =
       (ulonglong)uVar8 & 0xff |
       (ulonglong)bVar4 << 8 |
       (ulonglong)bVar3 << 0x10 | (ulonglong)bVar1 << 0x20 | (ulonglong)(bVar2 & 1) << 0x30;
  local_58 = (undefined8 *)param_1[2];
  bVar1 = *(byte *)((longlong)param_1 + 0x1d);
  bVar2 = *(byte *)((longlong)param_1 + 0x1f);
  local_50._0_7_ = CONCAT16(bVar2,(uint6)CONCAT14(bVar1,*(undefined4 *)(param_1 + 3)));
  local_50 = (ulonglong)(uint7)local_50;
  bVar3 = *(byte *)((longlong)param_1 + 0x1e);
  bVar4 = *(byte *)((longlong)param_1 + 0x1c);
  uVar8 = FUN_14472dff0(param_3);
  iVar13 = *(int *)(local_88 + 0x88);
  *(uint *)(local_88 + 0x88) = iVar13 + 1U;
  if (*(uint *)(local_88 + 0x8c) < iVar13 + 1U) {
    FUN_14738ac8a(local_88,iVar13);
  }
  *(ulonglong *)(local_88 + (longlong)iVar13 * 8) =
       (ulonglong)uVar8 & 0xff |
       (ulonglong)bVar4 << 8 |
       (ulonglong)bVar3 << 0x10 | (ulonglong)bVar1 << 0x20 | (ulonglong)(bVar2 & 1) << 0x30 |
       0x1000000;
  local_58 = (undefined8 *)param_1[4];
  bVar1 = *(byte *)((longlong)param_1 + 0x2d);
  bVar2 = *(byte *)((longlong)param_1 + 0x2f);
  local_50._0_7_ = CONCAT16(bVar2,(uint6)CONCAT14(bVar1,*(undefined4 *)(param_1 + 5)));
  local_50 = (ulonglong)(uint7)local_50;
  bVar3 = *(byte *)((longlong)param_1 + 0x2e);
  bVar4 = *(byte *)((longlong)param_1 + 0x2c);
  local_80 = param_3;
  uVar8 = FUN_14472dff0(param_3);
  iVar13 = *(int *)(local_88 + 0x88);
  *(uint *)(local_88 + 0x88) = iVar13 + 1U;
  if (*(uint *)(local_88 + 0x8c) < iVar13 + 1U) {
    FUN_14738ac8a(local_88,iVar13);
  }
  *(ulonglong *)(local_88 + (longlong)iVar13 * 8) =
       (ulonglong)uVar8 & 0xff |
       (ulonglong)bVar4 << 8 |
       (ulonglong)bVar3 << 0x10 | (ulonglong)bVar1 << 0x20 | (ulonglong)(bVar2 & 1) << 0x30 |
       0x2000000;
  local_60 = param_1 + 6;
  iVar13 = *(int *)(param_1 + 0xe);
  local_78 = param_1;
  if (iVar13 != 0) {
    if (0 < iVar13) {
      pbVar12 = (byte *)((longlong)param_1 + 0x3f);
      uVar8 = 0x5000000;
      lVar14 = 0;
      do {
        local_58 = *(undefined8 **)(pbVar12 + -0xf);
        bVar1 = pbVar12[-2];
        bVar2 = *pbVar12;
        local_50._0_7_ = CONCAT16(bVar2,(uint6)CONCAT14(bVar1,*(undefined4 *)(pbVar12 + -7)));
        local_50 = (ulonglong)(uint7)local_50;
        bVar3 = pbVar12[-1];
        bVar4 = pbVar12[-3];
        uVar10 = FUN_14472dff0(local_80,&local_58);
        iVar13 = *(int *)(local_88 + 0x88);
        *(uint *)(local_88 + 0x88) = iVar13 + 1U;
        if (*(uint *)(local_88 + 0x8c) < iVar13 + 1U) {
          local_6c = (uint)uVar10;
          FUN_14738ac8a(local_88,iVar13);
          uVar10 = (ulonglong)local_6c;
        }
        *(ulonglong *)(local_88 + (longlong)iVar13 * 8) =
             uVar10 & 0xff |
             (ulonglong)bVar4 << 8 |
             (ulonglong)bVar3 << 0x10 |
             (ulonglong)uVar8 | (ulonglong)bVar1 << 0x20 | (ulonglong)(bVar2 & 1) << 0x30;
        lVar14 = lVar14 + 1;
        iVar13 = *(int *)(local_78 + 0xe);
        uVar8 = uVar8 + 0x1000000;
        pbVar12 = pbVar12 + 0x10;
      } while (lVar14 < iVar13);
      if (3 < iVar13) goto LAB_147adc53c;
    }
    uVar8 = iVar13 * 0x1000000 + 0x5000000;
    iVar13 = iVar13 + -4;
    do {
      lVar14 = (longlong)*(int *)(local_78 + 0xe);
      lVar11 = lVar14 * 0x10;
      local_58 = (undefined8 *)local_60[lVar14 * 2 + -2];
      bVar1 = *(byte *)((longlong)local_60 + lVar11 + -3);
      bVar2 = *(byte *)((longlong)local_60 + lVar11 + -1);
      local_50._0_7_ =
           CONCAT16(bVar2,(uint6)CONCAT14(bVar1,*(undefined4 *)(local_60 + lVar14 * 2 + -1)));
      local_50 = (ulonglong)(uint7)local_50;
      bVar3 = *(byte *)((longlong)local_60 + lVar11 + -2);
      bVar4 = *(byte *)((longlong)local_60 + lVar11 + -4);
      uVar9 = FUN_14472dff0(local_80,&local_58);
      iVar5 = *(int *)(local_88 + 0x88);
      *(uint *)(local_88 + 0x88) = iVar5 + 1U;
      if (*(uint *)(local_88 + 0x8c) < iVar5 + 1U) {
        FUN_14738ac8a(local_88,iVar5);
      }
      *(ulonglong *)(local_88 + (longlong)iVar5 * 8) =
           (ulonglong)uVar9 & 0xff | (ulonglong)bVar4 << 8 | (ulonglong)bVar3 << 0x10 |
           (ulonglong)uVar8 | (ulonglong)bVar1 << 0x20 | (ulonglong)(bVar2 & 1) << 0x30;
      uVar8 = uVar8 + 0x1000000;
      iVar13 = iVar13 + 1;
    } while (iVar13 != 0);
  }
LAB_147adc53c:
  if (local_78[0x16] == 0) {
    local_78[0x16] = DAT_14ca94db0;
    *(undefined4 *)(local_78 + 0x17) = 0;
  }
  local_58 = (undefined8 *)local_78[0x11];
  if (local_58 == (undefined8 *)0x0) {
    local_50 = 0x4000000000000;
    local_58 = &DAT_14ca94d98;
    uVar8 = FUN_14472dff0(local_80);
    iVar13 = *(int *)(local_88 + 0x88);
    *(uint *)(local_88 + 0x88) = iVar13 + 1U;
    if (*(uint *)(local_88 + 0x8c) < iVar13 + 1U) {
      FUN_14738ac8a(local_88,iVar13);
    }
    uVar10 = (ulonglong)(uVar8 & 0xff | 0xd080000);
  }
  else {
    bVar1 = *(byte *)((longlong)local_78 + 0x95);
    bVar2 = *(byte *)((longlong)local_78 + 0x97);
    local_50._0_7_ = CONCAT16(bVar2,(uint6)CONCAT14(bVar1,*(undefined4 *)(local_78 + 0x12)));
    local_50 = (ulonglong)(uint7)local_50;
    bVar3 = *(byte *)((longlong)local_78 + 0x96);
    bVar4 = *(byte *)((longlong)local_78 + 0x94);
    uVar8 = FUN_14472dff0(local_80);
    iVar13 = *(int *)(local_88 + 0x88);
    *(uint *)(local_88 + 0x88) = iVar13 + 1U;
    if (*(uint *)(local_88 + 0x8c) < iVar13 + 1U) {
      FUN_14738ac8a(local_88,iVar13);
    }
    uVar10 = (ulonglong)uVar8 & 0xff |
             (ulonglong)bVar4 << 8 |
             (ulonglong)bVar3 << 0x10 | (ulonglong)bVar1 << 0x20 | (ulonglong)(bVar2 & 1) << 0x30 |
             0xd000000;
  }
  puVar6 = local_78;
  lVar14 = local_88;
  *(ulonglong *)(local_88 + (longlong)iVar13 * 8) = uVar10;
  local_58 = (undefined8 *)local_78[0x20];
  bVar1 = *(byte *)((longlong)local_78 + 0x10d);
  bVar2 = *(byte *)((longlong)local_78 + 0x10f);
  local_50._0_7_ = CONCAT16(bVar2,(uint6)CONCAT14(bVar1,*(undefined4 *)(local_78 + 0x21)));
  local_50 = (ulonglong)(uint7)local_50;
  bVar3 = *(byte *)((longlong)local_78 + 0x10e);
  bVar4 = *(byte *)((longlong)local_78 + 0x10c);
  uVar8 = FUN_14472dff0(local_80);
  iVar13 = *(int *)(lVar14 + 0x88);
  *(uint *)(lVar14 + 0x88) = iVar13 + 1U;
  if (*(uint *)(lVar14 + 0x8c) < iVar13 + 1U) {
    FUN_14738ac8a(lVar14,iVar13);
    lVar14 = local_88;
  }
  *(ulonglong *)(lVar14 + (longlong)iVar13 * 8) =
       (ulonglong)uVar8 & 0xff |
       (ulonglong)bVar4 << 8 |
       (ulonglong)bVar3 << 0x10 | (ulonglong)bVar1 << 0x20 | (ulonglong)(bVar2 & 1) << 0x30 |
       0x3000000;
  local_58 = (undefined8 *)puVar6[0x23];
  bVar1 = *(byte *)((longlong)puVar6 + 0x125);
  bVar2 = *(byte *)((longlong)puVar6 + 0x127);
  local_50._0_7_ = CONCAT16(bVar2,(uint6)CONCAT14(bVar1,*(undefined4 *)(puVar6 + 0x24)));
  local_50 = (ulonglong)(uint7)local_50;
  bVar3 = *(byte *)((longlong)puVar6 + 0x126);
  bVar4 = *(byte *)((longlong)puVar6 + 0x124);
  bVar7 = FUN_14472dff0(local_80);
  iVar13 = *(int *)(local_88 + 0x88);
  *(uint *)(local_88 + 0x88) = iVar13 + 1U;
  if (*(uint *)(local_88 + 0x8c) < iVar13 + 1U) {
    FUN_14738ac8a(local_88,iVar13);
  }
  *(ulonglong *)(local_88 + (longlong)iVar13 * 8) =
       (ulonglong)bVar7 +
       ((ulonglong)bVar4 << 8 |
       (ulonglong)bVar3 << 0x10 | (ulonglong)bVar1 << 0x20 | (ulonglong)(bVar2 & 1) << 0x30) |
       0x9000000;
  local_58 = (undefined8 *)puVar6[0x25];
  bVar1 = *(byte *)((longlong)puVar6 + 0x135);
  bVar2 = *(byte *)((longlong)puVar6 + 0x137);
  local_50._0_7_ = CONCAT16(bVar2,(uint6)CONCAT14(bVar1,*(undefined4 *)(puVar6 + 0x26)));
  local_50 = (ulonglong)(uint7)local_50;
  bVar3 = *(byte *)((longlong)puVar6 + 0x136);
  bVar4 = *(byte *)((longlong)puVar6 + 0x134);
  uVar8 = FUN_14472dff0(local_80);
  iVar13 = *(int *)(local_88 + 0x88);
  *(uint *)(local_88 + 0x88) = iVar13 + 1U;
  if (*(uint *)(local_88 + 0x8c) < iVar13 + 1U) {
    FUN_14738ac8a(local_88,iVar13);
  }
  *(ulonglong *)(local_88 + (longlong)iVar13 * 8) =
       (ulonglong)uVar8 & 0xff |
       (ulonglong)bVar4 << 8 |
       (ulonglong)bVar3 << 0x10 | (ulonglong)bVar1 << 0x20 | (ulonglong)(bVar2 & 1) << 0x30 |
       0xa000000;
  *local_68 = (uint)bVar7;
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147adc928 FUN_147adc928 body=121 status=ok
// SIG undefined FUN_147adc928(void)

void FUN_147adc928(longlong *param_1)

{
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [136];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1400e134e();
  local_20 = 0x1100000000;
  (**(code **)(*param_1 + 0xc0))(param_1,local_a8);
  FUN_1447f9616(param_1,local_a8,0);
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147adc9a2 FUN_147adc9a2 body=33 status=ok
// SIG undefined FUN_147adc9a2(void)

void FUN_147adc9a2(longlong param_1)

{
  FUN_14013fde2();
  FUN_14013fe7a(param_1 + 0x130);
  return;
}



// FUNCTION 147adc9c4 FUN_147adc9c4 body=64 status=ok
// SIG undefined FUN_147adc9c4(void)

void FUN_147adc9c4(longlong param_1,undefined8 param_2)

{
  FUN_147adc16a(*(undefined8 *)(param_1 + 0x178),param_2,param_1 + 0x10,param_1 + 400);
  FUN_1447f936a(param_1,0,param_2,0x10,0xff);
  return;
}



// FUNCTION 147adca3c FUN_147adca3c body=275 status=ok
// SIG undefined FUN_147adca3c(void)

undefined4 * FUN_147adca3c(undefined4 *param_1,undefined4 *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  
  uVar4 = *param_2;
  uVar6 = param_2[1];
  uVar7 = param_2[2];
  uVar8 = param_2[3];
  uVar9 = param_2[4];
  uVar10 = param_2[5];
  uVar11 = param_2[6];
  uVar12 = param_2[7];
  uVar13 = param_2[9];
  uVar14 = param_2[10];
  uVar15 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar13;
  param_1[10] = uVar14;
  param_1[0xb] = uVar15;
  param_1[4] = uVar9;
  param_1[5] = uVar10;
  param_1[6] = uVar11;
  param_1[7] = uVar12;
  *param_1 = uVar4;
  param_1[1] = uVar6;
  param_1[2] = uVar7;
  param_1[3] = uVar8;
  if (param_1 != param_2) {
    iVar3 = param_2[0x1c];
    param_1[0x1c] = iVar3;
    if (iVar3 == 0 && param_1[0x1d] == 0) {
      param_1[0x1d] = 4;
    }
    else {
      FUN_144780848(param_1 + 0xc,iVar3);
      if (iVar3 != 0) {
        memcpy(param_1 + 0xc,param_2 + 0xc,(longlong)iVar3 << 4);
      }
    }
  }
  puVar17 = (undefined8 *)(param_2 + 0x1e);
  puVar18 = (undefined8 *)(param_1 + 0x1e);
  for (lVar16 = 8; lVar16 != 0; lVar16 = lVar16 + -1) {
    *puVar18 = *puVar17;
    puVar17 = puVar17 + 1;
    puVar18 = puVar18 + 1;
  }
  uVar4 = param_2[0x2e];
  *(undefined4 *)((longlong)param_1 + 0xbb) = *(undefined4 *)((longlong)param_2 + 0xbb);
  param_1[0x2e] = uVar4;
  puVar17 = (undefined8 *)(param_2 + 0x30);
  puVar18 = (undefined8 *)(param_1 + 0x30);
  for (lVar16 = 0x10; lVar16 != 0; lVar16 = lVar16 + -1) {
    *puVar18 = *puVar17;
    puVar17 = puVar17 + 1;
    puVar18 = puVar18 + 1;
  }
  lVar16 = *(longlong *)(param_2 + 0x50);
  lVar5 = *(longlong *)(param_1 + 0x50);
  if (lVar5 != lVar16) {
    *(longlong *)(param_1 + 0x50) = lVar16;
    if (lVar16 != 0) {
      LOCK();
      *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
      UNLOCK();
    }
    if (lVar5 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar5 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  FUN_1409552c0(param_1 + 0x52,param_2 + 0x52);
  return param_1;
}



// FUNCTION 147adcc0c FUN_147adcc0c body=130 status=ok
// SIG undefined FUN_147adcc0c(void)

void FUN_147adcc0c(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_14a915a60;
  param_1[0x1c] = &PTR_FUN_14a915a90;
  lVar2 = param_1[0x50];
  if (lVar2 != 0) {
    FUN_1417ca03e(lVar2);
    FUN_1400020a8(lVar2);
  }
  param_1[0x4b] = 0;
  FUN_14020abd2(param_1 + 0x1c);
  *param_1 = &PTR_LAB_14a915960;
  lVar2 = 0x38;
  do {
    lVar1 = (longlong)param_1 + lVar2;
    lVar2 = lVar2 + -0x10;
    FUN_1417c9c76(lVar1);
  } while (lVar2 != 0x18);
  return;
}



// FUNCTION 147adcc8e FUN_147adcc8e body=261 status=ok
// SIG undefined FUN_147adcc8e(void)

void FUN_147adcc8e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  void *_Dst;
  
  if (*(longlong *)(param_1 + 0x178) == 0) {
    _Dst = (void *)FUN_14001cc68(0x158);
    memset(_Dst,0,0x118);
    *(undefined4 *)((longlong)_Dst + 0x74) = 4;
    *(undefined8 *)((longlong)_Dst + 0x78) = 0;
    *(undefined8 *)((longlong)_Dst + 0x80) = 0;
    *(undefined8 *)((longlong)_Dst + 0x88) = 0;
    *(undefined8 *)((longlong)_Dst + 0x90) = 0;
    *(undefined8 *)((longlong)_Dst + 0x98) = 0;
    *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
    *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
    *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
    *(undefined4 *)((longlong)_Dst + 0xb8) = 0xffffffff;
    *(undefined1 *)((longlong)_Dst + 0xbc) = 0xff;
    *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
    *(undefined8 *)((longlong)_Dst + 200) = 0;
    *(undefined8 *)((longlong)_Dst + 0xd0) = 0;
    *(undefined8 *)((longlong)_Dst + 0xd8) = 0;
    *(undefined8 *)((longlong)_Dst + 0xe0) = 0;
    *(undefined8 *)((longlong)_Dst + 0xe8) = 0;
    *(undefined8 *)((longlong)_Dst + 0xf0) = 0;
    *(undefined8 *)((longlong)_Dst + 0xf8) = 0;
    *(undefined8 *)((longlong)_Dst + 0x100) = 0;
    *(undefined8 *)((longlong)_Dst + 0x108) = 0;
    *(undefined8 *)((longlong)_Dst + 0x10e) = 0;
    *(undefined8 *)((longlong)_Dst + 0x118) = 0;
    *(undefined8 *)((longlong)_Dst + 0x120) = 0;
    *(undefined8 *)((longlong)_Dst + 0x128) = 0;
    *(undefined8 *)((longlong)_Dst + 0x130) = 0;
    *(undefined8 *)((longlong)_Dst + 0x138) = 0;
    *(undefined8 *)((longlong)_Dst + 0x140) = 0;
    *(undefined8 *)((longlong)_Dst + 0x148) = 0;
    *(undefined8 *)((longlong)_Dst + 0x150) = 0;
    *(void **)(param_1 + 0x1a0) = _Dst;
    *(void **)(param_1 + 0x178) = _Dst;
  }
  else {
    _Dst = *(void **)(param_1 + 0x1a0);
  }
  FUN_147adca3c(_Dst,param_3);
  FUN_1447fd100(param_1,param_2);
  return;
}



// FUNCTION 147adcdb4 FUN_147adcdb4 body=196 status=ok
// SIG undefined FUN_147adcdb4(void)

void FUN_147adcdb4(longlong *param_1)

{
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined1 local_b0 [136];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1400e134e();
  local_28 = 0x1100000000;
  (**(code **)(*param_1 + 0xc0))(param_1,local_b0);
  FUN_1447f9616(param_1,local_b0,0);
  local_28 = 0x1100000000;
  FUN_147adc16a(param_1[0x2f],local_b0,param_1 + 2,param_1 + 0x32);
  local_b8 = 0xff;
  FUN_1447f936a(param_1,0,local_b0,0x10);
  FUN_1447f9616(param_1,local_b0,0);
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147adce7a FUN_147adce7a body=109 status=ok
// SIG undefined FUN_147adce7a(void)

void FUN_147adce7a(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_14013fde2();
  FUN_14013fe7a(param_1 + 0x130);
  FUN_140bc0e4c(param_1 + -0xd0);
  lVar3 = *(longlong *)(param_1 + 0x1a0);
  if ((lVar3 != 0) && (lVar4 = *(longlong *)(lVar3 + 0x140), lVar4 != 0)) {
    *(undefined8 *)(lVar3 + 0x140) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 147adcee8 FUN_147adcee8 body=228 status=ok
// SIG undefined FUN_147adcee8(void)

undefined8 * FUN_147adcee8(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  FUN_144b1dcb8();
  param_1[0x34] = 0x400000000;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1ec) = 0xff;
  *(undefined1 *)((longlong)param_1 + 0x1ee) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0xffffffff;
  *param_1 = &PTR_FUN_14a913cb0;
  param_1[0x4e] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x27c) = param_3;
  *(undefined1 *)((longlong)param_1 + 0x27d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x21c) = 1;
  return param_1;
}



// FUNCTION 147adcfcc FUN_147adcfcc body=280 status=ok
// SIG undefined FUN_147adcfcc(void)

void FUN_147adcfcc(longlong param_1,ulonglong *param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  lVar8 = -0x18;
  do {
    lVar3 = *(longlong *)(param_1 + 0x250 + lVar8);
    if (lVar3 != 0) {
      lVar4 = *(longlong *)(param_1 + 0x238 + lVar8);
      if (*(char *)((longlong)param_2 + 100) == '\x01') {
        lVar5 = *(longlong *)(lVar3 + 0x10);
        if (lVar5 != lVar4) {
          *(longlong *)(lVar3 + 0x10) = lVar4;
          if (lVar4 != 0) {
            LOCK();
            *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
            UNLOCK();
          }
          if (lVar5 != 0) {
            LOCK();
            puVar1 = (uint *)(lVar5 + 8);
            uVar2 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar2 & 0x3fffffff) == 1) {
              FUN_144a54812();
            }
          }
        }
      }
      else {
        puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar7 = puVar6 + 5;
        if ((undefined8 *)param_2[1] < puVar7) {
          FUN_140023dd8(param_2,0x30);
          puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar7 = puVar6 + 5;
        }
        *param_2 = (ulonglong)puVar7;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar6;
        param_2[6] = (ulonglong)(puVar6 + 1);
        puVar6[1] = 0;
        *puVar6 = &PTR_FUN_14a914768;
        puVar6[2] = param_2;
        puVar6[3] = lVar3;
        puVar6[4] = lVar4;
      }
    }
    lVar8 = lVar8 + 8;
  } while (lVar8 != 0);
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined4 *)(param_1 + 0x278) = 0xffffffff;
  return;
}



// FUNCTION 147add0e4 FUN_147add0e4 body=749 status=ok
// SIG undefined FUN_147add0e4(void)

void FUN_147add0e4(longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  uint uVar5;
  byte bVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  uVar5 = DAT_14c760db4;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar6 = *(byte *)((longlong)param_1 + 0xc);
  lVar3 = (**(code **)(*param_1 + 0x30))();
  if ((*(byte *)(lVar3 + 0x29) & 0x40) != 0) {
    if (bVar6 != 5) {
      uVar5 = (uint)bVar6;
    }
    if (1 < (int)uVar5) {
      bVar6 = (*(byte *)((longlong)&DAT_14ca814d0 +
                        (ulonglong)*(ushort *)(&DAT_14ca85070 + (ulonglong)uVar5 * 2) * 0x3c + 6) &
              0x10) >> 4;
      goto LAB_147add14f;
    }
  }
  bVar6 = 0;
LAB_147add14f:
  bVar2 = *(byte *)((longlong)param_1 + 0x27c);
  if ((bVar2 & 1) != 0) {
    puVar4 = &DAT_14ca8c098;
    if ((undefined8 *)param_1[0x26] != (undefined8 *)0x0) {
      puVar4 = (undefined8 *)param_1[0x26];
    }
    param_1[0x44] = puVar4[2];
    FUN_1417c9ed8(&local_30);
    lVar3 = param_1[0x47];
    param_1[0x47] = local_30;
    local_30 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar5 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar5 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_30 != 0) {
        LOCK();
        puVar1 = (uint *)(local_30 + 8);
        uVar5 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar5 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
    *(undefined2 *)((longlong)param_1 + 0x13c) = 0xc00;
    *(byte *)((longlong)param_1 + 0x13f) = *(byte *)((longlong)param_1 + 0x13f) | 2;
    *(byte *)((longlong)param_1 + 0x27d) = *(byte *)((longlong)param_1 + 0x27d) | 1;
    bVar2 = *(byte *)((longlong)param_1 + 0x27c);
  }
  if ((bVar2 & 4) != 0) {
    if ((bVar6 & (*(byte *)((longlong)param_1 + 0x1c7) & 4) >> 2) == 0) {
      puVar4 = &DAT_14ca8c098;
      if ((undefined8 *)param_1[0x37] != (undefined8 *)0x0) {
        puVar4 = (undefined8 *)param_1[0x37];
      }
      param_1[0x46] = puVar4[2];
      FUN_1417c9ed8(&local_30);
      lVar3 = param_1[0x49];
      param_1[0x49] = local_30;
      local_30 = 0;
      if (lVar3 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar3 + 8);
        uVar5 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar5 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
        if (local_30 != 0) {
          LOCK();
          puVar1 = (uint *)(local_30 + 8);
          uVar5 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar5 & 0x3fffffff) == 1) {
            FUN_144a54812();
          }
        }
      }
      *(undefined2 *)((longlong)param_1 + 0x1c4) = 0x400;
      *(undefined1 *)((longlong)param_1 + 0x1c6) = 8;
      *(byte *)((longlong)param_1 + 0x1c7) = *(byte *)((longlong)param_1 + 0x1c7) | 2;
      *(byte *)((longlong)param_1 + 0x27d) = *(byte *)((longlong)param_1 + 0x27d) | 4;
      bVar2 = *(byte *)((longlong)param_1 + 0x27c);
    }
    *(undefined4 *)(param_1 + 0x3d) = 0xffffffff;
  }
  if (((bVar2 & 2) != 0) && ((bVar6 & (*(byte *)((longlong)param_1 + 0x14f) & 4) >> 2) == 0)) {
    puVar4 = &DAT_14ca8c098;
    if ((undefined8 *)param_1[0x28] != (undefined8 *)0x0) {
      puVar4 = (undefined8 *)param_1[0x28];
    }
    param_1[0x45] = puVar4[2];
    FUN_1417c9ed8(&local_30);
    lVar3 = param_1[0x48];
    param_1[0x48] = local_30;
    local_30 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar5 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar5 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_30 != 0) {
        LOCK();
        puVar1 = (uint *)(local_30 + 8);
        uVar5 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar5 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
    *(byte *)((longlong)param_1 + 0x14f) = *(byte *)((longlong)param_1 + 0x14f) | 2;
    *(undefined2 *)((longlong)param_1 + 0x14c) = 0x1000;
    *(undefined1 *)((longlong)param_1 + 0x14e) = 0xe;
    *(byte *)((longlong)param_1 + 0x15f) = *(byte *)((longlong)param_1 + 0x15f) | 2;
    *(undefined2 *)((longlong)param_1 + 0x15c) = 0x1008;
    *(undefined1 *)((longlong)param_1 + 0x15e) = 0xe;
    *(byte *)((longlong)param_1 + 0x27d) = *(byte *)((longlong)param_1 + 0x27d) | 2;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_14007f434(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147add3d2 FUN_147add3d2 body=474 status=ok
// SIG undefined FUN_147add3d2(void)

void FUN_147add3d2(longlong param_1,undefined8 param_2,longlong *param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  longlong local_68 [3];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = (uint)*(byte *)(param_1 + 0xc);
  if (*(byte *)(param_1 + 0xc) == 5) {
    uVar2 = DAT_14c760db4;
  }
  if ((*(byte *)((longlong)&DAT_14ca814d0 +
                (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)(int)uVar2 * 2) * 0x3c + 6) & 0x10
      ) == 0) goto LAB_147add425;
  if (*(longlong *)(param_1 + 0x260) == 0) {
    (**(code **)(*param_3 + 0x90))(param_3,local_68);
    *(longlong *)(param_1 + 0x1d0) = local_68[0];
    if (local_68[0] != 0) {
      LOCK();
      puVar1 = (uint *)(local_68[0] + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  else {
    *(longlong *)(param_1 + 0x1d0) = *(longlong *)(param_1 + 0x260);
  }
  if (*(longlong *)(param_1 + 0x268) == 0) {
    (**(code **)(*param_3 + 0xa0))(param_3,local_68);
    *(longlong *)(param_1 + 0x1e0) = local_68[0];
    if (local_68[0] != 0) {
      LOCK();
      puVar1 = (uint *)(local_68[0] + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    if (*(longlong *)(param_1 + 0x268) != 0) goto LAB_147add4fe;
    uVar3 = (**(code **)(*param_3 + 0xb0))(param_3);
  }
  else {
    *(longlong *)(param_1 + 0x1e0) = *(longlong *)(param_1 + 0x268);
LAB_147add4fe:
    uVar3 = *(undefined4 *)(param_1 + 0x1e8);
  }
  *(undefined4 *)(param_1 + 0x1e8) = uVar3;
  if (*(longlong *)(param_1 + 0x270) == 0) {
    (**(code **)(*param_3 + 0x98))(param_3,local_68);
    *(longlong *)(param_1 + 0x1d8) = local_68[0];
    if (local_68[0] != 0) {
      LOCK();
      puVar1 = (uint *)(local_68[0] + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  else {
    *(longlong *)(param_1 + 0x1d8) = *(longlong *)(param_1 + 0x270);
  }
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_30 = 0;
  local_70 = 0;
  local_78 = 0;
  FUN_14570d1ef(local_68,param_1,*(undefined1 *)(param_1 + 0x1ee),0);
  FUN_147add5ae(param_1 + 0x208,param_2,local_68);
LAB_147add425:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147add5ae FUN_147add5ae body=110 status=ok
// SIG undefined FUN_147add5ae(void)

void FUN_147add5ae(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  if (*(char *)(param_2 + 0x69) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000147add5e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14ca83900 + 0x140))(DAT_14ca83900,param_2,uVar1,param_3);
    return;
  }
  FUN_14002049c(param_2,1);
  (**(code **)(*DAT_14ca83900 + 0x140))(DAT_14ca83900,param_2,uVar1,param_3);
  FUN_14002049c(param_2,0);
  return;
}



// FUNCTION 147add61c FUN_147add61c body=248 status=ok
// SIG undefined FUN_147add61c(void)

void FUN_147add61c(longlong param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = *(longlong *)(param_1 + 0x250);
  if (local_50 == 0) {
    (**(code **)(*param_3 + 0x88))(param_3,&local_58);
    local_50 = CONCAT44(uStack_54,local_58);
    if (local_50 != 0) {
      LOCK();
      puVar1 = (uint *)(local_50 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812(local_50);
      }
    }
  }
  local_48 = *(longlong *)(param_1 + 600);
  if (*(longlong *)(param_1 + 600) == 0) {
    local_48 = local_50;
  }
  local_58 = param_4;
  (**(code **)(*param_3 + 0x90))(param_3,&local_60);
  local_40 = local_60;
  if (local_60 != 0) {
    LOCK();
    puVar1 = (uint *)(local_60 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_147add716(param_1 + 0x210,param_2,&local_58);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147add716 FUN_147add716 body=110 status=ok
// SIG undefined FUN_147add716(void)

void FUN_147add716(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  if (*(char *)(param_2 + 0x69) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000147add74d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14ca83900 + 0x140))(DAT_14ca83900,param_2,uVar1,param_3);
    return;
  }
  FUN_14002049c(param_2,1);
  (**(code **)(*DAT_14ca83900 + 0x140))(DAT_14ca83900,param_2,uVar1,param_3);
  FUN_14002049c(param_2,0);
  return;
}



// FUNCTION 147add784 FUN_147add784 body=423 status=ok
// SIG undefined FUN_147add784(void)

void FUN_147add784(longlong param_1,ulonglong *param_2,undefined8 param_3,int *param_4)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  bool bVar11;
  bool bVar12;
  
  uVar7 = 0;
  bVar11 = false;
  bVar12 = false;
  do {
    if (*(longlong *)(param_1 + 0x250 + uVar7 * 8) != *(longlong *)(param_4 + uVar7 * 2 + 8)) {
      *(longlong *)(param_1 + 0x250 + uVar7 * 8) = *(longlong *)(param_4 + uVar7 * 2 + 8);
      bVar12 = (bool)(bVar12 | uVar7 < 2);
      bVar11 = (bool)(bVar11 | uVar7 >= 2);
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 != 5);
  lVar10 = 0;
  do {
    lVar3 = *(longlong *)(param_1 + 0x238 + lVar10);
    if (lVar3 != 0) {
      piVar6 = (int *)(param_1 + 0x220);
      if (*(longlong *)((longlong)(param_4 + 2) + lVar10) != 0) {
        piVar6 = param_4 + 2;
      }
      lVar4 = *(longlong *)((longlong)piVar6 + lVar10);
      if (*(char *)((longlong)param_2 + 100) == '\x01') {
        lVar5 = *(longlong *)(lVar3 + 0x10);
        if (lVar5 != lVar4) {
          *(longlong *)(lVar3 + 0x10) = lVar4;
          if (lVar4 != 0) {
            LOCK();
            *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
            UNLOCK();
          }
          if (lVar5 != 0) {
            LOCK();
            puVar1 = (uint *)(lVar5 + 8);
            uVar2 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar2 & 0x3fffffff) == 1) {
              FUN_144a54812();
            }
          }
        }
      }
      else {
        puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar9 = puVar8 + 5;
        if ((undefined8 *)param_2[1] < puVar9) {
          FUN_140023dd8(param_2,0x30);
          puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar9 = puVar8 + 5;
        }
        *param_2 = (ulonglong)puVar9;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar8;
        param_2[6] = (ulonglong)(puVar8 + 1);
        puVar8[1] = 0;
        *puVar8 = &PTR_FUN_14a914768;
        puVar8[2] = param_2;
        puVar8[3] = lVar3;
        puVar8[4] = lVar4;
      }
    }
    lVar10 = lVar10 + 8;
  } while (lVar10 != 0x18);
  if (*(int *)(param_1 + 0x278) != *param_4) {
    *(int *)(param_1 + 0x278) = *param_4;
    bVar12 = true;
  }
  if (bVar11) {
    FUN_147add3d2(param_1,param_2,param_3);
  }
  if (!bVar12) {
    return;
  }
  FUN_147add61c(param_1,param_2,param_3,*param_4);
  return;
}



// FUNCTION 147add92c FUN_147add92c body=126 status=ok
// SIG undefined FUN_147add92c(void)

void FUN_147add92c(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = 0;
  do {
    if ((*(byte *)(param_1 + 0x27d) & (byte)(1 << ((byte)lVar4 & 0x1f))) != 0) {
      iVar1 = *(int *)(param_2 + 0x60);
      *(uint *)(param_2 + 0x60) = iVar1 + 1U;
      if (*(uint *)(param_2 + 100) < iVar1 + 1U) {
        FUN_14744556c(param_2,iVar1);
      }
      lVar3 = *(longlong *)(param_2 + 0x58);
      if (*(longlong *)(param_2 + 0x58) == 0) {
        lVar3 = param_2;
      }
      uVar2 = *(undefined8 *)(param_1 + 0x238 + lVar4 * 8);
      *(uint *)(lVar3 + (longlong)iVar1 * 0xc) = (uint)lVar4 | 0x80000000;
      *(undefined8 *)(lVar3 + 4 + (longlong)iVar1 * 0xc) = uVar2;
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != 3);
  return;
}



// FUNCTION 147add9aa FUN_147add9aa body=42 status=ok
// SIG undefined FUN_147add9aa(void)

void FUN_147add9aa(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe8);
  return;
}



// FUNCTION 147add9e0 FUN_147add9e0 body=84 status=ok
// SIG undefined FUN_147add9e0(void)

longlong FUN_147add9e0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xe8,0x10);
  thunk_FUN_147432e9e(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0xe0) = 0;
  FUN_147440a6c(lVar1 + 0xe0,*(undefined8 *)(param_1 + 0x28),L"OutOffsets",0);
  return lVar1;
}



// FUNCTION 147adda34 FUN_147adda34 body=66 status=ok
// SIG undefined FUN_147adda34(void)

void * FUN_147adda34(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe8);
  memset(_Dst,0,0xe8);
  FUN_147432e26(_Dst);
  *(undefined4 *)((longlong)_Dst + 0xe0) = 0;
  return _Dst;
}



// FUNCTION 147adda76 FUN_147adda76 body=42 status=ok
// SIG undefined FUN_147adda76(void)

void FUN_147adda76(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xf0);
  return;
}



// FUNCTION 147addaac FUN_147addaac body=39 status=ok
// SIG undefined FUN_147addaac(void)

void FUN_147addaac(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xf0,0x10);
  FUN_147adf184(uVar1,param_1);
  return;
}



// FUNCTION 147addad4 FUN_147addad4 body=61 status=ok
// SIG undefined FUN_147addad4(void)

longlong FUN_147addad4(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xf0,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined4 *)(lVar1 + 0xe8) = 0;
  return lVar1;
}



// FUNCTION 147addb12 FUN_147addb12 body=42 status=ok
// SIG undefined FUN_147addb12(void)

void FUN_147addb12(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe8);
  return;
}



// FUNCTION 147addb48 FUN_147addb48 body=39 status=ok
// SIG undefined FUN_147addb48(void)

void FUN_147addb48(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe8,0x10);
  FUN_147adf20e(uVar1,param_1);
  return;
}



// FUNCTION 147addb70 FUN_147addb70 body=51 status=ok
// SIG undefined FUN_147addb70(void)

longlong FUN_147addb70(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xe8,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  return lVar1;
}



// FUNCTION 147addba4 FUN_147addba4 body=42 status=ok
// SIG undefined FUN_147addba4(void)

void FUN_147addba4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xf8);
  return;
}



// FUNCTION 147addbda FUN_147addbda body=39 status=ok
// SIG undefined FUN_147addbda(void)

void FUN_147addbda(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xf8,0x10);
  FUN_147adf26e(uVar1,param_1);
  return;
}



// FUNCTION 147addc02 FUN_147addc02 body=61 status=ok
// SIG undefined FUN_147addc02(void)

longlong FUN_147addc02(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xf8,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  return lVar1;
}



// FUNCTION 147addd64 FUN_147addd64 body=38 status=ok
// SIG undefined FUN_147addd64(void)

undefined8 FUN_147addd64(undefined8 param_1,int param_2)

{
  FUN_14020abd2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147addd8a FUN_147addd8a body=38 status=ok
// SIG undefined FUN_147addd8a(void)

undefined8 FUN_147addd8a(undefined8 param_1,int param_2)

{
  FUN_140a4b124();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147adddb0 FUN_147adddb0 body=38 status=ok
// SIG undefined FUN_147adddb0(void)

undefined8 FUN_147adddb0(undefined8 param_1,int param_2)

{
  FUN_147adcc0c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147adddd6 FUN_147adddd6 body=48 status=ok
// SIG undefined FUN_147adddd6(void)

longlong FUN_147adddd6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xe0;
  FUN_147adcc0c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147adde06 FUN_147adde06 body=45 status=ok
// SIG undefined FUN_147adde06(void)

longlong FUN_147adde06(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e79a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147adde34 FUN_147adde34 body=88 status=ok
// SIG undefined FUN_147adde34(void)

undefined8 * FUN_147adde34(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a90dea0;
  FUN_14126849c(&DAT_14cb10aa8,param_1);
  FUN_140457ffc(&DAT_14c9647a0,param_1);
  FUN_140457ffc(&DAT_14cb10a78,param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147adde96 FUN_147adde96 body=38 status=ok
// SIG undefined FUN_147adde96(void)

undefined8 FUN_147adde96(undefined8 param_1,int param_2)

{
  FUN_147ae4ca2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147addf30 FUN_147addf30 body=59 status=ok
// SIG undefined FUN_147addf30(void)

undefined8 FUN_147addf30(longlong *param_1)

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



// FUNCTION 147addfd2 FUN_147addfd2 body=138 status=ok
// SIG undefined FUN_147addfd2(void)

code * FUN_147addfd2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MotionBlurDataExtension";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000015;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147ade05c;
}



// FUNCTION 147ade05c FUN_147ade05c body=138 status=ok
// SIG undefined FUN_147ade05c(void)

code * FUN_147ade05c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MotionBlurDataOrigin";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000014;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e36236;
}



// FUNCTION 147ade0e6 FUN_147ade0e6 body=138 status=ok
// SIG undefined FUN_147ade0e6(void)

code * FUN_147ade0e6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TangentX";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<half4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000001e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1463d0c86;
}



// FUNCTION 147ade170 FUN_147ade170 body=132 status=ok
// SIG undefined FUN_147ade170(void)

undefined1 * FUN_147ade170(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Position";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e40cec;
}


