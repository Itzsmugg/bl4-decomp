// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1489b4c32 FUN_1489b4c32 body=592 status=ok
// SIG undefined FUN_1489b4c32(void)

undefined8 * FUN_1489b4c32(longlong param_1,undefined8 *param_2,char *param_3)

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
    local_c8 = (longlong *)(param_1 + 0x690);
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
    plVar3 = (longlong *)(param_1 + 0x690);
  }
  iVar2 = FUN_140e23c90(plVar3,local_70,param_3);
  if ((iVar2 == -1) || (lVar1 = (longlong)iVar2 * 0x50 + *plVar3, lVar1 == -0x38 || lVar1 == 0)) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    FUN_1448c1bf6(param_1,param_2);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1489b4e84 FUN_1489b4e84 body=29 status=ok
// SIG undefined FUN_1489b4e84(void)

undefined8 FUN_1489b4e84(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489b4ebc FUN_1489b4ebc body=29 status=ok
// SIG undefined FUN_1489b4ebc(void)

bool FUN_1489b4ebc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1489b4eda FUN_1489b4eda body=26 status=ok
// SIG undefined FUN_1489b4eda(void)

bool FUN_1489b4eda(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1489b4ef4 FUN_1489b4ef4 body=24 status=ok
// SIG undefined FUN_1489b4ef4(void)

bool FUN_1489b4ef4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1489b4f0c FUN_1489b4f0c body=93 status=ok
// SIG undefined FUN_1489b4f0c(void)

void FUN_1489b4f0c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4351e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489b4f6a FUN_1489b4f6a body=93 status=ok
// SIG undefined FUN_1489b4f6a(void)

void FUN_1489b4f6a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4351e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489b4fc8 FUN_1489b4fc8 body=126 status=ok
// SIG undefined FUN_1489b4fc8(void)

void FUN_1489b4fc8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b4351e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489b5037. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489b5046 FUN_1489b5046 body=64 status=ok
// SIG undefined FUN_1489b5046(void)

void FUN_1489b5046(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001489b5083. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1489b5086 FUN_1489b5086 body=179 status=ok
// SIG undefined FUN_1489b5086(void)

bool FUN_1489b5086(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

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



// FUNCTION 1489b513a FUN_1489b513a body=116 status=ok
// SIG undefined FUN_1489b513a(void)

void FUN_1489b513a(longlong *param_1,int param_2)

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



// FUNCTION 1489b51ae FUN_1489b51ae body=31 status=ok
// SIG undefined FUN_1489b51ae(void)

undefined8 FUN_1489b51ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489b51e8 FUN_1489b51e8 body=93 status=ok
// SIG undefined FUN_1489b51e8(void)

void FUN_1489b51e8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b435250;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489b5246 FUN_1489b5246 body=93 status=ok
// SIG undefined FUN_1489b5246(void)

void FUN_1489b5246(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b435250;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489b52a4 FUN_1489b52a4 body=126 status=ok
// SIG undefined FUN_1489b52a4(void)

void FUN_1489b52a4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b435250;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489b5313. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489b5322 FUN_1489b5322 body=135 status=ok
// SIG undefined FUN_1489b5322(void)

void FUN_1489b5322(longlong param_1,undefined8 param_2,undefined2 *param_3)

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



// FUNCTION 1489b53aa FUN_1489b53aa body=208 status=ok
// SIG undefined FUN_1489b53aa(void)

bool FUN_1489b53aa(longlong param_1,undefined8 param_2,undefined2 *param_3)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined2 local_40;
  undefined6 uStack_3e;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = FUN_144a61b4f();
  if (cVar2 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar4 = CONCAT62(uStack_3e,local_40);
  }
  else {
    lVar4 = 0;
  }
  lVar3 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar3 != 0) {
    pcVar1 = *(code **)(param_1 + 0x20);
    local_40 = *param_3;
    local_38 = *(longlong *)(param_3 + 4);
    if ((local_38 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    (*pcVar1)(lVar3,param_2,&local_40);
  }
  if ((lVar4 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar4);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar3 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489b547c FUN_1489b547c body=31 status=ok
// SIG undefined FUN_1489b547c(void)

undefined8 FUN_1489b547c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489b54b6 FUN_1489b54b6 body=29 status=ok
// SIG undefined FUN_1489b54b6(void)

bool FUN_1489b54b6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1489b54d4 FUN_1489b54d4 body=93 status=ok
// SIG undefined FUN_1489b54d4(void)

void FUN_1489b54d4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8660;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4352c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489b5532 FUN_1489b5532 body=93 status=ok
// SIG undefined FUN_1489b5532(void)

void FUN_1489b5532(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8660;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4352c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489b5590 FUN_1489b5590 body=126 status=ok
// SIG undefined FUN_1489b5590(void)

void FUN_1489b5590(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8660;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4352c0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489b55ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489b560e FUN_1489b560e body=58 status=ok
// SIG undefined FUN_1489b560e(void)

void FUN_1489b560e(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001489b5645. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1489b5648 FUN_1489b5648 body=325 status=ok
// SIG undefined FUN_1489b5648(void)

void FUN_1489b5648(longlong *param_1)

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
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x24 + (longlong)iVar4 * 0x28) * 4) =
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



// FUNCTION 1489b578e FUN_1489b578e body=31 status=ok
// SIG undefined FUN_1489b578e(void)

undefined8 FUN_1489b578e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489b57c8 FUN_1489b57c8 body=29 status=ok
// SIG undefined FUN_1489b57c8(void)

bool FUN_1489b57c8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1489b57e6 FUN_1489b57e6 body=26 status=ok
// SIG undefined FUN_1489b57e6(void)

bool FUN_1489b57e6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1489b5800 FUN_1489b5800 body=93 status=ok
// SIG undefined FUN_1489b5800(void)

void FUN_1489b5800(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab18ff0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b435330;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489b585e FUN_1489b585e body=93 status=ok
// SIG undefined FUN_1489b585e(void)

void FUN_1489b585e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab18ff0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b435330;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489b58bc FUN_1489b58bc body=126 status=ok
// SIG undefined FUN_1489b58bc(void)

void FUN_1489b58bc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ab18ff0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b435330;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489b592b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489b593a FUN_1489b593a body=40 status=ok
// SIG undefined FUN_1489b593a(void)

void FUN_1489b593a(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001489b595f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1489b5962 FUN_1489b5962 body=152 status=ok
// SIG undefined FUN_1489b5962(void)

bool FUN_1489b5962(longlong param_1,undefined8 param_2)

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



// FUNCTION 1489b59fc FUN_1489b59fc body=181 status=ok
// SIG undefined FUN_1489b59fc(void)

longlong FUN_1489b59fc(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_1489b5a94;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1489b5ab2(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_1489b5a94:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 1489b5ab2 FUN_1489b5ab2 body=277 status=ok
// SIG undefined FUN_1489b5ab2(void)

undefined4 * FUN_1489b5ab2(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1489b5bc8(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar1 = FUN_1489b5cae(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_1489b5dc2(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489b5bc8 FUN_1489b5bc8 body=229 status=ok
// SIG undefined FUN_1489b5bc8(void)

int * FUN_1489b5bc8(longlong *param_1,int *param_2)

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



// FUNCTION 1489b5cae FUN_1489b5cae body=161 status=ok
// SIG undefined FUN_1489b5cae(void)

undefined8 FUN_1489b5cae(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          if (*(longlong *)(puVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_1489b5d50(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 1489b5d50 FUN_1489b5d50 body=114 status=ok
// SIG undefined FUN_1489b5d50(void)

void FUN_1489b5d50(longlong *param_1,int param_2)

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



// FUNCTION 1489b5dc2 FUN_1489b5dc2 body=477 status=ok
// SIG undefined FUN_1489b5dc2(void)

void FUN_1489b5dc2(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
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
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar6 = (longlong)iVar4 * 0x20;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x1c + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x18 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489b5fa0 FUN_1489b5fa0 body=225 status=ok
// SIG undefined FUN_1489b5fa0(void)

void FUN_1489b5fa0(longlong *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
  }
  else {
    bVar6 = false;
    do {
      lVar8 = uVar5 * 0x10 + -8;
      uVar7 = uVar5;
      while ((*(int *)(*param_1 + lVar8) != 0 &&
             (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0))) {
        local_58 = *param_2;
        uStack_54 = param_2[1];
        uStack_50 = param_2[2];
        uStack_4c = param_2[3];
        cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,&local_58,param_3);
        if (cVar4 == '\0') break;
        lVar8 = lVar8 + -0x10;
        bVar3 = uVar7 < 2;
        uVar7 = uVar7 - 1;
        if (bVar3) {
          *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
          if (bVar6) goto LAB_1489b604d;
          goto LAB_1489b605c;
        }
      }
      uVar5 = uVar7 - 1;
      bVar6 = true;
    } while (1 < uVar7);
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1489b604d:
    FUN_14474d06a(param_1,0);
  }
LAB_1489b605c:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489b6086 FUN_1489b6086 body=81 status=ok
// SIG undefined FUN_1489b6086(void)

undefined8 FUN_1489b6086(longlong param_1)

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



// FUNCTION 1489b60de FUN_1489b60de body=118 status=ok
// SIG undefined FUN_1489b60de(void)

void FUN_1489b60de(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4353f0;
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



// FUNCTION 1489b6154 FUN_1489b6154 body=118 status=ok
// SIG undefined FUN_1489b6154(void)

void FUN_1489b6154(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4353f0;
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



// FUNCTION 1489b61ca FUN_1489b61ca body=156 status=ok
// SIG undefined FUN_1489b61ca(void)

void FUN_1489b61ca(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9ef0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4353f0;
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
                    /* WARNING: Could not recover jumptable at 0x0001489b6256. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489b6266 FUN_1489b6266 body=104 status=ok
// SIG undefined FUN_1489b6266(void)

void FUN_1489b6266(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001489b62b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001489b62c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 1489b62ce FUN_1489b62ce body=122 status=ok
// SIG undefined FUN_1489b62ce(void)

void FUN_1489b62ce(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x50) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50 + 4) = uVar4;
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



// FUNCTION 1489b6348 FUN_1489b6348 body=122 status=ok
// SIG undefined FUN_1489b6348(void)

void FUN_1489b6348(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x50) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50 + 4) = uVar4;
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



// FUNCTION 1489b63c2 FUN_1489b63c2 body=68 status=ok
// SIG undefined FUN_1489b63c2(void)

undefined8 * FUN_1489b63c2(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b435480;
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



// FUNCTION 1489b640a FUN_1489b640a body=81 status=ok
// SIG undefined FUN_1489b640a(void)

undefined8 FUN_1489b640a(longlong param_1)

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



// FUNCTION 1489b6462 FUN_1489b6462 body=89 status=ok
// SIG undefined FUN_1489b6462(void)

bool FUN_1489b6462(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1489b64ad;
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
LAB_1489b64ad:
  return lVar6 == param_2;
}



// FUNCTION 1489b64d8 FUN_1489b64d8 body=118 status=ok
// SIG undefined FUN_1489b64d8(void)

void FUN_1489b64d8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e35290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b435480;
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



// FUNCTION 1489b654e FUN_1489b654e body=118 status=ok
// SIG undefined FUN_1489b654e(void)

void FUN_1489b654e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e35290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b435480;
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



// FUNCTION 1489b65c4 FUN_1489b65c4 body=156 status=ok
// SIG undefined FUN_1489b65c4(void)

void FUN_1489b65c4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e35290;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b435480;
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
                    /* WARNING: Could not recover jumptable at 0x0001489b6650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489b6660 FUN_1489b6660 body=104 status=ok
// SIG undefined FUN_1489b6660(void)

void FUN_1489b6660(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001489b66ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001489b66be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 1489b66c8 FUN_1489b66c8 body=225 status=ok
// SIG undefined FUN_1489b66c8(void)

void FUN_1489b66c8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_14b435500;
  FUN_1446f470e(local_20,L"WINDOWS",1);
  plVar3 = (longlong *)FUN_140272950(local_20);
  (**(code **)(*plVar3 + 0x38))(plVar3,param_1[3]);
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
  plVar3 = (longlong *)param_1[5];
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
  plVar3 = (longlong *)param_1[2];
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489b67aa FUN_1489b67aa body=226 status=ok
// SIG undefined FUN_1489b67aa(void)

void FUN_1489b67aa(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(char *)((longlong)param_2 + 0x14) == '\0') {
    lVar1 = param_2[2];
    uVar4 = (int)lVar1 + 1;
    if (*(uint *)(param_2 + 1) < uVar4) goto LAB_1489b67f7;
    *(uint *)(param_2 + 2) = uVar4;
    *(undefined1 *)(*param_2 + (longlong)(int)lVar1) = 0xc;
    if ((*(byte *)((longlong)param_2 + 0x14) & 1) != 0) goto LAB_1489b67f7;
    lVar1 = param_2[2];
    uVar4 = (int)lVar1 + 1;
    if (*(uint *)(param_2 + 1) < uVar4) goto LAB_1489b67f7;
    *(uint *)(param_2 + 2) = uVar4;
    *(undefined1 *)(*param_2 + (longlong)(int)lVar1) = 1;
  }
  else {
LAB_1489b67f7:
    *(undefined1 *)((longlong)param_2 + 0x14) = 1;
  }
  local_18 = param_3;
  plVar2 = (longlong *)FUN_1489b6c87(param_2,param_1 + 0xc);
  if (*(char *)((longlong)plVar2 + 0x14) == '\0') {
    lVar1 = plVar2[2];
    uVar4 = (int)lVar1 + 1;
    if (uVar4 <= *(uint *)(plVar2 + 1)) {
      *(uint *)(plVar2 + 2) = uVar4;
      *(undefined1 *)(*plVar2 + (longlong)(int)lVar1) = 0x53;
      if ((*(byte *)((longlong)plVar2 + 0x14) & 1) == 0) {
        lVar1 = plVar2[2];
        uVar4 = (int)lVar1 + 1;
        if (uVar4 <= *(uint *)(plVar2 + 1)) {
          *(uint *)(plVar2 + 2) = uVar4;
          *(undefined1 *)(*plVar2 + (longlong)(int)lVar1) = 0x52;
          goto LAB_1489b6839;
        }
      }
    }
  }
  *(undefined1 *)((longlong)plVar2 + 0x14) = 1;
LAB_1489b6839:
  uVar3 = FUN_1489b68cf(plVar2,&local_18);
  FUN_1489b688d(uVar3,param_1 + 0x50);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489b688d FUN_1489b688d body=66 status=ok
// SIG undefined FUN_1489b688d(void)

undefined8 FUN_1489b688d(undefined8 param_1,longlong param_2)

{
  FUN_1489b6c87();
  FUN_1489b6c87(param_1,param_2 + 4);
  FUN_1489b6c87(param_1,param_2 + 8);
  FUN_1489b6c87(param_1,param_2 + 0xc);
  return param_1;
}



// FUNCTION 1489b68cf FUN_1489b68cf body=187 status=ok
// SIG undefined FUN_1489b68cf(void)

void FUN_1489b68cf(longlong *param_1,undefined1 *param_2)

{
  if ((*(char *)((longlong)param_1 + 0x14) == '\0') &&
     ((int)param_1[2] + 8U <= *(uint *)(param_1 + 1))) {
    *(undefined1 *)(*param_1 + (longlong)(int)param_1[2]) = param_2[7];
    *(undefined1 *)(*param_1 + (longlong)((int)param_1[2] + 1)) = param_2[6];
    *(undefined1 *)(*param_1 + (longlong)((int)param_1[2] + 2)) = param_2[5];
    *(undefined1 *)(*param_1 + (longlong)((int)param_1[2] + 3)) = param_2[4];
    *(undefined1 *)(*param_1 + (longlong)((int)param_1[2] + 4)) = param_2[3];
    *(undefined1 *)(*param_1 + (longlong)((int)param_1[2] + 5)) = param_2[2];
    *(undefined1 *)(*param_1 + (longlong)((int)param_1[2] + 6)) = param_2[1];
    *(undefined1 *)(*param_1 + (longlong)((int)param_1[2] + 7)) = *param_2;
    *(int *)(param_1 + 2) = (int)param_1[2] + 8;
    return;
  }
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}



// FUNCTION 1489b698a FUN_1489b698a body=226 status=ok
// SIG undefined FUN_1489b698a(void)

void FUN_1489b698a(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(char *)((longlong)param_2 + 0x14) == '\0') {
    lVar1 = param_2[2];
    uVar4 = (int)lVar1 + 1;
    if (*(uint *)(param_2 + 1) < uVar4) goto LAB_1489b69d7;
    *(uint *)(param_2 + 2) = uVar4;
    *(undefined1 *)(*param_2 + (longlong)(int)lVar1) = 0xc;
    if ((*(byte *)((longlong)param_2 + 0x14) & 1) != 0) goto LAB_1489b69d7;
    lVar1 = param_2[2];
    uVar4 = (int)lVar1 + 1;
    if (*(uint *)(param_2 + 1) < uVar4) goto LAB_1489b69d7;
    *(uint *)(param_2 + 2) = uVar4;
    *(undefined1 *)(*param_2 + (longlong)(int)lVar1) = 1;
  }
  else {
LAB_1489b69d7:
    *(undefined1 *)((longlong)param_2 + 0x14) = 1;
  }
  local_18 = param_3;
  plVar2 = (longlong *)FUN_1489b6c87(param_2,param_1 + 0xc);
  if (*(char *)((longlong)plVar2 + 0x14) == '\0') {
    lVar1 = plVar2[2];
    uVar4 = (int)lVar1 + 1;
    if (uVar4 <= *(uint *)(plVar2 + 1)) {
      *(uint *)(plVar2 + 2) = uVar4;
      *(undefined1 *)(*plVar2 + (longlong)(int)lVar1) = 0x53;
      if ((*(byte *)((longlong)plVar2 + 0x14) & 1) == 0) {
        lVar1 = plVar2[2];
        uVar4 = (int)lVar1 + 1;
        if (uVar4 <= *(uint *)(plVar2 + 1)) {
          *(uint *)(plVar2 + 2) = uVar4;
          *(undefined1 *)(*plVar2 + (longlong)(int)lVar1) = 0x51;
          goto LAB_1489b6a19;
        }
      }
    }
  }
  *(undefined1 *)((longlong)plVar2 + 0x14) = 1;
LAB_1489b6a19:
  uVar3 = FUN_1489b68cf(plVar2,&local_18);
  FUN_1489b688d(uVar3,param_1 + 0x50);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489b6a6e FUN_1489b6a6e body=170 status=ok
// SIG undefined FUN_1489b6a6e(void)

ulonglong FUN_1489b6a6e(longlong param_1,char *param_2,int param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  char *local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_4 = 0;
  if (param_3 == 0x20) {
    local_28 = 0x20;
    local_20 = 0;
    local_30 = param_2;
    if (((*param_2 == '\f') && ((*(uint *)(param_1 + 0x10) & (uint)(byte)param_2[1]) != 0)) &&
       (uVar1 = *(uint *)(param_2 + 2),
       (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18) ==
       *(uint *)(param_1 + 0xc))) {
      local_24 = 8;
      uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),param_2[7] == 'Q' && param_2[6] == 'S');
      FUN_1489b6b19(&local_30,param_4);
      local_48 = 0;
      uStack_40 = 0;
      FUN_1489b6b47(&local_30);
      goto LAB_1489b6abc;
    }
  }
  uVar2 = 0;
LAB_1489b6abc:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489b6b19 FUN_1489b6b19 body=46 status=ok
// SIG undefined FUN_1489b6b19(void)

void FUN_1489b6b19(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  
  if (((char)param_1[2] == '\0') && (*(int *)((longlong)param_1 + 0xc) + 8 <= (int)param_1[1])) {
    uVar1 = *(ulonglong *)(*param_1 + (longlong)*(int *)((longlong)param_1 + 0xc));
    *param_2 = uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18
               | (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 |
               (uVar1 & 0xff0000) << 0x18 | (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
    *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 8;
    return;
  }
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



// FUNCTION 1489b6b47 FUN_1489b6b47 body=66 status=ok
// SIG undefined FUN_1489b6b47(void)

undefined8 FUN_1489b6b47(undefined8 param_1,longlong param_2)

{
  FUN_1489b6cee();
  FUN_1489b6cee(param_1,param_2 + 4);
  FUN_1489b6cee(param_1,param_2 + 8);
  FUN_1489b6cee(param_1,param_2 + 0xc);
  return param_1;
}



// FUNCTION 1489b6b8a FUN_1489b6b8a body=209 status=ok
// SIG undefined FUN_1489b6b8a(void)

ulonglong FUN_1489b6b8a(longlong param_1,char *param_2,uint param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_40;
  char *local_38;
  uint local_30;
  undefined4 local_2c;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (0x20 < param_3) {
    local_28 = '\0';
    local_38 = param_2;
    local_30 = param_3;
    if ((((0 < (int)param_3) && (*param_2 == '\f')) &&
        ((*(uint *)(param_1 + 0x10) & (uint)(byte)param_2[1]) != 0)) &&
       (uVar1 = *(uint *)(param_2 + 2),
       (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18) ==
       *(uint *)(param_1 + 0xc))) {
      uVar3 = 0;
      local_2c = 8;
      if ((param_2[6] != 'S') || (param_2[7] != 'R')) goto LAB_1489b6c12;
      local_40 = 0;
      FUN_1489b6b19(&local_38,&local_40);
      if (local_40 == *(longlong *)(param_1 + 0x30)) {
        local_58 = 0;
        uStack_50 = 0;
        uVar2 = FUN_1489b6b47(&local_38);
        if (local_28 == '\0') {
          *param_4 = (undefined4)local_58;
          param_4[1] = local_58._4_4_;
          param_4[2] = (undefined4)uStack_50;
          param_4[3] = uStack_50._4_4_;
        }
        uVar3 = CONCAT71((int7)((ulonglong)uVar2 >> 8),local_28) ^ 1;
        goto LAB_1489b6c12;
      }
    }
  }
  uVar3 = 0;
LAB_1489b6c12:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489b6c5c FUN_1489b6c5c body=43 status=ok
// SIG undefined FUN_1489b6c5c(void)

undefined8 FUN_1489b6c5c(undefined8 param_1,int param_2)

{
  FUN_1489b66c8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1489b6c87 FUN_1489b6c87 body=103 status=ok
// SIG undefined FUN_1489b6c87(void)

void FUN_1489b6c87(longlong *param_1,undefined1 *param_2)

{
  if ((*(char *)((longlong)param_1 + 0x14) == '\0') &&
     ((int)param_1[2] + 4U <= *(uint *)(param_1 + 1))) {
    *(undefined1 *)(*param_1 + (longlong)(int)param_1[2]) = param_2[3];
    *(undefined1 *)(*param_1 + (longlong)((int)param_1[2] + 1)) = param_2[2];
    *(undefined1 *)(*param_1 + (longlong)((int)param_1[2] + 2)) = param_2[1];
    *(undefined1 *)(*param_1 + (longlong)((int)param_1[2] + 3)) = *param_2;
    *(int *)(param_1 + 2) = (int)param_1[2] + 4;
    return;
  }
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}



// FUNCTION 1489b6cee FUN_1489b6cee body=44 status=ok
// SIG undefined FUN_1489b6cee(void)

void FUN_1489b6cee(longlong *param_1,uint *param_2)

{
  uint uVar1;
  
  if (((char)param_1[2] == '\0') && (*(int *)((longlong)param_1 + 0xc) + 4 <= (int)param_1[1])) {
    uVar1 = *(uint *)(*param_1 + (longlong)*(int *)((longlong)param_1 + 0xc));
    *param_2 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 4;
    return;
  }
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



// FUNCTION 1489b6d1a FUN_1489b6d1a body=230 status=ok
// SIG undefined FUN_1489b6d1a(void)

undefined8 * FUN_1489b6d1a(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1489b6e02 FUN_1489b6e02 body=130 status=ok
// SIG undefined FUN_1489b6e02(void)

void FUN_1489b6e02(longlong *param_1,longlong *param_2)

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



// FUNCTION 1489b6e86 FUN_1489b6e86 body=230 status=ok
// SIG undefined FUN_1489b6e86(void)

undefined8 * FUN_1489b6e86(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1489b6f6e FUN_1489b6f6e body=130 status=ok
// SIG undefined FUN_1489b6f6e(void)

void FUN_1489b6f6e(longlong *param_1,longlong *param_2)

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



// FUNCTION 1489b6ff2 FUN_1489b6ff2 body=193 status=ok
// SIG undefined FUN_1489b6ff2(void)

void FUN_1489b6ff2(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1489b7089;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1489b7089:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1489b70b4 FUN_1489b70b4 body=175 status=ok
// SIG undefined FUN_1489b70b4(void)

void FUN_1489b70b4(longlong *param_1,undefined8 param_2,undefined4 param_3)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1489b713d;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1489b713d:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1489b7164 FUN_1489b7164 body=36 status=ok
// SIG undefined FUN_1489b7164(void)

undefined8 FUN_1489b7164(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1489b71a4 FUN_1489b71a4 body=93 status=ok
// SIG undefined FUN_1489b71a4(void)

void FUN_1489b71a4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b435550;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489b7202 FUN_1489b7202 body=123 status=ok
// SIG undefined FUN_1489b7202(void)

void FUN_1489b7202(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b435550;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489b727e FUN_1489b727e body=21 status=ok
// SIG undefined FUN_1489b727e(void)

undefined8 FUN_1489b727e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1489b72a0 FUN_1489b72a0 body=149 status=ok
// SIG undefined FUN_1489b72a0(void)

void FUN_1489b72a0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  plVar1 = (longlong *)(param_1 + 0x28);
  iVar3 = *(int *)(param_1 + 0x30);
  lVar5 = (longlong)iVar3;
  if (0 < lVar5) {
    plVar6 = (longlong *)(*plVar1 + 8);
    lVar4 = lVar5;
    do {
      if (plVar6[-1] == param_2) goto LAB_1489b7301;
      plVar6 = plVar6 + 2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  *(uint *)(param_1 + 0x30) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar3 + 1U) {
    FUN_1489bb2b8(plVar1,iVar3);
  }
  puVar2 = (undefined8 *)(*plVar1 + lVar5 * 0x10);
  *puVar2 = 0;
  puVar2[1] = 0;
  plVar1 = (longlong *)(*plVar1 + lVar5 * 0x10);
  plVar6 = plVar1 + 1;
  *plVar1 = param_2;
LAB_1489b7301:
  if ((param_3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_3);
  }
  *plVar6 = param_3;
  return;
}



// FUNCTION 1489b7342 FUN_1489b7342 body=120 status=ok
// SIG undefined FUN_1489b7342(void)

undefined1 * FUN_1489b7342(undefined1 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140056680(local_28);
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_144a5dc74(param_1 + 0x28);
  param_1[0x38] = 0x11;
  FUN_1489b7450(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489b73bc FUN_1489b73bc body=60 status=ok
// SIG undefined FUN_1489b73bc(void)

undefined1 * FUN_1489b73bc(undefined1 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_144a5dc74(param_1 + 0x28);
  param_1[0x38] = 0x11;
  FUN_1489b7450(param_1,param_2);
  return param_1;
}



// FUNCTION 1489b73f8 FUN_1489b73f8 body=43 status=ok
// SIG undefined FUN_1489b73f8(void)

undefined1 * FUN_1489b73f8(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_144a5dc74(param_1 + 0x28);
  param_1[0x38] = 0x13;
  return param_1;
}



// FUNCTION 1489b7424 FUN_1489b7424 body=44 status=ok
// SIG undefined FUN_1489b7424(void)

void FUN_1489b7424(longlong param_1,undefined8 param_2)

{
  FUN_144a787a6(param_1 + 0x18);
  FUN_144a787a6(param_1 + 8,param_2);
  *(undefined1 *)(param_1 + 0x38) = 0x11;
  return;
}



// FUNCTION 1489b7450 FUN_1489b7450 body=101 status=ok
// SIG undefined FUN_1489b7450(void)

void FUN_1489b7450(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  
  if ((undefined8 *)(param_1 + 0x18) != param_2) {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x18) = *param_2;
    *param_2 = 0;
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  iVar1 = *(int *)(param_1 + 0x20) + -1;
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar1 = 0;
  }
  FUN_1402980a2(param_1 + 8,*(undefined8 *)(param_1 + 0x18),iVar1);
  *(undefined1 *)(param_1 + 0x38) = 0x11;
  return;
}



// FUNCTION 1489b74b6 FUN_1489b74b6 body=266 status=ok
// SIG undefined FUN_1489b74b6(void)

char * FUN_1489b74b6(char *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  void *_Dst;
  undefined2 *puVar10;
  ulonglong _Size;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != param_2) {
    cVar1 = *param_2;
    if (cVar1 == '\n') {
      FUN_140056680(&local_30,*(undefined8 *)(param_2 + 8));
      puVar10 = local_30;
      if (local_28 == 0) {
        puVar10 = &DAT_149dfb77a;
      }
      FUN_140c3a228(param_1,puVar10);
      *param_1 = '\n';
      if (local_30 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (cVar1 == '\b') {
      _Src = *(void **)(param_2 + 8);
      uVar2 = *(uint *)(param_2 + 0x10);
      _Size = (ulonglong)uVar2;
      FUN_140c3a2ac(param_1);
      *param_1 = '\b';
      if (_Size != 0) {
        *(uint *)(param_1 + 0x10) = uVar2;
        _Dst = (void *)FUN_14001cc68(_Size,0x10);
        *(void **)(param_1 + 8) = _Dst;
        memcpy(_Dst,_Src,_Size);
      }
    }
    else {
      if (cVar1 != '\x06') {
        FUN_140c3a2ac(param_1);
        uVar3 = *(undefined4 *)param_2;
        uVar4 = *(undefined4 *)(param_2 + 4);
        uVar5 = *(undefined4 *)(param_2 + 8);
        uVar6 = *(undefined4 *)(param_2 + 0xc);
        uVar7 = *(undefined4 *)(param_2 + 0x14);
        uVar8 = *(undefined4 *)(param_2 + 0x18);
        uVar9 = *(undefined4 *)(param_2 + 0x1c);
        *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
        *(undefined4 *)(param_1 + 0x14) = uVar7;
        *(undefined4 *)(param_1 + 0x18) = uVar8;
        *(undefined4 *)(param_1 + 0x1c) = uVar9;
        *(undefined4 *)param_1 = uVar3;
        *(undefined4 *)(param_1 + 4) = uVar4;
        *(undefined4 *)(param_1 + 8) = uVar5;
        *(undefined4 *)(param_1 + 0xc) = uVar6;
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
      FUN_140c3a228(param_1,*(undefined8 *)(param_2 + 8));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1489b75c6 FUN_1489b75c6 body=47 status=ok
// SIG undefined FUN_1489b75c6(void)

undefined4 * FUN_1489b75c6(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_1 != param_2) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    uVar5 = param_2[5];
    uVar6 = param_2[6];
    uVar7 = param_2[7];
    param_1[4] = param_2[4];
    param_1[5] = uVar5;
    param_1[6] = uVar6;
    param_1[7] = uVar7;
    *param_1 = uVar1;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    *(undefined1 *)param_2 = 0;
    FUN_140c3a2ac(param_2);
  }
  return param_1;
}



// FUNCTION 1489b75f6 FUN_1489b75f6 body=191 status=ok
// SIG undefined FUN_1489b75f6(void)

void FUN_1489b75f6(undefined1 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined2 *puVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  FUN_145fe0690(&local_48,&local_38,0);
  FUN_145927d24(param_2,local_48,1);
  puVar3 = local_38;
  if ((int)uStack_30 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  FUN_140c3a228(param_1,puVar3);
  *param_1 = 10;
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
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489b76b6 FUN_1489b76b6 body=146 status=ok
// SIG undefined FUN_1489b76b6(void)

void FUN_1489b76b6(char *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (*param_1 != '\b') {
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != 0) {
      FUN_144893a1c(param_2,0);
      return;
    }
    return;
  }
  iVar3 = *(int *)(param_1 + 0x10);
  if (-1 < iVar3) {
    *(undefined4 *)(param_2 + 1) = 0;
    iVar2 = 0;
    if (*(int *)((longlong)param_2 + 0xc) != iVar3) {
      FUN_144893a1c(param_2);
      iVar2 = *(int *)(param_2 + 1);
      iVar3 = *(int *)((longlong)param_2 + 0xc);
    }
    uVar1 = *(uint *)(param_1 + 0x10);
    *(uint *)(param_2 + 1) = uVar1 + iVar2;
    if ((uint)(iVar3 - iVar2) < uVar1) {
      FUN_1447403be(param_2,iVar2);
    }
    memcpy((void *)*param_2,*(void **)(param_1 + 8),(ulonglong)*(uint *)(param_1 + 0x10));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar3);
}



// FUNCTION 1489b774a FUN_1489b774a body=1547 status=ok
// SIG undefined FUN_1489b774a(void)

bool FUN_1489b774a(longlong *param_1,undefined8 *param_2,char *param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  void *_Src;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined2 *puVar11;
  bool bVar12;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  ulonglong uStack_80;
  ulonglong local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140c3a2ac(param_3);
  lVar7 = param_1[1];
  lVar5 = FUN_144a7add4();
  if (*(ulonglong *)(lVar5 + 8) == 0) {
    bVar12 = lVar7 != 0;
    if (lVar7 != lVar5 && bVar12) {
      do {
        lVar7 = *(longlong *)(lVar7 + 0x30);
        bVar12 = lVar7 != 0;
        if (lVar7 == lVar5) break;
      } while (lVar7 != 0);
    }
    if (!bVar12) goto LAB_1489b77fd;
LAB_1489b7794:
    lVar7 = param_1[0xf];
    lVar5 = *(longlong *)param_1[0xe];
    plVar9 = (longlong *)param_1[0xe];
LAB_1489b779f:
    uVar6 = (**(code **)(lVar5 + 0x220))(plVar9,param_2);
    FUN_1401cfad2(lVar7,&local_68,uVar6);
LAB_1489b77bb:
    plVar9 = local_68;
joined_r0x0001489b7974:
    local_68 = plVar9;
    if ((int)uStack_60 == 0) {
LAB_1489b7a48:
      plVar9 = (longlong *)&DAT_149dfb77a;
    }
    FUN_140c3a228(param_3,plVar9);
    plVar9 = local_68;
    if (local_68 != (longlong *)0x0) {
LAB_1489b7a61:
      FUN_1400020a8(plVar9);
    }
  }
  else {
    if ((*(ulonglong *)(lVar7 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0) goto LAB_1489b7794;
LAB_1489b77fd:
    lVar7 = param_1[1];
    lVar5 = FUN_14475b26a();
    if (*(ulonglong *)(lVar5 + 8) == 0) {
      bVar12 = lVar7 != 0;
      if (lVar7 != lVar5 && bVar12) {
        do {
          lVar7 = *(longlong *)(lVar7 + 0x30);
          bVar12 = lVar7 != 0;
          if (lVar7 == lVar5) break;
        } while (lVar7 != 0);
      }
      if (!bVar12) goto LAB_1489b7861;
LAB_1489b7815:
      lVar7 = (**(code **)(*param_1 + 0x1f0))(param_1);
      if (lVar7 == 0) {
        cVar4 = (**(code **)(*param_1 + 0x1e0))(param_1);
        if (cVar4 != '\0') {
          uVar6 = (**(code **)(*param_1 + 0x240))(param_1,param_2);
          FUN_140c3a2ac(param_3);
          *param_3 = '\x05';
          *(undefined8 *)(param_3 + 8) = uVar6;
          goto LAB_1489b789a;
        }
        cVar4 = (**(code **)(*param_1 + 0x1e8))(param_1);
        if (cVar4 != '\0') {
          uVar6 = (**(code **)(*param_1 + 0x220))(param_1,param_2);
          FUN_140c3a2ac(param_3);
          *param_3 = '\x04';
          *(undefined8 *)(param_3 + 8) = uVar6;
          goto LAB_1489b789a;
        }
        goto LAB_1489b7a66;
      }
      lVar5 = *param_1;
      plVar9 = param_1;
      goto LAB_1489b779f;
    }
    if ((*(ulonglong *)(lVar7 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0) goto LAB_1489b7815;
LAB_1489b7861:
    lVar7 = param_1[1];
    lVar5 = FUN_144a5ab96();
    if (*(ulonglong *)(lVar5 + 8) == 0) {
      bVar12 = lVar7 != 0;
      if (lVar7 != lVar5 && bVar12) {
        do {
          lVar7 = *(longlong *)(lVar7 + 0x30);
          bVar12 = lVar7 != 0;
          if (lVar7 == lVar5) break;
        } while (lVar7 != 0);
      }
      if (bVar12) {
LAB_1489b787d:
        bVar1 = *(byte *)((longlong)param_1 + 0x73);
        bVar2 = *(byte *)((longlong)param_2 + (ulonglong)*(byte *)((longlong)param_1 + 0x71));
        FUN_140c3a2ac(param_3);
        *param_3 = '\t';
        param_3[8] = (bVar2 & bVar1) != 0;
LAB_1489b789a:
        bVar12 = true;
        goto LAB_1489b7a6d;
      }
    }
    else if ((*(ulonglong *)(lVar7 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0) goto LAB_1489b787d;
    lVar7 = param_1[1];
    lVar5 = FUN_144a49f24();
    if (*(ulonglong *)(lVar5 + 8) == 0) {
      bVar12 = lVar7 != 0;
      if (lVar7 != lVar5 && bVar12) {
        do {
          lVar7 = *(longlong *)(lVar7 + 0x30);
          bVar12 = lVar7 != 0;
          if (lVar7 == lVar5) break;
        } while (lVar7 != 0);
      }
      if (!bVar12) goto LAB_1489b79e8;
LAB_1489b792b:
      local_68 = (longlong *)0x0;
      uVar3 = *(uint *)(param_2 + 1);
      _Src = (void *)*param_2;
      uStack_60 = CONCAT44(uStack_60._4_4_,uVar3);
      if ((longlong)(int)uVar3 != 0) {
        FUN_1446dd670(&local_68,uVar3,0);
        memcpy(local_68,_Src,(longlong)(int)uVar3 * 2);
        plVar9 = local_68;
        goto joined_r0x0001489b7974;
      }
      uStack_60 = (ulonglong)uVar3;
      goto LAB_1489b7a48;
    }
    if ((*(ulonglong *)(lVar7 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0) goto LAB_1489b792b;
LAB_1489b79e8:
    lVar7 = param_1[1];
    lVar5 = FUN_144a4a07e();
    if (*(ulonglong *)(lVar5 + 8) == 0) {
      bVar12 = lVar7 != 0;
      if (lVar7 != lVar5 && bVar12) {
        do {
          lVar7 = *(longlong *)(lVar7 + 0x30);
          bVar12 = lVar7 != 0;
          if (lVar7 == lVar5) break;
        } while (lVar7 != 0);
      }
      if (bVar12) {
LAB_1489b7a08:
        plVar9 = (longlong *)*param_2;
        local_68 = plVar9;
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        uStack_60 = CONCAT44(uStack_60._4_4_,*(undefined4 *)(param_2 + 1));
        puVar8 = (undefined8 *)FUN_1447a1f4a();
        if (*(int *)(puVar8 + 1) == 0) {
          puVar11 = &DAT_149dfb77a;
        }
        else {
          puVar11 = (undefined2 *)*puVar8;
        }
        FUN_140c3a228(param_3,puVar11);
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
        goto LAB_1489b7a66;
      }
    }
    else if ((*(ulonglong *)(lVar7 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0) goto LAB_1489b7a08;
    lVar7 = param_1[1];
    lVar5 = FUN_1446e6bbc();
    if (*(ulonglong *)(lVar5 + 8) != 0) {
      if ((*(ulonglong *)(lVar7 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0) goto LAB_1489b7c4c;
LAB_1489b7b56:
      lVar7 = param_1[1];
      lVar5 = FUN_1446dcc8c();
      if (*(ulonglong *)(lVar5 + 8) == 0) {
        bVar12 = lVar7 != 0;
        if (lVar7 != lVar5 && bVar12) {
          do {
            lVar7 = *(longlong *)(lVar7 + 0x30);
            bVar12 = lVar7 != 0;
            if (lVar7 == lVar5) break;
          } while (lVar7 != 0);
        }
        if (bVar12) goto LAB_1489b7b76;
        goto LAB_1489b7a66;
      }
      if ((*(ulonglong *)(lVar7 + 0x18) & *(ulonglong *)(lVar5 + 8)) == 0) goto LAB_1489b7a66;
LAB_1489b7b76:
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb8e130) && (FUN_144b3d300(&DAT_14cb8e130), DAT_14cb8e130 == -1))
      {
        FUN_1446f470e(&DAT_14cb8e128,L"DateTime",1);
        _Init_thread_footer(&DAT_14cb8e130);
      }
      if (*(longlong *)(param_1[0xe] + 0x18) != DAT_14cb8e128) {
        plVar9 = *(longlong **)(param_1[0xe] + 0xb8);
        lVar7 = FUN_145c518a2();
        if ((plVar9 == (longlong *)0x0) || (param_1[0xe] == lVar7)) goto LAB_1489b7c4c;
        (**(code **)(*plVar9 + 8))(plVar9,&local_68);
        if (-1 < uStack_60._5_1_) goto LAB_1489b7c4c;
        local_68 = (longlong *)0x0;
        uStack_60 = 0;
        local_78 = 0;
        local_88 = 0;
        uStack_80 = uStack_80 & 0xffffffff00000000;
        (**(code **)(*plVar9 + 0x70))(plVar9,&local_68,param_2,0);
        goto LAB_1489b77bb;
      }
      if (param_2 == (undefined8 *)0x0) {
        FUN_140c3a228(param_3,&DAT_149dfb77a);
        goto LAB_1489b7a66;
      }
      FUN_14680f2de(param_2,&local_68);
      plVar9 = local_68;
      plVar10 = (longlong *)&DAT_149dfb77a;
      if ((int)uStack_60 != 0) {
        plVar10 = local_68;
      }
      FUN_140c3a228(param_3,plVar10);
      if (plVar9 == (longlong *)0x0) goto LAB_1489b7a66;
      goto LAB_1489b7a61;
    }
    bVar12 = lVar7 != 0;
    if (lVar7 != lVar5 && bVar12) {
      do {
        lVar7 = *(longlong *)(lVar7 + 0x30);
        bVar12 = lVar7 != 0;
        if (lVar7 == lVar5) break;
      } while (lVar7 != 0);
    }
    if (!bVar12) goto LAB_1489b7b56;
LAB_1489b7c4c:
    FUN_1489b7d56(param_1,param_2,param_3);
  }
LAB_1489b7a66:
  bVar12 = true;
  if (*param_3 == '\0') {
    local_68 = (longlong *)0x0;
    uStack_60 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_70 = 0;
    local_78 = local_78 & 0xffffffff00000000;
    (**(code **)(*param_1 + 0xf0))(param_1,&local_68,param_2,0);
    plVar9 = local_68;
    if ((int)uStack_60 == 0) {
      plVar9 = (longlong *)&DAT_149dfb77a;
    }
    FUN_140c3a228(param_3,plVar9);
    if (local_68 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    bVar12 = *param_3 != '\0';
  }
LAB_1489b7a6d:
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return bVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489b7d56 FUN_1489b7d56 body=375 status=ok
// SIG undefined FUN_1489b7d56(void)

void FUN_1489b7d56(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  longlong local_70 [2];
  undefined8 *local_60;
  longlong *local_58;
  undefined1 local_50 [8];
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = 0;
  uStack_90 = 0;
  local_80 = 0;
  local_88 = 0;
  FUN_146f02ca8(local_50,param_1,param_2,0);
  puVar4 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  *(undefined4 *)((longlong)puVar4 + 0x2c) = 0x80;
  *(undefined4 *)(puVar4 + 6) = 0xffffffff;
  local_60 = puVar4;
  local_58 = (longlong *)FUN_14001cc68(0x18,0x10);
  local_58[1] = (longlong)&DAT_100000001;
  *local_58 = (longlong)&PTR_FUN_149e49100;
  local_58[2] = (longlong)puVar4;
  FUN_1468c80a4(param_1,local_70);
  FUN_146839350(puVar4,local_70,local_50);
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1489b75f6(param_3,&local_60);
  plVar3 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_58)(local_58);
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
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489b7ece FUN_1489b7ece body=460 status=ok
// SIG undefined FUN_1489b7ece(void)

void FUN_1489b7ece(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong *plStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = 0;
  plStack_a0 = (longlong *)0x0;
  iVar4 = *(int *)((longlong)param_3 + 0xc);
  if (((iVar4 == -1) || (*(char *)((longlong)param_3 + 0x11) != '\x01')) ||
     ((*(byte *)(param_3 + 0xd) & 1) == 0)) {
    (**(code **)(*param_1 + 0x68))(param_1,param_2,&local_a8);
    iVar4 = *(int *)((longlong)param_3 + 0xc);
  }
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 1;
  local_60 = 0;
  local_58 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_54 = 0xffffffff00000080;
  local_4c = 0;
  local_40 = 0;
  local_38 = 0;
  if (iVar4 == -1) {
    if (local_a8 != 0) {
      iVar4 = *(int *)(local_a8 + 0x28) + -1;
      if (*(int *)(local_a8 + 0x28) == 0) {
        iVar4 = 0;
      }
      FUN_1402980a2(&local_98,*(undefined8 *)(local_a8 + 0x20),iVar4);
    }
  }
  else if (&local_98 != param_3) {
    local_98 = *param_3;
    *param_3 = 0;
    uStack_90 = CONCAT44(iVar4,*(undefined4 *)(param_3 + 1));
    param_3[1] = 0;
  }
  if (*(char *)((longlong)param_3 + 0x11) == '\x01') {
    puVar5 = param_3 + 2;
  }
  else {
    if (local_a8 == 0) goto LAB_1489b7fb0;
    puVar5 = (undefined8 *)(local_a8 + 0x30);
  }
  local_88 = *(undefined1 *)puVar5;
LAB_1489b7fb0:
  if (*(char *)(param_3 + 0xd) == '\x01') {
    FUN_140dfadc4(&local_80,param_3 + 3);
  }
  else if (local_a8 != 0) {
    FUN_140c39ec6(&local_80,local_a8 + 0x38);
  }
  (**(code **)(*param_1 + 0x10))(param_1,param_2,&local_98,param_4);
  FUN_14116327c(&local_98);
  plVar3 = plStack_a0;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_a0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_a0)(plStack_a0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489b809b FUN_1489b809b body=201 status=ok
// SIG undefined FUN_1489b809b(void)

void FUN_1489b809b(longlong param_1,undefined1 param_2,longlong *param_3,longlong param_4,
                  longlong param_5,longlong *param_6)

{
  longlong *plVar1;
  undefined1 auStack_98 [47];
  undefined1 local_69;
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40 [16];
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 == param_4) {
    (**(code **)(*param_3 + 0x130))(param_3,param_5);
    if (param_5 != 0) {
      FUN_1400020a8(param_5);
    }
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_68[0] = param_2;
    FUN_144a5dc74(local_40);
    local_30 = 0x13;
    if (((int)param_6[1] != 0) && (plVar1 = (longlong *)*param_6, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x60))(plVar1,param_1,local_68,&local_69);
    }
    FUN_145c8db80(local_68);
  }
  FUN_1449db362(param_6);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489b8166 FUN_1489b8166 body=554 status=ok
// SIG undefined FUN_1489b8166(void)

undefined4
FUN_1489b8166(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 *local_70;
  undefined4 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  uStack_50 = 0;
  iVar1 = (int)param_2[1];
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (iVar1 != 0) {
    FUN_1459b6c3c(&local_58);
    if ((longlong)(int)param_2[1] != 0) {
      puVar7 = (undefined8 *)*param_2;
      puVar5 = puVar7 + (longlong)(int)param_2[1] * 0xc;
      do {
        uVar2 = uStack_50;
        lVar8 = (longlong)(int)uStack_50;
        uVar4 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
        if (uStack_50._4_4_ < uVar4) {
          FUN_1413eac7e(&local_58,uVar2 & 0xffffffff);
        }
        *(undefined8 *)(local_58 + lVar8 * 0x10) = *puVar7;
        lVar6 = puVar7[1];
        *(longlong *)(local_58 + 8 + lVar8 * 0x10) = lVar6;
        if (lVar6 != 0) {
          LOCK();
          *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
          UNLOCK();
        }
        puVar7 = puVar7 + 0xc;
      } while (puVar7 != puVar5);
    }
  }
  local_78 = param_5;
  uVar3 = (**(code **)(*param_1 + 0x120))(param_1,&local_58,param_3,param_4);
  if ((char)uVar3 != '\0') {
    puVar5 = (undefined8 *)FUN_14001cc68(8,0x10);
    *puVar5 = 0;
    local_70 = (undefined8 *)0x0;
    local_68 = 0;
    FUN_1446efa72(&local_70,0,4,0x10);
    puVar7 = local_70;
    local_68 = 4;
    *local_70 = &PTR_LAB_14b4382a0;
    local_70[1] = param_1;
    local_70[2] = param_3;
    local_70[3] = puVar5;
    local_70[4] = 0;
    *(undefined4 *)(local_70 + 5) = 0;
    FUN_1489bc20c(local_70 + 4,param_6);
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar7[6] = lVar6;
    *puVar7 = &PTR_FUN_14b438230;
    puVar7[7] = FUN_1489b809b;
    (**(code **)(*param_1 + 0x128))(param_1,&local_60,&local_70);
    *puVar5 = local_60;
    FUN_1449db362(&local_70);
  }
  FUN_14127b1cd(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1489b8392 FUN_1489b8392 body=325 status=ok
// SIG undefined FUN_1489b8392(void)

void FUN_1489b8392(longlong param_1,longlong param_2,undefined8 *param_3,undefined4 param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined2 *puVar5;
  uint uVar6;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_44;
  longlong local_40;
  longlong *local_38;
  undefined1 *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar6 = (uint)param_2 & 0xffff;
    lVar3 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x48);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar6) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar4 != -1) {
      lVar3 = *(longlong *)(param_1 + 8);
      do {
        lVar1 = lVar3 + (longlong)iVar4 * 0x38;
        if (*(longlong *)(lVar3 + (longlong)iVar4 * 0x38) == param_2) {
          if ((lVar1 != 0) && (lVar1 + 8 != 0)) {
            if (*(int *)(param_3 + 1) == 0) {
              puVar5 = &DAT_149dfb77a;
            }
            else {
              puVar5 = (undefined2 *)*param_3;
            }
            FUN_140c3a228(lVar1 + 8,puVar5);
            *(undefined4 *)(lVar1 + 0x28) = param_4;
            goto LAB_1489b8470;
          }
          break;
        }
        iVar4 = *(int *)(lVar1 + 0x30);
      } while (iVar4 != -1);
    }
  }
  local_68[0] = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  if (*(int *)(param_3 + 1) == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_3;
  }
  FUN_140c3a228(local_68,puVar5);
  local_44 = 0xffffffff;
  local_38 = &local_40;
  local_48 = param_4;
  local_30 = local_68;
  FUN_1489bc432((longlong *)(param_1 + 8),local_24,&local_38,0);
  FUN_140c3a2ac(local_68);
LAB_1489b8470:
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489b84d8 FUN_1489b84d8 body=306 status=ok
// SIG undefined FUN_1489b84d8(void)

void FUN_1489b84d8(longlong param_1,longlong param_2,undefined1 *param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined1 uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_98 [40];
  undefined1 local_70 [8];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  longlong local_48;
  longlong *local_40;
  undefined1 *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar3 = (uint)((ulonglong)param_2 >> 0x10);
    uVar6 = (uint)param_2 & 0xffff;
    lVar4 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x48);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar6) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar5 != -1) {
      lVar4 = *(longlong *)(param_1 + 8);
      do {
        lVar1 = lVar4 + (longlong)iVar5 * 0x38;
        if (*(longlong *)(lVar4 + (longlong)iVar5 * 0x38) == param_2) {
          if ((lVar1 != 0) && (lVar1 != -8)) {
            uVar2 = *param_3;
            FUN_140c3a2ac();
            *(undefined1 *)(lVar1 + 8) = 9;
            *(undefined1 *)(lVar1 + 0x10) = uVar2;
            *(undefined4 *)(lVar1 + 0x28) = param_4;
            goto LAB_1489b85eb;
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x30);
      } while (iVar5 != -1);
    }
  }
  local_70[0] = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uVar2 = *param_3;
  FUN_140c3a2ac(local_70);
  local_70[0] = 9;
  local_68 = CONCAT71(local_68._1_7_,uVar2);
  local_4c = 0xffffffff;
  local_40 = &local_48;
  local_50 = param_4;
  local_38 = local_70;
  FUN_1489bc432((longlong *)(param_1 + 8),local_2c,&local_40,0);
  FUN_140c3a2ac(local_70);
LAB_1489b85eb:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489b860c FUN_1489b860c body=164 status=ok
// SIG undefined FUN_1489b860c(void)

undefined8 FUN_1489b860c(longlong param_1,longlong param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  char *pcVar5;
  
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar1 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    lVar4 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x48);
    }
    iVar2 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) +
                             ((int)param_2 << 0x10 | (uint)(ushort)param_2) +
                             (uVar1 << 0x13 | uVar1) + (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar2 != -1) {
      do {
        uVar3 = *(longlong *)(param_1 + 8) + (longlong)iVar2 * 0x38;
        if (*(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar2 * 0x38) == param_2)
        goto LAB_1489b8616;
        iVar2 = *(int *)(uVar3 + 0x30);
      } while (iVar2 != -1);
    }
  }
  uVar3 = 0;
LAB_1489b8616:
  pcVar5 = (char *)(uVar3 + 8);
  if (uVar3 == 0) {
    pcVar5 = (char *)0x0;
  }
  if (pcVar5 != (char *)0x0) {
    uVar3 = 0;
    if (*pcVar5 == '\x01') {
      uVar3 = (ulonglong)*(uint *)(pcVar5 + 8);
    }
    *param_3 = (int)uVar3;
  }
  return CONCAT71((int7)(uVar3 >> 8),pcVar5 != (char *)0x0);
}



// FUNCTION 1489b86b0 FUN_1489b86b0 body=172 status=ok
// SIG undefined FUN_1489b86b0(void)

bool FUN_1489b86b0(longlong param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar5 = (uint)param_2 & 0xffff;
    lVar3 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x48);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar5) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 8) + (longlong)iVar2 * 0x38;
        if (*(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar2 * 0x38) == param_2)
        goto LAB_1489b86bf;
        iVar2 = *(int *)(lVar3 + 0x30);
      } while (iVar2 != -1);
    }
  }
  lVar3 = 0;
LAB_1489b86bf:
  lVar4 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  if (lVar4 != 0) {
    FUN_140b74118(lVar4,param_3);
  }
  return lVar4 != 0;
}



// FUNCTION 1489b875c FUN_1489b875c body=174 status=ok
// SIG undefined FUN_1489b875c(void)

undefined8 FUN_1489b875c(longlong param_1,longlong param_2,char *param_3)

{
  uint uVar1;
  char *pcVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar1 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    lVar3 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x48);
    }
    iVar5 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) +
                             ((int)param_2 << 0x10 | (uint)(ushort)param_2) +
                             (uVar1 << 0x13 | uVar1) + (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 8) + (longlong)iVar5 * 0x38;
        if (*(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar5 * 0x38) == param_2)
        goto LAB_1489b8766;
        iVar5 = *(int *)(lVar3 + 0x30);
      } while (iVar5 != -1);
    }
  }
  lVar3 = 0;
LAB_1489b8766:
  pcVar2 = (char *)(lVar3 + 8);
  if (lVar3 == 0) {
    pcVar2 = (char *)0x0;
  }
  if (pcVar2 != (char *)0x0) {
    if (*pcVar2 == '\t') {
      cVar4 = pcVar2[8];
    }
    else {
      cVar4 = '\0';
    }
    *param_3 = cVar4;
  }
  return CONCAT71((int7)((ulonglong)pcVar2 >> 8),pcVar2 != (char *)0x0);
}



// FUNCTION 1489b880a FUN_1489b880a body=182 status=ok
// SIG undefined FUN_1489b880a(void)

void FUN_1489b880a(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char *pcVar1;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined1 *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  pcVar1 = (char *)FUN_145c052f2();
  if ((pcVar1 == (char *)0x0) || (*pcVar1 != '\x01')) {
    local_60[0] = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    FUN_140c3a2ac(local_60);
    local_60[0] = 1;
    local_58 = CONCAT44(local_58._4_4_,param_3);
    local_40 = param_2;
    local_38 = local_60;
    FUN_140dfa58e(param_1 + 8,local_2c,&local_40,0);
    FUN_140c3a2ac(local_60);
  }
  else {
    FUN_140c3a2ac(pcVar1);
    *pcVar1 = '\x01';
    *(undefined4 *)(pcVar1 + 8) = param_3;
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489b88c2 FUN_1489b88c2 body=176 status=ok
// SIG undefined FUN_1489b88c2(void)

void FUN_1489b88c2(longlong param_1,undefined8 param_2,float param_3)

{
  char *pcVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  pcVar1 = (char *)FUN_145c052f2();
  if ((pcVar1 == (char *)0x0) || (*pcVar1 != '\a')) {
    local_68[0] = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    FUN_140c3a2ac(local_68);
    local_68[0] = 7;
    local_60 = CONCAT44(local_60._4_4_,param_3);
    local_48 = param_2;
    local_40 = local_68;
    FUN_140dfa58e(param_1 + 8,local_34,&local_48,0);
    FUN_140c3a2ac(local_68);
  }
  else {
    *(float *)(pcVar1 + 8) = param_3 + *(float *)(pcVar1 + 8);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489b8974 FUN_1489b8974 body=166 status=ok
// SIG undefined FUN_1489b8974(void)

void FUN_1489b8974(longlong param_1,undefined8 param_2,int param_3)

{
  char *pcVar1;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined1 *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  pcVar1 = (char *)FUN_145c052f2();
  if ((pcVar1 == (char *)0x0) || (*pcVar1 != '\x01')) {
    local_60[0] = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    FUN_140c3a2ac(local_60);
    local_60[0] = 1;
    local_58 = CONCAT44(local_58._4_4_,param_3);
    local_40 = param_2;
    local_38 = local_60;
    FUN_140dfa58e(param_1 + 8,local_2c,&local_40,0);
    FUN_140c3a2ac(local_60);
  }
  else {
    *(int *)(pcVar1 + 8) = *(int *)(pcVar1 + 8) + param_3;
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489b8a1c FUN_1489b8a1c body=187 status=ok
// SIG undefined FUN_1489b8a1c(void)

void FUN_1489b8a1c(longlong param_1,undefined8 param_2,float param_3)

{
  char *pcVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  pcVar1 = (char *)FUN_145c052f2();
  if ((pcVar1 == (char *)0x0) || (*pcVar1 != '\a')) {
    local_68[0] = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    FUN_140c3a2ac(local_68);
    local_68[0] = 7;
    local_60 = CONCAT44(local_60._4_4_,param_3) ^ 0x80000000;
    local_48 = param_2;
    local_40 = local_68;
    FUN_140dfa58e(param_1 + 8,local_34,&local_48,0);
    FUN_140c3a2ac(local_68);
  }
  else {
    *(float *)(pcVar1 + 8) = *(float *)(pcVar1 + 8) - param_3;
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489b8ad8 FUN_1489b8ad8 body=168 status=ok
// SIG undefined FUN_1489b8ad8(void)

void FUN_1489b8ad8(longlong param_1,undefined8 param_2,int param_3)

{
  char *pcVar1;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined1 *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  pcVar1 = (char *)FUN_145c052f2();
  if ((pcVar1 == (char *)0x0) || (*pcVar1 != '\x01')) {
    local_60[0] = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    FUN_140c3a2ac(local_60);
    local_60[0] = 1;
    local_58 = CONCAT44(local_58._4_4_,-param_3);
    local_40 = param_2;
    local_38 = local_60;
    FUN_140dfa58e(param_1 + 8,local_2c,&local_40,0);
    FUN_140c3a2ac(local_60);
  }
  else {
    *(int *)(pcVar1 + 8) = *(int *)(pcVar1 + 8) - param_3;
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489b8b81 FUN_1489b8b81 body=276 status=ok
// SIG undefined FUN_1489b8b81(void)

longlong * FUN_1489b8b81(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  
  if (*param_2 != 0) {
    iVar6 = 0;
    do {
      (**(code **)(*(longlong *)*param_2 + 0x110))((longlong *)*param_2,param_1,iVar6);
      if ((longlong *)*param_1 != (longlong *)0x0) {
        cVar4 = (**(code **)(*(longlong *)*param_1 + 0x28))();
        if (cVar4 != '\0') {
          iVar5 = (**(code **)(*(longlong *)*param_2 + 0x130))((longlong *)*param_2,*param_1);
          if (iVar5 == 2) goto LAB_1489b8c62;
        }
      }
      plVar3 = (longlong *)param_1[1];
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
      iVar6 = iVar6 + 1;
    } while (iVar6 != 4);
    iVar6 = 0;
    do {
      (**(code **)(*(longlong *)*param_2 + 0x110))((longlong *)*param_2,param_1,iVar6);
      if ((longlong *)*param_1 != (longlong *)0x0) {
        cVar4 = (**(code **)(*(longlong *)*param_1 + 0x28))();
        if (cVar4 != '\0') goto LAB_1489b8c62;
      }
      plVar3 = (longlong *)param_1[1];
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
      iVar6 = iVar6 + 1;
    } while (iVar6 != 4);
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_1489b8c62:
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
  return param_1;
}



// FUNCTION 1489b8c95 FUN_1489b8c95 body=126 status=ok
// SIG undefined FUN_1489b8c95(void)

undefined8 FUN_1489b8c95(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar4 = (**(code **)(*param_1 + 0x20))();
  if (lVar4 != 0) {
    puVar2 = *(undefined8 **)(lVar4 + 8);
    if ((puVar2 != (undefined8 *)0x0) &&
       (cVar3 = (**(code **)*puVar2)(puVar2,param_3), cVar3 != '\0')) {
      return 1;
    }
    iVar1 = *(int *)(lVar4 + 0x140);
    if ((longlong)iVar1 != 0) {
      lVar4 = *(longlong *)(lVar4 + 0x138);
      uVar5 = 0;
      do {
        cVar3 = (**(code **)*param_3)(param_3,*(undefined8 *)(lVar4 + uVar5));
        if (cVar3 != '\0') {
          if ((int)(~uVar5 >> 4) == 0) {
            return 0;
          }
          return 1;
        }
        uVar5 = uVar5 + 0x10;
      } while ((longlong)iVar1 * 0x10 != uVar5);
    }
  }
  return 0;
}



// FUNCTION 1489b8d13 FUN_1489b8d13 body=129 status=ok
// SIG undefined FUN_1489b8d13(void)

undefined8 FUN_1489b8d13(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x10))(param_1,local_20);
  cVar1 = FUN_1489b8d96(local_20);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x10))(param_1,local_20);
    plVar2 = (longlong *)FUN_1401e3228(local_20);
    if (plVar2 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar2 + 0x138))(plVar2,param_1);
      goto LAB_1489b8d77;
    }
  }
  uVar3 = 0;
LAB_1489b8d77:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489b8d96 FUN_1489b8d96 body=164 status=ok
// SIG undefined FUN_1489b8d96(void)

undefined8 FUN_1489b8d96(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = FUN_144a52528();
  FUN_1446ddc76(&local_28,"OnlineSubsystem",1);
  cVar1 = FUN_14011feae(uVar2,local_28);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    FUN_1446ddc76(&local_30,"OnlineSubsystem",1);
    uVar2 = FUN_144a52528();
    uVar2 = FUN_1401e3324(uVar2,local_30);
    uVar2 = FUN_1489b9dde(uVar2,*param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489b8e3b FUN_1489b8e3b body=123 status=ok
// SIG undefined FUN_1489b8e3b(void)

int FUN_1489b8e3b(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 15000;
  FUN_1446f470e(&local_38,L"BEACONPORT",1);
  cVar1 = FUN_145e34a52(param_1,local_38,&local_2c);
  iVar2 = local_2c;
  if (local_2c < 1) {
    iVar2 = 15000;
  }
  if (cVar1 == '\0') {
    iVar2 = 15000;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489b8ec6 FUN_1489b8ec6 body=191 status=ok
// SIG undefined FUN_1489b8ec6(void)

void FUN_1489b8ec6(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  code *local_28;
  undefined4 local_20;
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = FUN_1489b8f86(DAT_14c951640);
  *(longlong *)(param_1 + 0xa0) = lVar2;
  if (lVar2 != 0) {
    FUN_143e6ae2a(lVar2);
    local_28 = FUN_14124fa2e;
    local_20 = 0;
    FUN_1489b9036(*(longlong *)(param_1 + 0xa0) + 0x48,local_18,param_1);
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0xa0) + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    FUN_1447f71cc(lVar2,0x40000000);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489b8f86 FUN_1489b8f86 body=175 status=ok
// SIG undefined FUN_1489b8f86(void)

undefined8 FUN_1489b8f86(undefined8 param_1)

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
  local_b8 = FUN_145b128a4();
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



// FUNCTION 1489b9036 FUN_1489b9036 body=237 status=ok
// SIG undefined FUN_1489b9036(void)

undefined8
FUN_1489b9036(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
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
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
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
  local_48[2] = lVar4;
  *local_48 = &PTR_FUN_14b4383f0;
  local_48[3] = param_3;
  local_48[4] = uVar2;
  *(undefined4 *)(local_48 + 5) = uVar1;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489b9124 FUN_1489b9124 body=96 status=ok
// SIG undefined FUN_1489b9124(void)

undefined8 FUN_1489b9124(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xa0);
  if (lVar1 == 0) {
    FUN_1489b8ec6();
    lVar1 = *(longlong *)(param_1 + 0xa0);
    if (lVar1 == 0) {
      return 0;
    }
  }
  if ((longlong)*(int *)(lVar1 + 0x30) == 0) {
    return 0;
  }
  lVar2 = 0;
  do {
    if (*(longlong *)(*(longlong *)(lVar1 + 0x28) + lVar2) == param_2) {
      return *(undefined8 *)(*(longlong *)(lVar1 + 0x28) + 8 + lVar2);
    }
    lVar2 = lVar2 + 0x10;
  } while ((longlong)*(int *)(lVar1 + 0x30) * 0x10 != lVar2);
  return 0;
}



// FUNCTION 1489b9184 FUN_1489b9184 body=74 status=ok
// SIG undefined FUN_1489b9184(void)

void FUN_1489b9184(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xa0);
  if (lVar1 == 0) {
    FUN_1489b8ec6(param_1);
    lVar1 = *(longlong *)(param_1 + 0xa0);
    if (lVar1 == 0) {
      return;
    }
  }
  FUN_1489b72a0(lVar1,param_2,param_3);
  return;
}



// FUNCTION 1489b91d6 FUN_1489b91d6 body=307 status=ok
// SIG undefined FUN_1489b91d6(void)

undefined8 FUN_1489b91d6(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar5 = (**(code **)(*param_1 + 0x120))();
  if (cVar5 == '\0') {
    (**(code **)(*param_1 + 0x80))(param_1,&local_40);
    bVar4 = true;
    if (local_40 != (longlong *)0x0) {
      iVar7 = 0;
      do {
        (**(code **)(*local_40 + 0x110))(local_40,&local_50,iVar7);
        if ((local_50 != 0) && (cVar5 = (**(code **)*param_2)(param_2), cVar5 != '\0')) {
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
              }
            }
          }
          bVar4 = false;
          break;
        }
        plVar3 = local_48;
        if (local_48 != (longlong *)0x0) {
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
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 != 4);
    }
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_38 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
    uVar6 = 1;
    if (!bVar4) goto LAB_1489b9204;
  }
  uVar6 = 0;
LAB_1489b9204:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1489b930a FUN_1489b930a body=322 status=ok
// SIG undefined FUN_1489b930a(void)

undefined8 FUN_1489b930a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  cVar1 = FUN_140988638(&local_20,L"FRIEND",1);
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  cVar1 = FUN_140988638(&local_20,L"IDENTITY",1);
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  cVar1 = FUN_140988638(&local_20,L"SESSION",1);
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  cVar1 = FUN_140988638(&local_20,L"PRESENCE",1);
  if (cVar1 == '\0') {
    cVar1 = FUN_140988638(&local_20,L"PURCHASE",1);
    if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
    cVar1 = FUN_140988638(&local_20,L"STORE",1);
    if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
    if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 1489b98e4 FUN_1489b98e4 body=50 status=ok
// SIG undefined FUN_1489b98e4(void)

longlong * FUN_1489b98e4(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *param_2 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_2 + 1) = (int)plVar2[1];
  return param_2;
}



// FUNCTION 1489b9916 FUN_1489b9916 body=163 status=ok
// SIG undefined FUN_1489b9916(void)

int FUN_1489b9916(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  
  lVar6 = param_1[1];
  if ((longlong)(int)lVar6 != 0) {
    lVar3 = *param_1;
    uVar4 = *param_2;
    uVar5 = param_2[2];
    iVar1 = *(int *)(param_2 + 1);
    iVar2 = *(int *)(param_2 + 3);
    iVar9 = 0;
    piVar10 = (int *)(lVar3 + 0x18);
    do {
      if ((piVar10[-4] == iVar1) &&
         (((iVar1 == 0 ||
           (iVar7 = FUN_144a54874(*(undefined8 *)(piVar10 + -6),uVar4,(longlong)iVar1), iVar7 == 0))
          && (*piVar10 == iVar2)))) {
        if (iVar2 == 0) {
          return iVar9;
        }
        iVar7 = FUN_144a54874(*(undefined8 *)(piVar10 + -2),uVar5,(longlong)iVar2);
        if (iVar7 == 0) {
          return iVar9;
        }
      }
      iVar9 = iVar9 + 1;
      piVar8 = piVar10 + 2;
      piVar10 = piVar10 + 8;
    } while (piVar8 != (int *)((longlong)(int)lVar6 * 0x20 + lVar3));
  }
  return -1;
}



// FUNCTION 1489b99ba FUN_1489b99ba body=423 status=ok
// SIG undefined FUN_1489b99ba(void)

void FUN_1489b99ba(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  ushort uVar7;
  ulonglong uVar8;
  ushort uVar9;
  ulonglong uVar10;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar6 = (int)param_2[1];
  uVar2 = local_68;
  if (iVar6 == DAT_14c872cf0) {
    if (1 < iVar6) {
      lVar5 = 0;
      while( true ) {
        uVar7 = *(ushort *)(*param_2 + lVar5);
        uVar8 = (ulonglong)uVar7;
        uVar9 = *(ushort *)(DAT_14c872ce8 + lVar5);
        if (uVar7 != uVar9) break;
        if (uVar7 == 0) goto LAB_1489b9a4a;
LAB_1489b9a15:
        lVar5 = lVar5 + 2;
      }
      if ((uVar9 | uVar7) < 0x80) {
        uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
        uVar10 = (ulonglong)uVar9;
        uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
        if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar10]) goto LAB_1489b9a15;
      }
      if (uVar7 != uVar9) goto LAB_1489b9ab3;
    }
  }
  else if (DAT_14c872cf0 + iVar6 != 1) goto LAB_1489b9ab3;
LAB_1489b9a4a:
  plVar1 = param_3 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_50 = plVar1;
  if ((int)param_3[5] == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar6 = (int)param_3[5];
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  uVar2 = local_68;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
  local_80 = param_3;
  if ((local_68._4_4_ != iVar6) || (uStack_50 != plVar1)) {
    iVar4 = local_68._4_4_;
    local_68 = uVar2;
    do {
      cVar3 = FUN_144a791f8((longlong)iVar4 * 0x18 + *local_80,L"OnlineSubsystem",0xf,1);
      if (cVar3 != '\0') {
        (**(code **)(*param_1 + 0x1f0))(param_1,param_3);
        uVar2 = local_68;
        break;
      }
      local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~uStack_74);
      FUN_1449c0562(&local_78);
      iVar4 = local_68._4_4_;
      uVar2 = local_68;
    } while (local_80 != param_3 ||
             ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || local_68._4_4_ != iVar6));
  }
LAB_1489b9ab3:
  local_68 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489b9b62 FUN_1489b9b62 body=243 status=ok
// SIG undefined FUN_1489b9b62(void)

/* WARNING: Removing unreachable block (ram,0x0001489b9c15) */
/* WARNING: Removing unreachable block (ram,0x0001489b9c24) */

void FUN_1489b9b62(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 in_stack_00000028;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = in_stack_00000028;
  FUN_1489bb13c(&local_40);
  lVar3 = (longlong)(int)param_1[1];
  uVar2 = (int)param_1[1] + 1;
  *(uint *)(param_1 + 1) = uVar2;
  if (*(uint *)((longlong)param_1 + 0xc) < uVar2) {
    FUN_1489bb1e6(param_1);
  }
  lVar1 = *param_1;
  *(undefined8 *)(lVar1 + lVar3 * 0x28) = 0;
  *(undefined8 *)(lVar1 + lVar3 * 0x28) = local_40;
  *(undefined4 *)(lVar1 + 8 + lVar3 * 0x28) = (undefined4)local_38;
  *(undefined4 *)(lVar1 + 0xc + lVar3 * 0x28) = local_38._4_4_;
  *(undefined8 *)(lVar1 + 0x10 + lVar3 * 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x10 + lVar3 * 0x28) = local_30;
  *(undefined4 *)(lVar1 + 0x18 + lVar3 * 0x28) = (undefined4)local_28;
  *(undefined4 *)(lVar1 + 0x1c + lVar3 * 0x28) = local_28._4_4_;
  *(undefined4 *)(lVar1 + 0x20 + lVar3 * 0x28) = local_20;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489b9c56 FUN_1489b9c56 body=122 status=ok
// SIG undefined FUN_1489b9c56(void)

void FUN_1489b9c56(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 4);
  if (*(int *)((longlong)param_1 + 0x1c) != -1) {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = 0;
    param_1[3] = -0x100000000;
  }
  FUN_1489bb27a(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1489b9dde FUN_1489b9dde body=205 status=ok
// SIG undefined FUN_1489b9dde(void)

ulonglong FUN_1489b9dde(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  longlong local_50;
  longlong *local_48;
  undefined1 local_40 [8];
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = 0;
  local_30 = 0;
  local_58 = &local_38;
  local_38 = 0;
  local_28 = param_2;
  FUN_140a6868c(param_1,local_40,&local_28,&local_30);
  if (local_30 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x108));
    FUN_143e6f09a(&local_50,param_1 + 0xb8,local_40);
    uVar3 = CONCAT71((int7)((ulonglong)&local_50 >> 8),local_50 != 0);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x108));
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
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489b9eac FUN_1489b9eac body=28 status=ok
// SIG undefined FUN_1489b9eac(void)

wchar_t * FUN_1489b9eac(byte param_1)

{
  if (param_1 < 0xc) {
    return (wchar_t *)(&PTR_u_Normal_14b438f88)[param_1];
  }
  return L"Unknown";
}



// FUNCTION 1489b9ec8 FUN_1489b9ec8 body=98 status=ok
// SIG undefined FUN_1489b9ec8(void)

undefined8 FUN_1489b9ec8(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  void *_Buf2;
  void *_Buf1;
  undefined4 extraout_var;
  undefined8 uVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x18))();
  iVar2 = (**(code **)(*param_2 + 0x18))(param_2);
  if (iVar1 == iVar2) {
    iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
    _Buf2 = (void *)(**(code **)(*param_2 + 0x10))(param_2);
    _Buf1 = (void *)(**(code **)(*param_1 + 0x10))(param_1);
    iVar1 = memcmp(_Buf1,_Buf2,(longlong)iVar1);
    uVar3 = CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),iVar1 == 0);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 1489b9f2a FUN_1489b9f2a body=996 status=ok
// SIG undefined FUN_1489b9f2a(void)

/* WARNING: Removing unreachable block (ram,0x0001489ba209) */
/* WARNING: Removing unreachable block (ram,0x0001489ba218) */

void FUN_1489b9f2a(longlong *param_1,longlong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  char cVar4;
  undefined2 *puVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined2 *local_a8;
  int local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined2 *local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar12 = (int)param_1[1];
  if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar12);
  }
  if (*(int *)((longlong)param_2 + 0xc) < iVar12) {
    FUN_1468b337c(param_2);
    iVar12 = (int)param_1[1];
  }
  if (iVar12 != 0) {
    lVar9 = *param_1;
    lVar13 = (longlong)iVar12 * 0x10 + lVar9;
    do {
      FUN_140ded208(lVar9,&local_70);
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      puVar5 = &DAT_149dfb77a;
      if (local_68 != 0) {
        puVar5 = local_70;
      }
      FUN_14006620a(&local_a8,puVar5,local_68 - 2U < 0x7fffffff);
      puVar5 = local_a8;
      if (local_a0 == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      lVar7 = 0;
      while( true ) {
        uVar1 = *(ushort *)((longlong)puVar5 + lVar7);
        uVar6 = (uint)uVar1;
        uVar2 = *(ushort *)((longlong)&DAT_149e06140 + lVar7);
        uVar10 = (uint)uVar2;
        if (uVar1 != uVar2) {
          if ((uVar2 | uVar1) < 0x80) {
            uVar6 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1489ba047;
          }
          iVar12 = uVar6 - uVar10;
          goto LAB_1489ba07e;
        }
        if (uVar1 == 0) break;
LAB_1489ba047:
        lVar7 = lVar7 + 2;
      }
      iVar12 = 0;
LAB_1489ba07e:
      if (local_a8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (iVar12 == 0) {
        iVar12 = local_68 + -1;
        if (local_68 == 0) {
          iVar12 = 0;
        }
        if (0 < iVar12) {
          iVar11 = local_68 - (uint)(0 < iVar12);
          if (iVar11 != 0) {
            memmove(local_70,local_70 + 1,(longlong)iVar11 * 2);
          }
          local_68 = local_68 - (uint)(0 < iVar12);
        }
      }
      puVar5 = &DAT_149dfb77a;
      if (local_68 != 0) {
        puVar5 = local_70;
      }
      iVar12 = local_68 + -1;
      if (local_68 == 0) {
        iVar12 = 0;
      }
      FUN_140056680(&local_a8,
                    (longlong)puVar5 + ((longlong)iVar12 * 2 - (ulonglong)((uint)(0 < iVar12) * 2)))
      ;
      puVar5 = local_a8;
      if (local_a0 == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      lVar7 = 0;
      while( true ) {
        uVar1 = *(ushort *)((longlong)puVar5 + lVar7);
        uVar6 = (uint)uVar1;
        uVar2 = *(ushort *)((longlong)&DAT_149e06144 + lVar7);
        uVar10 = (uint)uVar2;
        if (uVar1 != uVar2) {
          if ((uVar2 | uVar1) < 0x80) {
            uVar6 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1489ba0f2;
          }
          iVar12 = uVar6 - uVar10;
          goto LAB_1489ba129;
        }
        if (uVar1 == 0) break;
LAB_1489ba0f2:
        lVar7 = lVar7 + 2;
      }
      iVar12 = 0;
LAB_1489ba129:
      if (local_a8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (iVar12 == 0) {
        iVar12 = local_68 + -1;
        if (local_68 == 0) {
          iVar12 = 0;
        }
        iVar11 = 1;
        if (1 < iVar12) {
          iVar11 = iVar12;
        }
        uVar6 = iVar11 - 1;
        bVar3 = 0 < (int)(iVar12 - uVar6);
        if ((int)uVar6 < iVar12) {
          iVar12 = local_68 - (uVar6 + bVar3);
          if (iVar12 != 0) {
            memmove(local_70 + uVar6,local_70 + (ulonglong)uVar6 + 1,(longlong)iVar12 * 2);
          }
          local_68 = local_68 - (uint)bVar3;
        }
      }
      FUN_140056680(&local_a8,&DAT_149e06162);
      local_b0 = 0;
      local_b8 = 0;
      cVar4 = FUN_1407cdbc6(&local_70,&local_a8,&local_88,&local_98);
      if (local_a8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (cVar4 != '\0') {
        FUN_14033cb48(&local_88);
        FUN_14033cb48(&local_98);
      }
      iVar12 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar12 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar12 + 1U) {
        FUN_146272134(param_2,iVar12);
      }
      lVar7 = *param_2;
      lVar8 = (longlong)iVar12 * 0x20;
      *(undefined8 *)(lVar7 + lVar8) = 0;
      *(undefined8 *)(lVar7 + lVar8) = local_88;
      *(undefined4 *)(lVar7 + 8 + lVar8) = (undefined4)uStack_80;
      *(undefined4 *)(lVar7 + 0xc + lVar8) = uStack_80._4_4_;
      *(undefined8 *)(lVar7 + 0x10 + lVar8) = 0;
      *(undefined8 *)(lVar7 + 0x10 + lVar8) = local_98;
      *(undefined4 *)(lVar7 + 0x18 + lVar8) = (undefined4)uStack_90;
      *(undefined4 *)(lVar7 + 0x1c + lVar8) = uStack_90._4_4_;
      uStack_80 = 0;
      local_88 = 0;
      uStack_90 = 0;
      local_98 = 0;
      if (local_70 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      lVar9 = lVar9 + 0x10;
    } while (lVar9 != lVar13);
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489ba310 FUN_1489ba310 body=123 status=ok
// SIG undefined FUN_1489ba310(void)

void FUN_1489ba310(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14b437310;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x18] = 2;
  return;
}



// FUNCTION 1489ba396 FUN_1489ba396 body=257 status=ok
// SIG undefined FUN_1489ba396(void)

undefined8 *
FUN_1489ba396(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined1 param_5)

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
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_3 + 1);
  pvVar2 = (void *)*param_3;
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_4 + 1);
  pvVar2 = (void *)*param_4;
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 6) = param_5;
  return param_1;
}



// FUNCTION 1489ba4d4 FUN_1489ba4d4 body=61 status=ok
// SIG undefined FUN_1489ba4d4(void)

undefined8 FUN_1489ba4d4(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  wchar_t *pwVar2;
  
  uVar1 = (**(code **)(*param_1 + 400))();
  if (uVar1 < 3) {
    pwVar2 = (wchar_t *)(&PTR_u_Development_14b438fe8)[uVar1];
  }
  else {
    pwVar2 = L"Unknown";
  }
  FUN_140056680(param_2,pwVar2);
  return param_2;
}



// FUNCTION 1489ba512 FUN_1489ba512 body=165 status=ok
// SIG undefined FUN_1489ba512(void)

undefined8 * FUN_1489ba512(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_1489be19c(&local_38,param_3);
  FUN_1489be0b4(param_1 + 0x40,local_40,&local_38);
  FUN_1449db362(&local_38);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489ba5b8 FUN_1489ba5b8 body=38 status=ok
// SIG undefined FUN_1489ba5b8(void)

void FUN_1489ba5b8(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 0x40);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 1489ba5f2 FUN_1489ba5f2 body=165 status=ok
// SIG undefined FUN_1489ba5f2(void)

undefined8 * FUN_1489ba5f2(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_1489be2ce(&local_38,param_3);
  FUN_145f9d2ce(param_1 + 0x58,local_40,&local_38);
  FUN_1449db362(&local_38);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489ba698 FUN_1489ba698 body=38 status=ok
// SIG undefined FUN_1489ba698(void)

void FUN_1489ba698(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 0x58);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 1489ba6e6 FUN_1489ba6e6 body=165 status=ok
// SIG undefined FUN_1489ba6e6(void)

undefined8 * FUN_1489ba6e6(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_1489be43a(&local_38,param_3);
  FUN_1489be352(param_1 + 8,local_40,&local_38);
  FUN_1449db362(&local_38);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489ba78c FUN_1489ba78c body=38 status=ok
// SIG undefined FUN_1489ba78c(void)

void FUN_1489ba78c(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 8);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 1489ba7c6 FUN_1489ba7c6 body=165 status=ok
// SIG undefined FUN_1489ba7c6(void)

undefined8 * FUN_1489ba7c6(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_1489be654(&local_38,param_3);
  FUN_1489be56c(param_1 + 0x20,local_40,&local_38);
  FUN_1449db362(&local_38);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489ba86c FUN_1489ba86c body=38 status=ok
// SIG undefined FUN_1489ba86c(void)

void FUN_1489ba86c(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 0x20);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 1489ba8a6 FUN_1489ba8a6 body=165 status=ok
// SIG undefined FUN_1489ba8a6(void)

undefined8 * FUN_1489ba8a6(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_1489be880(&local_38,param_3);
  FUN_1489be798(param_1 + 0x38,local_40,&local_38);
  FUN_1449db362(&local_38);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489ba94c FUN_1489ba94c body=38 status=ok
// SIG undefined FUN_1489ba94c(void)

void FUN_1489ba94c(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 0x38);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 1489ba986 FUN_1489ba986 body=165 status=ok
// SIG undefined FUN_1489ba986(void)

undefined8 * FUN_1489ba986(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_1489be654(&local_38,param_3);
  FUN_1489be56c(param_1 + 0x50,local_40,&local_38);
  FUN_1449db362(&local_38);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489baa2c FUN_1489baa2c body=38 status=ok
// SIG undefined FUN_1489baa2c(void)

void FUN_1489baa2c(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 0x50);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 1489baa66 FUN_1489baa66 body=165 status=ok
// SIG undefined FUN_1489baa66(void)

undefined8 * FUN_1489baa66(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_1489be654(&local_38,param_3);
  FUN_1489be56c(param_1 + 0x68,local_40,&local_38);
  FUN_1449db362(&local_38);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489bab0c FUN_1489bab0c body=38 status=ok
// SIG undefined FUN_1489bab0c(void)

void FUN_1489bab0c(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 0x68);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 1489bab46 FUN_1489bab46 body=165 status=ok
// SIG undefined FUN_1489bab46(void)

undefined8 * FUN_1489bab46(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_1489be654(&local_38,param_3);
  FUN_1489be56c(param_1 + 0x80,local_40,&local_38);
  FUN_1449db362(&local_38);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489babec FUN_1489babec body=38 status=ok
// SIG undefined FUN_1489babec(void)

void FUN_1489babec(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 0x80);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 1489bac26 FUN_1489bac26 body=168 status=ok
// SIG undefined FUN_1489bac26(void)

undefined8 * FUN_1489bac26(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_1489beaae(&local_38,param_3);
  FUN_1489be9c6(param_1 + 0x98,local_40,&local_38);
  FUN_1449db362(&local_38);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489bacd0 FUN_1489bacd0 body=41 status=ok
// SIG undefined FUN_1489bacd0(void)

void FUN_1489bacd0(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 0x98);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 1489bad12 FUN_1489bad12 body=168 status=ok
// SIG undefined FUN_1489bad12(void)

undefined8 * FUN_1489bad12(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_1489becec(&local_38,param_3);
  FUN_1489bec04(param_1 + 0xb0,local_40,&local_38);
  FUN_1449db362(&local_38);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489badbc FUN_1489badbc body=41 status=ok
// SIG undefined FUN_1489badbc(void)

void FUN_1489badbc(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 0xb0);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 1489bae26 FUN_1489bae26 body=101 status=ok
// SIG undefined FUN_1489bae26(void)

undefined1 FUN_1489bae26(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      *(undefined8 *)(param_2 + lVar3) = *(undefined8 *)(param_3 + lVar3);
      lVar2 = *(longlong *)(param_3 + 8 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + 8 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + 8 + lVar3) = lVar2;
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1489baeb4 FUN_1489baeb4 body=59 status=ok
// SIG undefined FUN_1489baeb4(void)

undefined8 FUN_1489baeb4(longlong *param_1)

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



// FUNCTION 1489baf9a FUN_1489baf9a body=75 status=ok
// SIG undefined FUN_1489baf9a(void)

undefined8 FUN_1489baf9a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + lVar1) = *(undefined8 *)(param_3 + lVar1);
      FUN_144a787a6();
      lVar1 = lVar1 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1489bb00e FUN_1489bb00e body=59 status=ok
// SIG undefined FUN_1489bb00e(void)

undefined8 FUN_1489bb00e(longlong *param_1)

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



// FUNCTION 1489bb054 FUN_1489bb054 body=38 status=ok
// SIG undefined FUN_1489bb054(void)

void FUN_1489bb054(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1489bb0ca FUN_1489bb0ca body=110 status=ok
// SIG undefined FUN_1489bb0ca(void)

longlong * FUN_1489bb0ca(longlong *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd) = 0;
  if (-1 < (int)param_2) {
    if (param_2 == 0) {
      iVar1 = 0;
      iVar2 = 0;
    }
    else {
      FUN_144893a1c(param_1);
      iVar2 = (int)param_1[1];
      iVar1 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar2 + param_2;
    if ((uint)(iVar1 - iVar2) < param_2) {
      FUN_1447403be(param_1);
    }
    memset((void *)((longlong)iVar2 + *param_1),0,(ulonglong)param_2);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4((ulonglong)param_2);
}



// FUNCTION 1489bb13c FUN_1489bb13c body=169 status=ok
// SIG undefined FUN_1489bb13c(void)

undefined8 *
FUN_1489bb13c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

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
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_3 + 1);
  pvVar2 = (void *)*param_3;
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 4) = param_4;
  return param_1;
}



// FUNCTION 1489bb1e6 FUN_1489bb1e6 body=147 status=ok
// SIG undefined FUN_1489bb1e6(void)

void FUN_1489bb1e6(longlong param_1,int param_2)

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



// FUNCTION 1489bb27a FUN_1489bb27a body=61 status=ok
// SIG undefined FUN_1489bb27a(void)

void FUN_1489bb27a(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1489bb2b8 FUN_1489bb2b8 body=132 status=ok
// SIG undefined FUN_1489bb2b8(void)

void FUN_1489bb2b8(longlong param_1,int param_2)

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



// FUNCTION 1489bb33e FUN_1489bb33e body=201 status=ok
// SIG undefined FUN_1489bb33e(void)

void FUN_1489bb33e(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    plVar2 = (longlong *)*param_1;
    iVar5 = 0;
    bVar10 = *plVar2 == *(longlong *)*param_2;
    iVar7 = 0;
    do {
      iVar3 = iVar7 + 1;
      if (iVar7 + 1 < iVar1) {
        iVar3 = iVar1;
      }
      iVar8 = iVar7;
      lVar6 = (longlong)iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar9 = iVar3;
        if (lVar4 <= lVar6) break;
        iVar8 = iVar8 + 1;
        iVar9 = iVar8;
      } while (bVar10 == (plVar2[lVar6] == *(longlong *)*param_2));
      if (bVar10 == false) {
        if (iVar5 != iVar7) {
          memmove(plVar2 + iVar5,plVar2 + iVar7,(longlong)(iVar9 - iVar7) << 3);
        }
        iVar5 = iVar5 + (iVar9 - iVar7);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      iVar7 = iVar9;
    } while (lVar6 < lVar4);
    *(int *)(param_1 + 1) = iVar5;
  }
  return;
}



// FUNCTION 1489bb408 FUN_1489bb408 body=98 status=ok
// SIG undefined FUN_1489bb408(void)

void FUN_1489bb408(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1489bb46a FUN_1489bb46a body=364 status=ok
// SIG undefined FUN_1489bb46a(void)

uint * FUN_1489bb46a(longlong param_1,uint *param_2,undefined8 *param_3)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined2 *puVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  uint local_70 [2];
  undefined8 *local_68;
  uint local_60 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140dfa92e(param_1,local_70);
  local_60[0] = local_60[0] & 0xffffff00;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_140c3a888(local_68,0,*param_3,local_60);
  FUN_140c3a2ac(local_60);
  *(undefined4 *)(local_68 + 6) = 0xffffffff;
  local_60[0] = local_70[0];
  iVar6 = *(int *)(local_68 + 1) + -1;
  if (*(int *)(local_68 + 1) == 0) {
    puVar5 = &DAT_149dfb77a;
    iVar6 = 0;
  }
  else {
    puVar5 = (undefined2 *)*local_68;
  }
  uVar2 = FUN_144a49b4a(iVar6,puVar5);
  local_78 = 0;
  cVar1 = FUN_140dfa750(param_1,uVar2,local_68,local_60);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar2 = *(int *)(param_1 + 0x48) - 1U & uVar2;
      *(uint *)((longlong)local_68 + 0x34) = uVar2;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_68 + 6) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4) =
           local_60[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_140dfae20(param_1);
    }
  }
  *param_2 = local_60[0];
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1489bb5d7 FUN_1489bb5d7 body=263 status=ok
// SIG undefined FUN_1489bb5d7(void)

longlong * FUN_1489bb5d7(longlong *param_1,undefined8 *param_2)

{
  size_t sVar1;
  wchar_t *_Str;
  undefined1 auStack_e8 [44];
  uint local_bc;
  undefined1 local_b8 [128];
  longlong local_38;
  void *local_30;
  uint local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(int *)(param_2 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
  }
  local_38 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_30 = (void *)0x0;
    local_28 = 0;
  }
  else {
    sVar1 = wcslen(_Str);
    FUN_1446fe5a4(local_b8,_Str,sVar1 & 0xffffffff,1);
  }
  local_bc = local_28;
  FUN_1489b6c87(param_1);
  if (*(char *)((longlong)param_1 + 0x14) == '\0') {
    if (local_bc + (int)param_1[2] <= *(uint *)(param_1 + 1)) {
      if (0 < (int)local_bc) {
        memcpy((void *)((longlong)(int)param_1[2] + *param_1),local_30,(ulonglong)local_bc);
        *(uint *)(param_1 + 2) = (int)param_1[2] + local_bc;
      }
      goto LAB_1489bb687;
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
LAB_1489bb687:
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489bb6df FUN_1489bb6df body=396 status=ok
// SIG undefined FUN_1489bb6df(void)

longlong * FUN_1489bb6df(longlong *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined2 *local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)((longlong)param_1 + 0x14) == '\0') {
    lVar3 = param_1[2];
    uVar4 = (int)lVar3 + 1;
    if (*(uint *)(param_1 + 1) < uVar4) goto LAB_1489bb709;
    uVar1 = *param_2;
    *(uint *)(param_1 + 2) = uVar4;
    *(undefined1 *)(*param_1 + (longlong)(int)lVar3) = uVar1;
  }
  else {
LAB_1489bb709:
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  }
  switch(*param_2) {
  case 1:
  case 7:
    local_28 = (undefined2 *)CONCAT44(local_28._4_4_,*(undefined4 *)(param_2 + 8));
    FUN_1489b6c87(param_1);
    break;
  case 3:
    local_28 = (undefined2 *)0x0;
    goto LAB_1489bb7a9;
  case 5:
    local_28 = *(undefined2 **)(param_2 + 8);
LAB_1489bb7a9:
    FUN_1489b68cf(param_1);
    break;
  case 6:
    local_28 = (undefined2 *)0x0;
    uStack_20 = 0;
    FUN_140b74118(param_2,&local_28);
    puVar5 = local_28;
    if ((int)uStack_20 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    FUN_1489bb86c(param_1,puVar5);
    goto LAB_1489bb854;
  case 8:
    local_28 = (undefined2 *)0x0;
    uStack_20 = 0;
    FUN_1489b76b6(param_2,&local_28);
    local_2c = (int)uStack_20;
    FUN_1489b6c87(param_1);
    if (0 < (int)uStack_20) {
      lVar3 = 0;
      do {
        if (*(char *)((longlong)param_1 + 0x14) == '\0') {
          lVar2 = param_1[2];
          uVar4 = (int)lVar2 + 1;
          if (*(uint *)(param_1 + 1) < uVar4) goto LAB_1489bb7f8;
          uVar1 = *(undefined1 *)((longlong)local_28 + lVar3);
          *(uint *)(param_1 + 2) = uVar4;
          *(undefined1 *)(*param_1 + (longlong)(int)lVar2) = uVar1;
        }
        else {
LAB_1489bb7f8:
          *(undefined1 *)((longlong)param_1 + 0x14) = 1;
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < (int)uStack_20);
    }
LAB_1489bb854:
    if (local_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    break;
  case 9:
    if (*(char *)((longlong)param_1 + 0x14) == '\0') {
      lVar3 = param_1[2];
      uVar4 = (int)lVar3 + 1;
      if (uVar4 <= *(uint *)(param_1 + 1)) {
        uVar1 = param_2[8];
        *(uint *)(param_1 + 2) = uVar4;
        *(undefined1 *)(*param_1 + (longlong)(int)lVar3) = uVar1;
        break;
      }
    }
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489bb86c FUN_1489bb86c body=248 status=ok
// SIG undefined FUN_1489bb86c(void)

longlong * FUN_1489bb86c(longlong *param_1,wchar_t *param_2)

{
  size_t sVar1;
  undefined1 auStack_e8 [44];
  uint local_bc;
  undefined1 local_b8 [128];
  longlong local_38;
  void *local_30;
  uint local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_38 = 0;
  if (param_2 == (wchar_t *)0x0) {
    local_30 = (void *)0x0;
    local_28 = 0;
  }
  else {
    sVar1 = wcslen(param_2);
    FUN_1446fe5a4(local_b8,param_2,sVar1 & 0xffffffff,1);
  }
  local_bc = local_28;
  FUN_1489b6c87(param_1);
  if (*(char *)((longlong)param_1 + 0x14) == '\0') {
    if (local_bc + (int)param_1[2] <= *(uint *)(param_1 + 1)) {
      if (0 < (int)local_bc) {
        memcpy((void *)((longlong)(int)param_1[2] + *param_1),local_30,(ulonglong)local_bc);
        *(uint *)(param_1 + 2) = (int)param_1[2] + local_bc;
      }
      goto LAB_1489bb90d;
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
LAB_1489bb90d:
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489bb965 FUN_1489bb965 body=373 status=ok
// SIG undefined FUN_1489bb965(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_1489bb965(longlong *param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  size_t sVar6;
  int iVar7;
  char *pcVar8;
  uint uVar10;
  longlong lVar11;
  undefined8 uStack_180;
  undefined1 auStack_178 [24];
  undefined8 uStack_160;
  char acStack_158 [8];
  undefined1 local_150 [120];
  undefined1 local_d8 [136];
  longlong local_50;
  undefined8 local_48;
  ulonglong local_38;
  undefined1 *puVar9;
  
  pcVar8 = acStack_158;
  local_38 = DAT_14c707940 ^ (ulonglong)local_d8;
  if ((char)param_1[2] == '\0') {
    lVar11 = (longlong)*(int *)((longlong)param_1 + 0xc);
    iVar7 = (int)(lVar11 + 4);
    if (iVar7 <= (int)param_1[1]) {
      lVar4 = *param_1;
      bVar1 = *(byte *)(lVar4 + 1 + lVar11);
      bVar2 = *(byte *)(lVar4 + 2 + lVar11);
      bVar3 = *(byte *)(lVar4 + 3 + lVar11);
      uVar10 = (uint)*(byte *)(lVar4 + lVar11) << 0x18;
      *(int *)((longlong)param_1 + 0xc) = iVar7;
      if (-1 < (int)uVar10) {
        uVar10 = (uint)bVar2 << 8 | (uint)bVar1 << 0x10 | (uint)bVar3 | uVar10;
        if ((int)uVar10 <= (int)param_1[1] - iVar7) {
          if (uVar10 == 0) {
            *(undefined4 *)(param_2 + 8) = 0;
            if (*(int *)(param_2 + 0xc) == 0) goto LAB_1489bb9a9;
            puVar9 = auStack_178;
            uStack_180 = 0x1489bbadd;
            FUN_1446f8c06(param_2,0);
          }
          else {
            uStack_160 = 0x1489bba2e;
            lVar5 = -((ulonglong)uVar10 + 0x1f & 0xfffffffffffffff0);
            puVar9 = auStack_178 + lVar5;
            *(undefined8 *)(auStack_178 + lVar5 + -8) = 0x1489bba46;
            memcpy(acStack_158 + lVar5,(void *)(lVar4 + lVar11 + 4),(ulonglong)uVar10);
            acStack_158[(ulonglong)uVar10 + lVar5] = '\0';
            local_50 = 0;
            *(undefined8 *)(auStack_178 + lVar5 + -8) = 0x1489bba6a;
            sVar6 = strlen(acStack_158 + lVar5);
            *(undefined8 *)(auStack_178 + lVar5 + -8) = 0x1489bba7e;
            FUN_1446e6fe8(local_150,acStack_158 + lVar5,sVar6 & 0xffffffff,1);
            *(undefined8 *)(auStack_178 + lVar5 + -8) = 0x1489bba95;
            FUN_14020fad6(param_2,local_48);
            pcVar8 = acStack_158 + lVar5;
            *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + uVar10;
            if (local_50 == 0) goto LAB_1489bb9a9;
            *(undefined8 *)(auStack_178 + lVar5 + -8) = 0x1489bbab5;
            FUN_1400020a8();
          }
          pcVar8 = puVar9 + 0x20;
          goto LAB_1489bb9a9;
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 2) = 1;
  pcVar8 = acStack_158;
LAB_1489bb9a9:
  if ((local_38 ^ (ulonglong)local_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(pcVar8 + -0x28) = &UNK_1489bb9d8;
  FUN_144d8e3a0();
}



// FUNCTION 1489bbadf FUN_1489bbadf body=565 status=ok
// SIG undefined FUN_1489bbadf(void)

ulonglong * FUN_1489bbadf(ulonglong *param_1,undefined1 *param_2)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  void *_Dst;
  uint uVar6;
  undefined2 *puVar7;
  ulonglong unaff_RBX;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((char)param_1[2] != '\0') goto switchD_1489bbb5d_caseD_2;
  iVar8 = *(int *)((longlong)param_1 + 0xc);
  lVar9 = (longlong)iVar8;
  iVar5 = (int)param_1[1];
  if (iVar8 < iVar5) {
    lVar1 = lVar9 + 1;
    unaff_RBX = *param_1;
    *(int *)((longlong)param_1 + 0xc) = (int)lVar1;
    switch(*(undefined1 *)(unaff_RBX + lVar9)) {
    case 1:
      if (iVar5 < iVar8 + 5) {
        *(undefined1 *)(param_1 + 2) = 1;
      }
      else {
        uVar6 = *(uint *)(unaff_RBX + lVar1);
        unaff_RBX = (ulonglong)
                    (uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18
                    );
        *(int *)((longlong)param_1 + 0xc) = iVar8 + 5;
      }
      uVar6 = (uint)unaff_RBX;
      FUN_140c3a2ac(param_2);
      *param_2 = 1;
      goto LAB_1489bbba9;
    case 3:
      FUN_1489b6b19(param_1,&local_58);
      puVar7 = local_58;
      FUN_140c3a2ac(param_2);
      *param_2 = 4;
      *(undefined2 **)(param_2 + 8) = puVar7;
      break;
    case 5:
      FUN_1489b6b19(param_1,&local_58);
      puVar7 = local_58;
      FUN_140c3a2ac(param_2);
      *param_2 = 5;
      *(undefined2 **)(param_2 + 8) = puVar7;
      break;
    case 6:
      local_58 = (undefined2 *)0x0;
      uStack_50 = 0;
      FUN_1489bb965(param_1,&local_58);
      puVar7 = local_58;
      if ((int)uStack_50 == 0) {
        puVar7 = &DAT_149dfb77a;
      }
      FUN_140c3a228(param_2,puVar7);
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      break;
    case 7:
      if (iVar5 < iVar8 + 5) goto LAB_1489bbb9a;
      uVar6 = *(uint *)(unaff_RBX + lVar1);
      uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
      *(int *)((longlong)param_1 + 0xc) = iVar8 + 5;
      goto LAB_1489bbb9e;
    case 8:
      iVar8 = (int)(lVar9 + 5);
      if (iVar8 <= iVar5) {
        bVar2 = *(byte *)(unaff_RBX + 1 + lVar1);
        bVar3 = *(byte *)(unaff_RBX + 2 + lVar1);
        bVar4 = *(byte *)(unaff_RBX + 3 + lVar1);
        uVar6 = (uint)*(byte *)(unaff_RBX + lVar1) << 0x18;
        *(int *)((longlong)param_1 + 0xc) = iVar8;
        if ((-1 < (int)uVar6) &&
           (uVar6 = (uint)bVar3 << 8 | (uint)bVar2 << 0x10 | (uint)bVar4 | uVar6,
           (int)uVar6 <= iVar5 - iVar8)) {
          FUN_140c3a2ac(param_2);
          *param_2 = 8;
          if (uVar6 != 0) {
            *(uint *)(param_2 + 0x10) = uVar6;
            _Dst = (void *)FUN_14001cc68((ulonglong)uVar6,0x10);
            *(void **)(param_2 + 8) = _Dst;
            memcpy(_Dst,(void *)(unaff_RBX + lVar9 + 5),(ulonglong)uVar6);
          }
          *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + uVar6;
          break;
        }
      }
      *(undefined1 *)(param_1 + 2) = 1;
      break;
    case 9:
      if ((int)lVar1 < iVar5) {
        *(int *)((longlong)param_1 + 0xc) = iVar8 + 2;
        bVar10 = *(char *)(unaff_RBX + lVar1) != '\0';
      }
      else {
        *(undefined1 *)(param_1 + 2) = 1;
        bVar10 = false;
      }
      FUN_140c3a2ac(param_2);
      *param_2 = 9;
      param_2[8] = bVar10;
    }
  }
  else {
LAB_1489bbb9a:
    uVar6 = (uint)unaff_RBX;
    *(undefined1 *)(param_1 + 2) = 1;
LAB_1489bbb9e:
    FUN_140c3a2ac(param_2);
    *param_2 = 7;
LAB_1489bbba9:
    *(uint *)(param_2 + 8) = uVar6;
  }
switchD_1489bbb5d_caseD_2:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489bbd16 FUN_1489bbd16 body=110 status=ok
// SIG undefined FUN_1489bbd16(void)

void FUN_1489bbd16(longlong param_1,uint param_2)

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
    FUN_1411632fa(param_1,param_2);
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_140dfae20(param_1);
    return;
  }
  FUN_1489bbd84(param_1);
  FUN_1411632fa(param_1,param_2);
  return;
}



// FUNCTION 1489bbd84 FUN_1489bbd84 body=322 status=ok
// SIG undefined FUN_1489bbd84(void)

void FUN_1489bbd84(longlong *param_1)

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



// FUNCTION 1489bbec8 FUN_1489bbec8 body=52 status=ok
// SIG undefined FUN_1489bbec8(void)

undefined8 * FUN_1489bbec8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14b4382a0;
  FUN_1449db362(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489bbf1e FUN_1489bbf1e body=145 status=ok
// SIG undefined FUN_1489bbf1e(void)

void FUN_1489bbf1e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4382a0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_1489bc20c(puVar1 + 4,param_1 + 0x20);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  *puVar1 = &PTR_FUN_14b438230;
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  return;
}



// FUNCTION 1489bbfb0 FUN_1489bbfb0 body=145 status=ok
// SIG undefined FUN_1489bbfb0(void)

void FUN_1489bbfb0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4382a0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_1489bc20c(puVar1 + 4,param_1 + 0x20);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  *puVar1 = &PTR_FUN_14b438230;
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  return;
}



// FUNCTION 1489bc042 FUN_1489bc042 body=181 status=ok
// SIG undefined FUN_1489bc042(void)

void FUN_1489bc042(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4382a0;
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = 0;
  p_Var1->ContentionCount = 0;
  p_Var1->Flags = 0;
  FUN_1489bc20c(&p_Var1->EntryCount,param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  p_Var1[1].Type = (short)uVar2;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)uVar2 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)uVar2 >> 0x20);
  *(undefined ***)p_Var1 = &PTR_FUN_14b438230;
  p_Var1[1].CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489bc0e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489bc0f8 FUN_1489bc0f8 body=135 status=ok
// SIG undefined FUN_1489bc0f8(void)

void FUN_1489bc0f8(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  pcVar1 = *(code **)(param_1 + 0x38);
  local_40 = 0;
  local_38 = 0;
  FUN_1489bc20c(&local_40,param_1 + 0x20);
  local_58 = *(undefined8 *)(param_1 + 0x18);
  local_50 = &local_40;
  (*pcVar1)(param_2,param_3,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489bc180 FUN_1489bc180 body=137 status=ok
// SIG undefined FUN_1489bc180(void)

undefined8 FUN_1489bc180(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  pcVar1 = *(code **)(param_1 + 0x38);
  local_40 = 0;
  local_38 = 0;
  FUN_1489bc20c(&local_40,param_1 + 0x20);
  local_58 = *(undefined8 *)(param_1 + 0x18);
  local_50 = &local_40;
  (*pcVar1)(param_2,param_3,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489bc20c FUN_1489bc20c body=130 status=ok
// SIG undefined FUN_1489bc20c(void)

void FUN_1489bc20c(longlong *param_1,longlong *param_2)

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



// FUNCTION 1489bc290 FUN_1489bc290 body=138 status=ok
// SIG undefined FUN_1489bc290(void)

void FUN_1489bc290(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x38 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
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
      puVar7 = puVar7 + 0xe;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1489bc31a FUN_1489bc31a body=154 status=ok
// SIG undefined FUN_1489bc31a(void)

undefined8 FUN_1489bc31a(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     (int)(((uint)param_2 << 0x10 | uVar4) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x38) == param_2) {
          FUN_1489bc3b4(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x38 + *param_1 + 0x30);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 1489bc3b4 FUN_1489bc3b4 body=126 status=ok
// SIG undefined FUN_1489bc3b4(void)

void FUN_1489bc3b4(longlong *param_1,int param_2)

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
  FUN_140c3a2ac(*param_1 + lVar2 + 8);
  FUN_1489bc290(param_1,param_2,1);
  return;
}



// FUNCTION 1489bc432 FUN_1489bc432 body=402 status=ok
// SIG undefined FUN_1489bc432(void)

undefined4 *
FUN_1489bc432(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1489bc5c6(param_1,local_50);
  puVar1 = (undefined4 *)param_3[1];
  *local_48 = *(undefined8 *)*param_3;
  *(undefined1 *)(local_48 + 1) = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  *(undefined4 *)(local_48 + 4) = 0;
  uVar2 = *(undefined8 *)(puVar1 + 6);
  local_48[3] = *(undefined8 *)(puVar1 + 4);
  local_48[4] = uVar2;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *(undefined4 *)(local_48 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_48 + 0xc) = uVar3;
  *(undefined4 *)(local_48 + 2) = uVar4;
  *(undefined4 *)((longlong)local_48 + 0x14) = uVar5;
  *(undefined1 *)puVar1 = 0;
  FUN_140c3a2ac(puVar1);
  local_48[5] = *(undefined8 *)(puVar1 + 8);
  *(undefined4 *)(local_48 + 6) = 0xffffffff;
  local_54 = local_50[0];
  uVar2 = *local_48;
  uVar11 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar7 = (uint)uVar2 & 0xffff;
  uVar11 = ((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar7 >> 4);
  local_68 = param_4;
  cVar6 = FUN_1489bc6a8(param_1,uVar11,local_48,&local_54);
  uVar3 = local_54;
  if (cVar6 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar7) {
      uVar8 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar11 = *(int *)(param_1 + 0x48) - 1U & uVar11;
      *(uint *)((longlong)local_48 + 0x34) = uVar11;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 6) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4) = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_1489bc7f2(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489bc5c6 FUN_1489bc5c6 body=226 status=ok
// SIG undefined FUN_1489bc5c6(void)

int * FUN_1489bc5c6(longlong *param_1,int *param_2)

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



// FUNCTION 1489bc6a8 FUN_1489bc6a8 body=192 status=ok
// SIG undefined FUN_1489bc6a8(void)

void FUN_1489bc6a8(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 uVar13;
  longlong *plVar14;
  int iVar15;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar14 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[8];
    }
    iVar15 = *(int *)((longlong)plVar14 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar15 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar15 * 0x38);
        if (*(longlong *)(*param_1 + (longlong)iVar15 * 0x38) == *param_3) {
          FUN_140c3a2ac(puVar1 + 2);
          lVar8 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar9 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          lVar10 = param_3[2];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar11 = param_3[3];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
          uVar6 = *(undefined4 *)((longlong)param_3 + 0x24);
          lVar12 = param_3[5];
          uVar7 = *(undefined4 *)((longlong)param_3 + 0x2c);
          puVar1[8] = (int)param_3[4];
          puVar1[9] = uVar6;
          puVar1[10] = (int)lVar12;
          puVar1[0xb] = uVar7;
          puVar1[4] = (int)lVar10;
          puVar1[5] = uVar4;
          puVar1[6] = (int)lVar11;
          puVar1[7] = uVar5;
          *puVar1 = (int)lVar8;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar9;
          puVar1[3] = uVar3;
          FUN_1489bc768(param_1,*param_4,1);
          *param_4 = iVar15;
          uVar13 = 1;
          goto LAB_1489bc71b;
        }
        iVar15 = puVar1[0xc];
      } while (iVar15 != -1);
    }
  }
  uVar13 = 0;
LAB_1489bc71b:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar13;
  }
  return;
}



// FUNCTION 1489bc768 FUN_1489bc768 body=138 status=ok
// SIG undefined FUN_1489bc768(void)

void FUN_1489bc768(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x38 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
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
      puVar7 = puVar7 + 0xe;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1489bc7f2 FUN_1489bc7f2 body=473 status=ok
// SIG undefined FUN_1489bc7f2(void)

void FUN_1489bc7f2(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar7 = (longlong)iVar5 * 0x38;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x34 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x30 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 1489bc9cc FUN_1489bc9cc body=31 status=ok
// SIG undefined FUN_1489bc9cc(void)

undefined8 FUN_1489bc9cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489bca08 FUN_1489bca08 body=101 status=ok
// SIG undefined FUN_1489bca08(void)

void FUN_1489bca08(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e1dc70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b438380;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1489bca6e FUN_1489bca6e body=101 status=ok
// SIG undefined FUN_1489bca6e(void)

void FUN_1489bca6e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e1dc70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b438380;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1489bcad4 FUN_1489bcad4 body=134 status=ok
// SIG undefined FUN_1489bcad4(void)

void FUN_1489bcad4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e1dc70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b438380;
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
                    /* WARNING: Could not recover jumptable at 0x0001489bcb4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489bcb6c FUN_1489bcb6c body=25 status=ok
// SIG undefined FUN_1489bcb6c(void)

undefined8 FUN_1489bcb6c(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1489bcb85 FUN_1489bcb85 body=27 status=ok
// SIG undefined FUN_1489bcb85(void)

void FUN_1489bcb85(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 1489bcba0 FUN_1489bcba0 body=62 status=ok
// SIG undefined FUN_1489bcba0(void)

void FUN_1489bcba0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1489bcbde(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1489bcbde FUN_1489bcbde body=93 status=ok
// SIG undefined FUN_1489bcbde(void)

ulonglong FUN_1489bcbde(uint param_1,uint param_2)

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



// FUNCTION 1489bcc3c FUN_1489bcc3c body=29 status=ok
// SIG undefined FUN_1489bcc3c(void)

undefined8 FUN_1489bcc3c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489bcc76 FUN_1489bcc76 body=101 status=ok
// SIG undefined FUN_1489bcc76(void)

void FUN_1489bcc76(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4383f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1489bccdc FUN_1489bccdc body=101 status=ok
// SIG undefined FUN_1489bccdc(void)

void FUN_1489bccdc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4383f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1489bcd42 FUN_1489bcd42 body=134 status=ok
// SIG undefined FUN_1489bcd42(void)

void FUN_1489bcd42(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b4383f0;
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
                    /* WARNING: Could not recover jumptable at 0x0001489bcdb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489bcdd8 FUN_1489bcdd8 body=25 status=ok
// SIG undefined FUN_1489bcdd8(void)

undefined8 FUN_1489bcdd8(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1489bcdf2 FUN_1489bcdf2 body=38 status=ok
// SIG undefined FUN_1489bcdf2(void)

undefined8 FUN_1489bcdf2(undefined8 param_1,int param_2)

{
  FUN_145842390();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489bce18 FUN_1489bce18 body=548 status=ok
// SIG undefined FUN_1489bce18(void)

void FUN_1489bce18(longlong param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  longlong local_90;
  wchar_t *local_88;
  undefined4 local_80;
  undefined8 local_78;
  longlong *local_70;
  wchar_t *local_68;
  undefined4 local_60;
  wchar_t *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_3 == '\0') {
    (**(code **)(*param_2 + 0x18))(param_2);
  }
  local_68 = L"transactionId";
  local_60 = 0xd;
  (**(code **)(*param_2 + 0x68))(param_2,&local_68,param_1 + 8);
  cVar3 = (**(code **)*param_2)(param_2);
  if (cVar3 == '\0') {
    local_a8 = L"receiptList";
    local_a0 = 0xb;
    (**(code **)(*param_2 + 0x28))(param_2);
    if (0 < *(int *)(param_1 + 0x28)) {
      lVar8 = 0;
      iVar7 = 0;
      do {
        (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + lVar8) + 0x28))
                  (*(longlong *)(param_1 + 0x20) + lVar8,param_2,0);
        iVar7 = iVar7 + 1;
        lVar8 = lVar8 + 0x40;
      } while (iVar7 < *(int *)(param_1 + 0x28));
    }
    (**(code **)(*param_2 + 0x38))(param_2);
  }
  else {
    (**(code **)(*param_2 + 0xf0))(param_2,&local_78);
    local_58 = L"receiptList";
    local_50 = 0xb;
    cVar3 = FUN_146843260(local_78,&local_58,5);
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
    if (cVar3 != '\0') {
      (**(code **)(*param_2 + 0xf0))(param_2,&local_58);
      local_88 = L"receiptList";
      local_80 = 0xb;
      plVar4 = (longlong *)FUN_14571608c(local_58);
      plVar5 = (longlong *)CONCAT44(uStack_4c,local_50);
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
      if (0 < (int)plVar4[1]) {
        lVar8 = 0;
        iVar7 = 0;
        do {
          plVar5 = (longlong *)FUN_1489bd506(param_1 + 0x20);
          puVar6 = (undefined8 *)(**(code **)**(undefined8 **)(*plVar4 + lVar8))();
          local_98 = *puVar6;
          local_90 = puVar6[1];
          if (local_90 != 0) {
            LOCK();
            *(int *)(local_90 + 8) = *(int *)(local_90 + 8) + 1;
            UNLOCK();
          }
          (**(code **)(*plVar5 + 0x10))(plVar5,&local_98);
          iVar7 = iVar7 + 1;
          lVar8 = lVar8 + 0x10;
        } while (iVar7 < (int)plVar4[1]);
      }
    }
  }
  if (param_3 == '\0') {
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489bd03e FUN_1489bd03e body=38 status=ok
// SIG undefined FUN_1489bd03e(void)

undefined8 FUN_1489bd03e(undefined8 param_1,int param_2)

{
  FUN_1418b5280();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489bd064 FUN_1489bd064 body=630 status=ok
// SIG undefined FUN_1489bd064(void)

void FUN_1489bd064(longlong param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_e8 [32];
  wchar_t *local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  longlong local_b0;
  wchar_t *local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  longlong *local_90;
  wchar_t *local_88;
  undefined4 local_80;
  wchar_t *local_78;
  undefined4 local_70;
  wchar_t *local_68;
  undefined4 local_60;
  wchar_t *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_3 == '\0') {
    (**(code **)(*param_2 + 0x18))(param_2);
  }
  local_68 = L"namespace";
  local_60 = 9;
  (**(code **)(*param_2 + 0x68))(param_2,&local_68,param_1 + 8);
  local_78 = L"offerId";
  local_70 = 7;
  (**(code **)(*param_2 + 0x68))(param_2,&local_78,param_1 + 0x18);
  local_88 = L"quantity";
  local_80 = 8;
  (**(code **)(*param_2 + 0x88))(param_2,&local_88,param_1 + 0x28);
  cVar3 = (**(code **)*param_2)(param_2);
  if (cVar3 == '\0') {
    local_c8 = L"items";
    local_c0 = 5;
    (**(code **)(*param_2 + 0x28))(param_2);
    if (0 < *(int *)(param_1 + 0x38)) {
      lVar8 = 0;
      iVar7 = 0;
      do {
        (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + lVar8) + 0x28))
                  (*(longlong *)(param_1 + 0x30) + lVar8,param_2,0);
        iVar7 = iVar7 + 1;
        lVar8 = lVar8 + 0x38;
      } while (iVar7 < *(int *)(param_1 + 0x38));
    }
    (**(code **)(*param_2 + 0x38))(param_2);
  }
  else {
    (**(code **)(*param_2 + 0xf0))(param_2,&local_98);
    local_58 = L"items";
    local_50 = 5;
    cVar3 = FUN_146843260(local_98,&local_58,5);
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_90 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar1 = (int *)((longlong)local_90 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_90 + 0x10))(local_90);
        }
      }
    }
    if (cVar3 != '\0') {
      (**(code **)(*param_2 + 0xf0))(param_2,&local_58);
      local_a8 = L"items";
      local_a0 = 5;
      plVar4 = (longlong *)FUN_14571608c(local_58);
      plVar5 = (longlong *)CONCAT44(uStack_4c,local_50);
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
      if (0 < (int)plVar4[1]) {
        lVar8 = 0;
        iVar7 = 0;
        do {
          plVar5 = (longlong *)FUN_1489bd410(param_1 + 0x30);
          puVar6 = (undefined8 *)(**(code **)**(undefined8 **)(*plVar4 + lVar8))();
          local_b8 = *puVar6;
          local_b0 = puVar6[1];
          if (local_b0 != 0) {
            LOCK();
            *(int *)(local_b0 + 8) = *(int *)(local_b0 + 8) + 1;
            UNLOCK();
          }
          (**(code **)(*plVar5 + 0x10))(plVar5,&local_b8);
          iVar7 = iVar7 + 1;
          lVar8 = lVar8 + 0x10;
        } while (iVar7 < (int)plVar4[1]);
      }
    }
  }
  if (param_3 == '\0') {
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489bd2dc FUN_1489bd2dc body=72 status=ok
// SIG undefined FUN_1489bd2dc(void)

void FUN_1489bd2dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b438e00;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1489bd324 FUN_1489bd324 body=38 status=ok
// SIG undefined FUN_1489bd324(void)

undefined8 FUN_1489bd324(undefined8 param_1,int param_2)

{
  FUN_1489bd2dc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489bd34a FUN_1489bd34a body=196 status=ok
// SIG undefined FUN_1489bd34a(void)

void FUN_1489bd34a(longlong param_1,longlong *param_2,char param_3)

{
  undefined1 auStack_78 [40];
  wchar_t *local_50;
  undefined4 local_48;
  wchar_t *local_40;
  undefined4 local_38;
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 == '\0') {
    (**(code **)(*param_2 + 0x18))(param_2);
  }
  local_30 = L"itemName";
  local_28 = 8;
  (**(code **)(*param_2 + 0x68))(param_2,&local_30,param_1 + 8);
  local_40 = L"uniqueItemId";
  local_38 = 0xc;
  (**(code **)(*param_2 + 0x68))(param_2,&local_40,param_1 + 0x18);
  local_50 = L"validationInfo";
  local_48 = 0xe;
  (**(code **)(*param_2 + 0x68))(param_2,&local_50,param_1 + 0x28);
  if (param_3 == '\0') {
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489bd410 FUN_1489bd410 body=64 status=ok
// SIG undefined FUN_1489bd410(void)

longlong FUN_1489bd410(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1489bd476(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x38 + *param_1;
  FUN_1489bd450(lVar2,1);
  return lVar2;
}



// FUNCTION 1489bd450 FUN_1489bd450 body=38 status=ok
// SIG undefined FUN_1489bd450(void)

void FUN_1489bd450(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_FUN_14b438e00;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1 = param_1 + 7;
  }
  return;
}



// FUNCTION 1489bd476 FUN_1489bd476 body=143 status=ok
// SIG undefined FUN_1489bd476(void)

void FUN_1489bd476(longlong param_1,int param_2)

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



// FUNCTION 1489bd506 FUN_1489bd506 body=64 status=ok
// SIG undefined FUN_1489bd506(void)

longlong FUN_1489bd506(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1465644b8(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x40 + *param_1;
  FUN_1489bd546(lVar2,1);
  return lVar2;
}



// FUNCTION 1489bd546 FUN_1489bd546 body=45 status=ok
// SIG undefined FUN_1489bd546(void)

void FUN_1489bd546(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_FUN_14b438dd0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1 = param_1 + 8;
  }
  return;
}



// FUNCTION 1489bd574 FUN_1489bd574 body=83 status=ok
// SIG undefined FUN_1489bd574(void)

void FUN_1489bd574(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  
  iVar6 = FUN_1489b9916();
  if (iVar6 == -1) {
    iVar6 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar6 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar6 + 1U) {
      FUN_1489bd5c8(param_1,iVar6);
    }
    lVar2 = *param_1;
    uVar3 = *param_2;
    uVar4 = param_2[1];
    uVar5 = param_2[3];
    puVar1 = (undefined8 *)(lVar2 + 0x10 + (longlong)iVar6 * 0x20);
    *puVar1 = param_2[2];
    puVar1[1] = uVar5;
    puVar1 = (undefined8 *)(lVar2 + (longlong)iVar6 * 0x20);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
  }
  return;
}



// FUNCTION 1489bd5c8 FUN_1489bd5c8 body=132 status=ok
// SIG undefined FUN_1489bd5c8(void)

void FUN_1489bd5c8(longlong param_1,int param_2)

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



// FUNCTION 1489bd64e FUN_1489bd64e body=83 status=ok
// SIG undefined FUN_1489bd64e(void)

undefined8 * FUN_1489bd64e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14b4384d0;
  plVar3 = (longlong *)param_1[2];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489bd6ca FUN_1489bd6ca body=126 status=ok
// SIG undefined FUN_1489bd6ca(void)

void FUN_1489bd6ca(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4384d0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  lVar2 = *(longlong *)(param_1 + 0x10);
  puVar1[2] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14b438460;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = uVar3;
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  return;
}



// FUNCTION 1489bd748 FUN_1489bd748 body=126 status=ok
// SIG undefined FUN_1489bd748(void)

void FUN_1489bd748(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4384d0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  lVar2 = *(longlong *)(param_1 + 0x10);
  puVar1[2] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14b438460;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = uVar3;
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  return;
}



// FUNCTION 1489bd7c6 FUN_1489bd7c6 body=164 status=ok
// SIG undefined FUN_1489bd7c6(void)

void FUN_1489bd7c6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  _LIST_ENTRY *p_Var2;
  undefined8 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined4 uVar6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4384d0;
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  p_Var2 = *(_LIST_ENTRY **)(param_1 + 0x10);
  (p_Var1->ProcessLocksList).Flink = p_Var2;
  if (p_Var2 != (_LIST_ENTRY *)0x0) {
    LOCK();
    *(int *)&p_Var2->Blink = *(int *)&p_Var2->Blink + 1;
    UNLOCK();
  }
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  *(undefined ***)p_Var1 = &PTR_FUN_14b438460;
  DVar4 = *(DWORD *)(param_1 + 0x24);
  DVar5 = *(DWORD *)(param_1 + 0x28);
  uVar6 = *(undefined4 *)(param_1 + 0x2c);
  p_Var1->EntryCount = *(DWORD *)(param_1 + 0x20);
  p_Var1->ContentionCount = DVar4;
  p_Var1->Flags = DVar5;
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar6;
  p_Var1->SpareWORD = (short)((uint)uVar6 >> 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  p_Var1[1].Type = (short)uVar3;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)uVar3 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)uVar3 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489bd85a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489bd86a FUN_1489bd86a body=102 status=ok
// SIG undefined FUN_1489bd86a(void)

void FUN_1489bd86a(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar2 = *(longlong *)(param_1 + 0x20);
  pcVar3 = *(code **)(param_1 + 0x28);
  iVar1 = *(int *)(param_1 + 0x30);
  local_18 = *(undefined8 *)(param_1 + 8);
  local_10 = *(longlong *)(param_1 + 0x10);
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  (*pcVar3)(lVar2 + iVar1,param_2,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489bd8d2 FUN_1489bd8d2 body=104 status=ok
// SIG undefined FUN_1489bd8d2(void)

undefined8 FUN_1489bd8d2(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar2 = *(longlong *)(param_1 + 0x20);
  pcVar3 = *(code **)(param_1 + 0x28);
  iVar1 = *(int *)(param_1 + 0x30);
  local_18 = *(undefined8 *)(param_1 + 8);
  local_10 = *(longlong *)(param_1 + 0x10);
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  (*pcVar3)(lVar2 + iVar1,param_2,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489bd968 FUN_1489bd968 body=31 status=ok
// SIG undefined FUN_1489bd968(void)

undefined8 FUN_1489bd968(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489bd9a4 FUN_1489bd9a4 body=93 status=ok
// SIG undefined FUN_1489bd9a4(void)

void FUN_1489bd9a4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b438770;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489bda02 FUN_1489bda02 body=126 status=ok
// SIG undefined FUN_1489bda02(void)

void FUN_1489bda02(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b438770;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489bda71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489bda80 FUN_1489bda80 body=21 status=ok
// SIG undefined FUN_1489bda80(void)

undefined8 FUN_1489bda80(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1489bda9e FUN_1489bda9e body=349 status=ok
// SIG undefined FUN_1489bda9e(void)

undefined4 * FUN_1489bda9e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined2 *puVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14587a20a(param_1,local_48);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  *local_40 = *puVar1;
  iVar8 = 0;
  *puVar1 = 0;
  *(undefined4 *)(local_40 + 1) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_40 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  local_40[2] = *puVar2;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  if (*(int *)(local_40 + 1) == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)*local_40;
    iVar8 = *(int *)(local_40 + 1) + -1;
  }
  uVar4 = FUN_144a49b4a(iVar8,puVar7);
  local_58 = 0;
  cVar3 = FUN_14587a17c(param_1,uVar4,local_40,&local_4c);
  if (cVar3 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar5 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x1c) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_14128aedc(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1489bdbfc FUN_1489bdbfc body=138 status=ok
// SIG undefined FUN_1489bdbfc(void)

void FUN_1489bdbfc(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x20 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
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
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1489bdc86 FUN_1489bdc86 body=68 status=ok
// SIG undefined FUN_1489bdc86(void)

void FUN_1489bdc86(longlong param_1,uint param_2)

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
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_14601161e(param_1);
  return;
}



// FUNCTION 1489bdcca FUN_1489bdcca body=114 status=ok
// SIG undefined FUN_1489bdcca(void)

void FUN_1489bdcca(longlong *param_1,int param_2)

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



// FUNCTION 1489bdd3c FUN_1489bdd3c body=114 status=ok
// SIG undefined FUN_1489bdd3c(void)

void FUN_1489bdd3c(longlong *param_1,int param_2)

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



// FUNCTION 1489bddae FUN_1489bddae body=180 status=ok
// SIG undefined FUN_1489bddae(void)

void FUN_1489bddae(undefined8 param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  bool bVar6;
  ulonglong uVar7;
  
  uVar4 = (ulonglong)DAT_14cb8e388;
  if ((longlong)uVar4 < 1) {
    return;
  }
  bVar6 = false;
  DAT_14cb8e394 = DAT_14cb8e394 + 1;
  do {
    lVar5 = uVar4 * 0x10 + -8;
    uVar7 = uVar4;
    while (((*(int *)(DAT_14cb8e380 + lVar5) != 0 &&
            (plVar1 = *(longlong **)(DAT_14cb8e380 + -8 + lVar5), plVar1 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1), cVar3 != '\0'))) {
      lVar5 = lVar5 + -0x10;
      bVar2 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar2) {
        DAT_14cb8e394 = DAT_14cb8e394 + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1489bde4b;
      }
    }
    uVar4 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  DAT_14cb8e394 = DAT_14cb8e394 + -1;
LAB_1489bde4b:
  FUN_14474d06a(&DAT_14cb8e380,0);
  return;
}



// FUNCTION 1489bde62 FUN_1489bde62 body=132 status=ok
// SIG undefined FUN_1489bde62(void)

void FUN_1489bde62(longlong *param_1,int *param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) +
                    ((int)param_3 << 0x10 | (uint)(ushort)param_3) + (uVar2 << 0x13 | uVar2) +
                    (uint)(ushort)((ushort)param_3 >> 4)) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == param_3) goto LAB_1489bde72;
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  iVar1 = -1;
LAB_1489bde72:
  *param_2 = iVar1;
  return;
}



// FUNCTION 1489bdee6 FUN_1489bdee6 body=90 status=ok
// SIG undefined FUN_1489bdee6(void)

void FUN_1489bdee6(longlong *param_1,int param_2)

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
  FUN_1489bdf40();
  return;
}



// FUNCTION 1489bdf40 FUN_1489bdf40 body=78 status=ok
// SIG undefined FUN_1489bdf40(void)

void FUN_1489bdf40(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(*param_1 + 0x10 + (longlong)param_2 * 0x20);
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
  FUN_1489bdd3c(param_1,param_2);
  return;
}



// FUNCTION 1489bdfca FUN_1489bdfca body=144 status=ok
// SIG undefined FUN_1489bdfca(void)

undefined8 FUN_1489bdfca(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  undefined2 *puVar5;
  
  FUN_140056680(param_2,&DAT_149dfb77a);
  puVar5 = &DAT_149dfb77a;
  if (DAT_14cb8e260 != 0) {
    puVar5 = DAT_14cb8e258;
  }
  iVar2 = DAT_14cb8e260 + -1;
  if (DAT_14cb8e260 == 0) {
    iVar2 = 0;
  }
  uVar1 = FUN_144a49b4a(iVar2,puVar5);
  iVar2 = FUN_140dfa800((longlong *)(param_1 + 0x38),uVar1,&DAT_14cb8e258);
  if (((iVar2 != -1) &&
      (lVar3 = (longlong)iVar2 * 0x38 + *(longlong *)(param_1 + 0x38),
      pcVar4 = (char *)(lVar3 + 0x10), pcVar4 != (char *)0x0 && lVar3 != 0)) && (*pcVar4 == '\x06'))
  {
    FUN_140b74118(pcVar4,param_2);
  }
  return param_2;
}



// FUNCTION 1489be05c FUN_1489be05c body=73 status=ok
// SIG undefined FUN_1489be05c(void)

void FUN_1489be05c(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1489be0b4 FUN_1489be0b4 body=230 status=ok
// SIG undefined FUN_1489be0b4(void)

undefined8 * FUN_1489be0b4(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1489be19c FUN_1489be19c body=130 status=ok
// SIG undefined FUN_1489be19c(void)

void FUN_1489be19c(longlong *param_1,longlong *param_2)

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



// FUNCTION 1489be220 FUN_1489be220 body=173 status=ok
// SIG undefined FUN_1489be220(void)

void FUN_1489be220(longlong *param_1,undefined4 param_2,undefined4 param_3)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1489be2a7;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1489be2a7:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1489be2ce FUN_1489be2ce body=130 status=ok
// SIG undefined FUN_1489be2ce(void)

void FUN_1489be2ce(longlong *param_1,longlong *param_2)

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



// FUNCTION 1489be352 FUN_1489be352 body=230 status=ok
// SIG undefined FUN_1489be352(void)

undefined8 * FUN_1489be352(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1489be43a FUN_1489be43a body=130 status=ok
// SIG undefined FUN_1489be43a(void)

void FUN_1489be43a(longlong *param_1,longlong *param_2)

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



// FUNCTION 1489be4be FUN_1489be4be body=173 status=ok
// SIG undefined FUN_1489be4be(void)

void FUN_1489be4be(longlong *param_1,undefined4 param_2,undefined8 param_3)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1489be545;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1489be545:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1489be56c FUN_1489be56c body=230 status=ok
// SIG undefined FUN_1489be56c(void)

undefined8 * FUN_1489be56c(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1489be654 FUN_1489be654 body=130 status=ok
// SIG undefined FUN_1489be654(void)

void FUN_1489be654(longlong *param_1,longlong *param_2)

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



// FUNCTION 1489be6d8 FUN_1489be6d8 body=192 status=ok
// SIG undefined FUN_1489be6d8(void)

void FUN_1489be6d8(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar7 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar6 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar6 < 2;
      uVar6 = uVar6 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar7) {
          return;
        }
        goto LAB_1489be76e;
      }
    }
    uVar5 = uVar6 - 1;
    bVar7 = true;
  } while (1 < uVar6);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1489be76e:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1489be798 FUN_1489be798 body=230 status=ok
// SIG undefined FUN_1489be798(void)

undefined8 * FUN_1489be798(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1489be880 FUN_1489be880 body=130 status=ok
// SIG undefined FUN_1489be880(void)

void FUN_1489be880(longlong *param_1,longlong *param_2)

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



// FUNCTION 1489be904 FUN_1489be904 body=193 status=ok
// SIG undefined FUN_1489be904(void)

void FUN_1489be904(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1489be99b;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1489be99b:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1489be9c6 FUN_1489be9c6 body=230 status=ok
// SIG undefined FUN_1489be9c6(void)

undefined8 * FUN_1489be9c6(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1489beaae FUN_1489beaae body=130 status=ok
// SIG undefined FUN_1489beaae(void)

void FUN_1489beaae(longlong *param_1,longlong *param_2)

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



// FUNCTION 1489beb32 FUN_1489beb32 body=209 status=ok
// SIG undefined FUN_1489beb32(void)

void FUN_1489beb32(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar8 = false;
  do {
    lVar6 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar6) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar6), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4,param_5),
           cVar4 != '\0'))) {
      lVar6 = lVar6 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar8) {
          return;
        }
        goto LAB_1489bebd5;
      }
    }
    uVar5 = uVar7 - 1;
    bVar8 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1489bebd5:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1489bec04 FUN_1489bec04 body=230 status=ok
// SIG undefined FUN_1489bec04(void)

undefined8 * FUN_1489bec04(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1489becec FUN_1489becec body=130 status=ok
// SIG undefined FUN_1489becec(void)

void FUN_1489becec(longlong *param_1,longlong *param_2)

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



// FUNCTION 1489bed70 FUN_1489bed70 body=175 status=ok
// SIG undefined FUN_1489bed70(void)

void FUN_1489bed70(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1489bedf9;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1489bedf9:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1489bee20 FUN_1489bee20 body=170 status=ok
// SIG undefined FUN_1489bee20(void)

void FUN_1489bee20(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  longlong *local_58;
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*param_1 != 0) {
    local_68[0] = 0;
    local_58 = (longlong *)0x0;
    FUN_14702925e(*param_1,local_68);
    if (local_68[0] != 0) {
      plVar3 = local_58;
      if (local_58 == (longlong *)0x0) {
        plVar3 = local_48;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
    *param_1 = 0;
    plVar3 = (longlong *)param_1[1];
    if (plVar3 != (longlong *)0x0) {
      param_1[1] = 0;
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
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489beecc FUN_1489beecc body=110 status=ok
// SIG undefined FUN_1489beecc(void)

void FUN_1489beecc(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(param_2,local_40);
  (**(code **)(*param_1 + 8))(param_1,local_40,param_3);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489bef3c FUN_1489bef3c body=102 status=ok
// SIG undefined FUN_1489bef3c(void)

void FUN_1489bef3c(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(param_2,local_30);
  (**(code **)(*param_1 + 0x18))(param_1,local_30,param_3);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489befa4 FUN_1489befa4 body=110 status=ok
// SIG undefined FUN_1489befa4(void)

void FUN_1489befa4(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(param_2,local_40);
  (**(code **)(*param_1 + 0x28))(param_1,local_40,param_3);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


