// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143fa4ad6 FUN_143fa4ad6 body=134 status=ok
// SIG undefined FUN_143fa4ad6(void)

void FUN_143fa4ad6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b5407d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b541020;
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
                    /* WARNING: Could not recover jumptable at 0x000143fa4b4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143fa4b66 FUN_143fa4b66 body=20 status=ok
// SIG undefined FUN_143fa4b66(void)

undefined1 FUN_143fa4b66(longlong param_1)

{
  FUN_143fa4b7a(param_1 + 0x18);
  return 1;
}



// FUNCTION 143fa4b7a FUN_143fa4b7a body=210 status=ok
// SIG undefined FUN_143fa4b7a(void)

byte FUN_143fa4b7a(uint *param_1)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_48 [32];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar4 != (undefined8 *)0x0) && (*(uint *)(puVar4 + 2) == param_1[1])) &&
       ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar4 + 1) & 0x10200000) == 0) {
        uVar3 = *puVar4;
      }
      else {
        uVar3 = 0;
      }
      FUN_148b05ade(uVar3,&local_28);
      bVar2 = 1;
      if ((local_28 == (float)param_1[2]) && (!NAN(local_28) && !NAN((float)param_1[2]))) {
        if ((local_24 == (float)param_1[3]) && (!NAN(local_24) && !NAN((float)param_1[3]))) {
          if ((local_20 == (float)param_1[4]) && (!NAN(local_20) && !NAN((float)param_1[4]))) {
            bVar2 = -((float)param_1[5] != local_1c) & 1;
          }
        }
      }
      goto LAB_143fa4bd2;
    }
  }
  bVar2 = 0;
LAB_143fa4bd2:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fa4c4e FUN_143fa4c4e body=29 status=ok
// SIG undefined FUN_143fa4c4e(void)

undefined8 FUN_143fa4c4e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fa4c80 FUN_143fa4c80 body=101 status=ok
// SIG undefined FUN_143fa4c80(void)

void FUN_143fa4c80(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b541090;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143fa4ce6 FUN_143fa4ce6 body=101 status=ok
// SIG undefined FUN_143fa4ce6(void)

void FUN_143fa4ce6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b541090;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143fa4d4c FUN_143fa4d4c body=134 status=ok
// SIG undefined FUN_143fa4d4c(void)

void FUN_143fa4d4c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b5407d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b541090;
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
                    /* WARNING: Could not recover jumptable at 0x000143fa4dc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143fa4ddc FUN_143fa4ddc body=20 status=ok
// SIG undefined FUN_143fa4ddc(void)

undefined1 FUN_143fa4ddc(longlong param_1)

{
  FUN_143fa4df0(param_1 + 0x18);
  return 1;
}



// FUNCTION 143fa4df0 FUN_143fa4df0 body=182 status=ok
// SIG undefined FUN_143fa4df0(void)

byte FUN_143fa4df0(uint *param_1)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_48 [32];
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar4 != (undefined8 *)0x0) && (*(uint *)(puVar4 + 2) == param_1[1])) &&
       ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar4 + 1) & 0x10200000) == 0) {
        uVar3 = *puVar4;
      }
      else {
        uVar3 = 0;
      }
      FUN_148b05b48(uVar3,&local_28);
      if ((local_28 == *(double *)(param_1 + 2)) &&
         (!NAN(local_28) && !NAN(*(double *)(param_1 + 2)))) {
        bVar2 = -(*(double *)(param_1 + 4) == local_20) & 1;
        goto LAB_143fa4e48;
      }
    }
  }
  bVar2 = 0;
LAB_143fa4e48:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fa4ea8 FUN_143fa4ea8 body=29 status=ok
// SIG undefined FUN_143fa4ea8(void)

undefined8 FUN_143fa4ea8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fa4eda FUN_143fa4eda body=101 status=ok
// SIG undefined FUN_143fa4eda(void)

void FUN_143fa4eda(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b541100;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143fa4f40 FUN_143fa4f40 body=101 status=ok
// SIG undefined FUN_143fa4f40(void)

void FUN_143fa4f40(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b541100;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143fa4fa6 FUN_143fa4fa6 body=134 status=ok
// SIG undefined FUN_143fa4fa6(void)

void FUN_143fa4fa6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b5407d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b541100;
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
                    /* WARNING: Could not recover jumptable at 0x000143fa501d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143fa5036 FUN_143fa5036 body=20 status=ok
// SIG undefined FUN_143fa5036(void)

undefined1 FUN_143fa5036(longlong param_1)

{
  FUN_143fa504a(param_1 + 0x18);
  return 1;
}



// FUNCTION 143fa504a FUN_143fa504a body=184 status=ok
// SIG undefined FUN_143fa504a(void)

byte FUN_143fa504a(uint *param_1)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_48 [32];
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar4 != (undefined8 *)0x0) && (*(uint *)(puVar4 + 2) == param_1[1])) &&
       ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar4 + 1) & 0x10200000) == 0) {
        uVar3 = *puVar4;
      }
      else {
        uVar3 = 0;
      }
      FUN_148b05b48(uVar3,&local_28);
      bVar2 = 1;
      if ((local_28 == *(double *)(param_1 + 2)) &&
         (!NAN(local_28) && !NAN(*(double *)(param_1 + 2)))) {
        bVar2 = -(*(double *)(param_1 + 4) != local_20) & 1;
      }
      goto LAB_143fa50a2;
    }
  }
  bVar2 = 0;
LAB_143fa50a2:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fa5104 FUN_143fa5104 body=57 status=ok
// SIG undefined FUN_143fa5104(void)

undefined8 * FUN_143fa5104(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b541170;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fa5152 FUN_143fa5152 body=159 status=ok
// SIG undefined FUN_143fa5152(void)

void FUN_143fa5152(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b5411e0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b541170;
  puVar2[3] = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  _Src = *(void **)(param_1 + 0x18);
  *(int *)(puVar2 + 4) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 3,iVar1,0);
    memcpy((void *)puVar2[3],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
  return;
}



// FUNCTION 143fa51f2 FUN_143fa51f2 body=159 status=ok
// SIG undefined FUN_143fa51f2(void)

void FUN_143fa51f2(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b5411e0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b541170;
  puVar2[3] = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  _Src = *(void **)(param_1 + 0x18);
  *(int *)(puVar2 + 4) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 3,iVar1,0);
    memcpy((void *)puVar2[3],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
  return;
}



// FUNCTION 143fa5292 FUN_143fa5292 body=198 status=ok
// SIG undefined FUN_143fa5292(void)

void FUN_143fa5292(longlong param_1,LPCRITICAL_SECTION param_2)

{
  DWORD DVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  void *_Src;
  _LIST_ENTRY **pp_Var3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14b5411e0;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14b541170;
  (p_Var2->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  DVar1 = *(DWORD *)(param_1 + 0x20);
  _Src = *(void **)(param_1 + 0x18);
  p_Var2->EntryCount = DVar1;
  if ((longlong)(int)DVar1 == 0) {
    p_Var2->ContentionCount = 0;
  }
  else {
    pp_Var3 = &(p_Var2->ProcessLocksList).Blink;
    FUN_1446dd670(pp_Var3,DVar1,0);
    memcpy(*pp_Var3,_Src,(longlong)(int)DVar1 * 2);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143fa5346. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143fa5362 FUN_143fa5362 body=58 status=ok
// SIG undefined FUN_143fa5362(void)

undefined8 * FUN_143fa5362(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b541250;
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fa53b0 FUN_143fa53b0 body=110 status=ok
// SIG undefined FUN_143fa53b0(void)

void FUN_143fa53b0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5411e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b541250;
  plVar2 = *(longlong **)(param_1 + 0x18);
  puVar1[3] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
  return;
}



// FUNCTION 143fa541e FUN_143fa541e body=110 status=ok
// SIG undefined FUN_143fa541e(void)

void FUN_143fa541e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5411e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b541250;
  plVar2 = *(longlong **)(param_1 + 0x18);
  puVar1[3] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
  return;
}



// FUNCTION 143fa548c FUN_143fa548c body=148 status=ok
// SIG undefined FUN_143fa548c(void)

void FUN_143fa548c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  _LIST_ENTRY *p_Var2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b5411e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b541250;
  p_Var2 = *(_LIST_ENTRY **)(param_1 + 0x18);
  (p_Var1->ProcessLocksList).Blink = p_Var2;
  if (p_Var2 != (_LIST_ENTRY *)0x0) {
    (*(code *)p_Var2->Flink->Blink)();
  }
  p_Var1->EntryCount = *(DWORD *)(param_1 + 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143fa5510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143fa5530 FUN_143fa5530 body=26 status=ok
// SIG undefined FUN_143fa5530(void)

undefined8 FUN_143fa5530(longlong param_1,undefined8 param_2)

{
  FUN_1418c22aa(param_2,param_1 + 0x18);
  return 1;
}



// FUNCTION 143fa554a FUN_143fa554a body=57 status=ok
// SIG undefined FUN_143fa554a(void)

undefined8 * FUN_143fa554a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b5412c0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fa5598 FUN_143fa5598 body=159 status=ok
// SIG undefined FUN_143fa5598(void)

void FUN_143fa5598(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b5411e0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b5412c0;
  puVar2[3] = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  _Src = *(void **)(param_1 + 0x18);
  *(int *)(puVar2 + 4) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 3,iVar1,0);
    memcpy((void *)puVar2[3],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
  return;
}



// FUNCTION 143fa5638 FUN_143fa5638 body=159 status=ok
// SIG undefined FUN_143fa5638(void)

void FUN_143fa5638(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b5411e0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b5412c0;
  puVar2[3] = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  _Src = *(void **)(param_1 + 0x18);
  *(int *)(puVar2 + 4) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 3,iVar1,0);
    memcpy((void *)puVar2[3],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
  return;
}



// FUNCTION 143fa56d8 FUN_143fa56d8 body=198 status=ok
// SIG undefined FUN_143fa56d8(void)

void FUN_143fa56d8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  DWORD DVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  void *_Src;
  _LIST_ENTRY **pp_Var3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14b5411e0;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14b5412c0;
  (p_Var2->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  DVar1 = *(DWORD *)(param_1 + 0x20);
  _Src = *(void **)(param_1 + 0x18);
  p_Var2->EntryCount = DVar1;
  if ((longlong)(int)DVar1 == 0) {
    p_Var2->ContentionCount = 0;
  }
  else {
    pp_Var3 = &(p_Var2->ProcessLocksList).Blink;
    FUN_1446dd670(pp_Var3,DVar1,0);
    memcpy(*pp_Var3,_Src,(longlong)(int)DVar1 * 2);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143fa578c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143fa57ae FUN_143fa57ae body=26 status=ok
// SIG undefined FUN_143fa57ae(void)

undefined8 FUN_143fa57ae(longlong param_1,undefined8 param_2)

{
  FUN_148af486a(param_2,param_1 + 0x18);
  return 1;
}



// FUNCTION 143fa57c8 FUN_143fa57c8 body=535 status=ok
// SIG undefined FUN_143fa57c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143fa57c8(void)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGameSettings",0,0,&PTR_FUN_14b539be0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGameSettings",&PTR_FUN_14b53a1a0,1,&PTR_FUN_14b53a170);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/GbxGameSettings",0,0,&PTR_FUN_14b53a710);
  FUN_14098d3d2(FUN_143fa0e24,L"/Script/GbxGameSettings",L"EGbxGameSettingDataSourceType",
                &DAT_14cb9a548);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b53af00;
  local_68 = 5;
  FUN_14282b410(L"/Script/GbxGameSettings",0,0,&PTR_FUN_14b53af20);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 4;
  FUN_14282b410(L"/Script/GbxGameSettings",0,0,&PTR_FUN_14b53b3e0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGameSettings",&PTR_FUN_14b53bd80,2,0);
  ppuStack_60 = &PTR_FUN_14b53d1a0;
  uStack_58 = 2;
  local_68 = 0xb;
  FUN_14282b410(L"/Script/GbxGameSettings",0,0,&PTR_FUN_14b53d1e0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGameSettings",&PTR_FUN_14b53d6d0,1,0);
  FUN_140056680(&DAT_14cb9a7e8,L"Setting is hidden");
  atexit((_func_5014 *)&LAB_143fa0f00);
  local_48 = 0x800000014b53d7b4;
  local_34 = 0xf;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_146593ff4(&local_48);
  DAT_14cb9a800 = 0;
  DAT_14cb9a808 = 0;
  DAT_14cb9a810 = 0;
  DAT_14cb9a818 = 0;
  DAT_14cb9a828 = 0;
  _DAT_14cb9a820 = 0;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fa59e0 FUN_143fa59e0 body=55 status=ok
// SIG undefined FUN_143fa59e0(void)

void FUN_143fa59e0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9ab28 == 0) {
    uVar1 = FUN_141462c38();
    DAT_14cb9ab28 = FUN_14171c317(FUN_146594d3d,uVar1,L"ESubtitlesSettings");
  }
  return;
}



// FUNCTION 143fa5a17 FUN_143fa5a17 body=55 status=ok
// SIG undefined FUN_143fa5a17(void)

void FUN_143fa5a17(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9ab40 == 0) {
    uVar1 = FUN_141462c38();
    DAT_14cb9ab40 = FUN_14171c317(FUN_146594e5d,uVar1,L"ESubtitlesTextSize");
  }
  return;
}



// FUNCTION 143fa5a4e FUN_143fa5a4e body=55 status=ok
// SIG undefined FUN_143fa5a4e(void)

void FUN_143fa5a4e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9ab58 == 0) {
    uVar1 = FUN_141462c38();
    DAT_14cb9ab58 = FUN_14171c317(FUN_146594dfd,uVar1,L"ESubtitlesTextColor");
  }
  return;
}



// FUNCTION 143fa5a85 FUN_143fa5a85 body=55 status=ok
// SIG undefined FUN_143fa5a85(void)

void FUN_143fa5a85(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9ab70 == 0) {
    uVar1 = FUN_141462c38();
    DAT_14cb9ab70 = FUN_14171c317(FUN_146594d9d,uVar1,L"ESubtitlesBackgroundOpacity");
  }
  return;
}



// FUNCTION 143fa5abc FUN_143fa5abc body=97 status=ok
// SIG undefined FUN_143fa5abc(void)

void FUN_143fa5abc(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 0x140);
  *(uint *)(lVar2 + 0x140) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x144) < iVar1 + 1U) {
    FUN_14001d63e((longlong *)(lVar2 + 0x138),iVar1);
  }
  lVar2 = *(longlong *)(lVar2 + 0x138);
  plVar3 = (longlong *)*param_2;
  *(longlong **)(lVar2 + (longlong)iVar1 * 0x10) = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(int *)(lVar2 + (longlong)iVar1 * 0x10 + 8) = (int)param_2[1];
  return;
}



// FUNCTION 143fa5b56 FUN_143fa5b56 body=29 status=ok
// SIG undefined FUN_143fa5b56(void)

undefined8 FUN_143fa5b56(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fa5b88 FUN_143fa5b88 body=93 status=ok
// SIG undefined FUN_143fa5b88(void)

void FUN_143fa5b88(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b549b70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b549b00;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143fa5be6 FUN_143fa5be6 body=93 status=ok
// SIG undefined FUN_143fa5be6(void)

void FUN_143fa5be6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b549b70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b549b00;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143fa5c44 FUN_143fa5c44 body=126 status=ok
// SIG undefined FUN_143fa5c44(void)

void FUN_143fa5c44(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b549b70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b549b00;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143fa5cb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143fa5cc2 FUN_143fa5cc2 body=29 status=ok
// SIG undefined FUN_143fa5cc2(void)

undefined8 FUN_143fa5cc2(longlong param_1,undefined8 param_2)

{
  FUN_143fa5d32(param_2,param_1 + 0x18);
  return param_2;
}



// FUNCTION 143fa5ce0 FUN_143fa5ce0 body=81 status=ok
// SIG undefined FUN_143fa5ce0(void)

undefined8 FUN_143fa5ce0(longlong param_1)

{
  undefined1 auStack_48 [40];
  longlong *local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_143fa5d32(local_20,param_1 + 0x18);
  if (local_20[0] != (longlong *)0x0) {
    (**(code **)(*local_20[0] + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fa5d32 FUN_143fa5d32 body=816 status=ok
// SIG undefined FUN_143fa5d32(void)

undefined8 * FUN_143fa5d32(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 auStack_d8 [32];
  longlong local_b8 [2];
  longlong *local_a8 [2];
  undefined8 local_98;
  longlong *local_90;
  longlong *local_88;
  undefined4 local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined4 *local_68;
  ulonglong *local_60;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_48 [4];
  longlong *local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar2 = *param_2;
  lVar3 = FUN_14107a740(lVar2);
  if (((lVar3 == 0) ||
      (plVar4 = (longlong *)FUN_14107a796(lVar3,*(undefined8 *)(lVar2 + 0x138)),
      plVar4 == (longlong *)0x0)) || ((int)plVar4[1] == *(int *)((longlong)plVar4 + 0x34))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
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
    plVar4 = DAT_14c844840;
    *param_1 = DAT_14c844840;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    *(undefined4 *)(param_1 + 1) = DAT_14c844848;
  }
  else {
    iVar5 = (int)plVar4[5];
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      puVar6 = (uint *)(plVar4 + 2);
      if ((uint *)plVar4[4] != (uint *)0x0) {
        puVar6 = (uint *)plVar4[4];
      }
      uVar10 = *puVar6;
      if (uVar10 == 0) {
        iVar7 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar7 = iVar5 + -1;
        }
        uVar9 = 0;
        uVar8 = (ulonglong)(uint)(iVar7 >> 5);
        if (iVar7 >> 5 < 1) {
          uVar8 = uVar9;
        }
        iVar7 = 0x3e;
        do {
          if (uVar8 == uVar9) goto LAB_143fa5e6f;
          uVar10 = puVar6[uVar9 + 1];
          uVar9 = uVar9 + 1;
          iVar7 = iVar7 + 0x20;
        } while (uVar10 == 0);
      }
      else {
        iVar7 = 0x3e;
      }
      uVar8 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar7 = iVar7 - ((uint)lVar2 ^ 0x3f);
      if (iVar7 < iVar5) {
        iVar5 = iVar7;
      }
    }
LAB_143fa5e6f:
    lVar2 = *plVar4 + (longlong)iVar5 * 0x90;
    local_88 = *(longlong **)(lVar2 + 8);
    if (local_88 != (longlong *)0x0) {
      (**(code **)(*local_88 + 8))();
    }
    local_80 = *(undefined4 *)(lVar2 + 0x10);
    FUN_1400b22c2(local_b8,"DynamicDetails_KeyboardInputAction");
    FUN_1412459d2(local_a8,local_b8);
    FUN_14023409e(&local_98,local_a8,1);
    local_48[0] = 4;
    FUN_14023423e(local_38,&local_88);
    local_68 = local_48;
    local_60 = &local_28;
    FUN_14010d304(&local_58);
    local_78 = local_98;
    local_70 = local_90;
    if (local_90 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_90 + 1) = (int)local_90[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(param_1,&local_78,&local_58);
    FUN_14007f2db(local_58,local_50);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if (local_38[0] != (longlong *)0x0) {
      (**(code **)(*local_38[0] + 0x10))();
    }
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_90 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    if (local_88 != (longlong *)0x0) {
      (**(code **)(*local_88 + 0x10))();
    }
    if (local_a8[0] != (longlong *)0x0) {
      (**(code **)(*local_a8[0] + 0x10))();
    }
    if (local_b8[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143fa6063 FUN_143fa6063 body=1030 status=ok
// SIG undefined FUN_143fa6063(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143fa6063(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined **ppuStack_50;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = "AssetRegistry";
  local_38 = 0xd;
  local_34 = 0;
  uVar2 = FUN_14001a6c0(&local_40,1);
  _DAT_14cb9a830 = (ulonglong)uVar2;
  local_40 = "UpscalingMethod";
  local_38 = 0xf;
  local_34 = 0;
  uVar2 = FUN_14001a6c0(&local_40,1);
  _DAT_14cb9a838 = (ulonglong)uVar2;
  local_40 = "FrameGeneration";
  local_38 = 0xf;
  local_34 = 0;
  uVar2 = FUN_14001a6c0(&local_40,1);
  _DAT_14cb9a840 = (ulonglong)uVar2;
  local_40 = "Upscaling";
  local_38 = 9;
  local_34 = 0;
  uVar2 = FUN_14001a6c0(&local_40,1);
  _DAT_14cb9a848 = (ulonglong)uVar2;
  local_40 = "AntiAliasingMethod";
  local_38 = 0x12;
  local_34 = 0;
  uVar2 = FUN_14001a6c0(&local_40,1);
  _DAT_14cb9a850 = (ulonglong)uVar2;
  local_40 = "WindowsTextureLODGroups";
  local_38 = 0x17;
  local_34 = 0;
  uVar2 = FUN_14001a6c0(&local_40,1);
  _DAT_14cb9a858 = (ulonglong)uVar2;
  local_40 = "Textures";
  local_38 = 8;
  local_34 = 0;
  uVar2 = FUN_14001a6c0(&local_40,1);
  _DAT_14cb9a860 = (ulonglong)uVar2;
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUISettings",&PTR_FUN_14b542070,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUISettings",&PTR_FUN_14b5427c0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUISettings",&PTR_FUN_14b545820,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUISettings",&PTR_FUN_14b546050,2,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUISettings",&PTR_FUN_14b546460,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUISettings",&PTR_FUN_14b5467e0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUISettings",&PTR_FUN_14b546b90,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUISettings",&PTR_FUN_14b546ff0,1,0);
  ppuStack_50 = &PTR_FUN_14b5472e0;
  local_58 = 1;
  local_48 = 4;
  FUN_14282b410(L"/Script/GbxUISettings",0,0,&PTR_FUN_14b547360);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUISettings",&PTR_FUN_14b547790,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUISettings",&PTR_FUN_14b547bb0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUISettings",&PTR_FUN_14b547fe0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUISettings",&PTR_FUN_14b5483f0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUISettings",&PTR_FUN_14b548810,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUISettings",&PTR_FUN_14b548c30,1,0);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxUISettings",&PTR_FUN_14b5493b0,1,&PTR_FUN_14b549380);
  FUN_1400b22c2(&local_40,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_40,&DAT_14cb9ac60);
  if (cVar1 == '\0') {
    _DAT_14cb9ac60 = 0;
    uRam000000014cb9ac68 = 0;
  }
  if (local_40 != (char *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fa646c FUN_143fa646c body=70 status=ok
// SIG undefined FUN_143fa646c(void)

void FUN_143fa646c(void)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = DAT_14cb0d2b0;
  if (DAT_14cb0d2b0 == 0) {
    return;
  }
  plVar2 = *(longlong **)(DAT_14cb0d2b0 + 0x2c8);
  if (plVar2 == (longlong *)0x0) {
    FUN_145876474(DAT_14cb0d2b0);
    plVar2 = *(longlong **)(lVar1 + 0x2c8);
    if (plVar2 == (longlong *)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000143fa6491. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x358))();
  return;
}



// FUNCTION 143fa6647 FUN_143fa6647 body=5085 status=ok
// SIG undefined FUN_143fa6647(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143fa6647(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  undefined4 local_70;
  undefined4 local_60;
  undefined4 uStack_5c;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb9ac88 = (ulonglong)uVar1;
  local_50 = "UpscalingMethod";
  local_48 = 0xf;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb9ac90 = (ulonglong)uVar1;
  local_50 = "FrameGeneration";
  local_48 = 0xf;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb9ac98 = (ulonglong)uVar1;
  local_50 = "Upscaling";
  local_48 = 9;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb9aca0 = (ulonglong)uVar1;
  local_50 = "AntiAliasingMethod";
  local_48 = 0x12;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb9aca8 = (ulonglong)uVar1;
  local_50 = "WindowsTextureLODGroups";
  local_48 = 0x17;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb9acb0 = (ulonglong)uVar1;
  local_50 = "Textures";
  local_48 = 8;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb9acb8 = (ulonglong)uVar1;
  FUN_140056680(&local_60,&DAT_149dfb77a);
  local_50 = "Platform.Trait.SupportsWindowedMode";
  local_48 = 0x23;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  local_50 = "GbxUISettings";
  local_48 = 0xd;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  local_50 = "GbxUISettings";
  local_48 = 0xd;
  local_44 = 0;
  uVar4 = FUN_14001a6c0(&local_50,1);
  local_70 = 0;
  local_78 = &local_60;
  FUN_14125750c(&DAT_14cb9acc0,uVar4,uVar3,uVar2);
  if (CONCAT44(uStack_5c,local_60) != 0) {
    FUN_1400020a8();
  }
  atexit((_func_5014 *)&LAB_143fa64b2);
  FUN_140056680(&local_60,&DAT_149dfb77a);
  local_50 = "Platform.Trait.SupportsVSync";
  local_48 = 0x1c;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  local_50 = "GbxUISettings";
  local_48 = 0xd;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  local_50 = "GbxUISettings";
  local_48 = 0xd;
  local_44 = 0;
  uVar4 = FUN_14001a6c0(&local_50,1);
  local_70 = 0;
  local_78 = &local_60;
  FUN_14125750c(&DAT_14cb9acc8,uVar4,uVar3,uVar2);
  if (CONCAT44(uStack_5c,local_60) != 0) {
    FUN_1400020a8();
  }
  atexit((_func_5014 *)&LAB_143fa64be);
  FUN_140056680(&local_60,&DAT_149dfb77a);
  local_50 = "Platform.Trait.SupportsGraphicsQuality";
  local_48 = 0x26;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  local_50 = "GbxUISettings";
  local_48 = 0xd;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  local_50 = "GbxUISettings";
  local_48 = 0xd;
  local_44 = 0;
  uVar4 = FUN_14001a6c0(&local_50,1);
  local_70 = 0;
  local_78 = &local_60;
  FUN_14125750c(&DAT_14cb9acd0,uVar4,uVar3,uVar2);
  if (CONCAT44(uStack_5c,local_60) != 0) {
    FUN_1400020a8();
  }
  atexit((_func_5014 *)&LAB_143fa64ca);
  FUN_140056680(&local_60,&DAT_149dfb77a);
  local_50 = "Platform.Trait.SupportsDisplayStats";
  local_48 = 0x23;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  local_50 = "GbxUISettings";
  local_48 = 0xd;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  local_50 = "GbxUISettings";
  local_48 = 0xd;
  local_44 = 0;
  uVar4 = FUN_14001a6c0(&local_50,1);
  local_70 = 0;
  local_78 = &local_60;
  FUN_14125750c(&DAT_14cb9acd8,uVar4,uVar3,uVar2);
  if (CONCAT44(uStack_5c,local_60) != 0) {
    FUN_1400020a8();
  }
  atexit((_func_5014 *)&LAB_143fa64d6);
  FUN_140056680(&local_60,&DAT_149dfb77a);
  local_50 = "Platform.Trait.SupportsGraphicsPreset";
  local_48 = 0x25;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  local_50 = "GbxUISettings";
  local_48 = 0xd;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  local_50 = "GbxUISettings";
  local_48 = 0xd;
  local_44 = 0;
  uVar4 = FUN_14001a6c0(&local_50,1);
  local_70 = 0;
  local_78 = &local_60;
  FUN_14125750c(&DAT_14cb9ace0,uVar4,uVar3,uVar2);
  if (CONCAT44(uStack_5c,local_60) != 0) {
    FUN_1400020a8();
  }
  atexit((_func_5014 *)&LAB_143fa64e2);
  FUN_140056680(&local_60,&DAT_149dfb77a);
  local_50 = "Platform.Trait.SupportsRayTracing";
  local_48 = 0x21;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  local_50 = "GbxUISettings";
  local_48 = 0xd;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  local_50 = "GbxUISettings";
  local_48 = 0xd;
  local_44 = 0;
  uVar4 = FUN_14001a6c0(&local_50,1);
  local_70 = 0;
  local_78 = &local_60;
  FUN_14125750c(&DAT_14cb9ace8,uVar4,uVar3,uVar2);
  if (CONCAT44(uStack_5c,local_60) != 0) {
    FUN_1400020a8();
  }
  atexit((_func_5014 *)&LAB_143fa64ee);
  FUN_140056680(&local_60,&DAT_149dfb77a);
  local_50 = "Platform.Trait.CanChangeAAMethod";
  local_48 = 0x20;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  local_50 = "GbxUISettings";
  local_48 = 0xd;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  local_50 = "GbxUISettings";
  local_48 = 0xd;
  local_44 = 0;
  uVar4 = FUN_14001a6c0(&local_50,1);
  local_70 = 0;
  local_78 = &local_60;
  FUN_14125750c(&DAT_14cb9acf0,uVar4,uVar3,uVar2);
  if (CONCAT44(uStack_5c,local_60) != 0) {
    FUN_1400020a8();
  }
  atexit((_func_5014 *)&LAB_143fa64fa);
  FUN_140056680(&local_60,&DAT_149dfb77a);
  local_50 = "Platform.Trait.NeedsBrightnessAdjustment";
  local_48 = 0x28;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  local_50 = "GbxUISettings";
  local_48 = 0xd;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  local_50 = "GbxUISettings";
  local_48 = 0xd;
  local_44 = 0;
  uVar4 = FUN_14001a6c0(&local_50,1);
  local_70 = 0;
  local_78 = &local_60;
  FUN_14125750c(&DAT_14cb9acf8,uVar4,uVar3,uVar2);
  if (CONCAT44(uStack_5c,local_60) != 0) {
    FUN_1400020a8();
  }
  atexit((_func_5014 *)&LAB_143fa6506);
  FUN_140056680(&local_60,&DAT_149dfb77a);
  local_50 = "Platform.Trait.SupportsScreenPercentage";
  local_48 = 0x27;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  local_50 = "GbxUISettings";
  local_48 = 0xd;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  local_50 = "GbxUISettings";
  local_48 = 0xd;
  local_44 = 0;
  uVar4 = FUN_14001a6c0(&local_50,1);
  local_70 = 0;
  local_78 = &local_60;
  FUN_14125750c(&DAT_14cb9ad00,uVar4,uVar3,uVar2);
  if (CONCAT44(uStack_5c,local_60) != 0) {
    FUN_1400020a8();
  }
  atexit((_func_5014 *)&LAB_143fa6512);
  FUN_140056680(&local_60,&DAT_149dfb77a);
  local_50 = "Platform.Trait.SupportsUpscalingQuality";
  local_48 = 0x27;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  local_50 = "GbxUISettings";
  local_48 = 0xd;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  local_50 = "GbxUISettings";
  local_48 = 0xd;
  local_44 = 0;
  uVar4 = FUN_14001a6c0(&local_50,1);
  local_70 = 0;
  local_78 = &local_60;
  FUN_14125750c(&DAT_14cb9ad08,uVar4,uVar3,uVar2);
  if (CONCAT44(uStack_5c,local_60) != 0) {
    FUN_1400020a8();
  }
  atexit((_func_5014 *)&LAB_143fa651e);
  FUN_140056680(&local_60,&DAT_149dfb77a);
  local_50 = "Platform.Trait.SupportsFOVSlider";
  local_48 = 0x20;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  local_50 = "GbxUISettings";
  local_48 = 0xd;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  local_50 = "GbxUISettings";
  local_48 = 0xd;
  local_44 = 0;
  uVar4 = FUN_14001a6c0(&local_50,1);
  local_70 = 0;
  local_78 = &local_60;
  FUN_14125750c(&DAT_14cb9ad10,uVar4,uVar3,uVar2);
  if (CONCAT44(uStack_5c,local_60) != 0) {
    FUN_1400020a8();
  }
  atexit((_func_5014 *)&LAB_143fa652a);
  FUN_140056680(&local_60,&DAT_149dfb77a);
  local_50 = "Platform.Trait.ProfanityFilterOptional";
  local_48 = 0x26;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  local_50 = "GbxUISettings";
  local_48 = 0xd;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  local_50 = "GbxUISettings";
  local_48 = 0xd;
  local_44 = 0;
  uVar4 = FUN_14001a6c0(&local_50,1);
  local_70 = 0;
  local_78 = &local_60;
  FUN_14125750c(&DAT_14cb9ad18,uVar4,uVar3,uVar2);
  if (CONCAT44(uStack_5c,local_60) != 0) {
    FUN_1400020a8();
  }
  atexit((_func_5014 *)&LAB_143fa6536);
  FUN_140056680(&local_60,&DAT_149dfb77a);
  local_50 = "Platform.Trait.SupportsTextChat";
  local_48 = 0x1f;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  local_50 = "GbxUISettings";
  local_48 = 0xd;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  local_50 = "GbxUISettings";
  local_48 = 0xd;
  local_44 = 0;
  uVar4 = FUN_14001a6c0(&local_50,1);
  local_70 = 0;
  local_78 = &local_60;
  FUN_14125750c(&DAT_14cb9ad20,uVar4,uVar3,uVar2);
  if (CONCAT44(uStack_5c,local_60) != 0) {
    FUN_1400020a8();
  }
  atexit((_func_5014 *)&LAB_143fa6542);
  FUN_140056680(&local_60,&DAT_149dfb77a);
  local_50 = "Platform.Trait.SupportsVoiceChatDeviceSelection";
  local_48 = 0x2f;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  local_50 = "GbxUISettings";
  local_48 = 0xd;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  local_50 = "GbxUISettings";
  local_48 = 0xd;
  local_44 = 0;
  uVar4 = FUN_14001a6c0(&local_50,1);
  local_70 = 0;
  local_78 = &local_60;
  FUN_14125750c(&DAT_14cb9ad28,uVar4,uVar3,uVar2);
  if (CONCAT44(uStack_5c,local_60) != 0) {
    FUN_1400020a8();
  }
  atexit((_func_5014 *)&LAB_143fa654e);
  FUN_140056680(&local_60,&DAT_149dfb77a);
  local_50 = "Platform.Trait.SupportsPushToTalk";
  local_48 = 0x21;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  local_50 = "GbxUISettings";
  local_48 = 0xd;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  local_50 = "GbxUISettings";
  local_48 = 0xd;
  local_44 = 0;
  uVar4 = FUN_14001a6c0(&local_50,1);
  local_70 = 0;
  local_78 = &local_60;
  FUN_14125750c(&DAT_14cb9ad30,uVar4,uVar3,uVar2);
  if (CONCAT44(uStack_5c,local_60) != 0) {
    FUN_1400020a8();
  }
  atexit((_func_5014 *)&LAB_143fa655a);
  FUN_140056680(&local_60,&DAT_149dfb77a);
  local_50 = "Platform.Trait.SupportsSplitscreen";
  local_48 = 0x22;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  local_50 = "GbxUISettings";
  local_48 = 0xd;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  local_50 = "GbxUISettings";
  local_48 = 0xd;
  local_44 = 0;
  uVar4 = FUN_14001a6c0(&local_50,1);
  local_70 = 0;
  local_78 = &local_60;
  FUN_14125750c(&DAT_14cb9ad38,uVar4,uVar3,uVar2);
  if (CONCAT44(uStack_5c,local_60) != 0) {
    FUN_1400020a8();
  }
  atexit((_func_5014 *)&LAB_143fa6566);
  FUN_140056680(&local_60,&DAT_149dfb77a);
  local_50 = "Platform.Trait.SupportsMouseAndKeyboardInput";
  local_48 = 0x2c;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  local_50 = "GbxUISettings";
  local_48 = 0xd;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  local_50 = "GbxUISettings";
  local_48 = 0xd;
  local_44 = 0;
  uVar4 = FUN_14001a6c0(&local_50,1);
  local_70 = 0;
  local_78 = &local_60;
  FUN_14125750c(&DAT_14cb9ad40,uVar4,uVar3,uVar2);
  if (CONCAT44(uStack_5c,local_60) != 0) {
    FUN_1400020a8();
  }
  atexit((_func_5014 *)&LAB_143fa6572);
  FUN_140056680(&local_60,&DAT_149dfb77a);
  local_50 = "Platform.Trait.SupportsMotionControls";
  local_48 = 0x25;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  local_50 = "GbxUISettings";
  local_48 = 0xd;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  local_50 = "GbxUISettings";
  local_48 = 0xd;
  local_44 = 0;
  uVar4 = FUN_14001a6c0(&local_50,1);
  local_70 = 0;
  local_78 = &local_60;
  FUN_14125750c(&DAT_14cb9ad48,uVar4,uVar3,uVar2);
  if (CONCAT44(uStack_5c,local_60) != 0) {
    FUN_1400020a8();
  }
  atexit((_func_5014 *)&LAB_143fa657e);
  FUN_140056680(&local_60,&DAT_149dfb77a);
  local_50 = "Platform.Trait.SupportsReactiveTriggers";
  local_48 = 0x27;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  local_50 = "GbxUISettings";
  local_48 = 0xd;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  local_50 = "GbxUISettings";
  local_48 = 0xd;
  local_44 = 0;
  uVar4 = FUN_14001a6c0(&local_50,1);
  local_70 = 0;
  local_78 = &local_60;
  FUN_14125750c(&DAT_14cb9ad50,uVar4,uVar3,uVar2);
  if (CONCAT44(uStack_5c,local_60) != 0) {
    FUN_1400020a8();
  }
  atexit((_func_5014 *)&LAB_143fa658a);
  FUN_140056680(&local_60,&DAT_149dfb77a);
  local_50 = "Platform.Trait.SupportsJcms";
  local_48 = 0x1b;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  local_50 = "GbxUISettings";
  local_48 = 0xd;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  local_50 = "GbxUISettings";
  local_48 = 0xd;
  local_44 = 0;
  uVar4 = FUN_14001a6c0(&local_50,1);
  local_70 = 0;
  local_78 = &local_60;
  FUN_14125750c(&DAT_14cb9ad58,uVar4,uVar3,uVar2);
  if (CONCAT44(uStack_5c,local_60) != 0) {
    FUN_1400020a8();
  }
  atexit((_func_5014 *)&LAB_143fa6596);
  FUN_140056680(&local_60,&DAT_149dfb77a);
  local_50 = "Platform.Trait.HDRSetByDevice";
  local_48 = 0x1d;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  local_50 = "GbxUISettings";
  local_48 = 0xd;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  local_50 = "GbxUISettings";
  local_48 = 0xd;
  local_44 = 0;
  uVar4 = FUN_14001a6c0(&local_50,1);
  local_70 = 0;
  local_78 = &local_60;
  FUN_14125750c(&DAT_14cb9ad60,uVar4,uVar3,uVar2);
  if (CONCAT44(uStack_5c,local_60) != 0) {
    FUN_1400020a8();
  }
  atexit((_func_5014 *)&LAB_143fa65a2);
  FUN_140056680(&local_60,&DAT_149dfb77a);
  local_50 = "Platform.Trait.SupportsControllerSpeakers";
  local_48 = 0x29;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  local_50 = "GbxUISettings";
  local_48 = 0xd;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  local_50 = "GbxUISettings";
  local_48 = 0xd;
  local_44 = 0;
  uVar4 = FUN_14001a6c0(&local_50,1);
  local_70 = 0;
  local_78 = &local_60;
  FUN_14125750c(&DAT_14cb9ad68,uVar4,uVar3,uVar2);
  if (CONCAT44(uStack_5c,local_60) != 0) {
    FUN_1400020a8();
  }
  atexit((_func_5014 *)&LAB_143fa65ae);
  FUN_140056680(&local_60,&DAT_149dfb77a);
  local_50 = "Platform.Trait.SupportsHidePromotionalContent";
  local_48 = 0x2d;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  local_50 = "GbxUISettings";
  local_48 = 0xd;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  local_50 = "GbxUISettings";
  local_48 = 0xd;
  local_44 = 0;
  uVar4 = FUN_14001a6c0(&local_50,1);
  local_70 = 0;
  local_78 = &local_60;
  FUN_14125750c(&DAT_14cb9ad70,uVar4,uVar3,uVar2);
  if (CONCAT44(uStack_5c,local_60) != 0) {
    FUN_1400020a8();
  }
  atexit((_func_5014 *)&LAB_143fa65ba);
  FUN_140056680(&local_60,&DAT_149dfb77a);
  local_50 = "Platform.Trait.SupportsControllerLighting";
  local_48 = 0x29;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  local_50 = "GbxUISettings";
  local_48 = 0xd;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  local_50 = "GbxUISettings";
  local_48 = 0xd;
  local_44 = 0;
  uVar4 = FUN_14001a6c0(&local_50,1);
  local_70 = 0;
  local_78 = &local_60;
  FUN_14125750c(&DAT_14cb9ad78,uVar4,uVar3,uVar2);
  if (CONCAT44(uStack_5c,local_60) != 0) {
    FUN_1400020a8();
  }
  atexit((_func_5014 *)&LAB_143fa65c6);
  FUN_140056680(&local_60,&DAT_149dfb77a);
  local_50 = "Platform.Trait.SupportsMouseEmulationByTouchScreen";
  local_48 = 0x32;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  local_50 = "GbxUISettings";
  local_48 = 0xd;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  local_50 = "GbxUISettings";
  local_48 = 0xd;
  local_44 = 0;
  uVar4 = FUN_14001a6c0(&local_50,1);
  local_70 = 0;
  local_78 = &local_60;
  FUN_14125750c(&DAT_14cb9ad80,uVar4,uVar3,uVar2);
  if (CONCAT44(uStack_5c,local_60) != 0) {
    FUN_1400020a8();
  }
  atexit((_func_5014 *)&LAB_143fa65d2);
  DAT_14cb9ad88 = 0;
  FUN_140056680(&local_60,&DAT_149dfb77a);
  local_50 = "GameSettings.Action.EditSafeZone";
  local_48 = 0x20;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  local_50 = "GbxUISettings";
  local_48 = 0xd;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  local_50 = "GbxUISettings";
  local_48 = 0xd;
  local_44 = 0;
  uVar4 = FUN_14001a6c0(&local_50,1);
  local_70 = 0;
  local_78 = &local_60;
  FUN_14125750c(&DAT_14cb9ad90,uVar4,uVar3,uVar2);
  if (CONCAT44(uStack_5c,local_60) != 0) {
    FUN_1400020a8();
  }
  atexit((_func_5014 *)&LAB_143fa65de);
  local_50 = (char *)0x800000014b54a41e;
  local_60 = 0xd;
  local_48 = FUN_14577453c();
  local_44 = 1;
  FUN_146595e8e(&local_50);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fa7a28 FUN_143fa7a28 body=55 status=ok
// SIG undefined FUN_143fa7a28(void)

void FUN_143fa7a28(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9ae28 == 0) {
    uVar1 = FUN_140e822ce();
    DAT_14cb9ae28 = FUN_14171c317(FUN_146596282,uVar1,L"EMVVMExecutionMode");
  }
  return;
}



// FUNCTION 143fa7a60 FUN_143fa7a60 body=1192 status=ok
// SIG undefined FUN_143fa7a60(void)

void FUN_143fa7a60(longlong *param_1)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_e8 [32];
  wchar_t *local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  wchar_t *local_b0;
  wchar_t *local_a8;
  code *local_a0;
  undefined1 *local_98;
  code **local_90;
  code *local_88;
  code *local_80;
  code *local_70;
  undefined1 local_68 [8];
  code *local_60;
  undefined1 local_58 [8];
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((longlong)(int)param_1[7] != 0) {
    plVar9 = (longlong *)param_1[6];
    plVar10 = plVar9 + (longlong)(int)param_1[7] * 2;
    do {
      if (*plVar9 != 0) {
        if (DAT_14c949118 == 0) {
          local_70 = FUN_140631fbe;
          lVar8 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
          DAT_14c949118 = lVar8;
          FUN_1446f470e(local_68,L"Class",1);
          local_90 = &local_70;
          local_98 = &LAB_146891e90;
          local_a0 = (code *)&LAB_146273097;
          local_b0 = L"Engine";
          local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,199);
          local_b8 = 0x20;
          local_c0 = 0x10000000;
          local_c8._0_4_ = 8;
          FUN_14574b4b2(lVar8);
          DAT_14c949118 = lVar8;
          if (DAT_14c951858 == 0) {
            local_50 = FUN_1449e2820;
            local_80 = FUN_14081d0ea;
            local_88 = FUN_14081d0ea;
            local_90 = &local_50;
            local_98 = &LAB_1468c5283;
            local_a0 = FUN_142809da0;
            local_a8 = L"Engine";
            local_b0 = (wchar_t *)0x400000000;
            local_b8 = CONCAT44(local_b8._4_4_,0x10000000);
            local_c0 = 8;
            local_c8._0_4_ = 0x50;
            FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
          }
          lVar4 = DAT_14c951858;
          lVar8 = DAT_14c949118;
          if (DAT_14c948f88 == 0) {
            local_60 = (code *)&DAT_1427db2a2;
            lVar6 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
            DAT_14c948f88 = lVar6;
            FUN_1446f470e(local_58,L"Struct",1);
            local_90 = &local_60;
            local_98 = &LAB_146891313;
            local_a0 = FUN_146272f63;
            local_b0 = L"Engine";
            local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,199);
            local_b8 = 8;
            local_c0 = 0x10000020;
            local_c8._0_4_ = 8;
            FUN_14574b4b2(lVar6);
            DAT_14c948f88 = lVar6;
            if (DAT_14c927740 == 0) {
              local_50 = FUN_1449e2820;
              local_80 = FUN_14081d0ea;
              local_88 = FUN_14081d0ea;
              local_90 = &local_50;
              local_98 = &LAB_146856450;
              local_a0 = FUN_1427b121c;
              local_a8 = L"Engine";
              local_b0 = (wchar_t *)0x0;
              local_b8 = CONCAT44(local_b8._4_4_,0x10000021);
              local_c0 = 8;
              local_c8._0_4_ = 0x28;
              FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
            }
            lVar3 = DAT_14c948f88;
            lVar6 = DAT_14c927740;
            uVar5 = FUN_1400163b0();
            local_c8 = L"Struct";
            FUN_14574b446(uVar5,lVar3,lVar6,L"/Script/CoreUObject");
          }
          local_c8 = L"Class";
          FUN_14574b446(DAT_14c948f88,lVar8,lVar4,L"/Script/CoreUObject");
          if (*plVar9 == 0) goto LAB_143fa7b89;
        }
        sVar1 = *(short *)((longlong)plVar9 + 10);
        if (0 < sVar1) {
          lVar8 = 0;
          do {
            uVar5 = FUN_1468c842b(*(undefined8 *)(param_1[8] + ((short)plVar9[1] + lVar8) * 8),
                                  *plVar9);
            iVar7 = (int)param_1[1];
            *(uint *)(param_1 + 1) = iVar7 + 1U;
            if (*(uint *)((longlong)param_1 + 0xc) < iVar7 + 1U) {
              FUN_140001000(param_1,iVar7);
            }
            *(undefined8 *)(*param_1 + (longlong)iVar7 * 8) = uVar5;
            lVar8 = lVar8 + 1;
          } while ((int)sVar1 != (int)lVar8);
          if (*plVar9 == 0) goto LAB_143fa7b89;
        }
        sVar1 = *(short *)((longlong)plVar9 + 0xc);
        if (0 < sVar1) {
          iVar7 = 0;
          do {
            uVar5 = FUN_1400796d0(*plVar9,*(undefined8 *)
                                           (param_1[8] +
                                           (longlong)
                                           ((int)*(short *)((longlong)plVar9 + 10) +
                                            (int)(short)plVar9[1] + iVar7) * 8),1);
            iVar2 = (int)param_1[3];
            *(uint *)(param_1 + 3) = iVar2 + 1U;
            if (*(uint *)((longlong)param_1 + 0x1c) < iVar2 + 1U) {
              FUN_148b1df76(param_1 + 2,iVar2);
            }
            FUN_148b0e962((longlong)iVar2 * 0x14 + param_1[2],uVar5);
            iVar7 = iVar7 + 1;
          } while (sVar1 != iVar7);
        }
      }
LAB_143fa7b89:
      plVar9 = plVar9 + 2;
    } while (plVar9 != plVar10);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143fa7f09 FUN_143fa7f09 body=55 status=ok
// SIG undefined FUN_143fa7f09(void)

void FUN_143fa7f09(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9b1b8 == 0) {
    uVar1 = FUN_140e822ce();
    DAT_14cb9b1b8 = FUN_14171c317(FUN_1465975c3,uVar1,L"EMVVMBindingMode");
  }
  return;
}



// FUNCTION 143fa7f40 FUN_143fa7f40 body=55 status=ok
// SIG undefined FUN_143fa7f40(void)

void FUN_143fa7f40(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9b1d0 == 0) {
    uVar1 = FUN_140e822ce();
    DAT_14cb9b1d0 = FUN_14171c317(FUN_146597323,uVar1,L"EMVVMConditionOperation");
  }
  return;
}



// FUNCTION 143fa7f78 FUN_143fa7f78 body=3366 status=ok
// SIG undefined FUN_143fa7f78(void)

void FUN_143fa7f78(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  DWORD DVar4;
  int iVar5;
  DWORD dwTlsIndex;
  DWORD DVar6;
  LPVOID lpTlsValue;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  longlong *plVar23;
  int iVar24;
  ulonglong uVar25;
  int *piVar26;
  undefined8 *puVar27;
  ulonglong uVar28;
  bool bVar29;
  undefined1 auStack_1c8 [44];
  int local_19c;
  longlong local_198;
  longlong *local_190;
  ulonglong local_188;
  int *local_180;
  uint local_174;
  longlong local_170;
  uint *local_168;
  undefined1 local_160 [4];
  undefined1 local_15c [4];
  longlong *local_158 [2];
  wchar_t *local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong local_f8;
  ulonglong uStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  uint local_d8 [4];
  uint *local_c8;
  uint local_c0;
  int local_b4;
  longlong local_a8;
  undefined4 local_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  longlong local_88;
  char local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_198 = param_1;
  if (0 < *(int *)(param_1 + 0x60)) {
    dwTlsIndex = DAT_14c7585d0;
    if (DAT_14c7585d0 == 0xffffffff) {
      dwTlsIndex = TlsAlloc();
      DVar6 = 0xffffffff;
      LOCK();
      bVar29 = DAT_14c7585d0 != 0xffffffff;
      DVar4 = dwTlsIndex;
      if (bVar29) {
        DVar6 = DAT_14c7585d0;
        DVar4 = DAT_14c7585d0;
      }
      DAT_14c7585d0 = DVar4;
      UNLOCK();
      if (bVar29) {
        TlsFree(dwTlsIndex);
        dwTlsIndex = DVar6;
      }
    }
    lVar16 = local_198;
    lpTlsValue = TlsGetValue(dwTlsIndex);
    if (lpTlsValue == (LPVOID)0x0) {
      lpTlsValue = (LPVOID)FUN_140036a08(&local_98);
      FUN_140fddf04(lpTlsValue);
      TlsSetValue(dwTlsIndex,lpTlsValue);
    }
    local_98 = (undefined8 *)((longlong)lpTlsValue + 0x10);
    uStack_90 = *(undefined8 *)((longlong)lpTlsValue + 0x10);
    local_88 = *(longlong *)((longlong)lpTlsValue + 0x20);
    local_80 = '\0';
    local_78 = *(undefined8 *)((longlong)lpTlsValue + 0x28);
    *(undefined8 ***)((longlong)lpTlsValue + 0x28) = &local_98;
    *(int *)((longlong)lpTlsValue + 0x30) = *(int *)((longlong)lpTlsValue + 0x30) + 1;
    local_e8 = 0;
    uStack_e0 = 0;
    iVar5 = *(int *)(lVar16 + 0x60);
    if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar5);
    }
    if (iVar5 != 0) {
      FUN_148b1f7c6();
      iVar5 = *(int *)(local_198 + 0x60);
      if ((longlong)iVar5 != 0) {
        lVar16 = *(longlong *)(local_198 + 0x58);
        lVar13 = 0;
        do {
          uVar25 = uStack_e0;
          uVar17 = *(ulonglong *)(lVar16 + lVar13);
          if (((((uVar17 >> 0x20 != 0) && (uVar15 = (uint)uVar17, -1 < (int)uVar15)) &&
               ((int)uVar15 < DAT_14c9647dc)) &&
              ((plVar23 = (longlong *)
                          ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0xd & 0x3fff8))),
               plVar23 != (longlong *)0x0 && ((int)plVar23[2] == (int)(uVar17 >> 0x20))))) &&
             (((*(uint *)(plVar23 + 1) & 0x10200000) == 0 && (lVar11 = *plVar23, lVar11 != 0)))) {
            lVar19 = (longlong)(int)uStack_e0;
            uVar15 = (int)uStack_e0 + 1;
            uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar15);
            if (uStack_e0._4_4_ < uVar15) {
              FUN_148b1f8f4(&local_e8,uVar25 & 0xffffffff);
            }
            *(longlong *)(local_e8 + lVar19 * 8) = lVar11;
          }
          lVar13 = lVar13 + 8;
        } while ((longlong)iVar5 * 8 != lVar13);
      }
    }
    lVar16 = (longlong)(int)uStack_e0;
    if (lVar16 != 0) {
      lVar13 = 0;
      do {
        FUN_148b15546();
        lVar13 = lVar13 + 8;
      } while (lVar16 * 8 != lVar13);
    }
    param_1 = local_198;
    if (local_80 == '\0') {
      local_80 = '\x01';
      *(int *)(local_98 + 4) = *(int *)(local_98 + 4) + -1;
      if (local_88 != local_98[2]) {
        FUN_14004673c();
      }
      *local_98 = uStack_90;
      local_98[3] = local_78;
    }
  }
  if (*(int *)(param_1 + 0x3c) < *(int *)(param_1 + 0x10)) {
    local_78 = 0;
    local_70 = 0;
    local_98 = (undefined8 *)0x0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    uVar15 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x3c);
    if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar15);
    }
    FUN_148b1f9da(&local_98,uVar15);
    iVar5 = 1;
    if (3 < uVar15) {
      uVar15 = (uVar15 | 1) + 0xe;
      iVar5 = 0x1f;
      if (uVar15 != 0) {
        for (; uVar15 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      iVar5 = 1 << ((byte)iVar5 & 0x1f);
    }
    local_190 = (longlong *)(param_1 + 8);
    if ((local_50 == 0) || (local_50 < iVar5)) {
      local_50 = iVar5;
      FUN_148b1fb76();
    }
    plVar23 = local_190;
    FUN_148b1cfb2(&local_e8,local_190);
    local_118 = 0;
    uStack_100 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_138 = 0;
    uStack_130 = 0;
    uStack_110 = 0x8000000000;
    local_108 = 0xffffffff;
    FUN_148b1d1b4(plVar23,&local_138);
    uStack_f0 = uStack_f0 & 0xffffffff00000000;
    if (local_f8 != 0) {
      FUN_1400020a8();
    }
    FUN_145c183e4(&local_138);
    local_168 = (uint *)(param_1 + 0x18);
    do {
      uVar17 = (ulonglong)local_c0;
      uVar25 = 0;
      uVar28 = 1;
      iVar5 = 0;
      uVar15 = 0;
      if (local_c0 != 0) {
        puVar7 = local_c8;
        if (local_c8 == (uint *)0x0) {
          puVar7 = local_d8;
        }
        uVar15 = *puVar7;
        if (uVar15 == 0) {
          iVar5 = local_c0 + 0x1e;
          if (-1 < (int)(local_c0 - 1)) {
            iVar5 = local_c0 - 1;
          }
          uVar25 = 0;
          uVar28 = (ulonglong)(uint)(iVar5 >> 5);
          if (iVar5 >> 5 < 1) {
            uVar28 = 0;
          }
          iVar5 = 0;
          do {
            if (uVar28 == uVar25) goto LAB_143fa828e;
            iVar5 = iVar5 + 0x20;
            uVar15 = puVar7[uVar25 + 1];
            uVar25 = uVar25 + 1;
          } while (uVar15 == 0);
        }
        else {
          uVar25 = 0;
        }
        uVar28 = (ulonglong)(-uVar15 & uVar15);
        uVar3 = uVar28 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        uVar15 = (iVar5 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if ((int)local_c0 <= (int)uVar15) {
          uVar15 = local_c0;
        }
      }
      if (uVar15 != local_c0) {
        uVar10 = 0xffffffff;
        uVar8 = local_c0;
        local_188 = uVar17;
        do {
          lVar16 = (longlong)(int)uVar15 * 0x40;
          iVar14 = *(int *)(local_e8 + 4 + lVar16);
          if ((((iVar14 != 0) && (uVar15 = *(uint *)(local_e8 + lVar16), -1 < (int)uVar15)) &&
              ((int)uVar15 < DAT_14c9647dc)) &&
             (((plVar23 = (longlong *)
                          ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8)),
               plVar23 != (longlong *)0x0 && ((int)plVar23[2] == iVar14)) &&
              (((*(uint *)(plVar23 + 1) & 0x10200000) == 0 && (lVar13 = *plVar23, lVar13 != 0))))))
          {
            puVar18 = (undefined8 *)(local_e8 + lVar16);
            piVar26 = (int *)(puVar18 + 1);
            if ((int *)puVar18[5] != (int *)0x0) {
              piVar26 = (int *)puVar18[5];
            }
            if ((longlong)*(int *)(puVar18 + 6) != 0) {
              local_180 = piVar26 + *(int *)(puVar18 + 6);
              do {
                iVar14 = DAT_14cb9b348;
                if (((*(longlong *)(lVar13 + 0x28) != 0) && (*(char *)(lVar13 + 0x6c) == '\x01')) &&
                   ((iVar12 = *piVar26, -1 < iVar12 &&
                    (iVar12 < *(int *)(*(longlong *)(lVar13 + 0x28) + 0x40))))) {
                  lVar16 = (longlong)(int)DAT_14cb9b348;
                  if (lVar16 != 0) {
                    lVar11 = lVar16 << 4;
                    plVar23 = DAT_14cb9b340;
                    do {
                      if ((*plVar23 == lVar13) && ((int)plVar23[1] == iVar12)) {
                        if (plVar23 != (longlong *)0x0) {
                          if ((*(uint *)(lVar13 + 8) & 0x10) == 0) {
                            lVar16 = *(longlong *)(lVar13 + 0x20);
                          }
                          else {
                            lVar16 = 0;
                          }
                          FUN_14276766e(&local_138,&DAT_14cb9b118);
                          local_108._0_4_ = 0;
                          if (lVar16 == 0) {
                            iVar14 = 0;
                            uVar15 = (uint)local_108;
                          }
                          else {
                            uVar15 = *(uint *)(lVar16 + 0xc);
                            local_108 = (ulonglong)uVar15;
                            if ((int)uVar15 < DAT_14c9647dc) {
                              lVar16 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
                                       *(longlong *)
                                        (DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8);
                            }
                            else {
                              lVar16 = 0;
                            }
                            iVar14 = *(int *)(lVar16 + 0x10);
                            if (*(int *)(lVar16 + 0x10) == 0) {
                              LOCK();
                              iVar14 = DAT_14c964868 + 1;
                              UNLOCK();
                              iVar12 = DAT_14c964868 + 1;
                              bVar29 = DAT_14c964868 < 1000;
                              DAT_14c964868 = iVar14;
                              if (bVar29) {
                                local_19c = iVar12;
                                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp"
                                              ,0x23d,
                                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                              ,iVar12);
                                iVar12 = local_19c;
                              }
                              LOCK();
                              iVar14 = *(int *)(lVar16 + 0x10);
                              bVar29 = iVar14 == 0;
                              if (bVar29) {
                                *(int *)(lVar16 + 0x10) = iVar12;
                                iVar14 = 0;
                              }
                              UNLOCK();
                              uVar15 = (uint)local_108;
                              if (bVar29) {
                                iVar14 = iVar12;
                              }
                            }
                          }
                          local_108._0_4_ = uVar15;
                          local_108 = CONCAT44(iVar14,(uint)local_108);
                          local_148 = L"RecursionDetected";
                          local_140 = 0x11;
                          FUN_1446e940c(local_15c,&local_148);
                          local_148 = L"MVVMView";
                          local_140 = 8;
                          FUN_1446e940c(local_160,&local_148);
                          local_148 = 
                          L"A recursive binding was detected (ie. A->B->C->A->B->C) at runtime.";
                          local_140 = 0x43;
                          FUN_140208c1e(local_158,local_160,local_15c,&local_148);
                          FUN_148b121ee(&local_138,&local_148,3,local_158);
                          plVar23 = (longlong *)CONCAT44(uStack_13c,local_140);
                          if (plVar23 != (longlong *)0x0) {
                            LOCK();
                            plVar1 = plVar23 + 1;
                            *(int *)plVar1 = (int)*plVar1 + -1;
                            UNLOCK();
                            if ((int)*plVar1 == 0) {
                              (**(code **)*plVar23)(plVar23);
                              LOCK();
                              piVar2 = (int *)((longlong)plVar23 + 0xc);
                              *piVar2 = *piVar2 + -1;
                              UNLOCK();
                              if (*piVar2 == 0) {
                                (**(code **)(*plVar23 + 0x10))(plVar23);
                              }
                            }
                          }
                          if (local_158[0] != (longlong *)0x0) {
                            (**(code **)(*local_158[0] + 0x10))();
                          }
                          FUN_1427678c0(&local_138);
                          uVar17 = local_188;
                          goto LAB_143fa849a;
                        }
                        break;
                      }
                      plVar23 = plVar23 + 2;
                      lVar11 = lVar11 + -0x10;
                    } while (lVar11 != 0);
                  }
                  DAT_14cb9b348 = DAT_14cb9b348 + 1;
                  if (DAT_14cb9b34c < DAT_14cb9b348) {
                    FUN_148b218b0(iVar14);
                  }
                  plVar23 = DAT_14cb9b340;
                  DAT_14cb9b340[lVar16 * 2] = lVar13;
                  iVar14 = *piVar26;
                  *(int *)(plVar23 + lVar16 * 2 + 1) = iVar14;
                  FUN_148b192f4(lVar13,(longlong)iVar14 * 0x18 +
                                       *(longlong *)(*(longlong *)(lVar13 + 0x28) + 0x38));
                  DAT_14cb9b348 = DAT_14cb9b348 - 1;
                  FUN_148b2193e();
                  uVar17 = local_188;
                }
LAB_143fa849a:
                local_138 = *puVar18;
                uStack_130 = CONCAT44(uStack_130._4_4_,*piVar26);
                FUN_148b1fd42(&local_98,&local_148,&local_138);
                piVar26 = piVar26 + 1;
                uVar8 = local_c0;
              } while (piVar26 != local_180);
            }
          }
          uVar10 = uVar10 & ~(uint)uVar28;
          puVar7 = local_c8;
          if (local_c8 == (uint *)0x0) {
            puVar7 = local_d8;
          }
          iVar14 = (int)uVar25;
          lVar16 = (longlong)iVar14;
          uVar15 = puVar7[lVar16] & uVar10;
          if (uVar15 == 0) {
            iVar12 = uVar8 + 0x1e;
            if (-1 < (int)(uVar8 - 1)) {
              iVar12 = uVar8 - 1;
            }
            iVar12 = iVar12 >> 5;
            iVar5 = iVar5 + 0x20;
            iVar24 = iVar12;
            if (iVar12 < iVar14) {
              iVar24 = iVar14;
            }
            if (iVar14 < iVar12) {
              lVar13 = 0;
              do {
                uVar15 = puVar7[lVar16 + lVar13 + 1];
                if (uVar15 != 0) {
                  uVar25 = (ulonglong)(iVar14 + (int)lVar13 + 1);
                  uVar10 = 0xffffffff;
                  goto LAB_143fa872d;
                }
                iVar5 = iVar5 + 0x20;
                lVar13 = lVar13 + 1;
              } while (iVar24 - lVar16 != lVar13);
              uVar10 = 0xffffffff;
              iVar14 = iVar24;
            }
            uVar25 = (ulonglong)(iVar14 + 1);
            uVar17 = local_188;
            uVar15 = uVar8;
          }
          else {
LAB_143fa872d:
            uVar28 = (ulonglong)(-uVar15 & uVar15);
            uVar3 = uVar28 * 2 + 1;
            lVar16 = 0x3f;
            if (uVar3 != 0) {
              for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
              }
            }
            uVar15 = (iVar5 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
            if ((int)uVar8 <= (int)uVar15) {
              uVar15 = uVar8;
            }
          }
        } while (uVar15 != (uint)uVar17);
      }
LAB_143fa828e:
      if ((int)uStack_e0 != local_b4) {
        FUN_148b20090(&local_e8);
        FUN_148b201d4(&local_e8);
      }
      iVar5 = *(int *)(local_198 + 0x30);
      if (iVar5 == 0) {
        uVar25 = 1;
        uVar17 = 0;
        iVar12 = 0;
        iVar14 = 0;
      }
      else {
        puVar7 = *(uint **)(local_198 + 0x28);
        if (*(uint **)(local_198 + 0x28) == (uint *)0x0) {
          puVar7 = local_168;
        }
        uVar15 = *puVar7;
        if (uVar15 == 0) {
          iVar14 = iVar5 + 0x1e;
          if (-1 < iVar5 + -1) {
            iVar14 = iVar5 + -1;
          }
          uVar17 = 0;
          uVar25 = (ulonglong)(uint)(iVar14 >> 5);
          if (iVar14 >> 5 < 1) {
            uVar25 = uVar17;
          }
          iVar12 = 0;
          do {
            if (uVar25 == uVar17) goto LAB_143fa8acc;
            iVar12 = iVar12 + 0x20;
            uVar15 = puVar7[uVar17 + 1];
            uVar17 = uVar17 + 1;
          } while (uVar15 == 0);
        }
        else {
          uVar17 = 0;
          iVar12 = 0;
        }
        uVar25 = (ulonglong)(-uVar15 & uVar15);
        uVar28 = uVar25 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar28 != 0) {
          for (; uVar28 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar14 = (iVar12 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if (iVar5 <= iVar14) {
          iVar14 = iVar5;
        }
      }
      if (iVar14 < iVar5) {
        uVar15 = 0xffffffff;
        lVar16 = local_198;
        do {
          piVar26 = (int *)((longlong)iVar14 * 0x40);
          iVar24 = *(int *)(*local_190 + 0x30 + (longlong)piVar26);
          uVar28 = (ulonglong)iVar24;
          if (0 < (longlong)uVar28) {
            iVar24 = -iVar24;
            lVar16 = uVar28 * 4;
            local_170 = 0;
            local_19c = iVar12;
            local_188 = uVar17;
            local_180 = piVar26;
            local_174 = uVar15;
            do {
              lVar16 = lVar16 + -4;
              lVar13 = *local_190;
              puVar18 = (undefined8 *)(lVar13 + (longlong)piVar26);
              puVar27 = (undefined8 *)puVar18[5];
              if ((undefined8 *)puVar18[5] == (undefined8 *)0x0) {
                puVar27 = puVar18 + 1;
              }
              uVar15 = *(uint *)((longlong)puVar27 + lVar16);
              local_138 = *puVar18;
              uStack_130 = CONCAT44(uStack_130._4_4_,uVar15);
              uVar10 = (uint)((ulonglong)local_138 >> 0x20);
              uVar8 = uVar10 >> 0xd ^ (int)local_138 - uVar10;
              uVar20 = uVar8 << 8 ^ (-0x61c88647 - uVar8) - uVar10;
              uVar21 = uVar20 >> 0xd ^ (uVar10 - uVar8) - uVar20;
              uVar10 = uVar21 >> 0xc ^ (uVar8 - uVar20) - uVar21;
              uVar8 = uVar10 << 0x10 ^ (uVar20 - uVar21) - uVar10;
              uVar20 = uVar8 >> 5 ^ (uVar21 - uVar10) - uVar8;
              uVar10 = uVar20 >> 3 ^ (uVar10 - uVar8) - uVar20;
              uVar8 = uVar10 << 10 ^ (uVar8 - uVar20) - uVar10;
              uVar20 = uVar8 >> 0xf ^ uVar20 - (uVar10 + uVar8);
              uVar10 = uVar15 >> 0xd ^ uVar20 - uVar15;
              uVar8 = uVar10 << 8 ^ (-0x61c88647 - uVar15) - uVar10;
              uVar21 = uVar8 >> 0xd ^ (uVar15 - uVar10) - uVar8;
              uVar15 = uVar21 >> 0xc ^ (uVar10 - uVar8) - uVar21;
              uVar22 = uVar15 << 0x10 ^ (uVar8 - uVar21) - uVar15;
              uVar8 = uVar22 >> 5 ^ (uVar21 - uVar15) - uVar22;
              uVar10 = uVar8 >> 3 ^ (uVar15 - uVar22) - uVar8;
              uVar15 = uVar10 << 10 ^ (uVar22 - uVar8) - uVar10;
              iVar5 = FUN_148b1ffb8(&local_98,uVar15 >> 0xf ^ uVar8 - (uVar10 + uVar15),&local_138);
              if ((iVar5 == -1) ||
                 (piVar26 = local_180, (longlong)iVar5 * 0x14 + (longlong)local_98 == 0)) {
                if (local_170 == 0) {
                  local_170 = FUN_148b204b4(&local_e8,uVar20,lVar13 + (longlong)local_180);
                }
                FUN_148b208c2(local_170,(longlong)puVar27 + lVar16);
                piVar26 = local_180;
                lVar13 = *local_190;
                lVar11 = (longlong)local_180 + lVar13 + 8;
                uVar15 = *(uint *)((longlong)local_180 + lVar13 + 0x30);
                if (uVar28 != uVar15) {
                  iVar5 = iVar24 + uVar15;
                  if (0 < (int)(iVar24 + uVar15)) {
                    iVar5 = 1;
                  }
                  lVar19 = *(longlong *)((longlong)local_180 + lVar13 + 0x28);
                  if (lVar19 == 0) {
                    lVar19 = lVar11;
                  }
                  memmove((void *)(lVar19 + uVar28 * 4 + -4),
                          (void *)(lVar19 + (longlong)(int)(uVar15 - iVar5) * 4),
                          (longlong)iVar5 << 2);
                  uVar15 = *(uint *)((longlong)piVar26 + lVar13 + 0x30);
                }
                *(uint *)((longlong)piVar26 + lVar13 + 0x30) = uVar15 - 1;
                FUN_148b20a32(lVar11);
                lVar13 = *local_190;
              }
              if (*(int *)(lVar13 + 0x30 + (longlong)piVar26) == 0) {
                FUN_148b20ad2(local_190,iVar14);
              }
              iVar24 = iVar24 + 1;
              bVar29 = 1 < uVar28;
              uVar28 = uVar28 - 1;
            } while (bVar29);
            iVar5 = *(int *)(local_198 + 0x30);
            uVar17 = local_188;
            lVar16 = local_198;
            uVar15 = local_174;
            iVar12 = local_19c;
          }
          uVar15 = uVar15 & ~(uint)uVar25;
          puVar7 = *(uint **)(lVar16 + 0x28);
          if (*(uint **)(lVar16 + 0x28) == (uint *)0x0) {
            puVar7 = local_168;
          }
          iVar14 = (int)uVar17;
          lVar13 = (longlong)iVar14;
          uVar8 = puVar7[lVar13] & uVar15;
          if (uVar8 == 0) {
            iVar24 = iVar5 + 0x1e;
            if (-1 < iVar5 + -1) {
              iVar24 = iVar5 + -1;
            }
            iVar24 = iVar24 >> 5;
            iVar9 = iVar24;
            if (iVar24 < iVar14) {
              iVar9 = iVar14;
            }
            if (iVar24 <= iVar14) break;
            lVar11 = 0;
            while( true ) {
              iVar12 = iVar12 + 0x20;
              uVar8 = puVar7[lVar13 + lVar11 + 1];
              if (uVar8 != 0) break;
              lVar11 = lVar11 + 1;
              if (iVar9 - lVar13 == lVar11) goto LAB_143fa8acc;
            }
            uVar17 = (ulonglong)(iVar14 + (int)lVar11 + 1);
            uVar15 = 0xffffffff;
          }
          uVar25 = (ulonglong)(-uVar8 & uVar8);
          uVar28 = uVar25 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar28 != 0) {
            for (; uVar28 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          iVar14 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        } while (iVar14 < iVar5);
      }
LAB_143fa8acc:
    } while (local_b4 < (int)uStack_e0);
    local_a0 = 0;
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    FUN_145c183e4(&local_e8);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_148b1f94c(&local_98);
  }
  if ((local_48 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fa8ca4 FUN_143fa8ca4 body=150 status=ok
// SIG undefined FUN_143fa8ca4(void)

void FUN_143fa8ca4(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*(char *)(param_1 + 0x6b) == '\0') {
    FUN_143fa8d3a(param_1);
  }
  if (*(char *)(param_1 + 0x6c) == '\0') {
    if (0 < *(int *)(param_1 + 0x38)) {
      iVar4 = 0;
      do {
        FUN_148b17536(param_1,iVar4,0);
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x38));
    }
    FUN_148b17c54(param_1);
    lVar5 = (longlong)*(int *)(*(longlong *)(param_1 + 0x28) + 0x80);
    if (0 < lVar5) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x78);
      lVar6 = 0;
      do {
        plVar2 = *(longlong **)(lVar1 + lVar6 * 8);
        if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
          uVar3 = *(undefined8 *)(param_1 + 0x20);
        }
        else {
          uVar3 = 0;
        }
        (**(code **)(*plVar2 + 0x2b0))
                  (plVar2,uVar3,param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + lVar6 * 8));
        lVar6 = lVar6 + 1;
      } while (lVar5 != lVar6);
    }
  }
  return;
}



// FUNCTION 143fa8d3a FUN_143fa8d3a body=398 status=ok
// SIG undefined FUN_143fa8d3a(void)

void FUN_143fa8d3a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(char *)(param_1 + 0x6b) == '\0') && (lVar2 = *(longlong *)(param_1 + 0x28), lVar2 != 0)) {
    iVar1 = *(int *)(lVar2 + 0x30);
    if (*(char *)(lVar2 + 0xe7) == '\x01') {
      if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
        plVar3 = *(longlong **)(param_1 + 0x20);
      }
      else {
        plVar3 = (longlong *)0x0;
      }
      lVar2 = (**(code **)(*plVar3 + 0x180))();
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x1f0) != 0)) {
        lVar2 = FUN_148b16f84();
        if (*(longlong *)(lVar2 + 0x30) != 0) {
          FUN_148b172be(*(longlong *)(lVar2 + 0x30) + 0x38,local_30,param_1);
        }
      }
    }
    if (0 < iVar1) {
      iVar5 = 0;
      do {
        FUN_148b174c6(param_1,iVar5);
        if (*(char *)(*(longlong *)(param_1 + 0x28) + 0xe5) == '\x01') {
          FUN_148b17536(param_1,iVar5,0);
        }
        iVar5 = iVar5 + 1;
      } while (iVar1 != iVar5);
    }
    lVar2 = *(longlong *)(param_1 + 0x28);
    if (*(char *)(lVar2 + 0xe5) != '\0') {
      FUN_148b17c54(param_1);
      lVar2 = *(longlong *)(param_1 + 0x28);
    }
    lVar6 = (longlong)*(int *)(lVar2 + 0x80);
    if (0 < lVar6) {
      lVar2 = *(longlong *)(lVar2 + 0x78);
      lVar7 = 0;
      do {
        plVar3 = *(longlong **)(lVar2 + lVar7 * 8);
        if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
          uVar4 = *(undefined8 *)(param_1 + 0x20);
        }
        else {
          uVar4 = 0;
        }
        (**(code **)(*plVar3 + 0x2a8))
                  (plVar3,uVar4,param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + lVar7 * 8));
        lVar7 = lVar7 + 1;
      } while (lVar6 != lVar7);
      if (*(char *)(*(longlong *)(param_1 + 0x28) + 0xe5) == '\x01') {
        lVar7 = 0;
        do {
          plVar3 = *(longlong **)(lVar2 + lVar7 * 8);
          if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
            uVar4 = *(undefined8 *)(param_1 + 0x20);
          }
          else {
            uVar4 = 0;
          }
          (**(code **)(*plVar3 + 0x2b0))
                    (plVar3,uVar4,param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + lVar7 * 8)
                    );
          lVar7 = lVar7 + 1;
        } while (lVar6 != lVar7);
      }
    }
    *(undefined1 *)(param_1 + 0x6b) = 1;
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143fa8eca FUN_143fa8eca body=418 status=ok
// SIG undefined FUN_143fa8eca(void)

void FUN_143fa8eca(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_58 [40];
  uint local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x6c) == '\x01') {
    *(undefined1 *)(param_1 + 0x6c) = 0;
    lVar5 = *(longlong *)(param_1 + 0x28);
    iVar2 = *(int *)(lVar5 + 0x80);
    if (0 < (longlong)iVar2) {
      lVar5 = *(longlong *)(lVar5 + 0x78);
      lVar6 = 0;
      do {
        plVar1 = *(longlong **)(lVar5 + lVar6 * 8);
        if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
          uVar3 = *(undefined8 *)(param_1 + 0x20);
        }
        else {
          uVar3 = 0;
        }
        (**(code **)(*plVar1 + 0x2c8))
                  (plVar1,uVar3,param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + lVar6 * 8));
        lVar6 = lVar6 + 1;
      } while (iVar2 != lVar6);
      lVar5 = *(longlong *)(param_1 + 0x28);
    }
    iVar2 = *(int *)(lVar5 + 0x30);
    if (0 < (longlong)iVar2) {
      lVar5 = *(longlong *)(lVar5 + 0x28);
      lVar6 = 0;
      do {
        FUN_148b18fa4(param_1,lVar5,*(longlong *)(param_1 + 0x30) + lVar6);
        lVar6 = lVar6 + 0x18;
        lVar5 = lVar5 + 0x68;
      } while ((longlong)iVar2 * 0x18 != lVar6);
    }
    lVar5 = FUN_148b18f3c(DAT_14cb0d2b0);
    if (((lVar5 != 0) && (FUN_148b15770(lVar5,param_1), *(char *)(param_1 + 0x68) == '\0')) &&
       (*(char *)(param_1 + 0x6e) == '\x01')) {
      local_2c = 0;
      if (param_1 == 0) {
        local_30 = 0;
        iVar2 = 0;
      }
      else {
        local_30 = *(uint *)(param_1 + 0xc);
        if ((int)local_30 < DAT_14c9647dc) {
          lVar6 = (ulonglong)((local_30 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_30 >> 0x10) * 8);
        }
        else {
          lVar6 = 0;
        }
        iVar2 = *(int *)(lVar6 + 0x10);
        if (*(int *)(lVar6 + 0x10) == 0) {
          LOCK();
          iVar2 = DAT_14c964868 + 1;
          UNLOCK();
          iVar4 = DAT_14c964868 + 1;
          bVar7 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar2;
          if (bVar7) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar4);
          }
          LOCK();
          iVar2 = *(int *)(lVar6 + 0x10);
          bVar7 = iVar2 == 0;
          if (bVar7) {
            *(int *)(lVar6 + 0x10) = iVar4;
            iVar2 = 0;
          }
          UNLOCK();
          if (bVar7) {
            iVar2 = iVar4;
          }
        }
      }
      local_2c = iVar2;
      FUN_148b1561e(lVar5 + 0x88);
    }
    *(undefined1 *)(param_1 + 0x6e) = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143fa906e FUN_143fa906e body=227 status=ok
// SIG undefined FUN_143fa906e(void)

void FUN_143fa906e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  
  if (*(char *)(param_1 + 0x6b) == '\x01') {
    if (*(char *)(param_1 + 0x6c) == '\x01') {
      FUN_143fa8eca();
    }
    lVar2 = *(longlong *)(param_1 + 0x28);
    iVar1 = *(int *)(lVar2 + 0x80);
    if (0 < (longlong)iVar1) {
      lVar2 = *(longlong *)(lVar2 + 0x78);
      lVar6 = 0;
      do {
        plVar3 = *(longlong **)(lVar2 + lVar6 * 8);
        if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
          uVar4 = *(undefined8 *)(param_1 + 0x20);
        }
        else {
          uVar4 = 0;
        }
        (**(code **)(*plVar3 + 0x2d0))
                  (plVar3,uVar4,param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + lVar6 * 8));
        lVar6 = lVar6 + 1;
      } while (iVar1 != lVar6);
      lVar2 = *(longlong *)(param_1 + 0x28);
    }
    if (*(char *)(lVar2 + 0xe7) != '\0') {
      if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
        plVar3 = *(longlong **)(param_1 + 0x20);
      }
      else {
        plVar3 = (longlong *)0x0;
      }
      lVar2 = (**(code **)(*plVar3 + 0x180))();
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x1f0) != 0)) {
        lVar2 = FUN_148b16f84();
        if (*(longlong *)(lVar2 + 0x30) != 0) {
          FUN_140457ffc(*(longlong *)(lVar2 + 0x30) + 0x38,param_1);
        }
      }
    }
    *(undefined1 *)(param_1 + 0x6b) = 0;
    iVar1 = *(int *)(param_1 + 0x38);
    if (0 < iVar1) {
      iVar5 = 0;
      do {
        FUN_148b17d2c(param_1,iVar5);
        iVar5 = iVar5 + 1;
      } while (iVar1 != iVar5);
    }
  }
  return;
}



// FUNCTION 143fa9162 FUN_143fa9162 body=1055 status=ok
// SIG undefined FUN_143fa9162(void)

void FUN_143fa9162(longlong param_1,undefined8 param_2,longlong *param_3,uint param_4)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_148 [32];
  undefined1 local_128 [4];
  undefined1 local_124 [4];
  longlong *local_120 [2];
  undefined8 local_110;
  longlong *local_108;
  longlong local_100;
  longlong *local_f8 [2];
  longlong *local_e8 [2];
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c8 [48];
  undefined8 local_98;
  undefined8 local_90;
  longlong *local_88;
  wchar_t **local_80;
  ulonglong *local_78;
  longlong local_70;
  undefined4 local_68;
  wchar_t *local_60;
  undefined4 local_58;
  longlong *local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar8 = *(longlong *)(param_1 + 0x28);
  if (((lVar8 != 0) && (-1 < (int)param_4)) && ((int)param_4 < *(int *)(param_1 + 0x38))) {
    if ((*(char *)(*(longlong *)(param_1 + 0x30) + 0x11 + (ulonglong)param_4 * 0x18) == '\x01') &&
       (lVar2 = *(longlong *)(param_1 + 0x30) + (ulonglong)param_4 * 0x18,
       *(char *)(lVar2 + 0x10) != '\0')) {
      iVar5 = *(int *)(lVar2 + 8);
      lVar4 = (longlong)iVar5 * 0x68;
      lVar2 = *(longlong *)(lVar8 + 0x28) + lVar4;
      if (((*(byte *)(*(longlong *)(lVar8 + 0x28) + 0x60 + lVar4) & 0x40) != 0) &&
         (iVar7 = *(int *)(lVar8 + 0x50), (longlong)iVar7 != 0)) {
        lVar8 = *(longlong *)(lVar8 + 0x48);
        lVar4 = 0;
        do {
          if ((*(int *)(lVar8 + 8 + lVar4) == iVar5) && (*(longlong *)(lVar8 + lVar4) == *param_3))
          {
            FUN_148b19b38(param_1,*(undefined4 *)(lVar8 + 0xc + lVar4));
          }
          lVar4 = lVar4 + 0x10;
        } while ((longlong)iVar7 * 0x10 != lVar4);
      }
      if ((longlong)*(int *)(lVar2 + 0x48) != 0) {
        plVar6 = *(longlong **)(lVar2 + 0x40);
        lVar8 = (longlong)*(int *)(lVar2 + 0x48) << 4;
        do {
          if (*plVar6 == *param_3) {
            FUN_148b1a0ca(param_1,plVar6);
          }
          plVar6 = plVar6 + 2;
          lVar8 = lVar8 + -0x10;
        } while (lVar8 != 0);
      }
      if ((longlong)*(int *)(lVar2 + 0x58) != 0) {
        plVar6 = *(longlong **)(lVar2 + 0x50);
        lVar8 = (longlong)*(int *)(lVar2 + 0x58) * 0xc;
        do {
          if (*plVar6 == *param_3) {
            FUN_148b19aee(param_1,plVar6);
          }
          plVar6 = (longlong *)((longlong)plVar6 + 0xc);
          lVar8 = lVar8 + -0xc;
        } while (lVar8 != 0);
      }
    }
    else {
      if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
        lVar8 = *(longlong *)(param_1 + 0x20);
      }
      else {
        lVar8 = 0;
      }
      FUN_14276766e(local_c8,&DAT_14cb9b118);
      local_98._0_4_ = 0;
      iVar5 = 0;
      uVar3 = (uint)local_98;
      if (lVar8 != 0) {
        uVar3 = *(uint *)(lVar8 + 0xc);
        local_98 = (ulonglong)uVar3;
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar8 = 0;
        }
        iVar5 = *(int *)(lVar8 + 0x10);
        if (*(int *)(lVar8 + 0x10) == 0) {
          LOCK();
          iVar5 = DAT_14c964868 + 1;
          UNLOCK();
          iVar7 = DAT_14c964868 + 1;
          bVar9 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar5;
          if (bVar9) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar7);
          }
          LOCK();
          iVar5 = *(int *)(lVar8 + 0x10);
          bVar9 = iVar5 == 0;
          if (bVar9) {
            *(int *)(lVar8 + 0x10) = iVar7;
            iVar5 = 0;
          }
          UNLOCK();
          uVar3 = (uint)local_98;
          if (bVar9) {
            iVar5 = iVar7;
          }
        }
      }
      local_98._0_4_ = uVar3;
      local_98 = CONCAT44(iVar5,(uint)local_98);
      local_100 = *param_3;
      FUN_145715fae(local_f8);
      local_60 = L"ExecuteBindingFailWhileInitializing";
      local_58 = 0x23;
      FUN_1446e940c(local_124,&local_60);
      local_60 = L"MVVMView";
      local_58 = 8;
      FUN_1446e940c(local_128,&local_60);
      local_60 = L"The Field \'{0}\' could not execute the bindings while initializing.";
      local_58 = 0x42;
      FUN_140208c1e(local_120,local_128,local_124,&local_60);
      FUN_14023409e(&local_110,local_120,1);
      local_60 = (wchar_t *)CONCAT44(local_60._4_4_,4);
      FUN_14023423e(local_50,local_f8);
      local_78 = &local_40;
      local_80 = &local_60;
      FUN_14010d304(&local_70);
      local_90 = local_110;
      local_88 = local_108;
      if (local_108 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_108 + 1) = (int)local_108[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_e8,&local_90,&local_70);
      FUN_14007f2db(local_70,local_68);
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      if (local_50[0] != (longlong *)0x0) {
        (**(code **)(*local_50[0] + 0x10))();
      }
      if (local_108 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_108 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_108)(local_108);
          LOCK();
          piVar1 = (int *)((longlong)local_108 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_108 + 0x10))(local_108);
          }
        }
      }
      if (local_f8[0] != (longlong *)0x0) {
        (**(code **)(*local_f8[0] + 0x10))();
      }
      FUN_148b121ee(local_c8,local_d8,3,local_e8);
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_d0 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_d0)(local_d0);
          LOCK();
          piVar1 = (int *)((longlong)local_d0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_d0 + 0x10))(local_d0);
          }
        }
      }
      if (local_e8[0] != (longlong *)0x0) {
        (**(code **)(*local_e8[0] + 0x10))();
      }
      if (local_120[0] != (longlong *)0x0) {
        (**(code **)(*local_120[0] + 0x10))();
      }
      FUN_1427678c0(local_c8);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143fa9582 FUN_143fa9582 body=2538 status=ok
// SIG undefined FUN_143fa9582(void)

undefined8 FUN_143fa9582(longlong param_1,int param_2,longlong *param_3,ulonglong param_4)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  undefined7 uVar9;
  undefined1 *puVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_1e8 [32];
  longlong *local_1c8;
  undefined4 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  wchar_t *local_1a8;
  code *local_1a0;
  undefined1 *local_198;
  code **local_190;
  code *local_188;
  code *local_180;
  undefined1 local_171;
  undefined1 local_170 [8];
  longlong *local_168;
  undefined8 local_160;
  longlong *local_158;
  longlong *local_150 [2];
  undefined1 local_140 [16];
  undefined1 local_130 [4];
  undefined1 local_12c [4];
  longlong *local_128 [2];
  undefined8 local_118;
  longlong *local_110;
  undefined8 local_108;
  longlong *local_100 [2];
  longlong *local_f0 [2];
  undefined1 local_e0 [16];
  code *local_d0 [6];
  undefined8 local_a0;
  undefined8 local_98;
  longlong *local_90;
  wchar_t **local_88;
  ulonglong *local_80;
  longlong *local_78;
  undefined4 local_70;
  wchar_t *local_68;
  undefined4 local_60;
  longlong *local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x28);
  lVar7 = (longlong)param_2 * 0x68;
  plVar2 = (longlong *)(lVar13 + lVar7);
  plVar12 = (longlong *)((longlong)param_2 * 0x18 + *(longlong *)(param_1 + 0x30));
  uVar4 = *(ushort *)(lVar13 + 0x60 + lVar7);
  if ((char)param_4 == '\0') {
    if ((uVar4 & 0x10) == 0) {
      if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
        lVar13 = *(longlong *)(param_1 + 0x20);
      }
      else {
        lVar13 = 0;
      }
      FUN_14276766e(local_d0,&DAT_14cb9b118);
      local_a0._0_4_ = 0;
      iVar8 = 0;
      uVar5 = (uint)local_a0;
      if (lVar13 != 0) {
        uVar5 = *(uint *)(lVar13 + 0xc);
        local_a0 = (ulonglong)uVar5;
        if ((int)uVar5 < DAT_14c9647dc) {
          lVar13 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
        }
        else {
          lVar13 = 0;
        }
        iVar8 = *(int *)(lVar13 + 0x10);
        if (*(int *)(lVar13 + 0x10) == 0) {
          LOCK();
          iVar8 = DAT_14c964868 + 1;
          UNLOCK();
          iVar11 = DAT_14c964868 + 1;
          bVar15 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar8;
          if (bVar15) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar11);
          }
          LOCK();
          iVar8 = *(int *)(lVar13 + 0x10);
          bVar15 = iVar8 == 0;
          if (bVar15) {
            *(int *)(lVar13 + 0x10) = iVar11;
            iVar8 = 0;
          }
          UNLOCK();
          uVar5 = (uint)local_a0;
          if (bVar15) {
            iVar8 = iVar11;
          }
        }
      }
      local_a0._0_4_ = uVar5;
      local_a0 = CONCAT44(iVar8,(uint)local_a0);
      local_108 = *(undefined8 *)((longlong)plVar2 + 0x24);
      FUN_145715fae(local_150);
      local_68 = L"SetViewModelCannotBeSet";
      local_60 = 0x17;
      FUN_1446e940c(local_12c,&local_68);
      local_68 = L"MVVMView";
      local_60 = 8;
      FUN_1446e940c(local_130,&local_68);
      local_68 = L"The new viewmodel {0} cannot be set.";
      local_60 = 0x24;
      FUN_140208c1e(local_128,local_130,local_12c,&local_68);
      FUN_14023409e(&local_160,local_128,1);
      local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
      FUN_14023423e(local_58,local_150);
      local_80 = &local_48;
      local_88 = &local_68;
      FUN_14010d304(&local_78);
      local_98 = local_160;
      local_90 = local_158;
      if (local_158 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_158 + 1) = (int)local_158[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_f0,&local_98,&local_78);
      FUN_14007f2db(local_78,local_70);
      if (local_78 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (local_58[0] != (longlong *)0x0) {
        (**(code **)(*local_58[0] + 0x10))();
      }
      if (local_158 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_158 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_158)(local_158);
          LOCK();
          piVar1 = (int *)((longlong)local_158 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_158 + 0x10))(local_158);
          }
        }
      }
      if (local_150[0] != (longlong *)0x0) {
        (**(code **)(*local_150[0] + 0x10))();
      }
      puVar10 = local_140;
      goto LAB_143fa9baa;
    }
LAB_143fa95fd:
    if (*param_3 == 0) {
      lVar13 = 0;
LAB_143fa967a:
      lVar7 = *plVar12;
      uVar9 = (undefined7)((param_4 & 0xffffffff) >> 8);
      if (lVar7 == lVar13) {
        uVar6 = CONCAT71(uVar9,1);
        if (((*(byte *)((longlong)plVar2 + 0x61) & 0x10) != 0) &&
           (*(char *)((longlong)plVar12 + 0x11) == '\x01')) {
          FUN_143fa9f6e(param_1,param_2);
        }
      }
      else {
        local_171 = (undefined1)plVar12[2];
        cVar3 = *(char *)((longlong)plVar12 + 0x11);
        if (cVar3 == '\x01') {
          FUN_148b18fa4(param_1,plVar2,plVar12);
          uVar6 = FUN_148b18f3c(DAT_14cb0d2b0);
          FUN_148b157e2(uVar6,param_1,param_2);
        }
        FUN_148b17d2c(param_1,param_2);
        local_1c8 = plVar12;
        FUN_148b18e66(param_1,*param_3,param_2,plVar2);
        *(byte *)((longlong)plVar12 + 0x12) = (byte)(param_4 & 0xffffffff) ^ 1;
        *(undefined1 *)(plVar12 + 2) = local_171;
        if (*(char *)(param_1 + 0x6d) == '\x01') {
          FUN_148b1a3a6(param_1,param_2,lVar7);
        }
        uVar6 = CONCAT71(uVar9,1);
        if (cVar3 != '\0') {
          if ((*(byte *)(plVar2 + 0xc) & 0x40) != 0) {
            lVar13 = (longlong)*(int *)(*(longlong *)(param_1 + 0x28) + 0x50);
            if (lVar13 != 0) {
              lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x48);
              lVar14 = 0;
              do {
                if (*(int *)(lVar7 + 8 + lVar14) == param_2) {
                  FUN_148b19b38(param_1,*(undefined4 *)(lVar7 + 0xc + lVar14));
                }
                lVar14 = lVar14 + 0x10;
              } while (lVar13 * 0x10 != lVar14);
            }
          }
          uVar6 = CONCAT71(uVar9,1);
          FUN_148b17536(param_1,param_2,1);
        }
      }
      goto LAB_143fa9ea1;
    }
    lVar13 = *plVar2;
    if (lVar13 != 0) {
      lVar7 = *(longlong *)(*param_3 + 0x10);
      if (DAT_14c927740 == 0) {
        local_190 = local_d0;
        local_d0[0] = FUN_1449e2820;
        local_180 = FUN_14081d0ea;
        local_188 = FUN_14081d0ea;
        local_198 = &LAB_146856450;
        local_1a0 = FUN_1427b121c;
        local_1a8 = L"Engine";
        local_1b0 = 0;
        local_1b8 = 0x10000021;
        local_1c0 = 8;
        local_1c8 = (longlong *)CONCAT44(local_1c8._4_4_,0x28);
        FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
        if (DAT_14c927740 == 0) goto LAB_143fa9d3f;
      }
      if ((((*(int *)(DAT_14c927740 + 0x38) <= *(int *)(lVar13 + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(DAT_14c927740 + 0x38) * 8) ==
            DAT_14c927740 + 0x30)) && (lVar13 = *plVar2, lVar13 != 0)) &&
         ((*(int *)(lVar13 + 0x38) <= *(int *)(lVar7 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8) ==
           lVar13 + 0x30)))) {
        lVar13 = *param_3;
        goto LAB_143fa967a;
      }
    }
LAB_143fa9d3f:
    if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
      lVar13 = *(longlong *)(param_1 + 0x20);
    }
    else {
      lVar13 = 0;
    }
    FUN_14276766e(local_d0,&DAT_14cb9b118);
    local_a0._0_4_ = 0;
    iVar8 = 0;
    uVar5 = (uint)local_a0;
    if (lVar13 != 0) {
      uVar5 = *(uint *)(lVar13 + 0xc);
      local_a0 = (ulonglong)uVar5;
      if ((int)uVar5 < DAT_14c9647dc) {
        lVar13 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
      }
      else {
        lVar13 = 0;
      }
      iVar8 = *(int *)(lVar13 + 0x10);
      if (*(int *)(lVar13 + 0x10) == 0) {
        LOCK();
        iVar8 = DAT_14c964868 + 1;
        UNLOCK();
        iVar11 = DAT_14c964868 + 1;
        bVar15 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar8;
        if (bVar15) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar11);
        }
        LOCK();
        iVar8 = *(int *)(lVar13 + 0x10);
        bVar15 = iVar8 == 0;
        if (bVar15) {
          *(int *)(lVar13 + 0x10) = iVar11;
          iVar8 = 0;
        }
        UNLOCK();
        uVar5 = (uint)local_a0;
        if (bVar15) {
          iVar8 = iVar11;
        }
      }
    }
    local_a0._0_4_ = uVar5;
    local_a0 = CONCAT44(iVar8,(uint)local_a0);
    local_68 = L"SetViewModelInvalidValueType";
    local_60 = 0x1c;
    FUN_1446e940c(&local_88,&local_68);
    local_68 = L"MVVMView";
    local_60 = 8;
    FUN_1446e940c(&local_98,&local_68);
    local_68 = L"The new viewmodel is not of the expected type.";
    local_60 = 0x2e;
    FUN_140208c1e(&local_78,&local_98,&local_88,&local_68);
    FUN_148b121ee(local_d0,local_170,1,&local_78);
    local_128[0] = local_78;
    if (local_168 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_168 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_168)(local_168);
        LOCK();
        piVar1 = (int *)((longlong)local_168 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        local_128[0] = local_78;
        if (*piVar1 == 0) {
          (**(code **)(*local_168 + 0x10))(local_168);
          local_128[0] = local_78;
        }
      }
    }
  }
  else {
    if ((uVar4 & 0x20) != 0) goto LAB_143fa95fd;
    if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
      lVar13 = *(longlong *)(param_1 + 0x20);
    }
    else {
      lVar13 = 0;
    }
    FUN_14276766e(local_d0,&DAT_14cb9b118);
    local_a0._0_4_ = 0;
    iVar8 = 0;
    uVar5 = (uint)local_a0;
    if (lVar13 != 0) {
      uVar5 = *(uint *)(lVar13 + 0xc);
      local_a0 = (ulonglong)uVar5;
      if ((int)uVar5 < DAT_14c9647dc) {
        lVar13 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
      }
      else {
        lVar13 = 0;
      }
      iVar8 = *(int *)(lVar13 + 0x10);
      if (*(int *)(lVar13 + 0x10) == 0) {
        LOCK();
        iVar8 = DAT_14c964868 + 1;
        UNLOCK();
        iVar11 = DAT_14c964868 + 1;
        bVar15 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar8;
        if (bVar15) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar11);
        }
        LOCK();
        iVar8 = *(int *)(lVar13 + 0x10);
        bVar15 = iVar8 == 0;
        if (bVar15) {
          *(int *)(lVar13 + 0x10) = iVar11;
          iVar8 = 0;
        }
        UNLOCK();
        uVar5 = (uint)local_a0;
        if (bVar15) {
          iVar8 = iVar11;
        }
      }
    }
    local_a0._0_4_ = uVar5;
    local_a0 = CONCAT44(iVar8,(uint)local_a0);
    local_108 = *(undefined8 *)((longlong)plVar2 + 0x24);
    FUN_145715fae(local_100);
    local_68 = L"SetViewModelCannotBeEvalaute";
    local_60 = 0x1c;
    FUN_1446e940c(local_12c,&local_68);
    local_68 = L"MVVMView";
    local_60 = 8;
    FUN_1446e940c(local_130,&local_68);
    local_68 = L"The new viewmodel {0} cannot be evaluated again.";
    local_60 = 0x30;
    FUN_140208c1e(local_128,local_130,local_12c,&local_68);
    FUN_14023409e(&local_118,local_128,1);
    local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
    FUN_14023423e(local_58,local_100);
    local_80 = &local_48;
    local_88 = &local_68;
    FUN_14010d304(&local_78);
    local_98 = local_118;
    local_90 = local_110;
    if (local_110 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_110 + 1) = (int)local_110[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_f0,&local_98,&local_78);
    FUN_14007f2db(local_78,local_70);
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_58[0] != (longlong *)0x0) {
      (**(code **)(*local_58[0] + 0x10))();
    }
    if (local_110 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_110 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_110)(local_110);
        LOCK();
        piVar1 = (int *)((longlong)local_110 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_110 + 0x10))(local_110);
        }
      }
    }
    if (local_100[0] != (longlong *)0x0) {
      (**(code **)(*local_100[0] + 0x10))();
    }
    puVar10 = local_e0;
LAB_143fa9baa:
    FUN_148b121ee(local_d0,puVar10,1,local_f0);
    plVar2 = *(longlong **)(puVar10 + 8);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar2 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
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
    if (local_f0[0] != (longlong *)0x0) {
      (**(code **)(*local_f0[0] + 0x10))();
    }
  }
  if (local_128[0] != (longlong *)0x0) {
    (**(code **)(*local_128[0] + 0x10))();
  }
  FUN_1427678c0(local_d0);
  uVar6 = 0;
LAB_143fa9ea1:
  if ((local_48 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 143fa9f6e FUN_143fa9f6e body=191 status=ok
// SIG undefined FUN_143fa9f6e(void)

void FUN_143fa9f6e(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x28);
  lVar2 = *(longlong *)(lVar3 + 0x28) + (longlong)param_2 * 0x68;
  if (((*(byte *)(*(longlong *)(lVar3 + 0x28) + 0x60 + (longlong)param_2 * 0x68) & 0x40) != 0) &&
     (iVar1 = *(int *)(lVar3 + 0x50), (longlong)iVar1 != 0)) {
    lVar3 = *(longlong *)(lVar3 + 0x48);
    lVar4 = 0;
    do {
      if (*(int *)(lVar3 + 8 + lVar4) == param_2) {
        FUN_148b19b38(param_1,*(undefined4 *)(lVar3 + 0xc + lVar4));
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar4);
  }
  if ((longlong)*(int *)(lVar2 + 0x48) != 0) {
    lVar3 = *(longlong *)(lVar2 + 0x40);
    lVar4 = (longlong)*(int *)(lVar2 + 0x48) << 4;
    do {
      FUN_148b1a0ca(param_1,lVar3);
      lVar3 = lVar3 + 0x10;
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
  }
  if ((longlong)*(int *)(lVar2 + 0x58) != 0) {
    lVar3 = *(longlong *)(lVar2 + 0x50);
    lVar2 = (longlong)*(int *)(lVar2 + 0x58) * 0xc;
    do {
      FUN_148b19aee(param_1,lVar3);
      lVar3 = lVar3 + 0xc;
      lVar2 = lVar2 + -0xc;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 143faa02e FUN_143faa02e body=1073 status=ok
// SIG undefined FUN_143faa02e(void)

void FUN_143faa02e(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_1d8 [40];
  undefined1 local_1b0 [4];
  undefined1 local_1ac [4];
  longlong *local_1a8 [2];
  undefined8 local_198;
  longlong *local_190;
  longlong local_188 [2];
  longlong *local_178 [2];
  undefined8 local_168;
  longlong *plStack_160;
  longlong *local_150 [2];
  longlong *local_140;
  undefined4 local_138;
  longlong *local_130 [2];
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_110 [48];
  uint local_e0;
  int local_dc;
  undefined8 local_d8;
  longlong *local_d0;
  wchar_t **local_c8;
  ulonglong *local_c0;
  longlong local_b8;
  undefined4 local_b0;
  wchar_t *local_a8;
  undefined4 local_a0 [2];
  undefined1 local_98 [16];
  undefined4 local_88;
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar6 = param_1[1];
  FUN_14276766e(local_110,&DAT_14cb9b118);
  local_dc = 0;
  if (lVar6 == 0) {
    local_e0 = 0;
    iVar4 = 0;
  }
  else {
    local_e0 = *(uint *)(lVar6 + 0xc);
    if ((int)local_e0 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((local_e0 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_e0 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar4 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar4 = *(int *)(lVar6 + 0x10);
      bVar7 = iVar4 == 0;
      if (bVar7) {
        *(int *)(lVar6 + 0x10) = iVar5;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar7) {
        iVar4 = iVar5;
      }
    }
  }
  local_140 = (longlong *)*param_2;
  local_dc = iVar4;
  if (local_140 != (longlong *)0x0) {
    (**(code **)(*local_140 + 8))();
  }
  local_138 = (undefined4)param_2[1];
  local_168 = 0;
  plStack_160 = (longlong *)0x0;
  FUN_1413a454c(local_150,*(undefined4 *)(param_1 + 3),0);
  FUN_144750a86(*param_1,local_188,0,0);
  FUN_140233b1a(local_178,local_188);
  local_a8 = L"EnableLibraryEventFailed_Format";
  local_a0[0] = 0x1f;
  FUN_1446e940c(local_1ac,&local_a8);
  local_a8 = L"MVVMView";
  local_a0[0] = 8;
  FUN_1446e940c(local_1b0,&local_a8);
  local_a8 = L"Widget \'{0}\' can\'t register event \'{1}\'. {2}";
  local_a0[0] = 0x2c;
  FUN_140208c1e(local_1a8,local_1b0,local_1ac,&local_a8);
  FUN_14023409e(&local_198,local_1a8,1);
  local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,4);
  FUN_14023423e(local_98,local_178);
  local_88 = 4;
  FUN_14023423e(local_78,local_150);
  local_68 = 4;
  FUN_14023423e(local_58,&local_140);
  local_c0 = &local_48;
  local_c8 = &local_a8;
  FUN_14010d304(&local_b8);
  local_d8 = local_198;
  local_d0 = local_190;
  if (local_190 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_190 + 1) = (int)local_190[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(local_130,&local_d8,&local_b8);
  FUN_14007f2db(local_b8,local_b0);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  lVar6 = 0x50;
  do {
    plVar3 = *(longlong **)((longlong)local_a0 + lVar6 + -8);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
      *(undefined8 *)((longlong)local_a0 + lVar6 + -8) = 0;
      *(undefined4 *)((longlong)local_a0 + lVar6) = 0;
    }
    lVar6 = lVar6 + -0x20;
  } while (lVar6 != -0x10);
  if (local_190 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_190 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_190)(local_190);
      LOCK();
      piVar1 = (int *)((longlong)local_190 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_190 + 0x10))(local_190);
      }
    }
  }
  if (local_178[0] != (longlong *)0x0) {
    (**(code **)(*local_178[0] + 0x10))();
  }
  if (local_150[0] != (longlong *)0x0) {
    (**(code **)(*local_150[0] + 0x10))();
  }
  if (local_140 != (longlong *)0x0) {
    (**(code **)(*local_140 + 0x10))();
  }
  FUN_148b121ee(local_110,local_120,1,local_130);
  if (local_118 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_118 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_118)(local_118);
      LOCK();
      piVar1 = (int *)((longlong)local_118 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_118 + 0x10))(local_118);
      }
    }
  }
  if (local_130[0] != (longlong *)0x0) {
    (**(code **)(*local_130[0] + 0x10))();
  }
  if (local_1a8[0] != (longlong *)0x0) {
    (**(code **)(*local_1a8[0] + 0x10))();
  }
  if (local_188[0] != 0) {
    FUN_1400020a8();
  }
  plVar3 = plStack_160;
  if (plStack_160 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_160 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_160)(plStack_160);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_1427678c0(local_110);
  if ((local_48 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143faa460 FUN_143faa460 body=159 status=ok
// SIG undefined FUN_143faa460(void)

undefined1 FUN_143faa460(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined1 auStack_78 [32];
  longlong local_58;
  char local_50;
  undefined1 local_48 [40];
  char local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148b0ef30(*(longlong *)*param_1 + 0x88,local_48,*(undefined8 *)param_1[1],param_1[2] + 0x20);
  if (local_20 == '\x01') {
    FUN_148b0f57a(&local_58,local_48);
    if ((local_50 == '\x01') && (local_58 != 0)) {
      *(longlong *)param_1[3] = local_58;
    }
  }
  uVar1 = 1;
  if (*(longlong *)param_1[3] == 0) {
    uVar1 = *(undefined1 *)param_1[4];
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143faa500 FUN_143faa500 body=69 status=ok
// SIG undefined FUN_143faa500(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143faa500(void)

{
  _DAT_14cb9b420 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143faa542. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb9b428,1);
  return;
}



// FUNCTION 143faa546 FUN_143faa546 body=82 status=ok
// SIG undefined FUN_143faa546(void)

void FUN_143faa546(void)

{
  longlong *plVar1;
  
  DAT_14cb9b430 = 3;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar1 = (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"MVVM.DefaultExecutionMode",1);
  if (plVar1 != (longlong *)0x0) {
    DAT_14cb9b430 = (**(code **)(*plVar1 + 0xb0))(plVar1);
  }
  return;
}



// FUNCTION 143faa74a FUN_143faa74a body=75 status=ok
// SIG undefined FUN_143faa74a(void)

undefined8 FUN_143faa74a(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [36];
  undefined1 local_14 [4];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  FUN_144869592(*param_1,local_14,&local_10,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143faa796 FUN_143faa796 body=1431 status=ok
// SIG undefined FUN_143faa796(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143faa796(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 local_64;
  char *local_60;
  undefined4 local_58;
  undefined1 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uStack_80 = 0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/ModelViewViewModel",0,0,&PTR_FUN_14b54a830);
  uStack_80 = 0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/ModelViewViewModel",0,0,&PTR_FUN_14b54a900);
  uStack_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/ModelViewViewModel",&PTR_FUN_14b54af00,1,0);
  uStack_80 = 0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/ModelViewViewModel",0,0,&PTR_FUN_14b54af90);
  FUN_14098d3d2(FUN_143fa7a28,L"/Script/ModelViewViewModel",L"EMVVMExecutionMode",&DAT_14cb9ae20);
  uStack_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/ModelViewViewModel",&PTR_FUN_14b54bdf0,1,0);
  uStack_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/ModelViewViewModel",&PTR_FUN_14b54c4b0,2,0);
  uStack_80 = 0;
  uStack_78 = 0;
  local_88 = 5;
  FUN_14282b410(L"/Script/ModelViewViewModel",0,0,&PTR_FUN_14b54cf70);
  uStack_80 = 0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/ModelViewViewModel",0,0,&PTR_FUN_14b54d170);
  uStack_80 = 0;
  uStack_78 = 0;
  local_88 = 7;
  FUN_14282b410(L"/Script/ModelViewViewModel",0,0,&PTR_FUN_14b54d720);
  FUN_1400b22c2(&local_60,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_60,&DAT_14cb9afe8);
  if (cVar1 == '\0') {
    _DAT_14cb9afe8 = 0;
    uRam000000014cb9aff0 = 0;
  }
  if (local_60 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_60 = "BlueprintPrivate";
  local_58 = 0x10;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cb9aff8 = (ulonglong)uVar2;
  local_60 = "DeprecatedFunction";
  local_58 = 0x12;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cb9b000 = (ulonglong)uVar2;
  local_60 = "BlueprintGetter";
  local_58 = 0xf;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cb9b008 = (ulonglong)uVar2;
  local_60 = "BlueprintSetter";
  local_58 = 0xf;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cb9b010 = (ulonglong)uVar2;
  uStack_80 = 0;
  uStack_78 = 0;
  local_88 = 5;
  FUN_14282b410(L"/Script/ModelViewViewModel",0,0,&PTR_FUN_14b54e1c0);
  local_60 = "BlueprintGetter";
  local_58 = 0xf;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cb9b090 = (ulonglong)uVar2;
  local_60 = "BlueprintSetter";
  local_58 = 0xf;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cb9b098 = (ulonglong)uVar2;
  uStack_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/ModelViewViewModel",&PTR_FUN_14b54e910,1,0);
  uStack_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/ModelViewViewModel",&PTR_FUN_14b54fb20,2,0);
  local_60 = (char *)0x800000014b5502de;
  local_64 = 0x12;
  local_58 = FUN_14577453c();
  local_54 = 1;
  FUN_14659712a(&local_60);
  uStack_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/ModelViewViewModel",&PTR_FUN_14b550780,1,0);
  local_60 = "Model View Viewmodel";
  local_58 = 0x14;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cb9b118 = (ulonglong)uVar2;
  uStack_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/ModelViewViewModel",&PTR_FUN_14b5513d0,1,0);
  uStack_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/ModelViewViewModel",&PTR_FUN_14b551b70,1,0);
  FUN_14098d3d2(FUN_143fa7f09,L"/Script/ModelViewViewModel",L"EMVVMBindingMode",&DAT_14cb9b1b0);
  FUN_14098d3d2(FUN_143fa7f40,L"/Script/ModelViewViewModel",L"EMVVMConditionOperation",
                &DAT_14cb9b1c8);
  uStack_80 = 0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/ModelViewViewModel",&PTR_FUN_14b5528d0,1,&PTR_FUN_14b5528a0);
  uStack_80 = 0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/ModelViewViewModel",0,0,&PTR_FUN_14b552a20);
  uStack_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/ModelViewViewModel",&PTR_FUN_14b552fb0,1,0);
  uStack_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/ModelViewViewModel",&PTR_FUN_14b5534c0,1,0);
  uStack_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/ModelViewViewModel",&PTR_FUN_14b553890,1,0);
  uStack_80 = 0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/ModelViewViewModel",&PTR_FUN_14b554eb0,1,&PTR_FUN_14b554e80);
  DAT_14cb9b340 = 0;
  _DAT_14cb9b348 = 0;
  atexit((_func_5014 *)&LAB_143fa9151);
  uStack_80 = 0;
  uStack_78 = 0;
  local_88 = 7;
  FUN_14282b410(L"/Script/ModelViewViewModel",&PTR_FUN_14b5575f0,1,&PTR_FUN_14b5574d0);
  local_88 = CONCAT44(local_88._4_4_,4);
  FUN_14627302a(&DAT_14cb9b420,L"MVVM.DefaultExecutionMode",3,
                L"The default evaluation mode of a MVVM binding. Must restart if changed.");
  atexit(FUN_143faa500);
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143faad30 FUN_143faad30 body=105 status=ok
// SIG undefined FUN_143faad30(void)

void FUN_143faad30(void)

{
  FUN_1446f470e(&DAT_14cb9b438,L"K2_CreateInstance",1);
  FUN_1446f470e(&DAT_14cb9b448,L"K2_DestroyInstance",1);
  FUN_14282b410(L"/Script/ModelViewViewModel",&PTR_FUN_14b55b4e0,1,0,0,0,0);
  return;
}



// FUNCTION 143faadb7 FUN_143faadb7 body=41 status=ok
// SIG undefined FUN_143faadb7(void)

void FUN_143faadb7(void)

{
  DAT_14cb9b698 = 0;
  if (DAT_14cb9b690 != 0) {
    FUN_1400020a8();
  }
  FUN_1461724ca();
  return;
}



// FUNCTION 143faade0 FUN_143faade0 body=257 status=ok
// SIG undefined FUN_143faade0(void)

void FUN_143faade0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  longlong **local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = param_2;
  plVar4 = (longlong *)FUN_14001cc68(0x2f0,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b55df30;
  FUN_148b2f92c(plVar4 + 2,param_3);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_40 = &local_48;
  local_38 = &local_58;
  local_58 = plVar4 + 2;
  local_50 = plVar4;
  FUN_141030890(param_1 + 0x30,local_2c,&local_40,0);
  plVar3 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
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
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143faaf02 FUN_143faaf02 body=68 status=ok
// SIG undefined FUN_143faaf02(void)

void FUN_143faaf02(void)

{
  if (DAT_14cb9b6e8 != 0) {
    FUN_1400020a8();
  }
  FUN_140a59604(DAT_14cb9b6c8,DAT_14cb9b6d0);
  if (DAT_14cb9b6c8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143faaf46 FUN_143faaf46 body=1752 status=ok
// SIG undefined FUN_143faaf46(void)

void FUN_143faaf46(longlong param_1,double param_2,double param_3,uint param_4,undefined4 param_5)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong in_RDX;
  longlong lVar8;
  undefined4 uVar9;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar8 = 0x7fffffffffffffff;
  if ((param_4 & 0xfffffffd) == 0) {
    FUN_148b3545e(param_1 + 0x430);
    if (*(char *)(param_1 + 0x438) == '\0') {
      lVar6 = -0x8000000000000000;
    }
    else {
      lVar6 = *(longlong *)(param_1 + 0x430);
    }
    FUN_148b3545e(param_1 + 0x458);
    lVar5 = 0x7fffffffffffffff;
    if (*(char *)(param_1 + 0x460) != '\0') {
      lVar5 = *(longlong *)(param_1 + 0x458);
    }
    if (lVar5 <= in_RDX) {
      in_RDX = lVar5;
    }
    if (in_RDX < lVar6) {
      in_RDX = lVar6;
    }
    param_2 = (double)lVar6;
    if ((double)lVar5 <= param_3) {
      param_3 = (double)lVar5;
    }
    if (param_3 <= param_2) {
      param_3 = param_2;
    }
  }
  uVar9 = (undefined4)((ulonglong)param_2 >> 0x20);
  FUN_148b3545e(param_1 + 0x3e0);
  if (*(char *)(param_1 + 1000) == '\0') {
    lVar6 = -0x8000000000000000;
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x3e0);
  }
  FUN_148b3545e(param_1 + 0x408);
  lVar5 = 0x7fffffffffffffff;
  if (*(char *)(param_1 + 0x410) != '\0') {
    lVar5 = *(longlong *)(param_1 + 0x408);
  }
  if (lVar5 <= in_RDX) {
    in_RDX = lVar5;
  }
  if (in_RDX < lVar6) {
    in_RDX = lVar6;
  }
  if ((double)lVar5 <= param_3) {
    param_3 = (double)lVar5;
  }
  plVar1 = (longlong *)(param_1 + 0x268);
  local_68 = in_RDX;
  if (((*(int *)(param_1 + 0x280) == 0) || (*(longlong **)(param_1 + 0x278) == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x30))(), cVar2 == '\0')) {
    FUN_148b35000(plVar1,&local_68);
  }
  if (param_3 <= (double)lVar6) {
    param_3 = (double)lVar6;
  }
  if (param_4 == 0) {
    if (((*(int *)(param_1 + 0x280) != 0) && (*(longlong **)(param_1 + 0x278) != (longlong *)0x0))
       && (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x30))(), cVar2 != '\0')) {
      if (*(int *)(param_1 + 0x280) == 0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = *(longlong **)(param_1 + 0x278);
      }
      lVar6 = (**(code **)(*plVar7 + 0x58))();
      *plVar1 = lVar6;
    }
    lVar6 = *(longlong *)(param_1 + 0x268);
    if (lVar6 != *(longlong *)(param_1 + 0x5a0)) {
      param_3 = (double)lVar6;
      in_RDX = lVar6;
      local_68 = lVar6;
    }
    *(double *)(param_1 + 0x590) = param_3;
    FUN_148b35052(param_1);
LAB_143fab11e:
    if (((*(int *)(param_1 + 0x358) == 0) || (*(longlong **)(param_1 + 0x350) == (longlong *)0x0))
       || (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x350) + 0x30))(), cVar2 == '\0')) {
      lVar6 = *(longlong *)(param_1 + 0x340);
    }
    else {
      if (*(int *)(param_1 + 0x358) == 0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = *(longlong **)(param_1 + 0x350);
      }
      lVar6 = (**(code **)(*plVar7 + 0x58))();
      *(longlong *)(param_1 + 0x340) = lVar6;
    }
    if (lVar6 != 0) {
      in_RDX = in_RDX + lVar6 / 2;
      in_RDX = in_RDX - in_RDX % lVar6;
      local_68 = in_RDX;
    }
  }
  else {
    *(double *)(param_1 + 0x590) = param_3;
    bVar3 = FUN_148b35052(param_1);
    if ((param_4 != 2 & (bVar3 ^ 1)) == 0) goto LAB_143fab11e;
  }
  if (((*(int *)(param_1 + 0x500) != 0) && (*(longlong **)(param_1 + 0x4f8) != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x4f8) + 0x30))(), cVar2 != '\0')) {
    if (*(int *)(param_1 + 0x500) == 0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = *(longlong **)(param_1 + 0x4f8);
    }
    uVar4 = (**(code **)(*plVar7 + 0x58))();
    *(undefined1 *)(param_1 + 0x4f0) = uVar4;
  }
  if (*(char *)(param_1 + 0x4f0) == '\x01') {
    if (((*(int *)(param_1 + 0x280) != 0) && (*(longlong **)(param_1 + 0x278) != (longlong *)0x0))
       && (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x30))(), cVar2 != '\0')) {
      if (*(int *)(param_1 + 0x280) == 0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = *(longlong **)(param_1 + 0x278);
      }
      lVar6 = (**(code **)(*plVar7 + 0x58))();
      *plVar1 = lVar6;
    }
    lVar6 = *(longlong *)(param_1 + 0x268);
    FUN_148b3545e(param_1 + 0x458);
    if ((*(char *)(param_1 + 0x460) == '\x01') && (*(longlong *)(param_1 + 0x458) < lVar6)) {
      if ((*(int *)(param_1 + 0x280) != 0) &&
         ((*(longlong **)(param_1 + 0x278) != (longlong *)0x0 &&
          (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x30))(), cVar2 != '\0')))) {
        if (*(int *)(param_1 + 0x280) == 0) {
          plVar7 = (longlong *)0x0;
        }
        else {
          plVar7 = *(longlong **)(param_1 + 0x278);
        }
        lVar6 = (**(code **)(*plVar7 + 0x58))();
        *plVar1 = lVar6;
      }
      lVar6 = *(longlong *)(param_1 + 0x268);
      FUN_148b3545e(param_1 + 0x458);
      if (*(char *)(param_1 + 0x460) != '\0') {
        lVar8 = *(longlong *)(param_1 + 0x458);
      }
      FUN_148b350a6(param_1,(float)(lVar6 - lVar8),1);
      goto LAB_143fab21a;
    }
  }
  if (((*(int *)(param_1 + 0x518) != 0) && (*(longlong **)(param_1 + 0x510) != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x510) + 0x30))(), cVar2 != '\0')) {
    if (*(int *)(param_1 + 0x518) == 0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = *(longlong **)(param_1 + 0x510);
    }
    uVar4 = (**(code **)(*plVar7 + 0x58))();
    *(undefined1 *)(param_1 + 0x508) = uVar4;
  }
  if (*(char *)(param_1 + 0x508) == '\x01') {
    if (((*(int *)(param_1 + 0x280) != 0) && (*(longlong **)(param_1 + 0x278) != (longlong *)0x0))
       && (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x30))(), cVar2 != '\0')) {
      if (*(int *)(param_1 + 0x280) == 0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = *(longlong **)(param_1 + 0x278);
      }
      lVar8 = (**(code **)(*plVar7 + 0x58))();
      *plVar1 = lVar8;
    }
    lVar8 = *(longlong *)(param_1 + 0x268);
    FUN_148b3545e(param_1 + 0x430);
    if ((*(char *)(param_1 + 0x438) == '\x01') && (lVar8 < *(longlong *)(param_1 + 0x430))) {
      if ((*(int *)(param_1 + 0x280) != 0) &&
         ((*(longlong **)(param_1 + 0x278) != (longlong *)0x0 &&
          (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x30))(), cVar2 != '\0')))) {
        if (*(int *)(param_1 + 0x280) == 0) {
          plVar7 = (longlong *)0x0;
        }
        else {
          plVar7 = *(longlong **)(param_1 + 0x278);
        }
        lVar8 = (**(code **)(*plVar7 + 0x58))();
        *plVar1 = lVar8;
      }
      lVar8 = *(longlong *)(param_1 + 0x268);
      FUN_148b3545e(param_1 + 0x430);
      if (*(char *)(param_1 + 0x438) == '\0') {
        lVar6 = -0x8000000000000000;
      }
      else {
        lVar6 = *(longlong *)(param_1 + 0x430);
      }
      FUN_148b35284(param_1,CONCAT44(uVar9,(float)(lVar8 - lVar6)),1);
    }
  }
LAB_143fab21a:
  if (((param_4 - 1 < 2) && (*(int *)(param_1 + 0x2a0) != 0)) &&
     (plVar7 = *(longlong **)(param_1 + 0x298), plVar7 != (longlong *)0x0)) {
    (**(code **)(*plVar7 + 0x60))(plVar7,in_RDX,param_5);
  }
  if ((*(int *)(param_1 + 0x290) != 0) &&
     (plVar7 = *(longlong **)(param_1 + 0x288), plVar7 != (longlong *)0x0)) {
    (**(code **)(*plVar7 + 0x60))(plVar7,in_RDX);
  }
  if (((*(int *)(param_1 + 0x280) == 0) || (*(longlong **)(param_1 + 0x278) == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x30))(), cVar2 == '\0')) {
    FUN_148b35000(plVar1,&local_68);
  }
  if (((*(int *)(param_1 + 0x280) != 0) && (*(longlong **)(param_1 + 0x278) != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x30))(), cVar2 != '\0')) {
    if (*(int *)(param_1 + 0x280) == 0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = *(longlong **)(param_1 + 0x278);
    }
    lVar8 = (**(code **)(*plVar7 + 0x58))();
    *plVar1 = lVar8;
  }
  lVar8 = *(longlong *)(param_1 + 0x268);
  if ((*(longlong *)(param_1 + 0x5a0) != lVar8) || (*(char *)(param_1 + 0x5b8) == '\x01')) {
    if ((*(int *)(param_1 + 0x280) != 0) && (*(longlong **)(param_1 + 0x278) != (longlong *)0x0)) {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x30))();
      if (cVar2 == '\0') {
        lVar8 = *plVar1;
      }
      else {
        if (*(int *)(param_1 + 0x280) == 0) {
          plVar7 = (longlong *)0x0;
        }
        else {
          plVar7 = *(longlong **)(param_1 + 0x278);
        }
        lVar8 = (**(code **)(*plVar7 + 0x58))();
        *plVar1 = lVar8;
      }
    }
    *(longlong *)(param_1 + 0x5a0) = lVar8;
    (**(code **)(**(longlong **)(param_1 + 0x2e8) + 0x28))
              (*(longlong **)(param_1 + 0x2e8),&local_78,param_1 + 0x5a0);
    if ((longlong *)(param_1 + 0x5a8) == &local_78) {
      if (local_78 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x5a8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x5a8) = local_78;
      local_78 = 0;
      *(undefined4 *)(param_1 + 0x5b0) = local_70;
      *(undefined4 *)(param_1 + 0x5b4) = local_6c;
    }
    *(undefined1 *)(param_1 + 0x5b8) = 0;
  }
  cVar2 = FUN_140591fd6(param_1);
  if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 0x5b9) = 0;
    *(undefined4 *)(param_1 + 0x580) = 0xffffffff;
  }
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143fab63c FUN_143fab63c body=1909 status=ok
// SIG undefined FUN_143fab63c(void)

void FUN_143fab63c(longlong param_1,ulonglong param_2,double param_3,uint param_4,undefined4 param_5
                  )

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined4 local_70;
  undefined4 local_6c;
  ulonglong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_4 & 0xfffffffd) == 0) {
    FUN_148b3e488(param_1 + 0x430);
    if (*(char *)(param_1 + 0x438) == '\0') {
      uVar7 = 0;
    }
    else {
      uVar7 = *(ulonglong *)(param_1 + 0x430);
    }
    FUN_148b3e488(param_1 + 0x458);
    uVar5 = 0xffffffffffffffff;
    if (*(char *)(param_1 + 0x460) != '\0') {
      uVar5 = *(ulonglong *)(param_1 + 0x458);
    }
    if (uVar5 <= param_2) {
      param_2 = uVar5;
    }
    if (param_2 < uVar7) {
      param_2 = uVar7;
    }
    auVar11._8_4_ = (int)(uVar5 >> 0x20);
    auVar11._0_8_ = uVar5;
    auVar11._12_4_ = 0x45300000;
    dVar10 = ((double)CONCAT44(0x43300000,(int)uVar5) - 4503599627370496.0) +
             (auVar11._8_8_ - 1.9342813113834067e+25);
    auVar14._8_4_ = (int)(uVar7 >> 0x20);
    auVar14._0_8_ = uVar7;
    auVar14._12_4_ = 0x45300000;
    dVar13 = ((double)CONCAT44(0x43300000,(int)uVar7) - 4503599627370496.0) +
             (auVar14._8_8_ - 1.9342813113834067e+25);
    if (dVar10 <= param_3) {
      param_3 = dVar10;
    }
    if (param_3 <= dVar13) {
      param_3 = dVar13;
    }
  }
  FUN_148b3e488(param_1 + 0x3e0);
  if (*(char *)(param_1 + 1000) == '\0') {
    uVar7 = 0;
  }
  else {
    uVar7 = *(ulonglong *)(param_1 + 0x3e0);
  }
  FUN_148b3e488(param_1 + 0x408);
  uVar5 = 0xffffffffffffffff;
  if (*(char *)(param_1 + 0x410) != '\0') {
    uVar5 = *(ulonglong *)(param_1 + 0x408);
  }
  if (uVar5 <= param_2) {
    param_2 = uVar5;
  }
  if (param_2 < uVar7) {
    param_2 = uVar7;
  }
  auVar12._8_4_ = (int)(uVar5 >> 0x20);
  auVar12._0_8_ = uVar5;
  auVar12._12_4_ = 0x45300000;
  dVar10 = ((double)CONCAT44(0x43300000,(int)uVar5) - 4503599627370496.0) +
           (auVar12._8_8_ - 1.9342813113834067e+25);
  auVar16._8_4_ = (int)(uVar7 >> 0x20);
  auVar16._0_8_ = uVar7;
  auVar16._12_4_ = 0x45300000;
  dVar13 = ((double)CONCAT44(0x43300000,(int)uVar7) - 4503599627370496.0) +
           (auVar16._8_8_ - 1.9342813113834067e+25);
  if (dVar10 <= param_3) {
    param_3 = dVar10;
  }
  plVar1 = (longlong *)(param_1 + 0x268);
  local_68 = param_2;
  if (((*(int *)(param_1 + 0x280) == 0) || (*(longlong **)(param_1 + 0x278) == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x30))(), cVar2 == '\0')) {
    FUN_148b3e000(plVar1);
  }
  if (param_3 <= dVar13) {
    param_3 = dVar13;
  }
  if (param_4 == 0) {
    if (((*(int *)(param_1 + 0x280) != 0) && (*(longlong **)(param_1 + 0x278) != (longlong *)0x0))
       && (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x30))(), cVar2 != '\0')) {
      if (*(int *)(param_1 + 0x280) == 0) {
        plVar9 = (longlong *)0x0;
      }
      else {
        plVar9 = *(longlong **)(param_1 + 0x278);
      }
      lVar6 = (**(code **)(*plVar9 + 0x58))();
      *plVar1 = lVar6;
    }
    uVar7 = *(ulonglong *)(param_1 + 0x268);
    if (uVar7 != *(ulonglong *)(param_1 + 0x5a0)) {
      auVar15._8_4_ = (int)(uVar7 >> 0x20);
      auVar15._0_8_ = uVar7;
      auVar15._12_4_ = 0x45300000;
      param_3 = ((double)CONCAT44(0x43300000,(int)uVar7) - 4503599627370496.0) +
                (auVar15._8_8_ - 1.9342813113834067e+25);
      param_2 = uVar7;
      local_68 = uVar7;
    }
    *(double *)(param_1 + 0x590) = param_3;
    FUN_148b3e052(param_1);
LAB_143fab86b:
    if (((*(int *)(param_1 + 0x358) == 0) || (*(longlong **)(param_1 + 0x350) == (longlong *)0x0))
       || (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x350) + 0x30))(), cVar2 == '\0')) {
      uVar7 = *(ulonglong *)(param_1 + 0x340);
    }
    else {
      if (*(int *)(param_1 + 0x358) == 0) {
        plVar9 = (longlong *)0x0;
      }
      else {
        plVar9 = *(longlong **)(param_1 + 0x350);
      }
      uVar7 = (**(code **)(*plVar9 + 0x58))();
      *(ulonglong *)(param_1 + 0x340) = uVar7;
    }
    if (uVar7 != 0) {
      param_2 = param_2 + (uVar7 >> 1);
      param_2 = param_2 - param_2 % uVar7;
      local_68 = param_2;
    }
  }
  else {
    *(double *)(param_1 + 0x590) = param_3;
    bVar3 = FUN_148b3e052(param_1);
    if ((param_4 != 2 & (bVar3 ^ 1)) == 0) goto LAB_143fab86b;
  }
  if (((*(int *)(param_1 + 0x500) != 0) && (*(longlong **)(param_1 + 0x4f8) != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x4f8) + 0x30))(), cVar2 != '\0')) {
    if (*(int *)(param_1 + 0x500) == 0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar9 = *(longlong **)(param_1 + 0x4f8);
    }
    uVar4 = (**(code **)(*plVar9 + 0x58))();
    *(undefined1 *)(param_1 + 0x4f0) = uVar4;
  }
  if (*(char *)(param_1 + 0x4f0) == '\x01') {
    if (((*(int *)(param_1 + 0x280) != 0) && (*(longlong **)(param_1 + 0x278) != (longlong *)0x0))
       && (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x30))(), cVar2 != '\0')) {
      if (*(int *)(param_1 + 0x280) == 0) {
        plVar9 = (longlong *)0x0;
      }
      else {
        plVar9 = *(longlong **)(param_1 + 0x278);
      }
      lVar6 = (**(code **)(*plVar9 + 0x58))();
      *plVar1 = lVar6;
    }
    uVar7 = *(ulonglong *)(param_1 + 0x268);
    FUN_148b3e488(param_1 + 0x458);
    if ((*(char *)(param_1 + 0x460) == '\x01') && (*(ulonglong *)(param_1 + 0x458) < uVar7)) {
      if ((*(int *)(param_1 + 0x280) != 0) &&
         ((*(longlong **)(param_1 + 0x278) != (longlong *)0x0 &&
          (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x30))(), cVar2 != '\0')))) {
        if (*(int *)(param_1 + 0x280) == 0) {
          plVar9 = (longlong *)0x0;
        }
        else {
          plVar9 = *(longlong **)(param_1 + 0x278);
        }
        lVar6 = (**(code **)(*plVar9 + 0x58))();
        *plVar1 = lVar6;
      }
      lVar6 = *(longlong *)(param_1 + 0x268);
      FUN_148b3e488(param_1 + 0x458);
      lVar8 = -1;
      if (*(char *)(param_1 + 0x460) != '\0') {
        lVar8 = *(longlong *)(param_1 + 0x458);
      }
      FUN_148b3e0a6(param_1,(float)(ulonglong)(lVar6 - lVar8),1);
      goto LAB_143fab960;
    }
  }
  if (((*(int *)(param_1 + 0x518) != 0) && (*(longlong **)(param_1 + 0x510) != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x510) + 0x30))(), cVar2 != '\0')) {
    if (*(int *)(param_1 + 0x518) == 0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar9 = *(longlong **)(param_1 + 0x510);
    }
    uVar4 = (**(code **)(*plVar9 + 0x58))();
    *(undefined1 *)(param_1 + 0x508) = uVar4;
  }
  if (*(char *)(param_1 + 0x508) == '\x01') {
    if (((*(int *)(param_1 + 0x280) != 0) && (*(longlong **)(param_1 + 0x278) != (longlong *)0x0))
       && (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x30))(), cVar2 != '\0')) {
      if (*(int *)(param_1 + 0x280) == 0) {
        plVar9 = (longlong *)0x0;
      }
      else {
        plVar9 = *(longlong **)(param_1 + 0x278);
      }
      lVar6 = (**(code **)(*plVar9 + 0x58))();
      *plVar1 = lVar6;
    }
    uVar7 = *(ulonglong *)(param_1 + 0x268);
    FUN_148b3e488(param_1 + 0x430);
    if ((*(char *)(param_1 + 0x438) == '\x01') && (uVar7 < *(ulonglong *)(param_1 + 0x430))) {
      if ((*(int *)(param_1 + 0x280) != 0) &&
         ((*(longlong **)(param_1 + 0x278) != (longlong *)0x0 &&
          (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x30))(), cVar2 != '\0')))) {
        if (*(int *)(param_1 + 0x280) == 0) {
          plVar9 = (longlong *)0x0;
        }
        else {
          plVar9 = *(longlong **)(param_1 + 0x278);
        }
        lVar6 = (**(code **)(*plVar9 + 0x58))();
        *plVar1 = lVar6;
      }
      lVar6 = *(longlong *)(param_1 + 0x268);
      FUN_148b3e488(param_1 + 0x430);
      if (*(char *)(param_1 + 0x438) == '\0') {
        lVar8 = 0;
      }
      else {
        lVar8 = *(longlong *)(param_1 + 0x430);
      }
      FUN_148b3e298(param_1,(float)(ulonglong)(lVar6 - lVar8),1);
    }
  }
LAB_143fab960:
  if (((param_4 - 1 < 2) && (*(int *)(param_1 + 0x2a0) != 0)) &&
     (plVar9 = *(longlong **)(param_1 + 0x298), plVar9 != (longlong *)0x0)) {
    (**(code **)(*plVar9 + 0x60))(plVar9,param_2,param_5);
  }
  if ((*(int *)(param_1 + 0x290) != 0) &&
     (plVar9 = *(longlong **)(param_1 + 0x288), plVar9 != (longlong *)0x0)) {
    (**(code **)(*plVar9 + 0x60))(plVar9,param_2);
  }
  if (((*(int *)(param_1 + 0x280) == 0) || (*(longlong **)(param_1 + 0x278) == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x30))(), cVar2 == '\0')) {
    FUN_148b3e000(plVar1,&local_68);
  }
  if (((*(int *)(param_1 + 0x280) != 0) && (*(longlong **)(param_1 + 0x278) != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x30))(), cVar2 != '\0')) {
    if (*(int *)(param_1 + 0x280) == 0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar9 = *(longlong **)(param_1 + 0x278);
    }
    lVar6 = (**(code **)(*plVar9 + 0x58))();
    *plVar1 = lVar6;
  }
  lVar6 = *(longlong *)(param_1 + 0x268);
  if ((*(longlong *)(param_1 + 0x5a0) != lVar6) || (*(char *)(param_1 + 0x5b8) == '\x01')) {
    if ((*(int *)(param_1 + 0x280) != 0) && (*(longlong **)(param_1 + 0x278) != (longlong *)0x0)) {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x30))();
      if (cVar2 == '\0') {
        lVar6 = *plVar1;
      }
      else {
        if (*(int *)(param_1 + 0x280) == 0) {
          plVar9 = (longlong *)0x0;
        }
        else {
          plVar9 = *(longlong **)(param_1 + 0x278);
        }
        lVar6 = (**(code **)(*plVar9 + 0x58))();
        *plVar1 = lVar6;
      }
    }
    *(longlong *)(param_1 + 0x5a0) = lVar6;
    (**(code **)(**(longlong **)(param_1 + 0x2e8) + 0x28))
              (*(longlong **)(param_1 + 0x2e8),&local_78,param_1 + 0x5a0);
    if ((longlong *)(param_1 + 0x5a8) == &local_78) {
      if (local_78 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x5a8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x5a8) = local_78;
      local_78 = 0;
      *(undefined4 *)(param_1 + 0x5b0) = local_70;
      *(undefined4 *)(param_1 + 0x5b4) = local_6c;
    }
    *(undefined1 *)(param_1 + 0x5b8) = 0;
  }
  cVar2 = FUN_140591fd6(param_1);
  if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 0x5b9) = 0;
    *(undefined4 *)(param_1 + 0x580) = 0xffffffff;
  }
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fabdd0 FUN_143fabdd0 body=1802 status=ok
// SIG undefined FUN_143fabdd0(void)

void FUN_143fabdd0(longlong param_1,undefined8 param_2,double param_3,uint param_4,
                  undefined4 param_5)

{
  double *pdVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  longlong *plVar5;
  double dVar6;
  double dVar7;
  undefined1 in_XMM1 [16];
  undefined1 auVar8 [16];
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined4 local_70;
  undefined4 local_6c;
  double local_68;
  ulonglong local_60;
  
  uVar10 = SUB84(param_3,0);
  uVar11 = (undefined4)((ulonglong)param_3 >> 0x20);
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_4 & 0xfffffffd) == 0) {
    FUN_148b47204(param_1 + 0x430);
    if (*(char *)(param_1 + 0x438) == '\0') {
      uVar12 = 0xffffffff;
      uVar13 = 0xffefffff;
    }
    else {
      uVar12 = (undefined4)*(undefined8 *)(param_1 + 0x430);
      uVar13 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x430) >> 0x20);
    }
    FUN_148b47204(param_1 + 0x458);
    if (*(char *)(param_1 + 0x460) == '\0') {
      dVar6 = 1.79769313486232e+308;
    }
    else {
      dVar6 = *(double *)(param_1 + 0x458);
    }
    if (dVar6 <= in_XMM1._0_8_) {
      in_XMM1._8_8_ = in_XMM1._8_8_;
      in_XMM1._0_8_ = dVar6;
    }
    if (in_XMM1._0_8_ <= (double)CONCAT44(uVar13,uVar12)) {
      in_XMM1._4_4_ = uVar13;
      in_XMM1._0_4_ = uVar12;
    }
    if (dVar6 <= param_3) {
      uVar10 = SUB84(dVar6,0);
      uVar11 = (undefined4)((ulonglong)dVar6 >> 0x20);
    }
    if ((double)CONCAT44(uVar11,uVar10) <= (double)CONCAT44(uVar13,uVar12)) {
      uVar10 = uVar12;
      uVar11 = uVar13;
    }
  }
  FUN_148b47204(param_1 + 0x3e0);
  if (*(char *)(param_1 + 1000) == '\0') {
    uVar12 = 0xffffffff;
    uVar13 = 0xffefffff;
  }
  else {
    uVar12 = (undefined4)*(undefined8 *)(param_1 + 0x3e0);
    uVar13 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x3e0) >> 0x20);
  }
  FUN_148b47204(param_1 + 0x408);
  if (*(char *)(param_1 + 0x410) == '\0') {
    dVar6 = 1.79769313486232e+308;
  }
  else {
    dVar6 = *(double *)(param_1 + 0x408);
  }
  if (dVar6 <= in_XMM1._0_8_) {
    in_XMM1._0_8_ = dVar6;
  }
  if (in_XMM1._0_8_ <= (double)CONCAT44(uVar13,uVar12)) {
    in_XMM1._4_4_ = uVar13;
    in_XMM1._0_4_ = uVar12;
  }
  dVar9 = in_XMM1._0_8_;
  if (dVar6 <= (double)CONCAT44(uVar11,uVar10)) {
    uVar10 = SUB84(dVar6,0);
    uVar11 = (undefined4)((ulonglong)dVar6 >> 0x20);
  }
  pdVar1 = (double *)(param_1 + 0x268);
  local_68 = dVar9;
  if (((*(int *)(param_1 + 0x280) == 0) || (*(longlong **)(param_1 + 0x278) == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x30))(), cVar2 == '\0')) {
    FUN_148b46d68(pdVar1,&local_68);
  }
  if ((double)CONCAT44(uVar11,uVar10) <= (double)CONCAT44(uVar13,uVar12)) {
    uVar10 = uVar12;
    uVar11 = uVar13;
  }
  if (param_4 == 0) {
    if (((*(int *)(param_1 + 0x280) != 0) && (*(longlong **)(param_1 + 0x278) != (longlong *)0x0))
       && (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x30))(), cVar2 != '\0')) {
      if (*(int *)(param_1 + 0x280) == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = *(longlong **)(param_1 + 0x278);
      }
      dVar6 = (double)(**(code **)(*plVar5 + 0x58))();
      *pdVar1 = dVar6;
    }
    dVar6 = *(double *)(param_1 + 0x268);
    if ((dVar6 != *(double *)(param_1 + 0x5a0)) || (NAN(dVar6) || NAN(*(double *)(param_1 + 0x5a0)))
       ) {
      in_XMM1._8_8_ = 0;
      in_XMM1._0_8_ = dVar6;
      uVar10 = SUB84(dVar6,0);
      uVar11 = (undefined4)((ulonglong)dVar6 >> 0x20);
      local_68 = dVar6;
    }
    *(ulonglong *)(param_1 + 0x590) = CONCAT44(uVar11,uVar10);
    FUN_148b46dbc(param_1);
LAB_143fabfa1:
    dVar9 = in_XMM1._0_8_;
    if (((*(int *)(param_1 + 0x358) == 0) || (*(longlong **)(param_1 + 0x350) == (longlong *)0x0))
       || (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x350) + 0x30))(), cVar2 == '\0')) {
      dVar6 = *(double *)(param_1 + 0x340);
    }
    else {
      if (*(int *)(param_1 + 0x358) == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = *(longlong **)(param_1 + 0x350);
      }
      dVar6 = (double)(**(code **)(*plVar5 + 0x58))();
      *(double *)(param_1 + 0x340) = dVar6;
    }
    if ((dVar6 != 0.0) || (NAN(dVar6))) {
      auVar8._0_8_ = (dVar6 * 0.5 + dVar9) / dVar6;
      auVar8._8_8_ = 0;
      auVar8 = roundpd(in_XMM1,auVar8,1);
      dVar9 = auVar8._0_8_ * dVar6;
      local_68 = dVar9;
    }
  }
  else {
    *(ulonglong *)(param_1 + 0x590) = CONCAT44(uVar11,uVar10);
    bVar3 = FUN_148b46dbc(param_1);
    if ((param_4 != 2 & (bVar3 ^ 1)) == 0) goto LAB_143fabfa1;
  }
  if (((*(int *)(param_1 + 0x500) != 0) && (*(longlong **)(param_1 + 0x4f8) != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x4f8) + 0x30))(), cVar2 != '\0')) {
    if (*(int *)(param_1 + 0x500) == 0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = *(longlong **)(param_1 + 0x4f8);
    }
    uVar4 = (**(code **)(*plVar5 + 0x58))();
    *(undefined1 *)(param_1 + 0x4f0) = uVar4;
  }
  if (*(char *)(param_1 + 0x4f0) == '\x01') {
    if (((*(int *)(param_1 + 0x280) != 0) && (*(longlong **)(param_1 + 0x278) != (longlong *)0x0))
       && (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x30))(), cVar2 != '\0')) {
      if (*(int *)(param_1 + 0x280) == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = *(longlong **)(param_1 + 0x278);
      }
      dVar6 = (double)(**(code **)(*plVar5 + 0x58))();
      *pdVar1 = dVar6;
    }
    dVar6 = *(double *)(param_1 + 0x268);
    FUN_148b47204(param_1 + 0x458);
    if (*(char *)(param_1 + 0x460) == '\0') {
      dVar7 = 1.79769313486232e+308;
    }
    else {
      dVar7 = *(double *)(param_1 + 0x458);
    }
    if (dVar7 < dVar6) {
      if (((*(int *)(param_1 + 0x280) != 0) && (*(longlong **)(param_1 + 0x278) != (longlong *)0x0))
         && (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x30))(), cVar2 != '\0')) {
        if (*(int *)(param_1 + 0x280) == 0) {
          plVar5 = (longlong *)0x0;
        }
        else {
          plVar5 = *(longlong **)(param_1 + 0x278);
        }
        dVar6 = (double)(**(code **)(*plVar5 + 0x58))();
        *pdVar1 = dVar6;
      }
      dVar6 = *(double *)(param_1 + 0x268);
      FUN_148b47204(param_1 + 0x458);
      if (*(char *)(param_1 + 0x460) == '\0') {
        dVar7 = 1.79769313486232e+308;
      }
      else {
        dVar7 = *(double *)(param_1 + 0x458);
      }
      FUN_148b46e10(param_1,(float)(dVar6 - dVar7),1);
      goto LAB_143fac0ad;
    }
  }
  if (((*(int *)(param_1 + 0x518) != 0) && (*(longlong **)(param_1 + 0x510) != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x510) + 0x30))(), cVar2 != '\0')) {
    if (*(int *)(param_1 + 0x518) == 0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = *(longlong **)(param_1 + 0x510);
    }
    uVar4 = (**(code **)(*plVar5 + 0x58))();
    *(undefined1 *)(param_1 + 0x508) = uVar4;
  }
  if (*(char *)(param_1 + 0x508) == '\x01') {
    if (((*(int *)(param_1 + 0x280) != 0) && (*(longlong **)(param_1 + 0x278) != (longlong *)0x0))
       && (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x30))(), cVar2 != '\0')) {
      if (*(int *)(param_1 + 0x280) == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = *(longlong **)(param_1 + 0x278);
      }
      dVar6 = (double)(**(code **)(*plVar5 + 0x58))();
      *pdVar1 = dVar6;
    }
    dVar6 = *(double *)(param_1 + 0x268);
    FUN_148b47204(param_1 + 0x430);
    if (*(char *)(param_1 + 0x438) == '\0') {
      dVar7 = -1.79769313486232e+308;
    }
    else {
      dVar7 = *(double *)(param_1 + 0x430);
    }
    if (dVar6 < dVar7) {
      if (((*(int *)(param_1 + 0x280) != 0) && (*(longlong **)(param_1 + 0x278) != (longlong *)0x0))
         && (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x30))(), cVar2 != '\0')) {
        if (*(int *)(param_1 + 0x280) == 0) {
          plVar5 = (longlong *)0x0;
        }
        else {
          plVar5 = *(longlong **)(param_1 + 0x278);
        }
        dVar6 = (double)(**(code **)(*plVar5 + 0x58))();
        *pdVar1 = dVar6;
      }
      dVar6 = *(double *)(param_1 + 0x268);
      FUN_148b47204(param_1 + 0x430);
      if (*(char *)(param_1 + 0x438) == '\0') {
        dVar7 = -1.79769313486232e+308;
      }
      else {
        dVar7 = *(double *)(param_1 + 0x430);
      }
      FUN_148b4700a(param_1,(float)(dVar6 - dVar7),1);
    }
  }
LAB_143fac0ad:
  if (((param_4 - 1 < 2) && (*(int *)(param_1 + 0x2a0) != 0)) &&
     (plVar5 = *(longlong **)(param_1 + 0x298), plVar5 != (longlong *)0x0)) {
    (**(code **)(*plVar5 + 0x60))(plVar5,dVar9,param_5);
  }
  if ((*(int *)(param_1 + 0x290) != 0) &&
     (plVar5 = *(longlong **)(param_1 + 0x288), plVar5 != (longlong *)0x0)) {
    (**(code **)(*plVar5 + 0x60))(plVar5,dVar9);
  }
  if (((*(int *)(param_1 + 0x280) == 0) || (*(longlong **)(param_1 + 0x278) == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x30))(), cVar2 == '\0')) {
    FUN_148b46d68(pdVar1,&local_68);
  }
  if (((*(int *)(param_1 + 0x280) != 0) && (*(longlong **)(param_1 + 0x278) != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x30))(), cVar2 != '\0')) {
    if (*(int *)(param_1 + 0x280) == 0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = *(longlong **)(param_1 + 0x278);
    }
    dVar6 = (double)(**(code **)(*plVar5 + 0x58))();
    *pdVar1 = dVar6;
  }
  dVar6 = *(double *)(param_1 + 0x268);
  if (((*(double *)(param_1 + 0x5a0) != dVar6) || (NAN(*(double *)(param_1 + 0x5a0)) || NAN(dVar6)))
     || (*(char *)(param_1 + 0x5b8) == '\x01')) {
    if ((*(int *)(param_1 + 0x280) != 0) && (*(longlong **)(param_1 + 0x278) != (longlong *)0x0)) {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x30))();
      if (cVar2 == '\0') {
        dVar6 = *pdVar1;
      }
      else {
        if (*(int *)(param_1 + 0x280) == 0) {
          plVar5 = (longlong *)0x0;
        }
        else {
          plVar5 = *(longlong **)(param_1 + 0x278);
        }
        dVar6 = (double)(**(code **)(*plVar5 + 0x58))();
        *pdVar1 = dVar6;
      }
    }
    *(double *)(param_1 + 0x5a0) = dVar6;
    (**(code **)(**(longlong **)(param_1 + 0x2e8) + 0x28))
              (*(longlong **)(param_1 + 0x2e8),&local_78,param_1 + 0x5a0);
    if ((longlong *)(param_1 + 0x5a8) == &local_78) {
      if (local_78 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x5a8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x5a8) = local_78;
      local_78 = 0;
      *(undefined4 *)(param_1 + 0x5b0) = local_70;
      *(undefined4 *)(param_1 + 0x5b4) = local_6c;
    }
    *(undefined1 *)(param_1 + 0x5b8) = 0;
  }
  cVar2 = FUN_140591fd6(param_1);
  if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 0x5b9) = 0;
    *(undefined4 *)(param_1 + 0x580) = 0xffffffff;
  }
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143fac4f8 FUN_143fac4f8 body=502 status=ok
// SIG undefined FUN_143fac4f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143fac4f8(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 local_54;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uStack_70 = 0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/AdvancedWidgets",0,0,&PTR_FUN_14b55b8a0);
  local_50 = (char *)0x800000014b55b8c8;
  local_54 = 0xf;
  local_48 = FUN_14577453c();
  local_44 = 1;
  FUN_1465988c0(&local_50);
  local_50 = "AdvancedWidgets";
  local_48 = 0xf;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb9b4a8 = (ulonglong)uVar2;
  uStack_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_14282b410(L"/Script/AdvancedWidgets",&PTR_FUN_14b55d490,1,0);
  DAT_14cb9b578 = 0;
  atexit((_func_5014 *)&LAB_143faad9c);
  FUN_148b29578();
  atexit(FUN_143faadb7);
  FUN_1446f470e(&DAT_14cb9b6a0,L"FColorGradingSpinBoxStyle",1);
  DAT_14cb9b6a8 = 0;
  uRam000000014cb9b6b0 = 0;
  atexit((_func_5014 *)&LAB_143faaee2);
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14cb9b6b8);
  if (cVar1 == '\0') {
    _DAT_14cb9b6b8 = 0;
    uRam000000014cb9b6c0 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  FUN_146598efe();
  local_50 = "Field";
  local_48 = 5;
  local_44 = 0;
  FUN_14001a6c0(&local_50,1);
  local_50 = "FieldValue";
  local_48 = 10;
  local_44 = 0;
  FUN_14001a6c0(&local_50,1);
  local_50 = "FieldPostWidget";
  local_48 = 0xf;
  local_44 = 0;
  FUN_14001a6c0(&local_50,1);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fac6f4 FUN_143fac6f4 body=91 status=ok
// SIG undefined FUN_143fac6f4(void)

void FUN_143fac6f4(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *puVar1 = &PTR_FUN_14b561da0;
  return;
}



// FUNCTION 143fac750 FUN_143fac750 body=227 status=ok
// SIG undefined FUN_143fac750(void)

longlong FUN_143fac750(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9bff8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_143fac6f1;
    local_40 = FUN_143fac6f4;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxUIUMG",L"GbxExtensionPointWidgetInterface",&DAT_14cb9bff8,
                  &DAT_143fac6f0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9bff8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fac834 FUN_143fac834 body=47 status=ok
// SIG undefined FUN_143fac834(void)

longlong FUN_143fac834(void)

{
  if (DAT_14cb9c000 == 0) {
    FUN_14073dd9a(&DAT_14cb9c000,&PTR_FUN_14b561d58);
  }
  return DAT_14cb9c000;
}



// FUNCTION 143fac868 FUN_143fac868 body=91 status=ok
// SIG undefined FUN_143fac868(void)

void FUN_143fac868(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *puVar1 = &PTR_FUN_14b562100;
  return;
}



// FUNCTION 143fac8c4 FUN_143fac8c4 body=227 status=ok
// SIG undefined FUN_143fac8c4(void)

longlong FUN_143fac8c4(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9c010 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_143fac865;
    local_40 = FUN_143fac868;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxUIUMG",L"GbxNexusWidgetInterface",&DAT_14cb9c010,&DAT_143fac864);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9c010;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fac9a8 FUN_143fac9a8 body=47 status=ok
// SIG undefined FUN_143fac9a8(void)

longlong FUN_143fac9a8(void)

{
  if (DAT_14cb9c018 == 0) {
    FUN_14073dd9a(&DAT_14cb9c018,&PTR_FUN_14b5620b8);
  }
  return DAT_14cb9c018;
}



// FUNCTION 143fac9d8 FUN_143fac9d8 body=55 status=ok
// SIG undefined FUN_143fac9d8(void)

void FUN_143fac9d8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9c030 == 0) {
    uVar1 = FUN_140f9f06f();
    DAT_14cb9c030 = FUN_140002ddd(FUN_143faca0f,uVar1,L"GbxUIColor");
  }
  return;
}



// FUNCTION 143faca0f FUN_143faca0f body=47 status=ok
// SIG undefined FUN_143faca0f(void)

longlong FUN_143faca0f(void)

{
  if (DAT_14cb9c028 == 0) {
    FUN_14086a14e(&DAT_14cb9c028,&PTR_FUN_14b562598);
  }
  return DAT_14cb9c028;
}



// FUNCTION 143faca3e FUN_143faca3e body=47 status=ok
// SIG undefined FUN_143faca3e(void)

longlong FUN_143faca3e(void)

{
  if (DAT_14cb9c040 == 0) {
    FUN_14086a14e(&DAT_14cb9c040,&PTR_FUN_14b562688);
  }
  return DAT_14cb9c040;
}



// FUNCTION 143faca6e FUN_143faca6e body=48 status=ok
// SIG undefined FUN_143faca6e(void)

void FUN_143faca6e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14b56b750;
  return;
}



// FUNCTION 143faca9e FUN_143faca9e body=55 status=ok
// SIG undefined FUN_143faca9e(void)

void FUN_143faca9e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9c048 == 0) {
    uVar1 = FUN_140f9f06f();
    DAT_14cb9c048 = FUN_140002ddd(FUN_143faca3e,uVar1,L"GbxUIColorGameplayTag");
  }
  return;
}



// FUNCTION 143facad6 FUN_143facad6 body=48 status=ok
// SIG undefined FUN_143facad6(void)

void FUN_143facad6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000008;
  *puVar1 = &PTR_FUN_14b56b8b0;
  return;
}



// FUNCTION 143facb06 FUN_143facb06 body=55 status=ok
// SIG undefined FUN_143facb06(void)

void FUN_143facb06(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9c060 == 0) {
    uVar1 = FUN_140f9f06f();
    DAT_14cb9c060 = FUN_140002ddd(FUN_143facb3d,uVar1,L"GbxUIColorSelect");
  }
  return;
}



// FUNCTION 143facb3d FUN_143facb3d body=47 status=ok
// SIG undefined FUN_143facb3d(void)

longlong FUN_143facb3d(void)

{
  if (DAT_14cb9c058 == 0) {
    FUN_14086a14e(&DAT_14cb9c058,&PTR_FUN_14b562898);
  }
  return DAT_14cb9c058;
}



// FUNCTION 143facb72 FUN_143facb72 body=48 status=ok
// SIG undefined FUN_143facb72(void)

void FUN_143facb72(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000020;
  *puVar1 = &PTR_FUN_14b56ba10;
  return;
}



// FUNCTION 143facba2 FUN_143facba2 body=55 status=ok
// SIG undefined FUN_143facba2(void)

void FUN_143facba2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9c078 == 0) {
    uVar1 = FUN_140f9f06f();
    DAT_14cb9c078 = FUN_140002ddd(FUN_143facbd9,uVar1,L"GbxUIDisplayText");
  }
  return;
}



// FUNCTION 143facbd9 FUN_143facbd9 body=47 status=ok
// SIG undefined FUN_143facbd9(void)

longlong FUN_143facbd9(void)

{
  if (DAT_14cb9c070 == 0) {
    FUN_14086a14e(&DAT_14cb9c070,&PTR_FUN_14b562a30);
  }
  return DAT_14cb9c070;
}



// FUNCTION 143facc0e FUN_143facc0e body=48 status=ok
// SIG undefined FUN_143facc0e(void)

void FUN_143facc0e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14b56bb80;
  return;
}



// FUNCTION 143facc3e FUN_143facc3e body=55 status=ok
// SIG undefined FUN_143facc3e(void)

void FUN_143facc3e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9c090 == 0) {
    uVar1 = FUN_140f9f06f();
    DAT_14cb9c090 = FUN_140002ddd(FUN_143facc75,uVar1,L"GbxUIFontOutlineSettings");
  }
  return;
}



// FUNCTION 143facc75 FUN_143facc75 body=47 status=ok
// SIG undefined FUN_143facc75(void)

longlong FUN_143facc75(void)

{
  if (DAT_14cb9c088 == 0) {
    FUN_14086a14e(&DAT_14cb9c088,&PTR_FUN_14b562bc8);
  }
  return DAT_14cb9c088;
}



// FUNCTION 143facca4 FUN_143facca4 body=48 status=ok
// SIG undefined FUN_143facca4(void)

void FUN_143facca4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14b56bce0;
  return;
}



// FUNCTION 143faccd4 FUN_143faccd4 body=47 status=ok
// SIG undefined FUN_143faccd4(void)

longlong FUN_143faccd4(void)

{
  if (DAT_14cb9c0d0 == 0) {
    FUN_14073dd9a(&DAT_14cb9c0d0,&PTR_LAB_14b563340);
  }
  return DAT_14cb9c0d0;
}



// FUNCTION 143facd03 FUN_143facd03 body=47 status=ok
// SIG undefined FUN_143facd03(void)

longlong FUN_143facd03(void)

{
  if (DAT_14cb9c0a8 == 0) {
    FUN_14000fc22(&DAT_14cb9c0a8,&PTR_FUN_14b562cd0);
  }
  return DAT_14cb9c0a8;
}



// FUNCTION 143facd32 FUN_143facd32 body=961 status=ok
// SIG undefined FUN_143facd32(void)

void FUN_143facd32(undefined8 param_1,longlong param_2,longlong param_3)

{
  byte *pbVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong **pplVar9;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined **local_70;
  undefined1 local_68;
  longlong *local_60 [2];
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
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
  local_38 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*DAT_14c844840 + 8))();
    }
  }
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar2)(plVar3);
          if (cVar6 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&local_38);
            goto LAB_143facf3c;
          }
        }
        pplVar9 = (longlong **)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (pplVar9 != &local_38) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_38,pplVar9,(int)plVar3[6]);
          }
          else {
            memcpy(&local_38,pplVar9,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_80 = (undefined4)plVar3[6];
        local_88 = 0;
        FUN_1400746b0(plVar3,&local_38,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,&local_38,lVar4);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar7;
        puVar7 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar8 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar8,param_2,&local_38);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar8,param_2,&local_38);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_38 = *(longlong **)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar8,param_2,&local_38);
    }
  }
LAB_143facf3c:
  pplVar9 = &local_38;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar9 = *(longlong ***)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143fc276a(&local_70,pplVar9);
  *(undefined1 *)(param_3 + 8) = local_68;
  FUN_140008f88(param_3 + 0x10,local_60);
  if (*(longlong *)(param_3 + 0x20) != local_50) {
    *(undefined8 *)(param_3 + 0x30) = 0;
  }
  *(longlong *)(param_3 + 0x20) = local_50;
  if (*(longlong *)(param_3 + 0x28) != local_48) {
    *(undefined8 *)(param_3 + 0x30) = 0;
  }
  uVar8 = FUN_14477b664();
  uVar8 = FUN_14477b664(uVar8);
  *(undefined8 *)(param_3 + 0x28) = uVar8;
  *(undefined8 *)(param_3 + 0x30) = local_40;
  local_70 = &PTR_FUN_14b56d558;
  if (local_60[0] != (longlong *)0x0) {
    (**(code **)(*local_60[0] + 0x10))();
  }
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fad0f4 FUN_143fad0f4 body=47 status=ok
// SIG undefined FUN_143fad0f4(void)

longlong FUN_143fad0f4(void)

{
  if (DAT_14cb9c0b0 == 0) {
    FUN_14000fc22(&DAT_14cb9c0b0,&PTR_FUN_14b562e80);
  }
  return DAT_14cb9c0b0;
}



// FUNCTION 143fad124 FUN_143fad124 body=1329 status=ok
// SIG undefined FUN_143fad124(void)

void FUN_143fad124(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  byte *pbVar2;
  undefined8 uVar3;
  code *pcVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined7 *puVar13;
  undefined7 *puVar14;
  char *_Src;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  code *local_90;
  char local_81;
  undefined7 uStack_80;
  undefined1 uStack_79;
  undefined8 local_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uStack_80 = 0x14b56be40;
  uStack_79 = 0;
  local_78 = 0;
  local_70 = &DAT_3f8000003f800000;
  puStack_68 = &DAT_3f8000003f800000;
  local_60 = &DAT_3f8000003f800000;
  puStack_58 = &DAT_3f8000003f800000;
  local_50 = &DAT_3f8000003f800000;
  puStack_48 = &DAT_3f8000003f800000;
  local_40 = &DAT_3f8000003f800000;
  puStack_38 = &DAT_3f8000003f800000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar5[3];
    if ((*(byte *)((longlong)plVar5 + 0x39) & 1) == 0) {
      lVar12 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar5 + 0x44) + lVar12;
      *(longlong *)(param_2 + 0x40) = lVar12;
      pcVar4 = *(code **)(*plVar5 + 0x120);
      if (pcVar4 == FUN_144afffdc) {
        pcVar4 = *(code **)(*plVar5 + 0x88);
        if (pcVar4 != (code *)&LAB_1447713a0) {
          cVar10 = (*pcVar4)(plVar5);
          if (cVar10 != '\0') {
            (**(code **)(*plVar5 + 0xa0))(plVar5,lVar12,&uStack_80);
            goto LAB_143fad30e;
          }
        }
        puVar14 = (undefined7 *)(lVar12 + *(int *)((longlong)plVar5 + 0x44));
        if (puVar14 != &uStack_80) {
          if ((*(byte *)((longlong)plVar5 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar5 + 0x100))(plVar5,&uStack_80,puVar14,(int)plVar5[6]);
          }
          else {
            memcpy(&uStack_80,puVar14,
                   (longlong)(int)plVar5[6] * (longlong)*(int *)((longlong)plVar5 + 0x34));
          }
        }
      }
      else if (pcVar4 == FUN_14007468e) {
        local_a0 = CONCAT44(local_a0._4_4_,(int)plVar5[6]);
        local_a8 = local_a8 & 0xffffffff00000000;
        FUN_1400746b0(plVar5,&uStack_80,lVar12,1);
      }
      else {
        (*pcVar4)(plVar5,&uStack_80,lVar12);
      }
    }
    else {
      puVar11 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar11;
        puVar11 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar5);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&uStack_80);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&uStack_80);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      uVar3 = *(undefined8 *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
      uStack_80 = (undefined7)uVar3;
      uStack_79 = (undefined1)((ulonglong)uVar3 >> 0x38);
    }
    else {
      (*pcVar4)(uVar3,param_2,&uStack_80);
    }
  }
LAB_143fad30e:
  puVar14 = *(undefined7 **)(param_2 + 0x38);
  local_81 = '\0';
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_98 = FUN_1446ddbd2();
      local_90 = FUN_140a4831c;
      local_a8 = 0x1000000008001;
      local_a0 = 0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
  }
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar5[3];
    if ((*(byte *)((longlong)plVar5 + 0x39) & 1) == 0) {
      lVar12 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar5 + 0x44) + lVar12;
      *(longlong *)(param_2 + 0x40) = lVar12;
      pcVar4 = *(code **)(*plVar5 + 0x120);
      if (pcVar4 == FUN_144afffdc) {
        pcVar4 = *(code **)(*plVar5 + 0x88);
        if (pcVar4 != (code *)&LAB_1447713a0) {
          cVar10 = (*pcVar4)(plVar5);
          if (cVar10 != '\0') {
            (**(code **)(*plVar5 + 0xa0))(plVar5,lVar12,&local_81);
            goto LAB_143fad4c1;
          }
        }
        _Src = (char *)(lVar12 + *(int *)((longlong)plVar5 + 0x44));
        if (_Src != &local_81) {
          if ((*(byte *)((longlong)plVar5 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar5 + 0x100))(plVar5,&local_81,_Src,(int)plVar5[6]);
          }
          else {
            memcpy(&local_81,_Src,
                   (longlong)(int)plVar5[6] * (longlong)*(int *)((longlong)plVar5 + 0x34));
          }
        }
      }
      else if (pcVar4 == FUN_14007468e) {
        local_a0 = CONCAT44(local_a0._4_4_,(int)plVar5[6]);
        local_a8 = local_a8 & 0xffffffff00000000;
        FUN_1400746b0(plVar5,&local_81,lVar12,1);
      }
      else {
        (*pcVar4)(plVar5,&local_81,lVar12);
      }
    }
    else {
      puVar11 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar11;
        puVar11 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar5);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_81);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_81);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      uVar3 = *(undefined8 *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
      local_81 = (char)uVar3;
      uStack_80 = (undefined7)((ulonglong)uVar3 >> 8);
    }
    else {
      (*pcVar4)(uVar3,param_2,&local_81);
    }
  }
LAB_143fad4c1:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar12 = 0x10;
  if ((byte)(local_81 - 1U) < 3) {
    lVar12 = *(longlong *)(&DAT_14b56e168 + (ulonglong)(byte)(local_81 - 1U) * 8);
  }
  puVar13 = &uStack_80;
  if (puVar14 != (undefined7 *)0x0) {
    puVar13 = puVar14;
  }
  puVar1 = (undefined4 *)((longlong)puVar13 + lVar12);
  uVar7 = puVar1[1];
  uVar8 = puVar1[2];
  uVar9 = puVar1[3];
  *param_3 = *puVar1;
  param_3[1] = uVar7;
  param_3[2] = uVar8;
  param_3[3] = uVar9;
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fad656 FUN_143fad656 body=47 status=ok
// SIG undefined FUN_143fad656(void)

longlong FUN_143fad656(void)

{
  if (DAT_14cb9c0b8 == 0) {
    FUN_14000fc22(&DAT_14cb9c0b8,&PTR_FUN_14b562f60);
  }
  return DAT_14cb9c0b8;
}



// FUNCTION 143fad686 FUN_143fad686 body=803 status=ok
// SIG undefined FUN_143fad686(void)

void FUN_143fad686(undefined8 param_1,longlong param_2,longlong *param_3)

{
  byte *pbVar1;
  code *pcVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_1468d96f0;
      local_60 = 0;
      local_68 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar7 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar7;
      *(longlong *)(param_2 + 0x40) = lVar7;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar2)(plVar3);
          if (cVar5 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar7,&local_30);
            goto LAB_143fad858;
          }
        }
        puVar8 = (undefined8 *)(lVar7 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar8 != &local_30) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_30,puVar8,(int)plVar3[6]);
          }
          else {
            memcpy(&local_30,puVar8,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar3[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar3,&local_30,lVar7,1);
      }
      else {
        (*pcVar2)(plVar3,&local_30,lVar7);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar8;
        puVar8 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar6,param_2,&local_30);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar6,param_2,&local_30);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_30 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar6,param_2,&local_30);
    }
  }
LAB_143fad858:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143fc2672(&local_48,local_30);
  if (*param_3 != local_48) {
    param_3[2] = 0;
  }
  *param_3 = local_48;
  if (param_3[1] != local_40) {
    param_3[2] = 0;
  }
  uVar6 = FUN_14477b664();
  lVar7 = FUN_14477b664(uVar6);
  param_3[1] = lVar7;
  param_3[2] = local_38;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fad9af FUN_143fad9af body=47 status=ok
// SIG undefined FUN_143fad9af(void)

longlong FUN_143fad9af(void)

{
  if (DAT_14cb9c0c0 == 0) {
    FUN_14000fc22(&DAT_14cb9c0c0,&PTR_FUN_14b563228);
  }
  return DAT_14cb9c0c0;
}



// FUNCTION 143fad9de FUN_143fad9de body=4950 status=ok
// SIG undefined FUN_143fad9de(void)

void FUN_143fad9de(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  void *_Src;
  int iVar5;
  char cVar6;
  byte *pbVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined4 *_Src_00;
  int *_Src_01;
  void **_Src_02;
  undefined1 auStack_118 [32];
  ulonglong local_f8;
  undefined4 *local_f0;
  undefined8 local_e8;
  void **local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  void *local_c0;
  int local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  void *local_98;
  ulonglong uStack_90;
  int local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_e8 = FUN_1446ddbd2();
      local_e0 = (void **)FUN_1468d96f0;
      local_f0 = (undefined4 *)0x0;
      local_f8 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar7 = *(byte **)(param_2 + 0x20);
  if (pbVar7 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar8 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar8;
      *(longlong *)(param_2 + 0x40) = lVar8;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar2)(plVar3);
          if (cVar6 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar8,&local_40);
            goto LAB_143fadbd8;
          }
        }
        puVar9 = (undefined8 *)(lVar8 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar9 != &local_40) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_40,puVar9,(int)plVar3[6]);
          }
          else {
            memcpy(&local_40,puVar9,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_f0 = (undefined4 *)CONCAT44(local_f0._4_4_,(int)plVar3[6]);
        local_f8 = local_f8 & 0xffffffff00000000;
        FUN_1400746b0(plVar3,&local_40,lVar8,1);
      }
      else {
        (*pcVar2)(plVar3,&local_40,lVar8);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar10 = (undefined8 *)*puVar9;
        puVar9 = puVar10 + 2;
      } while ((longlong *)*puVar10 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar10[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_40);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_40);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_40 = *(undefined8 *)(pbVar7 + 1);
      *(byte **)(param_2 + 0x20) = pbVar7 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_40);
    }
  }
LAB_143fadbd8:
  local_48 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_e8 = FUN_1446ddbd2();
      local_e0 = (void **)FUN_1403a682c;
      local_f0 = (undefined4 *)0x0;
      local_f8 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar7 = *(byte **)(param_2 + 0x20);
  if (pbVar7 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar8 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar8;
      *(longlong *)(param_2 + 0x40) = lVar8;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar2)(plVar3);
          if (cVar6 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar8,&local_48);
            goto LAB_143fadd81;
          }
        }
        puVar9 = (undefined8 *)(lVar8 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar9 != &local_48) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_48,puVar9,(int)plVar3[6]);
          }
          else {
            memcpy(&local_48,puVar9,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_f0 = (undefined4 *)CONCAT44(local_f0._4_4_,(int)plVar3[6]);
        local_f8 = local_f8 & 0xffffffff00000000;
        FUN_1400746b0(plVar3,&local_48,lVar8,1);
      }
      else {
        (*pcVar2)(plVar3,&local_48,lVar8);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar10 = (undefined8 *)*puVar9;
        puVar9 = puVar10 + 2;
      } while ((longlong *)*puVar10 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar10[1];
    }
LAB_143fadd81:
    pbVar7 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_48);
      goto LAB_143fadd81;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_48);
      goto LAB_143fadd81;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_48);
      goto LAB_143fadd81;
    }
    local_48 = *(undefined8 *)(pbVar7 + 1);
    pbVar7 = pbVar7 + 9;
    *(byte **)(param_2 + 0x20) = pbVar7;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar7 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar8 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar8;
      *(longlong *)(param_2 + 0x40) = lVar8;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar2)(plVar3);
          if (cVar6 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar8,&local_68);
            goto LAB_143fadf60;
          }
        }
        puVar9 = (undefined8 *)(lVar8 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar9 != &local_68) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_68,puVar9,(int)plVar3[6]);
          }
          else {
            memcpy(&local_68,puVar9,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_f0 = (undefined4 *)CONCAT44(local_f0._4_4_,(int)plVar3[6]);
        local_f8 = local_f8 & 0xffffffff00000000;
        FUN_1400746b0(plVar3,&local_68,lVar8,1);
      }
      else {
        (*pcVar2)(plVar3,&local_68,lVar8);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar10 = (undefined8 *)*puVar9;
        puVar9 = puVar10 + 2;
      } while ((longlong *)*puVar10 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar10[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_68);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_68);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_68 = *(undefined8 *)(pbVar7 + 1);
      *(byte **)(param_2 + 0x20) = pbVar7 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_68);
    }
  }
LAB_143fadf60:
  puVar9 = &local_68;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar9 = *(undefined8 **)(param_2 + 0x38);
  }
  local_70 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_e8 = FUN_1446ddbd2();
      local_e0 = (void **)FUN_1468d96f0;
      local_f0 = (undefined4 *)0x0;
      local_f8 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar7 = *(byte **)(param_2 + 0x20);
  if (pbVar7 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar8 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar8;
      *(longlong *)(param_2 + 0x40) = lVar8;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar2)(plVar3);
          if (cVar6 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar8,&local_70);
            goto LAB_143fae148;
          }
        }
        puVar10 = (undefined8 *)(lVar8 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar10 != &local_70) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_70,puVar10,(int)plVar3[6]);
          }
          else {
            memcpy(&local_70,puVar10,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_f0 = (undefined4 *)CONCAT44(local_f0._4_4_,(int)plVar3[6]);
        local_f8 = local_f8 & 0xffffffff00000000;
        FUN_1400746b0(plVar3,&local_70,lVar8,1);
      }
      else {
        (*pcVar2)(plVar3,&local_70,lVar8);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar10;
        puVar10 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_70);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_70);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_70 = *(undefined8 *)(pbVar7 + 1);
      *(byte **)(param_2 + 0x20) = pbVar7 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_70);
    }
  }
LAB_143fae148:
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_e8 = FUN_1446ddbd2();
      local_e0 = (void **)FUN_1403a682c;
      local_f0 = (undefined4 *)0x0;
      local_f8 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar7 = *(byte **)(param_2 + 0x20);
  if (pbVar7 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar8 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar8;
      *(longlong *)(param_2 + 0x40) = lVar8;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar2)(plVar3);
          if (cVar6 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar8,&uStack_80);
            goto LAB_143fae312;
          }
        }
        _Src_00 = (undefined4 *)(lVar8 + *(int *)((longlong)plVar3 + 0x44));
        if (_Src_00 != &uStack_80) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&uStack_80,_Src_00,(int)plVar3[6]);
          }
          else {
            memcpy(&uStack_80,_Src_00,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_f0 = (undefined4 *)CONCAT44(local_f0._4_4_,(int)plVar3[6]);
        local_f8 = local_f8 & 0xffffffff00000000;
        FUN_1400746b0(plVar3,&uStack_80,lVar8,1);
      }
      else {
        (*pcVar2)(plVar3,&uStack_80,lVar8);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar10;
        puVar10 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&uStack_80);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&uStack_80);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar1 = *(undefined8 *)(pbVar7 + 1);
      *(byte **)(param_2 + 0x20) = pbVar7 + 9;
      uStack_80 = (undefined4)uVar1;
      uStack_7c = (undefined4)((ulonglong)uVar1 >> 0x20);
    }
    else {
      (*pcVar2)(uVar1,param_2,&uStack_80);
    }
  }
LAB_143fae312:
  local_84 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_e8 = FUN_1446ddbd2();
      local_e0 = (void **)FUN_14067a048;
      local_f0 = (undefined4 *)0x0;
      local_f8 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar7 = *(byte **)(param_2 + 0x20);
  if (pbVar7 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar8 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar8;
      *(longlong *)(param_2 + 0x40) = lVar8;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar2)(plVar3);
          if (cVar6 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar8,&local_84);
            goto LAB_143fae4e7;
          }
        }
        _Src_01 = (int *)(lVar8 + *(int *)((longlong)plVar3 + 0x44));
        if (_Src_01 != &local_84) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_84,_Src_01,(int)plVar3[6]);
          }
          else {
            memcpy(&local_84,_Src_01,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_f0 = (undefined4 *)CONCAT44(local_f0._4_4_,(int)plVar3[6]);
        local_f8 = local_f8 & 0xffffffff00000000;
        FUN_1400746b0(plVar3,&local_84,lVar8,1);
      }
      else {
        (*pcVar2)(plVar3,&local_84,lVar8);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar10;
        puVar10 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_84);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_84);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar1 = *(undefined8 *)(pbVar7 + 1);
      *(byte **)(param_2 + 0x20) = pbVar7 + 9;
      local_84 = (int)uVar1;
      uStack_80 = (undefined4)((ulonglong)uVar1 >> 0x20);
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_84);
    }
  }
LAB_143fae4e7:
  iVar5 = local_84;
  local_98 = (void *)0x0;
  uStack_90 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c963e88) {
    FUN_144b3d300(&DAT_14c963e88);
    if (DAT_14c963e88 == -1) {
      local_e8 = FUN_1446ddbd2();
      local_e0 = (void **)FUN_140dafe7a;
      local_f0 = (undefined4 *)0x0;
      local_f8 = 0xc001;
      FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
      atexit(FUN_142829758);
      _Init_thread_footer(&DAT_14c963e88);
    }
  }
  pbVar7 = *(byte **)(param_2 + 0x20);
  if (pbVar7 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar8 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar8;
      *(longlong *)(param_2 + 0x40) = lVar8;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar2)(plVar3);
          if (cVar6 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar8,&local_98);
            goto LAB_143fae6c3;
          }
        }
        _Src_02 = (void **)(lVar8 + *(int *)((longlong)plVar3 + 0x44));
        if (_Src_02 != &local_98) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_98,_Src_02,(int)plVar3[6]);
          }
          else {
            memcpy(&local_98,_Src_02,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_f0 = (undefined4 *)CONCAT44(local_f0._4_4_,(int)plVar3[6]);
        local_f8 = local_f8 & 0xffffffff00000000;
        FUN_1400746b0(plVar3,&local_98,lVar8,1);
      }
      else {
        (*pcVar2)(plVar3,&local_98,lVar8);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar10;
        puVar10 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_98);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_98);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_98 = *(void **)(pbVar7 + 1);
      *(byte **)(param_2 + 0x20) = pbVar7 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_98);
    }
  }
LAB_143fae6c3:
  _Src = local_98;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_c0 = (void *)0x0;
  lVar8 = (longlong)(int)uStack_90;
  local_b8 = (int)uStack_90;
  if (lVar8 == 0) {
    local_b4 = 0;
  }
  else {
    FUN_1446dd670(&local_c0,uStack_90 & 0xffffffff,0);
    memcpy(local_c0,_Src,lVar8 * 2);
  }
  local_f0 = &local_d8;
  local_d8 = uStack_80;
  uStack_d4 = uStack_7c;
  uStack_d0 = uStack_78;
  uStack_cc = uStack_74;
  local_e0 = &local_c0;
  local_e8 = CONCAT71(local_e8._1_7_,iVar5 != 0);
  local_f8 = local_70;
  FUN_143fc208a(&local_b0,local_40,local_48,puVar9);
  *param_3 = local_b0;
  param_3[1] = local_a8;
  param_3[2] = local_a0;
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143faed36 FUN_143faed36 body=34 status=ok
// SIG undefined FUN_143faed36(void)

void FUN_143faed36(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143faed5e();
  FUN_14069c8d6(uVar1,&PTR_s_Conv_TextToUIDisplayText_14b563270,4);
  return;
}



// FUNCTION 143faed5e FUN_143faed5e body=227 status=ok
// SIG undefined FUN_143faed5e(void)

longlong FUN_143faed5e(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9c0c8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140cf07f0;
    local_38 = &LAB_143faee42;
    local_40 = FUN_143faee45;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxUIUMG",L"GbxUIFunctionLibrary",&DAT_14cb9c0c8,FUN_143faed36);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9c0c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143faee45 FUN_143faee45 body=35 status=ok
// SIG undefined FUN_143faee45(void)

void FUN_143faee45(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b563380;
  return;
}



// FUNCTION 143faee68 FUN_143faee68 body=55 status=ok
// SIG undefined FUN_143faee68(void)

void FUN_143faee68(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9c0e8 == 0) {
    uVar1 = FUN_140f9f06f();
    DAT_14cb9c0e8 = FUN_140002ddd(FUN_143faee9f,uVar1,L"GbxUINullableInt");
  }
  return;
}



// FUNCTION 143faee9f FUN_143faee9f body=47 status=ok
// SIG undefined FUN_143faee9f(void)

longlong FUN_143faee9f(void)

{
  if (DAT_14cb9c0e0 == 0) {
    FUN_14086a14e(&DAT_14cb9c0e0,&PTR_FUN_14b563718);
  }
  return DAT_14cb9c0e0;
}



// FUNCTION 143faeed2 FUN_143faeed2 body=48 status=ok
// SIG undefined FUN_143faeed2(void)

void FUN_143faeed2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000008;
  *puVar1 = &PTR_FUN_14b56be60;
  return;
}



// FUNCTION 143faef02 FUN_143faef02 body=55 status=ok
// SIG undefined FUN_143faef02(void)

void FUN_143faef02(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9c100 == 0) {
    uVar1 = FUN_140f9f06f();
    DAT_14cb9c100 = FUN_140002ddd(FUN_143faef39,uVar1,L"GbxUIObjectKey");
  }
  return;
}



// FUNCTION 143faef39 FUN_143faef39 body=47 status=ok
// SIG undefined FUN_143faef39(void)

longlong FUN_143faef39(void)

{
  if (DAT_14cb9c0f8 == 0) {
    FUN_14086a14e(&DAT_14cb9c0f8,&PTR_FUN_14b5637a8);
  }
  return DAT_14cb9c0f8;
}



// FUNCTION 143faef68 FUN_143faef68 body=48 status=ok
// SIG undefined FUN_143faef68(void)

void FUN_143faef68(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000004;
  *puVar1 = &PTR_FUN_14b56bfc0;
  return;
}



// FUNCTION 143faef98 FUN_143faef98 body=55 status=ok
// SIG undefined FUN_143faef98(void)

void FUN_143faef98(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9c118 == 0) {
    uVar1 = FUN_140f9f06f();
    DAT_14cb9c118 = FUN_140002ddd(FUN_143faefcf,uVar1,L"GbxUITextStylePtr");
  }
  return;
}



// FUNCTION 143faefcf FUN_143faefcf body=47 status=ok
// SIG undefined FUN_143faefcf(void)

longlong FUN_143faefcf(void)

{
  if (DAT_14cb9c110 == 0) {
    FUN_14086a14e(&DAT_14cb9c110,&PTR_FUN_14b563890);
  }
  return DAT_14cb9c110;
}



// FUNCTION 143faeffe FUN_143faeffe body=48 status=ok
// SIG undefined FUN_143faeffe(void)

void FUN_143faeffe(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14b56c130;
  return;
}



// FUNCTION 143faf02e FUN_143faf02e body=55 status=ok
// SIG undefined FUN_143faf02e(void)

void FUN_143faf02e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9c180 == 0) {
    uVar1 = FUN_140f9f06f();
    DAT_14cb9c180 = FUN_14171c317(FUN_14659949e,uVar1,L"EUMGWidgetInputMode");
  }
  return;
}



// FUNCTION 143faf06a FUN_143faf06a body=46 status=ok
// SIG undefined FUN_143faf06a(void)

void FUN_143faf06a(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_141254392(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b567240;
  puVar1[5] = &PTR_FUN_14b567560;
  return;
}



// FUNCTION 143faf098 FUN_143faf098 body=227 status=ok
// SIG undefined FUN_143faf098(void)

longlong FUN_143faf098(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9c2c8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459e4ee6;
    local_38 = &LAB_143faf067;
    local_40 = FUN_143faf06a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0x580;
    FUN_14081cfa3(L"/Script/GbxUIUMG",L"GbxUIUMGButton",&DAT_14cb9c2c8,&DAT_143faf066);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9c2c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143faf17c FUN_143faf17c body=47 status=ok
// SIG undefined FUN_143faf17c(void)

longlong FUN_143faf17c(void)

{
  if (DAT_14cb9c2d0 == 0) {
    FUN_14073dd9a(&DAT_14cb9c2d0,&PTR_FUN_14b5671f8);
  }
  return DAT_14cb9c2d0;
}



// FUNCTION 143faf1ac FUN_143faf1ac body=55 status=ok
// SIG undefined FUN_143faf1ac(void)

void FUN_143faf1ac(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9c400 == 0) {
    uVar1 = FUN_140f9f06f();
    DAT_14cb9c400 = FUN_140002ddd(FUN_143faf1e3,uVar1,L"GbxUIColorPaletteSettings");
  }
  return;
}



// FUNCTION 143faf1e3 FUN_143faf1e3 body=47 status=ok
// SIG undefined FUN_143faf1e3(void)

longlong FUN_143faf1e3(void)

{
  if (DAT_14cb9c3f8 == 0) {
    FUN_14086a14e(&DAT_14cb9c3f8,&PTR_FUN_14b56a728);
  }
  return DAT_14cb9c3f8;
}



// FUNCTION 143faf212 FUN_143faf212 body=48 status=ok
// SIG undefined FUN_143faf212(void)

void FUN_143faf212(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14b56c5f0;
  return;
}



// FUNCTION 143faf24a FUN_143faf24a body=38 status=ok
// SIG undefined FUN_143faf24a(void)

undefined8 FUN_143faf24a(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143faf270 FUN_143faf270 body=38 status=ok
// SIG undefined FUN_143faf270(void)

undefined8 FUN_143faf270(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143faf296 FUN_143faf296 body=38 status=ok
// SIG undefined FUN_143faf296(void)

undefined8 FUN_143faf296(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143faf2bc FUN_143faf2bc body=48 status=ok
// SIG undefined FUN_143faf2bc(void)

longlong FUN_143faf2bc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x168;
  FUN_141471a12(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143faf2f4 FUN_143faf2f4 body=48 status=ok
// SIG undefined FUN_143faf2f4(void)

longlong FUN_143faf2f4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x430;
  FUN_141471a12(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143faf32c FUN_143faf32c body=48 status=ok
// SIG undefined FUN_143faf32c(void)

longlong FUN_143faf32c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x470;
  FUN_141471a12(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143faf364 FUN_143faf364 body=93 status=ok
// SIG undefined FUN_143faf364(void)

undefined8 * FUN_143faf364(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b566d10;
  param_1[5] = &PTR_LAB_14b567040;
  param_1[0x49] = &PTR_LAB_14b567080;
  if (param_1[0x4f] != 0) {
    FUN_1400020a8();
  }
  FUN_14597723a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143faf3d8 FUN_143faf3d8 body=48 status=ok
// SIG undefined FUN_143faf3d8(void)

longlong FUN_143faf3d8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x168;
  FUN_1414c321a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143faf408 FUN_143faf408 body=48 status=ok
// SIG undefined FUN_143faf408(void)

longlong FUN_143faf408(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x13b0;
  FUN_1414c321a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143faf438 FUN_143faf438 body=38 status=ok
// SIG undefined FUN_143faf438(void)

undefined8 FUN_143faf438(undefined8 param_1,int param_2)

{
  FUN_140f8610c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143faf45e FUN_143faf45e body=45 status=ok
// SIG undefined FUN_143faf45e(void)

longlong FUN_143faf45e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140f8610c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143faf4a4 FUN_143faf4a4 body=48 status=ok
// SIG undefined FUN_143faf4a4(void)

longlong FUN_143faf4a4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x168;
  FUN_145e35a76(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143faf51a FUN_143faf51a body=29 status=ok
// SIG undefined FUN_143faf51a(void)

undefined8 FUN_143faf51a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143faf5be FUN_143faf5be body=42 status=ok
// SIG undefined FUN_143faf5be(void)

undefined8 FUN_143faf5be(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 8;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 143faf610 FUN_143faf610 body=59 status=ok
// SIG undefined FUN_143faf610(void)

undefined8 FUN_143faf610(longlong *param_1)

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



// FUNCTION 143faf6b2 FUN_143faf6b2 body=29 status=ok
// SIG undefined FUN_143faf6b2(void)

undefined8 FUN_143faf6b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143faf750 FUN_143faf750 body=109 status=ok
// SIG undefined FUN_143faf750(void)

int FUN_143faf750(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  uVar1 = *param_2;
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar3 = (uint)uVar1 & 0xffff;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return ((uint)uVar1 << 0x10 | uVar3) + (int)((ulonglong)uVar1 >> 0x20) +
           (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar3 >> 4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143faf824 FUN_143faf824 body=29 status=ok
// SIG undefined FUN_143faf824(void)

undefined8 FUN_143faf824(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143faf8c2 FUN_143faf8c2 body=31 status=ok
// SIG undefined FUN_143faf8c2(void)

undefined1
FUN_143faf8c2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_143faf9d0(param_2,param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 143faf8fe FUN_143faf8fe body=109 status=ok
// SIG undefined FUN_143faf8fe(void)

int FUN_143faf8fe(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  uVar1 = *param_2;
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar3 = (uint)uVar1 & 0xffff;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return ((uint)uVar1 << 0x10 | uVar3) + (int)((ulonglong)uVar1 >> 0x20) +
           (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar3 >> 4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143faf9d0 FUN_143faf9d0 body=133 status=ok
// SIG undefined FUN_143faf9d0(void)

bool FUN_143faf9d0(longlong *param_1,longlong *param_2)

{
  if ((*(byte *)((longlong)param_1 + 0x1c) == 0) && ((*(byte *)((longlong)param_2 + 0x1c) & 1) == 0)
     ) {
    return *param_1 == *param_2;
  }
  if ((((*(byte *)((longlong)param_1 + 0x1c) == *(byte *)((longlong)param_2 + 0x1c)) &&
       (ABS(*(float *)((longlong)param_1 + 0xc) - *(float *)((longlong)param_2 + 0xc)) < 0.0001)) &&
      (ABS(*(float *)(param_1 + 2) - *(float *)(param_2 + 2)) < 0.0001)) &&
     (ABS(*(float *)((longlong)param_1 + 0x14) - *(float *)((longlong)param_2 + 0x14)) < 0.0001)) {
    return ABS(*(float *)(param_1 + 3) - *(float *)(param_2 + 3)) < 0.0001;
  }
  return false;
}



// FUNCTION 143fafa56 FUN_143fafa56 body=29 status=ok
// SIG undefined FUN_143fafa56(void)

undefined8 FUN_143fafa56(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fafa82 FUN_143fafa82 body=274 status=ok
// SIG undefined FUN_143fafa82(void)

void FUN_143fafa82(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  *param_2 = &PTR_FUN_14b56d558;
  *(undefined1 *)(param_2 + 1) = 1;
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
  param_2[2] = DAT_14c844840;
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
  *(undefined4 *)(param_2 + 3) = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  return;
}



// FUNCTION 143fafb94 FUN_143fafb94 body=259 status=ok
// SIG undefined FUN_143fafb94(void)

void FUN_143fafb94(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  *param_2 = &PTR_FUN_14b56d558;
  *(undefined1 *)(param_2 + 1) = 1;
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
  param_2[2] = DAT_14c844840;
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
  *(undefined4 *)(param_2 + 3) = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  return;
}



// FUNCTION 143fafcbc FUN_143fafcbc body=120 status=ok
// SIG undefined FUN_143fafcbc(void)

undefined8 FUN_143fafcbc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      *(undefined1 *)(param_2 + -0x18) = *(undefined1 *)(param_3 + -0x18);
      plVar1 = *(longlong **)(param_3 + -0x10);
      plVar2 = *(longlong **)(param_2 + -0x10);
      if (plVar2 != plVar1) {
        *(longlong **)(param_2 + -0x10) = plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      FUN_1489fc572(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 143fafd5c FUN_143fafd5c body=59 status=ok
// SIG undefined FUN_143fafd5c(void)

undefined8 FUN_143fafd5c(longlong *param_1)

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



// FUNCTION 143fafda2 FUN_143fafda2 body=49 status=ok
// SIG undefined FUN_143fafda2(void)

void FUN_143fafda2(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 7) == '\x01') {
    *param_2 = &PTR_FUN_14b56d558;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_2[2] + 0x10))();
    }
    *(undefined1 *)(param_2 + 7) = 0;
  }
  return;
}



// FUNCTION 143fafe22 FUN_143fafe22 body=58 status=ok
// SIG undefined FUN_143fafe22(void)

undefined8 * FUN_143fafe22(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b56d558;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fafe5c FUN_143fafe5c body=55 status=ok
// SIG undefined FUN_143fafe5c(void)

void FUN_143fafe5c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9c078 == 0) {
    uVar1 = FUN_140f9f06f();
    DAT_14cb9c078 = FUN_140002ddd(FUN_143facbd9,uVar1,L"GbxUIDisplayText");
  }
  return;
}



// FUNCTION 143fafe94 FUN_143fafe94 body=29 status=ok
// SIG undefined FUN_143fafe94(void)

undefined8 FUN_143fafe94(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143faff30 FUN_143faff30 body=179 status=ok
// SIG undefined FUN_143faff30(void)

undefined8 FUN_143faff30(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  int iVar1;
  void *_Src;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int *piVar7;
  
  if (param_4 != 0) {
    piVar7 = (int *)(param_3 + 0x48);
    puVar6 = (undefined8 *)(param_2 + 0x40);
    do {
      *(int *)(puVar6 + -4) = piVar7[-10];
      uVar4 = *(undefined8 *)(piVar7 + -0x12);
      uVar5 = *(undefined8 *)(piVar7 + -0x10);
      iVar1 = piVar7[-0xd];
      iVar2 = piVar7[-0xc];
      iVar3 = piVar7[-0xb];
      *(int *)(puVar6 + -6) = piVar7[-0xe];
      *(int *)((longlong)puVar6 + -0x2c) = iVar1;
      *(int *)(puVar6 + -5) = iVar2;
      *(int *)((longlong)puVar6 + -0x24) = iVar3;
      puVar6[-8] = uVar4;
      puVar6[-7] = uVar5;
      puVar6[-3] = *(undefined8 *)(piVar7 + -8);
      iVar1 = piVar7[-5];
      iVar2 = piVar7[-4];
      iVar3 = piVar7[-3];
      *(int *)(puVar6 + -2) = piVar7[-6];
      *(int *)((longlong)puVar6 + -0xc) = iVar1;
      *(int *)(puVar6 + -1) = iVar2;
      *(int *)((longlong)puVar6 + -4) = iVar3;
      if ((int *)(puVar6 + -8) != piVar7 + -0x12) {
        iVar1 = *piVar7;
        _Src = *(void **)(piVar7 + -2);
        *(int *)(puVar6 + 1) = iVar1;
        if (iVar1 == 0 && *(int *)((longlong)puVar6 + 0xc) == 0) {
          *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar6,iVar1);
          if (iVar1 != 0) {
            memcpy((void *)*puVar6,_Src,(longlong)iVar1 * 2);
          }
        }
      }
      piVar7 = piVar7 + 0x14;
      puVar6 = puVar6 + 10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 143fb000c FUN_143fb000c body=59 status=ok
// SIG undefined FUN_143fb000c(void)

undefined8 FUN_143fb000c(longlong *param_1)

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



// FUNCTION 143fb0052 FUN_143fb0052 body=38 status=ok
// SIG undefined FUN_143fb0052(void)

void FUN_143fb0052(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 143fb00c8 FUN_143fb00c8 body=29 status=ok
// SIG undefined FUN_143fb00c8(void)

undefined8 FUN_143fb00c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fb00e6 FUN_143fb00e6 body=29 status=ok
// SIG undefined FUN_143fb00e6(void)

undefined8 FUN_143fb00e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fb0182 FUN_143fb0182 body=59 status=ok
// SIG undefined FUN_143fb0182(void)

undefined8 FUN_143fb0182(longlong *param_1)

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



// FUNCTION 143fb0224 FUN_143fb0224 body=29 status=ok
// SIG undefined FUN_143fb0224(void)

undefined8 FUN_143fb0224(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fb02bc FUN_143fb02bc body=64 status=ok
// SIG undefined FUN_143fb02bc(void)

undefined4 FUN_143fb02bc(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return *param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fb0364 FUN_143fb0364 body=29 status=ok
// SIG undefined FUN_143fb0364(void)

undefined8 FUN_143fb0364(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fb03c8 FUN_143fb03c8 body=118 status=ok
// SIG undefined FUN_143fb03c8(void)

undefined8 FUN_143fb03c8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(param_3 + lVar3);
      if (*(longlong *)(param_2 + lVar3) != lVar1) {
        *(undefined8 *)(param_2 + 0x10 + lVar3) = 0;
      }
      *(longlong *)(param_2 + lVar3) = lVar1;
      if (*(longlong *)(param_2 + 8 + lVar3) != *(longlong *)(param_3 + 8 + lVar3)) {
        *(undefined8 *)(param_2 + 0x10 + lVar3) = 0;
      }
      uVar2 = FUN_14477b664();
      uVar2 = FUN_14477b664(uVar2);
      *(undefined8 *)(param_2 + 8 + lVar3) = uVar2;
      *(undefined8 *)(param_2 + 0x10 + lVar3) = *(undefined8 *)(param_3 + 0x10 + lVar3);
      lVar3 = lVar3 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 143fb0466 FUN_143fb0466 body=59 status=ok
// SIG undefined FUN_143fb0466(void)

undefined8 FUN_143fb0466(longlong *param_1)

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



// FUNCTION 143fb0524 FUN_143fb0524 body=29 status=ok
// SIG undefined FUN_143fb0524(void)

undefined8 FUN_143fb0524(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fb0550 FUN_143fb0550 body=131 status=ok
// SIG undefined FUN_143fb0550(void)

void FUN_143fb0550(undefined8 param_1,undefined8 *param_2)

{
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140056680(param_2,L"/Game/UI/Materials");
  FUN_140056680(param_2 + 2,L"MPC_UIColors");
  FUN_140056680(param_2 + 4,L"/Game/UI/Materials/Palette");
  FUN_140056680(param_2 + 6,L"MF_UI_Color");
  FUN_140056680(param_2 + 8,&DAT_14b56c95e);
  return;
}



// FUNCTION 143fb05d4 FUN_143fb05d4 body=95 status=ok
// SIG undefined FUN_143fb05d4(void)

void FUN_143fb05d4(undefined8 param_1,longlong param_2)

{
  FUN_140056680(param_2,L"/Game/UI/Materials");
  FUN_140056680(param_2 + 0x10,L"MPC_UIColors");
  FUN_140056680(param_2 + 0x20,L"/Game/UI/Materials/Palette");
  FUN_140056680(param_2 + 0x30,L"MF_UI_Color");
  FUN_140056680(param_2 + 0x40,&DAT_14b56c95e);
  return;
}



// FUNCTION 143fb0634 FUN_143fb0634 body=89 status=ok
// SIG undefined FUN_143fb0634(void)

void FUN_143fb0634(undefined8 param_1,longlong *param_2)

{
  if (param_2[8] != 0) {
    FUN_1400020a8();
  }
  if (param_2[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143fb06a4 FUN_143fb06a4 body=475 status=ok
// SIG undefined FUN_143fb06a4(void)

undefined8 FUN_143fb06a4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  int iVar1;
  void *pvVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  if (param_4 != 0) {
    lVar4 = 0;
    do {
      if (param_2 != param_3) {
        iVar1 = *(int *)(param_3 + 8 + lVar4);
        pvVar2 = *(void **)(param_3 + lVar4);
        *(int *)(param_2 + 8 + lVar4) = iVar1;
        if (iVar1 == 0 && *(int *)(param_2 + 0xc + lVar4) == 0) {
          *(undefined4 *)(param_2 + 0xc + lVar4) = 0;
        }
        else {
          FUN_1446dd670((undefined8 *)(param_2 + lVar4),iVar1);
          if (iVar1 != 0) {
            memcpy(*(void **)(param_2 + lVar4),pvVar2,(longlong)iVar1 * 2);
          }
        }
        iVar1 = *(int *)(param_3 + 0x18 + lVar4);
        pvVar2 = *(void **)(param_3 + 0x10 + lVar4);
        *(int *)(param_2 + 0x18 + lVar4) = iVar1;
        if (iVar1 == 0 && *(int *)(param_2 + 0x1c + lVar4) == 0) {
          *(undefined4 *)(param_2 + 0x1c + lVar4) = 0;
        }
        else {
          puVar3 = (undefined8 *)(param_2 + lVar4 + 0x10);
          FUN_1446dd670(puVar3,iVar1);
          if (iVar1 != 0) {
            memcpy((void *)*puVar3,pvVar2,(longlong)iVar1 * 2);
          }
        }
        iVar1 = *(int *)(param_3 + 0x28 + lVar4);
        pvVar2 = *(void **)(param_3 + 0x20 + lVar4);
        *(int *)(param_2 + 0x28 + lVar4) = iVar1;
        if (iVar1 == 0 && *(int *)(param_2 + 0x2c + lVar4) == 0) {
          *(undefined4 *)(param_2 + 0x2c + lVar4) = 0;
        }
        else {
          puVar3 = (undefined8 *)(param_2 + lVar4 + 0x20);
          FUN_1446dd670(puVar3,iVar1);
          if (iVar1 != 0) {
            memcpy((void *)*puVar3,pvVar2,(longlong)iVar1 * 2);
          }
        }
        iVar1 = *(int *)(param_3 + 0x38 + lVar4);
        pvVar2 = *(void **)(param_3 + 0x30 + lVar4);
        *(int *)(param_2 + 0x38 + lVar4) = iVar1;
        if (iVar1 == 0 && *(int *)(param_2 + 0x3c + lVar4) == 0) {
          *(undefined4 *)(param_2 + 0x3c + lVar4) = 0;
        }
        else {
          puVar3 = (undefined8 *)(param_2 + lVar4 + 0x30);
          FUN_1446dd670(puVar3,iVar1);
          if (iVar1 != 0) {
            memcpy((void *)*puVar3,pvVar2,(longlong)iVar1 * 2);
          }
        }
        iVar1 = *(int *)(param_3 + 0x48 + lVar4);
        pvVar2 = *(void **)(param_3 + 0x40 + lVar4);
        *(int *)(param_2 + 0x48 + lVar4) = iVar1;
        if (iVar1 == 0 && *(int *)(param_2 + 0x4c + lVar4) == 0) {
          *(undefined4 *)(param_2 + 0x4c + lVar4) = 0;
        }
        else {
          puVar3 = (undefined8 *)(param_2 + lVar4 + 0x40);
          FUN_1446dd670(puVar3,iVar1);
          if (iVar1 != 0) {
            memcpy((void *)*puVar3,pvVar2,(longlong)iVar1 * 2);
          }
        }
      }
      lVar4 = lVar4 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 143fb08a8 FUN_143fb08a8 body=59 status=ok
// SIG undefined FUN_143fb08a8(void)

undefined8 FUN_143fb08a8(longlong *param_1)

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



// FUNCTION 143fb08ee FUN_143fb08ee body=93 status=ok
// SIG undefined FUN_143fb08ee(void)

void FUN_143fb08ee(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[10] == '\x01') {
    if (param_2[8] != 0) {
      FUN_1400020a8();
    }
    if (param_2[6] != 0) {
      FUN_1400020a8();
    }
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    if (param_2[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 10) = 0;
  }
  return;
}



// FUNCTION 143fb09aa FUN_143fb09aa body=1495 status=ok
// SIG undefined FUN_143fb09aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143fb09aa(void)

{
  uint uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined **ppuStack_50;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b5606f0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b560b30,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b560e80,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b561cd0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b562040,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b5623a0,1,0);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxUIUMG",0,0,&PTR_FUN_14b5625d0);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxUIUMG",0,0,&PTR_FUN_14b5626c0);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxUIUMG",0,0,&PTR_FUN_14b5628d0);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxUIUMG",0,0,&PTR_FUN_14b562a70);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxUIUMG",0,0,&PTR_FUN_14b562c00);
  local_40 = "AssetRegistry";
  local_38 = 0xd;
  local_34 = 0;
  uVar1 = FUN_14001a6c0(&local_40,1);
  _DAT_14cb9c0a0 = (ulonglong)uVar1;
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b563620,1,0);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxUIUMG",0,0,&PTR_FUN_14b563750);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxUIUMG",0,0,&PTR_FUN_14b5637e0);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxUIUMG",0,0,&PTR_FUN_14b5638d0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b563d30,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b564160,1,0);
  _DAT_14cb9c170 = 0xffffffff;
  _DAT_14cb9c174 = 0;
  FUN_1446f470e(&DAT_14cb9c1c8,L"OnBoundActionButtonExecuted",1);
  local_48 = 1;
  ppuStack_50 = &PTR_FUN_14b564e00;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b564e70,1,&PTR_FUN_14b564e20);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b565290,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b5656b0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b565b10,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b565f10,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b566360,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b566790,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b566ba0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b5670d0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b567190,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b5675a0,1,0);
  FUN_1446f470e(&DAT_14cb9c2e8,L"UpdateButtonStyle",1);
  FUN_1446f470e(&DAT_14cb9c2f8,L"UpdateButtonText",1);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b567f10,1,0);
  FUN_1446f470e(&DAT_14cb9c340,L"UpdateButtonKeyBrush",1);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b568f80,2,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b5693c0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b5697d0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b569bd0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b569fd0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b56a3f0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b56a510,1,0);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b56b720,1,&PTR_FUN_14b56b6d0);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fb0f86 FUN_143fb0f86 body=227 status=ok
// SIG undefined FUN_143fb0f86(void)

longlong FUN_143fb0f86(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9c658 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14634e584;
    local_38 = &LAB_143fb106a;
    local_40 = FUN_143fb106d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x2e0;
    FUN_14081cfa3(L"/Script/GbxUIUMG",L"GbxUIUMGExtensibleWidget",&DAT_14cb9c658,&DAT_143fb0f84);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9c658;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fb106d FUN_143fb106d body=70 status=ok
// SIG undefined FUN_143fb106d(void)

void FUN_143fb106d(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140e2f36c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b5726d0;
  puVar1[5] = &PTR_LAB_14b572b70;
  puVar1[0x2d] = &PTR_LAB_14b572bb0;
  puVar1[0x5a] = 0;
  puVar1[0x5b] = 0;
  return;
}



// FUNCTION 143fb10b9 FUN_143fb10b9 body=47 status=ok
// SIG undefined FUN_143fb10b9(void)

longlong FUN_143fb10b9(void)

{
  if (DAT_14cb9c670 == 0) {
    FUN_14086a14e(&DAT_14cb9c670,&PTR_FUN_14b572cb8);
  }
  return DAT_14cb9c670;
}



// FUNCTION 143fb10e8 FUN_143fb10e8 body=47 status=ok
// SIG undefined FUN_143fb10e8(void)

longlong FUN_143fb10e8(void)

{
  if (DAT_14cb9c660 == 0) {
    FUN_14073dd9a(&DAT_14cb9c660,&PTR_LAB_14b572688);
  }
  return DAT_14cb9c660;
}



// FUNCTION 143fb1118 FUN_143fb1118 body=73 status=ok
// SIG undefined FUN_143fb1118(void)

void FUN_143fb1118(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b5726d0;
  param_1[5] = &PTR_LAB_14b572b70;
  param_1[0x2d] = &PTR_LAB_14b572bb0;
  if (param_1[0x5a] != 0) {
    FUN_1400020a8();
  }
  FUN_140cdcea6(param_1);
  return;
}



// FUNCTION 143fb1162 FUN_143fb1162 body=55 status=ok
// SIG undefined FUN_143fb1162(void)

void FUN_143fb1162(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9c678 == 0) {
    uVar1 = FUN_140f9f06f();
    DAT_14cb9c678 = FUN_140002ddd(FUN_143fb10b9,uVar1,L"GbxUIUMGExtensionConfigDef");
  }
  return;
}



// FUNCTION 143fb119a FUN_143fb119a body=48 status=ok
// SIG undefined FUN_143fb119a(void)

void FUN_143fb119a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14b579420;
  return;
}



// FUNCTION 143fb11cc FUN_143fb11cc body=227 status=ok
// SIG undefined FUN_143fb11cc(void)

longlong FUN_143fb11cc(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9c688 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_143fb12b0;
    local_40 = &LAB_143fb12b3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxUIUMG",L"NexusConfigStoreUIExtensionConfigDef",&DAT_14cb9c688,
                  &DAT_143fb11ca);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9c688;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fb12c3 FUN_143fb12c3 body=47 status=ok
// SIG undefined FUN_143fb12c3(void)

longlong FUN_143fb12c3(void)

{
  if (DAT_14cb9c690 == 0) {
    FUN_14073dd9a(&DAT_14cb9c690,&PTR_LAB_14b572d58);
  }
  return DAT_14cb9c690;
}



// FUNCTION 143fb12f4 FUN_143fb12f4 body=227 status=ok
// SIG undefined FUN_143fb12f4(void)

longlong FUN_143fb12f4(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9c6a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_143fb13d8;
    local_28 = &LAB_145a55d42;
    local_38 = &LAB_143fb13dd;
    local_40 = FUN_143fb13e0;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x88;
    FUN_14081cfa3(L"/Script/GbxUIUMG",L"GbxUIUMGExtensionPointContentInstance",&DAT_14cb9c6a0,
                  &DAT_143fb12f2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9c6a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fb13e0 FUN_143fb13e0 body=127 status=ok
// SIG undefined FUN_143fb13e0(void)

void FUN_143fb13e0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  puVar1[7] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *puVar1 = &PTR_FUN_14b572f40;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x49) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x51) = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  return;
}



// FUNCTION 143fb1469 FUN_143fb1469 body=47 status=ok
// SIG undefined FUN_143fb1469(void)

longlong FUN_143fb1469(void)

{
  if (DAT_14cb9c6a8 == 0) {
    FUN_14073dd9a(&DAT_14cb9c6a8,&PTR_LAB_14b572ef8);
  }
  return DAT_14cb9c6a8;
}



// FUNCTION 143fb149a FUN_143fb149a body=227 status=ok
// SIG undefined FUN_143fb149a(void)

longlong FUN_143fb149a(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9c6b8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_143564180;
    local_28 = &LAB_14115fc28;
    local_38 = &LAB_143fb157e;
    local_40 = FUN_143fb1581;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xa8;
    FUN_14081cfa3(L"/Script/GbxUIUMG",L"GbxUIUMGExtensionPointManager",&DAT_14cb9c6b8,&DAT_143fb1498
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9c6b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fb1581 FUN_143fb1581 body=109 status=ok
// SIG undefined FUN_143fb1581(void)

void FUN_143fb1581(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400841f8(puVar1);
  *puVar1 = &PTR_FUN_14b573360;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 100) = 0;
  puVar1[0xe] = 0;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  InitializeSRWLock((PSRWLOCK)(puVar1 + 0x12));
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  return;
}



// FUNCTION 143fb15ee FUN_143fb15ee body=47 status=ok
// SIG undefined FUN_143fb15ee(void)

longlong FUN_143fb15ee(void)

{
  if (DAT_14cb9c6c0 == 0) {
    FUN_14073dd9a(&DAT_14cb9c6c0,&PTR_LAB_14b573318);
  }
  return DAT_14cb9c6c0;
}



// FUNCTION 143fb1622 FUN_143fb1622 body=47 status=ok
// SIG undefined FUN_143fb1622(void)

longlong FUN_143fb1622(void)

{
  if (DAT_14cb9c708 == 0) {
    FUN_14073dd9a(&DAT_14cb9c708,&PTR_LAB_14b574260);
  }
  return DAT_14cb9c708;
}



// FUNCTION 143fb1651 FUN_143fb1651 body=47 status=ok
// SIG undefined FUN_143fb1651(void)

longlong FUN_143fb1651(void)

{
  if (DAT_14cb9c6f8 == 0) {
    FUN_14000fc22(&DAT_14cb9c6f8,&PTR_FUN_14b574190);
  }
  return DAT_14cb9c6f8;
}



// FUNCTION 143fb1680 FUN_143fb1680 body=38 status=ok
// SIG undefined FUN_143fb1680(void)

void FUN_143fb1680(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x28))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 143fb16a6 FUN_143fb16a6 body=34 status=ok
// SIG undefined FUN_143fb16a6(void)

void FUN_143fb16a6(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143fb16ce();
  FUN_14069c8d6(uVar1,&PTR_s_IsExtensionPointWidgetEnabled_14b5741d0,1);
  return;
}



// FUNCTION 143fb16ce FUN_143fb16ce body=227 status=ok
// SIG undefined FUN_143fb16ce(void)

longlong FUN_143fb16ce(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9c700 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_143fb17b2;
    local_40 = FUN_143fb17b5;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxUIUMG",L"GbxUIUMGExtensionPointWidgetInterface",&DAT_14cb9c700,
                  FUN_143fb16a6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9c700;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fb17b5 FUN_143fb17b5 body=91 status=ok
// SIG undefined FUN_143fb17b5(void)

void FUN_143fb17b5(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *puVar1 = &PTR_FUN_14b5742a0;
  return;
}



// FUNCTION 143fb1818 FUN_143fb1818 body=227 status=ok
// SIG undefined FUN_143fb1818(void)

longlong FUN_143fb1818(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9c718 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_143fb18fc;
    local_40 = FUN_143fb18ff;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxUIUMG",L"GbxUIUMGExtensionPreConstructInterface",&DAT_14cb9c718,
                  &DAT_143fb1816);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9c718;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fb18ff FUN_143fb18ff body=91 status=ok
// SIG undefined FUN_143fb18ff(void)

void FUN_143fb18ff(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *puVar1 = &PTR_FUN_14b574620;
  return;
}



// FUNCTION 143fb195f FUN_143fb195f body=47 status=ok
// SIG undefined FUN_143fb195f(void)

longlong FUN_143fb195f(void)

{
  if (DAT_14cb9c720 == 0) {
    FUN_14073dd9a(&DAT_14cb9c720,&PTR_LAB_14b5745d8);
  }
  return DAT_14cb9c720;
}



// FUNCTION 143fb198e FUN_143fb198e body=55 status=ok
// SIG undefined FUN_143fb198e(void)

void FUN_143fb198e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9c738 == 0) {
    uVar1 = FUN_140f9f06f();
    DAT_14cb9c738 = FUN_14171c317(FUN_14659aadb,uVar1,L"ELocalMultiplayerInteractionMode");
  }
  return;
}



// FUNCTION 143fb19cb FUN_143fb19cb body=47 status=ok
// SIG undefined FUN_143fb19cb(void)

longlong FUN_143fb19cb(void)

{
  if (DAT_14cb9c8d0 == 0) {
    FUN_14000fc22(&DAT_14cb9c8d0,&PTR_FUN_14b578760);
  }
  return DAT_14cb9c8d0;
}



// FUNCTION 143fb19fa FUN_143fb19fa body=47 status=ok
// SIG undefined FUN_143fb19fa(void)

longlong FUN_143fb19fa(void)

{
  if (DAT_14cb9c8e0 == 0) {
    FUN_14000fc22(&DAT_14cb9c8e0,&PTR_FUN_14b5787d8);
  }
  return DAT_14cb9c8e0;
}



// FUNCTION 143fb1a29 FUN_143fb1a29 body=47 status=ok
// SIG undefined FUN_143fb1a29(void)

longlong FUN_143fb1a29(void)

{
  if (DAT_14cb9c918 == 0) {
    FUN_14000fc22(&DAT_14cb9c918,&PTR_FUN_14b5789a8);
  }
  return DAT_14cb9c918;
}



// FUNCTION 143fb1a72 FUN_143fb1a72 body=47 status=ok
// SIG undefined FUN_143fb1a72(void)

longlong FUN_143fb1a72(void)

{
  if (DAT_14cb9c920 == 0) {
    FUN_14000fc22(&DAT_14cb9c920,&PTR_FUN_14b5789f8);
  }
  return DAT_14cb9c920;
}



// FUNCTION 143fb1ac8 FUN_143fb1ac8 body=48 status=ok
// SIG undefined FUN_143fb1ac8(void)

longlong FUN_143fb1ac8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x168;
  FUN_145c90c50(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fb1af8 FUN_143fb1af8 body=93 status=ok
// SIG undefined FUN_143fb1af8(void)

undefined8 * FUN_143fb1af8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b5726d0;
  param_1[5] = &PTR_LAB_14b572b70;
  param_1[0x2d] = &PTR_LAB_14b572bb0;
  if (param_1[0x5a] != 0) {
    FUN_1400020a8();
  }
  FUN_140cdcea6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fb1b6c FUN_143fb1b6c body=38 status=ok
// SIG undefined FUN_143fb1b6c(void)

undefined8 FUN_143fb1b6c(undefined8 param_1,int param_2)

{
  FUN_140bd4d6a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fb1b92 FUN_143fb1b92 body=132 status=ok
// SIG undefined FUN_143fb1b92(void)

undefined8 * FUN_143fb1b92(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b572f40;
  plVar3 = (longlong *)param_1[0x10];
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
  plVar3 = (longlong *)param_1[10];
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
  FUN_145c85ad8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fb1c16 FUN_143fb1c16 body=575 status=ok
// SIG undefined FUN_143fb1c16(void)

undefined8 * FUN_143fb1c16(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  uint *puVar2;
  longlong *plVar3;
  int *piVar4;
  ulonglong uVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  
  *param_1 = &PTR_FUN_14b573360;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 6;
  puVar2 = (uint *)(param_1 + 8);
  iVar6 = *(int *)(param_1 + 0xb);
  if (iVar6 == 0) {
    uVar17 = 0;
    uVar18 = 1;
    iVar14 = 0;
    iVar8 = 0;
  }
  else {
    puVar12 = (uint *)param_1[10];
    if ((uint *)param_1[10] == (uint *)0x0) {
      puVar12 = puVar2;
    }
    uVar15 = *puVar12;
    if (uVar15 == 0) {
      iVar8 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar8 = iVar6 + -1;
      }
      uVar17 = 0;
      uVar18 = (ulonglong)(uint)(iVar8 >> 5);
      if (iVar8 >> 5 < 1) {
        uVar18 = uVar17;
      }
      iVar14 = 0;
      do {
        if (uVar18 == uVar17) goto LAB_143fb1dc3;
        iVar14 = iVar14 + 0x20;
        uVar15 = puVar12[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar17 = 0;
      iVar14 = 0;
    }
    uVar18 = (ulonglong)(-uVar15 & uVar15);
    uVar5 = uVar18 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar8 = (iVar14 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if (iVar6 <= iVar8) {
      iVar8 = iVar6;
    }
  }
  if (iVar8 < iVar6) {
    uVar15 = 0xffffffff;
    do {
      plVar7 = *(longlong **)(*plVar1 + 0x18 + (longlong)iVar8 * 0x28);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar7 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar4 = (int *)((longlong)plVar7 + 0xc);
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      uVar15 = uVar15 & ~(uint)uVar18;
      puVar12 = (uint *)param_1[10];
      if ((uint *)param_1[10] == (uint *)0x0) {
        puVar12 = puVar2;
      }
      iVar6 = *(int *)(param_1 + 0xb);
      iVar8 = (int)uVar17;
      lVar16 = (longlong)iVar8;
      uVar9 = puVar12[lVar16] & uVar15;
      if (uVar9 == 0) {
        iVar10 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar10 = iVar6 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar11 = iVar10;
        if (iVar10 < iVar8) {
          iVar11 = iVar8;
        }
        if (iVar10 <= iVar8) break;
        lVar13 = 0;
        while( true ) {
          iVar14 = iVar14 + 0x20;
          uVar9 = puVar12[lVar16 + lVar13 + 1];
          if (uVar9 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar11 - lVar16 == lVar13) goto LAB_143fb1dc3;
        }
        uVar17 = (ulonglong)(iVar8 + (int)lVar13 + 1);
        uVar15 = 0xffffffff;
      }
      uVar18 = (ulonglong)(-uVar9 & uVar9);
      uVar5 = uVar18 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar8 = (iVar14 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar6);
  }
LAB_143fb1dc3:
  *(undefined4 *)(param_1 + 7) = 0;
  if (*(int *)((longlong)param_1 + 0x3c) != 0) {
    FUN_140549ad6(plVar1,0);
  }
  param_1[0xc] = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x5c)) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80;
    FUN_1446efbd8(puVar2,0);
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fb1e56 FUN_143fb1e56 body=38 status=ok
// SIG undefined FUN_143fb1e56(void)

undefined8 FUN_143fb1e56(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fb1e7c FUN_143fb1e7c body=38 status=ok
// SIG undefined FUN_143fb1e7c(void)

undefined8 FUN_143fb1e7c(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fb1ea2 FUN_143fb1ea2 body=68 status=ok
// SIG undefined FUN_143fb1ea2(void)

undefined8 * FUN_143fb1ea2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b575d50;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_143fb2ae0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fb1eea FUN_143fb1eea body=71 status=ok
// SIG undefined FUN_143fb1eea(void)

longlong FUN_143fb1eea(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = param_1 + -0x168;
  *(undefined ***)(param_1 + 400) = &PTR_FUN_14b56e120;
  FUN_144760f98(param_1 + 0x198);
  FUN_14117c118(lVar1);
  if (param_2 != 0) {
    FUN_1400020a8(lVar1);
  }
  return lVar1;
}



// FUNCTION 143fb1f3a FUN_143fb1f3a body=64 status=ok
// SIG undefined FUN_143fb1f3a(void)

undefined8 * FUN_143fb1f3a(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -0x5f;
  *param_1 = &PTR_FUN_14b56e120;
  FUN_144760f98(param_1 + 1);
  FUN_14117c118(puVar1);
  if (param_2 != 0) {
    FUN_1400020a8(puVar1);
  }
  return puVar1;
}



// FUNCTION 143fb1f82 FUN_143fb1f82 body=65 status=ok
// SIG undefined FUN_143fb1f82(void)

longlong FUN_143fb1f82(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = param_1 + -0x338;
  *(undefined ***)(param_1 + -0x40) = &PTR_FUN_14b56e120;
  FUN_144760f98(param_1 + -0x38);
  FUN_14117c118(lVar1);
  if (param_2 != 0) {
    FUN_1400020a8(lVar1);
  }
  return lVar1;
}



// FUNCTION 143fb1fcc FUN_143fb1fcc body=65 status=ok
// SIG undefined FUN_143fb1fcc(void)

longlong FUN_143fb1fcc(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = param_1 + -0x350;
  *(undefined ***)(param_1 + -0x58) = &PTR_FUN_14b56e120;
  FUN_144760f98(param_1 + -0x50);
  FUN_14117c118(lVar1);
  if (param_2 != 0) {
    FUN_1400020a8(lVar1);
  }
  return lVar1;
}



// FUNCTION 143fb2040 FUN_143fb2040 body=29 status=ok
// SIG undefined FUN_143fb2040(void)

undefined8 FUN_143fb2040(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fb20d6 FUN_143fb20d6 body=168 status=ok
// SIG undefined FUN_143fb20d6(void)

undefined8 FUN_143fb20d6(undefined8 param_1,longlong param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  if (param_4 != 0) {
    puVar5 = (undefined8 *)(param_2 + 0x30);
    do {
      if (*(char *)(param_3 + 2) == '\0') {
        *(undefined1 *)(puVar5 + -4) = 0;
        puVar5[-5] = param_3[1];
      }
      puVar5[-3] = param_3[3];
      uVar2 = *(undefined4 *)((longlong)param_3 + 0x24);
      uVar3 = *(undefined4 *)(param_3 + 5);
      uVar4 = *(undefined4 *)((longlong)param_3 + 0x2c);
      *(undefined4 *)(puVar5 + -2) = *(undefined4 *)(param_3 + 4);
      *(undefined4 *)((longlong)puVar5 + -0xc) = uVar2;
      *(undefined4 *)(puVar5 + -1) = uVar3;
      *(undefined4 *)((longlong)puVar5 + -4) = uVar4;
      if (puVar5 + -6 != param_3) {
        iVar1 = *(int *)(param_3 + 7);
        _Src = (void *)param_3[6];
        *(int *)(puVar5 + 1) = iVar1;
        if (iVar1 == 0 && *(int *)((longlong)puVar5 + 0xc) == 0) {
          *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar5,iVar1);
          if (iVar1 != 0) {
            memcpy((void *)*puVar5,_Src,(longlong)iVar1 * 2);
          }
        }
      }
      param_3 = param_3 + 8;
      puVar5 = puVar5 + 8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 143fb21a6 FUN_143fb21a6 body=59 status=ok
// SIG undefined FUN_143fb21a6(void)

undefined8 FUN_143fb21a6(longlong *param_1)

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



// FUNCTION 143fb21ec FUN_143fb21ec body=143 status=ok
// SIG undefined FUN_143fb21ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143fb21ec(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_2 + 8) == '\x01') {
    *param_2 = &PTR_FUN_14b57a3e0;
    if (param_2[6] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a171dc0;
    if ((*(char *)(param_2 + 2) != '\0') &&
       (plVar1 = (longlong *)param_2[1], plVar1 != (longlong *)0x0)) {
      if (plVar1[3] != 0) {
        FUN_1400020a8();
      }
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
      _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
      *plVar1 = (longlong)DAT_14c9a0ea0;
      DAT_14c9a0ea0 = plVar1;
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    }
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 143fb22ce FUN_143fb22ce body=154 status=ok
// SIG undefined FUN_143fb22ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143fb22ce(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b57a3e0;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fb2368 FUN_143fb2368 body=55 status=ok
// SIG undefined FUN_143fb2368(void)

void FUN_143fb2368(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9c678 == 0) {
    uVar1 = FUN_140f9f06f();
    DAT_14cb9c678 = FUN_140002ddd(FUN_143fb10b9,uVar1,L"GbxUIUMGExtensionConfigDef");
  }
  return;
}



// FUNCTION 143fb23a0 FUN_143fb23a0 body=118 status=ok
// SIG undefined FUN_143fb23a0(void)

undefined8 FUN_143fb23a0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  if (DAT_14cb9e348 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144837462(DAT_14cb9e348,local_38);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fb2418 FUN_143fb2418 body=117 status=ok
// SIG undefined FUN_143fb2418(void)

undefined8 * FUN_143fb2418(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  if (param_3 == 0) {
    *param_2 = 0;
  }
  else {
    puVar2 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_3 + 8) != (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(param_3 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar1 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar1);
      DAT_14c947fe0 = lVar1;
    }
    FUN_140045924(DAT_14c947fe0,param_2,puVar2,1);
  }
  return param_2;
}



// FUNCTION 143fb24bc FUN_143fb24bc body=1515 status=ok
// SIG undefined FUN_143fb24bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143fb24bc(void)

{
  uint uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined **ppuStack_50;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b56e580,1,0);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b56ec50,1,&PTR_FUN_14b56ec00);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b56f0d0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b56f4e0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b56f8e0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b56fcf0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b570b00,1,0);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b571160,1,&PTR_FUN_14b571130);
  FUN_1446f470e(&DAT_14cb9c5a0,L"BP_OnActionCancelled",1);
  FUN_1446f470e(&DAT_14cb9c5b0,L"BP_OnActionComplete",1);
  FUN_1446f470e(&DAT_14cb9c5c0,L"BP_OnActionProgress",1);
  FUN_1446f470e(&DAT_14cb9c5d0,L"BP_OnUpdateInputAction",1);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b572140,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b572570,1,0);
  local_40 = "AssetRegistry";
  local_38 = 0xd;
  local_34 = 0;
  uVar1 = FUN_14001a6c0(&local_40,1);
  _DAT_14cb9c650 = (ulonglong)uVar1;
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b572be0,1,0);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b572dd0,1,&PTR_FUN_14b572da0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b5731f0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b573620,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b574100,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b574540,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b5748c0,1,0);
  local_48 = 1;
  ppuStack_50 = &PTR_FUN_14b574f60;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b574fb0,1,&PTR_FUN_14b574f80);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b5753c0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b5757f0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b575c10,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b576000,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b576450,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b576b70,1,0);
  FUN_1446f470e(&DAT_14cb9c818,L"BP_BindIndicator",1);
  FUN_1446f470e(&DAT_14cb9c828,L"BP_UnbindIndicator",1);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b577090,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b5774a0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b5778c0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b577d20,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b578110,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b578700,1,0);
  FUN_1446f470e(&DAT_14cb9c8c8,L"BP_OnFifthAction",1);
  FUN_1446f470e(&DAT_14cb9c8d8,L"BP_OnFourthAction",1);
  FUN_1446f470e(&DAT_14cb9c8e8,L"BP_OnPrimaryAction",1);
  FUN_1446f470e(&DAT_14cb9c8f8,L"BP_OnSecondaryAction",1);
  FUN_1446f470e(&DAT_14cb9c908,L"BP_OnTertiaryAction",1);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b578f00,1,0);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxUIUMG",0,0,&PTR_FUN_14b578fb0);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fb2ab0 FUN_143fb2ab0 body=47 status=ok
// SIG undefined FUN_143fb2ab0(void)

longlong FUN_143fb2ab0(void)

{
  if (DAT_14cb9cf10 == 0) {
    FUN_14073dd9a(&DAT_14cb9cf10,&PTR_LAB_14b588ed8);
  }
  return DAT_14cb9cf10;
}



// FUNCTION 143fb2ae0 FUN_143fb2ae0 body=106 status=ok
// SIG undefined FUN_143fb2ae0(void)

void FUN_143fb2ae0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b588f20;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 143fb2b4c FUN_143fb2b4c body=227 status=ok
// SIG undefined FUN_143fb2b4c(void)

longlong FUN_143fb2b4c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9cb88 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_143fb2c30;
    local_40 = FUN_143fb2c33;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxUIUMG",L"GbxUIUMGNexusWidgetInterface",&DAT_14cb9cb88,&DAT_143fb2b4a)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9cb88;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fb2c33 FUN_143fb2c33 body=91 status=ok
// SIG undefined FUN_143fb2c33(void)

void FUN_143fb2c33(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *puVar1 = &PTR_FUN_14b5800f0;
  return;
}



// FUNCTION 143fb2c99 FUN_143fb2c99 body=47 status=ok
// SIG undefined FUN_143fb2c99(void)

longlong FUN_143fb2c99(void)

{
  if (DAT_14cb9cb90 == 0) {
    FUN_14073dd9a(&DAT_14cb9cb90,&PTR_LAB_14b5800a8);
  }
  return DAT_14cb9cb90;
}



// FUNCTION 143fb2cca FUN_143fb2cca body=220 status=ok
// SIG undefined FUN_143fb2cca(void)

longlong FUN_143fb2cca(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9cc30 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_143fb2da7;
    local_40 = FUN_143fb2daa;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x78;
    FUN_14081cfa3(L"/Script/GbxUIUMG",L"GbxUIUMGPlayerViewModelRepo",&DAT_14cb9cc30,&DAT_143fb2cc8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9cc30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fb2daa FUN_143fb2daa body=131 status=ok
// SIG undefined FUN_143fb2daa(void)

void FUN_143fb2daa(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *puVar1 = &PTR_FUN_14b581c20;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x5c) = 0;
  puVar1[0xd] = 0;
  *(undefined4 *)(puVar1 + 0xe) = 0;
  return;
}



// FUNCTION 143fb2e33 FUN_143fb2e33 body=47 status=ok
// SIG undefined FUN_143fb2e33(void)

longlong FUN_143fb2e33(void)

{
  if (DAT_14cb9cc38 == 0) {
    FUN_14073dd9a(&DAT_14cb9cc38,&PTR_LAB_14b581bd8);
  }
  return DAT_14cb9cc38;
}



// FUNCTION 143fb2e62 FUN_143fb2e62 body=134 status=ok
// SIG undefined FUN_143fb2e62(void)

undefined8 * FUN_143fb2e62(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14b581c20;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  return param_1;
}



// FUNCTION 143fb2ee8 FUN_143fb2ee8 body=61 status=ok
// SIG undefined FUN_143fb2ee8(void)

void FUN_143fb2ee8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b581c20;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_143fb3d16(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 143fb2f2a FUN_143fb2f2a body=99 status=ok
// SIG undefined FUN_143fb2f2a(void)

void FUN_143fb2f2a(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *puVar1 = &PTR_FUN_14b581fc0;
  puVar1[5] = 0;
  return;
}



// FUNCTION 143fb2f8e FUN_143fb2f8e body=227 status=ok
// SIG undefined FUN_143fb2f8e(void)

longlong FUN_143fb2f8e(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9cc48 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146598832;
    local_38 = &LAB_143fb2f27;
    local_40 = FUN_143fb2f2a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/GbxUIUMG",L"GbxUIUMGViewModelRepoResolver",&DAT_14cb9cc48,&DAT_143fb2f26
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9cc48;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fb3072 FUN_143fb3072 body=47 status=ok
// SIG undefined FUN_143fb3072(void)

longlong FUN_143fb3072(void)

{
  if (DAT_14cb9cc50 == 0) {
    FUN_14073dd9a(&DAT_14cb9cc50,&PTR_FUN_14b581f78);
  }
  return DAT_14cb9cc50;
}



// FUNCTION 143fb30aa FUN_143fb30aa body=47 status=ok
// SIG undefined FUN_143fb30aa(void)

longlong FUN_143fb30aa(void)

{
  if (DAT_14cb9cd98 == 0) {
    FUN_14073dd9a(&DAT_14cb9cd98,&PTR_LAB_14b584b30);
  }
  return DAT_14cb9cd98;
}



// FUNCTION 143fb30d9 FUN_143fb30d9 body=47 status=ok
// SIG undefined FUN_143fb30d9(void)

longlong FUN_143fb30d9(void)

{
  if (DAT_14cb9cd88 == 0) {
    FUN_14000fc22(&DAT_14cb9cd88,&PTR_FUN_14b584a50);
  }
  return DAT_14cb9cd88;
}



// FUNCTION 143fb311e FUN_143fb311e body=34 status=ok
// SIG undefined FUN_143fb311e(void)

void FUN_143fb311e(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143fb3146();
  FUN_14069c8d6(uVar1,&PTR_s_HandleControlMappingRebuilt_14b584a90,1);
  return;
}



// FUNCTION 143fb3146 FUN_143fb3146 body=227 status=ok
// SIG undefined FUN_143fb3146(void)

longlong FUN_143fb3146(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9cd90 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463566e6;
    local_38 = &LAB_143fb322a;
    local_40 = FUN_143fb322d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 200;
    FUN_14081cfa3(L"/Script/GbxUIUMG",L"GbxUIUMGRichTextInlineWidgetDecorator_Glyph",&DAT_14cb9cd90,
                  FUN_143fb311e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9cd90;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fb322d FUN_143fb322d body=177 status=ok
// SIG undefined FUN_143fb322d(void)

void FUN_143fb322d(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *puVar1 = &PTR_FUN_14b584b70;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x5c) = 0;
  puVar1[0xd] = 0;
  *(undefined4 *)(puVar1 + 0xe) = 0;
  puVar1[0x13] = 0;
  *(undefined4 *)(puVar1 + 0x14) = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0xac) = 0;
  puVar1[0x17] = 0;
  *(undefined4 *)(puVar1 + 0x18) = 0;
  return;
}



// FUNCTION 143fb32e2 FUN_143fb32e2 body=91 status=ok
// SIG undefined FUN_143fb32e2(void)

void FUN_143fb32e2(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *puVar1 = &PTR_FUN_14b584f10;
  return;
}



// FUNCTION 143fb333e FUN_143fb333e body=227 status=ok
// SIG undefined FUN_143fb333e(void)

longlong FUN_143fb333e(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9cda8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463566e6;
    local_38 = &LAB_143fb32df;
    local_40 = FUN_143fb32e2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxUIUMG",L"GbxUIUMGRichTextInlineWidgetDecorator_Image",&DAT_14cb9cda8,
                  &DAT_143fb32de);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9cda8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fb3422 FUN_143fb3422 body=47 status=ok
// SIG undefined FUN_143fb3422(void)

longlong FUN_143fb3422(void)

{
  if (DAT_14cb9cdb0 == 0) {
    FUN_14073dd9a(&DAT_14cb9cdb0,&PTR_FUN_14b584ec8);
  }
  return DAT_14cb9cdb0;
}



// FUNCTION 143fb3456 FUN_143fb3456 body=91 status=ok
// SIG undefined FUN_143fb3456(void)

void FUN_143fb3456(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *puVar1 = &PTR_FUN_14b5852b0;
  return;
}



// FUNCTION 143fb34b2 FUN_143fb34b2 body=227 status=ok
// SIG undefined FUN_143fb34b2(void)

longlong FUN_143fb34b2(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9cdc0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463566e6;
    local_38 = &LAB_143fb3453;
    local_40 = FUN_143fb3456;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxUIUMG",L"GbxUIUMGRichTextInlineWidgetDecorator_MarkupStyle",
                  &DAT_14cb9cdc0,&DAT_143fb3452);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9cdc0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fb3596 FUN_143fb3596 body=47 status=ok
// SIG undefined FUN_143fb3596(void)

longlong FUN_143fb3596(void)

{
  if (DAT_14cb9cdc8 == 0) {
    FUN_14073dd9a(&DAT_14cb9cdc8,&PTR_FUN_14b585268);
  }
  return DAT_14cb9cdc8;
}



// FUNCTION 143fb35c8 FUN_143fb35c8 body=227 status=ok
// SIG undefined FUN_143fb35c8(void)

longlong FUN_143fb35c8(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9ce30 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_14634e584;
    local_28 = &LAB_14634e58a;
    local_38 = &LAB_143fb36ac;
    local_40 = FUN_143fb36af;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxUIUMG",L"GbxUIUMGRuntimeExtensionBase",&DAT_14cb9ce30,&DAT_143fb35c6)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9ce30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fb36af FUN_143fb36af body=91 status=ok
// SIG undefined FUN_143fb36af(void)

void FUN_143fb36af(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *puVar1 = &PTR_FUN_14b5867c0;
  return;
}



// FUNCTION 143fb370f FUN_143fb370f body=47 status=ok
// SIG undefined FUN_143fb370f(void)

longlong FUN_143fb370f(void)

{
  if (DAT_14cb9ce38 == 0) {
    FUN_14073dd9a(&DAT_14cb9ce38,&PTR_LAB_14b586778);
  }
  return DAT_14cb9ce38;
}



// FUNCTION 143fb373e FUN_143fb373e body=94 status=ok
// SIG undefined FUN_143fb373e(void)

undefined8 * FUN_143fb373e(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14b5867c0;
  return param_1;
}



// FUNCTION 143fb379e FUN_143fb379e body=220 status=ok
// SIG undefined FUN_143fb379e(void)

longlong FUN_143fb379e(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9cf08 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_143fb387b;
    local_40 = FUN_143fb387e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x90;
    FUN_14081cfa3(L"/Script/GbxUIUMG",L"GbxUIUMGWidgetStateDef",&DAT_14cb9cf08,&DAT_143fb379c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9cf08;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fb387e FUN_143fb387e body=128 status=ok
// SIG undefined FUN_143fb387e(void)

void FUN_143fb387e(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *puVar1 = &PTR_FUN_14b588f20;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  return;
}



// FUNCTION 143fb390c FUN_143fb390c body=103 status=ok
// SIG undefined FUN_143fb390c(void)

undefined8 * FUN_143fb390c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b57dff0;
  FUN_143fb3f62(param_1[0x19],*(undefined4 *)(param_1 + 0x1a));
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_143fb2ae0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


