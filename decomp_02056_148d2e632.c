// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148d2e632 FUN_148d2e632 body=263 status=ok
// SIG undefined FUN_148d2e632(void)

void FUN_148d2e632(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    uVar6 = (longlong)(int)((uint)((ulonglong)param_2 >> 0x20) ^ (uint)param_2) &
            (longlong)(int)param_1[9] - 1U;
    lVar4 = (longlong)*(int *)((longlong)plVar5 + uVar6 * 4);
    if (lVar4 != -1) {
      lVar2 = *param_1;
      local_40 = *(undefined8 *)(lVar2 + lVar4 * 0x48);
      local_48 = param_2;
      cVar3 = FUN_1407052fc();
      if (cVar3 == '\0') {
        puVar1 = (undefined8 *)(lVar2 + lVar4 * 0x48);
        do {
          puVar7 = puVar1;
          lVar4 = (longlong)*(int *)(puVar7 + 8);
          if (lVar4 == -1) goto LAB_148d2e656;
          puVar1 = (undefined8 *)(*param_1 + lVar4 * 0x48);
          local_40 = *puVar1;
          local_48 = param_2;
          cVar3 = FUN_1407052fc(&local_40,&local_48);
        } while (cVar3 == '\0');
        puVar7 = puVar7 + 8;
      }
      else {
        puVar7 = (undefined8 *)((longlong)plVar5 + uVar6 * 4);
      }
      FUN_148d2e73a(param_1,*(undefined4 *)puVar7);
    }
  }
LAB_148d2e656:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d2e73a FUN_148d2e73a body=87 status=ok
// SIG undefined FUN_148d2e73a(void)

void FUN_148d2e73a(longlong *param_1,int param_2)

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
  lVar1 = lVar2 + (longlong)param_2 * 0x48;
  lVar6 = (longlong)*(int *)(lVar1 + 0x44);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x40 + lVar6 * 0x48);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x48 + 0x40);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x40);
  FUN_148d2e792();
  return;
}



// FUNCTION 148d2e792 FUN_148d2e792 body=71 status=ok
// SIG undefined FUN_148d2e792(void)

void FUN_148d2e792(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1 + (longlong)param_2 * 0x48;
  if (*(longlong *)(lVar1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(lVar1 + 8) != 0) {
    FUN_1400020a8();
  }
  FUN_148d2e34c(param_1,param_2);
  return;
}



// FUNCTION 148d2e7da FUN_148d2e7da body=29 status=ok
// SIG undefined FUN_148d2e7da(void)

undefined8 FUN_148d2e7da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d2e812 FUN_148d2e812 body=29 status=ok
// SIG undefined FUN_148d2e812(void)

bool FUN_148d2e812(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148d2e830 FUN_148d2e830 body=26 status=ok
// SIG undefined FUN_148d2e830(void)

bool FUN_148d2e830(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148d2e84a FUN_148d2e84a body=24 status=ok
// SIG undefined FUN_148d2e84a(void)

bool FUN_148d2e84a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148d2e86e FUN_148d2e86e body=101 status=ok
// SIG undefined FUN_148d2e86e(void)

void FUN_148d2e86e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96e890;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b96e820;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d2e8d4 FUN_148d2e8d4 body=101 status=ok
// SIG undefined FUN_148d2e8d4(void)

void FUN_148d2e8d4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96e890;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b96e820;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d2e93a FUN_148d2e93a body=134 status=ok
// SIG undefined FUN_148d2e93a(void)

void FUN_148d2e93a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b96e890;
  p_Var6 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var6;
  *(undefined ***)p_Var1 = &PTR_FUN_14b96e820;
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
                    /* WARNING: Could not recover jumptable at 0x000148d2e9b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d2e9c0 FUN_148d2e9c0 body=40 status=ok
// SIG undefined FUN_148d2e9c0(void)

void FUN_148d2e9c0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148d2e9e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,*(undefined8 *)(param_1 + 8),
             *(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148d2e9e8 FUN_148d2e9e8 body=150 status=ok
// SIG undefined FUN_148d2e9e8(void)

bool FUN_148d2e9e8(longlong param_1)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,*(undefined8 *)(param_1 + 8));
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



// FUNCTION 148d2ea82 FUN_148d2ea82 body=263 status=ok
// SIG undefined FUN_148d2ea82(void)

void FUN_148d2ea82(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    uVar7 = (longlong)(int)((uint)((ulonglong)param_2 >> 0x20) ^ (uint)param_2) &
            (longlong)(int)param_1[9] - 1U;
    lVar4 = (longlong)*(int *)((longlong)plVar5 + uVar7 * 4);
    if (lVar4 != -1) {
      lVar2 = *param_1;
      local_40 = *(undefined8 *)(lVar2 + lVar4 * 0x14);
      local_48 = param_2;
      cVar3 = FUN_14472d054();
      if (cVar3 == '\0') {
        puVar1 = (undefined8 *)(lVar2 + lVar4 * 0x14);
        do {
          puVar6 = puVar1;
          lVar4 = (longlong)*(int *)((longlong)puVar6 + 0xc);
          if (lVar4 == -1) goto LAB_148d2eaa6;
          puVar1 = (undefined8 *)(*param_1 + lVar4 * 0x14);
          local_40 = *puVar1;
          local_48 = param_2;
          cVar3 = FUN_14472d054(&local_40,&local_48);
        } while (cVar3 == '\0');
        puVar8 = (undefined4 *)((longlong)puVar6 + 0xc);
      }
      else {
        puVar8 = (undefined4 *)((longlong)plVar5 + uVar7 * 4);
      }
      FUN_148d2eb8a(param_1,*puVar8);
    }
  }
LAB_148d2eaa6:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d2eb8a FUN_148d2eb8a body=87 status=ok
// SIG undefined FUN_148d2eb8a(void)

void FUN_148d2eb8a(longlong *param_1,int param_2)

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
  lVar1 = lVar2 + (longlong)param_2 * 0x14;
  lVar6 = (longlong)*(int *)(lVar1 + 0x10);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0xc + lVar6 * 0x14);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x14 + 0xc);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0xc);
  FUN_148d2d2c6();
  return;
}



// FUNCTION 148d2ebe2 FUN_148d2ebe2 body=31 status=ok
// SIG undefined FUN_148d2ebe2(void)

undefined8 FUN_148d2ebe2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d2ec1c FUN_148d2ec1c body=29 status=ok
// SIG undefined FUN_148d2ec1c(void)

bool FUN_148d2ec1c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148d2ec3a FUN_148d2ec3a body=26 status=ok
// SIG undefined FUN_148d2ec3a(void)

bool FUN_148d2ec3a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148d2ec54 FUN_148d2ec54 body=101 status=ok
// SIG undefined FUN_148d2ec54(void)

void FUN_148d2ec54(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3ecf50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96e900;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d2ecba FUN_148d2ecba body=101 status=ok
// SIG undefined FUN_148d2ecba(void)

void FUN_148d2ecba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3ecf50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96e900;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d2ed20 FUN_148d2ed20 body=134 status=ok
// SIG undefined FUN_148d2ed20(void)

void FUN_148d2ed20(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3ecf50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b96e900;
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
                    /* WARNING: Could not recover jumptable at 0x000148d2ed97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d2eda6 FUN_148d2eda6 body=52 status=ok
// SIG undefined FUN_148d2eda6(void)

void FUN_148d2eda6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148d2edd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148d2edda FUN_148d2edda body=167 status=ok
// SIG undefined FUN_148d2edda(void)

bool FUN_148d2edda(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
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



// FUNCTION 148d2ee82 FUN_148d2ee82 body=96 status=ok
// SIG undefined FUN_148d2ee82(void)

void FUN_148d2ee82(longlong param_1,int param_2)

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



// FUNCTION 148d2eee2 FUN_148d2eee2 body=31 status=ok
// SIG undefined FUN_148d2eee2(void)

undefined8 FUN_148d2eee2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d2ef16 FUN_148d2ef16 body=85 status=ok
// SIG undefined FUN_148d2ef16(void)

void FUN_148d2ef16(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96e990;
  return;
}



// FUNCTION 148d2ef6c FUN_148d2ef6c body=118 status=ok
// SIG undefined FUN_148d2ef6c(void)

void FUN_148d2ef6c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b96e990;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d2efd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d2efe2 FUN_148d2efe2 body=101 status=ok
// SIG undefined FUN_148d2efe2(void)

undefined8 FUN_148d2efe2(void)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146035a9c(local_20);
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



// FUNCTION 148d2f048 FUN_148d2f048 body=48 status=ok
// SIG undefined FUN_148d2f048(void)

void FUN_148d2f048(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,4);
  }
  return;
}



// FUNCTION 148d2f078 FUN_148d2f078 body=39 status=ok
// SIG undefined FUN_148d2f078(void)

undefined8 * FUN_148d2f078(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  *param_2 = 0;
  param_2[1] = 0;
  if (param_3 != 0) {
    FUN_1461b7e86(param_3,param_2);
  }
  return param_2;
}



// FUNCTION 148d2f0a0 FUN_148d2f0a0 body=152 status=ok
// SIG undefined FUN_148d2f0a0(void)

undefined8 * FUN_148d2f0a0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  *(undefined8 *)((longlong)param_1 + 0x1a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x22) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0x40000000;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  FUN_14485c47a(param_1 + 2);
  plVar1 = (longlong *)FUN_145a10c70();
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
    if (lVar2 == 0) {
      return param_1;
    }
  }
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(lVar2 + 0x84);
  FUN_146a6959c(param_1 + 7,lVar2 + 0x88);
  return param_1;
}



// FUNCTION 148d2f138 FUN_148d2f138 body=122 status=ok
// SIG undefined FUN_148d2f138(void)

void FUN_148d2f138(longlong param_1)

{
  longlong *plVar1;
  
  FUN_14413d3f8();
  if (*(char *)(param_1 + 0x28) != '\x01') {
    return;
  }
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  plVar1 = DAT_14cabd158;
  if ((((DAT_14c846b14 == '\x01') && (DAT_14c872bf0 == '\0')) && ((DAT_14ca9a35c & 1) != 0)) &&
     (DAT_14ca84e78 != '\x01')) {
    if (DAT_14cabd108 == 0) goto LAB_148d2f18c;
    plVar1 = (longlong *)(DAT_14cabd108 + 0x10);
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x50))();
  }
LAB_148d2f18c:
  FUN_14413d272(param_1);
  return;
}



// FUNCTION 148d2f1b2 FUN_148d2f1b2 body=32 status=ok
// SIG undefined FUN_148d2f1b2(void)

longlong FUN_148d2f1b2(longlong param_1)

{
  FUN_140a5071c();
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  return param_1;
}



// FUNCTION 148d2f1d2 FUN_148d2f1d2 body=121 status=ok
// SIG undefined FUN_148d2f1d2(void)

longlong * FUN_148d2f1d2(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_148e7bfbe(*param_1,param_3,4);
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



// FUNCTION 148d2f24c FUN_148d2f24c body=228 status=ok
// SIG undefined FUN_148d2f24c(void)

undefined8 FUN_148d2f24c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_149e01f80;
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
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14b970fc0;
  local_38[3] = param_3;
  local_38[4] = FUN_148d2f332;
  FUN_140ca2242(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d2f332 FUN_148d2f332 body=299 status=ok
// SIG undefined FUN_148d2f332(void)

void FUN_148d2f332(longlong param_1,float param_2)

{
  float fVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_14479d2ce(param_1 + 0x10);
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0x178) == '\x03')) {
    lVar2 = DAT_14cabd158;
    if ((DAT_14c846b14 == '\x01') &&
       (((DAT_14c872bf0 == '\0' && ((DAT_14ca9a35c & 1) != 0)) && (DAT_14ca84e78 != '\x01')))) {
      if (DAT_14cabd108 == 0) {
        return;
      }
      lVar2 = DAT_14cabd108 + 0x10;
    }
    if (lVar2 != 0) {
      fVar1 = *(float *)(param_1 + 0x48);
      if (*(char *)(param_1 + 0x29) == '\x01') {
        if (fVar1 <= *(float *)(param_1 + 0x30)) {
          FUN_148d2f138(param_1);
          return;
        }
        if (*(longlong *)(param_1 + 0x50) != 0) {
          FUN_148e8105c(*(longlong *)(param_1 + 0x50),*(float *)(param_1 + 0x30) / fVar1);
          if (*(longlong *)(param_1 + 0x50) != 0) {
            FUN_148e801e2(*(longlong *)(param_1 + 0x50),1);
          }
        }
        *(float *)(param_1 + 0x30) = param_2 + *(float *)(param_1 + 0x30);
      }
      else if (*(char *)(param_1 + 0x34) == '\x01') {
        if (fVar1 <= *(float *)(param_1 + 0x2c)) {
          *(undefined1 *)(param_1 + 0x34) = 0;
          lVar2 = *(longlong *)(param_1 + 0x50);
          if (lVar2 != 0) {
            uVar3 = 0;
LAB_148d2f43c:
            FUN_148e801e2(lVar2,uVar3);
            return;
          }
        }
        else {
          *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + param_2;
          if (*(longlong *)(param_1 + 0x50) != 0) {
            FUN_148e8105c(*(longlong *)(param_1 + 0x50),0);
            lVar2 = *(longlong *)(param_1 + 0x50);
            if (lVar2 != 0) {
              uVar3 = 1;
              goto LAB_148d2f43c;
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 148d2f45e FUN_148d2f45e body=228 status=ok
// SIG undefined FUN_148d2f45e(void)

undefined8 FUN_148d2f45e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_149e020b0;
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
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14b971030;
  local_38[3] = param_3;
  local_38[4] = &LAB_148d2f544;
  FUN_1448b6402(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d2f54a FUN_148d2f54a body=228 status=ok
// SIG undefined FUN_148d2f54a(void)

undefined8
FUN_148d2f54a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  local_38 = 3;
  *local_40 = &PTR_LAB_14b52a0d0;
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
  *local_40 = &PTR_FUN_14b9710a0;
  local_40[3] = param_3;
  local_40[4] = param_4;
  FUN_1461a4b52(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d2f630 FUN_148d2f630 body=297 status=ok
// SIG undefined FUN_148d2f630(void)

void FUN_148d2f630(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = FUN_14479d2ce(param_1 + 0x10);
  if ((lVar5 != 0) && (*(char *)(lVar5 + 0x178) == '\x03')) {
    *(undefined1 *)(param_1 + 0x34) = 1;
    local_30 = *(longlong *)(param_2 + 0x20);
    local_28 = *(undefined8 *)(param_2 + 0x28);
    local_20 = *(longlong **)(param_2 + 0x30);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_20 + 1) = (int)local_20[1] + 1;
      UNLOCK();
    }
    uVar4 = FUN_140230656(&local_30);
    if (*(longlong *)(param_1 + 0x50) != 0) {
      FUN_148e810c6(*(longlong *)(param_1 + 0x50),uVar4);
    }
    if ((longlong)*(int *)(param_1 + 0x40) != 0) {
      lVar5 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x38) + lVar5) == local_30) {
          if (*(char *)(param_1 + 0x29) == '\0') {
            *(undefined1 *)(param_1 + 0x29) = 1;
            if (*(longlong *)(param_1 + 0x50) == 0) {
              *(undefined4 *)(param_1 + 0x2c) = 0;
              goto LAB_148d2f6ef;
            }
            FUN_148e8105c(*(longlong *)(param_1 + 0x50),0);
          }
          break;
        }
        lVar5 = lVar5 + 0x18;
      } while ((longlong)*(int *)(param_1 + 0x40) * 0x18 != lVar5);
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      FUN_148e801e2(*(longlong *)(param_1 + 0x50),1);
    }
LAB_148d2f6ef:
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
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d2f75a FUN_148d2f75a body=71 status=ok
// SIG undefined FUN_148d2f75a(void)

void FUN_148d2f75a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x10);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x178) == '\x03')) {
    *(undefined1 *)(param_1 + 0x29) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      FUN_148e8105c(*(longlong *)(param_1 + 0x50),0);
      return;
    }
  }
  return;
}



// FUNCTION 148d2f7a2 FUN_148d2f7a2 body=228 status=ok
// SIG undefined FUN_148d2f7a2(void)

undefined8 FUN_148d2f7a2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14b52a1b0;
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
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14b971110;
  local_38[3] = param_3;
  local_38[4] = FUN_148d2f888;
  FUN_1461a4d24(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d2f888 FUN_148d2f888 body=108 status=ok
// SIG undefined FUN_148d2f888(void)

void FUN_148d2f888(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x10);
  if (((lVar1 != 0) && (*(char *)(lVar1 + 0x178) == '\x03')) &&
     (*(undefined1 *)(param_1 + 0x34) = 1, *(char *)(param_1 + 0x29) == '\0')) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      FUN_148e810c6(*(longlong *)(param_1 + 0x50),0);
      if (*(longlong *)(param_1 + 0x50) != 0) {
        FUN_148e8105c(*(longlong *)(param_1 + 0x50),0);
        if (*(longlong *)(param_1 + 0x50) != 0) {
          FUN_148e801e2(*(longlong *)(param_1 + 0x50),1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 148d2f8f4 FUN_148d2f8f4 body=177 status=ok
// SIG undefined FUN_148d2f8f4(void)

void FUN_148d2f8f4(longlong *param_1,longlong *param_2)

{
  int iVar1;
  ushort uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ushort uVar5;
  ulonglong uVar6;
  
  if ((char)param_1[0x2f] == '\x03') {
    iVar1 = (int)param_1[0xc6];
    if (iVar1 == (int)param_2[1]) {
      if (1 < iVar1) {
        lVar4 = 0;
        while( true ) {
          uVar5 = *(ushort *)(param_1[0xc5] + lVar4);
          uVar6 = (ulonglong)uVar5;
          uVar2 = *(ushort *)(*param_2 + lVar4);
          if (uVar5 != uVar2) break;
          if (uVar5 == 0) {
            return;
          }
LAB_148d2f94b:
          lVar4 = lVar4 + 2;
        }
        if ((uVar2 | uVar5) < 0x80) {
          uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
          uVar3 = (ulonglong)uVar2;
          uVar2 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
          if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar3]) goto LAB_148d2f94b;
        }
        if (uVar5 != uVar2) goto LAB_148d2f974;
      }
    }
    else if ((int)param_2[1] + iVar1 != 1) {
LAB_148d2f974:
      FUN_144a787a6();
      (**(code **)(*param_1 + 0x578))(param_1);
      FUN_144149546(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 148d2f9a6 FUN_148d2f9a6 body=444 status=ok
// SIG undefined FUN_148d2f9a6(void)

void FUN_148d2f9a6(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  void *pvVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  void *local_50;
  int local_48;
  undefined4 local_44;
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    lVar4 = FUN_140b6d0be();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      local_50 = (void *)0x0;
      local_48 = *(int *)(param_3 + 1);
      lVar4 = (longlong)local_48;
      pvVar2 = (void *)*param_3;
      local_58 = param_1;
      if (lVar4 == 0) {
        local_44 = 0;
      }
      else {
        FUN_1446dd670(&local_50,local_48,0);
        memcpy(local_50,pvVar2,lVar4 * 2);
      }
      local_40 = (undefined8 *)0x0;
      local_38 = 0;
      FUN_1446efa72(&local_40,0,4,0x10);
      puVar3 = local_40;
      local_38 = 4;
      *local_40 = &PTR_LAB_14b4f7870;
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
      local_40[2] = lVar5;
      *local_40 = &PTR_FUN_14b971950;
      local_40[3] = 0;
      FUN_14485c47a(local_40 + 3,param_1);
      pvVar2 = local_50;
      puVar3[4] = local_58;
      puVar3[5] = 0;
      lVar4 = (longlong)local_48;
      *(int *)(puVar3 + 6) = local_48;
      if (lVar4 == 0) {
        *(undefined4 *)((longlong)puVar3 + 0x34) = 0;
      }
      else {
        FUN_1446dd670(puVar3 + 5,local_48,0);
        memcpy((void *)puVar3[5],pvVar2,lVar4 * 2);
      }
      FUN_148d93e24(lVar1,&local_40);
      if (local_50 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d2fb64 FUN_148d2fb64 body=51 status=ok
// SIG undefined FUN_148d2fb64(void)

void FUN_148d2fb64(undefined8 param_1,undefined8 *param_2)

{
  if (((byte *)*param_2 != (byte *)0x0) && ((*(byte *)*param_2 & 0x6b) == 3)) {
    FUN_1488b09de(param_2);
    FUN_148d2fb97(param_2);
    return;
  }
  return;
}



// FUNCTION 148d2fb97 FUN_148d2fb97 body=252 status=ok
// SIG undefined FUN_148d2fb97(void)

void FUN_148d2fb97(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  byte *pbVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [36];
  undefined1 local_54 [4];
  undefined8 local_50;
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar6 = (undefined8 *)FUN_1408db39c(param_1,"allowed_characters");
  pbVar3 = (byte *)*puVar6;
  plVar4 = (longlong *)puVar6[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if ((pbVar3 != (byte *)0x0) && ((*pbVar3 & 0x6b) == 2)) {
    lVar8 = (longlong)(int)(*(longlong **)(pbVar3 + 8))[2];
    if (lVar8 != 0) {
      lVar7 = **(longlong **)(pbVar3 + 8);
      lVar8 = lVar8 << 4;
      do {
        cVar5 = FUN_140c1ab54(lVar7);
        if (cVar5 != '\0') {
          local_50 = 0;
          FUN_1400bc2c2(lVar7,local_48,&local_50);
          FUN_144869592(&DAT_14cbca510,local_54,local_48,0);
        }
        lVar7 = lVar7 + 0x10;
        lVar8 = lVar8 + -0x10;
      } while (lVar8 != 0);
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
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d2fc94 FUN_148d2fc94 body=335 status=ok
// SIG undefined FUN_148d2fc94(void)

void FUN_148d2fc94(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  undefined1 local_30 [8];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = FUN_140d27a2a();
  if (((((byte)(*(char *)(lVar3 + 0xb0) - 5U) < 2) && (*(char *)(param_1 + 0x4b0) == '\x01')) &&
      (*(char *)(param_1 + 0x4b1) == '\0')) && (1 < *(int *)(param_1 + 0x40))) {
    uVar4 = FUN_14119d4d6(param_1);
    FUN_148d2fde4(param_1,uVar4);
    uVar4 = FUN_1401cb356();
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_1446efa72(&local_40,0,3,0x10);
    puVar2 = local_40;
    local_38 = 3;
    *local_40 = &PTR_LAB_149e02020;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_40[2] = lVar5;
    *local_40 = &PTR_FUN_14b971340;
    local_40[3] = 0;
    FUN_14485c47a(local_40 + 3,param_1);
    puVar2[4] = param_1;
    local_48 = 0;
    FUN_1405f67fc(uVar4,local_30,&local_40,L"UOakGameInstance.EnableFullscreenCharacterSelect");
    if (local_28 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
    }
    FUN_1449db362(&local_40);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d2fde4 FUN_148d2fde4 body=505 status=ok
// SIG undefined FUN_148d2fde4(void)

undefined8 FUN_148d2fde4(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_68 [38];
  undefined1 local_42;
  undefined1 local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != (longlong *)0x0) {
    *(undefined1 *)(param_1 + 0x4b1) = 1;
    if (*(longlong *)(param_1 + 0x30) != 0) {
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x2a0);
      if ((lVar8 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar8);
      }
      else if (lVar8 == 0) goto LAB_148d2fe5d;
      lVar5 = FUN_140d976a6();
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
           ) == lVar5 + 0x30)) {
        if (*(longlong *)(param_1 + 0x30) == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x360);
        }
        lVar5 = FUN_140334a94(param_2,uVar7);
        if (lVar5 != 0) {
          lVar6 = FUN_144a5dd5e();
          if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
            uVar7 = FUN_140d27aa0(lVar5);
            FUN_148db7d8a(uVar7);
            uVar4 = (**(code **)(*param_2 + 0x328))(param_2);
            cVar3 = FUN_14572de9c(lVar8,uVar4);
            if (cVar3 != '\0') {
              lVar8 = FUN_14030d4a0();
              if ((*(int *)(lVar8 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
                  lVar8 + 0x30)) {
                FUN_140c125e6(param_2 + 0x67,&DAT_14cbd9510);
              }
              *(longlong **)(param_1 + 0x4b8) = param_2;
            }
          }
        }
        iVar1 = *(int *)(param_1 + 0x40);
        if ((longlong)iVar1 != 0) {
          lVar8 = *(longlong *)(param_1 + 0x38);
          lVar5 = 0;
          do {
            plVar2 = *(longlong **)(lVar8 + lVar5);
            if (plVar2 != param_2 && plVar2 != (longlong *)0x0) {
              lVar6 = FUN_14030d4a0();
              if ((*(int *)(lVar6 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
                  lVar6 + 0x30)) {
                FUN_1403ca8ec(plVar2 + 0x67,&DAT_14cbd9510);
              }
            }
            lVar5 = lVar5 + 8;
          } while ((longlong)iVar1 * 8 != lVar5);
        }
        local_41 = 0;
        local_42 = 1;
        FUN_14572dde0(param_1 + 0x650,&local_42,*(undefined8 *)(param_1 + 0x4b8));
        uVar7 = 1;
        goto LAB_148d2fe5f;
      }
    }
  }
LAB_148d2fe5d:
  uVar7 = 0;
LAB_148d2fe5f:
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d2ffde FUN_148d2ffde body=369 status=ok
// SIG undefined FUN_148d2ffde(void)

void FUN_148d2ffde(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [46];
  undefined1 local_3a;
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(char *)(param_1 + 0x4b0) != '\x01') || (*(char *)(param_1 + 0x4b1) != '\x01'))
  goto LAB_148d3000f;
  *(undefined8 *)(param_1 + 0x4b8) = 0;
  *(undefined4 *)(param_1 + 0x4a8) = 0;
  if (*(int *)(param_1 + 0x4ac) != 0) {
    FUN_148d36578(param_1 + 0x4a0,0);
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x2a0);
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar2);
    }
    else if (lVar2 == 0) goto LAB_148d300b6;
    lVar4 = FUN_140d976a6();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      FUN_14572de9c(lVar2,0xffffffff);
    }
  }
LAB_148d300b6:
  iVar1 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if (lVar3 != 0) {
        lVar5 = FUN_14030d4a0();
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
          FUN_140c125e6(lVar3 + 0x338,&DAT_14cbd9510);
        }
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  *(undefined1 *)(param_1 + 0x4b1) = 0;
  local_39 = 0;
  local_3a = 0;
  FUN_14572dde0(param_1 + 0x650,&local_3a,0);
LAB_148d3000f:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d30150 FUN_148d30150 body=374 status=ok
// SIG undefined FUN_148d30150(void)

void FUN_148d30150(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  if (((*(char *)(param_1 + 0x4b1) == '\x01') && (*(longlong *)(param_1 + 0x4b8) != 0)) &&
     (iVar1 = *(int *)(param_1 + 0x40), (longlong)iVar1 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar7 = 0;
    do {
      lVar5 = *(longlong *)(lVar2 + lVar7);
      if ((lVar5 != 0) && (lVar5 != *(longlong *)(param_1 + 0x4b8))) {
        if (*(longlong *)(param_1 + 0x30) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x360);
        }
        lVar3 = FUN_140334a94(lVar5,uVar6);
        if (lVar3 != 0) {
          lVar4 = FUN_144a5dd5e();
          if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
             (((*(byte *)(lVar3 + 0x65) & 2) == 0 &&
              (((*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0 &&
               (lVar3 = FUN_140d27aa0(lVar3), *(byte *)(lVar3 + 0xb4) < 3)))))) {
            FUN_148d2fde4(param_1,lVar5);
            return;
          }
        }
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar1 * 8 != lVar7);
    iVar1 = *(int *)(param_1 + 0x40);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x38);
      lVar7 = 0;
      do {
        if (*(longlong *)(param_1 + 0x30) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x360);
        }
        lVar5 = FUN_140334a94(*(undefined8 *)(lVar2 + lVar7),uVar6);
        if (lVar5 != 0) {
          lVar3 = FUN_144a5dd5e();
          if ((((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) &&
              ((*(byte *)(lVar5 + 0x65) & 2) == 0)) && ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0)) {
            uVar6 = FUN_140d27aa0(lVar5);
            FUN_148db7ee8(uVar6);
          }
        }
        lVar7 = lVar7 + 8;
      } while ((longlong)iVar1 * 8 != lVar7);
    }
  }
  return;
}



// FUNCTION 148d302c6 FUN_148d302c6 body=415 status=ok
// SIG undefined FUN_148d302c6(void)

void FUN_148d302c6(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 *local_48;
  undefined4 local_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*(longlong *)(param_1 + 0x488) == 0) || (*(longlong *)(param_1 + 0x490) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x490) + 8) < 1)) {
    if ((*(float *)(param_1 + 0x480) == 0.0) && (!NAN(*(float *)(param_1 + 0x480)))) {
      *(undefined4 *)(param_1 + 0x480) = *(undefined4 *)(param_1 + 0x484);
      uVar5 = FUN_1401cb356();
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      FUN_1446efa72(&local_48,0,3,0x10);
      puVar3 = local_48;
      local_40 = 3;
      *local_48 = &PTR_LAB_149e02020;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar4 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar4 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar4;
      local_48[2] = lVar6;
      *local_48 = &PTR_FUN_14b9713b0;
      local_48[3] = 0;
      FUN_14485c47a(local_48 + 3,param_1);
      *(undefined4 *)(puVar3 + 5) = 0;
      puVar3[4] = FUN_148d30866;
      local_58 = 0;
      FUN_1405f67fc(uVar5,&local_38,&local_48,L"UOakGameInstance_TickSwitchMainMenu");
      *(undefined8 *)(param_1 + 0x488) = local_38;
      local_38 = 0;
      plVar2 = *(longlong **)(param_1 + 0x490);
      *(longlong **)(param_1 + 0x490) = local_30;
      local_30 = (longlong *)0x0;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
        if (local_30 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_30 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_30 + 0x10))();
          }
        }
      }
      FUN_1449db362(&local_48);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d30466 FUN_148d30466 body=377 status=ok
// SIG undefined FUN_148d30466(void)

void FUN_148d30466(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  longlong *local_78 [2];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  longlong *plStack_50;
  longlong local_48 [2];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((*(longlong *)(param_1 + 0x30) != 0) &&
      (lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x360), lVar6 != 0)) &&
     (*(longlong *)(lVar6 + 0x1f0) != 0)) {
    lVar6 = FUN_14583d3ae();
    if (lVar6 != 0) {
      local_38 = 0;
      uStack_30 = 0;
      local_48[0] = 0;
      local_48[1] = 0;
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      cVar4 = FUN_140b66fcc(param_2);
      if ((cVar4 == '\0') || ((int)uStack_30 < 2)) {
        (**(code **)(*param_2 + 0x330))(param_2,&local_68);
        if (local_38 != 0) {
          FUN_1400020a8();
        }
        local_38 = CONCAT44(uStack_64,local_68);
        uStack_30 = CONCAT44(uStack_5c,uStack_60);
      }
      else {
        FUN_145d1c6f4(local_48,&local_38);
      }
      FUN_140009b9a(&local_68,&local_38);
      FUN_148d308c2(param_1,local_78);
      uVar5 = FUN_1441c1730(lVar6,&local_68,local_78);
      *(undefined4 *)(param_1 + 0x498) = uVar5;
      if (local_78[0] != (longlong *)0x0) {
        (**(code **)(*local_78[0] + 0x10))();
      }
      if ((longlong *)CONCAT44(uStack_64,local_68) != (longlong *)0x0) {
        (**(code **)(*(longlong *)CONCAT44(uStack_64,local_68) + 0x10))();
      }
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
      if (local_48[0] != 0) {
        FUN_1400020a8();
      }
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d305e0 FUN_148d305e0 body=81 status=ok
// SIG undefined FUN_148d305e0(void)

void FUN_148d305e0(longlong param_1)

{
  longlong lVar1;
  
  if (((*(longlong *)(param_1 + 0x30) != 0) &&
      (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x360), lVar1 != 0)) &&
     (*(longlong *)(lVar1 + 0x1f0) != 0)) {
    lVar1 = FUN_14583d3ae();
    if (lVar1 != 0) {
      FUN_1441bfcba(lVar1,*(undefined4 *)(param_1 + 0x498));
    }
  }
  *(undefined4 *)(param_1 + 0x498) = 0xffffffff;
  return;
}



// FUNCTION 148d30632 FUN_148d30632 body=312 status=ok
// SIG undefined FUN_148d30632(void)

void FUN_148d30632(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  if (*(char *)(param_1 + 0x474) == '\0') {
    if ((param_2 == 0) || (lVar3 = 0x4b8, *(char *)(param_1 + 0x4b1) == '\0')) goto LAB_148d30685;
  }
  else {
    if (param_2 == 0) goto LAB_148d30685;
    lVar3 = (ulonglong)((*(byte *)(param_1 + 0x4b1) & 1) << 6) + 0x478;
  }
  lVar3 = *(longlong *)(param_1 + lVar3);
  if (lVar3 != param_2 && lVar3 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x4a0);
    if (*(int *)(param_1 + 0x4a8) == 0) {
      *(undefined4 *)(param_1 + 0x4a8) = 1;
      if (*(int *)(param_1 + 0x4ac) == 0) {
        FUN_148d365d8(puVar1,0);
      }
      *(longlong *)*puVar1 = lVar3;
    }
    local_28 = &local_30;
    FUN_148d3665e(puVar1);
    iVar2 = *(int *)(param_1 + 0x4a8);
    *(uint *)(param_1 + 0x4a8) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x4ac) < iVar2 + 1U) {
      FUN_148d365d8(puVar1,iVar2);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x4a0) + (longlong)iVar2 * 8) = local_30;
    if (*(char *)(param_1 + 0x4b1) == '\x01') {
      FUN_148d2fde4(param_1);
    }
    else {
      FUN_145d81956(param_1);
      FUN_148d305e0(param_1);
      FUN_14572f032(param_1,local_30);
    }
  }
LAB_148d30685:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d3076c FUN_148d3076c body=249 status=ok
// SIG undefined FUN_148d3076c(void)

void FUN_148d3076c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  if ((*(char *)(param_1 + 0x474) != '\0') || (*(char *)(param_1 + 0x4b1) == '\x01')) {
    plVar1 = (longlong *)(param_1 + 0x4a0);
    local_28 = &local_30;
    iVar3 = FUN_148d3665e(plVar1);
    if (iVar3 != 0) {
      iVar3 = *(int *)(param_1 + 0x4a8);
      if ((longlong)iVar3 != 0) {
        lVar2 = *(longlong *)(*plVar1 + -8 + (longlong)iVar3 * 8);
        if ((iVar3 == 1) && (*(undefined4 *)(param_1 + 0x4a8) = 0, *(int *)(param_1 + 0x4ac) != 0))
        {
          FUN_148d36578(plVar1,0);
        }
        if ((lVar2 != 0) &&
           (lVar2 != *(longlong *)((ulonglong)*(byte *)(param_1 + 0x4b1) * 0x40 + 0x478 + param_1)))
        {
          if (*(byte *)(param_1 + 0x4b1) == 0) {
            FUN_145d81956(param_1);
            FUN_148d305e0(param_1);
            FUN_14572f032(param_1,lVar2);
          }
          else {
            FUN_148d2fde4(param_1,lVar2);
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d30866 FUN_148d30866 body=91 status=ok
// SIG undefined FUN_148d30866(void)

bool FUN_148d30866(longlong param_1,float param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x480);
  if (0.0 < fVar1) {
    fVar1 = fVar1 - param_2;
    *(float *)(param_1 + 0x480) = fVar1;
    if (fVar1 <= 0.0) {
      *(undefined4 *)(param_1 + 0x480) = 0;
      FUN_148d305e0(param_1);
      fVar1 = *(float *)(param_1 + 0x480);
    }
  }
  return 0.0 < fVar1;
}



// FUNCTION 148d308c2 FUN_148d308c2 body=291 status=ok
// SIG undefined FUN_148d308c2(void)

longlong * FUN_148d308c2(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  wchar_t *pwVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x4b1) == '\x01') {
    local_30 = L"SwitchCharacterSelectMessage";
    local_28 = 0x1c;
    FUN_1446e940c(local_34,&local_30);
    local_30 = L"OakGameInstance";
    local_28 = 0xf;
    FUN_1446e940c(local_38,&local_30);
    pwVar3 = L"Vault Hunter selection in progress";
  }
  else {
    if (*(char *)(param_1 + 0x474) != '\x01') {
      plVar2 = (longlong *)FUN_140e82300();
      plVar1 = (longlong *)*plVar2;
      *param_2 = (longlong)plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      *(int *)(param_2 + 1) = (int)plVar2[1];
      goto LAB_148d30942;
    }
    local_30 = L"SwitchMainMenuMessage";
    local_28 = 0x15;
    FUN_1446e940c(local_34,&local_30);
    local_30 = L"OakGameInstance";
    local_28 = 0xf;
    FUN_1446e940c(local_38,&local_30);
    pwVar3 = L"Press [glyph]action_ui_cursor_click[/glyph] to access your menu";
  }
  FUN_140208bae(param_2,local_38,local_34,pwVar3);
LAB_148d30942:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d309e6 FUN_148d309e6 body=160 status=ok
// SIG undefined FUN_148d309e6(void)

void FUN_148d309e6(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  
  cVar4 = (**(code **)(*param_1 + 0x498))();
  if ((cVar4 == '\b') && (lVar3 = param_1[8], (longlong)(int)lVar3 != 0)) {
    lVar1 = param_1[7];
    lVar6 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar6);
      if (((lVar2 != 0) && (param_2 == 0 || lVar2 == param_2)) && (*(longlong *)(lVar2 + 0x30) != 0)
         ) {
        lVar5 = FUN_144a5dd5e();
        if (((*(longlong *)(lVar2 + 0x30) != 0) && (lVar5 != 0)) &&
           ((lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x30) + 0x10), lVar2 != 0 &&
            ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar2 + 0x38) &&
             (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
              lVar5 + 0x30)))))) {
          FUN_148dacf58();
        }
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar6);
  }
  return;
}



// FUNCTION 148d30a86 FUN_148d30a86 body=8 status=ok
// SIG undefined FUN_148d30a86(void)

undefined8 FUN_148d30a86(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x478);
}



// FUNCTION 148d30a8e FUN_148d30a8e body=1209 status=ok
// SIG undefined FUN_148d30a8e(void)

void FUN_148d30a8e(longlong *param_1,int param_2,ulonglong param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined1 **local_c0;
  undefined4 local_b8;
  undefined1 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  longlong local_90;
  int local_88;
  undefined8 local_80;
  undefined1 *local_78;
  longlong *plStack_70;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((param_1[6] != 0) && (lVar10 = *(longlong *)(param_1[6] + 0x360), lVar10 != 0)) {
    iVar7 = FUN_14490d72a(lVar10);
    if (iVar7 != 3) {
      if (param_1[6] == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(undefined8 *)(param_1[6] + 0x360);
      }
      iVar7 = FUN_140d182cc(uVar11);
      if ((iVar7 != param_2) ||
         (((*(byte *)((longlong)param_1 + 0x544) & 1) != 0 && ((int)param_1[0xa8] != param_2)))) {
        if (*(byte *)((longlong)param_1 + 0x544) != 0) {
          *(undefined1 *)((longlong)param_1 + 0x544) = 0;
          FUN_1447f69b6(param_1 + 0x98);
        }
        if (*(code **)(*param_1 + 0x498) == (code *)&LAB_14015c36e) {
          cVar6 = (char)param_1[0x42];
        }
        else {
          cVar6 = (**(code **)(*param_1 + 0x498))(param_1);
        }
        if (cVar6 != '\b') {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_e8);
        }
        if (*(longlong *)(lVar10 + 0x178) != 0) {
          lVar8 = FUN_14041aabe();
          lVar9 = *(longlong *)(lVar10 + 0x178);
          if (((((lVar9 != 0) && (lVar8 != 0)) && (lVar3 = *(longlong *)(lVar9 + 0x10), lVar3 != 0))
              && ((*(int *)(lVar8 + 0x38) <= *(int *)(lVar3 + 0x38) &&
                  (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
                   == lVar8 + 0x30)))) &&
             ((*(longlong *)(lVar9 + 0x488) != 0 && (lVar9 = FUN_1401b2ade(), lVar9 != 0)))) {
            lVar8 = FUN_144a5dd5e();
            if (((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
                  (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) &&
               (FUN_1410d53f0(&local_78,lVar10), plStack_70 != (longlong *)0x0)) {
              iVar7 = (int)plStack_70[1];
              do {
                if (iVar7 == 0) {
                  plVar12 = (longlong *)0x0;
                  break;
                }
                LOCK();
                iVar2 = (int)plStack_70[1];
                bVar13 = iVar7 == iVar2;
                if (bVar13) {
                  *(int *)(plStack_70 + 1) = iVar7 + 1;
                  iVar2 = iVar7;
                }
                iVar7 = iVar2;
                UNLOCK();
                plVar12 = plStack_70;
              } while (!bVar13);
              LOCK();
              piVar1 = (int *)((longlong)plStack_70 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plStack_70 + 0x10))();
              }
              puVar5 = local_78;
              if (plVar12 != (longlong *)0x0) {
                if (local_78 != (undefined1 *)0x0) {
                  if ((char)*(undefined4 *)((longlong)param_1 + 0x544) == '\0' ||
                      (int)param_1[0xa8] != param_2) {
                    *(int *)(param_1 + 0xa8) = param_2;
                    *(undefined1 *)((longlong)param_1 + 0x544) = 1;
                    FUN_1447f69b6(param_1 + 0x98);
                  }
                  iVar7 = *(int *)(puVar5 + 0x30);
                  if ((longlong)iVar7 != 0) {
                    lVar10 = *(longlong *)(puVar5 + 0x28);
                    lVar8 = 0;
                    do {
                      if (((*(int *)(lVar10 + 8 + lVar8) != 0) &&
                          (plVar4 = *(longlong **)(lVar10 + lVar8), plVar4 != (longlong *)0x0)) &&
                         (cVar6 = (**(code **)(*plVar4 + 0x20))(plVar4,param_1), cVar6 != '\0'))
                      goto LAB_148d30d54;
                      lVar8 = lVar8 + 0x10;
                    } while ((longlong)iVar7 * 0x10 != lVar8);
                  }
                  local_78 = &LAB_148d31066;
                  plStack_70 = (longlong *)((ulonglong)plStack_70 & 0xffffffff00000000);
                  FUN_148d30f66(puVar5 + 0x28,&local_90,param_1);
LAB_148d30d54:
                  local_a8 = *(longlong *)(lVar9 + 0x23d8);
                  iVar7 = *(int *)(lVar9 + 0x23e0);
                  local_80 = 0;
                  local_90 = local_a8;
                  local_88 = iVar7;
                  lVar10 = (**(code **)(*param_1 + 0x478))(param_1);
                  if (lVar10 != 0) {
                    lVar10 = *(longlong *)(lVar10 + 200);
                    if (lVar10 == 0) {
                      local_98 = DAT_14c948620;
                      local_a0 = DAT_14c948618;
                    }
                    else {
                      local_98 = *(undefined4 *)(lVar10 + 0x10);
                      local_a0 = *(undefined8 *)(lVar10 + 8);
                    }
                    FUN_1448075d0(&local_78,&local_a0);
                    lVar10 = FUN_14060eaf6(&local_78);
                    if (local_60 != 0) {
                      FUN_1400020a8();
                    }
                    if (lVar10 != 0) {
                      lVar8 = *(longlong *)(lVar10 + 0x580);
                      if (((lVar8 != 0) &&
                          (iVar2 = *(int *)(lVar10 + 0x588), iVar2 - 1U < 0xfffffffe)) &&
                         (local_a8 != lVar8 || iVar7 != iVar2)) {
                        local_80 = 0;
                        iVar7 = iVar2;
                        local_a8 = lVar8;
                        local_90 = lVar8;
                        local_88 = iVar2;
                      }
                      lVar10 = *(longlong *)(puVar5 + 0xe8);
                      iVar2 = *(int *)(puVar5 + 0xf0);
                      if ((iVar2 - 1U < 0xfffffffe && lVar10 != 0) &&
                         ((local_a8 != lVar10 || (iVar7 != iVar2)))) {
                        local_80 = 0;
                        local_90 = lVar10;
                        local_88 = iVar2;
                      }
                    }
                  }
                  local_c0 = &local_78;
                  local_78 = (undefined1 *)0x0;
                  plStack_70 = (longlong *)0x0;
                  local_b0 = 0;
                  local_b8 = 0xbf800000;
                  local_c8 = 1;
                  cVar6 = FUN_144230d0e(puVar5,&local_90,0,
                                        CONCAT71((int7)((param_3 & 0xffffffff) >> 8),
                                                 ((byte)(param_3 & 0xffffffff) ^ 1) * '\x02'));
                  if (local_78 != (undefined1 *)0x0) {
                    FUN_1400020a8();
                  }
                  if ((cVar6 == '\0') && (*(char *)((longlong)param_1 + 0x544) != '\0')) {
                    *(undefined1 *)((longlong)param_1 + 0x544) = 0;
                    FUN_1447f69b6(param_1 + 0x98);
                  }
                  cVar6 = FUN_148e0bd18(puVar5);
                  if (cVar6 != '\0') {
                    FUN_1410ef0a8(lVar9);
                  }
                }
                LOCK();
                plVar4 = plVar12 + 1;
                *(int *)plVar4 = (int)*plVar4 + -1;
                UNLOCK();
                if ((int)*plVar4 == 0) {
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
          }
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d30f66 FUN_148d30f66 body=254 status=ok
// SIG undefined FUN_148d30f66(void)

undefined8
FUN_148d30f66(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b972cb0;
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
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b971570;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145d00d14(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d31084 FUN_148d31084 body=248 status=ok
// SIG undefined FUN_148d31084(void)

void FUN_148d31084(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined1 local_88 [8];
  undefined1 local_80 [28];
  char local_64;
  longlong local_58;
  char local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(longlong *)(param_1 + 0x30) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x360), lVar1 != 0)) {
    local_90 = FUN_144a2f878();
    if ((local_90 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_90);
    }
    FUN_148d3117e(local_88,lVar1,&local_90);
    if (local_64 == '\0') {
      do {
        lVar1 = local_58;
        if (local_58 != 0) {
          cVar2 = FUN_1449ce97a(local_58);
          if ((cVar2 != '\0') && (*(char *)(lVar1 + 0x178) != '\x03')) {
            FUN_148ccf2b6(lVar1,param_2,param_3);
          }
        }
        FUN_148d31200(local_88);
      } while (local_64 == '\0');
    }
    if (local_30 == '\x01') {
      FUN_14024445c(local_80);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d3117e FUN_148d3117e body=128 status=ok
// SIG undefined FUN_148d3117e(void)

undefined4 * FUN_148d3117e(undefined4 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_3;
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *param_1 = 5;
  *(undefined1 *)(param_1 + 0x16) = 0;
  local_20 = param_2;
  FUN_140244552(param_1 + 2,&local_20,&local_28);
  FUN_148d31200(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d31200 FUN_148d31200 body=420 status=ok
// SIG undefined FUN_148d31200(void)

void FUN_148d31200(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  char *pcVar3;
  uint *puVar4;
  char cVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  char *pcVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  
  lVar12 = (longlong)(int)param_1[6];
  if ((int)(param_1[8] + 1) < (int)(param_1[0x10] + param_1[6])) {
    lVar2 = *(longlong *)(param_1 + 2);
    lVar11 = (longlong)(int)param_1[8] + 1;
    do {
      lVar10 = lVar12;
      puVar4 = param_1 + 0xe;
      if (lVar11 < lVar12) {
        lVar10 = 0;
        puVar4 = param_1 + 4;
      }
      lVar10 = *(longlong *)(*(longlong *)puVar4 + lVar10 * -8 + lVar11 * 8);
      param_1[10] = param_1[10] + 1;
      if (((lVar10 != 0) && (lVar7 = FUN_144a79cc8(lVar10), lVar7 != 0)) &&
         ((uVar1 = *param_1, (uVar1 & 1) == 0 || ((*(uint *)(lVar10 + 8) >> 0x1e & 1) == 0)))) {
        if ((uVar1 & 2) != 0) {
          cVar5 = FUN_144affb44(lVar10);
          if (cVar5 == '\0') goto LAB_148d312aa;
          uVar1 = *param_1;
        }
        if ((uVar1 & 4) != 0) {
          if (((*(byte *)(lVar7 + 0x240) & 0x20) == 0) ||
             (bVar6 = 1, (*(byte *)(lVar7 + 0x242) & 8) != 0)) {
            bVar6 = 1;
            if ((*(byte *)(lVar7 + 0x241) & 0x20) == 0) {
              bVar6 = (*(byte *)(lVar7 + 0x241) & 0x40) >> 6;
            }
          }
          pcVar3 = *(char **)(lVar7 + 0x2e8);
          if (*(longlong *)(lVar7 + 0xc0) == 0) {
            pcVar9 = (char *)0x0;
          }
          else {
            pcVar9 = (char *)FUN_144a8afea();
          }
          if (pcVar3 == (char *)0x0) {
            bVar13 = true;
          }
          else {
            bVar13 = *pcVar3 == '\x02';
          }
          if ((bVar6 & ((pcVar9 == (char *)0x0 || pcVar3 == pcVar9) | bVar13)) != 1)
          goto LAB_148d312aa;
        }
        lVar8 = FUN_144a8afe2(lVar7);
        if (lVar8 == lVar2) {
          if (*(longlong *)(lVar2 + 0x30) == lVar7) {
LAB_148d3139a:
            *(longlong *)(param_1 + 0xc) = lVar10;
            param_1[8] = (uint)lVar11;
            return;
          }
          lVar7 = FUN_14059e8cc();
          if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) goto LAB_148d3139a;
        }
      }
LAB_148d312aa:
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)param_1[0x10] + lVar12);
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  return;
}



// FUNCTION 148d313a4 FUN_148d313a4 body=122 status=ok
// SIG undefined FUN_148d313a4(void)

void FUN_148d313a4(longlong *param_1)

{
  undefined1 auStack_48 [32];
  longlong *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a5dc74(local_28);
  (**(code **)(*param_1 + 0x538))(param_1,0);
  FUN_14413e7dc(param_1,0,local_28,&DAT_14c9485f0);
  FUN_148d3145a(param_1);
  if (local_28[0] != (longlong *)0x0) {
    (**(code **)(*local_28[0] + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d31420 FUN_148d31420 body=57 status=ok
// SIG undefined FUN_148d31420(void)

void FUN_148d31420(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x538))(param_1,0);
  FUN_14413e7dc(param_1,0,param_2,&DAT_14c9485f0);
  FUN_148d3145a(param_1);
  return;
}



// FUNCTION 148d3145a FUN_148d3145a body=610 status=ok
// SIG undefined FUN_148d3145a(void)

void FUN_148d3145a(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 *local_48;
  undefined4 local_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*(longlong *)(param_1 + 0x460) != 0) && (*(longlong *)(param_1 + 0x468) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x468) + 8))) goto LAB_148d31491;
  plVar7 = DAT_14cabd158;
  if (((DAT_14c846b14 == '\x01') && (DAT_14c872bf0 == '\0')) &&
     (((DAT_14ca9a35c & 1) != 0 && (DAT_14ca84e78 != '\x01')))) {
    if (DAT_14cabd108 != 0) {
      plVar7 = (longlong *)(DAT_14cabd108 + 0x10);
      goto LAB_148d314e1;
    }
  }
  else {
LAB_148d314e1:
    if (((plVar7 != (longlong *)0x0) &&
        (cVar3 = (**(code **)(*plVar7 + 0x68))(plVar7), cVar3 != '\0')) &&
       (cVar3 = (**(code **)(*plVar7 + 0x100))(plVar7), cVar3 == '\0')) {
      if (((*(longlong *)(param_1 + 0x30) != 0) &&
          (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x360), lVar5 != 0)) &&
         (*(longlong *)(lVar5 + 0x1f0) != 0)) {
        lVar4 = FUN_1403ca142();
        if (((((*(longlong *)(lVar5 + 0x1f0) != 0) && (lVar4 != 0)) &&
             ((lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x1f0) + 0x10), lVar5 != 0 &&
              ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar5 + 0x38) &&
               (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
                lVar4 + 0x30)))))) && (lVar5 = FUN_14021f720(), lVar5 != 0)) &&
           (*(char *)(lVar5 + 0xa1) != '\x01')) goto LAB_148d31580;
      }
      (**(code **)(*plVar7 + 0x108))(plVar7);
    }
  }
LAB_148d31580:
  FUN_146010374(param_1,0,1);
  uVar6 = FUN_1401cb356();
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar2 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e02020;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  local_48[2] = lVar4;
  *local_48 = &PTR_FUN_14b971650;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_1);
  puVar2[4] = param_1;
  local_58 = 0;
  FUN_1405f67fc(uVar6,&local_38,&local_48,L"UOakGameInstance.TerminateMoviesAndShowLoadingScreen");
  *(undefined8 *)(param_1 + 0x460) = local_38;
  local_38 = 0;
  plVar7 = *(longlong **)(param_1 + 0x468);
  *(longlong **)(param_1 + 0x468) = local_30;
  local_30 = (longlong *)0x0;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_30 + 0x10))();
      }
    }
  }
  FUN_1449db362(&local_48);
LAB_148d31491:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d316be FUN_148d316be body=153 status=ok
// SIG undefined FUN_148d316be(void)

void FUN_148d316be(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 unaff_RBX;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (lVar2 != 0) {
    lVar4 = FUN_140b6d0be();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      uVar1 = *(undefined1 *)(param_1 + 0x4da);
      iVar3 = FUN_144a7c5f6(param_1 + 0x4e0);
      FUN_148d955ea(lVar2,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff,
                    CONCAT31((int3)((uint)(iVar3 * 4) >> 8),(char)(iVar3 * 4) + '\x01'));
      return;
    }
  }
  if ((*(longlong *)(param_1 + 0x30) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x360), lVar2 != 0)) {
    FUN_147d811a6(DAT_14cb0d2b0,lVar2,*(undefined8 *)(lVar2 + 0x38));
    return;
  }
  return;
}



// FUNCTION 148d31758 FUN_148d31758 body=52 status=ok
// SIG undefined FUN_148d31758(void)

void FUN_148d31758(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_1457cd276(param_1,1,1);
  FUN_14413e7dc(param_1,param_2,param_3,&DAT_14c9485f0);
  return;
}



// FUNCTION 148d3178c FUN_148d3178c body=315 status=ok
// SIG undefined FUN_148d3178c(void)

void FUN_148d3178c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [44];
  short local_5c [2];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(longlong *)(param_1 + 0x30) != 0) &&
     (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x360), lVar3 != 0)) {
    lVar2 = FUN_1400f6f32(lVar3);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = *(longlong *)(lVar2 + 0x68);
    }
    lVar3 = FUN_1400f6f32(lVar3);
    if ((((lVar3 != 0) && (lVar2 != 0)) && (*(longlong *)(lVar3 + 0x30) != 0)) &&
       (iVar1 = *(int *)(param_1 + 0x40), (longlong)iVar1 != 0)) {
      lVar3 = *(longlong *)(param_1 + 0x38);
      lVar6 = 0;
      do {
        lVar4 = *(longlong *)(lVar3 + lVar6);
        if (lVar4 != 0) {
          FUN_141237a6a(local_58,lVar4,0);
          lVar4 = FUN_1459afa08(local_58);
          if (lVar4 != 0) {
            lVar5 = FUN_144a7b4ca();
            if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                  (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) &&
               (FUN_1409845a0(lVar2,local_5c), -1 < local_5c[0])) {
              FUN_148dc0b0e(lVar4);
            }
          }
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar1 * 8 != lVar6);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d318c8 FUN_148d318c8 body=40 status=ok
// SIG undefined FUN_148d318c8(void)

void FUN_148d318c8(longlong *param_1)

{
  byte bVar1;
  
  bVar1 = (**(code **)(*param_1 + 0x498))();
  if (5 < bVar1) {
    return;
  }
  FUN_148d3178c(param_1);
  return;
}



// FUNCTION 148d318f0 FUN_148d318f0 body=206 status=ok
// SIG undefined FUN_148d318f0(void)

void FUN_148d318f0(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  code *local_40;
  undefined4 local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*(longlong *)(param_1 + 0x30) != 0) &&
      (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x360), lVar2 != 0)) &&
     (*(longlong *)(lVar2 + 0x1f0) != 0)) {
    lVar2 = FUN_14116599c();
    if (lVar2 != 0) {
      cVar1 = FUN_14144bed0(lVar2);
      if (cVar1 != '\0') {
        FUN_140457ffc(lVar2 + 0x40,param_1);
        local_40 = FUN_148d31c1c;
        local_38 = 0;
        FUN_148d31b1c(lVar2 + 0x40,local_30,param_1);
        local_58 = 0;
        uStack_50 = 0;
        FUN_143f287d4(lVar2,param_2,1);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d319c0 FUN_148d319c0 body=129 status=ok
// SIG undefined FUN_148d319c0(void)

void FUN_148d319c0(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(longlong *)(param_1 + 0x6a0) != 0) && (*(longlong *)(param_1 + 0x6a8) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x6a8) + 8))) {
    FUN_1401cb356();
    local_20 = *(undefined8 *)(param_1 + 0x6a0);
    local_18 = *(longlong *)(param_1 + 0x6a8);
    if (local_18 != 0) {
      LOCK();
      *(int *)(local_18 + 0xc) = *(int *)(local_18 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d31a42 FUN_148d31a42 body=21 status=ok
// SIG undefined FUN_148d31a42(void)

void FUN_148d31a42(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1414b0848();
  FUN_145a15ce8(uVar1);
  return;
}



// FUNCTION 148d31a58 FUN_148d31a58 body=149 status=ok
// SIG undefined FUN_148d31a58(void)

void FUN_148d31a58(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((byte *)*param_1 != (byte *)0x0) && ((~*(byte *)*param_1 & 3) == 0)) {
    plVar1 = (longlong *)FUN_144b083ee();
    local_30 = &local_3c;
    local_3c = 1;
    local_38 = param_2;
    FUN_14049fede(plVar1,&local_24,&local_38,0);
    FUN_1401269c0(*plVar1 + (longlong)local_24 * 0x40 + 0x28,param_3);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d31aee FUN_148d31aee body=46 status=ok
// SIG undefined FUN_148d31aee(void)

undefined8 FUN_148d31aee(longlong *param_1)

{
  char cVar1;
  char extraout_AL;
  undefined7 uVar2;
  undefined7 extraout_var;
  
  if (*(code **)(*param_1 + 0x498) == (code *)&LAB_14015c36e) {
    cVar1 = (char)param_1[0x42];
    uVar2 = 0x14015c3;
  }
  else {
    (**(code **)(*param_1 + 0x498))();
    cVar1 = extraout_AL;
    uVar2 = extraout_var;
  }
  return CONCAT71(uVar2,cVar1 != '\b');
}



// FUNCTION 148d31b1c FUN_148d31b1c body=254 status=ok
// SIG undefined FUN_148d31b1c(void)

undefined8
FUN_148d31b1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b4edcd0;
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
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b971870;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145caf794(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d31c1c FUN_148d31c1c body=236 status=ok
// SIG undefined FUN_148d31c1c(void)

void FUN_148d31c1c(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  if (((param_1[6] != 0) && (lVar3 = *(longlong *)(param_1[6] + 0x360), lVar3 != 0)) &&
     (*(longlong *)(lVar3 + 0x1f0) != 0)) {
    lVar3 = FUN_14116599c();
    if (lVar3 != 0) {
      FUN_140457ffc(lVar3 + 0x40,param_1);
    }
  }
  if (*(code **)(*param_1 + 0x498) == (code *)&LAB_14015c36e) {
    cVar2 = (char)param_1[0x42];
  }
  else {
    cVar2 = (**(code **)(*param_1 + 0x498))(param_1);
  }
  if (cVar2 == '\b') {
    if (param_1[6] == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(param_1[6] + 0x360);
    }
    lVar3 = FUN_147abac98(uVar5,param_3);
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x398) != 0)) {
      lVar4 = FUN_144a7b4ca();
      lVar3 = *(longlong *)(lVar3 + 0x398);
      if ((((lVar3 != 0) && ((lVar4 != 0 && (lVar1 = *(longlong *)(lVar3 + 0x10), lVar1 != 0)))) &&
          (*(int *)(lVar4 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        FUN_145cb0266(lVar3,CONCAT71((int7)((ulonglong)*(longlong *)(lVar1 + 0x30) >> 8),1));
        return;
      }
    }
  }
  return;
}



// FUNCTION 148d31d08 FUN_148d31d08 body=36 status=ok
// SIG undefined FUN_148d31d08(void)

void FUN_148d31d08(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140d27a2a();
  FUN_140628abc(uVar1,0);
  *(undefined1 *)(param_1 + 0x534) = 0;
  return;
}



// FUNCTION 148d31e60 FUN_148d31e60 body=178 status=ok
// SIG undefined FUN_148d31e60(void)

undefined8 * FUN_148d31e60(undefined8 *param_1)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)FUN_14117e474();
  lVar4 = plVar2[0x22];
  if (lVar4 == 0) {
    (**(code **)(*plVar2 + 1000))(plVar2);
    lVar4 = plVar2[0x22];
    if (lVar4 == 0) goto LAB_148d31e9b;
  }
  lVar3 = FUN_14117e474();
  if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
      lVar3 + 0x30)) {
    *param_1 = 0;
    iVar1 = *(int *)(lVar4 + 0x60);
    _Src = *(void **)(lVar4 + 0x58);
    *(int *)(param_1 + 1) = iVar1;
    if ((longlong)iVar1 != 0) {
      FUN_1446dd670(param_1,iVar1,0);
      memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
      return param_1;
    }
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return param_1;
  }
LAB_148d31e9b:
  FUN_140056680(param_1,&DAT_149dfb77a);
  return param_1;
}



// FUNCTION 148d31f12 FUN_148d31f12 body=178 status=ok
// SIG undefined FUN_148d31f12(void)

undefined8 * FUN_148d31f12(undefined8 *param_1)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)FUN_14117e474();
  lVar4 = plVar2[0x22];
  if (lVar4 == 0) {
    (**(code **)(*plVar2 + 1000))(plVar2);
    lVar4 = plVar2[0x22];
    if (lVar4 == 0) goto LAB_148d31f4d;
  }
  lVar3 = FUN_14117e474();
  if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
      lVar3 + 0x30)) {
    *param_1 = 0;
    iVar1 = *(int *)(lVar4 + 0x50);
    _Src = *(void **)(lVar4 + 0x48);
    *(int *)(param_1 + 1) = iVar1;
    if ((longlong)iVar1 != 0) {
      FUN_1446dd670(param_1,iVar1,0);
      memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
      return param_1;
    }
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return param_1;
  }
LAB_148d31f4d:
  FUN_140056680(param_1,&DAT_149dfb77a);
  return param_1;
}



// FUNCTION 148d31fc4 FUN_148d31fc4 body=306 status=ok
// SIG undefined FUN_148d31fc4(void)

void FUN_148d31fc4(undefined8 param_1)

{
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  longlong *local_60 [2];
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = L"ContentNotAvailable";
  local_48 = 0x13;
  FUN_1446e940c(local_64,&local_50);
  local_50 = L"OakGameUtils";
  local_48 = 0xc;
  FUN_1446e940c(local_68,&local_50);
  FUN_140208bae(local_60,local_68,local_64,L"Content Not Available");
  local_50 = L"SaveGameContentNotInstalled";
  local_48 = 0x1b;
  FUN_1446e940c(local_64,&local_50);
  local_50 = L"OakGameUtils";
  local_48 = 0xc;
  FUN_1446e940c(local_68,&local_50);
  FUN_140208bae(&local_50,local_68,local_64,
                L"Unable to launch save game; required content has not finished installing.");
  FUN_148d33c0b(param_1,local_60,&local_50);
  if (local_50 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_50 + 0x10))();
  }
  if (local_60[0] != (longlong *)0x0) {
    (**(code **)(*local_60[0] + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d320f8 FUN_148d320f8 body=131 status=ok
// SIG undefined FUN_148d320f8(void)

void FUN_148d320f8(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  longlong local_38 [2];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = param_3;
  FUN_1400021e4(&local_28,local_38);
  local_50 = *param_2;
  local_48 = *(undefined4 *)(param_2 + 1);
  local_40 = 0;
  FUN_14413e254(param_1,&local_50,local_38,1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d3217c FUN_148d3217c body=36 status=ok
// SIG undefined FUN_148d3217c(void)

void FUN_148d3217c(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = FUN_1457bc0a8();
  if (cVar1 != '\0') {
    return;
  }
  FUN_148d313a4(param_1);
  return;
}



// FUNCTION 148d321a0 FUN_148d321a0 body=193 status=ok
// SIG undefined FUN_148d321a0(void)

void FUN_148d321a0(longlong param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar2 = FUN_1457bc0a8();
  if (cVar2 == '\0') {
    if ((param_2 != '\0') && (lVar1 = *(longlong *)(param_1 + 0x48), lVar1 != 0)) {
      lVar3 = FUN_140b6d0be();
      lVar1 = *(longlong *)(lVar1 + 0x10);
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
    FUN_144a5dc74(local_30);
    FUN_1457cd276(param_1,1,1);
    FUN_14413e7dc(param_1,0,local_30,&DAT_14c9485f0);
    if (local_30[0] != (longlong *)0x0) {
      (**(code **)(*local_30[0] + 0x10))();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d32272 FUN_148d32272 body=187 status=ok
// SIG undefined FUN_148d32272(void)

void FUN_148d32272(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  lVar1 = DAT_14cb0d2b0;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = FUN_144a82cde();
  puVar4 = &DAT_149dfb77a;
  if (*(int *)(param_2 + 1) != 0) {
    puVar4 = (undefined2 *)*param_2;
  }
  FUN_140002266(&local_40,L"open %s?listen",puVar4);
  puVar4 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar4 = local_40;
  }
  if (*(longlong *)(param_1 + 0x30) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x360);
  }
  (**(code **)(*(longlong *)(lVar1 + 0x28) + 8))((longlong *)(lVar1 + 0x28),uVar3,puVar4,uVar2);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d3232e FUN_148d3232e body=474 status=ok
// SIG undefined FUN_148d3232e(void)

void FUN_148d3232e(longlong param_1,char *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined1 local_58 [8];
  longlong local_50 [2];
  undefined8 *local_40;
  undefined4 local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = param_1 + 0x50;
  cVar1 = FUN_144729dda(lVar5);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(lVar5);
    if (((*(longlong *)(lVar2 + 0x30) != 0) &&
        (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x30) + 0x360), lVar2 != 0)) &&
       (*param_2 == '\b')) {
      uVar3 = FUN_14479d2ce(lVar5);
      lVar4 = FUN_14119d4d6(uVar3);
      if (lVar4 != 0) {
        lVar2 = FUN_140334a94(lVar4,lVar2);
        if ((lVar2 != 0) && (*(char *)(lVar2 + 0x178) != '\x03')) goto LAB_148d324d4;
      }
      lVar2 = FUN_14479d2ce(lVar5);
      FUN_14144c0b6(lVar2 + 0x200,&DAT_14cbca570);
      uVar3 = FUN_14479d2ce(lVar5);
      lVar5 = FUN_1414cf3d2(uVar3);
      if (lVar5 != 0) {
        FUN_1409845a0(lVar5,local_2c,lVar4);
        local_40 = (undefined8 *)0x0;
        local_38 = 0;
        FUN_1446efa72(&local_40,0,3,0x10);
        local_38 = 3;
        *local_40 = &PTR_LAB_14b3e9ca0;
        LOCK();
        UNLOCK();
        lVar4 = DAT_14c758608 + 1;
        lVar2 = DAT_14c758608 + 1;
        if (lVar4 == 0) {
          LOCK();
          UNLOCK();
          lVar4 = DAT_14c758608 + 2;
          lVar2 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar2;
        local_40[2] = lVar4;
        *local_40 = &PTR_FUN_14b972540;
        local_40[3] = param_1;
        local_40[4] = FUN_148d33eb2;
        FUN_140056680(local_50,L"HeadlessClient");
        local_68 = 1;
        local_70 = 0x82;
        local_78 = local_50;
        FUN_1413d987a(lVar5,local_58,local_2c,&local_40);
        if (local_50[0] != 0) {
          FUN_1400020a8();
        }
        FUN_1449db362(&local_40);
      }
    }
  }
LAB_148d324d4:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d3250a FUN_148d3250a body=124 status=ok
// SIG undefined FUN_148d3250a(void)

void FUN_148d3250a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_148d3145a();
  if (*(char *)(param_1 + 0x4b1) == '\x01') {
    FUN_148d2ffde(param_1);
  }
  iVar1 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar5);
      if (lVar3 != 0) {
        lVar4 = FUN_14030d4a0();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          FUN_148dacf92(lVar3);
        }
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return;
}



// FUNCTION 148d32586 FUN_148d32586 body=103 status=ok
// SIG undefined FUN_148d32586(void)

void FUN_148d32586(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x10);
  lVar2 = FUN_14119d4d6(uVar1);
  if (lVar2 != 0) {
    lVar3 = FUN_14030d4a0();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      FUN_141495d94(lVar2 + 0x338);
      FUN_1403ca8ec(lVar2 + 0x338,&DAT_14cbd9578);
      return;
    }
  }
  return;
}



// FUNCTION 148d325ee FUN_148d325ee body=74 status=ok
// SIG undefined FUN_148d325ee(void)

void FUN_148d325ee(longlong param_1)

{
  longlong lVar1;
  
  if (*(int *)(param_1 + 0x698) != -1) {
    lVar1 = FUN_14119d4d6();
    if (lVar1 != 0) {
      lVar1 = FUN_145da44aa(lVar1);
      if (lVar1 != 0) {
        FUN_146142a30(lVar1,*(undefined4 *)(param_1 + 0x698));
      }
    }
    *(undefined4 *)(param_1 + 0x698) = 0xffffffff;
  }
  return;
}



// FUNCTION 148d32638 FUN_148d32638 body=455 status=ok
// SIG undefined FUN_148d32638(void)

undefined8 FUN_148d32638(longlong param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  int iVar10;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = FUN_1414dbae2();
  if (lVar5 != 0) {
    if (((DAT_14cbca458 != 0) && (DAT_14cbca45c != 0)) && (DAT_14cbca458 != DAT_14c948000)) {
LAB_148d327c9:
      uVar7 = thunk_FUN_144837462(lVar5,&DAT_14cbca458);
      goto LAB_148d327dc;
    }
    lVar6 = FUN_145825ec4();
    if (lVar6 != 0) {
      local_48 = 0;
      uStack_40 = 0;
      FUN_145825ecc(lVar6,&local_48);
      iVar10 = (int)uStack_40;
      if (0 < (longlong)(int)uStack_40) {
        iVar10 = -(int)uStack_40;
        uVar9 = (longlong)(int)uStack_40;
        do {
          if (*(longlong *)(local_48 + -8 + uVar9 * 8) == 0) {
LAB_148d326f1:
            if (uVar9 != (uStack_40 & 0xffffffff)) {
              iVar4 = iVar10 + (int)uStack_40;
              if (0 < iVar10 + (int)uStack_40) {
                iVar4 = 1;
              }
              memmove((void *)(local_48 + uVar9 * 8 + -8),
                      (void *)(local_48 + (longlong)((int)uStack_40 - iVar4) * 8),
                      (longlong)iVar4 << 3);
            }
            uStack_40 = CONCAT44(uStack_40._4_4_,(int)uStack_40 + -1);
            FUN_148d372a8(&local_48);
          }
          else {
            cVar3 = FUN_148ee9368();
            if (cVar3 == '\0') goto LAB_148d326f1;
          }
          iVar10 = iVar10 + 1;
          bVar2 = 1 < uVar9;
          uVar9 = uVar9 - 1;
        } while (bVar2);
        iVar10 = (int)uStack_40;
      }
      if (iVar10 != 0) {
        cVar3 = FUN_144729dda(param_1 + 0x10);
        if (cVar3 != '\0') {
          lVar6 = FUN_14479d2ce(param_1 + 0x10);
          if ((*(longlong *)(lVar6 + 0x30) != 0) &&
             (lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x30) + 0x360), lVar6 != 0)) {
            srand((int)*(double *)(lVar6 + 0x6d0));
          }
        }
        iVar4 = rand();
        puVar1 = *(undefined4 **)
                  (*(longlong *)(local_48 + (longlong)(iVar4 % (int)uStack_40) * 8) + 8);
        puVar8 = &DAT_14c9485f0;
        if (puVar1 != (undefined4 *)0x0) {
          puVar8 = puVar1;
        }
        FUN_1447715ec(&DAT_14cbca458,puVar8);
      }
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      if (iVar10 != 0) goto LAB_148d327c9;
    }
  }
  uVar7 = 0;
LAB_148d327dc:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d32800 FUN_148d32800 body=449 status=ok
// SIG undefined FUN_148d32800(void)

void FUN_148d32800(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar6 = FUN_144729dda(param_1 + 0x10);
  if (param_2 != 0 && cVar6 == '\x01') {
    lVar9 = FUN_14479d2ce(param_1 + 0x10);
    if (*(longlong *)(lVar9 + 0x30) == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(*(longlong *)(lVar9 + 0x30) + 0x360);
    }
    FUN_14132b09a(&local_48,uVar10);
    if (local_40 != (longlong *)0x0) {
      iVar7 = (int)local_40[1];
      do {
        if (iVar7 == 0) {
          plVar11 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar5 = (int)local_40[1];
        bVar12 = iVar7 == iVar5;
        if (bVar12) {
          *(int *)(local_40 + 1) = iVar7 + 1;
          iVar5 = iVar7;
        }
        iVar7 = iVar5;
        UNLOCK();
        plVar11 = local_40;
      } while (!bVar12);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_40 + 0x10))();
      }
      if (plVar11 != (longlong *)0x0) {
        if ((local_48 != 0) && (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54))) {
          uVar8 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
          uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
          lVar9 = param_1 + 0x58;
          if (*(longlong *)(param_1 + 0x60) != 0) {
            lVar9 = *(longlong *)(param_1 + 0x60);
          }
          iVar7 = *(int *)(lVar9 + (ulonglong)
                                   (*(int *)(param_1 + 0x68) - 1U & (uVar8 >> 0x10 ^ uVar8)) * 4);
          if (iVar7 != -1) {
            do {
              puVar3 = (ulonglong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar7 * 0x18);
              if (*puVar3 == param_2) {
                if (puVar3 + 1 != (ulonglong *)0x0 && puVar3 != (ulonglong *)0x0) {
                  uVar4 = puVar3[1];
                  iVar7 = *(int *)(param_1 + 200);
                  *(uint *)(param_1 + 200) = iVar7 + 1U;
                  if (*(uint *)(param_1 + 0xcc) < iVar7 + 1U) {
                    FUN_1446f48e2(param_1 + 0xc0,iVar7);
                  }
                  *(int *)(*(longlong *)(param_1 + 0xc0) + (longlong)iVar7 * 4) = (int)uVar4;
                  FUN_148d373b6((longlong *)(param_1 + 0x20),param_2);
                  FUN_148d329c2(param_1);
                }
                break;
              }
              iVar7 = (int)puVar3[2];
            } while (iVar7 != -1);
          }
        }
        LOCK();
        plVar2 = plVar11 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d329c2 FUN_148d329c2 body=1190 status=ok
// SIG undefined FUN_148d329c2(void)

void FUN_148d329c2(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  bool bVar14;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  undefined8 local_c8;
  longlong lStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a4;
  longlong local_a0;
  longlong local_98;
  longlong *local_90;
  longlong *local_88;
  undefined1 local_80 [24];
  longlong *local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar8 = param_1 + 0x10;
  cVar4 = FUN_144729dda(lVar8);
  if (cVar4 != '\0') {
    lVar7 = FUN_14479d2ce(lVar8);
    if (*(longlong *)(lVar7 + 0x30) == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined8 *)(*(longlong *)(lVar7 + 0x30) + 0x360);
    }
    FUN_1410d53f0(&local_d0,uVar11);
    if (local_c8 != (longlong *)0x0) {
      iVar5 = (int)local_c8[1];
      do {
        if (iVar5 == 0) {
          plVar13 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar6 = (int)local_c8[1];
        bVar14 = iVar5 == iVar6;
        if (bVar14) {
          *(int *)(local_c8 + 1) = iVar5 + 1;
          iVar6 = iVar5;
        }
        iVar5 = iVar6;
        UNLOCK();
        plVar13 = local_c8;
      } while (!bVar14);
      LOCK();
      piVar1 = (int *)((longlong)local_c8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_c8 + 0x10))();
      }
      plVar2 = local_d0;
      if (plVar13 != (longlong *)0x0) {
        if (local_d0 != (longlong *)0x0) {
          lVar8 = FUN_14479d2ce(lVar8);
          if (*(longlong *)(lVar8 + 0x30) == 0) {
            uVar11 = 0;
          }
          else {
            uVar11 = *(undefined8 *)(*(longlong *)(lVar8 + 0x30) + 0x360);
          }
          FUN_14132b09a(&local_d0,uVar11);
          if (local_c8 != (longlong *)0x0) {
            iVar5 = (int)local_c8[1];
            do {
              if (iVar5 == 0) {
                plVar12 = (longlong *)0x0;
                break;
              }
              LOCK();
              iVar6 = (int)local_c8[1];
              bVar14 = iVar5 == iVar6;
              if (bVar14) {
                *(int *)(local_c8 + 1) = iVar5 + 1;
                iVar6 = iVar5;
              }
              iVar5 = iVar6;
              UNLOCK();
              plVar12 = local_c8;
            } while (!bVar14);
            LOCK();
            piVar1 = (int *)((longlong)local_c8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_c8 + 0x10))();
            }
            plVar3 = local_d0;
            if (plVar12 != (longlong *)0x0) {
              if (local_d0 != (longlong *)0x0) {
                FUN_14145079c(plVar2,local_80,*(undefined8 *)(param_1 + 0x108));
                lVar8 = FUN_141446784(plVar2,local_80);
                if (lVar8 != 0) {
                  lVar7 = FUN_14099530a();
                  if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                       (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
                    local_90 = plVar3;
                    LOCK();
                    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
                    UNLOCK();
                    iVar5 = 0;
                    local_a4 = 0;
                    plVar2 = (longlong *)(param_1 + 0x20);
                    lVar7 = param_1 + 0x30;
                    local_68 = (longlong *)0x100000000;
                    local_58._0_4_ = 0xffffffff;
                    local_58._4_4_ = 0;
                    uStack_50 = 0;
                    local_a0 = param_1;
                    local_98 = lVar8;
                    local_88 = plVar12;
                    lStack_60 = lVar7;
                    if (*(int *)(param_1 + 0x48) != 0) {
                      FUN_1449c0562(&local_68);
                      iVar5 = *(int *)(param_1 + 0x48);
                    }
                    local_b8._0_4_ = (uint)local_58;
                    local_b8._4_4_ = local_58._4_4_;
                    uStack_b0 = CONCAT44(uStack_4c,uStack_50);
                    local_c8 = local_68;
                    lStack_c0 = lStack_60;
                    local_d0 = plVar2;
                    if ((local_58._4_4_ != iVar5) || (lStack_60 != lVar7)) {
                      do {
                        FUN_144144830(&local_a0,*local_d0 + (longlong)local_b8._4_4_ * 0x18 + 8,
                                      &local_a4);
                        local_b8._0_4_ = (uint)local_b8 & ~local_c8._4_4_;
                        FUN_1449c0562(&local_c8);
                      } while (local_d0 != plVar2 || (lStack_c0 != lVar7 || local_b8._4_4_ != iVar5)
                              );
                    }
                    plVar2 = (longlong *)(param_1 + 0x70);
                    lVar8 = param_1 + 0x80;
                    local_68 = (longlong *)&DAT_100000000;
                    local_58 = 0xffffffff;
                    uStack_50 = 0;
                    lStack_60 = lVar8;
                    if (*(int *)(param_1 + 0x98) == 0) {
                      iVar5 = 0;
                    }
                    else {
                      FUN_1449c0562(&local_68);
                      iVar5 = *(int *)(param_1 + 0x98);
                    }
                    uStack_b0 = CONCAT44(uStack_4c,uStack_50);
                    local_b8 = local_58;
                    uVar11 = local_b8;
                    local_c8 = local_68;
                    lStack_c0 = lStack_60;
                    local_b8._4_4_ = (int)((ulonglong)local_58 >> 0x20);
                    iVar6 = local_b8._4_4_;
                    local_d0 = plVar2;
                    if ((local_b8._4_4_ != iVar5) || (local_b8 = uVar11, lStack_60 != lVar8)) {
                      do {
                        local_b8 = uVar11;
                        FUN_144144830(&local_a0,*local_d0 + (longlong)iVar6 * 0x20 + 0x10,&local_a4)
                        ;
                        local_b8 = CONCAT44(local_b8._4_4_,(uint)local_b8 & ~local_c8._4_4_);
                        FUN_1449c0562(&local_c8);
                        iVar6 = local_b8._4_4_;
                        uVar11 = local_b8;
                      } while (local_d0 != plVar2 || (lStack_c0 != lVar8 || local_b8._4_4_ != iVar5)
                              );
                    }
                    iVar5 = *(int *)(param_1 + 200);
                    if ((longlong)iVar5 != 0) {
                      lVar8 = *(longlong *)(param_1 + 0xc0);
                      lVar7 = 0;
                      do {
                        iVar6 = *(int *)(lVar8 + lVar7);
                        puVar9 = DAT_14cbcb048;
                        if (DAT_14cbcb048 == (undefined *)0x0) {
                          puVar9 = &DAT_14cbcb028;
                        }
                        puVar10 = (undefined8 *)(puVar9 + (longlong)iVar6 * 8);
                        if (DAT_14cbcb050 <= iVar6) {
                          puVar10 = &DAT_14cbcb058;
                        }
                        if (iVar6 < 0) {
                          puVar10 = &DAT_14cbcb058;
                        }
                        FUN_143d842f2(plVar3,puVar10,0);
                        lVar7 = lVar7 + 4;
                      } while ((longlong)iVar5 * 4 != lVar7);
                    }
                    *(undefined4 *)(param_1 + 200) = 0;
                    if (*(int *)(param_1 + 0xcc) != 0) {
                      FUN_14481578e(param_1 + 0xc0,0);
                    }
                    plVar2 = local_88;
                    if (local_88 != (longlong *)0x0) {
                      LOCK();
                      plVar3 = local_88 + 1;
                      *(int *)plVar3 = (int)*plVar3 + -1;
                      UNLOCK();
                      if ((int)*plVar3 == 0) {
                        (**(code **)*local_88)(local_88);
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
                }
              }
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
          }
        }
        LOCK();
        plVar2 = plVar13 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d32e6a FUN_148d32e6a body=1213 status=ok
// SIG undefined FUN_148d32e6a(void)

void FUN_148d32e6a(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined *puVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  bool bVar20;
  undefined1 auStack_158 [40];
  longlong *local_130;
  longlong *local_128;
  undefined1 local_120 [24];
  longlong *local_108;
  longlong *local_100;
  longlong lStack_f8;
  undefined8 local_f0;
  undefined8 local_e8 [12];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar11 = param_1 + 0x10;
  cVar6 = FUN_144729dda(lVar11);
  if (cVar6 == '\0') goto LAB_148d32ed4;
  plVar9 = (longlong *)FUN_14479d2ce(lVar11);
  if (*(code **)(*plVar9 + 0x498) == (code *)&LAB_14015c36e) {
    cVar6 = (char)plVar9[0x42];
  }
  else {
    cVar6 = (**(code **)(*plVar9 + 0x498))(plVar9);
  }
  if (cVar6 == '\b') goto LAB_148d32ed4;
  lVar10 = FUN_14479d2ce(lVar11);
  if (*(longlong *)(lVar10 + 0x30) == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = *(undefined8 *)(*(longlong *)(lVar10 + 0x30) + 0x360);
  }
  FUN_14132b09a(&local_108,uVar12);
  if (local_100 == (longlong *)0x0) goto LAB_148d32ed4;
  iVar8 = (int)local_100[1];
  do {
    if (iVar8 == 0) {
      plVar9 = (longlong *)0x0;
      break;
    }
    LOCK();
    iVar5 = (int)local_100[1];
    bVar20 = iVar8 == iVar5;
    if (bVar20) {
      *(int *)(local_100 + 1) = iVar8 + 1;
      iVar5 = iVar8;
    }
    iVar8 = iVar5;
    UNLOCK();
    plVar9 = local_100;
  } while (!bVar20);
  LOCK();
  piVar1 = (int *)((longlong)local_100 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*local_100 + 0x10))();
  }
  plVar2 = local_108;
  if (plVar9 == (longlong *)0x0) goto LAB_148d32ed4;
  if (local_108 != (longlong *)0x0) {
    lVar11 = FUN_14479d2ce(lVar11);
    if (*(longlong *)(lVar11 + 0x30) == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(undefined8 *)(*(longlong *)(lVar11 + 0x30) + 0x360);
    }
    FUN_1410d53f0(&local_108,uVar12);
    if (local_100 != (longlong *)0x0) {
      iVar8 = (int)local_100[1];
      do {
        if (iVar8 == 0) {
          plVar19 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar5 = (int)local_100[1];
        bVar20 = iVar8 == iVar5;
        if (bVar20) {
          *(int *)(local_100 + 1) = iVar8 + 1;
          iVar5 = iVar8;
        }
        iVar8 = iVar5;
        UNLOCK();
        plVar19 = local_100;
      } while (!bVar20);
      LOCK();
      piVar1 = (int *)((longlong)local_100 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_100 + 0x10))();
      }
      plVar4 = local_108;
      if (plVar19 != (longlong *)0x0) {
        if (local_108 != (longlong *)0x0) {
          lVar10 = FUN_145a15566();
          lVar11 = *(longlong *)(lVar10 + 0x40);
          if (lVar11 == 0) {
            uVar12 = FUN_1458eaa58();
            lVar11 = FUN_14477b664(uVar12);
            *(longlong *)(lVar10 + 0x40) = lVar11;
          }
          plVar15 = *(longlong **)(lVar10 + 0x48);
          if (plVar15 == (longlong *)0x0) {
            if ((lVar11 != 0) && (plVar15 = (longlong *)(lVar10 + 0x38), *plVar15 != 0)) {
              plVar3 = *(longlong **)(lVar11 + 0xb8);
              local_128 = plVar15;
              if ((plVar3 == (longlong *)0x0) ||
                 (local_130 = plVar3, cVar6 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar6 == '\0')
                 ) {
                *(undefined8 *)(lVar10 + 0x48) = 0;
              }
              else {
                uVar12 = (**(code **)(*local_130 + 0x110))();
                plVar15 = (longlong *)FUN_144aff482(uVar12,local_128);
                *(longlong **)(lVar10 + 0x48) = plVar15;
                if (plVar15 != (longlong *)0x0) goto LAB_148d33016;
              }
            }
          }
          else {
LAB_148d33016:
            local_130 = plVar15;
            FUN_14145079c(plVar4,local_120,*(undefined8 *)(param_1 + 0x108));
            lVar11 = FUN_141446784(plVar4,local_120);
            if (lVar11 != 0) {
              lVar10 = FUN_14099530a();
              if ((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) {
                local_108 = (longlong *)*param_2;
                plVar4 = (longlong *)param_2[1];
                if (plVar4 == (longlong *)0x0) {
                  local_100 = (longlong *)0x0;
                }
                else {
                  LOCK();
                  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
                  UNLOCK();
                  LOCK();
                  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
                  UNLOCK();
                  local_100 = plVar4;
                }
                uVar7 = (**(code **)(*local_108 + 0x40))();
                iVar8 = FUN_145a157e8((longlong *)(param_1 + 0x70),uVar7,&local_108);
                plVar15 = local_100;
                if (iVar8 == -1) {
                  lVar10 = 0;
                }
                else {
                  lVar10 = (longlong)iVar8 * 0x20 + *(longlong *)(param_1 + 0x70);
                }
                if (local_100 != (longlong *)0x0) {
                  LOCK();
                  plVar3 = local_100 + 1;
                  *(int *)plVar3 = (int)*plVar3 + -1;
                  UNLOCK();
                  if ((int)*plVar3 == 0) {
                    (**(code **)*local_100)(local_100);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar15 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar15 + 0x10))(plVar15);
                    }
                  }
                }
                if (plVar4 != (longlong *)0x0) {
                  LOCK();
                  plVar15 = plVar4 + 1;
                  *(int *)plVar15 = (int)*plVar15 + -1;
                  UNLOCK();
                  if ((int)*plVar15 == 0) {
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
                if (lVar10 != 0) {
                  lVar13 = FUN_145a158a4(param_3);
                  if (lVar13 == 0) {
                    if (*param_3 == DAT_14cb71810) {
                      puVar14 = &DAT_14cbcb028;
                      if (DAT_14cbcb048 != (undefined *)0x0) {
                        puVar14 = DAT_14cbcb048;
                      }
                      iVar8 = *(int *)(lVar10 + 0x10);
                      puVar17 = (undefined8 *)(puVar14 + (longlong)iVar8 * 8);
                      if (DAT_14cbcb050 <= iVar8) {
                        puVar17 = &DAT_14cbcb058;
                      }
                      if (iVar8 < 0) {
                        puVar17 = &DAT_14cbcb058;
                      }
                      FUN_143d842f2(plVar2,puVar17,0);
                    }
                  }
                  else {
                    local_f0 = 0;
                    puVar17 = &DAT_14c846480;
                    puVar18 = local_e8;
                    for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
                      *puVar18 = *puVar17;
                      puVar17 = puVar17 + 1;
                      puVar18 = puVar18 + 1;
                    }
                    local_88 = 0;
                    uStack_80 = 0;
                    local_78 = 0;
                    uStack_60 = 0;
                    uStack_5c = 0;
                    uStack_70 = 0;
                    uStack_68 = 0;
                    local_64 = 0;
                    puVar14 = &DAT_14cbcb028;
                    if (DAT_14cbcb048 != (undefined *)0x0) {
                      puVar14 = DAT_14cbcb048;
                    }
                    iVar8 = *(int *)(lVar10 + 0x10);
                    puVar17 = (undefined8 *)(puVar14 + (longlong)iVar8 * 8);
                    if (DAT_14cbcb050 <= iVar8) {
                      puVar17 = &DAT_14cbcb058;
                    }
                    if (iVar8 < 0) {
                      puVar17 = &DAT_14cbcb058;
                    }
                    local_108 = (longlong *)*puVar17;
                    local_100 = local_130;
                    lStack_f8 = lVar13;
                    FUN_145a145da(lVar11,local_e8,*(undefined4 *)(lVar10 + 0x10));
                    FUN_144a787a6(&local_88,param_3 + 1);
                    FUN_145a14736(plVar2,&local_108);
                    FUN_145a1457c(&local_108);
                  }
                }
              }
            }
          }
        }
        LOCK();
        plVar2 = plVar19 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar19)(plVar19);
          LOCK();
          piVar1 = (int *)((longlong)plVar19 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar19 + 0x10))(plVar19);
          }
        }
      }
    }
  }
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
LAB_148d32ed4:
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d33328 FUN_148d33328 body=101 status=ok
// SIG undefined FUN_148d33328(void)

undefined8 FUN_148d33328(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)FUN_14117e474();
  lVar3 = plVar1[0x22];
  if (lVar3 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar3 = plVar1[0x22];
    if (lVar3 == 0) {
      return 0;
    }
  }
  lVar2 = FUN_14117e474();
  if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
      lVar2 + 0x30)) {
    return CONCAT71((int7)((ulonglong)(lVar2 + 0x30) >> 8),*(undefined1 *)(lVar3 + 0x98));
  }
  return 0;
}



// FUNCTION 148d3338e FUN_148d3338e body=101 status=ok
// SIG undefined FUN_148d3338e(void)

undefined8 FUN_148d3338e(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)FUN_14117e474();
  lVar3 = plVar1[0x22];
  if (lVar3 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar3 = plVar1[0x22];
    if (lVar3 == 0) {
      return 0;
    }
  }
  lVar2 = FUN_14117e474();
  if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
      lVar2 + 0x30)) {
    return CONCAT71((int7)((ulonglong)(lVar2 + 0x30) >> 8),*(undefined1 *)(lVar3 + 0x99));
  }
  return 0;
}



// FUNCTION 148d333f4 FUN_148d333f4 body=181 status=ok
// SIG undefined FUN_148d333f4(void)

undefined8 * FUN_148d333f4(undefined8 *param_1)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)FUN_14117e474();
  lVar4 = plVar2[0x22];
  if (lVar4 == 0) {
    (**(code **)(*plVar2 + 1000))(plVar2);
    lVar4 = plVar2[0x22];
    if (lVar4 == 0) goto LAB_148d3342f;
  }
  lVar3 = FUN_14117e474();
  if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
      lVar3 + 0x30)) {
    *param_1 = 0;
    iVar1 = *(int *)(lVar4 + 0x80);
    _Src = *(void **)(lVar4 + 0x78);
    *(int *)(param_1 + 1) = iVar1;
    if ((longlong)iVar1 != 0) {
      FUN_1446dd670(param_1,iVar1,0);
      memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
      return param_1;
    }
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return param_1;
  }
LAB_148d3342f:
  FUN_140056680(param_1,&DAT_149dfb77a);
  return param_1;
}



// FUNCTION 148d334aa FUN_148d334aa body=222 status=ok
// SIG undefined FUN_148d334aa(void)

void FUN_148d334aa(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  longlong *unaff_RDI;
  
  if (*(longlong *)(param_1 + 0x3f0) != 0) {
    lVar5 = FUN_14030d660();
    lVar3 = *(longlong *)(param_1 + 0x3f0);
    if ((((lVar3 != 0) && (lVar5 != 0)) && (lVar4 = *(longlong *)(lVar3 + 0x10), lVar4 != 0)) &&
       (((*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
          lVar5 + 0x30)) && (*(char *)(lVar3 + 0x5ec) == '\x01')))) {
      lVar3 = *(longlong *)(param_1 + 1000);
      if (lVar3 == 0) {
        lVar5 = *(longlong *)(param_1 + 0x5e8);
        unaff_RDI = *(longlong **)(param_1 + 0x5f0);
        if (unaff_RDI != (longlong *)0x0) {
          LOCK();
          *(int *)(unaff_RDI + 1) = (int)unaff_RDI[1] + 1;
          UNLOCK();
        }
        puVar6 = (undefined4 *)(lVar5 + 0x408);
      }
      else {
        puVar6 = (undefined4 *)(lVar3 + 0x394);
      }
      FUN_14885cf1a(param_1,*puVar6);
      if (unaff_RDI != (longlong *)0x0 && lVar3 == 0) {
        LOCK();
        plVar1 = unaff_RDI + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*unaff_RDI)(unaff_RDI);
          LOCK();
          piVar2 = (int *)((longlong)unaff_RDI + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148d3355b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*unaff_RDI + 0x10))(unaff_RDI);
            return;
          }
        }
      }
      return;
    }
  }
  FUN_14885cf4a(param_1);
  return;
}



// FUNCTION 148d33588 FUN_148d33588 body=24 status=ok
// SIG undefined FUN_148d33588(void)

bool FUN_148d33588(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x6b0))();
  return 1 < iVar1;
}



// FUNCTION 148d335a8 FUN_148d335a8 body=864 status=ok
// SIG undefined FUN_148d335a8(void)

void FUN_148d335a8(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong local_c0;
  undefined2 *local_b8;
  int local_b0;
  undefined4 local_a4;
  longlong *local_a0;
  undefined8 local_98;
  longlong local_90;
  uint local_88;
  int iStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  int local_70;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c8 = param_5;
  FUN_1478b9376(param_1);
  *(undefined4 *)(param_2 + 0xd8) = 0x3f800000;
  *(undefined4 *)(param_2 + 0xdc) = 0x3f800000;
  *(undefined4 *)(param_2 + 0xe0) = 0x3f800000;
  *(undefined4 *)(param_2 + 0xe4) = 0x3f800000;
  local_c0 = param_2 + 0xa8;
  local_78 = 0;
  local_a0 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x18);
  FUN_1400021e4(&local_a0,&local_68);
  puVar5 = local_68;
  if ((int)local_60 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_a0,L"Game Mode Class: %s",puVar5);
  FUN_147d8f316(local_c0,&local_a0,&local_78);
  if (local_a0 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_141710b0e(*(longlong *)(param_1 + 0x5e8) + 0x3c0,&local_78,1);
  if (local_70 < 2) {
    local_68 = (undefined2 *)((ulonglong)local_68._4_4_ << 0x20);
    FUN_140056680(&local_a0,L"Game Mode Definition: INVALID");
  }
  else {
    local_68 = (undefined2 *)((ulonglong)local_68._4_4_ << 0x20);
    FUN_140002266(&local_a0,L"Game Mode Definition: %s",CONCAT44(uStack_74,local_78));
  }
  FUN_147d8f316(local_c0,&local_a0,&local_68);
  if (local_a0 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  local_68 = (undefined2 *)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_140002266(&local_a0,L"World Infamy: %d",*(undefined1 *)(param_1 + 0x748));
  FUN_147d8f316(local_c0,&local_a0,&local_68);
  if (local_a0 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  local_60 = param_1 + 0x760;
  local_68 = (undefined2 *)0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  if (*(int *)(param_1 + 0x778) != 0) {
    FUN_1449c0562(&local_68);
  }
  local_88 = local_58;
  iStack_84 = iStack_54;
  local_80 = local_50;
  local_7c = local_4c;
  local_98 = (longlong)local_68;
  local_90 = local_60;
  local_a0 = (longlong *)(param_1 + 0x750);
  if (iStack_54 < *(int *)(local_60 + 0x18)) {
    do {
      local_a4 = 0;
      lVar2 = *local_a0;
      lVar4 = (longlong)iStack_84 * 0x40;
      uVar3 = *(undefined8 *)(lVar2 + 0x28 + lVar4);
      uVar1 = *(undefined1 *)(lVar2 + 0x30 + lVar4);
      FUN_141710b0e(lVar2 + lVar4,&local_b8,1);
      puVar5 = &DAT_149dfb77a;
      if (local_b0 != 0) {
        puVar5 = local_b8;
      }
      local_c8 = uVar3;
      FUN_140002266(&local_68,L"    %s: Level %d Points %d",puVar5,uVar1);
      FUN_147d8f316(local_c0,&local_68,&local_a4);
      if (local_68 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_b8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      local_88 = local_88 & ~local_98._4_4_;
      FUN_1449c0562(&local_98);
    } while (iStack_84 < *(int *)(local_90 + 0x18));
  }
  if (CONCAT44(uStack_74,local_78) != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d3390c FUN_148d3390c body=102 status=ok
// SIG undefined FUN_148d3390c(void)

void FUN_148d3390c(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x5f0) != param_2) {
    iVar1 = *(int *)(param_1 + 0x5fc);
    if (param_2 < *(int *)(param_1 + 0x5fc)) {
      iVar1 = param_2;
    }
    iVar3 = 7;
    if (iVar1 < 7) {
      iVar3 = iVar1;
    }
    *(int *)(param_1 + 0x5f0) = iVar3;
    FUN_1447f69b6(param_1 + 0x558);
    if (*(int *)(param_1 + 0x5f0) != param_2) {
      uVar2 = FUN_1447210f0(param_1);
      FUN_148d1c467(*(undefined4 *)(param_1 + 0x5f0),uVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148d3399e FUN_148d3399e body=59 status=ok
// SIG undefined FUN_148d3399e(void)

void FUN_148d3399e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_148d339da();
  if (lVar1 != 0) {
    FUN_143c9dc84(lVar1,param_2,param_3,param_4);
    return;
  }
  return;
}



// FUNCTION 148d339da FUN_148d339da body=163 status=ok
// SIG undefined FUN_148d339da(void)

longlong FUN_148d339da(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = *(longlong *)(param_1 + 0xcb0);
  if (lVar2 == 0) {
    puVar3 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    FUN_1409e1656(puVar3);
    *puVar3 = &PTR_FUN_14b9723d0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    *(undefined4 *)(puVar3 + 5) = 4;
    *(undefined1 *)((longlong)puVar3 + 0x2c) = 1;
    plVar1 = *(longlong **)(param_1 + 0xcb0);
    *(undefined8 **)(param_1 + 0xcb0) = puVar3;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))(plVar1,1);
      puVar3 = *(undefined8 **)(param_1 + 0xcb0);
    }
    *(undefined4 *)(puVar3 + 5) = 4;
    lVar2 = *(longlong *)(param_1 + 0xcb0);
  }
  return lVar2;
}



// FUNCTION 148d33a7e FUN_148d33a7e body=41 status=ok
// SIG undefined FUN_148d33a7e(void)

void FUN_148d33a7e(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_148d339da();
  if (lVar1 != 0) {
    FUN_1487c34d0(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 148d33aba FUN_148d33aba body=27 status=ok
// SIG undefined FUN_148d33aba(void)

void FUN_148d33aba(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x604) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x604) = param_2;
  FUN_1401861f4(param_1 + 0x608);
  return;
}



// FUNCTION 148d33ad6 FUN_148d33ad6 body=250 status=ok
// SIG undefined FUN_148d33ad6(void)

void FUN_148d33ad6(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  undefined2 *puVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined2 *local_50;
  int local_48;
  longlong local_40 [2];
  undefined4 local_2c;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = param_5;
  FUN_148861258(param_1);
  if (param_2 != 0) {
    *(undefined4 *)(param_2 + 0xd8) = 0x3e008081;
    *(undefined4 *)(param_2 + 0xdc) = 0x3f800000;
    *(undefined4 *)(param_2 + 0xe0) = 0x3f008081;
    *(undefined4 *)(param_2 + 0xe4) = 0x3f800000;
    uVar1 = *(undefined1 *)(param_1 + 0x5f4);
    uVar2 = FUN_1405c673d();
    FUN_14130ca8a(uVar2,local_28,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff,1);
    local_2c = 0;
    FUN_1400021e4(local_28,&local_50);
    puVar3 = local_50;
    if (local_48 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    FUN_140002266(local_40,L"World Difficulty: %ls",puVar3);
    FUN_147d8f316(param_2 + 0xa8,local_40,&local_2c);
    if (local_40[0] != 0) {
      FUN_1400020a8();
    }
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d33bd2 FUN_148d33bd2 body=52 status=ok
// SIG undefined FUN_148d33bd2(void)

void FUN_148d33bd2(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_1447210f0();
  lVar2 = FUN_145bd989c(uVar1);
  if (lVar2 != 0) {
    FUN_1441aa6da(lVar2,*(undefined1 *)(param_1 + 0x620));
    return;
  }
  return;
}



// FUNCTION 148d33c0b FUN_148d33c0b body=523 status=ok
// SIG undefined FUN_148d33c0b(void)

void FUN_148d33c0b(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_148 [32];
  wchar_t *local_128;
  longlong *local_120;
  undefined4 local_118;
  longlong *local_110;
  undefined4 local_108;
  undefined1 local_f0 [62];
  undefined1 local_b2;
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (param_1 != 0) {
    lVar3 = FUN_144a7ba4c();
    if (lVar3 != 0) {
      lVar3 = FUN_145da44aa(lVar3);
      if (lVar3 != 0) {
        local_58 = 0;
        uStack_50 = 0;
        lVar4 = FUN_145da4f3c();
        local_128 = L"Dialog_Ok";
        local_120._0_4_ = 9;
        FUN_1446e940c(local_5c,&local_128);
        local_128 = L"OakGameUtils";
        local_120 = (longlong *)CONCAT44(local_120._4_4_,0xc);
        FUN_1446e940c(local_60,&local_128);
        FUN_140208bae(&local_128,local_60,local_5c,&DAT_149e0476e);
        FUN_140008f88(lVar4,&local_128);
        if (local_128 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_128 + 0x10))();
        }
        FUN_1446f470e(&local_128,&DAT_149e0476e,1);
        *(wchar_t **)(lVar4 + 0x10) = local_128;
        FUN_145be44b4(&local_128);
        plVar2 = local_120;
        plVar1 = (longlong *)*param_2;
        if (local_120 != plVar1) {
          local_120 = plVar1;
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 8))();
          }
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
        plVar2 = local_110;
        local_118 = (undefined4)param_2[1];
        plVar1 = (longlong *)*param_3;
        if (local_110 != plVar1) {
          local_110 = plVar1;
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 8))();
          }
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
        local_108 = (undefined4)param_3[1];
        FUN_1461db884(local_f0,&local_58);
        local_b2 = 1;
        FUN_148e370de(lVar3,&local_128);
        FUN_1459ddea2(&local_128);
        FUN_140e0067b(local_58,uStack_50 & 0xffffffff);
        if (local_58 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d33e17 FUN_148d33e17 body=155 status=ok
// SIG undefined FUN_148d33e17(void)

undefined1 FUN_148d33e17(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if (DAT_14cbca518 == DAT_14cbca544) {
      return 1;
    }
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar3 = (uint)lVar1 & 0xffff;
    puVar4 = &DAT_14cbca548;
    if (DAT_14cbca550 != (undefined *)0x0) {
      puVar4 = DAT_14cbca550;
    }
    iVar5 = *(int *)(puVar4 + (ulonglong)
                              (DAT_14cbca558 - 1U &
                              (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar3) +
                              (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar3 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        if (*(longlong *)(DAT_14cbca510 + (longlong)iVar5 * 0x10) == lVar1) {
          return 1;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0x10 + DAT_14cbca510 + 8);
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 148d33eb2 FUN_148d33eb2 body=95 status=ok
// SIG undefined FUN_148d33eb2(void)

void FUN_148d33eb2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5)

{
  longlong lVar1;
  
  lVar1 = FUN_140d1732e(param_2,param_3);
  if (lVar1 != 0) {
    lVar1 = FUN_140d71416(param_2,param_3);
    if (lVar1 != 0) {
      lVar1 = FUN_14479d2ce(param_1 + 0x50);
      FUN_1415aa586(lVar1 + 0x200,&DAT_14cbca570);
      *param_5 = 1;
    }
  }
  return;
}



// FUNCTION 148d33f12 FUN_148d33f12 body=96 status=ok
// SIG undefined FUN_148d33f12(void)

void FUN_148d33f12(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 0x488) == 0) {
    *(undefined1 *)(param_1 + 0x491) = 1;
  }
  else {
    lVar1 = FUN_14497e828();
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)FUN_14001cc68(8,0x10);
      *puVar2 = &PTR_FUN_14b970f08;
      uVar3 = FUN_14119d4d6(lVar1);
      FUN_14113cb0e(uVar3,puVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148d33f7e FUN_148d33f7e body=209 status=ok
// SIG undefined FUN_148d33f7e(void)

void FUN_148d33f7e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_1403ca102();
  if (lVar1 != 0) {
    lVar1 = FUN_14119d4d6(lVar1);
    if (lVar1 != 0) {
      lVar2 = FUN_14030d4a0();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        lVar1 = FUN_1404960a8(lVar1);
        if (lVar1 != 0) {
          FUN_1446ddc76(&local_30,"TitlePicker_TitleChosen",1);
          FUN_1401cd85c(lVar1,local_30,param_1 + 0x488);
          *(undefined8 *)(param_1 + 0x488) = 0;
        }
        FUN_141665cdc(param_1);
        FUN_146226b8a(param_1);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d34050 FUN_148d34050 body=302 status=ok
// SIG undefined FUN_148d34050(void)

void FUN_148d34050(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar2 = FUN_1403ca102();
  if (lVar2 != 0) {
    lVar3 = FUN_14119d4d6(lVar2);
    if (lVar3 != 0) {
      lVar4 = FUN_14030d4a0();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) {
        if (*(longlong *)(lVar2 + 0x30) == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(undefined8 *)(*(longlong *)(lVar2 + 0x30) + 0x360);
        }
        lVar2 = FUN_140334a94(lVar3,uVar5);
        if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x188) != 0)) {
          lVar3 = FUN_1410decb6();
          if ((*(longlong *)(lVar2 + 0x188) != 0) &&
             ((((lVar3 != 0 &&
                (lVar4 = *(longlong *)(*(longlong *)(lVar2 + 0x188) + 0x10), lVar4 != 0)) &&
               (*(int *)(lVar3 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
              ((*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
                lVar3 + 0x30 && (*(longlong *)(lVar2 + 0x508) != 0)))))) {
            lVar3 = FUN_140dd10c4();
            plVar1 = *(longlong **)(lVar2 + 0x508);
            if ((plVar1 != (longlong *)0x0) &&
               (((lVar3 != 0 && (lVar2 = plVar1[2], lVar2 != 0)) &&
                ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
                 (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
                  == lVar3 + 0x30)))))) {
              (**(code **)(*plVar1 + 0x318))(plVar1,&DAT_14cbc9db8);
              FUN_148d33f7e(param_1);
              return;
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 148d34180 FUN_148d34180 body=386 status=ok
// SIG undefined FUN_148d34180(void)

longlong * FUN_148d34180(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined2 *puVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_88 [40];
  undefined2 *local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1407fec00();
  *param_1 = (longlong)&PTR_FUN_14b970c00;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x40a00000;
  *(undefined1 *)((longlong)param_1 + 0x84) = 1;
  FUN_1446ddc76(param_1 + 0x11,"EridiumEncasing",1);
  plVar7 = &DAT_14c846480;
  plVar8 = param_1 + 0x12;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *plVar8 = *plVar7;
    plVar7 = plVar7 + 1;
    plVar8 = plVar8 + 1;
  }
  param_1[0x1e] = 0;
  plVar7 = param_1 + 10;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (*(int *)((longlong)param_1 + 0x5c) < 0) {
    FUN_1402191ca(plVar7,0);
  }
  lVar4 = FUN_148b8ff85();
  if ((lVar4 != 0) && (iVar1 = *(int *)(lVar4 + 0x48), 1 < iVar1)) {
    iVar6 = 0;
    do {
      FUN_1401cfb1c(lVar4,&local_60,iVar6);
      puVar5 = &DAT_149dfb77a;
      if (local_58 != 0) {
        puVar5 = local_60;
      }
      FUN_1446f470e(&local_50,puVar5,1);
      iVar2 = (int)param_1[0xb];
      *(uint *)(param_1 + 0xb) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0x5c) < iVar2 + 1U) {
        FUN_1446f84a2(plVar7,iVar2);
      }
      lVar3 = *plVar7;
      *(undefined8 *)(lVar3 + (longlong)iVar2 * 8) = 0;
      *(undefined8 *)(lVar3 + (longlong)iVar2 * 8) = local_50;
      if (local_60 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      iVar6 = iVar6 + 1;
    } while (iVar1 + -1 != iVar6);
  }
  FUN_1407fecba(param_1 + 0xc,(int)param_1[0xb],1);
  (**(code **)(*param_1 + 0xa8))(param_1);
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d34304 FUN_148d34304 body=20 status=ok
// SIG undefined FUN_148d34304(void)

void FUN_148d34304(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x44) = DAT_14cbc1a18;
  return;
}



// FUNCTION 148d3431e FUN_148d3431e body=58 status=ok
// SIG undefined FUN_148d3431e(void)

undefined8 * FUN_148d3431e(undefined8 *param_1)

{
  FUN_143d565ce();
  *param_1 = &PTR_FUN_14b6e4ee0;
  param_1[0x33] = 0;
  param_1[0x34] = 0x800000000;
  param_1[0x35] = 0;
  return param_1;
}



// FUNCTION 148d3435e FUN_148d3435e body=411 status=ok
// SIG undefined FUN_148d3435e(void)

undefined8 FUN_148d3435e(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined2 *puVar1;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  longlong local_68 [2];
  undefined2 *local_58;
  undefined8 uStack_50;
  undefined2 *local_48;
  undefined8 uStack_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = param_3;
  FUN_140056680(&local_48,L"EridiumEncasing");
  if (param_2 != 0) {
    local_58 = *(undefined2 **)(param_2 + 0x18);
    FUN_1400021e4(&local_58,local_68);
    FUN_1449b8608(local_78,&local_48,&DAT_149e01f60);
    FUN_1401c7f3e(&local_58,local_78,local_68);
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_48 = local_58;
    uStack_40 = uStack_50;
    local_58 = (undefined2 *)0x0;
    uStack_50 = 0;
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (param_3 != 0) {
    FUN_1400021e4(&local_38,local_68);
    FUN_1449b8608(local_78,&local_48,&DAT_149e01f60);
    FUN_1401c7f3e(&local_58,local_78,local_68);
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_48 = local_58;
    uStack_40 = uStack_50;
    local_58 = (undefined2 *)0x0;
    uStack_50 = 0;
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
  }
  puVar1 = local_48;
  if ((int)uStack_40 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_1446f470e(param_1,puVar1,1);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148d344fa FUN_148d344fa body=183 status=ok
// SIG undefined FUN_148d344fa(void)

undefined8 FUN_148d344fa(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_1412c35d0();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 0x900048;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d345b2 FUN_148d345b2 body=197 status=ok
// SIG undefined FUN_148d345b2(void)

void FUN_148d345b2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  FUN_14485c47a(&local_48,param_3);
  local_40 = param_4;
  iVar2 = FUN_148d34678(param_1 + 0x118,&local_48);
  if (iVar2 != 0) {
    cVar1 = FUN_144729dda(param_1 + 0x1a8);
    if (cVar1 != '\0') {
      plVar3 = (longlong *)FUN_14479d2ce(param_1 + 0x1a8);
      (**(code **)(*plVar3 + 0x420))(plVar3,0);
      *(undefined8 *)(param_1 + 0x1a8) = 0;
    }
  }
  FUN_140940a70(param_1,param_2,param_3,param_4);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d34678 FUN_148d34678 body=234 status=ok
// SIG undefined FUN_148d34678(void)

undefined8 FUN_148d34678(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar6 = param_1;
  }
  if ((longlong)*(int *)(param_1 + 0x88) != 0) {
    lVar7 = (longlong)*(int *)(param_1 + 0x88) << 4;
    iVar3 = 1;
    lVar4 = 0;
    do {
      if ((*(longlong *)(lVar6 + 8) == *(longlong *)(param_2 + 8)) &&
         (cVar1 = FUN_14038330a(lVar6,param_2), cVar1 != '\0')) {
        if (iVar3 == 0) {
          return 0;
        }
        iVar2 = *(int *)(param_1 + 0x88);
        iVar3 = iVar2 - iVar3;
        if (iVar3 != 0) {
          iVar5 = 1;
          if (iVar3 < 1) {
            iVar5 = iVar3;
          }
          lVar6 = *(longlong *)(param_1 + 0x80);
          if (*(longlong *)(param_1 + 0x80) == 0) {
            lVar6 = param_1;
          }
          memmove((void *)((lVar4 >> 0x20) * 0x10 + lVar6),
                  (void *)((longlong)(iVar2 - iVar5) * 0x10 + lVar6),(longlong)iVar5 << 4);
          iVar2 = *(int *)(param_1 + 0x88);
        }
        *(int *)(param_1 + 0x88) = iVar2 + -1;
        FUN_148d3916e(param_1);
        return 1;
      }
      lVar6 = lVar6 + 0x10;
      lVar4 = lVar4 + 0x100000000;
      iVar3 = iVar3 + 1;
      lVar7 = lVar7 + -0x10;
    } while (lVar7 != 0);
  }
  return 0;
}



// FUNCTION 148d34794 FUN_148d34794 body=95 status=ok
// SIG undefined FUN_148d34794(void)

void FUN_148d34794(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1466275ae(*(undefined8 *)(param_2 + 0xa8));
  if (lVar1 == param_2 && lVar1 != 0) {
    lVar1 = FUN_14479d2ce(param_1 + 0x200);
    if (lVar1 != 0) {
      FUN_1406c3fca(lVar1);
      FUN_1406c4cb0(lVar1,0);
      return;
    }
  }
  return;
}



// FUNCTION 148d34802 thunk_FUN_1411b6e1a body=5 status=ok
// SIG undefined thunk_FUN_1411b6e1a(void)

void thunk_FUN_1411b6e1a(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  
  if (*(char *)(param_1 + 0x1b8) != '\x01') {
    return;
  }
  if (*(longlong *)(param_1 + 0x208) == 0) {
    return;
  }
  bVar1 = *(byte *)(param_1 + 0x3d8);
  FUN_1411b6fca(param_1);
  bVar2 = *(byte *)(param_1 + 0x3d8);
  if (bVar2 == bVar1) {
    return;
  }
  *(undefined4 *)(param_1 + 0x3d0) = 0;
  *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)(param_1 + 0x2e0);
  *(undefined8 *)(param_1 + 0x300) = *(undefined8 *)(param_1 + 0x2e8);
  *(undefined8 *)(param_1 + 0x308) = *(undefined8 *)(param_1 + 0x2f0);
  if (bVar1 == 0) {
    if ((byte)(bVar2 - 1) < 2) {
      *(double *)(param_1 + 0x308) =
           (double)*(float *)(param_1 + 0x3d4) + *(double *)(param_1 + 0x308);
    }
LAB_1411b6ef0:
    if (bVar2 == 1) {
      *(undefined8 *)(param_1 + 800) = *(undefined8 *)(param_1 + 0x2a8);
      *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_1 + 0x298);
      *(undefined8 *)(param_1 + 0x318) = *(undefined8 *)(param_1 + 0x2a0);
      *(undefined4 *)(param_1 + 0x3c8) = *(undefined4 *)(*(longlong *)(param_1 + 0x208) + 0x1c0);
      uVar3 = *(undefined4 *)(*(longlong *)(param_1 + 0x208) + 0x1c4);
    }
    else if (bVar2 == 2) {
      *(undefined8 *)(param_1 + 800) = *(undefined8 *)(param_1 + 0x2c0);
      *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_1 + 0x2b0);
      *(undefined8 *)(param_1 + 0x318) = *(undefined8 *)(param_1 + 0x2b8);
      *(undefined4 *)(param_1 + 0x3c8) = *(undefined4 *)(*(longlong *)(param_1 + 0x208) + 0x1c8);
      uVar3 = *(undefined4 *)(*(longlong *)(param_1 + 0x208) + 0x1cc);
    }
    else {
      if (bVar2 != 3) goto LAB_1411b6eaf;
      *(undefined8 *)(param_1 + 800) = *(undefined8 *)(param_1 + 0x2d8);
      *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_1 + 0x2c8);
      *(undefined8 *)(param_1 + 0x318) = *(undefined8 *)(param_1 + 0x2d0);
      *(undefined4 *)(param_1 + 0x3c8) = *(undefined4 *)(*(longlong *)(param_1 + 0x208) + 0x1d0);
      uVar3 = *(undefined4 *)(*(longlong *)(param_1 + 0x208) + 0x1d4);
    }
    *(undefined4 *)(param_1 + 0x3cc) = uVar3;
  }
  else {
    if ((2 < bVar1) || (bVar2 != 0)) goto LAB_1411b6ef0;
    *(double *)(param_1 + 0x308) =
         *(double *)(param_1 + 0x308) - (double)*(float *)(param_1 + 0x3d4);
LAB_1411b6eaf:
    *(undefined8 *)(param_1 + 800) = *(undefined8 *)(param_1 + 0x290);
    *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_1 + 0x280);
    *(undefined8 *)(param_1 + 0x318) = *(undefined8 *)(param_1 + 0x288);
  }
  return;
}



// FUNCTION 148d34808 FUN_148d34808 body=141 status=ok
// SIG undefined FUN_148d34808(void)

void FUN_148d34808(longlong param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = *(char *)(param_1 + 0x3e0);
  local_28 = param_2;
  if (param_3 == '\0') {
    FUN_1400bc8c2((char *)(param_1 + 0x3e0),&local_28);
  }
  else {
    FUN_1400bc96c();
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x1f8);
  if ((lVar2 != 0) && (cVar1 != *(char *)(param_1 + 0x3e0))) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d348a8 FUN_148d348a8 body=148 status=ok
// SIG undefined FUN_148d348a8(void)

void FUN_148d348a8(longlong param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = *(char *)(param_1 + 0x408);
  local_28 = param_2;
  if (param_3 == '\0') {
    FUN_1400bc8c2((char *)(param_1 + 0x408),&local_28);
  }
  else {
    FUN_1400bc96c();
  }
  if (cVar1 != *(char *)(param_1 + 0x408)) {
    lVar2 = FUN_14479d2ce(param_1 + 0x1f8);
    if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d34956 FUN_148d34956 body=80 status=ok
// SIG undefined FUN_148d34956(void)

void FUN_148d34956(longlong param_1,undefined8 param_2,char param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  if (param_3 == '\0') {
    FUN_1400bc8c2(param_1 + 0x458,&local_10);
  }
  else {
    FUN_1400bc96c();
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d349b4 FUN_148d349b4 body=235 status=ok
// SIG undefined FUN_148d349b4(void)

void FUN_148d349b4(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  FUN_145c05cec();
  if ((0 < (int)param_1[0x26]) && (lVar3 = FUN_14479d2ce(param_1[8] + 0x48), lVar3 != 0)) {
    lVar4 = FUN_144a6c4d8();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      plVar6 = param_1 + 0xd;
      if ((longlong *)param_1[0x25] != (longlong *)0x0) {
        plVar6 = (longlong *)param_1[0x25];
      }
      if ((longlong)(int)param_1[0x26] != 0) {
        lVar4 = (longlong)(int)param_1[0x26] * 0x18;
        do {
          lVar5 = FUN_14479d2ce(plVar6);
          if ((lVar5 != 0) && (cVar1 = FUN_14342c3d2(lVar5,DAT_14cbca630), cVar1 != '\0')) {
            uVar2 = (**(code **)(*param_1 + 0x98))(param_1);
            FUN_143d54038(param_2,uVar2);
            (**(code **)(*param_2 + 0x78))(param_2,lVar3,lVar5,*param_3);
          }
          plVar6 = plVar6 + 3;
          lVar4 = lVar4 + -0x18;
        } while (lVar4 != 0);
      }
    }
  }
  return;
}



// FUNCTION 148d34aa0 FUN_148d34aa0 body=224 status=ok
// SIG undefined FUN_148d34aa0(void)

void FUN_148d34aa0(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((0 < *(int *)(param_1 + 0x130)) &&
     (lVar2 = FUN_14479d2ce(*(longlong *)(param_1 + 0x40) + 0x48), lVar2 != 0)) {
    lVar3 = FUN_144a6c4d8();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      lVar3 = param_1 + 0x68;
      if (*(longlong *)(param_1 + 0x128) != 0) {
        lVar3 = *(longlong *)(param_1 + 0x128);
      }
      if ((longlong)*(int *)(param_1 + 0x130) != 0) {
        lVar5 = (longlong)*(int *)(param_1 + 0x130) * 0x18;
        do {
          lVar4 = FUN_14479d2ce(lVar3);
          if ((lVar4 != 0) && (cVar1 = FUN_14342c3d2(lVar4,DAT_14cbca630), cVar1 != '\0')) {
            (**(code **)(*param_2 + 0x80))(param_2,lVar2,lVar4,*param_3);
          }
          lVar3 = lVar3 + 0x18;
          lVar5 = lVar5 + -0x18;
        } while (lVar5 != 0);
      }
    }
  }
  FUN_145a1be3c(param_1,param_2,param_3);
  return;
}



// FUNCTION 148d34b80 FUN_148d34b80 body=351 status=ok
// SIG undefined FUN_148d34b80(void)

void FUN_148d34b80(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined4 local_68;
  undefined2 local_50;
  undefined1 local_48;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 0x220) != 0) {
    local_68 = *(undefined4 *)(*(longlong *)(param_1 + 0x220) + 0x10c);
    local_70 = 0;
    local_50 = 4;
    local_48 = 3;
    local_40 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
    lVar1 = FUN_1470e53c2(param_2,&DAT_14cbca5f4);
    FUN_1403719a4(lVar1 + 8,&local_70);
    FUN_144a2da94(&local_70);
    local_68 = *(undefined4 *)(*(longlong *)(param_1 + 0x220) + 0x108);
    local_70 = 0;
    local_50 = 4;
    local_48 = 3;
    local_40 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
    lVar1 = FUN_1470e53c2(param_2,&DAT_14cbca5ec);
    FUN_1403719a4(lVar1 + 8,&local_70);
    FUN_144a2da94(&local_70);
    FUN_148d39fa6(*(undefined8 *)(param_1 + 0x220),local_80);
    FUN_1470ed5e8(&local_70,local_80);
    lVar1 = FUN_1470e53c2(param_2,&DAT_14cbca5fc);
    FUN_1403719a4(lVar1 + 8,&local_70);
    FUN_144a2da94(&local_70);
  }
  FUN_147f5093c(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d34ce0 FUN_148d34ce0 body=217 status=ok
// SIG undefined FUN_148d34ce0(void)

bool FUN_148d34ce0(double *param_1,float param_2,double *param_3,double *param_4,float param_5)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar6 = param_4[2] - param_1[2];
  dVar7 = param_4[1] - param_1[1];
  dVar8 = *param_4 - *param_1;
  dVar1 = *param_3;
  dVar5 = param_3[1];
  dVar2 = param_3[2];
  if (0.0 <= dVar2 * dVar6 + dVar1 * dVar8 + dVar7 * dVar5) {
    dVar4 = dVar1 * dVar7 - dVar8 * dVar5;
    dVar1 = dVar2 * dVar8 - dVar6 * dVar1;
    dVar5 = dVar5 * dVar6 - dVar7 * dVar2;
    bVar3 = (float)SQRT(dVar4 * dVar4 + dVar5 * dVar5 + dVar1 * dVar1) < param_2 + param_5;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}



// FUNCTION 148d34dba FUN_148d34dba body=126 status=ok
// SIG undefined FUN_148d34dba(void)

void FUN_148d34dba(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x120);
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
    if (*(longlong *)(param_1 + 0x118) != 0) {
      for (puVar6 = *(undefined8 **)(*(longlong *)(param_1 + 0x118) + 0x4a8);
          puVar6 != (undefined8 *)0x0; puVar6 = (undefined8 *)*puVar6) {
        FUN_148d39768(puVar6[2],param_2);
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
                    /* WARNING: Could not recover jumptable at 0x000148d34e2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148d34e38 FUN_148d34e38 body=305 status=ok
// SIG undefined FUN_148d34e38(void)

void FUN_148d34e38(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined1 local_a0;
  undefined4 local_98;
  undefined1 local_90;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = FUN_140343d7a();
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x220);
  if (lVar1 != 0 && lVar2 != 0) {
    lVar2 = *(longlong *)(lVar2 + 0x1c8);
    if (lVar2 == 0) {
      local_28 = DAT_14c8464f0;
      local_38 = DAT_14c8464e0;
      uStack_30 = DAT_14c8464e8;
    }
    else {
      local_38 = *(undefined8 *)(lVar2 + 0x260);
      uStack_30 = *(undefined8 *)(lVar2 + 0x268);
      local_28 = *(undefined8 *)(lVar2 + 0x270);
    }
    local_78 = *(undefined4 *)(lVar1 + 0x150);
    local_80 = *(undefined8 *)(lVar1 + 0x148);
    local_70 = *(undefined8 *)(lVar1 + 0x158);
    local_68 = *(undefined4 *)(lVar1 + 0x160);
    local_60 = 0;
    local_58 = *(undefined4 *)(lVar1 + 0x170);
    uStack_54 = *(undefined4 *)(lVar1 + 0x174);
    uStack_50 = *(undefined4 *)(lVar1 + 0x178);
    uStack_4c = *(undefined4 *)(lVar1 + 0x17c);
    local_48 = *(undefined4 *)(lVar1 + 0x180);
    uStack_44 = *(undefined4 *)(lVar1 + 0x184);
    uStack_40 = *(undefined4 *)(lVar1 + 0x188);
    uStack_3c = *(undefined4 *)(lVar1 + 0x18c);
    local_90 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_a8 = 1;
    FUN_141512486(param_2,&local_80,3,&local_38);
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d34f6a FUN_148d34f6a body=750 status=ok
// SIG undefined FUN_148d34f6a(void)

bool FUN_148d34f6a(longlong param_1,double *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 unaff_RBP;
  ulonglong uVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_268 [32];
  undefined8 *local_248;
  undefined4 local_240;
  undefined4 *local_238;
  undefined8 *local_230;
  undefined1 *local_228;
  uint local_21c;
  longlong local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined1 local_1e0 [4];
  float local_1dc;
  undefined4 local_13c;
  undefined1 local_128 [24];
  undefined4 local_110;
  undefined1 local_108 [40];
  undefined4 local_e0;
  undefined4 local_dc;
  float local_d8;
  float local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined2 local_b7;
  undefined1 local_b5;
  undefined4 local_b4;
  undefined1 local_b0;
  undefined4 local_ac;
  undefined1 local_a8;
  undefined4 local_a4;
  undefined2 local_a0;
  longlong local_78;
  undefined8 local_70;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_268;
  plVar9 = *(longlong **)(param_1 + 0xf0);
  uVar8 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
    lVar7 = 0;
  }
  else {
    iVar4 = (int)plVar9[1];
    lVar7 = 0;
    do {
      if (iVar4 == 0) {
        plVar9 = (longlong *)0x0;
        goto LAB_148d34fc9;
      }
      LOCK();
      iVar2 = (int)plVar9[1];
      bVar10 = iVar4 == iVar2;
      if (bVar10) {
        *(int *)(plVar9 + 1) = iVar4 + 1;
        iVar2 = iVar4;
      }
      iVar4 = iVar2;
      UNLOCK();
    } while (!bVar10);
    lVar7 = *(longlong *)(param_1 + 0xe8);
    uVar8 = 0;
  }
LAB_148d34fc9:
  plVar5 = (longlong *)FUN_140343d7a();
  if (plVar5 == (longlong *)0x0 || lVar7 == 0) {
    bVar10 = false;
  }
  else {
    lVar6 = FUN_1447210f0(plVar5);
    bVar10 = false;
    if (lVar6 != 0) {
      local_21c = (uint)uVar8;
      local_a4 = 0;
      local_a0 = 0x101;
      local_78 = 0;
      local_70 = 0x800000000;
      local_58 = 0;
      local_50 = 0x400000000;
      local_b8 = 0;
      local_ac = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_b7 = 1;
      local_b5 = 0;
      local_a8 = 0;
      local_b4 = 0x1000000;
      local_b0 = 1;
      local_218 = lVar6;
      FUN_144a85a22(&local_c8,plVar5);
      local_ac = 1;
      local_cc = 0;
      local_d0 = 0.0;
      (**(code **)(*plVar5 + 0x528))(plVar5,&local_cc,&local_d0);
      local_d8 = 0.0;
      if (0.0 <= local_d0 + -5.0) {
        local_d8 = local_d0 + -5.0;
      }
      local_e0 = 3;
      local_dc = local_cc;
      local_d0 = local_d8;
      memset(local_1e0,0,0x100);
      local_110 = 0xffffffff;
      local_1dc = 1.0;
      local_13c = 0xffffffff;
      local_1e8 = *(double *)(lVar7 + 0x598);
      local_1f8 = *(double *)(lVar7 + 0x588);
      dStack_1f0 = *(double *)(lVar7 + 0x590);
      local_200 = local_1e8 + param_2[2];
      local_208 = dStack_1f0 + param_2[1];
      local_210 = local_1f8 + *param_2;
      local_228 = &DAT_14cad0f10;
      local_240 = 0;
      local_248 = &DAT_14c8463d0;
      local_238 = &local_e0;
      local_230 = &local_c8;
      cVar3 = FUN_14021655c(local_218,local_1e0);
      if ((cVar3 != '\0') && (local_1dc <= 1.0)) {
        lVar7 = FUN_14479d2ce(local_108);
        bVar10 = true;
        if (lVar7 == 0) {
          lVar7 = FUN_14485cccc(local_128);
          bVar10 = lVar7 != 0;
        }
      }
      uVar8 = (ulonglong)local_21c;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      if (local_78 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((char)uVar8 == '\0') {
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
  if ((local_48 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar10;
}



// FUNCTION 148d3525a FUN_148d3525a body=38 status=ok
// SIG undefined FUN_148d3525a(void)

undefined8 FUN_148d3525a(undefined8 param_1,int param_2)

{
  FUN_1411203da();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d35286 FUN_148d35286 body=29 status=ok
// SIG undefined FUN_148d35286(void)

undefined8 FUN_148d35286(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d352a4 FUN_148d352a4 body=38 status=ok
// SIG undefined FUN_148d352a4(void)

undefined8 FUN_148d352a4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"TitlePicker_InviteAccepted",1);
  return param_2;
}



// FUNCTION 148d352ca FUN_148d352ca body=385 status=ok
// SIG undefined FUN_148d352ca(void)

undefined8 *
FUN_148d352ca(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_5;
  plVar4 = (longlong *)FUN_14001cc68(0x930);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b972a40;
  plVar1 = plVar4 + 2;
  memset(plVar1,0,0x920);
  FUN_148d3544c(plVar1);
  local_50 = plVar1;
  local_48 = plVar4;
  FUN_148d355e4(&local_50,plVar1);
  plVar1 = local_48;
  if (local_48 == (longlong *)0x0) {
    *param_1 = local_50;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_148d353df;
    param_1[1] = 0;
LAB_148d353a2:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_148d353df;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar4;
  }
  else {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    *param_1 = local_50;
    plVar4 = (longlong *)param_1[1];
    if (local_48 != plVar4) {
      param_1[1] = local_48;
      if (plVar4 == (longlong *)0x0) goto LAB_148d353df;
      goto LAB_148d353a2;
    }
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_148d353df;
    (**(code **)*local_48)(local_48);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_148d353df:
  plVar1 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  local_58 = 0x920;
  FUN_140a52e78(*param_1,param_2,param_3,param_4);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d3544c FUN_148d3544c body=330 status=ok
// SIG undefined FUN_148d3544c(void)

undefined8 * FUN_148d3544c(undefined8 *param_1)

{
  FUN_140a55f88();
  *param_1 = &PTR_FUN_14b972a60;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  FUN_140ca8f8e(param_1 + 0x5c);
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  FUN_140ca8f8e(param_1 + 0x76);
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  FUN_140ca8f8e(param_1 + 0x90);
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  FUN_140ca8f8e(param_1 + 0xaa);
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  FUN_140ca8f8e(param_1 + 0xc4);
  FUN_140ca8f8e(param_1 + 0xda);
  FUN_140ca8f8e(param_1 + 0xf0);
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  *(undefined1 *)(param_1 + 0x108) = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x854) = 0;
  *(undefined8 *)((longlong)param_1 + 0x85c) = 0;
  FUN_141515d3c(param_1 + 0x10d);
  param_1[0x119] = 0;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  param_1[0x11d] = 0;
  param_1[0x11e] = 0;
  param_1[0x11f] = 0;
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  param_1[0x122] = 0;
  return param_1;
}



// FUNCTION 148d35596 FUN_148d35596 body=9 status=ok
// SIG undefined FUN_148d35596(void)

void FUN_148d35596(longlong param_1)

{
  FUN_148e80804(param_1 + 0x10);
  return;
}



// FUNCTION 148d355a0 FUN_148d355a0 body=29 status=ok
// SIG undefined FUN_148d355a0(void)

undefined8 FUN_148d355a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d355be FUN_148d355be body=38 status=ok
// SIG undefined FUN_148d355be(void)

undefined8 FUN_148d355be(undefined8 param_1,int param_2)

{
  FUN_148e80804();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d355e4 FUN_148d355e4 body=167 status=ok
// SIG undefined FUN_148d355e4(void)

void FUN_148d355e4(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148d3565f;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148d3565f;
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
LAB_148d3565f:
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
                    /* WARNING: Could not recover jumptable at 0x000148d3567f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148d3568c FUN_148d3568c body=29 status=ok
// SIG undefined FUN_148d3568c(void)

undefined8 FUN_148d3568c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d356c6 FUN_148d356c6 body=93 status=ok
// SIG undefined FUN_148d356c6(void)

void FUN_148d356c6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b970fc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d35724 FUN_148d35724 body=93 status=ok
// SIG undefined FUN_148d35724(void)

void FUN_148d35724(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b970fc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d35782 FUN_148d35782 body=126 status=ok
// SIG undefined FUN_148d35782(void)

void FUN_148d35782(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e01f80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b970fc0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d357f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d3580e FUN_148d3580e body=21 status=ok
// SIG undefined FUN_148d3580e(void)

undefined8 FUN_148d3580e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148d35824 FUN_148d35824 body=29 status=ok
// SIG undefined FUN_148d35824(void)

undefined8 FUN_148d35824(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d3585e FUN_148d3585e body=93 status=ok
// SIG undefined FUN_148d3585e(void)

void FUN_148d3585e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b971030;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d358bc FUN_148d358bc body=93 status=ok
// SIG undefined FUN_148d358bc(void)

void FUN_148d358bc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b971030;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d3591a FUN_148d3591a body=126 status=ok
// SIG undefined FUN_148d3591a(void)

void FUN_148d3591a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b971030;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d35989. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d359a4 FUN_148d359a4 body=21 status=ok
// SIG undefined FUN_148d359a4(void)

undefined8 FUN_148d359a4(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148d359ba FUN_148d359ba body=29 status=ok
// SIG undefined FUN_148d359ba(void)

undefined8 FUN_148d359ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d359f4 FUN_148d359f4 body=93 status=ok
// SIG undefined FUN_148d359f4(void)

void FUN_148d359f4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b52a0d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9710a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d35a52 FUN_148d35a52 body=93 status=ok
// SIG undefined FUN_148d35a52(void)

void FUN_148d35a52(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b52a0d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9710a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d35ab0 FUN_148d35ab0 body=126 status=ok
// SIG undefined FUN_148d35ab0(void)

void FUN_148d35ab0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b52a0d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9710a0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d35b1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d35b3c FUN_148d35b3c body=21 status=ok
// SIG undefined FUN_148d35b3c(void)

undefined8 FUN_148d35b3c(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148d35b52 FUN_148d35b52 body=29 status=ok
// SIG undefined FUN_148d35b52(void)

undefined8 FUN_148d35b52(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d35b8c FUN_148d35b8c body=93 status=ok
// SIG undefined FUN_148d35b8c(void)

void FUN_148d35b8c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b52a1b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b971110;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d35bea FUN_148d35bea body=93 status=ok
// SIG undefined FUN_148d35bea(void)

void FUN_148d35bea(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b52a1b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b971110;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d35c48 FUN_148d35c48 body=126 status=ok
// SIG undefined FUN_148d35c48(void)

void FUN_148d35c48(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b52a1b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b971110;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d35cb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d35cd4 FUN_148d35cd4 body=21 status=ok
// SIG undefined FUN_148d35cd4(void)

undefined8 FUN_148d35cd4(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148d35cea FUN_148d35cea body=114 status=ok
// SIG undefined FUN_148d35cea(void)

void FUN_148d35cea(longlong *param_1,int param_2)

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



// FUNCTION 148d35d5c FUN_148d35d5c body=31 status=ok
// SIG undefined FUN_148d35d5c(void)

undefined8 FUN_148d35d5c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d35d96 FUN_148d35d96 body=101 status=ok
// SIG undefined FUN_148d35d96(void)

void FUN_148d35d96(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aa6ea50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b971180;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d35dfc FUN_148d35dfc body=101 status=ok
// SIG undefined FUN_148d35dfc(void)

void FUN_148d35dfc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aa6ea50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b971180;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d35e62 FUN_148d35e62 body=134 status=ok
// SIG undefined FUN_148d35e62(void)

void FUN_148d35e62(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14aa6ea50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b971180;
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
                    /* WARNING: Could not recover jumptable at 0x000148d35ed9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d35ee8 FUN_148d35ee8 body=52 status=ok
// SIG undefined FUN_148d35ee8(void)

void FUN_148d35ee8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148d35f19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148d35f1c FUN_148d35f1c body=31 status=ok
// SIG undefined FUN_148d35f1c(void)

undefined8 FUN_148d35f1c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d35f56 FUN_148d35f56 body=26 status=ok
// SIG undefined FUN_148d35f56(void)

bool FUN_148d35f56(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148d35f70 FUN_148d35f70 body=101 status=ok
// SIG undefined FUN_148d35f70(void)

void FUN_148d35f70(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b403f60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9711f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d35fd6 FUN_148d35fd6 body=101 status=ok
// SIG undefined FUN_148d35fd6(void)

void FUN_148d35fd6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b403f60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9711f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d3603c FUN_148d3603c body=134 status=ok
// SIG undefined FUN_148d3603c(void)

void FUN_148d3603c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b403f60;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9711f0;
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
                    /* WARNING: Could not recover jumptable at 0x000148d360b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d360c2 FUN_148d360c2 body=62 status=ok
// SIG undefined FUN_148d360c2(void)

void FUN_148d360c2(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148d360fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148d36100 FUN_148d36100 body=31 status=ok
// SIG undefined FUN_148d36100(void)

undefined8 FUN_148d36100(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d3613a FUN_148d3613a body=101 status=ok
// SIG undefined FUN_148d3613a(void)

void FUN_148d3613a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca6c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b971260;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d361a0 FUN_148d361a0 body=101 status=ok
// SIG undefined FUN_148d361a0(void)

void FUN_148d361a0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca6c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b971260;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d36206 FUN_148d36206 body=134 status=ok
// SIG undefined FUN_148d36206(void)

void FUN_148d36206(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1ca6c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b971260;
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
                    /* WARNING: Could not recover jumptable at 0x000148d3627d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d3628c FUN_148d3628c body=52 status=ok
// SIG undefined FUN_148d3628c(void)

void FUN_148d3628c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148d362bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148d362c0 FUN_148d362c0 body=31 status=ok
// SIG undefined FUN_148d362c0(void)

undefined8 FUN_148d362c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d362fa FUN_148d362fa body=29 status=ok
// SIG undefined FUN_148d362fa(void)

bool FUN_148d362fa(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148d36318 FUN_148d36318 body=26 status=ok
// SIG undefined FUN_148d36318(void)

bool FUN_148d36318(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148d36332 FUN_148d36332 body=24 status=ok
// SIG undefined FUN_148d36332(void)

bool FUN_148d36332(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148d3634a FUN_148d3634a body=101 status=ok
// SIG undefined FUN_148d3634a(void)

void FUN_148d3634a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4ec440;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9712d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d363b0 FUN_148d363b0 body=101 status=ok
// SIG undefined FUN_148d363b0(void)

void FUN_148d363b0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4ec440;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9712d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d36416 FUN_148d36416 body=134 status=ok
// SIG undefined FUN_148d36416(void)

void FUN_148d36416(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4ec440;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9712d0;
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
                    /* WARNING: Could not recover jumptable at 0x000148d3648d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d3649c FUN_148d3649c body=52 status=ok
// SIG undefined FUN_148d3649c(void)

void FUN_148d3649c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148d364cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148d364d0 FUN_148d364d0 body=167 status=ok
// SIG undefined FUN_148d364d0(void)

bool FUN_148d364d0(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
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



// FUNCTION 148d36578 FUN_148d36578 body=96 status=ok
// SIG undefined FUN_148d36578(void)

void FUN_148d36578(longlong param_1,int param_2)

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



// FUNCTION 148d365d8 FUN_148d365d8 body=132 status=ok
// SIG undefined FUN_148d365d8(void)

void FUN_148d365d8(longlong param_1,int param_2)

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



// FUNCTION 148d3665e FUN_148d3665e body=209 status=ok
// SIG undefined FUN_148d3665e(void)

int FUN_148d3665e(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  iVar4 = (int)param_1[1];
  lVar5 = (longlong)iVar4;
  if (lVar5 == 0) {
    iVar4 = 0;
  }
  else {
    plVar1 = (longlong *)*param_1;
    iVar3 = 0;
    bVar10 = *plVar1 == *(longlong *)*param_2;
    iVar7 = 0;
    do {
      iVar2 = iVar7 + 1;
      if (iVar7 + 1 < iVar4) {
        iVar2 = iVar4;
      }
      iVar8 = iVar7;
      lVar6 = (longlong)iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar9 = iVar2;
        if (lVar5 <= lVar6) break;
        iVar8 = iVar8 + 1;
        iVar9 = iVar8;
      } while (bVar10 == (plVar1[lVar6] == *(longlong *)*param_2));
      if (bVar10 == false) {
        if (iVar3 != iVar7) {
          memmove(plVar1 + iVar3,plVar1 + iVar7,(longlong)(iVar9 - iVar7) << 3);
        }
        iVar3 = iVar3 + (iVar9 - iVar7);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      iVar7 = iVar9;
    } while (lVar6 < lVar5);
    *(int *)(param_1 + 1) = iVar3;
    iVar4 = iVar4 - iVar3;
  }
  return iVar4;
}



// FUNCTION 148d36730 FUN_148d36730 body=31 status=ok
// SIG undefined FUN_148d36730(void)

undefined8 FUN_148d36730(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d3676a FUN_148d3676a body=29 status=ok
// SIG undefined FUN_148d3676a(void)

bool FUN_148d3676a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148d36788 FUN_148d36788 body=26 status=ok
// SIG undefined FUN_148d36788(void)

bool FUN_148d36788(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148d367a2 FUN_148d367a2 body=101 status=ok
// SIG undefined FUN_148d367a2(void)

void FUN_148d367a2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9713b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d36808 FUN_148d36808 body=134 status=ok
// SIG undefined FUN_148d36808(void)

void FUN_148d36808(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9713b0;
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
                    /* WARNING: Could not recover jumptable at 0x000148d3687f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d3688e FUN_148d3688e body=162 status=ok
// SIG undefined FUN_148d3688e(void)

bool FUN_148d3688e(longlong param_1,undefined4 param_2)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
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



// FUNCTION 148d3694c FUN_148d3694c body=29 status=ok
// SIG undefined FUN_148d3694c(void)

bool FUN_148d3694c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148d3696a FUN_148d3696a body=26 status=ok
// SIG undefined FUN_148d3696a(void)

bool FUN_148d3696a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148d36990 FUN_148d36990 body=101 status=ok
// SIG undefined FUN_148d36990(void)

void FUN_148d36990(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b971490;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b971420;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d369f6 FUN_148d369f6 body=101 status=ok
// SIG undefined FUN_148d369f6(void)

void FUN_148d369f6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b971490;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b971420;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d36a5c FUN_148d36a5c body=134 status=ok
// SIG undefined FUN_148d36a5c(void)

void FUN_148d36a5c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b971490;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b971420;
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
                    /* WARNING: Could not recover jumptable at 0x000148d36ad3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d36ae2 FUN_148d36ae2 body=173 status=ok
// SIG undefined FUN_148d36ae2(void)

bool FUN_148d36ae2(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

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



// FUNCTION 148d36b92 FUN_148d36b92 body=29 status=ok
// SIG undefined FUN_148d36b92(void)

undefined8 FUN_148d36b92(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d36bca FUN_148d36bca body=29 status=ok
// SIG undefined FUN_148d36bca(void)

bool FUN_148d36bca(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148d36be8 FUN_148d36be8 body=26 status=ok
// SIG undefined FUN_148d36be8(void)

bool FUN_148d36be8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148d36c02 FUN_148d36c02 body=24 status=ok
// SIG undefined FUN_148d36c02(void)

bool FUN_148d36c02(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148d36c1a FUN_148d36c1a body=101 status=ok
// SIG undefined FUN_148d36c1a(void)

void FUN_148d36c1a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972cb0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b971570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d36c80 FUN_148d36c80 body=101 status=ok
// SIG undefined FUN_148d36c80(void)

void FUN_148d36c80(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972cb0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b971570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d36ce6 FUN_148d36ce6 body=134 status=ok
// SIG undefined FUN_148d36ce6(void)

void FUN_148d36ce6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b972cb0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b971570;
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
                    /* WARNING: Could not recover jumptable at 0x000148d36d5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d36d6c FUN_148d36d6c body=52 status=ok
// SIG undefined FUN_148d36d6c(void)

void FUN_148d36d6c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148d36d9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148d36da0 FUN_148d36da0 body=167 status=ok
// SIG undefined FUN_148d36da0(void)

bool FUN_148d36da0(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
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



// FUNCTION 148d36e4a FUN_148d36e4a body=31 status=ok
// SIG undefined FUN_148d36e4a(void)

undefined8 FUN_148d36e4a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d36e84 FUN_148d36e84 body=29 status=ok
// SIG undefined FUN_148d36e84(void)

bool FUN_148d36e84(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148d36ea2 FUN_148d36ea2 body=26 status=ok
// SIG undefined FUN_148d36ea2(void)

bool FUN_148d36ea2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148d36ebc FUN_148d36ebc body=24 status=ok
// SIG undefined FUN_148d36ebc(void)

bool FUN_148d36ebc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148d36ed4 FUN_148d36ed4 body=101 status=ok
// SIG undefined FUN_148d36ed4(void)

void FUN_148d36ed4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9715e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d36f3a FUN_148d36f3a body=134 status=ok
// SIG undefined FUN_148d36f3a(void)

void FUN_148d36f3a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9715e0;
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
                    /* WARNING: Could not recover jumptable at 0x000148d36fb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d36fc0 FUN_148d36fc0 body=39 status=ok
// SIG undefined FUN_148d36fc0(void)

void FUN_148d36fc0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148d36fe3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148d36fe8 FUN_148d36fe8 body=29 status=ok
// SIG undefined FUN_148d36fe8(void)

undefined8 FUN_148d36fe8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d37020 FUN_148d37020 body=29 status=ok
// SIG undefined FUN_148d37020(void)

bool FUN_148d37020(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148d3703e FUN_148d3703e body=26 status=ok
// SIG undefined FUN_148d3703e(void)

bool FUN_148d3703e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148d37058 FUN_148d37058 body=24 status=ok
// SIG undefined FUN_148d37058(void)

bool FUN_148d37058(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148d37070 FUN_148d37070 body=101 status=ok
// SIG undefined FUN_148d37070(void)

void FUN_148d37070(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4edcd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b971870;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d370d6 FUN_148d370d6 body=101 status=ok
// SIG undefined FUN_148d370d6(void)

void FUN_148d370d6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4edcd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b971870;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d3713c FUN_148d3713c body=134 status=ok
// SIG undefined FUN_148d3713c(void)

void FUN_148d3713c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4edcd0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b971870;
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
                    /* WARNING: Could not recover jumptable at 0x000148d371b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d371c2 FUN_148d371c2 body=50 status=ok
// SIG undefined FUN_148d371c2(void)

void FUN_148d371c2(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148d371f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148d371f4 FUN_148d371f4 body=165 status=ok
// SIG undefined FUN_148d371f4(void)

bool FUN_148d371f4(longlong param_1,undefined4 param_2,undefined4 param_3)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
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



// FUNCTION 148d372a8 FUN_148d372a8 body=62 status=ok
// SIG undefined FUN_148d372a8(void)

void FUN_148d372a8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148d372e6(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 148d372e6 FUN_148d372e6 body=93 status=ok
// SIG undefined FUN_148d372e6(void)

ulonglong FUN_148d372e6(uint param_1,uint param_2)

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



// FUNCTION 148d37344 FUN_148d37344 body=114 status=ok
// SIG undefined FUN_148d37344(void)

void FUN_148d37344(longlong *param_1,int param_2)

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



// FUNCTION 148d373b6 FUN_148d373b6 body=132 status=ok
// SIG undefined FUN_148d373b6(void)

void FUN_148d373b6(longlong *param_1,ulonglong param_2)

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
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x18) == param_2) {
          FUN_148d3743a(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 148d3743a FUN_148d3743a body=87 status=ok
// SIG undefined FUN_148d3743a(void)

void FUN_148d3743a(longlong *param_1,int param_2)

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
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_148d37344();
  return;
}



// FUNCTION 148d37494 FUN_148d37494 body=114 status=ok
// SIG undefined FUN_148d37494(void)

void FUN_148d37494(longlong *param_1,int param_2)

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



// FUNCTION 148d37506 FUN_148d37506 body=69 status=ok
// SIG undefined FUN_148d37506(void)

void FUN_148d37506(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (*(int *)(param_1 + 0x48) < iVar3 && 0 < (int)param_2 || iVar3 < *(int *)(param_1 + 0x48)) {
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_145a13d8a(param_1);
    return;
  }
  return;
}



// FUNCTION 148d3754c FUN_148d3754c body=90 status=ok
// SIG undefined FUN_148d3754c(void)

void FUN_148d3754c(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_148d375a6();
  return;
}



// FUNCTION 148d375a6 FUN_148d375a6 body=78 status=ok
// SIG undefined FUN_148d375a6(void)

void FUN_148d375a6(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(*param_1 + 8 + (longlong)param_2 * 0x20);
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
  FUN_148d37494(param_1,param_2);
  return;
}



// FUNCTION 148d375f4 FUN_148d375f4 body=31 status=ok
// SIG undefined FUN_148d375f4(void)

undefined8 FUN_148d375f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d3762e FUN_148d3762e body=93 status=ok
// SIG undefined FUN_148d3762e(void)

void FUN_148d3762e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972d50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b971f00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d3768c FUN_148d3768c body=93 status=ok
// SIG undefined FUN_148d3768c(void)

void FUN_148d3768c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972d50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b971f00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d376ea FUN_148d376ea body=126 status=ok
// SIG undefined FUN_148d376ea(void)

void FUN_148d376ea(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b972d50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b971f00;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d37759. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d37768 FUN_148d37768 body=48 status=ok
// SIG undefined FUN_148d37768(void)

void FUN_148d37768(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148d37795. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148d3779a FUN_148d3779a body=31 status=ok
// SIG undefined FUN_148d3779a(void)

undefined8 FUN_148d3779a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d377d4 FUN_148d377d4 body=29 status=ok
// SIG undefined FUN_148d377d4(void)

bool FUN_148d377d4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148d377f2 FUN_148d377f2 body=93 status=ok
// SIG undefined FUN_148d377f2(void)

void FUN_148d377f2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b971f70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d37850 FUN_148d37850 body=93 status=ok
// SIG undefined FUN_148d37850(void)

void FUN_148d37850(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b971f70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d378ae FUN_148d378ae body=126 status=ok
// SIG undefined FUN_148d378ae(void)

void FUN_148d378ae(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b971f70;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d3791d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d3792c FUN_148d3792c body=35 status=ok
// SIG undefined FUN_148d3792c(void)

void FUN_148d3792c(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148d3794b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 148d37950 FUN_148d37950 body=31 status=ok
// SIG undefined FUN_148d37950(void)

undefined8 FUN_148d37950(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d3798a FUN_148d3798a body=29 status=ok
// SIG undefined FUN_148d3798a(void)

bool FUN_148d3798a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148d379a8 FUN_148d379a8 body=93 status=ok
// SIG undefined FUN_148d379a8(void)

void FUN_148d379a8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b405fd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9720c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d37a06 FUN_148d37a06 body=93 status=ok
// SIG undefined FUN_148d37a06(void)

void FUN_148d37a06(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b405fd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9720c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}


