// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1498db678 FUN_1498db678 body=126 status=ok
// SIG undefined FUN_1498db678(void)

void FUN_1498db678(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a5981a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bef4b40;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498db6e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498db704 FUN_1498db704 body=21 status=ok
// SIG undefined FUN_1498db704(void)

undefined8 FUN_1498db704(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498db71a FUN_1498db71a body=78 status=ok
// SIG undefined FUN_1498db71a(void)

undefined8 * FUN_1498db71a(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_147557926();
  *param_1 = &PTR_FUN_14bef2e20;
  lVar1 = *(longlong *)(param_2 + 0x38);
  param_1[7] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  *(undefined1 *)((longlong)param_1 + 0x44) = *(undefined1 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x40);
  return param_1;
}



// FUNCTION 1498db768 FUN_1498db768 body=78 status=ok
// SIG undefined FUN_1498db768(void)

void FUN_1498db768(undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfd;
  puVar2 = (undefined8 *)FUN_14001cc68(400,8);
  *param_1 = puVar2;
  bVar1 = *(byte *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x10) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar2;
  }
  FUN_1498db7b6(param_1,param_2);
  return;
}



// FUNCTION 1498db7b6 FUN_1498db7b6 body=120 status=ok
// SIG undefined FUN_1498db7b6(void)

undefined8 * FUN_1498db7b6(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14a463c30;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 8);
  *param_1 = &PTR_FUN_14a481250;
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  *param_1 = &PTR_FUN_14bef4120;
  FUN_1498db82e(param_1 + 4,param_2 + 0x20);
  lVar1 = *(longlong *)(param_2 + 0x188);
  param_1[0x31] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  return param_1;
}



// FUNCTION 1498db82e FUN_1498db82e body=199 status=ok
// SIG undefined FUN_1498db82e(void)

longlong * FUN_1498db82e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  bVar8 = DAT_14c950c29;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if ((lVar1 != 0 & bVar8) == 1) {
    FUN_14689c22e();
    bVar8 = DAT_14c950c29;
  }
  lVar1 = param_2[2];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
  lVar5 = param_2[3];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
  lVar6 = param_2[4];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x24);
  lVar7 = param_2[5];
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(int *)(param_1 + 4) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar4;
  *(int *)(param_1 + 5) = (int)lVar7;
  *(int *)(param_1 + 2) = (int)lVar1;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(int *)(param_1 + 3) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  lVar1 = param_2[6];
  param_1[6] = lVar1;
  if ((lVar1 != 0 & bVar8) == 1) {
    FUN_14689c22e();
    bVar8 = DAT_14c950c29;
  }
  lVar1 = param_2[7];
  param_1[7] = lVar1;
  if ((lVar1 != 0 & bVar8) == 1) {
    FUN_14689c22e();
  }
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x44);
  lVar1 = param_2[9];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x4c);
  *(int *)(param_1 + 8) = (int)param_2[8];
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar2;
  *(int *)(param_1 + 9) = (int)lVar1;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar3;
  FUN_147613664(param_1 + 10,param_2 + 10);
  param_1[0x2c] = param_2[0x2c];
  return param_1;
}



// FUNCTION 1498db8f6 FUN_1498db8f6 body=246 status=ok
// SIG undefined FUN_1498db8f6(void)

void FUN_1498db8f6(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  *param_1 = &PTR_FUN_14bef4c30;
  param_1[1] = &PTR_LAB_14bef4d20;
  param_1[2] = &PTR_LAB_14bef4d40;
  param_1[3] = 0;
  param_1[4] = param_2;
  local_38 = param_1 + 5;
  param_1[5] = 0;
  param_1[6] = 0;
  plVar2 = (longlong *)FUN_14001cc68(0x180,0x10);
  FUN_14469991c(plVar2);
  param_1[7] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  local_50 = FUN_1498e836b();
  local_58 = local_50 + 0x10;
  param_1[8] = local_58;
  param_1[9] = local_50;
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  FUN_1498dba4c(&local_58);
  uVar1 = param_1[7];
  local_48 = param_1[8];
  local_40 = param_1[9];
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  local_30 = param_1 + 8;
  local_28 = param_1;
  FUN_1498dbaa4(uVar1,&local_48);
  *(undefined8 *)(local_28[8] + 0x2a0) = local_28[7];
  return;
}



// FUNCTION 1498db9ec Unwind@1498db9ec body=53 status=ok
// SIG undefined Unwind@1498db9ec(void)

void Unwind_1498db9ec(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  FUN_1498dbb36(*(undefined8 *)(param_2 + 0x48));
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x50) + 0x38);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}



// FUNCTION 1498dba22 Unwind@1498dba22 body=42 status=ok
// SIG undefined Unwind@1498dba22(void)

void Unwind_1498dba22(undefined8 param_1,longlong param_2)

{
  if (**(longlong **)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 1498dba4c FUN_1498dba4c body=65 status=ok
// SIG undefined FUN_1498dba4c(void)

void FUN_1498dba4c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return;
}



// FUNCTION 1498dba8e Unwind@1498dba8e body=20 status=ok
// SIG undefined Unwind@1498dba8e(void)

void Unwind_1498dba8e(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498dbaa4 FUN_1498dbaa4 body=112 status=ok
// SIG undefined FUN_1498dbaa4(void)

void FUN_1498dbaa4(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0xe8) = *param_2;
  plVar2 = (longlong *)param_2[1];
  plVar3 = *(longlong **)(param_1 + 0xf0);
  if (plVar3 != plVar2) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar3 = *(longlong **)(param_1 + 0xf0);
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
    *(longlong **)(param_1 + 0xf0) = plVar2;
  }
  FUN_1498dbb36(param_2);
  return;
}



// FUNCTION 1498dbb14 Unwind@1498dbb14 body=34 status=ok
// SIG undefined Unwind@1498dbb14(void)

void Unwind_1498dbb14(undefined8 param_1,longlong param_2)

{
  FUN_1498dbb36(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1498dbb36 FUN_1498dbb36 body=65 status=ok
// SIG undefined FUN_1498dbb36(void)

void FUN_1498dbb36(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return;
}



// FUNCTION 1498dbb78 Unwind@1498dbb78 body=20 status=ok
// SIG undefined Unwind@1498dbb78(void)

void Unwind_1498dbb78(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498dbb8e FUN_1498dbb8e body=111 status=ok
// SIG undefined FUN_1498dbb8e(void)

void FUN_1498dbb8e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bef4c30;
  param_1[1] = &PTR_LAB_14bef4d20;
  param_1[2] = &PTR_LAB_14bef4d40;
  FUN_1498dbc2a();
  FUN_1498dbb36(param_1 + 8);
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[7] + 0x10))();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1498dbbfe Unwind@1498dbbfe body=20 status=ok
// SIG undefined Unwind@1498dbbfe(void)

void Unwind_1498dbbfe(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498dbc14 Unwind@1498dbc14 body=20 status=ok
// SIG undefined Unwind@1498dbc14(void)

void Unwind_1498dbc14(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498dbc2a FUN_1498dbc2a body=124 status=ok
// SIG undefined FUN_1498dbc2a(void)

void FUN_1498dbc2a(longlong param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 8) + 0x18))
                    (*(longlong *)(param_1 + 0x38) + 8);
  if (iVar1 != 0) {
    FUN_144699a38(*(undefined8 *)(param_1 + 0x38));
    *(undefined8 *)(param_1 + 0x18) = 0;
    if (*(longlong *)(param_1 + 0x28) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    FUN_144699c24(*(undefined8 *)(param_1 + 0x40));
    (**(code **)**(undefined8 **)(param_1 + 0x20))(*(undefined8 **)(param_1 + 0x20),9);
                    /* WARNING: Could not recover jumptable at 0x0001498dbc9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 0x20))(*(undefined8 **)(param_1 + 0x20),1);
    return;
  }
  return;
}



// FUNCTION 1498dbcb6 FUN_1498dbcb6 body=34 status=ok
// SIG undefined FUN_1498dbcb6(void)

undefined8 FUN_1498dbcb6(longlong param_1,undefined8 param_2)

{
  FUN_14698a6cc(param_2,*(longlong *)(param_1 + 0x40) + 0x130);
  return param_2;
}



// FUNCTION 1498dbcec FUN_1498dbcec body=47 status=ok
// SIG undefined FUN_1498dbcec(void)

undefined8 * FUN_1498dbcec(longlong param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1498dbd42(*(undefined8 *)(param_1 + 0x40));
  return param_2;
}



// FUNCTION 1498dbd1c Unwind@1498dbd1c body=38 status=ok
// SIG undefined Unwind@1498dbd1c(void)

void Unwind_1498dbd1c(undefined8 param_1,longlong param_2)

{
  if (**(longlong **)(param_2 + 0x20) != 0) {
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 1498dbd42 FUN_1498dbd42 body=486 status=ok
// SIG undefined FUN_1498dbd42(void)

void FUN_1498dbd42(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_58;
  int local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x108));
  FUN_1400020e8(param_2,L"Audio Tracks\n",0xd);
  if ((longlong)*(int *)(param_1 + 0x88) == 0) {
    FUN_1400020e8(param_2,L"\tnone\n",6);
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x80);
    lVar5 = (longlong)*(int *)(param_1 + 0x88) * 0x60 + lVar4;
    for (; lVar4 != lVar5; lVar4 = lVar4 + 0x60) {
      puVar1 = (undefined8 *)FUN_1447a1f4a(lVar4 + 8);
      puVar3 = &DAT_149dfb77a;
      if (*(int *)(puVar1 + 1) != 0) {
        puVar3 = (undefined2 *)*puVar1;
      }
      FUN_140002266(&local_58,L"\t%s\n",puVar3);
      iVar2 = local_50 + -1;
      if (local_50 == 0) {
        iVar2 = 0;
      }
      FUN_1400020e8(param_2,local_58,iVar2);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020e8(param_2,L"\t\tNot implemented yet",0x15);
    }
  }
  FUN_1400020e8(param_2,L"Video Tracks\n",0xd);
  if ((longlong)*(int *)(param_1 + 0x288) == 0) {
    FUN_1400020e8(param_2,L"\tnone\n",6);
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x280);
    lVar5 = (longlong)*(int *)(param_1 + 0x288) * 0x60 + lVar4;
    for (; lVar4 != lVar5; lVar4 = lVar4 + 0x60) {
      puVar1 = (undefined8 *)FUN_1447a1f4a(lVar4 + 8);
      puVar3 = &DAT_149dfb77a;
      if (*(int *)(puVar1 + 1) != 0) {
        puVar3 = (undefined2 *)*puVar1;
      }
      FUN_140002266(&local_58,L"\t%s\n",puVar3);
      iVar2 = local_50 + -1;
      if (local_50 == 0) {
        iVar2 = 0;
      }
      FUN_1400020e8(param_2,local_58,iVar2);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020e8(param_2,L"\t\tNot implemented yet",0x15);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x108));
  return;
}



// FUNCTION 1498dbf28 Unwind@1498dbf28 body=53 status=ok
// SIG undefined Unwind@1498dbf28(void)

void Unwind_1498dbf28(undefined8 param_1,longlong param_2)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x28));
  return;
}



// FUNCTION 1498dbf68 FUN_1498dbf68 body=29 status=ok
// SIG undefined FUN_1498dbf68(void)

undefined8 FUN_1498dbf68(longlong param_1,undefined8 param_2)

{
  FUN_14698a6cc(param_2,param_1 + 0x28);
  return param_2;
}



// FUNCTION 1498dbf8c FUN_1498dbf8c body=157 status=ok
// SIG undefined FUN_1498dbf8c(void)

undefined4 FUN_1498dbf8c(undefined8 *param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  (**(code **)*param_1)();
  if (*(int *)(param_2 + 8) < 2) {
    uVar1 = 0;
  }
  else {
    if (param_3 == (longlong *)0x0) {
      uVar1 = 0;
    }
    else {
      FUN_1446ddc76(&local_48,"PrecacheFile",1);
      uVar1 = (**(code **)(*param_3 + 0x30))(param_3,&local_48,0);
    }
    local_48 = 0;
    uStack_40 = 0;
    uVar1 = FUN_144699e2a(param_1,&local_48,param_2,uVar1,param_4);
    FUN_1498dc056(&local_48);
  }
  return uVar1;
}



// FUNCTION 1498dc02a Unwind@1498dc02a body=44 status=ok
// SIG undefined Unwind@1498dc02a(void)

void Unwind_1498dc02a(undefined8 param_1,longlong param_2)

{
  FUN_1498dc056(param_2 + 0x30);
  return;
}



// FUNCTION 1498dc056 FUN_1498dc056 body=65 status=ok
// SIG undefined FUN_1498dc056(void)

void FUN_1498dc056(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return;
}



// FUNCTION 1498dc098 Unwind@1498dc098 body=20 status=ok
// SIG undefined Unwind@1498dc098(void)

void Unwind_1498dc098(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498dc0bc FUN_1498dc0bc body=559 status=ok
// SIG undefined FUN_1498dc0bc(void)

void FUN_1498dc0bc(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined2 *puVar7;
  bool bVar8;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  longlong *local_40;
  char local_31;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  lVar6 = *(longlong *)(param_1 + 0x40);
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x108));
  cVar3 = *(char *)(lVar6 + 0x160);
  cVar1 = *(char *)(lVar6 + 0x1f8);
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x108));
  if (cVar3 == '\x01') {
    (**(code **)**(undefined8 **)(param_1 + 0x20))(*(undefined8 **)(param_1 + 0x20),9);
    if (cVar1 == '\0') goto LAB_1498dc22e;
  }
  else if (cVar1 == '\0') {
    return;
  }
  cVar3 = FUN_145db1694(10,0,0);
  if (cVar3 == '\0') {
LAB_1498dc1cd:
    plVar5 = (longlong *)FUN_145b156f4();
    lVar6 = plVar5[0x22];
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 1000))(plVar5);
      lVar6 = plVar5[0x22];
    }
    FUN_14469a952(*(undefined8 *)(param_1 + 0x38),*(undefined1 *)(lVar6 + 0x29));
    FUN_1498dc368(*(undefined8 *)(param_1 + 0x40));
  }
  else {
    plVar5 = (longlong *)FUN_145b156f4();
    lVar6 = plVar5[0x22];
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 1000))(plVar5);
      lVar6 = plVar5[0x22];
    }
    cVar3 = *(char *)(lVar6 + 0x2b);
    if (cVar3 == '\x01') {
      FUN_147ae7402(&local_58,DAT_14cae4098);
      puVar7 = local_58;
      if (local_50 == 0) {
        puVar7 = &DAT_149dfb77a;
      }
      local_31 = cVar3;
      iVar4 = FUN_144a8a8b6(puVar7,"D3D11");
      bVar8 = true;
      cVar3 = local_31;
      if (iVar4 != 0) goto LAB_1498dc27d;
LAB_1498dc1bb:
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (bVar8) goto LAB_1498dc1cd;
    }
    else {
LAB_1498dc27d:
      plVar5 = (longlong *)FUN_145b156f4();
      lVar6 = plVar5[0x22];
      if (lVar6 == 0) {
        (**(code **)(*plVar5 + 1000))(plVar5);
        lVar6 = plVar5[0x22];
      }
      if (*(char *)(lVar6 + 0x2c) != '\0') {
        bVar8 = true;
        if (cVar3 == '\0') goto LAB_1498dc1cd;
        goto LAB_1498dc1bb;
      }
      local_31 = cVar3;
      iVar4 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 8) + 0x18))
                        (*(longlong *)(param_1 + 0x38) + 8);
      bVar8 = iVar4 == 1;
      if (local_31 != '\0') goto LAB_1498dc1bb;
      if (iVar4 == 1) goto LAB_1498dc1cd;
    }
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x150) != 0) {
    FUN_14469aaa6(*(longlong *)(param_1 + 0x40),&local_40);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    FUN_1498dc7bc(*(undefined8 *)(param_1 + 0x40),&local_48);
    cVar3 = FUN_1498dc51e(uVar2,&local_40,local_48);
    if (local_40 != (longlong *)0x0) {
      (**(code **)(*local_40 + 0x10))();
    }
    if (cVar3 != '\0') goto LAB_1498dc22e;
  }
  FUN_144699a38(*(undefined8 *)(param_1 + 0x38));
  (**(code **)**(undefined8 **)(param_1 + 0x20))(*(undefined8 **)(param_1 + 0x20),4);
LAB_1498dc22e:
  FUN_1498dc876(*(undefined8 *)(param_1 + 0x40));
  return;
}



// FUNCTION 1498dc2ec Unwind@1498dc2ec body=51 status=ok
// SIG undefined Unwind@1498dc2ec(void)

void Unwind_1498dc2ec(undefined8 param_1,longlong param_2)

{
  if ((*(char *)(param_2 + 0x47) != '\0') && (*(longlong *)(param_2 + 0x20) != 0)) {
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 1498dc320 Unwind@1498dc320 body=24 status=ok
// SIG undefined Unwind@1498dc320(void)

void Unwind_1498dc320(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498dc33a Unwind@1498dc33a body=46 status=ok
// SIG undefined Unwind@1498dc33a(void)

void Unwind_1498dc33a(undefined8 param_1,longlong param_2)

{
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x38) + 0x10))();
  }
  return;
}



// FUNCTION 1498dc368 FUN_1498dc368 body=348 status=ok
// SIG undefined FUN_1498dc368(void)

void FUN_1498dc368(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_60;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0x150) != 0) {
    local_78 = 0;
    uStack_70 = 0;
    FUN_14469f7c2(&local_60,&local_78,param_1 + 0x140,0);
    plVar1 = (longlong *)(param_1 + 8);
    uVar2 = (**(code **)(*(longlong *)(param_1 + 8) + 0x18))(plVar1,6);
    local_54 = (**(code **)(*plVar1 + 0x28))(plVar1,6,uVar2);
    uVar3 = (**(code **)(*plVar1 + 0x18))(plVar1,0);
    local_50 = (**(code **)(*plVar1 + 0x28))(plVar1,0,uVar3);
    uVar4 = (**(code **)(*plVar1 + 0x18))(plVar1,1);
    local_4c = (**(code **)(*plVar1 + 0x28))(plVar1,1,uVar4);
    FUN_14469bfbe(param_1,local_60,param_1 + 0x140,0);
    (**(code **)(*plVar1 + 0x50))(plVar1,6,uVar2,local_54);
    (**(code **)(*plVar1 + 0x48))(plVar1,6,uVar2);
    (**(code **)(*plVar1 + 0x50))(plVar1,0,uVar3,local_50);
    (**(code **)(*plVar1 + 0x48))(plVar1,0,uVar3);
    (**(code **)(*plVar1 + 0x50))(plVar1,1,uVar4,local_4c);
    (**(code **)(*plVar1 + 0x48))(plVar1,1,uVar4);
    if (local_60 != (longlong *)0x0) {
      (**(code **)(*local_60 + 0x10))(local_60);
    }
  }
  return;
}



// FUNCTION 1498dc4c4 Unwind@1498dc4c4 body=58 status=ok
// SIG undefined Unwind@1498dc4c4(void)

void Unwind_1498dc4c4(undefined8 param_1,longlong param_2)

{
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x38) + 0x10))();
  }
  return;
}



// FUNCTION 1498dc4fe Unwind@1498dc4fe body=30 status=ok
// SIG undefined Unwind@1498dc4fe(void)

void Unwind_1498dc4fe(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498dc51e FUN_1498dc51e body=421 status=ok
// SIG undefined FUN_1498dc51e(void)

bool FUN_1498dc51e(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  code *local_f8 [2];
  undefined8 local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 *local_b8;
  undefined8 *local_b0;
  longlong local_a8;
  longlong *local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  longlong *local_48;
  longlong *local_40;
  undefined1 local_32;
  undefined1 local_31;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  lVar1 = *(longlong *)(param_1 + 0x60);
  if (lVar1 != 0) {
    local_60 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    local_60[1] = &DAT_100000001;
    *local_60 = &PTR_LAB_14bef8c90;
    local_68 = local_60 + 2;
    local_60[3] = 0;
    local_60[2] = &PTR_FUN_14bef8ca8;
    if (local_60 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(local_60 + 1) = *(int *)(local_60 + 1) + 1;
      UNLOCK();
    }
    param_2 = (longlong *)*param_2;
    uStack_80 = param_1;
    local_58 = local_68;
    local_50 = local_60;
    local_40 = param_2;
    if (param_2 == (longlong *)0x0) {
      local_88 = &PTR_FUN_14bef8cb0;
      local_78 = (longlong *)0x0;
    }
    else {
      local_32 = 1;
      (**(code **)(*param_2 + 8))(param_2);
      local_a8 = 0;
      local_98 = (longlong *)0x0;
      local_88 = &PTR_FUN_14bef8cb0;
      local_31 = 1;
      local_78 = param_2;
      (**(code **)(*param_2 + 8))(param_2);
    }
    local_48 = &local_88;
    local_f8[0] = FUN_1446a7f90;
    local_e8 = 0;
    local_98 = (longlong *)0x0;
    uStack_70._0_4_ = (undefined4)param_3;
    uStack_70._4_4_ = (undefined4)((ulonglong)param_3 >> 0x20);
    local_d8 = (undefined4)local_88;
    uStack_d4 = local_88._4_4_;
    uStack_d0 = (undefined4)uStack_80;
    uStack_cc = uStack_80._4_4_;
    local_c8 = (undefined4)local_78;
    uStack_c4 = local_78._4_4_;
    uStack_c0 = (undefined4)uStack_70;
    uStack_bc = uStack_70._4_4_;
    local_a8 = 0;
    local_b8 = local_58;
    local_b0 = local_50;
    if (local_50 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(local_50 + 1) = *(int *)(local_50 + 1) + 1;
      UNLOCK();
    }
    uStack_70 = param_3;
    FUN_1498ddd62(&local_58);
    FUN_1498ddbc6(param_1,local_f8);
    FUN_1498ddd06(local_f8);
    if (local_a8 != 0) {
      plVar2 = local_48;
      if (local_98 != (longlong *)0x0) {
        plVar2 = local_98;
      }
      (**(code **)(*plVar2 + 0x10))();
    }
    if (local_40 != (longlong *)0x0) {
      (**(code **)(*local_40 + 0x10))();
    }
    FUN_1498e3d48(&local_68);
  }
  return lVar1 != 0;
}



// FUNCTION 1498dc6c4 Unwind@1498dc6c4 body=74 status=ok
// SIG undefined Unwind@1498dc6c4(void)

void Unwind_1498dc6c4(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  FUN_1498ddd06(param_2 + 0x20);
  if (*(longlong *)(param_2 + 0x70) != 0) {
    plVar1 = *(longlong **)(param_2 + 0xd0);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_2 + 0x80);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  *(undefined1 *)(param_2 + 0xe7) = 0;
  return;
}



// FUNCTION 1498dc70e Unwind@1498dc70e body=59 status=ok
// SIG undefined Unwind@1498dc70e(void)

void Unwind_1498dc70e(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0xe7);
  if (*(longlong *)(param_2 + 0xd8) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0xd8) + 0x10))();
  }
  *(byte *)(param_2 + 0xe6) = bVar1 & 1;
  return;
}



// FUNCTION 1498dc74a Unwind@1498dc74a body=58 status=ok
// SIG undefined Unwind@1498dc74a(void)

void Unwind_1498dc74a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe6) == '\x01') {
    FUN_1498ddd62(param_2 + 0xc0);
  }
  FUN_1498e3d48(param_2 + 0xb0);
  return;
}



// FUNCTION 1498dc784 Unwind@1498dc784 body=27 status=ok
// SIG undefined Unwind@1498dc784(void)

void Unwind_1498dc784(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498dc7a0 Unwind@1498dc7a0 body=27 status=ok
// SIG undefined Unwind@1498dc7a0(void)

void Unwind_1498dc7a0(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498dc7bc FUN_1498dc7bc body=147 status=ok
// SIG undefined FUN_1498dc7bc(void)

undefined8 * FUN_1498dc7bc(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x108));
  plVar1 = *(longlong **)(param_1 + 0x1e0);
  if (plVar1 == (longlong *)0x0) {
    *param_2 = 0;
  }
  else {
    iVar2 = (**(code **)(*plVar1 + 0x40))(plVar1,&DAT_14ab40820);
    uVar3 = 0x7fffffffffffffff;
    if (-1 < iVar2) {
      uVar3 = 0xffffffffffffd8f0;
    }
    *param_2 = uVar3;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x108));
  return param_2;
}



// FUNCTION 1498dc850 Unwind@1498dc850 body=37 status=ok
// SIG undefined Unwind@1498dc850(void)

void Unwind_1498dc850(undefined8 param_1,longlong param_2)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x28));
  return;
}



// FUNCTION 1498dc876 FUN_1498dc876 body=55 status=ok
// SIG undefined FUN_1498dc876(void)

void FUN_1498dc876(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x108));
  *(undefined1 *)(param_1 + 0x160) = 0;
  *(undefined1 *)(param_1 + 0x1f8) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001498dc8a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x108));
  return;
}



// FUNCTION 1498dc8ae FUN_1498dc8ae body=106 status=ok
// SIG undefined FUN_1498dc8ae(void)

/* WARNING: Removing unreachable block (ram,0x0001498dc909) */

void FUN_1498dc8ae(longlong param_1)

{
  undefined4 *puVar1;
  
  FUN_1498dc0bc();
  FUN_14469b198(*(undefined8 *)(param_1 + 0x38));
  for (puVar1 = (undefined4 *)0x0; puVar1 != (undefined4 *)0x0; puVar1 = puVar1 + 1) {
    (**(code **)**(undefined8 **)(param_1 + 0x20))(*(undefined8 **)(param_1 + 0x20),*puVar1);
  }
  return;
}



// FUNCTION 1498dc918 Unwind@1498dc918 body=41 status=ok
// SIG undefined Unwind@1498dc918(void)

void Unwind_1498dc918(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 1498dc95a FUN_1498dc95a body=272 status=ok
// SIG undefined FUN_1498dc95a(void)

undefined8 * FUN_1498dc95a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_14bef4dc0;
  param_1[1] = &PTR_FUN_14bef4ee0;
  uVar1 = FUN_14001cc68(0x10,0x10);
  FUN_1498e6f76(uVar1);
  param_1[2] = uVar1;
  FUN_1498dca6a(param_1 + 3);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  FUN_1498dcad4(param_1 + 0x12);
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x21));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x21),4000);
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  FUN_1498dcb3e(param_1 + 0x2d);
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 500) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x3f) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  FUN_1498dcba8(param_1 + 0x43);
  param_1[0x54] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined8 *)((longlong)param_1 + 0x28c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x294) = 0;
  return param_1;
}



// FUNCTION 1498dca6a FUN_1498dca6a body=105 status=ok
// SIG undefined FUN_1498dca6a(void)

undefined8 * FUN_1498dca6a(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 2;
  *param_1 = &PTR_FUN_14bef8600;
  param_1[4] = &PTR_FUN_14bef8630;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 5),4000);
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0xffffffff;
  return param_1;
}



// FUNCTION 1498dcad4 FUN_1498dcad4 body=105 status=ok
// SIG undefined FUN_1498dcad4(void)

undefined8 * FUN_1498dcad4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 2;
  *param_1 = &PTR_FUN_14a58a7c0;
  param_1[4] = &PTR_FUN_14a58a7f0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 5),4000);
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0xffffffff;
  return param_1;
}



// FUNCTION 1498dcb3e FUN_1498dcb3e body=105 status=ok
// SIG undefined FUN_1498dcb3e(void)

undefined8 * FUN_1498dcb3e(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 2;
  *param_1 = &PTR_FUN_14a58a850;
  param_1[4] = &PTR_FUN_14a58a880;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 5),4000);
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0xffffffff;
  return param_1;
}



// FUNCTION 1498dcba8 FUN_1498dcba8 body=105 status=ok
// SIG undefined FUN_1498dcba8(void)

undefined8 * FUN_1498dcba8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 2;
  *param_1 = &PTR_FUN_14a58a8e0;
  param_1[4] = &PTR_FUN_14a58a910;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 5),4000);
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0xffffffff;
  return param_1;
}



// FUNCTION 1498dcc12 FUN_1498dcc12 body=44 status=ok
// SIG undefined FUN_1498dcc12(void)

void FUN_1498dcc12(longlong *param_1)

{
  FUN_1498e8da2(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1498dcc3e FUN_1498dcc3e body=65 status=ok
// SIG undefined FUN_1498dcc3e(void)

void FUN_1498dcc3e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return;
}



// FUNCTION 1498dcc80 Unwind@1498dcc80 body=20 status=ok
// SIG undefined Unwind@1498dcc80(void)

void Unwind_1498dcc80(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498dcc96 FUN_1498dcc96 body=75 status=ok
// SIG undefined FUN_1498dcc96(void)

void FUN_1498dcc96(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bef8600;
  param_1[4] = &PTR_FUN_14bef8630;
  FUN_1498e8d76(param_1 + 10);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  *param_1 = &PTR__purecall_14a58a6f0;
  FUN_146771278(param_1 + 1);
  return;
}



// FUNCTION 1498dcce2 FUN_1498dcce2 body=337 status=ok
// SIG undefined FUN_1498dcce2(void)

void FUN_1498dcce2(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14bef4dc0;
  param_1[1] = &PTR_FUN_14bef4ee0;
  FUN_144699c24();
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    FUN_1498e728c(lVar1);
    FUN_1400020a8(lVar1);
  }
  param_1[2] = 0;
  lVar1 = param_1[0x40];
  if (lVar1 != 0) {
    FUN_1498e72e4(lVar1);
    FUN_1400020a8(lVar1);
  }
  param_1[0x40] = 0;
  FUN_1498dcc12(param_1 + 0x50);
  FUN_147805aa0(param_1 + 0x43);
  FUN_1498dcc3e(param_1 + 0x41);
  if ((longlong *)param_1[0x3c] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x3c] + 0x10))();
  }
  FUN_1498dcc12(param_1 + 0x3a);
  FUN_147805b84(param_1 + 0x2d);
  if ((longlong *)param_1[0x2b] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x2b] + 0x10))();
  }
  if ((longlong *)param_1[0x2a] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x2a] + 0x10))();
  }
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x21));
  FUN_1498dcc12(param_1 + 0x1f);
  FUN_147805b12(param_1 + 0x12);
  FUN_1498dcc12(param_1 + 0x10);
  FUN_1498dcc96(param_1 + 3);
  return;
}



// FUNCTION 1498dce34 Unwind@1498dce34 body=21 status=ok
// SIG undefined Unwind@1498dce34(void)

void Unwind_1498dce34(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498dce4a Unwind@1498dce4a body=21 status=ok
// SIG undefined Unwind@1498dce4a(void)

void Unwind_1498dce4a(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498dce60 Unwind@1498dce60 body=21 status=ok
// SIG undefined Unwind@1498dce60(void)

void Unwind_1498dce60(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498dce76 Unwind@1498dce76 body=21 status=ok
// SIG undefined Unwind@1498dce76(void)

void Unwind_1498dce76(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498dce8c FUN_1498dce8c body=92 status=ok
// SIG undefined FUN_1498dce8c(void)

void FUN_1498dce8c(longlong param_1,float param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x108));
  *(int *)(param_1 + 0x2ac) = *(int *)(param_1 + 0x2ac) + (-(uint)(param_2 < 0.0) | 1);
  if (*(longlong *)(param_1 + 0x158) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x158) + 0xf0) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001498dcee1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x108));
  return;
}



// FUNCTION 1498dcee8 FUN_1498dcee8 body=306 status=ok
// SIG undefined FUN_1498dcee8(void)

void FUN_1498dcee8(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x18);
  EnterCriticalSection(lpCriticalSection);
  piVar1 = (int *)(param_1 + 0xa0);
  *piVar1 = *piVar1 - *(int *)(param_1 + 0xa4);
  *(undefined4 *)(param_1 + 0xa4) = 0;
  if ((*piVar1 == 0) && (*(longlong *)(param_1 + 0xb0) != 0)) {
    pcVar2 = *(code **)(param_1 + 0xb0);
    plVar3 = *(longlong **)(param_1 + 0xc0);
    lVar4 = *(longlong *)(param_1 + 0xd0);
    uVar7 = *(undefined8 *)(param_1 + 0xd8);
    uVar5 = *(undefined8 *)(param_1 + 0xe0);
    uVar6 = *(undefined8 *)(param_1 + 0xe8);
    *(undefined4 *)(param_1 + 0xe0) = (undefined4)local_58;
    *(undefined4 *)(param_1 + 0xe4) = local_58._4_4_;
    *(undefined4 *)(param_1 + 0xe8) = (undefined4)uStack_50;
    *(undefined4 *)(param_1 + 0xec) = uStack_50._4_4_;
    *(undefined4 *)(param_1 + 0xd0) = (undefined4)local_68;
    *(undefined4 *)(param_1 + 0xd4) = local_68._4_4_;
    *(undefined4 *)(param_1 + 0xd8) = (undefined4)uStack_60;
    *(undefined4 *)(param_1 + 0xdc) = uStack_60._4_4_;
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined4 *)(param_1 + 0xc4) = 0;
    *(undefined4 *)(param_1 + 200) = uStack_70;
    *(undefined4 *)(param_1 + 0xcc) = uStack_6c;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined4 *)(param_1 + 0xb4) = 0;
    *(undefined4 *)(param_1 + 0xb8) = uStack_80;
    *(undefined4 *)(param_1 + 0xbc) = uStack_7c;
    local_68 = lVar4;
    uStack_60 = uVar7;
    local_58 = uVar5;
    uStack_50 = uVar6;
    LeaveCriticalSection(lpCriticalSection);
    if (pcVar2 != (code *)0x0) {
      plVar8 = plVar3;
      if (plVar3 == (longlong *)0x0) {
        plVar8 = &local_68;
      }
      uVar7 = (**(code **)(*plVar8 + 8))();
      (*pcVar2)(uVar7);
      if (pcVar2 != (code *)0x0) {
        plVar8 = &local_68;
        if (plVar3 != (longlong *)0x0) {
          plVar8 = plVar3;
        }
        (**(code **)(*plVar8 + 0x10))();
      }
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001498dd013. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 1498dd01a Unwind@1498dd01a body=75 status=ok
// SIG undefined Unwind@1498dd01a(void)

void Unwind_1498dd01a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_2 + 0x60) != 0) {
    plVar1 = (longlong *)(param_2 + 0x80);
    if (*(longlong **)(param_2 + 0x70) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_2 + 0x70);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}



// FUNCTION 1498dd066 Unwind@1498dd066 body=34 status=ok
// SIG undefined Unwind@1498dd066(void)

void Unwind_1498dd066(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498dd08a FUN_1498dd08a body=188 status=ok
// SIG undefined FUN_1498dd08a(void)

void FUN_1498dd08a(longlong param_1)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  if (((*(longlong *)(param_1 + 0xb0) == 0) && (*(longlong *)(param_1 + 0x40) != 0)) &&
     (*(char *)(param_1 + 0xf3) == '\0')) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x98) + 8))();
    if ((iVar1 + *(int *)(param_1 + 0xa0) < 6) &&
       ((*(char *)(param_1 + 0xf2) != '\x01' ||
        ((*(int *)(param_1 + 0xa0) == 0 && (*(char *)(param_1 + 0xf1) != '\0')))))) {
      (**(code **)(*(longlong *)(param_1 + 0x10) + 0x30))(param_1 + 0x10,0x131,&DAT_1499d7700,0,0);
      *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001498dd0c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  return;
}



// FUNCTION 1498dd146 Unwind@1498dd146 body=35 status=ok
// SIG undefined Unwind@1498dd146(void)

void Unwind_1498dd146(undefined8 param_1,longlong param_2)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x30));
  return;
}



// FUNCTION 1498dd16a FUN_1498dd16a body=177 status=ok
// SIG undefined FUN_1498dd16a(void)

ulonglong FUN_1498dd16a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  iVar1 = *(int *)(param_1 + 0x14);
  puVar17 = param_1;
  if ((iVar1 != 0) && (param_1[0x16] == 0)) {
    puVar17 = param_1 + 0x16;
    uVar2 = *puVar17;
    uVar3 = param_1[0x17];
    uVar4 = param_1[0x18];
    uVar5 = param_1[0x19];
    uVar6 = param_1[0x1a];
    uVar7 = param_1[0x1b];
    uVar8 = param_1[0x1c];
    uVar9 = param_1[0x1d];
    uVar10 = *param_2;
    uVar11 = param_2[1];
    uVar12 = param_2[2];
    uVar13 = param_2[3];
    uVar14 = param_2[4];
    uVar15 = param_2[5];
    uVar16 = param_2[7];
    param_1[0x1c] = param_2[6];
    param_1[0x1d] = uVar16;
    param_1[0x1a] = uVar14;
    param_1[0x1b] = uVar15;
    param_1[0x18] = uVar12;
    param_1[0x19] = uVar13;
    *puVar17 = uVar10;
    param_1[0x17] = uVar11;
    local_58 = (undefined4)uVar2;
    uStack_54 = (undefined4)((ulonglong)uVar2 >> 0x20);
    uStack_50 = (undefined4)uVar3;
    uStack_4c = (undefined4)((ulonglong)uVar3 >> 0x20);
    param_2[6] = uVar8;
    param_2[7] = uVar9;
    param_2[4] = uVar6;
    param_2[5] = uVar7;
    param_2[2] = uVar4;
    param_2[3] = uVar5;
    *(undefined4 *)param_2 = local_58;
    *(undefined4 *)((longlong)param_2 + 4) = uStack_54;
    *(undefined4 *)(param_2 + 1) = uStack_50;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_4c;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return CONCAT71((int7)((ulonglong)puVar17 >> 8),iVar1 != 0) & 0xffffffff;
}



// FUNCTION 1498dd21c FUN_1498dd21c body=247 status=ok
// SIG undefined FUN_1498dd21c(void)

ulonglong FUN_1498dd21c(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  char cVar4;
  ulonglong uVar5;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  longlong *local_48;
  longlong lStack_40;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_48 = (longlong *)0x0;
  lStack_40 = 0;
  cVar4 = FUN_1498dd340(param_1 + 0x38);
  plVar3 = local_48;
  if (cVar4 != '\0') {
    (**(code **)(*local_48 + 0x30))(local_48,local_68);
    (**(code **)(*plVar3 + 0x10))(plVar3,&local_58);
    cVar4 = FUN_147805044(param_2);
    if (cVar4 != '\0') {
      cVar4 = FUN_1498dd3e0(param_1 + 0x38,&local_48);
      if (cVar4 != '\0') {
        if (lStack_40 != 0) {
          LOCK();
          *(int *)(lStack_40 + 8) = *(int *)(lStack_40 + 8) + 1;
          UNLOCK();
        }
        local_58._0_4_ = SUB84(local_48,0);
        local_58._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
        uStack_50._0_4_ = (undefined4)lStack_40;
        uStack_50._4_4_ = (undefined4)((ulonglong)lStack_40 >> 0x20);
        uVar1 = *param_3;
        uVar2 = param_3[1];
        *(undefined4 *)param_3 = (undefined4)local_58;
        *(undefined4 *)((longlong)param_3 + 4) = local_58._4_4_;
        *(undefined4 *)(param_3 + 1) = (undefined4)uStack_50;
        *(undefined4 *)((longlong)param_3 + 0xc) = uStack_50._4_4_;
        local_58 = uVar1;
        uStack_50 = uVar2;
        FUN_1498dd4da();
        uVar5 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
        goto LAB_1498dd2fa;
      }
    }
  }
  uVar5 = 0;
LAB_1498dd2fa:
  FUN_1498dd4da(&local_48);
  return uVar5 & 0xffffffff;
}



// FUNCTION 1498dd314 Unwind@1498dd314 body=43 status=ok
// SIG undefined Unwind@1498dd314(void)

void Unwind_1498dd314(undefined8 param_1,longlong param_2)

{
  FUN_1498dd4da(param_2 + 0x70);
  return;
}



// FUNCTION 1498dd340 FUN_1498dd340 body=159 status=ok
// SIG undefined FUN_1498dd340(void)

ulonglong FUN_1498dd340(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if (*(int *)(param_1 + 0x38) == 0) {
    uVar3 = 0;
  }
  else {
    local_48 = **(longlong **)(param_1 + 0x30);
    local_40 = (*(longlong **)(param_1 + 0x30))[1];
    if (local_40 != 0) {
      LOCK();
      *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
      UNLOCK();
    }
    uVar3 = CONCAT71((int7)((ulonglong)param_1 >> 8),local_48 != 0);
    if (local_48 != 0) {
      if (local_40 != 0) {
        LOCK();
        *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
        UNLOCK();
      }
      local_38._0_4_ = (undefined4)local_48;
      local_38._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
      uStack_30._0_4_ = (undefined4)local_40;
      uStack_30._4_4_ = (undefined4)((ulonglong)local_40 >> 0x20);
      local_28 = (undefined4)local_38;
      uStack_24 = local_38._4_4_;
      uStack_20 = (undefined4)uStack_30;
      uStack_1c = uStack_30._4_4_;
      uVar1 = *param_2;
      uVar2 = param_2[1];
      *(undefined4 *)param_2 = (undefined4)local_38;
      *(undefined4 *)((longlong)param_2 + 4) = local_38._4_4_;
      *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_30._4_4_;
      local_38 = uVar1;
      uStack_30 = uVar2;
      FUN_1498dd4da();
    }
    FUN_1498dd4da(&local_48);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return uVar3 & 0xffffffff;
}



// FUNCTION 1498dd3e0 FUN_1498dd3e0 body=196 status=ok
// SIG undefined FUN_1498dd3e0(void)

ulonglong FUN_1498dd3e0(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 unaff_RDI;
  ulonglong uVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_50;
  longlong local_48;
  LPCRITICAL_SECTION local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 8);
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 0x38) == 0) {
    uVar3 = 0;
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x30);
    lVar2 = *plVar1;
    local_48 = plVar1[1];
    if (local_48 != 0) {
      LOCK();
      *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
      UNLOCK();
    }
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar2 != 0);
    local_50 = lVar2;
    if (lVar2 != 0) {
      local_40 = lpCriticalSection;
      FUN_1498e8d30((longlong *)(param_1 + 0x30));
      if (local_48 != 0) {
        LOCK();
        *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
        UNLOCK();
      }
      local_68 = (undefined4)lVar2;
      uStack_64 = (undefined4)((ulonglong)lVar2 >> 0x20);
      uStack_60 = (undefined4)local_48;
      uStack_5c = (undefined4)((ulonglong)local_48 >> 0x20);
      *param_2 = local_68;
      param_2[1] = uStack_64;
      param_2[2] = uStack_60;
      param_2[3] = uStack_5c;
      FUN_1498dd4da();
      lpCriticalSection = local_40;
    }
    FUN_1498dd4da(&local_50);
  }
  LeaveCriticalSection(lpCriticalSection);
  return uVar3 & 0xffffffff;
}



// FUNCTION 1498dd4a4 Unwind@1498dd4a4 body=54 status=ok
// SIG undefined Unwind@1498dd4a4(void)

void Unwind_1498dd4a4(undefined8 param_1,longlong param_2)

{
  FUN_1498dd4da(param_2 + 0x48);
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x58));
  return;
}



// FUNCTION 1498dd4da FUN_1498dd4da body=65 status=ok
// SIG undefined FUN_1498dd4da(void)

void FUN_1498dd4da(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return;
}



// FUNCTION 1498dd51c Unwind@1498dd51c body=20 status=ok
// SIG undefined Unwind@1498dd51c(void)

void Unwind_1498dd51c(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498dd532 FUN_1498dd532 body=243 status=ok
// SIG undefined FUN_1498dd532(void)

ulonglong FUN_1498dd532(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  longlong *local_38;
  longlong lStack_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_38 = (longlong *)0x0;
  lStack_30 = 0;
  cVar3 = FUN_147809e24(param_1 + 0xb0);
  if (cVar3 != '\0') {
    (**(code **)(*local_38 + 0x18))(local_38,local_58);
    (**(code **)*local_38)(local_38,&local_48);
    cVar3 = FUN_147805044(param_2);
    if (cVar3 != '\0') {
      cVar3 = FUN_147809d50(param_1 + 0xb0,&local_38);
      if (cVar3 != '\0') {
        if (lStack_30 != 0) {
          LOCK();
          *(int *)(lStack_30 + 8) = *(int *)(lStack_30 + 8) + 1;
          UNLOCK();
        }
        local_48._0_4_ = SUB84(local_38,0);
        local_48._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
        uStack_40._0_4_ = (undefined4)lStack_30;
        uStack_40._4_4_ = (undefined4)((ulonglong)lStack_30 >> 0x20);
        uVar1 = *param_3;
        uVar2 = param_3[1];
        *(undefined4 *)param_3 = (undefined4)local_48;
        *(undefined4 *)((longlong)param_3 + 4) = local_48._4_4_;
        *(undefined4 *)(param_3 + 1) = (undefined4)uStack_40;
        *(undefined4 *)((longlong)param_3 + 0xc) = uStack_40._4_4_;
        local_48 = uVar1;
        uStack_40 = uVar2;
        FUN_1498dd64e();
        uVar4 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
        goto LAB_1498dd60e;
      }
    }
  }
  uVar4 = 0;
LAB_1498dd60e:
  FUN_1498dd64e(&local_38);
  return uVar4 & 0xffffffff;
}



// FUNCTION 1498dd626 Unwind@1498dd626 body=39 status=ok
// SIG undefined Unwind@1498dd626(void)

void Unwind_1498dd626(undefined8 param_1,longlong param_2)

{
  FUN_1498dd64e(param_2 + 0x70);
  return;
}



// FUNCTION 1498dd64e FUN_1498dd64e body=65 status=ok
// SIG undefined FUN_1498dd64e(void)

void FUN_1498dd64e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return;
}



// FUNCTION 1498dd690 Unwind@1498dd690 body=20 status=ok
// SIG undefined Unwind@1498dd690(void)

void Unwind_1498dd690(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498dd6a6 FUN_1498dd6a6 body=244 status=ok
// SIG undefined FUN_1498dd6a6(void)

ulonglong FUN_1498dd6a6(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  longlong *local_38;
  longlong lStack_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_38 = (longlong *)0x0;
  lStack_30 = 0;
  cVar3 = FUN_14780a534(param_1 + 0x188);
  if (cVar3 != '\0') {
    (**(code **)(*local_38 + 0x18))(local_38,local_58);
    (**(code **)(*local_38 + 8))(local_38,&local_48);
    cVar3 = FUN_147805044(param_2);
    if (cVar3 != '\0') {
      cVar3 = FUN_14780a460(param_1 + 0x188,&local_38);
      if (cVar3 != '\0') {
        if (lStack_30 != 0) {
          LOCK();
          *(int *)(lStack_30 + 8) = *(int *)(lStack_30 + 8) + 1;
          UNLOCK();
        }
        local_48._0_4_ = SUB84(local_38,0);
        local_48._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
        uStack_40._0_4_ = (undefined4)lStack_30;
        uStack_40._4_4_ = (undefined4)((ulonglong)lStack_30 >> 0x20);
        uVar1 = *param_3;
        uVar2 = param_3[1];
        *(undefined4 *)param_3 = (undefined4)local_48;
        *(undefined4 *)((longlong)param_3 + 4) = local_48._4_4_;
        *(undefined4 *)(param_3 + 1) = (undefined4)uStack_40;
        *(undefined4 *)((longlong)param_3 + 0xc) = uStack_40._4_4_;
        local_48 = uVar1;
        uStack_40 = uVar2;
        FUN_1498dd7c2();
        uVar4 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
        goto LAB_1498dd783;
      }
    }
  }
  uVar4 = 0;
LAB_1498dd783:
  FUN_1498dd7c2(&local_38);
  return uVar4 & 0xffffffff;
}



// FUNCTION 1498dd79a Unwind@1498dd79a body=39 status=ok
// SIG undefined Unwind@1498dd79a(void)

void Unwind_1498dd79a(undefined8 param_1,longlong param_2)

{
  FUN_1498dd7c2(param_2 + 0x70);
  return;
}



// FUNCTION 1498dd7c2 FUN_1498dd7c2 body=65 status=ok
// SIG undefined FUN_1498dd7c2(void)

void FUN_1498dd7c2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return;
}



// FUNCTION 1498dd804 Unwind@1498dd804 body=20 status=ok
// SIG undefined Unwind@1498dd804(void)

void Unwind_1498dd804(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498dd81a FUN_1498dd81a body=260 status=ok
// SIG undefined FUN_1498dd81a(void)

ulonglong FUN_1498dd81a(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  longlong *local_48;
  longlong lStack_40;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_48 = (longlong *)0x0;
  lStack_40 = 0;
  cVar3 = FUN_14780ac48(param_1 + 0x238);
  if (cVar3 != '\0') {
    (**(code **)(*local_48 + 0x60))(local_48,local_68);
    (**(code **)(*local_48 + 0x20))(local_48,&local_58);
    cVar3 = FUN_147805044(param_2);
    if (cVar3 != '\0') {
      FUN_1498dd94a(*(undefined8 *)(param_1 + 0x2a0));
      cVar3 = FUN_14780ab72(param_1 + 0x238,&local_48);
      if (cVar3 != '\0') {
        if (lStack_40 != 0) {
          LOCK();
          *(int *)(lStack_40 + 8) = *(int *)(lStack_40 + 8) + 1;
          UNLOCK();
        }
        local_58._0_4_ = SUB84(local_48,0);
        local_58._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
        uStack_50._0_4_ = (undefined4)lStack_40;
        uStack_50._4_4_ = (undefined4)((ulonglong)lStack_40 >> 0x20);
        uVar1 = *param_3;
        uVar2 = param_3[1];
        *(undefined4 *)param_3 = (undefined4)local_58;
        *(undefined4 *)((longlong)param_3 + 4) = local_58._4_4_;
        *(undefined4 *)(param_3 + 1) = (undefined4)uStack_50;
        *(undefined4 *)((longlong)param_3 + 0xc) = uStack_50._4_4_;
        local_58 = uVar1;
        uStack_50 = uVar2;
        FUN_1498dda58();
        uVar4 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
        goto LAB_1498dd905;
      }
    }
  }
  uVar4 = 0;
LAB_1498dd905:
  FUN_1498dda58(&local_48);
  return uVar4 & 0xffffffff;
}



// FUNCTION 1498dd91e Unwind@1498dd91e body=43 status=ok
// SIG undefined Unwind@1498dd91e(void)

void Unwind_1498dd91e(undefined8 param_1,longlong param_2)

{
  FUN_1498dda58(param_2 + 0x70);
  return;
}



// FUNCTION 1498dd94a FUN_1498dd94a body=178 status=ok
// SIG undefined FUN_1498dd94a(void)

void FUN_1498dd94a(undefined8 param_1)

{
  undefined ***pppuVar1;
  code *local_c8 [2];
  undefined8 local_b8;
  undefined **local_a8;
  undefined8 local_a0;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined ***local_58;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_78 = 0;
  uStack_70 = 0;
  local_48 = &PTR_LAB_14bef8d90;
  local_c8[0] = FUN_1446a8d04;
  local_b8 = 0;
  local_58 = (undefined ***)0x0;
  local_a8 = &PTR_LAB_14bef8d90;
  local_68 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_a0 = param_1;
  local_40 = param_1;
  FUN_1498ddd62();
  FUN_1498ddbc6(param_1,local_c8);
  FUN_1498ddd06(local_c8);
  if (local_68 != 0) {
    pppuVar1 = &local_48;
    if (local_58 != (undefined ***)0x0) {
      pppuVar1 = local_58;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return;
}



// FUNCTION 1498dd9fc Unwind@1498dd9fc body=65 status=ok
// SIG undefined Unwind@1498dd9fc(void)

void Unwind_1498dd9fc(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  FUN_1498ddd06(param_2 + 0x20);
  if (*(longlong *)(param_2 + 0x80) != 0) {
    plVar1 = (longlong *)(param_2 + 0xa0);
    if (*(longlong **)(param_2 + 0x90) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_2 + 0x90);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}



// FUNCTION 1498dda3e Unwind@1498dda3e body=24 status=ok
// SIG undefined Unwind@1498dda3e(void)

void Unwind_1498dda3e(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498dda58 FUN_1498dda58 body=65 status=ok
// SIG undefined FUN_1498dda58(void)

void FUN_1498dda58(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return;
}



// FUNCTION 1498dda9a Unwind@1498dda9a body=20 status=ok
// SIG undefined Unwind@1498dda9a(void)

void Unwind_1498dda9a(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498ddab0 FUN_1498ddab0 body=185 status=ok
// SIG undefined FUN_1498ddab0(void)

void FUN_1498ddab0(longlong param_1)

{
  undefined8 uVar1;
  undefined ***pppuVar2;
  code *local_c8 [2];
  undefined8 local_b8;
  undefined **local_a8;
  longlong local_a0;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar1 = *(undefined8 *)(param_1 + 0x2a0);
  local_78 = 0;
  uStack_70 = 0;
  local_48 = &PTR_LAB_14bef87d0;
  local_c8[0] = FUN_1446a7ad6;
  local_b8 = 0;
  local_58 = (undefined ***)0x0;
  local_a8 = &PTR_LAB_14bef87d0;
  local_68 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_a0 = param_1;
  local_40 = param_1;
  FUN_1498ddd62(&local_78);
  FUN_1498ddbc6(uVar1,local_c8);
  FUN_1498ddd06(local_c8);
  if (local_68 != 0) {
    pppuVar2 = &local_48;
    if (local_58 != (undefined ***)0x0) {
      pppuVar2 = local_58;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  return;
}



// FUNCTION 1498ddb6a Unwind@1498ddb6a body=65 status=ok
// SIG undefined Unwind@1498ddb6a(void)

void Unwind_1498ddb6a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  FUN_1498ddd06(param_2 + 0x20);
  if (*(longlong *)(param_2 + 0x80) != 0) {
    plVar1 = (longlong *)(param_2 + 0xa0);
    if (*(longlong **)(param_2 + 0x90) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_2 + 0x90);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}



// FUNCTION 1498ddbac Unwind@1498ddbac body=24 status=ok
// SIG undefined Unwind@1498ddbac(void)

void Unwind_1498ddbac(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498ddbc6 FUN_1498ddbc6 body=278 status=ok
// SIG undefined FUN_1498ddbc6(void)

void FUN_1498ddbc6(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 local_40;
  LPCRITICAL_SECTION local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_38 = (LPCRITICAL_SECTION)(param_1 + 0x18);
  EnterCriticalSection(local_38);
  if (*(longlong *)(param_1 + 0x120) == 0) {
    local_40 = 0;
    iVar6 = FUN_1498e3894(param_2,&local_40,0,0,param_2[8]);
    if (iVar6 == 1) {
      FUN_1498e3942(param_1 + 0x120,param_2);
    }
  }
  else {
    iVar6 = *(int *)(param_1 + 0x110);
    *(uint *)(param_1 + 0x110) = iVar6 + 1U;
    if (*(uint *)(param_1 + 0x114) < iVar6 + 1U) {
      FUN_1498eb092((longlong *)(param_1 + 0x108),iVar6);
    }
    lVar2 = *(longlong *)(param_1 + 0x108);
    lVar7 = (longlong)iVar6 * 0x50;
    *(undefined8 *)(lVar2 + lVar7) = *param_2;
    *(undefined8 *)(lVar2 + 0x10 + lVar7) = param_2[2];
    param_2[2] = 0;
    uVar3 = param_2[4];
    uVar4 = param_2[5];
    uVar5 = param_2[7];
    puVar1 = (undefined8 *)(lVar2 + 0x30 + lVar7);
    *puVar1 = param_2[6];
    puVar1[1] = uVar5;
    puVar1 = (undefined8 *)(lVar2 + 0x20 + lVar7);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    if (*(longlong *)(lVar2 + lVar7) != 0) {
      *param_2 = 0;
    }
    *(undefined8 *)(lVar2 + lVar7 + 0x40) = param_2[8];
    *(undefined8 *)(lVar2 + lVar7 + 0x48) = param_2[9];
    param_2[8] = 0;
    param_2[9] = 0;
  }
  LeaveCriticalSection(local_38);
  return;
}



// FUNCTION 1498ddcdc Unwind@1498ddcdc body=41 status=ok
// SIG undefined Unwind@1498ddcdc(void)

void Unwind_1498ddcdc(undefined8 param_1,longlong param_2)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x30));
  return;
}



// FUNCTION 1498ddd06 FUN_1498ddd06 body=69 status=ok
// SIG undefined FUN_1498ddd06(void)

void FUN_1498ddd06(longlong *param_1)

{
  longlong *plVar1;
  
  FUN_1498ddd62(param_1 + 8);
  if (*param_1 != 0) {
    plVar1 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return;
}



// FUNCTION 1498ddd4c Unwind@1498ddd4c body=20 status=ok
// SIG undefined Unwind@1498ddd4c(void)

void Unwind_1498ddd4c(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498ddd62 FUN_1498ddd62 body=65 status=ok
// SIG undefined FUN_1498ddd62(void)

void FUN_1498ddd62(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return;
}



// FUNCTION 1498ddda4 Unwind@1498ddda4 body=20 status=ok
// SIG undefined Unwind@1498ddda4(void)

void Unwind_1498ddda4(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498dddba FUN_1498dddba body=67 status=ok
// SIG undefined FUN_1498dddba(void)

char FUN_1498dddba(longlong param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_147806b48(param_1 + 0x218);
  cVar1 = '\0';
  if (iVar2 != 0) {
    cVar1 = (iVar2 != 1) + '\x01';
  }
  FUN_1498dd94a(*(undefined8 *)(param_1 + 0x2a0));
  return cVar1;
}



// FUNCTION 1498dddfe FUN_1498dddfe body=108 status=ok
// SIG undefined FUN_1498dddfe(void)

ulonglong FUN_1498dddfe(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  undefined8 unaff_RBX;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_38 = (longlong *)0x0;
  uStack_30 = 0;
  cVar1 = FUN_14780ac48(param_1 + 0x238);
  FUN_1498dd94a(*(undefined8 *)(param_1 + 0x2a0));
  if (cVar1 != '\0') {
    (**(code **)(*local_38 + 0x60))(local_38,&local_48);
    *param_2 = local_48;
    param_2[1] = uStack_44;
    param_2[2] = uStack_40;
    param_2[3] = uStack_3c;
  }
  FUN_1498dda58(&local_38);
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),cVar1) & 0xffffffff;
}



// FUNCTION 1498dde6a Unwind@1498dde6a body=36 status=ok
// SIG undefined Unwind@1498dde6a(void)

void Unwind_1498dde6a(undefined8 param_1,longlong param_2)

{
  FUN_1498dda58(param_2 + 0x30);
  return;
}



// FUNCTION 1498ddea4 FUN_1498ddea4 body=147 status=ok
// SIG undefined FUN_1498ddea4(void)

ulonglong FUN_1498ddea4(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 unaff_RBX;
  undefined7 uVar1;
  undefined1 local_3c [4];
  LPCRITICAL_SECTION local_38;
  int local_30;
  int local_2c [3];
  
  local_2c[1] = -2;
  local_2c[2] = -1;
  uVar1 = (undefined7)((ulonglong)unaff_RBX >> 8);
  local_38 = (LPCRITICAL_SECTION)(param_1 + 0x28);
  EnterCriticalSection(local_38);
  FUN_1498e9270(param_1,param_2,CONCAT71(uVar1,param_3) & 0xffffffff,&local_30,local_2c,local_3c);
  if ((-1 < local_30) && (local_2c[0] - local_30 != -1)) {
    FUN_14780bad8(param_1 + 0x50,local_30);
    FUN_147808b06(param_1 + 0x50);
  }
  LeaveCriticalSection(local_38);
  return CONCAT71(uVar1,-1 < local_30) & 0xffffffff;
}



// FUNCTION 1498ddf38 Unwind@1498ddf38 body=37 status=ok
// SIG undefined Unwind@1498ddf38(void)

void Unwind_1498ddf38(undefined8 param_1,longlong param_2)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x40));
  return;
}



// FUNCTION 1498ddf76 FUN_1498ddf76 body=168 status=ok
// SIG undefined FUN_1498ddf76(void)

undefined8 FUN_1498ddf76(longlong param_1,uint param_2,uint param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
  if (((((int)param_2 < 0) || (*(int *)(param_1 + 0x80) <= (int)param_2)) || ((int)param_3 < 0)) ||
     ((lVar1 = *(longlong *)(param_1 + 0x78) + (ulonglong)param_2 * 0x60,
      *(int *)(lVar1 + 0x20) <= (int)param_3 ||
      (lVar1 = (ulonglong)param_3 * 0x70 + *(longlong *)(lVar1 + 0x18), lVar1 == 0)))) {
    uVar2 = 0;
  }
  else {
    *param_4 = *(undefined4 *)(lVar1 + 0x20);
    param_4[1] = *(undefined4 *)(lVar1 + 0x24);
    param_4[2] = *(undefined4 *)(lVar1 + 0x28);
    uVar2 = CONCAT71((uint7)(uint3)(param_3 >> 8),1);
    FUN_144a787a6(param_4 + 4,lVar1 + 0x10);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
  return uVar2;
}



// FUNCTION 1498de01e Unwind@1498de01e body=41 status=ok
// SIG undefined Unwind@1498de01e(void)

void Unwind_1498de01e(undefined8 param_1,longlong param_2)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x20));
  return;
}



// FUNCTION 1498de048 FUN_1498de048 body=82 status=ok
// SIG undefined FUN_1498de048(void)

undefined4 FUN_1498de048(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
  uVar1 = 0;
  if ((param_2 < 7) && (uVar1 = 0, (0x47U >> (param_2 & 0x1f) & 1) != 0)) {
    uVar1 = *(undefined4 *)(param_1 + *(longlong *)(&DAT_14bef8e48 + (ulonglong)param_2 * 8));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
  return uVar1;
}



// FUNCTION 1498de09a FUN_1498de09a body=182 status=ok
// SIG undefined FUN_1498de09a(void)

undefined4 FUN_1498de09a(longlong param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
  uVar1 = 0;
  switch(param_2) {
  case 0:
    if ((int)param_3 < 0) goto switchD_1498de0d3_caseD_3;
    if (*(int *)(param_1 + 0x80) <= (int)param_3) goto LAB_1498de0ec;
    plVar2 = (longlong *)(param_1 + 0x78);
    goto LAB_1498de129;
  case 1:
    if ((int)param_3 < 0) goto switchD_1498de0d3_caseD_3;
    break;
  case 2:
    if ((int)param_3 < 0) goto switchD_1498de0d3_caseD_3;
LAB_1498de0ec:
    uVar1 = 1;
    if ((int)param_3 < *(int *)(param_1 + 0x1d0)) goto switchD_1498de0d3_caseD_3;
    break;
  default:
    goto switchD_1498de0d3_caseD_3;
  case 6:
    if ((int)param_3 < 0) goto switchD_1498de0d3_caseD_3;
    goto LAB_1498de114;
  }
  uVar1 = 1;
  if (*(int *)(param_1 + 0xf8) <= (int)param_3) {
LAB_1498de114:
    uVar1 = 0;
    if ((int)param_3 < *(int *)(param_1 + 0x280)) {
      plVar2 = (longlong *)(param_1 + 0x278);
LAB_1498de129:
      uVar1 = *(undefined4 *)(*plVar2 + 0x20 + (ulonglong)param_3 * 0x60);
    }
  }
switchD_1498de0d3_caseD_3:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
  return uVar1;
}



// FUNCTION 1498de188 FUN_1498de188 body=394 status=ok
// SIG undefined FUN_1498de188(void)

longlong * FUN_1498de188(longlong param_1,longlong *param_2,undefined4 param_3,uint param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
  switch(param_3) {
  case 0:
    if ((-1 < (int)param_4) && ((int)param_4 < *(int *)(param_1 + 0x80))) {
      plVar2 = (longlong *)(*(longlong *)(param_1 + 0x78) + (ulonglong)param_4 * 0x60 + 8);
      plVar1 = (longlong *)*plVar2;
      *param_2 = (longlong)plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      goto LAB_1498de2f2;
    }
    break;
  case 1:
    if ((-1 < (int)param_4) && ((int)param_4 < *(int *)(param_1 + 0xf8))) {
      plVar2 = (longlong *)(*(longlong *)(param_1 + 0xf0) + (ulonglong)param_4 * 0x60 + 8);
      plVar1 = (longlong *)*plVar2;
      *param_2 = (longlong)plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      goto LAB_1498de2f2;
    }
    break;
  case 2:
    if ((-1 < (int)param_4) && ((int)param_4 < *(int *)(param_1 + 0x1d0))) {
      plVar2 = (longlong *)(*(longlong *)(param_1 + 0x1c8) + (ulonglong)param_4 * 0x60 + 8);
      plVar1 = (longlong *)*plVar2;
      *param_2 = (longlong)plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      goto LAB_1498de2f2;
    }
    break;
  case 6:
    if ((-1 < (int)param_4) && ((int)param_4 < *(int *)(param_1 + 0x280))) {
      plVar2 = (longlong *)(*(longlong *)(param_1 + 0x278) + (ulonglong)param_4 * 0x60 + 8);
      plVar1 = (longlong *)*plVar2;
      *param_2 = (longlong)plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      goto LAB_1498de2f2;
    }
  }
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *param_2 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
LAB_1498de2f2:
  *(int *)(param_2 + 1) = (int)plVar2[1];
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
  return param_2;
}



// FUNCTION 1498de312 Unwind@1498de312 body=45 status=ok
// SIG undefined Unwind@1498de312(void)

void Unwind_1498de312(undefined8 param_1,longlong param_2)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x28));
  return;
}



// FUNCTION 1498de340 FUN_1498de340 body=86 status=ok
// SIG undefined FUN_1498de340(void)

undefined4 FUN_1498de340(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
  lVar1 = FUN_1498de396(param_1 + -8,param_2,param_3);
  if (lVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined4 *)(lVar1 + 0x54);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
  return uVar2;
}



// FUNCTION 1498de396 FUN_1498de396 body=130 status=ok
// SIG undefined FUN_1498de396(void)

longlong FUN_1498de396(longlong param_1,undefined4 param_2,uint param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = 0;
  switch(param_2) {
  case 0:
    if ((int)param_3 < 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x88) <= (int)param_3) goto LAB_1498de3c8;
    plVar2 = (longlong *)(param_1 + 0x80);
    break;
  case 1:
    if ((int)param_3 < 0) {
      return 0;
    }
LAB_1498de3df:
    if (*(int *)(param_1 + 0x100) <= (int)param_3) goto LAB_1498de3f6;
    plVar2 = (longlong *)(param_1 + 0xf8);
    break;
  case 2:
    if ((int)param_3 < 0) {
      return 0;
    }
LAB_1498de3c8:
    if (*(int *)(param_1 + 0x1d8) <= (int)param_3) goto LAB_1498de3df;
    plVar2 = (longlong *)(param_1 + 0x1d0);
    break;
  default:
    goto switchD_1498de3ad_caseD_3;
  case 6:
    if ((int)param_3 < 0) {
      return 0;
    }
LAB_1498de3f6:
    if (*(int *)(param_1 + 0x288) <= (int)param_3) {
      return 0;
    }
    plVar2 = (longlong *)(param_1 + 0x280);
  }
  lVar1 = (ulonglong)param_3 * 0x60 + *plVar2;
switchD_1498de3ad_caseD_3:
  return lVar1;
}



// FUNCTION 1498de418 FUN_1498de418 body=315 status=ok
// SIG undefined FUN_1498de418(void)

undefined8 * FUN_1498de418(longlong param_1,undefined8 *param_2,undefined4 param_3,uint param_4)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
  switch(param_3) {
  case 0:
    if ((-1 < (int)param_4) && ((int)param_4 < *(int *)(param_1 + 0x80))) {
      FUN_14698a6cc(param_2,*(longlong *)(param_1 + 0x78) + (ulonglong)param_4 * 0x60 + 0x30);
      goto LAB_1498de53b;
    }
    break;
  case 1:
    if ((-1 < (int)param_4) && ((int)param_4 < *(int *)(param_1 + 0xf8))) {
      FUN_14698a6cc(param_2,*(longlong *)(param_1 + 0xf0) + (ulonglong)param_4 * 0x60 + 0x30);
      goto LAB_1498de53b;
    }
    break;
  case 2:
    if ((-1 < (int)param_4) && ((int)param_4 < *(int *)(param_1 + 0x1d0))) {
      FUN_14698a6cc(param_2,*(longlong *)(param_1 + 0x1c8) + (ulonglong)param_4 * 0x60 + 0x30);
      goto LAB_1498de53b;
    }
    break;
  case 6:
    if ((-1 < (int)param_4) && ((int)param_4 < *(int *)(param_1 + 0x280))) {
      FUN_14698a6cc(param_2,*(longlong *)(param_1 + 0x278) + (ulonglong)param_4 * 0x60 + 0x30);
      goto LAB_1498de53b;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_1498de53b:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
  return param_2;
}



// FUNCTION 1498de554 Unwind@1498de554 body=41 status=ok
// SIG undefined Unwind@1498de554(void)

void Unwind_1498de554(undefined8 param_1,longlong param_2)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x20));
  return;
}



// FUNCTION 1498de57e FUN_1498de57e body=315 status=ok
// SIG undefined FUN_1498de57e(void)

undefined8 * FUN_1498de57e(longlong param_1,undefined8 *param_2,undefined4 param_3,uint param_4)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
  switch(param_3) {
  case 0:
    if ((-1 < (int)param_4) && ((int)param_4 < *(int *)(param_1 + 0x80))) {
      FUN_14698a6cc(param_2,*(longlong *)(param_1 + 0x78) + (ulonglong)param_4 * 0x60 + 0x40);
      goto LAB_1498de6a1;
    }
    break;
  case 1:
    if ((-1 < (int)param_4) && ((int)param_4 < *(int *)(param_1 + 0xf8))) {
      FUN_14698a6cc(param_2,*(longlong *)(param_1 + 0xf0) + (ulonglong)param_4 * 0x60 + 0x40);
      goto LAB_1498de6a1;
    }
    break;
  case 2:
    if ((-1 < (int)param_4) && ((int)param_4 < *(int *)(param_1 + 0x1d0))) {
      FUN_14698a6cc(param_2,*(longlong *)(param_1 + 0x1c8) + (ulonglong)param_4 * 0x60 + 0x40);
      goto LAB_1498de6a1;
    }
    break;
  case 6:
    if ((-1 < (int)param_4) && ((int)param_4 < *(int *)(param_1 + 0x280))) {
      FUN_14698a6cc(param_2,*(longlong *)(param_1 + 0x278) + (ulonglong)param_4 * 0x60 + 0x40);
      goto LAB_1498de6a1;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_1498de6a1:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
  return param_2;
}



// FUNCTION 1498de6ba Unwind@1498de6ba body=41 status=ok
// SIG undefined Unwind@1498de6ba(void)

void Unwind_1498de6ba(undefined8 param_1,longlong param_2)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x20));
  return;
}



// FUNCTION 1498de6e4 FUN_1498de6e4 body=179 status=ok
// SIG undefined FUN_1498de6e4(void)

undefined8 FUN_1498de6e4(longlong param_1,uint param_2,uint param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
  if (((((int)param_2 < 0) || (*(int *)(param_1 + 0x280) <= (int)param_2)) || ((int)param_3 < 0)) ||
     ((lVar4 = *(longlong *)(param_1 + 0x278) + (ulonglong)param_2 * 0x60,
      *(int *)(lVar4 + 0x20) <= (int)param_3 ||
      (lVar4 = (ulonglong)param_3 * 0x70 + *(longlong *)(lVar4 + 0x18), lVar4 == 0)))) {
    uVar5 = 0;
  }
  else {
    *param_4 = *(undefined8 *)(lVar4 + 0x60);
    *(undefined4 *)(param_4 + 1) = *(undefined4 *)(lVar4 + 0x4c);
    uVar1 = *(undefined4 *)(lVar4 + 0x54);
    uVar2 = *(undefined4 *)(lVar4 + 0x58);
    uVar3 = *(undefined4 *)(lVar4 + 0x5c);
    *(undefined4 *)((longlong)param_4 + 0xc) = *(undefined4 *)(lVar4 + 0x50);
    *(undefined4 *)(param_4 + 2) = uVar1;
    *(undefined4 *)((longlong)param_4 + 0x14) = uVar2;
    *(undefined4 *)(param_4 + 3) = uVar3;
    uVar5 = CONCAT71((uint7)(uint3)(param_3 >> 8),1);
    FUN_144a787a6(param_4 + 4,lVar4 + 0x10);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
  return uVar5;
}



// FUNCTION 1498de798 Unwind@1498de798 body=41 status=ok
// SIG undefined Unwind@1498de798(void)

void Unwind_1498de798(undefined8 param_1,longlong param_2)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x20));
  return;
}



// FUNCTION 1498de7c2 FUN_1498de7c2 body=105 status=ok
// SIG undefined FUN_1498de7c2(void)

undefined8
FUN_1498de7c2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5)

{
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_38 [16];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_40 = *(undefined4 *)(param_4 + 1);
  local_48 = *param_4;
  FUN_1498e94b8(local_38,param_3,&local_48,param_5);
  FUN_1498e93f8(param_1,param_2,local_38);
  FUN_1449db362(local_38);
  return param_2;
}



// FUNCTION 1498de82c Unwind@1498de82c body=36 status=ok
// SIG undefined Unwind@1498de82c(void)

void Unwind_1498de82c(undefined8 param_1,longlong param_2)

{
  FUN_1449db362(param_2 + 0x30);
  return;
}



// FUNCTION 1498de852 FUN_1498de852 body=98 status=ok
// SIG undefined FUN_1498de852(void)

undefined8 FUN_1498de852(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 local_38 [16];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_1498e97dc(local_38,param_3);
  FUN_1498e971c(param_1,param_2,local_38);
  FUN_1449db362(local_38);
  return param_2;
}



// FUNCTION 1498de8b4 Unwind@1498de8b4 body=36 status=ok
// SIG undefined Unwind@1498de8b4(void)

void Unwind_1498de8b4(undefined8 param_1,longlong param_2)

{
  FUN_1449db362(param_2 + 0x30);
  return;
}



// FUNCTION 1498de8d8 FUN_1498de8d8 body=421 status=ok
// SIG undefined FUN_1498de8d8(void)

void FUN_1498de8d8(longlong param_1,longlong param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  LPCRITICAL_SECTION p_Var6;
  undefined8 local_90;
  longlong local_88;
  ulonglong local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  LPCRITICAL_SECTION local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (param_2 != 0) {
    p_Var6 = (LPCRITICAL_SECTION)(param_1 + 0x108);
    EnterCriticalSection(p_Var6);
    iVar1 = *(int *)(param_1 + 0x1e8);
    if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(param_1 + 0x88))) {
      lVar5 = (longlong)iVar1 * 0x60;
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x80) + 0x54 + lVar5);
      if ((-1 < (longlong)iVar1) &&
         (((lVar5 = *(longlong *)(param_1 + 0x80) + lVar5, iVar1 < *(int *)(lVar5 + 0x20) &&
           (lVar5 = (longlong)iVar1 * 0x70 + *(longlong *)(lVar5 + 0x18), lVar5 != 0)) &&
          (*(int *)(param_1 + 0x70) < 0x200)))) {
        iVar1 = *(int *)(lVar5 + 0x24);
        iVar2 = *(int *)(lVar5 + 0x28);
        local_50 = p_Var6;
        FUN_1498e151a(*(undefined8 *)(param_1 + 0x10));
        p_Var6 = local_50;
        local_80 = ((ulonglong)param_3 * 10000000) / ((ulonglong)(uint)(iVar2 * iVar1) * 2);
        local_78 = local_70;
        EnterCriticalSection(local_50);
        local_88 = ((ulonglong)*(uint *)(param_1 + 0x2a8) << 0x20) +
                   (longlong)*(int *)(param_1 + 0x2ac);
        local_90 = param_5;
        LeaveCriticalSection(p_Var6);
        uVar3 = local_78;
        cVar4 = FUN_1498e158c(local_78,param_2,param_3,*(undefined4 *)(lVar5 + 0x24),
                              *(undefined4 *)(lVar5 + 0x28),&local_90,local_80);
        if (cVar4 != '\0') {
          local_60 = uVar3;
          local_58 = local_68;
          if (local_68 != 0) {
            LOCK();
            *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
            UNLOCK();
          }
          FUN_1498e162e(param_1 + 0x18,&local_60);
          FUN_1498e1710(&local_60);
        }
        FUN_1498e1768(&local_70);
        p_Var6 = local_50;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0001498de982. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(p_Var6);
    return;
  }
  return;
}



// FUNCTION 1498dea7e Unwind@1498dea7e body=55 status=ok
// SIG undefined Unwind@1498dea7e(void)

void Unwind_1498dea7e(undefined8 param_1,longlong param_2)

{
  FUN_1498e1768(param_2 + 0x58);
  return;
}



// FUNCTION 1498deab6 Unwind@1498deab6 body=56 status=ok
// SIG undefined Unwind@1498deab6(void)

void Unwind_1498deab6(undefined8 param_1,longlong param_2)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x78));
  return;
}



// FUNCTION 1498deaee Unwind@1498deaee body=55 status=ok
// SIG undefined Unwind@1498deaee(void)

void Unwind_1498deaee(undefined8 param_1,longlong param_2)

{
  FUN_1498e1710(param_2 + 0x68);
  return;
}



// FUNCTION 1498deb26 FUN_1498deb26 body=280 status=ok
// SIG undefined FUN_1498deb26(void)

void FUN_1498deb26(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  LPCRITICAL_SECTION p_Var3;
  undefined8 local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  LPCRITICAL_SECTION local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (param_2 != 0) {
    p_Var3 = (LPCRITICAL_SECTION)(param_1 + 0x108);
    EnterCriticalSection(p_Var3);
    if (((-1 < *(int *)(param_1 + 0x1ec)) && (*(int *)(param_1 + 0x1ec) < *(int *)(param_1 + 0x100))
        ) && (*(int *)(param_1 + 0xe8) < 0x100)) {
      local_50 = p_Var3;
      lVar2 = FUN_1498ea297();
      p_Var3 = local_50;
      lVar1 = lVar2 + 0x10;
      local_70 = lVar1;
      local_68 = lVar2;
      EnterCriticalSection(local_50);
      local_78 = ((ulonglong)*(uint *)(param_1 + 0x2a8) << 0x20) +
                 (longlong)*(int *)(param_1 + 0x2ac);
      local_80 = param_5;
      LeaveCriticalSection(p_Var3);
      FUN_1498e17c0(lVar1,param_2,&local_80,param_4);
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      local_60 = lVar1;
      local_58 = lVar2;
      FUN_147809c6c(param_1 + 0x90,&local_60);
      FUN_1498e1ba4(&local_60);
      FUN_1498e1bfc(&local_70);
      p_Var3 = local_50;
    }
    LeaveCriticalSection(p_Var3);
  }
  return;
}



// FUNCTION 1498dec3e Unwind@1498dec3e body=52 status=ok
// SIG undefined Unwind@1498dec3e(void)

void Unwind_1498dec3e(undefined8 param_1,longlong param_2)

{
  FUN_1498e1bfc(param_2 + 0x38);
  return;
}



// FUNCTION 1498dec72 Unwind@1498dec72 body=53 status=ok
// SIG undefined Unwind@1498dec72(void)

void Unwind_1498dec72(undefined8 param_1,longlong param_2)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x58));
  return;
}



// FUNCTION 1498deca8 Unwind@1498deca8 body=52 status=ok
// SIG undefined Unwind@1498deca8(void)

void Unwind_1498deca8(undefined8 param_1,longlong param_2)

{
  FUN_1498e1ba4(param_2 + 0x48);
  return;
}



// FUNCTION 1498decdc FUN_1498decdc body=353 status=ok
// SIG undefined FUN_1498decdc(void)

void FUN_1498decdc(longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 local_80;
  longlong local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  LPCRITICAL_SECTION local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (param_2 != 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x108);
    EnterCriticalSection(lpCriticalSection);
    if (((-1 < *(int *)(param_1 + 0x1f0)) && (*(int *)(param_1 + 0x1f0) < *(int *)(param_1 + 0x1d8))
        ) && (*(int *)(param_1 + 0x1c0) < 0x100)) {
      puVar3 = (undefined8 *)FUN_14001cc68(0x40,0x10);
      puVar3[1] = &DAT_100000001;
      *puVar3 = &PTR_LAB_14bef8a90;
      puVar1 = puVar3 + 2;
      puVar3[2] = &PTR_LAB_14bef8ab0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      local_70 = puVar1;
      local_68 = puVar3;
      EnterCriticalSection(lpCriticalSection);
      local_78 = ((ulonglong)*(uint *)(param_1 + 0x2a8) << 0x20) +
                 (longlong)*(int *)(param_1 + 0x2ac);
      local_80 = param_5;
      local_50 = lpCriticalSection;
      LeaveCriticalSection(lpCriticalSection);
      cVar2 = FUN_1498e1c54(puVar1,param_2,param_3,&local_80,param_4);
      if (cVar2 != '\0') {
        if (puVar3 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
          UNLOCK();
        }
        local_60 = puVar1;
        local_58 = puVar3;
        FUN_14780a37c(param_1 + 0x168,&local_60);
        FUN_1498e1cdc(&local_60);
      }
      FUN_1498e1d34(&local_70);
      lpCriticalSection = local_50;
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}



// FUNCTION 1498dee3e Unwind@1498dee3e body=62 status=ok
// SIG undefined Unwind@1498dee3e(void)

void Unwind_1498dee3e(undefined8 param_1,longlong param_2)

{
  FUN_1498e1d34(param_2 + 0x38);
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x58));
  return;
}



// FUNCTION 1498dee7c Unwind@1498dee7c body=52 status=ok
// SIG undefined Unwind@1498dee7c(void)

void Unwind_1498dee7c(undefined8 param_1,longlong param_2)

{
  FUN_1498e1cdc(param_2 + 0x48);
  return;
}



// FUNCTION 1498deeb0 FUN_1498deeb0 body=465 status=ok
// SIG undefined FUN_1498deeb0(void)

void FUN_1498deeb0(longlong param_1,longlong param_2,uint param_3,longlong param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  LPCRITICAL_SECTION p_Var5;
  uint uVar6;
  undefined8 local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  LPCRITICAL_SECTION local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (param_2 != 0) {
    p_Var5 = (LPCRITICAL_SECTION)(param_1 + 0x108);
    EnterCriticalSection(p_Var5);
    iVar1 = *(int *)(param_1 + 500);
    if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(param_1 + 0x288))) {
      lVar4 = (longlong)iVar1 * 0x60;
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x280) + 0x54 + lVar4);
      if (((-1 < (longlong)iVar1) &&
          (((lVar4 = *(longlong *)(param_1 + 0x280) + lVar4, iVar1 < *(int *)(lVar4 + 0x20) &&
            (lVar4 = (longlong)iVar1 * 0x70 + *(longlong *)(lVar4 + 0x18), lVar4 != 0)) &&
           ((uint)(*(int *)(lVar4 + 0x34) * *(int *)(lVar4 + 0x38)) <= param_3)))) &&
         (*(int *)(param_1 + 0x270) < 8)) {
        if (param_4 == 0) {
          uVar6 = -(uint)(0.0 < *(float *)(lVar4 + 0x4c));
          param_4 = (longlong)
                    (float)(~uVar6 & 0x48a2c2ab | (uint)(1e+07 / *(float *)(lVar4 + 0x4c)) & uVar6);
        }
        local_50 = p_Var5;
        FUN_1498e1d8c(*(undefined8 *)(param_1 + 0x200),&local_70);
        p_Var5 = local_50;
        local_80 = lVar4 + 0x30;
        local_78 = local_70;
        EnterCriticalSection(local_50);
        local_88 = ((ulonglong)*(uint *)(param_1 + 0x2a8) << 0x20) +
                   (longlong)*(int *)(param_1 + 0x2ac);
        local_90 = param_5;
        LeaveCriticalSection(p_Var5);
        uVar2 = local_78;
        cVar3 = FUN_1498e1dfe(local_78,param_2,param_3,local_80,lVar4 + 0x60,
                              *(undefined4 *)(lVar4 + 0x68),*(undefined4 *)(lVar4 + 0x38),&local_90,
                              param_4);
        if (cVar3 != '\0') {
          local_60 = uVar2;
          local_58 = local_68;
          if (local_68 != 0) {
            LOCK();
            *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
            UNLOCK();
          }
          FUN_14780aa8e(param_1 + 0x218,&local_60);
          FUN_1498e1eec(&local_60);
        }
        FUN_1498e1f44(&local_70);
        p_Var5 = local_50;
      }
    }
    LeaveCriticalSection(p_Var5);
  }
  return;
}



// FUNCTION 1498df082 Unwind@1498df082 body=55 status=ok
// SIG undefined Unwind@1498df082(void)

void Unwind_1498df082(undefined8 param_1,longlong param_2)

{
  FUN_1498e1f44(param_2 + 0x68);
  return;
}



// FUNCTION 1498df0ba Unwind@1498df0ba body=56 status=ok
// SIG undefined Unwind@1498df0ba(void)

void Unwind_1498df0ba(undefined8 param_1,longlong param_2)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x88));
  return;
}



// FUNCTION 1498df0f2 Unwind@1498df0f2 body=55 status=ok
// SIG undefined Unwind@1498df0f2(void)

void Unwind_1498df0f2(undefined8 param_1,longlong param_2)

{
  FUN_1498e1eec(param_2 + 0x78);
  return;
}



// FUNCTION 1498df12a FUN_1498df12a body=332 status=ok
// SIG undefined FUN_1498df12a(void)

undefined4 FUN_1498df12a(undefined8 *param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  plVar2 = (longlong *)FUN_14001cc68(0x150,0x10);
  FUN_1446a579c(plVar2);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  local_30 = plVar2;
  plVar2 = (longlong *)FUN_14001cc68(0x78,0x10);
  *plVar2 = (longlong)&PTR_LAB_14bef5a50;
  plVar2[1] = (longlong)&PTR_LAB_14bef5aa0;
  plVar2[2] = (longlong)&PTR_LAB_14bef5ac0;
  plVar2[3] = (longlong)&PTR_LAB_14bef5b20;
  InitializeCriticalSection((LPCRITICAL_SECTION)(plVar2 + 4));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(plVar2 + 4),4000);
  *(undefined4 *)(plVar2 + 9) = 0;
  plVar2[10] = 0;
  plVar2[0xb] = 0;
  plVar2[0xc] = 0;
  plVar2[0xd] = 0;
  plVar2[0xe] = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  local_40 = local_30;
  local_38 = plVar2;
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 8))();
  }
  uVar1 = FUN_1498e45fa(local_38,&local_40);
  plVar2 = (longlong *)*param_1;
  if ((plVar2 != local_30 & (byte)uVar1) == 1) {
    if (local_30 != (longlong *)0x0) {
      (**(code **)(*local_30 + 8))(local_30);
      plVar2 = (longlong *)*param_1;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
    }
    *param_1 = local_30;
  }
  plVar2 = local_30;
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x10))();
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  return uVar1;
}



// FUNCTION 1498df276 Unwind@1498df276 body=44 status=ok
// SIG undefined Unwind@1498df276(void)

void Unwind_1498df276(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x30) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x30) + 0x10))();
  }
  return;
}



// FUNCTION 1498df2a2 Unwind@1498df2a2 body=44 status=ok
// SIG undefined Unwind@1498df2a2(void)

void Unwind_1498df2a2(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x38) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x38) + 0x10))();
  }
  return;
}



// FUNCTION 1498df2ce Unwind@1498df2ce body=22 status=ok
// SIG undefined Unwind@1498df2ce(void)

void Unwind_1498df2ce(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498df2e6 Unwind@1498df2e6 body=22 status=ok
// SIG undefined Unwind@1498df2e6(void)

void Unwind_1498df2e6(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498df2fe FUN_1498df2fe body=65 status=ok
// SIG undefined FUN_1498df2fe(void)

void FUN_1498df2fe(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return;
}



// FUNCTION 1498df340 Unwind@1498df340 body=20 status=ok
// SIG undefined Unwind@1498df340(void)

void Unwind_1498df340(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498df356 FUN_1498df356 body=251 status=ok
// SIG undefined FUN_1498df356(void)

void FUN_1498df356(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  uVar1 = *param_2;
  lVar2 = param_2[1];
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  local_78 = (undefined4)uVar1;
  uStack_74 = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_70 = (undefined4)lVar2;
  uStack_6c = (undefined4)((ulonglong)lVar2 >> 0x20);
  *(undefined4 *)(param_1 + 0x88) = local_78;
  *(undefined4 *)(param_1 + 0x8c) = uStack_74;
  *(undefined4 *)(param_1 + 0x90) = uStack_70;
  *(undefined4 *)(param_1 + 0x94) = uStack_6c;
  FUN_1498dcc3e();
  *(undefined8 *)(param_1 + 0x98) = param_3;
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  uVar3 = *(undefined8 *)(param_1 + 0x108);
  uVar4 = *(undefined8 *)(param_1 + 0x110);
  uVar5 = *(undefined8 *)(param_1 + 0x118);
  uVar6 = *(undefined8 *)(param_1 + 0x120);
  uVar7 = *(undefined8 *)(param_1 + 0x128);
  uVar8 = *(undefined8 *)(param_1 + 0x130);
  uVar9 = *(undefined8 *)(param_1 + 0x138);
  uVar10 = *param_4;
  uVar11 = param_4[1];
  uVar12 = param_4[2];
  uVar13 = param_4[3];
  uVar14 = param_4[4];
  uVar15 = param_4[5];
  uVar16 = param_4[7];
  *(undefined8 *)(param_1 + 0x130) = param_4[6];
  *(undefined8 *)(param_1 + 0x138) = uVar16;
  *(undefined8 *)(param_1 + 0x120) = uVar14;
  *(undefined8 *)(param_1 + 0x128) = uVar15;
  *(undefined8 *)(param_1 + 0x110) = uVar12;
  *(undefined8 *)(param_1 + 0x118) = uVar13;
  *(undefined8 *)(param_1 + 0x100) = uVar10;
  *(undefined8 *)(param_1 + 0x108) = uVar11;
  local_68 = (undefined4)uVar1;
  uStack_64 = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_60 = (undefined4)uVar3;
  uStack_5c = (undefined4)((ulonglong)uVar3 >> 0x20);
  local_58 = (undefined4)uVar4;
  uStack_54 = (undefined4)((ulonglong)uVar4 >> 0x20);
  uStack_50 = (undefined4)uVar5;
  uStack_4c = (undefined4)((ulonglong)uVar5 >> 0x20);
  local_48 = (undefined4)uVar6;
  uStack_44 = (undefined4)((ulonglong)uVar6 >> 0x20);
  uStack_40 = (undefined4)uVar7;
  uStack_3c = (undefined4)((ulonglong)uVar7 >> 0x20);
  local_38 = (undefined4)uVar8;
  uStack_34 = (undefined4)((ulonglong)uVar8 >> 0x20);
  uStack_30 = (undefined4)uVar9;
  uStack_2c = (undefined4)((ulonglong)uVar9 >> 0x20);
  *(undefined4 *)(param_4 + 6) = local_38;
  *(undefined4 *)((longlong)param_4 + 0x34) = uStack_34;
  *(undefined4 *)(param_4 + 7) = uStack_30;
  *(undefined4 *)((longlong)param_4 + 0x3c) = uStack_2c;
  *(undefined4 *)(param_4 + 4) = local_48;
  *(undefined4 *)((longlong)param_4 + 0x24) = uStack_44;
  *(undefined4 *)(param_4 + 5) = uStack_40;
  *(undefined4 *)((longlong)param_4 + 0x2c) = uStack_3c;
  *(undefined4 *)(param_4 + 2) = local_58;
  *(undefined4 *)((longlong)param_4 + 0x14) = uStack_54;
  *(undefined4 *)(param_4 + 3) = uStack_50;
  *(undefined4 *)((longlong)param_4 + 0x1c) = uStack_4c;
  *(undefined4 *)param_4 = local_68;
  *(undefined4 *)((longlong)param_4 + 4) = uStack_64;
  *(undefined4 *)(param_4 + 1) = uStack_60;
  *(undefined4 *)((longlong)param_4 + 0xc) = uStack_5c;
                    /* WARNING: Could not recover jumptable at 0x0001498df44a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  return;
}



// FUNCTION 1498df452 FUN_1498df452 body=113 status=ok
// SIG undefined FUN_1498df452(void)

void FUN_1498df452(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc32050) {
    FUN_144b3d300(&DAT_14cc32050);
    if (DAT_14cc32050 == -1) {
      FUN_1446ddc76(&DAT_14cc32048,"WmfMedia",1);
      _Init_thread_footer(&DAT_14cc32050);
    }
  }
  FUN_1447c1074(DAT_14cc32048);
  return;
}



// FUNCTION 1498df4c3 FUN_1498df4c3 body=425 status=ok
// SIG undefined FUN_1498df4c3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1498df4c3(undefined8 param_1,undefined1 (*param_2) [16])

{
  wchar_t *pwVar1;
  
  if (_DAT_1499d7db0 == *param_2) {
    pwVar1 = L"Default";
  }
  else if (_DAT_1499d7dc0 == *param_2) {
    pwVar1 = L"Audio";
  }
  else if (_DAT_1499d7dd0 == *param_2) {
    pwVar1 = L"Video";
  }
  else if (_DAT_1499d7de0 == *param_2) {
    pwVar1 = L"Protected";
  }
  else if (_DAT_1499d7df0 == *param_2) {
    pwVar1 = L"SAMI";
  }
  else if (_DAT_1499d7e00 == *param_2) {
    pwVar1 = L"Script";
  }
  else if (_DAT_1499d7e10 == *param_2) {
    pwVar1 = L"Image";
  }
  else if (_DAT_1499d7e20 == *param_2) {
    pwVar1 = L"HTML";
  }
  else if (_DAT_1499d7e30 == *param_2) {
    pwVar1 = L"Binary";
  }
  else if (_DAT_1499d7e40 == *param_2) {
    pwVar1 = L"FileTransfer";
  }
  else {
    if (_DAT_1499d7e50 != *param_2) {
      FUN_1498e62a8(param_1);
      return param_1;
    }
    pwVar1 = L"Stream";
  }
  FUN_140056680(param_1,pwVar1);
                    /* WARNING: Read-only address (ram,0x0001499d7db0) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7dc0) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7dd0) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7de0) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7df0) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7e00) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7e10) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7e20) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7e30) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7e40) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7e50) is written */
  return param_1;
}



// FUNCTION 1498df66c FUN_1498df66c body=59 status=ok
// SIG undefined FUN_1498df66c(void)

int FUN_1498df66c(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1498e9ca4(param_1,iVar1);
  }
  thunk_FUN_1498e9d38((longlong)iVar1 * 0x60 + *param_1);
  return iVar1;
}



// FUNCTION 1498df6a7 FUN_1498df6a7 body=7413 status=ok
// SIG undefined FUN_1498df6a7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1498df6a7(undefined8 param_1,undefined1 (*param_2) [16])

{
  int iVar1;
  wchar_t *pwVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  
  if (_DAT_1499d7700 == *param_2) {
    pwVar2 = L"Null";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d7e60 == *param_2) {
    pwVar2 = L"Jpeg";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d7e70 == *param_2) {
LAB_1498dfdfe:
    pwVar2 = L"RGB32";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d7e80 == *param_2) {
    pwVar2 = L"MPEG-2 Transport";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d7e90 == *param_2) {
    pwVar2 = L"MPEG-2 Program";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d78b0 == *param_2) goto LAB_1498dfdfe;
  if (_DAT_1499d78c0 == *param_2) {
    pwVar2 = L"ARGB32";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d78d0 == *param_2) {
    pwVar2 = L"RGB24";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d78e0 == *param_2) {
    pwVar2 = L"RGB525";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d78f0 == *param_2) {
    pwVar2 = L"RGB565";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d7900 == *param_2) {
    pwVar2 = L"RGB8";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d7940 == *param_2) {
    pwVar2 = L"AI44";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d7950 == *param_2) {
    pwVar2 = L"AYUV";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d7960 == *param_2) {
    pwVar2 = L"YUY2";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d7970 == *param_2) {
    pwVar2 = L"YVYU";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d7980 == *param_2) {
    pwVar2 = L"YVU9";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d7990 == *param_2) {
    pwVar2 = L"UYVY";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d79a0 == *param_2) {
    pwVar2 = L"NV11";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d79b0 == *param_2) {
    pwVar2 = L"NV12";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d79c0 == *param_2) {
    pwVar2 = L"YV12";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d79d0 == *param_2) {
    pwVar2 = L"I420";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d79e0 == *param_2) {
    pwVar2 = L"IYUV";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d79f0 == *param_2) {
    pwVar2 = L"Y210";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d7a00 == *param_2) {
    pwVar2 = L"Y216";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d7a10 == *param_2) {
    pwVar2 = L"Y410";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d7a20 == *param_2) {
    pwVar2 = L"Y416";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d7a30 == *param_2) {
    pwVar2 = L"Y41P";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d7a40 == *param_2) {
    pwVar2 = L"Y41T";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d7a50 == *param_2) {
    pwVar2 = L"Y42T";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d7a60 == *param_2) {
    pwVar2 = L"P210";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d7a70 == *param_2) {
    pwVar2 = L"P216";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d7a80 == *param_2) {
    pwVar2 = L"P010";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d7a90 == *param_2) {
    pwVar2 = L"P016";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d7aa0 == *param_2) {
    pwVar2 = L"v210";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d7ab0 == *param_2) {
    pwVar2 = L"v216";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d7ac0 == *param_2) {
    pwVar2 = L"v410";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d7ad0 == *param_2) {
    pwVar2 = L"MP43";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d7ae0 == *param_2) {
    pwVar2 = L"MP4S";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d7af0 == *param_2) {
    pwVar2 = L"M4S2";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d7b00 == *param_2) {
    pwVar2 = L"MP4V";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d7b10 == *param_2) {
    pwVar2 = L"WMV1";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d7b20 == *param_2) {
    pwVar2 = L"WMV2";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d7b30 == *param_2) {
    pwVar2 = L"WMV3";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d7b40 == *param_2) {
    pwVar2 = L"WVC1";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d7b50 == *param_2) {
    pwVar2 = L"MSS1";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d7b60 == *param_2) {
    pwVar2 = L"MSS2";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d7b70 == *param_2) {
    pwVar2 = L"MPG1";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d7b80 == *param_2) {
    pwVar2 = L"DVSL";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d7b90 == *param_2) {
    pwVar2 = L"DVSD";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d7ba0 == *param_2) {
    pwVar2 = L"DVHD";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d7bb0 == *param_2) {
    pwVar2 = L"DV25";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d7bc0 == *param_2) {
    pwVar2 = L"DV50";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d7bd0 == *param_2) {
    pwVar2 = L"DVH1";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d7be0 == *param_2) {
    pwVar2 = L"DVC";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d7bf0 == *param_2) {
    pwVar2 = L"H264";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d7c00 == *param_2) {
    pwVar2 = L"MJPG";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d7c10 == *param_2) {
    pwVar2 = L"420O";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d7c20 == *param_2) {
    pwVar2 = L"HEVC";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d7c30 == *param_2) {
    pwVar2 = L"HEVC ES";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d7c40 == *param_2) {
    pwVar2 = L"H264 ES";
    goto LAB_1498dfdde;
  }
  if (_DAT_1499d7c50 == *param_2) {
    pwVar2 = L"MPEG-2";
    goto LAB_1498dfdde;
  }
  if (*param_2 == _DAT_14bef4be0) {
    pwVar2 = L"LifeCam";
    goto LAB_1498dfdde;
  }
  if (*param_2 == _DAT_14bef4bf0) {
    pwVar2 = L"QuickTime";
    goto LAB_1498dfdde;
  }
  if (*(int *)(*param_2 + 0xc) != -0x154493a1 || *(longlong *)(*param_2 + 4) != -0x7fff2e4bee3024ba)
  goto switchD_1498e00cb_caseD_e06d802e;
  iVar1 = *(int *)*param_2;
  switch(iVar1) {
  case -0x1f927fd5:
    pwVar2 = L"MPEG-2 Audio";
    break;
  case -0x1f927fd4:
    pwVar2 = L"Dolby AC-3";
    break;
  case -0x1f927fd3:
    pwVar2 = L"DVD Subpicture";
    break;
  case -0x1f927fd2:
  case -0x1f927fd1:
  case -0x1f927fd0:
  case -0x1f927fcf:
    goto switchD_1498e00cb_caseD_e06d802e;
  case -0x1f927fce:
    pwVar2 = L"DVD LPCM";
    break;
  case -0x1f927fcd:
    goto switchD_1498dfdcc_caseD_8;
  case -0x1f927fcc:
    pwVar2 = L"SDDS";
    break;
  default:
    if (iVar1 == -0x1f927f1d) {
      pwVar2 = L"MPEG-2 Video";
      break;
    }
    if (iVar1 == -0x1f927f1c) {
      pwVar2 = L"MPEG-2 AC3";
      break;
    }
switchD_1498e00cb_caseD_e06d802e:
    if (*(int *)(*param_2 + 0xc) == 0x719b3800 && *(longlong *)(*param_2 + 4) == -0x55ffff7ffff00000
       ) {
      iVar1 = *(int *)*param_2;
    }
    else {
      iVar1 = *(int *)*param_2;
      if (*(int *)(*param_2 + 0xc) != 0x3790dc25 ||
          *(longlong *)(*param_2 + 4) != -0x620d874bb6b28986) goto LAB_1498e11de;
    }
    switch(iVar1) {
    case 0:
      pwVar2 = L"Unknown Audio Format";
      break;
    case 1:
      pwVar2 = L"PCM";
      break;
    case 2:
      pwVar2 = L"ADPCM";
      break;
    case 3:
      pwVar2 = L"IEEE Float";
      break;
    case 4:
      pwVar2 = L"VSELP";
      break;
    case 5:
      pwVar2 = L"IBM CVSD";
      break;
    case 6:
      pwVar2 = L"aLaw";
      break;
    case 7:
      pwVar2 = L"uLaw";
      break;
    case 8:
switchD_1498dfdcc_caseD_8:
      pwVar2 = L"DTS";
      break;
    case 9:
      pwVar2 = L"DRM";
      break;
    case 10:
      pwVar2 = L"WMA Voice 9";
      break;
    case 0xb:
      pwVar2 = L"WMA Voice 10";
      break;
    default:
      switch(iVar1) {
      case 0x3a:
        pwVar2 = L"Echo Speech 3";
        break;
      case 0x3b:
        pwVar2 = L"Rockwell ADPCM";
        break;
      case 0x3c:
        pwVar2 = L"Rockwell DigiTalk";
        break;
      case 0x3d:
        pwVar2 = L"Xebec";
        break;
      case 0x3e:
      case 0x3f:
      case 0x46:
      case 0x47:
      case 0x48:
      case 0x49:
      case 0x4a:
      case 0x4b:
      case 0x4c:
      case 0x4d:
      case 0x4e:
      case 0x4f:
      case 0x51:
      case 0x54:
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x5a:
      case 0x5b:
      case 0x5c:
      case 0x5d:
      case 0x5e:
      case 0x5f:
      case 0x68:
      case 0x6a:
      case 0x6b:
      case 0x6c:
      case 0x6d:
      case 0x6e:
      case 0x6f:
      case 0x7c:
      case 0x7d:
      case 0x7e:
      case 0x7f:
      case 0x87:
      case 0x8e:
      case 0x8f:
      case 0x90:
      case 0x95:
      case 0x96:
      case 0x9a:
      case 0x9b:
      case 0x9c:
      case 0x9d:
      case 0x9e:
      case 0x9f:
      case 0xa5:
      case 0xa6:
      case 0xa7:
      case 0xa8:
      case 0xa9:
      case 0xaa:
      case 0xab:
      case 0xac:
      case 0xad:
      case 0xae:
      case 0xaf:
        goto switchD_1498e01d8_caseD_3e;
      case 0x40:
        pwVar2 = L"G721 ADPCM";
        break;
      case 0x41:
        pwVar2 = L"G728 CELP";
        break;
      case 0x42:
        pwVar2 = L"MSG723";
        break;
      case 0x43:
        pwVar2 = L"Intel G723.1";
        break;
      case 0x44:
        pwVar2 = L"Intel G729";
        break;
      case 0x45:
        pwVar2 = L"Sharp G726";
        break;
      case 0x50:
        pwVar2 = L"MPEG";
        break;
      case 0x52:
        pwVar2 = L"InSoft RT24";
        break;
      case 0x53:
        pwVar2 = L"InSoft PAC";
        break;
      case 0x55:
        pwVar2 = L"MPEG Layer 3";
        break;
      case 0x59:
        pwVar2 = L"Lucent G723";
        break;
      case 0x60:
        pwVar2 = L"Cirrus Logic";
        break;
      case 0x61:
        pwVar2 = L"ESS PCM";
        break;
      case 0x62:
        pwVar2 = L"Voxware";
        break;
      case 99:
        pwVar2 = L"Canopus ATRAC";
        break;
      case 100:
        pwVar2 = L"APICOM G726";
        break;
      case 0x65:
        pwVar2 = L"APICOM G722";
        break;
      case 0x66:
        pwVar2 = L"DSAT";
        break;
      case 0x67:
        pwVar2 = L"DSAT Display";
        break;
      case 0x69:
        pwVar2 = L"Voxware Byte Aligned";
        break;
      case 0x70:
        pwVar2 = L"Voxware AC8";
        break;
      case 0x71:
        pwVar2 = L"Voxware AC10";
        break;
      case 0x72:
        pwVar2 = L"Voxware AC16";
        break;
      case 0x73:
        pwVar2 = L"Voxware AC20";
        break;
      case 0x74:
        pwVar2 = L"Voxware RT24";
        break;
      case 0x75:
        pwVar2 = L"Voxware RT29";
        break;
      case 0x76:
        pwVar2 = L"Voxware RT29HW";
        break;
      case 0x77:
        pwVar2 = L"Voxware VR12";
        break;
      case 0x78:
        pwVar2 = L"Voxware VR18";
        break;
      case 0x79:
        pwVar2 = L"Voxware TQ40";
        break;
      case 0x7a:
        pwVar2 = L"Voxware SC3";
        break;
      case 0x7b:
        pwVar2 = L"Voxware SC3.1";
        break;
      case 0x80:
        pwVar2 = L"Softsound";
        break;
      case 0x81:
        pwVar2 = L"Voxware TQ60";
        break;
      case 0x82:
        pwVar2 = L"MSRT24";
        break;
      case 0x83:
        pwVar2 = L"AT&T G729A";
        break;
      case 0x84:
        pwVar2 = L"NVI2";
        break;
      case 0x85:
        pwVar2 = L"DataFusion G726";
        break;
      case 0x86:
        pwVar2 = L"DataFusion GSM610";
        break;
      case 0x88:
        pwVar2 = L"Iterated Systems";
        break;
      case 0x89:
        pwVar2 = L"OnLive!";
        break;
      case 0x8a:
        pwVar2 = L"Multitude FT SX20";
        break;
      case 0x8b:
        pwVar2 = L"Infocom ITS G721 ADPCM";
        break;
      case 0x8c:
        pwVar2 = L"Convedia G729";
        break;
      case 0x8d:
        pwVar2 = L"Congruency";
        break;
      case 0x91:
        pwVar2 = L"SBC24";
        break;
      case 0x92:
        pwVar2 = L"Dolby AC3 SPDIF";
        break;
      case 0x93:
        pwVar2 = L"MediaSonic G723";
        break;
      case 0x94:
        pwVar2 = L"Prosody 8kps";
        break;
      case 0x97:
        pwVar2 = L"ZyXEL ADPCM";
        break;
      case 0x98:
        pwVar2 = L"Philips LPCBB";
        break;
      case 0x99:
        pwVar2 = L"Studer Packed";
        break;
      case 0xa0:
        pwVar2 = L"Malden PhonyTalk";
        break;
      case 0xa1:
        pwVar2 = L"Racal GSM";
        break;
      case 0xa2:
        pwVar2 = L"Racal G720.A";
        break;
      case 0xa3:
        pwVar2 = L"Racal G723.1";
        break;
      case 0xa4:
        pwVar2 = L"Racal Tetra ACELP";
        break;
      case 0xb0:
        pwVar2 = L"NEC AAC";
        break;
      default:
        if (iVar1 == 0xff) {
          pwVar2 = L"Raw AAC-1";
          break;
        }
        if (iVar1 == 0x100) {
          pwVar2 = L"Rhetorex ADPCM";
          break;
        }
switchD_1498e01d8_caseD_3e:
        if (0x17f < iVar1) {
          if (iVar1 < 0x260) {
            if (iVar1 < 0x216) {
              if (iVar1 < 0x202) {
                if (iVar1 == 0x180) {
                  pwVar2 = L"Fraunhofer MPEG-2 AAC";
                  break;
                }
                if (iVar1 == 400) {
                  pwVar2 = L"DTS DS";
                  break;
                }
                if (iVar1 == 0x200) {
                  pwVar2 = L"Creative Labs ADPCM";
                  break;
                }
              }
              else if (iVar1 < 0x210) {
                if (iVar1 == 0x202) {
                  pwVar2 = L"Creative Labs FastSpeech 8";
                  break;
                }
                if (iVar1 == 0x203) {
                  pwVar2 = L"Creative Labs FastSpeech 10";
                  break;
                }
              }
              else {
                if (iVar1 == 0x210) {
                  pwVar2 = L"UHER ADPCM";
                  break;
                }
                if (iVar1 == 0x215) {
                  pwVar2 = L"Ulead DV Audio";
                  break;
                }
              }
            }
            else if (iVar1 < 0x241) {
              if (iVar1 < 0x230) {
                if (iVar1 == 0x216) {
                  pwVar2 = L"Ulead DV Audio.1";
                  break;
                }
                if (iVar1 == 0x220) {
                  pwVar2 = L"Quarterdeck";
                  break;
                }
              }
              else {
                if (iVar1 == 0x230) {
                  pwVar2 = L"I-link VC";
                  break;
                }
                if (iVar1 == 0x240) {
                  pwVar2 = L"RAW SPORT";
                  break;
                }
              }
            }
            else if (iVar1 < 0x250) {
              if (iVar1 == 0x241) {
                pwVar2 = L"ESS Technology AC3";
                break;
              }
              if (iVar1 == 0x249) {
                pwVar2 = L"Generic Passthrough";
                break;
              }
            }
            else {
              if (iVar1 == 0x250) {
                pwVar2 = L"IPI HSX";
                break;
              }
              if (iVar1 == 0x251) {
                pwVar2 = L"IPI RPELP";
                break;
              }
            }
          }
          else if (iVar1 < 0x300) {
            if (iVar1 < 0x280) {
              switch(iVar1) {
              case 0x270:
                pwVar2 = L"Sony SCX";
                break;
              case 0x271:
                pwVar2 = L"Sony SCY";
                break;
              case 0x272:
                pwVar2 = L"Sony ATRAC3";
                break;
              case 0x273:
                pwVar2 = L"Sony SPC";
                break;
              default:
                if (iVar1 == 0x260) {
                  pwVar2 = L"Consistent Software 2";
                  break;
                }
                goto switchD_1498e0697_caseD_122;
              }
              break;
            }
            if (iVar1 == 0x280) {
              pwVar2 = L"Telum Audio";
              break;
            }
            if (iVar1 == 0x281) {
              pwVar2 = L"Telum IA Audio";
              break;
            }
            if (iVar1 == 0x285) {
              pwVar2 = L"Norcom ADPCM";
              break;
            }
          }
          else if (iVar1 < 0x400) {
            if (iVar1 == 0x300) {
              pwVar2 = L"Fujitsu Towns Sound";
              break;
            }
            if (iVar1 == 0x350) {
              pwVar2 = L"Micronas";
              break;
            }
            if (iVar1 == 0x351) {
              pwVar2 = L"Micronas CELP833";
              break;
            }
          }
          else if (iVar1 < 0x402) {
            if (iVar1 == 0x400) {
              pwVar2 = L"Brooktree Digital";
              break;
            }
            if (iVar1 == 0x401) {
              pwVar2 = L"Intel Music Coder";
              break;
            }
          }
          else {
            if (iVar1 == 0x402) {
              pwVar2 = L"Indeo Audio";
              break;
            }
            if (iVar1 == 0x450) {
              pwVar2 = L"QDesign Music";
              break;
            }
          }
          goto switchD_1498e0697_caseD_122;
        }
        if (0x14f < iVar1) {
          switch(iVar1) {
          case 0x150:
            pwVar2 = L"Qualcomm PureVoice";
            break;
          case 0x151:
            pwVar2 = L"Qualcomm Half-Rate";
            break;
          default:
            goto switchD_1498e0697_caseD_122;
          case 0x155:
            pwVar2 = L"Ring Zero Systems TUBGSM";
            break;
          case 0x160:
            pwVar2 = L"Microsoft Audio 1";
            break;
          case 0x161:
            pwVar2 = L"Windows Media Audio 2";
            break;
          case 0x162:
            pwVar2 = L"Windows Media Audio 3";
            break;
          case 0x163:
            pwVar2 = L"Window Media Audio Lossless";
            break;
          case 0x164:
            pwVar2 = L"Windows Media Audio SPDIF";
            break;
          case 0x170:
            pwVar2 = L"Unisys ADPCM";
            break;
          case 0x171:
            pwVar2 = L"Unisys uLaw";
            break;
          case 0x172:
            pwVar2 = L"Unisys aLaw";
            break;
          case 0x173:
            pwVar2 = L"Unisys 16k";
            break;
          case 0x174:
            pwVar2 = L"SyCom ACM SYC008";
            break;
          case 0x175:
            pwVar2 = L"SyCom ACM SYC701 G726L";
            break;
          case 0x176:
            pwVar2 = L"SyCom ACM SYC701 CELP54";
            break;
          case 0x177:
            pwVar2 = L"SyCom ACM SYC701 CELP68";
            break;
          case 0x178:
            pwVar2 = L"Knowledge Adventure ADPCM";
          }
          break;
        }
        if (0x11f < iVar1) {
          switch(iVar1) {
          case 0x120:
            pwVar2 = L"Philips Celp";
            break;
          case 0x121:
            pwVar2 = L"Philips Grundig";
            break;
          default:
            goto switchD_1498e0697_caseD_122;
          case 0x123:
            pwVar2 = L"DEC G723";
            break;
          case 0x125:
            pwVar2 = L"Sanyo ADPCM";
            break;
          case 0x130:
            pwVar2 = L"Sipro Lab ACEPLNET";
            break;
          case 0x131:
            pwVar2 = L"Sipro Lab ACELP4800";
            break;
          case 0x132:
            pwVar2 = L"Sipro Lab ACELP8v3";
            break;
          case 0x133:
            pwVar2 = L"Spiro Lab G729";
            break;
          case 0x134:
            pwVar2 = L"Spiro Lab G729A";
            break;
          case 0x135:
            pwVar2 = L"Spiro Lab Kelvin";
            break;
          case 0x136:
            pwVar2 = L"VoiceAge AMR";
            break;
          case 0x140:
            pwVar2 = L"Dictaphone G726 ADPCM";
            break;
          case 0x141:
            pwVar2 = L"Dictaphone CELP68";
            break;
          case 0x142:
            pwVar2 = L"Dictaphone CELP54";
          }
          break;
        }
        if (iVar1 == 0x101) {
          pwVar2 = L"BeCubed IRAT";
          break;
        }
        if (iVar1 == 0x111) {
          pwVar2 = L"Vivo G723";
          break;
        }
        if (iVar1 == 0x112) {
          pwVar2 = L"vivo Siren";
          break;
        }
switchD_1498e0697_caseD_122:
        if (0x1fc3 < iVar1) {
          if (iVar1 < 0x7000) {
            if (iVar1 < 0x564c) {
              if (iVar1 < 0x4143) {
                if (iVar1 < 0x2001) {
                  if (iVar1 == 0x1fc4) {
                    pwVar2 = L"NTCSoft ALF2CM ACM";
                    break;
                  }
                  if (iVar1 == 0x2000) {
                    pwVar2 = L"FAST Multimedia DVM";
                    break;
                  }
                }
                else {
                  if (iVar1 == 0x2001) {
                    pwVar2 = L"DTS2";
                    break;
                  }
                  if (iVar1 == 0x3313) {
                    pwVar2 = L"MAKEAVIS";
                    break;
                  }
                }
              }
              else if (iVar1 < 0x4243) {
                if (iVar1 == 0x4143) {
                  pwVar2 = L"Divio MPEG-4 AAC";
                  break;
                }
                if (iVar1 == 0x4201) {
                  pwVar2 = L"Nokia Adaptive Multirate";
                  break;
                }
              }
              else {
                if (iVar1 == 0x4243) {
                  pwVar2 = L"Divio G726";
                  break;
                }
                if (iVar1 == 0x434c) {
                  pwVar2 = L"LEAD Speech";
                  break;
                }
              }
            }
            else if (iVar1 < 0x6751) {
              if (iVar1 < 0x674f) {
                if (iVar1 == 0x564c) {
                  pwVar2 = L"LEAD Vorbis";
                  break;
                }
                if (iVar1 == 0x5756) {
                  pwVar2 = L"xiph.org WavPack";
                  break;
                }
              }
              else {
                if (iVar1 == 0x674f) {
                  pwVar2 = L"Ogg Vorbis Mode 1";
                  break;
                }
                if (iVar1 == 0x6750) {
                  pwVar2 = L"Ogg Vorbis Mode 2";
                  break;
                }
              }
            }
            else if (iVar1 < 0x6770) {
              if (iVar1 == 0x6751) {
                pwVar2 = L"Ogg Vorbis Mode 3";
                break;
              }
              if (iVar1 == 0x676f) {
                pwVar2 = L"Ogg Vorbis Mode 1 Plus";
                break;
              }
            }
            else {
              if (iVar1 == 0x6770) {
                pwVar2 = L"Ogg Vorbis Mode 2 Plus";
                break;
              }
              if (iVar1 == 0x6771) {
                pwVar2 = L"Ogg Vorbis Mode 3 Plus";
                break;
              }
            }
          }
          else {
            if (0x7a20 < iVar1) {
              switch(iVar1) {
              case 0xa100:
                pwVar2 = L"Converse Infosys G723.1";
                break;
              case 0xa101:
                pwVar2 = L"Converse Infosys AVQSBC";
                break;
              case 0xa102:
                pwVar2 = L"Converse Infosys SBC";
                break;
              case 0xa103:
                pwVar2 = L"Symbol Technologies G729.A";
                break;
              case 0xa104:
                pwVar2 = L"VoiceAge AMR Wideband";
                break;
              case 0xa105:
                pwVar2 = L"Ingenient G726";
                break;
              case 0xa106:
                pwVar2 = L"MPEG-4 AAC";
                break;
              case 0xa107:
                pwVar2 = L"Encore G726";
                break;
              case 0xa108:
                pwVar2 = L"ZOLL Medical ASAO";
                break;
              default:
                if (iVar1 == 0x7a21) {
                  pwVar2 = L"GSMA/3GPP CBR";
                  break;
                }
                if (iVar1 == 0x7a22) {
                  pwVar2 = L"GSMA/3GPP VBR SID";
                  break;
                }
                goto code_r0x0001498e11ae;
              }
              break;
            }
            if (iVar1 < 0x7361) {
              if (iVar1 == 0x7000) {
                pwVar2 = L"3COM NBX";
                break;
              }
              if (iVar1 == 0x706d) {
                pwVar2 = L"FAAD AAC";
                break;
              }
            }
            else {
              if (iVar1 == 0x7361) {
                pwVar2 = L"AMR Narrowband";
                break;
              }
              if (iVar1 == 0x7362) {
                pwVar2 = L"AMR Wideband";
                break;
              }
              if (iVar1 == 0x7363) {
                pwVar2 = L"AMR Wideband Plus";
                break;
              }
            }
          }
          goto code_r0x0001498e11ae;
        }
        if (iVar1 < 0x1401) {
          if (0xfff < iVar1) {
            switch(iVar1) {
            case 0x1000:
              pwVar2 = L"Olivetti GSM";
              break;
            case 0x1001:
              pwVar2 = L"Olivetti ADPCM";
              break;
            case 0x1002:
              pwVar2 = L"Olivetti CELP";
              break;
            case 0x1003:
              pwVar2 = L"Olivetti SBC";
              break;
            case 0x1004:
              pwVar2 = L"Olivetti OPR";
              break;
            default:
              switch(iVar1) {
              case 0x1100:
                pwVar2 = L"Lernout & Hauspie";
                break;
              case 0x1101:
                pwVar2 = L"Lernout & Hauspie CELP";
                break;
              case 0x1102:
                pwVar2 = L"Lernout & Hauspie SBC8";
                break;
              case 0x1103:
                pwVar2 = L"Lernout & Hauspie SBC12";
                break;
              case 0x1104:
                pwVar2 = L"Lernout & Hauspie SBC16";
                break;
              default:
                if (iVar1 == 0x1400) {
                  pwVar2 = L"Norris";
                  break;
                }
                goto code_r0x0001498e11ae;
              }
            }
            break;
          }
          if (iVar1 < 0x680) {
            if (iVar1 == 0x500) {
              pwVar2 = L"On2 VP7";
              break;
            }
            if (iVar1 == 0x501) {
              pwVar2 = L"On2 VP6";
              break;
            }
          }
          else {
            if (iVar1 == 0x680) {
              pwVar2 = L"AT&T VME VMPCM";
              break;
            }
            if (iVar1 == 0x681) {
              pwVar2 = L"AT&T TPC";
              break;
            }
            if (iVar1 == 0x8ae) {
              pwVar2 = L"Lightwave Lossless";
              break;
            }
          }
          goto code_r0x0001498e11ae;
        }
        if (0x181b < iVar1) {
          if (iVar1 < 0x1c07) {
            if (iVar1 == 0x181c) {
              pwVar2 = L"voxware RT24 Speech";
              break;
            }
            if (iVar1 == 0x1971) {
              pwVar2 = L"Sonic Foundry Lossless";
              break;
            }
            if (iVar1 == 0x1979) {
              pwVar2 = L"Innings ADPCM";
              break;
            }
          }
          else {
            if (iVar1 == 0x1c07) {
              pwVar2 = L"Lucent SX8300P";
              break;
            }
            if (iVar1 == 0x1c0c) {
              pwVar2 = L"Lucent SX5363S";
              break;
            }
            if (iVar1 == 0x1f03) {
              pwVar2 = L"CUSeeMe";
              break;
            }
          }
          goto code_r0x0001498e11ae;
        }
        switch(iVar1) {
        case 0x1600:
          pwVar2 = L"MPEG ADT5 AAC";
          break;
        case 0x1601:
          pwVar2 = L"MPEG RAW AAC";
          break;
        case 0x1602:
          pwVar2 = L"MPEG LOAS";
          break;
        case 0x1608:
          pwVar2 = L"Nokia MPEG ADT5 AAC";
          break;
        case 0x1609:
          pwVar2 = L"Nokia MPEG RAW AAC";
          break;
        case 0x160a:
          pwVar2 = L"Vodafone MPEG ADTS AAC";
          break;
        case 0x160b:
          pwVar2 = L"Vodafone MPEG RAW AAC";
          break;
        case 0x1610:
          pwVar2 = L"MPEG HEAAC";
          break;
        default:
          if (iVar1 == 0x1401) {
            pwVar2 = L"ISIAudio 2";
            break;
          }
          if (iVar1 == 0x1500) {
            pwVar2 = L"AT&T SoundSpace Musicompress";
            break;
          }
        case 0x1603:
        case 0x1604:
        case 0x1605:
        case 0x1606:
        case 0x1607:
        case 0x160c:
        case 0x160d:
        case 0x160e:
        case 0x160f:
code_r0x0001498e11ae:
          switch(iVar1) {
          case 0xa109:
            pwVar2 = L"xiph.org Speex Voice";
            break;
          case 0xa10a:
            pwVar2 = L"Vianix MASC";
            break;
          case 0xa10b:
            pwVar2 = L"Windows Media 9 Spectrum Analyzer";
            break;
          case 0xa10c:
            pwVar2 = L"Windows Media Foundation Spectrum Analyzer";
            break;
          case 0xa10d:
            pwVar2 = L"GSM 610";
            break;
          case 0xa10e:
            pwVar2 = L"GSM 620";
            break;
          case 0xa10f:
            pwVar2 = L"GSM 660";
            break;
          case 0xa110:
            pwVar2 = L"GSM 690";
            break;
          case 0xa111:
            pwVar2 = L"GSM Adaptive Multirate Wideband";
            break;
          case 0xa112:
            pwVar2 = L"Polycom G722";
            break;
          case 0xa113:
            pwVar2 = L"Polycom G728";
            break;
          case 0xa114:
            pwVar2 = L"Polycom G729.A";
            break;
          case 0xa115:
            pwVar2 = L"Polycom Siren";
            break;
          case 0xa116:
            pwVar2 = L"Global IP ILBC";
            break;
          case 0xa117:
            pwVar2 = L"RadioTime";
            break;
          case 0xa118:
            pwVar2 = L"Nice Systems ACA";
            break;
          case 0xa119:
            pwVar2 = L"Nice Systems ADPCM";
            break;
          case 0xa11a:
            pwVar2 = L"Vocord G721";
            break;
          case 0xa11b:
            pwVar2 = L"Vocord G726";
            break;
          case 0xa11c:
            pwVar2 = L"Vocord G722.1";
            break;
          case 0xa11d:
            pwVar2 = L"Vocord G728";
            break;
          case 0xa11e:
            pwVar2 = L"Vocord G729";
            break;
          case 0xa11f:
            pwVar2 = L"Vocord G729.A";
            break;
          case 0xa120:
            pwVar2 = L"Vocord G723.1";
            break;
          case 0xa121:
            pwVar2 = L"Vocord LBC";
            break;
          case 0xa122:
            pwVar2 = L"Nice Systems G728";
            break;
          case 0xa123:
            pwVar2 = L"France Telecom G729";
            break;
          case 0xa124:
            pwVar2 = L"CODIAN";
            break;
          default:
            if (iVar1 != 0xf1ac) {
LAB_1498e11de:
              FUN_1498e632e(&local_38);
              puVar3 = &DAT_149dfb77a;
              if (local_30 != 0) {
                puVar3 = local_38;
              }
              FUN_1498e62a8(&local_48,param_2);
              puVar4 = &DAT_149dfb77a;
              if (local_40 != 0) {
                puVar4 = local_48;
              }
              FUN_140002266(param_1,L"%s (%s)",puVar4,puVar3);
              if (local_48 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              if (local_38 == (undefined2 *)0x0) {
                return param_1;
              }
              FUN_1400020a8();
              return param_1;
            }
            pwVar2 = L"flac.sourceforge.net";
          }
        }
      }
      break;
    case 0x10:
      pwVar2 = L"OKI ADPCM";
      break;
    case 0x11:
      pwVar2 = L"Intel DVI ADPCM";
      break;
    case 0x12:
      pwVar2 = L"Videologic ADPCM";
      break;
    case 0x13:
      pwVar2 = L"Sierra ADPCM";
      break;
    case 0x14:
      pwVar2 = L"G723 ADPCM";
      break;
    case 0x15:
      pwVar2 = L"DIGISTD";
      break;
    case 0x16:
      pwVar2 = L"DIGIFIX";
      break;
    case 0x17:
      pwVar2 = L"Dialogic ADPCM";
      break;
    case 0x18:
      pwVar2 = L"Media Vision ADPCM";
      break;
    case 0x19:
      pwVar2 = L"HP CU Codec";
      break;
    case 0x1a:
      pwVar2 = L"HP DynVoice";
      break;
    case 0x20:
      pwVar2 = L"Yamaha ADPCM";
      break;
    case 0x21:
      pwVar2 = L"Sonarc";
      break;
    case 0x22:
      pwVar2 = L"DPS Group TrueSpeech";
      break;
    case 0x23:
      pwVar2 = L"Echo Speech 1";
      break;
    case 0x24:
      pwVar2 = L"AF36";
      break;
    case 0x25:
      pwVar2 = L"APTX";
      break;
    case 0x26:
      pwVar2 = L"AF10";
      break;
    case 0x27:
      pwVar2 = L"Prosody 1622";
      break;
    case 0x28:
      pwVar2 = L"LRC";
      break;
    case 0x30:
      pwVar2 = L"Dolby AC2";
      break;
    case 0x31:
      pwVar2 = L"GSM 610";
      break;
    case 0x32:
      pwVar2 = L"MSN Audio";
      break;
    case 0x33:
      pwVar2 = L"Antex ADPCME";
      break;
    case 0x34:
      pwVar2 = L"Control Resources VQLPC";
      break;
    case 0x35:
      pwVar2 = L"DigiReal";
      break;
    case 0x36:
      pwVar2 = L"DigiADPCM";
      break;
    case 0x37:
      pwVar2 = L"Control Resources CR10";
      break;
    case 0x38:
      pwVar2 = L"VBX ADPCM";
      break;
    case 0x39:
      pwVar2 = L"Crystal IMA ADPCM";
    }
  }
LAB_1498dfdde:
  FUN_140056680(param_1,pwVar2);
                    /* WARNING: Read-only address (ram,0x0001499d7700) is written */
                    /* WARNING: Read-only address (ram,0x0001499d78b0) is written */
                    /* WARNING: Read-only address (ram,0x0001499d78c0) is written */
                    /* WARNING: Read-only address (ram,0x0001499d78d0) is written */
                    /* WARNING: Read-only address (ram,0x0001499d78e0) is written */
                    /* WARNING: Read-only address (ram,0x0001499d78f0) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7900) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7940) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7950) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7960) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7970) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7980) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7990) is written */
                    /* WARNING: Read-only address (ram,0x0001499d79a0) is written */
                    /* WARNING: Read-only address (ram,0x0001499d79b0) is written */
                    /* WARNING: Read-only address (ram,0x0001499d79c0) is written */
                    /* WARNING: Read-only address (ram,0x0001499d79d0) is written */
                    /* WARNING: Read-only address (ram,0x0001499d79e0) is written */
                    /* WARNING: Read-only address (ram,0x0001499d79f0) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7a00) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7a10) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7a20) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7a30) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7a40) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7a50) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7a60) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7a70) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7a80) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7a90) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7aa0) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7ab0) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7ac0) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7ad0) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7ae0) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7af0) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7b00) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7b10) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7b20) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7b30) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7b40) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7b50) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7b60) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7b70) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7b80) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7b90) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7ba0) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7bb0) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7bc0) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7bd0) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7be0) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7bf0) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7c00) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7c10) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7c20) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7c30) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7c40) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7c50) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7e60) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7e70) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7e80) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7e90) is written */
                    /* WARNING: Read-only address (ram,0x00014bef4be0) is written */
                    /* WARNING: Read-only address (ram,0x00014bef4bf0) is written */
  return param_1;
}



// FUNCTION 1498e139c FUN_1498e139c body=73 status=ok
// SIG undefined FUN_1498e139c(void)

void FUN_1498e139c(longlong *param_1)

{
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x10))();
  }
  return;
}



// FUNCTION 1498e13e6 Unwind@1498e13e6 body=20 status=ok
// SIG undefined Unwind@1498e13e6(void)

void Unwind_1498e13e6(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e13fc Unwind@1498e13fc body=20 status=ok
// SIG undefined Unwind@1498e13fc(void)

void Unwind_1498e13fc(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e1412 FUN_1498e1412 body=175 status=ok
// SIG undefined FUN_1498e1412(void)

byte FUN_1498e1412(char *param_1,char *param_2)

{
  float *pfVar1;
  float fVar2;
  char cVar3;
  char cVar4;
  
  cVar3 = *param_1;
  if (cVar3 == '\x02') {
    if (*param_2 != '\x02') {
      return 0;
    }
    cVar4 = param_1[8];
  }
  else {
    cVar4 = param_1[8];
    if (cVar4 != '\x02') {
      fVar2 = *(float *)(param_1 + 4);
      pfVar1 = (float *)(param_1 + 0xc);
      if (((*pfVar1 <= fVar2 && fVar2 != *pfVar1) ||
          (((fVar2 == *pfVar1 && (!NAN(fVar2) && !NAN(*pfVar1))) && (cVar3 == '\0' || cVar4 == '\0')
           ))) && ((*param_2 != '\x02' && (param_2[8] != '\x02')))) {
        fVar2 = *(float *)(param_2 + 4);
        pfVar1 = (float *)(param_2 + 0xc);
        if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
          return 1;
        }
        if (((fVar2 == *pfVar1) && (!NAN(fVar2) && !NAN(*pfVar1))) &&
           (param_2[8] == '\0' || *param_2 == '\0')) {
          return 1;
        }
      }
    }
    if (cVar3 != *param_2) {
      return 0;
    }
    if (*(float *)(param_1 + 4) != *(float *)(param_2 + 4)) {
      return 0;
    }
    if (NAN(*(float *)(param_1 + 4)) || NAN(*(float *)(param_2 + 4))) {
      return 0;
    }
  }
  if (cVar4 != param_2[8]) {
    return 0;
  }
  if (cVar4 != '\x02') {
    return -(*(float *)(param_2 + 0xc) == *(float *)(param_1 + 0xc)) & 1;
  }
  return 1;
}



// FUNCTION 1498e14c2 FUN_1498e14c2 body=83 status=ok
// SIG undefined FUN_1498e14c2(void)

undefined8 * FUN_1498e14c2(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x108));
  iVar1 = *(int *)(param_1 + 0x2ac);
  uVar2 = *(uint *)(param_1 + 0x2a8);
  *param_2 = param_3;
  param_2[1] = ((ulonglong)uVar2 << 0x20) + (longlong)iVar1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x108));
  return param_2;
}



// FUNCTION 1498e151a FUN_1498e151a body=113 status=ok
// SIG undefined FUN_1498e151a(void)

undefined8 * FUN_1498e151a(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  uVar3 = FUN_1498e9ebc(*param_1);
  uVar1 = *param_1;
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  *param_2 = uVar3;
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  puVar4[2] = uVar1;
  puVar4[3] = lVar2;
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14bef8a10;
  puVar4[4] = uVar3;
  param_2[1] = puVar4;
  return param_2;
}



// FUNCTION 1498e158c FUN_1498e158c body=161 status=ok
// SIG undefined FUN_1498e158c(void)

bool FUN_1498e158c(longlong param_1,void *param_2,uint param_3,undefined4 param_4,undefined4 param_5
                  ,undefined8 *param_6,undefined8 param_7)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_3 != 0) {
    FUN_1400ec3e6(param_1 + 0x10,param_3);
    iVar1 = *(int *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x18) = iVar1 + param_3;
    if ((uint)(*(int *)(param_1 + 0x1c) - iVar1) < param_3) {
      FUN_1447403be(param_1 + 0x10,iVar1);
    }
    memcpy((void *)((longlong)iVar1 + *(longlong *)(param_1 + 0x10)),param_2,(longlong)(int)param_3)
    ;
    *(undefined4 *)(param_1 + 0x20) = param_4;
    *(undefined8 *)(param_1 + 0x28) = param_7;
    *(undefined4 *)(param_1 + 0x30) = param_5;
    uVar2 = param_6[1];
    *(undefined8 *)(param_1 + 0x38) = *param_6;
    *(undefined8 *)(param_1 + 0x40) = uVar2;
  }
  return param_3 != 0;
}



// FUNCTION 1498e162e FUN_1498e162e body=180 status=ok
// SIG undefined FUN_1498e162e(void)

ulonglong FUN_1498e162e(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  if ((*(int *)(param_1 + 0x60) < 1) || (*(int *)(param_1 + 0x58) < *(int *)(param_1 + 0x60))) {
    uVar2 = *param_2;
    lVar3 = param_2[1];
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    iVar1 = *(int *)(param_1 + 0x58);
    *(uint *)(param_1 + 0x58) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x5c) < iVar1 + 1U) {
      FUN_147808a0a((longlong *)(param_1 + 0x50),iVar1);
    }
    lVar4 = *(longlong *)(param_1 + 0x50);
    *(undefined8 *)(lVar4 + (longlong)iVar1 * 0x10) = uVar2;
    *(longlong *)(lVar4 + 8 + (longlong)iVar1 * 0x10) = lVar3;
    FUN_1498dd4da();
    uVar5 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  }
  else {
    uVar5 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return uVar5 & 0xffffffff;
}



// FUNCTION 1498e16e2 Unwind@1498e16e2 body=46 status=ok
// SIG undefined Unwind@1498e16e2(void)

void Unwind_1498e16e2(undefined8 param_1,longlong param_2)

{
  FUN_1498dd4da(param_2 + 0x20);
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x38));
  return;
}



// FUNCTION 1498e1710 FUN_1498e1710 body=65 status=ok
// SIG undefined FUN_1498e1710(void)

void FUN_1498e1710(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return;
}



// FUNCTION 1498e1752 Unwind@1498e1752 body=20 status=ok
// SIG undefined Unwind@1498e1752(void)

void Unwind_1498e1752(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e1768 FUN_1498e1768 body=65 status=ok
// SIG undefined FUN_1498e1768(void)

void FUN_1498e1768(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return;
}



// FUNCTION 1498e17aa Unwind@1498e17aa body=20 status=ok
// SIG undefined Unwind@1498e17aa(void)

void Unwind_1498e17aa(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e17c0 FUN_1498e17c0 body=675 status=ok
// SIG undefined FUN_1498e17c0(void)

void FUN_1498e17c0(longlong param_1,undefined8 param_2,undefined4 *param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *local_1b0 [2];
  undefined1 local_1a0 [240];
  longlong local_b0;
  undefined8 local_a8;
  ulonglong local_98;
  undefined4 *local_90;
  longlong local_88 [2];
  longlong local_78 [3];
  undefined8 local_60;
  longlong local_58;
  int local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_78[0] = 0;
  local_78[1] = 0;
  local_98 = param_4;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc32068) {
    FUN_144b3d300(&DAT_14cc32068);
    if (DAT_14cc32068 == -1) {
      FUN_140056680(local_1b0,L"<(?:[^>=]|=\'[^\']*\'|=\"[^\"]*\"|=[^\'\"][^\\s>]*)*>");
      FUN_140e20234(&DAT_14cc32058,local_1b0,0);
      if (local_1b0[0] != (longlong *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1446a7639);
      _Init_thread_footer(&DAT_14cc32068);
    }
  }
  local_60 = 0;
  FUN_144a81018(local_1b0,param_2);
  FUN_140056680(local_88,local_a8);
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_90 = param_3;
  FUN_140d5ff90(local_1b0,&DAT_14cc32058,local_88);
  iVar6 = -1;
  while( true ) {
    cVar4 = FUN_140d5fc7a(local_1b0);
    if (cVar4 == '\0') break;
    if (iVar6 != -1) {
      iVar5 = FUN_1467c9010(local_1b0);
      FUN_144a63a7c(local_88,&local_58,iVar6,iVar5 - iVar6);
      iVar6 = local_50 + -1;
      if (local_50 == 0) {
        iVar6 = 0;
      }
      FUN_1400020e8(local_78,local_58,iVar6);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
    iVar6 = FUN_1467c90aa(local_1b0);
  }
  if (-1 < iVar6) {
    FUN_144a49bb4(local_88,&local_58,iVar6);
    iVar6 = local_50 + -1;
    if (local_50 == 0) {
      iVar6 = 0;
    }
    FUN_1400020e8(local_78,local_58,iVar6);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1498e7972(local_1a0);
  FUN_1498e791a(local_1b0);
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  uVar7 = 0x7fffffffffffffff;
  if (local_98 < 0x7fffffffffffffff) {
    uVar7 = local_98;
  }
  *(ulonglong *)(param_1 + 8) = uVar7;
  FUN_140009b9a(local_1b0,local_78);
  FUN_140008f88(param_1 + 0x10,local_1b0);
  if (local_1b0[0] != (longlong *)0x0) {
    (**(code **)(*local_1b0[0] + 0x10))();
  }
  uVar1 = local_90[1];
  uVar2 = local_90[2];
  uVar3 = local_90[3];
  *(undefined4 *)(param_1 + 0x20) = *local_90;
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 1498e1a64 Unwind@1498e1a64 body=82 status=ok
// SIG undefined Unwind@1498e1a64(void)

void Unwind_1498e1a64(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_144d8db2c(&DAT_14cc32068);
  *(undefined8 *)(param_2 + 0x178) = 0;
  return;
}



// FUNCTION 1498e1ab6 Unwind@1498e1ab6 body=64 status=ok
// SIG undefined Unwind@1498e1ab6(void)

void Unwind_1498e1ab6(undefined8 param_1,longlong param_2)

{
  FUN_1498e7972(param_2 + 0x38);
  FUN_1498e791a(param_2 + 0x28);
  return;
}



// FUNCTION 1498e1af6 Unwind@1498e1af6 body=76 status=ok
// SIG undefined Unwind@1498e1af6(void)

void Unwind_1498e1af6(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x150) != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(param_2 + 0x178) = *(undefined8 *)(param_2 + 0x160);
  return;
}



// FUNCTION 1498e1b42 Unwind@1498e1b42 body=63 status=ok
// SIG undefined Unwind@1498e1b42(void)

void Unwind_1498e1b42(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x178) != 0) {
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 1498e1b82 Unwind@1498e1b82 body=33 status=ok
// SIG undefined Unwind@1498e1b82(void)

void Unwind_1498e1b82(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e1ba4 FUN_1498e1ba4 body=65 status=ok
// SIG undefined FUN_1498e1ba4(void)

void FUN_1498e1ba4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return;
}



// FUNCTION 1498e1be6 Unwind@1498e1be6 body=20 status=ok
// SIG undefined Unwind@1498e1be6(void)

void Unwind_1498e1be6(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e1bfc FUN_1498e1bfc body=65 status=ok
// SIG undefined FUN_1498e1bfc(void)

void FUN_1498e1bfc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return;
}



// FUNCTION 1498e1c3e Unwind@1498e1c3e body=20 status=ok
// SIG undefined Unwind@1498e1c3e(void)

void Unwind_1498e1c3e(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e1c54 FUN_1498e1c54 body=136 status=ok
// SIG undefined FUN_1498e1c54(void)

bool FUN_1498e1c54(longlong param_1,void *param_2,uint param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_3 != 0) {
    FUN_1400ec3e6(param_1 + 8,param_3);
    iVar1 = *(int *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x10) = iVar1 + param_3;
    if ((uint)(*(int *)(param_1 + 0x14) - iVar1) < param_3) {
      FUN_1447403be(param_1 + 8,iVar1);
    }
    memcpy((void *)((longlong)iVar1 + *(longlong *)(param_1 + 8)),param_2,(longlong)(int)param_3);
    *(undefined8 *)(param_1 + 0x18) = param_5;
    uVar2 = param_4[1];
    *(undefined8 *)(param_1 + 0x20) = *param_4;
    *(undefined8 *)(param_1 + 0x28) = uVar2;
  }
  return param_3 != 0;
}



// FUNCTION 1498e1cdc FUN_1498e1cdc body=65 status=ok
// SIG undefined FUN_1498e1cdc(void)

void FUN_1498e1cdc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return;
}



// FUNCTION 1498e1d1e Unwind@1498e1d1e body=20 status=ok
// SIG undefined Unwind@1498e1d1e(void)

void Unwind_1498e1d1e(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e1d34 FUN_1498e1d34 body=65 status=ok
// SIG undefined FUN_1498e1d34(void)

void FUN_1498e1d34(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return;
}



// FUNCTION 1498e1d76 Unwind@1498e1d76 body=20 status=ok
// SIG undefined Unwind@1498e1d76(void)

void Unwind_1498e1d76(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e1d8c FUN_1498e1d8c body=113 status=ok
// SIG undefined FUN_1498e1d8c(void)

undefined8 * FUN_1498e1d8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  uVar3 = FUN_1498ea4f0(*param_1);
  uVar1 = *param_1;
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  *param_2 = uVar3;
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  puVar4[2] = uVar1;
  puVar4[3] = lVar2;
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14bef8af0;
  puVar4[4] = uVar3;
  param_2[1] = puVar4;
  return param_2;
}



// FUNCTION 1498e1dfe FUN_1498e1dfe body=237 status=ok
// SIG undefined FUN_1498e1dfe(void)

undefined8
FUN_1498e1dfe(longlong param_1,void *param_2,uint param_3,undefined8 *param_4,undefined8 *param_5,
             int param_6,int param_7,undefined8 *param_8,undefined8 param_9)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_7 != 0) {
    if (((param_3 != 0) && (param_2 != (void *)0x0)) && (uVar2 = 0, param_6 != 0)) {
      if (param_3 < (uint)(*(int *)((longlong)param_4 + 4) * param_7)) {
        uVar2 = 0;
      }
      else {
        FUN_1400ec3e6(param_1 + 0x48,param_3);
        iVar1 = *(int *)(param_1 + 0x50);
        *(uint *)(param_1 + 0x50) = iVar1 + param_3;
        if ((uint)(*(int *)(param_1 + 0x54) - iVar1) < param_3) {
          FUN_1447403be(param_1 + 0x48,iVar1);
        }
        memcpy((void *)((longlong)iVar1 + *(longlong *)(param_1 + 0x48)),param_2,
               (longlong)(int)param_3);
        *(undefined8 *)(param_1 + 0x18) = param_9;
        *(undefined8 *)(param_1 + 0x10) = *param_4;
        *(undefined8 *)(param_1 + 0x20) = *param_5;
        *(int *)(param_1 + 0x28) = param_6;
        *(int *)(param_1 + 0x58) = param_7;
        uVar2 = param_8[1];
        *(undefined8 *)(param_1 + 0x30) = *param_8;
        *(undefined8 *)(param_1 + 0x38) = uVar2;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}



// FUNCTION 1498e1eec FUN_1498e1eec body=65 status=ok
// SIG undefined FUN_1498e1eec(void)

void FUN_1498e1eec(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return;
}



// FUNCTION 1498e1f2e Unwind@1498e1f2e body=20 status=ok
// SIG undefined Unwind@1498e1f2e(void)

void Unwind_1498e1f2e(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e1f44 FUN_1498e1f44 body=65 status=ok
// SIG undefined FUN_1498e1f44(void)

void FUN_1498e1f44(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return;
}



// FUNCTION 1498e1f86 Unwind@1498e1f86 body=20 status=ok
// SIG undefined Unwind@1498e1f86(void)

void Unwind_1498e1f86(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e1f9c FUN_1498e1f9c body=89 status=ok
// SIG undefined FUN_1498e1f9c(void)

undefined8 FUN_1498e1f9c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar5);
      uVar4 = (**(code **)(*plVar3 + 8))(plVar3,param_2,param_3);
      if ((char)uVar4 != '\0') {
        return uVar4;
      }
      bVar6 = (longlong)iVar1 * 8 + -8 != lVar5;
      lVar5 = lVar5 + 8;
    } while (bVar6);
  }
  return uVar4;
}



// FUNCTION 1498e1ff6 FUN_1498e1ff6 body=89 status=ok
// SIG undefined FUN_1498e1ff6(void)

undefined8 FUN_1498e1ff6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar5);
      uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,param_2,param_3);
      if ((char)uVar4 != '\0') {
        return uVar4;
      }
      bVar6 = (longlong)iVar1 * 8 + -8 != lVar5;
      lVar5 = lVar5 + 8;
    } while (bVar6);
  }
  return uVar4;
}



// FUNCTION 1498e2050 FUN_1498e2050 body=116 status=ok
// SIG undefined FUN_1498e2050(void)

undefined8
FUN_1498e2050(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar5);
      uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,param_2,param_3,param_4,param_5);
      if ((char)uVar4 != '\0') {
        return uVar4;
      }
      bVar6 = (longlong)iVar1 * 8 + -8 != lVar5;
      lVar5 = lVar5 + 8;
    } while (bVar6);
  }
  return uVar4;
}



// FUNCTION 1498e20c4 FUN_1498e20c4 body=124 status=ok
// SIG undefined FUN_1498e20c4(void)

void FUN_1498e20c4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc31880) {
    FUN_144b3d300(&DAT_14cc31880);
    if (DAT_14cc31880 == -1) {
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cc31858);
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cc31858,4000);
      atexit((_func_5014 *)&LAB_1446a054d);
      _Init_thread_footer(&DAT_14cc31880);
      return;
    }
  }
  return;
}



// FUNCTION 1498e2140 FUN_1498e2140 body=152 status=ok
// SIG undefined FUN_1498e2140(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1498e2140(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc318d8) {
    FUN_144b3d300(&DAT_14cc318d8);
    if (DAT_14cc318d8 == -1) {
      DAT_14cc318a8 = 0;
      _DAT_14cc318b0 = 0;
      DAT_14cc31888 = 0;
      _DAT_14cc31890 = 0;
      _DAT_14cc318b4 = 0xffffffff00000080;
      DAT_14cc318bc = 0;
      DAT_14cc318c8 = 0;
      DAT_14cc318d0 = 0;
      atexit((_func_5014 *)&LAB_1446a055b);
      _Init_thread_footer(&DAT_14cc318d8);
      return;
    }
  }
  return;
}



// FUNCTION 1498e21d8 FUN_1498e21d8 body=310 status=ok
// SIG undefined FUN_1498e21d8(void)

ulonglong FUN_1498e21d8(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x118));
  if (*(int *)(param_1 + 0xc0) != *(int *)(param_1 + 0xec)) {
    lVar3 = param_1 + 0xf0;
    if (*(longlong *)(param_1 + 0xf8) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xf8);
    }
    iVar1 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x100) - 1U &
                             (int)param_3 + (int)((ulonglong)param_3 >> 0x20) * 0x17) * 4);
    if (iVar1 != -1) {
      lVar3 = *(longlong *)(param_1 + 0xb8);
      do {
        lVar5 = (longlong)iVar1;
        if (*(longlong *)(lVar3 + lVar5 * 0x18) == param_3) {
          plVar2 = *(longlong **)(lVar3 + 8 + lVar5 * 0x18);
          FUN_1498ea958();
          if (plVar2 != (longlong *)0x0) {
            if (plVar2 != param_2) {
              if (*param_2 != 0) {
                FUN_1400020a8();
              }
              *param_2 = *plVar2;
              *plVar2 = 0;
              *(int *)(param_2 + 1) = (int)plVar2[1];
              *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar2 + 0xc);
              plVar2[1] = 0;
            }
            iVar1 = *(int *)(param_1 + 0x110);
            *(uint *)(param_1 + 0x110) = iVar1 + 1U;
            if (*(uint *)(param_1 + 0x114) < iVar1 + 1U) {
              FUN_1498ea9b0((longlong *)(param_1 + 0x108),iVar1);
            }
            *(longlong **)(*(longlong *)(param_1 + 0x108) + (longlong)iVar1 * 8) = plVar2;
            uVar4 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
            goto LAB_1498e2276;
          }
          break;
        }
        iVar1 = *(int *)(lVar3 + lVar5 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  uVar4 = 0;
LAB_1498e2276:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x118));
  return uVar4 & 0xffffffff;
}



// FUNCTION 1498e230e Unwind@1498e230e body=45 status=ok
// SIG undefined Unwind@1498e230e(void)

void Unwind_1498e230e(undefined8 param_1,longlong param_2)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x28));
  return;
}



// FUNCTION 1498e233c FUN_1498e233c body=244 status=ok
// SIG undefined FUN_1498e233c(void)

void FUN_1498e233c(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  FUN_1498e20c4();
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cc31858);
  FUN_1498e2140();
  if (DAT_14cc31890 != DAT_14cc318bc) {
    uVar3 = *param_1;
    uVar4 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    puVar5 = &DAT_14cc318c0;
    if (DAT_14cc318c8 != (undefined *)0x0) {
      puVar5 = DAT_14cc318c8;
    }
    iVar2 = *(int *)(puVar5 + (ulonglong)(DAT_14cc318d0 - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
    while (iVar2 != -1) {
      puVar1 = (ulonglong *)(DAT_14cc31888 + (longlong)iVar2 * 0x18);
      if (*puVar1 == uVar3) {
        if ((puVar1 + 1 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) &&
           (uVar3 = puVar1[1], uVar3 != 0)) {
          FUN_1446a0422(uVar3,param_1,puVar5,param_4,uVar6);
        }
        break;
      }
      iVar2 = (int)puVar1[2];
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001498e2384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cc31858);
  return;
}



// FUNCTION 1498e2430 Unwind@1498e2430 body=36 status=ok
// SIG undefined Unwind@1498e2430(void)

void Unwind_1498e2430(void)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cc31858);
  return;
}



// FUNCTION 1498e2454 FUN_1498e2454 body=41 status=ok
// SIG undefined FUN_1498e2454(void)

void FUN_1498e2454(void)

{
  DAT_14cc318d0 = 0;
  if (DAT_14cc318c8 != 0) {
    FUN_1400020a8();
  }
  FUN_1498e79ca();
  return;
}



// FUNCTION 1498e247e FUN_1498e247e body=102 status=ok
// SIG undefined FUN_1498e247e(void)

undefined8 * FUN_1498e247e(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_LAB_14bef5590;
  param_1[1] = &PTR_LAB_14bef55c0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = *param_2;
  lVar1 = param_2[1];
  param_1[4] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 5),4000);
  *(undefined4 *)(param_1 + 10) = 0;
  return param_1;
}



// FUNCTION 1498e24e4 FUN_1498e24e4 body=65 status=ok
// SIG undefined FUN_1498e24e4(void)

void FUN_1498e24e4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return;
}



// FUNCTION 1498e2526 Unwind@1498e2526 body=20 status=ok
// SIG undefined Unwind@1498e2526(void)

void Unwind_1498e2526(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e253c FUN_1498e253c body=56 status=ok
// SIG undefined FUN_1498e253c(void)

void FUN_1498e253c(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14bef5590;
  param_1[1] = &PTR_LAB_14bef55c0;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  FUN_1498e24e4(param_1 + 3);
  return;
}



// FUNCTION 1498e2596 FUN_1498e2596 body=293 status=ok
// SIG undefined FUN_1498e2596(void)

undefined8 FUN_1498e2596(longlong param_1,longlong *param_2)

{
  IUnknown *pIVar1;
  int iVar2;
  HRESULT HVar3;
  undefined1 auStack_68 [44];
  uint local_3c;
  IUnknown *local_38;
  IMFAsyncResult *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = (longlong *)0x0;
  iVar2 = (**(code **)(*param_2 + 0x18))(param_2);
  if (-1 < iVar2) {
    local_30 = (IMFAsyncResult *)0x0;
    iVar2 = (**(code **)*local_28)(local_28,&DAT_14bef5650);
    if ((-1 < iVar2) &&
       ((local_38 = (IUnknown *)0x0, local_30 == (IMFAsyncResult *)0x0 ||
        (HVar3 = (*local_30->lpVtbl->GetObjectA)(local_30,&local_38), -1 < HVar3)))) {
      pIVar1 = local_38;
      (**(code **)(*(longlong *)(param_1 + 8) + 0x48))
                (param_1 + 8,local_38[2].lpVtbl,
                 *(int *)&local_38[3].lpVtbl - *(int *)&local_38[1].lpVtbl,&local_3c);
      pIVar1[1].lpVtbl =
           (IUnknownVtbl *)((longlong)&(pIVar1[1].lpVtbl)->QueryInterface + (ulonglong)local_3c);
      if (local_30 != (IMFAsyncResult *)0x0) {
        (*local_30->lpVtbl->SetStatus)(local_30,0);
        MFInvokeCallback(local_30);
        if (local_30 != (IMFAsyncResult *)0x0) {
          (*local_30->lpVtbl->Release)(local_30);
        }
      }
      if (local_38 != (IUnknown *)0x0) {
        (*local_38->lpVtbl->Release)(local_38);
      }
      if (local_28 != (longlong *)0x0) {
        (**(code **)(*local_28 + 0x10))();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 1498e26e4 FUN_1498e26e4 body=49 status=ok
// SIG undefined FUN_1498e26e4(void)

int FUN_1498e26e4(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  LOCK();
  plVar1 = param_1 + 10;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  iVar3 = (int)lVar2 + -1;
  if (param_1 != (longlong *)0x0 && iVar3 == 0) {
    (**(code **)(*param_1 + 0x28))(param_1,1);
  }
  return iVar3;
}



// FUNCTION 1498e2716 FUN_1498e2716 body=50 status=ok
// SIG undefined FUN_1498e2716(void)

int FUN_1498e2716(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x48);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  plVar3 = (longlong *)(param_1 + -8);
  if (plVar3 != (longlong *)0x0 && iVar2 + -1 == 0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,1);
  }
  return iVar2 + -1;
}



// FUNCTION 1498e2748 FUN_1498e2748 body=249 status=ok
// SIG undefined FUN_1498e2748(void)

HRESULT FUN_1498e2748(longlong param_1,IUnknownVtbl *param_2,undefined4 param_3,
                     IMFAsyncCallback *param_4,IUnknown *param_5)

{
  int *piVar1;
  HRESULT HVar2;
  IUnknown *punkObject;
  IMFAsyncResult *local_50;
  IUnknown *local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  HVar2 = -0x7ff8ffa9;
  if (param_2 != (IUnknownVtbl *)0x0 && param_4 != (IMFAsyncCallback *)0x0) {
    punkObject = (IUnknown *)FUN_14001cc68(0x20,0x10);
    punkObject->lpVtbl = (IUnknownVtbl *)&PTR_LAB_14bef8390;
    punkObject[1].lpVtbl = (IUnknownVtbl *)0x0;
    punkObject[2].lpVtbl = param_2;
    *(undefined4 *)&punkObject[3].lpVtbl = param_3;
    *(undefined4 *)((longlong)&punkObject[3].lpVtbl + 4) = 0;
    if (punkObject == (IUnknown *)0x0) {
      HVar2 = -0x7ff8fff2;
    }
    else {
      LOCK();
      piVar1 = (int *)((longlong)&punkObject[3].lpVtbl + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      local_50 = (IMFAsyncResult *)0x0;
      HVar2 = MFCreateAsyncResult(punkObject,param_4,param_5,&local_50);
      if (-1 < HVar2) {
        *(undefined1 *)(param_1 + 8) = 1;
        local_48 = punkObject;
        HVar2 = MFPutWorkItem(1,(IMFAsyncCallback *)(param_1 + -8),(IUnknown *)local_50);
        (*local_50->lpVtbl->Release)(local_50);
        punkObject = local_48;
      }
      (*punkObject->lpVtbl->Release)(punkObject);
    }
  }
  return HVar2;
}



// FUNCTION 1498e2842 Unwind@1498e2842 body=49 status=ok
// SIG undefined Unwind@1498e2842(void)

void Unwind_1498e2842(undefined8 param_1,longlong param_2)

{
  (**(code **)(**(longlong **)(param_2 + 0x30) + 0x10))();
  return;
}



// FUNCTION 1498e2874 Unwind@1498e2874 body=28 status=ok
// SIG undefined Unwind@1498e2874(void)

void Unwind_1498e2874(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e289c FUN_1498e289c body=107 status=ok
// SIG undefined FUN_1498e289c(void)

undefined8 FUN_1498e289c(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_3 == (undefined4 *)0x0) {
    uVar1 = 0x80070057;
  }
  else {
    (**(code **)(*param_2 + 0x30))(param_2,&local_28);
    *param_3 = (int)local_28[1];
    (**(code **)(*local_28 + 0x10))();
    *(undefined1 *)(param_1 + 8) = 0;
    uVar1 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498e2914 FUN_1498e2914 body=49 status=ok
// SIG undefined FUN_1498e2914(void)

undefined8 FUN_1498e2914(longlong param_1,undefined4 *param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  *param_2 = 5;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return 0;
}



// FUNCTION 1498e2946 FUN_1498e2946 body=73 status=ok
// SIG undefined FUN_1498e2946(void)

undefined8 FUN_1498e2946(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))();
  *param_2 = uVar1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return 0;
}



// FUNCTION 1498e2990 Unwind@1498e2990 body=35 status=ok
// SIG undefined Unwind@1498e2990(void)

void Unwind_1498e2990(undefined8 param_1,longlong param_2)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x20));
  return;
}



// FUNCTION 1498e29b4 FUN_1498e29b4 body=73 status=ok
// SIG undefined FUN_1498e29b4(void)

undefined8 FUN_1498e29b4(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))();
  *param_2 = uVar1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return 0;
}



// FUNCTION 1498e29fe Unwind@1498e29fe body=35 status=ok
// SIG undefined Unwind@1498e29fe(void)

void Unwind_1498e29fe(undefined8 param_1,longlong param_2)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x20));
  return;
}



// FUNCTION 1498e2a22 FUN_1498e2a22 body=87 status=ok
// SIG undefined FUN_1498e2a22(void)

undefined8 FUN_1498e2a22(longlong param_1,uint *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
  if (param_2 == (uint *)0x0) {
    uVar2 = 0x80070057;
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
    bVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x38))();
    *param_2 = (uint)bVar1;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1498e2a7a Unwind@1498e2a7a body=35 status=ok
// SIG undefined Unwind@1498e2a7a(void)

void Unwind_1498e2a7a(undefined8 param_1,longlong param_2)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x20));
  return;
}



// FUNCTION 1498e2a9e FUN_1498e2a9e body=193 status=ok
// SIG undefined FUN_1498e2a9e(void)

undefined8 FUN_1498e2a9e(longlong param_1,undefined8 param_2,ulonglong param_3,uint *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))();
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))();
  lVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))();
  if ((uint)uVar2 < (uint)param_3) {
    param_3 = uVar2;
  }
  uVar4 = (uint)uVar2 - (int)lVar1;
  if (lVar3 <= (longlong)(uVar2 - (param_3 & 0xffffffff))) {
    uVar4 = (uint)param_3;
  }
  if (uVar4 != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x170))
              (*(longlong **)(param_1 + 0x10),param_2,(ulonglong)uVar4);
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = uVar4;
  }
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x1a0))
            (*(longlong **)(param_1 + 0x10),lVar1 + (ulonglong)uVar4);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return 0;
}



// FUNCTION 1498e2b60 Unwind@1498e2b60 body=49 status=ok
// SIG undefined Unwind@1498e2b60(void)

void Unwind_1498e2b60(undefined8 param_1,longlong param_2)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x20));
  return;
}



// FUNCTION 1498e2b92 FUN_1498e2b92 body=166 status=ok
// SIG undefined FUN_1498e2b92(void)

undefined8
FUN_1498e2b92(longlong param_1,int param_2,longlong param_3,undefined8 param_4,undefined8 *param_5)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  uVar4 = 1;
  if (*(char *)(param_1 + 8) == '\0') {
    plVar1 = *(longlong **)(param_1 + 0x10);
    if (param_2 == 1) {
      lVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
      (**(code **)(*plVar1 + 0x1a0))(plVar1,lVar2 + param_3);
    }
    else {
      (**(code **)(*plVar1 + 0x1a0))(plVar1,param_3);
    }
    uVar4 = 0;
    if (param_5 != (undefined8 *)0x0) {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))();
      *param_5 = uVar3;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return uVar4;
}



// FUNCTION 1498e2c38 Unwind@1498e2c38 body=45 status=ok
// SIG undefined Unwind@1498e2c38(void)

void Unwind_1498e2c38(undefined8 param_1,longlong param_2)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x28));
  return;
}



// FUNCTION 1498e2c6c FUN_1498e2c6c body=119 status=ok
// SIG undefined FUN_1498e2c6c(void)

undefined8 FUN_1498e2c6c(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  uVar2 = 1;
  if (*(char *)(param_1 + 8) == '\0') {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))();
    if (uVar1 < param_2) {
      param_2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))();
    }
    uVar2 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x1a0))(*(longlong **)(param_1 + 0x10),param_2);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return uVar2;
}



// FUNCTION 1498e2ce4 Unwind@1498e2ce4 body=37 status=ok
// SIG undefined Unwind@1498e2ce4(void)

void Unwind_1498e2ce4(undefined8 param_1,longlong param_2)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x28));
  return;
}



// FUNCTION 1498e2d10 FUN_1498e2d10 body=79 status=ok
// SIG undefined FUN_1498e2d10(void)

void FUN_1498e2d10(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x18) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
  }
  return;
}



// FUNCTION 1498e2d60 Unwind@1498e2d60 body=20 status=ok
// SIG undefined Unwind@1498e2d60(void)

void Unwind_1498e2d60(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e2d76 FUN_1498e2d76 body=103 status=ok
// SIG undefined FUN_1498e2d76(void)

undefined4 * FUN_1498e2d76(undefined4 *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145cfcef2();
  FUN_1448e935e(param_2,&local_30,&DAT_14cc31958,0);
  FUN_145cfcef2();
  *param_1 = local_30;
  param_1[1] = uStack_2c;
  param_1[2] = uStack_28;
  param_1[3] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498e2dde FUN_1498e2dde body=103 status=ok
// SIG undefined FUN_1498e2dde(void)

undefined4 * FUN_1498e2dde(undefined4 *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14611cc22();
  FUN_1448e935e(param_2,&local_30,&DAT_14cc31cd0,0);
  FUN_14611cc22();
  *param_1 = local_30;
  param_1[1] = uStack_2c;
  param_1[2] = uStack_28;
  param_1[3] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498e2e46 FUN_1498e2e46 body=103 status=ok
// SIG undefined FUN_1498e2e46(void)

undefined4 * FUN_1498e2e46(undefined4 *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14611cecc();
  FUN_1448e935e(param_2,&local_30,&DAT_14cc31df8,0);
  FUN_14611cecc();
  *param_1 = local_30;
  param_1[1] = uStack_2c;
  param_1[2] = uStack_28;
  param_1[3] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498e2eae FUN_1498e2eae body=103 status=ok
// SIG undefined FUN_1498e2eae(void)

undefined4 * FUN_1498e2eae(undefined4 *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14611d176();
  FUN_1448e935e(param_2,&local_30,&DAT_14cc31f20,0);
  FUN_14611d176();
  *param_1 = local_30;
  param_1[1] = uStack_2c;
  param_1[2] = uStack_28;
  param_1[3] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498e2f16 FUN_1498e2f16 body=42 status=ok
// SIG undefined FUN_1498e2f16(void)

void FUN_1498e2f16(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1498e2f7c FUN_1498e2f7c body=63 status=ok
// SIG undefined FUN_1498e2f7c(void)

undefined8 FUN_1498e2f7c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_1498e7eb4(uVar1,param_1);
  return uVar1;
}



// FUNCTION 1498e2fbc Unwind@1498e2fbc body=32 status=ok
// SIG undefined Unwind@1498e2fbc(void)

void Unwind_1498e2fbc(undefined8 param_1,longlong param_2)

{
  FUN_1400020a8(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1498e2fdc FUN_1498e2fdc body=76 status=ok
// SIG undefined FUN_1498e2fdc(void)

void * FUN_1498e2fdc(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return _Dst;
}



// FUNCTION 1498e3028 Unwind@1498e3028 body=32 status=ok
// SIG undefined Unwind@1498e3028(void)

void Unwind_1498e3028(undefined8 param_1,longlong param_2)

{
  FUN_1400020a8(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1498e3048 FUN_1498e3048 body=42 status=ok
// SIG undefined FUN_1498e3048(void)

void FUN_1498e3048(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1498e30ae FUN_1498e30ae body=63 status=ok
// SIG undefined FUN_1498e30ae(void)

undefined8 FUN_1498e30ae(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_1498e7f32(uVar1,param_1);
  return uVar1;
}



// FUNCTION 1498e30ee Unwind@1498e30ee body=32 status=ok
// SIG undefined Unwind@1498e30ee(void)

void Unwind_1498e30ee(undefined8 param_1,longlong param_2)

{
  FUN_1400020a8(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1498e310e FUN_1498e310e body=76 status=ok
// SIG undefined FUN_1498e310e(void)

void * FUN_1498e310e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return _Dst;
}



// FUNCTION 1498e315a Unwind@1498e315a body=32 status=ok
// SIG undefined Unwind@1498e315a(void)

void Unwind_1498e315a(undefined8 param_1,longlong param_2)

{
  FUN_1400020a8(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1498e317a FUN_1498e317a body=42 status=ok
// SIG undefined FUN_1498e317a(void)

void FUN_1498e317a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1498e31e0 FUN_1498e31e0 body=63 status=ok
// SIG undefined FUN_1498e31e0(void)

undefined8 FUN_1498e31e0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_1498e7fb0(uVar1,param_1);
  return uVar1;
}



// FUNCTION 1498e3220 Unwind@1498e3220 body=32 status=ok
// SIG undefined Unwind@1498e3220(void)

void Unwind_1498e3220(undefined8 param_1,longlong param_2)

{
  FUN_1400020a8(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1498e3240 FUN_1498e3240 body=76 status=ok
// SIG undefined FUN_1498e3240(void)

void * FUN_1498e3240(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return _Dst;
}



// FUNCTION 1498e328c Unwind@1498e328c body=32 status=ok
// SIG undefined Unwind@1498e328c(void)

void Unwind_1498e328c(undefined8 param_1,longlong param_2)

{
  FUN_1400020a8(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1498e32ac FUN_1498e32ac body=42 status=ok
// SIG undefined FUN_1498e32ac(void)

void FUN_1498e32ac(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1498e3312 FUN_1498e3312 body=63 status=ok
// SIG undefined FUN_1498e3312(void)

undefined8 FUN_1498e3312(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_1498e802e(uVar1,param_1);
  return uVar1;
}



// FUNCTION 1498e3352 Unwind@1498e3352 body=32 status=ok
// SIG undefined Unwind@1498e3352(void)

void Unwind_1498e3352(undefined8 param_1,longlong param_2)

{
  FUN_1400020a8(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1498e3372 FUN_1498e3372 body=76 status=ok
// SIG undefined FUN_1498e3372(void)

void * FUN_1498e3372(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return _Dst;
}



// FUNCTION 1498e33be Unwind@1498e33be body=32 status=ok
// SIG undefined Unwind@1498e33be(void)

void Unwind_1498e33be(undefined8 param_1,longlong param_2)

{
  FUN_1400020a8(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1498e33de FUN_1498e33de body=42 status=ok
// SIG undefined FUN_1498e33de(void)

void FUN_1498e33de(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1498e3444 FUN_1498e3444 body=63 status=ok
// SIG undefined FUN_1498e3444(void)

undefined8 FUN_1498e3444(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_1498e80ac(uVar1,param_1);
  return uVar1;
}



// FUNCTION 1498e3484 Unwind@1498e3484 body=32 status=ok
// SIG undefined Unwind@1498e3484(void)

void Unwind_1498e3484(undefined8 param_1,longlong param_2)

{
  FUN_1400020a8(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1498e34a4 FUN_1498e34a4 body=76 status=ok
// SIG undefined FUN_1498e34a4(void)

void * FUN_1498e34a4(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return _Dst;
}



// FUNCTION 1498e34f0 Unwind@1498e34f0 body=32 status=ok
// SIG undefined Unwind@1498e34f0(void)

void Unwind_1498e34f0(undefined8 param_1,longlong param_2)

{
  FUN_1400020a8(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1498e3510 FUN_1498e3510 body=42 status=ok
// SIG undefined FUN_1498e3510(void)

void FUN_1498e3510(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1498e3576 FUN_1498e3576 body=63 status=ok
// SIG undefined FUN_1498e3576(void)

undefined8 FUN_1498e3576(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_1498e812a(uVar1,param_1);
  return uVar1;
}


