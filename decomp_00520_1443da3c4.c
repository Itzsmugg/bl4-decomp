// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1443da3c4 FUN_1443da3c4 body=242 status=ok
// SIG undefined FUN_1443da3c4(void)

void FUN_1443da3c4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  cVar3 = *param_4;
  if (cVar3 == '\x01') {
    lVar6 = FUN_148fd89a6(*param_1,param_1 + 1);
    lVar5 = *(longlong *)(lVar6 + 0x20);
    plVar4 = *(longlong **)(lVar6 + 0x28);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
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
    if (lVar5 != 0) {
      (**(code **)(*(longlong *)param_1[3] + 0xb0))
                ((longlong *)param_1[3],param_2,param_3,&DAT_14cb8e138,lVar5);
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
  plVar4 = (longlong *)param_1[5];
  if (plVar4 == (longlong *)0x0 || *(int *)(param_1 + 6) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001443da418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x60))(plVar4,cVar3 == '\x01');
  return;
}



// FUNCTION 1443da4b6 FUN_1443da4b6 body=125 status=ok
// SIG undefined FUN_1443da4b6(void)

undefined8 * FUN_1443da4b6(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14ba5def0;
  plVar1 = param_1 + 6;
  if (*(int *)(param_1 + 7) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1443da507;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 7) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1443da507:
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443da548 FUN_1443da548 body=203 status=ok
// SIG undefined FUN_1443da548(void)

void FUN_1443da548(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b4389d0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba5def0;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],_Src,(longlong)iVar1 * 2);
  }
  puVar2[6] = 0;
  *(undefined4 *)(puVar2 + 7) = 0;
  FUN_14114e6dc(puVar2 + 6,param_1 + 0x30);
  return;
}



// FUNCTION 1443da614 FUN_1443da614 body=203 status=ok
// SIG undefined FUN_1443da614(void)

void FUN_1443da614(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b4389d0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba5def0;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],_Src,(longlong)iVar1 * 2);
  }
  puVar2[6] = 0;
  *(undefined4 *)(puVar2 + 7) = 0;
  FUN_14114e6dc(puVar2 + 6,param_1 + 0x30);
  return;
}



// FUNCTION 1443da6e0 FUN_1443da6e0 body=261 status=ok
// SIG undefined FUN_1443da6e0(void)

void FUN_1443da6e0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  DWORD DVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  void *_Src;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14b4389d0;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14ba5def0;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var2->EntryCount = 0;
  p_Var2->ContentionCount = 0;
  DVar1 = *(DWORD *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  p_Var2->Flags = DVar1;
  if ((longlong)(int)DVar1 == 0) {
    p_Var2->CreatorBackTraceIndexHigh = 0;
    p_Var2->SpareWORD = 0;
  }
  else {
    FUN_1446dd670(&p_Var2->EntryCount,DVar1,0);
    memcpy(*(void **)&p_Var2->EntryCount,_Src,(longlong)(int)DVar1 * 2);
  }
  p_Var2[1].Type = 0;
  p_Var2[1].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var2[1].field_0x4 = 0;
  *(undefined4 *)&p_Var2[1].CriticalSection = 0;
  FUN_14114e6dc(p_Var2 + 1,param_1 + 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443da7cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443da80e FUN_1443da80e body=45 status=ok
// SIG undefined FUN_1443da80e(void)

undefined8 FUN_1443da80e(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  longlong *plVar1;
  undefined8 in_RAX;
  undefined7 uVar2;
  undefined7 extraout_var;
  
  uVar2 = (undefined7)((ulonglong)in_RAX >> 8);
  plVar1 = *(longlong **)(param_1 + 0x30);
  if (plVar1 != (longlong *)0x0 && *(int *)(param_1 + 0x38) != 0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,param_4 == '\x01');
    uVar2 = extraout_var;
  }
  return CONCAT71(uVar2,1);
}



// FUNCTION 1443da83c FUN_1443da83c body=125 status=ok
// SIG undefined FUN_1443da83c(void)

undefined8 * FUN_1443da83c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14ba5df60;
  plVar1 = param_1 + 6;
  if (*(int *)(param_1 + 7) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1443da88d;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 7) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1443da88d:
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443da8ce FUN_1443da8ce body=203 status=ok
// SIG undefined FUN_1443da8ce(void)

void FUN_1443da8ce(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b4388e0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba5df60;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],_Src,(longlong)iVar1 * 2);
  }
  puVar2[6] = 0;
  *(undefined4 *)(puVar2 + 7) = 0;
  FUN_14114e6dc(puVar2 + 6,param_1 + 0x30);
  return;
}



// FUNCTION 1443da99a FUN_1443da99a body=203 status=ok
// SIG undefined FUN_1443da99a(void)

void FUN_1443da99a(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b4388e0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba5df60;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],_Src,(longlong)iVar1 * 2);
  }
  puVar2[6] = 0;
  *(undefined4 *)(puVar2 + 7) = 0;
  FUN_14114e6dc(puVar2 + 6,param_1 + 0x30);
  return;
}



// FUNCTION 1443daa66 FUN_1443daa66 body=261 status=ok
// SIG undefined FUN_1443daa66(void)

void FUN_1443daa66(longlong param_1,LPCRITICAL_SECTION param_2)

{
  DWORD DVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  void *_Src;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14b4388e0;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14ba5df60;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var2->EntryCount = 0;
  p_Var2->ContentionCount = 0;
  DVar1 = *(DWORD *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  p_Var2->Flags = DVar1;
  if ((longlong)(int)DVar1 == 0) {
    p_Var2->CreatorBackTraceIndexHigh = 0;
    p_Var2->SpareWORD = 0;
  }
  else {
    FUN_1446dd670(&p_Var2->EntryCount,DVar1,0);
    memcpy(*(void **)&p_Var2->EntryCount,_Src,(longlong)(int)DVar1 * 2);
  }
  p_Var2[1].Type = 0;
  p_Var2[1].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var2[1].field_0x4 = 0;
  *(undefined4 *)&p_Var2[1].CriticalSection = 0;
  FUN_14114e6dc(p_Var2 + 1,param_1 + 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443dab55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443dab98 FUN_1443dab98 body=49 status=ok
// SIG undefined FUN_1443dab98(void)

undefined8 FUN_1443dab98(longlong param_1,undefined8 param_2,byte *param_3)

{
  longlong *plVar1;
  undefined8 in_RAX;
  undefined7 uVar2;
  undefined7 extraout_var;
  
  uVar2 = (undefined7)((ulonglong)in_RAX >> 8);
  plVar1 = *(longlong **)(param_1 + 0x30);
  if (plVar1 != (longlong *)0x0 && *(int *)(param_1 + 0x38) != 0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,param_3[0x38] == 0 | *param_3);
    uVar2 = extraout_var;
  }
  return CONCAT71(uVar2,1);
}



// FUNCTION 1443dabca FUN_1443dabca body=57 status=ok
// SIG undefined FUN_1443dabca(void)

undefined8 * FUN_1443dabca(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba5dff0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443dac18 FUN_1443dac18 body=167 status=ok
// SIG undefined FUN_1443dac18(void)

void FUN_1443dac18(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e06450;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba5dff0;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  return;
}



// FUNCTION 1443dacc0 FUN_1443dacc0 body=167 status=ok
// SIG undefined FUN_1443dacc0(void)

void FUN_1443dacc0(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e06450;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba5dff0;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  return;
}



// FUNCTION 1443dad68 FUN_1443dad68 body=206 status=ok
// SIG undefined FUN_1443dad68(void)

void FUN_1443dad68(longlong param_1,LPCRITICAL_SECTION param_2)

{
  DWORD DVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  void *_Src;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_149e06450;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14ba5dff0;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var2->EntryCount = 0;
  p_Var2->ContentionCount = 0;
  DVar1 = *(DWORD *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  p_Var2->Flags = DVar1;
  if ((longlong)(int)DVar1 == 0) {
    p_Var2->CreatorBackTraceIndexHigh = 0;
    p_Var2->SpareWORD = 0;
  }
  else {
    FUN_1446dd670(&p_Var2->EntryCount,DVar1,0);
    memcpy(*(void **)&p_Var2->EntryCount,_Src,(longlong)(int)DVar1 * 2);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443dae24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443dae3c FUN_1443dae3c body=57 status=ok
// SIG undefined FUN_1443dae3c(void)

undefined8 * FUN_1443dae3c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba5e060;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443dae8a FUN_1443dae8a body=167 status=ok
// SIG undefined FUN_1443dae8a(void)

void FUN_1443dae8a(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e06450;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba5e060;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  return;
}



// FUNCTION 1443daf32 FUN_1443daf32 body=167 status=ok
// SIG undefined FUN_1443daf32(void)

void FUN_1443daf32(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e06450;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba5e060;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  return;
}



// FUNCTION 1443dafda FUN_1443dafda body=206 status=ok
// SIG undefined FUN_1443dafda(void)

void FUN_1443dafda(longlong param_1,LPCRITICAL_SECTION param_2)

{
  DWORD DVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  void *_Src;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_149e06450;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14ba5e060;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var2->EntryCount = 0;
  p_Var2->ContentionCount = 0;
  DVar1 = *(DWORD *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  p_Var2->Flags = DVar1;
  if ((longlong)(int)DVar1 == 0) {
    p_Var2->CreatorBackTraceIndexHigh = 0;
    p_Var2->SpareWORD = 0;
  }
  else {
    FUN_1446dd670(&p_Var2->EntryCount,DVar1,0);
    memcpy(*(void **)&p_Var2->EntryCount,_Src,(longlong)(int)DVar1 * 2);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443db096. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443db0ae FUN_1443db0ae body=71 status=ok
// SIG undefined FUN_1443db0ae(void)

undefined8 * FUN_1443db0ae(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba5e0d0;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443db10a FUN_1443db10a body=246 status=ok
// SIG undefined FUN_1443db10a(void)

void FUN_1443db10a(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *pvVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e06450;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba5e0d0;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  pvVar3 = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],pvVar3,(longlong)iVar1 * 2);
  }
  puVar2[6] = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  pvVar3 = *(void **)(param_1 + 0x30);
  *(int *)(puVar2 + 7) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 6,iVar1,0);
    memcpy((void *)puVar2[6],pvVar3,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
  return;
}



// FUNCTION 1443db200 FUN_1443db200 body=246 status=ok
// SIG undefined FUN_1443db200(void)

void FUN_1443db200(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *pvVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e06450;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba5e0d0;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  pvVar3 = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],pvVar3,(longlong)iVar1 * 2);
  }
  puVar2[6] = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  pvVar3 = *(void **)(param_1 + 0x30);
  *(int *)(puVar2 + 7) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 6,iVar1,0);
    memcpy((void *)puVar2[6],pvVar3,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
  return;
}



// FUNCTION 1443db2f6 FUN_1443db2f6 body=288 status=ok
// SIG undefined FUN_1443db2f6(void)

void FUN_1443db2f6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  DWORD DVar1;
  int iVar2;
  PRTL_CRITICAL_SECTION_DEBUG p_Var3;
  void *pvVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var3 = param_2[1].DebugInfo;
  *(undefined ***)p_Var3 = &PTR_LAB_149e06450;
  (p_Var3->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var3 = &PTR_FUN_14ba5e0d0;
  (p_Var3->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var3->EntryCount = 0;
  p_Var3->ContentionCount = 0;
  DVar1 = *(DWORD *)(param_1 + 0x28);
  pvVar4 = *(void **)(param_1 + 0x20);
  p_Var3->Flags = DVar1;
  if ((longlong)(int)DVar1 == 0) {
    p_Var3->CreatorBackTraceIndexHigh = 0;
    p_Var3->SpareWORD = 0;
  }
  else {
    FUN_1446dd670(&p_Var3->EntryCount,DVar1,0);
    memcpy(*(void **)&p_Var3->EntryCount,pvVar4,(longlong)(int)DVar1 * 2);
  }
  p_Var3[1].Type = 0;
  p_Var3[1].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var3[1].field_0x4 = 0;
  iVar2 = *(int *)(param_1 + 0x38);
  pvVar4 = *(void **)(param_1 + 0x30);
  *(int *)&p_Var3[1].CriticalSection = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)&p_Var3[1].CriticalSection + 4) = 0;
  }
  else {
    FUN_1446dd670(p_Var3 + 1,iVar2,0);
    memcpy(*(void **)(p_Var3 + 1),pvVar4,(longlong)iVar2 * 2);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443db400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443db416 FUN_1443db416 body=65 status=ok
// SIG undefined FUN_1443db416(void)

void FUN_1443db416(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_1443db49c(param_1 + 0x18,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443db458 FUN_1443db458 body=67 status=ok
// SIG undefined FUN_1443db458(void)

undefined8 FUN_1443db458(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_1443db49c(param_1 + 0x18,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443db49c FUN_1443db49c body=629 status=ok
// SIG undefined FUN_1443db49c(void)

void FUN_1443db49c(undefined8 *param_1,char *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  void *pvVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [40];
  longlong *local_70;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  undefined8 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*param_2 != '\x01') goto LAB_1443db6d2;
  plVar2 = (longlong *)*param_1;
  local_68 = (void *)0x0;
  local_60 = *(int *)(param_1 + 2);
  lVar6 = (longlong)local_60;
  pvVar3 = (void *)param_1[1];
  local_70 = plVar2;
  if (lVar6 == 0) {
    local_5c = 0;
  }
  else {
    FUN_1446dd670(&local_68,local_60,0);
    memcpy(local_68,pvVar3,lVar6 * 2);
  }
  local_58 = (void *)0x0;
  local_50 = *(int *)(param_1 + 4);
  lVar6 = (longlong)local_50;
  pvVar3 = (void *)param_1[3];
  if (lVar6 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,pvVar3,lVar6 * 2);
  }
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,4,0x10);
  puVar4 = local_48;
  pvVar3 = local_68;
  local_40 = 4;
  *local_48 = &PTR_LAB_149e06450;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14ba5e140;
  local_48[3] = local_70;
  local_48[4] = 0;
  lVar6 = (longlong)local_60;
  *(int *)(local_48 + 5) = local_60;
  if (lVar6 == 0) {
    *(undefined4 *)((longlong)local_48 + 0x2c) = 0;
  }
  else {
    puVar1 = local_48 + 4;
    FUN_1446dd670(puVar1,local_60,0);
    memcpy((void *)*puVar1,pvVar3,lVar6 * 2);
  }
  pvVar3 = local_58;
  puVar4[6] = 0;
  lVar6 = (longlong)local_50;
  *(int *)(puVar4 + 7) = local_50;
  if (lVar6 == 0) {
    *(undefined4 *)((longlong)puVar4 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(puVar4 + 6,local_50,0);
    memcpy((void *)puVar4[6],pvVar3,lVar6 * 2);
  }
  (**(code **)(*plVar2 + 0x2d0))(plVar2,param_1 + 1,&local_48);
  if (local_40 == 0) {
LAB_1443db6aa:
    if (local_48 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
    goto LAB_1443db6aa;
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1443db6d2:
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443db712 FUN_1443db712 body=71 status=ok
// SIG undefined FUN_1443db712(void)

undefined8 * FUN_1443db712(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba5e140;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443db76e FUN_1443db76e body=246 status=ok
// SIG undefined FUN_1443db76e(void)

void FUN_1443db76e(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *pvVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e06450;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba5e140;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  pvVar3 = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],pvVar3,(longlong)iVar1 * 2);
  }
  puVar2[6] = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  pvVar3 = *(void **)(param_1 + 0x30);
  *(int *)(puVar2 + 7) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 6,iVar1,0);
    memcpy((void *)puVar2[6],pvVar3,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
  return;
}



// FUNCTION 1443db864 FUN_1443db864 body=246 status=ok
// SIG undefined FUN_1443db864(void)

void FUN_1443db864(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *pvVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e06450;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba5e140;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  pvVar3 = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],pvVar3,(longlong)iVar1 * 2);
  }
  puVar2[6] = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  pvVar3 = *(void **)(param_1 + 0x30);
  *(int *)(puVar2 + 7) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 6,iVar1,0);
    memcpy((void *)puVar2[6],pvVar3,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
  return;
}



// FUNCTION 1443db95a FUN_1443db95a body=288 status=ok
// SIG undefined FUN_1443db95a(void)

void FUN_1443db95a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  DWORD DVar1;
  int iVar2;
  PRTL_CRITICAL_SECTION_DEBUG p_Var3;
  void *pvVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var3 = param_2[1].DebugInfo;
  *(undefined ***)p_Var3 = &PTR_LAB_149e06450;
  (p_Var3->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var3 = &PTR_FUN_14ba5e140;
  (p_Var3->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var3->EntryCount = 0;
  p_Var3->ContentionCount = 0;
  DVar1 = *(DWORD *)(param_1 + 0x28);
  pvVar4 = *(void **)(param_1 + 0x20);
  p_Var3->Flags = DVar1;
  if ((longlong)(int)DVar1 == 0) {
    p_Var3->CreatorBackTraceIndexHigh = 0;
    p_Var3->SpareWORD = 0;
  }
  else {
    FUN_1446dd670(&p_Var3->EntryCount,DVar1,0);
    memcpy(*(void **)&p_Var3->EntryCount,pvVar4,(longlong)(int)DVar1 * 2);
  }
  p_Var3[1].Type = 0;
  p_Var3[1].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var3[1].field_0x4 = 0;
  iVar2 = *(int *)(param_1 + 0x38);
  pvVar4 = *(void **)(param_1 + 0x30);
  *(int *)&p_Var3[1].CriticalSection = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)&p_Var3[1].CriticalSection + 4) = 0;
  }
  else {
    FUN_1446dd670(p_Var3 + 1,iVar2,0);
    memcpy(*(void **)(p_Var3 + 1),pvVar4,(longlong)iVar2 * 2);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443dba64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443dba84 FUN_1443dba84 body=20 status=ok
// SIG undefined FUN_1443dba84(void)

undefined1 FUN_1443dba84(longlong param_1)

{
  FUN_1443dba98(param_1 + 0x18);
  return 1;
}



// FUNCTION 1443dba98 FUN_1443dba98 body=620 status=ok
// SIG undefined FUN_1443dba98(void)

void FUN_1443dba98(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  void *pvVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [40];
  longlong *local_70;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  undefined8 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar2 = (longlong *)*param_1;
  local_68 = (void *)0x0;
  local_60 = *(int *)(param_1 + 2);
  lVar6 = (longlong)local_60;
  pvVar3 = (void *)param_1[1];
  local_70 = plVar2;
  if (lVar6 == 0) {
    local_5c = 0;
  }
  else {
    FUN_1446dd670(&local_68,local_60,0);
    memcpy(local_68,pvVar3,lVar6 * 2);
  }
  local_58 = (void *)0x0;
  local_50 = *(int *)(param_1 + 4);
  lVar6 = (longlong)local_50;
  pvVar3 = (void *)param_1[3];
  if (lVar6 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,pvVar3,lVar6 * 2);
  }
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,4,0x10);
  puVar4 = local_48;
  pvVar3 = local_68;
  local_40 = 4;
  *local_48 = &PTR_LAB_149e06450;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14ba5e1b0;
  local_48[3] = local_70;
  local_48[4] = 0;
  lVar6 = (longlong)local_60;
  *(int *)(local_48 + 5) = local_60;
  if (lVar6 == 0) {
    *(undefined4 *)((longlong)local_48 + 0x2c) = 0;
  }
  else {
    puVar1 = local_48 + 4;
    FUN_1446dd670(puVar1,local_60,0);
    memcpy((void *)*puVar1,pvVar3,lVar6 * 2);
  }
  pvVar3 = local_58;
  puVar4[6] = 0;
  lVar6 = (longlong)local_50;
  *(int *)(puVar4 + 7) = local_50;
  if (lVar6 == 0) {
    *(undefined4 *)((longlong)puVar4 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(puVar4 + 6,local_50,0);
    memcpy((void *)puVar4[6],pvVar3,lVar6 * 2);
  }
  (**(code **)(*plVar2 + 0x2c8))(plVar2,param_1 + 1,&local_48);
  if (local_40 != 0) {
    if (local_48 == (undefined8 *)0x0) goto LAB_1443dbca7;
    (**(code **)*local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
  }
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1443dbca7:
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443dbd06 FUN_1443dbd06 body=71 status=ok
// SIG undefined FUN_1443dbd06(void)

undefined8 * FUN_1443dbd06(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba5e1b0;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443dbd62 FUN_1443dbd62 body=246 status=ok
// SIG undefined FUN_1443dbd62(void)

void FUN_1443dbd62(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *pvVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e06450;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba5e1b0;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  pvVar3 = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],pvVar3,(longlong)iVar1 * 2);
  }
  puVar2[6] = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  pvVar3 = *(void **)(param_1 + 0x30);
  *(int *)(puVar2 + 7) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 6,iVar1,0);
    memcpy((void *)puVar2[6],pvVar3,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
  return;
}



// FUNCTION 1443dbe58 FUN_1443dbe58 body=246 status=ok
// SIG undefined FUN_1443dbe58(void)

void FUN_1443dbe58(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *pvVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e06450;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba5e1b0;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  pvVar3 = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],pvVar3,(longlong)iVar1 * 2);
  }
  puVar2[6] = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  pvVar3 = *(void **)(param_1 + 0x30);
  *(int *)(puVar2 + 7) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 6,iVar1,0);
    memcpy((void *)puVar2[6],pvVar3,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
  return;
}



// FUNCTION 1443dbf4e FUN_1443dbf4e body=288 status=ok
// SIG undefined FUN_1443dbf4e(void)

void FUN_1443dbf4e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  DWORD DVar1;
  int iVar2;
  PRTL_CRITICAL_SECTION_DEBUG p_Var3;
  void *pvVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var3 = param_2[1].DebugInfo;
  *(undefined ***)p_Var3 = &PTR_LAB_149e06450;
  (p_Var3->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var3 = &PTR_FUN_14ba5e1b0;
  (p_Var3->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var3->EntryCount = 0;
  p_Var3->ContentionCount = 0;
  DVar1 = *(DWORD *)(param_1 + 0x28);
  pvVar4 = *(void **)(param_1 + 0x20);
  p_Var3->Flags = DVar1;
  if ((longlong)(int)DVar1 == 0) {
    p_Var3->CreatorBackTraceIndexHigh = 0;
    p_Var3->SpareWORD = 0;
  }
  else {
    FUN_1446dd670(&p_Var3->EntryCount,DVar1,0);
    memcpy(*(void **)&p_Var3->EntryCount,pvVar4,(longlong)(int)DVar1 * 2);
  }
  p_Var3[1].Type = 0;
  p_Var3[1].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var3[1].field_0x4 = 0;
  iVar2 = *(int *)(param_1 + 0x38);
  pvVar4 = *(void **)(param_1 + 0x30);
  *(int *)&p_Var3[1].CriticalSection = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)&p_Var3[1].CriticalSection + 4) = 0;
  }
  else {
    FUN_1446dd670(p_Var3 + 1,iVar2,0);
    memcpy(*(void **)(p_Var3 + 1),pvVar4,(longlong)iVar2 * 2);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443dc058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443dc078 FUN_1443dc078 body=20 status=ok
// SIG undefined FUN_1443dc078(void)

undefined1 FUN_1443dc078(longlong param_1)

{
  FUN_1443dc08c(param_1 + 0x18);
  return 1;
}



// FUNCTION 1443dc08c FUN_1443dc08c body=469 status=ok
// SIG undefined FUN_1443dc08c(void)

void FUN_1443dc08c(undefined8 *param_1)

{
  longlong *plVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_88 [40];
  longlong *local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  undefined8 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = (longlong *)*param_1;
  local_58 = (void *)0x0;
  local_50 = *(int *)(param_1 + 2);
  lVar4 = (longlong)local_50;
  pvVar2 = (void *)param_1[1];
  local_60 = plVar1;
  if (lVar4 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,pvVar2,lVar4 * 2);
  }
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  pvVar2 = local_58;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e06450;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar3;
  *local_48 = &PTR_FUN_14ba5e220;
  local_48[3] = local_60;
  local_48[4] = 0;
  lVar4 = (longlong)local_50;
  *(int *)(local_48 + 5) = local_50;
  if (lVar4 == 0) {
    *(undefined4 *)((longlong)local_48 + 0x2c) = 0;
  }
  else {
    puVar5 = local_48 + 4;
    FUN_1446dd670(puVar5,local_50,0);
    memcpy((void *)*puVar5,pvVar2,lVar4 * 2);
  }
  (**(code **)(*plVar1 + 0x2b8))(plVar1,param_1 + 1,param_1 + 3,&local_48);
  if (local_40 != 0) {
    if (local_48 == (undefined8 *)0x0) goto LAB_1443dc213;
    (**(code **)*local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
  }
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1443dc213:
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443dc262 FUN_1443dc262 body=57 status=ok
// SIG undefined FUN_1443dc262(void)

undefined8 * FUN_1443dc262(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba5e220;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443dc2b0 FUN_1443dc2b0 body=167 status=ok
// SIG undefined FUN_1443dc2b0(void)

void FUN_1443dc2b0(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e06450;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba5e220;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  return;
}



// FUNCTION 1443dc358 FUN_1443dc358 body=167 status=ok
// SIG undefined FUN_1443dc358(void)

void FUN_1443dc358(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e06450;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba5e220;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  return;
}



// FUNCTION 1443dc400 FUN_1443dc400 body=206 status=ok
// SIG undefined FUN_1443dc400(void)

void FUN_1443dc400(longlong param_1,LPCRITICAL_SECTION param_2)

{
  DWORD DVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  void *_Src;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_149e06450;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14ba5e220;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var2->EntryCount = 0;
  p_Var2->ContentionCount = 0;
  DVar1 = *(DWORD *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  p_Var2->Flags = DVar1;
  if ((longlong)(int)DVar1 == 0) {
    p_Var2->CreatorBackTraceIndexHigh = 0;
    p_Var2->SpareWORD = 0;
  }
  else {
    FUN_1446dd670(&p_Var2->EntryCount,DVar1,0);
    memcpy(*(void **)&p_Var2->EntryCount,_Src,(longlong)(int)DVar1 * 2);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443dc4bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443dc4d4 FUN_1443dc4d4 body=57 status=ok
// SIG undefined FUN_1443dc4d4(void)

undefined8 * FUN_1443dc4d4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba5e290;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443dc522 FUN_1443dc522 body=167 status=ok
// SIG undefined FUN_1443dc522(void)

void FUN_1443dc522(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14ba5e300;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba5e290;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  return;
}



// FUNCTION 1443dc5ca FUN_1443dc5ca body=167 status=ok
// SIG undefined FUN_1443dc5ca(void)

void FUN_1443dc5ca(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14ba5e300;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba5e290;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  return;
}



// FUNCTION 1443dc672 FUN_1443dc672 body=206 status=ok
// SIG undefined FUN_1443dc672(void)

void FUN_1443dc672(longlong param_1,LPCRITICAL_SECTION param_2)

{
  DWORD DVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  void *_Src;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14ba5e300;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14ba5e290;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var2->EntryCount = 0;
  p_Var2->ContentionCount = 0;
  DVar1 = *(DWORD *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  p_Var2->Flags = DVar1;
  if ((longlong)(int)DVar1 == 0) {
    p_Var2->CreatorBackTraceIndexHigh = 0;
    p_Var2->SpareWORD = 0;
  }
  else {
    FUN_1446dd670(&p_Var2->EntryCount,DVar1,0);
    memcpy(*(void **)&p_Var2->EntryCount,_Src,(longlong)(int)DVar1 * 2);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443dc72e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443dc746 FUN_1443dc746 body=57 status=ok
// SIG undefined FUN_1443dc746(void)

undefined8 * FUN_1443dc746(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba5e370;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443dc794 FUN_1443dc794 body=167 status=ok
// SIG undefined FUN_1443dc794(void)

void FUN_1443dc794(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e06450;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba5e370;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  return;
}



// FUNCTION 1443dc83c FUN_1443dc83c body=167 status=ok
// SIG undefined FUN_1443dc83c(void)

void FUN_1443dc83c(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e06450;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba5e370;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  return;
}



// FUNCTION 1443dc8e4 FUN_1443dc8e4 body=206 status=ok
// SIG undefined FUN_1443dc8e4(void)

void FUN_1443dc8e4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  DWORD DVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  void *_Src;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_149e06450;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14ba5e370;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var2->EntryCount = 0;
  p_Var2->ContentionCount = 0;
  DVar1 = *(DWORD *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  p_Var2->Flags = DVar1;
  if ((longlong)(int)DVar1 == 0) {
    p_Var2->CreatorBackTraceIndexHigh = 0;
    p_Var2->SpareWORD = 0;
  }
  else {
    FUN_1446dd670(&p_Var2->EntryCount,DVar1,0);
    memcpy(*(void **)&p_Var2->EntryCount,_Src,(longlong)(int)DVar1 * 2);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443dc9a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443dc9b8 FUN_1443dc9b8 body=97 status=ok
// SIG undefined FUN_1443dc9b8(void)

undefined8 * FUN_1443dc9b8(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba5e5a0;
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
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443dca2e FUN_1443dca2e body=197 status=ok
// SIG undefined FUN_1443dca2e(void)

void FUN_1443dca2e(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  longlong lVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14ba5de10;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba5e5a0;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],_Src,(longlong)iVar1 * 2);
  }
  puVar2[6] = *(undefined8 *)(param_1 + 0x30);
  lVar3 = *(longlong *)(param_1 + 0x38);
  puVar2[7] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1443dcaf4 FUN_1443dcaf4 body=197 status=ok
// SIG undefined FUN_1443dcaf4(void)

void FUN_1443dcaf4(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  longlong lVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14ba5de10;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba5e5a0;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],_Src,(longlong)iVar1 * 2);
  }
  puVar2[6] = *(undefined8 *)(param_1 + 0x30);
  lVar3 = *(longlong *)(param_1 + 0x38);
  puVar2[7] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1443dcbba FUN_1443dcbba body=253 status=ok
// SIG undefined FUN_1443dcbba(void)

void FUN_1443dcbba(longlong param_1,LPCRITICAL_SECTION param_2)

{
  DWORD DVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  void *_Src;
  undefined8 uVar3;
  _RTL_CRITICAL_SECTION *p_Var4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14ba5de10;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14ba5e5a0;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var2->EntryCount = 0;
  p_Var2->ContentionCount = 0;
  DVar1 = *(DWORD *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  p_Var2->Flags = DVar1;
  if ((longlong)(int)DVar1 == 0) {
    p_Var2->CreatorBackTraceIndexHigh = 0;
    p_Var2->SpareWORD = 0;
  }
  else {
    FUN_1446dd670(&p_Var2->EntryCount,DVar1,0);
    memcpy(*(void **)&p_Var2->EntryCount,_Src,(longlong)(int)DVar1 * 2);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  p_Var2[1].Type = (short)uVar3;
  p_Var2[1].CreatorBackTraceIndex = (short)((ulonglong)uVar3 >> 0x10);
  *(int *)&p_Var2[1].field_0x4 = (int)((ulonglong)uVar3 >> 0x20);
  p_Var4 = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  p_Var2[1].CriticalSection = p_Var4;
  if (p_Var4 != (_RTL_CRITICAL_SECTION *)0x0) {
    LOCK();
    p_Var4->LockCount = p_Var4->LockCount + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443dcca1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443dccb8 FUN_1443dccb8 body=66 status=ok
// SIG undefined FUN_1443dccb8(void)

void FUN_1443dccb8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_4;
  FUN_1443dcd42(param_1 + 0x18,param_2,param_3,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443dccfc FUN_1443dccfc body=68 status=ok
// SIG undefined FUN_1443dccfc(void)

undefined8 FUN_1443dccfc(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_4;
  FUN_1443dcd42(param_1 + 0x18,param_2,param_3,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443dcd42 FUN_1443dcd42 body=190 status=ok
// SIG undefined FUN_1443dcd42(void)

void FUN_1443dcd42(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*param_4 == '\x01') {
    lVar5 = FUN_148fd89a6(*param_1,param_1 + 1);
    lVar3 = *(longlong *)(lVar5 + 0x20);
    plVar4 = *(longlong **)(lVar5 + 0x28);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
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
    if (lVar3 != 0) {
      (**(code **)(*(longlong *)param_1[3] + 0xb0))
                ((longlong *)param_1[3],param_2,param_3,&DAT_14cb8e138,lVar3);
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
                    /* WARNING: Could not recover jumptable at 0x0001443dcdfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x10))(plVar4);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1443dce00 FUN_1443dce00 body=91 status=ok
// SIG undefined FUN_1443dce00(void)

void FUN_1443dce00(void)

{
  if (DAT_14cbf58c0 != 0) {
    if (DAT_14cbf58b8 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cbf58b8)(DAT_14cbf58b8,0);
    FUN_1446efa72(&DAT_14cbf58b8,0,0,0x10);
    DAT_14cbf58c0 = 0;
  }
  if (DAT_14cbf58b8 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1443dce5b FUN_1443dce5b body=91 status=ok
// SIG undefined FUN_1443dce5b(void)

void FUN_1443dce5b(void)

{
  if (DAT_14cbf58e8 != 0) {
    if (DAT_14cbf58e0 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cbf58e0)(DAT_14cbf58e0,0);
    FUN_1446efa72(&DAT_14cbf58e0,0,0,0x10);
    DAT_14cbf58e8 = 0;
  }
  if (DAT_14cbf58e0 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1443dceb6 FUN_1443dceb6 body=91 status=ok
// SIG undefined FUN_1443dceb6(void)

void FUN_1443dceb6(void)

{
  if (DAT_14cbf5910 != 0) {
    if (DAT_14cbf5908 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cbf5908)(DAT_14cbf5908,0);
    FUN_1446efa72(&DAT_14cbf5908,0,0,0x10);
    DAT_14cbf5910 = 0;
  }
  if (DAT_14cbf5908 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1443dcf11 FUN_1443dcf11 body=91 status=ok
// SIG undefined FUN_1443dcf11(void)

void FUN_1443dcf11(void)

{
  if (DAT_14cbf5938 != 0) {
    if (DAT_14cbf5930 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cbf5930)(DAT_14cbf5930,0);
    FUN_1446efa72(&DAT_14cbf5930,0,0,0x10);
    DAT_14cbf5938 = 0;
  }
  if (DAT_14cbf5930 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1443dcf6c FUN_1443dcf6c body=91 status=ok
// SIG undefined FUN_1443dcf6c(void)

void FUN_1443dcf6c(void)

{
  if (DAT_14cbf5960 != 0) {
    if (DAT_14cbf5958 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cbf5958)(DAT_14cbf5958,0);
    FUN_1446efa72(&DAT_14cbf5958,0,0,0x10);
    DAT_14cbf5960 = 0;
  }
  if (DAT_14cbf5958 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1443dcfc7 FUN_1443dcfc7 body=91 status=ok
// SIG undefined FUN_1443dcfc7(void)

void FUN_1443dcfc7(void)

{
  if (DAT_14cbf5988 != 0) {
    if (DAT_14cbf5980 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cbf5980)(DAT_14cbf5980,0);
    FUN_1446efa72(&DAT_14cbf5980,0,0,0x10);
    DAT_14cbf5988 = 0;
  }
  if (DAT_14cbf5980 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1443dd022 FUN_1443dd022 body=91 status=ok
// SIG undefined FUN_1443dd022(void)

void FUN_1443dd022(void)

{
  if (DAT_14cbf59b0 != 0) {
    if (DAT_14cbf59a8 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cbf59a8)(DAT_14cbf59a8,0);
    FUN_1446efa72(&DAT_14cbf59a8,0,0,0x10);
    DAT_14cbf59b0 = 0;
  }
  if (DAT_14cbf59a8 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1443dd07d FUN_1443dd07d body=91 status=ok
// SIG undefined FUN_1443dd07d(void)

void FUN_1443dd07d(void)

{
  if (DAT_14cbf59d8 != 0) {
    if (DAT_14cbf59d0 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cbf59d0)(DAT_14cbf59d0,0);
    FUN_1446efa72(&DAT_14cbf59d0,0,0,0x10);
    DAT_14cbf59d8 = 0;
  }
  if (DAT_14cbf59d0 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1443dd0d8 FUN_1443dd0d8 body=91 status=ok
// SIG undefined FUN_1443dd0d8(void)

void FUN_1443dd0d8(void)

{
  if (DAT_14cbf5a00 != 0) {
    if (DAT_14cbf59f8 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cbf59f8)(DAT_14cbf59f8,0);
    FUN_1446efa72(&DAT_14cbf59f8,0,0,0x10);
    DAT_14cbf5a00 = 0;
  }
  if (DAT_14cbf59f8 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1443dd133 FUN_1443dd133 body=91 status=ok
// SIG undefined FUN_1443dd133(void)

void FUN_1443dd133(void)

{
  if (DAT_14cbf5a28 != 0) {
    if (DAT_14cbf5a20 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cbf5a20)(DAT_14cbf5a20,0);
    FUN_1446efa72(&DAT_14cbf5a20,0,0,0x10);
    DAT_14cbf5a28 = 0;
  }
  if (DAT_14cbf5a20 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1443dd18e FUN_1443dd18e body=91 status=ok
// SIG undefined FUN_1443dd18e(void)

void FUN_1443dd18e(void)

{
  if (DAT_14cbf5a50 != 0) {
    if (DAT_14cbf5a48 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cbf5a48)(DAT_14cbf5a48,0);
    FUN_1446efa72(&DAT_14cbf5a48,0,0,0x10);
    DAT_14cbf5a50 = 0;
  }
  if (DAT_14cbf5a48 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1443dd1e9 FUN_1443dd1e9 body=91 status=ok
// SIG undefined FUN_1443dd1e9(void)

void FUN_1443dd1e9(void)

{
  if (DAT_14cbf5a78 != 0) {
    if (DAT_14cbf5a70 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cbf5a70)(DAT_14cbf5a70,0);
    FUN_1446efa72(&DAT_14cbf5a70,0,0,0x10);
    DAT_14cbf5a78 = 0;
  }
  if (DAT_14cbf5a70 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1443dd244 FUN_1443dd244 body=91 status=ok
// SIG undefined FUN_1443dd244(void)

void FUN_1443dd244(void)

{
  if (DAT_14cbf5aa0 != 0) {
    if (DAT_14cbf5a98 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cbf5a98)(DAT_14cbf5a98,0);
    FUN_1446efa72(&DAT_14cbf5a98,0,0,0x10);
    DAT_14cbf5aa0 = 0;
  }
  if (DAT_14cbf5a98 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1443dd29f FUN_1443dd29f body=91 status=ok
// SIG undefined FUN_1443dd29f(void)

void FUN_1443dd29f(void)

{
  if (DAT_14cbf5ac8 != 0) {
    if (DAT_14cbf5ac0 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cbf5ac0)(DAT_14cbf5ac0,0);
    FUN_1446efa72(&DAT_14cbf5ac0,0,0,0x10);
    DAT_14cbf5ac8 = 0;
  }
  if (DAT_14cbf5ac0 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1443dd2fa FUN_1443dd2fa body=91 status=ok
// SIG undefined FUN_1443dd2fa(void)

void FUN_1443dd2fa(void)

{
  if (DAT_14cbf5af0 != 0) {
    if (DAT_14cbf5ae8 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cbf5ae8)(DAT_14cbf5ae8,0);
    FUN_1446efa72(&DAT_14cbf5ae8,0,0,0x10);
    DAT_14cbf5af0 = 0;
  }
  if (DAT_14cbf5ae8 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1443dd355 FUN_1443dd355 body=91 status=ok
// SIG undefined FUN_1443dd355(void)

void FUN_1443dd355(void)

{
  if (DAT_14cbf5b18 != 0) {
    if (DAT_14cbf5b10 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cbf5b10)(DAT_14cbf5b10,0);
    FUN_1446efa72(&DAT_14cbf5b10,0,0,0x10);
    DAT_14cbf5b18 = 0;
  }
  if (DAT_14cbf5b10 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1443dd3b0 FUN_1443dd3b0 body=91 status=ok
// SIG undefined FUN_1443dd3b0(void)

void FUN_1443dd3b0(void)

{
  if (DAT_14cbf5b40 != 0) {
    if (DAT_14cbf5b38 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cbf5b38)(DAT_14cbf5b38,0);
    FUN_1446efa72(&DAT_14cbf5b38,0,0,0x10);
    DAT_14cbf5b40 = 0;
  }
  if (DAT_14cbf5b38 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1443dd40b FUN_1443dd40b body=91 status=ok
// SIG undefined FUN_1443dd40b(void)

void FUN_1443dd40b(void)

{
  if (DAT_14cbf5b68 != 0) {
    if (DAT_14cbf5b60 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cbf5b60)(DAT_14cbf5b60,0);
    FUN_1446efa72(&DAT_14cbf5b60,0,0,0x10);
    DAT_14cbf5b68 = 0;
  }
  if (DAT_14cbf5b60 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1443dd466 FUN_1443dd466 body=91 status=ok
// SIG undefined FUN_1443dd466(void)

void FUN_1443dd466(void)

{
  if (DAT_14cbf5b90 != 0) {
    if (DAT_14cbf5b88 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cbf5b88)(DAT_14cbf5b88,0);
    FUN_1446efa72(&DAT_14cbf5b88,0,0,0x10);
    DAT_14cbf5b90 = 0;
  }
  if (DAT_14cbf5b88 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1443dd4c6 FUN_1443dd4c6 body=229 status=ok
// SIG undefined FUN_1443dd4c6(void)

undefined8 FUN_1443dd4c6(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  longlong *local_68;
  ulonglong uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = (longlong *)0x0;
  uStack_60 = 0;
  FUN_149000e44(param_1 + 2,&local_68);
  if ((longlong)(int)uStack_60 != 0) {
    plVar5 = local_68 + (longlong)(int)uStack_60 * 2;
    plVar4 = local_68;
    do {
      lVar3 = plVar4[1];
      if ((longlong)(int)lVar3 != 0) {
        lVar2 = *plVar4;
        lVar6 = 0;
        do {
          if (*(char *)((longlong)*(longlong **)(lVar2 + lVar6) + 0x21) == '\0') {
            (**(code **)(**(longlong **)(lVar2 + lVar6) + 8))();
          }
          lVar6 = lVar6 + 0x10;
        } while ((longlong)(int)lVar3 * 0x10 != lVar6);
      }
      plVar4 = plVar4 + 2;
    } while (plVar4 != plVar5);
  }
  plVar4 = (longlong *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  FUN_149000ff7(local_68,uStack_60 & 0xffffffff);
  if (local_68 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443dd5ac FUN_1443dd5ac body=860 status=ok
// SIG undefined FUN_1443dd5ac(void)

void FUN_1443dd5ac(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 auStack_e8 [32];
  undefined4 *local_c8;
  code *local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  undefined1 local_90;
  longlong local_88;
  ulonglong uStack_80;
  longlong *local_70;
  longlong *local_68;
  undefined **local_60;
  longlong *local_58;
  undefined8 uStack_50;
  byte local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (((((*(int *)(param_1 + 0x1c) == 0) || (uVar2 = *(uint *)(param_1 + 0x18), (int)uVar2 < 0)) ||
       (DAT_14c9647dc <= (int)uVar2)) ||
      ((plVar8 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar8 == (longlong *)0x0 || ((int)plVar8[2] != *(int *)(param_1 + 0x1c))))) ||
     ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)) {
    local_58 = (longlong *)0x0;
    uStack_50 = 0;
    local_48 = 0;
    local_60 = &PTR_FUN_14a5af930;
    local_40 = 0;
    uStack_38 = 0;
    uVar4 = 0;
  }
  else {
    if ((*(uint *)(plVar8 + 1) & 0x10200000) == 0) {
      lVar5 = *plVar8;
    }
    else {
      lVar5 = 0;
    }
    FUN_148fcdaa6(*(undefined8 *)(lVar5 + 0x70),&local_60,0);
    uVar4 = (ulonglong)local_48;
  }
  if ((&DAT_149fc1b6e)[uVar4] == '\x01') {
    if ((local_58 == (longlong *)0x0) || (cVar3 = (**(code **)(*local_58 + 0x28))(), cVar3 == '\0'))
    goto LAB_1443dd671;
  }
  else if (((ulonglong)local_58 & 0xffffff) == 0) goto LAB_1443dd671;
  plVar8 = (longlong *)FUN_1490001ee(param_1);
  if (plVar8 == (longlong *)0x0) {
    lVar5 = 0;
  }
  else {
    (**(code **)(*plVar8 + 0x10))(plVar8,&local_a0);
    lVar5 = FUN_148fdede0(&local_a0);
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
LAB_1443dd8f4:
    uVar6 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar7 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar7 == (undefined8 *)0x0) ||
         ((*(int *)(puVar7 + 2) != *(int *)(param_1 + 0x1c) ||
          ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)))) goto LAB_1443dd8f4;
      uVar6 = *puVar7;
    }
  }
  plVar8 = (longlong *)FUN_148fcd308(uVar6,0);
  (**(code **)(*plVar8 + 0xb8))(plVar8,&local_70);
  if ((lVar5 != 0) && (local_70 != (longlong *)0x0)) {
    *(undefined1 *)(param_1 + 0x21) = 1;
    local_88 = 0;
    uStack_80 = 0;
    FUN_14900022a(param_1 + 0x38,&local_88);
    FUN_144a2b0a4(lVar5 + 0x38,&local_b0);
    local_a0 = local_b0;
    uStack_9c = uStack_ac;
    iStack_98 = iStack_a8;
    uStack_94 = uStack_a4;
    local_90 = 0;
    local_c0 = FUN_1443dd90a;
    local_b8 = 0;
    FUN_1490003a4(&local_b0,param_1);
    uVar6 = FUN_14127b0d4(&local_60);
    local_c8 = &local_b0;
    (**(code **)(*local_70 + 0x48))(local_70,uVar6,&local_a0,&local_88);
    if (iStack_a8 == 0) {
LAB_1443dd8b5:
      if (CONCAT44(uStack_ac,local_b0) != 0) {
        FUN_1400020a8();
      }
    }
    else {
      puVar7 = (undefined8 *)CONCAT44(uStack_ac,local_b0);
      if (puVar7 != (undefined8 *)0x0) {
        (**(code **)*puVar7)(puVar7,0);
        FUN_1446efa72(&local_b0,0,0,0x10);
        iStack_a8 = 0;
        goto LAB_1443dd8b5;
      }
    }
    if (CONCAT44(uStack_9c,local_a0) != 0) {
      FUN_1400020a8();
    }
    FUN_1447a1747(local_88,uStack_80 & 0xffffffff);
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_68 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)local_68 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_68 + 0x10))(local_68);
      }
    }
  }
LAB_1443dd671:
  local_60 = &PTR_FUN_14a5af930;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  local_60 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_48])(&local_58);
  if ((local_30 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443dd90a FUN_1443dd90a body=1098 status=ok
// SIG undefined FUN_1443dd90a(void)

void FUN_1443dd90a(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined2 *puVar12;
  uint uVar13;
  undefined8 *puVar14;
  bool bVar15;
  undefined1 auStack_e8 [40];
  longlong *local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  undefined **local_90;
  longlong *local_88;
  longlong *local_80;
  byte local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_2 == '\0') {
    *(undefined1 *)(param_1 + 0x21) = 0;
    goto LAB_1443dd942;
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
LAB_1443ddd4e:
    uVar8 = 0;
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x18);
    uVar8 = 0;
    if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
      puVar9 = (undefined8 *)
               ((ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
      if ((puVar9 == (undefined8 *)0x0) ||
         ((*(int *)(puVar9 + 2) != *(int *)(param_1 + 0x1c) ||
          ((*(uint *)(puVar9 + 1) & 0x10200000) != 0)))) goto LAB_1443ddd4e;
      uVar8 = *puVar9;
    }
  }
  plVar6 = (longlong *)FUN_148fcd308(uVar8,0);
  (**(code **)(*plVar6 + 0xb8))(plVar6,&local_a0);
  if ((local_a0 != (longlong *)0x0) && ((longlong)*(int *)(param_5 + 1) != 0)) {
    puVar9 = (undefined8 *)*param_5;
    puVar14 = puVar9 + (longlong)*(int *)(param_5 + 1) * 2;
    local_c0 = (longlong *)(param_1 + 0x38);
    do {
      (**(code **)(*local_a0 + 0x58))(local_a0,&local_b0,param_4,puVar9);
      plVar6 = local_c0;
      if (local_b0 != (longlong *)0x0) {
        iVar5 = *(int *)(puVar9 + 1);
        uVar10 = 0;
        iVar7 = iVar5 + -1;
        if (iVar5 == 0) {
          iVar7 = 0;
        }
        if (0 < iVar7) {
          puVar12 = &DAT_149dfb77a;
          if (iVar5 != 0) {
            puVar12 = (undefined2 *)*puVar9;
          }
          lVar11 = 0;
          uVar10 = 0;
          do {
            uVar4 = ((uint)(ushort)puVar12[lVar11] +
                    (uint)(0x19 < (ushort)puVar12[lVar11] - 0x61) * 0x20) - 0x20;
            uVar13 = (uint)(uVar10 >> 8) ^
                     *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar10 ^ uVar4) & 0xff) * 4);
            uVar10 = (ulonglong)
                     (uVar13 >> 8 ^
                     *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar13 & 0xff ^ uVar4 >> 8 & 0xff) * 4))
            ;
            lVar11 = lVar11 + 1;
          } while (iVar7 != (int)lVar11);
        }
        iVar5 = FUN_148fffce2(local_c0,uVar10,puVar9);
        if (iVar5 == -1) {
          lVar11 = 0;
        }
        else {
          lVar11 = (longlong)iVar5 * 0x28 + *plVar6;
        }
        if (((*(int *)(lVar11 + 0x18) != 0) && (*(longlong **)(lVar11 + 0x10) != (longlong *)0x0))
           && (cVar3 = (**(code **)(**(longlong **)(lVar11 + 0x10) + 0x30))(), plVar6 = local_c0,
              cVar3 != '\0')) {
          iVar5 = *(int *)(puVar9 + 1);
          uVar10 = 0;
          iVar7 = iVar5 + -1;
          if (iVar5 == 0) {
            iVar7 = 0;
          }
          if (0 < iVar7) {
            puVar12 = &DAT_149dfb77a;
            if (iVar5 != 0) {
              puVar12 = (undefined2 *)*puVar9;
            }
            lVar11 = 0;
            uVar10 = 0;
            do {
              uVar4 = ((uint)(ushort)puVar12[lVar11] +
                      (uint)(0x19 < (ushort)puVar12[lVar11] - 0x61) * 0x20) - 0x20;
              uVar13 = (uint)(uVar10 >> 8) ^
                       *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar10 ^ uVar4) & 0xff) * 4);
              uVar10 = (ulonglong)
                       (uVar13 >> 8 ^
                       *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar13 & 0xff ^ uVar4 >> 8 & 0xff) * 4
                                ));
              lVar11 = lVar11 + 1;
            } while (iVar7 != (int)lVar11);
          }
          iVar5 = FUN_148fffce2(local_c0,uVar10,puVar9);
          if (iVar5 == -1) {
            lVar11 = 0;
          }
          else {
            lVar11 = (longlong)iVar5 * 0x28 + *plVar6;
          }
          local_88 = local_b0;
          local_80 = local_a8;
          if (local_a8 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
            UNLOCK();
          }
          local_78 = 0;
          local_90 = &PTR_FUN_14a5af930;
          local_70 = 0;
          uStack_68 = 0;
          if (*(int *)(lVar11 + 0x18) == 0) {
            plVar6 = (longlong *)0x0;
          }
          else {
            plVar6 = *(longlong **)(lVar11 + 0x10);
          }
          (**(code **)(*plVar6 + 0x58))(plVar6,*(undefined1 *)(param_1 + 0x20),1,&local_90);
          local_90 = &PTR_FUN_14a5af930;
          if (local_70 != 0) {
            FUN_1400020a8();
          }
          local_90 = &PTR_FUN_14a184370;
          (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_78])();
        }
      }
      plVar6 = local_a8;
      if (local_a8 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_a8 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_a8)();
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar6 + 0x10))();
          }
        }
      }
      puVar9 = puVar9 + 2;
    } while (puVar9 != puVar14);
  }
  plVar6 = *(longlong **)(param_1 + 0x10);
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    local_90 = (undefined **)0x0;
  }
  else {
    iVar5 = (int)plVar6[1];
    local_90 = (undefined **)0x0;
    do {
      if (iVar5 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_1443ddcad;
      }
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar15 = iVar5 == iVar7;
      if (bVar15) {
        *(int *)(plVar6 + 1) = iVar5 + 1;
        iVar7 = iVar5;
      }
      iVar5 = iVar7;
      UNLOCK();
    } while (!bVar15);
    local_90 = *(undefined ***)(param_1 + 8);
  }
LAB_1443ddcad:
  local_88 = plVar6;
  FUN_1446f470e(&local_b8,L"MapExternalIds",1);
  if ((*(int *)(param_1 + 0x30) != 0) &&
     (plVar2 = *(longlong **)(param_1 + 0x28), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x60))(plVar2,local_b8,&local_90);
    plVar6 = local_88;
  }
  if (plVar6 != (longlong *)0x0) {
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
  if (local_98 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_98 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_98)(local_98);
      LOCK();
      piVar1 = (int *)((longlong)local_98 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_98 + 0x10))(local_98);
      }
    }
  }
LAB_1443dd942:
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443ddd56 FUN_1443ddd56 body=62 status=ok
// SIG undefined FUN_1443ddd56(void)

void FUN_1443ddd56(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_1443d49ca(param_2,param_1 + 1,(char)param_1[3]);
  FUN_1490048a0(lVar1 + 0x220,param_2,(char)param_1[3],1);
  return;
}



// FUNCTION 1443ddd94 FUN_1443ddd94 body=93 status=ok
// SIG undefined FUN_1443ddd94(void)

undefined8 * FUN_1443ddd94(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14ba607b0;
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 0x18);
  puVar2[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(puVar2 + 4) = *(undefined1 *)(param_1 + 0x20);
  return puVar2 + 1;
}



// FUNCTION 1443dddf8 FUN_1443dddf8 body=29 status=ok
// SIG undefined FUN_1443dddf8(void)

void FUN_1443dddf8(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1443dde16 FUN_1443dde16 body=83 status=ok
// SIG undefined FUN_1443dde16(void)

undefined8 * FUN_1443dde16(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba607b0;
  plVar3 = (longlong *)param_1[3];
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



// FUNCTION 1443dde6a FUN_1443dde6a body=262 status=ok
// SIG undefined FUN_1443dde6a(void)

void FUN_1443dde6a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_78 [32];
  undefined **local_58 [3];
  byte local_40;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148fcdaa6(param_2,local_58,*(undefined1 *)(param_1 + 8));
  cVar3 = FUN_140ba41f1(local_58,param_1 + 0x10);
  if (cVar3 == '\0') {
    local_58[0] = &PTR_FUN_14a5af930;
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    local_58[0] = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_40])();
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x40);
    local_58[0] = &PTR_FUN_14a5af930;
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    local_58[0] = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_40])();
    if (lVar1 != 0) {
      pcVar2 = *(code **)(param_1 + 0x40);
      plVar5 = (longlong *)(param_1 + 0x60);
      if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
        plVar5 = *(longlong **)(param_1 + 0x50);
      }
      uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
      (*pcVar2)(uVar4,param_2);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443ddf72 FUN_1443ddf72 body=179 status=ok
// SIG undefined FUN_1443ddf72(void)

undefined8 * FUN_1443ddf72(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x90,0x10);
  *param_2 = puVar3;
  *puVar3 = &PTR_FUN_14ba607d0;
  *(undefined1 *)(puVar3 + 3) = *(undefined1 *)(param_1 + 0x18);
  puVar3[2] = *(undefined8 *)(param_1 + 0x10);
  puVar3[4] = &PTR_FUN_14a184370;
  bVar1 = *(byte *)(param_1 + 0x38);
  *(byte *)(puVar3 + 7) = bVar1;
  (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[bVar1])(puVar3 + 5,param_1 + 0x28);
  puVar3[4] = &PTR_FUN_14a5af930;
  puVar3[8] = 0;
  puVar3[9] = 0;
  lVar2 = *(longlong *)(param_1 + 0x50);
  puVar3[10] = lVar2;
  puVar3[0xc] = 0;
  if (lVar2 != 0) {
    puVar4 = (undefined8 *)(param_1 + 0x70);
    if (*(undefined8 **)(param_1 + 0x60) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)(param_1 + 0x60);
    }
    (**(code **)*puVar4)(puVar4,puVar3 + 0xc);
  }
  return puVar3 + 2;
}



// FUNCTION 1443de02c FUN_1443de02c body=29 status=ok
// SIG undefined FUN_1443de02c(void)

void FUN_1443de02c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1443de04a FUN_1443de04a body=125 status=ok
// SIG undefined FUN_1443de04a(void)

undefined8 * FUN_1443de04a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14ba607d0;
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  param_1[4] = &PTR_FUN_14a5af930;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[4] = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(param_1 + 7)])(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443de11a FUN_1443de11a body=12 status=ok
// SIG undefined FUN_1443de11a(void)

void FUN_1443de11a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001443de123. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1443de126 FUN_1443de126 body=83 status=ok
// SIG undefined FUN_1443de126(void)

undefined8 * FUN_1443de126(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14ba607f0;
  plVar3 = (longlong *)param_1[3];
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



// FUNCTION 1443de17a FUN_1443de17a body=616 status=ok
// SIG undefined FUN_1443de17a(void)

void FUN_1443de17a(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined **local_90;
  longlong *local_88;
  undefined **local_80;
  longlong *local_78;
  longlong *local_70;
  undefined **local_68;
  longlong *local_60;
  byte local_50;
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar4 = (longlong *)*param_1;
  plVar7 = (longlong *)FUN_148fdc7e6(param_1,(char)param_1[1]);
  if (plVar7 == (longlong *)0x0) {
    local_80 = (undefined **)0x0;
  }
  else {
    (**(code **)(*plVar7 + 0x10))(plVar7,&local_80);
  }
  (**(code **)(*plVar4 + 0x180))(plVar4);
  local_68 = local_80;
  plVar7 = (longlong *)FUN_1401e3228();
  (**(code **)(*plVar7 + 0x28))(plVar7,&local_78);
  FUN_148fcdaa6(param_2,&local_68,(char)param_1[1]);
  uVar8 = FUN_14127b0d4(&local_68);
  uVar9 = 0xffffffff;
  if (((((int)plVar4[0x1c] != 0) && (uVar3 = *(uint *)((longlong)plVar4 + 0xdc), -1 < (int)uVar3))
      && ((int)uVar3 < DAT_14c9647dc)) &&
     (((plVar7 = (longlong *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       plVar7 != (longlong *)0x0 && ((int)plVar7[2] == (int)plVar4[0x1c])) &&
      (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 && (*plVar7 != 0)))))) {
    uVar9 = *(undefined4 *)(*plVar7 + 0xe0);
  }
  local_98 = plVar4 + 8;
  (**(code **)(*local_78 + 0x1d0))(local_78,&local_90,uVar9,uVar8);
  local_68 = &PTR_FUN_14a5af930;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  local_68 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_50])();
  plVar7 = local_88;
  if (local_90 != (undefined **)0x0) {
    lVar5 = param_1[1];
    local_68 = local_90;
    local_60 = local_88;
    if (local_88 == (longlong *)0x0) {
      FUN_148fe43b0(param_2,&local_68,(char)lVar5);
    }
    else {
      LOCK();
      *(int *)(local_88 + 1) = (int)local_88[1] + 1;
      UNLOCK();
      FUN_148fe43b0(param_2,&local_68,(char)lVar5);
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
    }
    iVar6 = FUN_148fcf75e(param_2,(char)param_1[1]);
    if (iVar6 == 2) {
      FUN_149001c18(plVar4 + 0x38,param_2,(char)param_1[1]);
    }
  }
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_88 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar1 = (int *)((longlong)local_88 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_88 + 0x10))(local_88);
      }
    }
  }
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_70 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443de402 FUN_1443de402 body=12 status=ok
// SIG undefined FUN_1443de402(void)

void FUN_1443de402(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001443de40b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1443de40e FUN_1443de40e body=29 status=ok
// SIG undefined FUN_1443de40e(void)

undefined8 FUN_1443de40e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443de42c FUN_1443de42c body=618 status=ok
// SIG undefined FUN_1443de42c(void)

void FUN_1443de42c(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined **local_90;
  longlong *local_88;
  undefined **local_80;
  longlong *local_78;
  longlong *local_70;
  undefined **local_68;
  longlong *local_60;
  byte local_50;
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar4 = (longlong *)*param_1;
  plVar7 = (longlong *)FUN_148fdc7e6(param_1,(char)param_1[1]);
  if (plVar7 == (longlong *)0x0) {
    local_80 = (undefined **)0x0;
  }
  else {
    (**(code **)(*plVar7 + 0x10))(plVar7,&local_80);
  }
  (**(code **)(*plVar4 + 0x180))(plVar4);
  local_68 = local_80;
  plVar7 = (longlong *)FUN_1401e3228();
  (**(code **)(*plVar7 + 0x28))(plVar7,&local_78);
  FUN_148fcdaa6(param_2,&local_68,(char)param_1[1]);
  uVar8 = FUN_14127b0d4(&local_68);
  uVar9 = 0xffffffff;
  if (((((int)plVar4[0x1c] != 0) && (uVar3 = *(uint *)((longlong)plVar4 + 0xdc), -1 < (int)uVar3))
      && ((int)uVar3 < DAT_14c9647dc)) &&
     (((plVar7 = (longlong *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       plVar7 != (longlong *)0x0 && ((int)plVar7[2] == (int)plVar4[0x1c])) &&
      (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 && (*plVar7 != 0)))))) {
    uVar9 = *(undefined4 *)(*plVar7 + 0xe0);
  }
  local_98 = plVar4 + 8;
  (**(code **)(*local_78 + 0x1d0))(local_78,&local_90,uVar9,uVar8);
  local_68 = &PTR_FUN_14a5af930;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  local_68 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_50])();
  plVar7 = local_88;
  if (local_90 != (undefined **)0x0) {
    lVar5 = param_1[1];
    local_68 = local_90;
    local_60 = local_88;
    if (local_88 == (longlong *)0x0) {
      FUN_148fe43b0(param_2,&local_68,(char)lVar5);
    }
    else {
      LOCK();
      *(int *)(local_88 + 1) = (int)local_88[1] + 1;
      UNLOCK();
      FUN_148fe43b0(param_2,&local_68,(char)lVar5);
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
    }
    cVar6 = FUN_148fcefaa(param_2,(char)param_1[1]);
    if (cVar6 != '\0') {
      FUN_1490048a0(plVar4 + 0x3e,param_2,(char)param_1[1],1);
    }
  }
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_88 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar1 = (int *)((longlong)local_88 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_88 + 0x10))(local_88);
      }
    }
  }
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_70 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443de6b6 FUN_1443de6b6 body=12 status=ok
// SIG undefined FUN_1443de6b6(void)

void FUN_1443de6b6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001443de6bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1443de6c2 FUN_1443de6c2 body=29 status=ok
// SIG undefined FUN_1443de6c2(void)

undefined8 FUN_1443de6c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443de6e0 FUN_1443de6e0 body=522 status=ok
// SIG undefined FUN_1443de6e0(void)

void FUN_1443de6e0(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined **local_90;
  longlong *local_88;
  undefined **local_80;
  longlong *local_78;
  longlong *local_70;
  undefined **local_68;
  longlong *local_60;
  byte local_50;
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar3 = (longlong *)*param_1;
  plVar6 = (longlong *)FUN_148fdc7e6(param_1,(char)param_1[1]);
  if (plVar6 == (longlong *)0x0) {
    local_80 = (undefined **)0x0;
  }
  else {
    (**(code **)(*plVar6 + 0x10))(plVar6,&local_80);
  }
  (**(code **)(*plVar3 + 0x180))(plVar3);
  local_68 = local_80;
  plVar6 = (longlong *)FUN_1401e3228();
  (**(code **)(*plVar6 + 0x28))(plVar6,&local_78);
  FUN_148fcdaa6(param_2,&local_68,(char)param_1[1]);
  uVar7 = FUN_14127b0d4(&local_68);
  local_98 = param_1 + 2;
  (**(code **)(*local_78 + 0x1d0))(local_78,&local_90,(int)param_1[4],uVar7);
  local_68 = &PTR_FUN_14a5af930;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  local_68 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_50])();
  plVar6 = local_88;
  if (local_90 != (undefined **)0x0) {
    lVar4 = param_1[1];
    local_68 = local_90;
    local_60 = local_88;
    if (local_88 == (longlong *)0x0) {
      FUN_148fe43b0(param_2,&local_68,(char)lVar4);
    }
    else {
      LOCK();
      *(int *)(local_88 + 1) = (int)local_88[1] + 1;
      UNLOCK();
      FUN_148fe43b0(param_2,&local_68,(char)lVar4);
      if (plVar6 != (longlong *)0x0) {
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
    iVar5 = FUN_148fcf75e(param_2,(char)param_1[1]);
    if (iVar5 == 3) {
      FUN_149001c18(plVar3 + 0x3b,param_2,(char)param_1[1]);
    }
  }
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_88 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar1 = (int *)((longlong)local_88 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_88 + 0x10))(local_88);
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
      piVar1 = (int *)((longlong)local_70 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_70 + 0x10))(local_70);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443de8ec FUN_1443de8ec body=164 status=ok
// SIG undefined FUN_1443de8ec(void)

undefined8 * FUN_1443de8ec(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x30,8);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14ba60850;
  *(undefined1 *)(puVar2 + 2) = *(undefined1 *)(param_1 + 0x10);
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  puVar2[3] = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  _Src = *(void **)(param_1 + 0x18);
  *(int *)(puVar2 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 3,iVar1,0);
    memcpy((void *)puVar2[3],_Src,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(param_1 + 0x28);
  return puVar2 + 1;
}



// FUNCTION 1443de996 FUN_1443de996 body=29 status=ok
// SIG undefined FUN_1443de996(void)

void FUN_1443de996(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1443de9b4 FUN_1443de9b4 body=57 status=ok
// SIG undefined FUN_1443de9b4(void)

undefined8 * FUN_1443de9b4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba60850;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443de9ee FUN_1443de9ee body=59 status=ok
// SIG undefined FUN_1443de9ee(void)

void FUN_1443de9ee(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(longlong *)*param_1 + 0x350))((longlong *)*param_1,param_2,param_1 + 1);
  if (cVar1 == '\0') {
    return;
  }
  FUN_148fe3b7c(param_2,param_1[1]);
  return;
}



// FUNCTION 1443dea62 FUN_1443dea62 body=12 status=ok
// SIG undefined FUN_1443dea62(void)

void FUN_1443dea62(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001443dea6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1443dea6e FUN_1443dea6e body=83 status=ok
// SIG undefined FUN_1443dea6e(void)

undefined8 * FUN_1443dea6e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14ba60870;
  plVar3 = (longlong *)param_1[3];
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



// FUNCTION 1443deac2 FUN_1443deac2 body=697 status=ok
// SIG undefined FUN_1443deac2(void)

void FUN_1443deac2(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 auStack_e8 [40];
  longlong *local_c0;
  undefined8 local_b8;
  undefined **local_b0;
  longlong *local_a8;
  longlong *local_a0;
  undefined8 *local_98;
  ulonglong uStack_90;
  undefined8 *local_88;
  longlong *local_80;
  undefined **local_78 [3];
  byte local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar3 = (longlong *)*param_1;
  local_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  plVar5 = (longlong *)FUN_148fdc7e6(0,(char)param_1[1]);
  if (plVar5 == (longlong *)0x0) {
    local_b0 = (undefined **)0x0;
  }
  else {
    (**(code **)(*plVar5 + 0x10))(plVar5,&local_b0);
  }
  (**(code **)(*plVar3 + 0x180))(plVar3);
  local_78[0] = local_b0;
  plVar5 = (longlong *)FUN_1401e3228();
  (**(code **)(*plVar5 + 0x28))(plVar5,&local_a8);
  FUN_148fcdaa6(plVar3[0xe],local_78,(char)param_1[1]);
  uVar6 = FUN_14127b0d4(local_78);
  cVar4 = (**(code **)(*local_a8 + 0x278))(local_a8,uVar6,&local_98);
  local_78[0] = &PTR_FUN_14a5af930;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  local_78[0] = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])();
  if (cVar4 != '\0') {
    local_c0 = plVar3;
    local_b8 = param_2;
    FUN_148fcdaa6(param_2,local_78,(char)param_1[1]);
    if ((longlong)(int)uStack_90 != 0) {
      lVar7 = (longlong)(int)uStack_90 << 4;
      puVar8 = local_98;
      do {
        plVar3 = (longlong *)*puVar8;
        plVar5 = (longlong *)puVar8[1];
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        uVar6 = FUN_14127b0d4(local_78);
        (**(code **)(*plVar3 + 8))(plVar3,&local_88);
        cVar4 = (**(code **)*local_88)(local_88,uVar6);
        plVar3 = local_80;
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
        if (plVar5 != (longlong *)0x0) {
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
        uVar6 = local_b8;
        if (cVar4 != '\0') {
          if (puVar8 != (undefined8 *)0x0) {
            FUN_1443d481c(local_b8,puVar8,(char)param_1[1]);
            FUN_1490048a0(local_c0 + 0x41,uVar6,(char)param_1[1],1);
          }
          break;
        }
        puVar8 = puVar8 + 2;
        lVar7 = lVar7 + -0x10;
      } while (lVar7 != 0);
    }
    local_78[0] = &PTR_FUN_14a5af930;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    local_78[0] = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])();
  }
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_a0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar2 = (int *)((longlong)local_a0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_a0 + 0x10))(local_a0);
      }
    }
  }
  FUN_145cf835c(local_98,uStack_90 & 0xffffffff);
  if (local_98 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443ded9a FUN_1443ded9a body=12 status=ok
// SIG undefined FUN_1443ded9a(void)

void FUN_1443ded9a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001443deda3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1443deda6 FUN_1443deda6 body=29 status=ok
// SIG undefined FUN_1443deda6(void)

undefined8 FUN_1443deda6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443dedc4 FUN_1443dedc4 body=141 status=ok
// SIG undefined FUN_1443dedc4(void)

void FUN_1443dedc4(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_1;
  cVar2 = FUN_148fddcfe(param_2);
  if (cVar2 == '\0') {
    (**(code **)(*param_2 + 0x3b0))(param_2,param_1[1]);
    local_30 = param_1[1];
    local_28 = param_1[2];
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
    }
    FUN_14900572a(lVar1 + 0x298,param_2,&local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443dee8a FUN_1443dee8a body=12 status=ok
// SIG undefined FUN_1443dee8a(void)

void FUN_1443dee8a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001443dee93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1443dee96 FUN_1443dee96 body=83 status=ok
// SIG undefined FUN_1443dee96(void)

undefined8 * FUN_1443dee96(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14ba608b0;
  plVar3 = (longlong *)param_1[3];
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



// FUNCTION 1443deeea FUN_1443deeea body=135 status=ok
// SIG undefined FUN_1443deeea(void)

void FUN_1443deeea(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_1;
  (**(code **)(*param_2 + 0x3b8))(param_2,param_1[1],(char)param_1[3]);
  lVar2 = param_1[3];
  local_30 = param_1[1];
  local_28 = param_1[2];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_1490058dc(lVar1 + 0x2b0,param_2,&local_30,(char)lVar2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443def72 FUN_1443def72 body=93 status=ok
// SIG undefined FUN_1443def72(void)

undefined8 * FUN_1443def72(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14ba608d0;
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 0x18);
  puVar2[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(puVar2 + 4) = *(undefined1 *)(param_1 + 0x20);
  return puVar2 + 1;
}



// FUNCTION 1443defd6 FUN_1443defd6 body=29 status=ok
// SIG undefined FUN_1443defd6(void)

void FUN_1443defd6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1443deff4 FUN_1443deff4 body=83 status=ok
// SIG undefined FUN_1443deff4(void)

undefined8 * FUN_1443deff4(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba608d0;
  plVar3 = (longlong *)param_1[3];
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



// FUNCTION 1443df048 FUN_1443df048 body=559 status=ok
// SIG undefined FUN_1443df048(void)

void FUN_1443df048(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined1 auStack_88 [32];
  code *local_68;
  undefined4 local_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  longlong *local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar3 = (longlong *)FUN_1490074ae();
  if (plVar3 == (longlong *)0x0) {
    local_48 = (longlong *)0x0;
    plStack_40 = (longlong *)0x0;
    goto LAB_1443df21d;
  }
  (**(code **)(*plVar3 + 0xb8))(plVar3,&local_48);
  plVar3 = local_48;
  if ((local_48 == (longlong *)0x0) || (*(int *)(param_1 + 0x40) <= *(int *)(param_1 + 0x6c)))
  goto LAB_1443df21d;
  *(undefined1 *)(param_1 + 0x21) = 1;
  if (*(int *)(param_1 + 0x1c) == 0) {
LAB_1443df267:
    lVar4 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x18);
    lVar4 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar5 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar5 == (longlong *)0x0) ||
         (((int)plVar5[2] != *(int *)(param_1 + 0x1c) || ((*(uint *)(plVar5 + 1) & 0x10200000) != 0)
          ))) goto LAB_1443df267;
      lVar4 = *plVar5;
    }
  }
  uVar6 = 0xffffffff;
  if ((((*(int *)(lVar4 + 0xe0) != 0) && (uVar2 = *(uint *)(lVar4 + 0xdc), -1 < (int)uVar2)) &&
      ((int)uVar2 < DAT_14c9647dc)) &&
     (((plVar5 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar5 != (longlong *)0x0 && ((int)plVar5[2] == *(int *)(lVar4 + 0xe0))) &&
      (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (*plVar5 != 0)))))) {
    uVar6 = *(undefined4 *)(*plVar5 + 0xe0);
  }
  local_68 = FUN_1443df278;
  local_60 = 0;
  FUN_1490074ea(&local_58,param_1);
  (**(code **)(*plVar3 + 0x10))(plVar3,&local_68,uVar6,&local_58);
  if ((int)uStack_50 == 0) {
LAB_1443df1c7:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    uStack_50 = (ulonglong)uStack_50._4_4_ << 0x20;
    goto LAB_1443df1c7;
  }
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  FUN_14900766c(param_1 + 0x38,&local_58);
  (**(code **)(*local_48 + 8))(local_48,uVar6,&local_58);
  FUN_14127b1cd(local_58,uStack_50 & 0xffffffff);
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1443df21d:
  plVar3 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar5 = plStack_40 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443df278 FUN_1443df278 body=1657 status=ok
// SIG undefined FUN_1443df278(void)

void FUN_1443df278(longlong param_1,int param_2,undefined1 param_3,longlong *param_4)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  uint uVar13;
  undefined8 *puVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong *plVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  int iVar22;
  bool bVar23;
  undefined1 auStack_b8 [38];
  byte local_92;
  undefined1 local_91;
  undefined8 local_90;
  undefined8 *local_88;
  uint *local_80;
  int local_74;
  undefined8 local_70;
  undefined8 local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (((((*(int *)(param_1 + 0x1c) == 0) || (uVar13 = *(uint *)(param_1 + 0x18), (int)uVar13 < 0))
       || (DAT_14c9647dc <= (int)uVar13)) ||
      ((plVar19 = (longlong *)
                  ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8)),
       plVar19 == (longlong *)0x0 || ((int)plVar19[2] != *(int *)(param_1 + 0x1c))))) ||
     ((*(uint *)(plVar19 + 1) & 0x10200000) != 0)) goto LAB_1443df364;
  if ((*(uint *)(plVar19 + 1) & 0x10200000) == 0) {
    lVar17 = *plVar19;
  }
  else {
    lVar17 = 0;
  }
  iVar15 = -1;
  if ((((*(int *)(lVar17 + 0xe0) != 0) && (uVar13 = *(uint *)(lVar17 + 0xdc), -1 < (int)uVar13)) &&
      (((int)uVar13 < DAT_14c9647dc &&
       (((plVar19 = (longlong *)
                    ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8)),
         plVar19 != (longlong *)0x0 && ((int)plVar19[2] == *(int *)(lVar17 + 0xe0))) &&
        ((*(uint *)(plVar19 + 1) & 0x10200000) == 0)))))) && (*plVar19 != 0)) {
    iVar15 = *(int *)(*plVar19 + 0xe0);
  }
  if (iVar15 != param_2) goto LAB_1443df364;
  plVar19 = (longlong *)FUN_1490074ae(param_1);
  if (plVar19 == (longlong *)0x0) {
    local_58 = (longlong *)0x0;
    plStack_50 = (longlong *)0x0;
  }
  else {
    local_91 = param_3;
    local_74 = param_2;
    (**(code **)(*plVar19 + 0xb8))(plVar19,&local_58);
    if (local_58 != (longlong *)0x0) {
      local_80 = (uint *)(param_1 + 0x48);
      uVar13 = *(uint *)(param_1 + 0x60);
      local_88 = (undefined8 *)(ulonglong)uVar13;
      if (uVar13 == 0) {
        uVar21 = 1;
        uVar20 = 0;
        local_90 = (undefined8 *)((ulonglong)local_90._4_4_ << 0x20);
        puVar9 = (undefined8 *)0x0;
      }
      else {
        puVar8 = *(uint **)(param_1 + 0x58);
        if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
          puVar8 = local_80;
        }
        uVar6 = *puVar8;
        if (uVar6 == 0) {
          iVar15 = uVar13 + 0x1e;
          if (-1 < (int)(uVar13 - 1)) {
            iVar15 = uVar13 - 1;
          }
          uVar20 = 0;
          uVar21 = (ulonglong)(uint)(iVar15 >> 5);
          if (iVar15 >> 5 < 1) {
            uVar21 = uVar20;
          }
          iVar15 = 0;
          do {
            if (uVar21 == uVar20) goto LAB_1443df4b8;
            iVar15 = iVar15 + 0x20;
            uVar6 = puVar8[uVar20 + 1];
            uVar20 = uVar20 + 1;
          } while (uVar6 == 0);
        }
        else {
          uVar20 = 0;
          iVar15 = 0;
        }
        uVar21 = (ulonglong)(-uVar6 & uVar6);
        uVar2 = uVar21 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        local_90 = (undefined8 *)CONCAT44(local_90._4_4_,iVar15);
        uVar6 = (iVar15 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        puVar9 = (undefined8 *)(ulonglong)uVar6;
        if ((int)uVar13 <= (int)uVar6) {
          puVar9 = local_88;
        }
      }
      if ((uint)puVar9 != uVar13) {
        uVar13 = 0xffffffff;
        bVar12 = 1;
        do {
          local_92 = bVar12;
          if ((longlong)(int)param_4[1] == 0) goto LAB_1443df464;
          lVar17 = *(longlong *)(param_1 + 0x38);
          puVar14 = (undefined8 *)*param_4;
          lVar18 = (longlong)(int)param_4[1] << 4;
          while (cVar5 = (*(code *)**(undefined8 **)*puVar14)
                                   ((undefined8 *)*puVar14,
                                    *(undefined8 *)((longlong)(int)puVar9 * 0x28 + lVar17)),
                cVar5 == '\0') {
            puVar14 = puVar14 + 2;
            lVar18 = lVar18 + -0x10;
            if (lVar18 == 0) goto LAB_1443df464;
          }
          if (puVar14 == (undefined8 *)0x0) goto LAB_1443df464;
          uVar13 = uVar13 & ~(uint)uVar21;
          puVar8 = *(uint **)(param_1 + 0x58);
          if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
            puVar8 = local_80;
          }
          uVar6 = *(uint *)(param_1 + 0x60);
          iVar15 = (int)uVar20;
          lVar17 = (longlong)iVar15;
          uVar16 = puVar8[lVar17] & uVar13;
          if (uVar16 == 0) {
            iVar7 = uVar6 + 0x1e;
            if (-1 < (int)(uVar6 - 1)) {
              iVar7 = uVar6 - 1;
            }
            iVar7 = iVar7 >> 5;
            local_90._0_4_ = (int)local_90 + 0x20;
            iVar22 = iVar7;
            if (iVar7 < iVar15) {
              iVar22 = iVar15;
            }
            if (iVar15 < iVar7) {
              lVar18 = 0;
              do {
                uVar16 = puVar8[lVar17 + lVar18 + 1];
                if (uVar16 != 0) {
                  uVar20 = (ulonglong)(iVar15 + (int)lVar18 + 1);
                  uVar13 = 0xffffffff;
                  goto LAB_1443df7f2;
                }
                local_90._0_4_ = (int)local_90 + 0x20;
                lVar18 = lVar18 + 1;
              } while (iVar22 - lVar17 != lVar18);
              uVar13 = 0xffffffff;
              iVar15 = iVar22;
            }
            uVar20 = (ulonglong)(iVar15 + 1);
            uVar16 = uVar6;
          }
          else {
LAB_1443df7f2:
            uVar21 = (ulonglong)(-uVar16 & uVar16);
            uVar2 = uVar21 * 2 + 1;
            lVar17 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            uVar16 = ((int)local_90 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
            if ((int)uVar6 <= (int)uVar16) {
              uVar16 = uVar6;
            }
          }
          puVar9 = (undefined8 *)(ulonglong)uVar16;
          bVar12 = local_92 & 1;
        } while (uVar16 != (uint)local_88);
        if (bVar12 == 0) goto LAB_1443df464;
      }
LAB_1443df4b8:
      if ((longlong)(int)param_4[1] != 0) {
        puVar9 = (undefined8 *)*param_4;
        local_90 = puVar9 + (longlong)(int)param_4[1] * 2;
        do {
          local_88 = puVar9;
          (**(code **)(*local_58 + 0x38))(local_58,&local_68,local_74,*puVar9);
          iVar15 = *(int *)(param_1 + 0x60);
          if (iVar15 == 0) {
            uVar20 = 1;
            uVar21 = 0;
            iVar22 = 0;
            iVar7 = 0;
          }
          else {
            puVar8 = *(uint **)(param_1 + 0x58);
            if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
              puVar8 = local_80;
            }
            uVar13 = *puVar8;
            if (uVar13 == 0) {
              iVar7 = iVar15 + 0x1e;
              if (-1 < iVar15 + -1) {
                iVar7 = iVar15 + -1;
              }
              uVar21 = 0;
              uVar20 = (ulonglong)(uint)(iVar7 >> 5);
              if (iVar7 >> 5 < 1) {
                uVar20 = uVar21;
              }
              iVar22 = 0;
              do {
                if (uVar20 == uVar21) goto LAB_1443df581;
                iVar22 = iVar22 + 0x20;
                uVar13 = puVar8[uVar21 + 1];
                uVar21 = uVar21 + 1;
              } while (uVar13 == 0);
            }
            else {
              uVar21 = 0;
              iVar22 = 0;
            }
            uVar20 = (ulonglong)(-uVar13 & uVar13);
            uVar2 = uVar20 * 2 + 1;
            lVar17 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            iVar7 = (iVar22 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
            if (iVar15 <= iVar7) {
              iVar7 = iVar15;
            }
          }
          if (iVar7 != iVar15) {
            uVar13 = 0xffffffff;
            do {
              lVar17 = *(longlong *)(param_1 + 0x38);
              cVar5 = (*(code *)**(undefined8 **)*local_88)
                                ((undefined8 *)*local_88,
                                 *(undefined8 *)(lVar17 + (longlong)iVar7 * 0x28));
              if (cVar5 != '\0') {
                lVar17 = lVar17 + (longlong)iVar7 * 0x28;
                if ((*(int *)(lVar17 + 0x18) != 0) &&
                   (plVar19 = *(longlong **)(lVar17 + 0x10), plVar19 != (longlong *)0x0)) {
                  (**(code **)(*plVar19 + 0x60))
                            (plVar19,*(undefined1 *)(param_1 + 0x20),local_91,&local_68);
                }
                break;
              }
              uVar13 = uVar13 & ~(uint)uVar20;
              puVar8 = *(uint **)(param_1 + 0x58);
              if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
                puVar8 = local_80;
              }
              iVar3 = *(int *)(param_1 + 0x60);
              iVar7 = (int)uVar21;
              lVar17 = (longlong)iVar7;
              uVar6 = puVar8[lVar17] & uVar13;
              if (uVar6 == 0) {
                iVar10 = iVar3 + 0x1e;
                if (-1 < iVar3 + -1) {
                  iVar10 = iVar3 + -1;
                }
                iVar10 = iVar10 >> 5;
                iVar22 = iVar22 + 0x20;
                iVar11 = iVar10;
                if (iVar10 < iVar7) {
                  iVar11 = iVar7;
                }
                if (iVar7 < iVar10) {
                  lVar18 = 0;
                  do {
                    uVar6 = puVar8[lVar17 + lVar18 + 1];
                    if (uVar6 != 0) {
                      uVar21 = (ulonglong)(iVar7 + (int)lVar18 + 1);
                      uVar13 = 0xffffffff;
                      goto LAB_1443df663;
                    }
                    iVar22 = iVar22 + 0x20;
                    lVar18 = lVar18 + 1;
                  } while (iVar11 - lVar17 != lVar18);
                  uVar13 = 0xffffffff;
                  lVar17 = (longlong)iVar11;
                }
                uVar21 = lVar17 + 1U & 0xffffffff;
                iVar7 = iVar3;
              }
              else {
LAB_1443df663:
                uVar20 = (ulonglong)(-uVar6 & uVar6);
                uVar2 = uVar20 * 2 + 1;
                lVar17 = 0x3f;
                if (uVar2 != 0) {
                  for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                  }
                }
                iVar7 = (iVar22 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
                if (iVar3 <= iVar7) {
                  iVar7 = iVar3;
                }
              }
            } while (iVar7 != iVar15);
          }
LAB_1443df581:
          plVar19 = local_60;
          if (local_60 != (longlong *)0x0) {
            LOCK();
            plVar4 = local_60 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
              (**(code **)*local_60)();
              LOCK();
              piVar1 = (int *)((longlong)plVar19 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar19 + 0x10))();
              }
            }
          }
          puVar9 = local_88 + 2;
        } while (puVar9 != local_90);
      }
      plVar19 = *(longlong **)(param_1 + 0x10);
      if (plVar19 == (longlong *)0x0) {
        plVar19 = (longlong *)0x0;
        local_68 = 0;
      }
      else {
        iVar15 = (int)plVar19[1];
        local_68 = 0;
        do {
          if (iVar15 == 0) {
            plVar19 = (longlong *)0x0;
            goto LAB_1443df858;
          }
          LOCK();
          iVar7 = (int)plVar19[1];
          bVar23 = iVar15 == iVar7;
          if (bVar23) {
            *(int *)(plVar19 + 1) = iVar15 + 1;
            iVar7 = iVar15;
          }
          iVar15 = iVar7;
          UNLOCK();
        } while (!bVar23);
        local_68 = *(undefined8 *)(param_1 + 8);
      }
LAB_1443df858:
      local_60 = plVar19;
      FUN_1446f470e(&local_70,L"UserInfo",1);
      if ((*(int *)(param_1 + 0x30) != 0) &&
         (plVar4 = *(longlong **)(param_1 + 0x28), plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x60))(plVar4,local_70,&local_68);
        plVar19 = local_60;
      }
      if (plVar19 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar19 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
LAB_1443df464:
  plVar19 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar4 = plStack_50 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar19 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
      }
    }
  }
LAB_1443df364:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443df8f2 FUN_1443df8f2 body=2304 status=ok
// SIG undefined FUN_1443df8f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1443df8f2(void)

{
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  undefined **ppuStack_90;
  undefined8 local_88;
  undefined1 local_7c [4];
  wchar_t *local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1446f470e(&DAT_14cbf52c0,L"UNSET",1);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Party",&PTR_FUN_14ba514f0,1,0);
  local_78 = L"Online";
  local_70 = 6;
  FUN_1446e940c(&local_64,&local_78);
  local_78 = L"OnlinePresence";
  local_70 = 0xe;
  FUN_1446e940c(local_7c,&local_78);
  local_78 = L"Online";
  local_70 = 6;
  FUN_140208c1e(&DAT_14cbf52e0,local_7c,&local_64,&local_78);
  atexit((_func_5014 *)&LAB_1443bd27d);
  local_78 = L"Offline";
  local_70 = 7;
  FUN_1446e940c(&local_64,&local_78);
  local_78 = L"OnlinePresence";
  local_70 = 0xe;
  FUN_1446e940c(local_7c,&local_78);
  local_78 = L"Offline";
  local_70 = 7;
  FUN_140208c1e(&DAT_14cbf52f0,local_7c,&local_64,&local_78);
  atexit((_func_5014 *)&LAB_1443bd291);
  local_78 = L"Away";
  local_70 = 4;
  FUN_1446e940c(&local_64,&local_78);
  local_78 = L"OnlinePresence";
  local_70 = 0xe;
  FUN_1446e940c(local_7c,&local_78);
  local_78 = L"Away";
  local_70 = 4;
  FUN_140208c1e(&DAT_14cbf5300,local_7c,&local_64,&local_78);
  atexit((_func_5014 *)&LAB_1443bd2a5);
  local_78 = L"DoNotDisturb";
  local_70 = 0xc;
  FUN_1446e940c(&local_64,&local_78);
  local_78 = L"OnlinePresence";
  local_70 = 0xe;
  FUN_1446e940c(local_7c,&local_78);
  local_78 = L"Do Not Disturb";
  local_70 = 0xe;
  FUN_140208c1e(&DAT_14cbf5310,local_7c,&local_64,&local_78);
  atexit((_func_5014 *)&LAB_1443bd2b9);
  local_78 = L"Chat";
  local_70 = 4;
  FUN_1446e940c(&local_64,&local_78);
  local_78 = L"OnlinePresence";
  local_70 = 0xe;
  FUN_1446e940c(local_7c,&local_78);
  local_78 = L"Chat";
  local_70 = 4;
  FUN_140208c1e(&DAT_14cbf5320,local_7c,&local_64,&local_78);
  atexit((_func_5014 *)&LAB_1443bd2cd);
  FUN_1446f470e(&DAT_14cbf5330,L"Creation",1);
  FUN_1446f470e(&DAT_14cbf5338,L"Invitation",1);
  FUN_1446f470e(&DAT_14cbf5340,L"RequestToJoin",1);
  FUN_1446f470e(&DAT_14cbf5348,L"Presence",1);
  FUN_1446f470e(&DAT_14cbf5350,L"PlatformSession",1);
  FUN_1446f470e(&DAT_14cbf5358,L"CommandLineJoin",1);
  FUN_1446f470e(&DAT_14cbf5360,L"Unspecified",1);
  FUN_140056680(&DAT_14cbf5368,L"NotFound");
  atexit((_func_5014 *)&LAB_1443bd2e1);
  FUN_140056680(&DAT_14cbf5378,L"AddingSelfFail");
  atexit((_func_5014 *)&LAB_1443bd2f2);
  FUN_140056680(&DAT_14cbf5388,L"AddingBlockedFail");
  atexit((_func_5014 *)&LAB_1443bd303);
  FUN_140056680(&DAT_14cbf5398,L"AlreadyFriends");
  atexit((_func_5014 *)&LAB_1443bd314);
  FUN_140056680(&DAT_14cbf53a8,L"NotPendingInbound");
  atexit((_func_5014 *)&LAB_1443bd325);
  local_88 = 1;
  ppuStack_90 = &PTR_FUN_14ba51a80;
  local_98 = 0;
  FUN_14282b410(L"/Script/Party",&PTR_FUN_14ba51aa0,1,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Party",&PTR_FUN_14ba51f70,1,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Party",&PTR_FUN_14ba52560,1,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Party",&PTR_FUN_14ba52950,1,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Party",&PTR_FUN_14ba52d90,1,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Party",&PTR_FUN_14ba53170,1,0);
  local_78 = (wchar_t *)0x800000014b6040e0;
  local_64 = 5;
  local_70 = FUN_14577453c(L"Party",&local_64);
  local_6c = 1;
  FUN_146671122(&local_78);
  ppuStack_90 = (undefined **)0x0;
  local_88 = 0;
  local_98 = 5;
  FUN_14282b410(L"/Script/Party",&PTR_FUN_14ba546e0,1,&PTR_FUN_14ba54610);
  FUN_1446f470e(&DAT_14cbf5528,L"PRESENCESEARCH",1);
  local_98 = local_98 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cbf5530,L"Party.PlatformSession.Create.AllowFailure",&DAT_14c7649a8,
                L"Are we ok with allowing party session creation to fail? If not, we\'ll continuously retry until we succeed or leave the party."
               );
  atexit(FUN_1443bfce0);
  local_98 = local_98 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cbf5540,L"Party.PlatformSession.RetryDelay",&DAT_14c7649ac,
                L"Time in seconds to wait between reattempts to create or join a party platform session."
               );
  atexit(FUN_1443bfd25);
  FUN_1446f470e(&DAT_14cbf5550,L"FindSession",1);
  FUN_1446f470e(&DAT_14cbf5558,L"JoinSesson",1);
  FUN_1446f470e(&DAT_14cbf5560,L"CreateSession",1);
  ppuStack_90 = &PTR_FUN_14ba55900;
  local_88 = 6;
  local_98 = 3;
  FUN_14282b410(L"/Script/Party",0,0,&PTR_FUN_14ba559c0);
  ppuStack_90 = (undefined **)0x0;
  local_88 = 0;
  local_98 = 1;
  FUN_14282b410(L"/Script/Party",&PTR_FUN_14ba56580,1,&PTR_FUN_14ba56550);
  local_98 = local_98 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cbf5670,L"Party.AllowJoinsDuringLoad",&DAT_14c7649b0,
                L"Enables joins while leader is trying to load into a game\n1 Enables. 0 disables.")
  ;
  atexit(FUN_1443c35e5);
  local_98 = CONCAT44(local_98._4_4_,1);
  FUN_141471170(&DAT_14cbf5680,L"Party.AutoApproveJoinRequests",&DAT_14cbf5690,
                L"Cheat to force all join requests to be immediately approved\n1 Enables. 0 disables."
               );
  atexit(FUN_1443c362a);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Party",&PTR_FUN_14ba56ba0,1,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Party",&PTR_FUN_14ba57190,1,0);
  local_78 = (wchar_t *)((ulonglong)local_78 & 0xffffffffffffff00);
  local_98 = local_98 & 0xffffffff00000000;
  FUN_140bd5914(&DAT_14cbf56c8,L"SocialUI.ForceDisconnectedToPartyService",&local_78,
                L"Overrides the bIsConnectedToPartyService state");
  atexit(FUN_1443cc789);
  FUN_1446f470e(&DAT_14cbf56e0,L"FindPlatformSession",1);
  FUN_1446f470e(&DAT_14cbf56e8,L"QueryJoinability",1);
  FUN_1446f470e(&DAT_14cbf56f0,L"LeaveCurrentParty",1);
  FUN_1446f470e(&DAT_14cbf56f8,L"JoinParty",1);
  FUN_1446f470e(&DAT_14cbf5700,L"DeferredPartyCreation",1);
  FUN_1446f470e(&DAT_14cbf5708,L"WaitForPersistentPartyCreation",1);
  DAT_14cbf5710 = 0;
  _DAT_14cbf5718 = 0;
  atexit((_func_5014 *)&LAB_1443cc7ce);
  DAT_14cbf5720 = 0;
  _DAT_14cbf5728 = 0;
  atexit((_func_5014 *)&LAB_1443cc7df);
  ppuStack_90 = (undefined **)0x0;
  local_88 = 0;
  local_98 = 1;
  FUN_14282b410(L"/Script/Party",&PTR_FUN_14ba57db0,1,&PTR_FUN_14ba57d80);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Party",&PTR_FUN_14ba58400,1,0);
  DAT_14cbf57a8 = 0;
  DAT_14cbf57b0 = 0;
  DAT_14cbf5788 = 0;
  _DAT_14cbf5790 = 0;
  _DAT_14cbf57b4 = 0xffffffff00000080;
  DAT_14cbf57bc = 0;
  DAT_14cbf57c8 = 0;
  DAT_14cbf57d0 = 0;
  atexit(FUN_1443d0254);
  ppuStack_90 = &PTR_FUN_14ba58890;
  local_98 = 1;
  local_88 = 4;
  FUN_14282b410(L"/Script/Party",0,0,&PTR_FUN_14ba58910);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Party",&PTR_FUN_14ba58d90,1,0);
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443e02ae FUN_1443e02ae body=468 status=ok
// SIG undefined FUN_1443e02ae(void)

void FUN_1443e02ae(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *local_88;
  longlong *plStack_80;
  undefined **local_78;
  undefined8 local_70;
  longlong *local_68;
  byte local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (1 < *(int *)(param_2 + 8)) {
    if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
    }
    else {
      uVar5 = 0;
    }
    plVar3 = (longlong *)FUN_148fcd308(uVar5,param_4);
    if (plVar3 == (longlong *)0x0) {
      local_88 = (longlong *)0x0;
      plStack_80 = (longlong *)0x0;
    }
    else {
      (**(code **)(*plVar3 + 0xd0))(plVar3,&local_88);
      if (local_88 != (longlong *)0x0) {
        if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
          lVar4 = *(longlong *)(param_1 + 0x20);
        }
        else {
          lVar4 = 0;
        }
        uVar5 = *(undefined8 *)(lVar4 + 0x70);
        FUN_148fcdaa6(uVar5,&local_78,param_4);
        if ((&DAT_149fc1b6e)[local_60] == '\x01') {
          uVar6 = local_70;
          if (local_68 == (longlong *)0x0) {
            plVar3 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_68 + 1) = (int)local_68[1] + 1;
            UNLOCK();
            plVar3 = local_68;
          }
        }
        else {
          plVar3 = (longlong *)0x0;
          uVar6 = 0;
        }
        local_78 = &PTR_FUN_14a5af930;
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        local_78 = &PTR_FUN_14a184370;
        (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])();
        plVar1 = local_88;
        FUN_148fe2e6e(uVar5,&local_78,param_4);
        local_98 = param_3;
        (**(code **)(*plVar1 + 0x18))(plVar1,uVar6,param_2,&local_78);
        if (local_78 != (undefined **)0x0) {
          FUN_1400020a8();
        }
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
      }
    }
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
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443e0484 FUN_1443e0484 body=468 status=ok
// SIG undefined FUN_1443e0484(void)

void FUN_1443e0484(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *local_88;
  longlong *plStack_80;
  undefined **local_78;
  undefined8 local_70;
  longlong *local_68;
  byte local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (1 < *(int *)(param_2 + 8)) {
    if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
    }
    else {
      uVar5 = 0;
    }
    plVar3 = (longlong *)FUN_148fcd308(uVar5,param_4);
    if (plVar3 == (longlong *)0x0) {
      local_88 = (longlong *)0x0;
      plStack_80 = (longlong *)0x0;
    }
    else {
      (**(code **)(*plVar3 + 0xd0))(plVar3,&local_88);
      if (local_88 != (longlong *)0x0) {
        if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
          lVar4 = *(longlong *)(param_1 + 0x20);
        }
        else {
          lVar4 = 0;
        }
        uVar5 = *(undefined8 *)(lVar4 + 0x70);
        FUN_148fcdaa6(uVar5,&local_78,param_4);
        if ((&DAT_149fc1b6e)[local_60] == '\x01') {
          uVar6 = local_70;
          if (local_68 == (longlong *)0x0) {
            plVar3 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_68 + 1) = (int)local_68[1] + 1;
            UNLOCK();
            plVar3 = local_68;
          }
        }
        else {
          plVar3 = (longlong *)0x0;
          uVar6 = 0;
        }
        local_78 = &PTR_FUN_14a5af930;
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        local_78 = &PTR_FUN_14a184370;
        (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])();
        plVar1 = local_88;
        FUN_148fe2e6e(uVar5,&local_78,param_4);
        local_98 = param_3;
        (**(code **)(*plVar1 + 0x20))(plVar1,uVar6,param_2,&local_78);
        if (local_78 != (undefined **)0x0) {
          FUN_1400020a8();
        }
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
      }
    }
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
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443e065a FUN_1443e065a body=391 status=ok
// SIG undefined FUN_1443e065a(void)

void FUN_1443e065a(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *plStack_60;
  undefined **local_58;
  undefined8 local_50;
  longlong *local_48;
  byte local_40;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (1 < *(int *)(param_2 + 8)) {
    if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
    }
    else {
      uVar5 = 0;
    }
    plVar3 = (longlong *)FUN_148fcd308(uVar5,param_3);
    if (plVar3 == (longlong *)0x0) {
      local_68 = (longlong *)0x0;
      plStack_60 = (longlong *)0x0;
    }
    else {
      (**(code **)(*plVar3 + 0xd0))(plVar3,&local_68);
      if (local_68 != (longlong *)0x0) {
        if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
          lVar4 = *(longlong *)(param_1 + 0x20);
        }
        else {
          lVar4 = 0;
        }
        FUN_148fcdaa6(*(undefined8 *)(lVar4 + 0x70),&local_58,param_3);
        if ((&DAT_149fc1b6e)[local_40] == '\x01') {
          uVar5 = local_50;
          if (local_48 == (longlong *)0x0) {
            plVar3 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_48 + 1) = (int)local_48[1] + 1;
            UNLOCK();
            plVar3 = local_48;
          }
        }
        else {
          plVar3 = (longlong *)0x0;
          uVar5 = 0;
        }
        local_58 = &PTR_FUN_14a5af930;
        if (local_38 != 0) {
          FUN_1400020a8();
        }
        local_58 = &PTR_FUN_14a184370;
        (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_40])();
        (**(code **)(*local_68 + 0x28))(local_68,uVar5,param_2);
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
      }
    }
    plVar3 = plStack_60;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_60)(plStack_60);
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
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443e07f0 FUN_1443e07f0 body=220 status=ok
// SIG undefined FUN_1443e07f0(void)

void FUN_1443e07f0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[2] + -1;
  if ((int)param_1[2] == 0) {
    iVar3 = 0;
  }
  if (0 < iVar3) {
    iVar4 = 0;
    do {
      iVar4 = iVar4 + 1;
    } while (iVar3 != iVar4);
  }
  iVar3 = FUN_14900c854((longlong *)(lVar1 + 200));
  if ((iVar3 != -1) &&
     (lVar1 = (longlong)iVar3 * 0x20 + *(longlong *)(lVar1 + 200),
     puVar2 = (undefined8 *)(lVar1 + 0x10), puVar2 != (undefined8 *)0x0 && lVar1 != 0)) {
    FUN_148fcc906(*puVar2,param_2);
    return;
  }
  return;
}



// FUNCTION 1443e08cc FUN_1443e08cc body=115 status=ok
// SIG undefined FUN_1443e08cc(void)

longlong FUN_1443e08cc(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14ba61dc0;
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_2 + 0x20) = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  _Src = *(void **)(param_1 + 0x10);
  *(int *)(param_2 + 0x28) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_2 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670((undefined8 *)(param_2 + 0x20),iVar1,0);
    memcpy(*(void **)(param_2 + 0x20),_Src,(longlong)iVar1 * 2);
  }
  return param_2 + 0x18;
}



// FUNCTION 1443e0946 FUN_1443e0946 body=12 status=ok
// SIG undefined FUN_1443e0946(void)

void FUN_1443e0946(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001443e094f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1443e0952 FUN_1443e0952 body=57 status=ok
// SIG undefined FUN_1443e0952(void)

undefined8 * FUN_1443e0952(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba61dc0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443e098b FUN_1443e098b body=1041 status=ok
// SIG undefined FUN_1443e098b(void)

void FUN_1443e098b(void)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1446f470e(&DAT_14cbf5c04,L"UNSET",1);
  local_50 = L"Online";
  local_48 = 6;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"OnlinePresence";
  local_48 = 0xe;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"Online";
  local_48 = 6;
  FUN_140208c1e(&DAT_14cbf5c10,local_58,local_54,&local_50);
  atexit((_func_5014 *)&LAB_1443e01f4);
  local_50 = L"Offline";
  local_48 = 7;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"OnlinePresence";
  local_48 = 0xe;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"Offline";
  local_48 = 7;
  FUN_140208c1e(&DAT_14cbf5c20,local_58,local_54,&local_50);
  atexit((_func_5014 *)&LAB_1443e0208);
  local_50 = L"Away";
  local_48 = 4;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"OnlinePresence";
  local_48 = 0xe;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"Away";
  local_48 = 4;
  FUN_140208c1e(&DAT_14cbf5c30,local_58,local_54,&local_50);
  atexit((_func_5014 *)&LAB_1443e021c);
  local_50 = L"DoNotDisturb";
  local_48 = 0xc;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"OnlinePresence";
  local_48 = 0xe;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"Do Not Disturb";
  local_48 = 0xe;
  FUN_140208c1e(&DAT_14cbf5c40,local_58,local_54,&local_50);
  atexit((_func_5014 *)&LAB_1443e0230);
  local_50 = L"Chat";
  local_48 = 4;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"OnlinePresence";
  local_48 = 0xe;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"Chat";
  local_48 = 4;
  FUN_140208c1e(&DAT_14cbf5c50,local_58,local_54,&local_50);
  atexit((_func_5014 *)&LAB_1443e0244);
  FUN_1446f470e(&DAT_14cbf5c60,L"Creation",1);
  FUN_1446f470e(&DAT_14cbf5c68,L"Invitation",1);
  FUN_1446f470e(&DAT_14cbf5c70,L"RequestToJoin",1);
  FUN_1446f470e(&DAT_14cbf5c78,L"Presence",1);
  FUN_1446f470e(&DAT_14cbf5c80,L"PlatformSession",1);
  FUN_1446f470e(&DAT_14cbf5c88,L"CommandLineJoin",1);
  FUN_1446f470e(&DAT_14cbf5c90,L"Unspecified",1);
  FUN_140056680(&DAT_14cbf5c98,L"NotFound");
  atexit((_func_5014 *)&LAB_1443e0258);
  FUN_140056680(&DAT_14cbf5ca8,L"AddingSelfFail");
  atexit((_func_5014 *)&LAB_1443e0269);
  FUN_140056680(&DAT_14cbf5cb8,L"AddingBlockedFail");
  atexit((_func_5014 *)&LAB_1443e027a);
  FUN_140056680(&DAT_14cbf5cc8,L"AlreadyFriends");
  atexit((_func_5014 *)&LAB_1443e028b);
  FUN_140056680(&DAT_14cbf5cd8,L"NotPendingInbound");
  atexit((_func_5014 *)&LAB_1443e029c);
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/Party",&PTR_FUN_14ba617c0,1,&PTR_FUN_14ba61790);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443e0da0 FUN_1443e0da0 body=57 status=ok
// SIG undefined FUN_1443e0da0(void)

void FUN_1443e0da0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf5d40 == 0) {
    uVar1 = FUN_145a25b1d();
    DAT_14cbf5d40 = FUN_14171c317(FUN_14667201f,uVar1,L"ELobbyBeaconJoinState");
  }
  return;
}



// FUNCTION 1443e0dda FUN_1443e0dda body=53 status=ok
// SIG undefined FUN_1443e0dda(void)

void FUN_1443e0dda(longlong *param_1)

{
  if (((int)param_1[0x8a] != 0) && ((longlong *)param_1[0x89] != (longlong *)0x0)) {
    (**(code **)(*(longlong *)param_1[0x89] + 0x60))();
  }
                    /* WARNING: Could not recover jumptable at 0x0001443e0e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x738))(param_1);
  return;
}



// FUNCTION 1443e0e10 FUN_1443e0e10 body=857 status=ok
// SIG undefined FUN_1443e0e10(void)

void FUN_1443e0e10(longlong *param_1,longlong param_2)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  longlong local_b0 [2];
  longlong local_a0;
  longlong local_88;
  longlong local_78;
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  undefined2 *local_48;
  undefined8 uStack_40;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b0[0] = 0;
  FUN_1447210f0();
  plVar3 = (longlong *)FUN_1401e3228(local_b0);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_30);
    if (local_30 != (longlong *)0x0) {
      local_48 = (undefined2 *)0x0;
      uStack_40 = 0;
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      cVar2 = (**(code **)(*local_30 + 0x370))(local_30,param_2,DAT_14c892fc8,&local_48);
      if (cVar2 != '\0') {
        puVar4 = local_48;
        if ((int)uStack_40 == 0) {
          puVar4 = &DAT_149dfb77a;
        }
        FUN_140245d8a(local_b0,0,puVar4,0);
        cVar2 = FUN_143ed4356(param_1,local_b0);
        if ((cVar2 != '\0') && (*(longlong **)(param_2 + 0x100) != (longlong *)0x0)) {
          plVar3 = (longlong *)(**(code **)(**(longlong **)(param_2 + 0x100) + 0x38))();
          (**(code **)(*plVar3 + 0x30))(plVar3,&local_c0);
          if (param_1 + 0x87 == &local_c0) {
            if (local_c0 != 0) {
              FUN_1400020a8();
            }
          }
          else {
            if (param_1[0x87] != 0) {
              FUN_1400020a8();
            }
            param_1[0x87] = local_c0;
            local_c0 = 0;
            *(undefined4 *)(param_1 + 0x88) = local_b8;
            *(undefined4 *)((longlong)param_1 + 0x444) = local_b4;
          }
          if (local_58 != 0) {
            FUN_1400020a8();
          }
          FUN_1447a1747(local_68,local_60);
          if (local_68 != 0) {
            FUN_1400020a8();
          }
          if (local_78 != 0) {
            FUN_1400020a8();
          }
          if (local_88 != 0) {
            FUN_1400020a8();
          }
          if (local_a0 != 0) {
            FUN_1400020a8();
          }
          if (local_b0[0] != 0) {
            FUN_1400020a8();
          }
          if (local_48 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (local_28 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_28 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
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
          goto LAB_1443e1029;
        }
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        FUN_1447a1747(local_68,local_60);
        if (local_68 != 0) {
          FUN_1400020a8();
        }
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        if (local_88 != 0) {
          FUN_1400020a8();
        }
        if (local_a0 != 0) {
          FUN_1400020a8();
        }
        if (local_b0[0] != 0) {
          FUN_1400020a8();
        }
      }
      if (local_48 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_28 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  (**(code **)(*param_1 + 0x650))(param_1);
LAB_1443e1029:
  if ((local_20 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443e1190 FUN_1443e1190 body=288 status=ok
// SIG undefined FUN_1443e1190(void)

void FUN_1443e1190(longlong *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((char)param_1[0x86] == '\x01') {
    (**(code **)(*param_1 + 0x768))();
    lVar2 = param_1[0x85];
    if (lVar2 + 0x3d0 != param_3 && lVar2 != 0) {
      local_48 = CONCAT71(local_48._1_7_,*(byte *)(param_3 + 0x18));
      (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[*(byte *)(param_3 + 0x18)])
                (&local_58,param_3 + 8);
      local_28 = local_48;
      local_38 = local_58;
      uStack_34 = uStack_54;
      uStack_30 = uStack_50;
      uStack_2c = uStack_4c;
      uVar3 = *(ulonglong *)(lVar2 + 1000);
      uVar4 = *(undefined4 *)(lVar2 + 0x3d8);
      uVar5 = *(undefined4 *)(lVar2 + 0x3dc);
      uVar6 = *(undefined4 *)(lVar2 + 0x3e0);
      uVar7 = *(undefined4 *)(lVar2 + 0x3e4);
      *(undefined4 *)(lVar2 + 0x3d8) = local_58;
      *(undefined4 *)(lVar2 + 0x3dc) = uStack_54;
      *(undefined4 *)(lVar2 + 0x3e0) = uStack_50;
      *(undefined4 *)(lVar2 + 0x3e4) = uStack_4c;
      *(ulonglong *)(lVar2 + 1000) = local_48;
      local_58 = uVar4;
      uStack_54 = uVar5;
      uStack_50 = uVar6;
      uStack_4c = uVar7;
      local_48 = uVar3;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[uVar3 & 0xff])(&local_58);
      iVar1 = *(int *)(param_3 + 0x28);
      _Src = *(void **)(param_3 + 0x20);
      *(int *)(lVar2 + 0x3f8) = iVar1;
      if (iVar1 == 0 && *(int *)(lVar2 + 0x3fc) == 0) {
        *(undefined4 *)(lVar2 + 0x3fc) = 0;
      }
      else {
        FUN_1447a127e((undefined8 *)(lVar2 + 0x3f0),iVar1);
        if (iVar1 != 0) {
          memcpy(*(void **)(lVar2 + 0x3f0),_Src,(longlong)iVar1);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443e12b2 FUN_1443e12b2 body=39 status=ok
// SIG undefined FUN_1443e12b2(void)

void FUN_1443e12b2(longlong *param_1)

{
  if ((char)param_1[0x86] == '\x01') {
    (**(code **)(*param_1 + 0x748))();
    *(undefined1 *)(param_1 + 0x86) = 0;
  }
  return;
}



// FUNCTION 1443e12fe FUN_1443e12fe body=1041 status=ok
// SIG undefined FUN_1443e12fe(void)

void FUN_1443e12fe(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  longlong *plVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  longlong local_c8 [3];
  longlong local_b0 [2];
  longlong local_a0;
  int local_8c;
  longlong local_88;
  longlong local_78;
  longlong local_68;
  int local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar1 = (longlong *)param_1[0x78];
  if (plVar1 == (longlong *)0x0) goto LAB_1443e132f;
  lVar4 = FUN_145b9bffa();
  if (((*(int *)(plVar1[2] + 0x38) < *(int *)(lVar4 + 0x38)) || (param_1 == (longlong *)0x0)) ||
     (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
      lVar4 + 0x30)) goto LAB_1443e132f;
  cVar3 = FUN_149010824(plVar1,param_2);
  if (cVar3 == '\0') {
LAB_1443e13c2:
    FUN_14900e9f2(param_1,param_3,0);
    *(undefined1 *)(param_1 + 0x86) = 0;
  }
  else {
    if ((&DAT_149fc1b6e)[*(byte *)(param_3 + 0x18)] == '\x01') {
      if ((*(longlong **)(param_3 + 8) == (longlong *)0x0) ||
         (cVar3 = (**(code **)(**(longlong **)(param_3 + 8) + 0x28))(), cVar3 == '\0'))
      goto LAB_1443e13c2;
    }
    else if ((*(uint *)(param_3 + 8) & 0xffffff) == 0) goto LAB_1443e13c2;
    if (*(int *)(param_4 + 1) == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    else {
      puVar8 = (undefined2 *)*param_4;
    }
    plVar10 = (longlong *)0x0;
    FUN_140245d8a(local_b0,0,puVar8,0);
    if (local_8c != 0) {
      local_c8[0] = 0;
      local_c8[1] = 0;
      if (0 < local_60) {
        lVar11 = 8;
        plVar10 = local_c8;
        lVar4 = 0;
        do {
          FUN_140002184(plVar10,0x3f);
          iVar7 = *(int *)(local_68 + lVar11) + -1;
          if (*(int *)(local_68 + lVar11) == 0) {
            iVar7 = 0;
          }
          FUN_1400020e8(plVar10,*(undefined8 *)(local_68 + -8 + lVar11),iVar7);
          lVar4 = lVar4 + 1;
          lVar11 = lVar11 + 0x10;
        } while (lVar4 < local_60);
      }
      cVar3 = (**(code **)(*plVar1 + 0x680))(plVar1,param_3,local_c8);
      if ((cVar3 == '\0') ||
         (plVar5 = (longlong *)(**(code **)(*plVar1 + 0x6a0))(plVar1,param_1,param_3,local_c8),
         plVar5 == (longlong *)0x0)) {
LAB_1443e14be:
        plVar10 = (longlong *)0x0;
      }
      else {
        if ((&DAT_149fc1b6e)[*(byte *)(plVar5 + 0x77)] == '\x01') {
          if (((longlong *)plVar5[0x75] == (longlong *)0x0) ||
             (cVar3 = (**(code **)(*(longlong *)plVar5[0x75] + 0x28))(), cVar3 == '\0'))
          goto LAB_1443e14be;
        }
        else if ((*(uint *)(plVar5 + 0x75) & 0xffffff) == 0) goto LAB_1443e14be;
        (**(code **)(*plVar5 + 0x440))(plVar5,param_1);
        if (DAT_14c950c29 == 1) {
          FUN_1456cec3c(plVar5);
        }
        bVar2 = DAT_14c950c29;
        param_1[0x85] = (longlong)plVar5;
        if ((bVar2 & 1) != 0) {
          FUN_1456cec3c(param_1);
        }
        plVar5[0x81] = (longlong)param_1;
        if (param_1[0x78] != 0) {
          plVar10 = (longlong *)plVar1[0x7d];
          if ((plVar10 != (longlong *)0x0) && (DAT_14c950c29 != 0)) {
            FUN_1456cec3c(plVar10);
          }
          param_1[0x84] = (longlong)plVar10;
        }
        lVar4 = plVar1[0x76];
        if ((longlong)(int)lVar4 != 0) {
          plVar10 = (longlong *)plVar1[0x75];
          local_d0 = plVar5 + 0x74;
          lVar11 = 0;
          do {
            plVar9 = *(longlong **)((longlong)plVar10 + lVar11);
            if (plVar9 != param_1) {
              if (plVar9 == (longlong *)0x0) {
LAB_1443e16a3:
                plVar9 = (longlong *)0x0;
              }
              else {
                lVar6 = FUN_1459f5c76();
                if ((*(int *)(plVar9[2] + 0x38) < *(int *)(lVar6 + 0x38)) ||
                   (*(longlong *)
                     (*(longlong *)(plVar9[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
                    lVar6 + 0x30)) goto LAB_1443e16a3;
              }
              (**(code **)(*plVar9 + 0x770))(plVar9,plVar5 + 0x72,local_d0);
            }
            lVar11 = lVar11 + 8;
          } while ((longlong)(int)lVar4 * 8 != lVar11);
        }
        plVar10 = (longlong *)CONCAT71((int7)((ulonglong)plVar10 >> 8),1);
      }
      if (local_c8[0] != 0) {
        FUN_1400020a8();
      }
    }
    plVar5 = (longlong *)plVar1[0x7d];
    if ((plVar5 != (longlong *)0x0) && ((char)plVar5[0x75] == '\0')) {
      if ((int)plVar5[0x99] == (int)plVar5[0x72]) {
        FUN_149010940();
      }
      else if ((int)plVar5[0x99] == 1) {
        (**(code **)(*plVar5 + 0x638))();
      }
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_1447a1747(local_68,local_60);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    if (local_a0 != 0) {
      FUN_1400020a8();
    }
    if (local_b0[0] != 0) {
      FUN_1400020a8();
    }
    FUN_14900e9f2(param_1,param_3,(ulonglong)plVar10 & 0xffffffff);
    *(char *)(param_1 + 0x86) = (char)plVar10;
    if ((char)plVar10 != '\0') {
      (**(code **)(*plVar1 + 0x688))(plVar1,param_1);
      goto LAB_1443e132f;
    }
  }
  (**(code **)(*plVar1 + 0x648))(plVar1,param_1);
LAB_1443e132f:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443e173a FUN_1443e173a body=77 status=ok
// SIG undefined FUN_1443e173a(void)

void FUN_1443e173a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x3c0);
  if (lVar1 != 0) {
    lVar2 = FUN_145b9bffa();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_149010324(lVar1,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1443e1788 FUN_1443e1788 body=85 status=ok
// SIG undefined FUN_1443e1788(void)

void FUN_1443e1788(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x3c0);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_145b9bffa();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x0001443e17da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x690))(plVar1,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1443e1802 FUN_1443e1802 body=106 status=ok
// SIG undefined FUN_1443e1802(void)

void FUN_1443e1802(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x3c0);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_145b9bffa();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x0001443e1869. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x698))(plVar1,param_1,param_2,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 1443e186c FUN_1443e186c body=337 status=ok
// SIG undefined FUN_1443e186c(void)

void FUN_1443e186c(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *plStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar4 = FUN_14487fd02();
  if (iVar4 == 0) goto LAB_1443e197a;
  FUN_1447210f0(param_1);
  local_38 = 0;
  plVar5 = (longlong *)FUN_1401e3228();
  if (plVar5 == (longlong *)0x0) {
    local_48 = (longlong *)0x0;
    plStack_40 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
    if (local_48 != (longlong *)0x0) {
      if ((&DAT_149fc1b6e)[*(byte *)(param_3 + 0x18)] == '\x01') {
        if ((*(longlong **)(param_3 + 8) != (longlong *)0x0) &&
           (cVar3 = (**(code **)(**(longlong **)(param_3 + 8) + 0x28))(), cVar3 != '\0')) {
LAB_1443e1912:
          plVar5 = local_48;
          uVar6 = FUN_14127b0d4(param_3);
          if (DAT_14c87ead8 == '\0') {
            FUN_140024d3a(&DAT_14c87eb00);
            DAT_14c87ead8 = '\x01';
          }
          (**(code **)(*plVar5 + 0x390))(plVar5,DAT_14c892fbc,uVar6,0);
        }
      }
      else if ((*(uint *)(param_3 + 8) & 0xffffff) != 0) goto LAB_1443e1912;
    }
  }
  plVar5 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
LAB_1443e197a:
  if ((*(int *)(param_1 + 0x470) != 0) &&
     (plVar5 = *(longlong **)(param_1 + 0x468), plVar5 != (longlong *)0x0)) {
    (**(code **)(*plVar5 + 0x60))(plVar5,param_2,param_3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443e19be FUN_1443e19be body=322 status=ok
// SIG undefined FUN_1443e19be(void)

void FUN_1443e19be(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *plStack_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar4 = FUN_14487fd02();
  if (iVar4 == 0) goto LAB_1443e1ac2;
  FUN_1447210f0(param_1);
  local_30 = 0;
  plVar5 = (longlong *)FUN_1401e3228();
  if (plVar5 == (longlong *)0x0) {
    local_48 = (longlong *)0x0;
    plStack_40 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
    if (local_48 != (longlong *)0x0) {
      if ((&DAT_149fc1b6e)[*(byte *)(param_2 + 0x18)] == '\x01') {
        if ((*(longlong **)(param_2 + 8) != (longlong *)0x0) &&
           (cVar3 = (**(code **)(**(longlong **)(param_2 + 8) + 0x28))(), cVar3 != '\0')) {
LAB_1443e1a5f:
          plVar5 = local_48;
          uVar6 = FUN_14127b0d4(param_2);
          if (DAT_14c87ead8 == '\0') {
            FUN_140024d3a(&DAT_14c87eb00);
            DAT_14c87ead8 = '\x01';
          }
          (**(code **)(*plVar5 + 0x3c0))(plVar5,DAT_14c892fbc,uVar6);
        }
      }
      else if ((*(uint *)(param_2 + 8) & 0xffffff) != 0) goto LAB_1443e1a5f;
    }
  }
  plVar5 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
LAB_1443e1ac2:
  if ((*(int *)(param_1 + 0x480) != 0) &&
     (plVar5 = *(longlong **)(param_1 + 0x478), plVar5 != (longlong *)0x0)) {
    (**(code **)(*plVar5 + 0x60))(plVar5,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443e1b04 FUN_1443e1b04 body=1246 status=ok
// SIG undefined FUN_1443e1b04(void)

undefined8 FUN_1443e1b04(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  void *pvVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  undefined1 auStack_c8 [32];
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  longlong local_98 [2];
  void *local_88;
  int local_80;
  undefined4 local_7c;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  longlong *local_68;
  longlong *plStack_60;
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(longlong *)(param_1 + 1000) == 0) {
    uVar7 = 0;
    goto LAB_1443e1f6a;
  }
  FUN_1447210f0();
  FUN_140056680(&local_68,L"Name");
  local_78 = (void *)0x0;
  local_70 = *(int *)(param_4 + 1);
  lVar15 = (longlong)local_70;
  pvVar11 = (void *)*param_4;
  if (lVar15 == 0) {
    local_6c = 0;
  }
  else {
    FUN_1446dd670(&local_78,local_70,0);
    memcpy(local_78,pvVar11,lVar15 * 2);
  }
  FUN_14126d510(&local_58,&local_78,&local_68);
  uVar14 = (int)uStack_50 - 1;
  if ((int)uStack_50 == 0) {
    uVar14 = 0;
  }
  uVar9 = 0x14;
  if ((int)uVar14 < 0x14) {
    uVar9 = uVar14;
  }
  uVar10 = (ulonglong)uVar9;
  if ((int)uVar9 < 1) {
    uVar10 = 0;
  }
  uVar14 = uVar14 - (int)uVar10;
  local_40 = (int)uStack_50;
  if (0 < (int)uVar14) {
    iVar13 = (int)uStack_50 - (uVar14 + (int)uVar10);
    if (iVar13 != 0) {
      pvVar11 = (void *)(uVar10 * 2 + local_58);
      memmove(pvVar11,(void *)((longlong)pvVar11 + (ulonglong)uVar14 * 2),(longlong)iVar13 * 2);
    }
    local_40 = (int)uStack_50 - uVar14;
  }
  local_48 = local_58;
  local_3c = uStack_50._4_4_;
  local_58 = 0;
  uStack_50 = 0;
  if (local_68 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 < 2) {
    FUN_14020fad6(&local_48,L"UnknownUser");
  }
  FUN_140056680(&local_68,L"AuthTicket");
  local_88 = (void *)0x0;
  local_80 = *(int *)(param_4 + 1);
  lVar15 = (longlong)local_80;
  pvVar11 = (void *)*param_4;
  if (lVar15 == 0) {
    local_7c = 0;
  }
  else {
    FUN_1446dd670(&local_88,local_80,0);
    memcpy(local_88,pvVar11,lVar15 * 2);
  }
  FUN_14126d510(&local_58,&local_88,&local_68);
  if (local_68 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  iVar13 = FUN_14487fd02(param_1);
  if (iVar13 != 0) {
    local_98[0] = 0;
    plVar6 = (longlong *)FUN_1401e3228();
    if (plVar6 == (longlong *)0x0) {
      local_68 = (longlong *)0x0;
      plStack_60 = (longlong *)0x0;
    }
    else {
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_68);
      if (local_68 != (longlong *)0x0) {
        if ((&DAT_149fc1b6e)[*(byte *)(param_3 + 0x18)] == '\x01') {
          if ((*(longlong **)(param_3 + 8) != (longlong *)0x0) &&
             (cVar4 = (**(code **)(**(longlong **)(param_3 + 8) + 0x28))(), cVar4 != '\0')) {
LAB_1443e1d71:
            FUN_140056680(local_98,L"bIsFromInvite");
            local_a8 = (void *)0x0;
            local_a0 = *(int *)(param_4 + 1);
            lVar15 = (longlong)local_a0;
            pvVar11 = (void *)*param_4;
            if (lVar15 == 0) {
              local_9c = 0;
            }
            else {
              FUN_1446dd670(&local_a8,local_a0,0);
              memcpy(local_a8,pvVar11,lVar15 * 2);
            }
            uVar5 = FUN_1415db91c(&local_a8,local_98);
            if (local_98[0] != 0) {
              FUN_1400020a8();
            }
            plVar6 = local_68;
            uVar7 = FUN_14127b0d4(param_3);
            if (DAT_14c87ead8 == '\0') {
              FUN_140024d3a(&DAT_14c87eb00);
              DAT_14c87ead8 = '\x01';
            }
            (**(code **)(*plVar6 + 0x390))(plVar6,DAT_14c892fbc,uVar7,uVar5);
          }
        }
        else if ((*(uint *)(param_3 + 8) & 0xffffff) != 0) goto LAB_1443e1d71;
      }
    }
    plVar6 = plStack_60;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_60)(plStack_60);
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
  FUN_140009b9a(&local_68,&local_48);
  lVar15 = *(longlong *)(param_1 + 1000);
  if (*(char *)(lVar15 + 0x178) == '\x03') {
    FUN_1447210f0(*(undefined8 *)(lVar15 + 0x4d0));
    lVar8 = (**(code **)(**(longlong **)(lVar15 + 0x4d0) + 0x648))
                      (*(longlong **)(lVar15 + 0x4d0),&local_68,param_3);
    if (lVar8 == 0) goto LAB_1443e1f37;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar8);
    }
    plVar6 = (longlong *)(lVar15 + 0x4c0);
    iVar13 = *(int *)(lVar15 + 0x4c8);
    lVar12 = (longlong)iVar13;
    *(uint *)(lVar15 + 0x4c8) = iVar13 + 1U;
    if (*(uint *)(lVar15 + 0x4cc) < iVar13 + 1U) {
      FUN_1490120c8(plVar6,iVar13);
    }
    lVar3 = *plVar6;
    *(undefined8 *)(lVar3 + lVar12 * 0x18) = 0xffffffffffffffff;
    *(undefined4 *)(lVar3 + 8 + lVar12 * 0x18) = 0xffffffff;
    *(longlong *)(lVar3 + 0x10 + lVar12 * 0x18) = lVar8;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar8);
    }
    FUN_140705884(lVar15 + 0x3b0,*plVar6 + lVar12 * 0x18);
    if (*(longlong *)(*plVar6 + 0x10 + lVar12 * 0x18) == 0) goto LAB_1443e1f37;
    FUN_1490126bc(*(longlong *)(lVar15 + 0x4d0) + 0x508);
    uVar7 = *(undefined8 *)(*(longlong *)(lVar15 + 0x4c0) + 0x10 + lVar12 * 0x18);
  }
  else {
LAB_1443e1f37:
    uVar7 = 0;
  }
  if (local_68 != (longlong *)0x0) {
    (**(code **)(*local_68 + 0x10))();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
LAB_1443e1f6a:
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443e1fe4 FUN_1443e1fe4 body=292 status=ok
// SIG undefined FUN_1443e1fe4(void)

ulonglong FUN_1443e1fe4(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  undefined2 *puVar4;
  undefined8 unaff_RDI;
  ulonglong uVar5;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(param_1 + 1000);
  if (lVar2 != 0) {
    if (((*(char *)(lVar2 + 0x178) == '\x03') &&
        (lVar2 = FUN_149011300(lVar2 + 0x3b0,param_2), lVar2 != 0)) &&
       (*(char *)(lVar2 + 0x400) == '\x01')) {
      *(undefined1 *)(lVar2 + 0x400) = 0;
      iVar1 = FUN_14487fd02(param_2);
      uVar5 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
      if (iVar1 < 3) {
        *(undefined1 *)((longlong)param_2 + 0x431) = 2;
        (**(code **)(*param_2 + 0x758))(param_2);
      }
      goto LAB_1443e2098;
    }
    if (param_2 == (longlong *)0x0) {
      pwVar3 = L"Unknown Client Actor";
LAB_1443e205b:
      FUN_140056680(local_28,pwVar3);
    }
    else {
      if (param_2[0x85] == 0) {
        pwVar3 = L"Unknown";
        goto LAB_1443e205b;
      }
      FUN_1405e6804(param_2[0x85] + 0x3a0,&local_38);
      puVar4 = local_38;
      if (local_30 == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      FUN_140056680(local_28,puVar4);
      if (local_38 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  uVar5 = 0;
LAB_1443e2098:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 1443e210a FUN_1443e210a body=470 status=ok
// SIG undefined FUN_1443e210a(void)

undefined8 FUN_1443e210a(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  longlong *local_60 [2];
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != 0) {
    if ((&DAT_149fc1b6e)[*(byte *)(param_3 + 0x18)] == '\x01') {
      if ((*(longlong **)(param_3 + 8) == (longlong *)0x0) ||
         (cVar4 = (**(code **)(**(longlong **)(param_3 + 8) + 0x28))(), cVar4 == '\0'))
      goto LAB_1443e2213;
    }
    else if ((*(uint *)(param_3 + 8) & 0xffffff) == 0) goto LAB_1443e2213;
    lVar3 = param_1[0x76];
    if ((longlong)(int)lVar3 != 0) {
      lVar1 = param_1[0x75];
      lVar7 = 0;
      do {
        lVar2 = *(longlong *)(lVar1 + lVar7);
        if (lVar2 != 0 && lVar2 != param_2) {
          lVar5 = FUN_1459f5c76();
          if ((((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) &&
              (*(longlong *)(lVar2 + 0x428) != 0)) &&
             (cVar4 = FUN_140ba41f1(*(longlong *)(lVar2 + 0x428) + 0x3a0,param_3), cVar4 != '\0')) {
            cVar4 = FUN_140ba41f1(*(longlong *)(param_2 + 0x428) + 0x3a0,
                                  *(longlong *)(lVar2 + 0x428) + 0x3d0);
            if (cVar4 != '\0') {
              local_50 = L"KickedPlayerFromParty";
              local_48 = 0x15;
              FUN_1446e940c(local_64,&local_50);
              local_50 = L"NetworkErrors";
              local_48 = 0xd;
              FUN_1446e940c(local_68,&local_50);
              local_50 = L"Kicked from party.";
              local_48 = 0x12;
              FUN_140208c1e(local_60,local_68,local_64,&local_50);
              FUN_14900f0fc(lVar2,local_60);
              (**(code **)(*param_1 + 0x648))(param_1,lVar2);
              if (local_60[0] != (longlong *)0x0) {
                (**(code **)(*local_60[0] + 0x10))();
              }
              uVar6 = 1;
              goto LAB_1443e2215;
            }
            break;
          }
        }
        lVar7 = lVar7 + 8;
      } while ((longlong)(int)lVar3 * 8 != lVar7);
    }
  }
LAB_1443e2213:
  uVar6 = 0;
LAB_1443e2215:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1443e22e2 FUN_1443e22e2 body=186 status=ok
// SIG undefined FUN_1443e22e2(void)

void FUN_1443e22e2(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_1[0x7d];
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0x178) == '\x03')) {
    lVar2 = FUN_149011300(lVar2 + 0x3b0,param_2);
    if ((lVar2 != 0) && (*(char *)(lVar2 + 0x400) == '\x01')) {
      lVar3 = FUN_1447210f0(param_1);
      plVar1 = *(longlong **)(*(longlong *)(lVar3 + 0x170) + 1000);
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      (**(code **)(*plVar1 + 0x670))(plVar1,DAT_14c892fbc,lVar2 + 0x3a0);
      (**(code **)(*param_1 + 0x670))(param_1,lVar2 + 0x3a0);
    }
  }
  FUN_143eda0fa(param_1,param_2);
  return;
}



// FUNCTION 1443e23b0 FUN_1443e23b0 body=1477 status=ok
// SIG undefined FUN_1443e23b0(void)

void FUN_1443e23b0(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4,
                  undefined8 param_5,longlong *param_6)

{
  uint *puVar1;
  ushort uVar2;
  ushort *puVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  undefined8 unaff_RBP;
  int *piVar10;
  int iVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  ulonglong local_b0;
  uint local_a4;
  longlong *local_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  uint *local_60;
  uint local_58;
  uint local_54 [3];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_60 = (uint *)param_6[2];
  uVar2 = *(ushort *)(*param_6 + 0x86);
  local_58 = uVar2 + 0x1f >> 5;
  local_54[0] = (uint)uVar2;
  if (uVar2 == 0) {
    local_60 = local_54;
  }
  puVar3 = *(ushort **)(*param_6 + 8);
  local_a4 = (uint)*puVar3;
  uVar2 = puVar3[1];
  uVar17 = *local_60;
  FUN_1443e2978(param_1,param_2,0);
  local_b8 = param_4;
  FUN_1443e2978(param_3,param_4,
                (uint)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),(char)uVar17) & 0xffffff01);
  local_78 = 0;
  uStack_70 = 0;
  uVar15 = (ulonglong)*(uint *)(param_2 + 1);
  if (-1 < (int)*(uint *)(param_2 + 1)) {
    if (uVar15 != 0) {
      FUN_14481578e(&local_78);
      uVar17 = *(uint *)(param_2 + 1);
      if ((ulonglong)uVar17 != 0) {
        lVar14 = *param_2;
        local_a0 = param_3 + 7;
        uVar15 = 0;
        do {
          uVar16 = uStack_70;
          uVar6 = *(uint *)(lVar14 + uVar15 * 0x18);
          if (uVar6 != 0xffffffff) {
            if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
              plVar8 = (longlong *)param_3[8];
              if ((longlong *)param_3[8] == (longlong *)0x0) {
                plVar8 = local_a0;
              }
              iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_3[9] - 1U & uVar6) * 4);
              if (iVar9 != -1) {
                do {
                  if (*(uint *)(*param_3 + (longlong)iVar9 * 0x10) == uVar6) goto LAB_1443e2512;
                  iVar9 = *(int *)((longlong)iVar9 * 0x10 + *param_3 + 8);
                } while (iVar9 != -1);
              }
            }
            lVar13 = (longlong)(int)uStack_70;
            uVar6 = (int)uStack_70 + 1;
            uStack_70 = CONCAT44(uStack_70._4_4_,uVar6);
            if (uStack_70._4_4_ < uVar6) {
              FUN_1446f48e2(&local_78,uVar16 & 0xffffffff);
            }
            *(int *)(local_78 + lVar13 * 4) = (int)uVar15;
          }
LAB_1443e2512:
          uVar15 = uVar15 + 1;
        } while (uVar15 != uVar17);
      }
    }
    puVar12 = local_b8;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    uVar15 = (ulonglong)*(uint *)(local_b8 + 1);
    if (-1 < (int)*(uint *)(local_b8 + 1)) {
      if (uVar15 != 0) {
        FUN_14481578e(&local_88);
        uVar17 = *(uint *)(puVar12 + 1);
        uVar15 = (ulonglong)uVar17;
        if ((int)uVar17 < 0) goto LAB_1443e296e;
        if ((int)uStack_90._4_4_ < (int)uVar17) {
          FUN_14481578e(&local_98);
          uVar15 = (ulonglong)*(uint *)(puVar12 + 1);
        }
        if ((int)uVar15 != 0) {
          local_a4 = local_a4 + 1;
          uVar17 = uVar2 - 1;
          puVar12 = (undefined8 *)*puVar12;
          local_a0 = param_1 + 7;
          uVar16 = 0;
          local_b8 = puVar12;
          local_b0 = uVar15;
          do {
            if ((uVar17 == 0) ||
               (uVar6 = (int)((uVar16 & 0xffffffff) % (ulonglong)uVar17) + local_a4,
               (local_60[uVar6 >> 5] >> (uVar6 & 0x1f) & 1) != 0)) {
              puVar1 = (uint *)(puVar12 + uVar16 * 3);
              uVar6 = *puVar1;
              if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
                plVar8 = (longlong *)param_1[8];
                if ((longlong *)param_1[8] == (longlong *)0x0) {
                  plVar8 = local_a0;
                }
                iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & uVar6) * 4);
                if (iVar9 != -1) {
                  do {
                    lVar14 = *param_1 + (longlong)iVar9 * 0x10;
                    if (*(uint *)(*param_1 + (longlong)iVar9 * 0x10) == uVar6) {
                      piVar10 = (int *)(lVar14 + 4);
                      if (piVar10 != (int *)0x0 && lVar14 != 0) {
                        cVar5 = FUN_146f0a5c9(param_5,(longlong)*piVar10 * 0x18 + *param_2,puVar1);
                        uVar4 = uStack_90;
                        puVar12 = local_b8;
                        uVar15 = local_b0;
                        if (cVar5 != '\0') goto LAB_1443e26c6;
                        lVar14 = (longlong)(int)uStack_90;
                        uVar6 = (int)uStack_90 + 1;
                        uStack_90 = CONCAT44(uStack_90._4_4_,uVar6);
                        if (uStack_90._4_4_ < uVar6) {
                          FUN_1446f48e2(&local_98,uVar4 & 0xffffffff);
                        }
                        iVar9 = *piVar10;
                        *(int *)(local_98 + lVar14 * 4) = iVar9;
                        lVar14 = (longlong)iVar9 * 0x18 + *param_2;
                        FUN_146f0a74d(param_5,lVar14,puVar1);
                        puVar12 = local_b8;
                        uVar15 = local_b0;
                        goto LAB_1443e26b4;
                      }
                      break;
                    }
                    iVar9 = *(int *)(lVar14 + 8);
                  } while (iVar9 != -1);
                }
              }
              if (uVar6 != 0) {
                iVar9 = (int)param_2[1];
                *(uint *)(param_2 + 1) = iVar9 + 1U;
                if (*(uint *)((longlong)param_2 + 0xc) < iVar9 + 1U) {
                  FUN_1490120c8(param_2,iVar9);
                  puVar12 = local_b8;
                  uVar15 = local_b0;
                }
                lVar7 = (longlong)iVar9;
                lVar14 = *param_2;
                *(undefined8 *)(lVar14 + lVar7 * 0x18) = 0xffffffffffffffff;
                *(undefined4 *)(lVar14 + 8 + lVar7 * 0x18) = 0xffffffff;
                lVar13 = *(longlong *)(puVar1 + 4);
                *(longlong *)(lVar14 + 0x10 + lVar7 * 0x18) = lVar13;
                if ((DAT_14c950c29 == '\x01') && (lVar13 != 0)) {
                  FUN_1456cec3c();
                  puVar12 = local_b8;
                  uVar15 = local_b0;
                }
                lVar14 = *param_2;
                *(uint *)(lVar14 + lVar7 * 0x18) = *puVar1;
                lVar13 = (longlong)(int)uStack_80;
                uVar6 = (int)uStack_80 + 1;
                uStack_80 = CONCAT44(uStack_80._4_4_,uVar6);
                if (uStack_80._4_4_ < uVar6) {
                  FUN_1446f48e2(&local_88);
                  puVar12 = local_b8;
                  uVar15 = local_b0;
                }
                lVar14 = lVar14 + lVar7 * 0x18;
                *(int *)(local_88 + lVar13 * 4) = iVar9;
LAB_1443e26b4:
                if (lVar14 != 0) {
                  *(undefined4 *)(lVar14 + 8) = *(undefined4 *)((longlong)param_1 + 0x54);
                  *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
                }
              }
            }
LAB_1443e26c6:
            uVar16 = uVar16 + 1;
          } while (uVar16 != uVar15);
        }
      }
      FUN_140705914(param_1);
      lVar14 = local_78;
      lVar13 = (longlong)(int)uStack_70;
      if (lVar13 != 0) {
        lVar7 = 0;
        do {
          if (*(longlong *)(*param_2 + 0x10 + (longlong)*(int *)(lVar14 + lVar7) * 0x18) != 0) {
            FUN_1490126bc(param_1[0x24] + 0x520);
          }
          lVar7 = lVar7 + 4;
        } while (lVar13 * 4 != lVar7);
      }
      lVar14 = local_88;
      lVar13 = (longlong)(int)uStack_80;
      if (lVar13 != 0) {
        lVar7 = 0;
        do {
          if (*(longlong *)(*param_2 + 0x10 + (longlong)*(int *)(lVar14 + lVar7) * 0x18) != 0) {
            FUN_1490126bc(param_1[0x24] + 0x508);
          }
          lVar7 = lVar7 + 4;
        } while (lVar13 * 4 != lVar7);
      }
      lVar14 = local_98;
      lVar13 = (longlong)(int)uStack_90;
      if (lVar13 != 0) {
        lVar7 = 0;
        do {
          if (*(longlong *)(*param_2 + 0x10 + (longlong)*(int *)(lVar14 + lVar7) * 0x18) != 0) {
            FUN_1490126bc(param_1[0x24] + 0x508);
          }
          lVar7 = lVar7 + 4;
        } while (lVar13 * 4 != lVar7);
      }
      if (0 < (int)uStack_70) {
        FUN_144958a06(local_78);
        if (0 < (longlong)(int)uStack_70) {
          uVar15 = (longlong)(int)uStack_70 + 1;
          do {
            uVar17 = *(uint *)(local_78 + -8 + uVar15 * 4);
            if ((-1 < (longlong)(int)uVar17) && (iVar9 = (int)param_2[1], (int)uVar17 < iVar9)) {
              iVar11 = ~uVar17 + iVar9;
              if (iVar11 != 0) {
                if (0 < iVar11) {
                  iVar11 = 1;
                }
                memmove((void *)(*param_2 + (longlong)(int)uVar17 * 0x18),
                        (void *)(*param_2 + (ulonglong)(uint)(iVar9 - iVar11) * 0x18),
                        (longlong)iVar11 * 0x18);
                iVar9 = (int)param_2[1];
              }
              *(int *)(param_2 + 1) = iVar9 + -1;
            }
            uVar15 = uVar15 - 1;
          } while (1 < uVar15);
        }
        FUN_14010afec(param_1,0);
      }
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  }
LAB_1443e296e:
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar15);
}



// FUNCTION 1443e2978 FUN_1443e2978 body=186 status=ok
// SIG undefined FUN_1443e2978(void)

void FUN_1443e2978(longlong param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [36];
  int local_54;
  longlong local_50;
  int *local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_3 != '\0') || (*(int *)(param_1 + 8) - *(int *)(param_1 + 0x34) != (int)param_2[1])) {
    FUN_1407058ce(param_1);
    lVar1 = *param_2;
    local_54 = 0;
    lVar2 = param_2[1];
    if ((int)lVar2 != 0) {
      do {
        if (*(int *)(lVar1 + (longlong)local_54 * 0x18) != -1) {
          local_50 = lVar1 + (longlong)local_54 * 0x18;
          local_48 = &local_54;
          FUN_140263e2a(param_1,local_3c,&local_50,0);
        }
        local_54 = local_54 + 1;
      } while (local_54 != (int)lVar2);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443e2a34 FUN_1443e2a34 body=612 status=ok
// SIG undefined FUN_1443e2a34(void)

uint FUN_1443e2a34(longlong param_1,char param_2)

{
  undefined8 *puVar1;
  byte *pbVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  longlong lVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  int *piVar13;
  int *piVar14;
  uint uVar15;
  undefined8 *puVar16;
  undefined1 auStack_98 [46];
  byte local_6a;
  char local_69;
  undefined4 local_68;
  int local_64;
  undefined8 local_60;
  uint *local_58;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar16 = *(undefined8 **)(param_1 + 0x10);
  lVar9 = *(longlong *)(param_1 + 0x18);
  if (lVar9 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = (ulonglong)*(uint *)*puVar16 + *(longlong *)(lVar9 + 8);
  }
  lVar6 = *(longlong *)(param_1 + 0x28);
  lVar12 = (longlong)*(int *)(*(longlong *)puVar16[7] + 0x44) + *(longlong *)(param_1 + 0x20);
  if ((param_2 == '\0') && (*(int *)(lVar12 + 0x54) == *(int *)(lVar10 + 0x54))) {
    lVar9 = *(longlong *)(lVar9 + 8);
    if ((*(byte *)((longlong)puVar16 + 0xb9) & 8) != 0) {
      uVar5 = *(uint *)(puVar16 + 0x11);
LAB_1443e2aa8:
      lVar10 = (ulonglong)uVar5 - 4;
      goto LAB_1443e2aac;
    }
  }
  else {
    puVar1 = (undefined8 *)(lVar10 + lVar6);
    uVar5 = *(uint *)(lVar12 + 8 + lVar6);
    local_6a = *(uint *)(puVar1 + 1) != uVar5;
    local_69 = param_2;
    if ((bool)local_6a) {
      FUN_14901215c(puVar1,uVar5);
      puVar16 = *(undefined8 **)(param_1 + 0x10);
      lVar9 = *(longlong *)(param_1 + 0x18);
    }
    local_60 = FUN_146f18364(param_1);
    local_58 = (uint *)((ulonglong)*(uint *)(puVar16 + 0x11) + *(longlong *)(lVar9 + 8));
    local_50 = *(ushort *)((longlong)puVar16 + 0x86) + 0x1f >> 5;
    local_4c = (uint)*(ushort *)((longlong)puVar16 + 0x86);
    if (local_4c == 0) {
      local_58 = &local_4c;
    }
    uVar3 = *(ushort *)puVar16[1];
    uVar4 = ((ushort *)puVar16[1])[1];
    piVar13 = (int *)*puVar1;
    piVar14 = *(int **)(lVar12 + lVar6);
    local_68 = *(undefined4 *)(lVar12 + 0x100);
    *(undefined4 *)(lVar12 + 0x100) = 0xffffffff;
    if (0 < (int)uVar5) {
      local_64 = uVar3 + 1;
      uVar15 = uVar4 - 1;
      uVar11 = 0;
      do {
        if (*piVar14 == -1) {
          FUN_140705884(lVar12,piVar14);
        }
        if ((piVar14[1] == piVar13[1]) && (*piVar14 == *piVar13)) {
          if (local_69 != '\0') {
            cVar7 = FUN_146f0a5c9(local_60,piVar13,piVar14);
            if (cVar7 == '\0') goto LAB_1443e2bc4;
          }
        }
        else {
LAB_1443e2bc4:
          FUN_146f0ae97(local_60,piVar13,piVar14);
          piVar13[1] = piVar14[1];
          local_6a = 1;
          if (uVar15 != 0) {
            uVar8 = (int)((uVar11 & 0xffffffff) % (ulonglong)uVar15) + local_64;
            local_58[uVar8 >> 5] = local_58[uVar8 >> 5] | 1 << ((byte)uVar8 & 0x1f);
          }
        }
        uVar11 = uVar11 + 1;
        piVar13 = piVar13 + 6;
        piVar14 = piVar14 + 6;
      } while (uVar5 != uVar11);
    }
    *(undefined4 *)(lVar12 + 0x100) = local_68;
    *(undefined4 *)(lVar10 + 0x54) = *(undefined4 *)(lVar12 + 0x54);
    lVar9 = *(longlong *)(param_1 + 0x18);
    if ((local_6a & 1) != 0) {
      cVar7 = FUN_146f11244(lVar9,0);
      if (cVar7 != '\0') {
        *local_58 = *local_58 | 1;
        if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0xb9) & 8) == 0) {
          lVar9 = 0;
        }
        else {
          lVar9 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x10) + 0x88) - 4;
        }
        pbVar2 = (byte *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 8) + 3 + lVar9);
        *pbVar2 = *pbVar2 | 0x80;
        lVar9 = *(longlong *)(param_1 + 0x18);
      }
    }
    lVar9 = *(longlong *)(lVar9 + 8);
    if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0xb9) & 8) != 0) {
      uVar5 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0x88);
      goto LAB_1443e2aa8;
    }
  }
  lVar10 = 0;
LAB_1443e2aac:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return *(uint *)(lVar9 + lVar10) >> 0x1f;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443e2ca8 FUN_1443e2ca8 body=7052 status=ok
// SIG undefined FUN_1443e2ca8(void)

ulonglong * FUN_1443e2ca8(longlong *param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  byte bVar2;
  undefined4 uVar3;
  int *piVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint *puVar9;
  undefined4 *puVar10;
  ulonglong *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  longlong *plVar18;
  uint *puVar19;
  longlong *plVar20;
  uint uVar21;
  ulonglong *puVar22;
  int iVar23;
  longlong lVar24;
  uint uVar25;
  longlong *plVar26;
  int iVar27;
  uint uVar28;
  longlong lVar29;
  longlong lVar30;
  int iVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  longlong lVar34;
  ulonglong *puVar35;
  undefined1 auStack_258 [32];
  undefined1 *local_238;
  ulonglong *local_230;
  longlong *local_228;
  ulonglong *local_220;
  longlong *local_218;
  ulonglong local_210;
  uint *local_208;
  uint *local_200;
  longlong local_1f8;
  ulonglong local_1f0;
  longlong *local_1e8;
  longlong *local_1e0;
  longlong local_1d8;
  uint local_1d0;
  int local_1cc;
  uint *local_1c8;
  longlong *local_1c0;
  uint local_1b8;
  uint local_1b4;
  longlong local_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  uint *local_190;
  uint *local_188;
  undefined1 local_17c [4];
  undefined4 local_178 [8];
  undefined4 *local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined1 local_138 [16];
  ulonglong *local_128;
  undefined8 local_120;
  ulonglong *local_118;
  undefined8 local_110;
  undefined8 local_108;
  int local_100;
  ulonglong local_f8 [4];
  ulonglong *local_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  longlong *local_b0;
  longlong local_90;
  longlong local_78;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_258;
  if ((*(byte *)((longlong)param_3 + 0x10c) & 4) != 0) {
LAB_1443e3239:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_258);
  }
  if (DAT_14cbf5ee0 == 0) {
    uVar8 = FUN_145a25b1d();
    DAT_14cbf5ee0 = FUN_140002ddd(FUN_14667241f,uVar8,L"LobbyPlayerStateActorInfo");
  }
  lVar29 = DAT_14cbf5ee0;
  local_1b0 = DAT_14cbf5ee0;
  local_1a8 = param_1;
  local_1a0 = param_3;
  local_198 = param_2;
  FUN_1443e5118();
  local_228 = param_2;
  local_218 = param_3;
  if (param_2[0xd] == 0) {
    local_1d8 = lVar29;
    if ((longlong *)param_2[0xf] != (longlong *)0x0) {
      local_108 = *(undefined ***)param_2[0xf];
      puVar9 = (uint *)(param_3 + 0xd);
      iVar23 = (int)param_3[0x10];
      if (iVar23 == 0) {
        uVar32 = 1;
        uVar33 = 0;
        iVar31 = 0;
        iVar27 = 0;
      }
      else {
        puVar7 = (uint *)param_3[0xf];
        if ((uint *)param_3[0xf] == (uint *)0x0) {
          puVar7 = puVar9;
        }
        uVar25 = *puVar7;
        if (uVar25 == 0) {
          iVar31 = iVar23 + 0x1e;
          if (-1 < iVar23 + -1) {
            iVar31 = iVar23 + -1;
          }
          uVar33 = 0;
          uVar32 = (ulonglong)(uint)(iVar31 >> 5);
          if (iVar31 >> 5 < 1) {
            uVar32 = uVar33;
          }
          iVar31 = 0;
          do {
            if (uVar32 == uVar33) goto LAB_1443e3058;
            iVar31 = iVar31 + 0x20;
            uVar25 = puVar7[uVar33 + 1];
            uVar33 = uVar33 + 1;
          } while (uVar25 == 0);
        }
        else {
          uVar33 = 0;
          iVar31 = 0;
        }
        uVar32 = (ulonglong)(-uVar25 & uVar25);
        uVar1 = uVar32 * 2 + 1;
        lVar29 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar29 == 0; lVar29 = lVar29 + -1) {
          }
        }
        iVar27 = (iVar31 - ((uint)lVar29 ^ 0x3f)) + 0x3e;
        if (iVar23 <= iVar27) {
          iVar27 = iVar23;
        }
      }
      if (iVar27 == iVar23) {
LAB_1443e3058:
        local_230 = (ulonglong *)0x0;
        puVar11 = local_230;
      }
      else {
        uVar25 = 0xffffffff;
        local_230 = (ulonglong *)0x0;
        iVar17 = iVar23;
        do {
          lVar29 = param_3[0xb];
          lVar24 = (longlong)iVar27 * 200;
          if (*(int *)(lVar29 + 0x60 + lVar24) != *(int *)(lVar29 + 0x8c + lVar24)) {
            lVar34 = lVar29 + lVar24;
            lVar30 = lVar34 + 0x90;
            if (*(longlong *)(lVar34 + 0x98) != 0) {
              lVar30 = *(longlong *)(lVar34 + 0x98);
            }
            iVar27 = *(int *)(lVar30 + (ulonglong)
                                       (*(int *)(lVar34 + 0xa0) - 1U &
                                       (int)local_108 + (int)((ulonglong)local_108 >> 0x20) * 0x17)
                                       * 4);
            if (iVar27 != -1) {
              local_228 = (longlong *)CONCAT44(local_228._4_4_,iVar31);
              plVar18 = (longlong *)(lVar24 + lVar29 + 0x58);
              lVar29 = *plVar18;
              do {
                if (*(undefined ***)(lVar29 + (longlong)iVar27 * 0x10) == local_108) {
                  lVar34 = lVar34 + 8;
                  FUN_140326250(plVar18,&local_108);
                  FUN_140325a06(lVar34,&local_148,&local_108,0);
                  iVar17 = (int)param_3[0x10];
                  local_230 = (ulonglong *)CONCAT71((int7)((ulonglong)lVar34 >> 8),1);
                  break;
                }
                iVar27 = *(int *)((longlong)iVar27 * 0x10 + lVar29 + 8);
              } while (iVar27 != -1);
              iVar31 = (int)local_228;
            }
          }
          uVar25 = uVar25 & ~(uint)uVar32;
          puVar7 = (uint *)param_3[0xf];
          if ((uint *)param_3[0xf] == (uint *)0x0) {
            puVar7 = puVar9;
          }
          iVar27 = (int)uVar33;
          lVar29 = (longlong)iVar27;
          uVar21 = puVar7[lVar29] & uVar25;
          if (uVar21 == 0) {
            iVar15 = iVar17 + 0x1e;
            if (-1 < iVar17 + -1) {
              iVar15 = iVar17 + -1;
            }
            iVar15 = iVar15 >> 5;
            iVar31 = iVar31 + 0x20;
            iVar16 = iVar15;
            if (iVar15 < iVar27) {
              iVar16 = iVar27;
            }
            if (iVar27 < iVar15) {
              lVar24 = 0;
              do {
                uVar21 = puVar7[lVar29 + lVar24 + 1];
                if (uVar21 != 0) {
                  uVar33 = (ulonglong)(iVar27 + (int)lVar24 + 1);
                  uVar25 = 0xffffffff;
                  goto LAB_1443e31cc;
                }
                iVar31 = iVar31 + 0x20;
                lVar24 = lVar24 + 1;
              } while (iVar16 - lVar29 != lVar24);
              uVar25 = 0xffffffff;
              iVar27 = iVar16;
            }
            uVar33 = (ulonglong)(iVar27 + 1);
            param_3 = local_218;
            iVar27 = iVar17;
          }
          else {
LAB_1443e31cc:
            uVar32 = (ulonglong)(-uVar21 & uVar21);
            uVar1 = uVar32 * 2 + 1;
            lVar29 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar29 == 0; lVar29 = lVar29 + -1) {
              }
            }
            iVar27 = (iVar31 - ((uint)lVar29 ^ 0x3f)) + 0x3e;
            if (iVar17 <= iVar27) {
              iVar27 = iVar17;
            }
          }
          puVar11 = local_230;
        } while (iVar27 != iVar23);
      }
      goto LAB_1443e4826;
    }
    local_1e0 = param_1;
    if ((char)param_2[9] == '\x01') {
      local_128 = (ulonglong *)0x0;
      local_120 = 0x800000000;
      puVar9 = (uint *)(param_3 + 0xd);
      iVar23 = (int)param_3[0x10];
      if (iVar23 == 0) {
        uVar33 = 1;
        uVar32 = 0;
        iVar31 = 0;
        iVar27 = 0;
      }
      else {
        puVar7 = (uint *)param_3[0xf];
        if ((uint *)param_3[0xf] == (uint *)0x0) {
          puVar7 = puVar9;
        }
        uVar25 = *puVar7;
        if (uVar25 == 0) {
          iVar31 = iVar23 + 0x1e;
          if (-1 < iVar23 + -1) {
            iVar31 = iVar23 + -1;
          }
          uVar32 = 0;
          uVar33 = (ulonglong)(uint)(iVar31 >> 5);
          if (iVar31 >> 5 < 1) {
            uVar33 = uVar32;
          }
          iVar31 = 0;
          do {
            if (uVar33 == uVar32) goto LAB_1443e38c1;
            iVar31 = iVar31 + 0x20;
            uVar25 = puVar7[uVar32 + 1];
            uVar32 = uVar32 + 1;
          } while (uVar25 == 0);
        }
        else {
          uVar32 = 0;
          iVar31 = 0;
        }
        uVar33 = (ulonglong)(-uVar25 & uVar25);
        uVar1 = uVar33 * 2 + 1;
        lVar29 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar29 == 0; lVar29 = lVar29 + -1) {
          }
        }
        iVar27 = (iVar31 - ((uint)lVar29 ^ 0x3f)) + 0x3e;
        if (iVar23 <= iVar27) {
          iVar27 = iVar23;
        }
      }
      if (iVar27 < iVar23) {
        local_200 = (uint *)(param_3 + 0xb);
        local_1c0 = param_3 + 7;
        uVar25 = 0xffffffff;
        local_1c8 = puVar9;
LAB_1443e3319:
        local_1cc = iVar27;
        local_220 = (ulonglong *)CONCAT44(local_220._4_4_,uVar25);
        puVar7 = (uint *)(*(longlong *)local_200 + (longlong)local_1cc * 200);
        puVar11 = (ulonglong *)(puVar7 + 2);
        uVar25 = *puVar7;
        if (((puVar7[4] != puVar7[0xf]) || (puVar7[0x18] != puVar7[0x23])) &&
           ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34))) {
          plVar18 = (longlong *)param_3[8];
          if ((longlong *)param_3[8] == (longlong *)0x0) {
            plVar18 = local_1c0;
          }
          iVar23 = *(int *)((longlong)plVar18 + (ulonglong)((int)param_3[9] - 1U & uVar25) * 4);
          if (iVar23 != -1) {
            do {
              lVar29 = *param_3 + (longlong)iVar23 * 0x10;
              if (*(uint *)(*param_3 + (longlong)iVar23 * 0x10) == uVar25) {
                if ((lVar29 != 0) && (lVar29 != -4)) {
                  uVar21 = puVar7[0xc];
                  local_1f8 = CONCAT44(local_1f8._4_4_,iVar31);
                  local_1f0 = uVar32;
                  local_210 = uVar33;
                  local_1d0 = uVar25;
                  if (uVar21 == 0) {
                    uVar32 = 1;
                    uVar33 = 0;
                    iVar23 = 0;
                    uVar25 = 0;
                    goto LAB_1443e3464;
                  }
                  puVar19 = *(uint **)(puVar7 + 10);
                  if (*(uint **)(puVar7 + 10) == (uint *)0x0) {
                    puVar19 = puVar7 + 6;
                  }
                  uVar25 = *puVar19;
                  if (uVar25 != 0) {
                    uVar33 = 0;
                    iVar23 = 0;
                    goto LAB_1443e342e;
                  }
                  iVar23 = uVar21 + 0x1e;
                  if (-1 < (int)(uVar21 - 1)) {
                    iVar23 = uVar21 - 1;
                  }
                  uVar33 = 0;
                  uVar32 = (ulonglong)(uint)(iVar23 >> 5);
                  if (iVar23 >> 5 < 1) {
                    uVar32 = uVar33;
                  }
                  iVar23 = 0;
                  goto LAB_1443e3415;
                }
                break;
              }
              iVar23 = *(int *)(lVar29 + 8);
            } while (iVar23 != -1);
          }
        }
        goto LAB_1443e3797;
      }
LAB_1443e38c1:
      puVar11 = local_128;
      if (*(int *)((longlong)param_3 + 0x8c) < (int)param_3[0xc]) {
        *(undefined1 *)((longlong)param_2 + 0x4b) = 1;
      }
    }
    else {
      bVar2 = *(byte *)((longlong)param_3 + 0x10c);
      if ((((bVar2 & 1) == 0) &&
          (*(byte *)((longlong)param_3 + 0x10c) = bVar2 | 1, (bVar2 & 2) != 0)) &&
         (*(char *)((longlong)param_2 + 0x4f) != '\0')) {
        *(byte *)((longlong)param_3 + 0x10c) = bVar2 | 5;
        goto LAB_1443e3239;
      }
      plVar18 = (longlong *)*param_2;
      if (plVar18 == (longlong *)0x0) {
        plVar18 = (longlong *)param_2[1];
        local_d8 = (ulonglong *)0x0;
        local_d0 = 0x800000000;
        cVar5 = FUN_1443e5bf2(&local_1b0);
        if (cVar5 == '\0') {
LAB_1443e44ba:
          if (local_d8 != (ulonglong *)0x0) {
            FUN_1400020a8();
          }
LAB_1443e44cc:
          puVar11 = (ulonglong *)0x0;
          goto LAB_1443e4826;
        }
        iVar23 = 0;
        local_128 = (ulonglong *)0x0;
        local_120 = 0x800000000;
        local_158 = (undefined4 *)0x0;
        local_150 = 0x800000000;
        plVar13 = local_228;
        if (0 < local_100) {
          plVar26 = param_3 + 7;
          local_1e8 = param_3 + 0xb;
          do {
            plVar13 = local_1e0;
            local_1b4 = 0;
            puVar11 = (ulonglong *)plVar18[1];
            puVar9 = (uint *)*puVar11 + 1;
            if ((uint *)puVar11[1] < puVar9) {
              if ((*(byte *)((longlong)plVar18 + 0x2a) & 2) == 0) {
                (**(code **)(*plVar18 + 0x170))(plVar18,&local_1b4,4);
              }
              else {
                FUN_14572512c(plVar18,&local_1b4);
              }
            }
            else {
              local_1b4 = *(uint *)*puVar11;
              *puVar11 = (ulonglong)puVar9;
            }
            uVar32 = local_120;
            if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
              plVar20 = (longlong *)param_3[8];
              if ((longlong *)param_3[8] == (longlong *)0x0) {
                plVar20 = plVar26;
              }
              iVar31 = *(int *)((longlong)plVar20 +
                               (ulonglong)((int)param_3[9] - 1U & local_1b4) * 4);
              if (iVar31 != -1) {
                do {
                  lVar29 = *param_3 + (longlong)iVar31 * 0x10;
                  if (*(uint *)(*param_3 + (longlong)iVar31 * 0x10) == local_1b4) {
                    if ((lVar29 != 0) && ((uint *)(lVar29 + 4) != (uint *)0x0)) {
                      local_1b8 = *(uint *)(lVar29 + 4);
                      puVar9 = (uint *)((longlong)(int)local_1b8 * 0x18 + *plVar13);
                      lVar29 = (longlong)(int)local_120;
                      uVar25 = (int)local_120 + 1;
                      local_120 = CONCAT44(local_120._4_4_,uVar25);
                      if (local_120._4_4_ < uVar25) {
                        FUN_1400cc390(&local_148,uVar32 & 0xffffffff);
                      }
                      puVar11 = local_128;
                      if (local_128 == (ulonglong *)0x0) {
                        puVar11 = (ulonglong *)&local_148;
                      }
                      *(uint *)((longlong)puVar11 + lVar29 * 4) = local_1b8;
                      goto LAB_1443e3b3a;
                    }
                    break;
                  }
                  iVar31 = *(int *)(lVar29 + 8);
                } while (iVar31 != -1);
              }
            }
            local_1b8 = 0;
            puVar9 = (uint *)FUN_149012482(plVar13);
            *puVar9 = local_1b4;
            local_1b8 = (int)plVar13[1] - 1;
            local_190 = &local_1b4;
            local_188 = &local_1b8;
            FUN_140263e2a(param_3,local_17c,&local_190);
            uVar32 = local_150;
            lVar29 = (longlong)(int)local_150;
            uVar25 = (int)local_150 + 1;
            local_150 = CONCAT44(local_150._4_4_,uVar25);
            if (local_150._4_4_ < uVar25) {
              FUN_1400cc390(local_178,uVar32 & 0xffffffff);
            }
            puVar10 = local_158;
            if (local_158 == (undefined4 *)0x0) {
              puVar10 = local_178;
            }
            puVar10[lVar29] = local_1b8;
LAB_1443e3b3a:
            plVar13 = local_228;
            puVar9[2] = (uint)local_108;
            puVar9[1] = puVar9[1] + 1;
            lVar29 = local_228[4];
            FUN_144958770(lVar29 + 0x30,0);
            FUN_144958770(lVar29 + 0x80,0);
            *(undefined1 *)(lVar29 + 0x28) = 1;
            puVar7 = (uint *)plVar18[0x15];
            plVar13[7] = local_1d8;
            plVar13[6] = (longlong)puVar9;
            local_190 = puVar7;
            (**(code **)(*(longlong *)plVar13[8] + 8))((longlong *)plVar13[8],plVar13);
            if ((*(byte *)((longlong)plVar18 + 0x29) & 2) == 0) {
              lVar29 = plVar13[4];
              if ((*(int *)(lVar29 + 0x38) == *(int *)(lVar29 + 100)) &&
                 (*(int *)(lVar29 + 0x88) == *(int *)(lVar29 + 0xb4))) {
                FUN_1456fd588(local_1e8,local_1b4);
                plVar13 = local_228;
              }
              else {
                local_208 = (uint *)(lVar29 + 0x30);
                puVar11 = (ulonglong *)FUN_1456fd5f6(local_1e8,local_1b4);
                local_230 = puVar11;
                if ((uint)puVar11[1] - *(uint *)((longlong)puVar11 + 0x34) ==
                    *(int *)(lVar29 + 0x38) - *(int *)(lVar29 + 100)) {
                  local_220 = puVar11 + 2;
                  uVar25 = (uint)puVar11[5];
                  if (uVar25 == 0) {
                    uVar33 = 1;
                    uVar32 = 0;
                    iVar31 = 0;
                    uVar21 = 0;
                  }
                  else {
                    puVar35 = (ulonglong *)puVar11[4];
                    if ((ulonglong *)puVar11[4] == (ulonglong *)0x0) {
                      puVar35 = local_220;
                    }
                    uVar21 = (uint)*puVar35;
                    if (uVar21 == 0) {
                      iVar31 = uVar25 + 0x1e;
                      if (-1 < (int)(uVar25 - 1)) {
                        iVar31 = uVar25 - 1;
                      }
                      uVar32 = 0;
                      uVar33 = (ulonglong)(uint)(iVar31 >> 5);
                      if (iVar31 >> 5 < 1) {
                        uVar33 = uVar32;
                      }
                      iVar31 = 0;
                      do {
                        if (uVar33 == uVar32) goto LAB_1443e3d5f;
                        iVar31 = iVar31 + 0x20;
                        uVar21 = *(uint *)((longlong)puVar35 + uVar32 * 4 + 4);
                        uVar32 = uVar32 + 1;
                      } while (uVar21 == 0);
                    }
                    else {
                      uVar32 = 0;
                      iVar31 = 0;
                    }
                    uVar33 = (ulonglong)(-uVar21 & uVar21);
                    uVar1 = uVar33 * 2 + 1;
                    lVar24 = 0x3f;
                    if (uVar1 != 0) {
                      for (; uVar1 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                      }
                    }
                    uVar21 = (iVar31 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
                    if ((int)uVar25 <= (int)uVar21) {
                      uVar21 = uVar25;
                    }
                  }
                  if (uVar21 != uVar25) {
                    if ((ulonglong *)puVar11[4] != (ulonglong *)0x0) {
                      local_220 = (ulonglong *)puVar11[4];
                    }
                    iVar27 = uVar25 + 0x1e;
                    if (-1 < (int)(uVar25 - 1)) {
                      iVar27 = uVar25 - 1;
                    }
                    if (*(int *)(lVar29 + 0x38) == *(int *)(lVar29 + 100)) goto LAB_1443e3d47;
                    local_1f0 = *puVar11;
                    iVar27 = iVar27 >> 5;
                    local_1f8 = lVar29 + 0x68;
                    if (*(longlong *)(lVar29 + 0x70) != 0) {
                      local_1f8 = *(longlong *)(lVar29 + 0x70);
                    }
                    uVar6 = *(int *)(lVar29 + 0x78) - 1;
                    local_210 = CONCAT44(local_210._4_4_,uVar6);
                    local_200 = (uint *)((longlong)local_220 + 4);
                    uVar28 = 0xffffffff;
                    do {
                      lVar24 = *(longlong *)(local_1f0 + (longlong)(int)uVar21 * 0x10);
                      iVar17 = *(int *)(local_1f8 +
                                       (ulonglong)
                                       ((int)lVar24 + (int)((ulonglong)lVar24 >> 0x20) * 0x17 &
                                       uVar6) * 4);
                      if (iVar17 == -1) goto LAB_1443e3d47;
                      while (*(longlong *)(*(longlong *)local_208 + (longlong)iVar17 * 0x10) !=
                             lVar24) {
                        iVar17 = *(int *)((longlong)iVar17 * 0x10 + *(longlong *)local_208 + 8);
                        if (iVar17 == -1) goto LAB_1443e3d47;
                      }
                      uVar28 = uVar28 & ~(uint)uVar33;
                      iVar17 = (int)uVar32;
                      lVar24 = (longlong)iVar17;
                      uVar21 = *(uint *)((longlong)local_220 + lVar24 * 4) & uVar28;
                      if (uVar21 == 0) {
                        iVar15 = iVar27;
                        if (iVar27 < iVar17) {
                          iVar15 = iVar17;
                        }
                        if (iVar27 <= iVar17) break;
                        lVar34 = 0;
                        while( true ) {
                          iVar31 = iVar31 + 0x20;
                          uVar21 = local_200[lVar24 + lVar34];
                          if (uVar21 != 0) break;
                          lVar34 = lVar34 + 1;
                          if (iVar15 - lVar24 == lVar34) goto LAB_1443e3d5f;
                        }
                        uVar32 = (ulonglong)(iVar17 + (int)lVar34 + 1);
                        uVar28 = 0xffffffff;
                      }
                      uVar33 = (ulonglong)(-uVar21 & uVar21);
                      uVar1 = uVar33 * 2 + 1;
                      lVar24 = 0x3f;
                      if (uVar1 != 0) {
                        for (; uVar1 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                        }
                      }
                      uVar21 = (iVar31 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
                    } while ((int)uVar21 < (int)uVar25);
                  }
                }
                else {
LAB_1443e3d47:
                  FUN_140492002(puVar11,local_208);
                  *(undefined1 *)((longlong)local_228 + 0x4c) = 1;
                }
LAB_1443e3d5f:
                local_208 = (uint *)(lVar29 + 0x80);
                if ((uint)local_230[0xb] - *(uint *)((longlong)local_230 + 0x84) ==
                    *(int *)(lVar29 + 0x88) - *(int *)(lVar29 + 0xb4)) {
                  local_220 = puVar11 + 0xc;
                  uVar25 = (uint)local_230[0xf];
                  if (uVar25 == 0) {
                    uVar33 = 1;
                    uVar32 = 0;
                    iVar31 = 0;
                    uVar21 = 0;
                  }
                  else {
                    puVar35 = (ulonglong *)local_230[0xe];
                    if ((ulonglong *)local_230[0xe] == (ulonglong *)0x0) {
                      puVar35 = local_220;
                    }
                    uVar21 = (uint)*puVar35;
                    if (uVar21 == 0) {
                      iVar31 = uVar25 + 0x1e;
                      if (-1 < (int)(uVar25 - 1)) {
                        iVar31 = uVar25 - 1;
                      }
                      uVar32 = 0;
                      uVar33 = (ulonglong)(uint)(iVar31 >> 5);
                      if (iVar31 >> 5 < 1) {
                        uVar33 = uVar32;
                      }
                      iVar31 = 0;
                      do {
                        if (uVar33 == uVar32) goto LAB_1443e3e77;
                        iVar31 = iVar31 + 0x20;
                        uVar21 = *(uint *)((longlong)puVar35 + uVar32 * 4 + 4);
                        uVar32 = uVar32 + 1;
                      } while (uVar21 == 0);
                    }
                    else {
                      uVar32 = 0;
                      iVar31 = 0;
                    }
                    uVar33 = (ulonglong)(-uVar21 & uVar21);
                    uVar1 = uVar33 * 2 + 1;
                    lVar24 = 0x3f;
                    if (uVar1 != 0) {
                      for (; uVar1 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                      }
                    }
                    uVar21 = (iVar31 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
                    if ((int)uVar25 <= (int)uVar21) {
                      uVar21 = uVar25;
                    }
                  }
                  if (uVar21 != uVar25) {
                    if ((ulonglong *)local_230[0xe] != (ulonglong *)0x0) {
                      local_220 = (ulonglong *)local_230[0xe];
                    }
                    iVar27 = uVar25 + 0x1e;
                    if (-1 < (int)(uVar25 - 1)) {
                      iVar27 = uVar25 - 1;
                    }
                    if (*(int *)(lVar29 + 0x88) == *(int *)(lVar29 + 0xb4)) goto LAB_1443e3e60;
                    iVar27 = iVar27 >> 5;
                    local_1f0 = lVar29 + 0xb8;
                    if (*(ulonglong *)(lVar29 + 0xc0) != 0) {
                      local_1f0 = *(ulonglong *)(lVar29 + 0xc0);
                    }
                    uVar6 = *(int *)(lVar29 + 200) - 1;
                    local_1f8 = CONCAT44(local_1f8._4_4_,uVar6);
                    local_200 = (uint *)((longlong)local_220 + 4);
                    local_210 = CONCAT44(local_210._4_4_,0xffffffff);
                    do {
                      lVar24 = *(longlong *)(local_230[10] + (longlong)(int)uVar21 * 0x10);
                      iVar17 = *(int *)(local_1f0 +
                                       (ulonglong)
                                       ((int)lVar24 + (int)((ulonglong)lVar24 >> 0x20) * 0x17 &
                                       uVar6) * 4);
                      if (iVar17 == -1) goto LAB_1443e3e60;
                      while (*(longlong *)(*(longlong *)local_208 + (longlong)iVar17 * 0x10) !=
                             lVar24) {
                        iVar17 = *(int *)((longlong)iVar17 * 0x10 + *(longlong *)local_208 + 8);
                        if (iVar17 == -1) goto LAB_1443e3e60;
                      }
                      uVar28 = (uint)local_210 & ~(uint)uVar33;
                      iVar17 = (int)uVar32;
                      lVar24 = (longlong)iVar17;
                      uVar21 = *(uint *)((longlong)local_220 + lVar24 * 4) & uVar28;
                      if (uVar21 == 0) {
                        iVar15 = iVar27;
                        if (iVar27 < iVar17) {
                          iVar15 = iVar17;
                        }
                        if (iVar27 <= iVar17) break;
                        lVar34 = 0;
                        while( true ) {
                          iVar31 = iVar31 + 0x20;
                          uVar21 = local_200[lVar24 + lVar34];
                          if (uVar21 != 0) break;
                          lVar34 = lVar34 + 1;
                          if (iVar15 - lVar24 == lVar34) goto LAB_1443e3e77;
                        }
                        uVar32 = (ulonglong)(iVar17 + (int)lVar34 + 1);
                        local_210 = CONCAT44(local_210._4_4_,0xffffffff);
                      }
                      else {
                        local_210 = CONCAT44(local_210._4_4_,uVar28);
                      }
                      uVar33 = (ulonglong)(-uVar21 & uVar21);
                      uVar1 = uVar33 * 2 + 1;
                      lVar24 = 0x3f;
                      if (uVar1 != 0) {
                        for (; uVar1 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                        }
                      }
                      uVar21 = (iVar31 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
                    } while ((int)uVar21 < (int)uVar25);
                  }
                }
                else {
LAB_1443e3e60:
                  FUN_140492002(puVar11 + 10,local_208);
                  *(undefined1 *)((longlong)local_228 + 0x4c) = 1;
                }
LAB_1443e3e77:
                puVar35 = local_230;
                *(uint *)(local_230 + 0x15) = 0;
                if (*(uint *)((longlong)local_230 + 0xac) != 0) {
                  FUN_144893a1c(puVar11 + 0x14,0);
                }
                *(int *)(puVar35 + 0x16) = (int)plVar18[0x15] - (int)puVar7;
                FUN_14049209c(&local_190,plVar18,puVar11 + 0x14);
                plVar13 = local_228;
                if (*(int *)(lVar29 + 0x38) != *(int *)(lVar29 + 100)) {
                  *(undefined1 *)((longlong)local_228 + 0x4b) = 1;
                }
              }
            }
            lVar29 = plVar13[4];
            FUN_144958770(lVar29 + 0x30,0);
            FUN_144958770(lVar29 + 0x80,0);
            *(undefined1 *)(lVar29 + 0x28) = 0;
            if ((*(byte *)((longlong)plVar18 + 0x29) & 2) != 0) {
              if (local_158 != (undefined4 *)0x0) {
                FUN_1400020a8();
              }
              if (local_128 != (ulonglong *)0x0) {
                FUN_1400020a8();
              }
              goto LAB_1443e44ba;
            }
            iVar23 = iVar23 + 1;
            param_3 = local_218;
            plVar13 = local_198;
          } while (iVar23 < local_100);
        }
        plVar18 = local_1a8;
        if (((char)plVar13[10] == '\0') && (iVar23 = (int)local_1a8[1], 0 < iVar23)) {
          uVar32 = 0;
          do {
            uVar33 = local_d0;
            iVar31 = *(int *)(*plVar18 + 8 + uVar32 * 0x18);
            if ((iVar31 < (int)(uint)local_108) && (local_108._4_4_ < iVar31)) {
              puVar11 = local_d8;
              if (local_d8 == (ulonglong *)0x0) {
                puVar11 = local_f8;
              }
              lVar29 = (longlong)(int)local_d0;
              if (lVar29 != 0) {
                lVar24 = 0;
                do {
                  if (uVar32 == *(uint *)((longlong)puVar11 + lVar24)) goto LAB_1443e4591;
                  lVar24 = lVar24 + 4;
                } while (lVar29 * 4 - lVar24 != 0);
              }
              uVar25 = (int)local_d0 + 1;
              local_d0 = CONCAT44(local_d0._4_4_,uVar25);
              if (local_d0._4_4_ < uVar25) {
                FUN_1400cc390(local_f8,uVar33 & 0xffffffff);
              }
              puVar11 = local_d8;
              if (local_d8 == (ulonglong *)0x0) {
                puVar11 = local_f8;
              }
              *(int *)((longlong)puVar11 + lVar29 * 4) = (int)uVar32;
              iVar23 = (int)plVar18[1];
            }
LAB_1443e4591:
            uVar32 = uVar32 + 1;
          } while ((longlong)uVar32 < (longlong)iVar23);
        }
        if ((0 < (int)local_d0) || (0 < local_100)) {
          FUN_140705914(local_1a0);
        }
        plVar26 = local_1a0;
        plVar18 = local_1a8;
        puVar11 = local_d8;
        if (local_d8 == (ulonglong *)0x0) {
          puVar11 = local_f8;
        }
        if ((int)local_d0 != 0) {
          local_218 = local_218 + 0xb;
          lVar29 = (longlong)(int)local_d0;
          lVar24 = 0;
          do {
            lVar34 = (longlong)*(int *)((longlong)puVar11 + lVar24);
            if ((-1 < lVar34) && (*(int *)((longlong)puVar11 + lVar24) < (int)plVar18[1])) {
              iVar23 = FUN_1456fd588(local_218,*(undefined4 *)(*plVar18 + lVar34 * 0x18));
              if (0 < iVar23) {
                *(undefined1 *)((longlong)plVar13 + 0x4c) = 1;
              }
              if (*(longlong *)(*plVar18 + 0x10 + lVar34 * 0x18) != 0) {
                FUN_1490126bc(plVar26[0x24] + 0x520);
              }
            }
            lVar24 = lVar24 + 4;
          } while (lVar29 * 4 != lVar24);
        }
        plVar13 = local_1a0;
        plVar18 = local_1a8;
        puVar10 = local_158;
        if (local_158 == (undefined4 *)0x0) {
          puVar10 = local_178;
        }
        lVar29 = (longlong)(int)local_150;
        if (lVar29 != 0) {
          lVar24 = 0;
          do {
            if (*(longlong *)
                 (*plVar18 + 0x10 + (longlong)*(int *)((longlong)puVar10 + lVar24) * 0x18) != 0) {
              FUN_1490126bc(plVar13[0x24] + 0x508);
            }
            lVar24 = lVar24 + 4;
          } while (lVar29 * 4 != lVar24);
        }
        plVar13 = local_1a0;
        plVar18 = local_1a8;
        puVar11 = local_128;
        if (local_128 == (ulonglong *)0x0) {
          puVar11 = (ulonglong *)&local_148;
        }
        lVar29 = (longlong)(int)local_120;
        if (lVar29 != 0) {
          lVar24 = 0;
          do {
            if (*(longlong *)
                 (*plVar18 + 0x10 + (longlong)*(int *)((longlong)puVar11 + lVar24) * 0x18) != 0) {
              FUN_1490126bc(plVar13[0x24] + 0x508);
            }
            lVar24 = lVar24 + 4;
          } while (lVar29 * 4 != lVar24);
        }
        if (0 < (int)local_d0) {
          puVar11 = local_d8;
          if (local_d8 == (ulonglong *)0x0) {
            puVar11 = local_f8;
          }
          FUN_144958a06(puVar11);
          plVar18 = local_1a8;
          if (0 < (longlong)(int)local_d0) {
            uVar32 = (longlong)(int)local_d0 + 1;
            do {
              puVar11 = local_d8;
              if (local_d8 == (ulonglong *)0x0) {
                puVar11 = local_f8;
              }
              uVar25 = *(uint *)((longlong)puVar11 + uVar32 * 4 + -8);
              if ((-1 < (longlong)(int)uVar25) && (iVar23 = (int)plVar18[1], (int)uVar25 < iVar23))
              {
                iVar31 = ~uVar25 + iVar23;
                if (iVar31 != 0) {
                  if (0 < iVar31) {
                    iVar31 = 1;
                  }
                  memmove((void *)(*plVar18 + (longlong)(int)uVar25 * 0x18),
                          (void *)(*plVar18 + (ulonglong)(uint)(iVar23 - iVar31) * 0x18),
                          (longlong)iVar31 * 0x18);
                  iVar23 = (int)plVar18[1];
                }
                *(int *)(plVar18 + 1) = iVar23 + -1;
              }
              uVar32 = uVar32 - 1;
            } while (1 < uVar32);
          }
          FUN_14010afec(local_1a0,0);
        }
        if (local_158 != (undefined4 *)0x0) {
          FUN_1400020a8();
        }
        puVar11 = local_d8;
        if (local_128 != (ulonglong *)0x0) {
          FUN_1400020a8();
          puVar11 = local_d8;
        }
        goto LAB_1443e481a;
      }
      lVar29 = param_2[3];
      if (lVar29 == 0) {
        local_230 = (ulonglong *)CONCAT44(local_230._4_4_,0xffffffff);
        lVar29 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(lVar29 + 0x70);
        cVar5 = FUN_1443e51fc(&local_1b0,uVar3);
        if (cVar5 == '\0') goto LAB_1443e44cc;
        local_230 = (ulonglong *)CONCAT44(local_230._4_4_,uVar3);
        lVar29 = lVar29 + 0x20;
      }
      puVar12 = (undefined8 *)FUN_14001cc68(0x78,0x10);
      puVar12[1] = 0;
      puVar12[2] = 0;
      puVar12[3] = 0;
      *puVar12 = &PTR_FUN_14ab190a0;
      puVar12[8] = 0;
      *(undefined4 *)(puVar12 + 9) = 0;
      puVar12[4] = 0;
      puVar12[5] = 0;
      *(undefined8 *)((longlong)puVar12 + 0x4c) = 0xffffffff00000080;
      *(undefined4 *)((longlong)puVar12 + 0x54) = 0;
      puVar12[0xc] = 0;
      *(undefined4 *)(puVar12 + 0xd) = 0;
      *(undefined4 *)(puVar12 + 0xe) = 0xffffffff;
      puVar14 = (undefined8 *)local_228[2];
      plVar13 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar13[1] = (longlong)&DAT_100000001;
      *plVar13 = (longlong)&PTR_FUN_14ab190c0;
      plVar13[2] = (longlong)puVar12;
      if (puVar12 == (undefined8 *)0x0) {
LAB_1443e426d:
        *puVar14 = puVar12;
        plVar26 = (longlong *)puVar14[1];
        if (plVar13 == plVar26) {
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            plVar26 = plVar13 + 1;
            *(int *)plVar26 = (int)*plVar26 + -1;
            UNLOCK();
            if ((int)*plVar26 == 0) {
              (**(code **)*plVar13)(plVar13);
              LOCK();
              piVar4 = (int *)((longlong)plVar13 + 0xc);
              *piVar4 = *piVar4 + -1;
              iVar23 = *piVar4;
              UNLOCK();
              plVar26 = plVar13;
              goto joined_r0x0001443e42a9;
            }
          }
        }
        else {
          puVar14[1] = plVar13;
          if (plVar26 != (longlong *)0x0) goto LAB_1443e42c5;
        }
      }
      else {
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
          UNLOCK();
          puVar12[1] = puVar12;
          if ((longlong *)puVar12[2] != plVar13) {
            LOCK();
            *(int *)((longlong)plVar13 + 0xc) = *(int *)((longlong)plVar13 + 0xc) + 1;
            UNLOCK();
            plVar26 = (longlong *)puVar12[2];
            if (plVar26 != (longlong *)0x0) {
              LOCK();
              piVar4 = (int *)((longlong)plVar26 + 0xc);
              *piVar4 = *piVar4 + -1;
              UNLOCK();
              if (*piVar4 == 0) {
                (**(code **)(*plVar26 + 0x10))();
              }
            }
            puVar12[2] = plVar13;
          }
          LOCK();
          plVar26 = plVar13 + 1;
          *(int *)plVar26 = (int)*plVar26 + -1;
          UNLOCK();
          if ((int)*plVar26 == 0) {
            (**(code **)*plVar13)(plVar13);
            LOCK();
            piVar4 = (int *)((longlong)plVar13 + 0xc);
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (*piVar4 == 0) {
              (**(code **)(*plVar13 + 0x10))(plVar13);
            }
          }
          goto LAB_1443e426d;
        }
        puVar12[1] = puVar12;
        *puVar14 = puVar12;
        plVar26 = (longlong *)puVar14[1];
        if (plVar26 != (longlong *)0x0) {
          puVar14[1] = 0;
LAB_1443e42c5:
          LOCK();
          plVar13 = plVar26 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
            (**(code **)*plVar26)(plVar26);
            LOCK();
            piVar4 = (int *)((longlong)plVar26 + 0xc);
            *piVar4 = *piVar4 + -1;
            iVar23 = *piVar4;
            UNLOCK();
joined_r0x0001443e42a9:
            if (iVar23 == 0) {
              (**(code **)(*plVar26 + 0x10))(plVar26);
            }
          }
        }
      }
      local_148 = *(undefined4 *)((longlong)param_3 + 0x54);
      *(undefined4 *)(puVar12 + 0xe) = local_148;
      local_144 = local_230._0_4_;
      local_140 = 0;
      local_118 = (ulonglong *)0x0;
      local_110 = 0x800000000;
      local_c8 = (undefined8 *)0x0;
      local_c0 = 0x800000000;
      if (*(char *)((longlong)local_228 + 0x4e) == '\x01') {
        FUN_1443e54ea(&local_1b0,puVar12 + 4,&local_108);
      }
      else {
        local_238 = local_138;
        FUN_1443e55d2(&local_1b0,puVar12 + 4,lVar29,&local_108);
        *(undefined4 *)(puVar12 + 0xe) = *(undefined4 *)((longlong)param_3 + 0x54);
      }
      local_140 = (int)local_c0;
      FUN_1443e5a00(&local_1b0);
      if (0 < (int)local_c0) {
        lVar29 = 0;
        do {
          puVar14 = local_c8;
          if (local_c8 == (undefined8 *)0x0) {
            puVar14 = &local_108;
          }
          iVar23 = *(int *)(puVar14 + lVar29);
          lVar24 = *local_1e0;
          local_178[0] = *(undefined4 *)((longlong)puVar14 + lVar29 * 8 + 4);
          puVar11 = (ulonglong *)plVar18[1];
          puVar10 = (undefined4 *)*puVar11 + 1;
          if ((undefined4 *)puVar11[1] < puVar10) {
            if ((*(byte *)((longlong)plVar18 + 0x2a) & 2) == 0) {
              (**(code **)(*plVar18 + 0x170))(plVar18,local_178,4);
            }
            else {
              FUN_14572512c(plVar18,local_178);
            }
          }
          else {
            local_178[0] = *(undefined4 *)*puVar11;
            *puVar11 = (ulonglong)puVar10;
          }
          local_228[7] = local_1d8;
          local_228[6] = (longlong)iVar23 * 0x18 + lVar24;
          (**(code **)(*(longlong *)local_228[8] + 8))();
          lVar29 = lVar29 + 1;
        } while ((int)lVar29 < (int)local_c0);
      }
      puVar11 = local_118;
      if (local_c8 != (undefined8 *)0x0) {
        FUN_1400020a8();
        puVar11 = local_118;
      }
    }
LAB_1443e481a:
    if (puVar11 != (ulonglong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    iVar23 = (int)param_3[0x10];
    if (iVar23 == 0) {
      uVar32 = 1;
      iVar27 = 0;
      uVar33 = 0;
      iVar31 = 0;
    }
    else {
      puVar11 = (ulonglong *)param_3[0xf];
      if ((ulonglong *)param_3[0xf] == (ulonglong *)0x0) {
        puVar11 = (ulonglong *)(param_3 + 0xd);
      }
      uVar25 = (uint)*puVar11;
      if (uVar25 == 0) {
        iVar31 = iVar23 + 0x1e;
        if (-1 < iVar23 + -1) {
          iVar31 = iVar23 + -1;
        }
        uVar33 = 0;
        uVar32 = (ulonglong)(uint)(iVar31 >> 5);
        if (iVar31 >> 5 < 1) {
          uVar32 = uVar33;
        }
        iVar27 = 0;
        do {
          if (uVar32 == uVar33) goto LAB_1443e4824;
          iVar27 = iVar27 + 0x20;
          uVar25 = *(uint *)((longlong)puVar11 + uVar33 * 4 + 4);
          uVar33 = uVar33 + 1;
        } while (uVar25 == 0);
      }
      else {
        iVar27 = 0;
        uVar33 = 0;
      }
      uVar32 = (ulonglong)(-uVar25 & uVar25);
      uVar1 = uVar32 * 2 + 1;
      lVar29 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar29 == 0; lVar29 = lVar29 + -1) {
        }
      }
      iVar31 = (iVar27 - ((uint)lVar29 ^ 0x3f)) + 0x3e;
      if (iVar23 <= iVar31) {
        iVar31 = iVar23;
      }
    }
    puVar11 = (ulonglong *)0x1;
    if (iVar31 == iVar23) goto LAB_1443e4826;
    uVar25 = 0xffffffff;
    local_230 = (ulonglong *)(param_3 + 0xd);
    do {
      lVar29 = local_218[0xb];
      lVar24 = (longlong)iVar31 * 200;
      FUN_1403257c8(param_2[0xd],lVar24 + lVar29 + 8);
      FUN_1403257c8(param_2[0xd],lVar24 + lVar29 + 0x58);
      piVar4 = (int *)param_2[0xe];
      if (piVar4 != (int *)0x0) {
        *piVar4 = *piVar4 + *(int *)(lVar29 + lVar24 + 0xb0);
      }
      uVar25 = uVar25 & ~(uint)uVar32;
      puVar11 = (ulonglong *)local_218[0xf];
      if ((ulonglong *)local_218[0xf] == (ulonglong *)0x0) {
        puVar11 = local_230;
      }
      iVar17 = (int)local_218[0x10];
      iVar31 = (int)uVar33;
      lVar29 = (longlong)iVar31;
      uVar21 = *(uint *)((longlong)puVar11 + lVar29 * 4) & uVar25;
      if (uVar21 == 0) {
        iVar15 = iVar17 + 0x1e;
        if (-1 < iVar17 + -1) {
          iVar15 = iVar17 + -1;
        }
        iVar15 = iVar15 >> 5;
        iVar27 = iVar27 + 0x20;
        iVar16 = iVar15;
        if (iVar15 < iVar31) {
          iVar16 = iVar31;
        }
        if (iVar31 < iVar15) {
          lVar24 = 0;
          do {
            uVar21 = *(uint *)((longlong)puVar11 + lVar24 * 4 + lVar29 * 4 + 4);
            if (uVar21 != 0) {
              uVar33 = (ulonglong)(iVar31 + (int)lVar24 + 1);
              uVar25 = 0xffffffff;
              goto LAB_1443e2f47;
            }
            iVar27 = iVar27 + 0x20;
            lVar24 = lVar24 + 1;
          } while (iVar16 - lVar29 != lVar24);
          uVar25 = 0xffffffff;
          iVar31 = iVar16;
        }
        uVar33 = (ulonglong)(iVar31 + 1);
        iVar31 = iVar17;
      }
      else {
LAB_1443e2f47:
        uVar32 = (ulonglong)(-uVar21 & uVar21);
        uVar1 = uVar32 * 2 + 1;
        lVar29 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar29 == 0; lVar29 = lVar29 + -1) {
          }
        }
        iVar31 = (iVar27 - ((uint)lVar29 ^ 0x3f)) + 0x3e;
        if (iVar17 <= iVar31) {
          iVar31 = iVar17;
        }
      }
    } while (iVar31 != iVar23);
  }
LAB_1443e4824:
  puVar11 = (ulonglong *)0x1;
LAB_1443e4826:
  if ((local_48 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar11;
  while( true ) {
    iVar23 = iVar23 + 0x20;
    uVar25 = puVar19[uVar33 + 1];
    uVar33 = uVar33 + 1;
    if (uVar25 != 0) break;
LAB_1443e3415:
    if (uVar32 == uVar33) goto LAB_1443e376d;
  }
LAB_1443e342e:
  uVar32 = (ulonglong)(-uVar25 & uVar25);
  uVar1 = uVar32 * 2 + 1;
  lVar29 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar29 == 0; lVar29 = lVar29 + -1) {
    }
  }
  uVar25 = (iVar23 - ((uint)lVar29 ^ 0x3f)) + 0x3e;
  if ((int)uVar21 <= (int)uVar25) {
    uVar25 = uVar21;
  }
LAB_1443e3464:
  if ((int)uVar25 < (int)uVar21) {
    local_208 = puVar7 + 0x16;
    uVar21 = 0xffffffff;
    local_1e8 = (longlong *)((ulonglong)local_1e8 & 0xffffffff00000000);
    local_230 = puVar11;
    do {
      plVar18 = local_228;
      puVar35 = (ulonglong *)((longlong)(int)uVar25 * 0x10 + *puVar11);
      cVar5 = (**(code **)(*(longlong *)local_228[4] + 0x330))((longlong *)local_228[4],puVar35,0);
      if (cVar5 == '\0') {
        puVar22 = puVar35;
        lVar29 = (**(code **)(*(longlong *)plVar18[4] + 800))((longlong *)plVar18[4],puVar35);
        puVar11 = local_230;
        if (lVar29 != 0) {
          local_1e8 = (longlong *)
                      CONCAT44(local_1e8._4_4_,(int)CONCAT71((int7)((ulonglong)puVar22 >> 8),1));
          if ((*puVar35 & 1) == 0 && *puVar35 != 0) {
            FUN_140325a06(local_208,&local_108,puVar35,0);
          }
          goto LAB_1443e3503;
        }
      }
      else {
LAB_1443e3503:
        puVar11 = local_230;
        FUN_140646052(local_230,uVar25);
      }
      param_2 = local_228;
      uVar21 = uVar21 & ~(uint)uVar32;
      puVar9 = (uint *)puVar11[4];
      if ((uint *)puVar11[4] == (uint *)0x0) {
        puVar9 = puVar7 + 6;
      }
      uVar6 = (uint)puVar11[5];
      iVar31 = (int)uVar33;
      lVar29 = (longlong)iVar31;
      uVar25 = puVar9[lVar29] & uVar21;
      if (uVar25 == 0) {
        iVar27 = uVar6 + 0x1e;
        if (-1 < (int)(uVar6 - 1)) {
          iVar27 = uVar6 - 1;
        }
        iVar27 = iVar27 >> 5;
        iVar17 = iVar27;
        if (iVar27 < iVar31) {
          iVar17 = iVar31;
        }
        if (iVar27 <= iVar31) break;
        lVar24 = 0;
        while( true ) {
          iVar23 = iVar23 + 0x20;
          uVar25 = puVar9[lVar29 + lVar24 + 1];
          if (uVar25 != 0) break;
          lVar24 = lVar24 + 1;
          if (iVar17 - lVar29 == lVar24) goto LAB_1443e35ab;
        }
        uVar33 = (ulonglong)(iVar31 + (int)lVar24 + 1);
        uVar21 = 0xffffffff;
      }
      uVar32 = (ulonglong)(-uVar25 & uVar25);
      uVar1 = uVar32 * 2 + 1;
      lVar29 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar29 == 0; lVar29 = lVar29 + -1) {
        }
      }
      uVar25 = (iVar23 - ((uint)lVar29 ^ 0x3f)) + 0x3e;
    } while ((int)uVar25 < (int)uVar6);
LAB_1443e35ab:
    puVar9 = local_1c8;
    if (((ulonglong)local_1e8 & 1) != 0) {
      *(undefined1 *)((longlong)local_228 + 0x49) = 1;
      if (*(char *)((longlong)local_228 + 0x4a) == '\0') {
        (**(code **)(*(longlong *)local_228[0xb] + 0x210))();
        *(undefined1 *)((longlong)param_2 + 0x4a) = 1;
        puVar11 = local_230;
      }
      uVar32 = local_120;
      plVar18 = local_218;
      if ((int)local_218[1] != *(int *)((longlong)local_218 + 0x34)) {
        plVar13 = (longlong *)local_218[8];
        if ((longlong *)local_218[8] == (longlong *)0x0) {
          plVar13 = local_1c0;
        }
        iVar23 = *(int *)((longlong)plVar13 + (ulonglong)((int)local_218[9] - 1U & local_1d0) * 4);
        if (iVar23 != -1) {
          do {
            lVar29 = *local_218 + (longlong)iVar23 * 0x10;
            if (*(uint *)(*local_218 + (longlong)iVar23 * 0x10) == local_1d0) goto LAB_1443e3639;
            iVar23 = *(int *)(lVar29 + 8);
          } while (iVar23 != -1);
        }
      }
      lVar29 = 0;
LAB_1443e3639:
      iVar23 = *(int *)(lVar29 + 4);
      lVar29 = (longlong)iVar23 * 0x18 + *local_1e0;
      lVar24 = (longlong)(int)local_120;
      uVar25 = (int)local_120 + 1;
      local_120 = CONCAT44(local_120._4_4_,uVar25);
      if (local_120._4_4_ < uVar25) {
        FUN_1400cc390(&local_148,uVar32 & 0xffffffff);
        puVar11 = local_230;
      }
      puVar35 = local_128;
      if (local_128 == (ulonglong *)0x0) {
        puVar35 = (ulonglong *)&local_148;
      }
      *(int *)((longlong)puVar35 + lVar24 * 4) = iVar23;
      FUN_1448fcc30(&local_108,param_2[4],puVar11[0x14],(longlong)(int)(uint)puVar11[0x16]);
      param_2[7] = local_1d8;
      param_2[6] = lVar29;
      param_2[1] = (longlong)&local_108;
      (**(code **)(*(longlong *)param_2[8] + 8))((longlong *)param_2[8],param_2);
      if (*(longlong *)(lVar29 + 0x10) != 0) {
        FUN_1490126bc(plVar18[0x24] + 0x508);
      }
      puVar9 = local_1c8;
      local_108 = &PTR_FUN_149e73df0;
      if (local_50 != 0) {
        (**(code **)(local_50 + -0x10))(local_50 + -0x10);
      }
      local_108 = &PTR_FUN_149e37220;
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      plVar18 = local_b0;
      local_108 = &PTR__purecall_149e35f70;
      if (local_b0 != (longlong *)0x0) {
        if (*local_b0 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar18);
      }
      lVar29 = local_90;
      puVar11 = local_230;
      if (local_90 != 0) {
        if (*(longlong *)(local_90 + 0x40) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(lVar29);
        puVar11 = local_230;
      }
    }
  }
LAB_1443e376d:
  uVar25 = (uint)local_210;
  param_3 = local_218;
  uVar32 = local_1f0;
  iVar31 = (int)local_1f8;
  if (((uint)puVar11[1] == *(uint *)((longlong)puVar11 + 0x34)) &&
     (uVar33 = local_210, (uint)puVar11[0xb] == *(uint *)((longlong)puVar11 + 0x84))) {
LAB_1443e3797:
    uVar25 = (uint)uVar33;
    FUN_1456fd4bc(local_200,local_1cc);
  }
  uVar25 = (uint)local_220 & ~uVar25;
  puVar7 = (uint *)param_3[0xf];
  if ((uint *)param_3[0xf] == (uint *)0x0) {
    puVar7 = puVar9;
  }
  iVar23 = (int)param_3[0x10];
  iVar27 = (int)uVar32;
  lVar29 = (longlong)iVar27;
  uVar21 = puVar7[lVar29] & uVar25;
  if (uVar21 == 0) {
    iVar17 = iVar23 + 0x1e;
    if (-1 < iVar23 + -1) {
      iVar17 = iVar23 + -1;
    }
    iVar17 = iVar17 >> 5;
    iVar15 = iVar17;
    if (iVar17 < iVar27) {
      iVar15 = iVar27;
    }
    if (iVar17 <= iVar27) goto LAB_1443e38c1;
    lVar24 = 0;
    while( true ) {
      iVar31 = iVar31 + 0x20;
      uVar21 = puVar7[lVar29 + lVar24 + 1];
      if (uVar21 != 0) break;
      lVar24 = lVar24 + 1;
      if (iVar15 - lVar29 == lVar24) goto LAB_1443e38c1;
    }
    uVar32 = (ulonglong)(iVar27 + (int)lVar24 + 1);
    uVar25 = 0xffffffff;
  }
  uVar33 = (ulonglong)(-uVar21 & uVar21);
  uVar1 = uVar33 * 2 + 1;
  lVar29 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar29 == 0; lVar29 = lVar29 + -1) {
    }
  }
  iVar27 = (iVar31 - ((uint)lVar29 ^ 0x3f)) + 0x3e;
  if (iVar23 <= iVar27) goto LAB_1443e38c1;
  goto LAB_1443e3319;
}



// FUNCTION 1443e5118 FUN_1443e5118 body=226 status=ok
// SIG undefined FUN_1443e5118(void)

void FUN_1443e5118(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_78 [44];
  int local_4c;
  longlong local_48;
  int *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((((char)(*(longlong **)(param_1 + 0x18))[9] != '\0') || (**(longlong **)(param_1 + 0x18) == 0)
      ) && (lVar1 = *(longlong *)(param_1 + 0x10),
           *(int *)(lVar1 + 8) - *(int *)(lVar1 + 0x34) != *(int *)(*(longlong *)(param_1 + 8) + 8))
     ) {
    FUN_14010afec(lVar1,0);
    local_4c = 0;
    plVar2 = *(longlong **)(param_1 + 8);
    if (0 < (int)plVar2[1]) {
      do {
        if ((*(int *)(*plVar2 + (longlong)local_4c * 0x18) != -1) ||
           (**(longlong **)(param_1 + 0x18) != 0)) {
          local_48 = *plVar2 + (longlong)local_4c * 0x18;
          local_40 = &local_4c;
          FUN_140263e2a(*(undefined8 *)(param_1 + 0x10),local_34,&local_48,0);
          plVar2 = *(longlong **)(param_1 + 8);
        }
        local_4c = local_4c + 1;
      } while (local_4c < (int)plVar2[1]);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443e51fc FUN_1443e51fc body=749 status=ok
// SIG undefined FUN_1443e51fc(void)

bool FUN_1443e51fc(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  bool bVar14;
  
  lVar11 = *(longlong *)(param_1 + 0x10);
  iVar3 = *(int *)(lVar11 + 0x54);
  if (iVar3 != param_2) goto LAB_1443e54d5;
  iVar10 = *(int *)(lVar11 + 0x104);
  iVar9 = *(int *)(*(longlong *)(param_1 + 8) + 8);
  if ((iVar10 != iVar9 || iVar10 == -1) || (iVar9 = iVar10, *(int *)(lVar11 + 0x108) == -1)) {
    *(int *)(lVar11 + 0x104) = iVar9;
    lVar11 = (longlong)(int)(*(longlong **)(param_1 + 8))[1];
    if (lVar11 == 0) {
      iVar10 = 0;
    }
    else {
      lVar12 = 0;
      iVar10 = 0;
      do {
        iVar10 = iVar10 + (uint)(byte)(*(int *)(**(longlong **)(param_1 + 8) + lVar12) != -1 |
                                      *(byte *)(*(longlong *)(param_1 + 0x18) + 0x4d) ^ 1);
        lVar12 = lVar12 + 0x18;
      } while (lVar11 * 0x18 != lVar12);
    }
    *(int *)(*(longlong *)(param_1 + 0x10) + 0x108) = iVar10;
  }
  lVar11 = *(longlong *)(param_1 + 0x18);
  lVar12 = *(longlong *)(lVar11 + 0x18);
  if (lVar12 != 0) {
    plVar7 = *(longlong **)(lVar12 + 0x10);
    bVar5 = true;
    if (plVar7 == (longlong *)0x0) {
LAB_1443e53ef:
      uVar8 = 0;
      plVar7 = (longlong *)0x0;
    }
    else {
      iVar10 = (int)plVar7[1];
      do {
        if (iVar10 == 0) goto LAB_1443e53ef;
        LOCK();
        iVar9 = (int)plVar7[1];
        bVar14 = iVar10 == iVar9;
        if (bVar14) {
          *(int *)(plVar7 + 1) = iVar10 + 1;
          iVar9 = iVar10;
        }
        iVar10 = iVar9;
        UNLOCK();
      } while (!bVar14);
      uVar8 = *(undefined8 *)(lVar12 + 8);
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      bVar5 = false;
    }
    puVar4 = *(undefined8 **)(*(longlong *)(param_1 + 0x18) + 0x10);
    *puVar4 = uVar8;
    plVar13 = (longlong *)puVar4[1];
    if (plVar7 == plVar13) {
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar7 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar10 = *piVar2;
          UNLOCK();
          plVar13 = plVar7;
          goto joined_r0x0001443e543e;
        }
      }
    }
    else {
      puVar4[1] = plVar7;
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar13 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar10 = *piVar2;
          UNLOCK();
joined_r0x0001443e543e:
          if (iVar10 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
    }
    if (!bVar5) {
      LOCK();
      plVar13 = plVar7 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
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
    goto LAB_1443e54d5;
  }
  puVar6 = (undefined8 *)FUN_14001cc68(0x78,0x10);
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  *puVar6 = &PTR_FUN_14ab190a0;
  puVar6[8] = 0;
  *(undefined4 *)(puVar6 + 9) = 0;
  puVar6[4] = 0;
  puVar6[5] = 0;
  *(undefined8 *)((longlong)puVar6 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar6 + 0x54) = 0;
  puVar6[0xc] = 0;
  *(undefined4 *)(puVar6 + 0xd) = 0;
  *(undefined4 *)(puVar6 + 0xe) = 0xffffffff;
  puVar4 = *(undefined8 **)(lVar11 + 0x10);
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14ab190c0;
  plVar7[2] = (longlong)puVar6;
  if (puVar6 == (undefined8 *)0x0) {
LAB_1443e53c8:
    *puVar4 = puVar6;
    plVar13 = (longlong *)puVar4[1];
    if (plVar7 == plVar13) {
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar7 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar10 = *piVar2;
          UNLOCK();
          plVar13 = plVar7;
          goto joined_r0x0001443e548d;
        }
      }
    }
    else {
      puVar4[1] = plVar7;
      if (plVar13 != (longlong *)0x0) goto LAB_1443e54ac;
    }
  }
  else {
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      puVar6[1] = puVar6;
      if ((longlong *)puVar6[2] != plVar7) {
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
        UNLOCK();
        plVar13 = (longlong *)puVar6[2];
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar13 + 0x10))();
          }
        }
        puVar6[2] = plVar7;
      }
      LOCK();
      plVar13 = plVar7 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
      goto LAB_1443e53c8;
    }
    puVar6[1] = puVar6;
    *puVar4 = puVar6;
    plVar13 = (longlong *)puVar4[1];
    if (plVar13 != (longlong *)0x0) {
      puVar4[1] = 0;
LAB_1443e54ac:
      LOCK();
      plVar7 = plVar13 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar2 = (int *)((longlong)plVar13 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar10 = *piVar2;
        UNLOCK();
joined_r0x0001443e548d:
        if (iVar10 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
  }
  *(undefined4 *)(puVar6 + 0xe) = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x54);
LAB_1443e54d5:
  return iVar3 != param_2;
}



// FUNCTION 1443e54ea FUN_1443e54ea body=231 status=ok
// SIG undefined FUN_1443e54ea(void)

void FUN_1443e54ea(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  longlong local_60;
  uint *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar4 = *(longlong **)(param_1 + 8);
  if (0 < (int)plVar4[1]) {
    lVar6 = 0;
    lVar5 = 0;
    do {
      lVar3 = *plVar4;
      if (*(int *)(lVar3 + lVar6) != -1) {
        local_58 = (uint *)(lVar3 + lVar6) + 1;
        local_60 = lVar3 + lVar6;
        FUN_140263e2a(param_2,local_4c,&local_60,0);
        uVar1 = *(uint *)(lVar3 + lVar6);
        iVar2 = *(int *)(param_3 + 0x48);
        *(uint *)(param_3 + 0x48) = iVar2 + 1U;
        if (*(uint *)(param_3 + 0x4c) < iVar2 + 1U) {
          FUN_14593fc44(param_3,iVar2);
        }
        lVar3 = *(longlong *)(param_3 + 0x40);
        if (*(longlong *)(param_3 + 0x40) == 0) {
          lVar3 = param_3;
        }
        *(ulonglong *)(lVar3 + (longlong)iVar2 * 8) = ((ulonglong)uVar1 << 0x20) + lVar5;
        plVar4 = *(longlong **)(param_1 + 8);
      }
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x18;
    } while (lVar5 < (int)plVar4[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443e55d2 FUN_1443e55d2 body=1068 status=ok
// SIG undefined FUN_1443e55d2(void)

void FUN_1443e55d2(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  longlong param_5)

{
  uint *puVar1;
  ulonglong uVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  uint *local_60;
  uint *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar3 = *(longlong **)(param_1 + 8);
  iVar4 = (int)plVar3[1];
  iVar12 = 0;
  iVar10 = 0;
  if ((longlong)iVar4 != 0) {
    lVar14 = 0;
    iVar10 = 0;
    do {
      iVar10 = iVar10 + (uint)(byte)(*(int *)(*plVar3 + lVar14) != -1 |
                                    *(byte *)(*(longlong *)(param_1 + 0x18) + 0x4d) ^ 1);
      lVar14 = lVar14 + 0x18;
    } while ((longlong)iVar4 * 0x18 != lVar14);
  }
  if (param_3 != (longlong *)0x0) {
    iVar12 = (int)param_3[1] - *(int *)((longlong)param_3 + 0x34);
  }
  iVar12 = iVar12 - iVar10;
  local_80 = param_2;
  if (0 < iVar4) {
    local_78 = param_3 + 7;
    lVar14 = 0;
    do {
      iVar4 = *(int *)(*plVar3 + lVar14 * 0x18);
      if ((*(char *)(*(longlong *)(param_1 + 0x18) + 0x4d) != '\x01') || (iVar4 != -1)) {
        puVar1 = (uint *)(*plVar3 + lVar14 * 0x18);
        if (iVar4 == -1) {
          FUN_140705884(*(undefined8 *)(param_1 + 0x10),puVar1);
        }
        local_60 = puVar1;
        local_58 = puVar1 + 1;
        FUN_140263e2a(local_80,local_4c,&local_60,0);
        uVar13 = *puVar1;
        if ((param_3 != (longlong *)0x0) && ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)))
        {
          plVar3 = (longlong *)param_3[8];
          if ((longlong *)param_3[8] == (longlong *)0x0) {
            plVar3 = local_78;
          }
          iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_3[9] - 1U & uVar13) * 4);
          if (iVar4 != -1) {
            do {
              lVar11 = *param_3 + (longlong)iVar4 * 0x10;
              if (*(uint *)(*param_3 + (longlong)iVar4 * 0x10) == uVar13) {
                if ((uint *)(lVar11 + 4) != (uint *)0x0 && lVar11 != 0) {
                  if (*(uint *)(lVar11 + 4) != puVar1[1]) {
                    iVar4 = *(int *)(param_4 + 0x48);
                    *(uint *)(param_4 + 0x48) = iVar4 + 1U;
                    if (*(uint *)(param_4 + 0x4c) < iVar4 + 1U) {
                      FUN_14593fc44(param_4,iVar4);
                    }
                    lVar11 = *(longlong *)(param_4 + 0x40);
                    if (*(longlong *)(param_4 + 0x40) == 0) {
                      lVar11 = param_4;
                    }
                    *(ulonglong *)(lVar11 + (longlong)iVar4 * 8) =
                         ((ulonglong)uVar13 << 0x20) + lVar14;
                  }
                  goto LAB_1443e574a;
                }
                break;
              }
              iVar4 = *(int *)(lVar11 + 8);
            } while (iVar4 != -1);
          }
        }
        iVar4 = *(int *)(param_4 + 0x48);
        *(uint *)(param_4 + 0x48) = iVar4 + 1U;
        if (*(uint *)(param_4 + 0x4c) < iVar4 + 1U) {
          FUN_14593fc44(param_4,iVar4);
        }
        lVar11 = *(longlong *)(param_4 + 0x40);
        if (*(longlong *)(param_4 + 0x40) == 0) {
          lVar11 = param_4;
        }
        *(ulonglong *)(lVar11 + (longlong)iVar4 * 8) = ((ulonglong)uVar13 << 0x20) + lVar14;
        iVar12 = iVar12 + 1;
      }
LAB_1443e574a:
      lVar14 = lVar14 + 1;
      plVar3 = *(longlong **)(param_1 + 8);
    } while (lVar14 < (int)plVar3[1]);
  }
  if ((param_3 != (longlong *)0x0) && (0 < iVar12)) {
    puVar1 = (uint *)(param_3 + 2);
    iVar4 = (int)param_3[5];
    if (iVar4 == 0) {
      uVar16 = 1;
      uVar15 = 0;
      iVar10 = 0;
      iVar5 = 0;
    }
    else {
      puVar9 = (uint *)param_3[4];
      if ((uint *)param_3[4] == (uint *)0x0) {
        puVar9 = puVar1;
      }
      uVar13 = *puVar9;
      if (uVar13 == 0) {
        iVar10 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar10 = iVar4 + -1;
        }
        uVar15 = 0;
        uVar16 = (ulonglong)(uint)(iVar10 >> 5);
        if (iVar10 >> 5 < 1) {
          uVar16 = uVar15;
        }
        iVar10 = 0;
        do {
          if (uVar16 == uVar15) goto LAB_1443e59cd;
          iVar10 = iVar10 + 0x20;
          uVar13 = puVar9[uVar15 + 1];
          uVar15 = uVar15 + 1;
        } while (uVar13 == 0);
      }
      else {
        uVar15 = 0;
        iVar10 = 0;
      }
      uVar16 = (ulonglong)(-uVar13 & uVar13);
      uVar2 = uVar16 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar5 = (iVar10 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      if (iVar4 <= iVar5) {
        iVar5 = iVar4;
      }
    }
    if (iVar5 < iVar4) {
      local_68 = local_80 + 7;
      uVar13 = 0xffffffff;
      local_70 = param_3;
      do {
        lVar14 = *param_3;
        if ((int)local_80[1] != *(int *)((longlong)local_80 + 0x34)) {
          uVar6 = *(uint *)(lVar14 + (longlong)iVar5 * 0x10);
          plVar3 = (longlong *)local_80[8];
          if ((longlong *)local_80[8] == (longlong *)0x0) {
            plVar3 = local_68;
          }
          iVar7 = *(int *)((longlong)plVar3 + (ulonglong)((int)local_80[9] - 1U & uVar6) * 4);
          if (iVar7 != -1) {
            do {
              if (*(uint *)(*local_80 + (longlong)iVar7 * 0x10) == uVar6) goto LAB_1443e5938;
              iVar7 = *(int *)((longlong)iVar7 * 0x10 + *local_80 + 8);
            } while (iVar7 != -1);
          }
        }
        iVar4 = *(int *)(param_5 + 0x28);
        *(uint *)(param_5 + 0x28) = iVar4 + 1U;
        if (*(uint *)(param_5 + 0x2c) < iVar4 + 1U) {
          local_78 = (longlong *)CONCAT44(local_78._4_4_,iVar10);
          FUN_1400cc390(param_5,iVar4);
          param_3 = local_70;
          iVar10 = (int)local_78;
        }
        lVar11 = *(longlong *)(param_5 + 0x20);
        if (*(longlong *)(param_5 + 0x20) == 0) {
          lVar11 = param_5;
        }
        *(undefined4 *)(lVar11 + (longlong)iVar4 * 4) =
             *(undefined4 *)(lVar14 + (longlong)iVar5 * 0x10);
        if (iVar12 < 2) break;
        iVar12 = iVar12 + -1;
        iVar4 = (int)param_3[5];
LAB_1443e5938:
        uVar13 = uVar13 & ~(uint)uVar16;
        puVar9 = (uint *)param_3[4];
        if ((uint *)param_3[4] == (uint *)0x0) {
          puVar9 = puVar1;
        }
        iVar5 = (int)uVar15;
        lVar14 = (longlong)iVar5;
        uVar6 = puVar9[lVar14] & uVar13;
        if (uVar6 == 0) {
          iVar7 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar7 = iVar4 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar8 = iVar7;
          if (iVar7 < iVar5) {
            iVar8 = iVar5;
          }
          if (iVar7 <= iVar5) break;
          lVar11 = 0;
          while( true ) {
            iVar10 = iVar10 + 0x20;
            uVar6 = puVar9[lVar14 + lVar11 + 1];
            if (uVar6 != 0) break;
            lVar11 = lVar11 + 1;
            if (iVar8 - lVar14 == lVar11) goto LAB_1443e59cd;
          }
          uVar15 = (ulonglong)(iVar5 + (int)lVar11 + 1);
          uVar13 = 0xffffffff;
        }
        uVar16 = (ulonglong)(-uVar6 & uVar6);
        uVar2 = uVar16 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar5 = (iVar10 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      } while (iVar5 < iVar4);
    }
  }
LAB_1443e59cd:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443e5a00 FUN_1443e5a00 body=496 status=ok
// SIG undefined FUN_1443e5a00(void)

void FUN_1443e5a00(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)**(longlong **)(param_1 + 0x18);
  puVar3 = *(undefined4 **)plVar1[1];
  if ((undefined4 *)((undefined8 *)plVar1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar1 + 0x170))(plVar1,param_2,4);
    }
    else {
      FUN_14572512c(plVar1,param_2);
    }
  }
  else {
    *param_2 = *puVar3;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 4;
  }
  puVar3 = *(undefined4 **)plVar1[1];
  if ((undefined4 *)((undefined8 *)plVar1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar1 + 0x170))(plVar1,param_2 + 1,4);
    }
    else {
      FUN_14572512c(plVar1);
    }
  }
  else {
    param_2[1] = *puVar3;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 4;
  }
  local_34 = param_2[0xe];
  puVar2 = (ulonglong *)plVar1[1];
  puVar3 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar3) {
    if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar1 + 0x170))(plVar1,&local_34,4);
    }
    else {
      FUN_14572512c(plVar1,&local_34);
    }
  }
  else {
    local_34 = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar3;
  }
  puVar3 = *(undefined4 **)plVar1[1];
  if ((undefined4 *)((undefined8 *)plVar1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar1 + 0x170))(plVar1,param_2 + 2,4);
    }
    else {
      FUN_14572512c(plVar1);
    }
  }
  else {
    param_2[2] = *puVar3;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 4;
  }
  if (0 < (int)param_2[0xe]) {
    lVar4 = 0;
    do {
      puVar3 = *(undefined4 **)(param_2 + 0xc);
      if (*(undefined4 **)(param_2 + 0xc) == (undefined4 *)0x0) {
        puVar3 = param_2 + 4;
      }
      local_38 = puVar3[lVar4];
      puVar2 = (ulonglong *)plVar1[1];
      if (puVar2[1] < *puVar2 + 4) {
        if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar1 + 0x170))(plVar1,&local_38,4);
        }
        else {
          FUN_14572512c(plVar1,&local_38);
        }
      }
      else {
        *puVar2 = *puVar2 + 4;
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar4 < (int)param_2[0xe]);
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443e5bf2 FUN_1443e5bf2 body=723 status=ok
// SIG undefined FUN_1443e5bf2(void)

undefined8 FUN_1443e5bf2(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  int *piVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  int iVar11;
  longlong *plVar12;
  int iVar13;
  undefined1 auStack_78 [40];
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 8);
  puVar10 = *(undefined4 **)plVar5[1];
  if ((undefined4 *)((undefined8 *)plVar5[1])[1] < puVar10 + 1) {
    if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar5 + 0x170))(plVar5,param_2,4);
    }
    else {
      FUN_14572512c(plVar5,param_2);
    }
  }
  else {
    *param_2 = *puVar10;
    *(longlong *)plVar5[1] = *(longlong *)plVar5[1] + 4;
  }
  puVar10 = *(undefined4 **)plVar5[1];
  if ((undefined4 *)((undefined8 *)plVar5[1])[1] < puVar10 + 1) {
    if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar5 + 0x170))(plVar5,param_2 + 1,4);
    }
    else {
      FUN_14572512c(plVar5);
    }
  }
  else {
    param_2[1] = *puVar10;
    *(longlong *)plVar5[1] = *(longlong *)plVar5[1] + 4;
  }
  local_4c = 0;
  puVar6 = (ulonglong *)plVar5[1];
  piVar1 = (int *)*puVar6 + 1;
  if ((int *)puVar6[1] < piVar1) {
    if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar5 + 0x170))(plVar5,&local_4c,4);
    }
    else {
      FUN_14572512c(plVar5,&local_4c);
    }
  }
  else {
    local_4c = *(int *)*puVar6;
    *puVar6 = (ulonglong)piVar1;
  }
  if (local_4c <= DAT_14c75f430) {
    piVar1 = param_2 + 2;
    piVar7 = *(int **)plVar5[1];
    if ((int *)((undefined8 *)plVar5[1])[1] < piVar7 + 1) {
      if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar5 + 0x170))(plVar5,piVar1,4);
      }
      else {
        FUN_14572512c(plVar5,piVar1);
      }
    }
    else {
      *piVar1 = *piVar7;
      *(longlong *)plVar5[1] = *(longlong *)plVar5[1] + 4;
    }
    if (*piVar1 <= DAT_14c75f42c) {
      uVar9 = CONCAT71((uint7)(uint3)((uint)*piVar1 >> 8),1);
      if (0 < local_4c) {
        iVar13 = 0;
        do {
          local_50 = 0;
          puVar6 = (ulonglong *)plVar5[1];
          puVar2 = (uint *)*puVar6 + 1;
          if ((uint *)puVar6[1] < puVar2) {
            if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
              (**(code **)(*plVar5 + 0x170))(plVar5,&local_50,4);
            }
            else {
              FUN_14572512c(plVar5,&local_50);
            }
          }
          else {
            local_50 = *(uint *)*puVar6;
            *puVar6 = (ulonglong)puVar2;
          }
          plVar8 = *(longlong **)(param_1 + 0x10);
          puVar10 = (undefined4 *)(ulonglong)*(uint *)(plVar8 + 1);
          if (*(uint *)(plVar8 + 1) != *(uint *)((longlong)plVar8 + 0x34)) {
            puVar10 = (undefined4 *)(ulonglong)local_50;
            plVar12 = plVar8 + 7;
            if ((longlong *)plVar8[8] != (longlong *)0x0) {
              plVar12 = (longlong *)plVar8[8];
            }
            iVar11 = *(int *)((longlong)plVar12 + (ulonglong)((int)plVar8[9] - 1U & local_50) * 4);
            if (iVar11 != -1) {
              do {
                lVar3 = *plVar8 + (longlong)iVar11 * 0x10;
                if (*(uint *)(*plVar8 + (longlong)iVar11 * 0x10) == local_50) {
                  puVar10 = (undefined4 *)(ulonglong)CONCAT31((int3)(local_50 >> 8),lVar3 == 0);
                  if ((undefined4 *)(lVar3 + 4) != (undefined4 *)0x0 && lVar3 != 0) {
                    uVar4 = *(undefined4 *)(lVar3 + 4);
                    iVar11 = param_2[0xe];
                    param_2[0xe] = iVar11 + 1U;
                    if ((uint)param_2[0xf] < iVar11 + 1U) {
                      FUN_1400cc390(param_2 + 4,iVar11);
                    }
                    puVar10 = *(undefined4 **)(param_2 + 0xc);
                    if (*(undefined4 **)(param_2 + 0xc) == (undefined4 *)0x0) {
                      puVar10 = param_2 + 4;
                    }
                    puVar10[iVar11] = uVar4;
                  }
                  break;
                }
                iVar11 = *(int *)(lVar3 + 8);
              } while (iVar11 != -1);
            }
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < local_4c);
        uVar9 = CONCAT71((int7)((ulonglong)puVar10 >> 8),1);
      }
      goto LAB_1443e5e53;
    }
  }
  FUN_14572541c(plVar5);
  uVar9 = 0;
LAB_1443e5e53:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 1443e5f0a FUN_1443e5f0a body=636 status=ok
// SIG undefined FUN_1443e5f0a(void)

void FUN_1443e5f0a(void)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1446f470e(&DAT_14cbf5d30,L"UNSET",1);
  FUN_1446f470e(&DAT_14cbf5d50,L"ClientAckJoiningServer",1);
  FUN_1446f470e(&DAT_14cbf5d60,L"ClientJoinGame",1);
  FUN_1446f470e(&DAT_14cbf5d70,L"ClientLoginComplete",1);
  FUN_1446f470e(&DAT_14cbf5d80,L"ClientPlayerJoined",1);
  FUN_1446f470e(&DAT_14cbf5d90,L"ClientPlayerLeft",1);
  FUN_1446f470e(&DAT_14cbf5da0,L"ClientSetInviteFlags",1);
  FUN_1446f470e(&DAT_14cbf5db0,L"ClientWasKicked",1);
  FUN_1446f470e(&DAT_14cbf5dc0,L"ServerCheat",1);
  FUN_1446f470e(&DAT_14cbf5dd0,L"ServerDisconnectFromLobby",1);
  FUN_1446f470e(&DAT_14cbf5de0,L"ServerKickPlayer",1);
  FUN_1446f470e(&DAT_14cbf5df0,L"ServerLoginPlayer",1);
  FUN_1446f470e(&DAT_14cbf5e00,L"ServerNotifyJoiningServer",1);
  FUN_1446f470e(&DAT_14cbf5e10,L"ServerSetPartyOwner",1);
  ppuStack_60 = &PTR_FUN_14ba637b0;
  local_68 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/Lobby",&PTR_FUN_14ba637d0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Lobby",&PTR_FUN_14ba63fd0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Lobby",&PTR_FUN_14ba64aa0,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/Lobby",&PTR_FUN_14ba65780,1,&PTR_FUN_14ba65730);
  local_48 = 0x800000014ba39d94;
  local_34 = 5;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_1466725ea(&local_48);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443e6188 FUN_1443e6188 body=68 status=ok
// SIG undefined FUN_1443e6188(void)

void FUN_1443e6188(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(char *)((longlong)param_1 + 0x71) == '\x01') {
    lVar1 = FUN_140a68038(1);
    lVar2 = 8;
    if (lVar1 != 0) goto LAB_1443e61b2;
  }
  lVar2 = 0x10;
  if (*(char *)((longlong)param_1 + 0x72) != '\x01') {
    return;
  }
LAB_1443e61b2:
  *(undefined1 *)(param_1 + 0xe) = 1;
                    /* WARNING: Could not recover jumptable at 0x0001443e61c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + lVar2))(param_1);
  return;
}



// FUNCTION 1443e61cc FUN_1443e61cc body=544 status=ok
// SIG undefined FUN_1443e61cc(void)

void FUN_1443e61cc(longlong *param_1)

{
  int *piVar1;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 unaff_RBX;
  undefined7 uVar8;
  ulonglong uVar7;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined8 *local_68;
  int local_60;
  longlong *local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = (longlong *)FUN_140a68038(1);
  (**(code **)(*plVar5 + 0x80))(plVar5,&local_38);
  uVar8 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if (local_38 == (longlong *)0x0) {
    uVar7 = CONCAT71(uVar8,3);
  }
  else {
    local_58 = local_38;
    local_50 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
    }
    FUN_1489b8b81(&local_48,&local_58);
    uVar7 = CONCAT71(uVar8,2);
    if ((local_48 == 0) || (iVar4 = (**(code **)(*local_38 + 0x130))(), iVar4 != 2)) {
      bVar2 = false;
    }
    else {
      local_68 = (undefined8 *)0x0;
      local_60 = 0;
      FUN_1446efa72(&local_68,0,3,0x10);
      local_60 = 3;
      *local_68 = &PTR_LAB_14ba65e60;
      *(undefined1 *)(local_68 + 1) = 1;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      local_68[2] = lVar6;
      *local_68 = &PTR_FUN_14ba65df0;
      local_68[3] = param_1;
      local_68[4] = &LAB_1443e63ee;
      local_78 = 0;
      (**(code **)(*local_38 + 0x170))(local_38,local_48,1,&local_68);
      if (local_60 == 0) {
LAB_1443e6336:
        if (local_68 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_68 != (undefined8 *)0x0) {
        (**(code **)*local_68)(local_68,0);
        FUN_1446efa72(&local_68,0,0,0x10);
        local_60 = 0;
        goto LAB_1443e6336;
      }
      uVar7 = CONCAT71((int7)((ulonglong)&local_68 >> 8),3);
      bVar2 = true;
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_40 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    if (bVar2) goto LAB_1443e6388;
  }
  (**(code **)(*param_1 + 0x28))(param_1,uVar7 & 0xffffffff);
LAB_1443e6388:
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_30 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443e6438 FUN_1443e6438 body=609 status=ok
// SIG undefined FUN_1443e6438(void)

void FUN_1443e6438(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 *local_58;
  int local_50;
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar4 = FUN_149012e22();
  if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_88);
  }
  local_48 = 0;
  plVar5 = (longlong *)FUN_1401e3228();
  if (plVar5 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar5 + 0x80))(plVar5,&local_38);
    plVar5 = local_38;
    if (local_38 != (longlong *)0x0) {
      FUN_140056680(&local_58,L"InvalidUser");
      (**(code **)(*plVar5 + 0x120))(plVar5,&local_48,&local_58);
      if (local_58 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      plVar5 = local_38;
      if (local_48 != 0) {
        local_58 = (undefined8 *)0x0;
        local_50 = 0;
        FUN_1446efa72(&local_58,0,3,0x10);
        local_50 = 3;
        *local_58 = &PTR_LAB_14ba65e60;
        *(undefined1 *)(local_58 + 1) = 0;
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 1;
        lVar3 = DAT_14c758608 + 1;
        if (lVar6 == 0) {
          LOCK();
          UNLOCK();
          lVar6 = DAT_14c758608 + 2;
          lVar3 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar3;
        local_58[2] = lVar6;
        *local_58 = &PTR_FUN_14ba65df0;
        local_58[3] = param_1;
        local_58[4] = &LAB_1443e63ee;
        local_68 = 0;
        (**(code **)(*plVar5 + 0x170))(plVar5,local_48,1,&local_58);
        if (local_50 == 0) {
LAB_1443e65d5:
          if (local_58 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_58 != (undefined8 *)0x0) {
          (**(code **)*local_58)(local_58,0);
          FUN_1446efa72(&local_58,0,0,0x10);
          local_50 = 0;
          goto LAB_1443e65d5;
        }
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_40 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
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
        goto LAB_1443e661f;
      }
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_40 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
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
    }
  }
  (**(code **)(*param_1 + 0x28))(param_1,3);
LAB_1443e661f:
  plVar5 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_30 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443e66ac FUN_1443e66ac body=127 status=ok
// SIG undefined FUN_1443e66ac(void)

void FUN_1443e66ac(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446f470e(&DAT_14cbf5f58,L"UNSET",1);
  local_28 = 0x800000014ba65c80;
  local_14 = 10;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_1466727ac(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443e672c FUN_1443e672c body=57 status=ok
// SIG undefined FUN_1443e672c(void)

void FUN_1443e672c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf5fa0 == 0) {
    uVar1 = FUN_145c5bed3();
    DAT_14cbf5fa0 = FUN_14171c317(FUN_146672ae8,uVar1,L"EHotfixResult");
  }
  return;
}



// FUNCTION 1443e6765 FUN_1443e6765 body=69 status=ok
// SIG undefined FUN_1443e6765(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1443e6765(void)

{
  _DAT_14cbf5fd8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001443e67a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf5fe0,1);
  return;
}



// FUNCTION 1443e67aa FUN_1443e67aa body=69 status=ok
// SIG undefined FUN_1443e67aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1443e67aa(void)

{
  _DAT_14cbf5ff0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001443e67ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf5ff8,1);
  return;
}



// FUNCTION 1443e67ef FUN_1443e67ef body=541 status=ok
// SIG undefined FUN_1443e67ef(void)

void FUN_1443e67ef(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  ushort uVar9;
  int iVar10;
  ulonglong uVar11;
  ushort uVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  iVar3 = FUN_1403de9f2(0,&local_58,&DAT_149e01f60);
  if ((int)uStack_50 < 1 || iVar3 < 1) {
LAB_1443e69cc:
    FUN_1447a1747(local_58);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  iVar3 = 0;
  lVar14 = 0;
  local_60 = param_2;
LAB_1443e686e:
  puVar1 = (undefined8 *)(local_58 + lVar14 * 0x10);
  iVar2 = *(int *)(local_58 + 8 + lVar14 * 0x10);
  puVar4 = &DAT_149dfb77a;
  if (iVar2 != 0) {
    puVar4 = (undefined2 *)*puVar1;
  }
  lVar6 = 4;
  lVar8 = 0;
  while( true ) {
    uVar9 = *(ushort *)((longlong)puVar4 + lVar8);
    uVar12 = *(ushort *)((longlong)&DAT_14ba6886a + lVar8);
    if (uVar9 != uVar12) break;
    if (uVar9 == 0) goto LAB_1443e698e;
LAB_1443e68af:
    lVar6 = lVar6 + -1;
    if (lVar6 == 0) goto LAB_1443e698e;
    lVar8 = lVar8 + 2;
  }
  if ((uVar12 | uVar9) < 0x80) {
    if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[(uint)uVar12]) goto LAB_1443e68af;
    iVar10 = (uint)(byte)(&DAT_149e05da0)[uVar9] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar12];
  }
  else {
    iVar10 = (uint)uVar9 - (uint)uVar12;
  }
  if (iVar10 != 0) {
    puVar4 = &DAT_149dfb77a;
    if (iVar2 != 0) {
      puVar4 = (undefined2 *)*puVar1;
    }
    lVar6 = 7;
    lVar8 = 0;
    goto LAB_1443e68ff;
  }
LAB_1443e698e:
  iVar10 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar10 = iVar3;
  }
  uVar7 = *puVar1;
  uVar5 = param_3;
  goto LAB_1443e699c;
LAB_1443e68ff:
  uVar9 = *(ushort *)((longlong)puVar4 + lVar8);
  uVar11 = (ulonglong)uVar9;
  uVar12 = *(ushort *)((longlong)L"Branch-" + lVar8);
  uVar5 = param_4;
  if (uVar9 != uVar12) {
    if ((uVar12 | uVar9) < 0x80) {
      uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
      uVar13 = (ulonglong)uVar12;
      uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
      if ((&DAT_149e05da0)[uVar11] == (&DAT_149e05da0)[uVar13]) goto LAB_1443e691f;
    }
    iVar10 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar10 = iVar3;
    }
    uVar7 = *puVar1;
    if (uVar9 == uVar12) goto LAB_1443e699c;
    FUN_1400020e8(local_60,uVar7,iVar10);
    if (lVar14 < (longlong)(int)uStack_50 + -1) {
      FUN_1400020e8(local_60,&DAT_149e01f60,1);
    }
    goto LAB_1443e69a1;
  }
  if (uVar9 == 0) goto LAB_1443e69b4;
LAB_1443e691f:
  lVar6 = lVar6 + -1;
  if (lVar6 == 0) goto LAB_1443e69b4;
  lVar8 = lVar8 + 2;
  goto LAB_1443e68ff;
LAB_1443e69b4:
  iVar10 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar10 = iVar3;
  }
  uVar7 = *puVar1;
LAB_1443e699c:
  FUN_1402980a2(uVar5,uVar7,iVar10);
LAB_1443e69a1:
  lVar14 = lVar14 + 1;
  if ((int)uStack_50 <= lVar14) goto LAB_1443e69cc;
  goto LAB_1443e686e;
}



// FUNCTION 1443e6a0e FUN_1443e6a0e body=1030 status=ok
// SIG undefined FUN_1443e6a0e(void)

void FUN_1443e6a0e(longlong *param_1,char param_2)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  bool bVar10;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
  }
  plVar1 = param_1 + 0x2a;
  FUN_148fbe1fe(param_1 + 0x2c,plVar1);
  FUN_145e041f4(param_1[0x2a],(int)param_1[0x2b]);
  *(undefined4 *)(param_1 + 0x2b) = 0;
  if (*(int *)((longlong)param_1 + 0x15c) != 0) {
    FUN_148fc3b7a(plVar1,0);
  }
  (**(code **)(*(longlong *)param_1[5] + 0x50))((longlong *)param_1[5],plVar1);
  FUN_149014b10(param_1);
  FUN_1443e75ca(param_1);
  FUN_149016c18(&local_88,param_1 + 0x36,param_1 + 0x38,param_1 + 0x3a);
  FUN_149018139(param_1[0x2e],(int)param_1[0x2f],&local_88);
  FUN_149016d08(&local_88);
  iVar6 = (int)param_1[0x2f];
  if ((longlong)iVar6 < 1) {
    if ((int)param_1[0x31] < 1) {
      (**(code **)(*param_1 + 0x2b8))(param_1,2);
      (**(code **)(*param_1 + 0x348))(param_1);
    }
    else {
      puVar9 = (undefined8 *)FUN_14001cc68(0x50,0x10);
      FUN_140056680(&local_88,L"RevertHotfix");
      *puVar9 = local_88;
      local_88 = (undefined8 *)0x0;
      *(int *)(puVar9 + 1) = (int)local_80;
      *(undefined4 *)((longlong)puVar9 + 0xc) = local_80._4_4_;
      iVar6 = DAT_14c948a84 + 1;
      *(int *)(puVar9 + 2) = DAT_14c948a84;
      DAT_14c948a84 = iVar6;
      puVar9[3] = 0;
      *(undefined4 *)(puVar9 + 4) = 0;
      puVar9[5] = 0;
      puVar9[6] = 0;
      puVar9[7] = 0;
      puVar9[8] = 0;
      puVar9[9] = 0;
      lVar4 = param_1[0x42];
      param_1[0x42] = (longlong)puVar9;
      if (lVar4 != 0) {
        FUN_1468861be(lVar4);
        FUN_1400020a8(lVar4);
        puVar9 = (undefined8 *)param_1[0x42];
      }
      local_88 = (undefined8 *)0x0;
      local_80 = (undefined8 *)((ulonglong)local_80 & 0xffffffff00000000);
      FUN_1446efa72(&local_88,0,3,0x10);
      puVar3 = local_88;
      local_80 = (undefined8 *)CONCAT44(local_80._4_4_,3);
      *local_88 = &PTR_LAB_149e020b0;
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
      local_88[2] = lVar5;
      *local_88 = &PTR_FUN_14ba69390;
      local_88[3] = 0;
      iVar6 = 0;
      if (param_1 != (longlong *)0x0) {
        uVar2 = *(uint *)((longlong)param_1 + 0xc);
        *(uint *)(local_88 + 3) = uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar4 = 0;
        }
        iVar6 = *(int *)(lVar4 + 0x10);
        if (*(int *)(lVar4 + 0x10) == 0) {
          LOCK();
          iVar6 = DAT_14c964868 + 1;
          UNLOCK();
          iVar7 = DAT_14c964868 + 1;
          bVar10 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar6;
          if (bVar10) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar7);
          }
          LOCK();
          iVar6 = *(int *)(lVar4 + 0x10);
          bVar10 = iVar6 == 0;
          if (bVar10) {
            *(int *)(lVar4 + 0x10) = iVar7;
            iVar6 = 0;
          }
          UNLOCK();
          if (bVar10) {
            iVar6 = iVar7;
          }
        }
      }
      *(int *)((longlong)puVar3 + 0x1c) = iVar6;
      puVar3[4] = param_1;
      FUN_1427d5d92(puVar9,&local_88);
      if ((int)local_80 != 0) {
        if (local_88 == (undefined8 *)0x0) goto LAB_1443e6d89;
        (**(code **)*local_88)(local_88,0);
        FUN_1446efa72(&local_88,0,0,0x10);
        local_80 = (undefined8 *)((ulonglong)local_80 & 0xffffffff00000000);
      }
      if (local_88 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    *(int *)(param_1 + 0x3e) = iVar6;
    lVar4 = param_1[0x3f];
    lVar8 = (longlong)iVar6 * 0xa8;
    lVar5 = 0;
    do {
      lVar4 = lVar4 + *(int *)(param_1[0x2e] + 0x38 + lVar5);
      param_1[0x3f] = lVar4;
      lVar5 = lVar5 + 0xa8;
    } while (lVar8 - lVar5 != 0);
    puVar9 = (undefined8 *)(param_1[0x2e] + 0x18);
    do {
      local_58 = 0;
      local_88 = puVar9;
      local_80 = &local_58;
      FUN_1490190bc(param_1 + 0x20,local_4c,&local_88);
      puVar9 = puVar9 + 0x15;
      lVar8 = lVar8 + -0xa8;
    } while (lVar8 != 0);
    if ((longlong)(int)param_1[0x2f] != 0) {
      lVar4 = (longlong)(int)param_1[0x2f] * 0xa8;
      lVar5 = param_1[0x2e] + 0x18;
      do {
        (**(code **)(*(longlong *)param_1[5] + 0x58))((longlong *)param_1[5],lVar5);
        lVar5 = lVar5 + 0xa8;
        lVar4 = lVar4 + -0xa8;
      } while (lVar4 != 0);
    }
  }
LAB_1443e6d89:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443e6e30 FUN_1443e6e30 body=852 status=ok
// SIG undefined FUN_1443e6e30(void)

void FUN_1443e6e30(longlong *param_1,char param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  bool bVar11;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar2 = *(int *)(param_3 + 1);
  uVar7 = 0;
  iVar5 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar5 = 0;
  }
  if (0 < iVar5) {
    if (iVar2 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    else {
      puVar3 = (undefined2 *)*param_3;
    }
    lVar9 = 0;
    uVar7 = 0;
    do {
      uVar8 = ((uint)(0x19 < (ushort)puVar3[lVar9] - 0x61) * 0x20 + (uint)(ushort)puVar3[lVar9]) -
              0x20;
      uVar10 = (uint)(uVar7 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar7 ^ uVar8) & 0xff) * 4);
      uVar7 = (ulonglong)
              (uVar10 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar10 & 0xff ^ uVar8 >> 8 & 0xff) * 4));
      lVar9 = lVar9 + 1;
    } while (iVar5 != (int)lVar9);
  }
  iVar2 = FUN_1490193b4(param_1 + 0x20,uVar7,param_3);
  if (iVar2 != -1) {
    if (param_2 == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
    }
    iVar2 = *(int *)((longlong)param_1 + 500) + 1;
    *(int *)((longlong)param_1 + 500) = iVar2;
    local_58 = param_1[0x3f];
    (**(code **)(*param_1 + 0x2d8))(param_1,iVar2,(int)param_1[0x3e],param_1[0x40]);
    FUN_1490194f2(param_1 + 0x20,param_3);
    if ((int)param_1[0x21] == *(int *)((longlong)param_1 + 0x134)) {
      puVar4 = (undefined8 *)FUN_14001cc68(0x50,0x10);
      FUN_140056680(&local_48,L"ApplyHotfix");
      *puVar4 = local_48;
      local_48 = (undefined8 *)0x0;
      *(int *)(puVar4 + 1) = local_40;
      *(undefined4 *)((longlong)puVar4 + 0xc) = local_3c;
      iVar2 = DAT_14c948a84 + 1;
      *(int *)(puVar4 + 2) = DAT_14c948a84;
      DAT_14c948a84 = iVar2;
      puVar4[3] = 0;
      *(undefined4 *)(puVar4 + 4) = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      puVar4[8] = 0;
      puVar4[9] = 0;
      lVar9 = param_1[0x42];
      param_1[0x42] = (longlong)puVar4;
      if (lVar9 != 0) {
        FUN_1468861be(lVar9);
        FUN_1400020a8(lVar9);
        puVar4 = (undefined8 *)param_1[0x42];
      }
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      FUN_1446efa72(&local_48,0,3,0x10);
      puVar1 = local_48;
      local_40 = 3;
      *local_48 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar9 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar9 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar9;
      local_48[2] = lVar6;
      *local_48 = &PTR_FUN_14ba694e0;
      local_48[3] = 0;
      iVar2 = 0;
      if (param_1 != (longlong *)0x0) {
        uVar8 = *(uint *)((longlong)param_1 + 0xc);
        *(uint *)(local_48 + 3) = uVar8;
        if ((int)uVar8 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        iVar2 = *(int *)(lVar9 + 0x10);
        if (*(int *)(lVar9 + 0x10) == 0) {
          LOCK();
          iVar2 = DAT_14c964868 + 1;
          UNLOCK();
          iVar5 = DAT_14c964868 + 1;
          bVar11 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar2;
          if (bVar11) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar5);
          }
          LOCK();
          iVar2 = *(int *)(lVar9 + 0x10);
          bVar11 = iVar2 == 0;
          if (bVar11) {
            *(int *)(lVar9 + 0x10) = iVar5;
            iVar2 = 0;
          }
          UNLOCK();
          if (bVar11) {
            iVar2 = iVar5;
          }
        }
      }
      *(int *)((longlong)puVar1 + 0x1c) = iVar2;
      puVar1[4] = param_1;
      FUN_1427d5d92(puVar4,&local_48);
      if (local_40 != 0) {
        if (local_48 == (undefined8 *)0x0) goto LAB_1443e70ef;
        (**(code **)*local_48)(local_48,0);
        FUN_1446efa72(&local_48,0,0,0x10);
        local_40 = 0;
      }
      if (local_48 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_1443e70ef:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443e719c FUN_1443e719c body=741 status=ok
// SIG undefined FUN_1443e719c(void)

void FUN_1443e719c(longlong *param_1)

{
  int iVar1;
  void *_Src;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  longlong lVar5;
  undefined1 in_XMM0 [16];
  undefined1 auStack_188 [32];
  undefined8 local_168;
  longlong local_158;
  undefined8 local_150;
  undefined1 local_148 [16] [16];
  longlong local_48;
  undefined1 (*local_40) [16];
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_48 = 0;
  local_38 = 7;
  local_148[0] = pmovsxbw(in_XMM0,(char  [8])0x73776f646e6957);
  local_40 = local_148;
  FUN_1449b8608(&local_158,param_1 + 0x53,local_148);
  if (param_1 + 0x36 == &local_158) {
    if (local_158 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[0x36] != 0) {
      FUN_1400020a8();
    }
    param_1[0x36] = local_158;
    local_158 = 0;
    *(undefined4 *)(param_1 + 0x37) = (undefined4)local_150;
    *(undefined4 *)((longlong)param_1 + 0x1bc) = local_150._4_4_;
    local_150 = 0;
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_1400020e8(param_1 + 0x36,&DAT_149e01f60,1);
  (**(code **)(*param_1 + 0x3f0))(param_1,&local_158);
  FUN_1407ec8fc(local_148,param_1 + 0x53,&local_158);
  if ((undefined1 (*) [16])(param_1 + 0x38) == local_148) {
    if (local_148[0]._0_8_ != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[0x38] != 0) {
      FUN_1400020a8();
    }
    param_1[0x38] = local_148[0]._0_8_;
    *(undefined4 *)(param_1 + 0x39) = local_148[0]._8_4_;
    *(undefined4 *)((longlong)param_1 + 0x1cc) = local_148[0]._12_4_;
    local_148[0] = ZEXT816(0);
  }
  if (local_158 != 0) {
    FUN_1400020a8();
  }
  iVar1 = (int)param_1[0x54];
  lVar5 = (longlong)iVar1;
  _Src = (void *)param_1[0x53];
  auVar4._4_4_ = local_148[0]._12_4_;
  auVar4._0_4_ = iVar1;
  auVar4._8_8_ = 0;
  local_148[0] = auVar4 << 0x40;
  FUN_1446dd670(local_148,(uint)(lVar5 == 0) + iVar1 + 7,0);
  if (lVar5 != 0) {
    memcpy((void *)local_148[0]._0_8_,_Src,lVar5 * 2);
  }
  FUN_1400020e8(local_148,L"Default",7);
  if ((undefined1 (*) [16])(param_1 + 0x3a) == local_148) {
    if (local_148[0]._0_8_ != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[0x3a] != 0) {
      FUN_1400020a8();
    }
    auVar4 = local_148[0];
    param_1[0x3a] = local_148[0]._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_148[0]._8_8_;
    local_148[0] = auVar3 << 0x40;
    auVar3 = local_148[0];
    local_148[0]._8_4_ = auVar4._8_4_;
    *(undefined4 *)(param_1 + 0x3b) = local_148[0]._8_4_;
    local_148[0]._12_4_ = auVar4._12_4_;
    *(undefined4 *)((longlong)param_1 + 0x1dc) = local_148[0]._12_4_;
    local_148[0] = auVar3;
  }
  pcVar2 = *(code **)(*(longlong *)param_1[2] + 0x390);
  if (pcVar2 != (code *)&LAB_1427dd5fe) {
    local_168 = 0;
    (*pcVar2)((longlong *)param_1[2],param_1,1,0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951808) {
    FUN_144b3d300(&DAT_14c951808);
    if (DAT_14c951808 == -1) {
      FUN_145dfc00c(&DAT_14c951778);
      atexit((_func_5014 *)&LAB_142809c19);
      _Init_thread_footer(&DAT_14c951808);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443e7482 FUN_1443e7482 body=163 status=ok
// SIG undefined FUN_1443e7482(void)

void FUN_1443e7482(longlong *param_1)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = (**(code **)(*param_1 + 1000))();
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x2b8))(param_1,2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if ((char)param_1[0x41] == '\0') {
    (**(code **)(*param_1 + 0x340))(param_1);
    if ((longlong *)param_1[5] == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
    local_20 = 0xffffffff00000000;
    (**(code **)(*(longlong *)param_1[5] + 0x28))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443e754a FUN_1443e754a body=128 status=ok
// SIG undefined FUN_1443e754a(void)

void FUN_1443e754a(longlong *param_1,uint param_2)

{
  if ((param_2 & 0xfd) != 0) {
    (**(code **)(*param_1 + 0x3a0))(param_1);
  }
  (**(code **)(*param_1 + 0x2b8))(param_1,param_2);
  if ((char)param_2 == '\0') {
    FUN_145e041f4(param_1[0x2a],(int)param_1[0x2b]);
    *(undefined4 *)(param_1 + 0x2b) = 0;
    if (*(int *)((longlong)param_1 + 0x15c) != 0) {
      FUN_148fc3b7a(param_1 + 0x2a,0);
    }
    FUN_1443e8b04(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001443e7584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x348))(param_1);
  return;
}



// FUNCTION 1443e75ca FUN_1443e75ca body=1486 status=ok
// SIG undefined FUN_1443e75ca(void)

void FUN_1443e75ca(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined2 *puVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined1 auStack_e8 [40];
  longlong *local_c0;
  longlong local_b8;
  undefined1 local_ac [4];
  longlong local_a8 [2];
  longlong local_98;
  undefined8 uStack_90;
  uint local_88 [4];
  uint *local_78;
  int local_70;
  undefined8 local_6c;
  int local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar1 = param_1 + 0x30;
  FUN_145e041f4(param_1[0x30],(int)param_1[0x31]);
  *(undefined4 *)(param_1 + 0x31) = 0;
  if (*(int *)((longlong)param_1 + 0x18c) != 0) {
    FUN_148fc3b7a(plVar1,0);
  }
  local_c0 = param_1 + 0x2e;
  FUN_145e041f4(param_1[0x2e],(int)param_1[0x2f]);
  *(undefined4 *)(param_1 + 0x2f) = 0;
  if (*(int *)((longlong)param_1 + 0x17c) != 0) {
    FUN_148fc3b7a(local_c0,0);
  }
  local_78 = (uint *)0x0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  if ((longlong)(int)param_1[0x2b] != 0) {
    lVar20 = param_1[0x2a];
    lVar16 = (longlong)(int)param_1[0x2b] * 0xa8 + lVar20;
    do {
      if ((longlong)(int)param_1[0x2d] != 0) {
        lVar18 = param_1[0x2c];
        lVar15 = (longlong)(int)param_1[0x2d] * 0xa8;
        do {
          cVar6 = FUN_149018e28(lVar18,lVar20);
          if (cVar6 != '\0') goto LAB_1443e7791;
          lVar18 = lVar18 + 0xa8;
          lVar15 = lVar15 + -0xa8;
        } while (lVar15 != 0);
      }
      iVar5 = (int)param_1[0x2f];
      *(uint *)(param_1 + 0x2f) = iVar5 + 1U;
      if (*(uint *)((longlong)param_1 + 0x17c) < iVar5 + 1U) {
        FUN_148fc34fa(local_c0,iVar5);
      }
      FUN_148fc4a46((longlong)iVar5 * 0xa8 + *local_c0,lVar20);
      cVar6 = FUN_144a38768(lVar20 + 0x28,L".INI",4,1);
      if (cVar6 != '\0') {
        (**(code **)(*param_1 + 0x350))(param_1,local_a8,lVar20 + 0x28);
        FUN_140e830ae(&local_98,local_ac,local_a8,0);
        if (local_a8[0] != 0) {
          FUN_1400020a8();
        }
      }
LAB_1443e7791:
      lVar20 = lVar20 + 0xa8;
    } while (lVar20 != lVar16);
  }
  if ((longlong)(int)param_1[0x2d] != 0) {
    lVar20 = param_1[0x2c];
    lVar16 = (longlong)(int)param_1[0x2d] * 0xa8 + lVar20;
    do {
      if ((longlong)(int)param_1[0x2b] != 0) {
        lVar18 = param_1[0x2a];
        lVar15 = (longlong)(int)param_1[0x2b] * 0xa8 + lVar18;
        iVar5 = *(int *)(lVar20 + 0x30);
LAB_1443e77f3:
        if (iVar5 != *(int *)(lVar18 + 0x30)) {
          if (*(int *)(lVar18 + 0x30) + iVar5 == 1) goto LAB_1443e786a;
          goto LAB_1443e7858;
        }
        if (1 < iVar5) {
          lVar17 = 0;
          do {
            uVar3 = *(ushort *)(*(longlong *)(lVar20 + 0x28) + lVar17);
            uVar4 = *(ushort *)(*(longlong *)(lVar18 + 0x28) + lVar17);
            if (uVar3 == uVar4) {
              if (uVar3 == 0) break;
            }
            else {
              if (0x7f < (uVar4 | uVar3)) {
                iVar7 = (uint)uVar3 - (uint)uVar4;
                goto LAB_1443e7848;
              }
              if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[(uint)uVar4])
              goto code_r0x0001443e7845;
            }
            lVar17 = lVar17 + 2;
          } while( true );
        }
        goto LAB_1443e786a;
      }
LAB_1443e7884:
      iVar5 = (int)param_1[0x31];
      *(uint *)(param_1 + 0x31) = iVar5 + 1U;
      if (*(uint *)((longlong)param_1 + 0x18c) < iVar5 + 1U) {
        FUN_148fc34fa(plVar1,iVar5);
      }
      FUN_148fc4a46((longlong)iVar5 * 0xa8 + *plVar1,lVar20);
      cVar6 = FUN_144a38768(lVar20 + 0x28,L".INI",4,1);
      if (cVar6 != '\0') {
        (**(code **)(*param_1 + 0x350))(param_1,local_a8,lVar20 + 0x28);
        FUN_140e830ae(&local_98,local_ac,local_a8,0);
        if (local_a8[0] != 0) {
          FUN_1400020a8();
        }
      }
LAB_1443e786f:
      lVar20 = lVar20 + 0xa8;
    } while (lVar20 != lVar16);
  }
  if ((local_64 < (int)uStack_90) && ((longlong)(int)param_1[0x2b] != 0)) {
    lVar20 = param_1[0x2a];
    local_b8 = (longlong)(int)param_1[0x2b] * 0xa8 + lVar20;
    do {
      cVar6 = FUN_144a38768(lVar20 + 0x28,L".INI",4,1);
      iVar5 = local_70;
      if (cVar6 != '\0') {
        if (local_70 == 0) {
          uVar19 = 1;
          uVar21 = 0;
          iVar13 = 0;
          iVar7 = 0;
        }
        else {
          puVar8 = local_78;
          if (local_78 == (uint *)0x0) {
            puVar8 = local_88;
          }
          uVar14 = *puVar8;
          if (uVar14 == 0) {
            iVar7 = local_70 + 0x1e;
            if (-1 < local_70 + -1) {
              iVar7 = local_70 + -1;
            }
            uVar21 = 0;
            uVar19 = (ulonglong)(uint)(iVar7 >> 5);
            if (iVar7 >> 5 < 1) {
              uVar19 = uVar21;
            }
            iVar13 = 0;
            do {
              if (uVar19 == uVar21) goto LAB_1443e7a01;
              iVar13 = iVar13 + 0x20;
              uVar14 = puVar8[uVar21 + 1];
              uVar21 = uVar21 + 1;
            } while (uVar14 == 0);
          }
          else {
            uVar21 = 0;
            iVar13 = 0;
          }
          uVar19 = (ulonglong)(-uVar14 & uVar14);
          uVar2 = uVar19 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          iVar7 = (iVar13 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
          if (local_70 <= iVar7) {
            iVar7 = local_70;
          }
        }
        if (iVar7 != local_70) {
          uVar14 = 0xffffffff;
          do {
            iVar9 = *(int *)(local_98 + 8 + (longlong)iVar7 * 0x18);
            iVar10 = iVar9 + -1;
            if (iVar9 == 0) {
              iVar10 = 0;
            }
            puVar12 = &DAT_149dfb77a;
            if (iVar9 != 0) {
              puVar12 = *(undefined2 **)(local_98 + (longlong)iVar7 * 0x18);
            }
            cVar6 = FUN_144a38768(lVar20 + 0x28,puVar12,iVar10,1);
            if (cVar6 != '\0') {
              FUN_149019026(local_c0,lVar20);
            }
            uVar14 = uVar14 & ~(uint)uVar19;
            puVar8 = local_78;
            if (local_78 == (uint *)0x0) {
              puVar8 = local_88;
            }
            iVar7 = (int)uVar21;
            lVar16 = (longlong)iVar7;
            uVar11 = puVar8[lVar16] & uVar14;
            if (uVar11 == 0) {
              iVar9 = local_70 + 0x1e;
              if (-1 < local_70 + -1) {
                iVar9 = local_70 + -1;
              }
              iVar9 = iVar9 >> 5;
              iVar13 = iVar13 + 0x20;
              iVar10 = iVar9;
              if (iVar9 < iVar7) {
                iVar10 = iVar7;
              }
              if (iVar7 < iVar9) {
                lVar18 = 0;
                do {
                  uVar11 = puVar8[lVar16 + lVar18 + 1];
                  if (uVar11 != 0) {
                    uVar21 = (ulonglong)(iVar7 + (int)lVar18 + 1);
                    uVar14 = 0xffffffff;
                    goto LAB_1443e7ad9;
                  }
                  iVar13 = iVar13 + 0x20;
                  lVar18 = lVar18 + 1;
                } while (iVar10 - lVar16 != lVar18);
                uVar14 = 0xffffffff;
                iVar7 = iVar10;
              }
              uVar21 = (ulonglong)(iVar7 + 1);
              iVar7 = local_70;
            }
            else {
LAB_1443e7ad9:
              uVar19 = (ulonglong)(-uVar11 & uVar11);
              uVar2 = uVar19 * 2 + 1;
              lVar16 = 0x3f;
              if (uVar2 != 0) {
                for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                }
              }
              iVar7 = (iVar13 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
              if (local_70 <= iVar7) {
                iVar7 = local_70;
              }
            }
          } while (iVar7 != iVar5);
        }
      }
LAB_1443e7a01:
      lVar20 = lVar20 + 0xa8;
    } while (lVar20 != local_b8);
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_98);
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x0001443e7845:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar3] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar4];
LAB_1443e7848:
  if (iVar7 == 0) {
LAB_1443e786a:
    if (lVar18 != 0) goto LAB_1443e786f;
    goto LAB_1443e7884;
  }
LAB_1443e7858:
  lVar18 = lVar18 + 0xa8;
  if (lVar18 == lVar15) goto LAB_1443e7884;
  goto LAB_1443e77f3;
}



// FUNCTION 1443e7b9a FUN_1443e7b9a body=586 status=ok
// SIG undefined FUN_1443e7b9a(void)

void FUN_1443e7b9a(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined8 *local_38;
  longlong *plStack_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar3 = (**(code **)(*param_1 + 1000))();
  if (cVar3 == '\0') {
    if (*param_2 != 0 && (int)param_2[1] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
    }
  }
  else if ((char)param_1[0x41] == '\x01') {
    if (*param_2 != 0 && (int)param_2[1] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
    }
  }
  else {
    if (*(uint *)(param_1 + 0x50) < 2) {
      local_40 = 0;
    }
    else {
      FUN_1446f470e(&local_40,param_1[0x4f],0);
    }
    local_28 = local_40;
    plVar4 = (longlong *)FUN_1401e3228();
    if (plVar4 == (longlong *)0x0) {
      local_38 = (undefined8 *)0x0;
      plStack_30 = (longlong *)0x0;
    }
    else {
      (**(code **)(*plVar4 + 0x88))(plVar4,&local_38);
    }
    plVar4 = plStack_30;
    if ((undefined8 **)(param_1 + 5) != &local_38) {
      param_1[5] = (longlong)local_38;
      local_38 = (undefined8 *)0x0;
      plVar2 = (longlong *)param_1[6];
      if (plStack_30 != plVar2) {
        plStack_30 = (longlong *)0x0;
        param_1[6] = (longlong)plVar4;
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar2 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
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
    }
    plVar4 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_30 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    local_38 = (undefined8 *)0x0;
    plStack_30 = (longlong *)((ulonglong)plStack_30 & 0xffffffff00000000);
    FUN_149014ba8(&local_38,param_1,param_2);
    (**(code **)(*(longlong *)param_1[5] + 0x30))((longlong *)param_1[5],&local_28,&local_38);
    param_1[0xe] = local_28;
    *(undefined1 *)(param_1 + 0x41) = 1;
    if ((longlong *)param_1[5] == (longlong *)0x0) {
      FUN_1443e754a(param_1,0);
    }
    else {
      local_28 = -0x100000000;
      (**(code **)(*(longlong *)param_1[5] + 0x28))();
    }
    if ((int)plStack_30 != 0) {
      if (local_38 == (undefined8 *)0x0) goto LAB_1443e7c13;
      (**(code **)*local_38)(local_38,0);
      FUN_1446efa72(&local_38,0,0,0x10);
      plStack_30 = (longlong *)((ulonglong)plStack_30 & 0xffffffff00000000);
    }
    if (local_38 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1443e7c13:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443e7dfe FUN_1443e7dfe body=641 status=ok
// SIG undefined FUN_1443e7dfe(void)

void FUN_1443e7dfe(longlong *param_1,char param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined1 auStack_88 [32];
  longlong local_68;
  ulonglong uStack_60;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_40;
  undefined7 uVar6;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar3 = (longlong *)param_1[5];
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))(plVar3,param_1 + 0xe);
  }
  if (param_2 == '\0') {
    uVar5 = 0;
  }
  else {
    local_58 = 0;
    uStack_50 = 0;
    plVar3 = param_1 + 0x2a;
    local_68 = 0;
    uStack_60 = 0;
    FUN_148fbe1fe(&local_58,plVar3);
    plVar1 = param_1 + 0x2c;
    FUN_148fbe1fe(&local_68,plVar1);
    FUN_148fbe1fe(plVar1,plVar3);
    FUN_145e041f4(param_1[0x2a],(int)param_1[0x2b]);
    *(undefined4 *)(param_1 + 0x2b) = 0;
    if (*(int *)((longlong)param_1 + 0x15c) != 0) {
      FUN_148fc3b7a(plVar3,0);
    }
    (**(code **)(*(longlong *)param_1[5] + 0x50))((longlong *)param_1[5],plVar3);
    FUN_149014b10(param_1);
    FUN_1443e75ca(param_1);
    uVar6 = (undefined7)((ulonglong)&local_68 >> 8);
    uVar5 = CONCAT71(uVar6,1);
    if ((int)param_1[0x2f] < 1) {
      uVar5 = CONCAT71(uVar6,'\x02' - (0 < (int)param_1[0x31]));
    }
    (**(code **)(*param_1 + 0x390))(param_1,param_1 + 0x2e,param_1 + 0x30);
    FUN_145e041f4(param_1[0x30],(int)param_1[0x31]);
    *(undefined4 *)(param_1 + 0x31) = 0;
    if (*(int *)((longlong)param_1 + 0x18c) != 0) {
      FUN_148fc3b7a(param_1 + 0x30,0);
    }
    FUN_145e041f4(param_1[0x2e],(int)param_1[0x2f]);
    *(undefined4 *)(param_1 + 0x2f) = 0;
    if (*(int *)((longlong)param_1 + 0x17c) != 0) {
      FUN_148fc3b7a(param_1 + 0x2e,0);
    }
    FUN_148fbe1fe(plVar3,&local_58);
    FUN_148fbe1fe(plVar1,&local_68);
    FUN_145e041f4(local_68,uStack_60 & 0xffffffff);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    FUN_145e041f4(local_58,uStack_50 & 0xffffffff);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  param_1[5] = 0;
  plVar3 = (longlong *)param_1[6];
  if (plVar3 != (longlong *)0x0) {
    param_1[6] = 0;
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
  *(undefined1 *)(param_1 + 0x41) = 0;
  if ((int)param_4[1] != 0) {
    plVar3 = (longlong *)*param_4;
    if (plVar3 == (longlong *)0x0) goto LAB_1443e7ed1;
    (**(code **)(*plVar3 + 0x60))(plVar3,uVar5 & 0xffffffff);
    if ((int)param_4[1] != 0) {
      puVar4 = (undefined8 *)*param_4;
      if (puVar4 == (undefined8 *)0x0) goto LAB_1443e7ed1;
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(param_4,0,0,0x10);
      *(undefined4 *)(param_4 + 1) = 0;
    }
  }
  if (*param_4 != 0) {
    FUN_1400020a8();
  }
LAB_1443e7ed1:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443e8080 FUN_1443e8080 body=446 status=ok
// SIG undefined FUN_1443e8080(void)

char FUN_1443e8080(longlong *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_88 [40];
  longlong local_60;
  int local_58;
  int local_54;
  longlong local_50;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1443e8240();
  FUN_1443e8b04(param_1);
  if ((longlong)(int)param_1[0x31] != 0) {
    lVar6 = (longlong)(int)param_1[0x31] * 0xa8;
    lVar8 = param_1[0x30] + 0x28;
    do {
      (**(code **)(*param_1 + 0x318))(param_1,lVar8);
      lVar8 = lVar8 + 0xa8;
      lVar6 = lVar6 + -0xa8;
    } while (lVar6 != 0);
  }
  if ((longlong)(int)param_1[0x2f] != 0) {
    lVar6 = param_1[0x2e];
    lVar8 = (longlong)(int)param_1[0x2f] * 0xa8 + lVar6;
    do {
      cVar3 = (**(code **)(*param_1 + 0x360))(param_1,lVar6);
      if (cVar3 == '\0') {
        cVar3 = '\0';
        goto LAB_1443e820a;
      }
      (**(code **)(*param_1 + 0x388))(param_1,&local_60);
      iVar2 = local_54;
      iVar1 = local_58;
      iVar7 = *(int *)(lVar6 + 0x20) + -1;
      if (*(int *)(lVar6 + 0x20) == 0) {
        iVar7 = 0;
      }
      iVar4 = iVar7 + 1 + (uint)(local_58 == 0);
      local_50 = local_60;
      local_60 = 0;
      local_48 = local_58;
      local_44 = local_54;
      local_58 = 0;
      local_54 = 0;
      iVar5 = iVar4 + iVar1;
      if (iVar5 < iVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4((longlong)iVar4);
      }
      if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar5);
      }
      if (iVar2 < iVar5) {
        FUN_1446f8c06(&local_50);
      }
      FUN_1401aebe8(&local_50,*(undefined8 *)(lVar6 + 0x18),iVar7);
      (**(code **)(*param_1 + 0x2f8))(param_1,lVar6 + 0x28,&local_50);
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      lVar6 = lVar6 + 0xa8;
    } while (lVar6 != lVar8);
  }
  cVar3 = '\x04';
  if (*(int *)((longlong)param_1 + 0x21c) == 0) {
    cVar3 = (char)param_1[0x43] * '\x02' + '\x01';
  }
LAB_1443e820a:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return cVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443e8240 FUN_1443e8240 body=2243 status=ok
// SIG undefined FUN_1443e8240(void)

void FUN_1443e8240(longlong *param_1)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_1b8 [32];
  wchar_t *local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  wchar_t *local_180;
  wchar_t *local_178;
  code *local_170;
  undefined1 *local_168;
  LARGE_INTEGER *local_160;
  code *local_158;
  code *local_150;
  longlong *local_148;
  int local_13c;
  longlong local_138;
  undefined8 uStack_130;
  longlong *local_128;
  undefined8 uStack_120;
  longlong local_118;
  ulonglong uStack_110;
  LARGE_INTEGER local_100;
  LARGE_INTEGER local_f8;
  undefined8 local_f0;
  code *local_e8;
  undefined8 local_d8;
  undefined **local_c8;
  longlong *local_c0;
  undefined8 local_a8;
  undefined8 local_98;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cbf600c) && (FUN_144b3d300(&DAT_14cbf600c), DAT_14cbf600c == -1)) {
    iVar13 = (**(code **)(*DAT_14cbf5fe0 + 0xb0))();
    DAT_14cbf6008 = iVar13 != 0;
    _Init_thread_footer(&DAT_14cbf600c);
  }
  if (DAT_14cbf6008 == '\x01') {
    if (DAT_14c948aa0 != (longlong *)0x0) {
      local_f8.QuadPart = 0;
      local_f0 = (LARGE_INTEGER *)((ulonglong)local_f0._4_4_ << 0x20);
      (**(code **)(*DAT_14c948aa0 + 0x60))();
    }
    local_a8 = 0;
    local_98 = 0;
    local_d8 = 0;
    local_c8 = &PTR_LAB_14ba69570;
    local_e8 = FUN_1443efe68;
    local_c0 = param_1;
    FUN_14277dcb4(0);
  }
  else if ((int)param_1[0x35] != 0) {
    if (DAT_14c948aa0 != (longlong *)0x0) {
      local_f8.QuadPart = 0;
      local_f0 = (LARGE_INTEGER *)((ulonglong)local_f0._4_4_ << 0x20);
      (**(code **)(*DAT_14c948aa0 + 0x60))();
    }
    plVar7 = param_1 + 0x34;
    QueryPerformanceCounter(&local_f8);
    local_118 = 0;
    uStack_110 = 0;
    if ((longlong)(int)param_1[0x2f] != 0) {
      lVar15 = param_1[0x2e];
      lVar14 = (longlong)(int)param_1[0x2f] * 0xa8 + lVar15;
      local_148 = plVar7;
      do {
        cVar3 = FUN_144a38768(lVar15 + 0x28,L".INI",4,1);
        if (cVar3 != '\0') {
          (**(code **)(*param_1 + 0x350))(param_1,&local_128,lVar15 + 0x28);
          FUN_149014eb0(&local_f8,&local_128);
          if (local_128 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          if (0 < (longlong)(int)param_1[0x35]) {
            lVar5 = *plVar7;
            uVar10 = 0;
LAB_1443e841e:
            plVar7 = (longlong *)(lVar5 + uVar10 * 0xf8);
            iVar13 = *(int *)(lVar5 + 8 + uVar10 * 0xf8);
            if (iVar13 != (int)local_f0) {
              if (iVar13 + (int)local_f0 == 1) goto LAB_1443e84a0;
              goto LAB_1443e8491;
            }
            if (1 < (int)local_f0) {
              lVar9 = 0;
              do {
                uVar1 = *(ushort *)(*plVar7 + lVar9);
                uVar2 = *(ushort *)(local_f8.QuadPart + lVar9);
                if (uVar1 == uVar2) {
                  if (uVar1 == 0) break;
                }
                else {
                  if (0x7f < (uVar2 | uVar1)) {
                    iVar13 = (uint)uVar1 - (uint)uVar2;
                    goto LAB_1443e8481;
                  }
                  if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2])
                  goto code_r0x0001443e847e;
                }
                lVar9 = lVar9 + 2;
              } while( true );
            }
            goto LAB_1443e84a0;
          }
LAB_1443e84ee:
          if ((code *)local_f8.QuadPart != (code *)0x0) {
            FUN_1400020a8();
          }
        }
        lVar15 = lVar15 + 0xa8;
      } while (lVar15 != lVar14);
    }
    if ((longlong)(int)param_1[0x31] != 0) {
      lVar15 = param_1[0x30];
      lVar14 = (longlong)(int)param_1[0x31] * 0xa8 + lVar15;
      do {
        cVar3 = FUN_144a38768(lVar15 + 0x28,L".INI",4,1);
        if (cVar3 != '\0') {
          (**(code **)(*param_1 + 0x350))(param_1,&local_128,lVar15 + 0x28);
          FUN_149014eb0(&local_f8,&local_128);
          if (local_128 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          if (0 < (longlong)(int)param_1[0x35]) {
            uVar10 = 0;
LAB_1443e85c4:
            plVar11 = (longlong *)(*plVar7 + uVar10 * 0xf8);
            iVar13 = *(int *)(*plVar7 + 8 + uVar10 * 0xf8);
            iVar12 = (int)local_f0;
            if (iVar13 != iVar12) {
              if (iVar13 + iVar12 == 1) goto LAB_1443e8687;
              goto LAB_1443e8666;
            }
            if (1 < iVar12) {
              lVar5 = 0;
              do {
                uVar1 = *(ushort *)(*plVar11 + lVar5);
                uVar2 = *(ushort *)(local_f8.QuadPart + lVar5);
                if (uVar1 == uVar2) {
                  if (uVar1 == 0) break;
                }
                else {
                  local_13c = iVar12;
                  if (0x7f < (uVar2 | uVar1)) {
                    iVar13 = (uint)uVar1 - (uint)uVar2;
                    goto LAB_1443e8656;
                  }
                  if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2])
                  goto code_r0x0001443e8653;
                }
                lVar5 = lVar5 + 2;
              } while( true );
            }
            goto LAB_1443e8687;
          }
LAB_1443e86d0:
          if ((code *)local_f8.QuadPart != (code *)0x0) {
            FUN_1400020a8();
          }
        }
        lVar15 = lVar15 + 0xa8;
      } while (lVar15 != lVar14);
    }
    if (0 < (int)uStack_110) {
      local_128 = (longlong *)0x0;
      uStack_120 = 0;
      FUN_140aa8146();
      if (0 < (int)uStack_110) {
        lVar15 = 8;
        lVar14 = 0;
        do {
          puVar8 = &DAT_149dfb77a;
          if (*(int *)(local_118 + lVar15) != 0) {
            puVar8 = *(undefined2 **)(local_118 + -8 + lVar15);
          }
          if (DAT_14c949118 == 0) {
            local_100.QuadPart = (LONGLONG)FUN_140631fbe;
            lVar5 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
            DAT_14c949118 = lVar5;
            FUN_1446f470e(&local_138,L"Class",1);
            local_160 = &local_100;
            local_168 = &LAB_146891e90;
            local_170 = (code *)&LAB_146273097;
            local_180 = L"Engine";
            local_178 = (wchar_t *)CONCAT44(local_178._4_4_,199);
            local_188 = 0x20;
            uStack_190 = CONCAT44(uStack_190._4_4_,0x10000000);
            local_198._0_4_ = 8;
            FUN_14574b4b2(lVar5);
            local_148 = DAT_14c951858;
            DAT_14c949118 = lVar5;
            if (DAT_14c951858 == (longlong *)0x0) {
              local_f8.QuadPart = (LONGLONG)FUN_1449e2820;
              local_150 = FUN_14081d0ea;
              local_158 = FUN_14081d0ea;
              local_160 = &local_f8;
              local_168 = &LAB_1468c5283;
              local_170 = FUN_142809da0;
              local_178 = L"Engine";
              local_180 = (wchar_t *)0x400000000;
              local_188 = CONCAT44(local_188._4_4_,0x10000000);
              uStack_190 = CONCAT44(uStack_190._4_4_,8);
              local_198._0_4_ = 0x50;
              FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
            }
            lVar5 = DAT_14c949118;
            local_148 = DAT_14c951858;
            uVar6 = FUN_1449e2fb2();
            local_198 = L"Class";
            FUN_14574b446(uVar6,lVar5,local_148,L"/Script/CoreUObject");
          }
          lVar5 = FUN_140277b32(DAT_14c949118,0,puVar8,1);
          if (lVar5 != 0) {
            lVar9 = (longlong)(int)uStack_120;
            uVar4 = (int)uStack_120 + 1;
            uStack_120 = CONCAT44(uStack_120._4_4_,uVar4);
            if (uStack_120._4_4_ < uVar4) {
              FUN_140a0062e(&local_128);
            }
            local_128[lVar9] = lVar5;
          }
          lVar14 = lVar14 + 1;
          lVar15 = lVar15 + 0x10;
        } while (lVar14 < (int)uStack_110);
      }
      if ((longlong)(int)uStack_120 != 0) {
        plVar7 = local_128 + (int)uStack_120;
        plVar11 = local_128;
        do {
          if ((*(byte *)(*plVar11 + 0xd4) & 4) != 0) {
            local_138 = 0;
            uStack_130 = 0;
            local_100.QuadPart = (LONGLONG)&local_138;
            local_f8.QuadPart = (LONGLONG)FUN_142840874;
            local_198 = (wchar_t *)((ulonglong)local_198 & 0xffffffff00000000);
            local_f0 = &local_100;
            FUN_140245161(*plVar11,&local_f8,1,0);
            lVar15 = local_138;
            lVar14 = (longlong)(int)uStack_130;
            if (lVar14 != 0) {
              lVar5 = 0;
              do {
                lVar9 = *(longlong *)(lVar15 + lVar5);
                if ((lVar9 != 0) && ((*(uint *)(lVar9 + 8) >> 0x1e & 1) == 0)) {
                  local_198 = (wchar_t *)0x0;
                  uStack_190 = 0;
                  FUN_1400033ba(lVar9,0,0);
                }
                lVar5 = lVar5 + 8;
              } while (lVar14 * 8 != lVar5);
            }
            if (local_138 != 0) {
              FUN_1400020a8(local_138);
            }
          }
          plVar11 = plVar11 + 1;
        } while (plVar11 != plVar7);
      }
      if (local_128 != (longlong *)0x0) {
        FUN_1400020a8(local_128);
      }
    }
    FUN_1447a1747(local_118,uStack_110 & 0xffffffff);
    if (local_118 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x0001443e847e:
  iVar13 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
LAB_1443e8481:
  if (iVar13 == 0) {
LAB_1443e84a0:
    FUN_140b7fa3a(&local_118,plVar7 + 0x1d);
    FUN_14680483a(DAT_14c872ce0,plVar7,plVar7 + 2);
    plVar7 = local_148;
    FUN_149015744(local_148,uVar10 & 0xffffffff);
    goto LAB_1443e84ee;
  }
LAB_1443e8491:
  uVar10 = uVar10 + 1;
  plVar7 = local_148;
  if (uVar10 == (longlong)(int)param_1[0x35]) goto LAB_1443e84ee;
  goto LAB_1443e841e;
code_r0x0001443e8653:
  iVar13 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
LAB_1443e8656:
  if (iVar13 == 0) {
LAB_1443e8687:
    FUN_140b7fa3a(&local_118,plVar11 + 0x1d);
    FUN_14680483a(DAT_14c872ce0,plVar11,plVar11 + 2);
    FUN_149015744(plVar7,uVar10 & 0xffffffff);
    goto LAB_1443e86d0;
  }
LAB_1443e8666:
  uVar10 = uVar10 + 1;
  if (uVar10 == (longlong)(int)param_1[0x35]) goto LAB_1443e86d0;
  goto LAB_1443e85c4;
}



// FUNCTION 1443e8b04 FUN_1443e8b04 body=572 status=ok
// SIG undefined FUN_1443e8b04(void)

void FUN_1443e8b04(longlong param_1)

{
  longlong *plVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  if (*(int *)(param_1 + 0x198) != 0) {
    plVar1 = (longlong *)(param_1 + 400);
    if ((longlong)*(int *)(param_1 + 0x178) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x170);
      lVar10 = (longlong)*(int *)(param_1 + 0x178) * 0xa8 + lVar9;
      do {
        if (0 < (longlong)*(int *)(param_1 + 0x198)) {
          iVar4 = *(int *)(lVar9 + 0x20);
          uVar6 = 0;
LAB_1443e8b65:
          iVar7 = *(int *)(*plVar1 + 8 + uVar6 * 0x10);
          if (iVar7 != iVar4) {
            if (iVar7 + iVar4 == 1) goto LAB_1443e8beb;
            goto LAB_1443e8bdc;
          }
          if (1 < iVar4) {
            lVar8 = 0;
            do {
              uVar2 = *(ushort *)(*(longlong *)(*plVar1 + uVar6 * 0x10) + lVar8);
              uVar3 = *(ushort *)(*(longlong *)(lVar9 + 0x18) + lVar8);
              if (uVar2 == uVar3) {
                if (uVar2 == 0) break;
              }
              else {
                if (0x7f < (uVar3 | uVar2)) {
                  iVar7 = (uint)uVar2 - (uint)uVar3;
                  goto LAB_1443e8bcc;
                }
                if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[(uint)uVar3])
                goto code_r0x0001443e8bc9;
              }
              lVar8 = lVar8 + 2;
            } while( true );
          }
          goto LAB_1443e8beb;
        }
LAB_1443e8c1d:
        lVar9 = lVar9 + 0xa8;
      } while (lVar9 != lVar10);
    }
    if ((longlong)*(int *)(param_1 + 0x188) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x180);
      lVar10 = (longlong)*(int *)(param_1 + 0x188) * 0xa8 + lVar9;
      do {
        if (0 < (longlong)*(int *)(param_1 + 0x198)) {
          iVar4 = *(int *)(lVar9 + 0x20);
          uVar6 = 0;
LAB_1443e8c67:
          iVar7 = *(int *)(*plVar1 + 8 + uVar6 * 0x10);
          if (iVar7 != iVar4) {
            if (iVar7 + iVar4 == 1) goto LAB_1443e8ced;
            goto LAB_1443e8cde;
          }
          if (1 < iVar4) {
            lVar8 = 0;
            do {
              uVar2 = *(ushort *)(*(longlong *)(*plVar1 + uVar6 * 0x10) + lVar8);
              uVar3 = *(ushort *)(*(longlong *)(lVar9 + 0x18) + lVar8);
              if (uVar2 == uVar3) {
                if (uVar2 == 0) break;
              }
              else {
                if (0x7f < (uVar3 | uVar2)) {
                  iVar7 = (uint)uVar2 - (uint)uVar3;
                  goto LAB_1443e8cce;
                }
                if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[(uint)uVar3])
                goto code_r0x0001443e8ccb;
              }
              lVar8 = lVar8 + 2;
            } while( true );
          }
          goto LAB_1443e8ced;
        }
LAB_1443e8d1f:
        lVar9 = lVar9 + 0xa8;
      } while (lVar9 != lVar10);
    }
  }
  return;
code_r0x0001443e8bc9:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
LAB_1443e8bcc:
  if (iVar7 == 0) {
LAB_1443e8beb:
    plVar5 = DAT_14c872c78;
    if (DAT_14c872c80 == 0) {
      plVar5 = (longlong *)0x0;
    }
    (**(code **)(*plVar5 + 0x58))();
    FUN_14101da94(plVar1,uVar6 & 0xffffffff);
    FUN_140b12644(plVar1);
    *(int *)(param_1 + 0x21c) = *(int *)(param_1 + 0x21c) + 1;
    goto LAB_1443e8c1d;
  }
LAB_1443e8bdc:
  uVar6 = uVar6 + 1;
  if (uVar6 == (longlong)*(int *)(param_1 + 0x198)) goto LAB_1443e8c1d;
  goto LAB_1443e8b65;
code_r0x0001443e8ccb:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
LAB_1443e8cce:
  if (iVar7 == 0) {
LAB_1443e8ced:
    plVar5 = DAT_14c872c78;
    if (DAT_14c872c80 == 0) {
      plVar5 = (longlong *)0x0;
    }
    (**(code **)(*plVar5 + 0x58))();
    FUN_14101da94(plVar1,uVar6 & 0xffffffff);
    FUN_140b12644(plVar1);
    *(int *)(param_1 + 0x21c) = *(int *)(param_1 + 0x21c) + 1;
    goto LAB_1443e8d1f;
  }
LAB_1443e8cde:
  uVar6 = uVar6 + 1;
  if (uVar6 == (longlong)*(int *)(param_1 + 0x198)) goto LAB_1443e8d1f;
  goto LAB_1443e8c67;
}



// FUNCTION 1443e8d40 FUN_1443e8d40 body=746 status=ok
// SIG undefined FUN_1443e8d40(void)

ulonglong FUN_1443e8d40(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  ushort uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ushort uVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined2 *local_48;
  undefined8 uStack_40;
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_2 = param_2 + 0x28;
  lVar10 = 0;
  FUN_144a06df0(&local_38,param_2,0);
  puVar3 = local_38;
  if (local_30 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  while( true ) {
    uVar4 = *(ushort *)((longlong)puVar3 + lVar10);
    uVar6 = (ulonglong)uVar4;
    uVar8 = *(ushort *)((longlong)&DAT_14ba66adc + lVar10);
    if (uVar4 != uVar8) break;
    if (uVar4 == 0) goto LAB_1443e8e35;
LAB_1443e8db2:
    lVar10 = lVar10 + 2;
  }
  if ((uVar8 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    uVar7 = (ulonglong)uVar8;
    uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
    if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar7]) goto LAB_1443e8db2;
  }
  if (uVar4 != uVar8) {
    lVar10 = 0;
    goto LAB_1443e8de5;
  }
LAB_1443e8e35:
  local_48 = (undefined2 *)0x0;
  uStack_40 = 0;
  cVar1 = FUN_149013c1c(param_2);
  uVar6 = 0;
  if (cVar1 != '\0') {
    iVar9 = *(int *)(param_1 + 0x1d8);
    uVar5 = iVar9 - 1;
    if (iVar9 == 0) {
      uVar5 = 0;
    }
    if (0 < (int)uVar5) {
      puVar3 = &DAT_149dfb77a;
      if (iVar9 != 0) {
        puVar3 = *(undefined2 **)(param_1 + 0x1d0);
      }
      uVar6 = (ulonglong)uVar5;
      puVar2 = &DAT_149dfb77a;
      if ((int)uStack_40 != 0) {
        puVar2 = local_48;
      }
      lVar10 = 0;
LAB_1443e8e91:
      uVar4 = *(ushort *)((longlong)puVar2 + lVar10);
      uVar8 = *(ushort *)((longlong)puVar3 + lVar10);
      if (uVar4 == uVar8) {
        iVar9 = 0;
        if ((uVar4 == 0) || (uVar6 == 1)) goto LAB_1443e8f3c;
LAB_1443e8eb6:
        uVar6 = uVar6 - 1;
        lVar10 = lVar10 + 2;
        goto LAB_1443e8e91;
      }
      if ((uVar8 | uVar4) < 0x80) {
        if ((&DAT_149e05da0)[uVar4] != (&DAT_149e05da0)[(uint)uVar8]) {
          iVar9 = (uint)(byte)(&DAT_149e05da0)[uVar4] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar8];
          goto LAB_1443e8f3c;
        }
        if (uVar6 == 1) {
          iVar9 = 0;
          goto LAB_1443e8f3c;
        }
        goto LAB_1443e8eb6;
      }
      iVar9 = (uint)uVar4 - (uint)uVar8;
LAB_1443e8f3c:
      uVar6 = (ulonglong)(iVar9 == 0);
    }
    iVar9 = *(int *)(param_1 + 0x1b8);
    bVar11 = false;
    uVar5 = iVar9 - 1;
    if (iVar9 == 0) {
      uVar5 = 0;
    }
    if (0 < (int)uVar5) {
      puVar3 = &DAT_149dfb77a;
      if (iVar9 != 0) {
        puVar3 = *(undefined2 **)(param_1 + 0x1b0);
      }
      uVar7 = (ulonglong)uVar5;
      puVar2 = &DAT_149dfb77a;
      if ((int)uStack_40 != 0) {
        puVar2 = local_48;
      }
      lVar10 = 0;
LAB_1443e8f80:
      uVar4 = *(ushort *)((longlong)puVar2 + lVar10);
      uVar8 = *(ushort *)((longlong)puVar3 + lVar10);
      if (uVar4 == uVar8) {
        iVar9 = 0;
        if ((uVar4 == 0) || (uVar7 == 1)) goto LAB_1443e8fce;
LAB_1443e8f9d:
        uVar7 = uVar7 - 1;
        lVar10 = lVar10 + 2;
        goto LAB_1443e8f80;
      }
      if ((uVar8 | uVar4) < 0x80) {
        if ((&DAT_149e05da0)[uVar4] != (&DAT_149e05da0)[(uint)uVar8]) {
          iVar9 = (uint)(byte)(&DAT_149e05da0)[uVar4] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar8];
          goto LAB_1443e8fce;
        }
        if (uVar7 == 1) {
          iVar9 = 0;
          goto LAB_1443e8fce;
        }
        goto LAB_1443e8f9d;
      }
      iVar9 = (uint)uVar4 - (uint)uVar8;
LAB_1443e8fce:
      bVar11 = iVar9 == 0;
    }
    uVar6 = (ulonglong)(byte)((byte)uVar6 | bVar11);
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  goto LAB_1443e8fe6;
LAB_1443e8de5:
  uVar4 = *(ushort *)((longlong)puVar3 + lVar10);
  uVar6 = (ulonglong)uVar4;
  uVar8 = *(ushort *)((longlong)&DAT_14ba66ae4 + lVar10);
  if (uVar4 == uVar8) {
    if (uVar4 == 0) goto LAB_1443e8ee8;
LAB_1443e8dfe:
    lVar10 = lVar10 + 2;
    goto LAB_1443e8de5;
  }
  if ((uVar8 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    uVar7 = (ulonglong)uVar8;
    uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
    if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar7]) goto LAB_1443e8dfe;
  }
  if (uVar4 != uVar8) {
    uVar6 = 0;
    goto LAB_1443e8fe6;
  }
LAB_1443e8ee8:
  iVar9 = 0;
  if (*(int *)(param_1 + 0x1b8) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = *(undefined2 **)(param_1 + 0x1b0);
    iVar9 = *(int *)(param_1 + 0x1b8) + -1;
  }
  local_50 = 0xffffffff;
  local_58 = 0;
  iVar9 = FUN_1447ee042(param_2,puVar3,iVar9,1);
  uVar6 = CONCAT71((int7)((ulonglong)param_2 >> 8),iVar9 != -1);
LAB_1443e8fe6:
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443e902c FUN_1443e902c body=548 status=ok
// SIG undefined FUN_1443e902c(void)

undefined4 FUN_1443e902c(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined2 *puVar5;
  ushort uVar6;
  ulonglong uVar7;
  ushort uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_88 [32];
  longlong local_68 [3];
  undefined8 uStack_50;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = param_2 + 0x28;
  lVar11 = 0;
  FUN_144a06df0(&local_40,lVar1,0);
  puVar5 = local_40;
  if (local_38 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  while( true ) {
    uVar6 = *(ushort *)((longlong)puVar5 + lVar11);
    uVar7 = (ulonglong)uVar6;
    uVar8 = *(ushort *)((longlong)&DAT_14ba66ae4 + lVar11);
    if (uVar6 != uVar8) break;
    if (uVar6 == 0) goto LAB_1443e912c;
LAB_1443e90a1:
    lVar11 = lVar11 + 2;
  }
  if ((uVar8 | uVar6) < 0x80) {
    uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
    uVar9 = (ulonglong)uVar8;
    uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
    if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar9]) goto LAB_1443e90a1;
  }
  if (uVar6 != uVar8) {
    local_68[2] = 0;
    uStack_50 = 0;
    cVar2 = (**(code **)(*(longlong *)param_1[5] + 8))((longlong *)param_1[5],param_2 + 0x18);
    if ((cVar2 == '\0') ||
       (cVar2 = (**(code **)(*param_1 + 0x368))(param_1,param_2,local_68 + 2), cVar2 == '\0'))
    goto LAB_1443e91cf;
    (**(code **)(*param_1 + 0x338))(param_1,lVar1,local_68 + 2);
    uVar7 = uStack_50;
    puVar5 = local_40;
    if (local_38 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    lVar11 = 0;
    goto LAB_1443e918e;
  }
LAB_1443e912c:
  uVar3 = (**(code **)(*param_1 + 0x378))(param_1,param_2);
  goto LAB_1443e913d;
LAB_1443e91cf:
  uVar3 = 0;
  goto LAB_1443e91d1;
LAB_1443e918e:
  uVar6 = *(ushort *)((longlong)puVar5 + lVar11);
  uVar9 = (ulonglong)uVar6;
  uVar8 = *(ushort *)((longlong)&DAT_14ba66adc + lVar11);
  if (uVar6 == uVar8) {
    if (uVar6 == 0) goto LAB_1443e91e9;
LAB_1443e91a3:
    lVar11 = lVar11 + 2;
    goto LAB_1443e918e;
  }
  if ((uVar8 | uVar6) < 0x80) {
    uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
    uVar10 = (ulonglong)uVar8;
    uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
    if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar10]) goto LAB_1443e91a3;
  }
  if (uVar6 != uVar8) goto LAB_1443e91cf;
LAB_1443e91e9:
  lVar11 = (longlong)(int)uStack_50;
  uVar4 = (int)uStack_50 + 1;
  uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
  if (uStack_50._4_4_ < uVar4) {
    FUN_1447403be(local_68 + 2,uVar7 & 0xffffffff);
  }
  *(undefined1 *)(local_68[2] + lVar11) = 0;
  local_68[0] = 0;
  local_68[1] = 0;
  FUN_14170ac0e(local_68,local_68[2],uStack_50 & 0xffffffff);
  uVar3 = (**(code **)(*param_1 + 0x370))(param_1,lVar1,local_68);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
LAB_1443e91d1:
  if (local_68[2] != 0) {
    FUN_1400020a8();
  }
LAB_1443e913d:
  (**(code **)(*(longlong *)param_1[5] + 0x18))((longlong *)param_1[5],lVar1);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1443e9252 FUN_1443e9252 body=3293 status=ok
// SIG undefined FUN_1443e9252(void)

void FUN_1443e9252(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  code *pcVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  bool bVar17;
  ushort uVar18;
  int iVar19;
  ushort uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  LARGE_INTEGER LVar24;
  ulonglong uVar25;
  longlong lVar26;
  undefined1 auStack_1c8 [32];
  wchar_t *local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  wchar_t *local_190;
  wchar_t *local_188;
  code *local_180;
  undefined1 *local_178;
  code **local_170;
  code *local_168;
  code *local_160;
  uint local_14c;
  ulonglong local_148;
  undefined8 local_140;
  undefined8 local_138;
  ulonglong local_130;
  ulonglong local_128;
  undefined8 local_120;
  code **local_118;
  undefined8 uStack_110;
  code *local_108;
  undefined8 uStack_100;
  longlong local_f8;
  undefined8 uStack_f0;
  longlong *local_e8;
  undefined8 uStack_e0;
  code *local_d0;
  LARGE_INTEGER local_c8;
  code ***pppcStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_e8 = (longlong *)0x0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  uVar25 = 0;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  local_140 = param_3;
  local_120 = param_2;
  if ((int)param_1[1] + 0x7fffffffU < 0x80000001) {
LAB_1443e92fa:
    QueryPerformanceCounter(&local_c8);
    if ((longlong)(int)uStack_e0 != 0) {
      plVar1 = local_e8 + (int)uStack_e0;
      plVar15 = local_e8;
      do {
        if ((*(byte *)(*plVar15 + 0xd4) & 4) != 0) {
          local_108 = (code *)0x0;
          uStack_100 = 0;
          local_118 = &local_108;
          local_c8.QuadPart = (LONGLONG)FUN_142840874;
          local_1a8 = (wchar_t *)((ulonglong)local_1a8 & 0xffffffff00000000);
          pppcStack_c0 = &local_118;
          FUN_140245161(*plVar15,&local_c8,1,0);
          pcVar11 = local_108;
          lVar13 = (longlong)(int)uStack_100;
          if (lVar13 != 0) {
            lVar26 = 0;
            do {
              lVar12 = *(longlong *)(pcVar11 + lVar26);
              if ((lVar12 != 0) && ((*(uint *)(lVar12 + 8) >> 0x1e & 1) == 0)) {
                local_1a8 = (wchar_t *)0x0;
                uStack_1a0 = 0;
                FUN_1400033ba(lVar12,0,0);
              }
              lVar26 = lVar26 + 8;
            } while (lVar13 * 8 != lVar26);
          }
          if (local_108 != (code *)0x0) {
            FUN_1400020a8(local_108);
          }
        }
        plVar15 = plVar15 + 1;
      } while (plVar15 != plVar1);
    }
    lVar13 = local_f8;
    lVar26 = (longlong)(int)uStack_f0;
    if (lVar26 != 0) {
      lVar12 = 0;
      do {
        local_1a8 = (wchar_t *)0x0;
        uStack_1a0 = 0;
        FUN_1400033ba(*(undefined8 *)(lVar13 + lVar12),0,0,9);
        lVar12 = lVar12 + 8;
      } while (lVar26 * 8 != lVar12);
    }
    uVar6 = FUN_145857cde();
    FUN_146900746(uVar6,local_120,&local_b8);
    local_70 = 0;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    FUN_1408910a4(&local_b8);
    if (local_f8 != 0) {
      FUN_1400020a8();
    }
    if (local_e8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if ((local_60 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  uVar5 = 0;
LAB_1443e94e1:
  uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar5);
  local_1a8 = (wchar_t *)((ulonglong)local_1a8 & 0xffffffff00000000);
  uVar3 = FUN_1447ee042(param_1,&DAT_149e2b508,1,1);
  if (-1 < (int)uVar3) {
    uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar3);
    local_1a8 = (wchar_t *)((ulonglong)local_1a8 & 0xffffffff00000000);
    uVar4 = FUN_1447ee042(param_1,&DAT_149e2b50c,1,1);
    iVar23 = uVar4 - uVar3;
    uVar5 = uVar3;
    if (iVar23 != 0 && (int)uVar3 <= (int)uVar4) {
      uVar16 = (ulonglong)uVar3;
      if ((uVar3 == 0) || (*(short *)(*param_1 + -2 + uVar16 * 2) == 10)) {
LAB_1443e95ae:
        uVar14 = uVar3 + 1;
        local_128 = (ulonglong)uVar14;
        local_130 = (ulonglong)(iVar23 - 1);
        local_14c = uVar4;
        if (iVar23 < 1) {
          local_c8.QuadPart = 0;
          pppcStack_c0 = (code ***)0x0;
        }
        else {
          iVar19 = (int)param_1[1];
          uVar5 = iVar19 - 1;
          if (iVar19 == 0) {
            uVar5 = 0;
          }
          uVar4 = uVar5;
          if ((int)uVar14 < (int)uVar5) {
            uVar4 = uVar14;
          }
          uVar9 = (ulonglong)uVar4;
          if ((int)uVar4 < 1) {
            uVar9 = uVar25;
          }
          uVar10 = (longlong)(int)uVar5;
          if ((longlong)(local_128 + local_130) < (longlong)(int)uVar5) {
            uVar10 = local_128 + local_130;
          }
          if ((longlong)uVar10 < (longlong)uVar9) {
            uVar10 = uVar9;
          }
          puVar7 = &DAT_149dfb77a;
          if (iVar19 != 0) {
            puVar7 = (undefined2 *)*param_1;
          }
          FUN_14006620a(&local_c8,puVar7 + uVar9,(int)uVar10 - (int)uVar9);
        }
        FUN_140e830ae(&local_b8,&local_108,&local_c8,0);
        if ((code *)local_c8.QuadPart != (code *)0x0) {
          FUN_1400020a8();
        }
        uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar3);
        local_1a8 = (wchar_t *)((ulonglong)local_1a8 & 0xffffffff00000000);
        local_138 = FUN_1447ee042(param_1,&DAT_149e001d8,1);
        uVar22 = *(uint *)(param_1 + 1);
        uVar9 = (ulonglong)uVar22;
        puVar7 = &DAT_149dfb77a;
        if (uVar22 != 0) {
          puVar7 = (undefined2 *)*param_1;
        }
        lVar13 = 0xd;
        lVar26 = 0;
        do {
          uVar18 = *(ushort *)((longlong)puVar7 + lVar26 + uVar16 * 2);
          uVar20 = *(ushort *)((longlong)L"[AssetHotfix]" + lVar26);
          if (uVar18 == uVar20) {
            if (uVar18 == 0) goto LAB_1443e92fa;
          }
          else {
            local_148 = uVar9;
            if (0x7f < (uVar20 | uVar18)) {
              iVar19 = (uint)uVar18 - (uint)uVar20;
              goto LAB_1443e9707;
            }
            if ((&DAT_149e05da0)[uVar18] != (&DAT_149e05da0)[(uint)uVar20]) goto LAB_1443e9704;
          }
          if (lVar13 == 1) goto LAB_1443e92fa;
          lVar13 = lVar13 + -1;
          lVar26 = lVar26 + 2;
        } while( true );
      }
      bVar17 = false;
      uVar9 = uVar16;
      while (0 < (longlong)uVar9) {
        sVar2 = *(short *)(*param_1 + -2 + uVar9 * 2);
        bVar17 = (bool)(bVar17 | sVar2 == 0x22);
        if ((sVar2 == 0x22) || (uVar9 = uVar9 - 1, sVar2 == 10)) break;
      }
      uVar5 = uVar4;
      if (!bVar17) goto LAB_1443e95ae;
    }
    goto LAB_1443e958f;
  }
  goto LAB_1443e92fa;
LAB_1443e9704:
  iVar19 = (uint)(byte)(&DAT_149e05da0)[uVar18] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar20];
LAB_1443e9707:
  if (iVar19 == 0) goto LAB_1443e92fa;
  uVar5 = (uint)local_138;
  uVar8 = 0;
  if (uVar5 == 0xffffffff || (int)local_14c < (int)uVar5) {
    lVar13 = 9;
    lVar26 = 0;
    while( true ) {
      uVar18 = *(ushort *)((longlong)puVar7 + lVar26 + uVar16 * 2);
      uVar9 = (ulonglong)uVar18;
      uVar20 = *(ushort *)((longlong)L"[/Script/" + lVar26);
      if (uVar18 != uVar20) break;
      if ((uVar18 == 0) || (lVar13 == 1)) goto LAB_1443e97b5;
LAB_1443e976e:
      lVar13 = lVar13 + -1;
      lVar26 = lVar26 + 2;
    }
    if ((uVar20 | uVar18) < 0x80) {
      uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
      uVar10 = (ulonglong)uVar20;
      uVar20 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
      if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar10]) goto LAB_1443e990f;
      if (lVar13 != 1) goto LAB_1443e976e;
    }
    else {
LAB_1443e990f:
      if (uVar18 != uVar20) {
        lVar13 = 7;
        lVar26 = 0;
        goto LAB_1443e992c;
      }
    }
LAB_1443e97b5:
    if (iVar23 < 9) {
      local_c8.QuadPart = 0;
      pppcStack_c0 = (code ***)0x0;
LAB_1443e9b19:
      LVar24.QuadPart = (LONGLONG)&DAT_149dfb77a;
    }
    else {
      uVar5 = uVar22 - 1;
      if (uVar22 == 0) {
        uVar5 = uVar8;
      }
      uVar4 = uVar3 + 9;
      if ((int)uVar5 <= (int)(uVar3 + 9)) {
        uVar4 = uVar5;
      }
      uVar9 = (ulonglong)uVar4;
      if ((int)uVar4 < 1) {
        uVar9 = uVar25;
      }
      uVar10 = uVar16 + (iVar23 - 9) + 9;
      uVar16 = (longlong)(int)uVar5;
      if ((longlong)uVar10 < (longlong)(int)uVar5) {
        uVar16 = uVar10;
      }
      if ((longlong)uVar16 < (longlong)uVar9) {
        uVar16 = uVar9;
      }
      FUN_14006620a(&local_c8,puVar7 + uVar9,(int)uVar16 - (int)uVar9);
      LVar24 = local_c8;
      if ((int)pppcStack_c0 == 0) goto LAB_1443e9b19;
    }
    if (DAT_14c949118 == 0) {
      local_d0 = FUN_140631fbe;
      lVar13 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c949118 = lVar13;
      FUN_1446f470e(&local_118,L"Class",1);
      local_170 = &local_d0;
      local_178 = &LAB_146891e90;
      local_180 = (code *)&LAB_146273097;
      local_190 = L"Engine";
      local_188 = (wchar_t *)CONCAT44(local_188._4_4_,199);
      local_198 = 0x20;
      uStack_1a0 = CONCAT44(uStack_1a0._4_4_,0x10000000);
      local_1a8._0_4_ = 8;
      FUN_14574b4b2(lVar13);
      DAT_14c949118 = lVar13;
      if (DAT_14c951858 == 0) {
        local_108 = FUN_1449e2820;
        local_160 = FUN_14081d0ea;
        local_168 = FUN_14081d0ea;
        local_170 = &local_108;
        local_178 = &LAB_1468c5283;
        local_180 = FUN_142809da0;
        local_188 = L"Engine";
        local_190 = (wchar_t *)0x400000000;
        local_198 = CONCAT44(local_198._4_4_,0x10000000);
        uStack_1a0 = CONCAT44(uStack_1a0._4_4_,8);
        local_1a8._0_4_ = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar26 = DAT_14c951858;
      lVar13 = DAT_14c949118;
      uVar6 = FUN_1449e2fb2();
      local_1a8 = L"Class";
      FUN_14574b446(uVar6,lVar13,lVar26,L"/Script/CoreUObject");
    }
    lVar13 = FUN_140277b32(DAT_14c949118,0,LVar24.QuadPart,1);
    goto LAB_1443e9b3d;
  }
  uVar4 = uVar5 + 1;
  if ((int)(local_14c - uVar4) < 0) {
    local_c8.QuadPart = 0;
    pppcStack_c0 = (code ***)0x0;
  }
  else {
    uVar21 = uVar22 - 1;
    if (uVar22 == 0) {
      uVar21 = uVar8;
    }
    uVar22 = uVar21;
    if ((int)uVar4 < (int)uVar21) {
      uVar22 = uVar4;
    }
    uVar16 = (ulonglong)uVar22;
    if ((int)uVar22 < 1) {
      uVar16 = uVar25;
    }
    uVar9 = (longlong)(int)uVar4 + (ulonglong)(local_14c - uVar4);
    if ((longlong)(int)uVar21 <= (longlong)uVar9) {
      uVar9 = (longlong)(int)uVar21;
    }
    if ((longlong)uVar9 < (longlong)uVar16) {
      uVar9 = uVar16;
    }
    FUN_14006620a(&local_c8,puVar7 + uVar16,(int)uVar9 - (int)uVar16);
  }
  if (DAT_14c949118 == 0) {
    local_d0 = FUN_140631fbe;
    lVar13 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
    DAT_14c949118 = lVar13;
    FUN_1446f470e(&local_118,L"Class",1);
    local_170 = &local_d0;
    local_178 = &LAB_146891e90;
    local_180 = (code *)&LAB_146273097;
    local_190 = L"Engine";
    local_188 = (wchar_t *)CONCAT44(local_188._4_4_,199);
    local_198 = 0x20;
    uStack_1a0 = CONCAT44(uStack_1a0._4_4_,0x10000000);
    local_1a8._0_4_ = 8;
    FUN_14574b4b2(lVar13);
    DAT_14c949118 = lVar13;
    if (DAT_14c951858 == 0) {
      local_108 = FUN_1449e2820;
      local_160 = FUN_14081d0ea;
      local_168 = FUN_14081d0ea;
      local_170 = &local_108;
      local_178 = &LAB_1468c5283;
      local_180 = FUN_142809da0;
      local_188 = L"Engine";
      local_190 = (wchar_t *)0x400000000;
      local_198 = CONCAT44(local_198._4_4_,0x10000000);
      uStack_1a0 = CONCAT44(uStack_1a0._4_4_,8);
      local_1a8._0_4_ = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar26 = DAT_14c951858;
    lVar13 = DAT_14c949118;
    uVar6 = FUN_1449e2fb2();
    local_1a8 = L"Class";
    FUN_14574b446(uVar6,lVar13,lVar26,L"/Script/CoreUObject");
    uVar5 = (uint)local_138;
  }
  lVar13 = FUN_1427dcdfa(DAT_14c949118,&local_c8,0);
  if (lVar13 == 0) goto LAB_1443e9d77;
  if ((int)(uVar3 - uVar5) < 0) {
    iVar23 = (int)param_1[1];
    uVar3 = iVar23 - 1;
    if (iVar23 == 0) {
      uVar3 = uVar8;
    }
    if ((int)uVar3 <= (int)uVar14) {
      uVar14 = uVar3;
    }
    uVar16 = (ulonglong)uVar14;
    if ((int)uVar14 < 1) {
      uVar16 = uVar25;
    }
    uVar9 = (longlong)(int)uVar3;
    if ((longlong)(ulonglong)uVar5 < (longlong)(int)uVar3) {
      uVar9 = (ulonglong)uVar5;
    }
    if ((longlong)uVar9 < (longlong)uVar16) {
      uVar9 = uVar16;
    }
    puVar7 = &DAT_149dfb77a;
    if (iVar23 != 0) {
      puVar7 = (undefined2 *)*param_1;
    }
    FUN_14006620a(&local_108,puVar7 + uVar16,(int)uVar9 - (int)uVar16);
    pcVar11 = local_108;
    if ((int)uStack_100 == 0) goto LAB_1443e9cc7;
  }
  else {
    local_108 = (code *)0x0;
    uStack_100 = 0;
LAB_1443e9cc7:
    pcVar11 = (code *)&DAT_149dfb77a;
  }
  local_1a8 = (wchar_t *)0x0;
  lVar26 = FUN_140277cc4(lVar13,pcVar11,4,0);
  uVar16 = uStack_f0;
  if (lVar26 != 0) {
    lVar12 = (longlong)(int)uStack_f0;
    uVar5 = (int)uStack_f0 + 1;
    uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar5);
    if (uStack_f0._4_4_ < uVar5) {
      FUN_1447f76d2(&local_f8,uVar16 & 0xffffffff);
    }
    *(longlong *)(local_f8 + lVar12 * 8) = lVar26;
    local_118 = (code **)0x0;
    uStack_110 = 0;
    FUN_1401031ac(lVar13,0,&local_118);
    FUN_1405e9454(local_140,&local_118);
    if (local_118 != (code **)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1443e9d65:
  if (local_108 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_1443e9d77:
  uVar5 = local_14c;
  uVar4 = local_14c;
  if ((code *)local_c8.QuadPart != (code *)0x0) {
    FUN_1400020a8();
    uVar5 = local_14c;
    uVar4 = local_14c;
  }
LAB_1443e958f:
  uVar3 = (int)param_1[1] - 1;
  if ((int)param_1[1] == 0) {
    uVar3 = 0;
  }
  if (((int)uVar4 < (int)uVar5) || ((int)uVar3 <= (int)uVar5)) goto LAB_1443e92fa;
  goto LAB_1443e94e1;
LAB_1443e992c:
  uVar18 = *(ushort *)((longlong)puVar7 + lVar26 + uVar16 * 2);
  uVar9 = (ulonglong)uVar18;
  uVar20 = *(ushort *)((longlong)&DAT_14ba67682 + lVar26);
  if (uVar18 == uVar20) {
    if (uVar18 == 0) goto LAB_1443e9983;
LAB_1443e9948:
    lVar13 = lVar13 + -1;
    if (lVar13 == 0) goto LAB_1443e9983;
    lVar26 = lVar26 + 2;
    goto LAB_1443e992c;
  }
  if ((uVar20 | uVar18) < 0x80) {
    uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
    uVar10 = (ulonglong)uVar20;
    uVar20 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
    if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar10]) goto LAB_1443e9948;
  }
  uVar5 = local_14c;
  uVar4 = local_14c;
  if (uVar18 != uVar20) goto LAB_1443e958f;
LAB_1443e9983:
  if (iVar23 < 1) {
    local_c8.QuadPart = 0;
    pppcStack_c0 = (code ***)0x0;
LAB_1443e9d9a:
    LVar24.QuadPart = (LONGLONG)&DAT_149dfb77a;
  }
  else {
    uVar5 = uVar22 - 1;
    if (uVar22 == 0) {
      uVar5 = uVar8;
    }
    if ((int)uVar5 <= (int)uVar14) {
      uVar14 = uVar5;
    }
    uVar16 = (ulonglong)uVar14;
    if ((int)uVar14 < 1) {
      uVar16 = uVar25;
    }
    uVar9 = local_128 + local_130;
    if ((longlong)(int)uVar5 <= (longlong)(local_128 + local_130)) {
      uVar9 = (longlong)(int)uVar5;
    }
    if ((longlong)uVar9 < (longlong)uVar16) {
      uVar9 = uVar16;
    }
    FUN_14006620a(&local_c8,puVar7 + uVar16,(int)uVar9 - (int)uVar16);
    LVar24 = local_c8;
    if ((int)pppcStack_c0 == 0) goto LAB_1443e9d9a;
  }
  uVar6 = FUN_14043ab18();
  local_190 = (wchar_t *)0x0;
  uStack_1a0 = 0;
  local_198 = CONCAT71(local_198._1_7_,1);
  local_1a8 = (wchar_t *)((ulonglong)local_1a8 & 0xffffffff00000000);
  lVar13 = FUN_1412ecd05(uVar6,0,LVar24.QuadPart,0);
LAB_1443e9b3d:
  uVar16 = uStack_e0;
  if (lVar13 == 0) goto LAB_1443e9d77;
  lVar26 = (longlong)(int)uStack_e0;
  uVar5 = (int)uStack_e0 + 1;
  uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar5);
  if (uStack_e0._4_4_ < uVar5) {
    FUN_140a0062e(&local_e8,uVar16 & 0xffffffff);
  }
  local_e8[lVar26] = lVar13;
  local_108 = (code *)0x0;
  uStack_100 = 0;
  FUN_1401031ac(lVar13,0,&local_108);
  FUN_1405e9454(local_140,&local_108);
  goto LAB_1443e9d65;
}



// FUNCTION 1443e9f30 FUN_1443e9f30 body=1171 status=ok
// SIG undefined FUN_1443e9f30(void)

ulonglong FUN_1443e9f30(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  LARGE_INTEGER LVar9;
  undefined2 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined1 auStack_108 [36];
  uint local_e4;
  longlong *local_e0;
  LARGE_INTEGER local_d8;
  int local_d0;
  uint local_c8;
  longlong local_a8 [2];
  longlong local_98 [2];
  undefined **local_88;
  undefined1 local_80;
  undefined8 *local_78;
  ulonglong uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((DAT_14c872c68 == (longlong *)0x0 || DAT_14c872c70 == 0) ||
     (cVar3 = (**(code **)(*DAT_14c872c68 + 0x30))(), cVar3 == '\0')) {
    uVar8 = 0;
  }
  else {
    puVar10 = &DAT_149dfb77a;
    if (*(int *)(param_2 + 0x20) != 0) {
      puVar10 = *(undefined2 **)(param_2 + 0x18);
    }
    (**(code **)(*param_1 + 0x388))(param_1,&local_d8);
    LVar9.QuadPart = (LONGLONG)&DAT_149dfb77a;
    if (local_d0 != 0) {
      LVar9 = local_d8;
    }
    FUN_140002266(local_58,L"%s/%s",LVar9.QuadPart,puVar10);
    if ((undefined2 *)local_d8.QuadPart != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    plVar6 = (longlong *)0x0;
    if (DAT_14c872c70 != 0) {
      plVar6 = DAT_14c872c68;
    }
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x58))(plVar6,local_58,0);
    uVar8 = CONCAT71((int7)((ulonglong)puVar10 >> 8),plVar6 != (longlong *)0x0);
    if (plVar6 != (longlong *)0x0) {
      iVar5 = (int)param_1[0x33];
      *(uint *)(param_1 + 0x33) = iVar5 + 1U;
      local_e0 = plVar6;
      if (*(uint *)((longlong)param_1 + 0x19c) < iVar5 + 1U) {
        FUN_1447a1bd6(param_1 + 0x32,iVar5);
      }
      lVar12 = param_1[0x32];
      lVar14 = (longlong)iVar5 * 0x10;
      puVar13 = (undefined8 *)(lVar12 + lVar14);
      *(undefined8 *)(lVar12 + lVar14) = 0;
      iVar5 = *(int *)(param_2 + 0x20);
      pvVar2 = *(void **)(param_2 + 0x18);
      *(int *)(lVar12 + 8 + lVar14) = iVar5;
      local_e4 = (uint)uVar8;
      if ((longlong)iVar5 == 0) {
        *(undefined4 *)((longlong)puVar13 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar13,iVar5,0);
        memcpy((void *)*puVar13,pvVar2,(longlong)iVar5 * 2);
      }
      QueryPerformanceCounter(&local_d8);
      local_68 = 0;
      uStack_60 = 0;
      local_80 = 0;
      local_88 = &PTR_FUN_14ba68890;
      local_78 = (undefined8 *)0x0;
      uStack_70 = 0;
      (**(code **)(*local_e0 + 0x18))(local_e0,&local_88);
      if ((longlong)(int)uStack_70 != 0) {
        lVar12 = (longlong)(int)uStack_70 << 4;
        puVar13 = local_78;
        do {
          cVar3 = FUN_144a38768(puVar13,L".ini",4,1);
          uVar8 = uStack_60;
          if (cVar3 != '\0') {
            lVar14 = (longlong)(int)uStack_60;
            uVar4 = (int)uStack_60 + 1;
            uStack_60 = CONCAT44(uStack_60._4_4_,uVar4);
            if (uStack_60._4_4_ < uVar4) {
              FUN_1447a1bd6(&local_68,uVar8 & 0xffffffff);
            }
            lVar14 = lVar14 * 0x10;
            puVar1 = (undefined8 *)(local_68 + lVar14);
            *(undefined8 *)(local_68 + lVar14) = 0;
            iVar5 = *(int *)(puVar13 + 1);
            pvVar2 = (void *)*puVar13;
            *(int *)(local_68 + 8 + lVar14) = iVar5;
            if ((longlong)iVar5 == 0) {
              *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
            }
            else {
              FUN_1446dd670(puVar1,iVar5,0);
              memcpy((void *)*puVar1,pvVar2,(longlong)iVar5 * 2);
            }
          }
          puVar13 = puVar13 + 2;
          lVar12 = lVar12 + -0x10;
        } while (lVar12 != 0);
      }
      FUN_146ff117a(&local_d8,0x10,1,0);
      plVar6 = local_e0;
      if ((char)param_1[0x43] == '\0') {
        uVar8 = (ulonglong)local_c8;
        iVar5 = local_d0;
        do {
          if (((int)uVar8 < 0) || (iVar5 <= (int)uVar8)) break;
          lVar12 = *(longlong *)(local_d8.QuadPart + uVar8 * 8);
          if ((lVar12 != 0) && ((*(byte *)(lVar12 + 0x2e) & 2) != 0)) {
            uVar7 = FUN_141538082();
            FUN_1468750d6(lVar12 + 0x38,local_a8);
            FUN_141509698(local_98,local_a8,uVar7);
            if (local_a8[0] != 0) {
              FUN_1400020a8();
            }
            cVar3 = (**(code **)(*plVar6 + 8))(plVar6,local_98);
            if (cVar3 != '\0') {
              *(undefined1 *)(param_1 + 0x43) = 1;
            }
            if (local_98[0] != 0) {
              FUN_1400020a8();
            }
            uVar8 = (ulonglong)local_c8;
            iVar5 = local_d0;
          }
          uVar11 = (ulonglong)(int)uVar8;
          do {
            uVar11 = uVar11 + 1;
            local_c8 = (uint)uVar11;
            uVar8 = uVar11 & 0xffffffff;
            if ((longlong)iVar5 <= (longlong)uVar11) break;
          } while (*(longlong *)(local_d8.QuadPart + uVar11 * 8) == 0);
        } while ((char)param_1[0x43] == '\0');
      }
      if ((undefined2 *)local_d8.QuadPart != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      FUN_149016c18(&local_d8,param_1 + 0x36,param_1 + 0x38,param_1 + 0x3a);
      FUN_149019f62(local_68,uStack_60 & 0xffffffff,&local_d8);
      FUN_149016d08(&local_d8);
      if ((longlong)(int)uStack_60 != 0) {
        lVar14 = (longlong)(int)uStack_60 << 4;
        lVar12 = local_68;
        do {
          (**(code **)(*param_1 + 0x380))(param_1,lVar12);
          lVar12 = lVar12 + 0x10;
          lVar14 = lVar14 + -0x10;
        } while (lVar14 != 0);
      }
      local_88 = &PTR_FUN_14ba68890;
      FUN_1447a1747(local_78,uStack_70 & 0xffffffff);
      if (local_78 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      FUN_1447a1747(local_68,uStack_60 & 0xffffffff);
      uVar8 = (ulonglong)local_e4;
      if (local_68 != 0) {
        FUN_1400020a8();
      }
    }
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 1443ea3c4 FUN_1443ea3c4 body=1720 status=ok
// SIG undefined FUN_1443ea3c4(void)

ulonglong FUN_1443ea3c4(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  LARGE_INTEGER LVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined2 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_128 [32];
  wchar_t *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  wchar_t *local_f0;
  wchar_t *local_e8;
  code *local_e0;
  undefined1 *local_d8;
  LARGE_INTEGER *local_d0;
  code *local_c8;
  code *local_c0;
  longlong local_b0;
  LARGE_INTEGER local_a8;
  undefined8 uStack_a0;
  longlong *local_98;
  undefined8 uStack_90;
  longlong local_88 [2];
  LARGE_INTEGER local_78;
  LARGE_INTEGER local_70;
  LARGE_INTEGER local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (DAT_14c948aa0 != (longlong *)0x0) {
    local_70.QuadPart = 0;
    local_68.QuadPart = local_68.QuadPart & 0xffffffff00000000;
    (**(code **)(*DAT_14c948aa0 + 0x60))();
  }
  local_88[0] = 0;
  local_88[1] = 0;
  QueryPerformanceCounter(&local_70);
  FUN_140056680(&local_70,&DAT_149e065c6);
  uStack_100 = 1;
  local_108 = (wchar_t *)CONCAT44(local_108._4_4_,1);
  FUN_1407cdbc6(param_2,&local_70,0,local_88);
  if ((code *)local_70.QuadPart != (code *)0x0) {
    FUN_1400020a8();
  }
  lVar5 = FUN_149014fe8(param_1,local_88);
  if (*(int *)(param_1 + 0x1e8) == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = *(undefined2 **)(param_1 + 0x1e0);
  }
  local_108 = (wchar_t *)CONCAT44(local_108._4_4_,1);
  FUN_140807d8e(param_2,&local_98,puVar8,L"/Game");
  FUN_140056680(&local_a8,L"../../../");
  FUN_1401c7f3e(&local_70,&local_a8,&local_98);
  uVar4 = FUN_140fa61d5(lVar5,&local_70,1);
  uVar7 = (ulonglong)uVar4;
  if ((code *)local_70.QuadPart != (code *)0x0) {
    FUN_1400020a8();
  }
  if ((longlong **)local_a8.QuadPart != (longlong **)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((char)uVar4 != '\0') {
    local_98 = (longlong *)0x0;
    uStack_90 = 0;
    if (DAT_14c949118 == 0) {
      local_78.QuadPart = (LONGLONG)FUN_140631fbe;
      lVar9 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c949118 = lVar9;
      FUN_1446f470e(&local_a8,L"Class",1);
      local_d8 = &LAB_146891e90;
      local_e0 = (code *)&LAB_146273097;
      local_f0 = L"Engine";
      local_e8 = (wchar_t *)CONCAT44(local_e8._4_4_,199);
      local_f8 = 0x20;
      uStack_100 = 0x10000000;
      local_108._0_4_ = 8;
      local_d0 = &local_78;
      FUN_14574b4b2(lVar9);
      DAT_14c949118 = lVar9;
      if (DAT_14c951858 == 0) {
        local_70.QuadPart = (LONGLONG)FUN_1449e2820;
        local_c0 = FUN_14081d0ea;
        local_c8 = FUN_14081d0ea;
        local_d8 = &LAB_1468c5283;
        local_e0 = FUN_142809da0;
        local_e8 = L"Engine";
        local_f0 = (wchar_t *)0x400000000;
        local_f8 = CONCAT44(local_f8._4_4_,0x10000000);
        uStack_100 = 8;
        local_108._0_4_ = 0x50;
        local_d0 = &local_70;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar10 = DAT_14c951858;
      lVar9 = DAT_14c949118;
      uVar6 = FUN_1449e2fb2();
      local_108 = L"Class";
      FUN_14574b446(uVar6,lVar9,lVar10,L"/Script/CoreUObject");
    }
    local_70.QuadPart = (LONGLONG)FUN_142840874;
    local_108 = (wchar_t *)((ulonglong)local_108 & 0xffffffff00000000);
    local_a8.QuadPart = (LONGLONG)&local_98;
    local_68.QuadPart = (LONGLONG)&local_a8;
    FUN_140245161(DAT_14c949118,&local_70,1,0);
    if ((longlong)(int)uStack_90 != 0) {
      plVar1 = local_98 + (int)uStack_90;
      plVar11 = local_98;
      do {
        lVar9 = *plVar11;
        if (lVar9 != 0) {
          if (DAT_14c949118 == 0) {
            local_b0 = CONCAT71(local_b0._1_7_,(char)uVar7);
            local_78.QuadPart = (LONGLONG)FUN_140631fbe;
            lVar10 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
            DAT_14c949118 = lVar10;
            FUN_1446f470e(&local_a8,L"Class",1);
            local_d0 = &local_78;
            local_d8 = &LAB_146891e90;
            local_e0 = (code *)&LAB_146273097;
            local_f0 = L"Engine";
            local_e8 = (wchar_t *)CONCAT44(local_e8._4_4_,199);
            local_f8 = 0x20;
            uStack_100 = 0x10000000;
            local_108._0_4_ = 8;
            FUN_14574b4b2(lVar10);
            DAT_14c949118 = lVar10;
            if (DAT_14c951858 == 0) {
              local_70.QuadPart = (LONGLONG)FUN_1449e2820;
              local_c0 = FUN_14081d0ea;
              local_c8 = FUN_14081d0ea;
              local_d8 = &LAB_1468c5283;
              local_e0 = FUN_142809da0;
              local_e8 = L"Engine";
              local_f0 = (wchar_t *)0x400000000;
              local_f8 = CONCAT44(local_f8._4_4_,0x10000000);
              uStack_100 = 8;
              local_108._0_4_ = 0x50;
              local_d0 = &local_70;
              FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
            }
            lVar2 = DAT_14c951858;
            lVar10 = DAT_14c949118;
            uVar6 = FUN_1449e2fb2();
            local_108 = L"Class";
            FUN_14574b446(uVar6,lVar10,lVar2,L"/Script/CoreUObject");
            uVar7 = CONCAT71((int7)((ulonglong)&local_a8 >> 8),(undefined1)local_b0);
          }
          if ((((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) == DAT_14c949118 + 0x30)) &&
              ((*(byte *)(lVar9 + 0xd4) & 4) != 0)) &&
             (*(longlong *)(lVar9 + 0xe8) == *(longlong *)(lVar5 + 0x54))) {
            local_a8.QuadPart = 0;
            uStack_a0 = 0;
            local_68.QuadPart = (LONGLONG)&local_78;
            local_70.QuadPart = (LONGLONG)FUN_142840874;
            local_108 = (wchar_t *)((ulonglong)local_108 & 0xffffffff00000000);
            local_78.QuadPart = (LONGLONG)&local_a8;
            FUN_140245161(lVar9,&local_70,1,0);
            LVar3 = local_a8;
            lVar9 = (longlong)(int)uStack_a0;
            if (lVar9 != 0) {
              uVar7 = uVar7 & 0xffffffff;
              lVar10 = 0;
              local_b0 = lVar5;
              do {
                lVar5 = *(longlong *)(LVar3.QuadPart + lVar10);
                if ((lVar5 != 0) && ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0)) {
                  local_108 = (wchar_t *)0x0;
                  uStack_100 = 0;
                  uStack_fc = 0;
                  FUN_1400033ba(lVar5,0,0);
                }
                lVar10 = lVar10 + 8;
                lVar5 = local_b0;
              } while (lVar9 * 8 != lVar10);
            }
            if ((longlong **)local_a8.QuadPart != (longlong **)0x0) {
              FUN_1400020a8(local_a8.QuadPart);
            }
          }
        }
        plVar11 = plVar11 + 1;
      } while (plVar11 != plVar1);
    }
    if (local_98 != (longlong *)0x0) {
      FUN_1400020a8(local_98);
    }
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 1443eaa7e FUN_1443eaa7e body=9752 status=ok
// SIG undefined FUN_1443eaa7e(void)

/* WARNING: Removing unreachable block (ram,0x0001443eb7db) */
/* WARNING: Removing unreachable block (ram,0x0001443eb3f5) */

void FUN_1443eaa7e(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 ***pppuVar5;
  void *pvVar6;
  undefined8 *puVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  uint *puVar15;
  uint uVar16;
  int iVar17;
  longlong *plVar18;
  int iVar19;
  longlong lVar20;
  undefined2 *puVar21;
  wchar_t *pwVar22;
  longlong lVar23;
  int iVar24;
  undefined *puVar25;
  undefined8 ****ppppuVar26;
  int iVar27;
  longlong *plVar28;
  undefined2 *puVar29;
  ushort uVar30;
  longlong lVar31;
  longlong *plVar32;
  ulonglong uVar33;
  uint *puVar34;
  ushort uVar35;
  longlong lVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  bool bVar39;
  undefined4 uVar40;
  double dVar41;
  float fVar42;
  float fVar43;
  undefined1 auStack_328 [32];
  undefined8 ***local_308;
  undefined8 ***local_300;
  undefined2 *local_2f8;
  code *local_2f0;
  char local_2db;
  char local_2da;
  char local_2d9;
  longlong *local_2d8;
  longlong *local_2d0;
  longlong *local_2c8;
  longlong *local_2c0;
  undefined8 *local_2b8;
  undefined8 *local_2b0;
  longlong *local_2a8;
  undefined8 *local_2a0;
  uint local_298;
  int local_294;
  longlong *local_290;
  uint *local_288;
  ulonglong local_280;
  longlong local_278;
  int local_270;
  longlong local_268;
  int local_260;
  undefined8 ***local_258;
  int local_250;
  undefined8 local_248;
  int local_240;
  undefined8 *local_238;
  ulonglong uStack_230;
  longlong local_228;
  int local_220;
  longlong local_218;
  undefined8 uStack_210;
  longlong local_208 [2];
  undefined8 **local_1f8;
  undefined8 uStack_1f0;
  void *local_1e8;
  ulonglong uStack_1e0;
  undefined8 ***local_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  void *local_1c0;
  int local_1b8;
  undefined4 local_1b4;
  undefined8 ***local_1b0;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 ***local_198;
  int local_190;
  undefined4 local_18c;
  undefined8 local_188;
  float local_180;
  undefined4 uStack_17c;
  longlong *local_178;
  longlong *local_170;
  undefined8 **local_168;
  int local_160;
  longlong local_158 [2];
  uint local_148 [4];
  uint *local_138;
  int local_130;
  undefined8 local_12c;
  undefined4 local_124;
  longlong local_118;
  undefined4 local_110;
  longlong local_108;
  ulonglong uStack_100;
  uint local_f8 [4];
  uint *local_e8;
  int local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  longlong local_b8 [5];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_328;
  *(undefined4 *)(param_1 + 0x56) = 0;
  local_2c8 = param_1;
  if (*(int *)((longlong)param_1 + 0x2b4) < 0) {
    FUN_140c6998c(param_1 + 0x55,0);
  }
  plVar12 = (longlong *)FUN_140d6a126(DAT_14c872ce0,L"AssetHotfix",0,&DAT_14c872af8);
  if (plVar12 != (longlong *)0x0) {
    if (DAT_14c948aa0 != (longlong *)0x0) {
      local_108 = 0;
      uStack_100 = uStack_100 & 0xffffffff00000000;
      (**(code **)(*DAT_14c948aa0 + 0x60))();
    }
    local_b8[0] = FUN_145859962();
    local_b8[1] = FUN_1410a549c();
    local_b8[2] = FUN_1400d1e14();
    local_b8[3] = FUN_14120ab20();
    local_b8[4] = FUN_14118b628();
    local_e8 = (uint *)0x0;
    local_e0 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_dc = 0xffffffff00000080;
    local_d4 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_138 = (uint *)0x0;
    local_130 = 0;
    local_158[0] = 0;
    local_158[1] = 0;
    local_12c = 0xffffffff00000080;
    local_124 = 0;
    local_118 = 0;
    uVar33 = 0;
    local_110 = 0;
    iVar11 = (int)plVar12[5];
    uVar37 = 1;
    iVar24 = 0;
    iVar27 = 0;
    if (iVar11 != 0) {
      puVar15 = (uint *)plVar12[4];
      if ((uint *)plVar12[4] == (uint *)0x0) {
        puVar15 = (uint *)(plVar12 + 2);
      }
      uVar10 = *puVar15;
      if (uVar10 == 0) {
        iVar24 = iVar11 + 0x1e;
        if (-1 < iVar11 + -1) {
          iVar24 = iVar11 + -1;
        }
        uVar33 = 0;
        uVar37 = (ulonglong)(uint)(iVar24 >> 5);
        if (iVar24 >> 5 < 1) {
          uVar37 = uVar33;
        }
        iVar24 = 0;
        do {
          if (uVar37 == uVar33) goto LAB_1443ecea5;
          iVar24 = iVar24 + 0x20;
          uVar10 = puVar15[uVar33 + 1];
          uVar33 = uVar33 + 1;
        } while (uVar10 == 0);
      }
      else {
        uVar33 = 0;
      }
      uVar37 = (ulonglong)(-uVar10 & uVar10);
      uVar38 = uVar37 * 2 + 1;
      lVar31 = 0x3f;
      if (uVar38 != 0) {
        for (; uVar38 >> lVar31 == 0; lVar31 = lVar31 + -1) {
        }
      }
      iVar27 = (iVar24 - ((uint)lVar31 ^ 0x3f)) + 0x3e;
      if (iVar11 <= iVar27) {
        iVar27 = iVar11;
      }
    }
    if (iVar27 < iVar11) {
      local_2d9 = DAT_14c7649b4;
      local_290 = param_1 + 0x55;
      local_288 = (uint *)(plVar12 + 2);
      uVar10 = 0xffffffff;
      do {
        local_298 = uVar10;
        local_294 = iVar24;
        local_280 = uVar33;
        if (DAT_14c99f930 != (longlong *)0x0) {
          (**(code **)(*DAT_14c99f930 + 8))();
        }
        local_208[0] = 0;
        local_208[1] = 0;
        lVar31 = 0;
        lVar36 = 0;
        do {
          lVar23 = *(longlong *)((longlong)local_b8 + lVar36);
          if (lVar23 != 0) {
            local_1f8 = *(undefined8 ***)(lVar23 + 0x18);
            FUN_1400021e4(&local_1f8,&local_1d8);
            iVar11 = (int)uStack_1d0;
            iVar9 = ((int)uStack_1d0 == 0) + 1;
            local_1b0 = local_1d8;
            local_1d8 = (undefined8 ****)0x0;
            iVar24 = uStack_1d0._4_4_;
            local_1a8 = uStack_1d0;
            uStack_1d0 = (undefined8 ***)0x0;
            iVar19 = iVar9 + iVar11;
            if (iVar19 < iVar11) {
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4(iVar9);
            }
            if (iVar19 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4(iVar19);
            }
            if (iVar24 < iVar19) {
              FUN_1446f8c06(&local_1b0);
            }
            FUN_1400020e8(&local_1b0,&DAT_149e001d8,1);
            plVar13 = (longlong *)(ulonglong)((uint)local_1a8 - 1);
            if ((uint)local_1a8 == 0) {
              plVar13 = (longlong *)0x0;
            }
            FUN_1400020e8(local_208,local_1b0,plVar13);
            if ((undefined8 ****)local_1b0 != (undefined8 ****)0x0) {
              FUN_1400020a8();
            }
            if ((undefined8 ****)local_1d8 != (undefined8 ****)0x0) {
              FUN_1400020a8();
            }
            lVar20 = (longlong)iVar27 * 0x40;
            if ((*(int *)(*plVar12 + lVar20) == (int)*(undefined8 *)(lVar23 + 0x18)) &&
               (*(int *)(*plVar12 + lVar20 + 4) ==
                (int)((ulonglong)*(undefined8 *)(lVar23 + 0x18) >> 0x20))) {
              lVar31 = lVar23;
            }
          }
          lVar36 = lVar36 + 8;
        } while (lVar36 != 0x28);
        if (lVar31 != 0) {
          local_218 = 0;
          uStack_210 = 0;
          lVar36 = *plVar12;
          lVar23 = (longlong)iVar27 * 0x40;
          uVar33 = (ulonglong)(*(int *)(lVar36 + 0x28 + lVar23) - 2U < 0x7fffffff) * 0x10;
          puVar21 = &DAT_149dfb77a;
          if (*(int *)(uVar33 + 0x18 + lVar36 + lVar23) != 0) {
            puVar21 = *(undefined2 **)(lVar36 + lVar23 + 8 + (uVar33 | 8));
          }
          FUN_140056680(&local_228,puVar21);
          if (1 < local_220) {
            local_238 = (undefined8 *)0x0;
            uStack_230 = 0;
            FUN_1403de9f2(&local_228,&local_238,&DAT_149e06120);
            puVar4 = local_238;
            if ((((int)uStack_230 == 5) || ((int)uStack_230 == 3)) &&
               (cVar8 = (**(code **)(*local_2c8 + 0x3f8))(local_2c8,local_238), cVar8 != '\0')) {
              local_248 = *puVar4;
              local_240 = *(int *)(puVar4 + 1) + -1;
              if (*(int *)(puVar4 + 1) == 0) {
                local_240 = 0;
              }
              cVar8 = FUN_14022f3b8(&local_248,1,0);
              if (cVar8 == '\0') {
LAB_1443eb07c:
                cVar8 = (**(code **)(*local_2c8 + 0x398))(local_2c8,puVar4);
                if (cVar8 == '\0') goto LAB_1443eb60e;
                local_1d8 = (undefined8 ****)0x0;
                uStack_1d0 = (undefined8 ***)0x0;
                FUN_1401031ac(lVar31,0,&local_1d8);
                ppppuVar26 = (undefined8 ****)&DAT_149dfb77a;
                if ((int)uStack_1d0 != 0) {
                  ppppuVar26 = (undefined8 ****)local_1d8;
                }
                puVar21 = &DAT_149dfb77a;
                if (*(int *)(puVar4 + 1) != 0) {
                  puVar21 = (undefined2 *)*puVar4;
                }
                FUN_140002266(&local_1b0,
                              L"Couldn\'t find or load asset \'%s\' (class \'%s\').  This asset will not be patched.  Double check that your asset type and path string is correct."
                              ,puVar21,ppppuVar26);
                if ((undefined8 ****)local_1d8 != (undefined8 ****)0x0) {
                  FUN_1400020a8();
                }
                uVar33 = uStack_210;
                lVar31 = (longlong)(int)(uint)uStack_210;
                uVar10 = (uint)uStack_210 + 1;
                uStack_210 = CONCAT44(uStack_210._4_4_,uVar10);
                if (uStack_210._4_4_ < uVar10) {
                  FUN_1447a1bd6(&local_218,uVar33 & 0xffffffff);
                }
                pppuVar5 = local_1b0;
                lVar31 = lVar31 * 0x10;
                puVar4 = (undefined8 *)(local_218 + lVar31);
                *(undefined8 *)(local_218 + lVar31) = 0;
                lVar36 = (longlong)(int)(uint)local_1a8;
                *(uint *)(local_218 + 8 + lVar31) = (uint)local_1a8;
                if (lVar36 == 0) {
                  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
                  ppppuVar26 = (undefined8 ****)local_1b0;
                }
                else {
                  FUN_1446dd670(puVar4,(ulonglong)local_1a8 & 0xffffffff,0);
                  memcpy((void *)*puVar4,pppuVar5,lVar36 * 2);
                  ppppuVar26 = (undefined8 ****)local_1b0;
                }
              }
              else {
                puVar21 = &DAT_149dfb77a;
                if (*(int *)(puVar4 + 1) != 0) {
                  puVar21 = (undefined2 *)*puVar4;
                }
                local_2f0 = (code *)0x0;
                local_300 = (undefined8 ****)0x0;
                local_2f8 = (undefined2 *)CONCAT71(local_2f8._1_7_,1);
                local_308 = (undefined8 ***)((ulonglong)local_308 & 0xffffffff00000000);
                plVar13 = (longlong *)FUN_1412ecd05(lVar31,0,puVar21);
                if (plVar13 == (longlong *)0x0) goto LAB_1443eb07c;
                FUN_140056680(&local_258,L"RowUpdate");
                FUN_140056680(&local_268,L"TableUpdate");
                FUN_140056680(&local_278,L"CurveUpdate");
                puVar7 = local_238;
                iVar11 = *(int *)(puVar4 + 3);
                if (iVar11 != local_250) {
                  bVar39 = local_250 + iVar11 == 1;
LAB_1443eb31b:
                  if (!(bool)(bVar39 & (int)uStack_230 == 5)) goto LAB_1443eb1b6;
LAB_1443eb335:
                  if (*(int *)(puVar4 + 1) < 2) {
                    pwVar22 = L"The table\'s path is empty. We cannot continue the hotfix.";
LAB_1443eb431:
                    FUN_140056680(&local_1b0,pwVar22);
                    uVar33 = uStack_210;
                    lVar31 = (longlong)(int)(uint)uStack_210;
                    uVar10 = (uint)uStack_210 + 1;
                    uStack_210 = CONCAT44(uStack_210._4_4_,uVar10);
                    if (uStack_210._4_4_ < uVar10) {
                      FUN_1447a1bd6(&local_218,uVar33 & 0xffffffff);
                    }
                    lVar31 = lVar31 * 0x10;
                    *(undefined8 *)(local_218 + lVar31) = 0;
                    *(undefined8 ****)(local_218 + lVar31) = local_1b0;
                    local_1b0 = (undefined8 ****)0x0;
                    *(uint *)(local_218 + 8 + lVar31) = (uint)local_1a8;
                    *(undefined4 *)(local_218 + 0xc + lVar31) = local_1a8._4_4_;
                    local_1a8 = (undefined8 ***)0x0;
LAB_1443eb4a2:
                    if ((undefined8 ****)local_1b0 != (undefined8 ****)0x0) {
                      FUN_1400020a8();
                    }
                  }
                  else {
                    if (*(int *)(local_238 + 5) < 2) {
                      pwVar22 = L"The row name is empty. We cannot continue the hotfix.";
                      goto LAB_1443eb431;
                    }
                    if (*(int *)(local_238 + 7) < 2) {
                      pwVar22 = L"The column name is empty. We cannot continue the hotfix.";
                      goto LAB_1443eb431;
                    }
                    if (*(int *)(local_238 + 9) < 2) {
                      pwVar22 = L"The new value is empty. We cannot continue the hotfix.";
                      goto LAB_1443eb431;
                    }
                    lVar31 = FUN_1410a549c();
                    if ((*(int *)(plVar13[2] + 0x38) < *(int *)(lVar31 + 0x38)) ||
                       (local_170 = plVar13,
                       *(longlong *)
                        (*(longlong *)(plVar13[2] + 0x30) + (longlong)*(int *)(lVar31 + 0x38) * 8)
                       != lVar31 + 0x30)) {
                      local_170 = (longlong *)0x0;
                    }
                    local_2d8 = local_170;
                    lVar31 = FUN_145859962();
                    if ((*(int *)(plVar13[2] + 0x38) < *(int *)(lVar31 + 0x38)) ||
                       (plVar14 = plVar13,
                       *(longlong *)
                        (*(longlong *)(plVar13[2] + 0x30) + (longlong)*(int *)(lVar31 + 0x38) * 8)
                       != lVar31 + 0x30)) {
                      plVar14 = (longlong *)0x0;
                    }
                    local_178 = plVar14;
                    lVar31 = FUN_1400d1e14();
                    if (*(int *)(plVar13[2] + 0x38) < *(int *)(lVar31 + 0x38)) {
                      plVar32 = (longlong *)0x0;
                    }
                    else {
                      plVar32 = plVar13;
                      if (*(longlong *)
                           (*(longlong *)(plVar13[2] + 0x30) + (longlong)*(int *)(lVar31 + 0x38) * 8
                           ) != lVar31 + 0x30) {
                        plVar32 = (longlong *)0x0;
                      }
                    }
                    puVar1 = puVar7 + 8;
                    puVar2 = puVar7 + 6;
                    puVar3 = puVar7 + 4;
                    if (local_2d8 == (longlong *)0x0) {
                      if (plVar14 == (longlong *)0x0) {
                        if (plVar32 == (longlong *)0x0) {
                          pwVar22 = L"The Asset isn\'t a Data Table, Curve Table, or Curve Float.";
                          goto LAB_1443eb431;
                        }
                        local_2b8 = puVar3;
                        local_2b0 = puVar2;
                        cVar8 = FUN_1405b43cc();
                        if (cVar8 == '\0') goto LAB_1443ebbe9;
                        pwVar22 = L"";
                        if (*(int *)(puVar7 + 7) != 0) {
                          pwVar22 = (wchar_t *)puVar7[6];
                        }
                        dVar41 = _wtof(pwVar22);
                        plVar14 = plVar32 + 6;
                        iVar11 = (**(code **)(plVar32[6] + 0xb8))(plVar14,(float)dVar41,0x38d1b717);
                        if (iVar11 < 0) {
                          uVar33 = 0;
                        }
                        else {
                          FUN_140da68da(plVar14,&local_1d8,iVar11);
                          uVar33 = (ulonglong)local_1d8 & 0xffffffff;
                        }
                        local_2d8 = plVar14;
                        cVar8 = FUN_14045d218(plVar14);
                        if (cVar8 == '\0') {
                          puVar21 = &DAT_149dfb77a;
                          if (*(int *)(puVar7 + 7) != 0) {
                            puVar21 = (undefined2 *)puVar7[6];
                          }
                          pwVar22 = L"The column name %s isn\'t a valid key into the curve float.";
                        }
                        else {
                          cVar8 = FUN_1405b43cc(puVar1);
                          if (cVar8 != '\0') {
                            uVar40 = FUN_147a4157a(local_2d8,uVar33);
                            local_1b0 = (undefined8 ***)CONCAT44(local_1b0._4_4_,uVar40);
                            pwVar22 = L"";
                            if (*(int *)(puVar7 + 9) != 0) {
                              pwVar22 = (wchar_t *)puVar7[8];
                            }
                            dVar41 = _wtof(pwVar22);
                            local_1f8 = (undefined8 **)CONCAT44(local_1f8._4_4_,(float)dVar41);
                            FUN_147a41522(local_2d8,uVar33,(float)dVar41,1);
                            local_300 = &local_1f8;
                            local_308 = &local_1b0;
                            (**(code **)(*local_2c8 + 0x3c0))(local_2c8,plVar13,local_2b8,local_2b0)
                            ;
                            goto LAB_1443eb4b4;
                          }
                          puVar21 = &DAT_149dfb77a;
                          if (*(int *)(puVar7 + 9) != 0) {
                            puVar21 = (undefined2 *)puVar7[8];
                          }
                          pwVar22 = L"The new value %s is not a number when it should be.";
                        }
LAB_1443ebf45:
                        FUN_140002266(&local_1b0,pwVar22,puVar21);
                      }
                      else {
                        local_2b8 = puVar3;
                        local_2b0 = puVar2;
                        local_2a0 = puVar1;
                        cVar8 = FUN_1405b43cc();
                        if (cVar8 == '\0') {
LAB_1443ebbe9:
                          puVar21 = &DAT_149dfb77a;
                          if (*(int *)(puVar7 + 7) != 0) {
                            puVar21 = (undefined2 *)puVar7[6];
                          }
                          pwVar22 = L"The column name %s is not a number when it should be.";
                          goto LAB_1443ebf45;
                        }
                        if ((*(int *)(*(longlong *)
                                       ((longlong)ThreadLocalStoragePointer +
                                       (ulonglong)_tls_index * 8) + 0x110) < DAT_14cbf6038) &&
                           (FUN_144b3d300(&DAT_14cbf6038), DAT_14cbf6038 == -1)) {
                          FUN_140056680(&DAT_14cbf6028,
                                        L"UOnlineHotfixManager::PatchAssetsFromIniFiles");
                          atexit((_func_5014 *)&LAB_1443ed68e);
                          _Init_thread_footer(&DAT_14cbf6038);
                        }
                        puVar21 = &DAT_149dfb77a;
                        if (*(int *)(puVar7 + 5) != 0) {
                          puVar21 = (undefined2 *)puVar7[4];
                        }
                        FUN_1446f470e(&local_1d8,puVar21,1);
                        plVar14 = (longlong *)FUN_1434a778a(plVar14,local_1d8,&DAT_14cbf6028,1);
                        if (plVar14 == (longlong *)0x0) {
                          puVar21 = &DAT_149dfb77a;
                          if (*(int *)(puVar7 + 5) != 0) {
                            puVar21 = (undefined2 *)puVar7[4];
                          }
                          pwVar22 = L"The curve table row for row name %s was not found.";
                          goto LAB_1443ebf45;
                        }
                        pwVar22 = L"";
                        if (*(int *)(puVar7 + 7) != 0) {
                          pwVar22 = (wchar_t *)puVar7[6];
                        }
                        dVar41 = _wtof(pwVar22);
                        fVar42 = (float)dVar41;
                        iVar11 = (**(code **)(*plVar14 + 0xb8))(plVar14,fVar42,0x38d1b717);
                        if (iVar11 < 0) {
                          uVar40 = 0;
                        }
                        else {
                          FUN_140da68da(plVar14,&local_1f8,iVar11);
                          uVar40 = SUB84(local_1f8,0);
                        }
                        local_2d8 = (longlong *)CONCAT44(local_2d8._4_4_,uVar40);
                        FUN_14045d218(plVar14);
                        cVar8 = FUN_1405b43cc(local_2a0);
                        if (cVar8 == '\0') {
                          puVar21 = &DAT_149dfb77a;
                          if (*(int *)(puVar7 + 9) != 0) {
                            puVar21 = (undefined2 *)puVar7[8];
                          }
                          FUN_140002266(&local_1b0,
                                        L"The new value %s at key %f is not a number when it should be."
                                        ,puVar21,(double)fVar42);
                        }
                        else {
                          uVar40 = (**(code **)(*plVar14 + 0x48))
                                             (plVar14,(ulonglong)local_2d8 & 0xffffffff);
                          local_168 = (undefined8 **)CONCAT44(local_168._4_4_,uVar40);
                          pwVar22 = L"";
                          if (*(int *)(puVar7 + 9) != 0) {
                            pwVar22 = (wchar_t *)puVar7[8];
                          }
                          dVar41 = _wtof(pwVar22);
                          fVar43 = (float)dVar41;
                          local_300 = (undefined8 ***)CONCAT44(local_300._4_4_,0x38d1b717);
                          local_308 = (undefined8 ***)((ulonglong)local_308 & 0xffffffffffffff00);
                          local_180 = fVar43;
                          (**(code **)(*plVar14 + 0x38))(plVar14,&local_1b0,fVar42,fVar43);
                          cVar8 = FUN_14045d218(plVar14,(ulonglong)local_1b0 & 0xffffffff);
                          if (cVar8 != '\0') {
                            local_300 = (undefined8 ***)&local_180;
                            local_308 = &local_168;
                            (**(code **)(*local_2c8 + 0x3c0))(local_2c8,plVar13,local_2b8,local_2b0)
                            ;
                            if (local_2d9 == '\0') {
                              FUN_1447f69b6(local_178 + 0x10);
                            }
                            else {
                              FUN_14901ac6c(local_158,&local_1b0,&local_178);
                            }
                            goto LAB_1443eb4b4;
                          }
                          local_308 = (undefined8 ***)&DAT_149dfb77a;
                          if (*(int *)(puVar7 + 7) != 0) {
                            local_308 = (undefined8 ***)puVar7[6];
                          }
                          puVar21 = &DAT_149dfb77a;
                          if (*(int *)(puVar7 + 5) != 0) {
                            puVar21 = (undefined2 *)puVar7[4];
                          }
                          puVar29 = &DAT_149dfb77a;
                          if (*(int *)(puVar4 + 1) != 0) {
                            puVar29 = (undefined2 *)*puVar4;
                          }
                          local_300 = (undefined8 ***)(double)fVar43;
                          FUN_140002266(&local_1b0,
                                        L"Unable to update Curve table %s row %s column %s with value %.2f."
                                        ,puVar29,puVar21);
                        }
                      }
                      uVar33 = uStack_210;
                      lVar31 = (longlong)(int)(uint)uStack_210;
                      uVar10 = (uint)uStack_210 + 1;
                      uStack_210 = CONCAT44(uStack_210._4_4_,uVar10);
                      if (uStack_210._4_4_ < uVar10) {
                        FUN_1447a1bd6(&local_218,uVar33 & 0xffffffff);
                      }
                      pppuVar5 = local_1b0;
                      lVar31 = lVar31 * 0x10;
                      puVar4 = (undefined8 *)(local_218 + lVar31);
                      *(undefined8 *)(local_218 + lVar31) = 0;
                      lVar36 = (longlong)(int)(uint)local_1a8;
                      *(uint *)(local_218 + 8 + lVar31) = (uint)local_1a8;
                      if (lVar36 == 0) {
                        *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
                      }
                      else {
                        FUN_1446dd670(puVar4,(ulonglong)local_1a8 & 0xffffffff,0);
                        memcpy((void *)*puVar4,pppuVar5,lVar36 * 2);
                      }
                      goto LAB_1443eb4a2;
                    }
                    puVar21 = &DAT_149dfb77a;
                    if (*(int *)(puVar7 + 7) != 0) {
                      puVar21 = (undefined2 *)puVar7[6];
                    }
                    lVar31 = local_2d8[5];
                    local_2d0 = plVar13;
                    local_2b8 = puVar3;
                    local_2b0 = puVar2;
                    local_2a0 = puVar1;
                    FUN_1446f470e(&local_180,puVar21,1);
                    local_2c0 = (longlong *)FUN_1468c842b(CONCAT44(uStack_17c,local_180),lVar31);
                    if (local_2c0 == (longlong *)0x0) {
                      puVar21 = &DAT_149dfb77a;
                      if (*(int *)(puVar7 + 7) != 0) {
                        puVar21 = (undefined2 *)puVar7[6];
                      }
                      pwVar22 = 
                      L"Couldn\'t find the data table property named %s. Check the spelling.";
LAB_1443ebdde:
                      FUN_140002266(&local_1b0,pwVar22,puVar21);
                      uVar33 = uStack_210;
                      lVar31 = (longlong)(int)(uint)uStack_210;
                      uVar10 = (uint)uStack_210 + 1;
                      uStack_210 = CONCAT44(uStack_210._4_4_,uVar10);
                      if (uStack_210._4_4_ < uVar10) {
                        FUN_1447a1bd6(&local_218,uVar33 & 0xffffffff);
                      }
                      pppuVar5 = local_1b0;
                      lVar31 = lVar31 * 0x10;
                      puVar4 = (undefined8 *)(local_218 + lVar31);
                      *(undefined8 *)(local_218 + lVar31) = 0;
                      lVar36 = (longlong)(int)(uint)local_1a8;
                      *(uint *)(local_218 + 8 + lVar31) = (uint)local_1a8;
                      if (lVar36 == 0) {
                        *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
                      }
                      else {
                        FUN_1446dd670(puVar4,(ulonglong)local_1a8 & 0xffffffff,0);
                        memcpy((void *)*puVar4,pppuVar5,lVar36 * 2);
                      }
LAB_1443ebff5:
                      plVar13 = local_2d0;
                      if ((undefined8 ****)local_1b0 != (undefined8 ****)0x0) {
                        FUN_1400020a8();
                        plVar13 = local_2d0;
                      }
                    }
                    else {
                      puVar25 = (undefined *)local_2c0[1];
                      local_2a8 = local_2c0;
                      if ((*(int *)(*(longlong *)
                                     ((longlong)ThreadLocalStoragePointer +
                                     (ulonglong)_tls_index * 8) + 0x110) < DAT_14c952108) &&
                         (FUN_144b3d300(&DAT_14c952108), DAT_14c952108 == -1)) {
                        local_2f8 = (undefined2 *)FUN_1446ddbd2();
                        local_2f0 = FUN_1468e0f50;
                        local_300 = (undefined8 ****)0x0;
                        local_308 = (undefined8 ****)0x1008001;
                        FUN_14000176a(&DAT_14c9520b8,L"FNumericProperty",0x1000000,0);
                        atexit(FUN_142816f26);
                        _Init_thread_footer(&DAT_14c952108);
                      }
                      if (DAT_14c9520c0 == 0) {
                        bVar39 = puVar25 != (undefined *)0x0;
                        if (puVar25 != &DAT_14c9520b8 && bVar39) {
                          do {
                            puVar25 = *(undefined **)(puVar25 + 0x30);
                            bVar39 = puVar25 != (undefined *)0x0;
                            if (puVar25 == &DAT_14c9520b8) break;
                          } while (puVar25 != (undefined *)0x0);
                        }
                      }
                      else {
                        bVar39 = (*(ulonglong *)(puVar25 + 0x18) & DAT_14c9520c0) != 0;
                      }
                      if (!bVar39) {
                        local_2c0 = (longlong *)0x0;
                      }
                      puVar25 = (undefined *)local_2a8[1];
                      if ((*(int *)(*(longlong *)
                                     ((longlong)ThreadLocalStoragePointer +
                                     (ulonglong)_tls_index * 8) + 0x110) < DAT_14c963e88) &&
                         (FUN_144b3d300(&DAT_14c963e88), DAT_14c963e88 == -1)) {
                        local_2f8 = (undefined2 *)FUN_1446ddbd2();
                        local_2f0 = FUN_140dafe7a;
                        local_300 = (undefined8 ****)0x0;
                        local_308 = (undefined8 ****)0xc001;
                        FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
                        atexit(FUN_142829758);
                        _Init_thread_footer(&DAT_14c963e88);
                      }
                      if (DAT_14c963e40 == 0) {
                        local_2da = puVar25 != (undefined *)0x0;
                        if (puVar25 != &DAT_14c963e38 && (bool)local_2da) {
                          do {
                            puVar25 = *(undefined **)(puVar25 + 0x30);
                            local_2da = puVar25 != (undefined *)0x0;
                            if (puVar25 == &DAT_14c963e38) break;
                          } while (puVar25 != (undefined *)0x0);
                        }
                      }
                      else {
                        local_2da = (*(ulonglong *)(puVar25 + 0x18) & DAT_14c963e40) != 0;
                      }
                      puVar25 = (undefined *)local_2a8[1];
                      if ((*(int *)(*(longlong *)
                                     ((longlong)ThreadLocalStoragePointer +
                                     (ulonglong)_tls_index * 8) + 0x110) < DAT_14c9520b0) &&
                         (FUN_144b3d300(&DAT_14c9520b0), DAT_14c9520b0 == -1)) {
                        local_2f8 = (undefined2 *)FUN_1446ddbd2();
                        local_2f0 = FUN_1409e12a0;
                        local_300 = (undefined8 ****)0x0;
                        local_308 = (undefined8 ****)0xa001;
                        FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
                        atexit(FUN_142816ef9);
                        _Init_thread_footer(&DAT_14c9520b0);
                      }
                      if (DAT_14c952068 == 0) {
                        local_2db = puVar25 != (undefined *)0x0;
                        if (puVar25 != &DAT_14c952060 && (bool)local_2db) {
                          do {
                            puVar25 = *(undefined **)(puVar25 + 0x30);
                            local_2db = puVar25 != (undefined *)0x0;
                            if (puVar25 == &DAT_14c952060) break;
                          } while (puVar25 != (undefined *)0x0);
                        }
                      }
                      else {
                        local_2db = (*(ulonglong *)(puVar25 + 0x18) & DAT_14c952068) != 0;
                      }
                      puVar25 = (undefined *)local_2a8[1];
                      if ((*(int *)(*(longlong *)
                                     ((longlong)ThreadLocalStoragePointer +
                                     (ulonglong)_tls_index * 8) + 0x110) < DAT_14c9529b0) &&
                         (FUN_144b3d300(&DAT_14c9529b0), DAT_14c9529b0 == -1)) {
                        FUN_1446f4b16();
                        local_2f0 = FUN_140f17fc6;
                        local_2f8 = (undefined2 *)&DAT_14c951c78;
                        local_300 = (undefined8 ****)0x0;
                        local_308 = (undefined8 ****)0x24008001;
                        FUN_14000176a(&DAT_14c952960,L"FSoftObjectProperty",0x20000000,0);
                        atexit(FUN_142818859);
                        _Init_thread_footer(&DAT_14c9529b0);
                      }
                      if (DAT_14c952968 == 0) {
                        bVar39 = puVar25 != (undefined *)0x0;
                        if (puVar25 != &DAT_14c952960 && bVar39) {
                          do {
                            puVar25 = *(undefined **)(puVar25 + 0x30);
                            bVar39 = puVar25 != (undefined *)0x0;
                            if (puVar25 == &DAT_14c952960) break;
                          } while (puVar25 != (undefined *)0x0);
                        }
                      }
                      else {
                        bVar39 = (*(ulonglong *)(puVar25 + 0x18) & DAT_14c952968) != 0;
                      }
                      if ((*(int *)(*(longlong *)
                                     ((longlong)ThreadLocalStoragePointer +
                                     (ulonglong)_tls_index * 8) + 0x110) < DAT_14cbf6020) &&
                         (FUN_144b3d300(&DAT_14cbf6020), DAT_14cbf6020 == -1)) {
                        FUN_140056680(&DAT_14cbf6010,
                                      L"UOnlineHotfixManager::PatchAssetsFromIniFiles");
                        atexit((_func_5014 *)&LAB_1443ed67d);
                        _Init_thread_footer(&DAT_14cbf6020);
                      }
                      puVar21 = &DAT_149dfb77a;
                      if (*(int *)(puVar7 + 5) != 0) {
                        puVar21 = (undefined2 *)puVar7[4];
                      }
                      FUN_1446f470e(&local_188,puVar21,1);
                      lVar31 = FUN_145bddc86(local_2d8,local_188);
                      plVar13 = local_2a8;
                      if (lVar31 == 0) {
                        puVar21 = &DAT_149dfb77a;
                        if (*(int *)(puVar7 + 5) != 0) {
                          puVar21 = (undefined2 *)puVar7[4];
                        }
                        pwVar22 = L"The data table row %s was not found.";
                        goto LAB_1443ebdde;
                      }
                      ppppuVar26 = (undefined8 ****)(*(int *)((longlong)local_2a8 + 0x44) + lVar31);
                      if (ppppuVar26 == (undefined8 ****)0x0) {
                        puVar21 = &DAT_149dfb77a;
                        if (*(int *)(puVar7 + 5) != 0) {
                          puVar21 = (undefined2 *)puVar7[4];
                        }
                        pwVar22 = L"The data table row data for row %s was not found.";
                        goto LAB_1443ebdde;
                      }
                      if (local_2c0 == (longlong *)0x0) {
                        if (local_2da != '\0') {
                          local_1b0 = (undefined8 ****)0x0;
                          uVar10 = *(uint *)(ppppuVar26 + 1);
                          pppuVar5 = *ppppuVar26;
                          local_1a8 = (undefined8 ***)CONCAT44(local_1a8._4_4_,uVar10);
                          if ((longlong)(int)uVar10 == 0) {
                            local_1a8 = (undefined8 ***)(ulonglong)uVar10;
                          }
                          else {
                            FUN_1446dd670(&local_1b0,uVar10,0);
                            memcpy(local_1b0,pppuVar5,(longlong)(int)uVar10 * 2);
                          }
                          local_1d8 = (undefined8 ****)0x0;
                          uVar10 = *(uint *)(puVar7 + 9);
                          pvVar6 = (void *)puVar7[8];
                          uStack_1d0 = (undefined8 ***)CONCAT44(uStack_1d0._4_4_,uVar10);
                          if ((longlong)(int)uVar10 == 0) {
                            uStack_1d0 = (undefined8 ***)(ulonglong)uVar10;
                          }
                          else {
                            FUN_1446dd670(&local_1d8,uVar10,0);
                            memcpy(local_1d8,pvVar6,(longlong)(int)uVar10 * 2);
                          }
                          pppuVar5 = local_1d8;
                          if (ppppuVar26 != &local_1d8) {
                            iVar11 = (int)uStack_1d0;
                            lVar31 = (longlong)(int)uStack_1d0;
                            *(int *)(ppppuVar26 + 1) = (int)uStack_1d0;
                            if ((int)uStack_1d0 == 0 && *(int *)((longlong)ppppuVar26 + 0xc) == 0) {
                              *(undefined4 *)((longlong)ppppuVar26 + 0xc) = 0;
                            }
                            else {
                              FUN_1446dd670(ppppuVar26,(ulonglong)uStack_1d0 & 0xffffffff);
                              if (iVar11 != 0) {
                                memcpy(*ppppuVar26,pppuVar5,lVar31 * 2);
                              }
                            }
                          }
                          local_300 = &local_1d8;
                          local_308 = &local_1b0;
                          (**(code **)(*local_2c8 + 0x3c8))(local_2c8,local_2d0,local_2b8,local_2b0)
                          ;
LAB_1443ec8ab:
                          ppppuVar26 = (undefined8 ****)local_1b0;
                          if ((undefined8 ****)local_1d8 != (undefined8 ****)0x0) {
                            FUN_1400020a8();
                            ppppuVar26 = (undefined8 ****)local_1b0;
                          }
LAB_1443ec8c5:
                          if (ppppuVar26 != (undefined8 ****)0x0) {
                            FUN_1400020a8();
                          }
                          goto LAB_1443ec8cf;
                        }
                        if (local_2db != '\0') {
                          local_1b0 = *ppppuVar26;
                          puVar21 = &DAT_149dfb77a;
                          if (*(int *)(puVar7 + 9) != 0) {
                            puVar21 = (undefined2 *)puVar7[8];
                          }
                          FUN_1446f470e(&local_1d8,puVar21,1);
                          *ppppuVar26 = local_1d8;
                          local_308 = &local_1b0;
                          local_300 = &local_1d8;
                          (**(code **)(*local_2c8 + 0x3d0))(local_2c8,local_2d0,local_2b8,local_2b0)
                          ;
                          goto LAB_1443ec8cf;
                        }
                        if (bVar39) {
                          local_1b0 = *ppppuVar26;
                          local_1a8 = ppppuVar26[1];
                          uStack_1a0 = *(undefined4 *)(ppppuVar26 + 2);
                          uStack_19c = *(undefined4 *)((longlong)ppppuVar26 + 0x14);
                          local_198 = (undefined8 ****)0x0;
                          local_190 = *(int *)(ppppuVar26 + 4);
                          lVar31 = (longlong)local_190;
                          pppuVar5 = ppppuVar26[3];
                          if (lVar31 == 0) {
                            local_18c = 0;
                          }
                          else {
                            FUN_1446dd670(&local_198,local_190,0);
                            memcpy(local_198,pppuVar5,lVar31 * 2);
                          }
                          local_1f8 = (undefined8 ***)0x0;
                          uStack_1f0 = 0;
                          local_1e8 = (void *)0x0;
                          uStack_1e0 = 0;
                          local_168 = (undefined8 **)puVar7[8];
                          local_160 = *(int *)(puVar7 + 9) + -1;
                          if (*(int *)(puVar7 + 9) == 0) {
                            local_160 = 0;
                          }
                          FUN_14475bf92(&local_1f8,&local_168);
                          pvVar6 = local_1e8;
                          local_1d8 = (undefined8 ****)0x0;
                          uStack_1d0 = (undefined8 ***)local_1f8;
                          uStack_1c8 = (undefined4)uStack_1f0;
                          uStack_1c4 = uStack_1f0._4_4_;
                          local_1c0 = (void *)0x0;
                          lVar31 = (longlong)(int)uStack_1e0;
                          local_1b8 = (int)uStack_1e0;
                          if (lVar31 == 0) {
                            local_1b4 = 0;
                          }
                          else {
                            FUN_1446dd670(&local_1c0,uStack_1e0 & 0xffffffff,0);
                            memcpy(local_1c0,pvVar6,lVar31 * 2);
                          }
                          if (local_1e8 != (void *)0x0) {
                            FUN_1400020a8(local_1e8);
                          }
                          iVar11 = local_1b8;
                          pvVar6 = local_1c0;
                          *ppppuVar26 = local_1d8;
                          *(int *)(ppppuVar26 + 1) = (int)uStack_1d0;
                          *(int *)((longlong)ppppuVar26 + 0xc) = uStack_1d0._4_4_;
                          *(undefined4 *)(ppppuVar26 + 2) = uStack_1c8;
                          *(undefined4 *)((longlong)ppppuVar26 + 0x14) = uStack_1c4;
                          if (ppppuVar26 != &local_1d8) {
                            lVar31 = (longlong)local_1b8;
                            *(int *)(ppppuVar26 + 4) = local_1b8;
                            if (local_1b8 == 0 && *(int *)((longlong)ppppuVar26 + 0x24) == 0) {
                              *(undefined4 *)((longlong)ppppuVar26 + 0x24) = 0;
                            }
                            else {
                              FUN_1446dd670(ppppuVar26 + 3,local_1b8);
                              if (iVar11 != 0) {
                                memcpy(ppppuVar26[3],pvVar6,lVar31 * 2);
                              }
                            }
                          }
                          local_300 = &local_1d8;
                          local_308 = &local_1b0;
                          (**(code **)(*local_2c8 + 0x3e0))(local_2c8,local_2d0,local_2b8,local_2b0)
                          ;
                          ppppuVar26 = (undefined8 ****)local_198;
                          if (local_1c0 != (void *)0x0) {
                            FUN_1400020a8();
                            ppppuVar26 = (undefined8 ****)local_198;
                          }
                          goto LAB_1443ec8c5;
                        }
                        FUN_147a55288(&local_1b0,local_2a8,lVar31,2);
                        FUN_1434b9eec(&local_1d8,local_2a0,plVar13,lVar31);
                        if ((int)uStack_1d0 < 2) goto LAB_1443ec8ab;
                        local_2f8 = &DAT_149dfb77a;
                        if (*(int *)(puVar7 + 9) != 0) {
                          local_2f8 = (undefined2 *)puVar7[8];
                        }
                        local_300 = (undefined8 ***)&DAT_149dfb77a;
                        if ((uint)local_1a8 != 0) {
                          local_300 = local_1b0;
                        }
                        local_308 = (undefined8 ***)&DAT_149dfb77a;
                        if (*(int *)(puVar7 + 7) != 0) {
                          local_308 = (undefined8 ***)puVar7[6];
                        }
                        puVar21 = &DAT_149dfb77a;
                        if (*(int *)(puVar7 + 5) != 0) {
                          puVar21 = (undefined2 *)puVar7[4];
                        }
                        puVar29 = &DAT_149dfb77a;
                        if (*(int *)(puVar4 + 1) != 0) {
                          puVar29 = (undefined2 *)*puVar4;
                        }
                        FUN_140002266(&local_1f8,
                                      L"Failed to update data table %s row %s column %s from %s to %s."
                                      ,puVar29,puVar21);
                        lVar31 = (longlong)(int)(uint)uStack_210;
                        uVar10 = (uint)uStack_210 + 1;
                        if (uStack_210._4_4_ < uVar10) {
                          uVar33 = uStack_210 & 0xffffffff;
                          uStack_210._0_4_ = uVar10;
                          FUN_1447a1bd6(&local_218,uVar33);
                          uVar10 = (uint)uStack_210;
                        }
                        uStack_210._0_4_ = uVar10;
                        uVar10 = (uint)uStack_210;
                        lVar31 = lVar31 * 0x10;
                        *(undefined8 *)(local_218 + lVar31) = 0;
                        *(undefined8 ***)(local_218 + lVar31) = local_1f8;
                        local_1f8 = (undefined8 ***)0x0;
                        *(undefined4 *)(local_218 + 8 + lVar31) = (undefined4)uStack_1f0;
                        *(undefined4 *)(local_218 + 0xc + lVar31) = uStack_1f0._4_4_;
                        uStack_1f0 = 0;
                        lVar31 = (longlong)(int)(uint)uStack_210;
                        uStack_210._0_4_ = (uint)uStack_210 + 1;
                        if (uStack_210._4_4_ < (uint)uStack_210) {
                          FUN_1447a1bd6(&local_218,uVar10);
                        }
                        lVar31 = lVar31 * 0x10;
                        *(undefined8 *)(local_218 + lVar31) = 0;
                        *(undefined8 ****)(local_218 + lVar31) = local_1d8;
                        local_1d8 = (undefined8 ****)0x0;
                        *(int *)(local_218 + 8 + lVar31) = (int)uStack_1d0;
                        *(int *)(local_218 + 0xc + lVar31) = uStack_1d0._4_4_;
                        uStack_1d0 = (undefined8 ***)0x0;
                        if ((undefined8 ***)local_1f8 != (undefined8 ***)0x0) {
                          FUN_1400020a8();
                        }
                        if ((undefined8 ****)local_1d8 != (undefined8 ****)0x0) {
                          FUN_1400020a8();
                        }
                        goto LAB_1443ebff5;
                      }
                      cVar8 = FUN_1405b43cc(local_2a0);
                      if (cVar8 == '\0') {
                        puVar21 = &DAT_149dfb77a;
                        if (*(int *)(puVar7 + 9) != 0) {
                          puVar21 = (undefined2 *)puVar7[8];
                        }
                        pwVar22 = L"The new value %s is not a number when it should be.";
                        goto LAB_1443ebdde;
                      }
                      cVar8 = (**(code **)(*local_2c0 + 0x1e8))();
                      if (cVar8 == '\0') {
                        local_1b0 = (undefined8 ***)
                                    (**(code **)(*local_2c0 + 0x240))(local_2c0,ppppuVar26);
                        pwVar22 = L"";
                        if (*(int *)(puVar7 + 9) != 0) {
                          pwVar22 = (wchar_t *)puVar7[8];
                        }
                        local_1d8 = (undefined8 ***)wcstod(pwVar22,(wchar_t **)0x0);
                        (**(code **)(*local_2c0 + 0x208))(local_2c0,ppppuVar26,(int)local_1d8);
                        local_300 = &local_1d8;
                        local_308 = &local_1b0;
                        (**(code **)(*local_2c8 + 0x3b8))(local_2c8,local_2d0,local_2b8,local_2b0);
                      }
                      else {
                        local_1b0 = (undefined8 ***)
                                    (**(code **)(*local_2c0 + 0x220))(local_2c0,ppppuVar26);
                        pwVar22 = L"";
                        if (*(int *)(puVar7 + 9) != 0) {
                          pwVar22 = (wchar_t *)puVar7[8];
                        }
                        iVar11 = _wtoi(pwVar22);
                        local_1d8 = (undefined8 ***)(longlong)iVar11;
                        (**(code **)(*local_2c0 + 0x1f8))(local_2c0,ppppuVar26);
                        local_300 = &local_1d8;
                        local_308 = &local_1b0;
                        (**(code **)(*local_2c8 + 0x3b0))(local_2c8,local_2d0,local_2b8,local_2b0);
                      }
LAB_1443ec8cf:
                      FUN_14901a780(&local_108,&local_1b0,&local_170);
                      plVar13 = local_2d0;
                    }
                  }
LAB_1443eb4b4:
                  bVar39 = (uint)uStack_210 == 0;
LAB_1443eb57e:
                  if (local_278 != 0) {
                    FUN_1400020a8();
                  }
                  if (local_268 != 0) {
                    FUN_1400020a8();
                  }
                  if ((undefined8 ****)local_258 != (undefined8 ****)0x0) {
                    FUN_1400020a8();
                  }
                  if (bVar39) {
                    if (DAT_14c950c29 == '\x01') {
                      FUN_1456cec3c(plVar13);
                    }
                    iVar11 = (int)local_2c8[0x56];
                    *(uint *)(local_2c8 + 0x56) = iVar11 + 1U;
                    if (*(uint *)((longlong)local_2c8 + 0x2b4) < iVar11 + 1U) {
                      FUN_140845902(local_290,iVar11);
                    }
                    *(longlong **)(*local_290 + (longlong)iVar11 * 8) = plVar13;
                    if (DAT_14c950c29 == '\x01') {
                      FUN_1456cec3c(plVar13);
                    }
                  }
                  goto LAB_1443eb60e;
                }
                if (1 < iVar11) {
                  lVar31 = 0;
                  while( true ) {
                    uVar30 = *(ushort *)(puVar4[2] + lVar31);
                    uVar10 = (uint)uVar30;
                    uVar35 = *(ushort *)((longlong)local_258 + lVar31);
                    uVar16 = (uint)uVar35;
                    if (uVar30 != uVar35) {
                      if ((uVar35 | uVar30) < 0x80) {
                        uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar30];
                        uVar16 = (uint)(byte)(&DAT_149e05da0)[uVar35];
                        if ((&DAT_149e05da0)[uVar30] == (&DAT_149e05da0)[uVar35])
                        goto LAB_1443eb049;
                      }
                      iVar24 = uVar10 - uVar16;
                      goto LAB_1443eb319;
                    }
                    if (uVar30 == 0) break;
LAB_1443eb049:
                    lVar31 = lVar31 + 2;
                  }
                  iVar24 = 0;
LAB_1443eb319:
                  bVar39 = iVar24 == 0;
                  goto LAB_1443eb31b;
                }
                if ((int)uStack_230 == 5) goto LAB_1443eb335;
LAB_1443eb1b6:
                if (iVar11 == local_260) {
                  if (1 < iVar11) {
                    lVar31 = 0;
                    while( true ) {
                      uVar30 = *(ushort *)(puVar4[2] + lVar31);
                      uVar33 = (ulonglong)uVar30;
                      uVar35 = *(ushort *)(local_268 + lVar31);
                      if (uVar30 != uVar35) break;
                      if (uVar30 == 0) goto LAB_1443eb29d;
LAB_1443eb1f3:
                      lVar31 = lVar31 + 2;
                    }
                    if ((uVar35 | uVar30) < 0x80) {
                      uVar30 = (ushort)(byte)(&DAT_149e05da0)[uVar33];
                      uVar38 = (ulonglong)uVar35;
                      uVar35 = (ushort)(byte)(&DAT_149e05da0)[uVar38];
                      if ((&DAT_149e05da0)[uVar33] == (&DAT_149e05da0)[uVar38]) goto LAB_1443eb1f3;
                    }
                    if (uVar30 != uVar35) goto LAB_1443eb22e;
                  }
LAB_1443eb29d:
                  if ((int)uStack_230 == 3) {
LAB_1443eb2a6:
                    local_1d8 = (undefined8 ****)0x0;
                    uStack_1d0 = (undefined8 ***)0x0;
                    local_1f8 = (undefined8 **)((ulonglong)local_1f8 & 0xffffffff00000000);
                    iVar11 = *(int *)(local_238 + 5);
                    iVar24 = iVar11 + -1;
                    if (iVar11 == 0) {
                      iVar24 = 0;
                    }
                    puVar21 = &DAT_149dfb77a;
                    if (iVar11 != 0) {
                      puVar21 = (undefined2 *)local_238[4];
                    }
                    cVar8 = FUN_140c9761d(puVar21,&local_1d8,&local_1f8);
                    if ((cVar8 == '\0') || ((int)local_1f8 != iVar24)) {
                      FUN_140056680(&local_1b0,
                                    L"Json data wasn\'t able to be parsed as a quoted string. Check that we have opening and closing quotes around the json data."
                                   );
                      uVar33 = uStack_210;
                      lVar31 = (longlong)(int)(uint)uStack_210;
                      uVar10 = (uint)uStack_210 + 1;
                      uStack_210 = CONCAT44(uStack_210._4_4_,uVar10);
                      if (uStack_210._4_4_ < uVar10) {
                        FUN_1447a1bd6(&local_218,uVar33 & 0xffffffff);
                      }
                      lVar31 = lVar31 * 0x10;
                      *(undefined8 *)(local_218 + lVar31) = 0;
                      *(undefined8 ****)(local_218 + lVar31) = local_1b0;
                      *(uint *)(local_218 + 8 + lVar31) = (uint)local_1a8;
                      *(undefined4 *)(local_218 + 0xc + lVar31) = local_1a8._4_4_;
                      local_1a8 = (undefined8 ***)0x0;
                      local_1b0 = (undefined8 ****)0x0;
                      bVar39 = false;
                    }
                    else {
                      if (*(int *)(puVar4 + 1) < 2) {
                        pwVar22 = L"The table\'s path is empty. We cannot continue the hotfix.";
LAB_1443eb4dd:
                        FUN_140056680(&local_1b0,pwVar22);
                        uVar33 = uStack_210;
                        lVar31 = (longlong)(int)(uint)uStack_210;
                        uVar10 = (uint)uStack_210 + 1;
                        uStack_210 = CONCAT44(uStack_210._4_4_,uVar10);
                        if (uStack_210._4_4_ < uVar10) {
                          FUN_1447a1bd6(&local_218,uVar33 & 0xffffffff);
                        }
                        lVar31 = lVar31 * 0x10;
                        *(undefined8 *)(local_218 + lVar31) = 0;
                        *(undefined8 ****)(local_218 + lVar31) = local_1b0;
                        local_1b0 = (undefined8 ****)0x0;
                        *(uint *)(local_218 + 8 + lVar31) = (uint)local_1a8;
                        *(undefined4 *)(local_218 + 0xc + lVar31) = local_1a8._4_4_;
                        local_1a8 = (undefined8 ***)0x0;
LAB_1443eb54e:
                        if ((undefined8 ****)local_1b0 != (undefined8 ****)0x0) {
                          FUN_1400020a8();
                        }
                      }
                      else {
                        if ((int)uStack_1d0 < 2) {
                          pwVar22 = L"The JSON data is empty. We cannot continue the hotfix.";
                          goto LAB_1443eb4dd;
                        }
                        lVar31 = FUN_145859962();
                        if ((*(int *)(plVar13[2] + 0x38) < *(int *)(lVar31 + 0x38)) ||
                           (plVar14 = plVar13,
                           *(longlong *)
                            (*(longlong *)(plVar13[2] + 0x30) +
                            (longlong)*(int *)(lVar31 + 0x38) * 8) != lVar31 + 0x30)) {
                          plVar14 = (longlong *)0x0;
                        }
                        lVar31 = FUN_1410a549c();
                        if (*(int *)(plVar13[2] + 0x38) < *(int *)(lVar31 + 0x38)) {
                          local_2d8 = (longlong *)0x0;
                        }
                        else {
                          local_2d8 = (longlong *)0x0;
                          if (*(longlong *)
                               (*(longlong *)(plVar13[2] + 0x30) +
                               (longlong)*(int *)(lVar31 + 0x38) * 8) == lVar31 + 0x30) {
                            local_2d8 = plVar13;
                          }
                        }
                        lVar31 = FUN_1400d1e14();
                        if (*(int *)(plVar13[2] + 0x38) < *(int *)(lVar31 + 0x38)) {
                          plVar32 = (longlong *)0x0;
                        }
                        else {
                          plVar32 = (longlong *)0x0;
                          if (*(longlong *)
                               (*(longlong *)(plVar13[2] + 0x30) +
                               (longlong)*(int *)(lVar31 + 0x38) * 8) == lVar31 + 0x30) {
                            plVar32 = plVar13;
                          }
                        }
                        lVar31 = FUN_14120ab20();
                        if (*(int *)(plVar13[2] + 0x38) < *(int *)(lVar31 + 0x38)) {
                          plVar28 = (longlong *)0x0;
                        }
                        else {
                          plVar28 = (longlong *)0x0;
                          if (*(longlong *)
                               (*(longlong *)(plVar13[2] + 0x30) +
                               (longlong)*(int *)(lVar31 + 0x38) * 8) == lVar31 + 0x30) {
                            plVar28 = plVar13;
                          }
                        }
                        lVar31 = FUN_14118b628();
                        if (*(int *)(plVar13[2] + 0x38) < *(int *)(lVar31 + 0x38)) {
                          plVar18 = (longlong *)0x0;
                        }
                        else {
                          plVar18 = plVar13;
                          if (*(longlong *)
                               (*(longlong *)(plVar13[2] + 0x30) +
                               (longlong)*(int *)(lVar31 + 0x38) * 8) != lVar31 + 0x30) {
                            plVar18 = (longlong *)0x0;
                          }
                        }
                        if (plVar14 != (longlong *)0x0) {
                          FUN_147a46260(plVar14,&local_1b0,&local_1d8,0);
LAB_1443ebace:
                          uVar33 = uStack_210;
                          lVar31 = (longlong)(int)(uint)local_1a8;
                          if (lVar31 != 0) {
                            iVar11 = (uint)uStack_210;
                            lVar36 = (longlong)(int)(uint)uStack_210;
                            uStack_210 = CONCAT44(uStack_210._4_4_,
                                                  (uint)uStack_210 + (uint)local_1a8);
                            if (uStack_210._4_4_ - iVar11 < (uint)local_1a8) {
                              FUN_1447a1bd6(&local_218,uVar33 & 0xffffffff);
                            }
                            memmove((void *)(lVar36 * 0x10 + local_218),local_1b0,lVar31 << 4);
                            local_1a8 = (undefined8 ***)((ulonglong)local_1a8 & 0xffffffff00000000);
                          }
                          FUN_1447a1747(local_1b0,0);
                          goto LAB_1443eb54e;
                        }
                        if (local_2d8 != (longlong *)0x0) {
                          FUN_147a49a54(local_2d8,&local_1b0,&local_1d8);
                          goto LAB_1443ebace;
                        }
                        if (plVar32 == (longlong *)0x0) {
                          if (plVar28 == (longlong *)0x0) {
                            if (plVar18 == (longlong *)0x0) {
                              pwVar22 = 
                              L"Unable to hotfix this asset type. Only DataTables, CurveTables and Curve data types are supported."
                              ;
                              goto LAB_1443eb4dd;
                            }
                            lVar31 = *plVar18;
                          }
                          else {
                            lVar31 = *plVar28;
                            plVar18 = plVar28;
                          }
                        }
                        else {
                          lVar31 = *plVar32;
                          plVar18 = plVar32;
                        }
                        (**(code **)(lVar31 + 0x2a0))(plVar18,&local_1d8,&local_218);
                      }
                      bVar39 = (uint)uStack_210 == 0;
                    }
                    if ((undefined8 ****)local_1d8 != (undefined8 ****)0x0) {
                      FUN_1400020a8();
                    }
                    goto LAB_1443eb57e;
                  }
                }
                else {
                  if (local_260 + iVar11 == 1) goto LAB_1443eb29d;
LAB_1443eb22e:
                  if (iVar11 == local_270) {
                    if (iVar11 < 2) goto LAB_1443eb29d;
                    lVar31 = 0;
                    while( true ) {
                      uVar30 = *(ushort *)(puVar4[2] + lVar31);
                      uVar10 = (uint)uVar30;
                      uVar35 = *(ushort *)(local_278 + lVar31);
                      uVar16 = (uint)uVar35;
                      if (uVar30 != uVar35) {
                        if ((uVar35 | uVar30) < 0x80) {
                          uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar30];
                          uVar16 = (uint)(byte)(&DAT_149e05da0)[uVar35];
                          if ((&DAT_149e05da0)[uVar30] == (&DAT_149e05da0)[uVar35])
                          goto LAB_1443eb26a;
                        }
                        iVar11 = uVar10 - uVar16;
                        goto LAB_1443eb740;
                      }
                      if (uVar30 == 0) break;
LAB_1443eb26a:
                      lVar31 = lVar31 + 2;
                    }
                    iVar11 = 0;
LAB_1443eb740:
                    bVar39 = iVar11 == 0;
                  }
                  else {
                    bVar39 = local_270 + iVar11 == 1;
                  }
                  if ((bool)(bVar39 & (int)uStack_230 == 3)) goto LAB_1443eb2a6;
                }
                FUN_140056680(&local_1b0,
                              L"Expected a hotfix type of RowUpdate with 5 tokens or TableUpdate/CurveUpdate with 3 tokens."
                             );
                uVar33 = uStack_210;
                lVar31 = (longlong)(int)(uint)uStack_210;
                uVar10 = (uint)uStack_210 + 1;
                uStack_210 = CONCAT44(uStack_210._4_4_,uVar10);
                if (uStack_210._4_4_ < uVar10) {
                  FUN_1447a1bd6(&local_218,uVar33 & 0xffffffff);
                }
                lVar31 = lVar31 * 0x10;
                *(undefined8 *)(local_218 + lVar31) = 0;
                *(undefined8 ****)(local_218 + lVar31) = local_1b0;
                *(uint *)(local_218 + 8 + lVar31) = (uint)local_1a8;
                *(undefined4 *)(local_218 + 0xc + lVar31) = local_1a8._4_4_;
                local_1a8 = (undefined8 ***)0x0;
                local_1b0 = (undefined8 ****)0x0;
                if (local_278 != 0) {
                  FUN_1400020a8();
                }
                ppppuVar26 = (undefined8 ****)local_258;
                if (local_268 != 0) {
                  FUN_1400020a8();
                  ppppuVar26 = (undefined8 ****)local_258;
                }
              }
              if (ppppuVar26 != (undefined8 ****)0x0) {
                FUN_1400020a8();
              }
            }
LAB_1443eb60e:
            FUN_1447a1747(local_238,uStack_230 & 0xffffffff);
            if (local_238 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
          }
          if (local_228 != 0) {
            FUN_1400020a8();
          }
          FUN_1447a1747(local_218,uStack_210 & 0xffffffff);
          if (local_218 != 0) {
            FUN_1400020a8();
          }
        }
        if (local_208[0] != 0) {
          FUN_1400020a8();
        }
        iVar11 = local_e0;
        uVar10 = local_298 & ~(uint)uVar37;
        puVar15 = (uint *)plVar12[4];
        if ((uint *)plVar12[4] == (uint *)0x0) {
          puVar15 = local_288;
        }
        iVar9 = (int)plVar12[5];
        iVar27 = (int)local_280;
        lVar31 = (longlong)iVar27;
        uVar16 = puVar15[lVar31] & uVar10;
        uVar33 = local_280;
        iVar24 = local_294;
        if (uVar16 == 0) {
          iVar19 = iVar9 + 0x1e;
          if (-1 < iVar9 + -1) {
            iVar19 = iVar9 + -1;
          }
          iVar19 = iVar19 >> 5;
          iVar17 = iVar19;
          if (iVar19 < iVar27) {
            iVar17 = iVar27;
          }
          if (iVar19 <= iVar27) break;
          lVar36 = 0;
          while( true ) {
            iVar24 = iVar24 + 0x20;
            uVar16 = puVar15[lVar31 + lVar36 + 1];
            if (uVar16 != 0) break;
            lVar36 = lVar36 + 1;
            if (iVar17 - lVar31 == lVar36) goto LAB_1443ecd33;
          }
          uVar33 = (ulonglong)(iVar27 + (int)lVar36 + 1);
          uVar10 = 0xffffffff;
        }
        uVar37 = (ulonglong)(-uVar16 & uVar16);
        uVar38 = uVar37 * 2 + 1;
        lVar31 = 0x3f;
        if (uVar38 != 0) {
          for (; uVar38 >> lVar31 == 0; lVar31 = lVar31 + -1) {
          }
        }
        iVar27 = (iVar24 - ((uint)lVar31 ^ 0x3f)) + 0x3e;
      } while (iVar27 < iVar9);
LAB_1443ecd33:
      if (local_e0 != 0) {
        puVar15 = local_e8;
        if (local_e8 == (uint *)0x0) {
          puVar15 = local_f8;
        }
        uVar10 = *puVar15;
        if (uVar10 == 0) {
          iVar24 = local_e0 + 0x1e;
          if (-1 < local_e0 + -1) {
            iVar24 = local_e0 + -1;
          }
          uVar33 = 0;
          uVar37 = (ulonglong)(uint)(iVar24 >> 5);
          if (iVar24 >> 5 < 1) {
            uVar37 = uVar33;
          }
          iVar24 = 0;
          do {
            if (uVar37 == uVar33) goto LAB_1443ecea5;
            iVar24 = iVar24 + 0x20;
            uVar10 = puVar15[uVar33 + 1];
            uVar33 = uVar33 + 1;
          } while (uVar10 == 0);
        }
        else {
          uVar33 = 0;
          iVar24 = 0;
        }
        uVar38 = (ulonglong)(-uVar10 & uVar10);
        uVar37 = uVar38 * 2 + 1;
        lVar31 = 0x3f;
        if (uVar37 != 0) {
          for (; uVar37 >> lVar31 == 0; lVar31 = lVar31 + -1) {
          }
        }
        iVar27 = (iVar24 - ((uint)lVar31 ^ 0x3f)) + 0x3e;
        if (iVar27 < local_e0) {
          uVar10 = 0xffffffff;
          puVar15 = local_e8;
          iVar9 = local_e0;
          do {
            lVar31 = *(longlong *)(local_108 + (longlong)iVar27 * 0x10);
            if (lVar31 != 0) {
              FUN_140c2e7e6(lVar31,0);
              puVar15 = local_e8;
              iVar9 = local_e0;
            }
            uVar10 = uVar10 & ~(uint)uVar38;
            puVar34 = puVar15;
            if (puVar15 == (uint *)0x0) {
              puVar34 = local_f8;
            }
            iVar27 = (int)uVar33;
            lVar31 = (longlong)iVar27;
            uVar16 = puVar34[lVar31] & uVar10;
            if (uVar16 == 0) {
              iVar19 = iVar9 + 0x1e;
              if (-1 < iVar9 + -1) {
                iVar19 = iVar9 + -1;
              }
              iVar19 = iVar19 >> 5;
              iVar24 = iVar24 + 0x20;
              iVar17 = iVar19;
              if (iVar19 < iVar27) {
                iVar17 = iVar27;
              }
              if (iVar27 < iVar19) {
                lVar36 = 0;
                do {
                  uVar16 = puVar34[lVar31 + lVar36 + 1];
                  if (uVar16 != 0) {
                    uVar33 = (ulonglong)(iVar27 + (int)lVar36 + 1);
                    uVar10 = 0xffffffff;
                    goto LAB_1443ece68;
                  }
                  iVar24 = iVar24 + 0x20;
                  lVar36 = lVar36 + 1;
                } while (iVar17 - lVar31 != lVar36);
                uVar10 = 0xffffffff;
                iVar27 = iVar17;
              }
              uVar33 = (ulonglong)(iVar27 + 1);
              iVar27 = iVar9;
            }
            else {
LAB_1443ece68:
              uVar38 = (ulonglong)(-uVar16 & uVar16);
              uVar37 = uVar38 * 2 + 1;
              lVar31 = 0x3f;
              if (uVar37 != 0) {
                for (; uVar37 >> lVar31 == 0; lVar31 = lVar31 + -1) {
                }
              }
              iVar27 = (iVar24 - ((uint)lVar31 ^ 0x3f)) + 0x3e;
              if (iVar9 <= iVar27) {
                iVar27 = iVar9;
              }
            }
          } while (iVar27 != iVar11);
        }
      }
    }
LAB_1443ecea5:
    iVar11 = local_130;
    if (local_130 == 0) {
      uVar38 = 1;
      uVar33 = 0;
      iVar24 = 0;
      iVar27 = 0;
    }
    else {
      puVar15 = local_138;
      if (local_138 == (uint *)0x0) {
        puVar15 = local_148;
      }
      uVar10 = *puVar15;
      if (uVar10 == 0) {
        iVar24 = local_130 + 0x1e;
        if (-1 < local_130 + -1) {
          iVar24 = local_130 + -1;
        }
        uVar33 = 0;
        uVar37 = (ulonglong)(uint)(iVar24 >> 5);
        if (iVar24 >> 5 < 1) {
          uVar37 = uVar33;
        }
        iVar24 = 0;
        do {
          if (uVar37 == uVar33) goto LAB_1443ecf31;
          iVar24 = iVar24 + 0x20;
          uVar10 = puVar15[uVar33 + 1];
          uVar33 = uVar33 + 1;
        } while (uVar10 == 0);
      }
      else {
        uVar33 = 0;
        iVar24 = 0;
      }
      uVar38 = (ulonglong)(-uVar10 & uVar10);
      uVar37 = uVar38 * 2 + 1;
      lVar31 = 0x3f;
      if (uVar37 != 0) {
        for (; uVar37 >> lVar31 == 0; lVar31 = lVar31 + -1) {
        }
      }
      iVar27 = (iVar24 - ((uint)lVar31 ^ 0x3f)) + 0x3e;
      if (local_130 <= iVar27) {
        iVar27 = local_130;
      }
    }
    if (iVar27 != local_130) {
      uVar10 = 0xffffffff;
      iVar9 = local_130;
      do {
        lVar31 = *(longlong *)(local_158[0] + (longlong)iVar27 * 0x10);
        if (lVar31 != 0) {
          FUN_1447f69b6(lVar31 + 0x80);
          iVar9 = local_130;
        }
        uVar10 = uVar10 & ~(uint)uVar38;
        puVar15 = local_138;
        if (local_138 == (uint *)0x0) {
          puVar15 = local_148;
        }
        iVar27 = (int)uVar33;
        lVar31 = (longlong)iVar27;
        uVar16 = puVar15[lVar31] & uVar10;
        if (uVar16 == 0) {
          iVar19 = iVar9 + 0x1e;
          if (-1 < iVar9 + -1) {
            iVar19 = iVar9 + -1;
          }
          iVar19 = iVar19 >> 5;
          iVar24 = iVar24 + 0x20;
          iVar17 = iVar19;
          if (iVar19 < iVar27) {
            iVar17 = iVar27;
          }
          if (iVar27 < iVar19) {
            lVar36 = 0;
            do {
              uVar16 = puVar15[lVar31 + lVar36 + 1];
              if (uVar16 != 0) {
                uVar33 = (ulonglong)(iVar27 + (int)lVar36 + 1);
                uVar10 = 0xffffffff;
                goto LAB_1443ed02e;
              }
              iVar24 = iVar24 + 0x20;
              lVar36 = lVar36 + 1;
            } while (iVar17 - lVar31 != lVar36);
            uVar10 = 0xffffffff;
            lVar31 = (longlong)iVar17;
          }
          uVar33 = lVar31 + 1U & 0xffffffff;
          iVar27 = iVar9;
        }
        else {
LAB_1443ed02e:
          uVar38 = (ulonglong)(-uVar16 & uVar16);
          uVar37 = uVar38 * 2 + 1;
          lVar31 = 0x3f;
          if (uVar37 != 0) {
            for (; uVar37 >> lVar31 == 0; lVar31 = lVar31 + -1) {
            }
          }
          iVar27 = (iVar24 - ((uint)lVar31 ^ 0x3f)) + 0x3e;
          if (iVar9 <= iVar27) {
            iVar27 = iVar9;
          }
        }
      } while (iVar27 != iVar11);
    }
LAB_1443ecf31:
    local_110 = 0;
    if (local_118 != 0) {
      FUN_1400020a8();
    }
    FUN_14901a6f2(local_158);
    local_c0 = 0;
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
    FUN_14901a664(&local_108);
  }
  if ((local_90 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443ed098 FUN_1443ed098 body=1508 status=ok
// SIG undefined FUN_1443ed098(void)

void FUN_1443ed098(longlong *param_1)

{
  longlong *plVar1;
  ushort uVar2;
  ushort uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined2 *puVar10;
  longlong *plVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_128 [32];
  wchar_t *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  wchar_t *local_f0;
  wchar_t *local_e8;
  code *local_e0;
  undefined1 *local_d8;
  LARGE_INTEGER *local_d0;
  code *local_c8;
  code *local_c0;
  longlong local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong *local_98;
  undefined8 uStack_90;
  longlong local_88;
  ulonglong uStack_80;
  LARGE_INTEGER local_78;
  LARGE_INTEGER local_70;
  LARGE_INTEGER *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar7 = (longlong)(int)param_1[0x2b];
  if (lVar7 == 0) goto LAB_1443ed4cf;
  if (DAT_14c948aa0 == (longlong *)0x0) {
LAB_1443ed510:
    uStack_80 = 0;
    local_88 = 0;
    lVar14 = param_1[0x2a];
    lVar7 = lVar7 * 0xa8 + lVar14;
    do {
      cVar4 = FUN_144a38768(lVar14 + 0x28,L".INI",4,1);
      if (cVar4 != '\0') {
        (**(code **)(*param_1 + 0x350))(param_1,&local_98,lVar14 + 0x28);
        FUN_149014eb0(&local_70,&local_98);
        if (local_98 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        iVar6 = (int)param_1[0x35];
        if (0 < iVar6) {
          lVar8 = 0;
          do {
            plVar1 = (longlong *)(param_1[0x34] + lVar8 * 0xf8);
            iVar12 = *(int *)(param_1[0x34] + 8 + lVar8 * 0xf8);
            if (iVar12 == (int)local_68) {
              if (1 < iVar12) {
                lVar13 = 0;
                while( true ) {
                  uVar2 = *(ushort *)(*plVar1 + lVar13);
                  uVar3 = *(ushort *)(local_70.QuadPart + lVar13);
                  if (uVar2 != uVar3) break;
                  if (uVar2 == 0) goto LAB_1443ed637;
LAB_1443ed600:
                  lVar13 = lVar13 + 2;
                }
                if ((uVar3 | uVar2) < 0x80) {
                  if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[(uint)uVar3]) goto LAB_1443ed600;
                  iVar12 = (uint)(byte)(&DAT_149e05da0)[uVar2] -
                           (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
                }
                else {
                  iVar12 = (uint)uVar2 - (uint)uVar3;
                }
                if (iVar12 != 0) goto LAB_1443ed64c;
              }
LAB_1443ed637:
              FUN_140b7fa3a(&local_88,plVar1 + 0x1d);
              iVar6 = (int)param_1[0x35];
            }
            else if ((int)local_68 + iVar12 == 1) goto LAB_1443ed637;
LAB_1443ed64c:
            lVar8 = lVar8 + 1;
          } while (lVar8 < iVar6);
        }
        if ((code *)local_70.QuadPart != (code *)0x0) {
          FUN_1400020a8();
        }
      }
      lVar14 = lVar14 + 0xa8;
    } while (lVar14 != lVar7);
  }
  else {
    local_70.QuadPart = 0;
    local_68 = (LARGE_INTEGER *)((ulonglong)local_68 & 0xffffffff00000000);
    (**(code **)(*DAT_14c948aa0 + 0x60))();
    lVar7 = (longlong)(int)param_1[0x2b];
    local_88 = 0;
    uStack_80 = 0;
    if (lVar7 != 0) goto LAB_1443ed510;
  }
  QueryPerformanceCounter(&local_70);
  if (0 < (int)uStack_80) {
    local_98 = (longlong *)0x0;
    uStack_90 = 0;
    FUN_140aa8146();
    if (0 < (int)uStack_80) {
      lVar14 = 8;
      lVar7 = 0;
      do {
        puVar10 = &DAT_149dfb77a;
        if (*(int *)(local_88 + lVar14) != 0) {
          puVar10 = *(undefined2 **)(local_88 + -8 + lVar14);
        }
        if (DAT_14c949118 == 0) {
          local_78.QuadPart = (LONGLONG)FUN_140631fbe;
          lVar8 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
          DAT_14c949118 = lVar8;
          FUN_1446f470e(&local_a8,L"Class",1);
          local_d0 = &local_78;
          local_d8 = &LAB_146891e90;
          local_e0 = (code *)&LAB_146273097;
          local_f0 = L"Engine";
          local_e8 = (wchar_t *)CONCAT44(local_e8._4_4_,199);
          local_f8 = 0x20;
          uStack_100 = CONCAT44(uStack_100._4_4_,0x10000000);
          local_108._0_4_ = 8;
          FUN_14574b4b2(lVar8);
          local_b0 = DAT_14c951858;
          DAT_14c949118 = lVar8;
          if (DAT_14c951858 == 0) {
            local_70.QuadPart = (LONGLONG)FUN_1449e2820;
            local_c0 = FUN_14081d0ea;
            local_c8 = FUN_14081d0ea;
            local_d8 = &LAB_1468c5283;
            local_e0 = FUN_142809da0;
            local_e8 = L"Engine";
            local_f0 = (wchar_t *)0x400000000;
            local_f8 = CONCAT44(local_f8._4_4_,0x10000000);
            uStack_100 = CONCAT44(uStack_100._4_4_,8);
            local_108._0_4_ = 0x50;
            local_d0 = &local_70;
            FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
          }
          lVar8 = DAT_14c949118;
          local_b0 = DAT_14c951858;
          uVar9 = FUN_1449e2fb2();
          local_108 = L"Class";
          FUN_14574b446(uVar9,lVar8,local_b0,L"/Script/CoreUObject");
        }
        lVar8 = FUN_140277b32(DAT_14c949118,0,puVar10,1);
        if (lVar8 != 0) {
          lVar13 = (longlong)(int)uStack_90;
          uVar5 = (int)uStack_90 + 1;
          uStack_90 = CONCAT44(uStack_90._4_4_,uVar5);
          if (uStack_90._4_4_ < uVar5) {
            FUN_140a0062e(&local_98);
          }
          local_98[lVar13] = lVar8;
        }
        lVar7 = lVar7 + 1;
        lVar14 = lVar14 + 0x10;
      } while (lVar7 < (int)uStack_80);
    }
    if ((longlong)(int)uStack_90 != 0) {
      plVar1 = local_98 + (int)uStack_90;
      plVar11 = local_98;
      do {
        if ((*(byte *)(*plVar11 + 0xd4) & 4) != 0) {
          local_a8 = 0;
          uStack_a0 = 0;
          local_78.QuadPart = (LONGLONG)&local_a8;
          local_70.QuadPart = (LONGLONG)FUN_142840874;
          local_108 = (wchar_t *)((ulonglong)local_108 & 0xffffffff00000000);
          local_68 = &local_78;
          FUN_140245161(*plVar11,&local_70,1,0);
          lVar7 = local_a8;
          lVar14 = (longlong)(int)uStack_a0;
          if (lVar14 != 0) {
            lVar8 = 0;
            do {
              lVar13 = *(longlong *)(lVar7 + lVar8);
              if ((lVar13 != 0) && ((*(uint *)(lVar13 + 8) >> 0x1e & 1) == 0)) {
                local_108 = (wchar_t *)0x0;
                uStack_100 = 0;
                FUN_1400033ba(lVar13,0,0);
              }
              lVar8 = lVar8 + 8;
            } while (lVar14 * 8 != lVar8);
          }
          if (local_a8 != 0) {
            FUN_1400020a8(local_a8);
          }
        }
        plVar11 = plVar11 + 1;
      } while (plVar11 != plVar1);
    }
    if (local_98 != (longlong *)0x0) {
      FUN_1400020a8(local_98);
    }
  }
  FUN_1447a1747(local_88,uStack_80 & 0xffffffff);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
LAB_1443ed4cf:
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443ed6a0 FUN_1443ed6a0 body=637 status=ok
// SIG undefined FUN_1443ed6a0(void)

void FUN_1443ed6a0(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined1 auStack_c8 [32];
  undefined2 local_a8;
  undefined8 local_a0;
  longlong local_90;
  longlong local_88 [2];
  longlong local_78 [2];
  longlong local_68 [2];
  undefined2 *local_58;
  undefined8 local_50;
  undefined2 *local_48;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = param_1[2];
  FUN_1400021e4(param_1[1],local_68);
  FUN_1400021e4(*param_1,local_88);
  FUN_1407ec8fc(local_78,param_2,local_88);
  FUN_1401c7f3e(&local_58,local_78,local_68);
  iVar8 = (int)local_50;
  iVar4 = ((int)local_50 == 0) + 4;
  local_48 = local_58;
  local_58 = (undefined2 *)0x0;
  local_40 = (int)local_50;
  iVar3 = local_50._4_4_;
  local_3c = local_50._4_4_;
  local_50 = 0;
  iVar6 = iVar4 + iVar8;
  if (iVar6 < iVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar4);
  }
  if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar6);
  }
  if (iVar3 < iVar6) {
    FUN_1446f8c06(&local_48);
  }
  FUN_1400020e8(&local_48,L".ini",4);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  puVar9 = local_48;
  if (local_40 == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_90,puVar9,1);
  if (*(int *)(lVar1 + 0x230) != *(int *)(lVar1 + 0x25c)) {
    uVar2 = (uint)((ulonglong)local_90 >> 0x10);
    uVar7 = (uint)local_90 & 0xffff;
    lVar5 = lVar1 + 0x260;
    if (*(longlong *)(lVar1 + 0x268) != 0) {
      lVar5 = *(longlong *)(lVar1 + 0x268);
    }
    iVar8 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(lVar1 + 0x270) - 1U &
                             (int)((ulonglong)local_90 >> 0x20) + ((uint)local_90 << 0x10 | uVar7) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar8 != -1) {
      do {
        lVar5 = *(longlong *)(lVar1 + 0x228) + (longlong)iVar8 * 0x20;
        if (*(longlong *)(*(longlong *)(lVar1 + 0x228) + (longlong)iVar8 * 0x20) == local_90) {
          if (lVar5 + 8 != 0 && lVar5 != 0) {
            local_a0 = *(undefined8 *)param_1[4];
            local_a8 = 0x50;
            FUN_146803ede(*(undefined8 *)param_1[3],&local_48,lVar5 + 8,*(undefined8 *)*param_1);
          }
          break;
        }
        iVar8 = *(int *)(lVar5 + 0x18);
      } while (iVar8 != -1);
    }
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443ed92b FUN_1443ed92b body=57 status=ok
// SIG undefined FUN_1443ed92b(void)

void FUN_1443ed92b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf6050 == 0) {
    uVar1 = FUN_145c5bed3();
    DAT_14cbf6050 = FUN_14171c317(FUN_146672bb8,uVar1,L"EUpdateState");
  }
  return;
}



// FUNCTION 1443ed964 FUN_1443ed964 body=57 status=ok
// SIG undefined FUN_1443ed964(void)

void FUN_1443ed964(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf6068 == 0) {
    uVar1 = FUN_145c5bed3();
    DAT_14cbf6068 = FUN_14171c317(FUN_146672be7,uVar1,L"EUpdateCompletionStatus");
  }
  return;
}



// FUNCTION 1443ed99d FUN_1443ed99d body=69 status=ok
// SIG undefined FUN_1443ed99d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1443ed99d(void)

{
  _DAT_14cbf60a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001443ed9df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf60b0,1);
  return;
}



// FUNCTION 1443ed9e2 FUN_1443ed9e2 body=813 status=ok
// SIG undefined FUN_1443ed9e2(void)

undefined8 FUN_1443ed9e2(longlong *param_1,longlong param_2)

{
  int *piVar1;
  byte bVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  undefined ***pppuVar6;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong *local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong *local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar4 = (**(code **)(*param_1 + 0x2b0))();
  if ((cVar4 == '\0') || (*(char *)(param_2 + 0x10) == '\0')) {
    *(undefined1 *)(param_1 + 0x16) = 1;
    (**(code **)(*param_1 + 0x328))(param_1,1);
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14ba69590;
    local_68[0] = (code *)&LAB_1443f006a;
    local_40 = param_1;
    FUN_1490158d0(param_1,local_78,local_68,0x3dcccccd);
    if (local_70 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_70 + 0x10))();
      }
    }
    if (local_68[0] != (code *)0x0) {
      pppuVar6 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar6 = &local_48;
      }
      (*(code *)(*pppuVar6)[2])();
    }
  }
  else if (((param_1[0x21] == 0) || (param_1[0x22] == 0)) || (*(int *)(param_1[0x22] + 8) < 1)) {
    uVar5 = 0;
    if ((*(byte *)((longlong)param_1 + 0xb2) < 7) &&
       ((0x43U >> (*(byte *)((longlong)param_1 + 0xb2) & 0x1f) & 1) != 0)) {
      *(undefined1 *)((longlong)param_1 + 0xb1) = *(undefined1 *)(param_2 + 0x11);
      *(undefined1 *)(param_1 + 0x3e) = *(undefined1 *)(param_2 + 0x12);
      (**(code **)(*param_1 + 0x328))(param_1,1);
      bVar2 = *(byte *)((longlong)param_1 + (ulonglong)*(byte *)((longlong)param_1 + 0xb1) + 0xf0);
      FUN_140212f8e(local_68);
      if (((bVar2 < 9) && ((0x1c1U >> (bVar2 & 0x1f) & 1) != 0)) ||
         (30.0 <= (double)((longlong)local_68[0] -
                          param_1[(ulonglong)*(byte *)((longlong)param_1 + 0xb1) + 0x1c]) /
                  10000000.0)) {
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14ba695b0;
        local_68[0] = FUN_1443f00c8;
        local_40 = param_1;
        FUN_1490158d0(param_1,&local_88,local_68,(int)param_1[0x11]);
        if (param_1 + 0x21 != &local_88) {
          param_1[0x21] = local_88;
          local_88 = 0;
          plVar3 = (longlong *)param_1[0x22];
          param_1[0x22] = (longlong)local_80;
          local_80 = (longlong *)0x0;
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar3 + 0x10))();
            }
          }
        }
        if (local_80 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_80 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_80 + 0x10))();
          }
        }
        if (local_68[0] != (code *)0x0) {
          pppuVar6 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar6 = &local_48;
          }
          (*(code *)(*pppuVar6)[2])();
        }
        uVar5 = 1;
      }
      else {
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14ba695d0;
        local_68[0] = FUN_1443f0154;
        local_40 = param_1;
        local_38 = bVar2;
        FUN_1490158d0(param_1,&local_88,local_68,*(undefined4 *)((longlong)param_1 + 0x8c));
        if (param_1 + 0x21 != &local_88) {
          param_1[0x21] = local_88;
          local_88 = 0;
          plVar3 = (longlong *)param_1[0x22];
          param_1[0x22] = (longlong)local_80;
          local_80 = (longlong *)0x0;
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar3 + 0x10))();
            }
          }
        }
        if (local_80 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_80 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_80 + 0x10))();
          }
        }
        if (local_68[0] != (code *)0x0) {
          pppuVar6 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar6 = &local_48;
          }
          (*(code *)(*pppuVar6)[2])();
        }
        uVar5 = 2;
      }
    }
    goto LAB_1443edc0e;
  }
  uVar5 = 0;
LAB_1443edc0e:
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443edd10 FUN_1443edd10 body=449 status=ok
// SIG undefined FUN_1443edd10(void)

void FUN_1443edd10(longlong param_1,char param_2,char param_3)

{
  int *piVar1;
  ulonglong uVar2;
  undefined ***pppuVar3;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  code *local_a0;
  undefined1 *local_98;
  code **local_90;
  code *local_88;
  code *local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  char local_38;
  char local_37;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1400b4698();
  if (DAT_14c951858 == 0) {
    local_90 = local_68;
    local_68[0] = FUN_1449e2820;
    local_80 = FUN_14081d0ea;
    local_88 = FUN_14081d0ea;
    local_98 = &LAB_1468c5283;
    local_a0 = FUN_142809da0;
    local_a8 = L"Engine";
    local_b0 = 0x400000000;
    local_b8 = 0x10000000;
    local_c0 = 8;
    local_c8 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  uVar2 = (ulonglong)*(byte *)(param_1 + 0xb1);
  *(char *)(param_1 + 0xf0 + uVar2) = param_2;
  if (param_3 == '\x01' && (byte)(param_2 - 1U) < 4) {
    FUN_140212f8e(local_68);
    uVar2 = (ulonglong)*(byte *)(param_1 + 0xb1);
    *(code **)(param_1 + 0xe0 + uVar2 * 8) = local_68[0];
  }
  local_58 = (undefined ***)0x0;
  local_48 = &PTR_LAB_14ba695f0;
  local_68[0] = FUN_1443f01e6;
  local_40 = param_1;
  local_38 = param_2;
  local_37 = param_3;
  FUN_1490158d0(param_1,local_78,local_68,*(undefined4 *)(param_1 + 0x94 + uVar2 * 8));
  if (local_70 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_70 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  if (local_68[0] != (code *)0x0) {
    pppuVar3 = local_58;
    if (local_58 == (undefined ***)0x0) {
      pppuVar3 = &local_48;
    }
    (*(code *)(*pppuVar3)[2])();
  }
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443eded2 FUN_1443eded2 body=1378 status=ok
// SIG undefined FUN_1443eded2(void)

void FUN_1443eded2(longlong *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  int local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)((longlong)param_1 + 0xb1) == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
  }
  (**(code **)(*param_1 + 0x328))(param_1,3);
  uVar3 = (**(code **)(*param_1 + 0x180))(param_1);
  plVar4 = (longlong *)FUN_1490145fe(uVar3);
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  puVar2 = local_50;
  local_48 = 3;
  *local_50 = &PTR_LAB_14ba698b0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  local_50[2] = lVar5;
  *local_50 = &PTR_FUN_14ba69840;
  local_50[3] = 0;
  iVar6 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar1 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_50 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar6 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar6 = *(int *)(lVar8 + 0x10);
      bVar9 = iVar6 == 0;
      if (bVar9) {
        *(int *)(lVar8 + 0x10) = iVar7;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar6 = iVar7;
      }
    }
  }
  *(int *)((longlong)puVar2 + 0x1c) = iVar6;
  puVar2[4] = &LAB_149016182;
  (**(code **)(*plVar4 + 0x2c0))(plVar4,&local_40,&local_50);
  param_1[0x19] = local_40;
  if (local_48 == 0) {
LAB_1443ee063:
    if (local_50 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
    goto LAB_1443ee063;
  }
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  puVar2 = local_50;
  local_48 = 3;
  *local_50 = &PTR_LAB_149e62de0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  local_50[2] = lVar5;
  *local_50 = &PTR_FUN_14ba69920;
  local_50[3] = 0;
  iVar6 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar1 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_50 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar6 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar6 = *(int *)(lVar8 + 0x10);
      bVar9 = iVar6 == 0;
      if (bVar9) {
        *(int *)(lVar8 + 0x10) = iVar7;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar6 = iVar7;
      }
    }
  }
  *(int *)((longlong)puVar2 + 0x1c) = iVar6;
  puVar2[4] = &LAB_149016190;
  (**(code **)(*plVar4 + 0x2e0))(plVar4,&local_40,&local_50);
  param_1[0x1a] = local_40;
  if (local_48 == 0) {
LAB_1443ee18d:
    if (local_50 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
    goto LAB_1443ee18d;
  }
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  puVar2 = local_50;
  local_48 = 3;
  *local_50 = &PTR_LAB_14ba69a00;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  local_50[2] = lVar5;
  *local_50 = &PTR_FUN_14ba69990;
  local_50[3] = 0;
  iVar6 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar1 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_50 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar6 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar6 = *(int *)(lVar8 + 0x10);
      bVar9 = iVar6 == 0;
      if (bVar9) {
        *(int *)(lVar8 + 0x10) = iVar7;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar6 = iVar7;
      }
    }
  }
  *(int *)((longlong)puVar2 + 0x1c) = iVar6;
  puVar2[4] = &LAB_14901619e;
  (**(code **)(*plVar4 + 0x2a0))(plVar4,&local_40,&local_50);
  param_1[0x18] = local_40;
  if (local_48 != 0) {
    if (local_50 == (undefined8 *)0x0) goto LAB_1443ee2c5;
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
  }
  if (local_50 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1443ee2c5:
  (**(code **)(*plVar4 + 0x400))(plVar4);
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443ee462 FUN_1443ee462 body=264 status=ok
// SIG undefined FUN_1443ee462(void)

void FUN_1443ee462(longlong *param_1,undefined1 param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = (**(code **)(*param_1 + 0x180))();
  plVar3 = (longlong *)FUN_1490145fe(uVar2);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x2c8))(plVar3,param_1 + 0x19);
    (**(code **)(*plVar3 + 0x2e8))(plVar3,param_1 + 0x1a);
    (**(code **)(*plVar3 + 0x2a8))(plVar3,param_1 + 0x18);
  }
  *(undefined1 *)((longlong)param_1 + 0xbc) = param_2;
  local_58 = (undefined ***)0x0;
  local_48 = &PTR_LAB_14ba69a70;
  local_68[0] = &LAB_1443f0292;
  local_40 = param_1;
  FUN_1490158d0(param_1,local_78,local_68,(int)param_1[0x12]);
  if (local_70 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_70 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  if (local_68[0] != (undefined1 *)0x0) {
    pppuVar4 = local_58;
    if (local_58 == (undefined ***)0x0) {
      pppuVar4 = &local_48;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443ee56c FUN_1443ee56c body=477 status=ok
// SIG undefined FUN_1443ee56c(void)

void FUN_1443ee56c(longlong *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x328))(param_1,3);
  uVar3 = (**(code **)(*param_1 + 0x180))(param_1);
  plVar4 = (longlong *)FUN_1490145fe(uVar3);
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar2 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14ba69a00;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  local_40[2] = lVar5;
  *local_40 = &PTR_FUN_14ba69990;
  local_40[3] = 0;
  iVar6 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar1 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_40 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar6 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar6 = *(int *)(lVar8 + 0x10);
      bVar9 = iVar6 == 0;
      if (bVar9) {
        *(int *)(lVar8 + 0x10) = iVar7;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar6 = iVar7;
      }
    }
  }
  *(int *)((longlong)puVar2 + 0x1c) = iVar6;
  puVar2[4] = &LAB_1490161ac;
  (**(code **)(*plVar4 + 0x408))(plVar4,&local_40);
  if (local_38 != 0) {
    if (local_40 == (undefined8 *)0x0) goto LAB_1443ee6be;
    (**(code **)*local_40)(local_40,0);
    FUN_1446efa72(&local_40,0,0,0x10);
    local_38 = 0;
  }
  if (local_40 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1443ee6be:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443ee74a FUN_1443ee74a body=168 status=ok
// SIG undefined FUN_1443ee74a(void)

void FUN_1443ee74a(longlong param_1,undefined1 param_2)

{
  int *piVar1;
  undefined ***pppuVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  undefined1 local_28;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_14ba69a90;
  local_58[0] = &LAB_1443f02e8;
  local_30 = param_1;
  local_28 = param_2;
  FUN_1490158d0(param_1,local_68,local_58,*(undefined4 *)(param_1 + 0x98));
  if (local_60 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_60 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_60 + 0x10))();
    }
  }
  if (local_58[0] != (undefined1 *)0x0) {
    pppuVar2 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar2 = &local_38;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443ee80c FUN_1443ee80c body=168 status=ok
// SIG undefined FUN_1443ee80c(void)

ulonglong FUN_1443ee80c(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 unaff_RSI;
  ulonglong uVar6;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (*(char *)((longlong)param_1 + 0xb2) == '\x04') {
    iVar2 = *(int *)((longlong)param_1 + 0xb4);
    iVar5 = (**(code **)(*DAT_14c948aa0 + 0x70))();
    if (iVar5 < iVar2) {
      iVar5 = iVar2;
    }
    *(int *)((longlong)param_1 + 0xb4) = iVar5;
    cVar4 = (*(code *)PTR_FUN_14c75b118)();
    if (cVar4 == '\0') {
      QueryPerformanceCounter(&local_28);
      (**(code **)(*param_1 + 0x318))(param_1);
      plVar3 = (longlong *)param_1[0x20];
      param_1[0x1f] = 0;
      param_1[0x20] = 0;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
      uVar6 = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443ee8d8 FUN_1443ee8d8 body=2727 status=ok
// SIG undefined FUN_1443ee8d8(void)

/* WARNING: Removing unreachable block (ram,0x0001443ef21d) */
/* WARNING: Removing unreachable block (ram,0x0001443ef13d) */
/* WARNING: Removing unreachable block (ram,0x0001443ef05d) */
/* WARNING: Removing unreachable block (ram,0x0001443eef7d) */
/* WARNING: Removing unreachable block (ram,0x0001443eefed) */
/* WARNING: Removing unreachable block (ram,0x0001443ef0cd) */
/* WARNING: Removing unreachable block (ram,0x0001443ef1ad) */
/* WARNING: Removing unreachable block (ram,0x0001443ef28d) */

ulonglong FUN_1443ee8d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 unaff_RDI;
  longlong lVar5;
  undefined1 auStack_188 [32];
  longlong local_168 [2];
  longlong local_158 [2];
  longlong local_148 [2];
  longlong local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined8 uStack_a4;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_188;
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  local_e0 = param_3;
  cVar1 = FUN_140988638(&local_e0,L"HOTFIX",1);
  if (cVar1 == '\0') {
    cVar1 = FUN_140988638(&local_e0,L"TESTHOTFIXSORT",1);
    uVar4 = 0;
    if (cVar1 != '\0') {
      local_f8 = 0;
      uStack_f0 = 0;
      local_60 = 0;
      local_58 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      uStack_ac = 0;
      uStack_a8 = 0;
      uStack_a4 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_54 = 0xffffffff00000080;
      local_4c = 0;
      local_40 = 0;
      local_38 = 0;
      FUN_14020fad6(&uStack_b0,L"SomeRandom.ini");
      lVar5 = (longlong)(int)(uint)uStack_f0;
      uVar2 = (uint)uStack_f0 + 1;
      if (uStack_f0._4_4_ < uVar2) {
        uVar4 = uStack_f0 & 0xffffffff;
        uStack_f0._0_4_ = uVar2;
        FUN_148fc34fa(&local_f8,uVar4);
        uVar2 = (uint)uStack_f0;
      }
      uStack_f0._0_4_ = uVar2;
      FUN_148fc4a46(lVar5 * 0xa8 + local_f8,&local_d8);
      FUN_14020fad6(&uStack_b0,L"DedicatedServerGame.ini");
      uVar2 = (uint)uStack_f0;
      lVar5 = (longlong)(int)(uint)uStack_f0;
      uStack_f0._0_4_ = (uint)uStack_f0 + 1;
      if (uStack_f0._4_4_ < (uint)uStack_f0) {
        FUN_148fc34fa(&local_f8,uVar2);
      }
      FUN_148fc4a46(lVar5 * 0xa8 + local_f8,&local_d8);
      FUN_14020fad6(&uStack_b0,L"pakchunk1-PS4_P.pak");
      uVar2 = (uint)uStack_f0;
      lVar5 = (longlong)(int)(uint)uStack_f0;
      uStack_f0._0_4_ = (uint)uStack_f0 + 1;
      if (uStack_f0._4_4_ < (uint)uStack_f0) {
        FUN_148fc34fa(&local_f8,uVar2);
      }
      FUN_148fc4a46(lVar5 * 0xa8 + local_f8,&local_d8);
      FUN_14020fad6(&uStack_b0,L"EN_Game.locres");
      uVar2 = (uint)uStack_f0;
      lVar5 = (longlong)(int)(uint)uStack_f0;
      uStack_f0._0_4_ = (uint)uStack_f0 + 1;
      if (uStack_f0._4_4_ < (uint)uStack_f0) {
        FUN_148fc34fa(&local_f8,uVar2);
      }
      FUN_148fc4a46(lVar5 * 0xa8 + local_f8,&local_d8);
      FUN_14020fad6(&uStack_b0,L"DefaultGame.ini");
      uVar2 = (uint)uStack_f0;
      lVar5 = (longlong)(int)(uint)uStack_f0;
      uStack_f0._0_4_ = (uint)uStack_f0 + 1;
      if (uStack_f0._4_4_ < (uint)uStack_f0) {
        FUN_148fc34fa(&local_f8,uVar2);
      }
      FUN_148fc4a46(lVar5 * 0xa8 + local_f8,&local_d8);
      FUN_14020fad6(&uStack_b0,L"Ver-1234_DefaultEngine.ini");
      uVar2 = (uint)uStack_f0;
      lVar5 = (longlong)(int)(uint)uStack_f0;
      uStack_f0._0_4_ = (uint)uStack_f0 + 1;
      if (uStack_f0._4_4_ < (uint)uStack_f0) {
        FUN_148fc34fa(&local_f8,uVar2);
      }
      FUN_148fc4a46(lVar5 * 0xa8 + local_f8,&local_d8);
      FUN_14020fad6(&uStack_b0,L"PS4_DefaultEngine.ini");
      uVar2 = (uint)uStack_f0;
      lVar5 = (longlong)(int)(uint)uStack_f0;
      uStack_f0._0_4_ = (uint)uStack_f0 + 1;
      if (uStack_f0._4_4_ < (uint)uStack_f0) {
        FUN_148fc34fa(&local_f8,uVar2);
      }
      FUN_148fc4a46(lVar5 * 0xa8 + local_f8,&local_d8);
      FUN_14020fad6(&uStack_b0,L"DefaultEngine.ini");
      uVar2 = (uint)uStack_f0;
      lVar5 = (longlong)(int)(uint)uStack_f0;
      uStack_f0._0_4_ = (uint)uStack_f0 + 1;
      if (uStack_f0._4_4_ < (uint)uStack_f0) {
        FUN_148fc34fa(&local_f8,uVar2);
      }
      FUN_148fc4a46(lVar5 * 0xa8 + local_f8,&local_d8);
      FUN_14020fad6(&uStack_b0,L"pakchunk0-PS4_P.pak");
      uVar2 = (uint)uStack_f0;
      lVar5 = (longlong)(int)(uint)uStack_f0;
      uStack_f0._0_4_ = (uint)uStack_f0 + 1;
      if (uStack_f0._4_4_ < (uint)uStack_f0) {
        FUN_148fc34fa(&local_f8,uVar2);
      }
      FUN_148fc4a46(lVar5 * 0xa8 + local_f8,&local_d8);
      FUN_14020fad6(&uStack_b0,L"PS4_DefaultGame.ini");
      uVar2 = (uint)uStack_f0;
      lVar5 = (longlong)(int)(uint)uStack_f0;
      uStack_f0._0_4_ = (uint)uStack_f0 + 1;
      if (uStack_f0._4_4_ < (uint)uStack_f0) {
        FUN_148fc34fa(&local_f8,uVar2);
      }
      FUN_148fc4a46(lVar5 * 0xa8 + local_f8,&local_d8);
      FUN_14020fad6(&uStack_b0,L"Ver-1234_PS4_DefaultGame.ini");
      uVar2 = (uint)uStack_f0;
      lVar5 = (longlong)(int)(uint)uStack_f0;
      uStack_f0._0_4_ = (uint)uStack_f0 + 1;
      if (uStack_f0._4_4_ < (uint)uStack_f0) {
        FUN_148fc34fa(&local_f8,uVar2);
      }
      FUN_148fc4a46(lVar5 * 0xa8 + local_f8,&local_d8);
      FUN_14020fad6(&uStack_b0,L"PS4_Ver-1234_DefaultGame.ini");
      uVar2 = (uint)uStack_f0;
      lVar5 = (longlong)(int)(uint)uStack_f0;
      uStack_f0._0_4_ = (uint)uStack_f0 + 1;
      if (uStack_f0._4_4_ < (uint)uStack_f0) {
        FUN_148fc34fa(&local_f8,uVar2);
      }
      FUN_148fc4a46(lVar5 * 0xa8 + local_f8,&local_d8);
      FUN_14020fad6(&uStack_b0,L"AnotherRandom.ini");
      uVar2 = (uint)uStack_f0;
      lVar5 = (longlong)(int)(uint)uStack_f0;
      uStack_f0._0_4_ = (uint)uStack_f0 + 1;
      if (uStack_f0._4_4_ < (uint)uStack_f0) {
        FUN_148fc34fa(&local_f8,uVar2);
      }
      FUN_148fc4a46(lVar5 * 0xa8 + local_f8,&local_d8);
      FUN_14020fad6(&uStack_b0,L"DedicatedServerEngine.ini");
      uVar2 = (uint)uStack_f0;
      lVar5 = (longlong)(int)(uint)uStack_f0;
      uStack_f0._0_4_ = (uint)uStack_f0 + 1;
      if (uStack_f0._4_4_ < (uint)uStack_f0) {
        FUN_148fc34fa(&local_f8,uVar2);
      }
      FUN_148fc4a46(lVar5 * 0xa8 + local_f8,&local_d8);
      FUN_140056680(&local_138,L"Default");
      FUN_140056680(local_148,L"DedicatedServer");
      FUN_140056680(local_158,L"PS4_");
      FUN_149016c18(&local_128,local_158,local_148,&local_138);
      FUN_149018139(local_f8,uStack_f0 & 0xffffffff,&local_128);
      FUN_149016d08(&local_128);
      if (local_158[0] != 0) {
        FUN_1400020a8();
      }
      if (local_148[0] != 0) {
        FUN_1400020a8();
      }
      if (local_138 != 0) {
        FUN_1400020a8();
      }
      local_138 = 0;
      uStack_130 = 0;
      FUN_140056680(&local_128,L"SomeRandom.ini");
      uVar4 = uStack_130;
      lVar5 = (longlong)(int)uStack_130;
      uVar2 = (int)uStack_130 + 1;
      uStack_130 = CONCAT44(uStack_130._4_4_,uVar2);
      if (uStack_130._4_4_ < uVar2) {
        FUN_1447a1bd6(&local_138,uVar4 & 0xffffffff);
      }
      lVar5 = lVar5 * 0x10;
      *(undefined8 *)(local_138 + lVar5) = 0;
      *(undefined8 *)(local_138 + lVar5) = local_128;
      *(undefined4 *)(local_138 + 8 + lVar5) = (undefined4)local_120;
      *(undefined4 *)(local_138 + 0xc + lVar5) = local_120._4_4_;
      local_120 = 0;
      local_128 = 0;
      FUN_140056680(&local_128,L"DefaultGame.ini");
      uVar4 = uStack_130;
      lVar5 = (longlong)(int)uStack_130;
      uVar2 = (int)uStack_130 + 1;
      uStack_130 = CONCAT44(uStack_130._4_4_,uVar2);
      if (uStack_130._4_4_ < uVar2) {
        FUN_1447a1bd6(&local_138,uVar4 & 0xffffffff);
      }
      lVar5 = lVar5 * 0x10;
      *(undefined8 *)(local_138 + lVar5) = 0;
      *(undefined8 *)(local_138 + lVar5) = local_128;
      *(undefined4 *)(local_138 + 8 + lVar5) = (undefined4)local_120;
      *(undefined4 *)(local_138 + 0xc + lVar5) = local_120._4_4_;
      local_120 = 0;
      local_128 = 0;
      FUN_140056680(&local_128,L"PS4_DefaultEngine.ini");
      uVar4 = uStack_130;
      lVar5 = (longlong)(int)uStack_130;
      uVar2 = (int)uStack_130 + 1;
      uStack_130 = CONCAT44(uStack_130._4_4_,uVar2);
      if (uStack_130._4_4_ < uVar2) {
        FUN_1447a1bd6(&local_138,uVar4 & 0xffffffff);
      }
      lVar5 = lVar5 * 0x10;
      *(undefined8 *)(local_138 + lVar5) = 0;
      *(undefined8 *)(local_138 + lVar5) = local_128;
      *(undefined4 *)(local_138 + 8 + lVar5) = (undefined4)local_120;
      *(undefined4 *)(local_138 + 0xc + lVar5) = local_120._4_4_;
      local_120 = 0;
      local_128 = 0;
      FUN_140056680(&local_128,L"DedicatedServerEngine.ini");
      uVar4 = uStack_130;
      lVar5 = (longlong)(int)uStack_130;
      uVar2 = (int)uStack_130 + 1;
      uStack_130 = CONCAT44(uStack_130._4_4_,uVar2);
      if (uStack_130._4_4_ < uVar2) {
        FUN_1447a1bd6(&local_138,uVar4 & 0xffffffff);
      }
      lVar5 = lVar5 * 0x10;
      *(undefined8 *)(local_138 + lVar5) = 0;
      *(undefined8 *)(local_138 + lVar5) = local_128;
      *(undefined4 *)(local_138 + 8 + lVar5) = (undefined4)local_120;
      *(undefined4 *)(local_138 + 0xc + lVar5) = local_120._4_4_;
      local_120 = 0;
      local_128 = 0;
      FUN_140056680(&local_128,L"DedicatedServerGame.ini");
      uVar4 = uStack_130;
      lVar5 = (longlong)(int)uStack_130;
      uVar2 = (int)uStack_130 + 1;
      uStack_130 = CONCAT44(uStack_130._4_4_,uVar2);
      if (uStack_130._4_4_ < uVar2) {
        FUN_1447a1bd6(&local_138,uVar4 & 0xffffffff);
      }
      lVar5 = lVar5 * 0x10;
      *(undefined8 *)(local_138 + lVar5) = 0;
      *(undefined8 *)(local_138 + lVar5) = local_128;
      *(undefined4 *)(local_138 + 8 + lVar5) = (undefined4)local_120;
      *(undefined4 *)(local_138 + 0xc + lVar5) = local_120._4_4_;
      local_120 = 0;
      local_128 = 0;
      FUN_140056680(&local_128,L"DefaultEngine.ini");
      uVar4 = uStack_130;
      lVar5 = (longlong)(int)uStack_130;
      uVar2 = (int)uStack_130 + 1;
      uStack_130 = CONCAT44(uStack_130._4_4_,uVar2);
      if (uStack_130._4_4_ < uVar2) {
        FUN_1447a1bd6(&local_138,uVar4 & 0xffffffff);
      }
      lVar5 = lVar5 * 0x10;
      *(undefined8 *)(local_138 + lVar5) = 0;
      *(undefined8 *)(local_138 + lVar5) = local_128;
      *(undefined4 *)(local_138 + 8 + lVar5) = (undefined4)local_120;
      *(undefined4 *)(local_138 + 0xc + lVar5) = local_120._4_4_;
      local_120 = 0;
      local_128 = 0;
      FUN_140056680(&local_128,L"PS4_DefaultGame.ini");
      uVar4 = uStack_130;
      lVar5 = (longlong)(int)uStack_130;
      uVar2 = (int)uStack_130 + 1;
      uStack_130 = CONCAT44(uStack_130._4_4_,uVar2);
      if (uStack_130._4_4_ < uVar2) {
        FUN_1447a1bd6(&local_138,uVar4 & 0xffffffff);
      }
      lVar5 = lVar5 * 0x10;
      *(undefined8 *)(local_138 + lVar5) = 0;
      *(undefined8 *)(local_138 + lVar5) = local_128;
      *(undefined4 *)(local_138 + 8 + lVar5) = (undefined4)local_120;
      *(undefined4 *)(local_138 + 0xc + lVar5) = local_120._4_4_;
      local_120 = 0;
      local_128 = 0;
      FUN_140056680(&local_128,L"AnotherRandom.ini");
      uVar4 = uStack_130;
      lVar5 = (longlong)(int)uStack_130;
      uVar2 = (int)uStack_130 + 1;
      uStack_130 = CONCAT44(uStack_130._4_4_,uVar2);
      if (uStack_130._4_4_ < uVar2) {
        FUN_1447a1bd6(&local_138,uVar4 & 0xffffffff);
      }
      lVar5 = lVar5 * 0x10;
      *(undefined8 *)(local_138 + lVar5) = 0;
      *(undefined8 *)(local_138 + lVar5) = local_128;
      *(undefined4 *)(local_138 + 8 + lVar5) = (undefined4)local_120;
      *(undefined4 *)(local_138 + 0xc + lVar5) = local_120._4_4_;
      local_120 = 0;
      local_128 = 0;
      FUN_140056680(local_148,L"Default");
      FUN_140056680(local_158,L"DedicatedServer");
      FUN_140056680(local_168,L"PS4_");
      FUN_149016c18(&local_128,local_168,local_158,local_148);
      FUN_149019f62(local_138,uStack_130 & 0xffffffff,&local_128);
      FUN_149016d08(&local_128);
      if (local_168[0] != 0) {
        FUN_1400020a8();
      }
      if (local_158[0] != 0) {
        FUN_1400020a8();
      }
      if (local_148[0] != 0) {
        FUN_1400020a8();
      }
      FUN_1447a1747(local_138,uStack_130 & 0xffffffff);
      if (local_138 != 0) {
        FUN_1400020a8();
      }
      FUN_148fc3128(&local_d8);
      FUN_145e041f4(local_f8,uStack_f0 & 0xffffffff);
      if (local_f8 != 0) {
        FUN_1400020a8();
      }
      uVar4 = CONCAT71((int7)((ulonglong)local_158 >> 8),1);
    }
  }
  else {
    plVar3 = (longlong *)FUN_1490145fe(param_2);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x400))(plVar3);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 1443ef38e FUN_1443ef38e body=29 status=ok
// SIG undefined FUN_1443ef38e(void)

undefined8 FUN_1443ef38e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443ef52a FUN_1443ef52a body=93 status=ok
// SIG undefined FUN_1443ef52a(void)

void FUN_1443ef52a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba69390;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1443ef588 FUN_1443ef588 body=93 status=ok
// SIG undefined FUN_1443ef588(void)

void FUN_1443ef588(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba69390;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1443ef5e6 FUN_1443ef5e6 body=126 status=ok
// SIG undefined FUN_1443ef5e6(void)

void FUN_1443ef5e6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba69390;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443ef655. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443ef66e FUN_1443ef66e body=269 status=ok
// SIG undefined FUN_1443ef66e(void)

undefined8 FUN_1443ef66e(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1443ef775;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1443ef775;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1443ef775:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1443ef729;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1443ef77c(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_1443ef729;
    }
  }
  uVar6 = 0;
LAB_1443ef729:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443ef77c FUN_1443ef77c body=121 status=ok
// SIG undefined FUN_1443ef77c(void)

void FUN_1443ef77c(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  param_1 = (longlong *)*param_1;
  FUN_1443e8240(param_1);
  FUN_1443e8b04(param_1);
  if ((longlong)(int)param_1[0x31] != 0) {
    lVar1 = (longlong)(int)param_1[0x31] * 0xa8;
    lVar2 = param_1[0x30] + 0x28;
    do {
      (**(code **)(*param_1 + 0x318))(param_1,lVar2);
      lVar2 = lVar2 + 0xa8;
      lVar1 = lVar1 + -0xa8;
    } while (lVar1 != 0);
  }
  (**(code **)(*param_1 + 0x2b8))(param_1,2);
                    /* WARNING: Could not recover jumptable at 0x0001443ef7ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x348))(param_1);
  return;
}



// FUNCTION 1443ef7f6 FUN_1443ef7f6 body=29 status=ok
// SIG undefined FUN_1443ef7f6(void)

undefined8 FUN_1443ef7f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443ef992 FUN_1443ef992 body=93 status=ok
// SIG undefined FUN_1443ef992(void)

void FUN_1443ef992(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba694e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1443ef9f0 FUN_1443ef9f0 body=93 status=ok
// SIG undefined FUN_1443ef9f0(void)

void FUN_1443ef9f0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba694e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1443efa4e FUN_1443efa4e body=126 status=ok
// SIG undefined FUN_1443efa4e(void)

void FUN_1443efa4e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba694e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443efabd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443efacc FUN_1443efacc body=32 status=ok
// SIG undefined FUN_1443efacc(void)

void FUN_1443efacc(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = FUN_1443e8080(uVar1);
  FUN_1443e754a(uVar1,uVar2);
  return;
}



// FUNCTION 1443efaec FUN_1443efaec body=279 status=ok
// SIG undefined FUN_1443efaec(void)

undefined8 FUN_1443efaec(longlong param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1443efbfd;
    if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_1443efbfd;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1443efbfd:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar7 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1443efbb1;
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar6 != 0) &&
       ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      uVar3 = FUN_1443e8080(uVar7);
      FUN_1443e754a(uVar7,uVar3);
      uVar7 = 1;
      goto LAB_1443efbb1;
    }
  }
  uVar7 = 0;
LAB_1443efbb1:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443efc04 FUN_1443efc04 body=291 status=ok
// SIG undefined FUN_1443efc04(void)

void FUN_1443efc04(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_98 [32];
  undefined2 local_78;
  longlong local_70;
  undefined8 **local_60;
  undefined8 **local_58;
  longlong *local_50;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *param_2;
  lVar2 = *param_1;
  lVar3 = FUN_149014f2c(lVar2,param_1 + 2);
  if (lVar3 == 0) {
    if ((int)param_1[3] == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)param_1[2];
    }
    FUN_1446f470e(&local_60,puVar4,1);
    local_58 = &local_60;
    local_50 = param_1 + 4;
    FUN_149019e10(lVar2 + 0x228,&local_44);
  }
  else {
    FUN_140056680(&local_58,L"ConsoleVariables");
    local_60 = &local_58;
    FUN_14901967e(lVar1 + 0x68,&local_44);
    *(undefined4 *)(*(longlong *)(lVar1 + 0x68) + 0x10 + (longlong)local_44 * 0x70) = 0xa000000;
    if ((undefined8 ***)local_58 != (undefined8 ***)0x0) {
      FUN_1400020a8();
    }
    local_78 = 0x50;
    local_70 = lVar1;
    FUN_146803ede(lVar3,param_1 + 2,param_1 + 4,param_1[1]);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443efd28 FUN_1443efd28 body=211 status=ok
// SIG undefined FUN_1443efd28(void)

undefined8 * FUN_1443efd28(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)FUN_14001cc68(0x38,8);
  *param_2 = puVar6;
  *puVar6 = &PTR_FUN_14ba69550;
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  uVar5 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)puVar6 + 0xc) = uVar3;
  *(undefined4 *)(puVar6 + 2) = uVar4;
  *(undefined4 *)((longlong)puVar6 + 0x14) = uVar5;
  puVar6[3] = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  pvVar2 = *(void **)(param_1 + 0x18);
  *(int *)(puVar6 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar6 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(puVar6 + 3,iVar1,0);
    memcpy((void *)puVar6[3],pvVar2,(longlong)iVar1 * 2);
  }
  puVar6[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  pvVar2 = *(void **)(param_1 + 0x28);
  *(int *)(puVar6 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar6 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(puVar6 + 5,iVar1,0);
    memcpy((void *)puVar6[5],pvVar2,(longlong)iVar1 * 2);
  }
  return puVar6 + 1;
}



// FUNCTION 1443efe02 FUN_1443efe02 body=29 status=ok
// SIG undefined FUN_1443efe02(void)

void FUN_1443efe02(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1443efe20 FUN_1443efe20 body=71 status=ok
// SIG undefined FUN_1443efe20(void)

undefined8 * FUN_1443efe20(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba69550;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443efe68 FUN_1443efe68 body=440 status=ok
// SIG undefined FUN_1443efe68(void)

void FUN_1443efe68(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined2 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  undefined2 *local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *param_2;
  lVar5 = *param_1;
  if ((longlong)*(int *)(lVar5 + 0x178) != 0) {
    lVar6 = (longlong)*(int *)(lVar5 + 0x178) * 0xa8;
    lVar4 = *(longlong *)(lVar5 + 0x170) + 0x28;
    do {
      cVar2 = FUN_144a38768(lVar4,L".INI",4,1);
      if (cVar2 != '\0') {
        FUN_149014eb0(&local_60,lVar4);
        puVar3 = &DAT_149dfb77a;
        if (local_58 != 0) {
          puVar3 = local_60;
        }
        FUN_1446f470e(&local_50,puVar3,1);
        if (local_60 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        FUN_146805bfa(DAT_14c872ce0,local_50,uVar1);
      }
      lVar4 = lVar4 + 0xa8;
      lVar6 = lVar6 + -0xa8;
    } while (lVar6 != 0);
  }
  if ((longlong)*(int *)(lVar5 + 0x188) != 0) {
    lVar4 = (longlong)*(int *)(lVar5 + 0x188) * 0xa8;
    lVar5 = *(longlong *)(lVar5 + 0x180) + 0x28;
    do {
      cVar2 = FUN_144a38768(lVar5,L".INI",4,1);
      if (cVar2 != '\0') {
        FUN_149014eb0(&local_60,lVar5);
        puVar3 = &DAT_149dfb77a;
        if (local_58 != 0) {
          puVar3 = local_60;
        }
        FUN_1446f470e(&local_50,puVar3,1);
        if (local_60 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        FUN_146805bfa(DAT_14c872ce0,local_50,uVar1);
      }
      lVar5 = lVar5 + 0xa8;
      lVar4 = lVar4 + -0xa8;
    } while (lVar4 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443f004c FUN_1443f004c body=29 status=ok
// SIG undefined FUN_1443f004c(void)

undefined8 FUN_1443f004c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443f009e FUN_1443f009e body=12 status=ok
// SIG undefined FUN_1443f009e(void)

void FUN_1443f009e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001443f00a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1443f00aa FUN_1443f00aa body=29 status=ok
// SIG undefined FUN_1443f00aa(void)

undefined8 FUN_1443f00aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443f00c8 FUN_1443f00c8 body=67 status=ok
// SIG undefined FUN_1443f00c8(void)

void FUN_1443f00c8(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  param_1 = (longlong *)*param_1;
  (**(code **)(*param_1 + 0x2d8))(param_1);
  plVar2 = (longlong *)param_1[0x22];
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001443f0100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1443f012a FUN_1443f012a body=12 status=ok
// SIG undefined FUN_1443f012a(void)

void FUN_1443f012a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001443f0133. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1443f0136 FUN_1443f0136 body=29 status=ok
// SIG undefined FUN_1443f0136(void)

undefined8 FUN_1443f0136(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443f0154 FUN_1443f0154 body=73 status=ok
// SIG undefined FUN_1443f0154(void)

void FUN_1443f0154(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = (longlong *)*param_1;
  (**(code **)(*plVar2 + 800))(plVar2,(char)param_1[1],0);
  plVar3 = (longlong *)plVar2[0x22];
  plVar2[0x21] = 0;
  plVar2[0x22] = 0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001443f0192. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1443f01bc FUN_1443f01bc body=12 status=ok
// SIG undefined FUN_1443f01bc(void)

void FUN_1443f01bc(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001443f01c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1443f01c8 FUN_1443f01c8 body=29 status=ok
// SIG undefined FUN_1443f01c8(void)

undefined8 FUN_1443f01c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443f01e6 FUN_1443f01e6 body=100 status=ok
// SIG undefined FUN_1443f01e6(void)

void FUN_1443f01e6(longlong *param_1)

{
  longlong *plVar1;
  undefined1 uVar2;
  char cVar3;
  
  plVar1 = (longlong *)*param_1;
  uVar2 = 6;
  if ((char)plVar1[0x16] == '\0') {
    *(undefined1 *)(plVar1 + 0x16) = 1;
    uVar2 = 1;
  }
  (**(code **)(*plVar1 + 0x328))(plVar1,uVar2);
  cVar3 = (char)param_1[1];
  if ((cVar3 == '\x01') && (cVar3 = '\x01', *(char *)((longlong)plVar1 + 0xb1) == '\0')) {
    cVar3 = '\x02' - *(char *)((longlong)param_1 + 9);
  }
  *(undefined1 *)((longlong)plVar1 + 0xb1) = 0;
  *(undefined1 *)(plVar1 + 0x3e) = 1;
  FUN_14901b158(plVar1 + 8,cVar3);
  return;
}



// FUNCTION 1443f0268 FUN_1443f0268 body=12 status=ok
// SIG undefined FUN_1443f0268(void)

void FUN_1443f0268(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001443f0271. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1443f0274 FUN_1443f0274 body=29 status=ok
// SIG undefined FUN_1443f0274(void)

undefined8 FUN_1443f0274(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443f02be FUN_1443f02be body=12 status=ok
// SIG undefined FUN_1443f02be(void)

void FUN_1443f02be(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001443f02c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1443f02ca FUN_1443f02ca body=29 status=ok
// SIG undefined FUN_1443f02ca(void)

undefined8 FUN_1443f02ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443f033a FUN_1443f033a body=12 status=ok
// SIG undefined FUN_1443f033a(void)

void FUN_1443f033a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001443f0343. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1443f0346 FUN_1443f0346 body=29 status=ok
// SIG undefined FUN_1443f0346(void)

undefined8 FUN_1443f0346(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443f0364 FUN_1443f0364 body=71 status=ok
// SIG undefined FUN_1443f0364(void)

undefined8 * FUN_1443f0364(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14ba69b90;
  if (param_1[6] != 0) {
    plVar1 = param_1 + 10;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443f052a FUN_1443f052a body=160 status=ok
// SIG undefined FUN_1443f052a(void)

void FUN_1443f052a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((int)param_2[1] != 7) {
    FUN_1446efa72(param_2,0,7,0x10);
    *(undefined4 *)(param_2 + 1) = 7;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba69b90;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar1[6] = lVar2;
  puVar1[8] = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x50);
    if (*(undefined8 **)(param_1 + 0x40) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x40);
    }
                    /* WARNING: Could not recover jumptable at 0x0001443f05bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)(puVar3,puVar1 + 8);
    return;
  }
  return;
}



// FUNCTION 1443f05ca FUN_1443f05ca body=160 status=ok
// SIG undefined FUN_1443f05ca(void)

void FUN_1443f05ca(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((int)param_2[1] != 7) {
    FUN_1446efa72(param_2,0,7,0x10);
    *(undefined4 *)(param_2 + 1) = 7;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba69b90;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar1[6] = lVar2;
  puVar1[8] = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x50);
    if (*(undefined8 **)(param_1 + 0x40) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x40);
    }
                    /* WARNING: Could not recover jumptable at 0x0001443f065f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)(puVar3,puVar1 + 8);
    return;
  }
  return;
}



// FUNCTION 1443f066a FUN_1443f066a body=187 status=ok
// SIG undefined FUN_1443f066a(void)

void FUN_1443f066a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 7) {
    FUN_1446efa72(param_2 + 1,0,7,0x10);
    param_2[1].LockCount = 7;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba69b90;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  lVar3 = *(longlong *)(param_1 + 0x30);
  p_Var1[1].Type = (short)lVar3;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)lVar3 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)lVar3 >> 0x20);
  p_Var1[1].ProcessLocksList.Flink = (_LIST_ENTRY *)0x0;
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)(param_1 + 0x50);
    if (*(undefined8 **)(param_1 + 0x40) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)(param_1 + 0x40);
    }
    (**(code **)*puVar4)(puVar4,&p_Var1[1].ProcessLocksList);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443f0715. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443f0726 FUN_1443f0726 body=43 status=ok
// SIG undefined FUN_1443f0726(void)

undefined8 FUN_1443f0726(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  pcVar1 = *(code **)(param_1 + 0x30);
  plVar3 = (longlong *)(param_1 + 0x50);
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x40);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  return 0;
}



// FUNCTION 1443f0752 FUN_1443f0752 body=290 status=ok
// SIG undefined FUN_1443f0752(void)

ulonglong FUN_1443f0752(longlong param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1443f086e;
    if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_1443f086e;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1443f086e:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar8 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1443f0822;
    lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar7 != 0) &&
       ((*(int *)(lVar7 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)))) {
      pcVar3 = *(code **)(param_1 + 0x30);
      plVar9 = (longlong *)(param_1 + 0x50);
      if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
        plVar9 = *(longlong **)(param_1 + 0x40);
      }
      uVar6 = (**(code **)(*plVar9 + 8))(plVar9);
      (*pcVar3)(uVar6);
      uVar8 = CONCAT71((int7)((ulonglong)pcVar3 >> 8),1);
      goto LAB_1443f0822;
    }
  }
  uVar8 = 0;
LAB_1443f0822:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443f0875 FUN_1443f0875 body=471 status=ok
// SIG undefined FUN_1443f0875(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1443f0875(void)

{
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined **local_50;
  undefined8 local_48;
  ulonglong local_40;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = 0x8000000149e06a4a;
  local_2c = 6;
  local_38 = FUN_14577453c();
  local_34 = 1;
  FUN_146672a00(&local_40);
  FUN_1446f470e(&DAT_14cbf5f8c,L"UNSET",1);
  local_48 = 1;
  local_50 = &PTR_FUN_14ba66390;
  local_58 = 0;
  FUN_14282b410(L"/Script/Hotfix",&PTR_FUN_14ba663b0,1,0);
  FUN_1446f470e(&DAT_14cbf5fd0,L"HotfixManager",1);
  local_40 = local_40 & 0xffffffff00000000;
  local_58 = local_58 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cbf5fd8,L"ini.UseNewDynamicLayersForHotfix",&local_40,
                L"If true, use the new dynamic layers that load/unload configs, specifically for Hotfixes"
               );
  atexit(FUN_1443e6765);
  local_58 = local_58 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cbf5ff0,L"hotfix.DeferBroadcastCurveTableModified",&DAT_14c7649b4,
                L"Whether to wait until all asset hotfixes have been applied before broadcasting OnCurveTableChanged delegates, as opposed to broadcasting after each individual modification"
               );
  atexit(FUN_1443e67aa);
  FUN_14118b488(&DAT_14cbf6040);
  _DAT_14cbf6040 = &PTR_FUN_14ba688b0;
  atexit((_func_5014 *)&LAB_1443ed91f);
  local_50 = &PTR_FUN_14ba68630;
  local_58 = 1;
  local_48 = 2;
  FUN_14282b410(L"/Script/Hotfix",&PTR_FUN_14ba686a0,1,&PTR_FUN_14ba68670);
  local_40 = CONCAT44(local_40._4_4_,0xffffffff);
  local_58 = local_58 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cbf60a8,L"UI.DebugUpdateCheck",&local_40,
                L"Force switch between update states (-1 is off)");
  atexit(FUN_1443ed99d);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443f0a50 FUN_1443f0a50 body=57 status=ok
// SIG undefined FUN_1443f0a50(void)

void FUN_1443f0a50(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf6118 == 0) {
    uVar1 = FUN_146672d69();
    DAT_14cbf6118 = FUN_14171c317(FUN_146672d98,uVar1,L"ERejoinStatus");
  }
  return;
}



// FUNCTION 1443f0a89 FUN_1443f0a89 body=69 status=ok
// SIG undefined FUN_1443f0a89(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1443f0a89(void)

{
  _DAT_14cbf6140 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001443f0acb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf6148,1);
  return;
}



// FUNCTION 1443f0ace FUN_1443f0ace body=1229 status=ok
// SIG undefined FUN_1443f0ace(void)

void FUN_1443f0ace(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  wchar_t *local_e8;
  code *local_e0;
  undefined1 *local_d8;
  undefined ***local_d0;
  code *local_c8;
  code *local_c0;
  longlong local_b0;
  undefined8 *local_a8;
  int local_a0;
  longlong local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *plStack_80;
  undefined **local_78;
  longlong *aplStack_70 [2];
  byte local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((char)param_1[5] == '\x02') {
    if (*param_2 != 0 && (int)param_2[1] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_128);
    }
    goto LAB_1443f0b10;
  }
  *(undefined1 *)(param_1 + 5) = 2;
  FUN_14901e446(param_1 + 0x2a,2);
  lVar4 = FUN_1400b4698();
  if (DAT_14c951858 == 0) {
    local_d0 = &local_78;
    local_78 = (undefined **)FUN_1449e2820;
    local_c0 = FUN_14081d0ea;
    local_c8 = FUN_14081d0ea;
    local_d8 = &LAB_1468c5283;
    local_e0 = FUN_142809da0;
    local_e8 = L"Engine";
    local_f0 = 0x400000000;
    local_f8 = 0x10000000;
    local_100 = 8;
    local_108 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar5 = param_1[4];
  if (lVar5 == 0) {
    lVar9 = 0;
  }
  else {
    do {
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
         (lVar9 = lVar5,
         *(longlong *)
          (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
         != lVar4 + 0x30)) {
        lVar9 = 0;
      }
    } while ((lVar9 == 0) && (lVar5 = *(longlong *)(lVar5 + 0x20), lVar5 != 0));
  }
  (**(code **)(*param_1 + 0x180))(param_1);
  local_78 = (undefined **)0x0;
  plVar6 = (longlong *)FUN_1401e3228();
  if (plVar6 == (longlong *)0x0) {
    local_88 = (longlong *)0x0;
    plStack_80 = (longlong *)0x0;
LAB_1443f0d47:
    local_78 = (undefined **)0x0;
    aplStack_70[0] = (longlong *)0x0;
    FUN_1443f0fba(param_1,0,&local_78,param_2);
    FUN_145fee2f2(0,0);
    if (local_78 != (undefined **)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    (**(code **)(*plVar6 + 0x20))(plVar6,&local_88);
    if (local_88 == (longlong *)0x0) goto LAB_1443f0d47;
    local_78 = (undefined **)0x0;
    plVar6 = (longlong *)FUN_1401e3228();
    if (plVar6 == (longlong *)0x0) goto LAB_1443f0d47;
    (**(code **)(*plVar6 + 0x80))(plVar6,&local_98);
    if (local_98 == 0) {
LAB_1443f0d1d:
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_90 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
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
      goto LAB_1443f0d47;
    }
    FUN_1463caa92(lVar9,&local_78);
    if ((&DAT_149fc1b6e)[local_60] == '\x01') {
      if ((aplStack_70[0] != (longlong *)0x0) &&
         (cVar3 = (**(code **)(*aplStack_70[0] + 0x28))(), cVar3 != '\0')) goto LAB_1443f0cbf;
LAB_1443f0cd8:
      local_78 = &PTR_FUN_14a5af930;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      local_78 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])(aplStack_70);
      goto LAB_1443f0d1d;
    }
    if (((ulonglong)aplStack_70[0] & 0xffffff) == 0) goto LAB_1443f0cd8;
LAB_1443f0cbf:
    lVar4 = FUN_14127af90(lVar9,&local_78);
    if (lVar4 == 0) goto LAB_1443f0cd8;
    local_a8 = (undefined8 *)0x0;
    local_a0 = 0;
    FUN_14901d87c(&local_a8,param_1,param_2);
    (**(code **)(*local_88 + 0x2f0))(local_88,&local_b0,*(undefined4 *)(lVar4 + 0xe0),&local_a8);
    plVar6 = local_88;
    param_1[0x2d] = local_b0;
    uVar7 = FUN_14127b0d4(&local_78);
    uVar8 = FUN_14127b0d4(&local_78);
    cVar3 = (**(code **)(*plVar6 + 0x2e0))(plVar6,uVar8,uVar7);
    if (local_a0 == 0) {
LAB_1443f0e81:
      if (local_a8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_a8 != (undefined8 *)0x0) {
      (**(code **)*local_a8)(local_a8,0);
      FUN_1446efa72(&local_a8,0,0,0x10);
      local_a0 = 0;
      goto LAB_1443f0e81;
    }
    local_78 = &PTR_FUN_14a5af930;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    local_78 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])(aplStack_70);
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_90 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
    if (cVar3 == '\0') goto LAB_1443f0d47;
  }
  plVar6 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_80 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
LAB_1443f0b10:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443f0fba FUN_1443f0fba body=844 status=ok
// SIG undefined FUN_1443f0fba(void)

void FUN_1443f0fba(longlong *param_1,char param_2,longlong *param_3,longlong *param_4)

{
  ushort uVar1;
  ushort uVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined8 unaff_R14;
  bool bVar10;
  undefined1 auStack_1a8 [40];
  longlong local_180;
  int local_178;
  undefined **local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined **local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if ((char)param_1[5] != '\x02') goto LAB_1443f1072;
  uVar5 = (undefined4)CONCAT71((int7)((ulonglong)unaff_R14 >> 8),3);
  if (param_2 != '\0') {
    uVar5 = 0;
    if (0 < (int)param_3[1]) {
      if ((*(longlong *)(*param_3 + 8) != 0) &&
         (plVar3 = *(longlong **)(*param_3 + 0x100), plVar3 != (longlong *)0x0)) {
        cVar4 = (**(code **)(*plVar3 + 0x20))();
        if (cVar4 != '\0') {
          uVar5 = (**(code **)(*param_1 + 0x2c0))(param_1,*param_3);
          if (((char)uVar5 == '\x01') && (0 < (int)param_3[1])) {
            FUN_141551f14(*param_3,&local_170);
            plVar3 = param_1 + 6;
            FUN_141551f14(plVar3,&local_180);
            if ((int)local_168 == local_178) {
              bVar10 = true;
              if (1 < (int)local_168) {
                lVar8 = 0;
                while( true ) {
                  uVar1 = *(ushort *)((longlong)local_170 + lVar8);
                  uVar6 = (uint)uVar1;
                  uVar2 = *(ushort *)(local_180 + lVar8);
                  uVar9 = (uint)uVar2;
                  if (uVar1 != uVar2) {
                    if ((uVar2 | uVar1) < 0x80) {
                      uVar6 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                      uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                      if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1443f117a;
                    }
                    iVar7 = uVar6 - uVar9;
                    goto LAB_1443f12b2;
                  }
                  if (uVar1 == 0) break;
LAB_1443f117a:
                  lVar8 = lVar8 + 2;
                }
                iVar7 = 0;
LAB_1443f12b2:
                bVar10 = iVar7 == 0;
              }
            }
            else {
              bVar10 = local_178 + (int)local_168 == 1;
            }
            if (local_180 != 0) {
              FUN_1400020a8();
            }
            if (local_170 != (undefined **)0x0) {
              FUN_1400020a8();
            }
            if (!bVar10) {
              (**(code **)(*param_1 + 0x2d0))(param_1,*param_3);
            }
            lVar8 = *param_3;
            FUN_1461f4a06(plVar3,lVar8);
            *(undefined4 *)(param_1 + 0x29) = *(undefined4 *)(lVar8 + 0x118);
            uVar5 = (undefined4)CONCAT71((int7)((ulonglong)plVar3 >> 8),1);
            goto LAB_1443f1000;
          }
          goto LAB_1443f11c1;
        }
      }
      uVar5 = 0;
    }
LAB_1443f11c1:
    local_170 = &PTR_FUN_14b4c3b18;
    local_168 = 0;
    uStack_160 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_148 = &PTR_FUN_14b4c3b20;
    local_140 = 0;
    uStack_138 = 0;
    local_130 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_118 = FUN_1414a827a();
    local_f0 = 0;
    local_e8 = 0;
    local_110 = 0;
    uStack_108 = 0;
    local_e4 = 0xffffffff00000080;
    local_dc = 0;
    local_d0 = 0;
    local_c8 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_94 = 0xffffffff00000080;
    local_8c = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    local_58 = 9999;
    FUN_14901ddb8(param_1 + 6,&local_170);
    *(undefined4 *)(param_1 + 0x29) = local_58;
    FUN_14124efea(&local_170);
  }
LAB_1443f1000:
  if ((char)param_1[5] != (char)uVar5) {
    *(char *)(param_1 + 5) = (char)uVar5;
    FUN_14901e446(param_1 + 0x2a,uVar5);
  }
  plVar3 = (longlong *)*param_4;
  if (plVar3 != (longlong *)0x0 && (int)param_4[1] != 0) {
    (**(code **)(*plVar3 + 0x60))(plVar3,uVar5);
  }
  if (*(char *)((longlong)param_1 + 0x2a) == '\x01') {
    if (*(char *)((longlong)param_1 + 0x29) == '\x01') {
      *(undefined1 *)((longlong)param_1 + 0x29) = 0;
      if (*(byte *)(param_1 + 5) == 1) {
        (**(code **)(*param_1 + 0x2c8))(param_1);
      }
      else {
        (**(code **)(*param_1 + 0x2b8))(param_1,((*(byte *)(param_1 + 5) & 0xfb) == 0) * '\x03');
      }
    }
  }
  else if ((*(byte *)(param_1 + 5) & 0xfb) != 0) {
    FUN_14901d9fa(param_1);
  }
LAB_1443f1072:
  if ((local_50 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443f1308 FUN_1443f1308 body=142 status=ok
// SIG undefined FUN_1443f1308(void)

void FUN_1443f1308(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  (**(code **)(*param_1 + 0x2d8))(param_1,param_1 + 6,param_2);
  *(undefined1 *)((longlong)param_1 + 0x2a) = 0;
  if ((char)param_2 == '\x03') {
    if ((char)param_1[5] != '\0') {
      *(undefined1 *)(param_1 + 5) = 0;
      FUN_14901e446(param_1 + 0x2a,0);
    }
  }
  else {
    if ((char)param_1[5] != '\x03') {
      *(undefined1 *)(param_1 + 5) = 3;
      FUN_14901e446(param_1 + 0x2a,3);
    }
    FUN_14901d9fa(param_1);
  }
  if (((int)param_1[0x30] != 0) && (plVar1 = (longlong *)param_1[0x2f], plVar1 != (longlong *)0x0))
  {
                    /* WARNING: Could not recover jumptable at 0x0001443f1357. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x60))(plVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 1443f1396 FUN_1443f1396 body=242 status=ok
// SIG undefined FUN_1443f1396(void)

void FUN_1443f1396(void)

{
  undefined1 auStack_68 [32];
  ulonglong local_48;
  undefined **local_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446f470e(&DAT_14cbf6108,L"UNSET",1);
  local_40 = &PTR_FUN_14ba6a1a0;
  local_38 = 1;
  local_48 = 0;
  FUN_14282b410(L"/Script/Rejoin",&PTR_FUN_14ba6a1c0,1,0);
  local_28 = CONCAT44(local_28._4_4_,0xffffffff);
  local_48 = local_48 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cbf6140,L"UI.DebugRejoin",&local_28,
                L"Force switch between rejoin states (-1 is off)");
  atexit(FUN_1443f0a89);
  local_28 = 0x800000014ba6a264;
  local_14 = 6;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_146672df6(&local_28);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443f1498 FUN_1443f1498 body=779 status=ok
// SIG undefined FUN_1443f1498(void)

undefined8 FUN_1443f1498(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  double dVar8;
  longlong lVar9;
  char cVar10;
  undefined4 uVar11;
  undefined2 *puVar12;
  longlong lVar13;
  float extraout_XMM0_Da;
  undefined4 unaff_XMM10_Da;
  undefined4 unaff_XMM10_Db;
  float fVar14;
  undefined1 auStack_128 [32];
  longlong *local_108;
  longlong *local_100;
  LARGE_INTEGER *local_f8;
  undefined8 local_e8;
  longlong local_e0 [2];
  longlong local_d0 [2];
  LARGE_INTEGER local_c0 [2];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((int)param_1[10] != 0) {
    QueryPerformanceCounter(local_c0);
    dVar8 = (double)local_c0[0].QuadPart * DAT_14c83f420 + 16777216.0;
    dVar3 = (double)param_1[0xb];
    if (((dVar3 == 0.0) && (!NAN(dVar3))) || (1.0 < dVar8 - dVar3)) {
      lVar9 = param_1[10];
      if ((longlong)(int)lVar9 != 0) {
        lVar4 = param_1[9];
        lVar13 = 0;
        do {
          (**(code **)(**(longlong **)(lVar4 + lVar13) + 0x10))();
          cVar10 = (**(code **)(**(longlong **)(lVar4 + lVar13) + 0x18))();
          if (cVar10 != '\0') {
            fVar14 = *(float *)(*(longlong **)(lVar4 + lVar13) + 0xd);
            (**(code **)(**(longlong **)(lVar4 + lVar13) + 0x28))();
            lVar5 = *(longlong *)(lVar4 + lVar13);
            if (*(byte *)(lVar5 + 0x60) == 1) {
              unaff_XMM10_Da = (undefined4)*(undefined8 *)(lVar5 + 0x58);
              unaff_XMM10_Db = (undefined4)((ulonglong)*(undefined8 *)(lVar5 + 0x58) >> 0x20);
            }
            fVar14 = ABS(fVar14 - extraout_XMM0_Da);
            if (1e-08 < fVar14) {
              *(float *)(lVar5 + 0x68) = extraout_XMM0_Da;
            }
            if (1e-08 < fVar14 ||
                (*(byte *)(lVar5 + 0x60) &
                ((double)CONCAT44(unaff_XMM10_Db,unaff_XMM10_Da) <= dVar8 &&
                dVar8 != (double)CONCAT44(unaff_XMM10_Db,unaff_XMM10_Da))) != 0) {
              uVar11 = (**(code **)(**(longlong **)(lVar4 + lVar13) + 0x20))();
              local_e8 = (**(code **)(*param_1 + 0x20))(param_1);
              puVar12 = &DAT_149dfb77a;
              if (*(int *)(*(longlong *)(lVar4 + lVar13) + 0x40) != 0) {
                puVar12 = *(undefined2 **)(*(longlong *)(lVar4 + lVar13) + 0x38);
              }
              FUN_140056680(local_c0,puVar12);
              puVar12 = &DAT_149dfb77a;
              if (*(int *)(*(longlong *)(lVar4 + lVar13) + 0x30) != 0) {
                puVar12 = *(undefined2 **)(*(longlong *)(lVar4 + lVar13) + 0x28);
              }
              FUN_140056680(local_d0,puVar12);
              puVar12 = &DAT_149dfb77a;
              if (*(int *)(*(longlong *)(lVar4 + lVar13) + 0x20) != 0) {
                puVar12 = *(undefined2 **)(*(longlong *)(lVar4 + lVar13) + 0x18);
              }
              FUN_140056680(local_e0,puVar12);
              uVar6 = *(undefined8 *)(*(longlong *)(lVar4 + lVar13) + 0x48);
              plVar7 = *(longlong **)(*(longlong *)(lVar4 + lVar13) + 0x50);
              local_108 = local_e0;
              local_f8 = local_c0;
              if (plVar7 == (longlong *)0x0) {
                local_100 = local_d0;
                FUN_14901f6de(local_e8,uVar6,uVar11,extraout_XMM0_Da);
              }
              else {
                LOCK();
                *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
                UNLOCK();
                local_100 = local_d0;
                FUN_14901f6de(local_e8,uVar6,uVar11,extraout_XMM0_Da);
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
              if (local_e0[0] != 0) {
                FUN_1400020a8();
              }
              if (local_d0[0] != 0) {
                FUN_1400020a8();
              }
              if (local_c0[0].QuadPart != 0) {
                FUN_1400020a8();
              }
              FUN_14901f21a(param_1,*(undefined8 *)(lVar4 + lVar13),uVar11);
              (**(code **)(**(longlong **)(lVar4 + lVar13) + 0x38))();
            }
          }
          lVar13 = lVar13 + 0x10;
        } while ((longlong)(int)lVar9 * 0x10 != lVar13);
      }
      param_1[0xb] = (longlong)dVar8;
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 1443f17a4 FUN_1443f17a4 body=160 status=ok
// SIG undefined FUN_1443f17a4(void)

undefined8 FUN_1443f17a4(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  
  if ((longlong)*(int *)(param_1 + 0x50) != 0) {
    plVar7 = *(longlong **)(param_1 + 0x48);
    lVar8 = (longlong)*(int *)(param_1 + 0x50) << 4;
    do {
      puVar3 = *(undefined8 **)(*plVar7 + 0x48);
      plVar4 = *(longlong **)(*plVar7 + 0x50);
      if (plVar4 == (longlong *)0x0) {
        cVar5 = (**(code **)*puVar3)(puVar3,param_2);
      }
      else {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        cVar5 = (**(code **)*puVar3)(puVar3,param_2);
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
      if (cVar5 != '\0') {
        if (plVar7 == (longlong *)0x0) {
          return 0;
        }
                    /* WARNING: Could not recover jumptable at 0x0001443f1832. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (**(code **)(*(longlong *)*plVar7 + 0x18))();
        return uVar6;
      }
      plVar7 = plVar7 + 2;
      lVar8 = lVar8 + -0x10;
    } while (lVar8 != 0);
  }
  return 0;
}



// FUNCTION 1443f1844 FUN_1443f1844 body=160 status=ok
// SIG undefined FUN_1443f1844(void)

undefined8 FUN_1443f1844(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  
  if ((longlong)*(int *)(param_1 + 0x50) != 0) {
    plVar7 = *(longlong **)(param_1 + 0x48);
    lVar8 = (longlong)*(int *)(param_1 + 0x50) << 4;
    do {
      puVar3 = *(undefined8 **)(*plVar7 + 0x48);
      plVar4 = *(longlong **)(*plVar7 + 0x50);
      if (plVar4 == (longlong *)0x0) {
        cVar5 = (**(code **)*puVar3)(puVar3,param_2);
      }
      else {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        cVar5 = (**(code **)*puVar3)(puVar3,param_2);
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
      if (cVar5 != '\0') {
        if (plVar7 == (longlong *)0x0) {
          return 0;
        }
                    /* WARNING: Could not recover jumptable at 0x0001443f18d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (**(code **)(*(longlong *)*plVar7 + 0x20))();
        return uVar6;
      }
      plVar7 = plVar7 + 2;
      lVar8 = lVar8 + -0x10;
    } while (lVar8 != 0);
  }
  return 0;
}



// FUNCTION 1443f18e4 FUN_1443f18e4 body=232 status=ok
// SIG undefined FUN_1443f18e4(void)

float FUN_1443f18e4(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  float fVar8;
  
  fVar8 = 1.0;
  if ((longlong)(int)param_1[10] != 0) {
    plVar6 = (longlong *)param_1[9];
    lVar7 = (longlong)(int)param_1[10] << 4;
    do {
      puVar3 = *(undefined8 **)(*plVar6 + 0x48);
      plVar4 = *(longlong **)(*plVar6 + 0x50);
      if (plVar4 == (longlong *)0x0) {
        cVar5 = (**(code **)*puVar3)(puVar3,param_2);
      }
      else {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        cVar5 = (**(code **)*puVar3)(puVar3,param_2);
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
      if (cVar5 != '\0') {
        if (plVar6 != (longlong *)0x0) {
          fVar8 = *(float *)(*plVar6 + 0x68);
        }
        break;
      }
      plVar6 = plVar6 + 2;
      lVar7 = lVar7 + -0x10;
    } while (lVar7 != 0);
  }
  if ((1.0 < fVar8) || (fVar8 < 0.0)) {
    if (DAT_14cbf61e4 == '\0') {
      (**(code **)(*param_1 + 0x10))(param_1,param_2);
      DAT_14cbf61e4 = '\x01';
    }
    if (1.0 <= fVar8) {
      fVar8 = 1.0;
    }
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
  }
  return fVar8;
}



// FUNCTION 1443f19cc FUN_1443f19cc body=965 status=ok
// SIG undefined FUN_1443f19cc(void)

ulonglong FUN_1443f19cc(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  double dVar2;
  LARGE_INTEGER LVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  LARGE_INTEGER LVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined8 local_98;
  longlong local_90;
  LARGE_INTEGER local_88;
  int local_80;
  undefined4 uStack_7c;
  LARGE_INTEGER local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  undefined7 uVar11;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_90 = param_3;
  cVar4 = FUN_140988638(&local_90,L"PlayTimeLimit",1);
  if ((cVar4 == '\0') || (*(char *)(param_1 + 8) != '\x01')) {
    uVar9 = 0;
    goto LAB_1443f1a24;
  }
  FUN_14901e912();
  uVar11 = (undefined7)((ulonglong)param_1 >> 8);
  uVar9 = CONCAT71(uVar11,1);
  cVar4 = FUN_140988638(&local_90,L"DUMP",1);
  if (cVar4 != '\0') {
    if (DAT_14cbf61b0 != 0) {
      QueryPerformanceCounter(&local_78);
      lVar12 = DAT_14cbf61a8;
      lVar14 = (longlong)DAT_14cbf61b0;
      if (lVar14 != 0) {
        dVar2 = (double)local_78.QuadPart * DAT_14c83f420;
        lVar13 = 0;
        do {
          local_78.QuadPart = 0;
          uStack_70 = 0;
          if (*(char *)(*(longlong *)(lVar12 + lVar13) + 0x60) == '\x01') {
            FUN_146269454(&local_88,
                          *(double *)(*(longlong *)(lVar12 + lVar13) + 0x58) - (dVar2 + 16777216.0))
            ;
            if ((wchar_t *)local_78.QuadPart != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            local_78 = local_88;
            uStack_70 = CONCAT44(uStack_7c,local_80);
          }
          else {
            FUN_14020fad6(&local_78,&DAT_14b987f6e);
          }
          if ((wchar_t *)local_78.QuadPart != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          lVar13 = lVar13 + 0x10;
        } while (lVar14 * 0x10 != lVar13);
      }
    }
    goto LAB_1443f1a24;
  }
  uVar9 = CONCAT71(uVar11,1);
  cVar4 = FUN_140988638(&local_90,L"NOTIFYNOW",1);
  if (cVar4 != '\0') {
    FUN_14901f2f8();
    goto LAB_1443f1a24;
  }
  cVar4 = FUN_140988638(&local_90,L"SETUSERLIMITS",1);
  uVar9 = 0;
  if (cVar4 == '\0') goto LAB_1443f1a24;
  local_78.QuadPart = 0;
  uStack_70 = 0;
  local_b8 = 0;
  FUN_14063337c(local_90,L"Sub=",&local_78,1);
  uVar8 = (int)uStack_70 - 1;
  if ((int)uStack_70 == 0) {
    uVar8 = 0;
  }
  lVar12 = 8;
  if ((int)uVar8 < 1) {
    local_b8 = 0;
    FUN_14063337c(local_90,L"Subsystem=",&local_78,1);
    uVar8 = (int)uStack_70 - 1;
    if ((int)uStack_70 == 0) {
      uVar8 = 0;
    }
    iVar5 = (int)uStack_70;
    if (0 < (int)uVar8) {
      lVar12 = 0x14;
      goto LAB_1443f1c09;
    }
  }
  else {
LAB_1443f1c09:
    local_90 = local_90 + (ulonglong)uVar8 * 2 + lVar12;
    iVar5 = (int)uStack_70;
  }
  local_98 = 0;
  if (1 < iVar5) {
    FUN_1446f470e(&local_98,local_78.QuadPart,1);
  }
  FUN_14619c2be(&local_88,&local_90,0);
  LVar3 = local_88;
  LVar7 = local_88;
  if (local_80 == 0) {
    LVar7.QuadPart = (LONGLONG)&DAT_149dfb77a;
  }
  uVar8 = _wtoi((wchar_t *)LVar7);
  plVar10 = (longlong *)(ulonglong)uVar8;
  if ((wchar_t *)LVar3.QuadPart != (wchar_t *)0x0) {
    FUN_1400020a8(LVar3.QuadPart);
  }
  FUN_14619c2be(&local_88,&local_90,0);
  LVar3 = local_88;
  LVar7 = local_88;
  if (local_80 == 0) {
    LVar7.QuadPart = (LONGLONG)&DAT_149dfb77a;
  }
  FUN_14052c20c(LVar7.QuadPart);
  if ((wchar_t *)LVar3.QuadPart != (wchar_t *)0x0) {
    FUN_1400020a8(LVar3.QuadPart);
  }
  FUN_14619c2be(&local_88,&local_90,0);
  LVar3 = local_88;
  LVar7.QuadPart = (LONGLONG)&DAT_149dfb77a;
  if (local_80 != 0) {
    LVar7 = local_88;
  }
  _wtof((wchar_t *)LVar7);
  if ((wchar_t *)LVar3.QuadPart != (wchar_t *)0x0) {
    FUN_1400020a8(LVar3.QuadPart);
  }
  plVar6 = (longlong *)FUN_1401e3228(&local_98);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x80))(plVar6,&local_88);
    if (((wchar_t *)local_88.QuadPart != (wchar_t *)0x0) &&
       ((**(code **)(*(longlong *)local_88 + 0x110))(local_88.QuadPart,local_a8,uVar8),
       local_a0 != (longlong *)0x0)) {
      LOCK();
      plVar10 = local_a0 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
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
    plVar10 = (longlong *)CONCAT44(uStack_7c,local_80);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar10 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
  }
  if ((wchar_t *)local_78.QuadPart != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  uVar9 = CONCAT71((int7)((ulonglong)plVar10 >> 8),1);
LAB_1443f1a24:
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 1443f1d92 FUN_1443f1d92 body=127 status=ok
// SIG undefined FUN_1443f1d92(void)

void FUN_1443f1d92(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446f470e(&DAT_14cbf61e8,L"UNSET",1);
  local_28 = 0x800000014ba6a668;
  local_14 = 0xd;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_146672f34(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443f1e25 FUN_1443f1e25 body=107 status=ok
// SIG undefined FUN_1443f1e25(void)

longlong FUN_1443f1e25(undefined8 *param_1)

{
  DWORD DVar1;
  longlong lVar2;
  undefined1 auStack_828 [32];
  undefined1 local_808 [2048];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_828;
  if (1 < *(int *)(param_1 + 1)) {
    lVar2 = FUN_14155261e(*param_1);
    if (lVar2 != 0) goto LAB_1443f1e55;
    DVar1 = GetLastError();
    FUN_14682f6b8(local_808,0x400,DVar1);
  }
  lVar2 = 0;
LAB_1443f1e55:
  if ((local_8 ^ (ulonglong)auStack_828) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443f1e91 FUN_1443f1e91 body=678 status=ok
// SIG undefined FUN_1443f1e91(void)

void FUN_1443f1e91(undefined8 *param_1)

{
  undefined4 uVar1;
  size_t sVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  wchar_t *pwVar7;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined2 *local_b0;
  undefined1 local_a8;
  undefined1 local_a0 [8];
  undefined2 *local_98;
  int local_90;
  undefined2 *local_88;
  int local_80;
  undefined4 local_7c;
  undefined2 *local_78;
  undefined8 uStack_70;
  undefined2 *local_68;
  int local_60;
  wchar_t *local_58;
  undefined8 uStack_50;
  wchar_t *local_48;
  undefined4 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(int *)(param_1 + 1) == 0) {
    local_58 = L"";
  }
  else {
    local_58 = (wchar_t *)*param_1;
  }
  if (local_58 == (wchar_t *)0x0) {
    uVar1 = 0;
  }
  else {
    sVar2 = wcslen(local_58);
    uVar1 = (int)sVar2;
  }
  uStack_50 = CONCAT44(uStack_50._4_4_,uVar1);
  local_48 = L"cef3.log";
  local_40 = 8;
  FUN_140bee87a(&local_68,&local_58,2);
  plVar3 = (longlong *)FUN_14054d1d4();
  puVar5 = local_68;
  if (local_60 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  lVar4 = (**(code **)(*plVar3 + 0x108))(plVar3,puVar5);
  puVar5 = local_68;
  if (0 < lVar4) {
    local_58 = (wchar_t *)0x0;
    uStack_50 = 0;
    local_78 = (undefined2 *)0x0;
    uStack_70 = 0;
    local_88 = (undefined2 *)0x0;
    lVar4 = (longlong)local_60;
    local_80 = local_60;
    if (lVar4 == 0) {
      local_7c = 0;
    }
    else {
      FUN_1446dd670(&local_88,local_60,0);
      memcpy(local_88,puVar5,lVar4 * 2);
    }
    FUN_140056680(&local_98,&DAT_149e0635c);
    local_b0 = (undefined2 *)CONCAT44(local_b0._4_4_,1);
    local_b8 = (undefined2 *)((ulonglong)local_b8._4_4_ << 0x20);
    FUN_1407cdbc6(&local_88,&local_98,&local_58,&local_78);
    if (local_98 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    puVar5 = &DAT_149dfb77a;
    if (local_60 != 0) {
      puVar5 = local_68;
    }
    (**(code **)(*plVar3 + 0xd0))(plVar3,local_a0,puVar5);
    puVar5 = &DAT_149dfb77a;
    if ((int)uStack_70 != 0) {
      puVar5 = local_78;
    }
    FUN_14047ad2e(local_a0,&local_98,L"%Y.%m.%d-%H.%M.%S");
    local_b8 = &DAT_149dfb77a;
    if (local_90 != 0) {
      local_b8 = local_98;
    }
    pwVar7 = L"";
    if ((int)uStack_50 != 0) {
      pwVar7 = local_58;
    }
    local_b0 = puVar5;
    FUN_140002266(&local_88,L"%s%s%s.%s",pwVar7,L"-backup-");
    if (local_98 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    puVar5 = &DAT_149dfb77a;
    if (local_60 != 0) {
      puVar5 = local_68;
    }
    puVar6 = &DAT_149dfb77a;
    if (local_80 != 0) {
      puVar6 = local_88;
    }
    local_b0 = (undefined2 *)((ulonglong)local_b0 & 0xffffffffffffff00);
    local_b8 = (undefined2 *)((ulonglong)local_b8 & 0xffffffffffffff00);
    local_a8 = 1;
    (**(code **)(*plVar3 + 0x40))(plVar3,puVar6,puVar5,0);
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_78 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_58 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443f2138 FUN_1443f2138 body=131 status=ok
// SIG undefined FUN_1443f2138(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1443f2138(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014ba6a828;
  local_14 = 9;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14171c728(&DAT_14cbf6204,&local_28);
  DAT_14cbf6230 = 0;
  _DAT_14cbf6238 = 0;
  atexit((_func_5014 *)&LAB_1443f1e14);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443f21bc FUN_1443f21bc body=69 status=ok
// SIG undefined FUN_1443f21bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1443f21bc(void)

{
  _DAT_14cbf6258 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001443f21fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf6260,1);
  return;
}



// FUNCTION 1443f2202 FUN_1443f2202 body=571 status=ok
// SIG undefined FUN_1443f2202(void)

void FUN_1443f2202(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  char *pcVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  undefined **local_40;
  longlong local_38;
  char local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)*param_3;
  if (DAT_14c7649b8 == '\x01') {
    FUN_14901fe1a(&local_40,"enable-gpu");
    (**(code **)(*plVar3 + 0x70))(plVar3,&local_40);
    local_40 = &PTR_FUN_14ba6d600;
    if ((local_38 != 0) && (local_30 == '\x01')) {
      cef_string_utf16_clear();
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    plVar3 = (longlong *)*param_3;
    pcVar2 = "enable-gpu-compositing";
  }
  else {
    FUN_14901fe1a(&local_40,"disable-gpu");
    (**(code **)(*plVar3 + 0x70))(plVar3,&local_40);
    local_40 = &PTR_FUN_14ba6d600;
    if ((local_38 != 0) && (local_30 == '\x01')) {
      cef_string_utf16_clear();
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    plVar3 = (longlong *)*param_3;
    pcVar2 = "disable-gpu-compositing";
  }
  FUN_14901fe1a(&local_40,pcVar2);
  (**(code **)(*plVar3 + 0x70))(plVar3,&local_40);
  local_40 = &PTR_FUN_14ba6d600;
  if ((local_38 != 0) && (local_30 == '\x01')) {
    cef_string_utf16_clear();
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  plVar3 = (longlong *)*param_3;
  FUN_14901fe1a(&local_40,"enable-begin-frame-scheduling");
  (**(code **)(*plVar3 + 0x70))(plVar3,&local_40);
  local_40 = &PTR_FUN_14ba6d600;
  if ((local_38 != 0) && (local_30 == '\x01')) {
    cef_string_utf16_clear();
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  plVar3 = (longlong *)*param_3;
  FUN_14901fe1a(&local_40,"disable-pinch");
  (**(code **)(*plVar3 + 0x70))(plVar3,&local_40);
  local_40 = &PTR_FUN_14ba6d600;
  if ((local_38 != 0) && (local_30 == '\x01')) {
    cef_string_utf16_clear();
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  plVar3 = (longlong *)*param_3;
  FUN_14901fe1a(&local_40,"disable-gpu-shader-disk-cache");
  (**(code **)(*plVar3 + 0x70))(plVar3,&local_40);
  local_40 = &PTR_FUN_14ba6d600;
  if ((local_38 != 0) && (local_30 == '\x01')) {
    cef_string_utf16_clear();
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  lVar1 = *param_3;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443f2450 FUN_1443f2450 body=975 status=ok
// SIG undefined FUN_1443f2450(void)

void FUN_1443f2450(longlong *param_1,int param_2,longlong *param_3,void *param_4,int param_5,
                  int param_6)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  uint uVar10;
  float fVar11;
  undefined1 auStack_98 [32];
  int *local_78;
  longlong local_68;
  undefined8 local_60;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(char *)((longlong)param_1 + 0xc3) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0xc3) = 0;
    if (param_1[(longlong)param_2 + 6] != 0) {
      if (((DAT_14c98e618 == 0) ||
          (plVar8 = *(longlong **)(DAT_14c98e618 + 0x20), plVar8 == (longlong *)0x0)) ||
         (cVar3 = (**(code **)(*plVar8 + 0x198))(plVar8), cVar3 != '\0')) {
        FUN_149032c50(param_1);
      }
      else {
        (**(code **)(*plVar8 + 0x130))(plVar8,param_1[(longlong)param_2 + 6]);
        if (((DAT_14c98e618 == 0) || (*(longlong **)(DAT_14c98e618 + 0x20) == (longlong *)0x0)) ||
           (cVar3 = (**(code **)(**(longlong **)(DAT_14c98e618 + 0x20) + 0x198))(), cVar3 != '\0'))
        {
          FUN_149032c50(param_1);
        }
        param_1[(longlong)param_2 + 6] = 0;
      }
    }
  }
  plVar8 = (longlong *)param_1[(longlong)param_2 + 6];
  if (plVar8 == (longlong *)0x0) {
    if (((DAT_14c98e618 == 0) ||
        (plVar8 = *(longlong **)(DAT_14c98e618 + 0x20), plVar8 == (longlong *)0x0)) ||
       (cVar3 = (**(code **)(*plVar8 + 0x198))(plVar8), cVar3 != '\0')) {
LAB_1443f258f:
      FUN_149032c50(param_1);
    }
    else {
      lVar5 = (**(code **)(*plVar8 + 0x120))(plVar8,param_5,param_6);
      param_1[(longlong)param_2 + 6] = lVar5;
      if (((DAT_14c98e618 == 0) || (*(longlong **)(DAT_14c98e618 + 0x20) == (longlong *)0x0)) ||
         (cVar3 = (**(code **)(**(longlong **)(DAT_14c98e618 + 0x20) + 0x198))(), cVar3 != '\0'))
      goto LAB_1443f258f;
    }
    plVar8 = (longlong *)param_1[(longlong)param_2 + 6];
    if (plVar8 == (longlong *)0x0) {
      *(undefined1 *)((longlong)param_1 + 0x95) = 1;
      goto LAB_1443f2666;
    }
  }
  lVar5 = *param_3;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  if (param_3[1] - lVar5 == 0x20) {
    local_58 = *(int *)(lVar5 + 8);
    local_54 = *(int *)(lVar5 + 0xc);
    local_4c = *(int *)(lVar5 + 0x14) + local_54;
    local_50 = *(int *)(lVar5 + 0x10) + local_58;
  }
  if ((param_2 == 0) && (plVar2 = (longlong *)param_1[0x67], plVar2 != (longlong *)0x0)) {
    puVar9 = (undefined8 *)((longlong)(int)plVar2[2] * 8 + *plVar2);
    if (((int)plVar2[2] == *(int *)((longlong)plVar2 + 0x14)) &&
       (0 < *(int *)((longlong)plVar2 + 0x1c))) {
      FUN_1443f7668(puVar9);
      *(int *)((longlong)plVar2 + 0x14) = (*(int *)((longlong)plVar2 + 0x14) + 1) % (int)plVar2[1];
    }
    puVar6 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *puVar6 = 0;
    puVar6[1] = 0;
    *(int *)(puVar6 + 2) = param_5;
    *(int *)((longlong)puVar6 + 0x14) = param_6;
    *(undefined4 *)(puVar6 + 3) = 4;
    uVar10 = param_5 * param_6 * 4;
    FUN_140393c76(puVar6,uVar10,1);
    if (param_4 != (void *)0x0) {
      memcpy((void *)*puVar6,param_4,(ulonglong)uVar10);
    }
    *puVar9 = puVar6;
    iVar1 = (int)plVar2[1];
    *(int *)(plVar2 + 2) = ((int)plVar2[2] + 1) % iVar1;
    iVar4 = *(int *)((longlong)plVar2 + 0x1c) + 1;
    if (iVar1 < iVar4) {
      iVar4 = iVar1;
    }
    *(int *)((longlong)plVar2 + 0x1c) = iVar4;
    lVar5 = plVar2[3];
    *(int *)(plVar2 + 3) = (int)lVar5 + 1;
    *(undefined1 *)((longlong)param_1 + 0x95) = 1;
    if ((int)lVar5 != 0) goto LAB_1443f2666;
  }
  else {
    local_78 = &local_58;
    (**(code **)(*plVar8 + 0x38))(plVar8,param_5,param_6,param_4);
    if ((DAT_14c98e618 == 0) ||
       ((*(longlong **)(DAT_14c98e618 + 0x20) == (longlong *)0x0 ||
        (cVar3 = (**(code **)(**(longlong **)(DAT_14c98e618 + 0x20) + 0x198))(), cVar3 != '\0')))) {
      FUN_149032c50(param_1);
    }
    if ((param_2 == 1) && ((char)param_1[0x61] == '\x01')) {
      *(undefined1 *)(param_1 + 0x61) = 0;
      *(undefined1 *)((longlong)param_1 + 0x2fc) = 1;
      fVar11 = (float)FUN_145788320((float)(int)param_1[0x60],
                                    (float)*(int *)((longlong)param_1 + 0x304));
      local_68 = param_1[0x60];
      local_60 = CONCAT44((int)((ulonglong)local_68 >> 0x20) + (int)((float)param_6 / fVar11),
                          (int)((float)param_5 / fVar11) + (int)local_68);
      uVar7 = (**(code **)(*param_1 + 0x1d0))(param_1);
      FUN_149048d68(uVar7,&local_68);
    }
    *(undefined1 *)((longlong)param_1 + 0x95) = 1;
  }
  FUN_1447f69b6(param_1 + 0x22);
LAB_1443f2666:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443f2820 FUN_1443f2820 body=3121 status=ok
// SIG undefined FUN_1443f2820(void)

void FUN_1443f2820(longlong *param_1,int param_2,longlong *param_3,undefined8 param_4)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong *plVar5;
  ulonglong uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  DWORD DVar12;
  DWORD DVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined8 uVar18;
  undefined4 *puVar19;
  uint *puVar20;
  uint *puVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  ulonglong uVar24;
  longlong lVar25;
  float fVar26;
  undefined1 auStack_198 [32];
  undefined8 *local_178;
  undefined8 local_170;
  undefined1 local_168;
  int local_160;
  DWORD local_15c;
  longlong *local_158;
  longlong *local_150;
  ulonglong local_148;
  longlong local_140;
  longlong *local_138;
  longlong *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  longlong *local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  longlong local_c8 [5];
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if ((*(char *)((longlong)param_1 + 0xc3) == '\0') &&
     (*(undefined1 *)((longlong)param_1 + 0xc3) = 1, param_1[(longlong)param_2 + 6] != 0)) {
    if ((DAT_14c98e618 == 0) ||
       ((plVar17 = *(longlong **)(DAT_14c98e618 + 0x20), plVar17 == (longlong *)0x0 ||
        (cVar7 = (**(code **)(*plVar17 + 0x198))(plVar17), cVar7 != '\0')))) {
      FUN_149032c50(param_1);
    }
    else {
      (**(code **)(*plVar17 + 0x130))(plVar17,param_1[(longlong)param_2 + 6]);
      if (((DAT_14c98e618 == 0) || (*(longlong **)(DAT_14c98e618 + 0x20) == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(**(longlong **)(DAT_14c98e618 + 0x20) + 0x198))(), cVar7 != '\0')) {
        FUN_149032c50(param_1);
      }
      param_1[(longlong)param_2 + 6] = 0;
    }
  }
  lVar25 = *param_3;
  if (param_3[1] - lVar25 == 0x20) {
    uVar18 = *(undefined8 *)(lVar25 + 8);
    uVar23 = CONCAT44(*(int *)(lVar25 + 0x14) + *(int *)(lVar25 + 0xc),
                      *(int *)(lVar25 + 0x10) + *(int *)(lVar25 + 8));
  }
  else {
    uVar18 = 0;
    uVar23 = 0;
  }
  plVar17 = (longlong *)param_1[(longlong)param_2 + 6];
  if (plVar17 == (longlong *)0x0) {
    if (((DAT_14c98e618 == 0) ||
        (plVar17 = *(longlong **)(DAT_14c98e618 + 0x20), plVar17 == (longlong *)0x0)) ||
       (cVar7 = (**(code **)(*plVar17 + 0x198))(plVar17), cVar7 != '\0')) {
LAB_1443f2b3a:
      FUN_149032c50(param_1);
    }
    else {
      if (param_1[0x70] == 0) {
        lVar25 = (**(code **)(*plVar17 + 0x128))(plVar17,param_4);
      }
      else {
        local_158 = (longlong *)0x0;
        puVar14 = (undefined8 *)(**(code **)(*DAT_14ca83900 + 0x3b8))();
        iVar8 = (**(code **)*puVar14)(puVar14,&DAT_14ab40bc0,&local_158);
        if (-1 < iVar8) {
          local_f0 = (longlong *)0x0;
          iVar8 = (**(code **)(*local_158 + 0x180))(local_158,param_4,&DAT_14ab40910);
          if (-1 < iVar8) {
            (**(code **)(*local_f0 + 0x50))(local_f0,&local_e8);
            lVar15 = FUN_14001cc68(0x58,0x10);
            local_178 = &local_128;
            local_128 = 0;
            uStack_120 = 0;
            local_168 = 1;
            local_170 = 0x100;
            FUN_1415e0d68(lVar15,(ulonglong)local_e8 & 0xffffffff,local_e8._4_4_,0x25);
            iVar8 = *(int *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0xc60);
            if (DAT_14c86a9fc == 0) {
              if (iVar8 != 2) {
                if (iVar8 != 1) goto LAB_1443f2a82;
                DVar12 = FUN_140ad26c0();
                DVar13 = GetCurrentThreadId();
                if (DVar12 == DVar13) goto LAB_1443f2a87;
                goto LAB_1443f2ae5;
              }
LAB_1443f2a87:
              (**(code **)(*(longlong *)(lVar15 + 0x20) + 0x18))(lVar15 + 0x20,&DAT_14ca85100);
            }
            else {
LAB_1443f2a82:
              if (iVar8 == 0x10) goto LAB_1443f2a87;
LAB_1443f2ae5:
              lVar25 = lVar15 + 0x20;
              if (lVar15 == 0) {
                lVar25 = 0;
              }
              FUN_140308182(lVar25,0);
            }
            lVar25 = lVar15 + 0x10;
            if (lVar15 == 0) {
              lVar25 = 0;
            }
            goto LAB_1443f2b02;
          }
        }
        lVar25 = 0;
      }
LAB_1443f2b02:
      param_1[(longlong)param_2 + 6] = lVar25;
      if ((DAT_14c98e618 == 0) || (*(longlong **)(DAT_14c98e618 + 0x20) == (longlong *)0x0)) {
        uVar18 = 0;
        uVar23 = 0;
        goto LAB_1443f2b3a;
      }
      cVar7 = (**(code **)(**(longlong **)(DAT_14c98e618 + 0x20) + 0x198))();
      uVar18 = 0;
      uVar23 = 0;
      if (cVar7 != '\0') goto LAB_1443f2b3a;
    }
    plVar17 = (longlong *)param_1[(longlong)param_2 + 6];
    if (plVar17 == (longlong *)0x0) {
      *(undefined1 *)((longlong)param_1 + 0x95) = 1;
      goto LAB_1443f2f76;
    }
  }
  fVar26 = (float)(int)((ulonglong)uVar18 >> 0x20);
  fVar4 = (float)(int)((ulonglong)uVar23 >> 0x20);
  iVar8 = param_2;
  if (param_1[0x70] == 0) {
    fVar2 = *(float *)(param_1 + 0x12);
    fVar26 = fVar26 * fVar2;
    fVar3 = (float)(int)uVar18 * fVar2;
    fVar4 = fVar4 * fVar2;
    fVar2 = (float)(int)uVar23 * fVar2;
    local_178 = &local_e8;
    local_e8 = (undefined1 *)
               CONCAT44((int)((ulonglong)(longlong)ROUND(fVar26 + fVar26 + -0.5) >> 1),
                        (int)((ulonglong)(longlong)ROUND(fVar3 + fVar3 + -0.5) >> 1));
    local_e0 = CONCAT44(-(int)((ulonglong)(longlong)ROUND(-0.5 - (fVar4 + fVar4)) >> 1),
                        -(int)((ulonglong)(longlong)ROUND(-0.5 - (fVar2 + fVar2)) >> 1));
    (**(code **)(*plVar17 + 0x48))(plVar17,param_4,1,0);
  }
  else {
    fVar2 = *(float *)(param_1 + 0x12);
    local_f0 = (longlong *)0x0;
    puVar14 = (undefined8 *)(**(code **)(*DAT_14ca83900 + 0x3b8))();
    iVar9 = (**(code **)*puVar14)(puVar14,&DAT_14ab40bc0,&local_f0);
    if (-1 < iVar9) {
      local_f8 = (longlong *)0x0;
      iVar9 = (**(code **)(*local_f0 + 0x180))(local_f0,param_4,&DAT_14ab40910);
      if (-1 < iVar9) {
        (**(code **)(*local_f8 + 0x50))(local_f8,&local_128);
        puVar14 = (undefined8 *)(**(code **)(*plVar17 + 8))(plVar17);
        iVar9 = (**(code **)*puVar14)(puVar14);
        if (iVar9 == (int)local_128) {
          plVar16 = (longlong *)(**(code **)(*plVar17 + 8))(plVar17);
          iVar9 = (**(code **)(*plVar16 + 8))(plVar16);
          if (iVar9 != local_128._4_4_) goto LAB_1443f2d93;
          fVar26 = fVar26 * fVar2;
          fVar3 = (float)(int)uVar18 * fVar2;
          fVar4 = fVar4 * fVar2;
          fVar2 = (float)(int)uVar23 * fVar2;
          uVar24 = ((longlong)ROUND(fVar26 + fVar26 + -0.5) & 0xfffffffffffffffeU) << 0x1f |
                   (ulonglong)(longlong)ROUND(fVar3 + fVar3 + -0.5) >> 1 & 0xffffffff;
          lVar25 = (ulonglong)(uint)-(int)((ulonglong)(longlong)ROUND(-0.5 - (fVar2 + fVar2)) >> 1)
                   + ((longlong)ROUND(-0.5 - (fVar4 + fVar4)) & 0xfffffffffffffffeU) * -0x80000000;
        }
        else {
LAB_1443f2d93:
          (**(code **)(*plVar17 + 0x20))(plVar17,local_128 & 0xffffffff,local_128._4_4_);
          lVar25 = 0;
          uVar24 = 0;
        }
        local_130 = (longlong *)0x0;
        iVar9 = (**(code **)*local_f8)(local_f8,&DAT_14ab40930);
        plVar16 = local_130;
        if (-1 < iVar9) {
          local_158 = local_130;
          local_160 = param_2;
          if (local_130 != (longlong *)0x0) {
            (**(code **)(*local_130 + 8))(local_130);
          }
          plVar5 = local_f8;
          local_138 = local_f8;
          lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          iVar8 = *(int *)(lVar15 + 0xc60);
          local_150 = plVar17;
          local_148 = uVar24;
          local_140 = lVar25;
          if (DAT_14c86a9fc == 0) {
            if (iVar8 != 2) {
              if (iVar8 != 1) goto LAB_1443f2e24;
              local_15c = FUN_140ad26c0();
              DVar12 = GetCurrentThreadId();
              if (local_15c == DVar12) goto LAB_1443f2e29;
              goto LAB_1443f2e57;
            }
LAB_1443f2e29:
            FUN_1443fc164(&local_158);
            iVar8 = local_160;
          }
          else {
LAB_1443f2e24:
            if (iVar8 == 0x10) goto LAB_1443f2e29;
LAB_1443f2e57:
            if (DAT_14ca9a438 == '\0') {
              if ((DAT_14c86a9f8 != '\x01') || (iVar8 = *(int *)(lVar15 + 0xc60), iVar8 == 2))
              goto LAB_1443f2e29;
              if (iVar8 == 1) {
                DVar12 = FUN_140ad26c0();
                DVar13 = GetCurrentThreadId();
                if (DVar12 == DVar13) goto LAB_1443f2e29;
              }
            }
            iVar8 = local_160;
            if (DAT_14ca9a43c == 0) {
              puVar14 = (undefined8 *)
                        (*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308)
              ;
              puVar20 = (uint *)*puVar14;
              if (puVar20 != (uint *)0x0) goto LAB_1443f312b;
              while( true ) {
                uVar10 = *(uint *)(*(longlong *)
                                    ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8
                                    ) + 0x318);
                if ((uVar10 & 1) == 0) {
                  *(uint *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x318) = uVar10 | 1;
                  __tlregdtor(&LAB_1443fc3d2);
                }
                lVar25 = *(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
                puVar19 = *(undefined4 **)(lVar25 + 0x310);
                *(undefined8 *)(lVar25 + 0x310) = 0;
                if (puVar19 == (undefined4 *)0x0) {
                  puVar19 = _aligned_malloc(0x10000,0x10000);
                }
                *puVar19 = 0xffffffff;
                *(undefined4 **)(puVar19 + 0x10) = puVar19 + 0x16;
                puVar19[0x12] = 0;
                *puVar14 = puVar19;
                FUN_140217a48(puVar14);
                puVar20 = (uint *)*puVar14;
LAB_1443f312b:
                puVar22 = (undefined8 *)(*(longlong *)(puVar20 + 0x10) + 7U & 0xfffffffffffffff8);
                puVar21 = (uint *)(puVar22 + 0x1a);
                uVar10 = puVar20[0x12];
                if (puVar21 <= puVar20 + 0x4000) break;
                while( true ) {
                  *(uint **)(puVar20 + 0x10) = puVar20 + 0x4000;
                  LOCK();
                  uVar11 = *puVar20;
                  *puVar20 = *puVar20 + uVar10 + 1;
                  UNLOCK();
                  if ((uVar11 ^ uVar10) != 0xffffffff) break;
                  puVar20 = (uint *)*puVar14;
                  *puVar20 = 0xffffffff;
                  *(uint **)(puVar20 + 0x10) = puVar20 + 0x16;
                  puVar20[0x12] = 0;
                  *puVar14 = puVar20;
                  puVar22 = (undefined8 *)((longlong)puVar20 + 0x5fU & 0xfffffffffffffff8);
                  puVar21 = (uint *)(puVar22 + 0x1a);
                  uVar10 = 0;
                  if (puVar21 <= puVar20 + 0x4000) {
                    uVar10 = 1;
                    goto LAB_1443f31ab;
                  }
                }
              }
              uVar10 = uVar10 + 1;
LAB_1443f31ab:
              *(uint **)(puVar20 + 0x10) = puVar21;
              puVar20[0x12] = uVar10;
              iVar9 = 0;
              FUN_1447247dc(puVar22,0);
              *puVar22 = &PTR_FUN_14ba6d918;
              puVar22[0x15] = local_158;
              local_158 = (longlong *)0x0;
              puVar22[0x16] = local_150;
              puVar22[0x17] = local_148;
              puVar22[0x18] = local_140;
              puVar22[0x19] = local_138;
              if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                uVar10 = DAT_14c7585c8 >> 10 & 3;
                if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar10 < 2) {
                  uVar24 = (ulonglong)(byte)(&DAT_149e38edc)[uVar10];
                  iVar9 = 0;
                }
                else {
                  uVar24 = 2;
                }
              }
              else {
                iVar9 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                        *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                uVar24 = 5;
              }
              if (*(code **)(puVar22[0xe] + 0x18) != FUN_144713626) {
                (**(code **)(puVar22[0xe] + 0x18))(puVar22 + 0xe,puVar22 + 9);
              }
              puVar22[0xe] = LowLevelTasks::
                             TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                             TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                             ::vftable;
              puVar22[9] = puVar22;
              puVar22[10] = puVar22;
              lVar25 = *(longlong *)
                        (*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8)
              ;
              if (lVar25 == 0) {
                uVar6 = 1;
                if ((char)uVar24 != '\x06') {
                  uVar6 = uVar24;
                }
                uVar24 = uVar6;
                uVar18 = 0;
              }
              else {
                if ((char)uVar24 == '\x06') {
                  uVar24 = *(ulonglong *)(lVar25 + 0x38) >> 0x3b;
                }
                uVar18 = *(undefined8 *)(lVar25 + 0x30);
              }
              puVar22[0xf] = uVar18;
              puVar22[0x10] = uVar24 << 0x3b | 0xc00000527800b400;
              *(int *)((longlong)puVar22 + 0x1c) = iVar9;
              if (puVar22 == (undefined8 *)0x0) {
                local_e8 = (undefined1 *)CONCAT71(local_e8._1_7_,1);
                FUN_1447439e4(0);
              }
              else {
                LOCK();
                *(int *)(puVar22 + 1) = *(int *)(puVar22 + 1) + 1;
                UNLOCK();
                local_e8 = (undefined1 *)CONCAT71(local_e8._1_7_,1);
                FUN_1447439e4(puVar22);
                LOCK();
                piVar1 = (int *)(puVar22 + 1);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)*puVar22)(puVar22,1);
                }
              }
            }
            else {
              local_e8 = (undefined1 *)0x0;
              local_d8 = (longlong *)FUN_14001cc68(0x30,8);
              *local_d8 = (longlong)&PTR_LAB_14ba6d8d0;
              local_158 = (longlong *)0x0;
              local_d8[1] = (longlong)plVar16;
              local_d8[2] = (longlong)plVar17;
              local_d8[3] = uVar24;
              local_d8[4] = lVar25;
              local_d8[5] = (longlong)plVar5;
              if (local_d8 + 1 != (longlong *)0x0) {
                local_e8 = &LAB_1443fc36a;
              }
              local_178 = &local_e8;
              FUN_14005a792(&DAT_14ca9a440,L"CEFAcceleratedPaint",&DAT_14cbf658c);
              iVar8 = local_160;
              if (local_e8 != (undefined1 *)0x0) {
                plVar17 = local_d8;
                if (local_d8 == (longlong *)0x0) {
                  plVar17 = local_c8;
                }
                (**(code **)(*plVar17 + 0x10))();
                iVar8 = local_160;
              }
            }
          }
          if (local_158 != (longlong *)0x0) {
            (**(code **)(*local_158 + 0x10))();
          }
        }
        if (local_130 != (longlong *)0x0) {
          (**(code **)(*local_130 + 0x10))();
        }
      }
    }
  }
  if ((iVar8 == 1) && ((char)param_1[0x61] == '\x01')) {
    *(undefined1 *)(param_1 + 0x61) = 0;
    *(undefined1 *)((longlong)param_1 + 0x2fc) = 1;
    fVar26 = (float)FUN_145788320((float)(int)param_1[0x60],
                                  (float)*(int *)((longlong)param_1 + 0x304));
    plVar17 = (longlong *)(**(code **)(*(longlong *)param_1[(longlong)param_2 + 6] + 8))();
    uVar10 = (**(code **)(*plVar17 + 8))(plVar17);
    puVar14 = (undefined8 *)(**(code **)(*(longlong *)param_1[(longlong)param_2 + 6] + 8))();
    uVar11 = (**(code **)*puVar14)(puVar14);
    local_e8 = (undefined1 *)param_1[0x60];
    local_e0 = CONCAT44((int)((ulonglong)local_e8 >> 0x20) + (int)((float)uVar10 / fVar26),
                        (int)((float)uVar11 / fVar26) + (int)local_e8);
    uVar18 = (**(code **)(*param_1 + 0x1d0))(param_1);
    FUN_149048d68(uVar18,&local_e8);
  }
  *(undefined1 *)((longlong)param_1 + 0x95) = 1;
  FUN_1447f69b6(param_1 + 0x22);
LAB_1443f2f76:
  if ((local_a0 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443f3452 FUN_1443f3452 body=111 status=ok
// SIG undefined FUN_1443f3452(void)

void FUN_1443f3452(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001443f34b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
    return;
  }
  return;
}



// FUNCTION 1443f34c2 FUN_1443f34c2 body=221 status=ok
// SIG undefined FUN_1443f34c2(void)

ulonglong FUN_1443f34c2(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  bool bVar8;
  longlong *in_stack_00000040;
  
  plVar3 = *(longlong **)(param_1 + 0xe8);
  if (plVar3 == (longlong *)0x0) {
LAB_1443f3555:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1443f3555;
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
    bVar8 = *(longlong *)(param_1 + 0xe0) != 0;
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),bVar8);
    if ((bVar8) && (lVar4 = *in_stack_00000040, lVar4 != 0)) {
      (*(code *)**(undefined8 **)(lVar4 + *(int *)(*(longlong *)(lVar4 + 8) + 4) + 8))();
      (**(code **)(*(longlong *)(lVar4 + *(int *)(*(longlong *)(lVar4 + 8) + 4) + 8) + 8))();
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
  lVar4 = *param_2;
  if (lVar4 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar4 + 8) + 4) + lVar4 + 8) + 8))();
  }
  lVar4 = *in_stack_00000040;
  if (lVar4 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar4 + 8) + 4) + lVar4 + 8) + 8))();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 1443f359f FUN_1443f359f body=566 status=ok
// SIG undefined FUN_1443f359f(void)

void FUN_1443f359f(longlong *param_1,longlong *param_2,undefined8 *param_3,int param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined **local_50;
  longlong local_48;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = (longlong)param_4;
  uVar2 = (**(code **)(*(longlong *)*param_2 + 0x50))((longlong *)*param_2,lVar3);
  switch(uVar2) {
  case 1:
    (**(code **)(*(longlong *)*param_1 + 0xa8))((longlong *)*param_1,param_3);
    break;
  case 2:
    plVar1 = (longlong *)*param_1;
    uVar2 = (**(code **)(*(longlong *)*param_2 + 0x60))((longlong *)*param_2,lVar3);
    (**(code **)(*plVar1 + 0xb0))(plVar1,param_3,uVar2);
    break;
  case 3:
    plVar1 = (longlong *)*param_1;
    uVar2 = (**(code **)(*(longlong *)*param_2 + 0x68))((longlong *)*param_2,lVar3);
    (**(code **)(*plVar1 + 0xb8))(plVar1,param_3,uVar2);
    break;
  case 4:
    plVar1 = (longlong *)*param_1;
    uVar2 = (**(code **)(*(longlong *)*param_2 + 0x70))((longlong *)*param_2,lVar3);
    (**(code **)(*plVar1 + 0xc0))(plVar1,param_3,uVar2);
    break;
  case 5:
    plVar1 = (longlong *)*param_1;
    (**(code **)(*(longlong *)*param_2 + 0x78))((longlong *)*param_2,&local_50,lVar3);
    (**(code **)(*plVar1 + 200))(plVar1,param_3,&local_50);
    local_50 = &PTR_FUN_14ba6d600;
    if (((local_48 != 0) && (local_40 == '\x01')) && (cef_string_utf16_clear(), local_48 != 0)) {
      FUN_1400020a8();
    }
    break;
  case 6:
    plVar1 = (longlong *)*param_1;
    (**(code **)(*(longlong *)*param_2 + 0x80))((longlong *)*param_2,local_58,lVar3);
    (**(code **)(*plVar1 + 0xd0))(plVar1,param_3,local_58);
    break;
  case 7:
    plVar1 = (longlong *)*param_1;
    (**(code **)(*(longlong *)*param_2 + 0x88))((longlong *)*param_2,local_60,lVar3);
    (**(code **)(*plVar1 + 0xd8))(plVar1,param_3,local_60);
    break;
  case 8:
    plVar1 = (longlong *)*param_1;
    (**(code **)(*(longlong *)*param_2 + 0x90))((longlong *)*param_2,local_68,lVar3);
    (**(code **)(*plVar1 + 0xe0))(plVar1,param_3,local_68);
  }
  lVar3 = *param_1;
  if (lVar3 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar3 + 8) + 4) + lVar3 + 8) + 8))();
  }
  lVar3 = *param_2;
  if (lVar3 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar3 + 8) + 4) + lVar3 + 8) + 8))();
  }
  *param_3 = &PTR_FUN_14ba6d600;
  FUN_149046764(param_3);
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443f37d6 FUN_1443f37d6 body=832 status=ok
// SIG undefined FUN_1443f37d6(void)

void FUN_1443f37d6(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  undefined **local_70;
  longlong local_68;
  char local_60;
  undefined **local_58;
  longlong local_50;
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)*param_2;
  FUN_1490201ba(&local_58,param_3);
  uVar4 = (**(code **)(*plVar1 + 0x58))(plVar1,&local_58);
  local_58 = &PTR_FUN_14ba6d600;
  if (((local_50 != 0) && (local_48 == '\x01')) && (cef_string_utf16_clear(), local_50 != 0)) {
    FUN_1400020a8();
  }
  switch(uVar4) {
  case 1:
    (**(code **)(*(longlong *)*param_1 + 0xa0))((longlong *)*param_1,0);
    goto switchD_1443f3864_default;
  case 2:
    plVar1 = (longlong *)*param_1;
    plVar3 = (longlong *)*param_2;
    FUN_1490201ba(&local_58,param_3);
    uVar4 = (**(code **)(*plVar3 + 0x68))(plVar3,&local_58);
    (**(code **)(*plVar1 + 0xa8))(plVar1,0,uVar4);
    break;
  case 3:
    plVar1 = (longlong *)*param_1;
    plVar3 = (longlong *)*param_2;
    FUN_1490201ba(&local_58,param_3);
    uVar4 = (**(code **)(*plVar3 + 0x70))(plVar3,&local_58);
    (**(code **)(*plVar1 + 0xb0))(plVar1,0,uVar4);
    break;
  case 4:
    plVar1 = (longlong *)*param_1;
    plVar3 = (longlong *)*param_2;
    FUN_1490201ba(&local_58,param_3);
    uVar4 = (**(code **)(*plVar3 + 0x78))(plVar3,&local_58);
    (**(code **)(*plVar1 + 0xb8))(plVar1,0,uVar4);
    break;
  case 5:
    plVar1 = (longlong *)*param_1;
    plVar3 = (longlong *)*param_2;
    FUN_1490201ba(&local_70,param_3);
    (**(code **)(*plVar3 + 0x80))(plVar3,&local_58,&local_70);
    (**(code **)(*plVar1 + 0xc0))(plVar1,0,&local_58);
    local_58 = &PTR_FUN_14ba6d600;
    if (local_50 != 0) {
      if ((local_48 == '\x01') && (cef_string_utf16_clear(), local_50 != 0)) {
        FUN_1400020a8();
      }
      local_50 = 0;
      local_48 = '\0';
    }
    local_70 = &PTR_FUN_14ba6d600;
    if ((local_68 == 0) || (local_60 != '\x01')) goto switchD_1443f3864_default;
    cef_string_utf16_clear();
    goto LAB_1443f3b04;
  case 6:
    plVar1 = (longlong *)*param_1;
    plVar3 = (longlong *)*param_2;
    FUN_1490201ba(&local_58,param_3);
    (**(code **)(*plVar3 + 0x88))(plVar3,local_78,&local_58);
    (**(code **)(*plVar1 + 200))(plVar1,0,local_78);
    break;
  case 7:
    plVar1 = (longlong *)*param_1;
    plVar3 = (longlong *)*param_2;
    FUN_1490201ba(&local_58,param_3);
    (**(code **)(*plVar3 + 0x90))(plVar3,local_80,&local_58);
    (**(code **)(*plVar1 + 0xd0))(plVar1,0,local_80);
    break;
  case 8:
    plVar1 = (longlong *)*param_1;
    plVar3 = (longlong *)*param_2;
    FUN_1490201ba(&local_58,param_3);
    (**(code **)(*plVar3 + 0x98))(plVar3,local_88,&local_58);
    (**(code **)(*plVar1 + 0xd8))(plVar1,0,local_88);
    break;
  default:
    goto switchD_1443f3864_default;
  }
  local_58 = &PTR_FUN_14ba6d600;
  if ((local_50 != 0) && (local_48 == '\x01')) {
    cef_string_utf16_clear();
    local_68 = local_50;
LAB_1443f3b04:
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
switchD_1443f3864_default:
  lVar2 = *param_1;
  if (lVar2 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))();
  }
  lVar2 = *param_2;
  if (lVar2 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))();
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}


