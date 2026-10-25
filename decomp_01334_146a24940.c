// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146a24940 FUN_146a24940 body=144 status=ok
// SIG undefined FUN_146a24940(void)

void FUN_146a24940(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f0f120;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f09450;
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  puVar1[6] = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
                    /* WARNING: Could not recover jumptable at 0x000146a249c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)(puVar3,puVar1 + 6);
    return;
  }
  return;
}



// FUNCTION 146a249d0 FUN_146a249d0 body=144 status=ok
// SIG undefined FUN_146a249d0(void)

void FUN_146a249d0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f0f120;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f09450;
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  puVar1[6] = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
                    /* WARNING: Could not recover jumptable at 0x000146a24a55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)(puVar3,puVar1 + 6);
    return;
  }
  return;
}



// FUNCTION 146a24a60 FUN_146a24a60 body=171 status=ok
// SIG undefined FUN_146a24a60(void)

void FUN_146a24a60(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f0f120;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f09450;
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
                    /* WARNING: Could not recover jumptable at 0x000146a24afb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146a24b0c FUN_146a24b0c body=44 status=ok
// SIG undefined FUN_146a24b0c(void)

void FUN_146a24b0c(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x20);
  plVar2 = (longlong *)(param_1 + 0x40);
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_1 + 0x30);
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000146a24b35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}



// FUNCTION 146a24b38 FUN_146a24b38 body=43 status=ok
// SIG undefined FUN_146a24b38(void)

undefined8 FUN_146a24b38(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  plVar3 = (longlong *)(param_1 + 0x40);
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x30);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  return 1;
}



// FUNCTION 146a24b66 FUN_146a24b66 body=58 status=ok
// SIG undefined FUN_146a24b66(void)

void FUN_146a24b66(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*(char *)(param_1 + 0x24) == '\x01') {
      *(undefined1 *)(param_1 + 0x24) = 0;
    }
    if (*(char *)(param_1 + 0x1c) == '\x01') {
      *(undefined1 *)(param_1 + 0x1c) = 0;
    }
    FUN_146a24ba0(param_1);
    param_1 = param_1 + 0x28;
  }
  return;
}



// FUNCTION 146a24ba0 FUN_146a24ba0 body=83 status=ok
// SIG undefined FUN_146a24ba0(void)

void FUN_146a24ba0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
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
  puVar4 = (undefined8 *)*param_1;
  if (puVar4 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146a24be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar4)(puVar4,1);
    return;
  }
  return;
}



// FUNCTION 146a24bf4 FUN_146a24bf4 body=194 status=ok
// SIG undefined FUN_146a24bf4(void)

longlong FUN_146a24bf4(longlong param_1,longlong param_2)

{
  FUN_146a24d4a();
  FUN_140a5250a(param_1 + 0x50,param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  *(undefined1 *)(param_1 + 0x94) = *(undefined1 *)(param_2 + 0x94);
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)(param_2 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0xac) = *(undefined1 *)(param_2 + 0xac);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_2 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  *(undefined4 *)(param_2 + 0xb8) = 0;
  return param_1;
}



// FUNCTION 146a24cb6 FUN_146a24cb6 body=147 status=ok
// SIG undefined FUN_146a24cb6(void)

void FUN_146a24cb6(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc0,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc0)) {
      uVar5 = uVar4 / 0xc0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146a24d4a FUN_146a24d4a body=118 status=ok
// SIG undefined FUN_146a24d4a(void)

void FUN_146a24d4a(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *param_2 = 0;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  uVar2 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar2;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[6] = param_2[6];
  param_2[6] = 0;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)(param_2 + 7) = 0;
  cVar1 = *(char *)((longlong)param_2 + 0x44);
  *(char *)((longlong)param_1 + 0x44) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  }
  cVar1 = *(char *)((longlong)param_2 + 0x4c);
  *(char *)((longlong)param_1 + 0x4c) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  }
  return;
}



// FUNCTION 146a24dc0 FUN_146a24dc0 body=83 status=ok
// SIG undefined FUN_146a24dc0(void)

void FUN_146a24dc0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
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
  puVar4 = (undefined8 *)*param_1;
  if (puVar4 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146a24e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar4)(puVar4,1);
    return;
  }
  return;
}



// FUNCTION 146a24e13 FUN_146a24e13 body=41 status=ok
// SIG undefined FUN_146a24e13(void)

void FUN_146a24e13(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146a0989a(param_1);
    param_1 = param_1 + 0xc0;
  }
  return;
}



// FUNCTION 146a24e3c FUN_146a24e3c body=38 status=ok
// SIG undefined FUN_146a24e3c(void)

undefined8 FUN_146a24e3c(undefined8 param_1,int param_2)

{
  FUN_146a24ebe();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a24e62 FUN_146a24e62 body=91 status=ok
// SIG undefined FUN_146a24e62(void)

ulonglong FUN_146a24e62(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  ulonglong uVar5;
  
  plVar2 = *(longlong **)(param_1 + 0xb8);
  plVar3 = *(longlong **)(param_1 + 0xc0);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    uVar4 = (**(code **)(*plVar2 + 0x20))();
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
    return (ulonglong)uVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x000146a24eb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (**(code **)(*plVar2 + 0x20))();
  return uVar5;
}



// FUNCTION 146a24ebe FUN_146a24ebe body=115 status=ok
// SIG undefined FUN_146a24ebe(void)

void FUN_146a24ebe(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f094c0;
  plVar3 = (longlong *)param_1[0x1a];
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
  plVar3 = (longlong *)param_1[0x18];
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
  FUN_146a4c1fa(param_1);
  return;
}



// FUNCTION 146a24f34 FUN_146a24f34 body=29 status=ok
// SIG undefined FUN_146a24f34(void)

undefined8 FUN_146a24f34(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a24f52 FUN_146a24f52 body=28 status=ok
// SIG undefined FUN_146a24f52(void)

undefined8 FUN_146a24f52(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_14697b738();
  return CONCAT71((int7)((ulonglong)*plVar1 >> 8),*plVar1 == *param_2);
}



// FUNCTION 146a24f70 FUN_146a24f70 body=38 status=ok
// SIG undefined FUN_146a24f70(void)

undefined8 FUN_146a24f70(undefined8 param_1,int param_2)

{
  FUN_146a24f9c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a24f9c FUN_146a24f9c body=88 status=ok
// SIG undefined FUN_146a24f9c(void)

void FUN_146a24f9c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f09588;
  FUN_1449db362(param_1 + 5);
  *param_1 = &PTR_LAB_149f09578;
  plVar3 = (longlong *)param_1[4];
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
                    /* WARNING: Could not recover jumptable at 0x000146a24fe9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146a24ff4 FUN_146a24ff4 body=130 status=ok
// SIG undefined FUN_146a24ff4(void)

void FUN_146a24ff4(longlong *param_1,longlong *param_2)

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



// FUNCTION 146a25078 FUN_146a25078 body=130 status=ok
// SIG undefined FUN_146a25078(void)

void FUN_146a25078(longlong *param_1,longlong *param_2)

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



// FUNCTION 146a250fc FUN_146a250fc body=333 status=ok
// SIG undefined FUN_146a250fc(void)

undefined4 * FUN_146a250fc(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
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
  FUN_146a2524a(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar9 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_146a25330(param_1,uVar9,local_40,&local_4c);
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
      FUN_146a25428(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a2524a FUN_146a2524a body=230 status=ok
// SIG undefined FUN_146a2524a(void)

int * FUN_146a2524a(longlong *param_1,int *param_2)

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



// FUNCTION 146a25330 FUN_146a25330 body=134 status=ok
// SIG undefined FUN_146a25330(void)

undefined8 FUN_146a25330(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_146a253b6(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)((longlong)plVar2 + 0xc);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 146a253b6 FUN_146a253b6 body=114 status=ok
// SIG undefined FUN_146a253b6(void)

void FUN_146a253b6(longlong *param_1,int param_2)

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



// FUNCTION 146a25428 FUN_146a25428 body=473 status=ok
// SIG undefined FUN_146a25428(void)

void FUN_146a25428(longlong *param_1)

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



// FUNCTION 146a25602 FUN_146a25602 body=333 status=ok
// SIG undefined FUN_146a25602(void)

undefined4 * FUN_146a25602(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
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
  FUN_146a25750(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar9 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_146a25836(param_1,uVar9,local_40,&local_4c);
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
      FUN_146a2592e(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a25750 FUN_146a25750 body=230 status=ok
// SIG undefined FUN_146a25750(void)

int * FUN_146a25750(longlong *param_1,int *param_2)

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



// FUNCTION 146a25836 FUN_146a25836 body=134 status=ok
// SIG undefined FUN_146a25836(void)

undefined8 FUN_146a25836(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_146a258bc(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)((longlong)plVar2 + 0xc);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 146a258bc FUN_146a258bc body=114 status=ok
// SIG undefined FUN_146a258bc(void)

void FUN_146a258bc(longlong *param_1,int param_2)

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



// FUNCTION 146a2592e FUN_146a2592e body=473 status=ok
// SIG undefined FUN_146a2592e(void)

void FUN_146a2592e(longlong *param_1)

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



// FUNCTION 146a25b08 FUN_146a25b08 body=329 status=ok
// SIG undefined FUN_146a25b08(void)

undefined4 * FUN_146a25b08(longlong param_1,undefined4 *param_2,undefined8 param_3)

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
  FUN_146a25c52(param_1,local_48);
  FUN_146a25dda(param_3,local_40);
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar1 = *local_40;
  uVar8 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar8 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar4 >> 4);
  cVar3 = FUN_146a25d38(param_1,uVar8,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0x1c) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
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
      FUN_146a25eb8(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a25c52 FUN_146a25c52 body=229 status=ok
// SIG undefined FUN_146a25c52(void)

int * FUN_146a25c52(longlong *param_1,int *param_2)

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



// FUNCTION 146a25d38 FUN_146a25d38 body=161 status=ok
// SIG undefined FUN_146a25d38(void)

undefined8 FUN_146a25d38(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_146a25e46(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 146a25dda FUN_146a25dda body=108 status=ok
// SIG undefined FUN_146a25dda(void)

undefined8 * FUN_146a25dda(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  puVar2 = (undefined8 *)param_1[1];
  *param_2 = *(undefined8 *)*param_1;
  param_2[1] = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_2 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0x14) = 0;
  }
  else {
    FUN_1401b309e(param_2 + 1,iVar1,0);
    memcpy((void *)param_2[1],_Src,(longlong)iVar1 << 3);
  }
  return param_2;
}



// FUNCTION 146a25e46 FUN_146a25e46 body=114 status=ok
// SIG undefined FUN_146a25e46(void)

void FUN_146a25e46(longlong *param_1,int param_2)

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



// FUNCTION 146a25eb8 FUN_146a25eb8 body=476 status=ok
// SIG undefined FUN_146a25eb8(void)

void FUN_146a25eb8(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x20;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
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



// FUNCTION 146a26095 FUN_146a26095 body=73 status=ok
// SIG undefined FUN_146a26095(void)

void FUN_146a26095(longlong param_1,int param_2)

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



// FUNCTION 146a260de FUN_146a260de body=54 status=ok
// SIG undefined FUN_146a260de(void)

void FUN_146a260de(longlong *param_1)

{
  FUN_146a26114(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146a26114 FUN_146a26114 body=386 status=ok
// SIG undefined FUN_146a26114(void)

void FUN_146a26114(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      plVar4 = *(longlong **)(*local_78 + 0x10 + (longlong)iStack_5c * 0x20);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_1446f4a44(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar6 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar6 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar6) {
        uVar5 = uVar6;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar5;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146a26298 FUN_146a26298 body=54 status=ok
// SIG undefined FUN_146a26298(void)

void FUN_146a26298(longlong *param_1)

{
  FUN_146a262ce(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146a262ce FUN_146a262ce body=386 status=ok
// SIG undefined FUN_146a262ce(void)

void FUN_146a262ce(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      plVar4 = *(longlong **)(*local_78 + 0x10 + (longlong)iStack_5c * 0x20);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_1446f4a44(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar6 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar6 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar6) {
        uVar5 = uVar6;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar5;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146a26452 FUN_146a26452 body=52 status=ok
// SIG undefined FUN_146a26452(void)

void FUN_146a26452(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*(longlong *)(param_1 + 0x60) != 0) {
      FUN_1400020a8();
    }
    FUN_141720dbc(param_1);
    param_1 = param_1 + 0x70;
  }
  return;
}



// FUNCTION 146a26486 FUN_146a26486 body=122 status=ok
// SIG undefined FUN_146a26486(void)

longlong FUN_146a26486(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_146a26500(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 146a26500 FUN_146a26500 body=201 status=ok
// SIG undefined FUN_146a26500(void)

undefined8 * FUN_146a26500(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_146a265ca(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447711aa(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      puVar6 = (undefined4 *)*param_1;
      puVar4 = (undefined4 *)*param_2;
      uVar5 = 0;
      do {
        puVar3 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar3 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar3 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *puVar6 = *puVar4;
          puVar6[1] = puVar4[1];
        }
        else {
          FUN_146a26730(puVar6,puVar4);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 8;
        puVar6 = puVar6 + 8;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 146a265ca FUN_146a265ca body=355 status=ok
// SIG undefined FUN_146a265ca(void)

void FUN_146a265ca(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      if (*(longlong *)(*local_70 + (longlong)iStack_54 * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_1446f4a44(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar3 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar2 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar2;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146a26730 FUN_146a26730 body=105 status=ok
// SIG undefined FUN_146a26730(void)

undefined8 * FUN_146a26730(undefined8 *param_1,undefined8 *param_2)

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
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return param_1;
}



// FUNCTION 146a2679a FUN_146a2679a body=54 status=ok
// SIG undefined FUN_146a2679a(void)

void FUN_146a2679a(longlong *param_1)

{
  FUN_146a265ca(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146a267d0 FUN_146a267d0 body=38 status=ok
// SIG undefined FUN_146a267d0(void)

void FUN_146a267d0(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146a2328c(param_1);
    param_1 = param_1 + 0x70;
  }
  return;
}



// FUNCTION 146a267f6 FUN_146a267f6 body=29 status=ok
// SIG undefined FUN_146a267f6(void)

undefined8 FUN_146a267f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a26814 FUN_146a26814 body=111 status=ok
// SIG undefined FUN_146a26814(void)

void FUN_146a26814(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141160160(&local_28);
  local_38 = 1;
  lVar1 = (**(code **)(*param_1 + 0x98))(param_1,DAT_14c96cfa8,local_28,param_4);
  if (lVar1 == 0) {
    FUN_1469625c8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a26884 FUN_146a26884 body=130 status=ok
// SIG undefined FUN_146a26884(void)

void FUN_146a26884(longlong *param_1,longlong *param_2)

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



// FUNCTION 146a26908 FUN_146a26908 body=132 status=ok
// SIG undefined FUN_146a26908(void)

void FUN_146a26908(longlong param_1,int param_2)

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



// FUNCTION 146a2698e FUN_146a2698e body=62 status=ok
// SIG undefined FUN_146a2698e(void)

void FUN_146a2698e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146a269cc(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 146a269cc FUN_146a269cc body=93 status=ok
// SIG undefined FUN_146a269cc(void)

ulonglong FUN_146a269cc(uint param_1,uint param_2)

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



// FUNCTION 146a26a42 FUN_146a26a42 body=29 status=ok
// SIG undefined FUN_146a26a42(void)

undefined8 FUN_146a26a42(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a26a60 FUN_146a26a60 body=130 status=ok
// SIG undefined FUN_146a26a60(void)

void FUN_146a26a60(longlong *param_1,longlong *param_2)

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



// FUNCTION 146a26ae4 FUN_146a26ae4 body=31 status=ok
// SIG undefined FUN_146a26ae4(void)

undefined8 FUN_146a26ae4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a26b26 FUN_146a26b26 body=93 status=ok
// SIG undefined FUN_146a26b26(void)

void FUN_146a26b26(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f09660;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f095f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 146a26b84 FUN_146a26b84 body=93 status=ok
// SIG undefined FUN_146a26b84(void)

void FUN_146a26b84(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f09660;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f095f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 146a26be2 FUN_146a26be2 body=126 status=ok
// SIG undefined FUN_146a26be2(void)

void FUN_146a26be2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f09660;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f095f0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146a26c51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146a26c60 FUN_146a26c60 body=48 status=ok
// SIG undefined FUN_146a26c60(void)

undefined8
FUN_146a26c60(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3,param_4,param_5,param_6);
  return param_2;
}



// FUNCTION 146a26c90 FUN_146a26c90 body=110 status=ok
// SIG undefined FUN_146a26c90(void)

undefined8 FUN_146a26c90(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 in_stack_00000028;
  undefined1 auStack_48 [32];
  undefined1 local_28;
  undefined1 local_20 [8];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = in_stack_00000028;
  (**(code **)(param_1 + 0x18))(local_20);
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



// FUNCTION 146a26d02 FUN_146a26d02 body=52 status=ok
// SIG undefined FUN_146a26d02(void)

undefined8 * FUN_146a26d02(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f09740;
  FUN_146a26fa8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a26d58 FUN_146a26d58 body=106 status=ok
// SIG undefined FUN_146a26d58(void)

void FUN_146a26d58(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f09740;
  FUN_146a26ffe(puVar1 + 1,param_1 + 8);
  puVar1[8] = *(undefined8 *)(param_1 + 0x40);
  *puVar1 = &PTR_FUN_149f096d0;
  puVar1[9] = *(undefined8 *)(param_1 + 0x48);
  return;
}



// FUNCTION 146a26dc2 FUN_146a26dc2 body=106 status=ok
// SIG undefined FUN_146a26dc2(void)

void FUN_146a26dc2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f09740;
  FUN_146a26ffe(puVar1 + 1,param_1 + 8);
  puVar1[8] = *(undefined8 *)(param_1 + 0x40);
  *puVar1 = &PTR_FUN_149f096d0;
  puVar1[9] = *(undefined8 *)(param_1 + 0x48);
  return;
}



// FUNCTION 146a26e2c FUN_146a26e2c body=142 status=ok
// SIG undefined FUN_146a26e2c(void)

void FUN_146a26e2c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f09740;
  FUN_146a26ffe(&p_Var1->CriticalSection,param_1 + 8);
  p_Var1[1].ProcessLocksList.Flink = *(_LIST_ENTRY **)(param_1 + 0x40);
  *(undefined ***)p_Var1 = &PTR_FUN_149f096d0;
  p_Var1[1].ProcessLocksList.Blink = *(_LIST_ENTRY **)(param_1 + 0x48);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146a26eaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146a26eba FUN_146a26eba body=33 status=ok
// SIG undefined FUN_146a26eba(void)

undefined8 FUN_146a26eba(longlong param_1,undefined8 param_2)

{
  FUN_146a27066(param_1 + 8,param_2,param_1 + 0x48);
  return param_2;
}



// FUNCTION 146a26edc FUN_146a26edc body=88 status=ok
// SIG undefined FUN_146a26edc(void)

undefined8 FUN_146a26edc(longlong param_1)

{
  undefined1 auStack_48 [40];
  longlong *local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146a27066(param_1 + 8,local_20,param_1 + 0x48);
  if (local_20[0] != (longlong *)0x0) {
    (**(code **)(*local_20[0] + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a26f38 FUN_146a26f38 body=111 status=ok
// SIG undefined FUN_146a26f38(void)

longlong * FUN_146a26f38(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_2;
  *param_1 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(char *)(param_1 + 2) = (char)param_2[2];
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_1413a4324(param_1 + 3,param_2 + 3);
  param_1[5] = *param_3;
  lVar2 = param_3[1];
  param_1[6] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 146a26fa8 FUN_146a26fa8 body=85 status=ok
// SIG undefined FUN_146a26fa8(void)

void FUN_146a26fa8(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)param_1[6];
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
  FUN_1449db362(param_1 + 3);
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146a26ff1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 146a26ffe FUN_146a26ffe body=104 status=ok
// SIG undefined FUN_146a26ffe(void)

longlong * FUN_146a26ffe(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_2;
  *param_1 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(char *)(param_1 + 2) = (char)param_2[2];
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_1413a4324(param_1 + 3,param_2 + 3);
  param_1[5] = param_2[5];
  lVar2 = param_2[6];
  param_1[6] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 146a27066 FUN_146a27066 body=168 status=ok
// SIG undefined FUN_146a27066(void)

undefined8 FUN_146a27066(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined4 local_38;
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  pcVar1 = (code *)*param_3;
  local_30 = param_1[5];
  local_28 = param_1[6];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  local_58 = (longlong *)*param_1;
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 8))();
  }
  local_50 = (undefined4)param_1[1];
  local_48 = (undefined1)param_1[2];
  local_40 = 0;
  local_38 = 0;
  FUN_1413a4324(&local_40,param_1 + 3);
  (*pcVar1)(param_2,&local_58,&local_30);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a2710f FUN_146a2710f body=73 status=ok
// SIG undefined FUN_146a2710f(void)

void FUN_146a2710f(longlong param_1,int param_2)

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



// FUNCTION 146a27158 FUN_146a27158 body=24 status=ok
// SIG undefined FUN_146a27158(void)

void FUN_146a27158(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146a2716c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 146a27170 FUN_146a27170 body=29 status=ok
// SIG undefined FUN_146a27170(void)

undefined8 FUN_146a27170(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a2718e FUN_146a2718e body=125 status=ok
// SIG undefined FUN_146a2718e(void)

void FUN_146a2718e(longlong *param_1,longlong *param_2)

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
    FUN_146a2720c(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar4 * 0x10) = *param_2;
  *(longlong *)(lVar2 + 8 + lVar4 * 0x10) = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



// FUNCTION 146a2720c FUN_146a2720c body=132 status=ok
// SIG undefined FUN_146a2720c(void)

void FUN_146a2720c(longlong param_1,int param_2)

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



// FUNCTION 146a27292 FUN_146a27292 body=132 status=ok
// SIG undefined FUN_146a27292(void)

void FUN_146a27292(longlong param_1,int param_2)

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



// FUNCTION 146a27318 FUN_146a27318 body=118 status=ok
// SIG undefined FUN_146a27318(void)

void FUN_146a27318(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  void *_Dst;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (longlong)(int)param_2 * 0x10);
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
  if (~param_2 + iVar5 != 0) {
    _Dst = (void *)(lVar3 + (longlong)(int)param_2 * 0x10);
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~param_2 + iVar5) << 4);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 146a2738e FUN_146a2738e body=62 status=ok
// SIG undefined FUN_146a2738e(void)

void FUN_146a2738e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146a273cc(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 146a273cc FUN_146a273cc body=93 status=ok
// SIG undefined FUN_146a273cc(void)

ulonglong FUN_146a273cc(uint param_1,uint param_2)

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



// FUNCTION 146a2742a FUN_146a2742a body=57 status=ok
// SIG undefined FUN_146a2742a(void)

void FUN_146a2742a(undefined8 *param_1,int param_2)

{
  FUN_146a2710f(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_146a27464(param_1,param_2);
  return;
}



// FUNCTION 146a27464 FUN_146a27464 body=95 status=ok
// SIG undefined FUN_146a27464(void)

void FUN_146a27464(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 146a274c4 FUN_146a274c4 body=95 status=ok
// SIG undefined FUN_146a274c4(void)

void FUN_146a274c4(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x10 + *param_1);
  FUN_146a2710f(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146a27524 FUN_146a27524 body=24 status=ok
// SIG undefined FUN_146a27524(void)

void FUN_146a27524(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146a27538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 146a2753c FUN_146a2753c body=29 status=ok
// SIG undefined FUN_146a2753c(void)

undefined8 FUN_146a2753c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a27559 FUN_146a27559 body=45 status=ok
// SIG undefined FUN_146a27559(void)

void FUN_146a27559(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      lVar1 = *(longlong *)(param_2 + 8 + lVar2);
      *(longlong *)(param_1 + 8 + lVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146a27586 FUN_146a27586 body=340 status=ok
// SIG undefined FUN_146a27586(void)

undefined8 * FUN_146a27586(undefined8 *param_1,undefined8 param_2)

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
  plVar3 = (longlong *)FUN_14001cc68(0x4d0);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_149f097f0;
  plVar4 = plVar3 + 2;
  memset(plVar4,0,0x4c0);
  FUN_146a276dc(plVar4);
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_146a28144(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_146a2766d;
    param_1[1] = 0;
LAB_146a27637:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_146a2766d;
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
      if (plVar4 == (longlong *)0x0) goto LAB_146a2766d;
      goto LAB_146a27637;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_146a2766d;
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
LAB_146a2766d:
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
  local_38 = 0x4c0;
  FUN_140a52e78(*param_1,"SMultiBoxWidget",
                ".\\Runtime/Slate/Private/Framework/MultiBox/MultiBox.cpp",0x1d3);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a276dc FUN_146a276dc body=390 status=ok
// SIG undefined FUN_146a276dc(void)

undefined8 * FUN_146a276dc(undefined8 *param_1)

{
  FUN_140a55f88();
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *param_1 = &PTR_FUN_149f09810;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
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
  param_1[0x5c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e9) = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0xffffffff;
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  *(undefined8 *)((longlong)param_1 + 0x33c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x344) = 0;
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  param_1[0x70] = 0;
  *(undefined4 *)(param_1 + 0x71) = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x38c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x394) = 0;
  param_1[0x74] = 0;
  *(undefined4 *)(param_1 + 0x75) = 0;
  *(undefined1 *)(param_1 + 0x76) = 0;
  param_1[0x7b] = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3e4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3ec) = 0;
  param_1[0x7f] = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  param_1[0x85] = 0;
  *(undefined4 *)(param_1 + 0x86) = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  *(undefined8 *)((longlong)param_1 + 0x434) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x43c) = 0;
  param_1[0x89] = 0;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  FUN_144a5dc74(param_1 + 0x8f);
  param_1[0x92] = 0;
  *(undefined4 *)(param_1 + 0x93) = 0;
  *(undefined1 *)((longlong)param_1 + 0x49c) = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  return param_1;
}



// FUNCTION 146a27862 FUN_146a27862 body=9 status=ok
// SIG undefined FUN_146a27862(void)

void FUN_146a27862(longlong param_1)

{
  FUN_146a27912(param_1 + 0x10);
  return;
}



// FUNCTION 146a2786c FUN_146a2786c body=29 status=ok
// SIG undefined FUN_146a2786c(void)

undefined8 FUN_146a2786c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a2788a FUN_146a2788a body=38 status=ok
// SIG undefined FUN_146a2788a(void)

undefined8 FUN_146a2788a(undefined8 param_1,int param_2)

{
  FUN_146a27912();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a278b0 FUN_146a278b0 body=97 status=ok
// SIG undefined FUN_146a278b0(void)

undefined8 * FUN_146a278b0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f09a50;
  plVar2 = (longlong *)param_1[0x4e];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  *param_1 = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a27912 FUN_146a27912 body=732 status=ok
// SIG undefined FUN_146a27912(void)

void FUN_146a27912(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f09810;
  plVar3 = (longlong *)param_1[0x97];
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
  FUN_1449db362(param_1 + 0x94);
  if ((longlong *)param_1[0x8f] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x8f] + 0x10))();
  }
  plVar3 = (longlong *)param_1[0x8e];
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
  plVar3 = (longlong *)param_1[0x8c];
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
  *(undefined4 *)(param_1 + 0x8a) = 0;
  if (param_1[0x89] != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1 + 0x81);
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (param_1[0x7f] != 0) {
    FUN_1400020a8();
  }
  FUN_146a27bee(param_1 + 0x77);
  *(undefined4 *)(param_1 + 0x75) = 0;
  if (param_1[0x74] != 0) {
    FUN_1400020a8();
  }
  FUN_146a27dba(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x6b) = 0;
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  FUN_146a27f86(param_1 + 0x62);
  plVar3 = (longlong *)param_1[0x60];
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
  plVar3 = (longlong *)param_1[0x5c];
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
  plVar3 = (longlong *)param_1[0x5a];
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
  plVar3 = (longlong *)param_1[0x58];
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
  FUN_144a81ee1(param_1[0x51],*(undefined4 *)(param_1 + 0x52));
  if (param_1[0x51] != 0) {
    FUN_1400020a8();
  }
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
  *param_1 = &PTR_FUN_149f09a50;
  plVar3 = (longlong *)param_1[0x4e];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  *param_1 = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 146a27bee FUN_146a27bee body=52 status=ok
// SIG undefined FUN_146a27bee(void)

void FUN_146a27bee(longlong *param_1)

{
  FUN_146a27c22();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146a27c22 FUN_146a27c22 body=307 status=ok
// SIG undefined FUN_146a27c22(void)

void FUN_146a27c22(longlong *param_1)

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
      FUN_146a27d56((longlong)iStack_4c * 0x28 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a27d56 FUN_146a27d56 body=100 status=ok
// SIG undefined FUN_146a27d56(void)

void FUN_146a27d56(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
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
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000146a27dae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146a27dba FUN_146a27dba body=52 status=ok
// SIG undefined FUN_146a27dba(void)

void FUN_146a27dba(longlong *param_1)

{
  FUN_146a27dee();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146a27dee FUN_146a27dee body=307 status=ok
// SIG undefined FUN_146a27dee(void)

void FUN_146a27dee(longlong *param_1)

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
      FUN_146a27f22((longlong)iStack_4c * 0x28 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a27f22 FUN_146a27f22 body=100 status=ok
// SIG undefined FUN_146a27f22(void)

void FUN_146a27f22(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
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
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000146a27f7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146a27f86 FUN_146a27f86 body=52 status=ok
// SIG undefined FUN_146a27f86(void)

void FUN_146a27f86(longlong *param_1)

{
  FUN_146a27fba();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146a27fba FUN_146a27fba body=307 status=ok
// SIG undefined FUN_146a27fba(void)

void FUN_146a27fba(longlong *param_1)

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
      FUN_146a280ee((longlong)iStack_4c * 0x28 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a280ee FUN_146a280ee body=85 status=ok
// SIG undefined FUN_146a280ee(void)

void FUN_146a280ee(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1401b9920(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000146a28138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146a28144 FUN_146a28144 body=167 status=ok
// SIG undefined FUN_146a28144(void)

void FUN_146a28144(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_146a281bf;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_146a281bf;
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
LAB_146a281bf:
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
                    /* WARNING: Could not recover jumptable at 0x000146a281df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 146a281ec FUN_146a281ec body=9 status=ok
// SIG undefined FUN_146a281ec(void)

void FUN_146a281ec(longlong param_1)

{
  FUN_146b04c9e(param_1 + 0x10);
  return;
}



// FUNCTION 146a281f6 FUN_146a281f6 body=29 status=ok
// SIG undefined FUN_146a281f6(void)

undefined8 FUN_146a281f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a28214 FUN_146a28214 body=164 status=ok
// SIG undefined FUN_146a28214(void)

void FUN_146a28214(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (((*param_2 != 0) && (param_2[1] != 0)) && (0 < *(int *)(param_2[1] + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = (longlong)param_2;
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *param_2 = (longlong)param_2;
    if ((longlong *)param_2[1] == plVar2) goto LAB_146a2828c;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_146a2828c;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  param_2[1] = (longlong)plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_146a2828c:
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
                    /* WARNING: Could not recover jumptable at 0x000146a282ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 146a282b8 FUN_146a282b8 body=328 status=ok
// SIG undefined FUN_146a282b8(void)

longlong * FUN_146a282b8(longlong *param_1,longlong param_2)

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
  plVar3 = (longlong *)FUN_14001cc68(0x390,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_149f09cb0;
  plVar4 = plVar3 + 2;
  FUN_146a28402(plVar4);
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_146a2cafc(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_146a2838f;
    param_1[1] = 0;
LAB_146a28359:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_146a2838f;
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
      if (plVar4 == (longlong *)0x0) goto LAB_146a2838f;
      goto LAB_146a28359;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_146a2838f;
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
LAB_146a2838f:
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
  local_38 = 0x380;
  FUN_140a52e78(*param_1 + 8,"STableRow< TSharedPtr<SWidget> >",
                ".\\Runtime/Slate/Private/Framework/MultiBox/MultiBox.cpp",0x282);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a28402 FUN_146a28402 body=202 status=ok
// SIG undefined FUN_146a28402(void)

undefined8 * FUN_146a28402(undefined8 *param_1)

{
  *param_1 = &PTR__purecall_149f0e360;
  FUN_140a55e66(param_1 + 1);
  *param_1 = &PTR_LAB_149f09cd0;
  param_1[1] = &PTR_FUN_149f09d70;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  *(undefined4 *)(param_1 + 0x57) = 0;
  *(undefined1 *)((longlong)param_1 + 700) = 1;
  *(undefined4 *)(param_1 + 0x58) = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  param_1[0x61] = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  *(undefined1 *)((longlong)param_1 + 0x31c) = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x65) = 0;
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ec) = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  *(undefined1 *)((longlong)param_1 + 0x3b) = 2;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) | 4;
  return param_1;
}



// FUNCTION 146a284cc FUN_146a284cc body=9 status=ok
// SIG undefined FUN_146a284cc(void)

void FUN_146a284cc(longlong param_1)

{
  FUN_146a2bbb6(param_1 + 0x10);
  return;
}



// FUNCTION 146a284d6 FUN_146a284d6 body=29 status=ok
// SIG undefined FUN_146a284d6(void)

undefined8 FUN_146a284d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a28508 FUN_146a28508 body=149 status=ok
// SIG undefined FUN_146a28508(void)

byte FUN_146a28508(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  
  plVar8 = *(longlong **)(param_1 + 0x2b0);
  bVar3 = true;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    plVar9 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar8[1];
    plVar9 = (longlong *)0x0;
    do {
      if (iVar5 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_146a28544;
      }
      LOCK();
      iVar4 = (int)plVar8[1];
      bVar10 = iVar5 == iVar4;
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar10);
    plVar9 = *(longlong **)(param_1 + 0x2a8);
    bVar3 = false;
  }
LAB_146a28544:
  lVar6 = (**(code **)(*plVar9 + 0x48))(plVar9);
  if (lVar6 != 0) {
    uVar7 = (**(code **)(*plVar9 + 0x60))(plVar9,lVar6);
    plVar9 = (longlong *)(uVar7 & 0xffffffff);
  }
  if (!bVar3) {
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
  return lVar6 != 0 & (byte)plVar9;
}



// FUNCTION 146a2859e FUN_146a2859e body=248 status=ok
// SIG undefined FUN_146a2859e(void)

void FUN_146a2859e(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar8 = *(longlong **)(param_1 + 0x2b0);
  bVar2 = true;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    plVar9 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar8[1];
    plVar9 = (longlong *)0x0;
    do {
      if (iVar5 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_146a285ed;
      }
      LOCK();
      iVar3 = (int)plVar8[1];
      bVar10 = iVar5 == iVar3;
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
    } while (!bVar10);
    plVar9 = *(longlong **)(param_1 + 0x2a8);
    bVar2 = false;
  }
LAB_146a285ed:
  cVar4 = (**(code **)(*plVar9 + 0x68))(plVar9,*(undefined4 *)(param_1 + 0x2b8));
  if ((cVar4 != '\0') &&
     (puVar7 = (undefined8 *)(**(code **)(*plVar9 + 0x48))(plVar9,param_1),
     puVar7 != (undefined8 *)0x0)) {
    uVar6 = (**(code **)(*plVar9 + 0x60))(plVar9,puVar7);
    local_38 = *puVar7;
    local_30 = puVar7[1];
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar9 + 0x50))(plVar9,&local_38,uVar6 ^ 1);
  }
  if (!bVar2) {
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
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a28698 FUN_146a28698 body=149 status=ok
// SIG undefined FUN_146a28698(void)

byte FUN_146a28698(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  
  plVar8 = *(longlong **)(param_1 + 0x2b0);
  bVar3 = true;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    plVar9 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar8[1];
    plVar9 = (longlong *)0x0;
    do {
      if (iVar5 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_146a286d4;
      }
      LOCK();
      iVar4 = (int)plVar8[1];
      bVar10 = iVar5 == iVar4;
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar10);
    plVar9 = *(longlong **)(param_1 + 0x2a8);
    bVar3 = false;
  }
LAB_146a286d4:
  lVar6 = (**(code **)(*plVar9 + 0x48))(plVar9);
  if (lVar6 != 0) {
    uVar7 = (**(code **)(*plVar9 + 0x10))(plVar9,lVar6);
    plVar9 = (longlong *)(uVar7 & 0xffffffff);
  }
  if (!bVar3) {
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
  return lVar6 != 0 & (byte)plVar9;
}



// FUNCTION 146a2872e FUN_146a2872e body=124 status=ok
// SIG undefined FUN_146a2872e(void)

undefined4 FUN_146a2872e(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar6 = *(longlong **)(param_1 + 0x2b0);
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
        goto LAB_146a28767;
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
    plVar7 = *(longlong **)(param_1 + 0x2a8);
    bVar2 = false;
  }
LAB_146a28767:
  uVar5 = (**(code **)(*plVar7 + 0x88))(plVar7,*(undefined4 *)(param_1 + 0x2b8));
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return uVar5;
}



// FUNCTION 146a287aa FUN_146a287aa body=124 status=ok
// SIG undefined FUN_146a287aa(void)

undefined1 FUN_146a287aa(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined1 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar6 = *(longlong **)(param_1 + 0x2b0);
  bVar2 = true;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar6[1];
    plVar7 = (longlong *)0x0;
    do {
      if (iVar5 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_146a287e4;
      }
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar8 = iVar5 == iVar3;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
    } while (!bVar8);
    plVar7 = *(longlong **)(param_1 + 0x2a8);
    bVar2 = false;
  }
LAB_146a287e4:
  uVar4 = (**(code **)(*plVar7 + 0x68))(plVar7,*(undefined4 *)(param_1 + 0x2b8));
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return uVar4;
}



// FUNCTION 146a28826 FUN_146a28826 body=144 status=ok
// SIG undefined FUN_146a28826(void)

longlong FUN_146a28826(longlong param_1,longlong param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar6 = *(longlong **)(param_1 + 0x2b0);
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
        goto LAB_146a28862;
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
    plVar7 = *(longlong **)(param_1 + 0x2a8);
    bVar2 = false;
  }
LAB_146a28862:
  uVar5 = (**(code **)(*plVar7 + 0x90))(plVar7,*(undefined4 *)(param_1 + 0x2b8));
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  FUN_144a69486(param_2,uVar5);
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_2;
}



// FUNCTION 146a288b6 FUN_146a288b6 body=126 status=ok
// SIG undefined FUN_146a288b6(void)

undefined4 FUN_146a288b6(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar6 = *(longlong **)(param_1 + 0x2b0);
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
        goto LAB_146a288f0;
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
    plVar7 = *(longlong **)(param_1 + 0x2a8);
    bVar2 = false;
  }
LAB_146a288f0:
  uVar5 = (**(code **)(*plVar7 + 0x98))(plVar7,*(undefined4 *)(param_1 + 0x2b8));
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return uVar5;
}



// FUNCTION 146a28934 FUN_146a28934 body=154 status=ok
// SIG undefined FUN_146a28934(void)

longlong * FUN_146a28934(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar3 == (longlong *)0x0) {
LAB_146a289bd:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_146a289bd;
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
    lVar7 = *(longlong *)(param_1 + 0x10) + -8;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar7 = 0;
    }
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
    lVar6 = lVar7 + 8;
    if (lVar7 == 0) {
      lVar6 = 0;
    }
    *param_2 = lVar6;
    param_2[1] = (longlong)plVar3;
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



// FUNCTION 146a28a32 FUN_146a28a32 body=248 status=ok
// SIG undefined FUN_146a28a32(void)

void FUN_146a28a32(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar8 = *(longlong **)(param_1 + 0x2b0);
  bVar2 = true;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    plVar9 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar8[1];
    plVar9 = (longlong *)0x0;
    do {
      if (iVar5 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_146a28a81;
      }
      LOCK();
      iVar3 = (int)plVar8[1];
      bVar10 = iVar5 == iVar3;
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
    } while (!bVar10);
    plVar9 = *(longlong **)(param_1 + 0x2a8);
    bVar2 = false;
  }
LAB_146a28a81:
  cVar4 = (**(code **)(*plVar9 + 0x68))(plVar9,*(undefined4 *)(param_1 + 0x2b8));
  if ((cVar4 != '\0') &&
     (puVar7 = (undefined8 *)(**(code **)(*plVar9 + 0x48))(plVar9,param_1),
     puVar7 != (undefined8 *)0x0)) {
    uVar6 = (**(code **)(*plVar9 + 0x60))(plVar9,puVar7);
    local_38 = *puVar7;
    local_30 = puVar7[1];
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar9 + 0x58))(plVar9,&local_38,uVar6 ^ 1);
  }
  if (!bVar2) {
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
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a28b3a FUN_146a28b3a body=114 status=ok
// SIG undefined FUN_146a28b3a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_146a28b3a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x2b0);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar8) {
        uVar6 = (**(code **)(**(longlong **)(param_1 + 0x2a8) + 0xb8))();
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
        return (ulonglong)uVar6;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000146a28ba5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(_DAT_00000000 + 0xb8))(0);
  return uVar7;
}



// FUNCTION 146a28bac FUN_146a28bac body=1464 status=ok
// SIG undefined FUN_146a28bac(void)

void FUN_146a28bac(longlong param_1,uint param_2,undefined4 *param_3,undefined8 *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_6d8 [32];
  undefined1 *local_6b8;
  longlong local_6b0;
  undefined1 local_6a1;
  undefined1 local_6a0 [8];
  longlong *local_698;
  undefined4 local_688;
  undefined4 uStack_684;
  undefined4 uStack_680;
  undefined4 uStack_67c;
  undefined1 local_678;
  undefined8 local_670;
  undefined4 local_668;
  undefined4 local_660;
  undefined1 local_65c;
  undefined8 local_658;
  undefined8 uStack_650;
  longlong local_648;
  longlong *plStack_640;
  longlong *local_630;
  undefined8 local_628;
  longlong *local_620;
  undefined2 local_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  longlong *local_5f0;
  undefined8 local_5e8;
  longlong *local_5e0;
  undefined8 local_5d8;
  longlong *local_5d0;
  undefined8 local_5c8;
  longlong *local_5c0;
  undefined4 local_5b8;
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined1 local_5a8;
  undefined8 local_5a0;
  undefined4 local_598;
  undefined1 local_590 [192];
  undefined1 local_4d0 [424];
  undefined8 local_328;
  undefined1 local_318 [24];
  undefined1 local_300 [16];
  undefined2 local_2f0;
  undefined1 auStack_2e8 [16];
  undefined1 local_2d8 [192];
  undefined1 local_218 [440];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_6d8;
  *(undefined8 *)(param_1 + 0x368) = *param_4;
  plVar6 = (longlong *)param_4[1];
  plVar8 = *(longlong **)(param_1 + 0x370);
  if (plVar8 != plVar6) {
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
      plVar8 = *(longlong **)(param_1 + 0x370);
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x370) = plVar6;
  }
  *(undefined8 *)(param_1 + 0x360) = 0;
  if (param_2 < 2) {
    local_5a8 = *(undefined1 *)(param_3 + 4);
    local_5b8 = *param_3;
    uStack_5b4 = param_3[1];
    uStack_5b0 = param_3[2];
    uStack_5ac = param_3[3];
    local_5a0 = 0;
    local_598 = 0;
    FUN_140a58be0(&local_5a0,param_3 + 6);
    uVar4 = FUN_140a58d14(param_1 + 0x220,&local_5b8);
    FUN_140a58896(uVar4,param_4);
    lVar5 = param_1 + 0x200;
  }
  else {
    FUN_140a5296a(local_218);
    FUN_140a50426(local_2d8);
    lVar5 = FUN_140a52578(local_2d8);
    *(undefined4 *)(lVar5 + 0x40) = 3;
    *(undefined1 *)(lVar5 + 0x44) = 1;
    *(undefined4 *)(lVar5 + 0x48) = 0;
    *(undefined1 *)(lVar5 + 0x4c) = 1;
    FUN_146a2b81a(local_4d0);
    local_328 = *(undefined8 *)(param_1 + 0x2d0);
    local_610 = CONCAT11(1,*(undefined1 *)(param_1 + 0x37c));
    local_608 = 0;
    uStack_600 = 0;
    local_2f0 = local_610;
    FUN_144a450dc(auStack_2e8,&local_608);
    FUN_1449db362(&local_608);
    plVar6 = *(longlong **)(param_1 + 0x18);
    if (plVar6 == (longlong *)0x0) {
LAB_146a28d84:
      local_648 = 0;
      plStack_640 = (longlong *)0x0;
    }
    else {
      iVar3 = (int)plVar6[1];
      do {
        if (iVar3 == 0) goto LAB_146a28d84;
        LOCK();
        iVar2 = (int)plVar6[1];
        bVar9 = iVar3 == iVar2;
        if (bVar9) {
          *(int *)(plVar6 + 1) = iVar3 + 1;
          iVar2 = iVar3;
        }
        iVar3 = iVar2;
        UNLOCK();
      } while (!bVar9);
      local_648 = *(longlong *)(param_1 + 0x10) + -8;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        local_648 = 0;
      }
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      LOCK();
      plVar8 = plVar6 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      plStack_640 = plVar6;
      if ((int)*plVar8 == 0) {
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
    local_630 = &local_648;
    FUN_146a2b90a(&local_628);
    if (local_620 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_620 + 1) = (int)local_620[1] + 1;
      UNLOCK();
    }
    plVar6 = *(longlong **)(param_1 + 0x2e0);
    *(undefined8 *)(param_1 + 0x2d8) = local_628;
    *(longlong **)(param_1 + 0x2e0) = local_620;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar6 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
    FUN_146a2b892(&local_628,&local_5f8,local_4d0);
    local_5e8 = local_5f8;
    local_5e0 = local_5f0;
    if (local_5f0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_5f0 + 1) = (int)local_5f0[1] + 1;
      UNLOCK();
    }
    local_6b0 = param_1 + 0x1e8;
    uVar4 = FUN_140a4fe8e(lVar5,&local_5e8);
    uVar4 = FUN_140a52392(local_218,uVar4);
    FUN_140a50426(local_590);
    local_660 = 0x3f800000;
    local_65c = 1;
    local_658 = 0;
    uStack_650 = 0;
    plVar6 = (longlong *)FUN_140a5475a(local_590);
    lVar5 = *plVar6;
    local_688 = *param_3;
    uStack_684 = param_3[1];
    uStack_680 = param_3[2];
    uStack_67c = param_3[3];
    local_678 = *(undefined1 *)(param_3 + 4);
    local_670 = 0;
    local_668 = 0;
    FUN_140a58be0(&local_670,param_3 + 6);
    *(undefined1 *)(plVar6 + 5) = local_678;
    *(undefined4 *)(plVar6 + 3) = local_688;
    *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_684;
    *(undefined4 *)(plVar6 + 4) = uStack_680;
    *(undefined4 *)((longlong)plVar6 + 0x24) = uStack_67c;
    FUN_144a450dc(plVar6 + 6,&local_670);
    FUN_1449db362(&local_670);
    uVar7 = FUN_146a07044(plVar6,param_4);
    uVar4 = FUN_140a52392(uVar4,uVar7);
    local_6b8 = &local_6a1;
    FUN_140a541dc(local_6a0,"SHorizontalBox","Runtime\\Slate\\Public\\Widgets/Views/STableRow.h",
                  0xc3);
    FUN_140a50ec6(local_6a0,&local_5d8,uVar4);
    local_5c8 = local_5d8;
    local_5c0 = local_5d0;
    if (local_5d0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_5d0 + 1) = (int)local_5d0[1] + 1;
      UNLOCK();
    }
    FUN_140a58896(local_6b0,&local_5c8);
    plVar6 = local_5c0;
    if (local_5c0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_5c0 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_5c0)(local_5c0);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    if (local_5d0 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_5d0 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_5d0)(local_5d0);
        LOCK();
        piVar1 = (int *)((longlong)local_5d0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_5d0 + 0x10))(local_5d0);
        }
      }
    }
    if (local_698 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_698 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_698)(local_698);
        LOCK();
        piVar1 = (int *)((longlong)local_698 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_698 + 0x10))(local_698);
        }
      }
    }
    FUN_140a509a6(local_590);
    plVar6 = local_5e0;
    if (local_5e0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_5e0 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_5e0)(local_5e0);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    if (local_5f0 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_5f0 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_5f0)(local_5f0);
        LOCK();
        piVar1 = (int *)((longlong)local_5f0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_5f0 + 0x10))(local_5f0);
        }
      }
    }
    if (local_620 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_620 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_620)(local_620);
        LOCK();
        piVar1 = (int *)((longlong)local_620 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_620 + 0x10))(local_620);
        }
      }
    }
    plVar6 = plStack_640;
    if (plStack_640 != (longlong *)0x0) {
      LOCK();
      plVar8 = plStack_640 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plStack_640)(plStack_640);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    FUN_1449db362(auStack_2e8);
    FUN_1449db362(local_300);
    FUN_1449db362(local_318);
    FUN_140a4ff8c(local_4d0);
    FUN_140a509a6(local_2d8);
    FUN_145ab33da(local_218);
  }
  *(longlong *)(param_1 + 0x360) = lVar5;
  if ((local_60 ^ (ulonglong)auStack_6d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a29166 FUN_146a29166 body=1060 status=ok
// SIG undefined FUN_146a29166(void)

int FUN_146a29166(longlong param_1,int param_2,undefined8 param_3,ulonglong *param_4,
                 undefined8 param_5,undefined8 param_6,int param_7,float *param_8)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  ulonglong uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  float *local_110;
  float *local_108;
  undefined4 local_100;
  float *local_f8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined1 local_cc;
  undefined8 local_c8;
  float local_c0;
  undefined8 local_bc;
  ulonglong local_b4;
  float local_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  undefined8 local_9c;
  byte local_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_138;
  plVar13 = *(longlong **)(param_1 + 0x2b0);
  bVar8 = true;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
    plVar14 = (longlong *)0x0;
  }
  else {
    iVar10 = (int)plVar13[1];
    plVar14 = (longlong *)0x0;
    do {
      if (iVar10 == 0) {
        plVar13 = (longlong *)0x0;
        goto LAB_146a291e9;
      }
      LOCK();
      iVar9 = (int)plVar13[1];
      bVar16 = iVar10 == iVar9;
      if (bVar16) {
        *(int *)(plVar13 + 1) = iVar10 + 1;
        iVar9 = iVar10;
      }
      iVar10 = iVar9;
      UNLOCK();
    } while (!bVar16);
    plVar14 = *(longlong **)(param_1 + 0x2a8);
    bVar8 = false;
  }
LAB_146a291e9:
  lVar15 = 0x890;
  if (param_2 == 2) {
    lVar15 = 0x940;
  }
  lVar12 = 0x7e0;
  if (param_2 != 0) {
    lVar12 = lVar15;
  }
  lVar12 = lVar12 + *(longlong *)(param_1 + 0x2c8);
  iVar10 = (**(code **)(*plVar14 + 0xc0))(plVar14);
  if (iVar10 == 1) {
    pfVar11 = (float *)(lVar12 + 8);
    cVar6 = *(char *)(lVar12 + 0x18);
    if (cVar6 != '\0') {
      if (cVar6 == '\x01') {
        pfVar11 = (float *)FUN_1400c06fe(pfVar11);
      }
      else if (cVar6 == '\x03') {
        pfVar11 = param_8 + 8;
      }
      else {
        pfVar11 = param_8 + 4;
      }
    }
    local_d8 = pfVar11[3] * param_8[3];
    local_dc = pfVar11[2] * param_8[2];
    local_e0 = pfVar11[1] * param_8[1];
    local_e4 = *pfVar11 * *param_8;
    local_110 = &local_e4;
    local_b4 = *param_4;
    local_c8 = *(undefined8 *)((longlong)param_4 + 0xc);
    local_c0 = *(float *)(param_4 + 1);
    local_bc = 0;
    local_ac = *(float *)((longlong)param_4 + 0x1c);
    fStack_a8 = *(float *)(param_4 + 4);
    fStack_a4 = *(float *)((longlong)param_4 + 0x24);
    fStack_a0 = *(float *)(param_4 + 5);
    local_9c = *(undefined8 *)((longlong)param_4 + 0x2c);
    local_94 = local_94 & 0xfc | *(char *)((longlong)param_4 + 0x34) * '\x02' & 2U;
    local_118 = 0;
    FUN_140239bd2(param_6,param_7,&local_c8,lVar12);
  }
  else {
    uVar7 = *param_4;
    fVar20 = (float)(uVar7 >> 0x20) * 0.5;
    fVar19 = (float)uVar7 * 0.5;
    fVar18 = fVar20 - fVar19;
    fVar17 = fVar19 - fVar20;
    pfVar11 = (float *)(lVar12 + 8);
    cVar6 = *(char *)(lVar12 + 0x18);
    if (cVar6 != '\0') {
      if (cVar6 == '\x01') {
        pfVar11 = (float *)FUN_1400c06fe(pfVar11);
      }
      else if (cVar6 == '\x03') {
        pfVar11 = param_8 + 8;
      }
      else {
        pfVar11 = param_8 + 4;
      }
    }
    local_d8 = pfVar11[3] * param_8[3];
    local_dc = pfVar11[2] * param_8[2];
    local_e0 = pfVar11[1] * param_8[1];
    local_e4 = *pfVar11 * *param_8;
    local_f8 = &local_e4;
    local_108 = &local_d4;
    local_cc = 1;
    local_c0 = *(float *)(param_4 + 1);
    fVar2 = *(float *)((longlong)param_4 + 0x1c);
    local_c8 = CONCAT44(fVar18 * local_c0 + *(float *)(param_4 + 2),
                        fVar17 * local_c0 + *(float *)((longlong)param_4 + 0xc));
    local_b4 = uVar7 << 0x20 | uVar7 >> 0x20;
    fVar3 = *(float *)(param_4 + 4);
    fVar4 = *(float *)(param_4 + 5);
    fVar5 = *(float *)((longlong)param_4 + 0x24);
    fStack_a0 = fVar3 * 0.0 + fVar4;
    fStack_a4 = fVar2 * 0.0 + fVar5;
    fStack_a8 = fVar4 * 0.0 + fVar3;
    local_ac = fVar5 * 0.0 + fVar2;
    local_bc = 0;
    local_9c = CONCAT44(fVar17 * fVar3 + fVar18 * fVar4 + *(float *)(param_4 + 6),
                        fVar17 * fVar2 + fVar18 * fVar5 + *(float *)((longlong)param_4 + 0x2c));
    local_94 = local_94 & 0xfc | *(char *)((longlong)param_4 + 0x34) * '\x02' & 2U;
    local_100 = 0;
    local_110 = (float *)CONCAT44(local_110._4_4_,0xbfc90fdb);
    local_118 = 0;
    local_d4 = fVar20;
    local_d0 = fVar19;
    FUN_14695471e(param_6,param_7,&local_c8,lVar12);
  }
  if (!bVar8) {
    LOCK();
    plVar14 = plVar13 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
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
  if ((local_90 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_7 + 1;
}



// FUNCTION 146a2958c FUN_146a2958c body=216 status=ok
// SIG undefined FUN_146a2958c(void)

void FUN_146a2958c(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_1 + 0x368) = *param_2;
  plVar2 = (longlong *)param_2[1];
  plVar3 = *(longlong **)(param_1 + 0x370);
  if (plVar3 != plVar2) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar3 = *(longlong **)(param_1 + 0x370);
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x370) = plVar2;
  }
  *(undefined8 *)(param_1 + 0x360) = 0;
  local_30 = *param_2;
  local_28 = param_2[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_1456f28da(param_1 + 8,&local_30);
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a29666 FUN_146a29666 body=802 status=ok
// SIG undefined FUN_146a29666(void)

longlong FUN_146a29666(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  bool bVar15;
  undefined1 auStack_88 [47];
  char local_59;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar13 = (longlong *)param_1[0x56];
  bVar3 = true;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
    plVar14 = (longlong *)0x0;
  }
  else {
    iVar8 = (int)plVar13[1];
    plVar14 = (longlong *)0x0;
    do {
      if (iVar8 == 0) {
        plVar13 = (longlong *)0x0;
        goto LAB_146a296c0;
      }
      LOCK();
      iVar9 = (int)plVar13[1];
      bVar15 = iVar8 == iVar9;
      if (bVar15) {
        *(int *)(plVar13 + 1) = iVar8 + 1;
        iVar9 = iVar8;
      }
      iVar8 = iVar9;
      UNLOCK();
    } while (!bVar15);
    plVar14 = (longlong *)param_1[0x55];
    bVar3 = false;
  }
LAB_146a296c0:
  (**(code **)(*plVar14 + 0xe8))(plVar14,&local_58);
  cVar4 = (**(code **)(*local_58 + 0x198))();
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
  cVar5 = (**(code **)(*plVar14 + 0x68))(plVar14,(int)param_1[0x57]);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c98edd0) && (FUN_144b3d300(&DAT_14c98edd0), DAT_14c98edd0 == -1)) {
    FUN_1446ddc76(&DAT_14c98edc8,"GenericWhiteBox",1);
    _Init_thread_footer(&DAT_14c98edd0);
  }
  plVar10 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar10 == (longlong *)0x0) {
    plVar10 = DAT_14c96b350;
  }
  lVar12 = 0;
  (**(code **)(*plVar10 + 0x50))(plVar10,DAT_14c98edc8,0,0);
  lVar11 = (**(code **)(*plVar14 + 0x48))(plVar14,param_1);
  if (lVar11 == 0) goto LAB_146a29885;
  local_59 = cVar4;
  cVar4 = (**(code **)(*plVar14 + 0x10))(plVar14,lVar11);
  cVar6 = (**(code **)(*plVar14 + 0x20))(plVar14,lVar11);
  iVar8 = (**(code **)(*param_1 + 0x78))(param_1);
  uVar2 = *(uint *)(param_1 + 0x57);
  if (cVar4 == '\0') {
    if (cVar6 == '\0') goto LAB_146a2982f;
    lVar12 = param_1[0x59];
    if (local_59 == '\0') {
      if (*(char *)((longlong)param_1 + 0x43) == '\0') {
        lVar12 = lVar12 + 0xaa0;
        goto LAB_146a29885;
      }
    }
    else if (*(char *)((longlong)param_1 + 0x43) == '\0') {
      lVar12 = lVar12 + 0x9f0;
      goto LAB_146a29885;
    }
    if ((uVar2 & 1) != 0) goto LAB_146a2987e;
  }
  else {
    if (*(char *)((longlong)param_1 + 700) == '\x01') {
      lVar12 = param_1[0x59];
      if (local_59 == '\0') {
        if (*(char *)((longlong)param_1 + 0x43) == '\0') {
          lVar12 = lVar12 + 0x2d0;
        }
        else {
          lVar12 = lVar12 + 0x220;
        }
      }
      else if (*(char *)((longlong)param_1 + 0x43) == '\0') {
        lVar12 = lVar12 + 0x170;
      }
      else {
        lVar12 = lVar12 + 0xc0;
      }
      goto LAB_146a29885;
    }
LAB_146a2982f:
    if (((cVar5 != '\0') && (*(char *)(param_1[0x59] + 0x380) == '\x01')) &&
       (iVar9 = (**(code **)(*param_1 + 0x38))(param_1), iVar9 == 0)) {
      if (*(char *)((longlong)param_1 + 0x43) == '\x01') {
        lVar12 = param_1[0x59] + 0x440;
      }
      else {
        lVar12 = param_1[0x59] + 0x390;
      }
      goto LAB_146a29885;
    }
    bVar7 = iVar8 != 0 & *(byte *)((longlong)param_1 + 0x43);
    lVar12 = param_1[0x59];
    if ((uVar2 & 1) != 0) {
      if (bVar7 == 0) {
        lVar12 = lVar12 + 0x700;
        goto LAB_146a29885;
      }
LAB_146a2987e:
      lVar12 = lVar12 + 0x650;
      goto LAB_146a29885;
    }
    if (bVar7 == 0) {
      lVar12 = lVar12 + 0x5a0;
      goto LAB_146a29885;
    }
  }
  lVar12 = lVar12 + 0x4f0;
LAB_146a29885:
  if (!bVar3) {
    LOCK();
    plVar14 = plVar13 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar12;
}



// FUNCTION 146a2998a FUN_146a2998a body=45 status=ok
// SIG undefined FUN_146a2998a(void)

longlong FUN_146a2998a(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_146a2bbb6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a299b8 FUN_146a299b8 body=1300 status=ok
// SIG undefined FUN_146a299b8(void)

undefined1 * FUN_146a299b8(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  char cVar11;
  undefined4 uVar12;
  undefined8 unaff_RBP;
  longlong *plVar13;
  longlong *plVar14;
  bool bVar15;
  bool bVar16;
  undefined1 auStack_1a8 [36];
  undefined4 local_184;
  longlong local_180;
  longlong local_178;
  longlong *plStack_170;
  undefined1 local_168 [16];
  longlong local_158;
  longlong *plStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  longlong local_108;
  undefined1 local_100 [8];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e0;
  undefined1 local_d8 [136];
  undefined4 local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  plVar13 = *(longlong **)(param_1 + 0x2a8);
  uVar12 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  if (plVar13 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
    plVar14 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)plVar13[1];
    plVar14 = (longlong *)0x0;
    do {
      if (iVar6 == 0) {
        plVar13 = (longlong *)0x0;
        goto LAB_146a29a1a;
      }
      LOCK();
      iVar5 = (int)plVar13[1];
      bVar15 = iVar6 == iVar5;
      if (bVar15) {
        *(int *)(plVar13 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar15);
    plVar14 = *(longlong **)(param_1 + 0x2a0);
    uVar12 = 0;
  }
LAB_146a29a1a:
  *(undefined2 *)(param_1 + 0x370) = 0;
  lVar10 = *(longlong *)(param_4 + 0x40);
  plVar3 = *(longlong **)(param_4 + 0x50);
  local_180 = param_4;
  if (plVar3 == (longlong *)0x0) {
    lVar4 = CONCAT44(DAT_14c966e98._4_4_,(undefined4)DAT_14c966e98);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    lVar4 = CONCAT44(DAT_14c966e98._4_4_,(undefined4)DAT_14c966e98);
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
  if (((lVar10 != lVar4) ||
      (iVar6 = (**(code **)(*(longlong *)(param_1 + -8) + 0x78))((longlong *)(param_1 + -8)),
      iVar6 == 0)) ||
     (puVar8 = (undefined8 *)(**(code **)(*plVar14 + 0x48))(plVar14), puVar8 == (undefined8 *)0x0))
  {
    cVar11 = (char)uVar12;
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
    goto LAB_146a29c60;
  }
  local_184 = uVar12;
  uVar7 = (**(code **)(*plVar14 + 0x10))(plVar14);
  if (iVar6 == 3) {
    if ((*(ushort *)(local_180 + 8) & 3) == 0) {
      if ((*(ushort *)(local_180 + 8) & 0xc) == 0) goto LAB_146a29b3f;
      local_120 = *puVar8;
      local_118 = puVar8[1];
      if (local_118 != 0) {
        LOCK();
        *(int *)(local_118 + 8) = *(int *)(local_118 + 8) + 1;
        UNLOCK();
      }
      (**(code **)(*plVar14 + 0x28))(plVar14,&local_120,uVar7 ^ 1,1);
    }
    else {
      local_110 = *puVar8;
      local_108 = puVar8[1];
      if (local_108 != 0) {
        LOCK();
        *(int *)(local_108 + 8) = *(int *)(local_108 + 8) + 1;
        UNLOCK();
      }
      (**(code **)(*plVar14 + 0x38))(plVar14);
    }
    *(undefined1 *)(param_1 + 0x370) = 1;
    if (*(int *)(param_1 + 0x2b8) == 1) {
      (**(code **)(*plVar14 + 0x40))(plVar14);
    }
  }
LAB_146a29b3f:
  if ((((char)uVar7 == '\0') || (*(char *)(param_1 + 0x373) != '\0')) &&
     (*(char *)(param_1 + 0x370) == '\0')) {
    (**(code **)(*plVar14 + 0x30))(plVar14);
    local_130 = *puVar8;
    local_128 = puVar8[1];
    if (local_128 != 0) {
      LOCK();
      *(int *)(local_128 + 8) = *(int *)(local_128 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar14 + 0x28))(plVar14,&local_130,1,1);
    *(undefined1 *)(param_1 + 0x370) = 1;
    if (*(int *)(param_1 + 0x2b8) == 1) {
      (**(code **)(*plVar14 + 0x40))(plVar14);
    }
  }
  local_100[0] = 1;
  local_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  memset(local_d8,0,0x88);
  local_50 = 0x20702;
  local_4c = 0;
  local_148 = (undefined4)DAT_14c966e98;
  uStack_144 = DAT_14c966e98._4_4_;
  uStack_140 = (undefined4)DAT_14c966ea0;
  uStack_13c = DAT_14c966ea0._4_4_;
  local_138 = DAT_14c966ea8;
  if (DAT_14c966ea8 != 0) {
    LOCK();
    *(int *)(DAT_14c966ea8 + 8) = *(int *)(DAT_14c966ea8 + 8) + 1;
    UNLOCK();
  }
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 == (longlong *)0x0) {
LAB_146a29cba:
    local_158 = 0;
    plStack_150 = (longlong *)0x0;
    bVar15 = true;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146a29cba;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar15 = iVar6 == iVar5;
      if (bVar15) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar15);
    lVar10 = *(longlong *)(param_1 + 8) + -8;
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar10 = 0;
    }
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
    local_158 = lVar10 + 8;
    if (lVar10 == 0) {
      local_158 = 0;
    }
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    bVar15 = false;
    plStack_150 = plVar3;
  }
  plVar3 = plStack_150;
  uVar9 = FUN_1407c9a0c(local_100,&local_158,&local_148);
  (**(code **)(*plVar14 + 0xe8))(plVar14,local_168);
  uVar9 = FUN_140592b68(uVar9,local_168,0,0);
  plVar14 = *(longlong **)(param_1 + 0x10);
  if (plVar14 == (longlong *)0x0) {
LAB_146a29d77:
    local_178 = 0;
    plStack_170 = (longlong *)0x0;
    bVar16 = true;
  }
  else {
    iVar6 = (int)plVar14[1];
    do {
      if (iVar6 == 0) goto LAB_146a29d77;
      LOCK();
      iVar5 = (int)plVar14[1];
      bVar16 = iVar6 == iVar5;
      if (bVar16) {
        *(int *)(plVar14 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar16);
    lVar10 = *(longlong *)(param_1 + 8) + -8;
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar10 = 0;
    }
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
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
    local_178 = lVar10 + 8;
    if (lVar10 == 0) {
      local_178 = 0;
    }
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    bVar16 = false;
    plStack_170 = plVar14;
  }
  plVar14 = plStack_170;
  uVar9 = FUN_140592a6e(uVar9,&local_178);
  FUN_1403d4c6e(param_2,uVar9);
  if (!bVar16) {
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
  plVar14 = plStack_150;
  if (plStack_150 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_150)(plStack_150);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  if (!bVar15) {
    LOCK();
    plVar14 = plVar3 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
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
  FUN_14493db24(local_100);
  cVar11 = (char)local_184;
LAB_146a29c60:
  if (cVar11 == '\0') {
    LOCK();
    plVar14 = plVar13 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146a29ece FUN_146a29ece body=1907 status=ok
// SIG undefined FUN_146a29ece(void)

undefined1 * FUN_146a29ece(longlong param_1,undefined1 *param_2,float *param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_1b8 [36];
  undefined4 local_194;
  undefined1 *local_190;
  longlong *local_188;
  float *local_180;
  undefined8 local_178;
  longlong local_170;
  undefined8 local_168;
  longlong local_160;
  undefined8 local_158;
  longlong local_150;
  undefined8 local_148;
  longlong local_140;
  ulonglong local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 local_118;
  undefined1 local_110 [16];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_88;
  undefined1 local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  plVar16 = *(longlong **)(param_1 + 0x2a8);
  local_190 = param_2;
  local_180 = param_3;
  if (plVar16 == (longlong *)0x0) {
    local_194 = (undefined4)CONCAT71((int7)(local_80 >> 8),1);
LAB_146a29f95:
    plVar12 = (longlong *)0x0;
    plVar15 = (longlong *)0x0;
    plVar16 = (longlong *)0x0;
  }
  else {
    uVar10 = (ulonglong)*(uint *)(plVar16 + 1);
    do {
      uVar8 = (uint)uVar10;
      if (uVar8 == 0) {
        local_194 = (undefined4)CONCAT71((int7)(uVar10 >> 8),1);
        goto LAB_146a29f95;
      }
      LOCK();
      uVar3 = *(uint *)(plVar16 + 1);
      if (uVar8 == uVar3) {
        *(uint *)(plVar16 + 1) = uVar8 + 1;
      }
      else {
        uVar10 = (ulonglong)uVar3;
      }
      UNLOCK();
    } while (uVar8 != uVar3);
    plVar15 = *(longlong **)(param_1 + 0x2a0);
    plVar12 = plVar15 + -0x9b;
    if (plVar15 == (longlong *)0x0) {
      plVar12 = (longlong *)0x0;
    }
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    LOCK();
    plVar4 = plVar16 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
      local_194 = 0;
    }
    else {
      local_194 = 0;
    }
  }
  local_188 = (longlong *)(param_1 + -8);
  lVar14 = *(longlong *)(param_4 + 0x40);
  plVar4 = *(longlong **)(param_4 + 0x50);
  if (plVar4 == (longlong *)0x0) {
    if (lVar14 == DAT_14c966e98) goto LAB_146a2a007;
LAB_146a2a2b5:
    puVar13 = local_190;
    if ((lVar14 != DAT_14c966fa0) || (cVar6 = FUN_146af41be(plVar12), cVar6 != '\0'))
    goto LAB_146a2a3fb;
LAB_146a2a339:
    iVar9 = (**(code **)(*local_188 + 0x78))();
    if ((2 < iVar9 - 1U) ||
       (puVar11 = (undefined8 *)(**(code **)(*plVar15 + 0x48))(plVar15),
       puVar11 == (undefined8 *)0x0)) goto LAB_146a2a3fb;
    cVar6 = (**(code **)(*plVar15 + 0x10))(plVar15,puVar11);
    if (cVar6 == '\0') {
      (**(code **)(*plVar15 + 0x30))(plVar15);
      local_168 = *puVar11;
      local_160 = puVar11[1];
      if (local_160 != 0) {
        LOCK();
        *(int *)(local_160 + 8) = *(int *)(local_160 + 8) + 1;
        UNLOCK();
      }
      (**(code **)(*plVar15 + 0x28))(plVar15,&local_168,1,1);
      (**(code **)(*plVar15 + 0x40))(plVar15,2);
    }
    local_178 = *puVar11;
    local_170 = puVar11[1];
    if (local_170 != 0) {
      LOCK();
      *(int *)(local_170 + 8) = *(int *)(local_170 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar15 + 0xa0))(plVar15,&local_178,param_4);
    *puVar13 = 1;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    lVar5 = DAT_14c966e98;
    UNLOCK();
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
    puVar13 = local_190;
    if (lVar14 != lVar5) {
      lVar14 = *(longlong *)(param_4 + 0x40);
      plVar4 = *(longlong **)(param_4 + 0x50);
      if (plVar4 == (longlong *)0x0) goto LAB_146a2a2b5;
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      if (lVar14 == DAT_14c966fa0) {
        cVar6 = FUN_146af41be(plVar12);
        puVar13 = local_190;
        LOCK();
        plVar12 = plVar4 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
        if (cVar6 == '\0') goto LAB_146a2a339;
      }
      else {
        LOCK();
        plVar12 = plVar4 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
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
      goto LAB_146a2a3fb;
    }
LAB_146a2a007:
    local_138 = local_138 & 0xffffffffffffff00;
    local_118 = 0;
    local_130 = 0;
    uStack_128 = 0;
    memset(local_110,0,0x88);
    puVar13 = local_190;
    local_88 = 0x20702;
    local_100 = 0;
    uStack_f8 = 0;
    local_84 = 1;
    FUN_1403d4c6e(local_190);
    FUN_14493db24(&local_138);
    if (*(char *)(param_1 + 0x370) == '\x01') {
      local_138 = CONCAT71(local_138._1_7_,1);
      local_118 = 0;
      local_130 = 0;
      uStack_128 = 0;
      memset(local_110,0,0x88);
      puVar13 = local_190;
      local_88 = 0x20702;
      local_100 = 0;
      uStack_f8 = 0;
      local_84 = 1;
      FUN_1402c17c2(local_190,&local_138);
      FUN_14493db24(&local_138);
    }
    fVar18 = local_180[8] * 0.0;
    fVar19 = local_180[7] * 0.0;
    fVar17 = local_180[10] * 0.0;
    fVar20 = local_180[9] * 0.0;
    local_138 = CONCAT44(fVar17 + fVar18 + local_180[0xc],fVar20 + fVar19 + local_180[0xb]);
    local_130 = CONCAT44(*local_180 * local_180[8] + fVar17,*local_180 * local_180[7] + fVar20);
    uStack_128 = CONCAT44(local_180[10] * local_180[1] + fVar18,local_180[1] * local_180[9] + fVar19
                         );
    cVar6 = FUN_1402b2a42();
    cVar7 = FUN_140591fd6(param_1);
    if (cVar7 != '\0') {
      if ((cVar6 != '\0') && (*(char *)(param_1 + 0x371) == '\0')) {
        iVar9 = (**(code **)(*local_188 + 0x78))();
        if (iVar9 == 3) {
          if ((((*(char *)(param_1 + 0x370) == '\0') && ((*(byte *)(param_4 + 8) & 0xf) == 0)) &&
              (puVar11 = (undefined8 *)(**(code **)(*plVar15 + 0x48))(plVar15,local_188),
              puVar11 != (undefined8 *)0x0)) &&
             ((cVar6 = (**(code **)(*plVar15 + 0x10))(plVar15,puVar11), cVar6 != '\0' &&
              (iVar9 = (**(code **)(*plVar15 + 0x70))(plVar15), 1 < iVar9)))) {
            (**(code **)(*plVar15 + 0x30))(plVar15);
            local_148 = *puVar11;
            local_140 = puVar11[1];
            if (local_140 != 0) {
              LOCK();
              *(int *)(local_140 + 8) = *(int *)(local_140 + 8) + 1;
              UNLOCK();
            }
            (**(code **)(*plVar15 + 0x28))(plVar15,&local_148,1,1);
            (**(code **)(*plVar15 + 0x40))(plVar15);
            goto LAB_146a2a538;
          }
        }
        else if (iVar9 == 2) {
          if (*(char *)(param_1 + 0x370) == '\0') {
            (**(code **)(*plVar15 + 0x30))(plVar15);
            (**(code **)(*plVar15 + 0x40))(plVar15);
          }
LAB_146a2a538:
          local_138 = CONCAT71(local_138._1_7_,1);
          local_118 = 0;
          local_130 = 0;
          uStack_128 = 0;
          memset(local_110,0,0x88);
          puVar13 = local_190;
          local_88 = 0x20702;
          local_100 = 0;
          uStack_f8 = 0;
          local_84 = 1;
          FUN_1402c17c2(local_190,&local_138);
          FUN_14493db24(&local_138);
        }
      }
      puVar11 = (undefined8 *)(**(code **)(*plVar15 + 0x48))(plVar15,local_188);
      if (puVar11 != (undefined8 *)0x0) {
        local_158 = *puVar11;
        local_150 = puVar11[1];
        if (local_150 != 0) {
          LOCK();
          *(int *)(local_150 + 8) = *(int *)(local_150 + 8) + 1;
          UNLOCK();
        }
        cVar6 = (**(code **)(*plVar15 + 0xa8))(plVar15);
        if (cVar6 != '\0') {
          local_138 = CONCAT71(local_138._1_7_,1);
          local_118 = 0;
          local_130 = 0;
          uStack_128 = 0;
          memset(local_110,0,0x88);
          puVar13 = local_190;
          local_88 = 0x20702;
          local_100 = 0;
          uStack_f8 = 0;
          local_84 = 1;
          FUN_1402c17c2(local_190,&local_138);
          FUN_14493db24(&local_138);
        }
      }
      if (((*(char *)(param_1 + 0x370) == '\x01') && (*(char *)(param_1 + 0x371) == '\0')) &&
         (*(int *)(param_1 + 0x2b8) == 0)) {
        (**(code **)(*plVar15 + 0x40))(plVar15,2);
      }
      goto LAB_146a2a42d;
    }
    FUN_14493db24(puVar13);
LAB_146a2a3fb:
    *puVar13 = 0;
  }
  puVar13[0x20] = 0;
  *(undefined8 *)(puVar13 + 8) = 0;
  *(undefined8 *)(puVar13 + 0x10) = 0;
  memset(puVar13 + 0x28,0,0x88);
  *(undefined4 *)(puVar13 + 0xb0) = 0x20702;
  puVar13[0xb4] = 0;
LAB_146a2a42d:
  if ((char)local_194 == '\0') {
    LOCK();
    plVar12 = plVar16 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
    LOCK();
    plVar12 = plVar16 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar13;
}



// FUNCTION 146a2a642 FUN_146a2a642 body=426 status=ok
// SIG undefined FUN_146a2a642(void)

undefined1 * FUN_146a2a642(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_4 + 0x40);
  plVar9 = *(longlong **)(param_4 + 0x50);
  lVar4 = DAT_14c966e98;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    lVar4 = DAT_14c966e98;
    UNLOCK();
    LOCK();
    plVar10 = plVar9 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  if (lVar2 == lVar4) {
    plVar9 = *(longlong **)(param_1 + 0x2a8);
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
          goto LAB_146a2a6ea;
        }
        LOCK();
        iVar5 = (int)plVar9[1];
        bVar11 = iVar7 == iVar5;
        if (bVar11) {
          *(int *)(plVar9 + 1) = iVar7 + 1;
          iVar5 = iVar7;
        }
        iVar7 = iVar5;
        UNLOCK();
      } while (!bVar11);
      plVar10 = *(longlong **)(param_1 + 0x2a0);
      bVar3 = false;
    }
LAB_146a2a6ea:
    puVar8 = (undefined8 *)(**(code **)(*plVar10 + 0x48))(plVar10);
    if (puVar8 != (undefined8 *)0x0) {
      local_48 = *puVar8;
      local_40 = puVar8[1];
      if (local_40 != 0) {
        LOCK();
        *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
        UNLOCK();
      }
      cVar6 = (**(code **)(*plVar10 + 0xb0))(plVar10);
      if (cVar6 == '\0') {
        (**(code **)(*(longlong *)(param_1 + -8) + 0x28))((longlong *)(param_1 + -8));
      }
      *param_2 = 1;
      param_2[0x20] = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      memset(param_2 + 0x28,0,0x88);
      *(undefined4 *)(param_2 + 0xb0) = 0x20702;
      param_2[0xb4] = 0;
    }
    if (!bVar3) {
      LOCK();
      plVar10 = plVar9 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
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
    if (puVar8 != (undefined8 *)0x0) goto LAB_146a2a7bf;
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_146a2a7bf:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146a2a7ee FUN_146a2a7ee body=637 status=ok
// SIG undefined FUN_146a2a7ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_146a2a7ee(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [16];
  undefined1 local_e8 [8];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_c8;
  undefined1 local_c0 [136];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(char *)(param_1 + 0x372) == '\x01') {
    *(undefined1 *)(param_1 + 0x372) = 0;
    local_e8[0] = 1;
    local_c8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    memset(local_c0,0,0x88);
    local_38 = 0x20702;
    plVar7 = *(longlong **)(param_1 + 0x2a8);
    if (plVar7 == (longlong *)0x0) {
LAB_146a2a990:
      (**(code **)(_DAT_00000000 + 0xe8))(0,local_f8);
      uVar6 = FUN_140592a6e(local_e8,local_f8);
      FUN_1403d4c6e(param_2,uVar6);
    }
    else {
      iVar5 = (int)plVar7[1];
      do {
        if (iVar5 == 0) goto LAB_146a2a990;
        LOCK();
        iVar3 = (int)plVar7[1];
        bVar8 = iVar5 == iVar3;
        if (bVar8) {
          *(int *)(plVar7 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
      } while (!bVar8);
      (**(code **)(**(longlong **)(param_1 + 0x2a0) + 0xe8))
                (*(longlong **)(param_1 + 0x2a0),local_f8);
      uVar6 = FUN_140592a6e(local_e8,local_f8);
      FUN_1403d4c6e(param_2,uVar6);
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
    FUN_14493db24(local_e8);
  }
  else {
    cVar4 = FUN_140591fd6(param_1);
    if (((cVar4 != '\0') &&
        (*(undefined1 *)(param_1 + 0x371) = 1, *(char *)(param_1 + 0x370) == '\x01')) &&
       (*(int *)(param_1 + 0x2b8) == 0)) {
      plVar7 = *(longlong **)(param_1 + 0x2a8);
      if (plVar7 == (longlong *)0x0) {
LAB_146a2aa5a:
        (**(code **)(_DAT_00000000 + 0x40))(0);
      }
      else {
        iVar5 = (int)plVar7[1];
        do {
          if (iVar5 == 0) goto LAB_146a2aa5a;
          LOCK();
          iVar3 = (int)plVar7[1];
          bVar8 = iVar5 == iVar3;
          if (bVar8) {
            *(int *)(plVar7 + 1) = iVar5 + 1;
            iVar3 = iVar5;
          }
          iVar5 = iVar3;
          UNLOCK();
        } while (!bVar8);
        (**(code **)(**(longlong **)(param_1 + 0x2a0) + 0x40))();
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
    }
    if (((*(int *)(param_1 + 800) != 0) && (*(longlong **)(param_1 + 0x318) != (longlong *)0x0)) &&
       (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x318) + 0x30))(), cVar4 != '\0')) {
      if (*(int *)(param_1 + 800) == 0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = *(longlong **)(param_1 + 0x318);
      }
      (**(code **)(*plVar7 + 0x58))(plVar7,param_2,param_3,param_4);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_118);
    }
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146a2aa72 FUN_146a2aa72 body=90 status=ok
// SIG undefined FUN_146a2aa72(void)

void FUN_146a2aa72(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  
  if ((*(int *)(param_1 + 0x330) != 0) && (*(longlong **)(param_1 + 0x328) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x328) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x330) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x328);
      }
                    /* WARNING: Could not recover jumptable at 0x000146a2aabd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x58))(plVar2,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 146a2aacc FUN_146a2aacc body=106 status=ok
// SIG undefined FUN_146a2aacc(void)

void FUN_146a2aacc(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  
  if (*(char *)(param_1 + 0x314) == '\x01') {
    *(undefined1 *)(param_1 + 0x314) = 0;
  }
  if ((*(int *)(param_1 + 0x340) != 0) && (*(longlong **)(param_1 + 0x338) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x338) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x340) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x338);
      }
                    /* WARNING: Could not recover jumptable at 0x000146a2ab27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x58))(plVar2,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 146a2ab36 FUN_146a2ab36 body=1078 status=ok
// SIG undefined FUN_146a2ab36(void)

undefined1 *
FUN_146a2ab36(longlong param_1,undefined1 *param_2,undefined8 *param_3,longlong param_4)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  undefined8 uVar7;
  int iVar8;
  char cVar9;
  int iVar10;
  byte *pbVar11;
  longlong *plVar12;
  byte *pbVar13;
  longlong *plVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_1a8 [40];
  int local_180 [2];
  undefined **local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 uStack_120;
  undefined3 uStack_118;
  undefined4 local_115;
  undefined1 uStack_111;
  undefined3 uStack_110;
  undefined4 uStack_10d;
  undefined4 uStack_109;
  undefined8 local_100;
  longlong local_f8;
  longlong local_f0;
  undefined4 local_e8;
  byte local_e4 [4];
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if (((*(int *)(param_1 + 0x2e8) == 0) || (*(longlong **)(param_1 + 0x2e0) == (longlong *)0x0)) ||
     (cVar9 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x30))(), cVar9 == '\0')) {
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
    goto LAB_146a2ac12;
  }
  plVar14 = *(longlong **)(param_1 + 0x2a8);
  bVar6 = true;
  if (plVar14 == (longlong *)0x0) {
    plVar14 = (longlong *)0x0;
    plVar12 = (longlong *)0x0;
  }
  else {
    iVar10 = (int)plVar14[1];
    plVar12 = (longlong *)0x0;
    do {
      if (iVar10 == 0) {
        plVar14 = (longlong *)0x0;
        goto LAB_146a2acb0;
      }
      LOCK();
      iVar8 = (int)plVar14[1];
      bVar15 = iVar10 == iVar8;
      if (bVar15) {
        *(int *)(plVar14 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar15);
    plVar12 = *(longlong **)(param_1 + 0x2a0);
    bVar6 = false;
  }
LAB_146a2acb0:
  fVar16 = *(float *)(param_4 + 0x20);
  fVar2 = *(float *)(param_4 + 0x24);
  fVar18 = *(float *)((longlong)param_3 + 0x1c);
  fVar17 = *(float *)(param_3 + 4);
  fVar3 = *(float *)((longlong)param_3 + 0x24);
  fVar19 = *(float *)(param_3 + 5);
  fVar20 = 1.0 / (fVar18 * fVar19 - fVar3 * fVar17);
  fVar4 = *(float *)(param_3 + 6);
  fVar5 = *(float *)((longlong)param_3 + 0x2c);
  iVar10 = (**(code **)(*plVar12 + 0xc0))();
  if (iVar10 == 0) {
    fVar18 = -fVar3 * fVar20;
    fVar19 = fVar19 * fVar20;
    fVar17 = -fVar5 * fVar19 - fVar4 * fVar18;
    fVar16 = fVar16 * fVar19 + fVar18 * fVar2;
  }
  else {
    fVar18 = fVar18 * fVar20;
    fVar20 = -fVar17 * fVar20;
    fVar17 = -fVar5 * fVar20 - fVar4 * fVar18;
    fVar16 = fVar16 * fVar20 + fVar18 * fVar2;
  }
  fVar2 = (float)((ulonglong)*param_3 >> 0x20);
  if (iVar10 == 0) {
    fVar2 = (float)*param_3;
  }
  fVar18 = fVar2 * 0.25;
  if (10.0 <= fVar18) {
    fVar18 = 10.0;
  }
  if (fVar18 <= 3.0) {
    fVar18 = 3.0;
  }
  local_180[0] = 0;
  if (fVar18 <= fVar16 + fVar17) {
    local_180[0] = (fVar2 - fVar18 < fVar16 + fVar17) + 1;
  }
  local_170 = *(undefined8 *)(param_4 + 8);
  uStack_168 = *(undefined8 *)(param_4 + 0x10);
  local_160 = *(undefined8 *)(param_4 + 0x18);
  local_158 = *(undefined8 *)(param_4 + 0x20);
  uStack_150 = *(undefined8 *)(param_4 + 0x28);
  local_148 = *(undefined8 *)(param_4 + 0x30);
  uStack_140 = *(undefined8 *)(param_4 + 0x38);
  local_138 = *(undefined8 *)(param_4 + 0x40);
  local_130 = *(undefined8 *)(param_4 + 0x48);
  local_128 = *(longlong *)(param_4 + 0x50);
  if (local_128 != 0) {
    LOCK();
    *(int *)(local_128 + 8) = *(int *)(local_128 + 8) + 1;
    UNLOCK();
  }
  uStack_120 = *(undefined8 *)(param_4 + 0x58);
  uVar7 = *(undefined8 *)(param_4 + 0x60);
  uStack_10d = *(undefined4 *)(param_4 + 0x6b);
  uStack_109 = *(undefined4 *)(param_4 + 0x6f);
  uStack_118 = (undefined3)uVar7;
  local_115 = (undefined4)((ulonglong)uVar7 >> 0x18);
  uStack_110 = (undefined3)((uint)*(undefined4 *)(param_4 + 0x67) >> 8);
  uStack_111 = (undefined1)((ulonglong)uVar7 >> 0x38);
  local_178 = &PTR_FUN_149efe1e0;
  local_100 = *(undefined8 *)(param_4 + 0x78);
  local_f8 = *(longlong *)(param_4 + 0x80);
  if (local_f8 != 0) {
    LOCK();
    *(int *)(local_f8 + 8) = *(int *)(local_f8 + 8) + 1;
    UNLOCK();
  }
  local_f0 = param_1 + -8;
  FUN_146a2bcbe(local_180,&local_e8);
  pbVar11 = local_e4;
  if (&local_e8 == (undefined4 *)(param_1 + 0x310)) {
    if ((local_e4[0] & 1) != 0) goto LAB_146a2aee7;
  }
  else {
    pbVar13 = (byte *)(param_1 + 0x314);
    if ((local_e4[0] & 1) == 0) {
      pbVar11 = pbVar13;
      if (*pbVar13 != 1) goto LAB_146a2aeea;
    }
    else {
      *(undefined4 *)(param_1 + 0x310) = local_e8;
      *pbVar13 = 1;
    }
LAB_146a2aee7:
    *pbVar11 = 0;
  }
LAB_146a2aeea:
  FUN_1469ac82c(&local_178);
  *param_2 = 1;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  if (!bVar6) {
    LOCK();
    plVar12 = plVar14 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
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
LAB_146a2ac12:
  if ((local_e0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146a2af6e FUN_146a2af6e body=207 status=ok
// SIG undefined FUN_146a2af6e(void)

undefined8 FUN_146a2af6e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  char local_e0 [184];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_f8 = param_1 + -8;
  local_f0 = param_3;
  local_e8 = param_4;
  FUN_146a2bdc8(&local_f8,local_e0);
  if (((local_e0[0] == '\0') && (*(int *)(param_1 + 0x350) != 0)) &&
     (*(longlong **)(param_1 + 0x348) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x348) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x350) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x348);
      }
      (**(code **)(*plVar2 + 0x58))(plVar2,param_2,param_4);
      goto LAB_146a2afc9;
    }
  }
  FUN_1403d4c6e(param_2,local_e0);
LAB_146a2afc9:
  FUN_14493db24(local_e0);
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a2b03e FUN_146a2b03e body=394 status=ok
// SIG undefined FUN_146a2b03e(void)

undefined8 FUN_146a2b03e(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_128 [32];
  longlong local_108;
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
  *(undefined1 *)(param_1 + 0x372) = 1;
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
LAB_146a2b11f:
    local_108 = 0;
    plStack_100 = (longlong *)0x0;
    bVar9 = true;
  }
  else {
    iVar6 = (int)plVar4[1];
    do {
      if (iVar6 == 0) goto LAB_146a2b11f;
      LOCK();
      iVar5 = (int)plVar4[1];
      bVar9 = iVar6 == iVar5;
      if (bVar9) {
        *(int *)(plVar4 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar8 = *(longlong *)(param_1 + 8) + -8;
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar8 = 0;
    }
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
    local_108 = lVar8 + 8;
    if (lVar8 == 0) {
      local_108 = 0;
    }
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    bVar9 = false;
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
  if (!bVar9) {
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



// FUNCTION 146a2b1ca FUN_146a2b1ca body=644 status=ok
// SIG undefined FUN_146a2b1ca(void)

undefined1 * FUN_146a2b1ca(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  longlong local_120;
  undefined8 local_118;
  longlong local_110;
  undefined8 local_108;
  longlong local_100;
  undefined1 local_f8 [8];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_d8;
  undefined1 local_d0 [136];
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  if (*(char *)(param_1 + 0x372) != '\x01') goto LAB_146a2b420;
  plVar1 = (longlong *)(param_1 + -8);
  *(undefined1 *)(param_1 + 0x372) = 0;
  plVar12 = *(longlong **)(param_1 + 0x2a8);
  bVar3 = true;
  if (plVar12 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
    plVar11 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)plVar12[1];
    plVar11 = (longlong *)0x0;
    do {
      if (iVar6 == 0) {
        plVar12 = (longlong *)0x0;
        goto LAB_146a2b275;
      }
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
    plVar11 = *(longlong **)(param_1 + 0x2a0);
    bVar3 = false;
  }
LAB_146a2b275:
  puVar8 = (undefined8 *)(**(code **)(*plVar11 + 0x48))(plVar11,plVar1);
  if (puVar8 != (undefined8 *)0x0) {
    uVar7 = (**(code **)(*plVar1 + 0x78))(plVar1);
    if (uVar7 != 0) {
      cVar5 = (**(code **)(*plVar11 + 0x10))(plVar11,puVar8);
      if (cVar5 == '\0') {
        if (uVar7 != 3) {
          (**(code **)(*plVar11 + 0x30))(plVar11);
        }
        local_108 = *puVar8;
        local_100 = puVar8[1];
        if (local_100 != 0) {
          LOCK();
          *(int *)(local_100 + 8) = *(int *)(local_100 + 8) + 1;
          UNLOCK();
        }
        lVar9 = *plVar11;
        puVar10 = &local_108;
      }
      else {
        if ((uVar7 & 0xfffffffe) != 2) goto LAB_146a2b380;
        local_118 = *puVar8;
        local_110 = puVar8[1];
        if (local_110 != 0) {
          LOCK();
          *(int *)(local_110 + 8) = *(int *)(local_110 + 8) + 1;
          UNLOCK();
        }
        lVar9 = *plVar11;
        puVar10 = &local_118;
      }
      (**(code **)(lVar9 + 0x28))(plVar11,puVar10,1,1);
      (**(code **)(*plVar11 + 0x40))(plVar11);
      local_f8[0] = 1;
      local_d8 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      memset(local_d0,0,0x88);
      local_48 = 0x20702;
      local_44 = 0;
      FUN_1403d4924(param_2,local_f8);
      FUN_14493db24(local_f8);
    }
LAB_146a2b380:
    local_128 = *puVar8;
    local_120 = puVar8[1];
    if (local_120 != 0) {
      LOCK();
      *(int *)(local_120 + 8) = *(int *)(local_120 + 8) + 1;
      UNLOCK();
    }
    cVar5 = (**(code **)(*plVar11 + 0xa8))(plVar11);
    if (cVar5 != '\0') {
      local_f8[0] = 1;
      local_d8 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      memset(local_d0,0,0x88);
      local_48 = 0x20702;
      local_44 = 0;
      FUN_1403d4924(param_2,local_f8);
      FUN_14493db24(local_f8);
    }
  }
  if (!bVar3) {
    LOCK();
    plVar1 = plVar12 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
LAB_146a2b420:
  if ((local_40 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146a2b450 FUN_146a2b450 body=494 status=ok
// SIG undefined FUN_146a2b450(void)

longlong * FUN_146a2b450(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = FUN_14001cc68(0x70,0x10);
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 == (longlong *)0x0) {
LAB_146a2b48e:
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar9 = true;
  }
  else {
    iVar4 = (int)plVar2[1];
    do {
      if (iVar4 == 0) goto LAB_146a2b48e;
      LOCK();
      iVar3 = (int)plVar2[1];
      bVar9 = iVar4 == iVar3;
      if (bVar9) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar9);
    lVar8 = *(longlong *)(param_1 + 8) + -8;
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar8 = 0;
    }
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
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
    local_48 = lVar8 + 8;
    if (lVar8 == 0) {
      local_48 = 0;
    }
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    bVar9 = false;
    plStack_40 = plVar2;
  }
  plVar2 = plStack_40;
  FUN_146a2c22e(lVar5,&local_48);
  *param_2 = lVar5;
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_149ef0b50;
  plVar6[2] = lVar5;
  param_2[1] = (longlong)plVar6;
  if ((lVar5 == 0) ||
     (((*(longlong *)(lVar5 + 8) != 0 && (*(longlong *)(lVar5 + 0x10) != 0)) &&
      (0 < *(int *)(*(longlong *)(lVar5 + 0x10) + 8))))) goto LAB_146a2b5eb;
  if (plVar6 == (longlong *)0x0) {
    *(longlong *)(lVar5 + 8) = lVar5;
    plVar7 = *(longlong **)(lVar5 + 0x10);
    if (plVar7 == (longlong *)0x0) goto LAB_146a2b5eb;
LAB_146a2b531:
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    *(longlong **)(lVar5 + 0x10) = plVar6;
    if (plVar6 == (longlong *)0x0) goto LAB_146a2b5eb;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *(longlong *)(lVar5 + 8) = lVar5;
    if (*(longlong **)(lVar5 + 0x10) != plVar6) {
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
      plVar7 = *(longlong **)(lVar5 + 0x10);
      if (plVar7 != (longlong *)0x0) goto LAB_146a2b531;
      *(longlong **)(lVar5 + 0x10) = plVar6;
    }
  }
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
LAB_146a2b5eb:
  if (!bVar9) {
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146a2b642 FUN_146a2b642 body=173 status=ok
// SIG undefined FUN_146a2b642(void)

void FUN_146a2b642(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined4 uVar1;
  
  uVar1 = FUN_146a2c7bc(param_1 + -8,param_3,param_5,param_6,param_7);
  uVar1 = FUN_14023976a(param_1,param_2,param_3,param_4,param_5,uVar1,param_7,param_8);
  FUN_146a2ca0c(param_1 + -8,param_2,param_3,param_4,param_5,uVar1,param_7,param_8);
  return;
}



// FUNCTION 146a2b6f0 FUN_146a2b6f0 body=297 status=ok
// SIG undefined FUN_146a2b6f0(void)

void FUN_146a2b6f0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_1 + 0x360) = *param_2;
  plVar2 = (longlong *)param_2[1];
  plVar6 = *(longlong **)(param_1 + 0x368);
  if (plVar6 != plVar2) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar6 = *(longlong **)(param_1 + 0x368);
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
    *(longlong **)(param_1 + 0x368) = plVar2;
  }
  lVar3 = *(longlong *)(param_1 + 0x358);
  if (lVar3 == 0) {
    local_30 = *param_2;
    local_28 = param_2[1];
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
    }
    FUN_1456f28da(param_1,&local_30);
  }
  else {
    FUN_14149270a(lVar3);
    uVar4 = *param_2;
    lVar5 = param_2[1];
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    plVar2 = *(longlong **)(lVar3 + 0x18);
    *(undefined8 *)(lVar3 + 0x10) = uVar4;
    *(longlong *)(lVar3 + 0x18) = lVar5;
    if (plVar2 != (longlong *)0x0) {
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
    FUN_140a5503c(lVar3);
  }
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a2b81a FUN_146a2b81a body=120 status=ok
// SIG undefined FUN_146a2b81a(void)

longlong FUN_146a2b81a(longlong param_1)

{
  longlong lVar1;
  
  FUN_140a5071c();
  lVar1 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar1 == 0) {
    lVar1 = DAT_14c96b350;
  }
  *(longlong *)(param_1 + 0x1a8) = lVar1;
  *(undefined4 *)(param_1 + 0x1b0) = 0x41200000;
  *(undefined1 *)(param_1 + 0x1b4) = 1;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  *(undefined1 *)(param_1 + 0x1cc) = 1;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined2 *)(param_1 + 0x1e0) = 0x100;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  return param_1;
}



// FUNCTION 146a2b892 FUN_146a2b892 body=119 status=ok
// SIG undefined FUN_146a2b892(void)

longlong * FUN_146a2b892(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_146a2bb2e(param_1[2],*param_1,param_3);
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



// FUNCTION 146a2b90a FUN_146a2b90a body=338 status=ok
// SIG undefined FUN_146a2b90a(void)

longlong * FUN_146a2b90a(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar4 = (longlong *)FUN_14001cc68(0x2d8,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149f0e410;
  plVar1 = plVar4 + 2;
  FUN_146aec4be(plVar1);
  local_38 = plVar1;
  local_30 = plVar4;
  FUN_146a2ba86(&local_38,plVar1);
  plVar1 = local_30;
  if (local_30 == (longlong *)0x0) {
    *param_1 = (longlong)local_38;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_146a2b9ed;
    param_1[1] = 0;
LAB_146a2b9b7:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_146a2b9ed;
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
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    *param_1 = (longlong)local_38;
    plVar4 = (longlong *)param_1[1];
    if (local_30 != plVar4) {
      param_1[1] = (longlong)local_30;
      if (plVar4 == (longlong *)0x0) goto LAB_146a2b9ed;
      goto LAB_146a2b9b7;
    }
    LOCK();
    plVar4 = local_30 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_146a2b9ed;
    (**(code **)*local_30)(local_30);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_146a2b9ed:
  plVar1 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_30 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  local_48 = 0x2c8;
  FUN_140a52e78(*param_1,"SExpanderArrow","Runtime\\Slate\\Public\\Widgets/Views/STableRow.h",0xca);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a2ba5e FUN_146a2ba5e body=9 status=ok
// SIG undefined FUN_146a2ba5e(void)

void FUN_146a2ba5e(longlong param_1)

{
  FUN_146aec530(param_1 + 0x10);
  return;
}



// FUNCTION 146a2ba68 FUN_146a2ba68 body=29 status=ok
// SIG undefined FUN_146a2ba68(void)

undefined8 FUN_146a2ba68(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a2ba86 FUN_146a2ba86 body=167 status=ok
// SIG undefined FUN_146a2ba86(void)

void FUN_146a2ba86(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_146a2bb01;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_146a2bb01;
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
LAB_146a2bb01:
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
                    /* WARNING: Could not recover jumptable at 0x000146a2bb21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 146a2bb2e FUN_146a2bb2e body=134 status=ok
// SIG undefined FUN_146a2bb2e(void)

void FUN_146a2bb2e(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(undefined8 *)*param_1;
  local_18 = (longlong *)((undefined8 *)*param_1)[1];
  if (local_18 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_18 + 1) = (int)local_18[1] + 1;
    UNLOCK();
  }
  FUN_146aec5c0(param_2,param_3,&local_20);
  plVar3 = local_18;
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a2bbb6 FUN_146a2bbb6 body=263 status=ok
// SIG undefined FUN_146a2bbb6(void)

void FUN_146a2bbb6(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_149f09cd0;
  param_1[1] = &PTR_FUN_149f09d70;
  plVar3 = (longlong *)param_1[0x6e];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  FUN_1449db362(param_1 + 0x6a);
  FUN_1449db362(param_1 + 0x68);
  FUN_1449db362(param_1 + 0x66);
  FUN_1449db362(param_1 + 100);
  if (*(char *)((longlong)param_1 + 0x31c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x31c) = 0;
  }
  FUN_1449db362(param_1 + 0x61);
  FUN_1449db362(param_1 + 0x5f);
  FUN_1449db362(param_1 + 0x5d);
  plVar3 = (longlong *)param_1[0x5c];
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
  plVar3 = (longlong *)param_1[0x56];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  param_1[1] = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x40);
  FUN_140c057ec(param_1 + 1);
  return;
}



// FUNCTION 146a2bcbe FUN_146a2bcbe body=265 status=ok
// SIG undefined FUN_146a2bcbe(void)

longlong FUN_146a2bcbe(undefined4 *param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_1 + 0x24);
  plVar8 = *(longlong **)(lVar2 + 0x2b0);
  bVar3 = true;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar8[1];
    plVar7 = (longlong *)0x0;
    do {
      if (iVar5 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_146a2bd19;
      }
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
    plVar7 = *(longlong **)(lVar2 + 0x2a8);
    bVar3 = false;
  }
LAB_146a2bd19:
  puVar6 = (undefined8 *)(**(code **)(*plVar7 + 0x48))(plVar7,lVar2);
  if (puVar6 == (undefined8 *)0x0) {
    *(undefined1 *)(param_2 + 4) = 0;
  }
  else {
    local_40 = *puVar6;
    local_38 = puVar6[1];
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      UNLOCK();
    }
    if (*(int *)(lVar2 + 0x2f0) == 0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = *(longlong **)(lVar2 + 0x2e8);
    }
    local_48 = &local_40;
    (**(code **)(*plVar7 + 0x58))(plVar7,param_2,param_1 + 2,*param_1);
  }
  if (!bVar3) {
    LOCK();
    plVar7 = plVar8 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146a2bdc8 FUN_146a2bdc8 body=1125 status=ok
// SIG undefined FUN_146a2bdc8(void)

undefined1 * FUN_146a2bdc8(longlong *param_1,undefined1 *param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 unaff_RBP;
  ulonglong uVar13;
  longlong *plVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_208 [32];
  undefined8 *local_1e8;
  uint local_1d4;
  undefined8 local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  longlong local_1b8;
  int local_1b0;
  byte local_1ac;
  undefined8 local_1a8;
  longlong local_1a0;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  lVar5 = *param_1;
  if (((*(int *)(lVar5 + 0x300) != 0) && (*(longlong **)(lVar5 + 0x2f8) != (longlong *)0x0)) &&
     (cVar8 = (**(code **)(**(longlong **)(lVar5 + 0x2f8) + 0x30))(), cVar8 != '\0')) {
    plVar14 = *(longlong **)(lVar5 + 0x2b0);
    uVar13 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    if (plVar14 == (longlong *)0x0) {
      plVar14 = (longlong *)0x0;
      plVar12 = (longlong *)0x0;
    }
    else {
      iVar9 = (int)plVar14[1];
      plVar12 = (longlong *)0x0;
      do {
        if (iVar9 == 0) {
          plVar14 = (longlong *)0x0;
          goto LAB_146a2beaf;
        }
        LOCK();
        iVar7 = (int)plVar14[1];
        bVar15 = iVar9 == iVar7;
        if (bVar15) {
          *(int *)(plVar14 + 1) = iVar9 + 1;
          iVar7 = iVar9;
        }
        iVar9 = iVar7;
        UNLOCK();
      } while (!bVar15);
      plVar12 = *(longlong **)(lVar5 + 0x2a8);
      uVar13 = 0;
    }
LAB_146a2beaf:
    if (*(char *)(lVar5 + 0x31c) == '\x01') {
      *(undefined1 *)(lVar5 + 0x31c) = 0;
    }
    puVar10 = (undefined8 *)(**(code **)(*plVar12 + 0x48))(plVar12);
    bVar15 = true;
    if (puVar10 != (undefined8 *)0x0) {
      lVar6 = param_1[1];
      fVar17 = *(float *)(param_1[2] + 0x20);
      fVar16 = *(float *)(param_1[2] + 0x24);
      fVar19 = *(float *)(lVar6 + 0x1c);
      fVar18 = *(float *)(lVar6 + 0x20);
      fVar2 = *(float *)(lVar6 + 0x24);
      fVar20 = *(float *)(lVar6 + 0x28);
      fVar21 = 1.0 / (fVar19 * fVar20 - fVar2 * fVar18);
      fVar3 = *(float *)(lVar6 + 0x30);
      fVar4 = *(float *)(lVar6 + 0x2c);
      iVar9 = (**(code **)(*plVar12 + 0xc0))(plVar12);
      local_1d4 = (uint)uVar13;
      if (iVar9 == 0) {
        fVar19 = -fVar2 * fVar21;
        fVar20 = fVar20 * fVar21;
        fVar18 = -fVar4 * fVar20 - fVar3 * fVar19;
        fVar17 = fVar17 * fVar20 + fVar19 * fVar16;
      }
      else {
        fVar19 = fVar19 * fVar21;
        fVar21 = -fVar18 * fVar21;
        fVar18 = -fVar4 * fVar21 - fVar3 * fVar19;
        fVar17 = fVar17 * fVar21 + fVar19 * fVar16;
      }
      uVar13 = *(ulonglong *)param_1[1] >> 0x20;
      if (iVar9 == 0) {
        uVar13 = *(ulonglong *)param_1[1];
      }
      fVar16 = (float)uVar13 * 0.25;
      if (10.0 <= fVar16) {
        fVar16 = 10.0;
      }
      if (fVar16 <= 3.0) {
        fVar16 = 3.0;
      }
      iVar9 = 0;
      if (fVar16 <= fVar17 + fVar18) {
        iVar9 = ((float)uVar13 - fVar16 < fVar17 + fVar18) + 1;
      }
      if (((*(int *)(lVar5 + 0x2f0) == 0) || (*(longlong **)(lVar5 + 0x2e8) == (longlong *)0x0)) ||
         (cVar8 = (**(code **)(**(longlong **)(lVar5 + 0x2e8) + 0x30))(), cVar8 == '\0')) {
        local_1ac = 1;
        local_1b0 = iVar9;
      }
      else {
        local_1a8 = *puVar10;
        local_1a0 = puVar10[1];
        if (local_1a0 != 0) {
          LOCK();
          *(int *)(local_1a0 + 8) = *(int *)(local_1a0 + 8) + 1;
          UNLOCK();
        }
        if (*(int *)(lVar5 + 0x2f0) == 0) {
          plVar11 = (longlong *)0x0;
        }
        else {
          plVar11 = *(longlong **)(lVar5 + 0x2e8);
        }
        local_1e8 = &local_1a8;
        (**(code **)(*plVar11 + 0x58))(plVar11,&local_1b0,param_1[2],iVar9);
        if ((local_1ac & 1) == 0) {
          uVar13 = (ulonglong)local_1d4;
          goto LAB_146a2c13e;
        }
      }
      local_1c0 = *puVar10;
      local_1b8 = puVar10[1];
      uVar13 = (ulonglong)local_1d4;
      if (local_1b8 != 0) {
        LOCK();
        *(int *)(local_1b8 + 8) = *(int *)(local_1b8 + 8) + 1;
        UNLOCK();
      }
      if (*(int *)(lVar5 + 0x300) == 0) {
        plVar11 = (longlong *)0x0;
      }
      else {
        plVar11 = *(longlong **)(lVar5 + 0x2f8);
      }
      local_1e8 = &local_1c0;
      (**(code **)(*plVar11 + 0x58))(plVar11,&local_1a8,param_1[2],local_1b0);
      if (((char)local_1a8 == '\x01') && (local_1b0 == 1)) {
        local_1d0 = *puVar10;
        local_1c8 = puVar10[1];
        if (local_1c8 != 0) {
          LOCK();
          *(int *)(local_1c8 + 8) = *(int *)(local_1c8 + 8) + 1;
          UNLOCK();
        }
        (**(code **)(*plVar12 + 0x50))(plVar12,&local_1d0,1);
      }
      FUN_1428fd920(param_2);
      FUN_14493db24(&local_1a8);
      if (local_1ac == 1) {
        local_1ac = 0;
      }
      bVar15 = false;
    }
LAB_146a2c13e:
    if ((char)uVar13 == '\0') {
      LOCK();
      plVar12 = plVar14 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
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
    if (!bVar15) goto LAB_146a2c197;
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_146a2c197:
  if ((local_f0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146a2c22e FUN_146a2c22e body=143 status=ok
// SIG undefined FUN_146a2c22e(void)

undefined8 * FUN_146a2c22e(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
    UNLOCK();
  }
  FUN_14697595a(param_1,&local_28,0xd);
  *param_1 = &PTR_FUN_149f09fc0;
  param_1[0xd] = &PTR_FUN_149f0a0b0;
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a2c2be FUN_146a2c2be body=38 status=ok
// SIG undefined FUN_146a2c2be(void)

undefined8 FUN_146a2c2be(undefined8 param_1,int param_2)

{
  FUN_14697900e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a2c2ea FUN_146a2c2ea body=505 status=ok
// SIG undefined FUN_146a2c2ea(void)

void FUN_146a2c2ea(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((*(longlong *)(param_1 + -0x50) != 0) &&
      (plVar8 = *(longlong **)(param_1 + -0x48), plVar8 != (longlong *)0x0)) && (0 < (int)plVar8[1])
     ) {
    lVar10 = 0;
    iVar4 = (int)plVar8[1];
    do {
      iVar3 = iVar4;
      if (iVar3 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_146a2c376;
      }
      LOCK();
      iVar4 = (int)plVar8[1];
      bVar11 = iVar3 == iVar4;
      if (bVar11) {
        *(int *)(plVar8 + 1) = iVar3 + 1;
        iVar4 = iVar3;
      }
      UNLOCK();
    } while (!bVar11);
    lVar10 = *(longlong *)(param_1 + -0x50) + -8;
    if (*(longlong *)(param_1 + -0x50) == 0) {
      lVar10 = 0;
    }
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar7 = plVar8 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
LAB_146a2c376:
    if (((*(longlong *)(lVar10 + 0x2a8) != 0) &&
        (plVar7 = *(longlong **)(lVar10 + 0x2b0), plVar7 != (longlong *)0x0)) &&
       (0 < (int)plVar7[1])) {
      plVar9 = (longlong *)0x0;
      iVar4 = (int)plVar7[1];
      do {
        iVar5 = iVar4;
        if (iVar5 == 0) {
          plVar7 = (longlong *)0x0;
          goto LAB_146a2c3c4;
        }
        LOCK();
        iVar4 = (int)plVar7[1];
        bVar11 = iVar5 == iVar4;
        if (bVar11) {
          *(int *)(plVar7 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        UNLOCK();
      } while (!bVar11);
      plVar9 = *(longlong **)(lVar10 + 0x2a8);
LAB_146a2c3c4:
      (**(code **)(*plVar9 + 0xe8))(plVar9,&local_50);
      (**(code **)(*local_50 + 0x198))();
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_48 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar1 = (int *)((longlong)local_48 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_48 + 0x10))(local_48);
          }
        }
      }
      puVar6 = (undefined8 *)(**(code **)(*plVar9 + 0x48))(plVar9,lVar10);
      if (puVar6 != (undefined8 *)0x0) {
        (**(code **)(*plVar9 + 0x10))(plVar9,puVar6);
        (**(code **)(*plVar9 + 0x30))(plVar9);
        local_60 = *puVar6;
        local_58 = puVar6[1];
        if (local_58 != 0) {
          LOCK();
          *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
          UNLOCK();
        }
        (**(code **)(*plVar9 + 0x28))(plVar9,&local_60,1,1);
        (**(code **)(*plVar9 + 0x40))(plVar9,3);
      }
      if (iVar5 != 0) {
        LOCK();
        plVar9 = plVar7 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
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
    if (iVar3 != 0) {
      LOCK();
      plVar7 = plVar8 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a2c4e8 FUN_146a2c4e8 body=166 status=ok
// SIG undefined FUN_146a2c4e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_146a2c4e8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  bool bVar9;
  
  if (((*(longlong *)(param_1 + -0x50) == 0) ||
      (plVar3 = *(longlong **)(param_1 + -0x48), plVar3 == (longlong *)0x0)) || ((int)plVar3[1] < 1)
     ) {
    uVar7 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146a2c58a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar7 = (**(code **)(_DAT_00000000 + 0x30))(0);
        return uVar7;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar9);
    plVar8 = (longlong *)(*(longlong *)(param_1 + -0x50) + -8);
    if (*(longlong *)(param_1 + -0x50) == 0) {
      plVar8 = (longlong *)0x0;
    }
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
    uVar6 = (**(code **)(*plVar8 + 0x30))(plVar8);
    uVar7 = (ulonglong)uVar6;
    LOCK();
    plVar8 = plVar3 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  return uVar7;
}



// FUNCTION 146a2c58e FUN_146a2c58e body=556 status=ok
// SIG undefined FUN_146a2c58e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_146a2c58e(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((*(longlong *)(param_1 + -0x50) != 0) &&
      (plVar7 = *(longlong **)(param_1 + -0x48), plVar7 != (longlong *)0x0)) && (0 < (int)plVar7[1])
     ) {
    lVar8 = 0;
    iVar6 = (int)plVar7[1];
    do {
      iVar5 = iVar6;
      if (iVar5 == 0) {
        plVar7 = (longlong *)0x0;
        goto LAB_146a2c61a;
      }
      LOCK();
      iVar6 = (int)plVar7[1];
      bVar9 = iVar5 == iVar6;
      if (bVar9) {
        *(int *)(plVar7 + 1) = iVar5 + 1;
        iVar6 = iVar5;
      }
      UNLOCK();
    } while (!bVar9);
    lVar8 = *(longlong *)(param_1 + -0x50) + -8;
    if (*(longlong *)(param_1 + -0x50) == 0) {
      lVar8 = 0;
    }
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
LAB_146a2c61a:
    if (((*(longlong *)(lVar8 + 0x2a8) == 0) ||
        (plVar3 = *(longlong **)(lVar8 + 0x2b0), plVar3 == (longlong *)0x0)) || ((int)plVar3[1] < 1)
       ) {
      bVar9 = false;
    }
    else {
      iVar6 = (int)plVar3[1];
      do {
        if (iVar6 == 0) {
          (**(code **)(_DAT_00000000 + 0xe8))(0,&local_48);
          goto LAB_146a2c6f2;
        }
        LOCK();
        iVar4 = (int)plVar3[1];
        bVar9 = iVar6 == iVar4;
        if (bVar9) {
          *(int *)(plVar3 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar9);
      (**(code **)(**(longlong **)(lVar8 + 0x2a8) + 0xe8))(*(longlong **)(lVar8 + 0x2a8),&local_48);
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
LAB_146a2c6f2:
      local_68 = local_48;
      local_60 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_40 + 1) = (int)local_40[1] + 1;
        UNLOCK();
      }
      FUN_146974758(&local_58,&local_68);
      *param_2 = local_58;
      param_2[1] = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
        UNLOCK();
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_50 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
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
      }
      plVar3 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_60 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_40 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
      bVar9 = true;
    }
    if (iVar5 != 0) {
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
    if (bVar9) goto LAB_146a2c6b6;
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_146a2c6b6:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146a2c7bc FUN_146a2c7bc body=590 status=ok
// SIG undefined FUN_146a2c7bc(void)

int FUN_146a2c7bc(longlong param_1,undefined8 *param_2,undefined8 param_3,int param_4,float *param_5
                 )

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  longlong lVar7;
  float *pfVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  float *local_a0;
  undefined8 local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  longlong *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined8 local_54;
  byte local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar10 = *(longlong **)(param_1 + 0x2b0);
  bVar3 = true;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
    plVar11 = (longlong *)0x0;
  }
  else {
    iVar9 = (int)plVar10[1];
    plVar11 = (longlong *)0x0;
    do {
      if (iVar9 == 0) {
        plVar10 = (longlong *)0x0;
        goto LAB_146a2c825;
      }
      LOCK();
      iVar5 = (int)plVar10[1];
      bVar12 = iVar9 == iVar5;
      if (bVar12) {
        *(int *)(plVar10 + 1) = iVar9 + 1;
        iVar5 = iVar9;
      }
      iVar9 = iVar5;
      UNLOCK();
    } while (!bVar12);
    plVar11 = *(longlong **)(param_1 + 0x2a8);
    bVar3 = false;
  }
LAB_146a2c825:
  local_98 = param_3;
  (**(code **)(*plVar11 + 0xe8))(plVar11,&local_80);
  cVar6 = (**(code **)(*local_80 + 0x198))();
  plVar4 = (longlong *)CONCAT44(uStack_74,local_78);
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
  lVar7 = (**(code **)(*plVar11 + 0x48))(plVar11,param_1);
  iVar9 = param_4;
  if (((cVar6 == '\x01' && lVar7 != 0) && (cVar6 = (**(code **)*plVar11)(plVar11), cVar6 != '\0'))
     && (cVar6 = (**(code **)(*plVar11 + 8))(plVar11,lVar7), cVar6 != '\0')) {
    lVar7 = *(longlong *)(param_1 + 0x2c8);
    pfVar8 = (float *)(lVar7 + 0x18);
    cVar6 = *(char *)(lVar7 + 0x28);
    if (cVar6 != '\0') {
      if (cVar6 == '\x01') {
        pfVar8 = (float *)FUN_1400c06fe(pfVar8);
        lVar7 = *(longlong *)(param_1 + 0x2c8);
      }
      else if (cVar6 == '\x03') {
        pfVar8 = param_5 + 8;
      }
      else {
        pfVar8 = param_5 + 4;
      }
    }
    local_84 = pfVar8[3] * param_5[3];
    local_88 = pfVar8[2] * param_5[2];
    local_8c = pfVar8[1] * param_5[1];
    local_90 = *pfVar8 * *param_5;
    local_a0 = &local_90;
    local_6c = *param_2;
    local_80 = *(longlong **)((longlong)param_2 + 0xc);
    local_78 = *(undefined4 *)(param_2 + 1);
    uStack_74 = 0;
    uStack_70 = 0;
    local_64 = *(undefined4 *)((longlong)param_2 + 0x1c);
    uStack_60 = *(undefined4 *)(param_2 + 4);
    uStack_5c = *(undefined4 *)((longlong)param_2 + 0x24);
    uStack_58 = *(undefined4 *)(param_2 + 5);
    local_54 = *(undefined8 *)((longlong)param_2 + 0x2c);
    local_4c = local_4c & 0xfc | *(char *)((longlong)param_2 + 0x34) * '\x02' & 2U;
    iVar9 = param_4 + 1;
    local_a8 = 0;
    FUN_140239bd2(local_98,param_4,&local_80,lVar7 + 0x10);
  }
  if (!bVar3) {
    LOCK();
    plVar11 = plVar10 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar9;
}



// FUNCTION 146a2ca0c FUN_146a2ca0c body=239 status=ok
// SIG undefined FUN_146a2ca0c(void)

ulonglong FUN_146a2ca0c(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,uint param_6,undefined8 param_7,undefined1 param_8)

{
  char cVar1;
  ulonglong uVar2;
  longlong *plVar3;
  
  if (*(char *)((longlong)param_1 + 0x31c) == '\x01') {
    if ((((int)param_1[0x62] != 0) && ((longlong *)param_1[0x61] != (longlong *)0x0)) &&
       (cVar1 = (**(code **)(*(longlong *)param_1[0x61] + 0x30))(), cVar1 != '\0')) {
      if ((int)param_1[0x62] == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = (longlong *)param_1[0x61];
      }
      uVar2 = (**(code **)(*plVar3 + 0x58))
                        (plVar3,(int)param_1[99],param_2,param_3,param_4,param_5,param_6,param_7,
                         param_8);
      return uVar2;
    }
    uVar2 = (**(code **)(*param_1 + 0x88))
                      (param_1,(int)param_1[99],param_2,param_3,param_4,param_5,param_6,param_7,
                       param_8);
  }
  else {
    uVar2 = (ulonglong)param_6;
  }
  return uVar2;
}



// FUNCTION 146a2cafc FUN_146a2cafc body=171 status=ok
// SIG undefined FUN_146a2cafc(void)

void FUN_146a2cafc(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x10) != 0) && (*(longlong *)(param_2 + 0x18) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x18) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x10) = param_2 + 8;
    plVar3 = *(longlong **)(param_2 + 0x18);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x10) = param_2 + 8;
    if (*(longlong **)(param_2 + 0x18) == plVar2) goto LAB_146a2cb7b;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x18);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x18) = plVar2;
      goto LAB_146a2cb7b;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x18) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_146a2cb7b:
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
                    /* WARNING: Could not recover jumptable at 0x000146a2cb9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 146a2cba8 FUN_146a2cba8 body=488 status=ok
// SIG undefined FUN_146a2cba8(void)

void FUN_146a2cba8(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 local_90;
  undefined1 local_8c;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined1 local_70;
  undefined1 local_68 [16];
  code *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *(undefined1 *)(param_1 + 0x37a) = 0;
  *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(param_2 + 0x1a8);
  *(undefined8 *)(param_1 + 0x2d0) = *(undefined8 *)(param_2 + 0x1b0);
  local_78 = 0;
  local_70 = 1;
  local_58 = (code *)&LAB_146a2cd92;
  local_50 = 0;
  FUN_146a2cf88(local_68,param_1,&local_58);
  FUN_145ab4d4e(param_1 + 8,&local_78);
  local_a0 = 0x3f800000;
  uStack_9c = 0;
  uStack_98 = 0x3f800000;
  uStack_94 = 0x3f800000;
  local_90 = 0;
  local_8c = 1;
  local_58 = FUN_146a2cda0;
  local_50 = 0;
  FUN_146a2d47a(local_88,param_1,&local_58);
  FUN_140a5c8a2(param_1 + 600,param_1 + 8,&local_a0);
  FUN_1449db362(local_88);
  FUN_146a2d99c(param_1 + 0x2e8,param_2 + 0x1b8);
  FUN_146a2da20(param_1 + 0x2f8,param_2 + 0x1c8);
  FUN_145767132(param_1 + 800,param_2 + 0x1e8);
  FUN_14697937e(param_1 + 0x330,param_2 + 0x1f8);
  FUN_14697937e(param_1 + 0x340,param_2 + 0x208);
  FUN_146979402(param_1 + 0x350,param_2 + 0x218);
  local_b0 = *param_3;
  local_a8 = param_3[1];
  if (local_a8 != 0) {
    LOCK();
    *(int *)(local_a8 + 8) = *(int *)(local_a8 + 8) + 1;
    UNLOCK();
  }
  FUN_146a2cea2(param_1,&local_b0);
  *(undefined1 *)(param_1 + 700) = *(undefined1 *)(param_2 + 0x250);
  *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)(param_2 + 0x254);
  *(undefined1 *)(param_1 + 0x37c) = *(undefined1 *)(param_2 + 0x251);
  *(undefined1 *)(param_1 + 0x37b) = *(undefined1 *)(param_2 + 0x252);
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a2cda0 FUN_146a2cda0 body=257 status=ok
// SIG undefined FUN_146a2cda0(void)

undefined8 * FUN_146a2cda0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  int iVar10;
  char cVar11;
  int iVar12;
  longlong lVar13;
  undefined4 *puVar14;
  bool bVar15;
  
  plVar3 = *(longlong **)(param_1 + 0x2b0);
  if (plVar3 == (longlong *)0x0) {
LAB_146a2ce76:
    lVar5 = *(longlong *)(param_1 + 0x2c8);
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(lVar5 + 0x7c0);
    uVar9 = *(undefined8 *)(lVar5 + 0x7b8);
    *param_2 = *(undefined8 *)(lVar5 + 0x7b0);
    param_2[1] = uVar9;
  }
  else {
    iVar12 = (int)plVar3[1];
    do {
      if (iVar12 == 0) goto LAB_146a2ce76;
      LOCK();
      iVar10 = (int)plVar3[1];
      bVar15 = iVar12 == iVar10;
      if (bVar15) {
        *(int *)(plVar3 + 1) = iVar12 + 1;
        iVar10 = iVar12;
      }
      iVar12 = iVar10;
      UNLOCK();
    } while (!bVar15);
    plVar4 = *(longlong **)(param_1 + 0x2a8);
    lVar5 = *(longlong *)(param_1 + 0x2c8);
    puVar14 = (undefined4 *)(lVar5 + 0x7b0);
    if ((plVar4 != (longlong *)0x0 & *(byte *)(param_1 + 700)) == 1) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      lVar13 = (**(code **)(*plVar4 + 0x48))(plVar4);
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
      if (lVar13 != 0) {
        cVar11 = (**(code **)(*plVar4 + 0x10))(plVar4,lVar13);
        if (cVar11 != '\0') {
          puVar14 = (undefined4 *)(lVar5 + 0x7c4);
        }
      }
    }
    *(undefined4 *)(param_2 + 2) = puVar14[4];
    uVar6 = puVar14[1];
    uVar7 = puVar14[2];
    uVar8 = puVar14[3];
    *(undefined4 *)param_2 = *puVar14;
    *(undefined4 *)((longlong)param_2 + 4) = uVar6;
    *(undefined4 *)(param_2 + 1) = uVar7;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar8;
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
  return param_2;
}



// FUNCTION 146a2cea2 FUN_146a2cea2 body=229 status=ok
// SIG undefined FUN_146a2cea2(void)

void FUN_146a2cea2(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar2 = *param_2;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 == (longlong *)0x0) {
    lVar5 = lVar2 + 0x4d8;
    if (lVar2 == 0) {
      lVar5 = 0;
    }
    *(longlong *)(param_1 + 0x2a8) = lVar5;
    plVar4 = *(longlong **)(param_1 + 0x2b0);
    if (plVar4 == (longlong *)0x0) goto LAB_146a2cf50;
LAB_146a2cef0:
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
    *(longlong **)(param_1 + 0x2b0) = plVar3;
    if (plVar3 == (longlong *)0x0) goto LAB_146a2cf50;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    lVar5 = lVar2 + 0x4d8;
    if (lVar2 == 0) {
      lVar5 = 0;
    }
    *(longlong *)(param_1 + 0x2a8) = lVar5;
    if (*(longlong **)(param_1 + 0x2b0) != plVar3) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar4 = *(longlong **)(param_1 + 0x2b0);
      if (plVar4 != (longlong *)0x0) goto LAB_146a2cef0;
      *(longlong **)(param_1 + 0x2b0) = plVar3;
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
LAB_146a2cf50:
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
                    /* WARNING: Could not recover jumptable at 0x000146a2cf7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146a2cf88 FUN_146a2cf88 body=397 status=ok
// SIG undefined FUN_146a2cf88(void)

longlong * FUN_146a2cf88(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x18);
  if (plVar6 == (longlong *)0x0) {
LAB_146a2d0a4:
    *puVar5 = &PTR_LAB_149f056a0;
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar10 == 0) {
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar10;
    *puVar5 = &PTR_FUN_149f0a0e0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_146a2d0a4;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar12 = iVar8 == iVar7;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar12);
    lVar9 = *(longlong *)(param_2 + 0x10) + -8;
    if (*(longlong *)(param_2 + 0x10) == 0) {
      lVar9 = 0;
    }
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f056a0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar10 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar10 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar10;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_149f0a0e0;
    puVar5[3] = lVar9;
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



// FUNCTION 146a2d116 FUN_146a2d116 body=64 status=ok
// SIG undefined FUN_146a2d116(void)

undefined8 * FUN_146a2d116(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f0a0e0;
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



// FUNCTION 146a2d15a FUN_146a2d15a body=81 status=ok
// SIG undefined FUN_146a2d15a(void)

undefined8 FUN_146a2d15a(longlong param_1)

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



// FUNCTION 146a2d1b2 FUN_146a2d1b2 body=89 status=ok
// SIG undefined FUN_146a2d1b2(void)

bool FUN_146a2d1b2(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146a2d1fd;
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
LAB_146a2d1fd:
  return lVar6 == param_2;
}



// FUNCTION 146a2d228 FUN_146a2d228 body=118 status=ok
// SIG undefined FUN_146a2d228(void)

void FUN_146a2d228(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f056a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f0a0e0;
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



// FUNCTION 146a2d29e FUN_146a2d29e body=118 status=ok
// SIG undefined FUN_146a2d29e(void)

void FUN_146a2d29e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f056a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f0a0e0;
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



// FUNCTION 146a2d314 FUN_146a2d314 body=156 status=ok
// SIG undefined FUN_146a2d314(void)

void FUN_146a2d314(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f056a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f0a0e0;
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
                    /* WARNING: Could not recover jumptable at 0x000146a2d3a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146a2d3b0 FUN_146a2d3b0 body=102 status=ok
// SIG undefined FUN_146a2d3b0(void)

undefined8 FUN_146a2d3b0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar7) {
        uVar6 = (**(code **)(param_1 + 0x28))
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
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
        return uVar6;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000146a2d412. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return uVar6;
}



// FUNCTION 146a2d416 FUN_146a2d416 body=100 status=ok
// SIG undefined FUN_146a2d416(void)

ulonglong FUN_146a2d416(longlong param_1)

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
LAB_146a2d46f:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146a2d46f;
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



// FUNCTION 146a2d47a FUN_146a2d47a body=397 status=ok
// SIG undefined FUN_146a2d47a(void)

longlong * FUN_146a2d47a(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x18);
  if (plVar6 == (longlong *)0x0) {
LAB_146a2d596:
    *puVar5 = &PTR_LAB_149f05990;
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar10 == 0) {
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar10;
    *puVar5 = &PTR_FUN_149f0a150;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_146a2d596;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar12 = iVar8 == iVar7;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar12);
    lVar9 = *(longlong *)(param_2 + 0x10) + -8;
    if (*(longlong *)(param_2 + 0x10) == 0) {
      lVar9 = 0;
    }
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f05990;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar10 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar10 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar10;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_149f0a150;
    puVar5[3] = lVar9;
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



// FUNCTION 146a2d608 FUN_146a2d608 body=64 status=ok
// SIG undefined FUN_146a2d608(void)

undefined8 * FUN_146a2d608(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f0a150;
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



// FUNCTION 146a2d64c FUN_146a2d64c body=81 status=ok
// SIG undefined FUN_146a2d64c(void)

undefined8 FUN_146a2d64c(longlong param_1)

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



// FUNCTION 146a2d6a4 FUN_146a2d6a4 body=89 status=ok
// SIG undefined FUN_146a2d6a4(void)

bool FUN_146a2d6a4(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146a2d6ef;
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
LAB_146a2d6ef:
  return lVar6 == param_2;
}



// FUNCTION 146a2d71a FUN_146a2d71a body=118 status=ok
// SIG undefined FUN_146a2d71a(void)

void FUN_146a2d71a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05990;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f0a150;
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



// FUNCTION 146a2d790 FUN_146a2d790 body=118 status=ok
// SIG undefined FUN_146a2d790(void)

void FUN_146a2d790(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05990;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f0a150;
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



// FUNCTION 146a2d806 FUN_146a2d806 body=156 status=ok
// SIG undefined FUN_146a2d806(void)

void FUN_146a2d806(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f05990;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f0a150;
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
                    /* WARNING: Could not recover jumptable at 0x000146a2d892. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146a2d8a2 FUN_146a2d8a2 body=105 status=ok
// SIG undefined FUN_146a2d8a2(void)

undefined8 FUN_146a2d8a2(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146a2d8f6:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_146a2d8f6;
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
    (**(code **)(param_1 + 0x28))
              ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18),param_2);
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



// FUNCTION 146a2d90c FUN_146a2d90c body=143 status=ok
// SIG undefined FUN_146a2d90c(void)

ulonglong FUN_146a2d90c(longlong param_1)

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
  undefined1 auStack_58 [44];
  undefined1 local_2c [20];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146a2d97a:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146a2d97a;
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
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),local_2c);
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
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 146a2d99c FUN_146a2d99c body=130 status=ok
// SIG undefined FUN_146a2d99c(void)

void FUN_146a2d99c(longlong *param_1,longlong *param_2)

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



// FUNCTION 146a2da20 FUN_146a2da20 body=130 status=ok
// SIG undefined FUN_146a2da20(void)

void FUN_146a2da20(longlong *param_1,longlong *param_2)

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



// FUNCTION 146a2daa4 FUN_146a2daa4 body=1 status=ok
// SIG undefined FUN_146a2daa4(void)

void FUN_146a2daa4(void)

{
  return;
}



// FUNCTION 146a2daa6 FUN_146a2daa6 body=29 status=ok
// SIG undefined FUN_146a2daa6(void)

undefined8 FUN_146a2daa6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a2dac4 FUN_146a2dac4 body=228 status=ok
// SIG undefined FUN_146a2dac4(void)

int FUN_146a2dac4(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    while (iVar3 != -1) {
      lVar4 = *param_3;
      plVar7 = (longlong *)param_3[1];
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      lVar8 = (longlong)iVar3;
      lVar5 = *(longlong *)(*param_1 + lVar8 * 0x28);
      plVar6 = *(longlong **)(*param_1 + 8 + lVar8 * 0x28);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
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
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar7 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
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
      if (lVar5 == lVar4) {
        return iVar3;
      }
      iVar3 = *(int *)(*param_1 + 0x20 + lVar8 * 0x28);
    }
  }
  return -1;
}



// FUNCTION 146a2dba8 FUN_146a2dba8 body=412 status=ok
// SIG undefined FUN_146a2dba8(void)

undefined4 * FUN_146a2dba8(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  longlong *plVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146a2dd46(param_1,local_48);
  puVar3 = (ulonglong *)*param_3;
  puVar4 = (ulonglong *)param_3[1];
  *local_40 = *puVar3;
  uVar10 = puVar3[1];
  local_40[1] = uVar10;
  if (uVar10 != 0) {
    LOCK();
    *(int *)(uVar10 + 8) = *(int *)(uVar10 + 8) + 1;
    UNLOCK();
  }
  local_40[2] = *puVar4;
  uVar10 = puVar4[1];
  local_40[3] = uVar10;
  if (uVar10 != 0) {
    LOCK();
    *(int *)(uVar10 + 8) = *(int *)(uVar10 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  uVar10 = *local_40;
  plVar5 = (longlong *)local_40[1];
  if (plVar5 != (longlong *)0x0) {
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
  uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  uVar8 = uVar8 >> 0x10 ^ uVar8;
  cVar7 = FUN_146a2de2c(param_1,uVar8,local_40,&local_4c);
  uVar6 = local_4c;
  if (cVar7 == '\0') {
    uVar9 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar11 = 1;
    if (3 < uVar9) {
      uVar10 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
      lVar12 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar12 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar11 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x24) = uVar8;
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar11;
      FUN_146a2e074(param_1);
    }
  }
  *param_2 = uVar6;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a2dd46 FUN_146a2dd46 body=230 status=ok
// SIG undefined FUN_146a2dd46(void)

int * FUN_146a2dd46(longlong *param_1,int *param_2)

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



// FUNCTION 146a2de2c FUN_146a2de2c body=240 status=ok
// SIG undefined FUN_146a2de2c(void)

undefined8 FUN_146a2de2c(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined8 uVar13;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_40 = *param_3;
    plVar4 = (longlong *)param_3[1];
    local_38 = plVar4;
    if (plVar4 == (longlong *)0x0) {
      iVar12 = FUN_146a2df1e(param_1,param_2,&local_40);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      iVar12 = FUN_146a2df1e(param_1);
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
    if (iVar12 != -1) {
      puVar3 = (undefined4 *)(*param_1 + (longlong)iVar12 * 0x28);
      FUN_146a27d56(puVar3);
      uVar5 = *(undefined4 *)param_3;
      uVar6 = *(undefined4 *)((longlong)param_3 + 4);
      uVar7 = *(undefined4 *)(param_3 + 1);
      uVar8 = *(undefined4 *)((longlong)param_3 + 0xc);
      uVar9 = *(undefined4 *)((longlong)param_3 + 0x14);
      uVar10 = *(undefined4 *)(param_3 + 3);
      uVar11 = *(undefined4 *)((longlong)param_3 + 0x1c);
      puVar3[4] = *(undefined4 *)(param_3 + 2);
      puVar3[5] = uVar9;
      puVar3[6] = uVar10;
      puVar3[7] = uVar11;
      *puVar3 = uVar5;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      FUN_146a2e002(param_1,*param_4);
      *param_4 = iVar12;
      uVar13 = 1;
      goto LAB_146a2de52;
    }
  }
  uVar13 = 0;
LAB_146a2de52:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a2df1e FUN_146a2df1e body=228 status=ok
// SIG undefined FUN_146a2df1e(void)

int FUN_146a2df1e(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    while (iVar3 != -1) {
      lVar4 = *param_3;
      plVar7 = (longlong *)param_3[1];
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      lVar8 = (longlong)iVar3;
      lVar5 = *(longlong *)(*param_1 + lVar8 * 0x28);
      plVar6 = *(longlong **)(*param_1 + 8 + lVar8 * 0x28);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
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
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar7 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
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
      if (lVar5 == lVar4) {
        return iVar3;
      }
      iVar3 = *(int *)(*param_1 + 0x20 + lVar8 * 0x28);
    }
  }
  return -1;
}



// FUNCTION 146a2e002 FUN_146a2e002 body=114 status=ok
// SIG undefined FUN_146a2e002(void)

void FUN_146a2e002(longlong *param_1,int param_2)

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



// FUNCTION 146a2e074 FUN_146a2e074 body=527 status=ok
// SIG undefined FUN_146a2e074(void)

void FUN_146a2e074(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar8 != uVar11);
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
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar4 = *local_90;
        lVar6 = (longlong)iVar12;
        uVar10 = *(ulonglong *)(lVar4 + lVar6 * 0x28);
        plVar7 = *(longlong **)(lVar4 + 8 + lVar6 * 0x28);
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
          LOCK();
          plVar2 = plVar7 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar3 = (int *)((longlong)plVar7 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
        }
        lVar4 = lVar4 + lVar6 * 0x28;
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar4 + 0x24) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar4 + 0x20) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a2e284 FUN_146a2e284 body=228 status=ok
// SIG undefined FUN_146a2e284(void)

int FUN_146a2e284(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    while (iVar3 != -1) {
      lVar4 = *param_3;
      plVar7 = (longlong *)param_3[1];
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      lVar8 = (longlong)iVar3;
      lVar5 = *(longlong *)(*param_1 + lVar8 * 0x28);
      plVar6 = *(longlong **)(*param_1 + 8 + lVar8 * 0x28);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
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
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar7 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
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
      if (lVar5 == lVar4) {
        return iVar3;
      }
      iVar3 = *(int *)(*param_1 + 0x20 + lVar8 * 0x28);
    }
  }
  return -1;
}



// FUNCTION 146a2e368 FUN_146a2e368 body=137 status=ok
// SIG undefined FUN_146a2e368(void)

int FUN_146a2e368(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  uVar2 = *param_2;
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_146a2e4a2(param_1 + 0x18,iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 8) = uVar2;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 8);
  FUN_146a2e528(lVar3,param_1,param_2);
  puVar4 = (undefined8 *)(lVar3 + 0x20);
  if (*(char *)((longlong)param_2 + 0x1c) != '\0') {
    puVar4 = param_2 + 3;
  }
  *(undefined4 *)(lVar3 + 0x20) = *(undefined4 *)puVar4;
  puVar4 = (undefined8 *)(lVar3 + 0x24);
  if (*(char *)((longlong)param_2 + 0x24) != '\0') {
    puVar4 = param_2 + 4;
  }
  *(undefined4 *)(lVar3 + 0x24) = *(undefined4 *)puVar4;
  return iVar1;
}



// FUNCTION 146a2e3f2 FUN_146a2e3f2 body=175 status=ok
// SIG undefined FUN_146a2e3f2(void)

void FUN_146a2e3f2(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  uVar2 = *param_2;
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_146a2e4a2(param_1 + 0x18,iVar1);
  }
  lVar4 = (longlong)param_3;
  memmove((void *)(*(longlong *)(param_1 + 0x18) + lVar4 * 8 + 8),
          (void *)(*(longlong *)(param_1 + 0x18) + lVar4 * 8),
          (ulonglong)(uint)(iVar1 - param_3) << 3);
  *(undefined8 *)(*(longlong *)(param_1 + 0x18) + lVar4 * 8) = uVar2;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x18) + lVar4 * 8);
  FUN_146a2e528(lVar4,param_1,param_2);
  puVar3 = (undefined8 *)(lVar4 + 0x20);
  if (*(char *)((longlong)param_2 + 0x1c) != '\0') {
    puVar3 = param_2 + 3;
  }
  *(undefined4 *)(lVar4 + 0x20) = *(undefined4 *)puVar3;
  puVar3 = (undefined8 *)(lVar4 + 0x24);
  if (*(char *)((longlong)param_2 + 0x24) != '\0') {
    puVar3 = param_2 + 4;
  }
  *(undefined4 *)(lVar4 + 0x24) = *(undefined4 *)puVar3;
  return;
}



// FUNCTION 146a2e4a2 FUN_146a2e4a2 body=132 status=ok
// SIG undefined FUN_146a2e4a2(void)

void FUN_146a2e4a2(longlong param_1,int param_2)

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



// FUNCTION 146a2e528 FUN_146a2e528 body=150 status=ok
// SIG undefined FUN_146a2e528(void)

void FUN_146a2e528(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar3 = *(longlong *)(param_3 + 8);
  if (lVar3 != 0) {
    lVar4 = *(longlong *)(param_3 + 0x10);
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    FUN_14149270a(param_1);
    plVar5 = *(longlong **)(param_1 + 0x18);
    *(longlong *)(param_1 + 0x10) = lVar3;
    *(longlong *)(param_1 + 0x18) = lVar4;
    FUN_140a5503c(param_1);
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
  }
  if ((param_2 != 0) && (*(longlong *)(param_1 + 8) == 0)) {
    *(longlong *)(param_1 + 8) = param_2;
    FUN_140a5503c(param_1);
    return;
  }
  return;
}



// FUNCTION 146a2e5be FUN_146a2e5be body=385 status=ok
// SIG undefined FUN_146a2e5be(void)

undefined8 *
FUN_146a2e5be(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
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
  plVar4 = (longlong *)FUN_14001cc68(0x5f0);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149f0a200;
  plVar1 = plVar4 + 2;
  memset(plVar1,0,0x5e0);
  FUN_146a2e740(plVar1);
  local_50 = plVar1;
  local_48 = plVar4;
  FUN_146a2e9b4(&local_50,plVar1);
  plVar1 = local_48;
  if (local_48 == (longlong *)0x0) {
    *param_1 = local_50;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_146a2e6d3;
    param_1[1] = 0;
LAB_146a2e696:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_146a2e6d3;
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
      if (plVar4 == (longlong *)0x0) goto LAB_146a2e6d3;
      goto LAB_146a2e696;
    }
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_146a2e6d3;
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
LAB_146a2e6d3:
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
  local_58 = 0x5e0;
  FUN_140a52e78(*param_1,param_2,param_3,param_4);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a2e740 FUN_146a2e740 body=310 status=ok
// SIG undefined FUN_146a2e740(void)

undefined8 * FUN_146a2e740(undefined8 *param_1)

{
  FUN_146a664a0();
  *param_1 = &PTR_FUN_149f0a220;
  param_1[0x93] = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  param_1[0x95] = 0;
  *(undefined4 *)(param_1 + 0x96) = 0;
  *(undefined2 *)(param_1 + 0x97) = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  *(undefined8 *)((longlong)param_1 + 0x484) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48c) = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4cd) = 0;
  param_1[0xa0] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4f7) = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0x3f80000000000000;
  param_1[0xa5] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa6] = 0x41c00000;
  *(undefined4 *)(param_1 + 0xa7) = 0;
  *(undefined2 *)((longlong)param_1 + 0x53c) = 2;
  *(undefined1 *)((longlong)param_1 + 0x53e) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0x3f800000;
  param_1[0xac] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  *(undefined8 *)((longlong)param_1 + 0x557) = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0x3f80000000000000;
  param_1[0xb1] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb2] = 0x41c00000;
  *(undefined4 *)(param_1 + 0xb3) = 0;
  *(undefined2 *)((longlong)param_1 + 0x59c) = 2;
  *(undefined1 *)((longlong)param_1 + 0x59e) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb6) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5b4) = 0;
  *(undefined2 *)(param_1 + 0xb9) = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  return param_1;
}



// FUNCTION 146a2e876 FUN_146a2e876 body=9 status=ok
// SIG undefined FUN_146a2e876(void)

void FUN_146a2e876(longlong param_1)

{
  FUN_146a2e8c4(param_1 + 0x10);
  return;
}



// FUNCTION 146a2e880 FUN_146a2e880 body=29 status=ok
// SIG undefined FUN_146a2e880(void)

undefined8 FUN_146a2e880(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a2e89e FUN_146a2e89e body=38 status=ok
// SIG undefined FUN_146a2e89e(void)

undefined8 FUN_146a2e89e(undefined8 param_1,int param_2)

{
  FUN_146a2e8c4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a2e8c4 FUN_146a2e8c4 body=239 status=ok
// SIG undefined FUN_146a2e8c4(void)

void FUN_146a2e8c4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f0a220;
  FUN_1449db362(param_1 + 0xba);
  FUN_1449db362(param_1 + 0xb7);
  if (*(char *)(param_1 + 0xb6) == '\x01') {
    *(undefined1 *)(param_1 + 0xb6) = 0;
  }
  plVar3 = (longlong *)param_1[0xb0];
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
  plVar3 = (longlong *)param_1[0xa4];
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
  FUN_1449db362(param_1 + 0x9b);
  FUN_1449db362(param_1 + 0x98);
  FUN_1449db362(param_1 + 0x95);
  FUN_1449db362(param_1 + 0x93);
  FUN_1449db362(param_1 + 0x91);
  plVar3 = (longlong *)param_1[0x90];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  FUN_146a665f6(param_1);
  return;
}



// FUNCTION 146a2e9b4 FUN_146a2e9b4 body=167 status=ok
// SIG undefined FUN_146a2e9b4(void)

void FUN_146a2e9b4(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_146a2ea2f;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_146a2ea2f;
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
LAB_146a2ea2f:
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
                    /* WARNING: Could not recover jumptable at 0x000146a2ea4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 146a2ea5c FUN_146a2ea5c body=386 status=ok
// SIG undefined FUN_146a2ea5c(void)

longlong * FUN_146a2ea5c(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_146a2eb6d:
    *puVar5 = &PTR_LAB_149f0eae0;
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
    *puVar5 = &PTR_FUN_149f0a470;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_146a2eb6d;
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
    *puVar5 = &PTR_LAB_149f0eae0;
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
    *puVar5 = &PTR_FUN_149f0a470;
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



// FUNCTION 146a2ebde FUN_146a2ebde body=64 status=ok
// SIG undefined FUN_146a2ebde(void)

undefined8 * FUN_146a2ebde(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f0a470;
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



// FUNCTION 146a2ec22 FUN_146a2ec22 body=81 status=ok
// SIG undefined FUN_146a2ec22(void)

undefined8 FUN_146a2ec22(longlong param_1)

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



// FUNCTION 146a2ec7a FUN_146a2ec7a body=89 status=ok
// SIG undefined FUN_146a2ec7a(void)

bool FUN_146a2ec7a(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146a2ecc5;
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
LAB_146a2ecc5:
  return lVar6 == param_2;
}



// FUNCTION 146a2ecf0 FUN_146a2ecf0 body=118 status=ok
// SIG undefined FUN_146a2ecf0(void)

void FUN_146a2ecf0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f0eae0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f0a470;
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



// FUNCTION 146a2ed66 FUN_146a2ed66 body=118 status=ok
// SIG undefined FUN_146a2ed66(void)

void FUN_146a2ed66(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f0eae0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f0a470;
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



// FUNCTION 146a2eddc FUN_146a2eddc body=156 status=ok
// SIG undefined FUN_146a2eddc(void)

void FUN_146a2eddc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f0eae0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f0a470;
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
                    /* WARNING: Could not recover jumptable at 0x000146a2ee68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146a2ee78 FUN_146a2ee78 body=104 status=ok
// SIG undefined FUN_146a2ee78(void)

void FUN_146a2ee78(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000146a2eec5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000146a2eed6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 146a2eee0 FUN_146a2eee0 body=101 status=ok
// SIG undefined FUN_146a2eee0(void)

ulonglong FUN_146a2eee0(longlong param_1)

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
LAB_146a2ef3a:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146a2ef3a;
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



// FUNCTION 146a2ef48 FUN_146a2ef48 body=386 status=ok
// SIG undefined FUN_146a2ef48(void)

longlong * FUN_146a2ef48(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_146a2f059:
    *puVar5 = &PTR_LAB_149f0eb50;
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
    *puVar5 = &PTR_FUN_149f0a4e0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_146a2f059;
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
    *puVar5 = &PTR_LAB_149f0eb50;
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
    *puVar5 = &PTR_FUN_149f0a4e0;
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



// FUNCTION 146a2f0ca FUN_146a2f0ca body=64 status=ok
// SIG undefined FUN_146a2f0ca(void)

undefined8 * FUN_146a2f0ca(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f0a4e0;
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



// FUNCTION 146a2f10e FUN_146a2f10e body=81 status=ok
// SIG undefined FUN_146a2f10e(void)

undefined8 FUN_146a2f10e(longlong param_1)

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



// FUNCTION 146a2f166 FUN_146a2f166 body=89 status=ok
// SIG undefined FUN_146a2f166(void)

bool FUN_146a2f166(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146a2f1b1;
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
LAB_146a2f1b1:
  return lVar6 == param_2;
}



// FUNCTION 146a2f1e8 FUN_146a2f1e8 body=118 status=ok
// SIG undefined FUN_146a2f1e8(void)

void FUN_146a2f1e8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f0eb50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f0a4e0;
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



// FUNCTION 146a2f25e FUN_146a2f25e body=118 status=ok
// SIG undefined FUN_146a2f25e(void)

void FUN_146a2f25e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f0eb50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f0a4e0;
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



// FUNCTION 146a2f2d4 FUN_146a2f2d4 body=156 status=ok
// SIG undefined FUN_146a2f2d4(void)

void FUN_146a2f2d4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f0eb50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f0a4e0;
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
                    /* WARNING: Could not recover jumptable at 0x000146a2f360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146a2f370 FUN_146a2f370 body=104 status=ok
// SIG undefined FUN_146a2f370(void)

void FUN_146a2f370(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000146a2f3bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000146a2f3ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 146a2f3d8 FUN_146a2f3d8 body=101 status=ok
// SIG undefined FUN_146a2f3d8(void)

ulonglong FUN_146a2f3d8(longlong param_1)

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
LAB_146a2f432:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146a2f432;
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



// FUNCTION 146a2f440 FUN_146a2f440 body=222 status=ok
// SIG undefined FUN_146a2f440(void)

undefined8 *
FUN_146a2f440(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  longlong *local_60 [2];
  undefined1 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_149f0a570;
  FUN_14023423e(local_60,param_4);
  local_50 = 1;
  local_48 = 0;
  uStack_40 = 0;
  local_70 = *param_2;
  local_68 = param_2[1];
  if (local_68 != 0) {
    LOCK();
    *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
    UNLOCK();
  }
  local_78 = param_5;
  FUN_146a1baa2(param_1 + 2,&local_70,param_3,local_60);
  FUN_1449db362(&local_48);
  if (local_60[0] != (longlong *)0x0) {
    (**(code **)(*local_60[0] + 0x10))();
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a2f52a FUN_146a2f52a body=29 status=ok
// SIG undefined FUN_146a2f52a(void)

undefined8 FUN_146a2f52a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a2f548 FUN_146a2f548 body=198 status=ok
// SIG undefined FUN_146a2f548(void)

void FUN_146a2f548(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f06490;
  FUN_1449db362(param_1 + 0x25);
  if (*(char *)((longlong)param_1 + 0x124) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x124) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x11c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x11c) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x114) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x114) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x10c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x10c) = 0;
  }
  FUN_1449db362(param_1 + 0x1e);
  if ((longlong *)param_1[0x1b] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1b] + 0x10))();
  }
  if ((longlong *)param_1[0x19] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x19] + 0x10))();
  }
  plVar3 = (longlong *)param_1[0x18];
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
  FUN_146a4c1fa(param_1);
  return;
}



// FUNCTION 146a2f60e FUN_146a2f60e body=167 status=ok
// SIG undefined FUN_146a2f60e(void)

void FUN_146a2f60e(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_146a2f689;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_146a2f689;
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
LAB_146a2f689:
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
                    /* WARNING: Could not recover jumptable at 0x000146a2f6a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 146a2f6b6 FUN_146a2f6b6 body=282 status=ok
// SIG undefined FUN_146a2f6b6(void)

longlong * FUN_146a2f6b6(longlong *param_1,longlong param_2)

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
  plVar3 = (longlong *)FUN_146a2f7d1();
  plVar4 = plVar3 + 2;
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_146a2f92e(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_146a2f763;
    param_1[1] = 0;
LAB_146a2f72d:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_146a2f763;
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
      if (plVar4 == (longlong *)0x0) goto LAB_146a2f763;
      goto LAB_146a2f72d;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_146a2f763;
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
LAB_146a2f763:
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
  local_38 = 0x268;
  FUN_140a52e78(*param_1,"SClippingHorizontalBox",
                ".\\Runtime/Slate/Private/Framework/MultiBox/MultiBox.cpp",0x435);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a2f7d1 FUN_146a2f7d1 body=142 status=ok
// SIG undefined FUN_146a2f7d1(void)

undefined8 * FUN_146a2f7d1(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x278);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_149f0a590;
  memset(puVar1 + 2,0,0x268);
  FUN_140a5436e(puVar1 + 2);
  puVar1[2] = &PTR_FUN_149f0a5b0;
  *(undefined4 *)((longlong)puVar1 + 0x264) = 0;
  puVar1[0x4e] = 0;
  puVar1[0x44] = 0;
  puVar1[0x45] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x22c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x234) = 0;
  puVar1[0x4a] = 0;
  puVar1[0x4b] = 0;
  return puVar1;
}



// FUNCTION 146a2f86a FUN_146a2f86a body=29 status=ok
// SIG undefined FUN_146a2f86a(void)

undefined8 FUN_146a2f86a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a2f888 FUN_146a2f888 body=38 status=ok
// SIG undefined FUN_146a2f888(void)

undefined8 FUN_146a2f888(undefined8 param_1,int param_2)

{
  FUN_146a2f8ae();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a2f8ae FUN_146a2f8ae body=127 status=ok
// SIG undefined FUN_146a2f8ae(void)

void FUN_146a2f8ae(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f0a5b0;
  plVar3 = (longlong *)param_1[0x49];
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
  FUN_1449db362(param_1 + 0x44);
  plVar3 = (longlong *)param_1[0x43];
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
  FUN_14287ac1e(param_1);
  return;
}



// FUNCTION 146a2f92e FUN_146a2f92e body=167 status=ok
// SIG undefined FUN_146a2f92e(void)

void FUN_146a2f92e(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_146a2f9a9;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_146a2f9a9;
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
LAB_146a2f9a9:
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
                    /* WARNING: Could not recover jumptable at 0x000146a2f9c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 146a2f9d6 FUN_146a2f9d6 body=64 status=ok
// SIG undefined FUN_146a2f9d6(void)

undefined8 * FUN_146a2f9d6(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f0a7f0;
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



// FUNCTION 146a2fa1a FUN_146a2fa1a body=81 status=ok
// SIG undefined FUN_146a2fa1a(void)

undefined8 FUN_146a2fa1a(longlong param_1)

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



// FUNCTION 146a2fa72 FUN_146a2fa72 body=89 status=ok
// SIG undefined FUN_146a2fa72(void)

bool FUN_146a2fa72(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146a2fabd;
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
LAB_146a2fabd:
  return lVar6 == param_2;
}



// FUNCTION 146a2faf4 FUN_146a2faf4 body=118 status=ok
// SIG undefined FUN_146a2faf4(void)

void FUN_146a2faf4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f0a860;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f0a7f0;
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



// FUNCTION 146a2fb6a FUN_146a2fb6a body=118 status=ok
// SIG undefined FUN_146a2fb6a(void)

void FUN_146a2fb6a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f0a860;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f0a7f0;
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



// FUNCTION 146a2fbe0 FUN_146a2fbe0 body=156 status=ok
// SIG undefined FUN_146a2fbe0(void)

void FUN_146a2fbe0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f0a860;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f0a7f0;
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
                    /* WARNING: Could not recover jumptable at 0x000146a2fc6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146a2fc7c FUN_146a2fc7c body=105 status=ok
// SIG undefined FUN_146a2fc7c(void)

undefined8 FUN_146a2fc7c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146a2fcd0:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_146a2fcd0;
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
    (**(code **)(param_1 + 0x28))
              ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18),param_2);
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



// FUNCTION 146a2fce6 FUN_146a2fce6 body=186 status=ok
// SIG undefined FUN_146a2fce6(void)

ulonglong FUN_146a2fce6(longlong param_1)

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
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146a2fd7e:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146a2fd7e;
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
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if ((lVar4 != 0) &&
       ((**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),local_30),
       local_28 != (longlong *)0x0)) {
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 146a2fda4 FUN_146a2fda4 body=340 status=ok
// SIG undefined FUN_146a2fda4(void)

undefined8 * FUN_146a2fda4(undefined8 *param_1,undefined8 param_2)

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
  plVar3 = (longlong *)FUN_14001cc68(0x990);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_149f0a8d0;
  plVar4 = plVar3 + 2;
  memset(plVar4,0,0x980);
  FUN_146a2fefa(plVar4);
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_146a300a4(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_146a2fe8b;
    param_1[1] = 0;
LAB_146a2fe55:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_146a2fe8b;
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
      if (plVar4 == (longlong *)0x0) goto LAB_146a2fe8b;
      goto LAB_146a2fe55;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_146a2fe8b;
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
LAB_146a2fe8b:
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
  local_38 = 0x980;
  FUN_140a52e78(*param_1,"SClippingVerticalBox",
                ".\\Runtime/Slate/Private/Framework/MultiBox/MultiBox.cpp",0x43e);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a2fefa FUN_146a2fefa body=143 status=ok
// SIG undefined FUN_146a2fefa(void)

undefined8 * FUN_146a2fefa(undefined8 *param_1)

{
  FUN_1407685de();
  *param_1 = &PTR_FUN_149f0a8f0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(undefined8 *)((longlong)param_1 + 0x22c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x234) = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  FUN_140ca8d78(param_1 + 0x4e);
  FUN_140ca8d78(param_1 + 0xbc);
  *(undefined4 *)(param_1 + 0x12a) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x954) = 1;
  param_1[299] = 0;
  param_1[300] = 0;
  param_1[0x12d] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x12e) = 0;
  return param_1;
}



// FUNCTION 146a2ff8a FUN_146a2ff8a body=9 status=ok
// SIG undefined FUN_146a2ff8a(void)

void FUN_146a2ff8a(longlong param_1)

{
  FUN_146a2ffd8(param_1 + 0x10);
  return;
}



// FUNCTION 146a2ff94 FUN_146a2ff94 body=29 status=ok
// SIG undefined FUN_146a2ff94(void)

undefined8 FUN_146a2ff94(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a2ffb2 FUN_146a2ffb2 body=38 status=ok
// SIG undefined FUN_146a2ffb2(void)

undefined8 FUN_146a2ffb2(undefined8 param_1,int param_2)

{
  FUN_146a2ffd8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a2ffd8 FUN_146a2ffd8 body=204 status=ok
// SIG undefined FUN_146a2ffd8(void)

void FUN_146a2ffd8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f0a8f0;
  FUN_1449db362(param_1 + 299);
  FUN_140ffd6b6(param_1 + 0xbc);
  FUN_140ffd6b6(param_1 + 0x4e);
  plVar3 = (longlong *)param_1[0x4b];
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
  FUN_1449db362(param_1 + 0x46);
  plVar3 = (longlong *)param_1[0x45];
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
  plVar3 = (longlong *)param_1[0x43];
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
  FUN_14287ac1e(param_1);
  return;
}



// FUNCTION 146a300a4 FUN_146a300a4 body=167 status=ok
// SIG undefined FUN_146a300a4(void)

void FUN_146a300a4(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_146a3011f;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_146a3011f;
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
LAB_146a3011f:
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
                    /* WARNING: Could not recover jumptable at 0x000146a3013f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 146a3014c FUN_146a3014c body=329 status=ok
// SIG undefined FUN_146a3014c(void)

longlong * FUN_146a3014c(longlong *param_1,undefined4 param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_3;
  plVar3 = (longlong *)FUN_14001cc68(0x250,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_149f0ab50;
  plVar4 = plVar3 + 2;
  FUN_146a9f9d8(plVar4);
  local_38 = plVar4;
  local_30 = plVar3;
  FUN_146a302be(&local_38,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_146a30229;
    param_1[1] = 0;
LAB_146a301f1:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_146a30229;
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
      if (plVar4 == (longlong *)0x0) goto LAB_146a30229;
      goto LAB_146a301f1;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_146a30229;
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
LAB_146a30229:
  plVar4 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_48 = 0x240;
  FUN_140a52e78(*param_1,"SUniformWrapPanel",
                ".\\Runtime/Slate/Private/Framework/MultiBox/MultiBox.cpp",param_2);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a30296 FUN_146a30296 body=9 status=ok
// SIG undefined FUN_146a30296(void)

void FUN_146a30296(longlong param_1)

{
  FUN_142903844(param_1 + 0x10);
  return;
}



// FUNCTION 146a302a0 FUN_146a302a0 body=29 status=ok
// SIG undefined FUN_146a302a0(void)

undefined8 FUN_146a302a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a302be FUN_146a302be body=167 status=ok
// SIG undefined FUN_146a302be(void)

void FUN_146a302be(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_146a30339;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_146a30339;
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
LAB_146a30339:
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
                    /* WARNING: Could not recover jumptable at 0x000146a30359. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 146a30366 FUN_146a30366 body=370 status=ok
// SIG undefined FUN_146a30366(void)

longlong * FUN_146a30366(longlong *param_1,longlong param_2)

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
  plVar3 = (longlong *)FUN_14001cc68(0x8d0,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_149f0ab70;
  plVar4 = plVar3 + 2;
  FUN_146a30502(plVar4);
  plVar3[2] = (longlong)&PTR_FUN_149f0ab90;
  plVar3[0x4f] = (longlong)&PTR_FUN_149f0ae70;
  plVar3[0x9d] = (longlong)&PTR_LAB_149f0ae90;
  *(undefined1 *)(plVar3 + 0x119) = 1;
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_146a3a304(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_146a3046b;
    param_1[1] = 0;
LAB_146a30435:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_146a3046b;
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
      if (plVar4 == (longlong *)0x0) goto LAB_146a3046b;
      goto LAB_146a30435;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_146a3046b;
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
LAB_146a3046b:
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
  local_38 = 0x8c0;
  FUN_140a52e78(*param_1,"STileView< TSharedPtr<SWidget> >",
                ".\\Runtime/Slate/Private/Framework/MultiBox/MultiBox.cpp",0x473);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


