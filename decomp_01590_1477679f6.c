// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1477679f6 FUN_1477679f6 body=57 status=ok
// SIG undefined FUN_1477679f6(void)

void FUN_1477679f6(void)

{
  int iVar1;
  
  iVar1 = FUN_147767a30(DAT_14cab7860,DAT_14cab7864);
  if (iVar1 == DAT_14cab7864) {
    return;
  }
  DAT_14cab7864 = iVar1;
  FUN_147766f9e(DAT_14cab7860,iVar1);
  return;
}



// FUNCTION 147767a30 FUN_147767a30 body=108 status=ok
// SIG undefined FUN_147767a30(void)

ulonglong FUN_147767a30(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 4;
  if (4 < param_1) {
    iVar2 = param_2 - param_1;
    if (((longlong)iVar2 & 0x1ffffffffffff800U) == 0) {
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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,0);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 147767a9c FUN_147767a9c body=129 status=ok
// SIG undefined FUN_147767a9c(void)

void FUN_147767a9c(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = *param_2;
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_146ac6de8(param_1 + 0x18,iVar1);
  }
  lVar3 = (longlong)param_3;
  memmove((void *)(*(longlong *)(param_1 + 0x18) + lVar3 * 8 + 8),
          (void *)(*(longlong *)(param_1 + 0x18) + lVar3 * 8),
          (ulonglong)(uint)(iVar1 - param_3) << 3);
  *(undefined8 *)(*(longlong *)(param_1 + 0x18) + lVar3 * 8) = uVar2;
  FUN_146ac6d86(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + lVar3 * 8),param_1,param_2);
  return;
}



// FUNCTION 147767b1e FUN_147767b1e body=129 status=ok
// SIG undefined FUN_147767b1e(void)

void FUN_147767b1e(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = *param_2;
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_146ac127a(param_1 + 0x18,iVar1);
  }
  lVar3 = (longlong)param_3;
  memmove((void *)(*(longlong *)(param_1 + 0x18) + lVar3 * 8 + 8),
          (void *)(*(longlong *)(param_1 + 0x18) + lVar3 * 8),
          (ulonglong)(uint)(iVar1 - param_3) << 3);
  *(undefined8 *)(*(longlong *)(param_1 + 0x18) + lVar3 * 8) = uVar2;
  FUN_146ac11e4(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + lVar3 * 8),param_1,param_2);
  return;
}



// FUNCTION 147767ba0 FUN_147767ba0 body=29 status=ok
// SIG undefined FUN_147767ba0(void)

undefined8 FUN_147767ba0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147767bd8 FUN_147767bd8 body=29 status=ok
// SIG undefined FUN_147767bd8(void)

bool FUN_147767bd8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147767bf6 FUN_147767bf6 body=26 status=ok
// SIG undefined FUN_147767bf6(void)

bool FUN_147767bf6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147767c10 FUN_147767c10 body=24 status=ok
// SIG undefined FUN_147767c10(void)

bool FUN_147767c10(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147767c28 FUN_147767c28 body=101 status=ok
// SIG undefined FUN_147767c28(void)

void FUN_147767c28(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f0eae0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5406c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147767c8e FUN_147767c8e body=101 status=ok
// SIG undefined FUN_147767c8e(void)

void FUN_147767c8e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f0eae0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5406c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147767cf4 FUN_147767cf4 body=134 status=ok
// SIG undefined FUN_147767cf4(void)

void FUN_147767cf4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f0eae0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a5406c0;
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
                    /* WARNING: Could not recover jumptable at 0x000147767d6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147767d7a FUN_147767d7a body=44 status=ok
// SIG undefined FUN_147767d7a(void)

void FUN_147767d7a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147767da3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 147767da6 FUN_147767da6 body=156 status=ok
// SIG undefined FUN_147767da6(void)

bool FUN_147767da6(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
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



// FUNCTION 147767e44 FUN_147767e44 body=29 status=ok
// SIG undefined FUN_147767e44(void)

undefined8 FUN_147767e44(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147767e7c FUN_147767e7c body=29 status=ok
// SIG undefined FUN_147767e7c(void)

bool FUN_147767e7c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147767e9a FUN_147767e9a body=26 status=ok
// SIG undefined FUN_147767e9a(void)

bool FUN_147767e9a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147767eb4 FUN_147767eb4 body=24 status=ok
// SIG undefined FUN_147767eb4(void)

bool FUN_147767eb4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147767ecc FUN_147767ecc body=101 status=ok
// SIG undefined FUN_147767ecc(void)

void FUN_147767ecc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f0eb50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a540730;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147767f32 FUN_147767f32 body=101 status=ok
// SIG undefined FUN_147767f32(void)

void FUN_147767f32(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f0eb50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a540730;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147767f98 FUN_147767f98 body=134 status=ok
// SIG undefined FUN_147767f98(void)

void FUN_147767f98(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f0eb50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a540730;
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
                    /* WARNING: Could not recover jumptable at 0x00014776800f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14776801e FUN_14776801e body=52 status=ok
// SIG undefined FUN_14776801e(void)

void FUN_14776801e(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014776804f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 147768052 FUN_147768052 body=167 status=ok
// SIG undefined FUN_147768052(void)

bool FUN_147768052(longlong param_1,undefined8 param_2,undefined4 param_3)

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



// FUNCTION 1477680fa FUN_1477680fa body=29 status=ok
// SIG undefined FUN_1477680fa(void)

undefined8 FUN_1477680fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147768132 FUN_147768132 body=29 status=ok
// SIG undefined FUN_147768132(void)

bool FUN_147768132(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147768150 FUN_147768150 body=26 status=ok
// SIG undefined FUN_147768150(void)

bool FUN_147768150(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14776816a FUN_14776816a body=24 status=ok
// SIG undefined FUN_14776816a(void)

bool FUN_14776816a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147768182 FUN_147768182 body=101 status=ok
// SIG undefined FUN_147768182(void)

void FUN_147768182(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f0eae0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5407a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1477681e8 FUN_1477681e8 body=101 status=ok
// SIG undefined FUN_1477681e8(void)

void FUN_1477681e8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f0eae0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5407a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14776824e FUN_14776824e body=134 status=ok
// SIG undefined FUN_14776824e(void)

void FUN_14776824e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f0eae0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a5407a0;
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
                    /* WARNING: Could not recover jumptable at 0x0001477682c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1477682d4 FUN_1477682d4 body=44 status=ok
// SIG undefined FUN_1477682d4(void)

void FUN_1477682d4(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001477682fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 147768300 FUN_147768300 body=156 status=ok
// SIG undefined FUN_147768300(void)

bool FUN_147768300(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
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



// FUNCTION 14776839e FUN_14776839e body=29 status=ok
// SIG undefined FUN_14776839e(void)

undefined8 FUN_14776839e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477683d6 FUN_1477683d6 body=29 status=ok
// SIG undefined FUN_1477683d6(void)

bool FUN_1477683d6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1477683f4 FUN_1477683f4 body=26 status=ok
// SIG undefined FUN_1477683f4(void)

bool FUN_1477683f4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14776840e FUN_14776840e body=24 status=ok
// SIG undefined FUN_14776840e(void)

bool FUN_14776840e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147768426 FUN_147768426 body=101 status=ok
// SIG undefined FUN_147768426(void)

void FUN_147768426(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f0eb50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a540810;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14776848c FUN_14776848c body=101 status=ok
// SIG undefined FUN_14776848c(void)

void FUN_14776848c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f0eb50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a540810;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1477684f2 FUN_1477684f2 body=134 status=ok
// SIG undefined FUN_1477684f2(void)

void FUN_1477684f2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f0eb50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a540810;
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
                    /* WARNING: Could not recover jumptable at 0x000147768569. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147768578 FUN_147768578 body=52 status=ok
// SIG undefined FUN_147768578(void)

void FUN_147768578(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001477685a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1477685ac FUN_1477685ac body=167 status=ok
// SIG undefined FUN_1477685ac(void)

bool FUN_1477685ac(longlong param_1,undefined8 param_2,undefined4 param_3)

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



// FUNCTION 147768654 FUN_147768654 body=29 status=ok
// SIG undefined FUN_147768654(void)

undefined8 FUN_147768654(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14776868c FUN_14776868c body=29 status=ok
// SIG undefined FUN_14776868c(void)

bool FUN_14776868c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1477686aa FUN_1477686aa body=26 status=ok
// SIG undefined FUN_1477686aa(void)

bool FUN_1477686aa(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1477686c4 FUN_1477686c4 body=24 status=ok
// SIG undefined FUN_1477686c4(void)

bool FUN_1477686c4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1477686dc FUN_1477686dc body=101 status=ok
// SIG undefined FUN_1477686dc(void)

void FUN_1477686dc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a540880;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147768742 FUN_147768742 body=101 status=ok
// SIG undefined FUN_147768742(void)

void FUN_147768742(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a540880;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1477687a8 FUN_1477687a8 body=134 status=ok
// SIG undefined FUN_1477687a8(void)

void FUN_1477687a8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a540880;
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
                    /* WARNING: Could not recover jumptable at 0x00014776881f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14776882e FUN_14776882e body=42 status=ok
// SIG undefined FUN_14776882e(void)

void FUN_14776882e(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147768855. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 147768858 FUN_147768858 body=154 status=ok
// SIG undefined FUN_147768858(void)

bool FUN_147768858(longlong param_1,undefined4 param_2)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
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



// FUNCTION 1477688f4 FUN_1477688f4 body=154 status=ok
// SIG undefined FUN_1477688f4(void)

undefined8 * FUN_1477688f4(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = &PTR_LAB_149f05990;
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
  param_1[2] = lVar3;
  *param_1 = &PTR_FUN_14a545170;
  param_1[4] = *param_3;
  param_1[5] = 0;
  FUN_14485c47a(param_1 + 5,param_2);
  if (param_2 != 0) {
    uVar2 = FUN_14479d2ce(param_1 + 5);
    uVar2 = FUN_14477b072(uVar2,*param_3);
    param_1[3] = uVar2;
  }
  return param_1;
}



// FUNCTION 14776898e FUN_14776898e body=29 status=ok
// SIG undefined FUN_14776898e(void)

undefined8 FUN_14776898e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477689c4 FUN_1477689c4 body=29 status=ok
// SIG undefined FUN_1477689c4(void)

bool FUN_1477689c4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x28);
  return lVar1 == param_2;
}



// FUNCTION 1477689e2 FUN_1477689e2 body=26 status=ok
// SIG undefined FUN_1477689e2(void)

bool FUN_1477689e2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x28,1);
  return lVar1 == 0;
}



// FUNCTION 147768a06 FUN_147768a06 body=101 status=ok
// SIG undefined FUN_147768a06(void)

void FUN_147768a06(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05990;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a545170;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147768a6c FUN_147768a6c body=101 status=ok
// SIG undefined FUN_147768a6c(void)

void FUN_147768a6c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05990;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a545170;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147768ad2 FUN_147768ad2 body=134 status=ok
// SIG undefined FUN_147768ad2(void)

void FUN_147768ad2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f05990;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a545170;
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
                    /* WARNING: Could not recover jumptable at 0x000147768b49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147768b58 FUN_147768b58 body=125 status=ok
// SIG undefined FUN_147768b58(void)

undefined4 * FUN_147768b58(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0x3f800000;
  uStack_34 = 0;
  uStack_30 = 0x3f800000;
  uStack_2c = 0x3f800000;
  local_28 = local_28 & 0xffffff00;
  local_24 = 1;
  plVar1 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
  (**(code **)(*plVar1 + 0x248))(plVar1,*(undefined8 *)(param_1 + 0x18),&local_38);
  param_2[4] = local_28;
  *param_2 = local_38;
  param_2[1] = uStack_34;
  param_2[2] = uStack_30;
  param_2[3] = uStack_2c;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147768bd6 FUN_147768bd6 body=178 status=ok
// SIG undefined FUN_147768bd6(void)

bool FUN_147768bd6(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x28,&local_38,0);
    lVar3 = CONCAT44(uStack_34,local_38);
  }
  else {
    lVar3 = 0;
  }
  plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
  if (plVar2 != (longlong *)0x0) {
    local_38 = 0x3f800000;
    uStack_34 = 0;
    uStack_30 = 0x3f800000;
    uStack_2c = 0x3f800000;
    local_28 = 0;
    local_24 = 1;
    (**(code **)(*plVar2 + 0x248))(plVar2,*(undefined8 *)(param_1 + 0x18));
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return plVar2 != (longlong *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147768c8a FUN_147768c8a body=225 status=ok
// SIG undefined FUN_147768c8a(void)

undefined8 *
FUN_147768c8a(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  *param_1 = &PTR_LAB_14a50bb10;
  FUN_140e361c2(param_1 + 2,param_4);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_4 + 0xb0);
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x19] = *(undefined8 *)(param_4 + 0xb8);
  *(undefined8 *)(param_4 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_4 + 0xc0);
  *(undefined4 *)(param_4 + 0xc0) = 0;
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
  param_1[0x1c] = lVar4;
  *param_1 = &PTR_FUN_14a5408f0;
  param_1[0x1d] = 0;
  FUN_14485c47a(param_1 + 0x1d,param_2);
  *(undefined4 *)(param_1 + 0x1f) = uVar1;
  param_1[0x1e] = uVar2;
  return param_1;
}



// FUNCTION 147768d6c FUN_147768d6c body=52 status=ok
// SIG undefined FUN_147768d6c(void)

undefined8 * FUN_147768d6c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a50bb10;
  FUN_1476d2a2e(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147768dc0 FUN_147768dc0 body=32 status=ok
// SIG undefined FUN_147768dc0(void)

bool FUN_147768dc0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0xe8);
  return lVar1 == param_2;
}



// FUNCTION 147768de0 FUN_147768de0 body=29 status=ok
// SIG undefined FUN_147768de0(void)

bool FUN_147768de0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0xe8,1);
  return lVar1 == 0;
}



// FUNCTION 147768dfe FUN_147768dfe body=27 status=ok
// SIG undefined FUN_147768dfe(void)

bool FUN_147768dfe(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0xe8);
  return lVar1 != 0;
}



// FUNCTION 147768e1a FUN_147768e1a body=182 status=ok
// SIG undefined FUN_147768e1a(void)

void FUN_147768e1a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 0x10) {
    FUN_1446efa72(param_2,0,0x10,0x10);
    *(undefined4 *)(param_2 + 1) = 0x10;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a50bb10;
  FUN_140e361c2(puVar1 + 2,param_1 + 0x10);
  *(undefined1 *)(puVar1 + 0x18) = *(undefined1 *)(param_1 + 0xc0);
  puVar1[0x19] = 0;
  *(undefined4 *)(puVar1 + 0x1a) = 0;
  FUN_147704426(puVar1 + 0x19,param_1 + 200);
  puVar1[0x1c] = *(undefined8 *)(param_1 + 0xe0);
  *puVar1 = &PTR_FUN_14a5408f0;
  uVar2 = *(undefined8 *)(param_1 + 0xf0);
  puVar1[0x1d] = *(undefined8 *)(param_1 + 0xe8);
  puVar1[0x1e] = uVar2;
  puVar1[0x1f] = *(undefined8 *)(param_1 + 0xf8);
  return;
}



// FUNCTION 147768ed0 FUN_147768ed0 body=182 status=ok
// SIG undefined FUN_147768ed0(void)

void FUN_147768ed0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 0x10) {
    FUN_1446efa72(param_2,0,0x10,0x10);
    *(undefined4 *)(param_2 + 1) = 0x10;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a50bb10;
  FUN_140e361c2(puVar1 + 2,param_1 + 0x10);
  *(undefined1 *)(puVar1 + 0x18) = *(undefined1 *)(param_1 + 0xc0);
  puVar1[0x19] = 0;
  *(undefined4 *)(puVar1 + 0x1a) = 0;
  FUN_147704426(puVar1 + 0x19,param_1 + 200);
  puVar1[0x1c] = *(undefined8 *)(param_1 + 0xe0);
  *puVar1 = &PTR_FUN_14a5408f0;
  uVar2 = *(undefined8 *)(param_1 + 0xf0);
  puVar1[0x1d] = *(undefined8 *)(param_1 + 0xe8);
  puVar1[0x1e] = uVar2;
  puVar1[0x1f] = *(undefined8 *)(param_1 + 0xf8);
  return;
}



// FUNCTION 147768f86 FUN_147768f86 body=218 status=ok
// SIG undefined FUN_147768f86(void)

void FUN_147768f86(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 0x10) {
    FUN_1446efa72(param_2 + 1,0,0x10,0x10);
    param_2[1].LockCount = 0x10;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a50bb10;
  FUN_140e361c2(&p_Var1->ProcessLocksList,param_1 + 0x10);
  *(undefined1 *)&p_Var1[4].Type = *(undefined1 *)(param_1 + 0xc0);
  p_Var1[4].CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
  *(undefined4 *)&p_Var1[4].ProcessLocksList.Flink = 0;
  FUN_147704426(&p_Var1[4].CriticalSection,param_1 + 200);
  uVar2 = *(undefined8 *)(param_1 + 0xe0);
  p_Var1[4].EntryCount = (int)uVar2;
  p_Var1[4].ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  *(undefined ***)p_Var1 = &PTR_FUN_14a5408f0;
  uVar3 = *(undefined4 *)(param_1 + 0xec);
  uVar4 = *(undefined4 *)(param_1 + 0xf0);
  uVar5 = *(undefined4 *)(param_1 + 0xf4);
  p_Var1[4].Flags = *(DWORD *)(param_1 + 0xe8);
  p_Var1[4].CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1[4].SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[5].Type = (short)uVar4;
  p_Var1[5].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[5].field_0x4 = uVar5;
  p_Var1[5].CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 0xf8);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147769050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147769060 FUN_147769060 body=90 status=ok
// SIG undefined FUN_147769060(void)

void FUN_147769060(longlong param_1)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14479d2ce(param_1 + 0xe8);
  FUN_147769168(param_1 + 0x10,param_1 + 0xf0);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477690bc FUN_1477690bc body=171 status=ok
// SIG undefined FUN_1477690bc(void)

bool FUN_1477690bc(longlong param_1)

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
    FUN_140192332(param_1 + 0xe8,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0xe8);
  if (lVar2 != 0) {
    local_28 = lVar2;
    FUN_147769168(param_1 + 0x10,param_1 + 0xf0);
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



// FUNCTION 147769168 FUN_147769168 body=311 status=ok
// SIG undefined FUN_147769168(void)

void FUN_147769168(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_128 [32];
  undefined **local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  longlong local_d0;
  undefined8 local_c8 [10];
  undefined4 local_78;
  undefined1 local_74;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  iVar1 = *(int *)(param_2 + 1);
  pcVar2 = (code *)*param_2;
  lVar3 = *param_3;
  local_108 = &PTR_FUN_149ed05f0;
  local_100 = *(undefined4 *)(param_1 + 8);
  uStack_fc = *(undefined4 *)(param_1 + 0xc);
  uStack_f8 = *(undefined4 *)(param_1 + 0x10);
  uStack_f4 = *(undefined4 *)(param_1 + 0x14);
  local_f0 = *(undefined4 *)(param_1 + 0x18);
  uStack_ec = *(undefined4 *)(param_1 + 0x1c);
  uStack_e8 = *(undefined4 *)(param_1 + 0x20);
  uStack_e4 = *(undefined4 *)(param_1 + 0x24);
  local_e0 = *(undefined4 *)(param_1 + 0x28);
  uStack_dc = *(undefined4 *)(param_1 + 0x2c);
  uStack_d8 = *(undefined4 *)(param_1 + 0x30);
  uStack_d4 = *(undefined4 *)(param_1 + 0x34);
  local_d0 = *(longlong *)(param_1 + 0x38);
  if ((local_d0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar5 = (undefined8 *)(param_1 + 0x40);
  puVar6 = local_c8;
  for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  local_74 = *(undefined1 *)(param_1 + 0x94);
  local_78 = *(undefined4 *)(param_1 + 0x90);
  local_70 = *(undefined8 *)(param_1 + 0x98);
  local_68 = *(longlong *)(param_1 + 0xa0);
  if (local_68 != 0) {
    LOCK();
    *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
    UNLOCK();
  }
  local_60 = *(undefined8 *)(param_1 + 0xa8);
  local_58 = *(undefined1 *)(param_1 + 0xb0);
  local_50 = 0;
  local_48 = 0;
  FUN_147704426(&local_50,param_1 + 0xb8);
  (*pcVar2)(lVar3 + iVar1,&local_108);
  if ((local_38 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477692a0 FUN_1477692a0 body=29 status=ok
// SIG undefined FUN_1477692a0(void)

undefined8 FUN_1477692a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477692d8 FUN_1477692d8 body=29 status=ok
// SIG undefined FUN_1477692d8(void)

bool FUN_1477692d8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1477692f6 FUN_1477692f6 body=26 status=ok
// SIG undefined FUN_1477692f6(void)

bool FUN_1477692f6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147769310 FUN_147769310 body=24 status=ok
// SIG undefined FUN_147769310(void)

bool FUN_147769310(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147769328 FUN_147769328 body=101 status=ok
// SIG undefined FUN_147769328(void)

void FUN_147769328(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05a00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a540960;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14776938e FUN_14776938e body=101 status=ok
// SIG undefined FUN_14776938e(void)

void FUN_14776938e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05a00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a540960;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1477693f4 FUN_1477693f4 body=134 status=ok
// SIG undefined FUN_1477693f4(void)

void FUN_1477693f4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f05a00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a540960;
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
                    /* WARNING: Could not recover jumptable at 0x00014776946b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14776947a FUN_14776947a body=63 status=ok
// SIG undefined FUN_14776947a(void)

undefined8 FUN_14776947a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 1477694ba FUN_1477694ba body=199 status=ok
// SIG undefined FUN_1477694ba(void)

bool FUN_1477694ba(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined1 local_f0 [184];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_f8,0);
    lVar3 = local_f8;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,local_f0,param_2,param_3);
    FUN_14493db24(local_f0);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147769582 FUN_147769582 body=340 status=ok
// SIG undefined FUN_147769582(void)

undefined8 * FUN_147769582(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar3 = (longlong *)FUN_14001cc68(0x360);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a540a80;
  plVar4 = plVar3 + 2;
  memset(plVar4,0,0x350);
  FUN_1477696d8(plVar4);
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_1477698d0(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_147769669;
    param_1[1] = 0;
LAB_147769633:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_147769669;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_147769669;
      goto LAB_147769633;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_147769669;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_147769669:
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_38 = 0x350;
  FUN_140a52e78(*param_1,"SInputKeySelector",
                ".\\Runtime/UMG/Private/Components/InputKeySelector.cpp",0xe8);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477696d8 FUN_1477696d8 body=165 status=ok
// SIG undefined FUN_1477696d8(void)

undefined8 * FUN_1477696d8(undefined8 *param_1)

{
  FUN_140a55f88();
  *param_1 = &PTR_FUN_14a540aa0;
  FUN_146075062(param_1 + 0x4e);
  *(undefined1 *)(param_1 + 0x52) = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  *(undefined1 *)(param_1 + 0x57) = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  FUN_144a5dc74(param_1 + 0x5a);
  FUN_144a5dc74(param_1 + 0x5c);
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  *(undefined8 *)((longlong)param_1 + 0x304) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30c) = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  return param_1;
}



// FUNCTION 14776977e FUN_14776977e body=9 status=ok
// SIG undefined FUN_14776977e(void)

void FUN_14776977e(longlong param_1)

{
  FUN_1477697d0(param_1 + 0x10);
  return;
}



// FUNCTION 147769788 FUN_147769788 body=29 status=ok
// SIG undefined FUN_147769788(void)

undefined8 FUN_147769788(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477697a6 FUN_1477697a6 body=38 status=ok
// SIG undefined FUN_1477697a6(void)

undefined8 FUN_1477697a6(undefined8 param_1,int param_2)

{
  FUN_1477697d0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477697d0 FUN_1477697d0 body=256 status=ok
// SIG undefined FUN_1477697d0(void)

void FUN_1477697d0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a540aa0;
  plVar3 = (longlong *)param_1[0x68];
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
  plVar3 = (longlong *)param_1[0x66];
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
  FUN_1449db362(param_1 + 99);
  FUN_1449db362(param_1 + 0x61);
  FUN_144a65a1e(param_1[0x5f],*(undefined4 *)(param_1 + 0x60));
  if (param_1[0x5f] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x5c] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x5c] + 0x10))();
  }
  if ((longlong *)param_1[0x5a] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x5a] + 0x10))();
  }
  FUN_1449db362(param_1 + 0x58);
  FUN_146a69c52(param_1 + 0x4e);
  *param_1 = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 1477698d0 FUN_1477698d0 body=167 status=ok
// SIG undefined FUN_1477698d0(void)

void FUN_1477698d0(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14776994b;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14776994b;
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
LAB_14776994b:
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
                    /* WARNING: Could not recover jumptable at 0x00014776996b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 147769978 FUN_147769978 body=29 status=ok
// SIG undefined FUN_147769978(void)

undefined8 FUN_147769978(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477699b0 FUN_1477699b0 body=29 status=ok
// SIG undefined FUN_1477699b0(void)

bool FUN_1477699b0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1477699ce FUN_1477699ce body=26 status=ok
// SIG undefined FUN_1477699ce(void)

bool FUN_1477699ce(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1477699e8 FUN_1477699e8 body=24 status=ok
// SIG undefined FUN_1477699e8(void)

bool FUN_1477699e8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147769a0c FUN_147769a0c body=101 status=ok
// SIG undefined FUN_147769a0c(void)

void FUN_147769a0c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a540d50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a540ce0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147769a72 FUN_147769a72 body=101 status=ok
// SIG undefined FUN_147769a72(void)

void FUN_147769a72(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a540d50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a540ce0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147769ad8 FUN_147769ad8 body=134 status=ok
// SIG undefined FUN_147769ad8(void)

void FUN_147769ad8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a540d50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a540ce0;
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
                    /* WARNING: Could not recover jumptable at 0x000147769b4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147769b5e FUN_147769b5e body=44 status=ok
// SIG undefined FUN_147769b5e(void)

void FUN_147769b5e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147769b87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 147769b8a FUN_147769b8a body=156 status=ok
// SIG undefined FUN_147769b8a(void)

bool FUN_147769b8a(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
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



// FUNCTION 147769c2a FUN_147769c2a body=29 status=ok
// SIG undefined FUN_147769c2a(void)

undefined8 FUN_147769c2a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147769c62 FUN_147769c62 body=29 status=ok
// SIG undefined FUN_147769c62(void)

bool FUN_147769c62(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147769c80 FUN_147769c80 body=26 status=ok
// SIG undefined FUN_147769c80(void)

bool FUN_147769c80(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147769c9a FUN_147769c9a body=24 status=ok
// SIG undefined FUN_147769c9a(void)

bool FUN_147769c9a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147769cb2 FUN_147769cb2 body=101 status=ok
// SIG undefined FUN_147769cb2(void)

void FUN_147769cb2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a540dc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147769d18 FUN_147769d18 body=101 status=ok
// SIG undefined FUN_147769d18(void)

void FUN_147769d18(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a540dc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147769d7e FUN_147769d7e body=134 status=ok
// SIG undefined FUN_147769d7e(void)

void FUN_147769d7e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a540dc0;
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
                    /* WARNING: Could not recover jumptable at 0x000147769df5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147769e04 FUN_147769e04 body=39 status=ok
// SIG undefined FUN_147769e04(void)

void FUN_147769e04(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147769e27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 147769e2c FUN_147769e2c body=146 status=ok
// SIG undefined FUN_147769e2c(void)

bool FUN_147769e2c(longlong param_1)

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



// FUNCTION 147769ec0 FUN_147769ec0 body=338 status=ok
// SIG undefined FUN_147769ec0(void)

longlong * FUN_147769ec0(longlong *param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_4;
  plVar3 = (longlong *)FUN_14001cc68(0x3b0,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a540e30;
  plVar4 = plVar3 + 2;
  FUN_146ad695a(plVar4);
  local_40 = plVar4;
  local_38 = plVar3;
  FUN_14776a03c(&local_40,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_147769fa6;
    param_1[1] = 0;
LAB_147769f6c:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_147769fa6;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = (longlong)plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = (longlong)plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_147769fa6;
      goto LAB_147769f6c;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_147769fa6;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_147769fa6:
  plVar4 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_48 = 0x3a0;
  FUN_140a52e78(*param_1,"SInvalidationPanel",param_2,param_3);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14776a014 FUN_14776a014 body=9 status=ok
// SIG undefined FUN_14776a014(void)

void FUN_14776a014(longlong param_1)

{
  FUN_1429068d2(param_1 + 0x10);
  return;
}



// FUNCTION 14776a01e FUN_14776a01e body=29 status=ok
// SIG undefined FUN_14776a01e(void)

undefined8 FUN_14776a01e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14776a03c FUN_14776a03c body=167 status=ok
// SIG undefined FUN_14776a03c(void)

void FUN_14776a03c(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14776a0b7;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14776a0b7;
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
LAB_14776a0b7:
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
                    /* WARNING: Could not recover jumptable at 0x00014776a0d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14776a0e4 FUN_14776a0e4 body=123 status=ok
// SIG undefined FUN_14776a0e4(void)

undefined8 FUN_14776a0e4(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined8 *local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = (**(code **)(*param_1 + 0x58))();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    (**(code **)(*(longlong *)(lVar1 + 0x4e8) + 0xd0))(lVar1 + 0x4e8,&local_20);
    if (local_18 < 1) {
      uVar2 = 0;
    }
    else {
      uVar2 = *local_20;
    }
    if (local_20 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14776a160 FUN_14776a160 body=127 status=ok
// SIG undefined FUN_14776a160(void)

undefined8 FUN_14776a160(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14776a1e0(param_1,&local_28,param_2);
  if (local_28 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(local_28 + 0x278);
  }
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



// FUNCTION 14776a1e0 FUN_14776a1e0 body=205 status=ok
// SIG undefined FUN_14776a1e0(void)

longlong * FUN_14776a1e0(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = (**(code **)(*param_1 + 0x58))();
  if (lVar3 != 0) {
    (**(code **)(*(longlong *)(lVar3 + 0x4e8) + 0xd8))(lVar3 + 0x4e8,&local_30,param_3);
    lVar3 = local_30 + -0x280;
    if (local_30 == 0) {
      lVar3 = 0;
    }
    *param_2 = lVar3;
    param_2[1] = (longlong)local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_28 + 1) = (int)local_28[1] + 1;
      UNLOCK();
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
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14776a2ae FUN_14776a2ae body=348 status=ok
// SIG undefined FUN_14776a2ae(void)

int FUN_14776a2ae(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar2 = *(int *)(param_1 + 0x718) - *(int *)(param_1 + 0x744);
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar2) {
    FUN_14079e7a6(param_2);
  }
  local_48 = param_1 + 0x720;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  if (*(int *)(param_1 + 0x738) != 0) {
    FUN_1449c0562(&local_50);
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = (longlong *)(param_1 + 0x710);
  if (iStack_3c < *(int *)(local_48 + 0x18)) {
    do {
      uVar1 = *(undefined8 *)(*local_78 + (longlong)iStack_5c * 0x10);
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_1447f76d2(param_2,iVar2);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = uVar1;
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < *(int *)(local_68 + 0x18));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return *(int *)(param_1 + 0x718) - *(int *)(param_1 + 0x744);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14776a40c FUN_14776a40c body=125 status=ok
// SIG undefined FUN_14776a40c(void)

bool FUN_14776a40c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = param_2;
  FUN_147713b68(param_1 + 0x4f0,&local_30);
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_30 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14776a48a FUN_14776a48a body=118 status=ok
// SIG undefined FUN_14776a48a(void)

void FUN_14776a48a(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_2;
  FUN_14770610a(param_1,&local_30);
  if (local_28 == '\x01') {
    *(undefined1 *)(param_1 + 0x859) = 1;
    *(undefined8 *)(param_1 + 0x7c8) = local_30;
    *(undefined4 *)(param_1 + 2000) = param_3;
    FUN_146af42a2(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14776a502 FUN_14776a502 body=212 status=ok
// SIG undefined FUN_14776a502(void)

undefined1 * FUN_14776a502(undefined1 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 1;
  *(undefined2 *)(param_1 + 8) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  param_1[0x10] = 2;
  uVar1 = DAT_14c98de08;
  FUN_1446ddc76(&local_30,"ListView",1);
  uVar1 = FUN_1458178ee(uVar1,local_30,0,0);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  uVar1 = DAT_14c98de08;
  FUN_1446ddc76(&local_38,"ScrollBar",1);
  uVar1 = FUN_145817968(uVar1,local_38,0,0);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  param_1[0x38] = 0;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14776a5d8 FUN_14776a5d8 body=813 status=ok
// SIG undefined FUN_14776a5d8(void)

undefined8
FUN_14776a5d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_488 [32];
  undefined1 *local_468;
  undefined1 local_459;
  code *local_458;
  undefined4 local_450;
  undefined4 uStack_44c;
  undefined4 local_440;
  undefined1 local_43c;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined2 local_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined1 local_410 [424];
  undefined8 local_268;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  longlong *local_1d8;
  undefined4 local_140;
  undefined1 local_13c;
  undefined1 local_138 [32];
  undefined1 local_118;
  undefined4 local_100;
  undefined1 local_fc;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined1 local_bf;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined1 local_a4;
  undefined2 local_a0;
  undefined1 local_98 [16];
  undefined1 local_88;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_488;
  FUN_147707988(local_410);
  plVar3 = local_1d8;
  local_a4 = 1;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_1e0 = 0;
  if (local_1d8 != (longlong *)0x0) {
    local_1d8 = (longlong *)0x0;
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
  local_428 = CONCAT11(1,*param_4);
  local_420 = 0;
  uStack_418 = 0;
  local_a0 = local_428;
  local_1f0 = param_3;
  FUN_144a450dc(local_98,&local_420);
  FUN_1449db362(&local_420);
  local_118 = param_4[8];
  local_bf = param_4[9];
  local_440 = *(undefined4 *)(param_4 + 4);
  local_43c = 1;
  local_438 = 0;
  uStack_430 = 0;
  local_13c = 1;
  local_140 = local_440;
  FUN_144a450dc(local_138,&local_438);
  FUN_1449db362(&local_438);
  local_88 = param_4[10];
  local_100 = *(undefined4 *)(param_4 + 0xc);
  local_fc = param_4[0x10];
  local_268 = *(undefined8 *)(param_4 + 0x18);
  local_c8 = *(undefined8 *)(param_4 + 0x20);
  local_b4 = *(undefined4 *)(param_4 + 0x28);
  uStack_b0 = *(undefined4 *)(param_4 + 0x2c);
  uStack_ac = *(undefined4 *)(param_4 + 0x30);
  uStack_a8 = *(undefined4 *)(param_4 + 0x34);
  local_c0 = param_4[0x38];
  local_458 = FUN_14776a9fc;
  local_450 = 0x290;
  uVar4 = FUN_14776a906(local_410,param_2,&local_458);
  local_458 = FUN_14776acd6;
  local_450 = 0x290;
  uVar4 = FUN_14776abe0(uVar4,param_2,&local_458);
  local_458 = (code *)&LAB_14776adfc;
  local_450 = 0x290;
  uVar4 = FUN_14776ad06(uVar4,param_2,&local_458);
  local_458 = FUN_14773d7da;
  local_450 = 0;
  uVar4 = FUN_14776ae0a(uVar4,param_2,&local_458);
  local_458 = FUN_14776aff6;
  local_450 = 0x290;
  uVar4 = FUN_14776af00(uVar4,param_2,&local_458);
  local_458 = FUN_14776b16a;
  local_450 = 0x290;
  uVar4 = FUN_14776b074(uVar4,param_2,&local_458);
  local_458 = FUN_14776b30a;
  local_450 = 0x290;
  uVar4 = FUN_14776b214(uVar4,param_2,&local_458);
  local_458 = FUN_14776b416;
  local_450 = 0x290;
  uVar4 = FUN_14776b320(uVar4,param_2,&local_458);
  local_458 = FUN_14776b53a;
  local_450 = 0x290;
  uVar4 = FUN_14776b444(uVar4,param_2,&local_458);
  local_468 = &local_459;
  FUN_14770f2b8(&local_458,"ListViewT<ItemType>","Runtime\\UMG\\Public\\Components/ListViewBase.h",
                0xfd);
  FUN_147708370(&local_458,param_1,uVar4);
  plVar3 = (longlong *)CONCAT44(uStack_44c,local_450);
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
  FUN_1477083e4(local_410);
  if ((local_50 ^ (ulonglong)auStack_488) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14776a906 FUN_14776a906 body=245 status=ok
// SIG undefined FUN_14776a906(void)

longlong FUN_14776a906(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14a50bb80;
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
  *local_40 = &PTR_FUN_14a540f00;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_144a450dc(param_1 + 0x1b0,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14776a9fc FUN_14776a9fc body=482 status=ok
// SIG undefined FUN_14776a9fc(void)

longlong * FUN_14776a9fc(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  float local_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  (**(code **)(*param_1 + 0x70))(param_1,&local_40);
  local_48 = local_40;
  if ((local_40 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  lVar5 = (**(code **)(*param_1 + 0x78))(param_1,param_3,&local_48,param_4);
  lVar3 = *(longlong *)(lVar5 + 0x10);
  lVar6 = *(longlong *)(lVar3 + 0x110);
  if (lVar6 == 0) {
    FUN_140aa6c08(lVar3);
    lVar6 = *(longlong *)(lVar3 + 0x110);
  }
  FUN_14779beb4(lVar6,&local_58);
  (**(code **)(*param_1 + 0x80))(param_1,&local_78,param_3);
  local_5c = local_4c + fStack_6c;
  local_60 = local_50 + local_70;
  local_64 = local_54 + fStack_74;
  local_68 = local_58 + local_78;
  FUN_14779ab1e(lVar5);
  FUN_140760c2c(lVar5,&local_78);
  lVar3 = CONCAT44(fStack_74,local_78);
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) | 4;
  FUN_144a88240(lVar3 + 0x18,lVar3);
  plVar4 = (longlong *)CONCAT44(fStack_6c,local_70);
  if (plVar4 == (longlong *)0x0) {
    lVar6 = lVar3 + 0x280;
    if (lVar3 == 0) {
      lVar6 = 0;
    }
    *param_2 = lVar6;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    lVar6 = lVar3 + 0x280;
    if (lVar3 == 0) {
      lVar6 = 0;
    }
    *param_2 = lVar6;
    param_2[1] = (longlong)plVar4;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
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
  plVar4 = (longlong *)CONCAT44(fStack_6c,local_70);
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
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14776abe0 FUN_14776abe0 body=245 status=ok
// SIG undefined FUN_14776abe0(void)

longlong FUN_14776abe0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14a50bbf0;
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
  *local_40 = &PTR_FUN_14a540f70;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_144a450dc(param_1 + 0x2b0,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14776acd6 FUN_14776acd6 body=47 status=ok
// SIG undefined FUN_14776acd6(void)

void FUN_14776acd6(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  (**(code **)(*param_1 + 0xa0))();
  uVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  FUN_14575d514(uVar1,param_2);
  return;
}



// FUNCTION 14776ad06 FUN_14776ad06 body=245 status=ok
// SIG undefined FUN_14776ad06(void)

longlong FUN_14776ad06(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14a541050;
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
  *local_40 = &PTR_FUN_14a540fe0;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_144a450dc(param_1 + 0x2c0,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14776ae0a FUN_14776ae0a body=245 status=ok
// SIG undefined FUN_14776ae0a(void)

longlong FUN_14776ae0a(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14a541130;
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
  *local_40 = &PTR_FUN_14a5410c0;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_144a450dc(param_1 + 0x1e0,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14776af00 FUN_14776af00 body=245 status=ok
// SIG undefined FUN_14776af00(void)

longlong FUN_14776af00(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14a541210;
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
  *local_40 = &PTR_FUN_14a5411a0;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_144a450dc(param_1 + 0x200,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14776aff6 FUN_14776aff6 body=124 status=ok
// SIG undefined FUN_14776aff6(void)

void FUN_14776aff6(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  lVar1 = FUN_14776a160(param_1,&local_20);
  if (lVar1 != 0) {
    (**(code **)(*param_1 + 0xb0))(param_1,local_20,lVar1);
    uVar2 = (**(code **)(*param_1 + 0x30))(param_1);
    FUN_14776c33e(uVar2,local_20,lVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14776b074 FUN_14776b074 body=245 status=ok
// SIG undefined FUN_14776b074(void)

longlong FUN_14776b074(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14a5412f0;
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
  *local_40 = &PTR_FUN_14a541280;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_144a450dc(param_1 + 0x1f0,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14776b16a FUN_14776b16a body=168 status=ok
// SIG undefined FUN_14776b16a(void)

void FUN_14776b16a(longlong *param_1,double param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = (**(code **)(*param_1 + 0x58))();
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(lVar1 + 0x268) + 0x10))(lVar1 + 0x268,local_50);
    (**(code **)(*param_1 + 0xb8))(param_1,(float)param_2,(float)local_48);
    uVar2 = (**(code **)(*param_1 + 0x20))(param_1);
    FUN_14020a86a(uVar2,(float)param_2,(float)local_48);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14776b214 FUN_14776b214 body=245 status=ok
// SIG undefined FUN_14776b214(void)

longlong FUN_14776b214(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_149e020b0;
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
  *local_40 = &PTR_FUN_14a541360;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_144a450dc(param_1 + 0x210,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14776b30a FUN_14776b30a body=22 status=ok
// SIG undefined FUN_14776b30a(void)

void FUN_14776b30a(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x28))();
  FUN_1447f69b6(uVar1);
  return;
}



// FUNCTION 14776b320 FUN_14776b320 body=245 status=ok
// SIG undefined FUN_14776b320(void)

longlong FUN_14776b320(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14a541440;
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
  *local_40 = &PTR_FUN_14a5413d0;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_144a450dc(param_1 + 0x290,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14776b416 FUN_14776b416 body=46 status=ok
// SIG undefined FUN_14776b416(void)

void FUN_14776b416(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  (**(code **)(*param_1 + 0x90))();
  uVar1 = (**(code **)*param_1)(param_1);
  FUN_14575d514(uVar1,param_2);
  return;
}



// FUNCTION 14776b444 FUN_14776b444 body=245 status=ok
// SIG undefined FUN_14776b444(void)

longlong FUN_14776b444(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14a541440;
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
  *local_40 = &PTR_FUN_14a5413d0;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_144a450dc(param_1 + 0x2a0,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14776b53a FUN_14776b53a body=47 status=ok
// SIG undefined FUN_14776b53a(void)

void FUN_14776b53a(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  (**(code **)(*param_1 + 0x98))();
  uVar1 = (**(code **)(*param_1 + 8))(param_1);
  FUN_14575d514(uVar1,param_2);
  return;
}



// FUNCTION 14776b56a FUN_14776b56a body=29 status=ok
// SIG undefined FUN_14776b56a(void)

undefined8 FUN_14776b56a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14776b5a2 FUN_14776b5a2 body=29 status=ok
// SIG undefined FUN_14776b5a2(void)

bool FUN_14776b5a2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14776b5c0 FUN_14776b5c0 body=26 status=ok
// SIG undefined FUN_14776b5c0(void)

bool FUN_14776b5c0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14776b5da FUN_14776b5da body=24 status=ok
// SIG undefined FUN_14776b5da(void)

bool FUN_14776b5da(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14776b5f2 FUN_14776b5f2 body=101 status=ok
// SIG undefined FUN_14776b5f2(void)

void FUN_14776b5f2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a50bb80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a540f00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14776b658 FUN_14776b658 body=101 status=ok
// SIG undefined FUN_14776b658(void)

void FUN_14776b658(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a50bb80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a540f00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14776b6be FUN_14776b6be body=134 status=ok
// SIG undefined FUN_14776b6be(void)

void FUN_14776b6be(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a50bb80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a540f00;
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
                    /* WARNING: Could not recover jumptable at 0x00014776b735. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14776b744 FUN_14776b744 body=63 status=ok
// SIG undefined FUN_14776b744(void)

undefined8 FUN_14776b744(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 14776b784 FUN_14776b784 body=218 status=ok
// SIG undefined FUN_14776b784(void)

bool FUN_14776b784(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  longlong *local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar3 = FUN_144a61b4f();
  if (cVar3 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar5 = local_40;
  }
  else {
    lVar5 = 0;
  }
  lVar4 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar4 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar4,local_50,param_2,param_3);
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
  if ((lVar5 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar5);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar4 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14776b860 FUN_14776b860 body=29 status=ok
// SIG undefined FUN_14776b860(void)

undefined8 FUN_14776b860(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14776b898 FUN_14776b898 body=29 status=ok
// SIG undefined FUN_14776b898(void)

bool FUN_14776b898(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14776b8b6 FUN_14776b8b6 body=26 status=ok
// SIG undefined FUN_14776b8b6(void)

bool FUN_14776b8b6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14776b8d0 FUN_14776b8d0 body=24 status=ok
// SIG undefined FUN_14776b8d0(void)

bool FUN_14776b8d0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14776b8e8 FUN_14776b8e8 body=101 status=ok
// SIG undefined FUN_14776b8e8(void)

void FUN_14776b8e8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a50bbf0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a540f70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14776b94e FUN_14776b94e body=101 status=ok
// SIG undefined FUN_14776b94e(void)

void FUN_14776b94e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a50bbf0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a540f70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14776b9b4 FUN_14776b9b4 body=134 status=ok
// SIG undefined FUN_14776b9b4(void)

void FUN_14776b9b4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a50bbf0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a540f70;
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
                    /* WARNING: Could not recover jumptable at 0x00014776ba2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14776ba3a FUN_14776ba3a body=52 status=ok
// SIG undefined FUN_14776ba3a(void)

void FUN_14776ba3a(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014776ba6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 14776ba6e FUN_14776ba6e body=167 status=ok
// SIG undefined FUN_14776ba6e(void)

bool FUN_14776ba6e(longlong param_1,undefined8 param_2,undefined4 param_3)

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



// FUNCTION 14776bb16 FUN_14776bb16 body=29 status=ok
// SIG undefined FUN_14776bb16(void)

undefined8 FUN_14776bb16(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14776bb4e FUN_14776bb4e body=29 status=ok
// SIG undefined FUN_14776bb4e(void)

bool FUN_14776bb4e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14776bb6c FUN_14776bb6c body=26 status=ok
// SIG undefined FUN_14776bb6c(void)

bool FUN_14776bb6c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14776bb86 FUN_14776bb86 body=24 status=ok
// SIG undefined FUN_14776bb86(void)

bool FUN_14776bb86(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14776bbaa FUN_14776bbaa body=101 status=ok
// SIG undefined FUN_14776bbaa(void)

void FUN_14776bbaa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541050;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a540fe0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14776bc10 FUN_14776bc10 body=101 status=ok
// SIG undefined FUN_14776bc10(void)

void FUN_14776bc10(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541050;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a540fe0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14776bc76 FUN_14776bc76 body=134 status=ok
// SIG undefined FUN_14776bc76(void)

void FUN_14776bc76(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a541050;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a540fe0;
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
                    /* WARNING: Could not recover jumptable at 0x00014776bced. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14776bcfc FUN_14776bcfc body=44 status=ok
// SIG undefined FUN_14776bcfc(void)

void FUN_14776bcfc(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014776bd25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 14776bd28 FUN_14776bd28 body=156 status=ok
// SIG undefined FUN_14776bd28(void)

bool FUN_14776bd28(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
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



// FUNCTION 14776bdc8 FUN_14776bdc8 body=29 status=ok
// SIG undefined FUN_14776bdc8(void)

undefined8 FUN_14776bdc8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14776be00 FUN_14776be00 body=29 status=ok
// SIG undefined FUN_14776be00(void)

bool FUN_14776be00(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14776be1e FUN_14776be1e body=26 status=ok
// SIG undefined FUN_14776be1e(void)

bool FUN_14776be1e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14776be38 FUN_14776be38 body=24 status=ok
// SIG undefined FUN_14776be38(void)

bool FUN_14776be38(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14776be5c FUN_14776be5c body=101 status=ok
// SIG undefined FUN_14776be5c(void)

void FUN_14776be5c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541130;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5410c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14776bec2 FUN_14776bec2 body=101 status=ok
// SIG undefined FUN_14776bec2(void)

void FUN_14776bec2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541130;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5410c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14776bf28 FUN_14776bf28 body=134 status=ok
// SIG undefined FUN_14776bf28(void)

void FUN_14776bf28(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a541130;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a5410c0;
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
                    /* WARNING: Could not recover jumptable at 0x00014776bf9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14776bfae FUN_14776bfae body=44 status=ok
// SIG undefined FUN_14776bfae(void)

void FUN_14776bfae(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014776bfd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 14776bfda FUN_14776bfda body=156 status=ok
// SIG undefined FUN_14776bfda(void)

bool FUN_14776bfda(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
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



// FUNCTION 14776c07a FUN_14776c07a body=29 status=ok
// SIG undefined FUN_14776c07a(void)

undefined8 FUN_14776c07a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14776c0b2 FUN_14776c0b2 body=29 status=ok
// SIG undefined FUN_14776c0b2(void)

bool FUN_14776c0b2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14776c0d0 FUN_14776c0d0 body=26 status=ok
// SIG undefined FUN_14776c0d0(void)

bool FUN_14776c0d0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14776c0ea FUN_14776c0ea body=24 status=ok
// SIG undefined FUN_14776c0ea(void)

bool FUN_14776c0ea(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14776c10e FUN_14776c10e body=101 status=ok
// SIG undefined FUN_14776c10e(void)

void FUN_14776c10e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541210;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5411a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14776c174 FUN_14776c174 body=101 status=ok
// SIG undefined FUN_14776c174(void)

void FUN_14776c174(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541210;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5411a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14776c1da FUN_14776c1da body=134 status=ok
// SIG undefined FUN_14776c1da(void)

void FUN_14776c1da(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a541210;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a5411a0;
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
                    /* WARNING: Could not recover jumptable at 0x00014776c251. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14776c260 FUN_14776c260 body=52 status=ok
// SIG undefined FUN_14776c260(void)

void FUN_14776c260(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014776c291. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 14776c294 FUN_14776c294 body=167 status=ok
// SIG undefined FUN_14776c294(void)

bool FUN_14776c294(longlong param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 14776c33e FUN_14776c33e body=175 status=ok
// SIG undefined FUN_14776c33e(void)

void FUN_14776c33e(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
        goto LAB_14776c3c7;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14776c3c7:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14776c3ee FUN_14776c3ee body=29 status=ok
// SIG undefined FUN_14776c3ee(void)

undefined8 FUN_14776c3ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14776c426 FUN_14776c426 body=29 status=ok
// SIG undefined FUN_14776c426(void)

bool FUN_14776c426(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14776c444 FUN_14776c444 body=26 status=ok
// SIG undefined FUN_14776c444(void)

bool FUN_14776c444(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14776c45e FUN_14776c45e body=24 status=ok
// SIG undefined FUN_14776c45e(void)

bool FUN_14776c45e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14776c482 FUN_14776c482 body=101 status=ok
// SIG undefined FUN_14776c482(void)

void FUN_14776c482(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5412f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a541280;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14776c4e8 FUN_14776c4e8 body=101 status=ok
// SIG undefined FUN_14776c4e8(void)

void FUN_14776c4e8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5412f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a541280;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14776c54e FUN_14776c54e body=134 status=ok
// SIG undefined FUN_14776c54e(void)

void FUN_14776c54e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a5412f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a541280;
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
                    /* WARNING: Could not recover jumptable at 0x00014776c5c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14776c5d4 FUN_14776c5d4 body=52 status=ok
// SIG undefined FUN_14776c5d4(void)

void FUN_14776c5d4(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014776c605. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2);
  return;
}



// FUNCTION 14776c608 FUN_14776c608 body=162 status=ok
// SIG undefined FUN_14776c608(void)

bool FUN_14776c608(longlong param_1,undefined4 param_2)

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



// FUNCTION 14776c6ae FUN_14776c6ae body=29 status=ok
// SIG undefined FUN_14776c6ae(void)

undefined8 FUN_14776c6ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14776c6e6 FUN_14776c6e6 body=29 status=ok
// SIG undefined FUN_14776c6e6(void)

bool FUN_14776c6e6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14776c704 FUN_14776c704 body=26 status=ok
// SIG undefined FUN_14776c704(void)

bool FUN_14776c704(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14776c71e FUN_14776c71e body=24 status=ok
// SIG undefined FUN_14776c71e(void)

bool FUN_14776c71e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14776c736 FUN_14776c736 body=101 status=ok
// SIG undefined FUN_14776c736(void)

void FUN_14776c736(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a541360;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14776c79c FUN_14776c79c body=101 status=ok
// SIG undefined FUN_14776c79c(void)

void FUN_14776c79c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a541360;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14776c802 FUN_14776c802 body=134 status=ok
// SIG undefined FUN_14776c802(void)

void FUN_14776c802(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a541360;
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
                    /* WARNING: Could not recover jumptable at 0x00014776c879. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14776c888 FUN_14776c888 body=39 status=ok
// SIG undefined FUN_14776c888(void)

void FUN_14776c888(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014776c8ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 14776c8b0 FUN_14776c8b0 body=146 status=ok
// SIG undefined FUN_14776c8b0(void)

bool FUN_14776c8b0(longlong param_1)

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



// FUNCTION 14776c944 FUN_14776c944 body=29 status=ok
// SIG undefined FUN_14776c944(void)

undefined8 FUN_14776c944(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14776c97c FUN_14776c97c body=29 status=ok
// SIG undefined FUN_14776c97c(void)

bool FUN_14776c97c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14776c99a FUN_14776c99a body=26 status=ok
// SIG undefined FUN_14776c99a(void)

bool FUN_14776c99a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14776c9b4 FUN_14776c9b4 body=24 status=ok
// SIG undefined FUN_14776c9b4(void)

bool FUN_14776c9b4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14776c9d8 FUN_14776c9d8 body=101 status=ok
// SIG undefined FUN_14776c9d8(void)

void FUN_14776c9d8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a5413d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14776ca3e FUN_14776ca3e body=101 status=ok
// SIG undefined FUN_14776ca3e(void)

void FUN_14776ca3e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a5413d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14776caa4 FUN_14776caa4 body=134 status=ok
// SIG undefined FUN_14776caa4(void)

void FUN_14776caa4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a541440;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a5413d0;
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
                    /* WARNING: Could not recover jumptable at 0x00014776cb1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14776cb2a FUN_14776cb2a body=44 status=ok
// SIG undefined FUN_14776cb2a(void)

void FUN_14776cb2a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014776cb53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 14776cb56 FUN_14776cb56 body=156 status=ok
// SIG undefined FUN_14776cb56(void)

bool FUN_14776cb56(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
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



// FUNCTION 14776cbf6 FUN_14776cbf6 body=29 status=ok
// SIG undefined FUN_14776cbf6(void)

undefined8 FUN_14776cbf6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14776cc2e FUN_14776cc2e body=29 status=ok
// SIG undefined FUN_14776cc2e(void)

bool FUN_14776cc2e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14776cc4c FUN_14776cc4c body=26 status=ok
// SIG undefined FUN_14776cc4c(void)

bool FUN_14776cc4c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14776cc66 FUN_14776cc66 body=24 status=ok
// SIG undefined FUN_14776cc66(void)

bool FUN_14776cc66(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14776cc8a FUN_14776cc8a body=101 status=ok
// SIG undefined FUN_14776cc8a(void)

void FUN_14776cc8a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541520;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5414b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14776ccf0 FUN_14776ccf0 body=101 status=ok
// SIG undefined FUN_14776ccf0(void)

void FUN_14776ccf0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541520;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5414b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14776cd56 FUN_14776cd56 body=134 status=ok
// SIG undefined FUN_14776cd56(void)

void FUN_14776cd56(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a541520;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a5414b0;
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
                    /* WARNING: Could not recover jumptable at 0x00014776cdcd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14776cddc FUN_14776cddc body=52 status=ok
// SIG undefined FUN_14776cddc(void)

void FUN_14776cddc(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014776ce0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 14776ce10 FUN_14776ce10 body=167 status=ok
// SIG undefined FUN_14776ce10(void)

bool FUN_14776ce10(longlong param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 14776ceba FUN_14776ceba body=175 status=ok
// SIG undefined FUN_14776ceba(void)

void FUN_14776ceba(longlong *param_1,undefined8 param_2,undefined4 param_3)

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
        goto LAB_14776cf43;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14776cf43:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14776cf6a FUN_14776cf6a body=115 status=ok
// SIG undefined FUN_14776cf6a(void)

void FUN_14776cf6a(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_3;
  local_18 = param_3[1];
  local_28 = *param_2;
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_14776702c(param_1,&local_28,&local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14776cfde FUN_14776cfde body=168 status=ok
// SIG undefined FUN_14776cfde(void)

undefined8 *
FUN_14776cfde(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_4;
  local_20 = param_4[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_14776d088(param_2,&local_38,*param_3,&local_28);
  *param_1 = local_38;
  param_1[1] = local_30;
  if (local_30 != (longlong *)0x0) {
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
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14776d088 FUN_14776d088 body=375 status=ok
// SIG undefined FUN_14776d088(void)

undefined8 FUN_14776d088(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_288 [32];
  longlong *local_268;
  longlong local_260;
  longlong local_258;
  undefined8 local_250;
  longlong *local_248;
  undefined1 *local_240;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined1 local_228 [424];
  undefined1 local_80;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_288;
  lVar3 = *param_1;
  FUN_14776d200(local_228);
  local_80 = *(undefined1 *)(lVar3 + 0x1a8);
  local_240 = &LAB_14776d354;
  local_238 = 0;
  uVar5 = FUN_14776d25e(local_228,lVar3,&local_240);
  local_240 = &LAB_14776d458;
  local_238 = 0;
  uVar5 = FUN_14776d362(uVar5,lVar3,&local_240);
  uVar5 = FUN_14776d466(uVar5,param_4);
  local_248 = &local_260;
  local_258 = param_1[1];
  local_268 = &local_258;
  local_260 = lVar3;
  local_250 = param_3;
  FUN_14776d854(&local_240,"ObjectTableRowT","Runtime\\UMG\\Public\\Components/ListViewBase.h",0x265
               );
  FUN_14776d4c0(&local_240,param_2,uVar5);
  plVar4 = (longlong *)CONCAT44(uStack_234,local_238);
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
  FUN_14776d54a(local_228);
  plVar4 = *(longlong **)(param_4 + 8);
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
  if ((local_48 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14776d200 FUN_14776d200 body=94 status=ok
// SIG undefined FUN_14776d200(void)

longlong FUN_14776d200(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  
  FUN_140a5071c();
  *(undefined1 *)(param_1 + 0x1a8) = 1;
  *(undefined8 *)(param_1 + 0x1b0) = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  *(longlong *)(param_1 + 0x1b8) = DAT_14c98ded0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  return param_1;
}



// FUNCTION 14776d25e FUN_14776d25e body=245 status=ok
// SIG undefined FUN_14776d25e(void)

longlong FUN_14776d25e(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14a541610;
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
  *local_40 = &PTR_FUN_14a5415a0;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_144a450dc(param_1 + 0x1c0,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14776d362 FUN_14776d362 body=245 status=ok
// SIG undefined FUN_14776d362(void)

longlong FUN_14776d362(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14a541610;
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
  *local_40 = &PTR_FUN_14a5415a0;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_144a450dc(param_1 + 0x1d0,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14776d466 FUN_14776d466 body=90 status=ok
// SIG undefined FUN_14776d466(void)

longlong FUN_14776d466(longlong param_1,undefined8 *param_2)

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
  plVar5 = *(longlong **)(param_1 + 0x1b8);
  *(undefined8 *)(param_1 + 0x1b0) = uVar3;
  *(longlong *)(param_1 + 0x1b8) = lVar4;
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



// FUNCTION 14776d4c0 FUN_14776d4c0 body=138 status=ok
// SIG undefined FUN_14776d4c0(void)

longlong * FUN_14776d4c0(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  
  FUN_140a515e6(*param_1,param_3);
  puVar1 = (undefined8 *)param_1[2];
  FUN_14776f85a(*param_1,param_3,*puVar1,puVar1[1],*(undefined8 *)puVar1[2]);
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
  return param_2;
}



// FUNCTION 14776d54a FUN_14776d54a body=88 status=ok
// SIG undefined FUN_14776d54a(void)

void FUN_14776d54a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1449db362(param_1 + 0x1d0);
  FUN_1449db362(param_1 + 0x1c0);
  plVar3 = *(longlong **)(param_1 + 0x1b8);
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



// FUNCTION 14776d5a2 FUN_14776d5a2 body=29 status=ok
// SIG undefined FUN_14776d5a2(void)

undefined8 FUN_14776d5a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14776d5da FUN_14776d5da body=29 status=ok
// SIG undefined FUN_14776d5da(void)

bool FUN_14776d5da(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14776d5f8 FUN_14776d5f8 body=26 status=ok
// SIG undefined FUN_14776d5f8(void)

bool FUN_14776d5f8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14776d612 FUN_14776d612 body=24 status=ok
// SIG undefined FUN_14776d612(void)

bool FUN_14776d612(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14776d636 FUN_14776d636 body=101 status=ok
// SIG undefined FUN_14776d636(void)

void FUN_14776d636(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541610;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5415a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14776d69c FUN_14776d69c body=101 status=ok
// SIG undefined FUN_14776d69c(void)

void FUN_14776d69c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541610;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5415a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14776d702 FUN_14776d702 body=134 status=ok
// SIG undefined FUN_14776d702(void)

void FUN_14776d702(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a541610;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a5415a0;
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
                    /* WARNING: Could not recover jumptable at 0x00014776d779. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14776d788 FUN_14776d788 body=44 status=ok
// SIG undefined FUN_14776d788(void)

void FUN_14776d788(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014776d7b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 14776d7b4 FUN_14776d7b4 body=156 status=ok
// SIG undefined FUN_14776d7b4(void)

bool FUN_14776d7b4(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
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



// FUNCTION 14776d854 FUN_14776d854 body=385 status=ok
// SIG undefined FUN_14776d854(void)

undefined8 *
FUN_14776d854(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
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
  plVar4 = (longlong *)FUN_14001cc68(0x2d8);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a541680;
  plVar1 = plVar4 + 2;
  memset(plVar1,0,0x2c8);
  FUN_14776d9d6(plVar1);
  local_50 = plVar1;
  local_48 = plVar4;
  FUN_14776f7b2(&local_50,plVar1);
  plVar1 = local_48;
  if (local_48 == (longlong *)0x0) {
    *param_1 = local_50;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_14776d969;
    param_1[1] = 0;
LAB_14776d92c:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_14776d969;
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
      if (plVar4 == (longlong *)0x0) goto LAB_14776d969;
      goto LAB_14776d92c;
    }
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_14776d969;
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
LAB_14776d969:
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
  local_58 = 0x2c8;
  FUN_140a52e78(*param_1,param_2,param_3,param_4);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14776d9d6 FUN_14776d9d6 body=171 status=ok
// SIG undefined FUN_14776d9d6(void)

undefined8 * FUN_14776d9d6(undefined8 *param_1)

{
  FUN_140a55f88();
  param_1[0x4d] = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 0x4e) = 0;
  FUN_1405bceb4(param_1 + 0x4d);
  param_1[0x4f] = 0;
  *param_1 = &PTR_FUN_14a5416a0;
  param_1[0x4d] = &PTR_FUN_14a541900;
  param_1[0x50] = &PTR_LAB_14a541920;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x2c4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2c6) = 0;
  return param_1;
}



// FUNCTION 14776da82 FUN_14776da82 body=9 status=ok
// SIG undefined FUN_14776da82(void)

void FUN_14776da82(longlong param_1)

{
  FUN_14776f3fa(param_1 + 0x10);
  return;
}



// FUNCTION 14776da8c FUN_14776da8c body=29 status=ok
// SIG undefined FUN_14776da8c(void)

undefined8 FUN_14776da8c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14776daaa FUN_14776daaa body=38 status=ok
// SIG undefined FUN_14776daaa(void)

undefined8 FUN_14776daaa(undefined8 param_1,int param_2)

{
  FUN_14776f3fa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14776dad0 FUN_14776dad0 body=1018 status=ok
// SIG undefined FUN_14776dad0(void)

char * FUN_14776dad0(longlong param_1,char *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  char cVar12;
  int iVar13;
  uint uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  bool bVar18;
  undefined1 auStack_178 [44];
  undefined4 local_14c;
  undefined1 local_148 [16];
  undefined8 local_138;
  longlong *plStack_130;
  undefined8 local_128;
  longlong *plStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  ulonglong local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e0;
  undefined1 local_d8 [136];
  undefined4 local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  *(undefined1 *)(param_1 + 0x2c4) = 0;
  FUN_14778db56();
  if ((*param_2 != '\0') || (plVar5 = *(longlong **)(param_1 + 0x2b8), plVar5 == (longlong *)0x0))
  goto LAB_14776db0f;
  iVar13 = (int)plVar5[1];
  do {
    if (iVar13 == 0) goto LAB_14776db0f;
    LOCK();
    iVar11 = (int)plVar5[1];
    bVar18 = iVar13 == iVar11;
    if (bVar18) {
      *(int *)(plVar5 + 1) = iVar13 + 1;
      iVar11 = iVar13;
    }
    iVar13 = iVar11;
    UNLOCK();
  } while (!bVar18);
  plVar6 = *(longlong **)(param_1 + 0x2b0);
  if (plVar6 != (longlong *)0x0) {
    iVar13 = (**(code **)(*(longlong *)(param_1 + 0x280) + 0x78))(param_1 + 0x280);
    lVar7 = *(longlong *)(param_4 + 0x40);
    plVar8 = *(longlong **)(param_4 + 0x50);
    if (plVar8 == (longlong *)0x0) {
      if ((iVar13 != 0) && (lVar7 == CONCAT44(DAT_14c966e98._4_4_,(undefined4)DAT_14c966e98)))
      goto LAB_14776dc0a;
    }
    else {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      lVar10 = CONCAT44(DAT_14c966e98._4_4_,(undefined4)DAT_14c966e98);
      LOCK();
      plVar2 = plVar8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar3 = (int *)((longlong)plVar8 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
      if (iVar13 != 0 && lVar7 == lVar10) {
LAB_14776dc0a:
        cVar12 = FUN_14776f72a(param_1);
        if (cVar12 != '\0') {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
          puVar15 = (undefined8 *)(**(code **)(*plVar6 + 0x48))(plVar6);
          LOCK();
          plVar8 = plVar5 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar3 = (int *)((longlong)plVar5 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
          if (puVar15 != (undefined8 *)0x0) {
            local_100 = *puVar15;
            cVar12 = (**(code **)(*plVar6 + 0x10))(plVar6);
            if (cVar12 == '\0') {
              if (iVar13 != 3) {
                (**(code **)(*plVar6 + 0x30))(plVar6);
              }
              (**(code **)(*plVar6 + 0x28))(plVar6,local_100,1,1);
              *(undefined1 *)(param_1 + 0x2c4) = 1;
            }
          }
          local_100 = CONCAT71(local_100._1_7_,1);
          local_e0 = 0;
          local_f8 = 0;
          uStack_f0 = 0;
          memset(local_d8,0,0x88);
          uVar16 = DAT_14c966ea8;
          local_50 = 0x20702;
          local_4c = 0;
          local_118 = (undefined4)DAT_14c966e98;
          uStack_114 = DAT_14c966e98._4_4_;
          uStack_110 = (undefined4)DAT_14c966ea0;
          uStack_10c = DAT_14c966ea0._4_4_;
          local_108 = DAT_14c966ea8;
          if (DAT_14c966ea8 != 0) {
            LOCK();
            *(int *)(DAT_14c966ea8 + 8) = *(int *)(DAT_14c966ea8 + 8) + 1;
            UNLOCK();
          }
          plVar8 = *(longlong **)(param_1 + 0x10);
          if (plVar8 == (longlong *)0x0) {
LAB_14776dd55:
            local_128 = 0;
            plStack_120 = (longlong *)0x0;
            local_14c = (undefined4)CONCAT71((int7)(uVar16 >> 8),1);
          }
          else {
            uVar16 = (ulonglong)*(uint *)(plVar8 + 1);
            do {
              uVar14 = (uint)uVar16;
              if (uVar14 == 0) goto LAB_14776dd55;
              LOCK();
              uVar4 = *(uint *)(plVar8 + 1);
              if (uVar14 == uVar4) {
                *(uint *)(plVar8 + 1) = uVar14 + 1;
              }
              else {
                uVar16 = (ulonglong)uVar4;
              }
              UNLOCK();
            } while (uVar14 != uVar4);
            uVar17 = *(undefined8 *)(param_1 + 8);
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
            LOCK();
            plVar2 = plVar8 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plVar8)(plVar8);
              LOCK();
              piVar3 = (int *)((longlong)plVar8 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
              }
            }
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
            local_14c = 0;
            local_128 = uVar17;
            plStack_120 = plVar8;
          }
          plVar2 = plStack_120;
          uVar17 = FUN_1407c9a0c(&local_100,&local_128,&local_118);
          plVar8 = *(longlong **)(param_1 + 0x10);
          if (plVar8 == (longlong *)0x0) {
LAB_14776ddd7:
            local_138 = 0;
            plStack_130 = (longlong *)0x0;
            bVar18 = true;
          }
          else {
            iVar13 = (int)plVar8[1];
            do {
              if (iVar13 == 0) goto LAB_14776ddd7;
              LOCK();
              iVar11 = (int)plVar8[1];
              bVar18 = iVar13 == iVar11;
              if (bVar18) {
                *(int *)(plVar8 + 1) = iVar13 + 1;
                iVar11 = iVar13;
              }
              iVar13 = iVar11;
              UNLOCK();
            } while (!bVar18);
            uVar9 = *(undefined8 *)(param_1 + 8);
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
              piVar3 = (int *)((longlong)plVar8 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
              }
            }
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
            bVar18 = false;
            local_138 = uVar9;
            plStack_130 = plVar8;
          }
          plVar8 = plStack_130;
          uVar17 = FUN_140592a6e(uVar17,&local_138);
          FUN_1402c17c2(param_2,uVar17);
          if (!bVar18) {
            LOCK();
            plVar1 = plVar8 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar8)(plVar8);
              LOCK();
              piVar3 = (int *)((longlong)plVar8 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
              }
            }
          }
          plVar8 = plStack_120;
          if (plStack_120 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_120 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_120)(plStack_120);
              LOCK();
              piVar3 = (int *)((longlong)plVar8 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
              }
            }
          }
          if ((char)local_14c == '\0') {
            LOCK();
            plVar8 = plVar2 + 1;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)*plVar8 == 0) {
              (**(code **)*plVar2)(plVar2);
              LOCK();
              piVar3 = (int *)((longlong)plVar2 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*plVar2 + 0x10))(plVar2);
              }
            }
          }
          FUN_14493db24(&local_100);
          if (puVar15 != (undefined8 *)0x0) {
            local_100 = *puVar15;
            cVar12 = (**(code **)(*plVar6 + 0x18))(plVar6);
            if (cVar12 != '\0') goto LAB_14776dbcd;
          }
          (**(code **)(*plVar6 + 0xe8))(plVar6,local_148);
          FUN_140592b68(param_2,local_148,0,0);
        }
      }
    }
  }
LAB_14776dbcd:
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
LAB_14776db0f:
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14776decc FUN_14776decc body=1476 status=ok
// SIG undefined FUN_14776decc(void)

char * FUN_14776decc(longlong param_1,char *param_2,float *param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  char cVar9;
  int iVar10;
  undefined8 *puVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  int local_13c;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 local_118;
  undefined1 local_110 [136];
  undefined4 local_88;
  undefined1 local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_14778dd4e();
  if ((*param_2 != '\0') || (plVar3 = *(longlong **)(param_1 + 0x2b8), plVar3 == (longlong *)0x0))
  goto LAB_14776df20;
  iVar10 = (int)plVar3[1];
  do {
    if (iVar10 == 0) goto LAB_14776df20;
    LOCK();
    iVar8 = (int)plVar3[1];
    bVar12 = iVar10 == iVar8;
    if (bVar12) {
      *(int *)(plVar3 + 1) = iVar10 + 1;
      iVar8 = iVar10;
    }
    iVar10 = iVar8;
    UNLOCK();
  } while (!bVar12);
  plVar4 = *(longlong **)(param_1 + 0x2b0);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    plVar2 = (longlong *)(param_1 + 0x280);
    puVar11 = (undefined8 *)(**(code **)(*plVar4 + 0x48))(plVar4,plVar2);
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
    if (puVar11 != (undefined8 *)0x0) {
      iVar10 = (**(code **)(*plVar2 + 0x78))(plVar2);
      lVar5 = *(longlong *)(param_4 + 0x40);
      plVar6 = *(longlong **)(param_4 + 0x50);
      if (plVar6 == (longlong *)0x0) {
        if (lVar5 == DAT_14c966e98) {
          cVar9 = FUN_140591fd6(param_1);
          goto joined_r0x00014776e17e;
        }
      }
      else {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        if (lVar5 == DAT_14c966e98) {
          local_148 = puVar11;
          local_13c = iVar10;
          cVar9 = FUN_140591fd6(param_1);
          LOCK();
          plVar2 = plVar6 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          puVar11 = local_148;
          iVar10 = local_13c;
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            puVar11 = local_148;
            iVar10 = local_13c;
            if (*piVar1 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
              puVar11 = local_148;
              iVar10 = local_13c;
            }
          }
joined_r0x00014776e17e:
          if (cVar9 != '\0') {
            if (*(char *)(param_1 + 0x2c4) != '\0') goto LAB_14776e059;
            cVar9 = FUN_14776f72a(param_1);
            if (cVar9 != '\0') {
              fVar14 = param_3[8] * 0.0;
              fVar15 = param_3[7] * 0.0;
              fVar13 = param_3[10] * 0.0;
              fVar16 = param_3[9] * 0.0;
              local_138 = CONCAT44(fVar13 + fVar14 + param_3[0xc],fVar16 + fVar15 + param_3[0xb]);
              local_130 = CONCAT44(*param_3 * param_3[8] + fVar13,*param_3 * param_3[7] + fVar16);
              uStack_128 = CONCAT44(param_3[10] * param_3[1] + fVar14,
                                    param_3[1] * param_3[9] + fVar15);
              cVar9 = FUN_1402b2a42(&local_138,*(undefined8 *)(param_4 + 0x20));
              if (cVar9 != '\0') {
                if (iVar10 == 2) {
                  (**(code **)(*plVar4 + 0x30))(plVar4);
LAB_14776e059:
                  (**(code **)(*plVar4 + 0x40))(plVar4);
                  local_138 = CONCAT71(local_138._1_7_,1);
                  local_118 = 0;
                  local_130 = 0;
                  uStack_128 = 0;
                  memset(local_110,0,0x88);
                  local_88 = 0x20702;
                  local_84 = 0;
                  FUN_1403d4924(param_2,&local_138);
                  FUN_14493db24(&local_138);
                }
                else if ((iVar10 == 3) &&
                        (iVar10 = (**(code **)(*plVar4 + 0x70))(plVar4), 1 < iVar10)) {
                  local_138 = *puVar11;
                  cVar9 = (**(code **)(*plVar4 + 0x10))(plVar4);
                  if (cVar9 != '\0') {
                    (**(code **)(*plVar4 + 0x30))(plVar4);
                    (**(code **)(*plVar4 + 0x28))(plVar4,*puVar11,1,1);
                    goto LAB_14776e059;
                  }
                }
              }
            }
            cVar9 = (**(code **)(*plVar4 + 0xa8))(plVar4);
            if (cVar9 != '\0') {
              local_138 = CONCAT71(local_138._1_7_,1);
              local_118 = 0;
              local_130 = 0;
              uStack_128 = 0;
              memset(local_110,0,0x88);
              local_88 = 0x20702;
              local_84 = 0;
              FUN_1403d4924(param_2,&local_138);
              FUN_14493db24(&local_138);
            }
            plVar4 = *(longlong **)(param_2 + 0x40);
            param_2[0x38] = '\0';
            param_2[0x39] = '\0';
            param_2[0x3a] = '\0';
            param_2[0x3b] = '\0';
            param_2[0x3c] = '\0';
            param_2[0x3d] = '\0';
            param_2[0x3e] = '\0';
            param_2[0x3f] = '\0';
            param_2[0x40] = '\0';
            param_2[0x41] = '\0';
            param_2[0x42] = '\0';
            param_2[0x43] = '\0';
            param_2[0x44] = '\0';
            param_2[0x45] = '\0';
            param_2[0x46] = '\0';
            param_2[0x47] = '\0';
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar4 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar4 + 0x10))();
              }
            }
            *(uint *)(param_2 + 0xb4) = (*(uint *)(param_2 + 0xb4) & 0xffffffde) + 1;
            FUN_1402c17c2(param_2,param_2);
            goto LAB_14776e265;
          }
        }
        else {
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
      }
      if (iVar10 != 0) {
        lVar5 = *(longlong *)(param_4 + 0x40);
        plVar6 = *(longlong **)(param_4 + 0x50);
        lVar7 = DAT_14c966fa0;
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          lVar7 = DAT_14c966fa0;
          UNLOCK();
          LOCK();
          plVar2 = plVar6 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          local_148 = puVar11;
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            puVar11 = local_148;
            if (*piVar1 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
              puVar11 = local_148;
            }
          }
        }
        if (lVar5 == lVar7) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
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
          cVar9 = FUN_146af41be(plVar4 + -0x9d);
          if (cVar9 == '\0') {
            cVar9 = FUN_14776f72a(param_1);
            if (cVar9 != '\0') {
              local_138 = *puVar11;
              cVar9 = (**(code **)(*plVar4 + 0x10))(plVar4);
              if (cVar9 == '\0') {
                (**(code **)(*plVar4 + 0x30))(plVar4);
                (**(code **)(*plVar4 + 0x28))(plVar4,*puVar11,1,1);
                (**(code **)(*plVar4 + 0x40))(plVar4,2);
              }
            }
            (**(code **)(*plVar4 + 0xa0))(plVar4,*puVar11,param_4);
            local_138 = CONCAT71(local_138._1_7_,1);
            local_118 = 0;
            local_130 = 0;
            uStack_128 = 0;
            memset(local_110,0,0x88);
            local_88 = 0x20702;
            local_84 = 0;
            FUN_1403d4924(param_2,&local_138);
            FUN_14493db24(&local_138);
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
      }
    }
  }
LAB_14776e265:
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
LAB_14776df20:
  if ((local_80 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14776e492 FUN_14776e492 body=104 status=ok
// SIG undefined FUN_14776e492(void)

void FUN_14776e492(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  
  FUN_14778df46();
  if (((*(longlong *)(param_1 + 0x278) != 0) && (*(int *)(param_1 + 0x290) != 0)) &&
     (*(longlong **)(param_1 + 0x288) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x288) + 0x30))();
    if (((cVar2 != '\0') && (*(int *)(param_1 + 0x290) != 0)) &&
       (plVar1 = *(longlong **)(param_1 + 0x288), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014776e4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x60))(plVar1,*(undefined8 *)(param_1 + 0x278));
      return;
    }
  }
  return;
}



// FUNCTION 14776e4fa FUN_14776e4fa body=104 status=ok
// SIG undefined FUN_14776e4fa(void)

void FUN_14776e4fa(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  
  FUN_14778e006();
  if (((*(longlong *)(param_1 + 0x278) != 0) && (*(int *)(param_1 + 0x2a0) != 0)) &&
     (*(longlong **)(param_1 + 0x298) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x298) + 0x30))();
    if (((cVar2 != '\0') && (*(int *)(param_1 + 0x2a0) != 0)) &&
       (plVar1 = *(longlong **)(param_1 + 0x298), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014776e558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x60))(plVar1,*(undefined8 *)(param_1 + 0x278));
      return;
    }
  }
  return;
}



// FUNCTION 14776e562 FUN_14776e562 body=371 status=ok
// SIG undefined FUN_14776e562(void)

undefined1 * FUN_14776e562(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  
  lVar8 = *(longlong *)(param_4 + 0x40);
  plVar3 = *(longlong **)(param_4 + 0x50);
  lVar5 = DAT_14c966e98;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    lVar5 = DAT_14c966e98;
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
  }
  if ((lVar8 == lVar5) && (plVar3 = *(longlong **)(param_1 + 0x2b8), plVar3 != (longlong *)0x0)) {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_14776e693;
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar9 = iVar7 == iVar6;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar9);
    plVar4 = *(longlong **)(param_1 + 0x2b0);
    bVar9 = true;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      lVar8 = (**(code **)(*plVar4 + 0x48))(plVar4);
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
      if (lVar8 != 0) {
        (**(code **)(*plVar4 + 0xb0))(plVar4);
        *param_2 = 1;
        bVar9 = false;
        param_2[0x20] = 0;
        *(undefined8 *)(param_2 + 8) = 0;
        *(undefined8 *)(param_2 + 0x10) = 0;
        memset(param_2 + 0x28,0,0x88);
        *(undefined4 *)(param_2 + 0xb0) = 0x20702;
        param_2[0xb4] = 0;
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
    if (!bVar9) {
      return param_2;
    }
  }
LAB_14776e693:
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 14776e6d6 FUN_14776e6d6 body=531 status=ok
// SIG undefined FUN_14776e6d6(void)

undefined1 *
FUN_14776e6d6(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_128 [32];
  undefined1 local_108 [16];
  undefined1 local_f8 [8];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_d8;
  undefined1 local_d0 [136];
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(char *)(param_1 + 0x2c7) == '\x01') {
    plVar7 = *(longlong **)(param_1 + 0x2b8);
    bVar2 = true;
    if (plVar7 == (longlong *)0x0) {
      plVar7 = (longlong *)0x0;
      plVar8 = (longlong *)0x0;
    }
    else {
      iVar5 = (int)plVar7[1];
      plVar8 = (longlong *)0x0;
      do {
        if (iVar5 == 0) {
          plVar7 = (longlong *)0x0;
          goto LAB_14776e7b1;
        }
        LOCK();
        iVar3 = (int)plVar7[1];
        bVar9 = iVar5 == iVar3;
        if (bVar9) {
          *(int *)(plVar7 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
      } while (!bVar9);
      plVar8 = *(longlong **)(param_1 + 0x2b0);
      bVar2 = false;
    }
LAB_14776e7b1:
    if (*(char *)(param_1 + 0x2c6) == '\x01') {
      *(undefined1 *)(param_1 + 0x2c6) = 0;
      if (plVar8 == (longlong *)0x0) {
        *param_2 = 0;
        param_2[0x20] = 0;
        *(undefined8 *)(param_2 + 8) = 0;
        *(undefined8 *)(param_2 + 0x10) = 0;
        memset(param_2 + 0x28,0,0x88);
        *(undefined4 *)(param_2 + 0xb0) = 0x20702;
        param_2[0xb4] = 0;
      }
      else {
        local_f8[0] = 1;
        local_d8 = 0;
        local_f0 = 0;
        uStack_e8 = 0;
        memset(local_d0,0,0x88);
        local_48 = 0x20702;
        local_44 = 0;
        (**(code **)(*plVar8 + 0xe8))(plVar8,local_108);
        uVar6 = FUN_140592a6e(local_f8,local_108);
        FUN_1403d4c6e(param_2,uVar6);
        FUN_14493db24(local_f8);
      }
    }
    else {
      cVar4 = FUN_140591fd6(param_1);
      if ((cVar4 != '\0') && ((plVar8 != (longlong *)0x0 & *(byte *)(param_1 + 0x2c4)) == 1)) {
        (**(code **)(*plVar8 + 0x40))(plVar8,2);
      }
      FUN_14778e398(param_1,param_2,param_3,param_4);
    }
    if (!bVar2) {
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
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x2c6) = 0;
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  if ((local_40 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14776e8ea FUN_14776e8ea body=372 status=ok
// SIG undefined FUN_14776e8ea(void)

undefined8 FUN_14776e8ea(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  longlong *plStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong local_e8;
  undefined1 local_e0 [8];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c0;
  undefined1 local_b8 [136];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_128;
  *(undefined1 *)(param_1 + 0x2c6) = 1;
  local_e0[0] = 1;
  local_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  memset(local_b8,0,0x88);
  local_30 = 0x20702;
  local_f8 = (undefined4)DAT_14c966e98;
  uStack_f4 = DAT_14c966e98._4_4_;
  uStack_f0 = (undefined4)DAT_14c966ea0;
  uStack_ec = DAT_14c966ea0._4_4_;
  local_e8 = DAT_14c966ea8;
  if (DAT_14c966ea8 != 0) {
    LOCK();
    *(int *)(DAT_14c966ea8 + 8) = *(int *)(DAT_14c966ea8 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_14776e9b5:
    local_108 = 0;
    plStack_100 = (longlong *)0x0;
    bVar8 = true;
  }
  else {
    iVar6 = (int)plVar4[1];
    do {
      if (iVar6 == 0) goto LAB_14776e9b5;
      LOCK();
      iVar5 = (int)plVar4[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar4 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    uVar7 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
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
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    bVar8 = false;
    local_108 = uVar7;
    plStack_100 = plVar4;
  }
  plVar4 = plStack_100;
  uVar7 = FUN_1407c9a0c(local_e0,&local_108,&local_f8);
  FUN_1403d4c6e(param_2,uVar7);
  plVar1 = plStack_100;
  if (plStack_100 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_100 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_100)(plStack_100);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (!bVar8) {
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
  FUN_14493db24(local_e0);
  if ((local_28 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14776ea60 FUN_14776ea60 body=552 status=ok
// SIG undefined FUN_14776ea60(void)

undefined8 FUN_14776ea60(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  bool bVar11;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_d8;
  undefined1 local_d0 [136];
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_14778f856();
  if (*(char *)(param_1 + 0x2c6) != '\x01') goto LAB_14776eb26;
  *(undefined1 *)(param_1 + 0x2c6) = 0;
  plVar4 = *(longlong **)(param_1 + 0x2b8);
  if (plVar4 == (longlong *)0x0) goto LAB_14776eb26;
  iVar8 = (int)plVar4[1];
  do {
    if (iVar8 == 0) goto LAB_14776eb26;
    LOCK();
    iVar6 = (int)plVar4[1];
    bVar11 = iVar8 == iVar6;
    if (bVar11) {
      *(int *)(plVar4 + 1) = iVar8 + 1;
      iVar6 = iVar8;
    }
    iVar8 = iVar6;
    UNLOCK();
  } while (!bVar11);
  plVar5 = *(longlong **)(param_1 + 0x2b0);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    plVar3 = (longlong *)(param_1 + 0x280);
    puVar10 = (undefined8 *)(**(code **)(*plVar5 + 0x48))(plVar5,plVar3);
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
    if (puVar10 != (undefined8 *)0x0) {
      cVar7 = FUN_14776f72a(param_1);
      if ((cVar7 != '\0') && (uVar9 = (**(code **)(*plVar3 + 0x78))(plVar3), uVar9 != 0)) {
        local_f8 = *puVar10;
        cVar7 = (**(code **)(*plVar5 + 0x10))(plVar5);
        if (cVar7 == '\0') {
          if (uVar9 != 3) {
            (**(code **)(*plVar5 + 0x30))(plVar5);
          }
        }
        else if ((uVar9 & 0xfffffffe) != 2) goto LAB_14776ec1e;
        (**(code **)(*plVar5 + 0x28))(plVar5,*puVar10,1,1);
        (**(code **)(*plVar5 + 0x40))(plVar5);
        local_f8 = CONCAT71(local_f8._1_7_,1);
        local_d8 = 0;
        local_f0 = 0;
        uStack_e8 = 0;
        memset(local_d0,0,0x88);
        local_48 = 0x20702;
        local_44 = 0;
        FUN_1403d4924(param_2,&local_f8);
        FUN_14493db24(&local_f8);
      }
LAB_14776ec1e:
      cVar7 = (**(code **)(*plVar5 + 0xa8))(plVar5);
      if (cVar7 != '\0') {
        local_f8 = CONCAT71(local_f8._1_7_,1);
        local_d8 = 0;
        local_f0 = 0;
        uStack_e8 = 0;
        memset(local_d0,0,0x88);
        local_48 = 0x20702;
        local_44 = 0;
        FUN_1403d4924(param_2,&local_f8);
        FUN_14493db24(&local_f8);
      }
    }
  }
  LOCK();
  plVar5 = plVar4 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
LAB_14776eb26:
  if ((local_40 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14776eca0 FUN_14776eca0 body=263 status=ok
// SIG undefined FUN_14776eca0(void)

void FUN_14776eca0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  bool bVar9;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0x2b8);
  if (plVar3 != (longlong *)0x0) {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_14776ed3a;
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
    plVar4 = *(longlong **)(param_1 + 0x2b0);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      puVar8 = (undefined8 *)(**(code **)(*plVar4 + 0x48))(plVar4,param_1 + 0x280);
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
      if (puVar8 != (undefined8 *)0x0) {
        FUN_14776f768(param_1,*(undefined8 *)(param_1 + 0x278),*puVar8);
        local_30 = *puVar8;
        cVar6 = (**(code **)(*plVar4 + 0x10))(plVar4);
        if ((cVar6 != '\0') && (cVar6 = FUN_14776f72a(param_1), cVar6 == '\0')) {
          (**(code **)(*plVar4 + 0x28))(plVar4,*puVar8,0,0);
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
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_14776ed3a:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14776ee16 FUN_14776ee16 body=201 status=ok
// SIG undefined FUN_14776ee16(void)

undefined4 FUN_14776ee16(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  bool bVar9;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x38);
  if (plVar3 == (longlong *)0x0) {
LAB_14776ee9c:
    uVar7 = 0;
    goto LAB_14776ee9e;
  }
  iVar6 = (int)plVar3[1];
  do {
    if (iVar6 == 0) goto LAB_14776ee9c;
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar9 = iVar6 == iVar5;
    if (bVar9) {
      *(int *)(plVar3 + 1) = iVar6 + 1;
      iVar5 = iVar6;
    }
    iVar6 = iVar5;
    UNLOCK();
  } while (!bVar9);
  plVar4 = *(longlong **)(param_1 + 0x30);
  if (plVar4 == (longlong *)0x0) {
LAB_14776eebf:
    uVar7 = 0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    puVar8 = (undefined8 *)(**(code **)(*plVar4 + 0x48))(plVar4);
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
    if (puVar8 == (undefined8 *)0x0) goto LAB_14776eebf;
    local_28 = *puVar8;
    uVar7 = (**(code **)(*plVar4 + 0x60))(plVar4);
  }
  LOCK();
  plVar4 = plVar3 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_14776ee9e:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 14776eee0 FUN_14776eee0 body=234 status=ok
// SIG undefined FUN_14776eee0(void)

void FUN_14776eee0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  bool bVar10;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x38);
  if (plVar3 != (longlong *)0x0) {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_14776efac;
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
    plVar4 = *(longlong **)(param_1 + 0x30);
    if ((plVar4 != (longlong *)0x0) &&
       (cVar6 = (**(code **)(*plVar4 + 0x68))(plVar4,*(undefined4 *)(param_1 + 0x40)), cVar6 != '\0'
       )) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      puVar9 = (undefined8 *)(**(code **)(*plVar4 + 0x48))(plVar4,param_1);
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
      if (puVar9 != (undefined8 *)0x0) {
        local_28 = *puVar9;
        uVar8 = (**(code **)(*plVar4 + 0x60))(plVar4);
        (**(code **)(*plVar4 + 0x50))(plVar4,*puVar9,uVar8 ^ 1);
      }
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
LAB_14776efac:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14776efcc FUN_14776efcc body=201 status=ok
// SIG undefined FUN_14776efcc(void)

undefined4 FUN_14776efcc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  bool bVar9;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x38);
  if (plVar3 == (longlong *)0x0) {
LAB_14776f052:
    uVar7 = 0;
    goto LAB_14776f054;
  }
  iVar6 = (int)plVar3[1];
  do {
    if (iVar6 == 0) goto LAB_14776f052;
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar9 = iVar6 == iVar5;
    if (bVar9) {
      *(int *)(plVar3 + 1) = iVar6 + 1;
      iVar5 = iVar6;
    }
    iVar6 = iVar5;
    UNLOCK();
  } while (!bVar9);
  plVar4 = *(longlong **)(param_1 + 0x30);
  if (plVar4 == (longlong *)0x0) {
LAB_14776f075:
    uVar7 = 0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    puVar8 = (undefined8 *)(**(code **)(*plVar4 + 0x48))(plVar4);
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
    if (puVar8 == (undefined8 *)0x0) goto LAB_14776f075;
    local_28 = *puVar8;
    uVar7 = (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  LOCK();
  plVar4 = plVar3 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_14776f054:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 14776f096 FUN_14776f096 body=103 status=ok
// SIG undefined FUN_14776f096(void)

undefined4 FUN_14776f096(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  
  plVar2 = *(longlong **)(param_1 + 0x38);
  uVar6 = 0;
  if (plVar2 != (longlong *)0x0) {
    iVar5 = (int)plVar2[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    plVar3 = *(longlong **)(param_1 + 0x30);
    if (plVar3 == (longlong *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (**(code **)(*plVar3 + 0x88))(plVar3,*(undefined4 *)(param_1 + 0x40));
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
  return uVar6;
}


