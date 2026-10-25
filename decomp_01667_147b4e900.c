// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147b4e900 FUN_147b4e900 body=113 status=ok
// SIG undefined FUN_147b4e900(void)

void FUN_147b4e900(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xc)) {
      uVar2 = uVar1 / 0xc & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xc,4);
  }
  return;
}



// FUNCTION 147b4e972 FUN_147b4e972 body=147 status=ok
// SIG undefined FUN_147b4e972(void)

void FUN_147b4e972(longlong param_1,int param_2)

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



// FUNCTION 147b4ea06 FUN_147b4ea06 body=242 status=ok
// SIG undefined FUN_147b4ea06(void)

void FUN_147b4ea06(undefined8 param_1,undefined4 *param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = (ulonglong)DAT_14cae4f58;
  if (0 < (longlong)uVar4) {
    bVar5 = false;
    DAT_14cae4f64 = DAT_14cae4f64 + 1;
    do {
      lVar6 = uVar4 * 0x10 + -8;
      uVar7 = uVar4;
      while ((*(int *)(DAT_14cae4f50 + lVar6) != 0 &&
             (plVar1 = *(longlong **)(DAT_14cae4f50 + -8 + lVar6), plVar1 != (longlong *)0x0))) {
        local_48 = *param_2;
        uStack_44 = param_2[1];
        uStack_40 = param_2[2];
        uStack_3c = param_2[3];
        cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1,&local_48);
        if (cVar3 == '\0') break;
        lVar6 = lVar6 + -0x10;
        bVar2 = uVar7 < 2;
        uVar7 = uVar7 - 1;
        if (bVar2) {
          DAT_14cae4f64 = DAT_14cae4f64 + -1;
          if (!bVar5) goto LAB_147b4ead5;
          goto LAB_147b4eabf;
        }
      }
      uVar4 = uVar7 - 1;
      bVar5 = true;
    } while (1 < uVar7);
    DAT_14cae4f64 = DAT_14cae4f64 + -1;
LAB_147b4eabf:
    FUN_14474d06a(&DAT_14cae4f50,0);
  }
LAB_147b4ead5:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147b4eafa FUN_147b4eafa body=132 status=ok
// SIG undefined FUN_147b4eafa(void)

void FUN_147b4eafa(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147b4eb80 FUN_147b4eb80 body=48 status=ok
// SIG undefined FUN_147b4eb80(void)

void FUN_147b4eb80(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,4,4);
  }
  return;
}



// FUNCTION 147b4ebb0 FUN_147b4ebb0 body=29 status=ok
// SIG undefined FUN_147b4ebb0(void)

undefined8 FUN_147b4ebb0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147b4ebe8 FUN_147b4ebe8 body=29 status=ok
// SIG undefined FUN_147b4ebe8(void)

bool FUN_147b4ebe8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147b4ec06 FUN_147b4ec06 body=26 status=ok
// SIG undefined FUN_147b4ec06(void)

bool FUN_147b4ec06(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147b4ec20 FUN_147b4ec20 body=24 status=ok
// SIG undefined FUN_147b4ec20(void)

bool FUN_147b4ec20(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147b4ec44 FUN_147b4ec44 body=101 status=ok
// SIG undefined FUN_147b4ec44(void)

void FUN_147b4ec44(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a975290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a975220;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147b4ecaa FUN_147b4ecaa body=101 status=ok
// SIG undefined FUN_147b4ecaa(void)

void FUN_147b4ecaa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a975290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a975220;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147b4ed10 FUN_147b4ed10 body=134 status=ok
// SIG undefined FUN_147b4ed10(void)

void FUN_147b4ed10(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a975290;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a975220;
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
                    /* WARNING: Could not recover jumptable at 0x000147b4ed87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147b4ed96 FUN_147b4ed96 body=52 status=ok
// SIG undefined FUN_147b4ed96(void)

void FUN_147b4ed96(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147b4edc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 147b4edca FUN_147b4edca body=155 status=ok
// SIG undefined FUN_147b4edca(void)

bool FUN_147b4edca(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    FUN_1400841de(param_1 + 0x18,&local_38);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b4ee68 FUN_147b4ee68 body=96 status=ok
// SIG undefined FUN_147b4ee68(void)

void FUN_147b4ee68(longlong param_1,int param_2)

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



// FUNCTION 147b4eec8 FUN_147b4eec8 body=132 status=ok
// SIG undefined FUN_147b4eec8(void)

void FUN_147b4eec8(longlong param_1,int param_2)

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



// FUNCTION 147b4ef58 FUN_147b4ef58 body=29 status=ok
// SIG undefined FUN_147b4ef58(void)

undefined8 FUN_147b4ef58(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147b4ef76 FUN_147b4ef76 body=370 status=ok
// SIG undefined FUN_147b4ef76(void)

longlong * FUN_147b4ef76(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x28,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x28);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_147b4f1b4(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x66666 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_147b00f36(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x28;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_147b4f1b4(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_147b4f0ea(param_2);
        FUN_147b00f36(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147b4f0ea FUN_147b4f0ea body=54 status=ok
// SIG undefined FUN_147b4f0ea(void)

longlong FUN_147b4f0ea(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147b4f120(param_1,iVar1);
  }
  return (longlong)iVar1 * 0x28 + *param_1;
}



// FUNCTION 147b4f120 FUN_147b4f120 body=147 status=ok
// SIG undefined FUN_147b4f120(void)

void FUN_147b4f120(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147b4f1b4 FUN_147b4f1b4 body=112 status=ok
// SIG undefined FUN_147b4f1b4(void)

void FUN_147b4f1b4(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x28,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x28)) {
      uVar2 = uVar1 / 0x28 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x28,8);
  }
  return;
}



// FUNCTION 147b4f224 FUN_147b4f224 body=158 status=ok
// SIG undefined FUN_147b4f224(void)

undefined8 * FUN_147b4f224(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_147b49a34(param_1,iVar1);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 0x28);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 << 2);
  }
  return param_1;
}



// FUNCTION 147b4f2c2 FUN_147b4f2c2 body=48 status=ok
// SIG undefined FUN_147b4f2c2(void)

void FUN_147b4f2c2(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147b4f2f2 FUN_147b4f2f2 body=29 status=ok
// SIG undefined FUN_147b4f2f2(void)

undefined8 FUN_147b4f2f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147b4f30f FUN_147b4f30f body=618 status=ok
// SIG undefined FUN_147b4f30f(void)

void FUN_147b4f30f(char *param_1,longlong *param_2,int param_3,longlong *param_4,undefined8 *param_5
                  ,int param_6)

{
  char cVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong *plVar13;
  uint local_5c;
  longlong local_58;
  
  FUN_144a12820(param_2,param_3 * param_6);
  cVar1 = *param_1;
  if (cVar1 == '\x01') {
    local_58 = (longlong)*(int *)(param_1 + 4);
    plVar13 = (longlong *)0x0;
    uVar8 = 0;
LAB_147b4f35b:
    iVar5 = 0;
  }
  else {
    plVar13 = *(longlong **)(param_1 + 8);
    uVar2 = *(uint *)(plVar13 + 1);
    iVar4 = (int)plVar13[7];
    if ((int)plVar13[6] < (int)plVar13[7]) {
      iVar4 = (int)plVar13[6];
    }
    iVar5 = iVar4 + 7;
    if (-1 < iVar4) {
      iVar5 = iVar4;
    }
    uVar11 = iVar5 >> 3;
    uVar8 = (ulonglong)uVar11;
    iVar5 = iVar4 % 8;
    uVar10 = 0;
    if ((int)uVar11 < (int)uVar2 && -8 < iVar4) {
      uVar10 = *(uint *)(*plVar13 + (longlong)(int)uVar11 * 4) & 0x55555555;
    }
    bVar3 = (char)iVar5 * '\x04' & 0x1f;
    local_5c = uVar10 >> bVar3;
    if ((int)uVar11 < (int)uVar2) {
      if (uVar10 >> bVar3 == 0) {
        uVar7 = (longlong)(int)uVar11;
        do {
          if ((longlong)(int)uVar2 - 1U == uVar7) {
            local_58 = 0;
            uVar8 = (ulonglong)uVar2;
            local_5c = 0;
            goto LAB_147b4f35b;
          }
          uVar8 = uVar7 + 1;
          local_5c = *(uint *)(*plVar13 + 4 + uVar7 * 4) & 0x55555555;
          uVar7 = uVar8;
        } while (local_5c == 0);
        iVar5 = 0;
      }
      uVar2 = 0;
      if (local_5c != 0) {
        for (; (local_5c >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
        }
      }
      local_5c = local_5c >> ((byte)uVar2 & 0x1c);
      iVar5 = (uVar2 >> 2) + iVar5;
      local_58 = 0;
    }
    else {
      local_58 = 0;
    }
  }
  lVar12 = 0;
LAB_147b4f371:
  do {
    iVar4 = (int)uVar8;
    iVar9 = iVar5 + iVar4 * 8;
    do {
      if (cVar1 == '\0') {
        iVar6 = *(int *)((longlong)plVar13 + 0x3c) + 1;
        if ((int)plVar13[6] < iVar6) {
          iVar6 = (int)plVar13[6];
        }
        if (iVar6 <= iVar9) {
          return;
        }
      }
      else if (local_58 <= lVar12) {
        return;
      }
      iVar6 = iVar9;
      if (cVar1 != '\0') {
        iVar6 = (int)lVar12;
      }
      memcpy((void *)((longlong)(iVar6 * param_6) * 4 + *param_2),
             (void *)((longlong)*(int *)(*(longlong *)*param_5 + lVar12 * 4) * (longlong)param_6 * 4
                     + *param_4),(longlong)param_6 * 4);
      lVar12 = lVar12 + 1;
    } while ((cVar1 != '\0') || (uVar2 = *(uint *)(plVar13 + 1), (int)uVar2 <= iVar4));
    uVar8 = (ulonglong)iVar4;
    local_5c = local_5c & 0xfffffffa;
    if (local_5c == 0) {
      uVar7 = uVar8;
      do {
        if ((longlong)(int)uVar2 - 1U == uVar7) {
          local_5c = 0;
          uVar8 = (ulonglong)uVar2;
          iVar5 = 0;
          goto LAB_147b4f371;
        }
        uVar8 = uVar7 + 1;
        local_5c = *(uint *)(*plVar13 + 4 + uVar7 * 4) & 0x55555555;
        uVar7 = uVar8;
      } while (local_5c == 0);
      iVar5 = 0;
    }
    uVar2 = 0;
    if (local_5c != 0) {
      for (; (local_5c >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
      }
    }
    iVar5 = (uVar2 >> 2) + iVar5;
    local_5c = local_5c >> ((byte)uVar2 & 0x1c);
  } while( true );
}



// FUNCTION 147b4f579 FUN_147b4f579 body=136 status=ok
// SIG undefined FUN_147b4f579(void)

void FUN_147b4f579(int *param_1,longlong *param_2,undefined4 param_3,longlong *param_4,
                  longlong *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  
  FUN_140330574(param_2,param_3,1);
  iVar3 = *param_1;
  if (0 < (longlong)iVar3) {
    lVar6 = 0;
    do {
      if (lVar6 < (int)((longlong *)*param_5)[1]) {
        iVar5 = *(int *)(*(longlong *)*param_5 + lVar6 * 4);
        if ((iVar5 != -1) && (iVar5 < (int)param_5[1])) {
LAB_147b4f5d3:
          puVar1 = (undefined8 *)(*param_4 + lVar6 * 0x10);
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)(*param_2 + (longlong)iVar5 * 0x10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
        }
      }
      else {
        iVar5 = (int)lVar6;
        if (lVar6 < (int)param_5[1]) goto LAB_147b4f5d3;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != iVar3);
  }
  return;
}



// FUNCTION 147b4f602 FUN_147b4f602 body=31 status=ok
// SIG undefined FUN_147b4f602(void)

undefined8 FUN_147b4f602(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147b4f63a FUN_147b4f63a body=93 status=ok
// SIG undefined FUN_147b4f63a(void)

void FUN_147b4f63a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a975630;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9755c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147b4f698 FUN_147b4f698 body=93 status=ok
// SIG undefined FUN_147b4f698(void)

void FUN_147b4f698(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a975630;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9755c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147b4f6f6 FUN_147b4f6f6 body=126 status=ok
// SIG undefined FUN_147b4f6f6(void)

void FUN_147b4f6f6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a975630;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a9755c0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147b4f765. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147b4f782 FUN_147b4f782 body=21 status=ok
// SIG undefined FUN_147b4f782(void)

undefined8 FUN_147b4f782(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147b4f79a FUN_147b4f79a body=31 status=ok
// SIG undefined FUN_147b4f79a(void)

undefined8 FUN_147b4f79a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147b4f7d2 FUN_147b4f7d2 body=93 status=ok
// SIG undefined FUN_147b4f7d2(void)

void FUN_147b4f7d2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a975710;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9756a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147b4f830 FUN_147b4f830 body=93 status=ok
// SIG undefined FUN_147b4f830(void)

void FUN_147b4f830(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a975710;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9756a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147b4f88e FUN_147b4f88e body=126 status=ok
// SIG undefined FUN_147b4f88e(void)

void FUN_147b4f88e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a975710;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a9756a0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147b4f8fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147b4f91a FUN_147b4f91a body=21 status=ok
// SIG undefined FUN_147b4f91a(void)

undefined8 FUN_147b4f91a(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147b4f932 FUN_147b4f932 body=88 status=ok
// SIG undefined FUN_147b4f932(void)

void FUN_147b4f932(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x10 + (longlong)(int)param_2 * 0x38) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 0x38);
    memmove(_Dst,(void *)((longlong)_Dst + 0x38),(longlong)(int)(~param_2 + iVar2) * 0x38);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 147b4f98a FUN_147b4f98a body=62 status=ok
// SIG undefined FUN_147b4f98a(void)

void FUN_147b4f98a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147b4f9c8(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x38,8);
  }
  return;
}



// FUNCTION 147b4f9c8 FUN_147b4f9c8 body=104 status=ok
// SIG undefined FUN_147b4f9c8(void)

ulonglong FUN_147b4f9c8(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x38) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147b4f9fe;
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
LAB_147b4f9fe:
  return param_2 & 0xffffffff;
}



// FUNCTION 147b4fa30 FUN_147b4fa30 body=147 status=ok
// SIG undefined FUN_147b4fa30(void)

void FUN_147b4fa30(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147b4fac4 FUN_147b4fac4 body=147 status=ok
// SIG undefined FUN_147b4fac4(void)

void FUN_147b4fac4(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147b4fb58 FUN_147b4fb58 body=400 status=ok
// SIG undefined FUN_147b4fb58(void)

longlong * FUN_147b4fb58(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 3,(longlong)*(int *)((longlong)param_2 + 0xc) << 3
            );
  local_34 = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_34 = *(uint *)(param_2 + 1);
  }
  puVar3 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_34,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_34);
    }
  }
  else {
    local_34 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  if (local_34 == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_1474ba72a(param_2,0);
    }
  }
  else if ((((int)local_34 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x200000 < local_34 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_34;
    lVar4 = 0;
    lVar6 = 0;
    do {
      (**(code **)(*param_1 + 0x138))(param_1,*param_2 + lVar4);
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 8;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_34) ||
       (FUN_1474ba72a(param_2), 0 < (int)local_34)) {
      iVar5 = 0;
      do {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_140655806(param_2,iVar2);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = 0;
        (**(code **)(*param_1 + 0x138))(param_1);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_34);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147b4fcea FUN_147b4fcea body=414 status=ok
// SIG undefined FUN_147b4fcea(void)

longlong * FUN_147b4fcea(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 3,(longlong)*(int *)((longlong)param_2 + 0xc) << 3
            );
  local_34 = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_34 = *(uint *)(param_2 + 1);
  }
  puVar3 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_34,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_34);
    }
  }
  else {
    local_34 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  if (local_34 == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_147b50444(param_2,0);
    }
  }
  else if ((((int)local_34 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x200000 < local_34 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_34;
    lVar4 = 0;
    lVar6 = 0;
    do {
      (**(code **)(*param_1 + 0x138))(param_1,*param_2 + lVar4);
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 8;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_34) ||
       (FUN_147b50444(param_2), 0 < (int)local_34)) {
      iVar5 = 0;
      do {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_147b4fe8a(param_2,iVar2);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = 0;
        (**(code **)(*param_1 + 0x138))(param_1);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_34);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147b4fe8a FUN_147b4fe8a body=132 status=ok
// SIG undefined FUN_147b4fe8a(void)

void FUN_147b4fe8a(longlong param_1,int param_2)

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



// FUNCTION 147b4ff10 FUN_147b4ff10 body=383 status=ok
// SIG undefined FUN_147b4ff10(void)

longlong * FUN_147b4ff10(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x28,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x28);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_1406c2f92(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_147b5011a(param_2,0);
      }
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x66666 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      (**(code **)(*param_1 + 0x130))(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x28;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    FUN_147b50090(param_2);
    if (0 < (int)local_2c) {
      iVar4 = 0;
      do {
        uVar3 = FUN_147b500d6(param_2);
        (**(code **)(*param_1 + 0x130))(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147b50090 FUN_147b50090 body=68 status=ok
// SIG undefined FUN_147b50090(void)

void FUN_147b50090(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_1406c2f92(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_147b5011a(param_1,param_2);
  return;
}



// FUNCTION 147b500d6 FUN_147b500d6 body=68 status=ok
// SIG undefined FUN_147b500d6(void)

longlong FUN_147b500d6(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147b4fa30(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x28 + *param_1;
  FUN_147b5018b(lVar2,1);
  return lVar2;
}



// FUNCTION 147b5011a FUN_147b5011a body=113 status=ok
// SIG undefined FUN_147b5011a(void)

void FUN_147b5011a(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x28)) {
      uVar2 = uVar1 / 0x28 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x28,8);
  }
  return;
}



// FUNCTION 147b5018b FUN_147b5018b body=31 status=ok
// SIG undefined FUN_147b5018b(void)

void FUN_147b5018b(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[4] = 0;
    param_1 = param_1 + 5;
  }
  return;
}



// FUNCTION 147b501aa FUN_147b501aa body=383 status=ok
// SIG undefined FUN_147b501aa(void)

longlong * FUN_147b501aa(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x28,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x28);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_14063df0f(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_147b503b4(param_2,0);
      }
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x66666 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      (**(code **)(*param_1 + 0x130))(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x28;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    FUN_147b5032a(param_2);
    if (0 < (int)local_2c) {
      iVar4 = 0;
      do {
        uVar3 = FUN_147b50370(param_2);
        (**(code **)(*param_1 + 0x130))(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147b5032a FUN_147b5032a body=68 status=ok
// SIG undefined FUN_147b5032a(void)

void FUN_147b5032a(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_14063df0f(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_147b503b4(param_1,param_2);
  return;
}



// FUNCTION 147b50370 FUN_147b50370 body=68 status=ok
// SIG undefined FUN_147b50370(void)

longlong FUN_147b50370(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147b4fac4(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x28 + *param_1;
  FUN_147b50425(lVar2,1);
  return lVar2;
}



// FUNCTION 147b503b4 FUN_147b503b4 body=113 status=ok
// SIG undefined FUN_147b503b4(void)

void FUN_147b503b4(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x28)) {
      uVar2 = uVar1 / 0x28 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x28,8);
  }
  return;
}



// FUNCTION 147b50425 FUN_147b50425 body=31 status=ok
// SIG undefined FUN_147b50425(void)

void FUN_147b50425(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[4] = 0;
    param_1 = param_1 + 5;
  }
  return;
}



// FUNCTION 147b50444 FUN_147b50444 body=96 status=ok
// SIG undefined FUN_147b50444(void)

void FUN_147b50444(longlong param_1,int param_2)

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



// FUNCTION 147b504a4 FUN_147b504a4 body=359 status=ok
// SIG undefined FUN_147b504a4(void)

void FUN_147b504a4(longlong param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined1 auStack_98 [44];
  uint local_6c;
  longlong local_68;
  ulonglong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = param_1;
  if (0 < (int)param_2) {
    uVar16 = (ulonglong)param_2;
    uVar6 = 0;
    do {
      if ((uVar6 | 1) < uVar16) {
        lVar12 = uVar6 * 0x10;
        puVar14 = &DAT_149dfb77a;
        if (*(int *)(param_1 + 8 + lVar12) != 0) {
          puVar14 = *(undefined2 **)(param_1 + lVar12);
        }
        lVar10 = (uVar6 | 1) * 0x10;
        puVar15 = &DAT_149dfb77a;
        if (*(int *)(param_1 + 8 + lVar10) != 0) {
          puVar15 = *(undefined2 **)(param_1 + lVar10);
        }
        puVar13 = (undefined8 *)(lVar12 + param_1);
        puVar11 = (undefined8 *)(lVar10 + param_1);
        lVar12 = 0;
        while( true ) {
          uVar1 = *(ushort *)((longlong)puVar15 + lVar12);
          uVar7 = (uint)uVar1;
          uVar2 = *(ushort *)((longlong)puVar14 + lVar12);
          uVar8 = (uint)uVar2;
          if (uVar1 != uVar2) break;
          if (uVar1 == 0) goto LAB_147b5057d;
LAB_147b5053d:
          lVar12 = lVar12 + 2;
        }
        if ((uVar2 | uVar1) < 0x80) {
          uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar1];
          uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
          if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_147b5053d;
        }
        if ((int)(uVar7 - uVar8) < 0) {
          uVar3 = *puVar13;
          uVar4 = puVar13[1];
          uVar5 = puVar11[1];
          *puVar13 = *puVar11;
          puVar13[1] = uVar5;
          local_58._0_4_ = (undefined4)uVar3;
          local_58._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar4;
          uStack_50._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          *(undefined4 *)puVar11 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar11 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_50._4_4_;
          local_58 = uVar3;
          uStack_50 = uVar4;
        }
      }
LAB_147b5057d:
      uVar6 = uVar6 + 2;
    } while ((int)uVar6 < (int)param_2);
    local_60 = uVar16;
    if (2 < (int)param_2) {
      uVar7 = 2;
      local_6c = param_2;
      do {
        uVar8 = uVar7 * 2;
        lVar10 = 0;
        lVar12 = local_68;
        uVar17 = local_6c;
        do {
          uVar9 = uVar17;
          if ((int)uVar8 <= (int)uVar17) {
            uVar9 = uVar8;
          }
          FUN_147b5060c(lVar12,uVar7,uVar9);
          lVar10 = lVar10 + (int)uVar8;
          lVar12 = lVar12 + (longlong)(int)uVar8 * 0x10;
          uVar17 = uVar17 + uVar7 * -2;
        } while (lVar10 < (longlong)uVar16);
        uVar7 = uVar8;
      } while ((int)uVar8 < (int)local_6c);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5060c FUN_147b5060c body=616 status=ok
// SIG undefined FUN_147b5060c(void)

void FUN_147b5060c(longlong param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  undefined2 *puVar11;
  int iVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  uint uVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined2 *puVar20;
  longlong lVar21;
  ulonglong uVar22;
  undefined1 auStack_98 [40];
  int local_70;
  int local_6c;
  longlong local_68;
  int local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_3 <= param_2 || param_2 < 1) {
LAB_147b5083d:
    if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
      local_70 = param_3;
      local_68 = param_1;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  iVar8 = 0;
  iVar10 = param_2;
  do {
    local_6c = iVar10;
    puVar18 = (undefined8 *)((longlong)local_6c * 0x10 + param_1);
    iVar17 = 0;
    uVar13 = local_6c - iVar8;
    if (uVar13 != 0 && iVar8 <= local_6c) {
      puVar11 = &DAT_149dfb77a;
      if (*(int *)(puVar18 + 1) != 0) {
        puVar11 = (undefined2 *)*puVar18;
      }
      lVar21 = (longlong)iVar8 * 0x10 + param_1;
      uVar22 = (ulonglong)uVar13;
      iVar10 = 0;
      do {
        uVar22 = uVar22 >> 1;
        uVar16 = (uint)uVar22 + iVar10;
        lVar9 = (ulonglong)uVar16 * 0x10;
        puVar20 = &DAT_149dfb77a;
        if (*(int *)(lVar21 + 8 + lVar9) != 0) {
          puVar20 = *(undefined2 **)(lVar21 + lVar9);
        }
        iVar17 = uVar16 + (uVar13 & 1);
        lVar9 = 0;
        while( true ) {
          uVar2 = *(ushort *)((longlong)puVar11 + lVar9);
          uVar3 = *(ushort *)((longlong)puVar20 + lVar9);
          if (uVar2 != uVar3) break;
          if (uVar2 == 0) goto LAB_147b50702;
LAB_147b506ce:
          lVar9 = lVar9 + 2;
        }
        if ((uVar3 | uVar2) < 0x80) {
          if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[(uint)uVar3]) goto LAB_147b506ce;
          iVar12 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
        }
        else {
          iVar12 = (uint)uVar2 - (uint)uVar3;
        }
        if (iVar12 < 0) {
          iVar17 = iVar10;
        }
LAB_147b50702:
        bVar4 = 1 < uVar13;
        uVar13 = (uint)uVar22;
        iVar10 = iVar17;
      } while (bVar4);
    }
    iVar17 = iVar17 + iVar8;
    iVar8 = local_6c - iVar17;
    if (iVar8 == 0 || local_6c < iVar17) goto LAB_147b5083d;
    if (param_3 - local_6c == 0 || param_3 < local_6c) {
      iVar12 = 0;
      iVar10 = local_6c;
    }
    else {
      puVar14 = (undefined8 *)((longlong)iVar17 * 0x10 + param_1);
      puVar11 = &DAT_149dfb77a;
      if (*(int *)(puVar14 + 1) != 0) {
        puVar11 = (undefined2 *)*puVar14;
      }
      iVar12 = 0;
      uVar13 = param_3 - local_6c;
      do {
        uVar16 = (uVar13 >> 1) + iVar12;
        puVar20 = &DAT_149dfb77a;
        if (*(int *)(puVar18 + (ulonglong)uVar16 * 2 + 1) != 0) {
          puVar20 = (undefined2 *)puVar18[(ulonglong)uVar16 * 2];
        }
        lVar21 = 0;
        while( true ) {
          uVar2 = *(ushort *)((longlong)puVar20 + lVar21);
          uVar3 = *(ushort *)((longlong)puVar11 + lVar21);
          if (uVar2 != uVar3) break;
          if (uVar2 == 0) goto LAB_147b507bf;
LAB_147b5078a:
          lVar21 = lVar21 + 2;
        }
        if ((uVar3 | uVar2) < 0x80) {
          if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[(uint)uVar3]) goto LAB_147b5078a;
          iVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
        }
        else {
          iVar10 = (uint)uVar2 - (uint)uVar3;
        }
        if (iVar10 < 0) {
          iVar12 = uVar16 + (uVar13 & 1);
        }
LAB_147b507bf:
        bVar4 = 1 < uVar13;
        uVar13 = uVar13 >> 1;
      } while (bVar4);
      iVar10 = local_6c + iVar12;
      local_5c = iVar8;
      if (0 < iVar12) {
        puVar19 = puVar14 + (longlong)(iVar10 - iVar17) * 2;
        puVar18 = puVar14 + (longlong)iVar8 * 2;
        puVar15 = puVar14 + (longlong)iVar8 * 2;
        do {
          while( true ) {
            puVar1 = puVar18 + 2;
            uVar5 = *puVar14;
            uVar6 = puVar14[1];
            uVar7 = puVar18[1];
            *puVar14 = *puVar18;
            puVar14[1] = uVar7;
            puVar14 = puVar14 + 2;
            local_58._0_4_ = (undefined4)uVar5;
            local_58._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
            uStack_50._0_4_ = (undefined4)uVar6;
            uStack_50._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
            *(undefined4 *)puVar18 = (undefined4)local_58;
            *(undefined4 *)((longlong)puVar18 + 4) = local_58._4_4_;
            *(undefined4 *)(puVar18 + 1) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)puVar18 + 0xc) = uStack_50._4_4_;
            if (puVar1 == puVar19) break;
            puVar18 = puVar1;
            if (puVar14 == puVar15) {
              puVar15 = puVar1;
            }
          }
          puVar18 = puVar15;
          local_58 = uVar5;
          uStack_50 = uVar6;
        } while (puVar14 != puVar15);
      }
    }
    if ((param_3 <= iVar10) || (iVar8 = iVar12 + iVar17 + 1, iVar10 <= iVar8)) goto LAB_147b5083d;
  } while( true );
}



// FUNCTION 147b50875 FUN_147b50875 body=359 status=ok
// SIG undefined FUN_147b50875(void)

void FUN_147b50875(longlong param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined1 auStack_98 [44];
  uint local_6c;
  longlong local_68;
  ulonglong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = param_1;
  if (0 < (int)param_2) {
    uVar16 = (ulonglong)param_2;
    uVar6 = 0;
    do {
      if ((uVar6 | 1) < uVar16) {
        lVar10 = (uVar6 | 1) * 0x10;
        puVar14 = &DAT_149dfb77a;
        if (*(int *)(param_1 + 8 + lVar10) != 0) {
          puVar14 = *(undefined2 **)(param_1 + lVar10);
        }
        lVar12 = uVar6 * 0x10;
        puVar15 = &DAT_149dfb77a;
        if (*(int *)(param_1 + 8 + lVar12) != 0) {
          puVar15 = *(undefined2 **)(param_1 + lVar12);
        }
        puVar13 = (undefined8 *)(lVar12 + param_1);
        puVar11 = (undefined8 *)(lVar10 + param_1);
        lVar10 = 0;
        while( true ) {
          uVar1 = *(ushort *)((longlong)puVar15 + lVar10);
          uVar7 = (uint)uVar1;
          uVar2 = *(ushort *)((longlong)puVar14 + lVar10);
          uVar8 = (uint)uVar2;
          if (uVar1 != uVar2) break;
          if (uVar1 == 0) goto LAB_147b5094e;
LAB_147b5090e:
          lVar10 = lVar10 + 2;
        }
        if ((uVar2 | uVar1) < 0x80) {
          uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar1];
          uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
          if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_147b5090e;
        }
        if ((int)(uVar7 - uVar8) < 0) {
          uVar3 = *puVar13;
          uVar4 = puVar13[1];
          uVar5 = puVar11[1];
          *puVar13 = *puVar11;
          puVar13[1] = uVar5;
          local_58._0_4_ = (undefined4)uVar3;
          local_58._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar4;
          uStack_50._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          *(undefined4 *)puVar11 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar11 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_50._4_4_;
          local_58 = uVar3;
          uStack_50 = uVar4;
        }
      }
LAB_147b5094e:
      uVar6 = uVar6 + 2;
    } while ((int)uVar6 < (int)param_2);
    local_60 = uVar16;
    if (2 < (int)param_2) {
      uVar7 = 2;
      local_6c = param_2;
      do {
        uVar8 = uVar7 * 2;
        lVar12 = 0;
        lVar10 = local_68;
        uVar17 = local_6c;
        do {
          uVar9 = uVar17;
          if ((int)uVar8 <= (int)uVar17) {
            uVar9 = uVar8;
          }
          FUN_147b509dd(lVar10,uVar7,uVar9);
          lVar12 = lVar12 + (int)uVar8;
          lVar10 = lVar10 + (longlong)(int)uVar8 * 0x10;
          uVar17 = uVar17 + uVar7 * -2;
        } while (lVar12 < (longlong)uVar16);
        uVar7 = uVar8;
      } while ((int)uVar8 < (int)local_6c);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b509dd FUN_147b509dd body=616 status=ok
// SIG undefined FUN_147b509dd(void)

void FUN_147b509dd(longlong param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  undefined2 *puVar11;
  int iVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  uint uVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined2 *puVar20;
  longlong lVar21;
  ulonglong uVar22;
  undefined1 auStack_98 [40];
  int local_70;
  int local_6c;
  longlong local_68;
  int local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_3 <= param_2 || param_2 < 1) {
LAB_147b50c0e:
    if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
      local_70 = param_3;
      local_68 = param_1;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  iVar8 = 0;
  iVar10 = param_2;
  do {
    local_6c = iVar10;
    puVar18 = (undefined8 *)((longlong)local_6c * 0x10 + param_1);
    iVar17 = 0;
    uVar13 = local_6c - iVar8;
    if (uVar13 != 0 && iVar8 <= local_6c) {
      puVar11 = &DAT_149dfb77a;
      if (*(int *)(puVar18 + 1) != 0) {
        puVar11 = (undefined2 *)*puVar18;
      }
      lVar21 = (longlong)iVar8 * 0x10 + param_1;
      uVar22 = (ulonglong)uVar13;
      iVar10 = 0;
      do {
        uVar22 = uVar22 >> 1;
        uVar16 = (uint)uVar22 + iVar10;
        lVar9 = (ulonglong)uVar16 * 0x10;
        puVar20 = &DAT_149dfb77a;
        if (*(int *)(lVar21 + 8 + lVar9) != 0) {
          puVar20 = *(undefined2 **)(lVar21 + lVar9);
        }
        iVar17 = uVar16 + (uVar13 & 1);
        lVar9 = 0;
        while( true ) {
          uVar2 = *(ushort *)((longlong)puVar20 + lVar9);
          uVar3 = *(ushort *)((longlong)puVar11 + lVar9);
          if (uVar2 != uVar3) break;
          if (uVar2 == 0) goto LAB_147b50ad3;
LAB_147b50a9f:
          lVar9 = lVar9 + 2;
        }
        if ((uVar3 | uVar2) < 0x80) {
          if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[(uint)uVar3]) goto LAB_147b50a9f;
          iVar12 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
        }
        else {
          iVar12 = (uint)uVar2 - (uint)uVar3;
        }
        if (iVar12 < 0) {
          iVar17 = iVar10;
        }
LAB_147b50ad3:
        bVar4 = 1 < uVar13;
        uVar13 = (uint)uVar22;
        iVar10 = iVar17;
      } while (bVar4);
    }
    iVar17 = iVar17 + iVar8;
    iVar8 = local_6c - iVar17;
    if (iVar8 == 0 || local_6c < iVar17) goto LAB_147b50c0e;
    if (param_3 - local_6c == 0 || param_3 < local_6c) {
      iVar12 = 0;
      iVar10 = local_6c;
    }
    else {
      puVar14 = (undefined8 *)((longlong)iVar17 * 0x10 + param_1);
      puVar11 = &DAT_149dfb77a;
      if (*(int *)(puVar14 + 1) != 0) {
        puVar11 = (undefined2 *)*puVar14;
      }
      iVar12 = 0;
      uVar13 = param_3 - local_6c;
      do {
        uVar16 = (uVar13 >> 1) + iVar12;
        puVar20 = &DAT_149dfb77a;
        if (*(int *)(puVar18 + (ulonglong)uVar16 * 2 + 1) != 0) {
          puVar20 = (undefined2 *)puVar18[(ulonglong)uVar16 * 2];
        }
        lVar21 = 0;
        while( true ) {
          uVar2 = *(ushort *)((longlong)puVar11 + lVar21);
          uVar3 = *(ushort *)((longlong)puVar20 + lVar21);
          if (uVar2 != uVar3) break;
          if (uVar2 == 0) goto LAB_147b50b90;
LAB_147b50b5b:
          lVar21 = lVar21 + 2;
        }
        if ((uVar3 | uVar2) < 0x80) {
          if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[(uint)uVar3]) goto LAB_147b50b5b;
          iVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
        }
        else {
          iVar10 = (uint)uVar2 - (uint)uVar3;
        }
        if (iVar10 < 0) {
          iVar12 = uVar16 + (uVar13 & 1);
        }
LAB_147b50b90:
        bVar4 = 1 < uVar13;
        uVar13 = uVar13 >> 1;
      } while (bVar4);
      iVar10 = local_6c + iVar12;
      local_5c = iVar8;
      if (0 < iVar12) {
        puVar19 = puVar14 + (longlong)(iVar10 - iVar17) * 2;
        puVar18 = puVar14 + (longlong)iVar8 * 2;
        puVar15 = puVar14 + (longlong)iVar8 * 2;
        do {
          while( true ) {
            puVar1 = puVar18 + 2;
            uVar5 = *puVar14;
            uVar6 = puVar14[1];
            uVar7 = puVar18[1];
            *puVar14 = *puVar18;
            puVar14[1] = uVar7;
            puVar14 = puVar14 + 2;
            local_58._0_4_ = (undefined4)uVar5;
            local_58._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
            uStack_50._0_4_ = (undefined4)uVar6;
            uStack_50._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
            *(undefined4 *)puVar18 = (undefined4)local_58;
            *(undefined4 *)((longlong)puVar18 + 4) = local_58._4_4_;
            *(undefined4 *)(puVar18 + 1) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)puVar18 + 0xc) = uStack_50._4_4_;
            if (puVar1 == puVar19) break;
            puVar18 = puVar1;
            if (puVar14 == puVar15) {
              puVar15 = puVar1;
            }
          }
          puVar18 = puVar15;
          local_58 = uVar5;
          uStack_50 = uVar6;
        } while (puVar14 != puVar15);
      }
    }
    if ((param_3 <= iVar10) || (iVar8 = iVar12 + iVar17 + 1, iVar10 <= iVar8)) goto LAB_147b50c0e;
  } while( true );
}



// FUNCTION 147b50c46 FUN_147b50c46 body=548 status=ok
// SIG undefined FUN_147b50c46(void)

void FUN_147b50c46(longlong param_1,uint param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  longlong *plVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte bVar12;
  int iVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  bool bVar17;
  float fVar18;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [190];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = (ulonglong)param_2 + param_1 + -1;
    local_348 = param_1;
    fVar18 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar18 + fVar18);
    plVar9 = &local_348;
    do {
      pbVar3 = (byte *)*plVar9;
      pbVar10 = (byte *)plVar9[1];
      iVar13 = (int)plVar9[2];
      iVar5 = (int)pbVar10 - (int)pbVar3;
      pbVar7 = pbVar10;
      pbVar14 = pbVar3;
      if (iVar13 != 0) {
LAB_147b50d00:
        if (8 < (int)(iVar5 + 1U)) {
          uVar6 = iVar5 + 1U >> 1;
          bVar12 = pbVar3[uVar6];
          pbVar3[uVar6] = *pbVar3;
          *pbVar3 = bVar12;
          pbVar16 = pbVar10 + 1;
          pbVar4 = pbVar3;
          do {
            pbVar2 = pbVar4 + 1;
            pbVar11 = pbVar4 + 1;
            do {
              pbVar4 = pbVar11;
              pbVar8 = pbVar2;
              if (pbVar10 < pbVar4) break;
              pbVar2 = pbVar8 + 1;
              pbVar11 = pbVar4 + 1;
            } while (*pbVar4 <= *pbVar3);
            pbVar2 = pbVar16 + -2;
            do {
              pbVar11 = pbVar16;
              pbVar15 = pbVar2;
              pbVar16 = pbVar11 + -1;
              if (pbVar16 <= pbVar3) break;
              pbVar2 = pbVar15 + -1;
            } while (*pbVar3 <= *pbVar16);
            if (pbVar16 < pbVar4) goto LAB_147b50d77;
            bVar12 = *pbVar4;
            *pbVar4 = *pbVar16;
            *pbVar16 = bVar12;
          } while( true );
        }
        if (pbVar3 < pbVar10) {
          do {
            pbVar7 = pbVar3;
            if (pbVar3 + 1 <= pbVar10) {
              bVar12 = *pbVar3;
              pbVar14 = pbVar3 + 1;
              do {
                bVar1 = *pbVar14;
                bVar17 = bVar12 < bVar1;
                if (bVar12 <= bVar1) {
                  bVar12 = bVar1;
                }
                if (bVar17) {
                  pbVar7 = pbVar14;
                }
                pbVar14 = pbVar14 + 1;
              } while (pbVar14 <= pbVar10);
            }
            bVar12 = *pbVar7;
            *pbVar7 = *pbVar10;
            *pbVar10 = bVar12;
            pbVar10 = pbVar10 + -1;
          } while (pbVar3 < pbVar10);
        }
        goto LAB_147b50e49;
      }
LAB_147b50e5e:
      FUN_147b50e6b(pbVar3);
LAB_147b50e49:
      plVar9 = plVar9 + -3;
    } while (&local_348 <= plVar9);
  }
  if ((local_40 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_147b50d77:
  bVar12 = *pbVar3;
  *pbVar3 = *pbVar16;
  *pbVar16 = bVar12;
  iVar13 = iVar13 + -1;
  pbVar11 = pbVar11 + -2;
  if ((longlong)pbVar15 - (longlong)pbVar14 < (longlong)pbVar7 - (longlong)pbVar8) {
    if (pbVar4 < pbVar10) {
      *plVar9 = (longlong)pbVar4;
      plVar9[1] = (longlong)pbVar10;
      *(int *)(plVar9 + 2) = iVar13;
      plVar9 = plVar9 + 3;
    }
    pbVar8 = pbVar3;
    if (pbVar16 <= pbVar3 + 1) goto LAB_147b50e49;
  }
  else {
    if (pbVar3 + 1 < pbVar16) {
      *plVar9 = (longlong)pbVar3;
      plVar9[1] = (longlong)pbVar11;
      *(int *)(plVar9 + 2) = iVar13;
      plVar9 = plVar9 + 3;
    }
    pbVar3 = pbVar4;
    pbVar11 = pbVar10;
    pbVar15 = pbVar10;
    if (pbVar10 <= pbVar4) goto LAB_147b50e49;
  }
  iVar5 = (int)pbVar15 - (int)pbVar8;
  pbVar10 = pbVar11;
  pbVar7 = pbVar15;
  pbVar14 = pbVar8;
  if (iVar13 == 0) goto LAB_147b50e5e;
  goto LAB_147b50d00;
}



// FUNCTION 147b50e6b FUN_147b50e6b body=279 status=ok
// SIG undefined FUN_147b50e6b(void)

void FUN_147b50e6b(undefined1 *param_1,uint param_2)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  if (param_2 != 0) {
    iVar3 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar7 = iVar3;
joined_r0x000147b50e8c:
    do {
      iVar6 = iVar3 * 2 + 1;
      if (iVar6 < (int)param_2) {
        lVar9 = (longlong)(iVar3 * 2) + 2;
        iVar8 = (int)lVar9;
        if ((iVar8 < (int)param_2) && ((byte)param_1[iVar6] <= (byte)param_1[lVar9])) {
          iVar6 = iVar8;
        }
        bVar1 = param_1[iVar3];
        if (bVar1 < (byte)param_1[iVar6]) {
          param_1[iVar3] = param_1[iVar6];
          param_1[iVar6] = bVar1;
          iVar3 = iVar6;
          goto joined_r0x000147b50e8c;
        }
      }
      bVar10 = iVar7 != 0;
      iVar3 = iVar7 + -1;
      iVar7 = iVar3;
    } while (bVar10);
    if (1 < (int)param_2) {
      uVar4 = (ulonglong)param_2;
      uVar2 = *param_1;
      *param_1 = param_1[uVar4 - 1];
      param_1[uVar4 - 1] = uVar2;
      if (param_2 != 2) {
        do {
          uVar5 = uVar4 - 1;
          iVar3 = 0;
          iVar6 = 1;
          iVar7 = 0;
          do {
            lVar9 = (longlong)iVar3 + 2;
            iVar8 = iVar6;
            if ((lVar9 < (longlong)uVar5) && ((byte)param_1[iVar6] <= (byte)param_1[lVar9])) {
              iVar8 = (int)lVar9;
            }
            bVar1 = param_1[iVar7];
            if ((byte)param_1[iVar8] <= bVar1) break;
            param_1[iVar7] = param_1[iVar8];
            param_1[iVar8] = bVar1;
            iVar3 = iVar8 * 2;
            iVar6 = iVar8 * 2 + 1;
            iVar7 = iVar8;
          } while ((longlong)iVar6 < (longlong)uVar5);
          uVar2 = *param_1;
          *param_1 = param_1[uVar4 - 2];
          param_1[uVar4 - 2] = uVar2;
          uVar4 = uVar5;
        } while (2 < uVar5);
      }
    }
  }
  return;
}



// FUNCTION 147b50f82 FUN_147b50f82 body=548 status=ok
// SIG undefined FUN_147b50f82(void)

void FUN_147b50f82(longlong param_1,uint param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  longlong *plVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte bVar11;
  int iVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  float fVar16;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [190];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = (ulonglong)param_2 + param_1 + -1;
    local_348 = param_1;
    fVar16 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar16 + fVar16);
    plVar8 = &local_348;
    do {
      pbVar2 = (byte *)*plVar8;
      pbVar9 = (byte *)plVar8[1];
      iVar12 = (int)plVar8[2];
      iVar4 = (int)pbVar9 - (int)pbVar2;
      pbVar6 = pbVar9;
      pbVar13 = pbVar2;
      if (iVar12 != 0) {
LAB_147b5103c:
        if (8 < (int)(iVar4 + 1U)) {
          uVar5 = iVar4 + 1U >> 1;
          bVar11 = pbVar2[uVar5];
          pbVar2[uVar5] = *pbVar2;
          *pbVar2 = bVar11;
          pbVar15 = pbVar9 + 1;
          pbVar3 = pbVar2;
          do {
            pbVar1 = pbVar3 + 1;
            pbVar10 = pbVar3 + 1;
            do {
              pbVar3 = pbVar10;
              pbVar7 = pbVar1;
              if (pbVar9 < pbVar3) break;
              pbVar1 = pbVar7 + 1;
              pbVar10 = pbVar3 + 1;
            } while (*pbVar2 <= *pbVar3);
            pbVar1 = pbVar15 + -2;
            do {
              pbVar10 = pbVar15;
              pbVar14 = pbVar1;
              pbVar15 = pbVar10 + -1;
              if (pbVar15 <= pbVar2) break;
              pbVar1 = pbVar14 + -1;
            } while (*pbVar15 <= *pbVar2);
            if (pbVar15 < pbVar3) goto LAB_147b510b3;
            bVar11 = *pbVar3;
            *pbVar3 = *pbVar15;
            *pbVar15 = bVar11;
          } while( true );
        }
        if (pbVar2 < pbVar9) {
          do {
            pbVar6 = pbVar2;
            if (pbVar2 + 1 <= pbVar9) {
              bVar11 = *pbVar2;
              pbVar13 = pbVar2 + 1;
              do {
                if (*pbVar13 < bVar11) {
                  pbVar6 = pbVar13;
                  bVar11 = *pbVar13;
                }
                pbVar13 = pbVar13 + 1;
              } while (pbVar13 <= pbVar9);
            }
            bVar11 = *pbVar6;
            *pbVar6 = *pbVar9;
            *pbVar9 = bVar11;
            pbVar9 = pbVar9 + -1;
          } while (pbVar2 < pbVar9);
        }
        goto LAB_147b51185;
      }
LAB_147b5119a:
      FUN_147b511a7(pbVar2);
LAB_147b51185:
      plVar8 = plVar8 + -3;
    } while (&local_348 <= plVar8);
  }
  if ((local_40 ^ (ulonglong)auStack_368) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_147b510b3:
  bVar11 = *pbVar2;
  *pbVar2 = *pbVar15;
  *pbVar15 = bVar11;
  iVar12 = iVar12 + -1;
  pbVar10 = pbVar10 + -2;
  if ((longlong)pbVar14 - (longlong)pbVar13 < (longlong)pbVar6 - (longlong)pbVar7) {
    if (pbVar3 < pbVar9) {
      *plVar8 = (longlong)pbVar3;
      plVar8[1] = (longlong)pbVar9;
      *(int *)(plVar8 + 2) = iVar12;
      plVar8 = plVar8 + 3;
    }
    pbVar7 = pbVar2;
    if (pbVar15 <= pbVar2 + 1) goto LAB_147b51185;
  }
  else {
    if (pbVar2 + 1 < pbVar15) {
      *plVar8 = (longlong)pbVar2;
      plVar8[1] = (longlong)pbVar10;
      *(int *)(plVar8 + 2) = iVar12;
      plVar8 = plVar8 + 3;
    }
    pbVar2 = pbVar3;
    pbVar10 = pbVar9;
    pbVar14 = pbVar9;
    if (pbVar9 <= pbVar3) goto LAB_147b51185;
  }
  iVar4 = (int)pbVar14 - (int)pbVar7;
  pbVar9 = pbVar10;
  pbVar6 = pbVar14;
  pbVar13 = pbVar7;
  if (iVar12 == 0) goto LAB_147b5119a;
  goto LAB_147b5103c;
}



// FUNCTION 147b511a7 FUN_147b511a7 body=279 status=ok
// SIG undefined FUN_147b511a7(void)

void FUN_147b511a7(undefined1 *param_1,uint param_2)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  if (param_2 != 0) {
    iVar3 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar7 = iVar3;
joined_r0x000147b511c8:
    do {
      iVar6 = iVar3 * 2 + 1;
      if (iVar6 < (int)param_2) {
        lVar9 = (longlong)(iVar3 * 2) + 2;
        iVar8 = (int)lVar9;
        if ((iVar8 < (int)param_2) && ((byte)param_1[lVar9] <= (byte)param_1[iVar6])) {
          iVar6 = iVar8;
        }
        bVar1 = param_1[iVar3];
        if ((byte)param_1[iVar6] < bVar1) {
          param_1[iVar3] = param_1[iVar6];
          param_1[iVar6] = bVar1;
          iVar3 = iVar6;
          goto joined_r0x000147b511c8;
        }
      }
      bVar10 = iVar7 != 0;
      iVar3 = iVar7 + -1;
      iVar7 = iVar3;
    } while (bVar10);
    if (1 < (int)param_2) {
      uVar4 = (ulonglong)param_2;
      uVar2 = *param_1;
      *param_1 = param_1[uVar4 - 1];
      param_1[uVar4 - 1] = uVar2;
      if (param_2 != 2) {
        do {
          uVar5 = uVar4 - 1;
          iVar3 = 0;
          iVar6 = 1;
          iVar7 = 0;
          do {
            lVar9 = (longlong)iVar3 + 2;
            iVar8 = iVar6;
            if ((lVar9 < (longlong)uVar5) && ((byte)param_1[lVar9] <= (byte)param_1[iVar6])) {
              iVar8 = (int)lVar9;
            }
            bVar1 = param_1[iVar7];
            if (bVar1 <= (byte)param_1[iVar8]) break;
            param_1[iVar7] = param_1[iVar8];
            param_1[iVar8] = bVar1;
            iVar3 = iVar8 * 2;
            iVar6 = iVar8 * 2 + 1;
            iVar7 = iVar8;
          } while ((longlong)iVar6 < (longlong)uVar5);
          uVar2 = *param_1;
          *param_1 = param_1[uVar4 - 2];
          param_1[uVar4 - 2] = uVar2;
          uVar4 = uVar5;
        } while (2 < uVar5);
      }
    }
  }
  return;
}



// FUNCTION 147b512be FUN_147b512be body=148 status=ok
// SIG undefined FUN_147b512be(void)

void FUN_147b512be(longlong param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  if (0 < (int)param_2) {
    uVar9 = (ulonglong)param_2;
    uVar5 = 1;
    do {
      if (uVar5 < uVar9) {
        bVar1 = *(byte *)(param_1 + -1 + uVar5);
        if (*(byte *)(param_1 + uVar5) < bVar1) {
          *(byte *)(param_1 + -1 + uVar5) = *(byte *)(param_1 + uVar5);
          *(byte *)(param_1 + uVar5) = bVar1;
        }
      }
      uVar6 = uVar5 + 1;
      uVar5 = uVar5 + 2;
    } while (uVar6 < uVar9);
    if (2 < (int)param_2) {
      uVar7 = 2;
      do {
        uVar2 = uVar7 * 2;
        lVar8 = 0;
        uVar3 = param_2;
        do {
          uVar4 = uVar3;
          if ((int)uVar2 <= (int)uVar3) {
            uVar4 = uVar2;
          }
          FUN_147b51352(param_1 + lVar8,uVar7,uVar4);
          lVar8 = lVar8 + (int)uVar2;
          uVar3 = uVar3 + uVar7 * -2;
        } while (lVar8 < (longlong)uVar9);
        uVar7 = uVar2;
      } while ((int)uVar2 < (int)param_2);
    }
  }
  return;
}



// FUNCTION 147b51352 FUN_147b51352 body=316 status=ok
// SIG undefined FUN_147b51352(void)

void FUN_147b51352(longlong param_1,int param_2,int param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  byte *pbVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  
  if (param_2 < param_3 && 0 < param_2) {
    iVar6 = 0;
    while( true ) {
      uVar12 = 0;
      uVar8 = param_2 - iVar6;
      if (uVar8 != 0 && iVar6 <= param_2) {
        uVar12 = 0;
        uVar10 = (ulonglong)uVar8;
        do {
          uVar10 = uVar10 >> 1;
          if (*(byte *)(param_1 + iVar6 + uVar12 + uVar10) <= *(byte *)(param_1 + param_2)) {
            uVar12 = (int)(uVar12 + uVar10) + (uVar8 & 1);
          }
          bVar1 = 1 < uVar8;
          uVar8 = (uint)uVar10;
        } while (bVar1);
      }
      iVar5 = iVar6 + uVar12;
      iVar3 = param_2 - iVar5;
      if (iVar3 == 0 || param_2 < iVar5) break;
      uVar8 = param_3 - param_2;
      if (uVar8 == 0 || param_3 < param_2) {
        uVar9 = 0;
      }
      else {
        pbVar11 = (byte *)(iVar5 + param_1);
        bVar2 = *pbVar11;
        uVar9 = 0;
        uVar10 = (ulonglong)uVar8;
        do {
          uVar10 = uVar10 >> 1;
          if (((byte *)(param_1 + param_2))[uVar9 + uVar10] < bVar2) {
            uVar9 = (int)(uVar9 + uVar10) + (uVar8 & 1);
          }
          bVar1 = 1 < uVar8;
          uVar8 = (uint)uVar10;
        } while (bVar1);
        param_2 = param_2 + uVar9;
        if (0 < (int)uVar9) {
          pbVar13 = pbVar11 + iVar3;
          pbVar4 = (byte *)((longlong)(int)uVar12 + (longlong)iVar6 + param_1 + 1);
          pbVar14 = pbVar13;
          do {
            pbVar7 = pbVar14 + 1;
            pbVar4[-1] = *pbVar14;
            *pbVar14 = bVar2;
            if (pbVar7 == pbVar11 + (param_2 - iVar5)) {
              pbVar7 = pbVar13;
              if (pbVar4 == pbVar13) break;
            }
            else if (pbVar4 == pbVar13) {
              pbVar13 = pbVar7;
            }
            bVar2 = *pbVar4;
            pbVar4 = pbVar4 + 1;
            pbVar14 = pbVar7;
          } while( true );
        }
      }
      if (param_3 <= param_2) {
        return;
      }
      iVar6 = iVar5 + uVar9 + 1;
      if (param_2 <= iVar6) {
        return;
      }
    }
  }
  return;
}



// FUNCTION 147b5148e FUN_147b5148e body=148 status=ok
// SIG undefined FUN_147b5148e(void)

void FUN_147b5148e(longlong param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  if (0 < (int)param_2) {
    uVar9 = (ulonglong)param_2;
    uVar5 = 1;
    do {
      if (uVar5 < uVar9) {
        bVar1 = *(byte *)(param_1 + -1 + uVar5);
        if (bVar1 < *(byte *)(param_1 + uVar5)) {
          *(byte *)(param_1 + -1 + uVar5) = *(byte *)(param_1 + uVar5);
          *(byte *)(param_1 + uVar5) = bVar1;
        }
      }
      uVar6 = uVar5 + 1;
      uVar5 = uVar5 + 2;
    } while (uVar6 < uVar9);
    if (2 < (int)param_2) {
      uVar7 = 2;
      do {
        uVar2 = uVar7 * 2;
        lVar8 = 0;
        uVar3 = param_2;
        do {
          uVar4 = uVar3;
          if ((int)uVar2 <= (int)uVar3) {
            uVar4 = uVar2;
          }
          FUN_147b51522(param_1 + lVar8,uVar7,uVar4);
          lVar8 = lVar8 + (int)uVar2;
          uVar3 = uVar3 + uVar7 * -2;
        } while (lVar8 < (longlong)uVar9);
        uVar7 = uVar2;
      } while ((int)uVar2 < (int)param_2);
    }
  }
  return;
}



// FUNCTION 147b51522 FUN_147b51522 body=316 status=ok
// SIG undefined FUN_147b51522(void)

void FUN_147b51522(longlong param_1,int param_2,int param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  byte *pbVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  
  if (param_2 < param_3 && 0 < param_2) {
    iVar6 = 0;
    while( true ) {
      uVar12 = 0;
      uVar8 = param_2 - iVar6;
      if (uVar8 != 0 && iVar6 <= param_2) {
        uVar12 = 0;
        uVar10 = (ulonglong)uVar8;
        do {
          uVar10 = uVar10 >> 1;
          if (*(byte *)(param_1 + param_2) <= *(byte *)(param_1 + iVar6 + uVar12 + uVar10)) {
            uVar12 = (int)(uVar12 + uVar10) + (uVar8 & 1);
          }
          bVar1 = 1 < uVar8;
          uVar8 = (uint)uVar10;
        } while (bVar1);
      }
      iVar5 = iVar6 + uVar12;
      iVar3 = param_2 - iVar5;
      if (iVar3 == 0 || param_2 < iVar5) break;
      uVar8 = param_3 - param_2;
      if (uVar8 == 0 || param_3 < param_2) {
        uVar9 = 0;
      }
      else {
        pbVar11 = (byte *)(iVar5 + param_1);
        bVar2 = *pbVar11;
        uVar9 = 0;
        uVar10 = (ulonglong)uVar8;
        do {
          uVar10 = uVar10 >> 1;
          if (bVar2 < ((byte *)(param_1 + param_2))[uVar9 + uVar10]) {
            uVar9 = (int)(uVar9 + uVar10) + (uVar8 & 1);
          }
          bVar1 = 1 < uVar8;
          uVar8 = (uint)uVar10;
        } while (bVar1);
        param_2 = param_2 + uVar9;
        if (0 < (int)uVar9) {
          pbVar13 = pbVar11 + iVar3;
          pbVar4 = (byte *)((longlong)(int)uVar12 + (longlong)iVar6 + param_1 + 1);
          pbVar14 = pbVar13;
          do {
            pbVar7 = pbVar14 + 1;
            pbVar4[-1] = *pbVar14;
            *pbVar14 = bVar2;
            if (pbVar7 == pbVar11 + (param_2 - iVar5)) {
              pbVar7 = pbVar13;
              if (pbVar4 == pbVar13) break;
            }
            else if (pbVar4 == pbVar13) {
              pbVar13 = pbVar7;
            }
            bVar2 = *pbVar4;
            pbVar4 = pbVar4 + 1;
            pbVar14 = pbVar7;
          } while( true );
        }
      }
      if (param_3 <= param_2) {
        return;
      }
      iVar6 = iVar5 + uVar9 + 1;
      if (param_2 <= iVar6) {
        return;
      }
    }
  }
  return;
}



// FUNCTION 147b5165e FUN_147b5165e body=554 status=ok
// SIG undefined FUN_147b5165e(void)

void FUN_147b5165e(longlong param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  longlong *plVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  float fVar16;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [190];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 4 + -4;
    local_348 = param_1;
    fVar16 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar16 + fVar16);
    plVar8 = &local_348;
    do {
      piVar2 = (int *)*plVar8;
      piVar9 = (int *)plVar8[1];
      iVar11 = (int)plVar8[2];
      iVar4 = (int)((ulonglong)((longlong)piVar9 - (longlong)piVar2) >> 2);
      piVar7 = piVar2;
      piVar13 = piVar9;
      if (iVar11 != 0) {
LAB_147b5171f:
        if (8 < (int)(iVar4 + 1U)) {
          uVar5 = iVar4 + 1U >> 1;
          iVar4 = piVar2[uVar5];
          piVar2[uVar5] = *piVar2;
          *piVar2 = iVar4;
          piVar6 = piVar9 + 1;
          piVar3 = piVar2;
          do {
            piVar1 = piVar3 + 1;
            piVar10 = piVar3 + 1;
            do {
              piVar3 = piVar10;
              piVar14 = piVar1;
              if (piVar9 < piVar3) break;
              piVar1 = piVar14 + 1;
              piVar10 = piVar3 + 1;
            } while (*piVar3 <= *piVar2);
            piVar1 = piVar6 + -2;
            do {
              piVar10 = piVar6;
              piVar15 = piVar1;
              piVar6 = piVar10 + -1;
              if (piVar6 <= piVar2) break;
              piVar1 = piVar15 + -1;
            } while (*piVar2 <= *piVar6);
            if (piVar6 < piVar3) goto LAB_147b51795;
            iVar4 = *piVar3;
            *piVar3 = *piVar6;
            *piVar6 = iVar4;
          } while( true );
        }
        if (piVar2 < piVar9) {
          do {
            piVar7 = piVar2;
            if (piVar2 + 1 <= piVar9) {
              piVar13 = piVar2 + 1;
              iVar11 = *piVar2;
              do {
                iVar4 = *piVar13;
                iVar12 = iVar11;
                if (iVar11 <= iVar4) {
                  iVar12 = iVar4;
                }
                if (iVar11 < iVar4) {
                  piVar7 = piVar13;
                }
                piVar13 = piVar13 + 1;
                iVar11 = iVar12;
              } while (piVar13 <= piVar9);
            }
            iVar11 = *piVar7;
            *piVar7 = *piVar9;
            *piVar9 = iVar11;
            piVar9 = piVar9 + -1;
          } while (piVar2 < piVar9);
        }
        goto LAB_147b51867;
      }
LAB_147b5187c:
      FUN_147b51889(piVar2);
LAB_147b51867:
      plVar8 = plVar8 + -3;
    } while (&local_348 <= plVar8);
  }
  if ((local_40 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_147b51795:
  iVar4 = *piVar2;
  *piVar2 = *piVar6;
  *piVar6 = iVar4;
  iVar11 = iVar11 + -1;
  piVar10 = piVar10 + -2;
  if ((longlong)piVar15 - (longlong)piVar7 < (longlong)piVar13 - (longlong)piVar14) {
    if (piVar3 < piVar9) {
      *plVar8 = (longlong)piVar3;
      plVar8[1] = (longlong)piVar9;
      *(int *)(plVar8 + 2) = iVar11;
      plVar8 = plVar8 + 3;
    }
    piVar14 = piVar2;
    if (piVar6 <= piVar2 + 1) goto LAB_147b51867;
  }
  else {
    if (piVar2 + 1 < piVar6) {
      *plVar8 = (longlong)piVar2;
      plVar8[1] = (longlong)piVar10;
      *(int *)(plVar8 + 2) = iVar11;
      plVar8 = plVar8 + 3;
    }
    piVar2 = piVar3;
    piVar10 = piVar9;
    piVar15 = piVar9;
    if (piVar9 <= piVar3) goto LAB_147b51867;
  }
  iVar4 = (int)((ulonglong)((longlong)piVar15 - (longlong)piVar14) >> 2);
  piVar7 = piVar14;
  piVar9 = piVar10;
  piVar13 = piVar15;
  if (iVar11 == 0) goto LAB_147b5187c;
  goto LAB_147b5171f;
}



// FUNCTION 147b51889 FUN_147b51889 body=279 status=ok
// SIG undefined FUN_147b51889(void)

void FUN_147b51889(undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  if (param_2 != 0) {
    iVar2 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar7 = iVar2;
joined_r0x000147b518aa:
    do {
      iVar5 = iVar2 * 2 + 1;
      if (iVar5 < (int)param_2) {
        iVar6 = iVar2 * 2 + 2;
        if ((iVar6 < (int)param_2) && ((int)param_1[iVar5] <= (int)param_1[iVar6])) {
          iVar5 = iVar6;
        }
        iVar6 = param_1[iVar2];
        if (iVar6 < (int)param_1[iVar5]) {
          param_1[iVar2] = param_1[iVar5];
          param_1[iVar5] = iVar6;
          iVar2 = iVar5;
          goto joined_r0x000147b518aa;
        }
      }
      bVar8 = iVar7 != 0;
      iVar2 = iVar7 + -1;
      iVar7 = iVar2;
    } while (bVar8);
    if (1 < (int)param_2) {
      uVar3 = (ulonglong)param_2;
      uVar1 = *param_1;
      *param_1 = param_1[uVar3 - 1];
      param_1[uVar3 - 1] = uVar1;
      if (param_2 != 2) {
        do {
          uVar4 = uVar3 - 1;
          iVar2 = 0;
          iVar5 = 1;
          iVar7 = 0;
          do {
            iVar2 = iVar2 + 2;
            iVar6 = iVar5;
            if (((longlong)iVar2 < (longlong)uVar4) && ((int)param_1[iVar5] <= (int)param_1[iVar2]))
            {
              iVar6 = iVar2;
            }
            iVar2 = param_1[iVar7];
            if ((int)param_1[iVar6] <= iVar2) break;
            param_1[iVar7] = param_1[iVar6];
            param_1[iVar6] = iVar2;
            iVar2 = iVar6 * 2;
            iVar5 = iVar6 * 2 + 1;
            iVar7 = iVar6;
          } while ((longlong)iVar5 < (longlong)uVar4);
          uVar1 = *param_1;
          *param_1 = param_1[uVar3 - 2];
          param_1[uVar3 - 2] = uVar1;
          uVar3 = uVar4;
        } while (2 < uVar4);
      }
    }
  }
  return;
}



// FUNCTION 147b519a0 FUN_147b519a0 body=181 status=ok
// SIG undefined FUN_147b519a0(void)

void FUN_147b519a0(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if (0 < (int)param_2) {
    uVar11 = (ulonglong)param_2;
    uVar6 = 1;
    do {
      if (uVar6 < uVar11) {
        iVar1 = *(int *)(param_1 + -4 + uVar6 * 4);
        iVar2 = *(int *)(param_1 + uVar6 * 4);
        if (iVar2 < iVar1) {
          *(int *)(param_1 + -4 + uVar6 * 4) = iVar2;
          *(int *)(param_1 + uVar6 * 4) = iVar1;
        }
      }
      uVar7 = uVar6 + 1;
      uVar6 = uVar6 + 2;
    } while (uVar7 < uVar11);
    if (2 < (int)param_2) {
      uVar8 = 2;
      do {
        uVar3 = uVar8 * 2;
        lVar9 = 0;
        lVar10 = param_1;
        uVar4 = param_2;
        do {
          uVar5 = uVar4;
          if ((int)uVar3 <= (int)uVar4) {
            uVar5 = uVar3;
          }
          FUN_147b51a55(lVar10,uVar8,uVar5);
          lVar9 = lVar9 + (int)uVar3;
          lVar10 = lVar10 + (longlong)(int)uVar3 * 4;
          uVar4 = uVar4 + uVar8 * -2;
        } while (lVar9 < (longlong)uVar11);
        uVar8 = uVar3;
      } while ((int)uVar3 < (int)param_2);
    }
  }
  return;
}



// FUNCTION 147b51a55 FUN_147b51a55 body=307 status=ok
// SIG undefined FUN_147b51a55(void)

void FUN_147b51a55(longlong param_1,int param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  bool bVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  
  if (param_2 < param_3 && 0 < param_2) {
    iVar7 = 0;
    while( true ) {
      piVar4 = (int *)(param_1 + (longlong)param_2 * 4);
      iVar11 = 0;
      if (param_2 - iVar7 != 0 && iVar7 <= param_2) {
        iVar11 = 0;
        uVar10 = param_2 - iVar7;
        do {
          uVar1 = (uVar10 >> 1) + iVar11;
          if (*(int *)(param_1 + (longlong)iVar7 * 4 + (ulonglong)uVar1 * 4) <= *piVar4) {
            iVar11 = uVar1 + (uVar10 & 1);
          }
          bVar3 = 1 < uVar10;
          uVar10 = uVar10 >> 1;
        } while (bVar3);
      }
      iVar11 = iVar11 + iVar7;
      iVar7 = param_2 - iVar11;
      if (iVar7 == 0 || param_2 < iVar11) break;
      if (param_3 - param_2 == 0 || param_3 < param_2) {
        iVar9 = 0;
      }
      else {
        piVar2 = (int *)(param_1 + (longlong)iVar11 * 4);
        iVar6 = *piVar2;
        iVar9 = 0;
        uVar10 = param_3 - param_2;
        do {
          uVar1 = (uVar10 >> 1) + iVar9;
          if (piVar4[uVar1] < iVar6) {
            iVar9 = uVar1 + (uVar10 & 1);
          }
          bVar3 = 1 < uVar10;
          uVar10 = uVar10 >> 1;
        } while (bVar3);
        param_2 = param_2 + iVar9;
        if (0 < iVar9) {
          piVar4 = piVar2 + iVar7;
          piVar8 = (int *)(param_1 + 4 + (longlong)iVar11 * 4);
          piVar12 = piVar4;
          do {
            piVar5 = piVar12 + 1;
            piVar8[-1] = *piVar12;
            *piVar12 = iVar6;
            if (piVar5 == piVar2 + (param_2 - iVar11)) {
              piVar5 = piVar4;
              if (piVar8 == piVar4) break;
            }
            else if (piVar8 == piVar4) {
              piVar4 = piVar5;
            }
            iVar6 = *piVar8;
            piVar8 = piVar8 + 1;
            piVar12 = piVar5;
          } while( true );
        }
      }
      if (param_3 <= param_2) {
        return;
      }
      iVar7 = iVar9 + iVar11 + 1;
      if (param_2 <= iVar7) {
        return;
      }
    }
  }
  return;
}



// FUNCTION 147b51b88 FUN_147b51b88 body=181 status=ok
// SIG undefined FUN_147b51b88(void)

void FUN_147b51b88(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if (0 < (int)param_2) {
    uVar11 = (ulonglong)param_2;
    uVar6 = 1;
    do {
      if (uVar6 < uVar11) {
        iVar1 = *(int *)(param_1 + -4 + uVar6 * 4);
        iVar2 = *(int *)(param_1 + uVar6 * 4);
        if (iVar1 < iVar2) {
          *(int *)(param_1 + -4 + uVar6 * 4) = iVar2;
          *(int *)(param_1 + uVar6 * 4) = iVar1;
        }
      }
      uVar7 = uVar6 + 1;
      uVar6 = uVar6 + 2;
    } while (uVar7 < uVar11);
    if (2 < (int)param_2) {
      uVar8 = 2;
      do {
        uVar3 = uVar8 * 2;
        lVar9 = 0;
        lVar10 = param_1;
        uVar4 = param_2;
        do {
          uVar5 = uVar4;
          if ((int)uVar3 <= (int)uVar4) {
            uVar5 = uVar3;
          }
          FUN_147b51c3d(lVar10,uVar8,uVar5);
          lVar9 = lVar9 + (int)uVar3;
          lVar10 = lVar10 + (longlong)(int)uVar3 * 4;
          uVar4 = uVar4 + uVar8 * -2;
        } while (lVar9 < (longlong)uVar11);
        uVar8 = uVar3;
      } while ((int)uVar3 < (int)param_2);
    }
  }
  return;
}



// FUNCTION 147b51c3d FUN_147b51c3d body=307 status=ok
// SIG undefined FUN_147b51c3d(void)

void FUN_147b51c3d(longlong param_1,int param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  bool bVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  
  if (param_2 < param_3 && 0 < param_2) {
    iVar7 = 0;
    while( true ) {
      piVar4 = (int *)(param_1 + (longlong)param_2 * 4);
      iVar11 = 0;
      if (param_2 - iVar7 != 0 && iVar7 <= param_2) {
        iVar11 = 0;
        uVar10 = param_2 - iVar7;
        do {
          uVar1 = (uVar10 >> 1) + iVar11;
          if (*piVar4 <= *(int *)(param_1 + (longlong)iVar7 * 4 + (ulonglong)uVar1 * 4)) {
            iVar11 = uVar1 + (uVar10 & 1);
          }
          bVar3 = 1 < uVar10;
          uVar10 = uVar10 >> 1;
        } while (bVar3);
      }
      iVar11 = iVar11 + iVar7;
      iVar7 = param_2 - iVar11;
      if (iVar7 == 0 || param_2 < iVar11) break;
      if (param_3 - param_2 == 0 || param_3 < param_2) {
        iVar9 = 0;
      }
      else {
        piVar2 = (int *)(param_1 + (longlong)iVar11 * 4);
        iVar6 = *piVar2;
        iVar9 = 0;
        uVar10 = param_3 - param_2;
        do {
          uVar1 = (uVar10 >> 1) + iVar9;
          if (iVar6 < piVar4[uVar1]) {
            iVar9 = uVar1 + (uVar10 & 1);
          }
          bVar3 = 1 < uVar10;
          uVar10 = uVar10 >> 1;
        } while (bVar3);
        param_2 = param_2 + iVar9;
        if (0 < iVar9) {
          piVar4 = piVar2 + iVar7;
          piVar8 = (int *)(param_1 + 4 + (longlong)iVar11 * 4);
          piVar12 = piVar4;
          do {
            piVar5 = piVar12 + 1;
            piVar8[-1] = *piVar12;
            *piVar12 = iVar6;
            if (piVar5 == piVar2 + (param_2 - iVar11)) {
              piVar5 = piVar4;
              if (piVar8 == piVar4) break;
            }
            else if (piVar8 == piVar4) {
              piVar4 = piVar5;
            }
            iVar6 = *piVar8;
            piVar8 = piVar8 + 1;
            piVar12 = piVar5;
          } while( true );
        }
      }
      if (param_3 <= param_2) {
        return;
      }
      iVar7 = iVar9 + iVar11 + 1;
      if (param_2 <= iVar7) {
        return;
      }
    }
  }
  return;
}



// FUNCTION 147b51d70 FUN_147b51d70 body=565 status=ok
// SIG undefined FUN_147b51d70(void)

void FUN_147b51d70(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  float fVar18;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [190];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 8 + -8;
    local_348 = param_1;
    fVar18 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar18 + fVar18);
    plVar9 = &local_348;
    do {
      plVar3 = (longlong *)*plVar9;
      plVar10 = (longlong *)plVar9[1];
      iVar12 = (int)plVar9[2];
      iVar5 = (int)((ulonglong)((longlong)plVar10 - (longlong)plVar3) >> 3);
      plVar8 = plVar3;
      plVar15 = plVar10;
      if (iVar12 != 0) {
LAB_147b51e33:
        if (8 < (int)(iVar5 + 1U)) {
          uVar6 = iVar5 + 1U >> 1;
          lVar13 = plVar3[uVar6];
          plVar3[uVar6] = *plVar3;
          *plVar3 = lVar13;
          plVar7 = plVar10 + 1;
          plVar4 = plVar3;
          do {
            plVar2 = plVar4 + 1;
            plVar11 = plVar4 + 1;
            do {
              plVar4 = plVar11;
              plVar16 = plVar2;
              if (plVar10 < plVar4) break;
              plVar2 = plVar16 + 1;
              plVar11 = plVar4 + 1;
            } while (*plVar4 <= *plVar3);
            plVar2 = plVar7 + -2;
            do {
              plVar11 = plVar7;
              plVar17 = plVar2;
              plVar7 = plVar11 + -1;
              if (plVar7 <= plVar3) break;
              plVar2 = plVar17 + -1;
            } while (*plVar3 <= *plVar7);
            if (plVar7 < plVar4) goto LAB_147b51eb1;
            lVar13 = *plVar4;
            *plVar4 = *plVar7;
            *plVar7 = lVar13;
          } while( true );
        }
        if (plVar3 < plVar10) {
          do {
            plVar8 = plVar3;
            if (plVar3 + 1 <= plVar10) {
              lVar13 = *plVar3;
              plVar15 = plVar3 + 1;
              do {
                lVar1 = *plVar15;
                lVar14 = lVar13;
                if (lVar13 <= lVar1) {
                  lVar14 = lVar1;
                }
                if (lVar13 < lVar1) {
                  plVar8 = plVar15;
                }
                plVar15 = plVar15 + 1;
                lVar13 = lVar14;
              } while (plVar15 <= plVar10);
            }
            lVar13 = *plVar8;
            *plVar8 = *plVar10;
            *plVar10 = lVar13;
            plVar10 = plVar10 + -1;
          } while (plVar3 < plVar10);
        }
        goto LAB_147b51f84;
      }
LAB_147b51f99:
      FUN_147b51fa6(plVar3);
LAB_147b51f84:
      plVar9 = plVar9 + -3;
    } while (&local_348 <= plVar9);
  }
  if ((local_40 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_147b51eb1:
  lVar13 = *plVar3;
  *plVar3 = *plVar7;
  *plVar7 = lVar13;
  iVar12 = iVar12 + -1;
  plVar11 = plVar11 + -2;
  if ((longlong)plVar17 - (longlong)plVar8 < (longlong)plVar15 - (longlong)plVar16) {
    if (plVar4 < plVar10) {
      *plVar9 = (longlong)plVar4;
      plVar9[1] = (longlong)plVar10;
      *(int *)(plVar9 + 2) = iVar12;
      plVar9 = plVar9 + 3;
    }
    plVar16 = plVar3;
    if (plVar7 <= plVar3 + 1) goto LAB_147b51f84;
  }
  else {
    if (plVar3 + 1 < plVar7) {
      *plVar9 = (longlong)plVar3;
      plVar9[1] = (longlong)plVar11;
      *(int *)(plVar9 + 2) = iVar12;
      plVar9 = plVar9 + 3;
    }
    plVar3 = plVar4;
    plVar11 = plVar10;
    plVar17 = plVar10;
    if (plVar10 <= plVar4) goto LAB_147b51f84;
  }
  iVar5 = (int)((ulonglong)((longlong)plVar17 - (longlong)plVar16) >> 3);
  plVar8 = plVar16;
  plVar10 = plVar11;
  plVar15 = plVar17;
  if (iVar12 == 0) goto LAB_147b51f99;
  goto LAB_147b51e33;
}



// FUNCTION 147b51fa6 FUN_147b51fa6 body=283 status=ok
// SIG undefined FUN_147b51fa6(void)

void FUN_147b51fa6(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  if (param_2 != 0) {
    iVar3 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar8 = iVar3;
joined_r0x000147b51fc7:
    do {
      iVar6 = iVar3 * 2 + 1;
      if (iVar6 < (int)param_2) {
        iVar7 = iVar3 * 2 + 2;
        if ((iVar7 < (int)param_2) && ((longlong)param_1[iVar6] <= (longlong)param_1[iVar7])) {
          iVar6 = iVar7;
        }
        lVar1 = param_1[iVar3];
        if (lVar1 < (longlong)param_1[iVar6]) {
          param_1[iVar3] = param_1[iVar6];
          param_1[iVar6] = lVar1;
          iVar3 = iVar6;
          goto joined_r0x000147b51fc7;
        }
      }
      bVar9 = iVar8 != 0;
      iVar3 = iVar8 + -1;
      iVar8 = iVar3;
    } while (bVar9);
    if (1 < (int)param_2) {
      uVar4 = (ulonglong)param_2;
      uVar2 = *param_1;
      *param_1 = param_1[uVar4 - 1];
      param_1[uVar4 - 1] = uVar2;
      if (param_2 != 2) {
        do {
          uVar5 = uVar4 - 1;
          iVar3 = 0;
          iVar6 = 1;
          iVar8 = 0;
          do {
            iVar3 = iVar3 + 2;
            iVar7 = iVar6;
            if (((longlong)iVar3 < (longlong)uVar5) &&
               ((longlong)param_1[iVar6] <= (longlong)param_1[iVar3])) {
              iVar7 = iVar3;
            }
            lVar1 = param_1[iVar8];
            if ((longlong)param_1[iVar7] <= lVar1) break;
            param_1[iVar8] = param_1[iVar7];
            param_1[iVar7] = lVar1;
            iVar3 = iVar7 * 2;
            iVar6 = iVar7 * 2 + 1;
            iVar8 = iVar7;
          } while ((longlong)iVar6 < (longlong)uVar5);
          uVar2 = *param_1;
          *param_1 = param_1[uVar4 - 2];
          param_1[uVar4 - 2] = uVar2;
          uVar4 = uVar5;
        } while (2 < uVar5);
      }
    }
  }
  return;
}



// FUNCTION 147b520c1 FUN_147b520c1 body=565 status=ok
// SIG undefined FUN_147b520c1(void)

void FUN_147b520c1(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  float fVar16;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [190];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 8 + -8;
    local_348 = param_1;
    fVar16 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar16 + fVar16);
    plVar8 = &local_348;
    do {
      plVar2 = (longlong *)*plVar8;
      plVar9 = (longlong *)plVar8[1];
      iVar11 = (int)plVar8[2];
      iVar4 = (int)((ulonglong)((longlong)plVar9 - (longlong)plVar2) >> 3);
      plVar7 = plVar2;
      plVar13 = plVar9;
      if (iVar11 != 0) {
LAB_147b52184:
        if (8 < (int)(iVar4 + 1U)) {
          uVar5 = iVar4 + 1U >> 1;
          lVar12 = plVar2[uVar5];
          plVar2[uVar5] = *plVar2;
          *plVar2 = lVar12;
          plVar6 = plVar9 + 1;
          plVar3 = plVar2;
          do {
            plVar1 = plVar3 + 1;
            plVar10 = plVar3 + 1;
            do {
              plVar3 = plVar10;
              plVar14 = plVar1;
              if (plVar9 < plVar3) break;
              plVar1 = plVar14 + 1;
              plVar10 = plVar3 + 1;
            } while (*plVar2 <= *plVar3);
            plVar1 = plVar6 + -2;
            do {
              plVar10 = plVar6;
              plVar15 = plVar1;
              plVar6 = plVar10 + -1;
              if (plVar6 <= plVar2) break;
              plVar1 = plVar15 + -1;
            } while (*plVar6 <= *plVar2);
            if (plVar6 < plVar3) goto LAB_147b52202;
            lVar12 = *plVar3;
            *plVar3 = *plVar6;
            *plVar6 = lVar12;
          } while( true );
        }
        if (plVar2 < plVar9) {
          do {
            plVar7 = plVar2;
            if (plVar2 + 1 <= plVar9) {
              lVar12 = *plVar2;
              plVar13 = plVar2 + 1;
              do {
                if (*plVar13 < lVar12) {
                  plVar7 = plVar13;
                  lVar12 = *plVar13;
                }
                plVar13 = plVar13 + 1;
              } while (plVar13 <= plVar9);
            }
            lVar12 = *plVar7;
            *plVar7 = *plVar9;
            *plVar9 = lVar12;
            plVar9 = plVar9 + -1;
          } while (plVar2 < plVar9);
        }
        goto LAB_147b522d5;
      }
LAB_147b522ea:
      FUN_147b522f7(plVar2);
LAB_147b522d5:
      plVar8 = plVar8 + -3;
    } while (&local_348 <= plVar8);
  }
  if ((local_40 ^ (ulonglong)auStack_368) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_147b52202:
  lVar12 = *plVar2;
  *plVar2 = *plVar6;
  *plVar6 = lVar12;
  iVar11 = iVar11 + -1;
  plVar10 = plVar10 + -2;
  if ((longlong)plVar15 - (longlong)plVar7 < (longlong)plVar13 - (longlong)plVar14) {
    if (plVar3 < plVar9) {
      *plVar8 = (longlong)plVar3;
      plVar8[1] = (longlong)plVar9;
      *(int *)(plVar8 + 2) = iVar11;
      plVar8 = plVar8 + 3;
    }
    plVar14 = plVar2;
    if (plVar6 <= plVar2 + 1) goto LAB_147b522d5;
  }
  else {
    if (plVar2 + 1 < plVar6) {
      *plVar8 = (longlong)plVar2;
      plVar8[1] = (longlong)plVar10;
      *(int *)(plVar8 + 2) = iVar11;
      plVar8 = plVar8 + 3;
    }
    plVar2 = plVar3;
    plVar10 = plVar9;
    plVar15 = plVar9;
    if (plVar9 <= plVar3) goto LAB_147b522d5;
  }
  iVar4 = (int)((ulonglong)((longlong)plVar15 - (longlong)plVar14) >> 3);
  plVar7 = plVar14;
  plVar9 = plVar10;
  plVar13 = plVar15;
  if (iVar11 == 0) goto LAB_147b522ea;
  goto LAB_147b52184;
}



// FUNCTION 147b522f7 FUN_147b522f7 body=283 status=ok
// SIG undefined FUN_147b522f7(void)

void FUN_147b522f7(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  if (param_2 != 0) {
    iVar3 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar8 = iVar3;
joined_r0x000147b52318:
    do {
      iVar6 = iVar3 * 2 + 1;
      if (iVar6 < (int)param_2) {
        iVar7 = iVar3 * 2 + 2;
        if ((iVar7 < (int)param_2) && ((longlong)param_1[iVar7] <= (longlong)param_1[iVar6])) {
          iVar6 = iVar7;
        }
        lVar1 = param_1[iVar3];
        if ((longlong)param_1[iVar6] < lVar1) {
          param_1[iVar3] = param_1[iVar6];
          param_1[iVar6] = lVar1;
          iVar3 = iVar6;
          goto joined_r0x000147b52318;
        }
      }
      bVar9 = iVar8 != 0;
      iVar3 = iVar8 + -1;
      iVar8 = iVar3;
    } while (bVar9);
    if (1 < (int)param_2) {
      uVar4 = (ulonglong)param_2;
      uVar2 = *param_1;
      *param_1 = param_1[uVar4 - 1];
      param_1[uVar4 - 1] = uVar2;
      if (param_2 != 2) {
        do {
          uVar5 = uVar4 - 1;
          iVar3 = 0;
          iVar6 = 1;
          iVar8 = 0;
          do {
            iVar3 = iVar3 + 2;
            iVar7 = iVar6;
            if (((longlong)iVar3 < (longlong)uVar5) &&
               ((longlong)param_1[iVar3] <= (longlong)param_1[iVar6])) {
              iVar7 = iVar3;
            }
            lVar1 = param_1[iVar8];
            if (lVar1 <= (longlong)param_1[iVar7]) break;
            param_1[iVar8] = param_1[iVar7];
            param_1[iVar7] = lVar1;
            iVar3 = iVar7 * 2;
            iVar6 = iVar7 * 2 + 1;
            iVar8 = iVar7;
          } while ((longlong)iVar6 < (longlong)uVar5);
          uVar2 = *param_1;
          *param_1 = param_1[uVar4 - 2];
          param_1[uVar4 - 2] = uVar2;
          uVar4 = uVar5;
        } while (2 < uVar5);
      }
    }
  }
  return;
}



// FUNCTION 147b52412 FUN_147b52412 body=181 status=ok
// SIG undefined FUN_147b52412(void)

void FUN_147b52412(longlong param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  if (0 < (int)param_2) {
    uVar9 = (ulonglong)param_2;
    uVar4 = 1;
    do {
      if (uVar4 < uVar9) {
        lVar8 = *(longlong *)(param_1 + -8 + uVar4 * 8);
        lVar7 = *(longlong *)(param_1 + uVar4 * 8);
        if (lVar7 < lVar8) {
          *(longlong *)(param_1 + -8 + uVar4 * 8) = lVar7;
          *(longlong *)(param_1 + uVar4 * 8) = lVar8;
        }
      }
      uVar5 = uVar4 + 1;
      uVar4 = uVar4 + 2;
    } while (uVar5 < uVar9);
    if (2 < (int)param_2) {
      uVar6 = 2;
      do {
        uVar1 = uVar6 * 2;
        lVar7 = 0;
        lVar8 = param_1;
        uVar2 = param_2;
        do {
          uVar3 = uVar2;
          if ((int)uVar1 <= (int)uVar2) {
            uVar3 = uVar1;
          }
          FUN_147b524c7(lVar8,uVar6,uVar3);
          lVar7 = lVar7 + (int)uVar1;
          lVar8 = lVar8 + (longlong)(int)uVar1 * 8;
          uVar2 = uVar2 + uVar6 * -2;
        } while (lVar7 < (longlong)uVar9);
        uVar6 = uVar1;
      } while ((int)uVar1 < (int)param_2);
    }
  }
  return;
}



// FUNCTION 147b524c7 FUN_147b524c7 body=309 status=ok
// SIG undefined FUN_147b524c7(void)

void FUN_147b524c7(longlong param_1,int param_2,int param_3)

{
  uint uVar1;
  longlong *plVar2;
  bool bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  
  if (param_2 < param_3 && 0 < param_2) {
    iVar7 = 0;
    while( true ) {
      plVar4 = (longlong *)(param_1 + (longlong)param_2 * 8);
      iVar11 = 0;
      if (param_2 - iVar7 != 0 && iVar7 <= param_2) {
        iVar11 = 0;
        uVar10 = param_2 - iVar7;
        do {
          uVar1 = (uVar10 >> 1) + iVar11;
          if (*(longlong *)(param_1 + (longlong)iVar7 * 8 + (ulonglong)uVar1 * 8) <= *plVar4) {
            iVar11 = uVar1 + (uVar10 & 1);
          }
          bVar3 = 1 < uVar10;
          uVar10 = uVar10 >> 1;
        } while (bVar3);
      }
      iVar11 = iVar11 + iVar7;
      iVar7 = param_2 - iVar11;
      if (iVar7 == 0 || param_2 < iVar11) break;
      if (param_3 - param_2 == 0 || param_3 < param_2) {
        iVar9 = 0;
      }
      else {
        plVar2 = (longlong *)(param_1 + (longlong)iVar11 * 8);
        lVar6 = *plVar2;
        iVar9 = 0;
        uVar10 = param_3 - param_2;
        do {
          uVar1 = (uVar10 >> 1) + iVar9;
          if (plVar4[uVar1] < lVar6) {
            iVar9 = uVar1 + (uVar10 & 1);
          }
          bVar3 = 1 < uVar10;
          uVar10 = uVar10 >> 1;
        } while (bVar3);
        param_2 = param_2 + iVar9;
        if (0 < iVar9) {
          plVar4 = plVar2 + iVar7;
          plVar8 = (longlong *)(param_1 + 8 + (longlong)iVar11 * 8);
          plVar12 = plVar4;
          do {
            plVar5 = plVar12 + 1;
            plVar8[-1] = *plVar12;
            *plVar12 = lVar6;
            if (plVar5 == plVar2 + (param_2 - iVar11)) {
              plVar5 = plVar4;
              if (plVar8 == plVar4) break;
            }
            else if (plVar8 == plVar4) {
              plVar4 = plVar5;
            }
            lVar6 = *plVar8;
            plVar8 = plVar8 + 1;
            plVar12 = plVar5;
          } while( true );
        }
      }
      if (param_3 <= param_2) {
        return;
      }
      iVar7 = iVar9 + iVar11 + 1;
      if (param_2 <= iVar7) {
        return;
      }
    }
  }
  return;
}



// FUNCTION 147b525fc FUN_147b525fc body=181 status=ok
// SIG undefined FUN_147b525fc(void)

void FUN_147b525fc(longlong param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  if (0 < (int)param_2) {
    uVar9 = (ulonglong)param_2;
    uVar4 = 1;
    do {
      if (uVar4 < uVar9) {
        lVar8 = *(longlong *)(param_1 + -8 + uVar4 * 8);
        lVar7 = *(longlong *)(param_1 + uVar4 * 8);
        if (lVar8 < lVar7) {
          *(longlong *)(param_1 + -8 + uVar4 * 8) = lVar7;
          *(longlong *)(param_1 + uVar4 * 8) = lVar8;
        }
      }
      uVar5 = uVar4 + 1;
      uVar4 = uVar4 + 2;
    } while (uVar5 < uVar9);
    if (2 < (int)param_2) {
      uVar6 = 2;
      do {
        uVar1 = uVar6 * 2;
        lVar7 = 0;
        lVar8 = param_1;
        uVar2 = param_2;
        do {
          uVar3 = uVar2;
          if ((int)uVar1 <= (int)uVar2) {
            uVar3 = uVar1;
          }
          FUN_147b526b1(lVar8,uVar6,uVar3);
          lVar7 = lVar7 + (int)uVar1;
          lVar8 = lVar8 + (longlong)(int)uVar1 * 8;
          uVar2 = uVar2 + uVar6 * -2;
        } while (lVar7 < (longlong)uVar9);
        uVar6 = uVar1;
      } while ((int)uVar1 < (int)param_2);
    }
  }
  return;
}



// FUNCTION 147b526b1 FUN_147b526b1 body=309 status=ok
// SIG undefined FUN_147b526b1(void)

void FUN_147b526b1(longlong param_1,int param_2,int param_3)

{
  uint uVar1;
  longlong *plVar2;
  bool bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  
  if (param_2 < param_3 && 0 < param_2) {
    iVar7 = 0;
    while( true ) {
      plVar4 = (longlong *)(param_1 + (longlong)param_2 * 8);
      iVar11 = 0;
      if (param_2 - iVar7 != 0 && iVar7 <= param_2) {
        iVar11 = 0;
        uVar10 = param_2 - iVar7;
        do {
          uVar1 = (uVar10 >> 1) + iVar11;
          if (*plVar4 <= *(longlong *)(param_1 + (longlong)iVar7 * 8 + (ulonglong)uVar1 * 8)) {
            iVar11 = uVar1 + (uVar10 & 1);
          }
          bVar3 = 1 < uVar10;
          uVar10 = uVar10 >> 1;
        } while (bVar3);
      }
      iVar11 = iVar11 + iVar7;
      iVar7 = param_2 - iVar11;
      if (iVar7 == 0 || param_2 < iVar11) break;
      if (param_3 - param_2 == 0 || param_3 < param_2) {
        iVar9 = 0;
      }
      else {
        plVar2 = (longlong *)(param_1 + (longlong)iVar11 * 8);
        lVar6 = *plVar2;
        iVar9 = 0;
        uVar10 = param_3 - param_2;
        do {
          uVar1 = (uVar10 >> 1) + iVar9;
          if (lVar6 < plVar4[uVar1]) {
            iVar9 = uVar1 + (uVar10 & 1);
          }
          bVar3 = 1 < uVar10;
          uVar10 = uVar10 >> 1;
        } while (bVar3);
        param_2 = param_2 + iVar9;
        if (0 < iVar9) {
          plVar4 = plVar2 + iVar7;
          plVar8 = (longlong *)(param_1 + 8 + (longlong)iVar11 * 8);
          plVar12 = plVar4;
          do {
            plVar5 = plVar12 + 1;
            plVar8[-1] = *plVar12;
            *plVar12 = lVar6;
            if (plVar5 == plVar2 + (param_2 - iVar11)) {
              plVar5 = plVar4;
              if (plVar8 == plVar4) break;
            }
            else if (plVar8 == plVar4) {
              plVar4 = plVar5;
            }
            lVar6 = *plVar8;
            plVar8 = plVar8 + 1;
            plVar12 = plVar5;
          } while( true );
        }
      }
      if (param_3 <= param_2) {
        return;
      }
      iVar7 = iVar9 + iVar11 + 1;
      if (param_2 <= iVar7) {
        return;
      }
    }
  }
  return;
}



// FUNCTION 147b527e6 FUN_147b527e6 body=590 status=ok
// SIG undefined FUN_147b527e6(void)

void FUN_147b527e6(longlong param_1,uint param_2)

{
  double *pdVar1;
  double dVar2;
  double *pdVar3;
  double *pdVar4;
  int iVar5;
  uint uVar6;
  double *pdVar7;
  double *pdVar8;
  longlong *plVar9;
  double *pdVar10;
  double *pdVar11;
  int iVar12;
  double *pdVar13;
  double *pdVar14;
  double *pdVar15;
  float fVar16;
  double dVar17;
  undefined1 auStack_358 [32];
  longlong local_338;
  longlong local_330;
  undefined4 local_328 [188];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_358;
  if (1 < (int)param_2) {
    memset(local_328,0,0x2f0);
    local_330 = param_1 + (ulonglong)param_2 * 8 + -8;
    local_338 = param_1;
    fVar16 = logf((float)(int)param_2);
    local_328[0] = (int)(longlong)(fVar16 + fVar16);
    plVar9 = &local_338;
    do {
      pdVar3 = (double *)*plVar9;
      pdVar10 = (double *)plVar9[1];
      iVar12 = (int)plVar9[2];
      iVar5 = (int)((ulonglong)((longlong)pdVar10 - (longlong)pdVar3) >> 3);
      pdVar8 = pdVar3;
      pdVar13 = pdVar10;
      if (iVar12 != 0) {
LAB_147b528a5:
        if (8 < (int)(iVar5 + 1U)) {
          uVar6 = iVar5 + 1U >> 1;
          dVar17 = pdVar3[uVar6];
          pdVar3[uVar6] = *pdVar3;
          *pdVar3 = dVar17;
          pdVar7 = pdVar10 + 1;
          pdVar4 = pdVar3;
          do {
            pdVar1 = pdVar4 + 1;
            pdVar11 = pdVar4 + 1;
            do {
              pdVar4 = pdVar11;
              pdVar14 = pdVar1;
              if (pdVar10 < pdVar4) break;
              pdVar1 = pdVar14 + 1;
              pdVar11 = pdVar4 + 1;
            } while (*pdVar4 < *pdVar3 || *pdVar4 == *pdVar3);
            pdVar1 = pdVar7 + -2;
            do {
              pdVar11 = pdVar7;
              pdVar15 = pdVar1;
              pdVar7 = pdVar11 + -1;
              if (pdVar7 <= pdVar3) break;
              pdVar1 = pdVar15 + -1;
            } while (*pdVar3 < *pdVar7 || *pdVar3 == *pdVar7);
            if (pdVar7 < pdVar4) goto LAB_147b5292f;
            dVar17 = *pdVar4;
            *pdVar4 = *pdVar7;
            *pdVar7 = dVar17;
          } while( true );
        }
        if (pdVar3 < pdVar10) {
          do {
            pdVar8 = pdVar3;
            if (pdVar3 + 1 <= pdVar10) {
              dVar17 = *pdVar3;
              pdVar13 = pdVar3 + 1;
              do {
                dVar2 = *pdVar13;
                pdVar7 = pdVar13;
                if (*pdVar13 <= dVar17) {
                  dVar2 = dVar17;
                  pdVar7 = pdVar8;
                }
                pdVar8 = pdVar7;
                dVar17 = dVar2;
                pdVar13 = pdVar13 + 1;
              } while (pdVar13 <= pdVar10);
            }
            dVar17 = *pdVar8;
            *pdVar8 = *pdVar10;
            *pdVar10 = dVar17;
            pdVar10 = pdVar10 + -1;
          } while (pdVar3 < pdVar10);
        }
        goto LAB_147b52a13;
      }
LAB_147b52a28:
      FUN_147b52a35(pdVar3);
LAB_147b52a13:
      plVar9 = plVar9 + -3;
    } while (&local_338 <= plVar9);
  }
  if ((local_38 ^ (ulonglong)auStack_358) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_147b5292f:
  dVar17 = *pdVar3;
  *pdVar3 = *pdVar7;
  *pdVar7 = dVar17;
  iVar12 = iVar12 + -1;
  pdVar11 = pdVar11 + -2;
  if ((longlong)pdVar15 - (longlong)pdVar8 < (longlong)pdVar13 - (longlong)pdVar14) {
    if (pdVar4 < pdVar10) {
      *plVar9 = (longlong)pdVar4;
      plVar9[1] = (longlong)pdVar10;
      *(int *)(plVar9 + 2) = iVar12;
      plVar9 = plVar9 + 3;
    }
    pdVar14 = pdVar3;
    if (pdVar7 <= pdVar3 + 1) goto LAB_147b52a13;
  }
  else {
    if (pdVar3 + 1 < pdVar7) {
      *plVar9 = (longlong)pdVar3;
      plVar9[1] = (longlong)pdVar11;
      *(int *)(plVar9 + 2) = iVar12;
      plVar9 = plVar9 + 3;
    }
    pdVar3 = pdVar4;
    pdVar11 = pdVar10;
    pdVar15 = pdVar10;
    if (pdVar10 <= pdVar4) goto LAB_147b52a13;
  }
  iVar5 = (int)((ulonglong)((longlong)pdVar15 - (longlong)pdVar14) >> 3);
  pdVar8 = pdVar14;
  pdVar10 = pdVar11;
  pdVar13 = pdVar15;
  if (iVar12 == 0) goto LAB_147b52a28;
  goto LAB_147b528a5;
}



// FUNCTION 147b52a35 FUN_147b52a35 body=322 status=ok
// SIG undefined FUN_147b52a35(void)

void FUN_147b52a35(undefined8 *param_1,uint param_2)

{
  double dVar1;
  undefined8 uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  if (param_2 != 0) {
    iVar3 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar8 = iVar3;
joined_r0x000147b52a56:
    do {
      iVar6 = iVar3 * 2 + 1;
      if (iVar6 < (int)param_2) {
        iVar7 = iVar3 * 2 + 2;
        if ((iVar7 < (int)param_2) &&
           ((double)param_1[iVar6] < (double)param_1[iVar7] ||
            (double)param_1[iVar6] == (double)param_1[iVar7])) {
          iVar6 = iVar7;
        }
        dVar1 = (double)param_1[iVar3];
        if (dVar1 < (double)param_1[iVar6]) {
          param_1[iVar3] = param_1[iVar6];
          param_1[iVar6] = dVar1;
          iVar3 = iVar6;
          goto joined_r0x000147b52a56;
        }
      }
      bVar9 = iVar8 != 0;
      iVar3 = iVar8 + -1;
      iVar8 = iVar3;
    } while (bVar9);
    if (1 < (int)param_2) {
      uVar4 = (ulonglong)param_2;
      uVar2 = *param_1;
      *param_1 = param_1[uVar4 - 1];
      param_1[uVar4 - 1] = uVar2;
      if (param_2 != 2) {
        do {
          uVar5 = uVar4 - 1;
          iVar3 = 0;
          iVar6 = 1;
          iVar8 = 0;
          do {
            iVar3 = iVar3 + 2;
            iVar7 = iVar6;
            if (((longlong)iVar3 < (longlong)uVar5) &&
               ((double)param_1[iVar6] < (double)param_1[iVar3] ||
                (double)param_1[iVar6] == (double)param_1[iVar3])) {
              iVar7 = iVar3;
            }
            dVar1 = (double)param_1[iVar8];
            if ((double)param_1[iVar7] <= dVar1) break;
            param_1[iVar8] = param_1[iVar7];
            param_1[iVar7] = dVar1;
            iVar3 = iVar7 * 2;
            iVar6 = iVar7 * 2 + 1;
            iVar8 = iVar7;
          } while ((longlong)iVar6 < (longlong)uVar5);
          uVar2 = *param_1;
          *param_1 = param_1[uVar4 - 2];
          param_1[uVar4 - 2] = uVar2;
          uVar4 = uVar5;
        } while (2 < uVar5);
      }
    }
  }
  return;
}



// FUNCTION 147b52b77 FUN_147b52b77 body=590 status=ok
// SIG undefined FUN_147b52b77(void)

void FUN_147b52b77(longlong param_1,uint param_2)

{
  double *pdVar1;
  double dVar2;
  double *pdVar3;
  double *pdVar4;
  int iVar5;
  uint uVar6;
  double *pdVar7;
  double *pdVar8;
  longlong *plVar9;
  double *pdVar10;
  double *pdVar11;
  int iVar12;
  double *pdVar13;
  double *pdVar14;
  double *pdVar15;
  float fVar16;
  double dVar17;
  undefined1 auStack_358 [32];
  longlong local_338;
  longlong local_330;
  undefined4 local_328 [188];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_358;
  if (1 < (int)param_2) {
    memset(local_328,0,0x2f0);
    local_330 = param_1 + (ulonglong)param_2 * 8 + -8;
    local_338 = param_1;
    fVar16 = logf((float)(int)param_2);
    local_328[0] = (int)(longlong)(fVar16 + fVar16);
    plVar9 = &local_338;
    do {
      pdVar3 = (double *)*plVar9;
      pdVar10 = (double *)plVar9[1];
      iVar12 = (int)plVar9[2];
      iVar5 = (int)((ulonglong)((longlong)pdVar10 - (longlong)pdVar3) >> 3);
      pdVar8 = pdVar3;
      pdVar13 = pdVar10;
      if (iVar12 != 0) {
LAB_147b52c36:
        if (8 < (int)(iVar5 + 1U)) {
          uVar6 = iVar5 + 1U >> 1;
          dVar17 = pdVar3[uVar6];
          pdVar3[uVar6] = *pdVar3;
          *pdVar3 = dVar17;
          pdVar7 = pdVar10 + 1;
          pdVar4 = pdVar3;
          do {
            pdVar1 = pdVar4 + 1;
            pdVar11 = pdVar4 + 1;
            do {
              pdVar4 = pdVar11;
              pdVar14 = pdVar1;
              if (pdVar10 < pdVar4) break;
              pdVar1 = pdVar14 + 1;
              pdVar11 = pdVar4 + 1;
            } while (*pdVar3 < *pdVar4 || *pdVar3 == *pdVar4);
            pdVar1 = pdVar7 + -2;
            do {
              pdVar11 = pdVar7;
              pdVar15 = pdVar1;
              pdVar7 = pdVar11 + -1;
              if (pdVar7 <= pdVar3) break;
              pdVar1 = pdVar15 + -1;
            } while (*pdVar7 < *pdVar3 || *pdVar7 == *pdVar3);
            if (pdVar7 < pdVar4) goto LAB_147b52cc0;
            dVar17 = *pdVar4;
            *pdVar4 = *pdVar7;
            *pdVar7 = dVar17;
          } while( true );
        }
        if (pdVar3 < pdVar10) {
          do {
            pdVar8 = pdVar3;
            if (pdVar3 + 1 <= pdVar10) {
              dVar17 = *pdVar3;
              pdVar13 = pdVar3 + 1;
              do {
                dVar2 = *pdVar13;
                pdVar7 = pdVar13;
                if (dVar17 <= *pdVar13) {
                  dVar2 = dVar17;
                  pdVar7 = pdVar8;
                }
                pdVar8 = pdVar7;
                dVar17 = dVar2;
                pdVar13 = pdVar13 + 1;
              } while (pdVar13 <= pdVar10);
            }
            dVar17 = *pdVar8;
            *pdVar8 = *pdVar10;
            *pdVar10 = dVar17;
            pdVar10 = pdVar10 + -1;
          } while (pdVar3 < pdVar10);
        }
        goto LAB_147b52da4;
      }
LAB_147b52db9:
      FUN_147b52dc6(pdVar3);
LAB_147b52da4:
      plVar9 = plVar9 + -3;
    } while (&local_338 <= plVar9);
  }
  if ((local_38 ^ (ulonglong)auStack_358) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_147b52cc0:
  dVar17 = *pdVar3;
  *pdVar3 = *pdVar7;
  *pdVar7 = dVar17;
  iVar12 = iVar12 + -1;
  pdVar11 = pdVar11 + -2;
  if ((longlong)pdVar15 - (longlong)pdVar8 < (longlong)pdVar13 - (longlong)pdVar14) {
    if (pdVar4 < pdVar10) {
      *plVar9 = (longlong)pdVar4;
      plVar9[1] = (longlong)pdVar10;
      *(int *)(plVar9 + 2) = iVar12;
      plVar9 = plVar9 + 3;
    }
    pdVar14 = pdVar3;
    if (pdVar7 <= pdVar3 + 1) goto LAB_147b52da4;
  }
  else {
    if (pdVar3 + 1 < pdVar7) {
      *plVar9 = (longlong)pdVar3;
      plVar9[1] = (longlong)pdVar11;
      *(int *)(plVar9 + 2) = iVar12;
      plVar9 = plVar9 + 3;
    }
    pdVar3 = pdVar4;
    pdVar11 = pdVar10;
    pdVar15 = pdVar10;
    if (pdVar10 <= pdVar4) goto LAB_147b52da4;
  }
  iVar5 = (int)((ulonglong)((longlong)pdVar15 - (longlong)pdVar14) >> 3);
  pdVar8 = pdVar14;
  pdVar10 = pdVar11;
  pdVar13 = pdVar15;
  if (iVar12 == 0) goto LAB_147b52db9;
  goto LAB_147b52c36;
}



// FUNCTION 147b52dc6 FUN_147b52dc6 body=322 status=ok
// SIG undefined FUN_147b52dc6(void)

void FUN_147b52dc6(undefined8 *param_1,uint param_2)

{
  double dVar1;
  undefined8 uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  if (param_2 != 0) {
    iVar3 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar8 = iVar3;
joined_r0x000147b52de7:
    do {
      iVar6 = iVar3 * 2 + 1;
      if (iVar6 < (int)param_2) {
        iVar7 = iVar3 * 2 + 2;
        if ((iVar7 < (int)param_2) &&
           ((double)param_1[iVar7] < (double)param_1[iVar6] ||
            (double)param_1[iVar7] == (double)param_1[iVar6])) {
          iVar6 = iVar7;
        }
        dVar1 = (double)param_1[iVar3];
        if ((double)param_1[iVar6] < dVar1) {
          param_1[iVar3] = param_1[iVar6];
          param_1[iVar6] = dVar1;
          iVar3 = iVar6;
          goto joined_r0x000147b52de7;
        }
      }
      bVar9 = iVar8 != 0;
      iVar3 = iVar8 + -1;
      iVar8 = iVar3;
    } while (bVar9);
    if (1 < (int)param_2) {
      uVar4 = (ulonglong)param_2;
      uVar2 = *param_1;
      *param_1 = param_1[uVar4 - 1];
      param_1[uVar4 - 1] = uVar2;
      if (param_2 != 2) {
        do {
          uVar5 = uVar4 - 1;
          iVar3 = 0;
          iVar6 = 1;
          iVar8 = 0;
          do {
            iVar3 = iVar3 + 2;
            iVar7 = iVar6;
            if (((longlong)iVar3 < (longlong)uVar5) &&
               ((double)param_1[iVar3] < (double)param_1[iVar6] ||
                (double)param_1[iVar3] == (double)param_1[iVar6])) {
              iVar7 = iVar3;
            }
            dVar1 = (double)param_1[iVar8];
            if (dVar1 <= (double)param_1[iVar7]) break;
            param_1[iVar8] = param_1[iVar7];
            param_1[iVar7] = dVar1;
            iVar3 = iVar7 * 2;
            iVar6 = iVar7 * 2 + 1;
            iVar8 = iVar7;
          } while ((longlong)iVar6 < (longlong)uVar5);
          uVar2 = *param_1;
          *param_1 = param_1[uVar4 - 2];
          param_1[uVar4 - 2] = uVar2;
          uVar4 = uVar5;
        } while (2 < uVar5);
      }
    }
  }
  return;
}



// FUNCTION 147b52f08 FUN_147b52f08 body=190 status=ok
// SIG undefined FUN_147b52f08(void)

void FUN_147b52f08(longlong param_1,uint param_2)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if (0 < (int)param_2) {
    uVar11 = (ulonglong)param_2;
    uVar6 = 1;
    do {
      if (uVar6 < uVar11) {
        dVar1 = *(double *)(param_1 + -8 + uVar6 * 8);
        dVar2 = *(double *)(param_1 + uVar6 * 8);
        if (dVar2 < dVar1) {
          *(double *)(param_1 + -8 + uVar6 * 8) = dVar2;
          *(double *)(param_1 + uVar6 * 8) = dVar1;
        }
      }
      uVar7 = uVar6 + 1;
      uVar6 = uVar6 + 2;
    } while (uVar7 < uVar11);
    if (2 < (int)param_2) {
      uVar8 = 2;
      do {
        uVar3 = uVar8 * 2;
        lVar9 = 0;
        lVar10 = param_1;
        uVar4 = param_2;
        do {
          uVar5 = uVar4;
          if ((int)uVar3 <= (int)uVar4) {
            uVar5 = uVar3;
          }
          FUN_147b52fc6(lVar10,uVar8,uVar5);
          lVar9 = lVar9 + (int)uVar3;
          lVar10 = lVar10 + (longlong)(int)uVar3 * 8;
          uVar4 = uVar4 + uVar8 * -2;
        } while (lVar9 < (longlong)uVar11);
        uVar8 = uVar3;
      } while ((int)uVar3 < (int)param_2);
    }
  }
  return;
}



// FUNCTION 147b52fc6 FUN_147b52fc6 body=319 status=ok
// SIG undefined FUN_147b52fc6(void)

void FUN_147b52fc6(longlong param_1,int param_2,int param_3)

{
  uint uVar1;
  double *pdVar2;
  bool bVar3;
  double *pdVar4;
  uint uVar5;
  int iVar6;
  double *pdVar7;
  double *pdVar8;
  int iVar9;
  double *pdVar10;
  int iVar11;
  double dVar12;
  
  if (param_2 < param_3 && 0 < param_2) {
    iVar6 = 0;
    while( true ) {
      pdVar4 = (double *)(param_1 + (longlong)param_2 * 8);
      iVar9 = 0;
      if (param_2 - iVar6 != 0 && iVar6 <= param_2) {
        iVar9 = 0;
        uVar5 = param_2 - iVar6;
        do {
          uVar1 = (uVar5 >> 1) + iVar9;
          if (*(double *)(param_1 + (longlong)iVar6 * 8 + (ulonglong)uVar1 * 8) <= *pdVar4) {
            iVar9 = uVar1 + (uVar5 & 1);
          }
          bVar3 = 1 < uVar5;
          uVar5 = uVar5 >> 1;
        } while (bVar3);
      }
      iVar9 = iVar9 + iVar6;
      iVar6 = param_2 - iVar9;
      if (iVar6 == 0 || param_2 < iVar9) break;
      if (param_3 - param_2 == 0 || param_3 < param_2) {
        iVar11 = 0;
      }
      else {
        pdVar2 = (double *)(param_1 + (longlong)iVar9 * 8);
        dVar12 = *pdVar2;
        iVar11 = 0;
        uVar5 = param_3 - param_2;
        do {
          uVar1 = (uVar5 >> 1) + iVar11;
          pdVar7 = pdVar4 + uVar1;
          if (*pdVar7 <= dVar12 && dVar12 != *pdVar7) {
            iVar11 = uVar1 + (uVar5 & 1);
          }
          bVar3 = 1 < uVar5;
          uVar5 = uVar5 >> 1;
        } while (bVar3);
        param_2 = param_2 + iVar11;
        if (0 < iVar11) {
          pdVar4 = pdVar2 + iVar6;
          pdVar7 = (double *)(param_1 + 8 + (longlong)iVar9 * 8);
          pdVar10 = pdVar4;
          do {
            pdVar8 = pdVar10 + 1;
            pdVar7[-1] = *pdVar10;
            *pdVar10 = dVar12;
            if (pdVar8 == pdVar2 + (param_2 - iVar9)) {
              pdVar8 = pdVar4;
              if (pdVar7 == pdVar4) break;
            }
            else if (pdVar7 == pdVar4) {
              pdVar4 = pdVar8;
            }
            dVar12 = *pdVar7;
            pdVar7 = pdVar7 + 1;
            pdVar10 = pdVar8;
          } while( true );
        }
      }
      if (param_3 <= param_2) {
        return;
      }
      iVar6 = iVar11 + iVar9 + 1;
      if (param_2 <= iVar6) {
        return;
      }
    }
  }
  return;
}



// FUNCTION 147b53105 FUN_147b53105 body=190 status=ok
// SIG undefined FUN_147b53105(void)

void FUN_147b53105(longlong param_1,uint param_2)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if (0 < (int)param_2) {
    uVar11 = (ulonglong)param_2;
    uVar6 = 1;
    do {
      if (uVar6 < uVar11) {
        dVar1 = *(double *)(param_1 + -8 + uVar6 * 8);
        dVar2 = *(double *)(param_1 + uVar6 * 8);
        if (dVar1 < dVar2) {
          *(double *)(param_1 + -8 + uVar6 * 8) = dVar2;
          *(double *)(param_1 + uVar6 * 8) = dVar1;
        }
      }
      uVar7 = uVar6 + 1;
      uVar6 = uVar6 + 2;
    } while (uVar7 < uVar11);
    if (2 < (int)param_2) {
      uVar8 = 2;
      do {
        uVar3 = uVar8 * 2;
        lVar9 = 0;
        lVar10 = param_1;
        uVar4 = param_2;
        do {
          uVar5 = uVar4;
          if ((int)uVar3 <= (int)uVar4) {
            uVar5 = uVar3;
          }
          FUN_147b531c3(lVar10,uVar8,uVar5);
          lVar9 = lVar9 + (int)uVar3;
          lVar10 = lVar10 + (longlong)(int)uVar3 * 8;
          uVar4 = uVar4 + uVar8 * -2;
        } while (lVar9 < (longlong)uVar11);
        uVar8 = uVar3;
      } while ((int)uVar3 < (int)param_2);
    }
  }
  return;
}



// FUNCTION 147b531c3 FUN_147b531c3 body=319 status=ok
// SIG undefined FUN_147b531c3(void)

void FUN_147b531c3(longlong param_1,int param_2,int param_3)

{
  uint uVar1;
  double *pdVar2;
  bool bVar3;
  double *pdVar4;
  uint uVar5;
  int iVar6;
  double *pdVar7;
  double *pdVar8;
  int iVar9;
  double *pdVar10;
  int iVar11;
  double dVar12;
  
  if (param_2 < param_3 && 0 < param_2) {
    iVar6 = 0;
    while( true ) {
      pdVar4 = (double *)(param_1 + (longlong)param_2 * 8);
      iVar9 = 0;
      if (param_2 - iVar6 != 0 && iVar6 <= param_2) {
        dVar12 = *pdVar4;
        iVar9 = 0;
        uVar5 = param_2 - iVar6;
        do {
          uVar1 = (uVar5 >> 1) + iVar9;
          pdVar2 = (double *)(param_1 + (longlong)iVar6 * 8 + (ulonglong)uVar1 * 8);
          if (dVar12 < *pdVar2 || dVar12 == *pdVar2) {
            iVar9 = uVar1 + (uVar5 & 1);
          }
          bVar3 = 1 < uVar5;
          uVar5 = uVar5 >> 1;
        } while (bVar3);
      }
      iVar9 = iVar9 + iVar6;
      iVar6 = param_2 - iVar9;
      if (iVar6 == 0 || param_2 < iVar9) break;
      if (param_3 - param_2 == 0 || param_3 < param_2) {
        iVar11 = 0;
      }
      else {
        pdVar2 = (double *)(param_1 + (longlong)iVar9 * 8);
        dVar12 = *pdVar2;
        iVar11 = 0;
        uVar5 = param_3 - param_2;
        do {
          uVar1 = (uVar5 >> 1) + iVar11;
          if (dVar12 < pdVar4[uVar1]) {
            iVar11 = uVar1 + (uVar5 & 1);
          }
          bVar3 = 1 < uVar5;
          uVar5 = uVar5 >> 1;
        } while (bVar3);
        param_2 = param_2 + iVar11;
        if (0 < iVar11) {
          pdVar4 = pdVar2 + iVar6;
          pdVar7 = (double *)(param_1 + 8 + (longlong)iVar9 * 8);
          pdVar10 = pdVar4;
          do {
            pdVar8 = pdVar10 + 1;
            pdVar7[-1] = *pdVar10;
            *pdVar10 = dVar12;
            if (pdVar8 == pdVar2 + (param_2 - iVar9)) {
              pdVar8 = pdVar4;
              if (pdVar7 == pdVar4) break;
            }
            else if (pdVar7 == pdVar4) {
              pdVar4 = pdVar8;
            }
            dVar12 = *pdVar7;
            pdVar7 = pdVar7 + 1;
            pdVar10 = pdVar8;
          } while( true );
        }
      }
      if (param_3 <= param_2) {
        return;
      }
      iVar6 = iVar11 + iVar9 + 1;
      if (param_2 <= iVar6) {
        return;
      }
    }
  }
  return;
}



// FUNCTION 147b53302 FUN_147b53302 body=2840 status=ok
// SIG undefined FUN_147b53302(void)

void FUN_147b53302(double *param_1,double *param_2,double *param_3,double *param_4,float param_5,
                  float param_6,float param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
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
  float fVar19;
  float fVar20;
  float fVar21;
  
  if (param_5 <= 0.0) {
    return;
  }
  param_6 = param_6 * 6.2831855;
  if (param_6 < 1e-08) {
    dVar6 = (double)param_5;
    dVar8 = param_2[2];
    dVar9 = param_2[1];
    *param_1 = dVar6 * *param_2 + *param_1;
    param_1[1] = dVar9 * dVar6 + param_1[1];
    param_1[2] = dVar8 * dVar6 + param_1[2];
    return;
  }
  if (1e-08 <= param_7) {
    dVar8 = (double)((2.0 / param_6) * param_7);
    dVar6 = param_4[2] * dVar8 + param_3[2];
    dVar7 = param_4[1] * dVar8 + param_3[1];
    dVar9 = dVar8 * *param_4 + *param_3;
    dVar2 = param_1[2] - dVar6;
    dVar1 = param_1[1] - dVar7;
    dVar8 = *param_1 - dVar9;
    if (1.0 < param_7) {
      fVar20 = param_7 * param_7 + -1.0;
      if (fVar20 < 0.0) {
        fVar20 = sqrtf(fVar20);
      }
      else {
        fVar20 = SQRT(fVar20);
      }
      fVar20 = fVar20 * param_6;
      param_7 = param_7 * param_6;
      dVar11 = (double)(param_7 - fVar20);
      dVar15 = 1.0 / (double)(fVar20 + fVar20);
      dVar13 = -(dVar2 * dVar11 + param_2[2]) * dVar15;
      dVar14 = -(dVar1 * dVar11 + param_2[1]) * dVar15;
      dVar15 = dVar15 * -(dVar11 * dVar8 + *param_2);
      fVar21 = -(fVar20 - param_7) * param_5;
      param_5 = (param_7 + fVar20) * param_5;
      dVar11 = (double)(1.0 / (fVar21 * 0.25724632 * fVar21 * fVar21 +
                              fVar21 * 0.45053902 * fVar21 + fVar21 * 1.0074606 + 1.0));
      dVar2 = (dVar2 - dVar13) * dVar11;
      dVar1 = (dVar1 - dVar14) * dVar11;
      dVar11 = (dVar8 - dVar15) * dVar11;
      dVar8 = (double)(1.0 / (param_5 * 0.25724632 * param_5 * param_5 +
                             param_5 * 0.45053902 * param_5 + param_5 * 1.0074606 + 1.0));
      dVar13 = dVar13 * dVar8;
      dVar14 = dVar14 * dVar8;
      dVar15 = dVar15 * dVar8;
      *param_1 = dVar9 + dVar11 + dVar15;
      param_1[1] = dVar7 + dVar1 + dVar14;
      param_1[2] = dVar6 + dVar2 + dVar13;
      dVar8 = (double)(fVar20 - param_7);
      dVar9 = (double)-(param_7 + fVar20);
      *param_2 = dVar15 * dVar9 + dVar11 * dVar8;
      param_2[1] = dVar14 * dVar9 + dVar1 * dVar8;
      param_2[2] = dVar13 * dVar9 + dVar2 * dVar8;
      return;
    }
    if (1.0 <= param_7) {
      dVar15 = (double)param_6;
      dVar17 = param_2[2] + dVar2 * dVar15;
      param_6 = param_6 * param_5;
      dVar16 = param_2[1] + dVar1 * dVar15;
      dVar13 = (double)param_5;
      dVar14 = *param_2 + dVar15 * dVar8;
      dVar11 = (double)(1.0 / (param_6 * 0.25724632 * param_6 * param_6 +
                              param_6 * 0.45053902 * param_6 + param_6 * 1.0074606 + 1.0));
      *param_1 = dVar9 + (dVar13 * dVar14 + dVar8) * dVar11;
      param_1[1] = dVar7 + (dVar16 * dVar13 + dVar1) * dVar11;
      param_1[2] = dVar6 + (dVar17 * dVar13 + dVar2) * dVar11;
      dVar9 = (double)param_6;
      *param_2 = ((dVar14 - dVar15 * dVar8) - dVar14 * dVar9) * dVar11;
      param_2[1] = ((dVar16 - dVar1 * dVar15) - dVar16 * dVar9) * dVar11;
      param_2[2] = ((dVar17 - dVar2 * dVar15) - dVar17 * dVar9) * dVar11;
      return;
    }
    fVar20 = 1.0 - param_7 * param_7;
    if (fVar20 < 0.0) {
      fVar20 = sqrtf(fVar20);
    }
    else {
      fVar20 = SQRT(fVar20);
    }
    fVar20 = fVar20 * param_6;
    dVar13 = (double)(param_6 * param_7);
    dVar11 = 1.0 / (double)fVar20;
    fVar21 = fVar20 * param_5;
    dVar14 = (dVar2 * dVar13 + param_2[2]) * dVar11;
    dVar15 = (dVar1 * dVar13 + param_2[1]) * dVar11;
    dVar11 = dVar11 * (dVar13 * dVar8 + *param_2);
    fVar21 = (float)(longlong)
                    (fVar21 * 0.15915494 +
                    *(float *)(&DAT_14a184448 + (ulonglong)(fVar21 < 0.0) * 4)) * -6.2831855 +
             fVar21;
    if (fVar21 <= 1.5707964) {
      if (-1.5707964 <= fVar21) {
        fVar19 = 1.0;
        goto LAB_147b53bb7;
      }
      fVar19 = -3.1415927;
    }
    else {
      fVar19 = 3.1415927;
    }
    fVar21 = fVar19 - fVar21;
    fVar19 = -1.0;
LAB_147b53bb7:
    fVar5 = fVar21 * fVar21;
    fVar21 = (((((fVar5 * -2.3889859e-08 + 2.7525562e-06) * fVar5 + -0.00019840874) * fVar5 +
               0.008333331) * fVar5 + -0.16666667) * fVar5 + 1.0) * fVar21;
    fVar19 = (((((fVar5 * -2.6051615e-07 + 2.4760495e-05) * fVar5 + -0.0013888378) * fVar5 +
               0.041666638) * fVar5 + -0.5) * fVar5 + 1.0) * fVar19;
    param_5 = param_6 * param_7 * param_5;
    dVar13 = (double)fVar19;
    dVar17 = (double)fVar21;
    dVar10 = (double)(1.0 / (param_5 * 0.25724632 * param_5 * param_5 +
                            param_5 * 0.45053902 * param_5 + param_5 * 1.0074606 + 1.0));
    dVar12 = (dVar14 * dVar17 + dVar2 * dVar13) * dVar10;
    dVar4 = (dVar15 * dVar17 + dVar1 * dVar13) * dVar10;
    dVar18 = (dVar17 * dVar11 + dVar13 * dVar8) * dVar10;
    *param_1 = dVar18;
    param_1[1] = dVar4;
    param_1[2] = dVar12;
    dVar3 = (double)param_7;
    dVar17 = (double)param_6;
    dVar16 = (double)(fVar19 * fVar20);
    dVar13 = (double)(fVar21 * fVar20);
    *param_2 = (dVar11 * dVar16 - dVar8 * dVar13) * dVar10 - dVar18 * dVar3 * dVar17;
    param_2[1] = (dVar15 * dVar16 - dVar1 * dVar13) * dVar10 - dVar4 * dVar3 * dVar17;
    param_2[2] = (dVar14 * dVar16 - dVar2 * dVar13) * dVar10 - dVar12 * dVar3 * dVar17;
    *param_1 = dVar9 + *param_1;
    param_1[1] = dVar7 + param_1[1];
    param_1[2] = dVar6 + param_1[2];
    return;
  }
  dVar8 = param_3[2];
  dVar11 = param_1[2] - dVar8;
  dVar9 = param_3[1];
  dVar13 = param_1[1] - dVar9;
  dVar7 = *param_1 - *param_3;
  dVar2 = 1.0 / (double)param_6;
  dVar6 = param_2[2];
  dVar1 = param_2[1];
  param_5 = param_5 * param_6;
  param_5 = (float)(longlong)
                   (param_5 * 0.15915494 +
                   *(float *)(&DAT_14a184448 + (ulonglong)(param_5 < 0.0) * 4)) * -6.2831855 +
            param_5;
  if (param_5 <= 1.5707964) {
    if (-1.5707964 <= param_5) {
      fVar20 = 1.0;
      goto LAB_147b53511;
    }
    fVar20 = -3.1415927;
  }
  else {
    fVar20 = 3.1415927;
  }
  param_5 = fVar20 - param_5;
  fVar20 = -1.0;
LAB_147b53511:
  fVar21 = param_5 * param_5;
  param_5 = (((((fVar21 * -2.3889859e-08 + 2.7525562e-06) * fVar21 + -0.00019840874) * fVar21 +
              0.008333331) * fVar21 + -0.16666667) * fVar21 + 1.0) * param_5;
  dVar14 = (double)((((((fVar21 * -2.6051615e-07 + 2.4760495e-05) * fVar21 + -0.0013888378) * fVar21
                      + 0.041666638) * fVar21 + -0.5) * fVar21 + 1.0) * fVar20);
  dVar15 = (double)param_5;
  *param_1 = dVar2 * *param_2 * dVar15 + *param_3 + dVar7 * dVar14;
  param_1[1] = dVar1 * dVar2 * dVar15 + dVar9 + dVar13 * dVar14;
  param_1[2] = dVar6 * dVar2 * dVar15 + dVar8 + dVar11 * dVar14;
  dVar8 = (double)(param_6 * param_5);
  *param_2 = dVar14 * *param_2 - dVar7 * dVar8;
  param_2[1] = param_2[1] * dVar14 - dVar13 * dVar8;
  param_2[2] = param_2[2] * dVar14 - dVar11 * dVar8;
  return;
}



// FUNCTION 147b53e1a FUN_147b53e1a body=2377 status=ok
// SIG undefined FUN_147b53e1a(void)

void FUN_147b53e1a(undefined1 (*param_1) [16],undefined1 (*param_2) [16],double *param_3,
                  double *param_4,float param_5,float param_6,float param_7)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar20;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  double dVar25;
  double dVar26;
  undefined1 auVar24 [16];
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  undefined1 auVar36 [16];
  float fVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  float fVar40;
  float fVar41;
  float local_bc;
  
  if (param_5 <= 0.0) {
    return;
  }
  param_6 = param_6 * 6.2831855;
  if (param_6 < 1e-08) {
    dVar3 = (double)param_5;
    dVar27 = *(double *)(*param_2 + 8);
    dVar16 = *(double *)param_2[1];
    dVar28 = *(double *)(*param_1 + 8);
    dVar1 = *(double *)param_1[1];
    dVar4 = dVar3 * *(double *)(param_2[1] + 8) + *(double *)(param_1[1] + 8);
    *(double *)*param_1 = *(double *)*param_2 * dVar3 + *(double *)*param_1;
    *(double *)(*param_1 + 8) = dVar27 * dVar3 + dVar28;
    auVar32._8_4_ = SUB84(dVar4,0);
    auVar32._0_8_ = dVar3 * dVar16 + dVar1;
    auVar32._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    param_1[1] = auVar32;
    return;
  }
  if (1e-08 <= param_7) {
    dVar1 = (double)((2.0 / param_6) * param_7);
    dVar3 = *param_4 * dVar1 + *param_3;
    dVar4 = param_4[1] * dVar1 + param_3[1];
    dVar28 = dVar1 * param_4[2] + param_3[2];
    dVar1 = dVar1 * param_4[3] + param_3[3];
    dVar20 = *(double *)*param_1 - dVar3;
    dVar13 = *(double *)(*param_1 + 8) - dVar4;
    dVar27 = *(double *)param_1[1] - dVar28;
    dVar16 = *(double *)(param_1[1] + 8) - dVar1;
    if (1.0 < param_7) {
      fVar37 = param_7 * param_7 + -1.0;
      if (fVar37 < 0.0) {
        fVar37 = sqrtf(fVar37);
      }
      else {
        fVar37 = SQRT(fVar37);
      }
      fVar37 = fVar37 * param_6;
      param_7 = param_7 * param_6;
      dVar17 = (double)(param_7 - fVar37);
      auVar23._0_8_ = 0.0 - (dVar20 * dVar17 + *(double *)*param_2);
      auVar23._8_8_ = 0.0 - (dVar13 * dVar17 + *(double *)(*param_2 + 8));
      auVar33._0_8_ = (double)(fVar37 + fVar37);
      auVar33._8_8_ = (double)(fVar37 + fVar37);
      auVar18._0_8_ = 0.0 - (dVar17 * dVar27 + *(double *)param_2[1]);
      auVar18._8_8_ = 0.0 - (dVar17 * dVar16 + *(double *)(param_2[1] + 8));
      auVar36 = divpd(auVar23,auVar33);
      auVar32 = divpd(auVar18,auVar33);
      fVar40 = -(fVar37 - param_7) * param_5;
      param_5 = (param_7 + fVar37) * param_5;
      dVar17 = (double)(1.0 / (fVar40 * 0.25724632 * fVar40 * fVar40 +
                              fVar40 * 0.45053902 * fVar40 + fVar40 * 1.0074606 + 1.0));
      dVar20 = (dVar20 - auVar36._0_8_) * dVar17;
      dVar13 = (dVar13 - auVar36._8_8_) * dVar17;
      dVar27 = (dVar27 - auVar32._0_8_) * dVar17;
      dVar17 = (dVar16 - auVar32._8_8_) * dVar17;
      dVar30 = (double)(1.0 / (param_5 * 0.25724632 * param_5 * param_5 +
                              param_5 * 0.45053902 * param_5 + param_5 * 1.0074606 + 1.0));
      dVar21 = auVar36._0_8_ * dVar30;
      dVar25 = auVar36._8_8_ * dVar30;
      dVar16 = auVar32._0_8_ * dVar30;
      dVar30 = auVar32._8_8_ * dVar30;
      dVar4 = dVar4 + dVar13 + dVar25;
      dVar1 = dVar1 + dVar17 + dVar30;
      auVar10._8_4_ = SUB84(dVar4,0);
      auVar10._0_8_ = dVar3 + dVar20 + dVar21;
      auVar10._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      *param_1 = auVar10;
      auVar36._8_4_ = SUB84(dVar1,0);
      auVar36._0_8_ = dVar28 + dVar27 + dVar16;
      auVar36._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
      param_1[1] = auVar36;
      dVar28 = (double)(fVar37 - param_7);
      dVar1 = (double)-(param_7 + fVar37);
      *(double *)*param_2 = dVar21 * dVar1 + dVar20 * dVar28;
      *(double *)(*param_2 + 8) = dVar25 * dVar1 + dVar13 * dVar28;
      *(double *)param_2[1] = dVar16 * dVar1 + dVar27 * dVar28;
      *(double *)(param_2[1] + 8) = dVar30 * dVar1 + dVar17 * dVar28;
      return;
    }
    if (1.0 <= param_7) {
      dVar17 = (double)param_6;
      dVar30 = *(double *)*param_2 + dVar17 * dVar20;
      dVar21 = *(double *)(*param_2 + 8) + dVar17 * dVar13;
      dVar22 = *(double *)param_2[1] + dVar17 * dVar27;
      dVar26 = *(double *)(param_2[1] + 8) + dVar17 * dVar16;
      param_6 = param_6 * param_5;
      dVar31 = (double)param_5;
      dVar25 = (double)(1.0 / (param_6 * 0.25724632 * param_6 * param_6 +
                              param_6 * 0.45053902 * param_6 + param_6 * 1.0074606 + 1.0));
      dVar4 = dVar4 + (dVar31 * dVar21 + dVar13) * dVar25;
      dVar1 = dVar1 + (dVar31 * dVar26 + dVar16) * dVar25;
      auVar12._8_4_ = SUB84(dVar4,0);
      auVar12._0_8_ = dVar3 + (dVar31 * dVar30 + dVar20) * dVar25;
      auVar12._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      *param_1 = auVar12;
      auVar8._8_4_ = SUB84(dVar1,0);
      auVar8._0_8_ = dVar28 + (dVar31 * dVar22 + dVar27) * dVar25;
      auVar8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
      param_1[1] = auVar8;
      dVar28 = (double)param_6;
      dVar1 = ((dVar21 - dVar17 * dVar13) - dVar28 * dVar21) * dVar25;
      auVar2._8_4_ = SUB84(dVar1,0);
      auVar2._0_8_ = ((dVar30 - dVar17 * dVar20) - dVar28 * dVar30) * dVar25;
      auVar2._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
      *param_2 = auVar2;
      *(double *)param_2[1] = ((dVar22 - dVar17 * dVar27) - dVar28 * dVar22) * dVar25;
      *(double *)(param_2[1] + 8) = ((dVar26 - dVar17 * dVar16) - dVar28 * dVar26) * dVar25;
      return;
    }
    fVar37 = 1.0 - param_7 * param_7;
    if (fVar37 < 0.0) {
      fVar37 = sqrtf(fVar37);
    }
    else {
      fVar37 = SQRT(fVar37);
    }
    fVar37 = fVar37 * param_6;
    dVar17 = (double)(param_6 * param_7);
    auVar24._0_8_ = dVar17 * dVar20 + *(double *)*param_2;
    auVar24._8_8_ = dVar17 * dVar13 + *(double *)(*param_2 + 8);
    auVar19._0_8_ = dVar17 * dVar27 + *(double *)param_2[1];
    auVar19._8_8_ = dVar17 * dVar16 + *(double *)(param_2[1] + 8);
    auVar34._0_8_ = (double)fVar37;
    auVar34._8_8_ = (double)fVar37;
    fVar40 = fVar37 * param_5;
    auVar36 = divpd(auVar24,auVar34);
    auVar32 = divpd(auVar19,auVar34);
    fVar40 = (float)(longlong)
                    (fVar40 * 0.15915494 +
                    *(float *)(&DAT_14a184448 + (ulonglong)(fVar40 < 0.0) * 4)) * -6.2831855 +
             fVar40;
    if (fVar40 <= 1.5707964) {
      if (-1.5707964 <= fVar40) {
        local_bc = 1.0;
        goto LAB_147b54547;
      }
      fVar41 = -3.1415927;
    }
    else {
      fVar41 = 3.1415927;
    }
    fVar40 = fVar41 - fVar40;
    local_bc = -1.0;
LAB_147b54547:
    fVar41 = fVar40 * fVar40;
    fVar40 = (((((fVar41 * -2.3889859e-08 + 2.7525562e-06) * fVar41 + -0.00019840874) * fVar41 +
               0.008333331) * fVar41 + -0.16666667) * fVar41 + 1.0) * fVar40;
    local_bc = (((((fVar41 * -2.6051615e-07 + 2.4760495e-05) * fVar41 + -0.0013888378) * fVar41 +
                 0.041666638) * fVar41 + -0.5) * fVar41 + 1.0) * local_bc;
    param_5 = param_6 * param_7 * param_5;
    dVar30 = (double)local_bc;
    dVar17 = (double)fVar40;
    dVar29 = (double)(1.0 / (param_5 * 0.25724632 * param_5 * param_5 +
                            param_5 * 0.45053902 * param_5 + param_5 * 1.0074606 + 1.0));
    dVar26 = (auVar36._0_8_ * dVar17 + dVar20 * dVar30) * dVar29;
    dVar31 = (auVar36._8_8_ * dVar17 + dVar13 * dVar30) * dVar29;
    dVar25 = (dVar17 * auVar32._0_8_ + dVar30 * dVar27) * dVar29;
    dVar22 = (dVar17 * auVar32._8_8_ + dVar30 * dVar16) * dVar29;
    auVar15._8_4_ = SUB84(dVar31,0);
    auVar15._0_8_ = dVar26;
    auVar15._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
    *param_1 = auVar15;
    auVar14._8_4_ = SUB84(dVar22,0);
    auVar14._0_8_ = dVar25;
    auVar14._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
    param_1[1] = auVar14;
    dVar21 = (double)param_7;
    dVar30 = (double)param_6;
    dVar35 = (double)(local_bc * fVar37);
    dVar17 = (double)(fVar40 * fVar37);
    *(double *)*param_2 =
         (auVar36._0_8_ * dVar35 - dVar20 * dVar17) * dVar29 + (0.0 - dVar26) * dVar21 * dVar30;
    *(double *)(*param_2 + 8) =
         (auVar36._8_8_ * dVar35 - dVar13 * dVar17) * dVar29 + (0.0 - dVar31) * dVar21 * dVar30;
    *(double *)param_2[1] =
         (auVar32._0_8_ * dVar35 - dVar27 * dVar17) * dVar29 + (0.0 - dVar25) * dVar21 * dVar30;
    *(double *)(param_2[1] + 8) =
         (auVar32._8_8_ * dVar35 - dVar16 * dVar17) * dVar29 + (0.0 - dVar22) * dVar21 * dVar30;
    dVar4 = dVar4 + *(double *)(*param_1 + 8);
    dVar27 = *(double *)param_1[1];
    dVar1 = dVar1 + *(double *)(param_1[1] + 8);
    auVar11._8_4_ = SUB84(dVar4,0);
    auVar11._0_8_ = dVar3 + *(double *)*param_1;
    auVar11._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    *param_1 = auVar11;
    auVar7._8_4_ = SUB84(dVar1,0);
    auVar7._0_8_ = dVar28 + dVar27;
    auVar7._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    param_1[1] = auVar7;
    return;
  }
  dVar3 = param_3[1];
  dVar4 = param_3[2];
  dVar27 = param_3[3];
  param_5 = param_5 * param_6;
  uVar38 = SUB84((double)param_6,0);
  uVar39 = (undefined4)((ulonglong)(double)param_6 >> 0x20);
  auVar5._8_4_ = uVar38;
  auVar5._0_8_ = (double)param_6;
  auVar5._12_4_ = uVar39;
  auVar32 = divpd(*param_2,auVar5);
  auVar6._8_4_ = uVar38;
  auVar6._0_8_ = (double)param_6;
  auVar6._12_4_ = uVar39;
  auVar36 = divpd(param_2[1],auVar6);
  dVar16 = *(double *)*param_1 - *param_3;
  dVar20 = *(double *)(*param_1 + 8) - dVar3;
  dVar1 = *(double *)param_1[1] - dVar4;
  dVar28 = *(double *)(param_1[1] + 8) - dVar27;
  param_5 = (float)(longlong)
                   (param_5 * 0.15915494 +
                   *(float *)(&DAT_14a184448 + (ulonglong)(param_5 < 0.0) * 4)) * -6.2831855 +
            param_5;
  if (param_5 <= 1.5707964) {
    if (-1.5707964 <= param_5) {
      fVar37 = 1.0;
      goto LAB_147b53fdb;
    }
    fVar37 = -3.1415927;
  }
  else {
    fVar37 = 3.1415927;
  }
  param_5 = fVar37 - param_5;
  fVar37 = -1.0;
LAB_147b53fdb:
  fVar40 = param_5 * param_5;
  param_5 = (((((fVar40 * -2.3889859e-08 + 2.7525562e-06) * fVar40 + -0.00019840874) * fVar40 +
              0.008333331) * fVar40 + -0.16666667) * fVar40 + 1.0) * param_5;
  dVar13 = (double)((((((fVar40 * -2.6051615e-07 + 2.4760495e-05) * fVar40 + -0.0013888378) * fVar40
                      + 0.041666638) * fVar40 + -0.5) * fVar40 + 1.0) * fVar37);
  dVar17 = (double)param_5;
  *(double *)*param_1 = auVar32._0_8_ * dVar17 + *param_3 + dVar16 * dVar13;
  *(double *)(*param_1 + 8) = auVar32._8_8_ * dVar17 + dVar3 + dVar20 * dVar13;
  *(double *)param_1[1] = auVar36._0_8_ * dVar17 + dVar4 + dVar1 * dVar13;
  *(double *)(param_1[1] + 8) = auVar36._8_8_ * dVar17 + dVar27 + dVar28 * dVar13;
  dVar3 = *(double *)(*param_2 + 8);
  dVar4 = *(double *)param_2[1];
  dVar27 = (double)(param_6 * param_5);
  dVar28 = dVar13 * *(double *)(param_2[1] + 8) - dVar28 * dVar27;
  *(double *)*param_2 = *(double *)*param_2 * dVar13 - dVar16 * dVar27;
  *(double *)(*param_2 + 8) = dVar3 * dVar13 - dVar20 * dVar27;
  auVar9._8_4_ = SUB84(dVar28,0);
  auVar9._0_8_ = dVar13 * dVar4 - dVar1 * dVar27;
  auVar9._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
  param_2[1] = auVar9;
  return;
}



// FUNCTION 147b54764 FUN_147b54764 body=586 status=ok
// SIG undefined FUN_147b54764(void)

undefined1 (*) [16] FUN_147b54764(double *param_1,undefined1 (*param_2) [16],double *param_3)

{
  double dVar1;
  double dVar3;
  double dVar5;
  double dVar7;
  double dVar9;
  double dVar11;
  double dVar13;
  double dVar15;
  double dVar17;
  double dVar19;
  double dVar21;
  double dVar23;
  undefined1 auVar25 [16];
  double dVar26;
  undefined1 auVar27 [16];
  double dVar28;
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar2;
  double dVar4;
  double dVar6;
  double dVar8;
  double dVar10;
  double dVar12;
  double dVar14;
  double dVar16;
  double dVar18;
  double dVar20;
  double dVar22;
  double dVar24;
  
  dVar30 = *param_1;
  dVar31 = param_1[1];
  dVar32 = param_1[2];
  dVar33 = param_1[3];
  dVar34 = *param_3;
  dVar35 = param_3[1];
  dVar36 = param_3[2];
  dVar37 = param_3[3];
  dVar1 = param_1[3];
  dVar2 = param_1[3];
  dVar3 = *param_1;
  dVar4 = *param_1;
  dVar5 = param_1[1];
  dVar6 = param_1[1];
  dVar7 = param_1[2];
  dVar8 = param_1[2];
  dVar26 = dVar8 * dVar34 * 1.0 + dVar6 * dVar37 + dVar4 * dVar36 * -1.0 + dVar2 * dVar35;
  dVar9 = param_1[7];
  dVar10 = param_1[7];
  dVar11 = param_1[4];
  dVar12 = param_1[4];
  dVar13 = param_1[5];
  dVar14 = param_1[5];
  dVar15 = param_1[6];
  dVar16 = param_1[6];
  dVar17 = param_3[7];
  dVar18 = param_3[7];
  dVar19 = param_3[4];
  dVar20 = param_3[4];
  dVar21 = param_3[5];
  dVar22 = param_3[5];
  dVar23 = param_3[6];
  dVar24 = param_3[6];
  dVar28 = dVar30 * dVar24 * 1.0 + dVar33 * dVar22 + dVar32 * dVar20 * -1.0 + dVar31 * dVar18 +
           dVar34 * dVar16 * 1.0 + dVar37 * dVar14 + dVar36 * dVar12 * -1.0 + dVar35 * dVar10;
  dVar10 = dVar32 * dVar24 * -1.0 + ((dVar20 * dVar30 * -1.0 + dVar18 * dVar33) - dVar31 * dVar22) +
           dVar36 * dVar16 * -1.0 + ((dVar12 * dVar34 * -1.0 + dVar10 * dVar37) - dVar35 * dVar14);
  auVar25._8_4_ = SUB84(dVar26,0);
  auVar25._0_8_ = dVar7 * dVar35 * -1.0 + dVar5 * dVar36 + dVar3 * dVar37 * 1.0 + dVar1 * dVar34;
  auVar25._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
  *param_2 = auVar25;
  *(double *)param_2[1] =
       dVar7 * dVar37 * 1.0 + ((dVar3 * dVar35 * 1.0 + dVar1 * dVar36) - dVar5 * dVar34);
  *(double *)(param_2[1] + 8) =
       dVar8 * dVar36 * -1.0 + ((dVar4 * dVar34 * -1.0 + dVar2 * dVar37) - dVar6 * dVar35);
  auVar27._8_4_ = SUB84(dVar28,0);
  auVar27._0_8_ =
       dVar31 * dVar23 * -1.0 + dVar32 * dVar21 + dVar33 * dVar19 * 1.0 + dVar30 * dVar17 +
       dVar35 * dVar15 * -1.0 + dVar36 * dVar13 + dVar37 * dVar11 * 1.0 + dVar34 * dVar9;
  auVar27._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
  param_2[2] = auVar27;
  auVar29._8_4_ = SUB84(dVar10,0);
  auVar29._0_8_ =
       dVar33 * dVar23 * 1.0 + ((dVar19 * dVar31 * 1.0 + dVar17 * dVar32) - dVar30 * dVar21) +
       dVar37 * dVar15 * 1.0 + ((dVar11 * dVar35 * 1.0 + dVar9 * dVar36) - dVar34 * dVar13);
  auVar29._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  param_2[3] = auVar29;
  return param_2;
}



// FUNCTION 147b549b4 FUN_147b549b4 body=250 status=ok
// SIG undefined FUN_147b549b4(void)

void FUN_147b549b4(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  int local_20;
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 = 0 < (int)(1 << ((byte)local_20 & 0x1f) & local_1c) && local_20 < 0x20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b54ab0 FUN_147b54ab0 body=255 status=ok
// SIG undefined FUN_147b54ab0(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_147b54ab0(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  uint *puVar2;
  undefined1 auStack_48 [40];
  int local_20 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_20 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_20 + 1);
  }
  puVar2 = (uint *)(local_20 + 1);
  if (*(uint **)(param_2 + 0x38) != (uint *)0x0) {
    puVar2 = *(uint **)(param_2 + 0x38);
  }
  local_20[0] = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_20[0] < 0x20) {
    bVar1 = (byte)local_20[0] & 0x1f;
    *puVar2 = *puVar2 & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b54bb0 FUN_147b54bb0 body=263 status=ok
// SIG undefined FUN_147b54bb0(void)

void FUN_147b54bb0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined1 local_21;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_21 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_20 == 0) {
    local_30 = 0;
  }
  else {
    FUN_1414aa4be(local_20,&local_30,local_21);
  }
  *param_3 = local_30;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b54cb8 FUN_147b54cb8 body=248 status=ok
// SIG undefined FUN_147b54cb8(void)

void FUN_147b54cb8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [39];
  byte local_21;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_21 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_20 == 0) {
    uVar1 = 0xff;
  }
  else {
    uVar1 = *(undefined1 *)(*(longlong *)(local_20 + 0x40) + 8 + (ulonglong)local_21 * 0x10);
  }
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b54db2 FUN_147b54db2 body=388 status=ok
// SIG undefined FUN_147b54db2(void)

ulonglong FUN_147b54db2(undefined8 param_1,longlong param_2,uint *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auStack_48 [36];
  uint local_24;
  uint local_20;
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (ulonglong)(local_24 - 1);
  uVar3 = 0xffffffff;
  if (local_24 - 1 < 0x1f) {
    uVar1 = (ulonglong)local_20;
    uVar2 = 0;
    do {
      if ((int)(1 << ((byte)uVar2 & 0x1f) & local_1c) < 1) {
        uVar4 = 0;
        if (local_20 < local_24) {
          uVar4 = (ulonglong)local_20;
        }
        while (uVar3 = (uint)uVar4, (local_1c >> (uVar3 & 0x1f) & 1) != 0) {
          uVar1 = (longlong)(int)(uVar3 + 1) / (longlong)(int)local_24 & 0xffffffff;
          uVar4 = (longlong)(int)(uVar3 + 1) % (longlong)(int)local_24 & 0xffffffff;
        }
        break;
      }
      uVar2 = uVar2 + 1;
    } while (local_24 != uVar2);
  }
  *param_3 = uVar3;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b54f38 FUN_147b54f38 body=302 status=ok
// SIG undefined FUN_147b54f38(void)

void FUN_147b54f38(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145c69fda(local_1c,local_20,local_24);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5506e FUN_147b5506e body=262 status=ok
// SIG undefined FUN_147b5506e(void)

void FUN_147b5506e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_29 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  lVar1 = local_28;
  uVar3 = local_29;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_28 == 0) {
    uVar3 = 0xff;
  }
  else {
    cVar2 = FUN_1427e11e8(local_28,local_29);
    if (cVar2 == '\0') {
      uVar3 = FUN_1404d8156(lVar1);
    }
  }
  *param_3 = uVar3;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5517c FUN_147b5517c body=258 status=ok
// SIG undefined FUN_147b5517c(void)

void FUN_147b5517c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 auStack_48 [40];
  int local_20;
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  iVar1 = 0;
  if (local_20 - 1U < 0x1f) {
    do {
      if (0 < (int)(1 << ((byte)iVar1 & 0x1f) & local_1c)) {
        iVar1 = 1;
        goto LAB_147b5525f;
      }
      iVar1 = iVar1 + 1;
    } while (local_20 != iVar1);
    iVar1 = 0;
  }
LAB_147b5525f:
  *param_3 = (char)iVar1;
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147b55288 FUN_147b55288 body=571 status=ok
// SIG undefined FUN_147b55288(void)

void FUN_147b55288(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  longlong *plVar2;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined8 local_58;
  undefined1 local_50 [16];
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  plVar2 = &local_40;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  puVar1 = local_50;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  local_58 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_68 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    local_68 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143545bc4(local_30,local_38,plVar2,puVar1);
  if ((DAT_14c950c29 == '\x01') && (*plVar2 != 0)) {
    FUN_1456cec3c();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b554c4 FUN_147b554c4 body=972 status=ok
// SIG undefined FUN_147b554c4(void)

void FUN_147b554c4(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  undefined1 auStack_d8 [40];
  undefined4 *local_b0;
  undefined1 local_a5;
  undefined4 local_a4;
  undefined1 local_9d;
  undefined4 local_9c;
  undefined1 local_95;
  undefined4 local_94;
  undefined1 local_8d;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined8 uStack_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  local_5c = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_8c = 0;
  puVar1 = (undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_8c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_8c);
  }
  local_b0 = *(undefined4 **)(param_2 + 0x38);
  local_8d = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_8d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_8d);
  }
  puVar9 = *(undefined1 **)(param_2 + 0x38);
  local_94 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_94);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_94);
  }
  puVar8 = *(undefined4 **)(param_2 + 0x38);
  local_95 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_95);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_95);
  }
  puVar7 = *(undefined1 **)(param_2 + 0x38);
  local_9c = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_9c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_9c);
  }
  puVar6 = *(undefined4 **)(param_2 + 0x38);
  local_9d = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_9d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_9d);
  }
  puVar5 = *(undefined1 **)(param_2 + 0x38);
  local_a4 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a4);
  }
  puVar4 = *(undefined4 **)(param_2 + 0x38);
  local_a5 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a5);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a5);
  }
  puVar2 = &local_a4;
  if (puVar4 != (undefined4 *)0x0) {
    puVar2 = puVar4;
  }
  puVar3 = &local_9d;
  if (puVar5 != (undefined1 *)0x0) {
    puVar3 = puVar5;
  }
  puVar4 = &local_9c;
  if (puVar6 != (undefined4 *)0x0) {
    puVar4 = puVar6;
  }
  puVar5 = &local_95;
  if (puVar7 != (undefined1 *)0x0) {
    puVar5 = puVar7;
  }
  puVar6 = &local_94;
  if (puVar8 != (undefined4 *)0x0) {
    puVar6 = puVar8;
  }
  puVar7 = &local_8d;
  if (puVar9 != (undefined1 *)0x0) {
    puVar7 = puVar9;
  }
  puVar8 = &local_8c;
  if (local_b0 != (undefined4 *)0x0) {
    puVar8 = local_b0;
  }
  puVar9 = &local_a5;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar9 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *puVar8 = 0;
  *puVar7 = 0;
  *puVar6 = 0;
  *puVar5 = 0;
  *puVar4 = 0;
  *puVar3 = 0;
  *puVar2 = 0;
  *puVar9 = 0;
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b55892 FUN_147b55892 body=271 status=ok
// SIG undefined FUN_147b55892(void)

void FUN_147b55892(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_af8 [32];
  undefined8 local_ad8 [16];
  undefined1 local_a58 [2264];
  longlong local_180;
  longlong local_f8;
  char local_68;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_af8;
  FUN_1400e6e60(local_a58);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a58);
  }
  puVar2 = local_a58;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1403f8f3e(puVar2,local_ad8,0);
  puVar3 = local_ad8;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_3 = *puVar3;
    puVar3 = puVar3 + 1;
    param_3 = param_3 + 1;
  }
  if (local_68 == '\x01') {
    local_68 = '\0';
  }
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  if (local_180 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_af8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b559a2 FUN_147b559a2 body=321 status=ok
// SIG undefined FUN_147b559a2(void)

void FUN_147b559a2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_30;
  uStack_44 = uStack_2c;
  uStack_40 = uStack_28;
  uStack_3c = uStack_24;
  FUN_14132dc7c(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b55ae4 FUN_147b55ae4 body=285 status=ok
// SIG undefined FUN_147b55ae4(void)

void FUN_147b55ae4(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b5b347();
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b55c02 FUN_147b55c02 body=285 status=ok
// SIG undefined FUN_147b55c02(void)

void FUN_147b55c02(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b5b347();
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b55d20 FUN_147b55d20 body=285 status=ok
// SIG undefined FUN_147b55d20(void)

void FUN_147b55d20(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b5b347();
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b55e3e FUN_147b55e3e body=285 status=ok
// SIG undefined FUN_147b55e3e(void)

void FUN_147b55e3e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b5b347();
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b55f68 FUN_147b55f68 body=647 status=ok
// SIG undefined FUN_147b55f68(void)

void FUN_147b55f68(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  undefined1 local_80;
  undefined1 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 local_31;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_31 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_31);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_31);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  local_48 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  iVar1 = local_48;
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = &local_68;
  local_68 = local_44;
  uStack_64 = uStack_40;
  uStack_60 = uStack_3c;
  uStack_5c = uStack_38;
  local_78 = local_4c != 0;
  local_80 = iVar1 != 0;
  uVar2 = FUN_147b561f0(local_28,local_2c,local_30,local_31);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b561f0 FUN_147b561f0 body=206 status=ok
// SIG undefined FUN_147b561f0(void)

longlong FUN_147b561f0(undefined8 param_1,int param_2,int param_3,undefined1 param_4,
                      undefined4 *param_5,char param_6,byte param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  lVar5 = 0;
  if (((0 < param_2) && (0 < param_3)) && (lVar4 != 0)) {
    lVar5 = FUN_1407635e4(param_1);
    *(undefined1 *)(lVar5 + 0x15b) = param_4;
    uVar1 = param_5[1];
    uVar2 = param_5[2];
    uVar3 = param_5[3];
    *(undefined4 *)(lVar5 + 0x148) = *param_5;
    *(undefined4 *)(lVar5 + 0x14c) = uVar1;
    *(undefined4 *)(lVar5 + 0x150) = uVar2;
    *(undefined4 *)(lVar5 + 0x154) = uVar3;
    *(byte *)(lVar5 + 0x15c) = *(byte *)(lVar5 + 0x15c) & 0xfd | param_6 * '\x02';
    *(uint *)(lVar5 + 0x13c) = (*(uint *)(lVar5 + 0x13c) & 0xfffffffd) + (uint)param_7 * 2;
    FUN_141646166(lVar5,param_2,param_3);
    FUN_140768b6e(lVar5,1);
  }
  return lVar5;
}



// FUNCTION 147b562ca FUN_147b562ca body=702 status=ok
// SIG undefined FUN_147b562ca(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_147b562ca(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_98 [32];
  uint local_78;
  undefined4 *local_70;
  undefined1 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int local_48 [3];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  byte local_2d;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_2d = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2d);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
  }
  local_48[1] = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 1);
  }
  local_48[0] = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = &local_58;
  local_58 = local_48[2];
  uStack_54 = uStack_3c;
  uStack_50 = uStack_38;
  uStack_4c = uStack_34;
  local_68 = local_48[0] != 0;
  local_78 = (uint)local_2d;
  uVar1 = FUN_147b5658a(local_20,local_24,local_28,local_2c);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5658a FUN_147b5658a body=214 status=ok
// SIG undefined FUN_147b5658a(void)

longlong FUN_147b5658a(undefined8 param_1,int param_2,int param_3,int param_4,uint param_5,
                      undefined4 *param_6,byte param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  lVar6 = 0;
  if ((((0 < param_2) && (0 < param_3)) && (0 < param_4)) && (lVar6 = 0, lVar5 != 0)) {
    lVar6 = FUN_147b5af98(param_1);
    uVar1 = param_6[1];
    uVar2 = param_6[2];
    uVar3 = param_6[3];
    *(undefined4 *)(lVar6 + 0x14c) = *param_6;
    *(undefined4 *)(lVar6 + 0x150) = uVar1;
    *(undefined4 *)(lVar6 + 0x154) = uVar2;
    *(undefined4 *)(lVar6 + 0x158) = uVar3;
    *(uint *)(lVar6 + 0x13c) = (*(uint *)(lVar6 + 0x13c) & 0xfffffffd) + (uint)param_7 * 2;
    if (param_5 < 0xb) {
      uVar4 = (&DAT_14a9b2199)[param_5];
    }
    else {
      uVar4 = 0;
    }
    FUN_147d71a8e(lVar6,param_2,param_3,param_4,uVar4);
    FUN_14373a478(lVar6,1);
  }
  return lVar6;
}



// FUNCTION 147b5666c FUN_147b5666c body=702 status=ok
// SIG undefined FUN_147b5666c(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_147b5666c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_98 [32];
  uint local_78;
  undefined4 *local_70;
  undefined1 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int local_48 [3];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  byte local_2d;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_2d = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2d);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
  }
  local_48[1] = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 1);
  }
  local_48[0] = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = &local_58;
  local_58 = local_48[2];
  uStack_54 = uStack_3c;
  uStack_50 = uStack_38;
  uStack_4c = uStack_34;
  local_68 = local_48[0] != 0;
  local_78 = (uint)local_2d;
  uVar1 = FUN_147b5692c(local_20,local_24,local_28,local_2c);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5692c FUN_147b5692c body=214 status=ok
// SIG undefined FUN_147b5692c(void)

longlong FUN_147b5692c(undefined8 param_1,int param_2,int param_3,int param_4,uint param_5,
                      undefined4 *param_6,byte param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  lVar6 = 0;
  if ((((0 < param_2) && (0 < param_3)) && (0 < param_4)) && (lVar6 = 0, lVar5 != 0)) {
    lVar6 = FUN_147b5b048(param_1);
    uVar1 = param_6[1];
    uVar2 = param_6[2];
    uVar3 = param_6[3];
    *(undefined4 *)(lVar6 + 0x14c) = *param_6;
    *(undefined4 *)(lVar6 + 0x150) = uVar1;
    *(undefined4 *)(lVar6 + 0x154) = uVar2;
    *(undefined4 *)(lVar6 + 0x158) = uVar3;
    *(uint *)(lVar6 + 0x13c) = (*(uint *)(lVar6 + 0x13c) & 0xfffffffd) + (uint)param_7 * 2;
    if (param_5 < 0xb) {
      uVar4 = (&DAT_14a9b2199)[param_5];
    }
    else {
      uVar4 = 0;
    }
    FUN_1464089e8(lVar6,param_2,param_3,param_4,uVar4);
    FUN_14373cdea(lVar6,1);
  }
  return lVar6;
}



// FUNCTION 147b56a02 FUN_147b56a02 body=321 status=ok
// SIG undefined FUN_147b56a02(void)

void FUN_147b56a02(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14132ebe8(local_18,local_20,local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b56b48 FUN_147b56b48 body=205 status=ok
// SIG undefined FUN_147b56b48(void)

void FUN_147b56b48(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  iVar1 = local_1c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((DAT_14cb0d2b0 != 0) && (lVar2 = *(longlong *)(DAT_14cb0d2b0 + 0xc20), lVar2 != 0)) {
    lVar2 = (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x38))(lVar2 + 0x28);
    if (lVar2 != 0) {
      *(uint *)(lVar2 + 0x18) = (*(uint *)(lVar2 + 0x18) & 0xfffffffd) + (uint)(iVar1 != 0) * 2;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b56c16 FUN_147b56c16 body=247 status=ok
// SIG undefined FUN_147b56c16(void)

void FUN_147b56c16(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  puVar1 = &local_20;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14354688c(local_18,puVar1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b56d0e FUN_147b56d0e body=405 status=ok
// SIG undefined FUN_147b56d0e(void)

void FUN_147b56d0e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  longlong local_48 [5];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_48[2] = 0;
  local_48[3] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b56ea4(local_18,local_20,local_48 + 2,local_48);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b56ea4 FUN_147b56ea4 body=3313 status=ok
// SIG undefined FUN_147b56ea4(void)

void FUN_147b56ea4(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  int *piVar1;
  longlong *plVar2;
  ushort uVar3;
  ushort uVar4;
  char cVar5;
  size_t sVar6;
  longlong lVar7;
  longlong *plVar8;
  wchar_t **ppwVar9;
  undefined2 *puVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  uint uVar14;
  wchar_t *pwVar15;
  undefined4 uVar16;
  undefined1 auStack_2c8 [40];
  undefined1 local_2a0 [8];
  longlong *local_298;
  undefined8 local_290;
  longlong *local_288;
  longlong *local_280 [2];
  undefined1 local_270 [16];
  undefined8 local_260;
  longlong *local_258;
  longlong *local_250 [2];
  longlong *local_240;
  undefined4 local_238;
  undefined1 local_230 [8];
  longlong *local_228;
  undefined8 local_220;
  longlong *local_218;
  longlong *local_210 [2];
  undefined1 local_200 [16];
  undefined1 local_1f0 [4];
  undefined1 local_1ec [4];
  longlong *local_1e8 [2];
  undefined8 local_1d8;
  longlong *local_1d0;
  longlong local_1c8 [3];
  longlong *local_1b0 [2];
  longlong *local_1a0 [2];
  undefined1 local_190 [8];
  undefined1 local_188 [16];
  longlong *local_178;
  undefined4 local_170;
  undefined2 *local_168;
  int local_160;
  undefined8 local_158;
  longlong *local_150;
  wchar_t **local_148;
  undefined1 *local_140;
  longlong local_138;
  undefined4 local_130;
  wchar_t *local_128;
  undefined4 local_120 [2];
  wchar_t *local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined1 local_f8 [16];
  undefined1 local_e8 [104];
  longlong local_80;
  int local_78;
  wchar_t *local_68;
  int local_60;
  longlong *local_58 [2];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  local_128 = L"";
  pwVar15 = L"";
  if (*(int *)(param_4 + 1) != 0) {
    pwVar15 = (wchar_t *)*param_4;
  }
  if (*(int *)(param_3 + 1) != 0) {
    local_128 = (wchar_t *)*param_3;
  }
  uVar16 = 0;
  local_120[0] = 0;
  if (local_128 != (wchar_t *)0x0) {
    sVar6 = wcslen(local_128);
    local_120[0] = (int)sVar6;
  }
  local_118 = pwVar15;
  if (pwVar15 != (wchar_t *)0x0) {
    sVar6 = wcslen(pwVar15);
    uVar16 = (int)sVar6;
  }
  local_110 = uVar16;
  FUN_140bee87a(&local_168,&local_128,2);
  FUN_144a5dc74(&local_178);
  FUN_146817020(&local_168,&local_178);
  if (param_2 == 0) {
    FUN_1446ddc76(local_190,"Blueprint",1);
    FUN_14276766e(&local_128,local_190);
    if (param_1 == 0) {
      FUN_140056680(local_1c8,&DAT_149e01fe8);
    }
    else {
      local_1c8[0] = 0;
      local_1c8[1] = 0;
      FUN_1401031ac(param_1,0);
    }
    FUN_140233b1a(local_1b0,local_1c8);
    local_68 = L"ExportRenderTarget_InvalidTextureRenderTarget";
    local_60 = 0x2d;
    FUN_1446e940c(local_1ec,&local_68);
    local_68 = L"KismetRenderingLibrary";
    local_60 = 0x16;
    FUN_1446e940c(local_1f0,&local_68);
    FUN_140208bae(local_1e8,local_1f0,local_1ec,
                  L"ExportRenderTarget[{0}]: TextureRenderTarget must be non-null.");
    FUN_14023409e(&local_1d8,local_1e8,1);
    local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
    FUN_14023423e(local_58,local_1b0);
    local_140 = local_48;
    local_148 = &local_68;
    FUN_14010d304(&local_138);
    local_158 = local_1d8;
    local_150 = local_1d0;
    if (local_1d0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_1d0 + 1) = (int)local_1d0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_1a0,&local_158,&local_138);
    FUN_14007f2db(local_138,local_130);
    if (local_138 != 0) {
      FUN_1400020a8();
    }
    if (local_58[0] != (longlong *)0x0) {
      (**(code **)(*local_58[0] + 0x10))();
    }
    if (local_1d0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_1d0 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_1d0)(local_1d0);
        LOCK();
        piVar1 = (int *)((longlong)local_1d0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_1d0 + 0x10))(local_1d0);
        }
      }
    }
    if (local_1b0[0] != (longlong *)0x0) {
      (**(code **)(*local_1b0[0] + 0x10))();
    }
    puVar13 = local_188;
LAB_147b5735d:
    FUN_1427679d4(&local_128,puVar13,local_1a0);
    plVar8 = *(longlong **)(puVar13 + 8);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
    if (local_1a0[0] != (longlong *)0x0) {
      (**(code **)(*local_1a0[0] + 0x10))();
    }
    if (local_1e8[0] != (longlong *)0x0) {
      (**(code **)(*local_1e8[0] + 0x10))();
    }
    if (local_1c8[0] != 0) {
      FUN_1400020a8();
    }
LAB_147b573cb:
    ppwVar9 = &local_128;
  }
  else {
    lVar7 = FUN_1447b4020(param_2);
    if (lVar7 == 0) {
      FUN_1446ddc76(local_190,"Blueprint",1);
      FUN_14276766e(&local_128,local_190);
      if (param_1 == 0) {
        FUN_140056680(local_1c8,&DAT_149e01fe8);
      }
      else {
        local_1c8[0] = 0;
        local_1c8[1] = 0;
        FUN_1401031ac(param_1,0);
      }
      FUN_140233b1a(local_210,local_1c8);
      local_68 = L"ExportRenderTarget_ReleasedTextureRenderTarget";
      local_60 = 0x2e;
      FUN_1446e940c(local_1ec,&local_68);
      local_68 = L"KismetRenderingLibrary";
      local_60 = 0x16;
      FUN_1446e940c(local_1f0,&local_68);
      FUN_140208bae(local_1e8,local_1f0,local_1ec,
                    L"ExportRenderTarget[{0}]: render target has been released.");
      FUN_14023409e(&local_220,local_1e8,1);
      local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
      FUN_14023423e(local_58,local_210);
      local_140 = local_48;
      local_148 = &local_68;
      FUN_14010d304(&local_138);
      local_158 = local_220;
      local_150 = local_218;
      if (local_218 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_218 + 1) = (int)local_218[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_1a0,&local_158,&local_138);
      FUN_14007f2db(local_138,local_130);
      if (local_138 != 0) {
        FUN_1400020a8();
      }
      if (local_58[0] != (longlong *)0x0) {
        (**(code **)(*local_58[0] + 0x10))();
      }
      if (local_218 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_218 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*local_218)(local_218);
          LOCK();
          piVar1 = (int *)((longlong)local_218 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_218 + 0x10))(local_218);
          }
        }
      }
      if (local_210[0] != (longlong *)0x0) {
        (**(code **)(*local_210[0] + 0x10))();
      }
      puVar13 = local_200;
      goto LAB_147b5735d;
    }
    cVar5 = FUN_144a7c5f6(&local_178);
    if (cVar5 != '\0') {
      if (*(int *)(param_4 + 1) < 2) {
        FUN_1446ddc76(local_190,"Blueprint",1);
        FUN_14276766e(&local_128,local_190);
        if (param_1 == 0) {
          FUN_140056680(local_1c8,&DAT_149e01fe8);
        }
        else {
          local_1c8[0] = 0;
          local_1c8[1] = 0;
          FUN_1401031ac(param_1,0);
        }
        FUN_140233b1a(local_280,local_1c8);
        local_68 = L"ExportRenderTarget_InvalidFileName";
        local_60 = 0x22;
        FUN_1446e940c(local_1ec,&local_68);
        local_68 = L"KismetRenderingLibrary";
        local_60 = 0x16;
        FUN_1446e940c(local_1f0,&local_68);
        FUN_140208bae(local_1e8,local_1f0,local_1ec,
                      L"ExportRenderTarget[{0}]: FileName must be non-empty.");
        FUN_14023409e(&local_290,local_1e8,1);
        local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
        FUN_14023423e(local_58,local_280);
        local_140 = local_48;
        local_148 = &local_68;
        FUN_14010d304(&local_138);
        local_158 = local_290;
        local_150 = local_288;
        if (local_288 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_288 + 1) = (int)local_288[1] + 1;
          UNLOCK();
        }
        FUN_14010c016(local_1a0,&local_158,&local_138);
        FUN_14007f2db(local_138,local_130);
        if (local_138 != 0) {
          FUN_1400020a8();
        }
        if (local_58[0] != (longlong *)0x0) {
          (**(code **)(*local_58[0] + 0x10))();
        }
        if (local_288 != (longlong *)0x0) {
          LOCK();
          plVar8 = local_288 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
            (**(code **)*local_288)(local_288);
            LOCK();
            piVar1 = (int *)((longlong)local_288 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_288 + 0x10))(local_288);
            }
          }
        }
        if (local_280[0] != (longlong *)0x0) {
          (**(code **)(*local_280[0] + 0x10))();
        }
        puVar13 = local_270;
        goto LAB_147b5735d;
      }
      plVar8 = (longlong *)FUN_14054d1d4();
      puVar10 = local_168;
      if (local_160 == 0) {
        puVar10 = &DAT_149dfb77a;
      }
      plVar8 = (longlong *)(**(code **)(*plVar8 + 0x20))(plVar8,puVar10,0);
      if (plVar8 != (longlong *)0x0) {
        FUN_146866eea(&local_128);
        if (*(char *)(param_2 + 0x15b) == '\x06') {
          lVar7 = 0;
          FUN_144a06df0(&local_68,&local_168,0);
          pwVar15 = L"";
          if (local_60 != 0) {
            pwVar15 = local_68;
          }
          while( true ) {
            uVar3 = *(ushort *)((longlong)pwVar15 + lVar7);
            uVar11 = (uint)uVar3;
            uVar4 = *(ushort *)((longlong)&DAT_14a392fde + lVar7);
            uVar14 = (uint)uVar4;
            if (uVar3 != uVar4) {
              if ((uVar4 | uVar3) < 0x80) {
                uVar11 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                uVar14 = (uint)(byte)(&DAT_149e05da0)[uVar4];
                if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4]) goto LAB_147b57ae3;
              }
              iVar12 = uVar11 - uVar14;
              goto LAB_147b57b6f;
            }
            if (uVar3 == 0) break;
LAB_147b57ae3:
            lVar7 = lVar7 + 2;
          }
          iVar12 = 0;
LAB_147b57b6f:
          if (local_68 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          if (iVar12 == 0) {
            cVar5 = FUN_147af0d1e(param_2,&local_128);
          }
          else {
            cVar5 = FUN_147af0f22();
          }
        }
        else {
          cVar5 = FUN_147af0e20(param_2,&local_128);
        }
        if (cVar5 != '\0') {
          (**(code **)(*plVar8 + 0x170))(plVar8,local_80,(longlong)local_78);
        }
        (**(code **)*plVar8)(plVar8,1);
        if (local_80 != 0) {
          FUN_1400020a8();
        }
        FUN_144a7fc42(&local_128);
        goto LAB_147b573d8;
      }
      FUN_1446ddc76(&local_138,"Blueprint",1);
      FUN_14276766e(&local_128,&local_138);
      local_68 = L"ExportRenderTarget_FileWriterFailedToCreate";
      local_60 = 0x2b;
      FUN_1446e940c(&local_148,&local_68);
      local_68 = L"KismetRenderingLibrary";
      local_60 = 0x16;
      FUN_1446e940c(&local_158,&local_68);
      FUN_140208bae(&local_68,&local_158,&local_148,
                    L"ExportRenderTarget: FileWrite failed to create.");
      FUN_1427679d4(&local_128,local_2a0,&local_68);
      if (local_298 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_298 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*local_298)(local_298);
          LOCK();
          piVar1 = (int *)((longlong)local_298 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_298 + 0x10))(local_298);
          }
        }
      }
      if (local_68 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_68 + 0x10))();
      }
      goto LAB_147b573cb;
    }
    FUN_1446ddc76(local_190,"Blueprint",1);
    FUN_14276766e(&local_68,local_190);
    local_240 = local_178;
    if (local_178 != (longlong *)0x0) {
      (**(code **)(*local_178 + 8))();
    }
    local_238 = local_170;
    if (param_1 == 0) {
      FUN_140056680(local_1c8,&DAT_149e01fe8);
    }
    else {
      local_1c8[0] = 0;
      local_1c8[1] = 0;
      FUN_1401031ac(param_1,0);
    }
    FUN_140233b1a(local_250,local_1c8);
    local_128 = L"ExportRenderTarget_InvalidFilePath";
    local_120[0] = 0x22;
    FUN_1446e940c(local_1ec,&local_128);
    local_128 = L"KismetRenderingLibrary";
    local_120[0] = 0x16;
    FUN_1446e940c(local_1f0,&local_128);
    FUN_140208bae(local_1e8,local_1f0,local_1ec,
                  L"ExportRenderTarget[{0}]: Invalid file path provided: \'{1}\'");
    FUN_14023409e(&local_260,local_1e8,1);
    local_128 = (wchar_t *)CONCAT44(local_128._4_4_,4);
    FUN_14023423e(&local_118,local_250);
    local_108 = 4;
    FUN_14023423e(local_f8,&local_240);
    local_140 = local_e8;
    local_148 = &local_128;
    FUN_14010d304(&local_138);
    local_158 = local_260;
    local_150 = local_258;
    if (local_258 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_258 + 1) = (int)local_258[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_1a0,&local_158,&local_138);
    FUN_14007f2db(local_138,local_130);
    if (local_138 != 0) {
      FUN_1400020a8();
    }
    lVar7 = 0x30;
    do {
      plVar8 = *(longlong **)((longlong)local_120 + lVar7 + -8);
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x10))();
        *(undefined8 *)((longlong)local_120 + lVar7 + -8) = 0;
        *(undefined4 *)((longlong)local_120 + lVar7) = 0;
      }
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != -0x10);
    if (local_258 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_258 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_258)(local_258);
        LOCK();
        piVar1 = (int *)((longlong)local_258 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_258 + 0x10))(local_258);
        }
      }
    }
    if (local_250[0] != (longlong *)0x0) {
      (**(code **)(*local_250[0] + 0x10))();
    }
    if (local_240 != (longlong *)0x0) {
      (**(code **)(*local_240 + 0x10))();
    }
    FUN_1427679d4(&local_68,local_230,local_1a0);
    if (local_228 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_228 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
    if (local_1a0[0] != (longlong *)0x0) {
      (**(code **)(*local_1a0[0] + 0x10))();
    }
    if (local_1e8[0] != (longlong *)0x0) {
      (**(code **)(*local_1e8[0] + 0x10))();
    }
    if (local_1c8[0] != 0) {
      FUN_1400020a8();
    }
    ppwVar9 = &local_68;
  }
  FUN_1427678c0(ppwVar9);
LAB_147b573d8:
  if (local_178 != (longlong *)0x0) {
    (**(code **)(*local_178 + 0x10))();
  }
  if (local_168 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147b57b96 FUN_147b57b96 body=400 status=ok
// SIG undefined FUN_147b57b96(void)

void FUN_147b57b96(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  longlong local_48 [5];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_48[2] = 0;
  local_48[3] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b57d28(local_20,local_48 + 2,local_48);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b57d28 FUN_147b57d28 body=1725 status=ok
// SIG undefined FUN_147b57d28(void)

void FUN_147b57d28(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  size_t sVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  wchar_t *_Str;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [8];
  longlong *local_1f0;
  undefined1 local_1e8 [4];
  undefined1 local_1e4 [4];
  longlong *local_1e0 [2];
  undefined8 local_1d0;
  longlong *local_1c8;
  longlong *local_1c0;
  undefined4 local_1b8;
  longlong *local_1b0 [2];
  undefined1 local_1a0 [8];
  undefined1 local_198 [8];
  longlong *local_190;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  longlong *local_168;
  undefined4 local_160;
  undefined2 *local_158;
  int local_150;
  undefined8 local_148;
  longlong *local_140;
  wchar_t **local_138;
  ulonglong *local_130;
  longlong local_128;
  undefined4 local_120;
  wchar_t *local_118;
  undefined4 local_110;
  wchar_t *local_108;
  undefined4 local_100;
  longlong local_70;
  int local_68;
  wchar_t *local_58;
  undefined4 local_50;
  longlong *local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_118 = L"";
  _Str = L"";
  if (*(int *)(param_3 + 1) != 0) {
    _Str = (wchar_t *)*param_3;
  }
  if (*(int *)(param_2 + 1) != 0) {
    local_118 = (wchar_t *)*param_2;
  }
  uVar8 = 0;
  local_110 = 0;
  if (local_118 != (wchar_t *)0x0) {
    sVar4 = wcslen(local_118);
    local_110 = (int)sVar4;
  }
  local_108 = _Str;
  if (_Str != (wchar_t *)0x0) {
    sVar4 = wcslen(_Str);
    uVar8 = (int)sVar4;
  }
  local_100 = uVar8;
  FUN_140bee87a(&local_158,&local_118,2);
  FUN_144a5dc74(&local_168);
  FUN_146817020(&local_158,&local_168);
  if (param_1 == 0) {
    FUN_1446ddc76(&local_128,"Blueprint",1);
    FUN_14276766e(&local_118,&local_128);
    local_58 = L"ExportTexture2D_InvalidTextureRenderTarget";
    local_50 = 0x2a;
    FUN_1446e940c(&local_138,&local_58);
    local_58 = L"KismetRenderingLibrary";
    local_50 = 0x16;
    FUN_1446e940c(&local_148,&local_58);
    FUN_140208bae(&local_58,&local_148,&local_138,
                  L"ExportTexture2D: TextureRenderTarget must be non-null.");
    puVar7 = local_188;
  }
  else {
    if ((*(int *)(param_3 + 1) < 2) || (cVar3 = FUN_144a7c5f6(&local_168), cVar3 == '\0'))
    goto LAB_147b57f27;
    plVar5 = (longlong *)FUN_14054d1d4();
    puVar6 = local_158;
    if (local_150 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5,puVar6,0);
    if (plVar5 != (longlong *)0x0) {
      FUN_146866eea(&local_118);
      cVar3 = FUN_14352f78c(param_1,&local_118);
      if (cVar3 != '\0') {
        (**(code **)(*plVar5 + 0x170))(plVar5,local_70,(longlong)local_68);
      }
      (**(code **)*plVar5)(plVar5,1);
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      FUN_144a7fc42(&local_118);
      goto LAB_147b57f27;
    }
    FUN_1446ddc76(&local_128,"Blueprint",1);
    FUN_14276766e(&local_118,&local_128);
    local_58 = L"ExportTexture2D_FileWriterFailedToCreate";
    local_50 = 0x28;
    FUN_1446e940c(&local_138,&local_58);
    local_58 = L"KismetRenderingLibrary";
    local_50 = 0x16;
    FUN_1446e940c(&local_148,&local_58);
    FUN_140208bae(&local_58,&local_148,&local_138,L"ExportTexture2D: FileWrite failed to create.");
    puVar7 = local_178;
  }
  FUN_1427679d4(&local_118,puVar7,&local_58);
  plVar5 = *(longlong **)(puVar7 + 8);
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
  if (local_58 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_58 + 0x10))();
  }
  FUN_1427678c0(&local_118);
LAB_147b57f27:
  cVar3 = FUN_144a7c5f6(&local_168);
  if (cVar3 == '\0') {
    FUN_1446ddc76(local_1a0,"Blueprint",1);
    FUN_14276766e(&local_118,local_1a0);
    local_1c0 = local_168;
    if (local_168 != (longlong *)0x0) {
      (**(code **)(*local_168 + 8))();
    }
    local_1b8 = local_160;
    local_58 = L"ExportTexture2D_InvalidFilePath";
    local_50 = 0x1f;
    FUN_1446e940c(local_1e4,&local_58);
    local_58 = L"KismetRenderingLibrary";
    local_50 = 0x16;
    FUN_1446e940c(local_1e8,&local_58);
    FUN_140208bae(local_1e0,local_1e8,local_1e4,
                  L"ExportTexture2D: Invalid file path provided: \'{0}\'");
    FUN_14023409e(&local_1d0,local_1e0,1);
    local_58 = (wchar_t *)CONCAT44(local_58._4_4_,4);
    FUN_14023423e(local_48,&local_1c0);
    local_130 = &local_38;
    local_138 = &local_58;
    FUN_14010d304(&local_128);
    local_148 = local_1d0;
    local_140 = local_1c8;
    if (local_1c8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_1c8 + 1) = (int)local_1c8[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_1b0,&local_148,&local_128);
    FUN_14007f2db(local_128,local_120);
    if (local_128 != 0) {
      FUN_1400020a8();
    }
    if (local_48[0] != (longlong *)0x0) {
      (**(code **)(*local_48[0] + 0x10))();
    }
    if (local_1c8 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_1c8 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_1c8)(local_1c8);
        LOCK();
        piVar2 = (int *)((longlong)local_1c8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_1c8 + 0x10))(local_1c8);
        }
      }
    }
    if (local_1c0 != (longlong *)0x0) {
      (**(code **)(*local_1c0 + 0x10))();
    }
    FUN_1427679d4(&local_118,local_198,local_1b0);
    if (local_190 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_190 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_190)(local_190);
        LOCK();
        piVar2 = (int *)((longlong)local_190 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_190 + 0x10))(local_190);
        }
      }
    }
    if (local_1b0[0] != (longlong *)0x0) {
      (**(code **)(*local_1b0[0] + 0x10))();
    }
    if (local_1e0[0] != (longlong *)0x0) {
      (**(code **)(*local_1e0[0] + 0x10))();
    }
    FUN_1427678c0(&local_118);
  }
  if (*(int *)(param_3 + 1) < 2) {
    FUN_1446ddc76(&local_128,"Blueprint",1);
    FUN_14276766e(&local_118,&local_128);
    local_58 = L"ExportTexture2D_InvalidFileName";
    local_50 = 0x1f;
    FUN_1446e940c(&local_138,&local_58);
    local_58 = L"KismetRenderingLibrary";
    local_50 = 0x16;
    FUN_1446e940c(&local_148,&local_58);
    FUN_140208bae(&local_58,&local_148,&local_138,L"ExportTexture2D: FileName must be non-empty.");
    FUN_1427679d4(&local_118,local_1f8,&local_58);
    if (local_1f0 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_1f0 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_1f0)(local_1f0);
        LOCK();
        piVar2 = (int *)((longlong)local_1f0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_1f0 + 0x10))(local_1f0);
        }
      }
    }
    if (local_58 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_58 + 0x10))();
    }
    FUN_1427678c0(&local_118);
  }
  if (local_168 != (longlong *)0x0) {
    (**(code **)(*local_168 + 0x10))();
  }
  if (local_158 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147b583e6 FUN_147b583e6 body=265 status=ok
// SIG undefined FUN_147b583e6(void)

void FUN_147b583e6(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [4];
  
  local_38[3] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[2] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147af1024(plVar2);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[3] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b584f0 FUN_147b584f0 body=256 status=ok
// SIG undefined FUN_147b584f0(void)

void FUN_147b584f0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14352f790(local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b585f2 FUN_147b585f2 body=758 status=ok
// SIG undefined FUN_147b585f2(void)

void FUN_147b585f2(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [35];
  undefined1 local_35;
  undefined4 local_34;
  undefined1 local_2d;
  undefined4 local_2c;
  undefined1 local_25;
  undefined4 local_24;
  undefined1 local_1d;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_1d = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1d);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_25 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_25);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_25);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_2d = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2d);
  }
  local_34 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_35 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_35);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_35);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_1c;
  param_3[1] = local_24;
  param_3[2] = local_2c;
  param_3[3] = local_34;
  *(undefined8 *)(param_3 + 4) = 0;
  *(undefined8 *)(param_3 + 6) = 0;
  *(undefined8 *)(param_3 + 8) = 0;
  *(undefined8 *)(param_3 + 10) = 0;
  *(undefined1 *)(param_3 + 0xc) = local_1d;
  *(undefined1 *)((longlong)param_3 + 0x31) = local_25;
  *(undefined1 *)((longlong)param_3 + 0x32) = local_2d;
  *(undefined1 *)((longlong)param_3 + 0x33) = local_35;
  *(undefined8 *)(param_3 + 0xd) = 0;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b588f6 FUN_147b588f6 body=415 status=ok
// SIG undefined FUN_147b588f6(void)

void FUN_147b588f6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_78 [44];
  int local_4c;
  longlong local_48 [3];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar2 = local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147b58a96(local_28,local_30,plVar2,local_4c != 0);
  *param_3 = uVar1;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b58a96 FUN_147b58a96 body=334 status=ok
// SIG undefined FUN_147b58a96(void)

ulonglong FUN_147b58a96(longlong param_1,longlong param_2,longlong *param_3,undefined1 param_4)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined1 local_70;
  undefined4 local_5c;
  longlong local_58 [3];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 == 0 || param_1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = *(int *)(param_2 + 0x144) * *(int *)(param_2 + 0x140);
    FUN_147b5b2f2(param_3,uVar3);
    local_58[0] = 0;
    local_58[1] = 0;
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar3);
    }
    if (uVar3 != 0) {
      FUN_144750f90(local_58,uVar3);
    }
    local_80 = *(undefined4 *)(param_2 + 0x140);
    local_78 = *(undefined4 *)(param_2 + 0x144);
    local_88 = 0;
    local_70 = param_4;
    cVar2 = FUN_147b5b0f8(param_3,local_58,param_2,0);
    uVar4 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    if (cVar2 != '\x02') {
      if (cVar2 == '\n') {
        if (uVar3 != 0) {
          lVar5 = 0;
          do {
            FUN_1411ab38a(local_58[0] + lVar5,&local_5c);
            iVar1 = (int)param_3[1];
            *(uint *)(param_3 + 1) = iVar1 + 1U;
            if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
              FUN_14602b1fc(param_3,iVar1);
            }
            *(undefined4 *)(*param_3 + (longlong)iVar1 * 4) = local_5c;
            lVar5 = lVar5 + 0x10;
          } while ((ulonglong)uVar3 << 4 != lVar5);
        }
      }
      else {
        uVar4 = 0;
      }
    }
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 147b58be6 FUN_147b58be6 body=386 status=ok
// SIG undefined FUN_147b58be6(void)

void FUN_147b58be6(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b58d6a(&local_34,local_28,local_2c,local_30);
  *param_3 = local_34;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b58d6a FUN_147b58d6a body=187 status=ok
// SIG undefined FUN_147b58d6a(void)

undefined4 *
FUN_147b58d6a(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined1 local_40;
  longlong local_38 [2];
  undefined4 *local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = (undefined4 *)0x0;
  uStack_20 = 0;
  local_38[0] = 0;
  local_38[1] = 0;
  local_48 = 1;
  local_50 = 1;
  local_40 = 1;
  local_58 = param_4;
  cVar1 = FUN_147b5b0f8(&local_28,local_38,param_2,param_3);
  if (cVar1 == '\n') {
    FUN_1411ab38a(local_38[0],param_1);
  }
  else if (cVar1 == '\x02') {
    *param_1 = *local_28;
  }
  else {
    *param_1 = 0xffff0000;
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if (local_28 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b58e32 FUN_147b58e32 body=415 status=ok
// SIG undefined FUN_147b58e32(void)

void FUN_147b58e32(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_78 [44];
  int local_4c;
  longlong local_48 [3];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar2 = local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147b58fd2(local_28,local_30,plVar2,local_4c != 0);
  *param_3 = uVar1;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b58fd2 FUN_147b58fd2 body=409 status=ok
// SIG undefined FUN_147b58fd2(void)

ulonglong FUN_147b58fd2(longlong param_1,longlong param_2,longlong *param_3,undefined1 param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  char cVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined1 local_70;
  ulonglong local_60;
  longlong local_58 [3];
  
  local_58[2] = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 == 0 || param_1 == 0) {
    uVar11 = 0;
  }
  else {
    uVar9 = *(int *)(param_2 + 0x144) * *(int *)(param_2 + 0x140);
    FUN_147b5b31c(param_3,uVar9);
    local_58[0] = 0;
    local_58[1] = 0;
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar9);
    }
    if (uVar9 != 0) {
      FUN_146971392(local_58,uVar9);
    }
    local_80 = *(undefined4 *)(param_2 + 0x140);
    local_78 = *(undefined4 *)(param_2 + 0x144);
    local_88 = 0;
    local_70 = param_4;
    cVar7 = FUN_147b5b0f8(local_58,param_3,param_2,0);
    uVar11 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    if (cVar7 != '\n') {
      if (cVar7 == '\x02') {
        if (uVar9 != 0) {
          uVar8 = (ulonglong)uVar9;
          uVar12 = 0;
          local_60 = uVar8;
          do {
            bVar1 = *(byte *)(local_58[0] + 3 + uVar12 * 4);
            bVar2 = *(byte *)(local_58[0] + uVar12 * 4);
            bVar3 = *(byte *)(local_58[0] + 1 + uVar12 * 4);
            bVar4 = *(byte *)(local_58[0] + 2 + uVar12 * 4);
            iVar5 = (int)param_3[1];
            *(uint *)(param_3 + 1) = iVar5 + 1U;
            if (*(uint *)((longlong)param_3 + 0xc) < iVar5 + 1U) {
              FUN_1467ff840(param_3,iVar5);
              uVar8 = local_60;
            }
            lVar6 = *param_3;
            lVar10 = (longlong)iVar5 * 0x10;
            *(float *)(lVar6 + lVar10) = (float)bVar4;
            *(float *)(lVar6 + 4 + lVar10) = (float)bVar3;
            *(float *)(lVar6 + 8 + lVar10) = (float)bVar2;
            *(float *)(lVar6 + 0xc + lVar10) = (float)bVar1;
            uVar12 = uVar12 + 1;
          } while (uVar8 != uVar12);
        }
      }
      else {
        uVar11 = 0;
      }
    }
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_58[2] ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffffff;
}



// FUNCTION 147b59174 FUN_147b59174 body=469 status=ok
// SIG undefined FUN_147b59174(void)

void FUN_147b59174(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_34 != 0;
  FUN_147b5934a(&local_44,local_28,local_2c,local_30);
  *param_3 = local_44;
  param_3[1] = uStack_40;
  param_3[2] = uStack_3c;
  param_3[3] = uStack_38;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5934a FUN_147b5934a body=246 status=ok
// SIG undefined FUN_147b5934a(void)

float * FUN_147b5934a(float *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                     undefined1 param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined1 local_40;
  float *local_38;
  undefined8 uStack_30;
  byte *local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = (byte *)0x0;
  uStack_20 = 0;
  local_38 = (float *)0x0;
  uStack_30 = 0;
  local_40 = param_5;
  local_48 = 1;
  local_50 = 1;
  local_58 = param_4;
  cVar7 = FUN_147b5b0f8(&local_28,&local_38,param_2,param_3);
  if (cVar7 == '\n') {
    fVar4 = local_38[1];
    fVar5 = local_38[2];
    fVar6 = local_38[3];
    *param_1 = *local_38;
    param_1[1] = fVar4;
    param_1[2] = fVar5;
    param_1[3] = fVar6;
  }
  else if (cVar7 == '\x02') {
    bVar1 = local_28[3];
    bVar2 = *local_28;
    bVar3 = local_28[1];
    *param_1 = (float)local_28[2];
    param_1[1] = (float)bVar3;
    param_1[2] = (float)bVar2;
    param_1[3] = (float)bVar1;
  }
  else {
    *param_1 = 1.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 1.0;
  }
  if (local_38 != (float *)0x0) {
    FUN_1400020a8();
  }
  if (local_28 != (byte *)0x0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147b59448 FUN_147b59448 body=653 status=ok
// SIG undefined FUN_147b59448(void)

void FUN_147b59448(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined1 local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_38 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_3c != 0;
  local_60 = local_38;
  local_68 = local_34;
  FUN_147b596d6(&local_50,local_28,local_2c,local_30);
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  *param_3 = local_50;
  *(undefined4 *)(param_3 + 1) = local_48;
  *(undefined4 *)((longlong)param_3 + 0xc) = local_44;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b596d6 FUN_147b596d6 body=354 status=ok
// SIG undefined FUN_147b596d6(void)

longlong *
FUN_147b596d6(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined1 local_40;
  longlong local_38;
  undefined8 uStack_30;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_40 = param_7;
  local_48 = param_6;
  local_50 = param_5;
  local_58 = param_4;
  cVar4 = FUN_147b5b0f8(&local_28,&local_38,param_2,param_3);
  if (cVar4 != '\n') {
    if (cVar4 != '\x02') {
      *param_1 = 0;
      param_1[1] = 0;
      if (local_38 != 0) {
        FUN_1400020a8();
      }
      goto LAB_147b597f2;
    }
    FUN_140a4b95e(&local_38,uStack_20 & 0xffffffff,1);
    if (0 < (int)uStack_20) {
      lVar5 = 0xc;
      lVar6 = 0;
      do {
        bVar1 = *(byte *)(local_28 + 3 + lVar6 * 4);
        bVar2 = *(byte *)(local_28 + lVar6 * 4);
        bVar3 = *(byte *)(local_28 + 1 + lVar6 * 4);
        *(float *)(local_38 + -0xc + lVar5) = (float)*(byte *)(local_28 + 2 + lVar6 * 4);
        *(float *)(local_38 + -8 + lVar5) = (float)bVar3;
        *(float *)(local_38 + -4 + lVar5) = (float)bVar2;
        *(float *)(local_38 + lVar5) = (float)bVar1;
        lVar6 = lVar6 + 1;
        lVar5 = lVar5 + 0x10;
      } while (lVar6 < (int)uStack_20);
    }
  }
  *param_1 = local_38;
  local_38 = 0;
  *(undefined4 *)(param_1 + 1) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_1 + 0xc) = uStack_30._4_4_;
LAB_147b597f2:
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b59840 FUN_147b59840 body=471 status=ok
// SIG undefined FUN_147b59840(void)

void FUN_147b59840(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_34 != 0;
  FUN_147b59a18(&local_44,local_28,local_2c,local_30);
  *param_3 = local_44;
  param_3[1] = uStack_40;
  param_3[2] = uStack_3c;
  param_3[3] = uStack_38;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b59a18 FUN_147b59a18 body=114 status=ok
// SIG undefined FUN_147b59a18(void)

undefined8 *
FUN_147b59a18(undefined8 *param_1,longlong param_2,float param_3,float param_4,undefined1 param_5)

{
  if (param_2 == 0) {
    *param_1 = 0x3f800000;
    param_1[1] = 0x3f80000000000000;
  }
  else {
    if (1.0 <= param_3) {
      param_3 = 1.0;
    }
    if (param_3 <= 0.0) {
      param_3 = 0.0;
    }
    if (1.0 <= param_4) {
      param_4 = 1.0;
    }
    if (param_4 <= 0.0) {
      param_4 = 0.0;
    }
    FUN_147b5934a(param_1,0,(int)((float)*(int *)(param_2 + 0x140) * param_3),
                  (int)((float)*(int *)(param_2 + 0x144) * param_4),param_5);
  }
  return param_1;
}



// FUNCTION 147b59a90 FUN_147b59a90 body=474 status=ok
// SIG undefined FUN_147b59a90(void)

void FUN_147b59a90(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  int local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_54 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = local_50;
  uStack_94 = uStack_4c;
  uStack_90 = uStack_48;
  uStack_8c = uStack_44;
  local_88 = local_40;
  uStack_84 = uStack_3c;
  uStack_80 = uStack_38;
  uStack_7c = uStack_34;
  local_78 = local_30;
  FUN_147b59c6c(&local_68,local_28,&local_98,local_54 != 0);
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  *param_3 = local_68;
  *(undefined4 *)(param_3 + 1) = local_60;
  *(undefined4 *)((longlong)param_3 + 0xc) = local_5c;
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b59c6c FUN_147b59c6c body=189 status=ok
// SIG undefined FUN_147b59c6c(void)

undefined8 * FUN_147b59c6c(undefined8 *param_1,longlong param_2,double *param_3,undefined1 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    dVar4 = *param_3;
    uVar1 = SUB84(dVar4,0);
    uVar2 = (undefined4)((ulonglong)dVar4 >> 0x20);
    dVar3 = param_3[1];
    if (1.0 <= dVar4) {
      uVar1 = 0;
      uVar2 = 0x3ff00000;
    }
    if ((double)CONCAT44(uVar2,uVar1) <= 0.0) {
      uVar1 = 0;
      uVar2 = 0;
    }
    if (1.0 <= dVar3) {
      dVar3 = 1.0;
    }
    if (dVar3 <= 0.0) {
      dVar3 = 0.0;
    }
    dVar4 = param_3[2];
    if (1.0 <= dVar4) {
      dVar4 = 1.0;
    }
    if (dVar4 <= 0.0) {
      dVar4 = 0.0;
    }
    dVar5 = param_3[3];
    if (1.0 <= dVar5) {
      dVar5 = 1.0;
    }
    if (dVar5 <= 0.0) {
      dVar5 = 0.0;
    }
    dVar5 = dVar5 * (double)*(int *)(param_2 + 0x144);
    FUN_147b596d6(param_1,dVar5,
                  (int)((double)CONCAT44(uVar2,uVar1) * (double)*(int *)(param_2 + 0x140)),
                  (int)(dVar3 * (double)*(int *)(param_2 + 0x144)),
                  (int)(dVar4 * (double)*(int *)(param_2 + 0x140)),(int)dVar5,param_4);
  }
  return param_1;
}



// FUNCTION 147b59d2a FUN_147b59d2a body=388 status=ok
// SIG undefined FUN_147b59d2a(void)

void FUN_147b59d2a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b59eb0(&local_34,local_28,local_2c,local_30);
  *param_3 = local_34;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b59eb0 FUN_147b59eb0 body=102 status=ok
// SIG undefined FUN_147b59eb0(void)

undefined4 * FUN_147b59eb0(undefined4 *param_1,longlong param_2,float param_3,float param_4)

{
  if (param_2 == 0) {
    *param_1 = 0xffff0000;
  }
  else {
    if (1.0 <= param_3) {
      param_3 = 1.0;
    }
    if (param_3 <= 0.0) {
      param_3 = 0.0;
    }
    if (1.0 <= param_4) {
      param_4 = 1.0;
    }
    if (param_4 <= 0.0) {
      param_4 = 0.0;
    }
    FUN_147b58d6a(param_1,0,(int)((float)*(int *)(param_2 + 0x140) * param_3),
                  (int)((float)*(int *)(param_2 + 0x144) * param_4));
  }
  return param_1;
}



// FUNCTION 147b59f16 FUN_147b59f16 body=90 status=ok
// SIG undefined FUN_147b59f16(void)

void FUN_147b59f16(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((DAT_14cb0d2b0 != 0) && (*(longlong **)(DAT_14cb0d2b0 + 0xc20) != (longlong *)0x0)) {
    lVar1 = (**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0xc20) + 0x180))();
    if ((lVar1 != 0) && (*(longlong **)(lVar1 + 0x218) != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000147b59f63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(lVar1 + 0x218) + 0x228))();
      return;
    }
  }
  return;
}



// FUNCTION 147b59f70 FUN_147b59f70 body=153 status=ok
// SIG undefined FUN_147b59f70(void)

void FUN_147b59f70(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_18 != 0) {
    FUN_1402c0228();
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5a00a FUN_147b5a00a body=458 status=ok
// SIG undefined FUN_147b5a00a(void)

void FUN_147b5a00a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_88 [40];
  void *local_60;
  int local_58;
  undefined4 local_54;
  undefined1 local_4a;
  undefined1 local_49;
  void *local_48;
  ulonglong uStack_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48 = (void *)0x0;
  uStack_40 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_49 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_49);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_49);
  }
  local_4a = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4a);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4a);
  }
  _Src = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = (void *)0x0;
  lVar1 = (longlong)(int)uStack_40;
  local_58 = (int)uStack_40;
  if (lVar1 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1446dd670(&local_60,uStack_40 & 0xffffffff,0);
    memcpy(local_60,_Src,lVar1 * 2);
  }
  FUN_147b5a1d6(&local_60);
  *param_3 = 0;
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5a1d6 FUN_147b5a1d6 body=152 status=ok
// SIG undefined FUN_147b5a1d6(void)

void FUN_147b5a1d6(longlong *param_1)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (void *)0x0;
  local_30 = (int)param_1[1];
  lVar1 = (longlong)local_30;
  _Src = (void *)*param_1;
  if (lVar1 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar1 * 2);
  }
  FUN_147b5b46c(&local_38);
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5a270 FUN_147b5a270 body=458 status=ok
// SIG undefined FUN_147b5a270(void)

void FUN_147b5a270(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_88 [40];
  void *local_60;
  int local_58;
  undefined4 local_54;
  undefined1 local_4a;
  undefined1 local_49;
  void *local_48;
  ulonglong uStack_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48 = (void *)0x0;
  uStack_40 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_49 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_49);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_49);
  }
  local_4a = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4a);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4a);
  }
  _Src = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = (void *)0x0;
  lVar1 = (longlong)(int)uStack_40;
  local_58 = (int)uStack_40;
  if (lVar1 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1446dd670(&local_60,uStack_40 & 0xffffffff,0);
    memcpy(local_60,_Src,lVar1 * 2);
  }
  FUN_147b5a43c(&local_60);
  *param_3 = 0;
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5a43c FUN_147b5a43c body=152 status=ok
// SIG undefined FUN_147b5a43c(void)

void FUN_147b5a43c(longlong *param_1)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (void *)0x0;
  local_30 = (int)param_1[1];
  lVar1 = (longlong)local_30;
  _Src = (void *)*param_1;
  if (lVar1 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar1 * 2);
  }
  FUN_147b5b46c(&local_38);
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5a4d6 FUN_147b5a4d6 body=458 status=ok
// SIG undefined FUN_147b5a4d6(void)

void FUN_147b5a4d6(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_88 [40];
  void *local_60;
  int local_58;
  undefined4 local_54;
  undefined1 local_4a;
  undefined1 local_49;
  void *local_48;
  ulonglong uStack_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48 = (void *)0x0;
  uStack_40 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_49 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_49);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_49);
  }
  local_4a = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4a);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4a);
  }
  _Src = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = (void *)0x0;
  lVar1 = (longlong)(int)uStack_40;
  local_58 = (int)uStack_40;
  if (lVar1 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1446dd670(&local_60,uStack_40 & 0xffffffff,0);
    memcpy(local_60,_Src,lVar1 * 2);
  }
  FUN_147b5a6a2(&local_60);
  *param_3 = 0;
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5a6a2 FUN_147b5a6a2 body=152 status=ok
// SIG undefined FUN_147b5a6a2(void)

void FUN_147b5a6a2(longlong *param_1)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (void *)0x0;
  local_30 = (int)param_1[1];
  lVar1 = (longlong)local_30;
  _Src = (void *)*param_1;
  if (lVar1 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar1 * 2);
  }
  FUN_147b5b46c(&local_38);
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5a73c FUN_147b5a73c body=458 status=ok
// SIG undefined FUN_147b5a73c(void)

void FUN_147b5a73c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_88 [40];
  void *local_60;
  int local_58;
  undefined4 local_54;
  undefined1 local_4a;
  undefined1 local_49;
  void *local_48;
  ulonglong uStack_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48 = (void *)0x0;
  uStack_40 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_49 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_49);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_49);
  }
  local_4a = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4a);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4a);
  }
  _Src = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = (void *)0x0;
  lVar1 = (longlong)(int)uStack_40;
  local_58 = (int)uStack_40;
  if (lVar1 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1446dd670(&local_60,uStack_40 & 0xffffffff,0);
    memcpy(local_60,_Src,lVar1 * 2);
  }
  FUN_147b5a908(&local_60);
  *param_3 = 0;
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5a908 FUN_147b5a908 body=152 status=ok
// SIG undefined FUN_147b5a908(void)

void FUN_147b5a908(longlong *param_1)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (void *)0x0;
  local_30 = (int)param_1[1];
  lVar1 = (longlong)local_30;
  _Src = (void *)*param_1;
  if (lVar1 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar1 * 2);
  }
  FUN_147b5b46c(&local_38);
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5a9a2 FUN_147b5a9a2 body=297 status=ok
// SIG undefined FUN_147b5a9a2(void)

void FUN_147b5a9a2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b5aacc(local_18,local_1c,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5aacc FUN_147b5aacc body=340 status=ok
// SIG undefined FUN_147b5aacc(void)

void FUN_147b5aacc(longlong param_1,int param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [4];
  undefined1 local_84 [4];
  undefined1 local_80 [8];
  undefined1 local_78 [48];
  undefined1 local_48 [8];
  longlong *local_40;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != 0) {
    if (0 < param_3 && 0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
    }
    FUN_1446ddc76(local_80,"Blueprint",1);
    FUN_14276766e(local_78,local_80);
    local_38 = L"ResizeRenderTarget2D_InvalidDimensions";
    local_30 = 0x26;
    FUN_1446e940c(local_84,&local_38);
    local_38 = L"KismetRenderingLibrary";
    local_30 = 0x16;
    FUN_1446e940c(local_88,&local_38);
    FUN_140208bae(&local_38,local_88,local_84,L"ResizeRenderTarget2D: Dimensions must be positive.")
    ;
    FUN_1427679d4(local_78,local_48,&local_38);
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
    if (local_38 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_38 + 0x10))();
    }
    FUN_1427678c0(local_78);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5ac46 FUN_147b5ac46 body=308 status=ok
// SIG undefined FUN_147b5ac46(void)

void FUN_147b5ac46(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  int local_28;
  int local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
  local_28 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b5ad7c(local_20,iVar1 != 0,local_28 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5ad7c FUN_147b5ad7c body=536 status=ok
// SIG undefined FUN_147b5ad7c(void)

void FUN_147b5ad7c(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [4];
  undefined1 local_a4 [4];
  undefined1 local_a0 [8];
  undefined1 local_98 [8];
  longlong *local_90;
  wchar_t *local_88;
  undefined4 local_80;
  undefined1 local_78 [64];
  undefined1 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_1 == 0) {
    FUN_1446ddc76(local_a0,"Blueprint",1);
    FUN_14276766e(local_78,local_a0);
    local_88 = L"SetCastInsetShadowForAllAttachments_InvalidPrimitiveComponent";
    local_80 = 0x3d;
    FUN_1446e940c(local_a4,&local_88);
    local_88 = L"KismetRenderingLibrary";
    local_80 = 0x16;
    FUN_1446e940c(local_a8,&local_88);
    FUN_140208bae(&local_88,local_a8,local_a4,
                  L"SetCastInsetShadowForAllAttachments: PrimitiveComponent must be non-null.");
    FUN_1427679d4(local_78,local_98,&local_88);
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
    if (local_88 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_88 + 0x10))();
    }
    FUN_1427678c0(local_78);
  }
  else {
    FUN_1479eddc4();
    FUN_1479ede0c(param_1,param_3);
    local_38 = (undefined1 *)0x0;
    local_30 = 0x800000000;
    FUN_1479ed99e(local_78,param_1 + 0x138);
    while (0 < (int)(uint)local_30) {
      puVar6 = local_38;
      if (local_38 == (undefined1 *)0x0) {
        puVar6 = local_78;
      }
      lVar3 = *(longlong *)(puVar6 + (ulonglong)(uint)local_30 * 8 + -8);
      local_30 = CONCAT44(local_30._4_4_,(uint)local_30 - 1);
      if (lVar3 != 0) {
        lVar5 = FUN_144a3a302();
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
          cVar4 = FUN_1417be526(lVar3);
          if (cVar4 != '\0') {
            if ((char)param_3 != '\0') {
              FUN_1479ede0c(lVar3,0);
            }
            FUN_1479eddc4(lVar3,param_2);
          }
        }
      }
      FUN_1479ed99e(local_78,lVar3 + 0x138);
    }
    if (local_38 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5af98 FUN_147b5af98 body=175 status=ok
// SIG undefined FUN_147b5af98(void)

undefined8 FUN_147b5af98(undefined8 param_1)

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
  local_b8 = FUN_1458bbce6();
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



// FUNCTION 147b5b048 FUN_147b5b048 body=175 status=ok
// SIG undefined FUN_147b5b048(void)

undefined8 FUN_147b5b048(undefined8 param_1)

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
  local_b8 = FUN_14129eed6();
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



// FUNCTION 147b5b0f8 FUN_147b5b0f8 body=504 status=ok
// SIG undefined FUN_147b5b0f8(void)

ulonglong FUN_147b5b0f8(undefined8 param_1,undefined8 param_2,longlong *param_3,uint param_4,
                       uint param_5,int param_6,int param_7,byte param_8)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  longlong *plVar14;
  undefined1 auStack_c8 [36];
  undefined4 local_a4;
  int local_a0;
  undefined1 local_9c;
  undefined4 local_98;
  undefined2 local_94;
  undefined8 local_90;
  ulonglong local_88;
  undefined8 local_80;
  undefined4 local_74;
  int local_70;
  undefined1 local_6c;
  undefined4 local_68;
  undefined2 local_64;
  undefined8 local_60;
  ulonglong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_3 == (longlong *)0x0) {
    uVar8 = 0;
  }
  else {
    lVar5 = FUN_1447b4020(param_3);
    uVar8 = 0;
    if (lVar5 != 0) {
      iVar2 = (int)param_3[0x28];
      uVar9 = iVar2 - 1U;
      if ((int)param_4 < (int)(iVar2 - 1U)) {
        uVar9 = param_4;
      }
      iVar1 = *(int *)((longlong)param_3 + 0x144);
      uVar6 = (ulonglong)uVar9;
      if ((int)uVar9 < 1) {
        uVar6 = uVar8;
      }
      uVar9 = iVar1 - 1U;
      if ((int)param_5 < (int)(iVar1 - 1U)) {
        uVar9 = param_5;
      }
      uVar11 = (ulonglong)uVar9;
      if ((int)uVar9 < 1) {
        uVar11 = uVar8;
      }
      if (iVar2 <= param_6) {
        param_6 = iVar2;
      }
      if (param_6 < 2) {
        param_6 = 1;
      }
      if (iVar1 <= param_7) {
        param_7 = iVar1;
      }
      if (param_7 < 2) {
        param_7 = 1;
      }
      uVar9 = (param_6 - iVar2) + (int)uVar6;
      uVar10 = (ulonglong)uVar9;
      if ((int)uVar9 < 1) {
        uVar10 = uVar8;
      }
      uVar9 = (param_7 - iVar1) + (int)uVar11;
      uVar7 = (ulonglong)uVar9;
      if ((int)uVar9 < 1) {
        uVar7 = uVar8;
      }
      uVar12 = uVar11 << 0x20 | uVar6;
      uVar13 = CONCAT44(((int)uVar11 + param_7) - (int)uVar7,((int)uVar6 + param_6) - (int)uVar10);
      iVar2 = (param_8 ^ 1) * 3;
      lVar5 = FUN_1447b4020(param_3);
      plVar14 = (longlong *)(lVar5 + 0x50);
      if (lVar5 == 0) {
        plVar14 = (longlong *)0x0;
      }
      cVar3 = (**(code **)(*param_3 + 0x3b8))(param_3);
      if (cVar3 == '\n') {
        local_a4 = 6;
        local_9c = 1;
        local_98 = 0x467a0000;
        local_94 = 0;
        local_90 = 0;
        local_a0 = iVar2;
        local_88 = uVar12;
        local_80 = uVar13;
        cVar3 = (**(code **)(*plVar14 + 0x70))(plVar14,param_2);
        uVar8 = 10;
        if (cVar3 == '\0') {
          uVar8 = 0;
        }
      }
      else if (cVar3 == '\x02') {
        local_74 = 6;
        local_6c = 1;
        local_68 = 0x467a0000;
        local_64 = 0;
        local_60 = 0;
        local_70 = iVar2;
        local_58 = uVar12;
        local_50 = uVar13;
        uVar4 = (**(code **)(*plVar14 + 0x60))(plVar14,param_1);
        uVar8 = (ulonglong)CONCAT31((int3)((uint)uVar4 >> 8),(char)uVar4 * '\x02');
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 147b5b2f2 FUN_147b5b2f2 body=41 status=ok
// SIG undefined FUN_147b5b2f2(void)

void FUN_147b5b2f2(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_146971392();
  return;
}



// FUNCTION 147b5b31c FUN_147b5b31c body=42 status=ok
// SIG undefined FUN_147b5b31c(void)

void FUN_147b5b31c(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < param_2) {
    FUN_144750f90();
    return;
  }
  return;
}



// FUNCTION 147b5b347 FUN_147b5b347 body=292 status=ok
// SIG undefined FUN_147b5b347(void)

void FUN_147b5b347(void)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [4];
  undefined1 local_84 [4];
  undefined1 local_80 [8];
  undefined1 local_78 [48];
  undefined1 local_48 [8];
  longlong *local_40;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1446ddc76(local_80,"Blueprint",1);
  FUN_14276766e(local_78,local_80);
  local_38 = L"ConvertRenderTargetToTexture_CannotCallAtRuntime";
  local_30 = 0x30;
  FUN_1446e940c(local_84,&local_38);
  local_38 = L"KismetRenderingLibrary";
  local_30 = 0x16;
  FUN_1446e940c(local_88,&local_38);
  FUN_140208bae(&local_38,local_88,local_84,
                L"ConvertRenderTarget: Can\'t convert render target to texture at run time. ");
  FUN_142767974(local_78,local_48,&local_38);
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
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
  FUN_1427678c0(local_78);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5b46c FUN_147b5b46c body=312 status=ok
// SIG undefined FUN_147b5b46c(void)

void FUN_147b5b46c(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [4];
  undefined1 local_8c [4];
  undefined1 local_88 [8];
  undefined1 local_80 [48];
  undefined1 local_50 [8];
  longlong *local_48;
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1446ddc76(local_88,"Blueprint",1);
  FUN_14276766e(local_80,local_88);
  local_40 = L"RenderTargetCreateStaticTexture_CannotCallAtRuntime";
  local_38 = 0x33;
  FUN_1446e940c(local_8c,&local_40);
  local_40 = L"KismetRenderingLibrary";
  local_38 = 0x16;
  FUN_1446e940c(local_90,&local_40);
  FUN_140208bae(&local_40,local_90,local_8c,
                L"RenderTargetCreateStaticTextureEditorOnly: Can\'t create texture at run time. ");
  FUN_142767974(local_80,local_50,&local_40);
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
  if (local_40 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_40 + 0x10))();
  }
  FUN_1427678c0(local_80);
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5b5ac FUN_147b5b5ac body=520 status=ok
// SIG undefined FUN_147b5b5ac(void)

void FUN_147b5b5ac(undefined8 param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong local_68 [3];
  int local_4c;
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48[2] = 0;
  local_48[3] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  iVar1 = local_4c;
  local_68[0] = 0;
  local_68[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = local_68;
  FUN_147b5b7b6(&local_78,local_48 + 2,local_48,iVar1 != 0);
  if (&local_78 == param_3) {
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_78;
    local_78 = 0;
    *(undefined4 *)(param_3 + 1) = local_70;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_6c;
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5b7b6 FUN_147b5b7b6 body=283 status=ok
// SIG undefined FUN_147b5b7b6(void)

undefined8 *
FUN_147b5b7b6(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,char param_4,
             undefined8 *param_5)

{
  int iVar1;
  int iVar2;
  wchar_t *pwVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pwVar3 = L"false";
  if (param_4 != '\0') {
    pwVar3 = L"true";
  }
  FUN_140056680(&local_48,pwVar3);
  *param_1 = 0;
  param_1[1] = 0;
  iVar4 = 0;
  iVar1 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar1 = 0;
  }
  iVar2 = local_40 + -1;
  if (local_40 == 0) {
    iVar2 = 0;
  }
  iVar5 = *(int *)(param_5 + 1) + -1;
  if (*(int *)(param_5 + 1) == 0) {
    iVar5 = iVar4;
  }
  FUN_14005eb28(param_1,*(int *)(param_2 + 1) + (uint)(*(int *)(param_2 + 1) == 0) + iVar1 + iVar2 +
                        iVar5);
  iVar1 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar1 = iVar4;
  }
  FUN_1400020e8(param_1,*param_2,iVar1);
  iVar1 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar1 = iVar4;
  }
  FUN_1400020e8(param_1,*param_3,iVar1);
  iVar1 = local_40 + -1;
  if (local_40 == 0) {
    iVar1 = iVar4;
  }
  FUN_1400020e8(param_1,local_48,iVar1);
  iVar1 = *(int *)(param_5 + 1) + -1;
  if (*(int *)(param_5 + 1) == 0) {
    iVar1 = iVar4;
  }
  FUN_1400020e8(param_1,*param_5,iVar1);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5b8d2 FUN_147b5b8d2 body=533 status=ok
// SIG undefined FUN_147b5b8d2(void)

void FUN_147b5b8d2(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38 [5];
  
  local_38[4] = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38[2] = 0;
  local_38[3] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = local_48;
  uStack_74 = uStack_44;
  uStack_70 = uStack_40;
  uStack_6c = uStack_3c;
  local_88 = local_58;
  FUN_147b5bae8(&local_68,local_38 + 2,local_38);
  if (&local_68 == param_3) {
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_68;
    local_68 = 0;
    *(undefined4 *)(param_3 + 1) = local_60;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_5c;
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[4] ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5bae8 FUN_147b5bae8 body=265 status=ok
// SIG undefined FUN_147b5bae8(void)

undefined8 *
FUN_147b5bae8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1411ab340(param_4,&local_48);
  *param_1 = 0;
  param_1[1] = 0;
  iVar3 = 0;
  iVar1 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar1 = 0;
  }
  iVar2 = local_40 + -1;
  if (local_40 == 0) {
    iVar2 = 0;
  }
  iVar4 = *(int *)(param_5 + 1) + -1;
  if (*(int *)(param_5 + 1) == 0) {
    iVar4 = iVar3;
  }
  FUN_14005eb28(param_1,*(int *)(param_2 + 1) + (uint)(*(int *)(param_2 + 1) == 0) + iVar1 + iVar2 +
                        iVar4);
  iVar1 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar1 = iVar3;
  }
  FUN_1400020e8(param_1,*param_2,iVar1);
  iVar1 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar1 = iVar3;
  }
  FUN_1400020e8(param_1,*param_3,iVar1);
  iVar1 = local_40 + -1;
  if (local_40 == 0) {
    iVar1 = iVar3;
  }
  FUN_1400020e8(param_1,local_48,iVar1);
  iVar1 = *(int *)(param_5 + 1) + -1;
  if (*(int *)(param_5 + 1) == 0) {
    iVar1 = iVar3;
  }
  FUN_1400020e8(param_1,*param_5,iVar1);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5bbf2 FUN_147b5bbf2 body=515 status=ok
// SIG undefined FUN_147b5bbf2(void)

void FUN_147b5bbf2(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_58 [3];
  undefined8 local_40;
  longlong local_38 [5];
  
  local_38[4] = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38[2] = 0;
  local_38[3] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_40 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = local_58;
  FUN_147b5bdf6(&local_68,local_38 + 2,local_38,local_40);
  if (&local_68 == param_3) {
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_68;
    local_68 = 0;
    *(undefined4 *)(param_3 + 1) = local_60;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_5c;
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[4] ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5bdf6 FUN_147b5bdf6 body=271 status=ok
// SIG undefined FUN_147b5bdf6(void)

undefined8 *
FUN_147b5bdf6(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
             undefined8 *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1406112c4(&local_48,param_4,1);
  *param_1 = 0;
  param_1[1] = 0;
  iVar3 = 0;
  iVar1 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar1 = 0;
  }
  iVar2 = local_40 + -1;
  if (local_40 == 0) {
    iVar2 = 0;
  }
  iVar4 = *(int *)(param_5 + 1) + -1;
  if (*(int *)(param_5 + 1) == 0) {
    iVar4 = iVar3;
  }
  FUN_14005eb28(param_1,*(int *)(param_2 + 1) + (uint)(*(int *)(param_2 + 1) == 0) + iVar1 + iVar2 +
                        iVar4);
  iVar1 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar1 = iVar3;
  }
  FUN_1400020e8(param_1,*param_2,iVar1);
  iVar1 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar1 = iVar3;
  }
  FUN_1400020e8(param_1,*param_3,iVar1);
  iVar1 = local_40 + -1;
  if (local_40 == 0) {
    iVar1 = iVar3;
  }
  FUN_1400020e8(param_1,local_48,iVar1);
  iVar1 = *(int *)(param_5 + 1) + -1;
  if (*(int *)(param_5 + 1) == 0) {
    iVar1 = iVar3;
  }
  FUN_1400020e8(param_1,*param_5,iVar1);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5bf06 FUN_147b5bf06 body=513 status=ok
// SIG undefined FUN_147b5bf06(void)

void FUN_147b5bf06(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_58 [3];
  undefined4 local_3c;
  longlong local_38 [5];
  
  local_38[4] = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38[2] = 0;
  local_38[3] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_3c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = local_58;
  FUN_147b5c108(&local_68,local_38 + 2,local_38,local_3c);
  if (&local_68 == param_3) {
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_68;
    local_68 = 0;
    *(undefined4 *)(param_3 + 1) = local_60;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_5c;
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[4] ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5c108 FUN_147b5c108 body=272 status=ok
// SIG undefined FUN_147b5c108(void)

undefined8 *
FUN_147b5c108(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
             undefined8 *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140002266(&local_48,&DAT_149e063bc,param_4);
  *param_1 = 0;
  param_1[1] = 0;
  iVar3 = 0;
  iVar1 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar1 = 0;
  }
  iVar2 = local_40 + -1;
  if (local_40 == 0) {
    iVar2 = 0;
  }
  iVar4 = *(int *)(param_5 + 1) + -1;
  if (*(int *)(param_5 + 1) == 0) {
    iVar4 = iVar3;
  }
  FUN_14005eb28(param_1,*(int *)(param_2 + 1) + (uint)(*(int *)(param_2 + 1) == 0) + iVar1 + iVar2 +
                        iVar4);
  iVar1 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar1 = iVar3;
  }
  FUN_1400020e8(param_1,*param_2,iVar1);
  iVar1 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar1 = iVar3;
  }
  FUN_1400020e8(param_1,*param_3,iVar1);
  iVar1 = local_40 + -1;
  if (local_40 == 0) {
    iVar1 = iVar3;
  }
  FUN_1400020e8(param_1,local_48,iVar1);
  iVar1 = *(int *)(param_5 + 1) + -1;
  if (*(int *)(param_5 + 1) == 0) {
    iVar1 = iVar3;
  }
  FUN_1400020e8(param_1,*param_5,iVar1);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5c21a FUN_147b5c21a body=540 status=ok
// SIG undefined FUN_147b5c21a(void)

void FUN_147b5c21a(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_78;
  undefined4 local_70;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_58 [2];
  undefined8 local_44;
  undefined4 local_3c;
  longlong local_38 [5];
  
  local_38[4] = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38[2] = 0;
  local_38[3] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = local_44;
  local_70 = local_3c;
  local_88 = local_58;
  FUN_147b5c438(&local_68,local_38 + 2,local_38);
  if (&local_68 == param_3) {
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_68;
    local_68 = 0;
    *(undefined4 *)(param_3 + 1) = local_60;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_5c;
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[4] ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5c438 FUN_147b5c438 body=278 status=ok
// SIG undefined FUN_147b5c438(void)

undefined8 *
FUN_147b5c438(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = 0;
  uStack_60 = 0;
  FUN_147b91a08(param_4,&local_68);
  *param_1 = 0;
  param_1[1] = 0;
  iVar3 = 0;
  iVar1 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar1 = 0;
  }
  iVar2 = (int)uStack_60 + -1;
  if ((int)uStack_60 == 0) {
    iVar2 = 0;
  }
  iVar4 = *(int *)(param_5 + 1) + -1;
  if (*(int *)(param_5 + 1) == 0) {
    iVar4 = iVar3;
  }
  FUN_14005eb28(param_1,*(int *)(param_2 + 1) + (uint)(*(int *)(param_2 + 1) == 0) + iVar1 + iVar2 +
                        iVar4);
  iVar1 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar1 = iVar3;
  }
  FUN_1400020e8(param_1,*param_2,iVar1);
  iVar1 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar1 = iVar3;
  }
  FUN_1400020e8(param_1,*param_3,iVar1);
  iVar1 = (int)uStack_60 + -1;
  if ((int)uStack_60 == 0) {
    iVar1 = iVar3;
  }
  FUN_1400020e8(param_1,local_68,iVar1);
  iVar1 = *(int *)(param_5 + 1) + -1;
  if (*(int *)(param_5 + 1) == 0) {
    iVar1 = iVar3;
  }
  FUN_1400020e8(param_1,*param_5,iVar1);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5c550 FUN_147b5c550 body=514 status=ok
// SIG undefined FUN_147b5c550(void)

void FUN_147b5c550(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_58 [3];
  undefined8 local_40;
  longlong local_38 [5];
  
  local_38[4] = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38[2] = 0;
  local_38[3] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_40 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = local_58;
  FUN_147b5c754(&local_68,local_38 + 2,local_38,local_40);
  if (&local_68 == param_3) {
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_68;
    local_68 = 0;
    *(undefined4 *)(param_3 + 1) = local_60;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_5c;
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[4] ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5c754 FUN_147b5c754 body=270 status=ok
// SIG undefined FUN_147b5c754(void)

undefined8 *
FUN_147b5c754(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  int local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = param_4;
  FUN_1400021e4(&local_40,&local_50);
  *param_1 = 0;
  param_1[1] = 0;
  iVar3 = 0;
  iVar1 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar1 = 0;
  }
  iVar2 = local_48 + -1;
  if (local_48 == 0) {
    iVar2 = 0;
  }
  iVar4 = *(int *)(param_5 + 1) + -1;
  if (*(int *)(param_5 + 1) == 0) {
    iVar4 = iVar3;
  }
  FUN_14005eb28(param_1,*(int *)(param_2 + 1) + (uint)(*(int *)(param_2 + 1) == 0) + iVar1 + iVar2 +
                        iVar4);
  iVar1 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar1 = iVar3;
  }
  FUN_1400020e8(param_1,*param_2,iVar1);
  iVar1 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar1 = iVar3;
  }
  FUN_1400020e8(param_1,*param_3,iVar1);
  iVar1 = local_48 + -1;
  if (local_48 == 0) {
    iVar1 = iVar3;
  }
  FUN_1400020e8(param_1,local_50,iVar1);
  iVar1 = *(int *)(param_5 + 1) + -1;
  if (*(int *)(param_5 + 1) == 0) {
    iVar1 = iVar3;
  }
  FUN_1400020e8(param_1,*param_5,iVar1);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5c864 FUN_147b5c864 body=514 status=ok
// SIG undefined FUN_147b5c864(void)

void FUN_147b5c864(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_58 [3];
  undefined8 local_40;
  longlong local_38 [5];
  
  local_38[4] = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38[2] = 0;
  local_38[3] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = local_58;
  FUN_147b5ca68(&local_68,local_38 + 2,local_38,local_40);
  if (&local_68 == param_3) {
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_68;
    local_68 = 0;
    *(undefined4 *)(param_3 + 1) = local_60;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_5c;
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[4] ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5ca68 FUN_147b5ca68 body=303 status=ok
// SIG undefined FUN_147b5ca68(void)

undefined8 *
FUN_147b5ca68(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
             undefined8 *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_4 == 0) {
    FUN_140056680(&local_48,&DAT_149e01fe8);
  }
  else {
    local_38 = *(undefined8 *)(param_4 + 0x18);
    FUN_1400021e4(&local_38,&local_48);
  }
  *param_1 = 0;
  param_1[1] = 0;
  iVar3 = 0;
  iVar1 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar1 = 0;
  }
  iVar2 = local_40 + -1;
  if (local_40 == 0) {
    iVar2 = 0;
  }
  iVar4 = *(int *)(param_5 + 1) + -1;
  if (*(int *)(param_5 + 1) == 0) {
    iVar4 = iVar3;
  }
  FUN_14005eb28(param_1,*(int *)(param_2 + 1) + (uint)(*(int *)(param_2 + 1) == 0) + iVar1 + iVar2 +
                        iVar4);
  iVar1 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar1 = iVar3;
  }
  FUN_1400020e8(param_1,*param_2,iVar1);
  iVar1 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar1 = iVar3;
  }
  FUN_1400020e8(param_1,*param_3,iVar1);
  iVar1 = local_40 + -1;
  if (local_40 == 0) {
    iVar1 = iVar3;
  }
  FUN_1400020e8(param_1,local_48,iVar1);
  iVar1 = *(int *)(param_5 + 1) + -1;
  if (*(int *)(param_5 + 1) == 0) {
    iVar1 = iVar3;
  }
  FUN_1400020e8(param_1,*param_5,iVar1);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5cb98 FUN_147b5cb98 body=560 status=ok
// SIG undefined FUN_147b5cb98(void)

void FUN_147b5cb98(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong local_68 [3];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  longlong local_38 [5];
  
  local_38[4] = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_38[2] = 0;
  local_38[3] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_68[0] = 0;
  local_68[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = local_50;
  uStack_94 = uStack_4c;
  uStack_90 = uStack_48;
  uStack_8c = uStack_44;
  local_88 = local_40;
  local_a8 = local_68;
  FUN_147b5cdca(&local_78,local_38 + 2,local_38);
  if (&local_78 == param_3) {
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_78;
    local_78 = 0;
    *(undefined4 *)(param_3 + 1) = local_70;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_6c;
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[4] ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5cdca FUN_147b5cdca body=302 status=ok
// SIG undefined FUN_147b5cdca(void)

undefined8 *
FUN_147b5cdca(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = param_4[2];
  FUN_140002266(&local_48,L"P=%f Y=%f R=%f",*param_4,param_4[1]);
  *param_1 = 0;
  param_1[1] = 0;
  iVar3 = 0;
  iVar1 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar1 = 0;
  }
  iVar2 = local_40 + -1;
  if (local_40 == 0) {
    iVar2 = 0;
  }
  iVar4 = *(int *)(param_5 + 1) + -1;
  if (*(int *)(param_5 + 1) == 0) {
    iVar4 = iVar3;
  }
  FUN_14005eb28(param_1,*(int *)(param_2 + 1) + (uint)(*(int *)(param_2 + 1) == 0) + iVar1 + iVar2 +
                        iVar4);
  iVar1 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar1 = iVar3;
  }
  FUN_1400020e8(param_1,*param_2,iVar1);
  iVar1 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar1 = iVar3;
  }
  FUN_1400020e8(param_1,*param_3,iVar1);
  iVar1 = local_40 + -1;
  if (local_40 == 0) {
    iVar1 = iVar3;
  }
  FUN_1400020e8(param_1,local_48,iVar1);
  iVar1 = *(int *)(param_5 + 1) + -1;
  if (*(int *)(param_5 + 1) == 0) {
    iVar1 = iVar3;
  }
  FUN_1400020e8(param_1,*param_5,iVar1);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5cefa FUN_147b5cefa body=560 status=ok
// SIG undefined FUN_147b5cefa(void)

void FUN_147b5cefa(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong local_68 [3];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  longlong local_38 [5];
  
  local_38[4] = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_38[2] = 0;
  local_38[3] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_68[0] = 0;
  local_68[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = local_50;
  uStack_94 = uStack_4c;
  uStack_90 = uStack_48;
  uStack_8c = uStack_44;
  local_88 = local_40;
  local_a8 = local_68;
  FUN_147b5d12c(&local_78,local_38 + 2,local_38);
  if (&local_78 == param_3) {
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_78;
    local_78 = 0;
    *(undefined4 *)(param_3 + 1) = local_70;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_6c;
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[4] ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5d12c FUN_147b5d12c body=302 status=ok
// SIG undefined FUN_147b5d12c(void)

undefined8 *
FUN_147b5d12c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = param_4[2];
  FUN_140002266(&local_48,L"X=%3.3f Y=%3.3f Z=%3.3f",*param_4,param_4[1]);
  *param_1 = 0;
  param_1[1] = 0;
  iVar3 = 0;
  iVar1 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar1 = 0;
  }
  iVar2 = local_40 + -1;
  if (local_40 == 0) {
    iVar2 = 0;
  }
  iVar4 = *(int *)(param_5 + 1) + -1;
  if (*(int *)(param_5 + 1) == 0) {
    iVar4 = iVar3;
  }
  FUN_14005eb28(param_1,*(int *)(param_2 + 1) + (uint)(*(int *)(param_2 + 1) == 0) + iVar1 + iVar2 +
                        iVar4);
  iVar1 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar1 = iVar3;
  }
  FUN_1400020e8(param_1,*param_2,iVar1);
  iVar1 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar1 = iVar3;
  }
  FUN_1400020e8(param_1,*param_3,iVar1);
  iVar1 = local_40 + -1;
  if (local_40 == 0) {
    iVar1 = iVar3;
  }
  FUN_1400020e8(param_1,local_48,iVar1);
  iVar1 = *(int *)(param_5 + 1) + -1;
  if (*(int *)(param_5 + 1) == 0) {
    iVar1 = iVar3;
  }
  FUN_1400020e8(param_1,*param_5,iVar1);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5d25c FUN_147b5d25c body=533 status=ok
// SIG undefined FUN_147b5d25c(void)

void FUN_147b5d25c(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38 [5];
  
  local_38[4] = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38[2] = 0;
  local_38[3] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = local_48;
  uStack_74 = uStack_44;
  uStack_70 = uStack_40;
  uStack_6c = uStack_3c;
  local_88 = local_58;
  FUN_147b5d472(&local_68,local_38 + 2,local_38);
  if (&local_68 == param_3) {
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_68;
    local_68 = 0;
    *(undefined4 *)(param_3 + 1) = local_60;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_5c;
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[4] ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5d472 FUN_147b5d472 body=290 status=ok
// SIG undefined FUN_147b5d472(void)

undefined8 *
FUN_147b5d472(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140002266(&local_48,L"X=%3.3f Y=%3.3f",*param_4,param_4[1]);
  *param_1 = 0;
  param_1[1] = 0;
  iVar3 = 0;
  iVar1 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar1 = 0;
  }
  iVar2 = local_40 + -1;
  if (local_40 == 0) {
    iVar2 = 0;
  }
  iVar4 = *(int *)(param_5 + 1) + -1;
  if (*(int *)(param_5 + 1) == 0) {
    iVar4 = iVar3;
  }
  FUN_14005eb28(param_1,*(int *)(param_2 + 1) + (uint)(*(int *)(param_2 + 1) == 0) + iVar1 + iVar2 +
                        iVar4);
  iVar1 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar1 = iVar3;
  }
  FUN_1400020e8(param_1,*param_2,iVar1);
  iVar1 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar1 = iVar3;
  }
  FUN_1400020e8(param_1,*param_3,iVar1);
  iVar1 = local_40 + -1;
  if (local_40 == 0) {
    iVar1 = iVar3;
  }
  FUN_1400020e8(param_1,local_48,iVar1);
  iVar1 = *(int *)(param_5 + 1) + -1;
  if (*(int *)(param_5 + 1) == 0) {
    iVar1 = iVar3;
  }
  FUN_1400020e8(param_1,*param_5,iVar1);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5d5a8 FUN_147b5d5a8 body=498 status=ok
// SIG undefined FUN_147b5d5a8(void)

void FUN_147b5d5a8(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined1 auStack_88 [32];
  uint local_68;
  undefined4 local_60;
  int local_50;
  int local_4c;
  undefined2 *local_48;
  undefined8 uStack_40;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_48 = (undefined2 *)0x0;
  uStack_40 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  iVar1 = local_4c;
  local_50 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  iVar3 = (int)uStack_40 + -1;
  puVar2 = local_48;
  if ((int)uStack_40 == 0) {
    puVar2 = &DAT_149dfb77a;
    iVar3 = 0;
  }
  local_68 = (uint)(local_50 != 0);
  local_60 = 0xffffffff;
  iVar1 = FUN_1447ee042(local_38,puVar2,iVar3,iVar1 == 0);
  *(bool *)param_3 = iVar1 != -1;
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5d7a0 FUN_147b5d7a0 body=242 status=ok
// SIG undefined FUN_147b5d7a0(void)

void FUN_147b5d7a0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  wchar_t *pwVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  pwVar1 = L"true";
  if (local_1c == 0) {
    pwVar1 = L"false";
  }
  FUN_140056680(&local_30,pwVar1);
  if (&local_30 == param_3) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_30;
    *(undefined4 *)(param_3 + 1) = local_28;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_24;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5d894 FUN_147b5d894 body=227 status=ok
// SIG undefined FUN_147b5d894(void)

void FUN_147b5d894(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [48];
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  puVar1 = local_50;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b5d978(&local_60,puVar1);
  if (&local_60 == param_3) {
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_60;
    *(undefined4 *)(param_3 + 1) = local_58;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_54;
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5d978 FUN_147b5d978 body=344 status=ok
// SIG undefined FUN_147b5d978(void)

undefined8 FUN_147b5d978(undefined8 param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_a8 [32];
  double local_88;
  undefined2 *local_80;
  int local_78;
  undefined2 *local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  dVar1 = *param_2;
  dVar2 = param_2[1];
  local_88 = (param_2[5] - param_2[2]) * 0.5;
  dVar7 = (param_2[4] - dVar2) * 0.5;
  dVar6 = (param_2[3] - dVar1) * 0.5;
  dVar3 = param_2[2] + local_88;
  FUN_140002266(&local_70,L"X=%3.3f Y=%3.3f Z=%3.3f",dVar6,dVar7);
  puVar5 = &DAT_149dfb77a;
  if (local_68 != 0) {
    puVar5 = local_70;
  }
  local_88 = dVar3;
  FUN_140002266(&local_80,L"X=%3.3f Y=%3.3f Z=%3.3f",dVar1 + dVar6,dVar2 + dVar7);
  puVar4 = &DAT_149dfb77a;
  if (local_78 != 0) {
    puVar4 = local_80;
  }
  FUN_140002266(param_1,L"Center: %s Extents: %s ",puVar4,puVar5);
  if (local_80 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_70 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5dad2 FUN_147b5dad2 body=227 status=ok
// SIG undefined FUN_147b5dad2(void)

void FUN_147b5dad2(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [48];
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  puVar1 = local_50;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b5dbb6(&local_60,puVar1);
  if (&local_60 == param_3) {
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_60;
    *(undefined4 *)(param_3 + 1) = local_58;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_54;
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5dbb6 FUN_147b5dbb6 body=281 status=ok
// SIG undefined FUN_147b5dbb6(void)

undefined8 FUN_147b5dbb6(undefined8 param_1,undefined8 *param_2)

{
  undefined2 *puVar1;
  wchar_t *pwVar2;
  undefined2 *puVar3;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = (undefined2 *)param_2[5];
  FUN_140002266(&local_48,L"X=%3.3f Y=%3.3f Z=%3.3f",param_2[3],param_2[4]);
  puVar3 = &DAT_149dfb77a;
  if (local_40 != 0) {
    puVar3 = local_48;
  }
  local_68 = (undefined2 *)param_2[2];
  FUN_140002266(&local_58,L"X=%3.3f Y=%3.3f Z=%3.3f",*param_2,param_2[1]);
  puVar1 = &DAT_149dfb77a;
  if (local_50 != 0) {
    puVar1 = local_58;
  }
  pwVar2 = L"true";
  if (*(char *)(param_2 + 6) == '\0') {
    pwVar2 = L"false";
  }
  local_68 = puVar3;
  FUN_140002266(param_1,L"IsValid=%s, Min=(%s), Max=(%s)",pwVar2,puVar1);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5dcd0 FUN_147b5dcd0 body=229 status=ok
// SIG undefined FUN_147b5dcd0(void)

void FUN_147b5dcd0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140002266(&local_30,&DAT_149e063bc,local_19);
  if (&local_30 == param_3) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_30;
    *(undefined4 *)(param_3 + 1) = local_28;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_24;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5ddb6 FUN_147b5ddb6 body=224 status=ok
// SIG undefined FUN_147b5ddb6(void)

void FUN_147b5ddb6(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_28;
  uStack_44 = uStack_24;
  uStack_40 = uStack_20;
  uStack_3c = uStack_1c;
  FUN_1411ab340(&local_48,&local_38);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5de98 FUN_147b5de98 body=259 status=ok
// SIG undefined FUN_147b5de98(void)

void FUN_147b5de98(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar1 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_20 = *puVar1;
  FUN_1400021e4(&local_20,&local_48);
  if (&local_48 == param_3) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_48;
    *(undefined4 *)(param_3 + 1) = local_40;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_3c;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5df9c FUN_147b5df9c body=236 status=ok
// SIG undefined FUN_147b5df9c(void)

void FUN_147b5df9c(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar1 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b5e08a(&local_48,puVar1);
  if (&local_48 == param_3) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_48;
    *(undefined4 *)(param_3 + 1) = local_40;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_3c;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5e08a FUN_147b5e08a body=185 status=ok
// SIG undefined FUN_147b5e08a(void)

undefined8 FUN_147b5e08a(undefined8 param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14686b592(param_2,&local_40);
  puVar2 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar2 = local_40;
  }
  FUN_1400021e4(param_2,&local_50);
  puVar1 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar1 = local_50;
  }
  FUN_140002266(param_1,L"(\"%s\",\"%s\")",puVar1,puVar2);
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5e144 FUN_147b5e144 body=231 status=ok
// SIG undefined FUN_147b5e144(void)

void FUN_147b5e144(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_1c = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140002266(&local_30,&DAT_149e063bc,local_1c);
  if (&local_30 == param_3) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_30;
    *(undefined4 *)(param_3 + 1) = local_28;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_24;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5e22c FUN_147b5e22c body=232 status=ok
// SIG undefined FUN_147b5e22c(void)

void FUN_147b5e22c(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_144a83f76();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140002266(&local_30,L"%lld",local_20);
  if (&local_30 == param_3) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_30;
    *(undefined4 *)(param_3 + 1) = local_28;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_24;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5e316 FUN_147b5e316 body=230 status=ok
// SIG undefined FUN_147b5e316(void)

void FUN_147b5e316(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140002266(&local_30,L"X=%d Y=%d",local_20,local_20 >> 0x20);
  if (&local_30 == param_3) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_30;
    *(undefined4 *)(param_3 + 1) = local_28;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_24;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5e3fe FUN_147b5e3fe body=230 status=ok
// SIG undefined FUN_147b5e3fe(void)

void FUN_147b5e3fe(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_24;
  local_40 = local_1c;
  local_38 = 0;
  uStack_30 = 0;
  FUN_147b91a08(&local_48,&local_38);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    *(undefined4 *)(param_3 + 1) = (undefined4)uStack_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = uStack_30._4_4_;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5e4e6 FUN_147b5e4e6 body=234 status=ok
// SIG undefined FUN_147b5e4e6(void)

void FUN_147b5e4e6(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  puVar1 = local_98;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1467fd708(puVar1,&local_a8);
  if (&local_a8 == param_3) {
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_a8;
    *(undefined4 *)(param_3 + 1) = local_a0;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_9c;
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5e5d2 FUN_147b5e5d2 body=270 status=ok
// SIG undefined FUN_147b5e5d2(void)

void FUN_147b5e5d2(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_28 == 0) {
    FUN_140056680(&local_38,&DAT_149e01fe8);
  }
  else {
    local_20 = *(undefined8 *)(local_28 + 0x18);
    FUN_1400021e4(&local_20,&local_38);
  }
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5e6e2 FUN_147b5e6e2 body=231 status=ok
// SIG undefined FUN_147b5e6e2(void)

void FUN_147b5e6e2(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_1c = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140002266(&local_30,&DAT_149e063bc,local_1c);
  if (&local_30 == param_3) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_30;
    *(undefined4 *)(param_3 + 1) = local_28;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_24;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5e7ca FUN_147b5e7ca body=252 status=ok
// SIG undefined FUN_147b5e7ca(void)

void FUN_147b5e7ca(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_20;
  FUN_140002266(&local_40,L"P=%f Y=%f R=%f",local_30,local_28);
  if (&local_40 == param_3) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_40;
    *(undefined4 *)(param_3 + 1) = local_38;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_34;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5e8ce FUN_147b5e8ce body=361 status=ok
// SIG undefined FUN_147b5e8ce(void)

void FUN_147b5e8ce(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  undefined1 local_48 [16];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar3 = local_48;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  local_49 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_49);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_49);
  }
  puVar2 = &local_49;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1467ee0d0(puVar3,local_38);
  *puVar2 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5ea38 FUN_147b5ea38 body=190 status=ok
// SIG undefined FUN_147b5ea38(void)

void FUN_147b5ea38(undefined8 param_1,longlong param_2,double *param_3)

{
  wchar_t *_Str;
  double dVar1;
  undefined1 auStack_48 [32];
  wchar_t *local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (wchar_t *)0x0;
  uStack_20 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  _Str = local_28;
  if ((int)uStack_20 == 0) {
    _Str = L"";
  }
  dVar1 = wcstod(_Str,(wchar_t **)0x0);
  *param_3 = dVar1;
  if (local_28 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147b5eaf8 FUN_147b5eaf8 body=186 status=ok
// SIG undefined FUN_147b5eaf8(void)

void FUN_147b5eaf8(undefined8 param_1,longlong param_2,int *param_3)

{
  int iVar1;
  wchar_t *_Str;
  undefined1 auStack_48 [32];
  wchar_t *local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (wchar_t *)0x0;
  uStack_20 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  _Str = local_28;
  if ((int)uStack_20 == 0) {
    _Str = L"";
  }
  iVar1 = _wtoi(_Str);
  *param_3 = iVar1;
  if (local_28 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147b5ebb4 FUN_147b5ebb4 body=187 status=ok
// SIG undefined FUN_147b5ebb4(void)

void FUN_147b5ebb4(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  wchar_t *_Str;
  undefined1 auStack_48 [32];
  wchar_t *local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (wchar_t *)0x0;
  uStack_20 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  _Str = local_28;
  if ((int)uStack_20 == 0) {
    _Str = L"";
  }
  lVar1 = _wtoi64(_Str);
  *param_3 = lVar1;
  if (local_28 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147b5ec76 FUN_147b5ec76 body=340 status=ok
// SIG undefined FUN_147b5ec76(void)

void FUN_147b5ec76(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_78 [39];
  undefined1 local_51;
  undefined1 local_50 [24];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  puVar3 = local_50;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  local_51 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_51);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_51);
  }
  puVar2 = &local_51;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1467fb2e6(puVar3,local_38);
  *puVar2 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5edd2 FUN_147b5edd2 body=340 status=ok
// SIG undefined FUN_147b5edd2(void)

void FUN_147b5edd2(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_78 [39];
  undefined1 local_51;
  undefined1 local_50 [24];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  puVar3 = local_50;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  local_51 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_51);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_51);
  }
  puVar2 = &local_51;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1467fc5ae(puVar3,local_38);
  *puVar2 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5ef2e FUN_147b5ef2e body=340 status=ok
// SIG undefined FUN_147b5ef2e(void)

void FUN_147b5ef2e(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  undefined1 local_48 [16];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar3 = local_48;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  local_49 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_49);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_49);
  }
  puVar2 = &local_49;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_146805230(puVar3,local_38);
  *puVar2 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5f08a FUN_147b5f08a body=340 status=ok
// SIG undefined FUN_147b5f08a(void)

void FUN_147b5f08a(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_68 [35];
  undefined1 local_45;
  undefined1 local_44 [12];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_44);
  }
  puVar3 = local_44;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  local_45 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_45);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_45);
  }
  puVar2 = &local_45;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1467fbb9a(puVar3,local_38);
  *puVar2 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5f1e0 FUN_147b5f1e0 body=292 status=ok
// SIG undefined FUN_147b5f1e0(void)

void FUN_147b5f1e0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0x3ff00000;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_34 = 0x3ff00000;
  uStack_30 = 0;
  uStack_2c = 0x3ff00000;
  local_28 = 0x3ff0000000000000;
  uStack_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  puVar1 = &local_78;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b5f306(&local_88,puVar1);
  if (&local_88 == param_3) {
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_88;
    *(undefined4 *)(param_3 + 1) = local_80;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_7c;
  }
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5f306 FUN_147b5f306 body=389 status=ok
// SIG undefined FUN_147b5f306(void)

undefined8 FUN_147b5f306(undefined8 param_1,undefined8 *param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_b8 [32];
  undefined2 *local_98;
  undefined2 *local_90;
  int local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = (undefined2 *)param_2[10];
  FUN_140002266(&local_68,L"X=%3.3f Y=%3.3f Z=%3.3f",param_2[8],param_2[9]);
  puVar2 = &DAT_149dfb77a;
  if (local_60 != 0) {
    puVar2 = local_68;
  }
  local_58 = (undefined2 *)*param_2;
  uStack_50 = param_2[1];
  local_48 = *(undefined4 *)(param_2 + 2);
  uStack_44 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_40 = *(undefined4 *)(param_2 + 3);
  uStack_3c = *(undefined4 *)((longlong)param_2 + 0x1c);
  FUN_1448052ee(&local_58,&local_80);
  local_98 = (undefined2 *)local_70;
  FUN_140002266(&local_58,L"P=%f Y=%f R=%f",local_80,local_78);
  puVar3 = &DAT_149dfb77a;
  if ((int)uStack_50 != 0) {
    puVar3 = local_58;
  }
  local_98 = (undefined2 *)param_2[6];
  FUN_140002266(&local_90,L"X=%3.3f Y=%3.3f Z=%3.3f",param_2[4],param_2[5]);
  puVar1 = &DAT_149dfb77a;
  if (local_88 != 0) {
    puVar1 = local_90;
  }
  local_98 = puVar2;
  FUN_140002266(param_1,L"Translation: %s Rotation: %s Scale: %s",puVar1,puVar3);
  if (local_90 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5f48c FUN_147b5f48c body=240 status=ok
// SIG undefined FUN_147b5f48c(void)

void FUN_147b5f48c(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140002266(&local_38,L"X=%3.3f Y=%3.3f",local_28,local_20);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5f57e FUN_147b5f57e body=252 status=ok
// SIG undefined FUN_147b5f57e(void)

void FUN_147b5f57e(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_68 [32];
  double local_48;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  float local_24;
  float local_20;
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = (double)local_1c;
  FUN_140002266(&local_38,L"X=%3.3f Y=%3.3f Z=%3.3f",(double)local_24,(double)local_20);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5f67c FUN_147b5f67c body=289 status=ok
// SIG undefined FUN_147b5f67c(void)

void FUN_147b5f67c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong uStack_40;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_48 = 0;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = &local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1467acc78(plVar2);
  *param_3 = uVar1;
  FUN_1447a1747(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5f7a4 FUN_147b5f7a4 body=383 status=ok
// SIG undefined FUN_147b5f7a4(void)

void FUN_147b5f7a4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  undefined2 *local_38;
  undefined8 uStack_30;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_39 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  iVar3 = (int)uStack_30 + -1;
  puVar2 = local_38;
  if ((int)uStack_30 == 0) {
    puVar2 = &DAT_149dfb77a;
    iVar3 = 0;
  }
  uVar1 = FUN_144a38768(local_28,puVar2,iVar3,local_39);
  *param_3 = uVar1;
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5f936 FUN_147b5f936 body=372 status=ok
// SIG undefined FUN_147b5f936(void)

void FUN_147b5f936(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined2 *puVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  undefined8 uStack_40;
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48 = (undefined2 *)0x0;
  uStack_40 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar5 = local_48;
  if ((int)uStack_40 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  puVar3 = &DAT_149dfb77a;
  if ((int)uStack_30 != 0) {
    puVar3 = local_38;
  }
  lVar8 = 0;
  while( true ) {
    uVar1 = *(ushort *)((longlong)puVar3 + lVar8);
    uVar6 = (uint)uVar1;
    uVar2 = *(ushort *)((longlong)puVar5 + lVar8);
    uVar4 = (uint)uVar2;
    if (uVar1 != uVar2) {
      if ((uVar2 | uVar1) < 0x80) {
        uVar6 = (uint)(byte)(&DAT_149e05da0)[uVar1];
        uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar2];
        if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_147b5f9f9;
      }
      iVar7 = uVar6 - uVar4;
      goto LAB_147b5fa22;
    }
    if (uVar1 == 0) break;
LAB_147b5f9f9:
    lVar8 = lVar8 + 2;
  }
  iVar7 = 0;
LAB_147b5fa22:
  *(bool *)param_3 = iVar7 == 0;
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8(local_48);
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5fabe FUN_147b5fabe body=575 status=ok
// SIG undefined FUN_147b5fabe(void)

void FUN_147b5fabe(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined1 auStack_88 [32];
  uint local_68;
  undefined4 local_60;
  undefined4 local_54;
  int local_50;
  int local_4c;
  undefined2 *local_48;
  undefined8 uStack_40;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_48 = (undefined2 *)0x0;
  uStack_40 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  iVar2 = local_4c;
  local_50 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  iVar1 = local_50;
  local_54 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  iVar5 = (int)uStack_40 + -1;
  puVar4 = local_48;
  if ((int)uStack_40 == 0) {
    puVar4 = &DAT_149dfb77a;
    iVar5 = 0;
  }
  local_60 = local_54;
  local_68 = (uint)(iVar1 != 0);
  uVar3 = FUN_1447ee042(local_38,puVar4,iVar5,iVar2 == 0);
  *param_3 = uVar3;
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5fcfe FUN_147b5fcfe body=210 status=ok
// SIG undefined FUN_147b5fcfe(void)

void FUN_147b5fcfe(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b5fdd2(&local_38,local_28);
  FUN_1410e5bda(param_3,&local_38);
  FUN_1447a1747(local_38,local_30);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b5fdd2 FUN_147b5fdd2 body=325 status=ok
// SIG undefined FUN_147b5fdd2(void)

/* WARNING: Removing unreachable block (ram,0x000147b5fe89) */

longlong * FUN_147b5fdd2(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  void *_Dst;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined2 local_42;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  if (1 < (int)param_2[1]) {
    lVar5 = 0;
    uVar2 = local_58;
    uVar3 = local_50;
    do {
      local_50 = uVar3;
      local_58 = uVar2;
      local_42 = *(undefined2 *)(*param_2 + lVar5 * 2);
      FUN_14006620a(&local_58,&local_42,1);
      iVar6 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar6 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar6 + 1U) {
        FUN_1447a1bd6(param_1,iVar6);
      }
      lVar1 = *param_1;
      lVar7 = (longlong)iVar6 * 0x10;
      *(undefined8 *)(lVar1 + lVar7) = 0;
      *(undefined8 *)(lVar1 + lVar7) = local_58;
      local_58 = 0;
      uVar2 = local_58;
      *(undefined4 *)(lVar1 + 8 + lVar7) = (undefined4)local_50;
      *(undefined4 *)(lVar1 + 0xc + lVar7) = local_50._4_4_;
      local_50 = 0;
      uVar3 = local_50;
      local_50 = 0;
      local_58 = 0;
      lVar5 = lVar5 + 1;
    } while ((int)lVar5 < (int)param_2[1]);
    iVar6 = (int)param_1[1];
    lVar5 = *param_1;
    _Dst = (void *)(lVar5 + (longlong)iVar6 * 0x10 + -0x10);
    FUN_1447a1747(_Dst,1);
    iVar4 = (int)param_1[1] - iVar6;
    if (iVar4 != 0) {
      memmove(_Dst,(void *)(lVar5 + (longlong)iVar6 * 0x10),(longlong)iVar4 << 4);
      iVar6 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar6 + -1;
    FUN_140b12644(param_1);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147b5ff18 FUN_147b5ff18 body=282 status=ok
// SIG undefined FUN_147b5ff18(void)

void FUN_147b5ff18(undefined8 param_1,longlong param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_58 [44];
  int local_2c;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (-1 < (longlong)local_2c) {
    iVar2 = (int)uStack_20 + -1;
    if ((int)uStack_20 == 0) {
      iVar2 = 0;
    }
    if (local_2c < iVar2) {
      uVar1 = (uint)*(ushort *)(local_28 + (longlong)local_2c * 2);
      goto LAB_147b5ffc1;
    }
  }
  uVar1 = 0;
LAB_147b5ffc1:
  *param_3 = uVar1;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b60034 FUN_147b60034 body=447 status=ok
// SIG undefined FUN_147b60034(void)

void FUN_147b60034(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  int local_30;
  undefined4 local_2c;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_30 < 0) {
    local_48 = 0;
    uStack_40 = 0;
  }
  else {
    FUN_144a63a7c(local_28,&local_48,local_2c);
  }
  if (&local_48 == param_3) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_48;
    local_48 = 0;
    *(undefined4 *)(param_3 + 1) = (undefined4)uStack_40;
    *(undefined4 *)((longlong)param_3 + 0xc) = uStack_40._4_4_;
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b601fa FUN_147b601fa body=165 status=ok
// SIG undefined FUN_147b601fa(void)

void FUN_147b601fa(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 = (int)uStack_20 < 2;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b602a6 FUN_147b602a6 body=170 status=ok
// SIG undefined FUN_147b602a6(void)

void FUN_147b602a6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1405b43cc(local_28);
  *param_3 = uVar1;
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b60352 FUN_147b60352 body=401 status=ok
// SIG undefined FUN_147b60352(void)

void FUN_147b60352(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined2 *local_48;
  undefined8 uStack_40;
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar1 = &local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_48 = (undefined2 *)0x0;
  uStack_40 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar2 = local_48;
  if ((int)uStack_40 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_144a8b2a0(&local_58,plVar1,puVar2);
  if (&local_58 == param_3) {
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_58;
    local_58 = 0;
    *(undefined4 *)(param_3 + 1) = local_50;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_4c;
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147b604e4 FUN_147b604e4 body=379 status=ok
// SIG undefined FUN_147b604e4(void)

void FUN_147b604e4(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined2 *puVar1;
  int iVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  int local_2c;
  undefined2 *local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = (undefined2 *)0x0;
  uStack_20 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  iVar2 = (int)uStack_20 + -1;
  puVar1 = local_28;
  if ((int)uStack_20 == 0) {
    iVar2 = 0;
    puVar1 = &DAT_149dfb77a;
  }
  if (local_2c < iVar2) {
    iVar2 = local_2c;
  }
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  FUN_14006620a(&local_40,puVar1,iVar2);
  if (&local_40 == param_3) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_40;
    local_40 = 0;
    *(undefined4 *)(param_3 + 1) = local_38;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_34;
  }
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b60660 FUN_147b60660 body=379 status=ok
// SIG undefined FUN_147b60660(void)

void FUN_147b60660(undefined8 param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  int local_2c;
  undefined2 *local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = (undefined2 *)0x0;
  uStack_20 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar2 = local_28;
  if ((int)uStack_20 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  iVar1 = (int)uStack_20 + -1;
  if ((int)uStack_20 == 0) {
    iVar1 = 0;
  }
  iVar3 = iVar1 - local_2c;
  if (iVar1 <= iVar1 - local_2c) {
    iVar3 = iVar1;
  }
  if (iVar3 < 1) {
    iVar3 = 0;
  }
  FUN_14006620a(&local_40,puVar2,iVar3);
  if (&local_40 == param_3) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_40;
    local_40 = 0;
    *(undefined4 *)(param_3 + 1) = local_38;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_34;
  }
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147b607dc FUN_147b607dc body=337 status=ok
// SIG undefined FUN_147b607dc(void)

void FUN_147b607dc(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_2c;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1467ace6c(local_28,&local_40,local_2c);
  if (&local_40 == param_3) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_40;
    local_40 = 0;
    *(undefined4 *)(param_3 + 1) = local_38;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_34;
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b6092e FUN_147b6092e body=171 status=ok
// SIG undefined FUN_147b6092e(void)

void FUN_147b6092e(undefined8 param_1,longlong param_2,int *param_3)

{
  int iVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  iVar1 = (int)uStack_20 + -1;
  if ((int)uStack_20 == 0) {
    iVar1 = 0;
  }
  *param_3 = iVar1;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b609e0 FUN_147b609e0 body=383 status=ok
// SIG undefined FUN_147b609e0(void)

void FUN_147b609e0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  undefined2 *local_38;
  undefined8 uStack_30;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_39 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  iVar3 = (int)uStack_30 + -1;
  puVar2 = local_38;
  if ((int)uStack_30 == 0) {
    puVar2 = &DAT_149dfb77a;
    iVar3 = 0;
  }
  uVar1 = FUN_14038a98c(local_28,puVar2,iVar3,local_39);
  *param_3 = uVar1;
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b60b60 FUN_147b60b60 body=447 status=ok
// SIG undefined FUN_147b60b60(void)

void FUN_147b60b60(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  int local_30;
  undefined4 local_2c;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_30 < 0) {
    local_48 = 0;
    uStack_40 = 0;
  }
  else {
    FUN_144a63a7c(local_28,&local_48,local_2c);
  }
  if (&local_48 == param_3) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_48;
    local_48 = 0;
    *(undefined4 *)(param_3 + 1) = (undefined4)uStack_40;
    *(undefined4 *)((longlong)param_3 + 0xc) = uStack_40._4_4_;
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b60d26 FUN_147b60d26 body=316 status=ok
// SIG undefined FUN_147b60d26(void)

void FUN_147b60d26(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  longlong local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  plVar1 = &local_40;
  if (plVar2 != (longlong *)0x0) {
    plVar1 = plVar2;
  }
  plVar2 = &local_58;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 = (int)plVar1[1] != (int)plVar2[1] || *plVar1 != *plVar2;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b60e6a FUN_147b60e6a body=276 status=ok
// SIG undefined FUN_147b60e6a(void)

void FUN_147b60e6a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  puVar2 = &local_48;
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = puVar3;
  }
  puVar3 = &local_68;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147b60f80(puVar2,puVar3);
  *param_3 = uVar1;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b60f80 FUN_147b60f80 body=139 status=ok
// SIG undefined FUN_147b60f80(void)

ulonglong FUN_147b60f80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = *param_2;
  uVar1 = param_2[1];
  uVar3 = FUN_144a7891a(uVar1);
  local_40 = *param_1;
  uVar2 = param_1[1];
  uVar4 = FUN_144a7891a(uVar2);
  local_58 = uVar1;
  local_50 = &local_38;
  uVar5 = FUN_144a789b8(uVar4,uVar2,&local_40,uVar3);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar5 ^ 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b61012 FUN_147b61012 body=372 status=ok
// SIG undefined FUN_147b61012(void)

void FUN_147b61012(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined2 *puVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  undefined8 uStack_40;
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48 = (undefined2 *)0x0;
  uStack_40 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar5 = local_48;
  if ((int)uStack_40 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  puVar3 = &DAT_149dfb77a;
  if ((int)uStack_30 != 0) {
    puVar3 = local_38;
  }
  lVar8 = 0;
  while( true ) {
    uVar1 = *(ushort *)((longlong)puVar3 + lVar8);
    uVar6 = (uint)uVar1;
    uVar2 = *(ushort *)((longlong)puVar5 + lVar8);
    uVar4 = (uint)uVar2;
    if (uVar1 != uVar2) {
      if ((uVar2 | uVar1) < 0x80) {
        uVar6 = (uint)(byte)(&DAT_149e05da0)[uVar1];
        uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar2];
        if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_147b610d5;
      }
      iVar7 = uVar6 - uVar4;
      goto LAB_147b610fe;
    }
    if (uVar1 == 0) break;
LAB_147b610d5:
    lVar8 = lVar8 + 2;
  }
  iVar7 = 0;
LAB_147b610fe:
  *(bool *)param_3 = iVar7 != 0;
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8(local_48);
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b61194 FUN_147b61194 body=424 status=ok
// SIG undefined FUN_147b61194(void)

void FUN_147b61194(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined2 *puVar1;
  undefined1 auStack_78 [32];
  longlong local_58;
  ulonglong uStack_50;
  int local_3c;
  undefined2 *local_38;
  undefined8 uStack_30;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = 0;
  uStack_50 = 0;
  puVar1 = local_38;
  if ((int)uStack_30 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_1403de9f2(local_28,&local_58,puVar1,local_3c != 0);
  FUN_1410e5bda(param_3,&local_58);
  FUN_1447a1747(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147b6133e FUN_147b6133e body=560 status=ok
// SIG undefined FUN_147b6133e(void)

void FUN_147b6133e(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_88 [32];
  uint local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 local_54;
  byte local_49;
  undefined2 *local_48;
  undefined8 uStack_40;
  undefined2 *local_38;
  undefined8 uStack_30;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48 = (undefined2 *)0x0;
  uStack_40 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_49 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_49);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_49);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar2 = &DAT_149dfb77a;
  if ((int)uStack_40 != 0) {
    puVar2 = local_48;
  }
  puVar1 = &DAT_149dfb77a;
  if ((int)uStack_30 != 0) {
    puVar1 = local_38;
  }
  local_68 = (uint)local_49;
  FUN_140807d8e(local_28,&local_60,puVar1,puVar2);
  if (&local_60 == param_3) {
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_60;
    local_60 = 0;
    *(undefined4 *)(param_3 + 1) = local_58;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_54;
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b61570 FUN_147b61570 body=489 status=ok
// SIG undefined FUN_147b61570(void)

void FUN_147b61570(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [47];
  undefined1 local_59;
  undefined2 *local_58;
  undefined8 uStack_50;
  undefined2 *local_48;
  undefined8 uStack_40;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar3 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_48 = (undefined2 *)0x0;
  uStack_40 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_58 = (undefined2 *)0x0;
  uStack_50 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_59 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_59);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_59);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar4 = &DAT_149dfb77a;
  if ((int)uStack_50 != 0) {
    puVar4 = local_58;
  }
  puVar2 = &DAT_149dfb77a;
  if ((int)uStack_40 != 0) {
    puVar2 = local_48;
  }
  uVar1 = FUN_1448097c4(plVar3,puVar2,puVar4,local_59);
  *param_3 = uVar1;
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b6175a FUN_147b6175a body=241 status=ok
// SIG undefined FUN_147b6175a(void)

void FUN_147b6175a(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b6184c(&local_38,local_28);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    local_38 = 0;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b6184c FUN_147b6184c body=90 status=ok
// SIG undefined FUN_147b6184c(void)

undefined8 * FUN_147b6184c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  FUN_1467accd8(param_1);
  return param_1;
}



// FUNCTION 147b618a6 FUN_147b618a6 body=386 status=ok
// SIG undefined FUN_147b618a6(void)

void FUN_147b618a6(undefined8 param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  int local_2c;
  undefined2 *local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = (undefined2 *)0x0;
  uStack_20 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18));
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar3 = local_28;
  if ((int)uStack_20 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  iVar1 = (int)uStack_20 + -1;
  if ((int)uStack_20 == 0) {
    iVar1 = 0;
  }
  iVar2 = iVar1;
  if (local_2c < iVar1) {
    iVar2 = local_2c;
  }
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  FUN_140056680(&local_40,(longlong)puVar3 + ((longlong)iVar1 * 2 - (ulonglong)(uint)(iVar2 * 2)));
  if (&local_40 == param_3) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_40;
    local_40 = 0;
    *(undefined4 *)(param_3 + 1) = local_38;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_34;
  }
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147b61a2a FUN_147b61a2a body=384 status=ok
// SIG undefined FUN_147b61a2a(void)

void FUN_147b61a2a(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined2 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  uint local_2c;
  undefined2 *local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = (undefined2 *)0x0;
  uStack_20 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = (int)uStack_20 - 1;
  puVar1 = local_28;
  if ((int)uStack_20 == 0) {
    uVar4 = 0;
    puVar1 = &DAT_149dfb77a;
  }
  uVar2 = local_2c;
  if ((int)uVar4 <= (int)local_2c) {
    uVar2 = uVar4;
  }
  uVar3 = (ulonglong)uVar2;
  if ((int)uVar2 < 1) {
    uVar3 = 0;
  }
  FUN_14006620a(&local_40,puVar1 + uVar3,uVar4 - (int)uVar3);
  if (&local_40 == param_3) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_40;
    local_40 = 0;
    *(undefined4 *)(param_3 + 1) = local_38;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_34;
  }
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b61bac FUN_147b61bac body=337 status=ok
// SIG undefined FUN_147b61bac(void)

void FUN_147b61bac(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_2c;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1467acf64(local_28,&local_40,local_2c);
  if (&local_40 == param_3) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_40;
    local_40 = 0;
    *(undefined4 *)(param_3 + 1) = local_38;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_34;
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b61cfe FUN_147b61cfe body=262 status=ok
// SIG undefined FUN_147b61cfe(void)

void FUN_147b61cfe(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[4] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
  }
  plVar1 = local_48 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b61e06(plVar1,local_48);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b61e06 FUN_147b61e06 body=173 status=ok
// SIG undefined FUN_147b61e06(void)

void FUN_147b61e06(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  undefined2 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  lStack_30 = 0;
  local_28 = 0;
  if (*(int *)(param_2 + 1) == 0) {
    local_20 = &DAT_149dfb77a;
  }
  else {
    local_20 = (undefined2 *)*param_2;
  }
  FUN_14136ed14(&local_20,&local_38);
  if (*param_1 != local_38) {
    param_1[2] = 0;
  }
  *param_1 = local_38;
  if (param_1[1] != lStack_30) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = local_28;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b61eb4 FUN_147b61eb4 body=342 status=ok
// SIG undefined FUN_147b61eb4(void)

void FUN_147b61eb4(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined2 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined4 local_40;
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  plVar3 = plVar1;
  if (plVar1 == (longlong *)0x0) {
    plVar3 = &local_48;
  }
  local_58 = (undefined2 *)0x0;
  uStack_50 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar2 = local_58;
  if ((int)uStack_50 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_30,puVar2,1);
  if (*plVar3 != local_30) {
    plVar4 = &local_48;
    if (plVar1 != (longlong *)0x0) {
      plVar4 = plVar1;
    }
    plVar4[2] = 0;
  }
  *plVar3 = local_30;
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147b62018 FUN_147b62018 body=383 status=ok
// SIG undefined FUN_147b62018(void)

void FUN_147b62018(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  undefined2 *local_38;
  undefined8 uStack_30;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_39 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  iVar3 = (int)uStack_30 + -1;
  puVar2 = local_38;
  if ((int)uStack_30 == 0) {
    puVar2 = &DAT_149dfb77a;
    iVar3 = 0;
  }
  uVar1 = FUN_144a791f8(local_28,puVar2,iVar3,local_39);
  *param_3 = uVar1;
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b62198 FUN_147b62198 body=382 status=ok
// SIG undefined FUN_147b62198(void)

void FUN_147b62198(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined2 *puVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_68 [32];
  int local_48;
  int local_40;
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_1c = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar1 = &DAT_149dfb77a;
  if (local_1c < 0.0) {
    puVar1 = (undefined2 *)&DAT_149e1419a;
  }
  fVar2 = ABS(local_1c);
  fVar3 = fVar2 - (float)((int)ROUND(fVar2 / 60.0 + fVar2 / 60.0 + -0.5) >> 1) * 60.0;
  local_48 = (int)ROUND(fVar3 + fVar3 + -0.5) >> 1;
  auVar4 = roundps(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2),1);
  fVar2 = (fVar2 - auVar4._0_4_) * 100.0;
  local_40 = (int)ROUND(fVar2 + fVar2 + -0.5) >> 1;
  FUN_140002266(&local_30,L"%s%02d:%02d.%02d",puVar1);
  if (&local_30 == param_3) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_30;
    *(undefined4 *)(param_3 + 1) = local_28;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_24;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b62318 FUN_147b62318 body=248 status=ok
// SIG undefined FUN_147b62318(void)

void FUN_147b62318(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_144a2b0a4(local_28,&local_38);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    local_38 = 0;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b62412 FUN_147b62412 body=248 status=ok
// SIG undefined FUN_147b62412(void)

void FUN_147b62412(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1400d3e84(local_28,&local_38);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    local_38 = 0;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b6250c FUN_147b6250c body=248 status=ok
// SIG undefined FUN_147b6250c(void)

void FUN_147b6250c(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140b7cf16(local_28,&local_38);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    local_38 = 0;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b62606 FUN_147b62606 body=248 status=ok
// SIG undefined FUN_147b62606(void)

void FUN_147b62606(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1462682d6(local_28,&local_38);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    local_38 = 0;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


