// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14824b6e2 FUN_14824b6e2 body=29 status=ok
// SIG undefined FUN_14824b6e2(void)

undefined8 FUN_14824b6e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14824b71a FUN_14824b71a body=29 status=ok
// SIG undefined FUN_14824b71a(void)

bool FUN_14824b71a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14824b738 FUN_14824b738 body=26 status=ok
// SIG undefined FUN_14824b738(void)

bool FUN_14824b738(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14824b752 FUN_14824b752 body=24 status=ok
// SIG undefined FUN_14824b752(void)

bool FUN_14824b752(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14824b76a FUN_14824b76a body=101 status=ok
// SIG undefined FUN_14824b76a(void)

void FUN_14824b76a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05630;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae681e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14824b7d0 FUN_14824b7d0 body=101 status=ok
// SIG undefined FUN_14824b7d0(void)

void FUN_14824b7d0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05630;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae681e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14824b836 FUN_14824b836 body=134 status=ok
// SIG undefined FUN_14824b836(void)

void FUN_14824b836(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f05630;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae681e0;
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
                    /* WARNING: Could not recover jumptable at 0x00014824b8ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14824b8bc FUN_14824b8bc body=44 status=ok
// SIG undefined FUN_14824b8bc(void)

undefined8 FUN_14824b8bc(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2);
  return param_2;
}



// FUNCTION 14824b8e8 FUN_14824b8e8 body=178 status=ok
// SIG undefined FUN_14824b8e8(void)

bool FUN_14824b8e8(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_108 [32];
  longlong local_e8;
  undefined1 local_e0 [184];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_e8,0);
    lVar3 = local_e8;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,local_e0);
    FUN_14493db24(local_e0);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14824b99c FUN_14824b99c body=29 status=ok
// SIG undefined FUN_14824b99c(void)

undefined8 FUN_14824b99c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14824b9d4 FUN_14824b9d4 body=29 status=ok
// SIG undefined FUN_14824b9d4(void)

bool FUN_14824b9d4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14824b9f2 FUN_14824b9f2 body=26 status=ok
// SIG undefined FUN_14824b9f2(void)

bool FUN_14824b9f2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14824ba0c FUN_14824ba0c body=24 status=ok
// SIG undefined FUN_14824ba0c(void)

bool FUN_14824ba0c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14824ba24 FUN_14824ba24 body=101 status=ok
// SIG undefined FUN_14824ba24(void)

void FUN_14824ba24(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ae68250;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14824ba8a FUN_14824ba8a body=101 status=ok
// SIG undefined FUN_14824ba8a(void)

void FUN_14824ba8a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ae68250;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14824baf0 FUN_14824baf0 body=134 status=ok
// SIG undefined FUN_14824baf0(void)

void FUN_14824baf0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ae68250;
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
                    /* WARNING: Could not recover jumptable at 0x00014824bb67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14824bb76 FUN_14824bb76 body=39 status=ok
// SIG undefined FUN_14824bb76(void)

void FUN_14824bb76(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014824bb99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 14824bb9e FUN_14824bb9e body=146 status=ok
// SIG undefined FUN_14824bb9e(void)

bool FUN_14824bb9e(longlong param_1)

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



// FUNCTION 14824bc32 FUN_14824bc32 body=446 status=ok
// SIG undefined FUN_14824bc32(void)

void FUN_14824bc32(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_3e8 [40];
  undefined2 local_3c0 [4];
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined1 *local_3a8;
  undefined1 *local_3a0;
  undefined1 local_398 [424];
  undefined1 local_1f0 [16];
  undefined8 local_1e0;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [48];
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined1 local_78;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  FUN_145ab48f4(param_1 + 0x368,param_2 + 0x1d8);
  FUN_145ab3d24(local_398);
  local_1e0 = *(undefined8 *)(param_2 + 0x1b8);
  local_1d0 = *(undefined4 *)(param_2 + 0x1c0);
  local_1cc = *(undefined4 *)(param_2 + 0x1c4);
  local_128 = *(undefined4 *)(param_2 + 0x208);
  local_124 = *(undefined4 *)(param_2 + 0x20c);
  local_120 = *(undefined4 *)(param_2 + 0x210);
  FUN_145ab48f4(local_178,param_2 + 0x1c8);
  FUN_14009d848(local_168,param_2 + 0x1e8);
  FUN_14009d848(local_158,param_2 + 0x1f8);
  local_78 = *(undefined1 *)(param_2 + 0x214);
  local_3a0 = local_1f0;
  local_3a8 = local_398;
  uVar1 = FUN_146b05dfe(&local_3a8,param_2 + 0x1a8);
  FUN_145ab4204(param_1,uVar1);
  FUN_145ab35f4(local_398);
  *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) & 0xfb;
  FUN_144a88240(param_1 + 0x18,param_1);
  local_3c0[0] = 0x100;
  local_3b8 = 0;
  uStack_3b0 = 0;
  *(byte *)(param_1 + 0x31) = *(byte *)(param_1 + 0x31) | 8;
  FUN_140a52028(param_1 + 0x3b,param_1,local_3c0);
  FUN_1449db362(&local_3b8);
  FUN_14009d848(param_1 + 0x378,param_2 + 0x218);
  FUN_14009d848(param_1 + 0x388,param_2 + 0x228);
  *(undefined1 *)(param_1 + 0x398) = *(undefined1 *)(param_2 + 0x238);
  *(undefined1 *)(param_1 + 0x399) = *(undefined1 *)(param_2 + 0x239);
  *(undefined1 *)(param_1 + 0x39a) = 0;
  if ((local_28 ^ (ulonglong)auStack_3e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14824bdf2 FUN_14824bdf2 body=1 status=ok
// SIG undefined FUN_14824bdf2(void)

void FUN_14824bdf2(void)

{
  return;
}



// FUNCTION 14824bdf4 FUN_14824bdf4 body=29 status=ok
// SIG undefined FUN_14824bdf4(void)

undefined8 FUN_14824bdf4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14824be12 FUN_14824be12 body=29 status=ok
// SIG undefined FUN_14824be12(void)

undefined8 FUN_14824be12(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14824be30 FUN_14824be30 body=28 status=ok
// SIG undefined FUN_14824be30(void)

undefined8 FUN_14824be30(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_14824be4c();
  return CONCAT71((int7)((ulonglong)*plVar1 >> 8),*plVar1 == *param_2);
}



// FUNCTION 14824be4c FUN_14824be4c body=109 status=ok
// SIG undefined FUN_14824be4c(void)

undefined * FUN_14824be4c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb463b8) {
    FUN_144b3d300(&DAT_14cb463b8);
    if (DAT_14cb463b8 == -1) {
      FUN_1446f470e(&DAT_14cb463b0,L"FCommonButtonMetaData",1);
      _Init_thread_footer(&DAT_14cb463b8);
    }
  }
  return &DAT_14cb463b0;
}



// FUNCTION 14824beba FUN_14824beba body=29 status=ok
// SIG undefined FUN_14824beba(void)

undefined8 FUN_14824beba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14824bef2 FUN_14824bef2 body=29 status=ok
// SIG undefined FUN_14824bef2(void)

bool FUN_14824bef2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14824bf10 FUN_14824bf10 body=26 status=ok
// SIG undefined FUN_14824bf10(void)

bool FUN_14824bf10(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14824bf2a FUN_14824bf2a body=24 status=ok
// SIG undefined FUN_14824bf2a(void)

bool FUN_14824bf2a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14824bf42 FUN_14824bf42 body=101 status=ok
// SIG undefined FUN_14824bf42(void)

void FUN_14824bf42(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05630;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae68320;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14824bfa8 FUN_14824bfa8 body=101 status=ok
// SIG undefined FUN_14824bfa8(void)

void FUN_14824bfa8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05630;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae68320;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14824c00e FUN_14824c00e body=134 status=ok
// SIG undefined FUN_14824c00e(void)

void FUN_14824c00e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f05630;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae68320;
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
                    /* WARNING: Could not recover jumptable at 0x00014824c085. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14824c094 FUN_14824c094 body=44 status=ok
// SIG undefined FUN_14824c094(void)

undefined8 FUN_14824c094(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2);
  return param_2;
}



// FUNCTION 14824c0c0 FUN_14824c0c0 body=178 status=ok
// SIG undefined FUN_14824c0c0(void)

bool FUN_14824c0c0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_108 [32];
  longlong local_e8;
  undefined1 local_e0 [184];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_e8,0);
    lVar3 = local_e8;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,local_e0);
    FUN_14493db24(local_e0);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14824c174 FUN_14824c174 body=29 status=ok
// SIG undefined FUN_14824c174(void)

undefined8 FUN_14824c174(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14824c1ac FUN_14824c1ac body=29 status=ok
// SIG undefined FUN_14824c1ac(void)

bool FUN_14824c1ac(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14824c1ca FUN_14824c1ca body=26 status=ok
// SIG undefined FUN_14824c1ca(void)

bool FUN_14824c1ca(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14824c1e4 FUN_14824c1e4 body=24 status=ok
// SIG undefined FUN_14824c1e4(void)

bool FUN_14824c1e4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14824c1fc FUN_14824c1fc body=101 status=ok
// SIG undefined FUN_14824c1fc(void)

void FUN_14824c1fc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ae68390;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14824c262 FUN_14824c262 body=101 status=ok
// SIG undefined FUN_14824c262(void)

void FUN_14824c262(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ae68390;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14824c2c8 FUN_14824c2c8 body=134 status=ok
// SIG undefined FUN_14824c2c8(void)

void FUN_14824c2c8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ae68390;
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
                    /* WARNING: Could not recover jumptable at 0x00014824c33f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14824c34e FUN_14824c34e body=39 status=ok
// SIG undefined FUN_14824c34e(void)

void FUN_14824c34e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014824c371. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 14824c376 FUN_14824c376 body=146 status=ok
// SIG undefined FUN_14824c376(void)

bool FUN_14824c376(longlong param_1)

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



// FUNCTION 14824c409 FUN_14824c409 body=196 status=ok
// SIG undefined FUN_14824c409(void)

undefined8 FUN_14824c409(undefined8 param_1,undefined8 param_2,longlong param_3)

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
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_3 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  FUN_144a5c54a(local_b8,param_2);
  local_a0 = 8;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
  local_a8 = param_3;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14824c4ce FUN_14824c4ce body=29 status=ok
// SIG undefined FUN_14824c4ce(void)

undefined8 FUN_14824c4ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14824c506 FUN_14824c506 body=29 status=ok
// SIG undefined FUN_14824c506(void)

bool FUN_14824c506(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14824c524 FUN_14824c524 body=26 status=ok
// SIG undefined FUN_14824c524(void)

bool FUN_14824c524(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14824c53e FUN_14824c53e body=24 status=ok
// SIG undefined FUN_14824c53e(void)

bool FUN_14824c53e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14824c556 FUN_14824c556 body=101 status=ok
// SIG undefined FUN_14824c556(void)

void FUN_14824c556(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ae6bc70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae68460;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14824c5bc FUN_14824c5bc body=101 status=ok
// SIG undefined FUN_14824c5bc(void)

void FUN_14824c5bc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ae6bc70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae68460;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14824c622 FUN_14824c622 body=134 status=ok
// SIG undefined FUN_14824c622(void)

void FUN_14824c622(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ae6bc70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae68460;
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
                    /* WARNING: Could not recover jumptable at 0x00014824c699. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14824c6a8 FUN_14824c6a8 body=42 status=ok
// SIG undefined FUN_14824c6a8(void)

void FUN_14824c6a8(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014824c6cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 14824c6d2 FUN_14824c6d2 body=154 status=ok
// SIG undefined FUN_14824c6d2(void)

bool FUN_14824c6d2(longlong param_1,undefined4 param_2)

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



// FUNCTION 14824c76e FUN_14824c76e body=29 status=ok
// SIG undefined FUN_14824c76e(void)

undefined8 FUN_14824c76e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14824c7a6 FUN_14824c7a6 body=29 status=ok
// SIG undefined FUN_14824c7a6(void)

bool FUN_14824c7a6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14824c7c4 FUN_14824c7c4 body=26 status=ok
// SIG undefined FUN_14824c7c4(void)

bool FUN_14824c7c4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14824c7de FUN_14824c7de body=24 status=ok
// SIG undefined FUN_14824c7de(void)

bool FUN_14824c7de(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14824c7f6 FUN_14824c7f6 body=101 status=ok
// SIG undefined FUN_14824c7f6(void)

void FUN_14824c7f6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ae684d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14824c85c FUN_14824c85c body=101 status=ok
// SIG undefined FUN_14824c85c(void)

void FUN_14824c85c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ae684d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14824c8c2 FUN_14824c8c2 body=134 status=ok
// SIG undefined FUN_14824c8c2(void)

void FUN_14824c8c2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e01f80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae684d0;
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
                    /* WARNING: Could not recover jumptable at 0x00014824c939. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14824c948 FUN_14824c948 body=52 status=ok
// SIG undefined FUN_14824c948(void)

void FUN_14824c948(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014824c979. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2);
  return;
}



// FUNCTION 14824c97c FUN_14824c97c body=162 status=ok
// SIG undefined FUN_14824c97c(void)

bool FUN_14824c97c(longlong param_1,undefined4 param_2)

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



// FUNCTION 14824ca20 FUN_14824ca20 body=29 status=ok
// SIG undefined FUN_14824ca20(void)

undefined8 FUN_14824ca20(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14824ca58 FUN_14824ca58 body=29 status=ok
// SIG undefined FUN_14824ca58(void)

bool FUN_14824ca58(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14824ca76 FUN_14824ca76 body=26 status=ok
// SIG undefined FUN_14824ca76(void)

bool FUN_14824ca76(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14824ca90 FUN_14824ca90 body=24 status=ok
// SIG undefined FUN_14824ca90(void)

bool FUN_14824ca90(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14824caa8 FUN_14824caa8 body=101 status=ok
// SIG undefined FUN_14824caa8(void)

void FUN_14824caa8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ae68540;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14824cb0e FUN_14824cb0e body=101 status=ok
// SIG undefined FUN_14824cb0e(void)

void FUN_14824cb0e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ae68540;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14824cb74 FUN_14824cb74 body=134 status=ok
// SIG undefined FUN_14824cb74(void)

void FUN_14824cb74(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ae68540;
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
                    /* WARNING: Could not recover jumptable at 0x00014824cbeb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14824cbfa FUN_14824cbfa body=52 status=ok
// SIG undefined FUN_14824cbfa(void)

void FUN_14824cbfa(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014824cc2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2);
  return;
}



// FUNCTION 14824cc2e FUN_14824cc2e body=162 status=ok
// SIG undefined FUN_14824cc2e(void)

bool FUN_14824cc2e(longlong param_1,undefined4 param_2)

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



// FUNCTION 14824ccd2 FUN_14824ccd2 body=372 status=ok
// SIG undefined FUN_14824ccd2(void)

undefined8 * FUN_14824ccd2(undefined8 *param_1,undefined8 param_2)

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
  plVar3 = (longlong *)FUN_14001cc68(0x2c0);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14ae685b0;
  plVar4 = plVar3 + 2;
  memset(plVar4,0,0x2b0);
  FUN_140a55e66(plVar4);
  plVar3[2] = (longlong)&PTR_FUN_14ae685d0;
  plVar3[0x56] = 0;
  *(undefined4 *)(plVar3 + 0x57) = 0;
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_14824cfbe(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_14824cdd9;
    param_1[1] = 0;
LAB_14824cda3:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_14824cdd9;
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
      if (plVar4 == (longlong *)0x0) goto LAB_14824cdd9;
      goto LAB_14824cda3;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_14824cdd9;
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
LAB_14824cdd9:
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
  local_38 = 0x2b0;
  FUN_140a52e78(*param_1,"SCustomNavBorder",
                ".\\../Plugins/Runtime/CommonUI/Source/CommonUI/Private/CommonCustomNavigation.cpp",
                0x49);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14824ce48 FUN_14824ce48 body=76 status=ok
// SIG undefined FUN_14824ce48(void)

void FUN_14824ce48(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14ae685d0;
  FUN_1449db362(param_1 + 0x2b0);
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x208);
  FUN_140c057ec(param_1 + 0x10);
  return;
}



// FUNCTION 14824ce94 FUN_14824ce94 body=29 status=ok
// SIG undefined FUN_14824ce94(void)

undefined8 FUN_14824ce94(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14824ceb2 FUN_14824ceb2 body=85 status=ok
// SIG undefined FUN_14824ceb2(void)

undefined8 * FUN_14824ceb2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ae685d0;
  FUN_1449db362(param_1 + 0x54);
  *param_1 = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14824cf08 FUN_14824cf08 body=178 status=ok
// SIG undefined FUN_14824cf08(void)

undefined8 * FUN_14824cf08(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(param_1 + 0x2a8) != 0) && (*(longlong **)(param_1 + 0x2a0) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2a0) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x2a8) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x2a0);
      }
      cVar1 = (**(code **)(*plVar2 + 0x58))(plVar2,*(undefined1 *)(param_4 + 0x20));
      if (cVar1 != '\0') {
        local_38 = 0;
        uStack_30 = 0;
        FUN_146a35cca(param_2);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 6) = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14824cfbe FUN_14824cfbe body=167 status=ok
// SIG undefined FUN_14824cfbe(void)

void FUN_14824cfbe(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14824d039;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14824d039;
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
LAB_14824d039:
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
                    /* WARNING: Could not recover jumptable at 0x00014824d059. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14824d066 FUN_14824d066 body=29 status=ok
// SIG undefined FUN_14824d066(void)

undefined8 FUN_14824d066(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14824d09e FUN_14824d09e body=29 status=ok
// SIG undefined FUN_14824d09e(void)

bool FUN_14824d09e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14824d0bc FUN_14824d0bc body=26 status=ok
// SIG undefined FUN_14824d0bc(void)

bool FUN_14824d0bc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14824d0d6 FUN_14824d0d6 body=24 status=ok
// SIG undefined FUN_14824d0d6(void)

bool FUN_14824d0d6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14824d0fa FUN_14824d0fa body=101 status=ok
// SIG undefined FUN_14824d0fa(void)

void FUN_14824d0fa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ae68890;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae68820;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14824d160 FUN_14824d160 body=101 status=ok
// SIG undefined FUN_14824d160(void)

void FUN_14824d160(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ae68890;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae68820;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14824d1c6 FUN_14824d1c6 body=134 status=ok
// SIG undefined FUN_14824d1c6(void)

void FUN_14824d1c6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ae68890;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae68820;
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
                    /* WARNING: Could not recover jumptable at 0x00014824d23d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14824d24c FUN_14824d24c body=42 status=ok
// SIG undefined FUN_14824d24c(void)

void FUN_14824d24c(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014824d273. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 14824d276 FUN_14824d276 body=154 status=ok
// SIG undefined FUN_14824d276(void)

bool FUN_14824d276(longlong param_1,undefined4 param_2)

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



// FUNCTION 14824d314 FUN_14824d314 body=232 status=ok
// SIG undefined FUN_14824d314(void)

void FUN_14824d314(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_3a8 [32];
  undefined1 *local_388;
  undefined1 *puStack_380;
  undefined1 local_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined1 local_358 [424];
  undefined1 local_1b0 [16];
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined1 local_188;
  undefined1 local_180 [344];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  FUN_140a562d0(local_358);
  local_1a0 = 0;
  local_388 = (undefined1 *)0x0;
  puStack_380 = (undefined1 *)0x0;
  local_378 = 1;
  local_370 = 0;
  uStack_368 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 1;
  FUN_144a450dc(local_180,&local_370);
  FUN_1449db362(&local_370);
  puStack_380 = local_1b0;
  local_388 = local_358;
  uVar1 = FUN_14824d3fe(&local_388,param_2 + 0x1a8);
  FUN_140a5a2ee(param_1,uVar1);
  FUN_140a59028(local_358);
  FUN_14824d452(param_1 + 0x2a0,param_2 + 0x1b8);
  if ((local_28 ^ (ulonglong)auStack_3a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14824d3fe FUN_14824d3fe body=84 status=ok
// SIG undefined FUN_14824d3fe(void)

undefined8 FUN_14824d3fe(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  puVar3 = (undefined8 *)param_1[1];
  uVar4 = *param_2;
  lVar5 = param_2[1];
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar6 = (longlong *)puVar3[1];
  *puVar3 = uVar4;
  puVar3[1] = lVar5;
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
  return *param_1;
}



// FUNCTION 14824d452 FUN_14824d452 body=130 status=ok
// SIG undefined FUN_14824d452(void)

void FUN_14824d452(longlong *param_1,longlong *param_2)

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



// FUNCTION 14824d4d6 FUN_14824d4d6 body=29 status=ok
// SIG undefined FUN_14824d4d6(void)

undefined8 FUN_14824d4d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14824d50e FUN_14824d50e body=29 status=ok
// SIG undefined FUN_14824d50e(void)

bool FUN_14824d50e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14824d52c FUN_14824d52c body=26 status=ok
// SIG undefined FUN_14824d52c(void)

bool FUN_14824d52c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14824d546 FUN_14824d546 body=24 status=ok
// SIG undefined FUN_14824d546(void)

bool FUN_14824d546(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14824d55e FUN_14824d55e body=101 status=ok
// SIG undefined FUN_14824d55e(void)

void FUN_14824d55e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ae68900;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14824d5c4 FUN_14824d5c4 body=101 status=ok
// SIG undefined FUN_14824d5c4(void)

void FUN_14824d5c4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ae68900;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14824d62a FUN_14824d62a body=134 status=ok
// SIG undefined FUN_14824d62a(void)

void FUN_14824d62a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae68900;
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
                    /* WARNING: Could not recover jumptable at 0x00014824d6a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14824d6b0 FUN_14824d6b0 body=39 status=ok
// SIG undefined FUN_14824d6b0(void)

void FUN_14824d6b0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014824d6d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 14824d6d8 FUN_14824d6d8 body=146 status=ok
// SIG undefined FUN_14824d6d8(void)

bool FUN_14824d6d8(longlong param_1)

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



// FUNCTION 14824d76c FUN_14824d76c body=230 status=ok
// SIG undefined FUN_14824d76c(void)

undefined8 * FUN_14824d76c(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 14824d854 FUN_14824d854 body=29 status=ok
// SIG undefined FUN_14824d854(void)

undefined8 FUN_14824d854(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14824d88c FUN_14824d88c body=29 status=ok
// SIG undefined FUN_14824d88c(void)

bool FUN_14824d88c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14824d8aa FUN_14824d8aa body=26 status=ok
// SIG undefined FUN_14824d8aa(void)

bool FUN_14824d8aa(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14824d8c4 FUN_14824d8c4 body=24 status=ok
// SIG undefined FUN_14824d8c4(void)

bool FUN_14824d8c4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14824d8e8 FUN_14824d8e8 body=101 status=ok
// SIG undefined FUN_14824d8e8(void)

void FUN_14824d8e8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ae689e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae68970;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14824d94e FUN_14824d94e body=101 status=ok
// SIG undefined FUN_14824d94e(void)

void FUN_14824d94e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ae689e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae68970;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14824d9b4 FUN_14824d9b4 body=134 status=ok
// SIG undefined FUN_14824d9b4(void)

void FUN_14824d9b4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ae689e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae68970;
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
                    /* WARNING: Could not recover jumptable at 0x00014824da2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14824da3a FUN_14824da3a body=44 status=ok
// SIG undefined FUN_14824da3a(void)

void FUN_14824da3a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014824da63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 14824da66 FUN_14824da66 body=156 status=ok
// SIG undefined FUN_14824da66(void)

bool FUN_14824da66(longlong param_1,undefined8 param_2)

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



// FUNCTION 14824db06 FUN_14824db06 body=351 status=ok
// SIG undefined FUN_14824db06(void)

undefined8 * FUN_14824db06(undefined8 *param_1,undefined8 param_2)

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
  plVar3 = (longlong *)FUN_14001cc68(0x3f0);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14ae68a50;
  plVar4 = plVar3 + 2;
  memset(plVar4,0,0x3e0);
  FUN_146a96250(plVar4);
  plVar3[2] = (longlong)&PTR_FUN_14ae68a70;
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_14824dcb4(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_14824dbf8;
    param_1[1] = 0;
LAB_14824dbc2:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_14824dbf8;
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
      if (plVar4 == (longlong *)0x0) goto LAB_14824dbf8;
      goto LAB_14824dbc2;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_14824dbf8;
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
LAB_14824dbf8:
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
  local_38 = 0x3e0;
  FUN_140a52e78(*param_1,"SCommonHierarchicalScrollBox",
                ".\\../Plugins/Runtime/CommonUI/Source/CommonUI/Private/CommonHierarchicalScrollBox.cpp"
                ,0x14);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14824dc66 FUN_14824dc66 body=9 status=ok
// SIG undefined FUN_14824dc66(void)

void FUN_14824dc66(longlong param_1)

{
  FUN_146a9631e(param_1 + 0x10);
  return;
}



// FUNCTION 14824dc70 FUN_14824dc70 body=29 status=ok
// SIG undefined FUN_14824dc70(void)

undefined8 FUN_14824dc70(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14824dc8e FUN_14824dc8e body=38 status=ok
// SIG undefined FUN_14824dc8e(void)

undefined8 FUN_14824dc8e(undefined8 param_1,int param_2)

{
  FUN_146a9631e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14824dcb4 FUN_14824dcb4 body=167 status=ok
// SIG undefined FUN_14824dcb4(void)

void FUN_14824dcb4(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14824dd2f;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14824dd2f;
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
LAB_14824dd2f:
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
                    /* WARNING: Could not recover jumptable at 0x00014824dd4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14824dd5c FUN_14824dd5c body=29 status=ok
// SIG undefined FUN_14824dd5c(void)

undefined8 FUN_14824dd5c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14824dd94 FUN_14824dd94 body=29 status=ok
// SIG undefined FUN_14824dd94(void)

bool FUN_14824dd94(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14824ddb2 FUN_14824ddb2 body=26 status=ok
// SIG undefined FUN_14824ddb2(void)

bool FUN_14824ddb2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14824ddcc FUN_14824ddcc body=24 status=ok
// SIG undefined FUN_14824ddcc(void)

bool FUN_14824ddcc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14824dde4 FUN_14824dde4 body=101 status=ok
// SIG undefined FUN_14824dde4(void)

void FUN_14824dde4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ae68cb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14824de4a FUN_14824de4a body=101 status=ok
// SIG undefined FUN_14824de4a(void)

void FUN_14824de4a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ae68cb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14824deb0 FUN_14824deb0 body=134 status=ok
// SIG undefined FUN_14824deb0(void)

void FUN_14824deb0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e01f80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae68cb0;
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
                    /* WARNING: Could not recover jumptable at 0x00014824df27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14824df36 FUN_14824df36 body=52 status=ok
// SIG undefined FUN_14824df36(void)

void FUN_14824df36(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014824df67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2);
  return;
}



// FUNCTION 14824df6a FUN_14824df6a body=162 status=ok
// SIG undefined FUN_14824df6a(void)

bool FUN_14824df6a(longlong param_1,undefined4 param_2)

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



// FUNCTION 14824e00e FUN_14824e00e body=338 status=ok
// SIG undefined FUN_14824e00e(void)

longlong * FUN_14824e00e(longlong *param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

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
  plVar3 = (longlong *)FUN_14001cc68(0x2f8,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14ae68d20;
  plVar4 = plVar3 + 2;
  FUN_14822d666(plVar4);
  local_40 = plVar4;
  local_38 = plVar3;
  FUN_14824e282(&local_40,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_14824e0f4;
    param_1[1] = 0;
LAB_14824e0ba:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_14824e0f4;
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
      if (plVar4 == (longlong *)0x0) goto LAB_14824e0f4;
      goto LAB_14824e0ba;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_14824e0f4;
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
LAB_14824e0f4:
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
  local_48 = 0x2e8;
  FUN_140a52e78(*param_1,"SLoadGuard",param_2,param_3);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14824e162 FUN_14824e162 body=9 status=ok
// SIG undefined FUN_14824e162(void)

void FUN_14824e162(longlong param_1)

{
  FUN_14824e18a(param_1 + 0x10);
  return;
}



// FUNCTION 14824e16c FUN_14824e16c body=29 status=ok
// SIG undefined FUN_14824e16c(void)

undefined8 FUN_14824e16c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14824e18a FUN_14824e18a body=248 status=ok
// SIG undefined FUN_14824e18a(void)

void FUN_14824e18a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ae50820;
  plVar3 = (longlong *)param_1[0x5b];
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
  FUN_1449db362(param_1 + 0x58);
  plVar3 = (longlong *)param_1[0x57];
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
  plVar3 = (longlong *)param_1[0x55];
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
  plVar3 = (longlong *)param_1[0x53];
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
  if (param_1[0x50] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 14824e282 FUN_14824e282 body=167 status=ok
// SIG undefined FUN_14824e282(void)

void FUN_14824e282(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14824e2fd;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14824e2fd;
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
LAB_14824e2fd:
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
                    /* WARNING: Could not recover jumptable at 0x00014824e31d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14824e32a FUN_14824e32a body=29 status=ok
// SIG undefined FUN_14824e32a(void)

undefined8 FUN_14824e32a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14824e362 FUN_14824e362 body=29 status=ok
// SIG undefined FUN_14824e362(void)

bool FUN_14824e362(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14824e380 FUN_14824e380 body=26 status=ok
// SIG undefined FUN_14824e380(void)

bool FUN_14824e380(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14824e39a FUN_14824e39a body=24 status=ok
// SIG undefined FUN_14824e39a(void)

bool FUN_14824e39a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14824e3b2 FUN_14824e3b2 body=101 status=ok
// SIG undefined FUN_14824e3b2(void)

void FUN_14824e3b2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ae68d40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14824e418 FUN_14824e418 body=101 status=ok
// SIG undefined FUN_14824e418(void)

void FUN_14824e418(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ae68d40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14824e47e FUN_14824e47e body=134 status=ok
// SIG undefined FUN_14824e47e(void)

void FUN_14824e47e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ae68d40;
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
                    /* WARNING: Could not recover jumptable at 0x00014824e4f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14824e504 FUN_14824e504 body=42 status=ok
// SIG undefined FUN_14824e504(void)

void FUN_14824e504(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014824e52b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 14824e52e FUN_14824e52e body=154 status=ok
// SIG undefined FUN_14824e52e(void)

bool FUN_14824e52e(longlong param_1,undefined4 param_2)

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



// FUNCTION 14824e5ca FUN_14824e5ca body=29 status=ok
// SIG undefined FUN_14824e5ca(void)

undefined8 FUN_14824e5ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14824e602 FUN_14824e602 body=29 status=ok
// SIG undefined FUN_14824e602(void)

bool FUN_14824e602(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14824e620 FUN_14824e620 body=26 status=ok
// SIG undefined FUN_14824e620(void)

bool FUN_14824e620(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14824e63a FUN_14824e63a body=24 status=ok
// SIG undefined FUN_14824e63a(void)

bool FUN_14824e63a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14824e652 FUN_14824e652 body=101 status=ok
// SIG undefined FUN_14824e652(void)

void FUN_14824e652(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ae68dd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14824e6b8 FUN_14824e6b8 body=101 status=ok
// SIG undefined FUN_14824e6b8(void)

void FUN_14824e6b8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ae68dd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14824e71e FUN_14824e71e body=134 status=ok
// SIG undefined FUN_14824e71e(void)

void FUN_14824e71e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ae68dd0;
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
                    /* WARNING: Could not recover jumptable at 0x00014824e795. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14824e7a4 FUN_14824e7a4 body=42 status=ok
// SIG undefined FUN_14824e7a4(void)

void FUN_14824e7a4(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014824e7cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 14824e7ce FUN_14824e7ce body=154 status=ok
// SIG undefined FUN_14824e7ce(void)

bool FUN_14824e7ce(longlong param_1,undefined4 param_2)

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



// FUNCTION 14824e86a FUN_14824e86a body=788 status=ok
// SIG undefined FUN_14824e86a(void)

undefined8
FUN_14824e86a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_488 [47];
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
  FUN_14824ebf4(&local_458,&local_459);
  FUN_14824eb80(&local_458,param_1,uVar4);
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



// FUNCTION 14824eb80 FUN_14824eb80 body=115 status=ok
// SIG undefined FUN_14824eb80(void)

longlong * FUN_14824eb80(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_147716504(*param_1,param_3);
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



// FUNCTION 14824ebf4 FUN_14824ebf4 body=402 status=ok
// SIG undefined FUN_14824ebf4(void)

undefined8 * FUN_14824ebf4(undefined8 *param_1,undefined8 param_2)

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
  plVar3 = (longlong *)FUN_14001cc68(0x8c0);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14ae68ed0;
  plVar4 = plVar3 + 2;
  memset(plVar4,0,0x8b0);
  FUN_14770f42c(plVar4,0);
  plVar3[2] = (longlong)&PTR_FUN_14ae68ef0;
  plVar3[0x4f] = (longlong)&PTR_FUN_14ae691c0;
  plVar3[0x9d] = (longlong)&PTR_FUN_14ae691e0;
  plVar3[0x9f] = (longlong)&PTR_LAB_14ae69200;
  *(undefined1 *)(plVar3 + 0x117) = 1;
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_14824effe(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_14824ed19;
    param_1[1] = 0;
LAB_14824ece3:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_14824ed19;
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
      if (plVar4 == (longlong *)0x0) goto LAB_14824ed19;
      goto LAB_14824ece3;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_14824ed19;
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
LAB_14824ed19:
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
  local_38 = 0x8b0;
  FUN_140a52e78(*param_1,"ListViewT<ItemType>","Runtime\\UMG\\Public\\Components/ListViewBase.h",
                0xfd);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14824ed88 FUN_14824ed88 body=9 status=ok
// SIG undefined FUN_14824ed88(void)

void FUN_14824ed88(longlong param_1)

{
  FUN_14771303e(param_1 + 0x10);
  return;
}



// FUNCTION 14824ed92 FUN_14824ed92 body=29 status=ok
// SIG undefined FUN_14824ed92(void)

undefined8 FUN_14824ed92(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14824edb0 FUN_14824edb0 body=38 status=ok
// SIG undefined FUN_14824edb0(void)

undefined8 FUN_14824edb0(undefined8 param_1,int param_2)

{
  FUN_14771303e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14824edd6 FUN_14824edd6 body=319 status=ok
// SIG undefined FUN_14824edd6(void)

undefined8 FUN_14824edd6(longlong param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(char *)(param_1 + 0x8a8) == '\x01') && ((byte)(*param_4 - 1U) < 2)) &&
     (plVar1 = *(longlong **)(param_1 + 0x8a0), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 8))(plVar1,&local_40);
    if (0 < local_38) {
      if (*(int *)(param_1 + 0x718) == *(int *)(param_1 + 0x744)) {
        plVar1 = *(longlong **)(param_1 + 0x8a0);
        if (plVar1 == (longlong *)0x0) {
          local_40 = (longlong *)0x0;
          local_38 = 0;
        }
        else {
          (**(code **)(*plVar1 + 8))(plVar1,&local_40);
        }
        lVar2 = *local_40;
      }
      else {
        if (*(char *)(param_1 + 0x858) != '\x01') goto LAB_14824ee63;
        lVar2 = *(longlong *)(param_1 + 0x760);
      }
      if (lVar2 != 0) {
        local_48 = lVar2;
        FUN_14770610a(param_1,&local_40);
        if ((char)local_38 == '\x01') {
          FUN_147706086(param_1,local_40,1);
          FUN_14776a48a(param_1,local_40,*(undefined4 *)(param_4 + 4));
        }
      }
    }
  }
LAB_14824ee63:
  *(undefined1 *)(param_1 + 0x8a8) = 1;
  FUN_14697d592(param_1,param_2,param_3,param_4);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14824ef16 FUN_14824ef16 body=49 status=ok
// SIG undefined FUN_14824ef16(void)

void FUN_14824ef16(longlong param_1,longlong param_2)

{
  char cVar1;
  
  FUN_146af551c();
  if (*(char *)(param_2 + 100) == '\x01') {
    cVar1 = FUN_140591fd6(param_1);
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 0x2f8) = 1;
    }
  }
  return;
}



// FUNCTION 14824ef48 FUN_14824ef48 body=158 status=ok
// SIG undefined FUN_14824ef48(void)

char * FUN_14824ef48(longlong param_1,char *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146af58ae();
  if ((*param_2 == '\x01') && (cVar2 = FUN_140591fd6(param_1), cVar2 != '\0')) {
    *(undefined1 *)(param_1 + 0x8a8) = 0;
    local_20 = *(longlong *)(param_1 + 0x10);
    if (local_20 == 0) {
      local_20 = 0;
      local_28 = 0;
    }
    else {
      iVar3 = *(int *)(local_20 + 8);
      local_28 = 0;
      do {
        if (iVar3 == 0) {
          local_20 = 0;
          goto LAB_14824efa8;
        }
        LOCK();
        iVar1 = *(int *)(local_20 + 8);
        bVar4 = iVar3 == iVar1;
        if (bVar4) {
          *(int *)(local_20 + 8) = iVar3 + 1;
          iVar1 = iVar3;
        }
        iVar3 = iVar1;
        UNLOCK();
      } while (!bVar4);
      local_28 = *(undefined8 *)(param_1 + 8);
    }
LAB_14824efa8:
    FUN_140592b68(param_2,&local_28,CONCAT71((int7)((ulonglong)local_28 >> 8),2),0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14824efe8 FUN_14824efe8 body=22 status=ok
// SIG undefined FUN_14824efe8(void)

undefined8 FUN_14824efe8(undefined8 param_1,undefined8 param_2)

{
  FUN_146af5b3a();
  return param_2;
}



// FUNCTION 14824effe FUN_14824effe body=167 status=ok
// SIG undefined FUN_14824effe(void)

void FUN_14824effe(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14824f079;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14824f079;
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
LAB_14824f079:
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
                    /* WARNING: Could not recover jumptable at 0x00014824f099. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14824f0a6 FUN_14824f0a6 body=181 status=ok
// SIG undefined FUN_14824f0a6(void)

undefined8 *
FUN_14824f0a6(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

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
  FUN_14824f15e(param_2,&local_38,*param_3,&local_28);
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
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



// FUNCTION 14824f15e FUN_14824f15e body=346 status=ok
// SIG undefined FUN_14824f15e(void)

undefined8 FUN_14824f15e(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_288 [40];
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
  FUN_14824f2ba(local_228);
  local_80 = *(undefined1 *)(lVar3 + 0x1a8);
  local_240 = &LAB_14776d354;
  local_238 = 0;
  FUN_14824f318(local_228,lVar3,&local_240);
  local_240 = &LAB_14776d458;
  local_238 = 0;
  FUN_14824f40e(local_228,lVar3,&local_240);
  FUN_14824f504(local_228,param_4);
  local_248 = &local_260;
  local_258 = param_1[1];
  local_260 = lVar3;
  local_250 = param_3;
  FUN_14824f640(&local_240);
  FUN_14824f55e(&local_240,param_2,local_228);
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
  FUN_14824f5e8(local_228);
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



// FUNCTION 14824f2ba FUN_14824f2ba body=94 status=ok
// SIG undefined FUN_14824f2ba(void)

longlong FUN_14824f2ba(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  
  FUN_140a5071c();
  *(undefined1 *)(param_1 + 0x1a8) = 1;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  *(longlong *)(param_1 + 0x1d8) = DAT_14c98ded0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 14824f318 FUN_14824f318 body=245 status=ok
// SIG undefined FUN_14824f318(void)

longlong FUN_14824f318(longlong param_1,undefined8 param_2,undefined8 *param_3)

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
  FUN_144a450dc(param_1 + 0x1b0,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14824f40e FUN_14824f40e body=245 status=ok
// SIG undefined FUN_14824f40e(void)

longlong FUN_14824f40e(longlong param_1,undefined8 param_2,undefined8 *param_3)

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



// FUNCTION 14824f504 FUN_14824f504 body=90 status=ok
// SIG undefined FUN_14824f504(void)

longlong FUN_14824f504(longlong param_1,undefined8 *param_2)

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
  plVar5 = *(longlong **)(param_1 + 0x1d8);
  *(undefined8 *)(param_1 + 0x1d0) = uVar3;
  *(longlong *)(param_1 + 0x1d8) = lVar4;
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



// FUNCTION 14824f55e FUN_14824f55e body=138 status=ok
// SIG undefined FUN_14824f55e(void)

longlong * FUN_14824f55e(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  
  FUN_140a515e6(*param_1,param_3);
  puVar1 = (undefined8 *)param_1[2];
  FUN_14824faf6(*param_1,param_3,*puVar1,puVar1[1],*(undefined8 *)puVar1[2]);
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



// FUNCTION 14824f5e8 FUN_14824f5e8 body=88 status=ok
// SIG undefined FUN_14824f5e8(void)

void FUN_14824f5e8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x1d8);
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
  FUN_1449db362(param_1 + 0x1c0);
  FUN_1449db362(param_1 + 0x1b0);
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 14824f640 FUN_14824f640 body=379 status=ok
// SIG undefined FUN_14824f640(void)

undefined8 * FUN_14824f640(undefined8 *param_1,undefined8 param_2)

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
  plVar3 = (longlong *)FUN_14001cc68(0x2d8);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14ae692f0;
  plVar4 = plVar3 + 2;
  memset(plVar4,0,0x2c8);
  FUN_14776d9d6(plVar4);
  plVar3[2] = (longlong)&PTR_FUN_14ae69310;
  plVar3[0x4f] = (longlong)&PTR_FUN_14ae69570;
  plVar3[0x52] = (longlong)&PTR_LAB_14ae69590;
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_14824fa4e(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_14824f74e;
    param_1[1] = 0;
LAB_14824f718:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_14824f74e;
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
      if (plVar4 == (longlong *)0x0) goto LAB_14824f74e;
      goto LAB_14824f718;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_14824f74e;
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
LAB_14824f74e:
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
  local_38 = 0x2c8;
  FUN_140a52e78(*param_1,"ObjectTableRowT","Runtime\\UMG\\Public\\Components/ListViewBase.h",0x265);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14824f7bc FUN_14824f7bc body=9 status=ok
// SIG undefined FUN_14824f7bc(void)

void FUN_14824f7bc(longlong param_1)

{
  FUN_14776f3fa(param_1 + 0x10);
  return;
}



// FUNCTION 14824f7c6 FUN_14824f7c6 body=29 status=ok
// SIG undefined FUN_14824f7c6(void)

undefined8 FUN_14824f7c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14824f7e4 FUN_14824f7e4 body=38 status=ok
// SIG undefined FUN_14824f7e4(void)

undefined8 FUN_14824f7e4(undefined8 param_1,int param_2)

{
  FUN_14776f3fa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14824f80a FUN_14824f80a body=22 status=ok
// SIG undefined FUN_14824f80a(void)

undefined8 FUN_14824f80a(undefined8 param_1,undefined8 param_2)

{
  FUN_14778db56();
  return param_2;
}



// FUNCTION 14824f820 FUN_14824f820 body=22 status=ok
// SIG undefined FUN_14824f820(void)

undefined8 FUN_14824f820(undefined8 param_1,undefined8 param_2)

{
  FUN_14778dd4e();
  return param_2;
}



// FUNCTION 14824f842 FUN_14824f842 body=69 status=ok
// SIG undefined FUN_14824f842(void)

undefined1 * FUN_14824f842(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 1;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 14824f888 FUN_14824f888 body=192 status=ok
// SIG undefined FUN_14824f888(void)

void FUN_14824f888(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  FUN_14776eca0();
  if (*(longlong *)(param_1 + 0x278) != 0) {
    lVar5 = FUN_14101b6e6();
    lVar1 = *(longlong *)(param_1 + 0x278);
    if ((((lVar1 != 0) && (lVar5 != 0)) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
       ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar2 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
         lVar5 + 0x30)))) {
      cVar3 = FUN_14776f72a(param_1);
      if (cVar3 == '\0') {
        if (((*(byte *)(lVar1 + 0x3a8) & 4) != 0) &&
           (*(byte *)(lVar1 + 0x3a8) = *(byte *)(lVar1 + 0x3a8) & 0xfb,
           (*(byte *)(lVar1 + 0x3b9) & 1) != 0)) {
          uVar4 = 0;
          uVar6 = 1;
          uVar7 = 1;
          goto LAB_14824f915;
        }
      }
      else {
        uVar4 = (**(code **)(*(longlong *)(param_1 + 0x280) + 0x30))(param_1 + 0x280);
        if ((byte)uVar4 != (*(byte *)(lVar1 + 0x3b9) & 1)) {
          uVar6 = 0;
          uVar7 = 0;
LAB_14824f915:
          FUN_1482232ec(lVar1,uVar4,uVar6,uVar7);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14824f948 FUN_14824f948 body=130 status=ok
// SIG undefined FUN_14824f948(void)

void FUN_14824f948(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  *(undefined1 *)(param_1 + 0x2c5) = 0;
  if (*(longlong *)(param_1 + 0x278) != 0) {
    FUN_1476ce720();
    if (*(longlong *)(param_1 + 0x278) != 0) {
      lVar3 = FUN_14101b6e6();
      lVar1 = *(longlong *)(param_1 + 0x278);
      if ((((lVar1 != 0) && (lVar3 != 0)) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
         (((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
           (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30)) && ((*(byte *)(lVar1 + 0x3b9) & 1) != 0)))) {
        FUN_1482232ec(lVar1,0,0,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14824f9ca FUN_14824f9ca body=131 status=ok
// SIG undefined FUN_14824f9ca(void)

void FUN_14824f9ca(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x278) != 0) {
    FUN_1476ce7ae();
    if (*(longlong *)(param_1 + 0x278) != 0) {
      lVar3 = FUN_14101b6e6();
      lVar1 = *(longlong *)(param_1 + 0x278);
      if ((((lVar1 != 0) && (lVar3 != 0)) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
         (((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
           (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30)) && ((*(byte *)(lVar1 + 0x3b9) & 1) != (byte)param_2)))) {
        FUN_1482232ec(lVar1,param_2,0,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14824fa4e FUN_14824fa4e body=167 status=ok
// SIG undefined FUN_14824fa4e(void)

void FUN_14824fa4e(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14824fac9;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14824fac9;
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
LAB_14824fac9:
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
                    /* WARNING: Could not recover jumptable at 0x00014824fae9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14824faf6 FUN_14824faf6 body=746 status=ok
// SIG undefined FUN_14824faf6(void)

void FUN_14824faf6(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 auStack_258 [32];
  undefined8 local_238;
  code *local_230;
  undefined4 local_228;
  undefined1 local_220 [424];
  undefined1 local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined1 auStack_60 [16];
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_258;
  FUN_14776d200(local_220);
  local_78 = *(undefined1 *)(param_2 + 0x1a8);
  FUN_1477704ea(auStack_60,param_2 + 0x1b0);
  FUN_1477704ea(local_50,param_2 + 0x1c0);
  plVar5 = local_68;
  local_70 = *(undefined8 *)(param_2 + 0x1d0);
  plVar3 = *(longlong **)(param_2 + 0x1d8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 8) = *(int *)((longlong)plVar3 + 8) + 1;
    UNLOCK();
  }
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      puVar4 = (undefined8 *)*local_68;
      local_68 = plVar3;
      (*(code *)*puVar4)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar3 = local_68;
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        plVar3 = local_68;
      }
    }
  }
  local_68 = plVar3;
  local_238 = param_5;
  FUN_14776f85a(param_1,local_220,param_3,param_4);
  FUN_14776d54a(local_220);
  if (param_4 != 0) {
    lVar7 = FUN_14101b6e6();
    if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(param_4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8
         ) == lVar7 + 0x30)) {
      uVar6 = (**(code **)(*(longlong *)(param_1 + 0x280) + 0x78))(param_1 + 0x280);
      FUN_148222a7e(param_4,(uVar6 & 0xfffffffe) == 2);
      FUN_14822280a(param_4,uVar6 != 0);
      FUN_148222388(param_4,uVar6 != 0);
      local_230 = FUN_14824fde2;
      local_228 = 0;
      FUN_14825006e(local_220,param_1);
      FUN_1448b6402(param_4 + 0x12a0,&local_230,local_220);
      FUN_1449db362(local_220);
      local_230 = FUN_14824fe76;
      local_228 = 0;
      FUN_14825006e(local_220,param_1,&local_230);
      FUN_1448b6402(param_4 + 0x12b8,&local_230,local_220);
      FUN_1449db362(local_220);
      local_230 = (code *)&LAB_14824ff0a;
      local_228 = 0;
      FUN_14825006e(local_220,param_1,&local_230);
      FUN_1448b6402(param_4 + 0x1300,&local_230,local_220);
      FUN_1449db362(local_220);
      local_230 = (code *)&LAB_14824ff34;
      local_228 = 0;
      FUN_14825006e(local_220,param_1,&local_230);
      FUN_1448b6402(param_4 + 0x1318,&local_230,local_220);
      FUN_1449db362(local_220);
      local_230 = FUN_14824ff5e;
      local_228 = 0;
      FUN_148250552(local_220,param_1,&local_230);
      FUN_140c6314c(param_4 + 0x1390,&local_230,local_220);
      FUN_1449db362(local_220);
      FUN_1482238dc(param_4,2);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14824fde2 FUN_14824fde2 body=148 status=ok
// SIG undefined FUN_14824fde2(void)

void FUN_14824fde2(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar6 = *(longlong **)(param_1 + 0x2b8);
  bVar2 = true;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar6[1];
    plVar7 = (longlong *)0x0;
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_14824fe1c;
      }
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar8);
    plVar7 = *(longlong **)(param_1 + 0x2b0);
    bVar2 = false;
  }
LAB_14824fe1c:
  puVar5 = (undefined8 *)(**(code **)(*plVar7 + 0x48))(plVar7,param_1 + 0x280);
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)(*plVar7 + 0xa8))(plVar7,*puVar5);
  }
  if (!bVar2) {
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
                    /* WARNING: Could not recover jumptable at 0x00014824fe65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14824fe76 FUN_14824fe76 body=148 status=ok
// SIG undefined FUN_14824fe76(void)

void FUN_14824fe76(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar6 = *(longlong **)(param_1 + 0x2b8);
  bVar2 = true;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar6[1];
    plVar7 = (longlong *)0x0;
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_14824feb0;
      }
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar8);
    plVar7 = *(longlong **)(param_1 + 0x2b0);
    bVar2 = false;
  }
LAB_14824feb0:
  puVar5 = (undefined8 *)(**(code **)(*plVar7 + 0x48))(plVar7,param_1 + 0x280);
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)(*plVar7 + 0xb0))(plVar7,*puVar5);
  }
  if (!bVar2) {
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
                    /* WARNING: Could not recover jumptable at 0x00014824fef9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14824ff5e FUN_14824ff5e body=271 status=ok
// SIG undefined FUN_14824ff5e(void)

void FUN_14824ff5e(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  
  plVar2 = (longlong *)(param_1 + 0x280);
  iVar6 = (**(code **)(*(longlong *)(param_1 + 0x280) + 0x78))(plVar2);
  if ((iVar6 != 0) && (cVar5 = (**(code **)(*plVar2 + 0x30))(plVar2), cVar5 != (char)param_2)) {
    plVar9 = *(longlong **)(param_1 + 0x2b8);
    bVar3 = true;
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
      plVar10 = (longlong *)0x0;
    }
    else {
      iVar7 = (int)plVar9[1];
      plVar10 = (longlong *)0x0;
      do {
        if (iVar7 == 0) {
          plVar9 = (longlong *)0x0;
          goto LAB_14824ffd9;
        }
        LOCK();
        iVar4 = (int)plVar9[1];
        bVar11 = iVar7 == iVar4;
        if (bVar11) {
          *(int *)(plVar9 + 1) = iVar7 + 1;
          iVar4 = iVar7;
        }
        iVar7 = iVar4;
        UNLOCK();
      } while (!bVar11);
      plVar10 = *(longlong **)(param_1 + 0x2b0);
      bVar3 = false;
    }
LAB_14824ffd9:
    puVar8 = (undefined8 *)(**(code **)(*plVar10 + 0x48))(plVar10,plVar2);
    if (puVar8 != (undefined8 *)0x0) {
      if ((char)param_2 == '\x01' && iVar6 != 3) {
        (**(code **)(*plVar10 + 0x30))(plVar10);
      }
      (**(code **)(*plVar10 + 0x28))(plVar10,*puVar8,param_2,1);
      (**(code **)(*plVar10 + 0x40))(plVar10,3);
    }
    if (!bVar3) {
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
                    /* WARNING: Could not recover jumptable at 0x000148250052. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar9 + 0x10))(plVar9);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14825006e FUN_14825006e body=386 status=ok
// SIG undefined FUN_14825006e(void)

longlong * FUN_14825006e(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_14825017f:
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
    *puVar5 = &PTR_FUN_14ae69620;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14825017f;
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
    *puVar5 = &PTR_FUN_14ae69620;
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



// FUNCTION 1482501f0 FUN_1482501f0 body=64 status=ok
// SIG undefined FUN_1482501f0(void)

undefined8 * FUN_1482501f0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14ae69620;
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



// FUNCTION 148250234 FUN_148250234 body=81 status=ok
// SIG undefined FUN_148250234(void)

undefined8 FUN_148250234(longlong param_1)

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



// FUNCTION 14825028c FUN_14825028c body=89 status=ok
// SIG undefined FUN_14825028c(void)

bool FUN_14825028c(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1482502d7;
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
LAB_1482502d7:
  return lVar6 == param_2;
}



// FUNCTION 148250302 FUN_148250302 body=118 status=ok
// SIG undefined FUN_148250302(void)

void FUN_148250302(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ae69620;
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



// FUNCTION 148250378 FUN_148250378 body=118 status=ok
// SIG undefined FUN_148250378(void)

void FUN_148250378(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ae69620;
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



// FUNCTION 1482503ee FUN_1482503ee body=156 status=ok
// SIG undefined FUN_1482503ee(void)

void FUN_1482503ee(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ae69620;
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
                    /* WARNING: Could not recover jumptable at 0x00014825047a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14825048a FUN_14825048a body=100 status=ok
// SIG undefined FUN_14825048a(void)

void FUN_14825048a(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001482504d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001482504e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 1482504ee FUN_1482504ee body=100 status=ok
// SIG undefined FUN_1482504ee(void)

ulonglong FUN_1482504ee(longlong param_1)

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
LAB_148250547:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148250547;
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



// FUNCTION 148250552 FUN_148250552 body=386 status=ok
// SIG undefined FUN_148250552(void)

longlong * FUN_148250552(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148250663:
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
    *puVar5 = &PTR_FUN_14ae69690;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148250663;
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
    *puVar5 = &PTR_FUN_14ae69690;
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



// FUNCTION 1482506d4 FUN_1482506d4 body=64 status=ok
// SIG undefined FUN_1482506d4(void)

undefined8 * FUN_1482506d4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14ae69690;
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



// FUNCTION 148250718 FUN_148250718 body=81 status=ok
// SIG undefined FUN_148250718(void)

undefined8 FUN_148250718(longlong param_1)

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



// FUNCTION 148250770 FUN_148250770 body=89 status=ok
// SIG undefined FUN_148250770(void)

bool FUN_148250770(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1482507bb;
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
LAB_1482507bb:
  return lVar6 == param_2;
}



// FUNCTION 1482507e6 FUN_1482507e6 body=118 status=ok
// SIG undefined FUN_1482507e6(void)

void FUN_1482507e6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae69690;
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



// FUNCTION 14825085c FUN_14825085c body=118 status=ok
// SIG undefined FUN_14825085c(void)

void FUN_14825085c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae69690;
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



// FUNCTION 1482508d2 FUN_1482508d2 body=156 status=ok
// SIG undefined FUN_1482508d2(void)

void FUN_1482508d2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae69690;
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
                    /* WARNING: Could not recover jumptable at 0x00014825095e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14825096e FUN_14825096e body=104 status=ok
// SIG undefined FUN_14825096e(void)

void FUN_14825096e(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001482509bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001482509cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 1482509d6 FUN_1482509d6 body=101 status=ok
// SIG undefined FUN_1482509d6(void)

ulonglong FUN_1482509d6(longlong param_1)

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
LAB_148250a30:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148250a30;
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



// FUNCTION 148250a3c FUN_148250a3c body=215 status=ok
// SIG undefined FUN_148250a3c(void)

void FUN_148250a3c(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [16];
  longlong local_78 [2];
  longlong *local_68 [2];
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78[0] = *param_3;
  local_68[0] = (longlong *)0x0;
  if (local_78[0] != 0) {
    plVar1 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_3[2];
    }
    (**(code **)*plVar1)(plVar1,local_68);
  }
  FUN_148250b14(local_88,local_78);
  FUN_14822e828(param_1,param_2,local_88);
  if (local_78[0] != 0) {
    plVar1 = local_68[0];
    if (local_68[0] == (longlong *)0x0) {
      plVar1 = local_58;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*param_3 != 0) {
    plVar1 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148250b14 FUN_148250b14 body=183 status=ok
// SIG undefined FUN_148250b14(void)

longlong * FUN_148250b14(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,6,0x10);
  *(undefined4 *)(param_1 + 1) = 6;
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_LAB_14a541440;
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
  puVar1[2] = lVar6;
  *puVar1 = &PTR_FUN_14ae69770;
  puVar1[4] = *param_2;
  puVar1[6] = param_2[2];
  param_2[2] = 0;
  uVar2 = param_2[4];
  uVar3 = param_2[5];
  uVar4 = param_2[7];
  puVar1[10] = param_2[6];
  puVar1[0xb] = uVar4;
  puVar1[8] = uVar2;
  puVar1[9] = uVar3;
  if (puVar1[4] != 0) {
    *param_2 = 0;
  }
  return param_1;
}



// FUNCTION 148250bcc FUN_148250bcc body=71 status=ok
// SIG undefined FUN_148250bcc(void)

undefined8 * FUN_148250bcc(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14ae69770;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148250c28 FUN_148250c28 body=144 status=ok
// SIG undefined FUN_148250c28(void)

void FUN_148250c28(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541440;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae69770;
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  puVar1[6] = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
                    /* WARNING: Could not recover jumptable at 0x000148250cad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)(puVar3,puVar1 + 6);
    return;
  }
  return;
}



// FUNCTION 148250cb8 FUN_148250cb8 body=144 status=ok
// SIG undefined FUN_148250cb8(void)

void FUN_148250cb8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541440;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae69770;
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  puVar1[6] = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
                    /* WARNING: Could not recover jumptable at 0x000148250d3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)(puVar3,puVar1 + 6);
    return;
  }
  return;
}



// FUNCTION 148250d48 FUN_148250d48 body=171 status=ok
// SIG undefined FUN_148250d48(void)

void FUN_148250d48(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a541440;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae69770;
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
                    /* WARNING: Could not recover jumptable at 0x000148250de3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148250df4 FUN_148250df4 body=91 status=ok
// SIG undefined FUN_148250df4(void)

void FUN_148250df4(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = *(code **)(param_1 + 0x20);
  plVar3 = (longlong *)(param_1 + 0x40);
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x30);
  }
  local_20 = param_2;
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148250e50 FUN_148250e50 body=93 status=ok
// SIG undefined FUN_148250e50(void)

undefined8 FUN_148250e50(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = *(code **)(param_1 + 0x20);
  plVar3 = (longlong *)(param_1 + 0x40);
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x30);
  }
  local_20 = param_2;
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148250eae FUN_148250eae body=117 status=ok
// SIG undefined FUN_148250eae(void)

void FUN_148250eae(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_14113f0c0();
  if (cVar1 != '\0') {
    local_28 = param_2;
    plVar2 = (longlong *)FUN_14479d2ce(param_1);
    uVar3 = FUN_14477b072(plVar2,*(undefined8 *)(param_1 + 8));
    (**(code **)(*plVar2 + 0x248))(plVar2,uVar3,&local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148250f24 FUN_148250f24 body=29 status=ok
// SIG undefined FUN_148250f24(void)

undefined8 FUN_148250f24(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148250f5c FUN_148250f5c body=29 status=ok
// SIG undefined FUN_148250f5c(void)

bool FUN_148250f5c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148250f7a FUN_148250f7a body=26 status=ok
// SIG undefined FUN_148250f7a(void)

bool FUN_148250f7a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148250f94 FUN_148250f94 body=24 status=ok
// SIG undefined FUN_148250f94(void)

bool FUN_148250f94(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148250fac FUN_148250fac body=101 status=ok
// SIG undefined FUN_148250fac(void)

void FUN_148250fac(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ae69800;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148251012 FUN_148251012 body=101 status=ok
// SIG undefined FUN_148251012(void)

void FUN_148251012(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ae69800;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148251078 FUN_148251078 body=134 status=ok
// SIG undefined FUN_148251078(void)

void FUN_148251078(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ae69800;
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
                    /* WARNING: Could not recover jumptable at 0x0001482510ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1482510fe FUN_1482510fe body=42 status=ok
// SIG undefined FUN_1482510fe(void)

void FUN_1482510fe(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148251125. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148251128 FUN_148251128 body=154 status=ok
// SIG undefined FUN_148251128(void)

bool FUN_148251128(longlong param_1,undefined4 param_2)

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



// FUNCTION 1482511c4 FUN_1482511c4 body=29 status=ok
// SIG undefined FUN_1482511c4(void)

undefined8 FUN_1482511c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1482511fc FUN_1482511fc body=29 status=ok
// SIG undefined FUN_1482511fc(void)

bool FUN_1482511fc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14825121a FUN_14825121a body=26 status=ok
// SIG undefined FUN_14825121a(void)

bool FUN_14825121a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148251234 FUN_148251234 body=24 status=ok
// SIG undefined FUN_148251234(void)

bool FUN_148251234(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14825124c FUN_14825124c body=101 status=ok
// SIG undefined FUN_14825124c(void)

void FUN_14825124c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ae69870;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1482512b2 FUN_1482512b2 body=101 status=ok
// SIG undefined FUN_1482512b2(void)

void FUN_1482512b2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ae69870;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148251318 FUN_148251318 body=134 status=ok
// SIG undefined FUN_148251318(void)

void FUN_148251318(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae69870;
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
                    /* WARNING: Could not recover jumptable at 0x00014825138f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14825139e FUN_14825139e body=39 status=ok
// SIG undefined FUN_14825139e(void)

void FUN_14825139e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001482513c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 1482513c6 FUN_1482513c6 body=146 status=ok
// SIG undefined FUN_1482513c6(void)

bool FUN_1482513c6(longlong param_1)

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



// FUNCTION 14825145a FUN_14825145a body=296 status=ok
// SIG undefined FUN_14825145a(void)

longlong * FUN_14825145a(longlong *param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

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
  plVar3 = (longlong *)FUN_148251583();
  plVar4 = plVar3 + 2;
  local_40 = plVar4;
  local_38 = plVar3;
  FUN_1482516d2(&local_40,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_148251516;
    param_1[1] = 0;
LAB_1482514dc:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_148251516;
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
      if (plVar4 == (longlong *)0x0) goto LAB_148251516;
      goto LAB_1482514dc;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_148251516;
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
LAB_148251516:
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
  local_48 = 0x2a0;
  FUN_140a52e78(*param_1,"STextScroller",param_2,param_3);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148251583 FUN_148251583 body=161 status=ok
// SIG undefined FUN_148251583(void)

undefined8 * FUN_148251583(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x2b0);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14ae698e0;
  memset(puVar1 + 2,0,0x2a0);
  FUN_140a55f88(puVar1 + 2);
  puVar1[2] = &PTR_FUN_14ae69900;
  *(undefined2 *)(puVar1 + 0x4f) = 1;
  *(undefined8 *)((longlong)puVar1 + 0x27c) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x284) = 0x3f800000;
  puVar1[0x51] = 0;
  puVar1[0x52] = 0;
  puVar1[0x53] = 0x3f00000041c80000;
  puVar1[0x54] = 0x3f000000;
  *(undefined4 *)(puVar1 + 0x55) = 0;
  return puVar1;
}



// FUNCTION 14825162e FUN_14825162e body=29 status=ok
// SIG undefined FUN_14825162e(void)

undefined8 FUN_14825162e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14825164c FUN_14825164c body=38 status=ok
// SIG undefined FUN_14825164c(void)

undefined8 FUN_14825164c(undefined8 param_1,int param_2)

{
  FUN_148251672();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148251672 FUN_148251672 body=96 status=ok
// SIG undefined FUN_148251672(void)

void FUN_148251672(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ae69900;
  plVar3 = (longlong *)param_1[0x50];
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
  *param_1 = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 1482516d2 FUN_1482516d2 body=167 status=ok
// SIG undefined FUN_1482516d2(void)

void FUN_1482516d2(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14825174d;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14825174d;
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
LAB_14825174d:
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
                    /* WARNING: Could not recover jumptable at 0x00014825176d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14825177a FUN_14825177a body=29 status=ok
// SIG undefined FUN_14825177a(void)

undefined8 FUN_14825177a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1482517b2 FUN_1482517b2 body=29 status=ok
// SIG undefined FUN_1482517b2(void)

bool FUN_1482517b2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1482517d0 FUN_1482517d0 body=26 status=ok
// SIG undefined FUN_1482517d0(void)

bool FUN_1482517d0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1482517ea FUN_1482517ea body=24 status=ok
// SIG undefined FUN_1482517ea(void)

bool FUN_1482517ea(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148251802 FUN_148251802 body=101 status=ok
// SIG undefined FUN_148251802(void)

void FUN_148251802(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a55eab0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae69b40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148251868 FUN_148251868 body=101 status=ok
// SIG undefined FUN_148251868(void)

void FUN_148251868(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a55eab0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae69b40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1482518ce FUN_1482518ce body=134 status=ok
// SIG undefined FUN_1482518ce(void)

void FUN_1482518ce(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a55eab0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae69b40;
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
                    /* WARNING: Could not recover jumptable at 0x000148251945. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148251954 FUN_148251954 body=52 status=ok
// SIG undefined FUN_148251954(void)

undefined8 FUN_148251954(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3);
  return param_2;
}



// FUNCTION 148251988 FUN_148251988 body=203 status=ok
// SIG undefined FUN_148251988(void)

bool FUN_148251988(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  longlong *local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar3 = FUN_144a61b4f();
  if (cVar3 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar5 = local_38;
  }
  else {
    lVar5 = 0;
  }
  lVar4 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar4 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar4,local_48,param_2);
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
  }
  if ((lVar5 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar5);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar4 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148251a54 FUN_148251a54 body=1129 status=ok
// SIG undefined FUN_148251a54(void)

ulonglong FUN_148251a54(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  ulonglong *puVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong lVar17;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  longlong *local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 local_80;
  ulonglong local_78;
  longlong *local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar16 = param_1 + 4;
  cVar6 = FUN_144729dda(plVar16);
  if (((((cVar6 != '\0') || (cVar6 = FUN_144729dda(param_1 + 5), cVar6 != '\0')) &&
       (lVar11 = *param_2, lVar11 != 0)) &&
      ((lVar8 = FUN_14101b6e6(), lVar8 != 0 && (*(int *)(lVar8 + 0x38) <= *(int *)(lVar11 + 0x38))))
      ) && ((*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
             lVar8 + 0x30 && (*param_2 != 0)))) {
    lVar11 = param_1[3];
    local_a0 = param_1;
    local_90 = param_3;
    if ((longlong)(int)lVar11 != 0) {
      local_98 = param_1 + 2;
      lVar8 = param_1[2];
      lVar17 = 0;
      do {
        uVar12 = *(ulonglong *)(lVar8 + lVar17);
        lVar4 = *(longlong *)(uVar12 + 0x10);
        lVar10 = *param_2;
        if (((lVar10 == 0) || (lVar9 = FUN_14101b6e6(), lVar9 == 0)) ||
           ((*(int *)(lVar10 + 0x38) < *(int *)(lVar9 + 0x38) ||
            (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) !=
             lVar9 + 0x30)))) {
          lVar10 = 0;
        }
        else {
          lVar10 = *param_2;
        }
        if (lVar4 == lVar10) {
          local_78 = uVar12;
          local_50 = uVar12;
          if ((uVar12 != 0) && (DAT_14c950c29 != 0)) {
            FUN_1456cec3c(uVar12);
          }
          FUN_14776745c(local_98,&local_78,1);
          lVar11 = FUN_14479d2ce(plVar16);
          plVar16 = local_a0;
          if (uVar12 != 0) goto LAB_148251bd0;
          goto LAB_148251b8a;
        }
        lVar17 = lVar17 + 8;
      } while ((longlong)(int)lVar11 * 8 != lVar17);
    }
    lVar11 = FUN_14479d2ce(plVar16);
LAB_148251b8a:
    plVar16 = local_a0;
    if (lVar11 == 0) {
      lVar17 = FUN_14479d2ce(local_a0 + 6);
      lVar8 = *param_2;
      if (lVar17 == 0) {
        local_68 = lVar8;
        if ((lVar8 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        uVar13 = FUN_14479d2ce(plVar16 + 5);
        uVar12 = FUN_1412b606d(uVar13,&local_68,0);
      }
      else {
        local_60 = lVar8;
        if ((lVar8 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        uVar12 = FUN_143335f3f(lVar17,&local_60,0);
      }
    }
    else {
      local_58 = *param_2;
      if ((local_58 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      uVar12 = FUN_143335ec0(lVar11,&local_58,0);
    }
    local_50 = uVar12;
    if (uVar12 != 0) {
LAB_148251bd0:
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(uVar12);
      }
      iVar3 = (int)plVar16[1];
      *(uint *)(plVar16 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)plVar16 + 0xc) < iVar3 + 1U) {
        FUN_147702a74(plVar16,iVar3);
      }
      *(ulonglong *)(*plVar16 + (longlong)iVar3 * 8) = uVar12;
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(uVar12);
      }
      if (lVar11 == 0) {
LAB_148251d04:
        uVar7 = ((uint)(uVar12 >> 0x14) & 0xffff ^ (uint)(uVar12 >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        puVar14 = (ulonglong *)FUN_1477675fa(plVar16 + 7,uVar7 >> 0x10 ^ uVar7,&local_50);
        if (*puVar14 == 0) {
          local_88 = *local_90;
          local_80 = local_90[1];
          FUN_147767550(local_50,&local_78);
          plVar16 = local_70;
          if (local_70 == (longlong *)0x0) {
            *puVar14 = local_78;
            plVar15 = (longlong *)puVar14[1];
            if (plVar15 != (longlong *)0x0) {
              puVar14[1] = 0;
LAB_148251e57:
              LOCK();
              plVar16 = plVar15 + 1;
              *(int *)plVar16 = (int)*plVar16 + -1;
              UNLOCK();
              if ((int)*plVar16 == 0) {
                (**(code **)*plVar15)(plVar15);
                LOCK();
                piVar2 = (int *)((longlong)plVar15 + 0xc);
                *piVar2 = *piVar2 + -1;
                iVar3 = *piVar2;
                UNLOCK();
joined_r0x000148251e82:
                if (iVar3 == 0) {
                  (**(code **)(*plVar15 + 0x10))(plVar15);
                }
              }
            }
          }
          else {
            LOCK();
            *(int *)(local_70 + 1) = (int)local_70[1] + 1;
            UNLOCK();
            *puVar14 = local_78;
            plVar15 = (longlong *)puVar14[1];
            if (local_70 == plVar15) {
              LOCK();
              plVar15 = local_70 + 1;
              *(int *)plVar15 = (int)*plVar15 + -1;
              UNLOCK();
              if ((int)*plVar15 == 0) {
                (**(code **)*local_70)(local_70);
                LOCK();
                piVar2 = (int *)((longlong)plVar16 + 0xc);
                *piVar2 = *piVar2 + -1;
                iVar3 = *piVar2;
                UNLOCK();
                plVar15 = plVar16;
                goto joined_r0x000148251e82;
              }
            }
            else {
              puVar14[1] = (ulonglong)local_70;
              if (plVar15 != (longlong *)0x0) goto LAB_148251e57;
            }
          }
          if (local_70 != (longlong *)0x0) {
            LOCK();
            plVar16 = local_70 + 1;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)*plVar16 == 0) {
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
        }
      }
      else {
        FUN_140760c2c(lVar11,&local_78);
        plVar15 = local_70;
        uVar5 = local_78;
        if (local_70 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_70 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_70)(local_70);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
        uVar12 = local_50;
        if (uVar5 != 0) goto LAB_148251d04;
      }
      uVar12 = local_50;
      if (local_50 != 0) {
        lVar11 = FUN_14101b6e6();
        if ((*(int *)(lVar11 + 0x38) <= *(int *)(*(longlong *)(uVar12 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(uVar12 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar11 + 0x38) * 8) == lVar11 + 0x30)) goto LAB_148251aca;
      }
    }
  }
  uVar12 = 0;
LAB_148251aca:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148251ebe FUN_148251ebe body=165 status=ok
// SIG undefined FUN_148251ebe(void)

undefined8 *
FUN_148251ebe(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

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
  FUN_148251f64(&local_38,*param_3,&local_28);
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



// FUNCTION 148251f64 FUN_148251f64 body=315 status=ok
// SIG undefined FUN_148251f64(void)

undefined8 FUN_148251f64(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined1 auStack_228 [32];
  undefined8 **local_208;
  undefined8 *local_200;
  undefined1 local_1f8 [8];
  longlong *local_1f0;
  undefined8 local_1e0;
  undefined1 local_1d8 [424];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_1e0 = param_2;
  FUN_1417aa8de(local_1d8);
  plVar3 = local_28;
  local_30 = *param_3;
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar4 + 8) = *(int *)((longlong)plVar4 + 8) + 1;
    UNLOCK();
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      puVar5 = (undefined8 *)*local_28;
      local_28 = plVar4;
      (*(code *)*puVar5)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar4 = local_28;
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        plVar4 = local_28;
      }
    }
  }
  local_28 = plVar4;
  local_200 = &local_1e0;
  local_208 = &local_200;
  FUN_1412240d2(local_1f8,"SObjectWidget","Runtime\\UMG\\Public\\Blueprint/UserWidgetPool.h",0x41);
  FUN_1410fb2a4(local_1f8,param_1,local_1d8);
  if (local_1f0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_1f0 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  FUN_1417aa988(local_1d8);
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482520a0 FUN_1482520a0 body=340 status=ok
// SIG undefined FUN_1482520a0(void)

undefined4 * FUN_1482520a0(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1482521f6(param_1,local_48);
  uVar1 = param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  FUN_148248078(local_40 + 1,uVar1);
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  uVar1 = *local_40;
  uVar8 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar8 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar4 >> 4);
  cVar3 = FUN_1482522dc(param_1,uVar8,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x24) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_14825241c(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482521f6 FUN_1482521f6 body=230 status=ok
// SIG undefined FUN_1482521f6(void)

int * FUN_1482521f6(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 1482522dc FUN_1482522dc body=138 status=ok
// SIG undefined FUN_1482522dc(void)

undefined8 FUN_1482522dc(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      do {
        plVar8 = (longlong *)(*param_1 + (longlong)iVar9 * 0x28);
        if (*plVar8 == *param_3) {
          lVar5 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar6 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          uVar3 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar7 = param_3[3];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x1c);
          *(int *)(plVar8 + 2) = (int)param_3[2];
          *(undefined4 *)((longlong)plVar8 + 0x14) = uVar3;
          *(int *)(plVar8 + 3) = (int)lVar7;
          *(undefined4 *)((longlong)plVar8 + 0x1c) = uVar4;
          *(int *)plVar8 = (int)lVar5;
          *(undefined4 *)((longlong)plVar8 + 4) = uVar1;
          *(int *)(plVar8 + 1) = (int)lVar6;
          *(undefined4 *)((longlong)plVar8 + 0xc) = uVar2;
          FUN_148252366((int)lVar5,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = (int)plVar8[4];
      } while (iVar9 != -1);
    }
  }
  return 0;
}



// FUNCTION 148252366 FUN_148252366 body=114 status=ok
// SIG undefined FUN_148252366(void)

void FUN_148252366(longlong *param_1,int param_2)

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



// FUNCTION 1482523d8 FUN_1482523d8 body=68 status=ok
// SIG undefined FUN_1482523d8(void)

void FUN_1482523d8(longlong param_1,uint param_2)

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
  FUN_14825241c(param_1);
  return;
}



// FUNCTION 14825241c FUN_14825241c body=473 status=ok
// SIG undefined FUN_14825241c(void)

void FUN_14825241c(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x28);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x24 + lVar6 * 0x28) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar6 * 0x28) =
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



// FUNCTION 1482525f6 FUN_1482525f6 body=29 status=ok
// SIG undefined FUN_1482525f6(void)

undefined8 FUN_1482525f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14825262e FUN_14825262e body=29 status=ok
// SIG undefined FUN_14825262e(void)

bool FUN_14825262e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14825264c FUN_14825264c body=26 status=ok
// SIG undefined FUN_14825264c(void)

bool FUN_14825264c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}


