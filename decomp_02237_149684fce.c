// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 149684fce FUN_149684fce body=26 status=ok
// SIG undefined FUN_149684fce(void)

bool FUN_149684fce(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 149684fe8 FUN_149684fe8 body=24 status=ok
// SIG undefined FUN_149684fe8(void)

bool FUN_149684fe8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 149685000 FUN_149685000 body=101 status=ok
// SIG undefined FUN_149685000(void)

void FUN_149685000(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bdac7f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdad4c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 149685066 FUN_149685066 body=101 status=ok
// SIG undefined FUN_149685066(void)

void FUN_149685066(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bdac7f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdad4c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1496850cc FUN_1496850cc body=134 status=ok
// SIG undefined FUN_1496850cc(void)

void FUN_1496850cc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14bdac7f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bdad4c0;
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
                    /* WARNING: Could not recover jumptable at 0x000149685143. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149685152 FUN_149685152 body=52 status=ok
// SIG undefined FUN_149685152(void)

void FUN_149685152(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000149685183. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 149685186 FUN_149685186 body=167 status=ok
// SIG undefined FUN_149685186(void)

bool FUN_149685186(longlong param_1,undefined8 param_2,undefined4 param_3)

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



// FUNCTION 14968522e FUN_14968522e body=199 status=ok
// SIG undefined FUN_14968522e(void)

undefined8 * FUN_14968522e(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14bdad550;
  *(undefined1 *)((longlong)param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[6] = &PTR_LAB_14bdad570;
  param_1[7] = param_2;
  param_1[2] = &LAB_149685422;
  param_1[10] = *param_3;
  param_1[0xc] = param_3[2];
  param_3[2] = 0;
  lVar5 = param_3[4];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar6 = param_3[5];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  lVar7 = param_3[7];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(param_1 + 0x10) = (int)param_3[6];
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(int *)(param_1 + 0x11) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
  *(int *)(param_1 + 0xe) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
  *(int *)(param_1 + 0xf) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar2;
  if (param_1[10] != 0) {
    *param_3 = 0;
  }
  param_1[0x14] = 0;
  param_1[0x16] = &PTR_LAB_14bdad590;
  param_1[0x17] = &LAB_149685470;
  param_1[0x12] = &LAB_149685478;
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 1496852f6 FUN_1496852f6 body=38 status=ok
// SIG undefined FUN_1496852f6(void)

undefined8 FUN_1496852f6(undefined8 param_1,int param_2)

{
  FUN_1496854cc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14968531c FUN_14968531c body=207 status=ok
// SIG undefined FUN_14968531c(void)

void FUN_14968531c(longlong param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar5 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x20);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_21 = (*pcVar2)(uVar4);
  puVar1 = (undefined1 *)(param_1 + 8);
  if (*(char *)(param_1 + 9) == '\x01') {
    pcVar2 = *(code **)(param_1 + 0x90);
    plVar5 = (longlong *)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xa0);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,puVar1,&local_21);
    if (cVar3 == '\0') goto LAB_1496853cd;
  }
  if (&local_21 != puVar1) {
    *(undefined1 *)(param_1 + 8) = local_21;
    *(undefined1 *)(param_1 + 9) = 1;
  }
  pcVar2 = *(code **)(param_1 + 0x50);
  plVar5 = (longlong *)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x60);
  }
  uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
  (*pcVar2)(uVar4,puVar1);
LAB_1496853cd:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496853ec FUN_1496853ec body=53 status=ok
// SIG undefined FUN_1496853ec(void)

void FUN_1496853ec(longlong param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar4 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  *(undefined1 *)(param_1 + 8) = uVar2;
  *(undefined1 *)(param_1 + 9) = 1;
  return;
}



// FUNCTION 149685452 FUN_149685452 body=29 status=ok
// SIG undefined FUN_149685452(void)

undefined8 FUN_149685452(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496854ae FUN_1496854ae body=29 status=ok
// SIG undefined FUN_1496854ae(void)

undefined8 FUN_1496854ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496854cc FUN_1496854cc body=127 status=ok
// SIG undefined FUN_1496854cc(void)

void FUN_1496854cc(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bdad550;
  if (param_1[0x12] != 0) {
    plVar1 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(char *)((longlong)param_1 + 9) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 9) = 0;
  }
  return;
}



// FUNCTION 14968554c FUN_14968554c body=199 status=ok
// SIG undefined FUN_14968554c(void)

undefined8 * FUN_14968554c(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14bdad5d0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  param_1[4] = 0;
  param_1[6] = &PTR_LAB_14bdad5f0;
  param_1[7] = param_2;
  param_1[2] = &LAB_149685740;
  param_1[10] = *param_3;
  param_1[0xc] = param_3[2];
  param_3[2] = 0;
  lVar5 = param_3[4];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar6 = param_3[5];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  lVar7 = param_3[7];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(param_1 + 0x10) = (int)param_3[6];
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(int *)(param_1 + 0x11) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
  *(int *)(param_1 + 0xe) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
  *(int *)(param_1 + 0xf) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar2;
  if (param_1[10] != 0) {
    *param_3 = 0;
  }
  param_1[0x14] = 0;
  param_1[0x16] = &PTR_LAB_14bdad610;
  param_1[0x17] = &LAB_14968578e;
  param_1[0x12] = &LAB_1496857b6;
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 149685614 FUN_149685614 body=38 status=ok
// SIG undefined FUN_149685614(void)

undefined8 FUN_149685614(undefined8 param_1,int param_2)

{
  FUN_14968580a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14968563a FUN_14968563a body=207 status=ok
// SIG undefined FUN_14968563a(void)

void FUN_14968563a(longlong param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar5 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x20);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_24 = (*pcVar2)(uVar4);
  puVar1 = (undefined4 *)(param_1 + 8);
  if (*(char *)(param_1 + 0xc) == '\x01') {
    pcVar2 = *(code **)(param_1 + 0x90);
    plVar5 = (longlong *)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xa0);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,puVar1,&local_24);
    if (cVar3 == '\0') goto LAB_1496856eb;
  }
  if (&local_24 != puVar1) {
    *(undefined4 *)(param_1 + 8) = local_24;
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  pcVar2 = *(code **)(param_1 + 0x50);
  plVar5 = (longlong *)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x60);
  }
  uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
  (*pcVar2)(uVar4,puVar1);
LAB_1496856eb:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14968570a FUN_14968570a body=53 status=ok
// SIG undefined FUN_14968570a(void)

void FUN_14968570a(longlong param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar4 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined1 *)(param_1 + 0xc) = 1;
  return;
}



// FUNCTION 149685770 FUN_149685770 body=29 status=ok
// SIG undefined FUN_149685770(void)

undefined8 FUN_149685770(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496857ec FUN_1496857ec body=29 status=ok
// SIG undefined FUN_1496857ec(void)

undefined8 FUN_1496857ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14968580a FUN_14968580a body=127 status=ok
// SIG undefined FUN_14968580a(void)

void FUN_14968580a(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bdad5d0;
  if (param_1[0x12] != 0) {
    plVar1 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 14968588a FUN_14968588a body=199 status=ok
// SIG undefined FUN_14968588a(void)

undefined8 * FUN_14968588a(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14bdad650;
  *(undefined1 *)((longlong)param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[6] = &PTR_LAB_14bdad670;
  param_1[7] = param_2;
  param_1[2] = &LAB_149685a7e;
  param_1[10] = *param_3;
  param_1[0xc] = param_3[2];
  param_3[2] = 0;
  lVar5 = param_3[4];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar6 = param_3[5];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  lVar7 = param_3[7];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(param_1 + 0x10) = (int)param_3[6];
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(int *)(param_1 + 0x11) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
  *(int *)(param_1 + 0xe) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
  *(int *)(param_1 + 0xf) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar2;
  if (param_1[10] != 0) {
    *param_3 = 0;
  }
  param_1[0x14] = 0;
  param_1[0x16] = &PTR_LAB_14bdad690;
  param_1[0x17] = &LAB_149685acc;
  param_1[0x12] = &LAB_149685ad4;
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 149685952 FUN_149685952 body=38 status=ok
// SIG undefined FUN_149685952(void)

undefined8 FUN_149685952(undefined8 param_1,int param_2)

{
  FUN_149685b28();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149685978 FUN_149685978 body=207 status=ok
// SIG undefined FUN_149685978(void)

void FUN_149685978(longlong param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar5 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x20);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_21 = (*pcVar2)(uVar4);
  puVar1 = (undefined1 *)(param_1 + 8);
  if (*(char *)(param_1 + 9) == '\x01') {
    pcVar2 = *(code **)(param_1 + 0x90);
    plVar5 = (longlong *)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xa0);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,puVar1,&local_21);
    if (cVar3 == '\0') goto LAB_149685a29;
  }
  if (&local_21 != puVar1) {
    *(undefined1 *)(param_1 + 8) = local_21;
    *(undefined1 *)(param_1 + 9) = 1;
  }
  pcVar2 = *(code **)(param_1 + 0x50);
  plVar5 = (longlong *)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x60);
  }
  uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
  (*pcVar2)(uVar4,puVar1);
LAB_149685a29:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149685a48 FUN_149685a48 body=53 status=ok
// SIG undefined FUN_149685a48(void)

void FUN_149685a48(longlong param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar4 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  *(undefined1 *)(param_1 + 8) = uVar2;
  *(undefined1 *)(param_1 + 9) = 1;
  return;
}



// FUNCTION 149685aae FUN_149685aae body=29 status=ok
// SIG undefined FUN_149685aae(void)

undefined8 FUN_149685aae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149685b0a FUN_149685b0a body=29 status=ok
// SIG undefined FUN_149685b0a(void)

undefined8 FUN_149685b0a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149685b28 FUN_149685b28 body=127 status=ok
// SIG undefined FUN_149685b28(void)

void FUN_149685b28(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bdad650;
  if (param_1[0x12] != 0) {
    plVar1 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(char *)((longlong)param_1 + 9) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 9) = 0;
  }
  return;
}



// FUNCTION 149685ba8 FUN_149685ba8 body=199 status=ok
// SIG undefined FUN_149685ba8(void)

undefined8 * FUN_149685ba8(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14bdad6d0;
  *(undefined1 *)((longlong)param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[6] = &PTR_LAB_14bdad6f0;
  param_1[7] = param_2;
  param_1[2] = &LAB_149685d9c;
  param_1[10] = *param_3;
  param_1[0xc] = param_3[2];
  param_3[2] = 0;
  lVar5 = param_3[4];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar6 = param_3[5];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  lVar7 = param_3[7];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(param_1 + 0x10) = (int)param_3[6];
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(int *)(param_1 + 0x11) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
  *(int *)(param_1 + 0xe) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
  *(int *)(param_1 + 0xf) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar2;
  if (param_1[10] != 0) {
    *param_3 = 0;
  }
  param_1[0x14] = 0;
  param_1[0x16] = &PTR_LAB_14bdad710;
  param_1[0x17] = &LAB_149685dea;
  param_1[0x12] = &LAB_149685df2;
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 149685c70 FUN_149685c70 body=38 status=ok
// SIG undefined FUN_149685c70(void)

undefined8 FUN_149685c70(undefined8 param_1,int param_2)

{
  FUN_149685e46();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149685c96 FUN_149685c96 body=207 status=ok
// SIG undefined FUN_149685c96(void)

void FUN_149685c96(longlong param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar5 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x20);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_21 = (*pcVar2)(uVar4);
  puVar1 = (undefined1 *)(param_1 + 8);
  if (*(char *)(param_1 + 9) == '\x01') {
    pcVar2 = *(code **)(param_1 + 0x90);
    plVar5 = (longlong *)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xa0);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,puVar1,&local_21);
    if (cVar3 == '\0') goto LAB_149685d47;
  }
  if (&local_21 != puVar1) {
    *(undefined1 *)(param_1 + 8) = local_21;
    *(undefined1 *)(param_1 + 9) = 1;
  }
  pcVar2 = *(code **)(param_1 + 0x50);
  plVar5 = (longlong *)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x60);
  }
  uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
  (*pcVar2)(uVar4,puVar1);
LAB_149685d47:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149685d66 FUN_149685d66 body=53 status=ok
// SIG undefined FUN_149685d66(void)

void FUN_149685d66(longlong param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar4 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  *(undefined1 *)(param_1 + 8) = uVar2;
  *(undefined1 *)(param_1 + 9) = 1;
  return;
}



// FUNCTION 149685dcc FUN_149685dcc body=29 status=ok
// SIG undefined FUN_149685dcc(void)

undefined8 FUN_149685dcc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149685e28 FUN_149685e28 body=29 status=ok
// SIG undefined FUN_149685e28(void)

undefined8 FUN_149685e28(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149685e46 FUN_149685e46 body=127 status=ok
// SIG undefined FUN_149685e46(void)

void FUN_149685e46(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bdad6d0;
  if (param_1[0x12] != 0) {
    plVar1 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(char *)((longlong)param_1 + 9) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 9) = 0;
  }
  return;
}



// FUNCTION 149685ec6 FUN_149685ec6 body=83 status=ok
// SIG undefined FUN_149685ec6(void)

undefined8 * FUN_149685ec6(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14bdac9c0;
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



// FUNCTION 149685f1c FUN_149685f1c body=480 status=ok
// SIG undefined FUN_149685f1c(void)

void FUN_149685f1c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6,longlong param_7,undefined8 param_8)

{
  longlong *plVar1;
  undefined1 auStack_148 [40];
  undefined4 local_120;
  undefined8 *local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  undefined8 *local_f8;
  undefined1 *local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined8 *local_d8;
  longlong **local_d0;
  undefined8 local_c8;
  undefined4 *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 *local_a8;
  undefined1 local_9d;
  undefined4 local_9c;
  undefined4 local_98 [3];
  undefined4 local_8c;
  longlong *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 *local_68;
  undefined4 *local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_80 = *(undefined8 *)(param_6 + 0x80);
  local_78 = param_2;
  local_70 = param_3;
  plVar1 = (longlong *)FUN_14479d2ce(param_1 + 8);
  local_88 = plVar1;
  (**(code **)(*plVar1 + 0x2e0))(plVar1,&local_108);
  local_98[0] = local_108;
  local_8c = uStack_100._4_4_;
  local_9c = uStack_100._4_4_;
  if ((int)plVar1[0x16] == 1) {
    local_8c = 0x3f800000;
  }
  local_9d = *(undefined1 *)((longlong)plVar1 + 0xb4);
  local_f0 = &local_9d;
  local_108 = (undefined4)param_7;
  uStack_104 = (undefined4)((ulonglong)param_7 >> 0x20);
  uStack_100 = &local_70;
  local_f8 = &local_78;
  local_e0 = param_6;
  local_d8 = &local_80;
  local_d0 = &local_88;
  local_c8 = param_5;
  local_c0 = local_98;
  local_b0 = param_8;
  local_a8 = &local_9c;
  local_118 = &local_58;
  local_58 = 0;
  local_50 = 0;
  local_68 = &LAB_1496860fe;
  local_120 = 0;
  local_e8 = param_1;
  local_b8 = param_4;
  local_60 = &local_108;
  FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(param_7 + 8),1);
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149686106 FUN_149686106 body=496 status=ok
// SIG undefined FUN_149686106(void)

void FUN_149686106(undefined8 *param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  longlong lVar17;
  double dVar18;
  float fVar19;
  undefined1 auStack_b8 [32];
  int local_98;
  undefined8 local_88 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar14 = (longlong)param_2;
  uVar2 = *(uint *)(*(longlong *)*param_1 + lVar14 * 4);
  uVar3 = *(uint *)(*(longlong *)
                     (*(longlong *)(*(longlong *)param_1[1] + 0x60) + (ulonglong)(uVar2 >> 9) * 8) +
                   (ulonglong)(uVar2 & 0x1ff) * 4);
  lVar4 = *(longlong *)(*(longlong *)(*(longlong *)param_1[2] + 0x10) + (ulonglong)(uVar3 >> 9) * 8)
  ;
  uVar11 = (ulonglong)(uVar3 & 0x1ff);
  local_38 = *(undefined8 *)(lVar4 + 0x10 + uVar11 * 0x18);
  puVar1 = (undefined4 *)(lVar4 + uVar11 * 0x18);
  local_48 = *puVar1;
  uStack_44 = puVar1[1];
  uStack_40 = puVar1[2];
  uStack_3c = puVar1[3];
  if (*(char *)param_1[3] == '\x01') {
    puVar13 = *(undefined8 **)(param_1[4] + 0x10);
    uVar5 = param_1[5];
    pcVar6 = (code *)*puVar13;
    plVar12 = puVar13 + 4;
    if ((longlong *)puVar13[2] != (longlong *)0x0) {
      plVar12 = (longlong *)puVar13[2];
    }
    uVar10 = (**(code **)(*plVar12 + 8))();
    dVar18 = (double)(*pcVar6)(uVar10,uVar5,&local_48);
  }
  else {
    dVar18 = 1.0;
  }
  local_98 = *(int *)(*(longlong *)param_1[7] + 0xb0);
  if (local_98 == 1) {
    lVar4 = *(longlong *)param_1[8];
    lVar17 = (longlong)(int)uVar2 * 0x10;
    puVar13 = (undefined8 *)(lVar4 + lVar17);
    local_58 = *puVar13;
    uStack_50 = puVar13[1];
    FUN_1496862f7(&local_68,&local_58,param_1[9],(float)(dVar18 * *(double *)param_1[6]));
    puVar13 = (undefined8 *)(lVar4 + lVar17);
    *puVar13 = local_68;
    puVar13[1] = uStack_60;
    local_68 = *(undefined8 *)(*(longlong *)param_1[8] + lVar17);
    uStack_60 = ((undefined8 *)(*(longlong *)param_1[8] + lVar17))[1];
    puVar1 = (undefined4 *)(*(longlong *)param_1[10] + lVar17);
    local_78 = *puVar1;
    uStack_74 = puVar1[1];
    uStack_70 = puVar1[2];
    uStack_6c = puVar1[3];
    puVar13 = (undefined8 *)&local_78;
    local_98 = *(int *)(*(longlong *)param_1[7] + 0xb0);
    fVar19 = *(float *)param_1[0xc];
    puVar15 = local_88;
    puVar16 = &local_68;
  }
  else {
    uVar2 = *(uint *)(*(longlong *)*param_1 + lVar14 * 4);
    puVar13 = (undefined8 *)
              (*(longlong *)
                (*(longlong *)(*(longlong *)param_1[1] + 0x48) + (ulonglong)(uVar2 >> 4 & 0x3fffff8)
                ) + (ulonglong)((uVar2 & 0x7f) << 4));
    local_58 = *puVar13;
    uStack_50 = puVar13[1];
    puVar13 = &local_58;
    fVar19 = (float)(dVar18 * *(double *)param_1[6]);
    puVar16 = (undefined8 *)param_1[9];
    puVar15 = &local_68;
  }
  FUN_1496863eb(puVar15,puVar13,puVar16,fVar19);
  uVar7 = *(undefined4 *)((longlong)puVar15 + 4);
  uVar8 = *(undefined4 *)(puVar15 + 1);
  uVar9 = *(undefined4 *)((longlong)puVar15 + 0xc);
  puVar1 = (undefined4 *)(*(longlong *)param_1[0xb] + lVar14 * 0x10);
  *puVar1 = *(undefined4 *)puVar15;
  puVar1[1] = uVar7;
  puVar1[2] = uVar8;
  puVar1[3] = uVar9;
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496862f7 FUN_1496862f7 body=244 status=ok
// SIG undefined FUN_1496862f7(void)

void FUN_1496862f7(float *param_1,longlong param_2,longlong param_3,float param_4)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_4 = param_4 * *(float *)(param_3 + 0xc);
  fVar2 = *(float *)(param_2 + 0xc);
  param_1[3] = fVar2 * (1.0 - param_4) + param_4;
  lVar1 = 0;
  do {
    fVar4 = *(float *)(param_3 + lVar1 * 4) * param_4 +
            *(float *)(param_2 + lVar1 * 4) * fVar2 * (1.0 - param_4);
    param_1[lVar1] = fVar4;
    if (1e-06 < param_1[3]) {
      param_1[lVar1] = fVar4 / param_1[3];
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 3);
  fVar2 = *param_1;
  fVar4 = param_1[1];
  fVar3 = 1.0;
  if (fVar2 <= 1.0) {
    fVar3 = fVar2;
  }
  *param_1 = (float)(~-(uint)(fVar2 < 0.0) & (uint)fVar3);
  fVar2 = 1.0;
  if (fVar4 <= 1.0) {
    fVar2 = fVar4;
  }
  param_1[1] = (float)(~-(uint)(fVar4 < 0.0) & (uint)fVar2);
  fVar2 = param_1[2];
  fVar4 = 1.0;
  if (fVar2 <= 1.0) {
    fVar4 = fVar2;
  }
  param_1[2] = (float)(~-(uint)(fVar2 < 0.0) & (uint)fVar4);
  fVar2 = param_1[3];
  fVar4 = 1.0;
  if (fVar2 <= 1.0) {
    fVar4 = fVar2;
  }
  param_1[3] = (float)(~-(uint)(fVar2 < 0.0) & (uint)fVar4);
  return;
}



// FUNCTION 1496863eb FUN_1496863eb body=114 status=ok
// SIG undefined FUN_1496863eb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_1496863eb(uint *param_1,float *param_2,float *param_3,float param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  
  if (param_5 == 1) {
    FUN_1496862f7(param_1);
  }
  else if (param_5 == 2) {
    FUN_14968645d(param_1);
  }
  else {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0x3f800000;
    fVar1 = 1.0 - param_4;
    fVar2 = fVar1 * *param_2 + param_4 * *param_3;
    fVar3 = fVar1 * param_2[1] + param_4 * param_3[1];
    fVar4 = fVar1 * param_2[2] + param_4 * param_3[2];
    fVar1 = fVar1 * param_2[3] + param_4 * param_3[3];
    auVar5._4_4_ = fVar3;
    auVar5._0_4_ = fVar2;
    auVar5._8_4_ = fVar4;
    auVar5._12_4_ = fVar1;
    auVar5 = minps(_DAT_1499314a0,auVar5);
    *param_1 = -(uint)(0.0 <= fVar2) & auVar5._0_4_;
    param_1[1] = -(uint)(0.0 <= fVar3) & auVar5._4_4_;
    param_1[2] = -(uint)(0.0 <= fVar4) & auVar5._8_4_;
    param_1[3] = -(uint)(0.0 <= fVar1) & auVar5._12_4_;
  }
  return param_1;
}



// FUNCTION 14968645d FUN_14968645d body=126 status=ok
// SIG undefined FUN_14968645d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_14968645d(uint *param_1,float *param_2,float *param_3,float param_4)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  auVar1 = insertps(ZEXT416((uint)(*param_2 * *param_3)),ZEXT416((uint)(param_2[1] * param_3[1])),
                    0x10);
  auVar1 = insertps(auVar1,ZEXT416((uint)(param_2[2] * param_3[2])),0x20);
  auVar1 = insertps(auVar1,ZEXT416((uint)(param_2[3] * param_3[3])),0x30);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0x3f800000;
  fVar2 = 1.0 - param_4;
  fVar3 = fVar2 * *param_2 + param_4 * auVar1._0_4_;
  fVar4 = fVar2 * param_2[1] + param_4 * auVar1._4_4_;
  fVar5 = fVar2 * param_2[2] + param_4 * auVar1._8_4_;
  fVar2 = fVar2 * param_2[3] + param_4 * auVar1._12_4_;
  auVar1._4_4_ = fVar4;
  auVar1._0_4_ = fVar3;
  auVar1._8_4_ = fVar5;
  auVar1._12_4_ = fVar2;
  auVar1 = minps(_DAT_1499314a0,auVar1);
  *param_1 = -(uint)(0.0 <= fVar3) & auVar1._0_4_;
  param_1[1] = -(uint)(0.0 <= fVar4) & auVar1._4_4_;
  param_1[2] = -(uint)(0.0 <= fVar5) & auVar1._8_4_;
  param_1[3] = -(uint)(0.0 <= fVar2) & auVar1._12_4_;
  return param_1;
}



// FUNCTION 1496864dc FUN_1496864dc body=29 status=ok
// SIG undefined FUN_1496864dc(void)

undefined8 FUN_1496864dc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496864fa FUN_1496864fa body=106 status=ok
// SIG undefined FUN_1496864fa(void)

undefined8 * FUN_1496864fa(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x68,0x10);
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  uVar1 = DAT_14c8464e8;
  puVar2[4] = DAT_14c8464e0;
  puVar2[5] = uVar1;
  puVar2[6] = DAT_14c8464f0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0x3ff0000000000000;
  *puVar2 = &PTR_FUN_14bdad800;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  *param_2 = puVar2;
  return param_2;
}



// FUNCTION 149686564 FUN_149686564 body=38 status=ok
// SIG undefined FUN_149686564(void)

undefined8 FUN_149686564(undefined8 param_1,int param_2)

{
  FUN_149686724();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14968658a FUN_14968658a body=409 status=ok
// SIG undefined FUN_14968658a(void)

void FUN_14968658a(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  longlong *in_stack_00000038;
  longlong *in_stack_00000040;
  
  lVar6 = in_stack_00000038[1];
  if (0 < (longlong)(int)lVar6) {
    plVar1 = (longlong *)(param_1 + 0x58);
    lVar10 = 0;
    do {
      uVar2 = *(uint *)(*in_stack_00000038 + lVar10 * 4);
      uVar3 = *(undefined4 *)
               (*(longlong *)(*(longlong *)(param_3 + 0x60) + (ulonglong)(uVar2 >> 9) * 8) +
               (ulonglong)(uVar2 & 0x1ff) * 4);
      *(undefined4 *)(param_1 + 0x60) = 0;
      if (*(int *)(param_1 + 100) < 0) {
        FUN_14481578e(plVar1,0);
      }
      FUN_146c349b4(param_3,uVar3,plVar1);
      iVar4 = *(int *)(param_1 + 0x60);
      if ((longlong)iVar4 < 2) {
        uVar2 = *(uint *)(*in_stack_00000038 + lVar10 * 4);
        lVar9 = *(longlong *)(*(longlong *)(param_3 + 0x48) + (ulonglong)(uVar2 >> 4 & 0x3fffff8));
        uVar7 = (ulonglong)((uVar2 & 0x7f) << 4);
        fVar11 = *(float *)(lVar9 + uVar7);
        fVar12 = *(float *)(lVar9 + 4 + uVar7);
        fVar13 = *(float *)(lVar9 + 8 + uVar7);
        fVar14 = *(float *)(lVar9 + 0xc + uVar7);
      }
      else {
        fVar11 = 0.0;
        lVar9 = 0;
        fVar12 = 0.0;
        fVar13 = 0.0;
        fVar14 = 0.0;
        do {
          lVar8 = *(longlong *)
                   (*(longlong *)(param_3 + 0x48) +
                   (ulonglong)(*(uint *)(*plVar1 + lVar9) >> 4 & 0x3fffff8));
          uVar7 = (ulonglong)((*(uint *)(*plVar1 + lVar9) & 0x7f) << 4);
          fVar11 = fVar11 + *(float *)(lVar8 + uVar7);
          fVar12 = fVar12 + *(float *)(lVar8 + 4 + uVar7);
          fVar13 = fVar13 + *(float *)(lVar8 + 8 + uVar7);
          fVar14 = fVar14 + *(float *)(lVar8 + 0xc + uVar7);
          lVar9 = lVar9 + 4;
        } while ((longlong)iVar4 * 4 - lVar9 != 0);
        fVar5 = 1.0 / (float)iVar4;
        fVar11 = fVar11 * fVar5;
        fVar12 = fVar12 * fVar5;
        fVar13 = fVar13 * fVar5;
        fVar14 = fVar14 * fVar5;
      }
      lVar9 = *in_stack_00000040;
      lVar8 = lVar10 * 0x10;
      *(float *)(lVar9 + lVar8) = fVar11;
      *(float *)(lVar9 + 4 + lVar8) = fVar12;
      *(float *)(lVar9 + 8 + lVar8) = fVar13;
      *(float *)(lVar9 + 0xc + lVar8) = fVar14;
      lVar10 = lVar10 + 1;
    } while (lVar10 != (int)lVar6);
  }
  return;
}



// FUNCTION 149686724 FUN_149686724 body=93 status=ok
// SIG undefined FUN_149686724(void)

void FUN_149686724(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bdad800;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_14bdac9c0;
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
                    /* WARNING: Could not recover jumptable at 0x000149686776. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 149686782 FUN_149686782 body=29 status=ok
// SIG undefined FUN_149686782(void)

undefined8 FUN_149686782(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496867a0 FUN_1496867a0 body=152 status=ok
// SIG undefined FUN_1496867a0(void)

undefined8 * FUN_1496867a0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0xc0,0x10);
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  uVar1 = DAT_14c8464e8;
  puVar2[4] = DAT_14c8464e0;
  puVar2[5] = uVar1;
  puVar2[6] = DAT_14c8464f0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0x3ff0000000000000;
  *puVar2 = &PTR_FUN_14bdad870;
  puVar2[0xb] = 0x4018000000000000;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  puVar2[0x10] = 0;
  puVar2[0x11] = 0;
  puVar2[0x12] = 0;
  puVar2[0x13] = 0;
  puVar2[0x14] = 0;
  puVar2[0x15] = 0;
  puVar2[0x16] = 0;
  puVar2[0x17] = 0;
  *param_2 = puVar2;
  return param_2;
}



// FUNCTION 149686838 FUN_149686838 body=38 status=ok
// SIG undefined FUN_149686838(void)

undefined8 FUN_149686838(undefined8 param_1,int param_2)

{
  FUN_149686aea();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14968685e FUN_14968685e body=650 status=ok
// SIG undefined FUN_14968685e(void)

void FUN_14968685e(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6,longlong *param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined1 auStack_f8 [40];
  undefined4 local_d0;
  longlong **local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  undefined8 *local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70;
  longlong *local_68;
  longlong **local_60;
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_80 = *(undefined8 *)(param_6 + 0x80);
  local_78 = param_2;
  local_70 = param_3;
  FUN_14479d2ce(param_1 + 1);
  uVar1 = *(uint *)(param_7 + 1);
  FUN_144a1a59e(param_1 + 0xe,(ulonglong)uVar1,0);
  FUN_144a1a59e(param_1 + 0x10,uVar1,0);
  *(undefined4 *)(param_1 + 0x13) = 0;
  local_c0 = param_1;
  if (*(int *)((longlong)param_1 + 0x9c) < 0) {
    FUN_14481578e(param_1 + 0x12,0);
  }
  if (0 < (int)uVar1) {
    uVar5 = 0;
    do {
      uVar2 = *(uint *)(*param_7 + uVar5 * 4);
      uVar4 = *(undefined4 *)
               (*(longlong *)(*(longlong *)(param_3 + 0x60) + (ulonglong)(uVar2 >> 9) * 8) +
               (ulonglong)(uVar2 & 0x1ff) * 4);
      local_b8 = (longlong *)CONCAT44(local_b8._4_4_,uVar4);
      *(undefined4 *)(param_1[0xe] + uVar5 * 4) = uVar4;
      uVar4 = FUN_1449e3bb0(param_1 + 0x12,&local_b8);
      *(undefined4 *)(param_1[0x10] + uVar5 * 4) = uVar4;
      uVar5 = uVar5 + 1;
    } while (uVar1 != uVar5);
  }
  plVar3 = local_c0;
  uVar4 = (undefined4)local_c0[0x13];
  FUN_14056a44c(local_c0 + 0x14,uVar4,0);
  local_b8 = &local_70;
  local_b0 = plVar3;
  local_a8 = param_7;
  local_c8 = (longlong **)&local_58;
  local_58 = (undefined1 *)0x0;
  local_50 = (longlong **)((ulonglong)local_50._4_4_ << 0x20);
  local_68 = (longlong *)&LAB_149686b9a;
  local_d0 = 0;
  local_60 = &local_b8;
  FUN_1401f8d10(L"ParallelFor Task",uVar4,1,&local_68);
  FUN_14056a44c(plVar3 + 0x16,uVar4,0);
  local_68 = plVar3;
  local_60 = (longlong **)&local_78;
  local_b8 = (longlong *)0x0;
  local_b0 = (longlong *)((ulonglong)local_b0 & 0xffffffff00000000);
  local_58 = &LAB_149686d70;
  local_d0 = 0;
  local_c8 = &local_b8;
  local_50 = &local_68;
  FUN_1401f8d10(L"ParallelFor Task",uVar4,1,&local_58);
  local_b8 = plVar3;
  local_b0 = &local_78;
  local_a8 = (longlong *)param_6;
  local_a0 = &local_80;
  local_98 = &local_70;
  local_90 = param_7;
  local_88 = param_8;
  local_58 = (undefined1 *)0x0;
  local_50 = (longlong **)((ulonglong)local_50 & 0xffffffff00000000);
  local_68 = (longlong *)&LAB_1496870b0;
  local_d0 = 0;
  local_c8 = (longlong **)&local_58;
  local_60 = &local_b8;
  FUN_1401f8d10(L"ParallelFor Task",uVar1,1,&local_68);
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149686aea FUN_149686aea body=175 status=ok
// SIG undefined FUN_149686aea(void)

void FUN_149686aea(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bdad870;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_14bdac9c0;
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
                    /* WARNING: Could not recover jumptable at 0x000149686b8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 149686ba2 FUN_149686ba2 body=460 status=ok
// SIG undefined FUN_149686ba2(void)

void FUN_149686ba2(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_78 [32];
  uint *local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar6 = param_1[1];
  local_58 = (uint *)0x0;
  uStack_50 = 0;
  FUN_14481578e(&local_58,0x10);
  FUN_146c349b4(*(undefined8 *)*param_1,
                *(undefined4 *)(*(longlong *)(lVar6 + 0x90) + (longlong)param_2 * 4),&local_58);
  lVar9 = (longlong)param_2 * 0x10;
  puVar1 = (undefined8 *)(*(longlong *)(lVar6 + 0xa0) + lVar9);
  *puVar1 = 0;
  puVar1[1] = 0;
  if ((longlong)(int)uStack_50 != 0) {
    iVar7 = 0;
    puVar8 = local_58;
    do {
      lVar11 = (longlong)(int)((longlong *)param_1[2])[1];
      if (lVar11 != 0) {
        uVar5 = *puVar8;
        lVar12 = 0;
        do {
          if (*(uint *)(*(longlong *)param_1[2] + lVar12) == uVar5) {
            lVar11 = *(longlong *)
                      (*(longlong *)(*(longlong *)*param_1 + 0x48) +
                      (ulonglong)(uVar5 >> 4 & 0x3fffff8));
            uVar10 = (ulonglong)((uVar5 & 0x7f) << 4);
            fVar2 = *(float *)(lVar11 + 4 + uVar10);
            fVar3 = *(float *)(lVar11 + 8 + uVar10);
            lVar12 = *(longlong *)(lVar6 + 0xa0);
            fVar4 = *(float *)(lVar11 + 0xc + uVar10);
            *(float *)(lVar12 + lVar9) = *(float *)(lVar11 + uVar10) + *(float *)(lVar12 + lVar9);
            *(float *)(lVar12 + 4 + lVar9) = fVar2 + *(float *)(lVar12 + 4 + lVar9);
            *(float *)(lVar12 + 8 + lVar9) = fVar3 + *(float *)(lVar12 + 8 + lVar9);
            *(float *)(lVar12 + 0xc + lVar9) = fVar4 + *(float *)(lVar12 + 0xc + lVar9);
            iVar7 = iVar7 + 1;
            break;
          }
          lVar12 = lVar12 + 4;
        } while (lVar11 * 4 != lVar12);
      }
      puVar8 = puVar8 + 1;
    } while (puVar8 != local_58 + (int)uStack_50);
    if (1 < iVar7) {
      lVar6 = *(longlong *)(lVar6 + 0xa0);
      fVar2 = 1.0 / (float)iVar7;
      *(float *)(lVar6 + lVar9) = *(float *)(lVar6 + lVar9) * fVar2;
      *(float *)(lVar6 + 4 + lVar9) = *(float *)(lVar6 + 4 + lVar9) * fVar2;
      *(float *)(lVar6 + 8 + lVar9) = *(float *)(lVar6 + 8 + lVar9) * fVar2;
      *(float *)(lVar6 + 0xc + lVar9) = fVar2 * *(float *)(lVar6 + 0xc + lVar9);
    }
  }
  if (local_58 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149686d78 FUN_149686d78 body=823 status=ok
// SIG undefined FUN_149686d78(void)

void FUN_149686d78(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_1f8 [32];
  longlong local_1d8;
  undefined4 local_1cc;
  undefined1 *local_1c8;
  int local_1c0;
  int local_1b0;
  int local_1ac;
  longlong local_198;
  longlong *local_188;
  longlong local_178 [4];
  undefined1 *local_158;
  int local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined **local_138;
  undefined4 local_130;
  code *local_128;
  longlong *local_118;
  longlong local_108 [4];
  undefined8 local_e8;
  undefined4 local_e0;
  longlong local_d8 [2];
  longlong *local_c8;
  longlong local_b8 [5];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  lVar1 = *param_1;
  local_1d8 = (longlong)param_2;
  local_130 = *(undefined4 *)(*(longlong *)(lVar1 + 0x90) + local_1d8 * 4);
  local_128 = *(code **)param_1[1];
  local_148 = 0;
  local_138 = &PTR_LAB_149f3b7b0;
  local_158 = &LAB_146c413d0;
  FUN_146c41260(local_128 + 0xb8,&local_e8,local_130,&local_158);
  FUN_146c41458(local_e8,&local_158,local_e0,local_d8);
  FUN_146c41662(local_e8,&local_1c8,local_e0);
  iVar10 = 0;
  fVar11 = 0.0;
  fVar12 = 0.0;
  fVar13 = 0.0;
  fVar14 = 0.0;
  do {
    pcVar4 = local_128;
    if ((((local_158 == local_1c8) && (local_150 == local_1c0)) && ((int)local_140 == local_1b0)) &&
       (local_140._4_4_ == local_1ac)) {
      if (local_198 != 0) {
        if (local_188 == (longlong *)0x0) {
          local_188 = local_178;
        }
        (**(code **)(*local_188 + 0x10))();
      }
      if (local_128 != (code *)0x0) {
        plVar7 = local_108;
        if (local_118 != (longlong *)0x0) {
          plVar7 = local_118;
        }
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
      if (local_d8[0] != 0) {
        if (local_c8 == (longlong *)0x0) {
          local_c8 = local_b8;
        }
        (**(code **)(*local_c8 + 0x10))();
      }
      if (1 < iVar10) {
        fVar3 = 1.0 / (float)iVar10;
        fVar11 = fVar11 * fVar3;
        fVar12 = fVar12 * fVar3;
        fVar13 = fVar13 * fVar3;
        fVar14 = fVar14 * fVar3;
      }
      lVar1 = *(longlong *)(lVar1 + 0xb0);
      lVar8 = local_1d8 * 0x10;
      *(float *)(lVar1 + lVar8) = fVar11;
      *(float *)(lVar1 + 4 + lVar8) = fVar12;
      *(float *)(lVar1 + 8 + lVar8) = fVar13;
      *(float *)(lVar1 + 0xc + lVar8) = fVar14;
      if ((local_90 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    local_1cc = local_138._0_4_;
    plVar7 = local_118;
    if (local_118 == (longlong *)0x0) {
      plVar7 = local_108;
    }
    uVar6 = (**(code **)(*plVar7 + 8))();
    iVar5 = (*pcVar4)(uVar6,&local_1cc);
    if ((longlong)*(int *)(lVar1 + 0x98) != 0) {
      uVar9 = 0;
      lVar8 = 0;
      do {
        if (*(int *)(*(longlong *)(lVar1 + 0x90) + uVar9) == iVar5) {
          if ((~uVar9 & 0x3fffffffc) != 0) {
            lVar2 = *(longlong *)(lVar1 + 0xa0);
            lVar8 = (lVar8 >> 0x20) * 0x10;
            fVar11 = fVar11 + *(float *)(lVar2 + lVar8);
            fVar12 = fVar12 + *(float *)(lVar2 + 4 + lVar8);
            fVar13 = fVar13 + *(float *)(lVar2 + 8 + lVar8);
            fVar14 = fVar14 + *(float *)(lVar2 + 0xc + lVar8);
            iVar10 = iVar10 + 1;
          }
          break;
        }
        lVar8 = lVar8 + 0x100000000;
        uVar9 = uVar9 + 4;
      } while ((longlong)*(int *)(lVar1 + 0x98) * 4 != uVar9);
    }
    if ((int)local_148 == 0) {
      local_14c = 0xffffffff;
      local_140 = 0xffffffffffffffff;
    }
    else {
      FUN_146be9922(&local_158);
    }
  } while( true );
}



// FUNCTION 1496870b8 FUN_1496870b8 body=327 status=ok
// SIG undefined FUN_1496870b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1496870b8(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  float *pfVar2;
  float *pfVar3;
  uint *puVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  code *pcVar9;
  double dVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar6 = *param_1;
  lVar14 = (longlong)param_2;
  uVar5 = *(uint *)(*(longlong *)(lVar6 + 0x70) + lVar14 * 4);
  lVar7 = *(longlong *)(*(longlong *)(*(longlong *)param_1[1] + 0x10) + (ulonglong)(uVar5 >> 9) * 8)
  ;
  uVar11 = (ulonglong)(uVar5 & 0x1ff);
  local_48 = *(undefined8 *)(lVar7 + 0x10 + uVar11 * 0x18);
  puVar1 = (undefined4 *)(lVar7 + uVar11 * 0x18);
  local_58 = *puVar1;
  uStack_54 = puVar1[1];
  uStack_50 = puVar1[2];
  uStack_4c = puVar1[3];
  puVar8 = *(undefined8 **)(lVar6 + 0x10);
  lVar7 = param_1[2];
  pcVar9 = (code *)*puVar8;
  plVar13 = puVar8 + 4;
  if ((longlong *)puVar8[2] != (longlong *)0x0) {
    plVar13 = (longlong *)puVar8[2];
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  dVar10 = (double)(*pcVar9)(uVar12,lVar7,&local_58);
  uVar5 = *(uint *)(*(longlong *)param_1[5] + lVar14 * 4);
  pfVar2 = (float *)(*(longlong *)
                      (*(longlong *)(*(longlong *)param_1[4] + 0x48) +
                      (ulonglong)(uVar5 >> 4 & 0x3fffff8)) + (ulonglong)((uVar5 & 0x7f) << 4));
  fVar15 = (float)(dVar10 * *(double *)param_1[3]);
  fVar19 = 1.0 - fVar15;
  pfVar3 = (float *)(*(longlong *)(lVar6 + 0xb0) +
                    (longlong)*(int *)(*(longlong *)(lVar6 + 0x80) + lVar14 * 4) * 0x10);
  fVar16 = fVar15 * *pfVar3 + fVar19 * *pfVar2;
  fVar17 = fVar15 * pfVar3[1] + fVar19 * pfVar2[1];
  fVar18 = fVar15 * pfVar3[2] + fVar19 * pfVar2[2];
  fVar15 = fVar15 * pfVar3[3] + fVar19 * pfVar2[3];
  auVar20._4_4_ = fVar17;
  auVar20._0_4_ = fVar16;
  auVar20._8_4_ = fVar18;
  auVar20._12_4_ = fVar15;
  auVar20 = minps(_DAT_1499314a0,auVar20);
  puVar4 = (uint *)(*(longlong *)param_1[6] + lVar14 * 0x10);
  *puVar4 = -(uint)(0.0 <= fVar16) & auVar20._0_4_;
  puVar4[1] = -(uint)(0.0 <= fVar17) & auVar20._4_4_;
  puVar4[2] = -(uint)(0.0 <= fVar18) & auVar20._8_4_;
  puVar4[3] = -(uint)(0.0 <= fVar15) & auVar20._12_4_;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149687200 FUN_149687200 body=199 status=ok
// SIG undefined FUN_149687200(void)

undefined8 * FUN_149687200(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14bdad8d0;
  *(undefined1 *)((longlong)param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[6] = &PTR_LAB_14bdad8f0;
  param_1[7] = param_2;
  param_1[2] = &LAB_1496873f4;
  param_1[10] = *param_3;
  param_1[0xc] = param_3[2];
  param_3[2] = 0;
  lVar5 = param_3[4];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar6 = param_3[5];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  lVar7 = param_3[7];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(param_1 + 0x10) = (int)param_3[6];
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(int *)(param_1 + 0x11) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
  *(int *)(param_1 + 0xe) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
  *(int *)(param_1 + 0xf) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar2;
  if (param_1[10] != 0) {
    *param_3 = 0;
  }
  param_1[0x14] = 0;
  param_1[0x16] = &PTR_LAB_14bdad910;
  param_1[0x17] = &LAB_149687442;
  param_1[0x12] = &LAB_14968744a;
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 1496872c8 FUN_1496872c8 body=38 status=ok
// SIG undefined FUN_1496872c8(void)

undefined8 FUN_1496872c8(undefined8 param_1,int param_2)

{
  FUN_14968749e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496872ee FUN_1496872ee body=207 status=ok
// SIG undefined FUN_1496872ee(void)

void FUN_1496872ee(longlong param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar5 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x20);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_21 = (*pcVar2)(uVar4);
  puVar1 = (undefined1 *)(param_1 + 8);
  if (*(char *)(param_1 + 9) == '\x01') {
    pcVar2 = *(code **)(param_1 + 0x90);
    plVar5 = (longlong *)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xa0);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,puVar1,&local_21);
    if (cVar3 == '\0') goto LAB_14968739f;
  }
  if (&local_21 != puVar1) {
    *(undefined1 *)(param_1 + 8) = local_21;
    *(undefined1 *)(param_1 + 9) = 1;
  }
  pcVar2 = *(code **)(param_1 + 0x50);
  plVar5 = (longlong *)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x60);
  }
  uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
  (*pcVar2)(uVar4,puVar1);
LAB_14968739f:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496873be FUN_1496873be body=53 status=ok
// SIG undefined FUN_1496873be(void)

void FUN_1496873be(longlong param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar4 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  *(undefined1 *)(param_1 + 8) = uVar2;
  *(undefined1 *)(param_1 + 9) = 1;
  return;
}



// FUNCTION 149687424 FUN_149687424 body=29 status=ok
// SIG undefined FUN_149687424(void)

undefined8 FUN_149687424(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149687480 FUN_149687480 body=29 status=ok
// SIG undefined FUN_149687480(void)

undefined8 FUN_149687480(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14968749e FUN_14968749e body=127 status=ok
// SIG undefined FUN_14968749e(void)

void FUN_14968749e(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bdad8d0;
  if (param_1[0x12] != 0) {
    plVar1 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(char *)((longlong)param_1 + 9) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 9) = 0;
  }
  return;
}



// FUNCTION 14968751e FUN_14968751e body=200 status=ok
// SIG undefined FUN_14968751e(void)

void FUN_14968751e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  iVar1 = *(int *)(param_1 + 1);
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    piVar2 = (int *)*param_1;
    iVar5 = 0;
    bVar10 = *piVar2 == *(int *)*param_2;
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
      } while (bVar10 == (piVar2[lVar6] == *(int *)*param_2));
      if (bVar10 == false) {
        if (iVar5 != iVar7) {
          memmove(piVar2 + iVar5,piVar2 + iVar7,(longlong)(iVar9 - iVar7) << 2);
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



// FUNCTION 1496875e6 FUN_1496875e6 body=130 status=ok
// SIG undefined FUN_1496875e6(void)

void FUN_1496875e6(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pcVar1 = *(code **)(param_1 + 0x40);
  if (pcVar1 != (code *)0x0) {
    plVar3 = (longlong *)(param_1 + 0x60);
    if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x50);
    }
    local_38 = param_2;
    uVar2 = (**(code **)(*plVar3 + 8))();
    local_48 = param_1 + 0x28;
    (*pcVar1)(uVar2,&local_38,param_1 + 0x38,param_1 + 8);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14968766a FUN_14968766a body=139 status=ok
// SIG undefined FUN_14968766a(void)

void FUN_14968766a(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pcVar1 = *(code **)(param_1 + 0x80);
  if (pcVar1 != (code *)0x0) {
    plVar3 = (longlong *)(param_1 + 0xa0);
    if (*(longlong **)(param_1 + 0x90) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x90);
    }
    local_38 = param_2;
    uVar2 = (**(code **)(*plVar3 + 8))();
    local_48 = param_1 + 0x18;
    (*pcVar1)(uVar2,&local_38,param_1 + 0x38,param_1 + 8);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496876f6 FUN_1496876f6 body=32 status=ok
// SIG undefined FUN_1496876f6(void)

undefined8 FUN_1496876f6(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Paint Vertices");
  return param_2;
}



// FUNCTION 149687716 FUN_149687716 body=38 status=ok
// SIG undefined FUN_149687716(void)

undefined8 FUN_149687716(undefined8 param_1,int param_2)

{
  FUN_1496877cc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14968773c FUN_14968773c body=32 status=ok
// SIG undefined FUN_14968773c(void)

undefined8 FUN_14968773c(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Indexed Values Change");
  return param_2;
}



// FUNCTION 14968775c FUN_14968775c body=38 status=ok
// SIG undefined FUN_14968775c(void)

undefined8 FUN_14968775c(undefined8 param_1,int param_2)

{
  FUN_1496877cc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149687784 FUN_149687784 body=72 status=ok
// SIG undefined FUN_149687784(void)

void FUN_149687784(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14bdadab0;
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



// FUNCTION 1496877cc FUN_1496877cc body=96 status=ok
// SIG undefined FUN_1496877cc(void)

void FUN_1496877cc(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14bdada60;
  if (param_1[0x10] != 0) {
    plVar1 = param_1 + 0x14;
    if ((longlong *)param_1[0x12] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x12];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[8] != 0) {
    plVar1 = param_1 + 0xc;
    if ((longlong *)param_1[10] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[10];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_149687784(param_1);
  return;
}



// FUNCTION 14968785a FUN_14968785a body=29 status=ok
// SIG undefined FUN_14968785a(void)

undefined8 FUN_14968785a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149687878 FUN_149687878 body=171 status=ok
// SIG undefined FUN_149687878(void)

void FUN_149687878(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [46];
  undefined1 local_2a;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar1 = *(code **)(param_1 + 0x10);
  if (pcVar1 != (code *)0x0) {
    local_2a = 0;
    plVar3 = (longlong *)(param_1 + 0x30);
    if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x20);
    }
    uVar2 = (**(code **)(*plVar3 + 8))();
    (*pcVar1)(uVar2,&local_2a);
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),param_2);
  pcVar1 = *(code **)(param_1 + 0x50);
  if (pcVar1 != (code *)0x0) {
    local_29 = 0;
    plVar3 = (longlong *)(param_1 + 0x70);
    if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x60);
    }
    uVar2 = (**(code **)(*plVar3 + 8))(plVar3);
    (*pcVar1)(uVar2,&local_29);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149687924 FUN_149687924 body=171 status=ok
// SIG undefined FUN_149687924(void)

void FUN_149687924(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [46];
  undefined1 local_2a;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar1 = *(code **)(param_1 + 0x10);
  if (pcVar1 != (code *)0x0) {
    local_2a = 1;
    plVar3 = (longlong *)(param_1 + 0x30);
    if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x20);
    }
    uVar2 = (**(code **)(*plVar3 + 8))();
    (*pcVar1)(uVar2,&local_2a);
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),param_2);
  pcVar1 = *(code **)(param_1 + 0x50);
  if (pcVar1 != (code *)0x0) {
    local_29 = 1;
    plVar3 = (longlong *)(param_1 + 0x70);
    if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x60);
    }
    uVar2 = (**(code **)(*plVar3 + 8))(plVar3);
    (*pcVar1)(uVar2,&local_29);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496879d0 FUN_1496879d0 body=27 status=ok
// SIG undefined FUN_1496879d0(void)

undefined8 FUN_1496879d0(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 8) + 0x30))();
  return param_2;
}



// FUNCTION 1496879ec FUN_1496879ec body=38 status=ok
// SIG undefined FUN_1496879ec(void)

undefined8 FUN_1496879ec(undefined8 param_1,int param_2)

{
  FUN_149687a12();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149687a12 FUN_149687a12 body=110 status=ok
// SIG undefined FUN_149687a12(void)

void FUN_149687a12(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14bdadb40;
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[1];
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149687a76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x40))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 149687a80 FUN_149687a80 body=230 status=ok
// SIG undefined FUN_149687a80(void)

undefined8 * FUN_149687a80(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 149687b68 FUN_149687b68 body=29 status=ok
// SIG undefined FUN_149687b68(void)

undefined8 FUN_149687b68(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149687ba0 FUN_149687ba0 body=29 status=ok
// SIG undefined FUN_149687ba0(void)

bool FUN_149687ba0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 149687bbe FUN_149687bbe body=26 status=ok
// SIG undefined FUN_149687bbe(void)

bool FUN_149687bbe(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 149687bd8 FUN_149687bd8 body=24 status=ok
// SIG undefined FUN_149687bd8(void)

bool FUN_149687bd8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 149687bfc FUN_149687bfc body=101 status=ok
// SIG undefined FUN_149687bfc(void)

void FUN_149687bfc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bdadc40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdadbd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 149687c62 FUN_149687c62 body=101 status=ok
// SIG undefined FUN_149687c62(void)

void FUN_149687c62(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bdadc40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdadbd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 149687cc8 FUN_149687cc8 body=134 status=ok
// SIG undefined FUN_149687cc8(void)

void FUN_149687cc8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14bdadc40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bdadbd0;
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
                    /* WARNING: Could not recover jumptable at 0x000149687d3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149687d4e FUN_149687d4e body=62 status=ok
// SIG undefined FUN_149687d4e(void)

void FUN_149687d4e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000149687d89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 149687d8c FUN_149687d8c body=177 status=ok
// SIG undefined FUN_149687d8c(void)

bool FUN_149687d8c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

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



// FUNCTION 149687e40 FUN_149687e40 body=29 status=ok
// SIG undefined FUN_149687e40(void)

undefined8 FUN_149687e40(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149687e5e FUN_149687e5e body=102 status=ok
// SIG undefined FUN_149687e5e(void)

undefined8 * FUN_149687e5e(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  uVar1 = DAT_14c8464e8;
  puVar2[4] = DAT_14c8464e0;
  puVar2[5] = uVar1;
  puVar2[6] = DAT_14c8464f0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0x3ff0000000000000;
  *puVar2 = &PTR_FUN_14bdadda0;
  *param_2 = puVar2;
  return param_2;
}



// FUNCTION 149687ec4 FUN_149687ec4 body=83 status=ok
// SIG undefined FUN_149687ec4(void)

undefined8 * FUN_149687ec4(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14bdac9c0;
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



// FUNCTION 149687f18 FUN_149687f18 body=225 status=ok
// SIG undefined FUN_149687f18(void)

void FUN_149687f18(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  undefined1 auStack_c8 [40];
  undefined4 local_a0;
  undefined8 *local_98;
  longlong local_90;
  undefined8 *local_88;
  longlong local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 local_68;
  undefined1 local_59;
  undefined8 local_58;
  undefined1 *local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_58 = param_2;
  plVar1 = (longlong *)FUN_14479d2ce(param_1 + 8);
  local_59 = (**(code **)(*plVar1 + 0x2e0))(plVar1);
  local_70 = &local_59;
  local_48 = &local_90;
  local_68 = param_5;
  local_98 = &local_40;
  local_40 = 0;
  local_38 = 0;
  local_50 = &LAB_149687ffa;
  local_a0 = 0;
  local_90 = param_4;
  local_88 = &local_58;
  local_80 = param_1;
  local_78 = param_3;
  FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(param_4 + 8),1);
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149688002 FUN_149688002 body=387 status=ok
// SIG undefined FUN_149688002(void)

void FUN_149688002(undefined8 *param_1,int param_2)

{
  double *pdVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double dStack_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar9 = (longlong)param_2;
  uVar2 = *(uint *)(*(longlong *)*param_1 + lVar9 * 4);
  lVar3 = *(longlong *)(*(longlong *)(*(longlong *)param_1[1] + 0x10) + (ulonglong)(uVar2 >> 9) * 8)
  ;
  local_58 = *(double *)(lVar3 + 0x10 + (ulonglong)(uVar2 & 0x1ff) * 0x18);
  pdVar1 = (double *)(lVar3 + (ulonglong)(uVar2 & 0x1ff) * 0x18);
  local_68 = *pdVar1;
  dStack_60 = pdVar1[1];
  puVar4 = *(undefined8 **)(param_1[2] + 0x10);
  uVar5 = param_1[3];
  pcVar6 = (code *)*puVar4;
  plVar8 = puVar4 + 4;
  if ((longlong *)puVar4[2] != (longlong *)0x0) {
    plVar8 = (longlong *)puVar4[2];
  }
  uVar7 = (**(code **)(*plVar8 + 8))();
  dVar10 = (double)(*pcVar6)(uVar7,uVar5,&local_68);
  if (*(char *)param_1[4] == '\x01') {
    local_88 = 0;
    FUN_1482cbf1e(&local_80,*(undefined8 *)param_1[1],uVar2,0x4024000000000000);
  }
  else {
    FUN_1482cacda(&local_80,*(undefined8 *)param_1[1],uVar2);
  }
  dVar10 = dVar10 * *(double *)(param_1[3] + 0x80);
  dVar11 = 1.0 - dVar10;
  lVar3 = *(longlong *)param_1[5];
  *(double *)(lVar3 + lVar9 * 0x18) = dVar11 * local_68 + dVar10 * local_80;
  *(double *)(lVar3 + 8 + lVar9 * 0x18) = dStack_60 * dVar11 + local_78 * dVar10;
  *(double *)(lVar3 + 0x10 + lVar9 * 0x18) = local_58 * dVar11 + local_70 * dVar10;
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149688186 FUN_149688186 body=29 status=ok
// SIG undefined FUN_149688186(void)

undefined8 FUN_149688186(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496881a4 FUN_1496881a4 body=102 status=ok
// SIG undefined FUN_1496881a4(void)

undefined8 * FUN_1496881a4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  uVar1 = DAT_14c8464e8;
  puVar2[4] = DAT_14c8464e0;
  puVar2[5] = uVar1;
  puVar2[6] = DAT_14c8464f0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0x3ff0000000000000;
  *puVar2 = &PTR_FUN_14bdade10;
  *param_2 = puVar2;
  return param_2;
}



// FUNCTION 14968820a FUN_14968820a body=83 status=ok
// SIG undefined FUN_14968820a(void)

undefined8 * FUN_14968820a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14bdac9c0;
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



// FUNCTION 14968825e FUN_14968825e body=262 status=ok
// SIG undefined FUN_14968825e(void)

void FUN_14968825e(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  undefined1 auStack_e8 [40];
  undefined4 local_c0;
  undefined8 *local_b8;
  longlong local_a8;
  undefined8 *local_a0;
  longlong local_98;
  longlong local_90;
  undefined1 *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined1 local_69;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 *local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_68 = *(undefined8 *)(param_3 + 0x88);
  local_60 = param_2;
  plVar1 = (longlong *)FUN_14479d2ce(param_1 + 8);
  local_69 = (**(code **)(*plVar1 + 0x2e0))(plVar1);
  local_88 = &local_69;
  local_50 = &local_a8;
  local_78 = param_5;
  local_b8 = &local_48;
  local_48 = 0;
  local_40 = 0;
  local_58 = &LAB_149688366;
  local_c0 = 0;
  local_a8 = param_4;
  local_a0 = &local_60;
  local_98 = param_1;
  local_90 = param_3;
  local_80 = &local_68;
  FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(param_4 + 8),1);
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14968836e FUN_14968836e body=559 status=ok
// SIG undefined FUN_14968836e(void)

void FUN_14968836e(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  double *pdVar8;
  longlong *plVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double dStack_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar2 = param_1[2];
  uVar1 = *(uint *)(*(longlong *)*param_1 + (longlong)param_2 * 4);
  lVar3 = *(longlong *)(*(longlong *)(*(longlong *)param_1[1] + 0x10) + (ulonglong)(uVar1 >> 9) * 8)
  ;
  local_78 = *(double *)(lVar3 + 0x10 + (ulonglong)(uVar1 & 0x1ff) * 0x18);
  pdVar8 = (double *)(lVar3 + (ulonglong)(uVar1 & 0x1ff) * 0x18);
  local_88 = *pdVar8;
  dStack_80 = pdVar8[1];
  local_c8 = CONCAT71(local_c8._1_7_,1);
  FUN_146c393d4(&local_a0,*(longlong *)param_1[1],uVar1,1);
  puVar4 = *(undefined8 **)(lVar2 + 0x10);
  uVar5 = param_1[3];
  pcVar6 = (code *)*puVar4;
  plVar9 = puVar4 + 4;
  if ((longlong *)puVar4[2] != (longlong *)0x0) {
    plVar9 = (longlong *)puVar4[2];
  }
  uVar7 = (**(code **)(*plVar9 + 8))();
  dVar10 = (double)(*pcVar6)(uVar7,uVar5,&local_88);
  if (*(char *)param_1[4] == '\x01') {
    local_c8 = 0;
    FUN_1482cbf1e(&local_b8,*(undefined8 *)param_1[1],uVar1,0x4024000000000000);
  }
  else {
    FUN_1482cacda(&local_b8,*(undefined8 *)param_1[1],uVar1);
  }
  dVar10 = dVar10 * *(double *)(param_1[3] + 0x80);
  dVar11 = 1.0 - dVar10;
  dVar12 = dVar11 * local_78 + local_a8 * dVar10;
  dVar13 = dVar11 * dStack_80 + local_b0 * dVar10;
  dVar10 = dVar11 * local_88 + dVar10 * local_b8;
  pdVar8 = (double *)((longlong)param_2 * 0x18 + *(longlong *)param_1[6]);
  if (0.0 <= ((dVar12 - local_78) * local_90 +
             (dVar10 - local_88) * local_a0 + (dVar13 - dStack_80) * local_98) *
             *(double *)param_1[5]) {
    *pdVar8 = dVar10;
    pdVar8[1] = dVar13;
    pdVar8[2] = dVar12;
  }
  else {
    pdVar8[2] = local_78;
    *pdVar8 = local_88;
    pdVar8[1] = dStack_80;
  }
  if ((local_70 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14968859e FUN_14968859e body=29 status=ok
// SIG undefined FUN_14968859e(void)

undefined8 FUN_14968859e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496885bc FUN_1496885bc body=102 status=ok
// SIG undefined FUN_1496885bc(void)

undefined8 * FUN_1496885bc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  uVar1 = DAT_14c8464e8;
  puVar2[4] = DAT_14c8464e0;
  puVar2[5] = uVar1;
  puVar2[6] = DAT_14c8464f0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0x3ff0000000000000;
  *puVar2 = &PTR_FUN_14bdade80;
  *param_2 = puVar2;
  return param_2;
}



// FUNCTION 149688622 FUN_149688622 body=83 status=ok
// SIG undefined FUN_149688622(void)

undefined8 * FUN_149688622(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14bdac9c0;
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



// FUNCTION 149688676 FUN_149688676 body=690 status=ok
// SIG undefined FUN_149688676(void)

void FUN_149688676(longlong param_1,undefined8 param_2,double *param_3,double param_4,
                  undefined8 param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  byte bVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_128 [40];
  undefined4 local_100;
  undefined8 *local_f8;
  double local_e8;
  undefined8 *local_e0;
  double local_d8;
  double *local_d0;
  double *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  double local_a0;
  double local_98;
  double local_90;
  undefined8 local_88;
  undefined1 *local_80;
  double *local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_128;
  dVar10 = param_3[9] - param_3[0x1d];
  dVar2 = param_3[8] - param_3[0x1c];
  dVar1 = param_3[7] - param_3[0x1b];
  local_a0 = dVar1;
  local_98 = dVar2;
  local_90 = dVar10;
  local_88 = param_2;
  lVar4 = FUN_14479d2ce(param_1 + 8);
  bVar5 = *(byte *)(lVar4 + 0xb5);
  if (*(char *)(lVar4 + 0xb4) != '\0') {
    if (bVar5 == 0) {
      bVar5 = 0;
    }
    else {
      if (*(char *)(lVar4 + 0xb6) != '\0') goto LAB_14968874d;
      bVar5 = 1;
    }
  }
  dVar6 = param_3[2] - param_3[0x16];
  dVar7 = param_3[1] - param_3[0x15];
  dVar8 = *param_3 - param_3[0x14];
  dVar9 = SQRT(dVar6 * dVar6 + dVar8 * dVar8 + dVar7 * dVar7);
  local_d8 = 0.0;
  dVar3 = 1.0 / dVar9;
  if (0.0 < dVar9) {
    dVar6 = dVar6 * dVar3;
    dVar7 = dVar7 * dVar3;
  }
  else {
    dVar7 = 0.0;
    dVar6 = 0.0;
  }
  dVar10 = SQRT(dVar10 * dVar10 + dVar1 * dVar1 + dVar2 * dVar2);
  if (*(char *)(lVar4 + 0xb4) == '\0') {
    local_e8 = 0.0;
  }
  else {
    local_e8 = (double)(-(ulonglong)(0.0 < dVar9) & (ulonglong)(dVar8 * dVar3)) * dVar10;
  }
  if ((bVar5 & 1) == 0) {
    local_e0 = (undefined8 *)0x0;
  }
  else {
    local_e0 = (undefined8 *)(dVar7 * dVar10);
  }
  if (*(char *)(lVar4 + 0xb6) != '\0') {
    local_d8 = dVar10 * dVar6;
  }
  FUN_146bf2028(param_3 + 3,&local_b8);
  FUN_146bed047(&local_a0,param_3 + 10);
LAB_14968874d:
  local_78 = &local_e8;
  local_e0 = &local_88;
  local_c8 = &local_a0;
  local_c0 = param_5;
  local_f8 = &local_b8;
  local_b8 = 0;
  local_b0 = 0;
  local_80 = &LAB_149688932;
  local_100 = 0;
  local_e8 = param_4;
  local_d8 = (double)param_1;
  local_d0 = param_3;
  FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)((longlong)param_4 + 8),1);
  if ((local_70 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14968893a FUN_14968893a body=246 status=ok
// SIG undefined FUN_14968893a(void)

void FUN_14968893a(undefined8 *param_1,int param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  code *pcVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  double dVar13;
  undefined1 auStack_68 [32];
  double local_48;
  double dStack_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar12 = (longlong)param_2;
  uVar4 = *(uint *)(*(longlong *)*param_1 + lVar12 * 4);
  lVar5 = *(longlong *)(*(longlong *)(*(longlong *)param_1[1] + 0x10) + (ulonglong)(uVar4 >> 9) * 8)
  ;
  uVar9 = (ulonglong)(uVar4 & 0x1ff);
  local_38 = *(double *)(lVar5 + 0x10 + uVar9 * 0x18);
  pdVar1 = (double *)(lVar5 + uVar9 * 0x18);
  local_48 = *pdVar1;
  dStack_40 = pdVar1[1];
  puVar6 = *(undefined8 **)(param_1[2] + 0x10);
  uVar7 = param_1[3];
  pcVar8 = (code *)*puVar6;
  plVar11 = puVar6 + 4;
  if ((longlong *)puVar6[2] != (longlong *)0x0) {
    plVar11 = (longlong *)puVar6[2];
  }
  uVar10 = (**(code **)(*plVar11 + 8))();
  dVar13 = (double)(*pcVar8)(uVar10,uVar7,&local_48);
  pdVar1 = (double *)param_1[4];
  dVar2 = pdVar1[2];
  dVar3 = pdVar1[1];
  lVar5 = *(longlong *)param_1[5];
  *(double *)(lVar5 + lVar12 * 0x18) = dVar13 * *pdVar1 + local_48;
  *(double *)(lVar5 + 8 + lVar12 * 0x18) = dVar3 * dVar13 + dStack_40;
  *(double *)(lVar5 + 0x10 + lVar12 * 0x18) = dVar2 * dVar13 + local_38;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149688a32 FUN_149688a32 body=332 status=ok
// SIG undefined FUN_149688a32(void)

undefined8 * FUN_149688a32(undefined8 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_LAB_14bdac9c0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar5 = DAT_14c8464e8;
  param_1[4] = DAT_14c8464e0;
  param_1[5] = uVar5;
  param_1[6] = DAT_14c8464f0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0x3ff0000000000000;
  *param_1 = &PTR_FUN_14bdadf00;
  param_1[0xb] = 0x4018000000000000;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  local_58 = param_1[0xc];
  local_50 = param_1[0xd];
  local_48 = param_1[0xe];
  local_40 = param_1[0xf];
  uVar5 = param_1[0x10];
  uVar6 = param_1[0x11];
  uVar7 = param_1[0x12];
  uVar8 = param_1[0x13];
  lVar9 = *param_2;
  lVar10 = param_2[1];
  lVar11 = param_2[2];
  lVar12 = param_2[3];
  lVar13 = param_2[4];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x24);
  lVar14 = param_2[5];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x34);
  lVar15 = param_2[7];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(int *)(param_1 + 0x12) = (int)param_2[6];
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar3;
  *(int *)(param_1 + 0x13) = (int)lVar15;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar4;
  *(int *)(param_1 + 0x10) = (int)lVar13;
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar1;
  *(int *)(param_1 + 0x11) = (int)lVar14;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar2;
  param_1[0xe] = lVar11;
  param_1[0xf] = lVar12;
  param_1[0xc] = lVar9;
  param_1[0xd] = lVar10;
  local_38._0_4_ = (undefined4)uVar5;
  local_38._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  uStack_30._0_4_ = (undefined4)uVar6;
  uStack_30._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_28._0_4_ = (undefined4)uVar7;
  local_28._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
  uStack_20._0_4_ = (undefined4)uVar8;
  uStack_20._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
  *(undefined4 *)(param_2 + 6) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x34) = local_28._4_4_;
  *(undefined4 *)(param_2 + 7) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x3c) = uStack_20._4_4_;
  *(undefined4 *)(param_2 + 4) = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_38._4_4_;
  *(undefined4 *)(param_2 + 5) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_30._4_4_;
  param_2[2] = local_48;
  param_2[3] = local_40;
  *param_2 = local_58;
  param_2[1] = local_50;
  local_38 = uVar5;
  uStack_30 = uVar6;
  local_28 = uVar7;
  uStack_20 = uVar8;
  if (*param_2 != 0) {
    plVar16 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar16 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar16 + 0x10))(plVar16);
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149688b80 FUN_149688b80 body=38 status=ok
// SIG undefined FUN_149688b80(void)

undefined8 FUN_149688b80(undefined8 param_1,int param_2)

{
  FUN_149688ca8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149688ba6 FUN_149688ba6 body=249 status=ok
// SIG undefined FUN_149688ba6(void)

void FUN_149688ba6(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined8 param_5)

{
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined8 *local_88;
  longlong local_80;
  undefined8 *local_78;
  longlong local_70;
  longlong local_68;
  undefined8 local_60;
  undefined1 *local_58;
  double *local_50;
  undefined1 local_41;
  double local_40;
  undefined8 local_38;
  undefined1 *local_30;
  longlong *local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = &local_38;
  local_40 = *(double *)(param_3 + 0x88) * *(double *)(param_3 + 0x80) * *(double *)(param_3 + 0x70)
             * *(double *)(param_3 + 0x98) * *(double *)(param_1 + 0x58);
  local_50 = &local_40;
  local_41 = *(longlong *)(param_3 + 0x150) != 0;
  local_58 = &local_41;
  local_28 = &local_80;
  local_60 = param_5;
  local_88 = &local_20;
  local_20 = 0;
  local_18 = 0;
  local_30 = &LAB_149688d16;
  local_90 = 0;
  local_80 = param_4;
  local_70 = param_1;
  local_68 = param_3;
  local_38 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(param_4 + 8),1);
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149688ca8 FUN_149688ca8 body=110 status=ok
// SIG undefined FUN_149688ca8(void)

void FUN_149688ca8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bdadf00;
  if (param_1[0xc] != 0) {
    plVar3 = param_1 + 0x10;
    if ((longlong *)param_1[0xe] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0xe];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  *param_1 = &PTR_LAB_14bdac9c0;
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
                    /* WARNING: Could not recover jumptable at 0x000149688d0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 149688d1e FUN_149688d1e body=594 status=ok
// SIG undefined FUN_149688d1e(void)

void FUN_149688d1e(undefined8 *param_1,int param_2)

{
  double *pdVar1;
  undefined4 *puVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  undefined8 *puVar7;
  double dVar8;
  char cVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  double dVar14;
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  double *local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  undefined1 local_c0 [24];
  undefined8 local_a8;
  undefined8 uStack_a0;
  double local_98;
  uint local_8c;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar4 = param_1[2];
  lVar13 = (longlong)param_2;
  local_8c = *(uint *)(*(longlong *)*param_1 + lVar13 * 4);
  lVar5 = *(longlong *)
           (*(longlong *)(*(longlong *)param_1[1] + 0x10) + (ulonglong)(local_8c >> 9) * 8);
  local_98 = *(double *)(lVar5 + 0x10 + (ulonglong)(local_8c & 0x1ff) * 0x18);
  pdVar1 = (double *)(lVar5 + (ulonglong)(local_8c & 0x1ff) * 0x18);
  local_a8 = *pdVar1;
  uStack_a0 = pdVar1[1];
  local_88 = *(double *)(param_1[3] + 0x70) * 4.0;
  pcVar6 = *(code **)(lVar4 + 0x60);
  plVar12 = (longlong *)(lVar4 + 0x80);
  if (*(longlong **)(lVar4 + 0x70) != (longlong *)0x0) {
    plVar12 = *(longlong **)(lVar4 + 0x70);
  }
  uVar10 = (**(code **)(*plVar12 + 8))();
  local_e0 = &local_d8;
  local_e8 = local_c0;
  cVar9 = (*pcVar6)(uVar10,&local_8c,&local_a8,&local_88);
  if (cVar9 == '\0') {
    lVar4 = *(longlong *)param_1[4];
    *(double *)(lVar4 + 0x10 + lVar13 * 0x18) = local_98;
    puVar2 = (undefined4 *)(lVar4 + lVar13 * 0x18);
    *puVar2 = (undefined4)local_a8;
    puVar2[1] = local_a8._4_4_;
    puVar2[2] = (undefined4)uStack_a0;
    puVar2[3] = uStack_a0._4_4_;
  }
  else {
    if (*(char *)param_1[5] == '\x01') {
      lVar5 = param_1[3];
      pcVar6 = *(code **)(lVar5 + 0x150);
      plVar12 = (longlong *)(lVar5 + 0x170);
      if (*(longlong **)(lVar5 + 0x160) != (longlong *)0x0) {
        plVar12 = *(longlong **)(lVar5 + 0x160);
      }
      uVar10 = (**(code **)(*plVar12 + 8))();
      dVar14 = (double)(*pcVar6)(uVar10,lVar5,&local_a8);
    }
    else {
      dVar14 = 1.0;
    }
    uVar10 = param_1[3];
    dVar3 = *(double *)param_1[6];
    puVar7 = *(undefined8 **)(lVar4 + 0x10);
    pcVar6 = (code *)*puVar7;
    plVar12 = puVar7 + 4;
    if ((longlong *)puVar7[2] != (longlong *)0x0) {
      plVar12 = (longlong *)puVar7[2];
    }
    uVar11 = (**(code **)(*plVar12 + 8))();
    dVar8 = (double)(*pcVar6)(uVar11,uVar10,&local_a8);
    dVar8 = dVar8 * dVar14;
    lVar4 = *(longlong *)param_1[4];
    *(double *)(lVar4 + lVar13 * 0x18) = dVar8 * dVar3 * local_d8 + local_a8;
    *(double *)(lVar4 + 8 + lVar13 * 0x18) = local_d0 * dVar3 * dVar8 + uStack_a0;
    *(double *)(lVar4 + 0x10 + lVar13 * 0x18) = local_c8 * dVar3 * dVar8 + local_98;
  }
  if ((local_80 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149688f72 FUN_149688f72 body=332 status=ok
// SIG undefined FUN_149688f72(void)

undefined8 * FUN_149688f72(undefined8 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_LAB_14bdac9c0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar5 = DAT_14c8464e8;
  param_1[4] = DAT_14c8464e0;
  param_1[5] = uVar5;
  param_1[6] = DAT_14c8464f0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0x3ff0000000000000;
  *param_1 = &PTR_FUN_14bdadf80;
  param_1[0xb] = 0x4018000000000000;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  local_58 = param_1[0xc];
  local_50 = param_1[0xd];
  local_48 = param_1[0xe];
  local_40 = param_1[0xf];
  uVar5 = param_1[0x10];
  uVar6 = param_1[0x11];
  uVar7 = param_1[0x12];
  uVar8 = param_1[0x13];
  lVar9 = *param_2;
  lVar10 = param_2[1];
  lVar11 = param_2[2];
  lVar12 = param_2[3];
  lVar13 = param_2[4];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x24);
  lVar14 = param_2[5];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x34);
  lVar15 = param_2[7];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(int *)(param_1 + 0x12) = (int)param_2[6];
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar3;
  *(int *)(param_1 + 0x13) = (int)lVar15;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar4;
  *(int *)(param_1 + 0x10) = (int)lVar13;
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar1;
  *(int *)(param_1 + 0x11) = (int)lVar14;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar2;
  param_1[0xe] = lVar11;
  param_1[0xf] = lVar12;
  param_1[0xc] = lVar9;
  param_1[0xd] = lVar10;
  local_38._0_4_ = (undefined4)uVar5;
  local_38._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  uStack_30._0_4_ = (undefined4)uVar6;
  uStack_30._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_28._0_4_ = (undefined4)uVar7;
  local_28._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
  uStack_20._0_4_ = (undefined4)uVar8;
  uStack_20._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
  *(undefined4 *)(param_2 + 6) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x34) = local_28._4_4_;
  *(undefined4 *)(param_2 + 7) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x3c) = uStack_20._4_4_;
  *(undefined4 *)(param_2 + 4) = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_38._4_4_;
  *(undefined4 *)(param_2 + 5) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_30._4_4_;
  param_2[2] = local_48;
  param_2[3] = local_40;
  *param_2 = local_58;
  param_2[1] = local_50;
  local_38 = uVar5;
  uStack_30 = uVar6;
  local_28 = uVar7;
  uStack_20 = uVar8;
  if (*param_2 != 0) {
    plVar16 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar16 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar16 + 0x10))(plVar16);
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496890c0 FUN_1496890c0 body=38 status=ok
// SIG undefined FUN_1496890c0(void)

undefined8 FUN_1496890c0(undefined8 param_1,int param_2)

{
  FUN_14968927c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496890e6 FUN_1496890e6 body=392 status=ok
// SIG undefined FUN_1496890e6(void)

void FUN_1496890e6(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined8 param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_f8 [40];
  undefined4 local_d0;
  undefined8 *local_c8;
  longlong local_c0;
  undefined8 *local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  double *local_90;
  double *local_88;
  undefined1 local_79;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  undefined8 local_58;
  undefined1 *local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_b8 = &local_58;
  dVar1 = *(double *)(param_3 + 0x50);
  dVar2 = *(double *)(param_3 + 0x58);
  dVar3 = *(double *)(param_3 + 0x60) + *(double *)(param_3 + 0x60);
  local_70 = dVar1 * dVar3 + *(double *)(param_3 + 0x68) * (dVar2 + dVar2);
  local_68 = dVar3 * dVar2 - (dVar1 + dVar1) * *(double *)(param_3 + 0x68);
  local_60 = 1.0 - ((dVar2 + dVar2) * dVar2 + dVar1 * (dVar1 + dVar1));
  local_88 = &local_70;
  local_78 = *(double *)(param_3 + 0x88) * *(double *)(param_3 + 0x80) * *(double *)(param_3 + 0x70)
             * *(double *)(param_3 + 0x98) * *(double *)(param_1 + 0x58);
  local_90 = &local_78;
  local_79 = *(longlong *)(param_3 + 0x150) != 0;
  local_98 = &local_79;
  local_48 = &local_c0;
  local_a0 = param_5;
  local_c8 = &local_40;
  local_40 = 0;
  local_38 = 0;
  local_50 = &LAB_1496892ea;
  local_d0 = 0;
  local_c0 = param_4;
  local_b0 = param_1;
  local_a8 = param_3;
  local_58 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(param_4 + 8),1);
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14968927c FUN_14968927c body=110 status=ok
// SIG undefined FUN_14968927c(void)

void FUN_14968927c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bdadf80;
  if (param_1[0xc] != 0) {
    plVar3 = param_1 + 0x10;
    if ((longlong *)param_1[0xe] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0xe];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  *param_1 = &PTR_LAB_14bdac9c0;
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
                    /* WARNING: Could not recover jumptable at 0x0001496892df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1496892f2 FUN_1496892f2 body=594 status=ok
// SIG undefined FUN_1496892f2(void)

void FUN_1496892f2(undefined8 *param_1,int param_2)

{
  double *pdVar1;
  undefined4 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  undefined8 *puVar10;
  double dVar11;
  char cVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong *plVar15;
  longlong lVar16;
  double dVar17;
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  undefined1 *local_e0;
  undefined1 local_d8 [24];
  undefined1 local_c0 [24];
  undefined8 local_a8;
  undefined8 uStack_a0;
  double local_98;
  uint local_8c;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar7 = param_1[2];
  lVar16 = (longlong)param_2;
  local_8c = *(uint *)(*(longlong *)*param_1 + lVar16 * 4);
  lVar8 = *(longlong *)
           (*(longlong *)(*(longlong *)param_1[1] + 0x10) + (ulonglong)(local_8c >> 9) * 8);
  local_98 = *(double *)(lVar8 + 0x10 + (ulonglong)(local_8c & 0x1ff) * 0x18);
  pdVar1 = (double *)(lVar8 + (ulonglong)(local_8c & 0x1ff) * 0x18);
  local_a8 = *pdVar1;
  uStack_a0 = pdVar1[1];
  local_88 = *(double *)(param_1[3] + 0x70) * 4.0;
  pcVar9 = *(code **)(lVar7 + 0x60);
  plVar15 = (longlong *)(lVar7 + 0x80);
  if (*(longlong **)(lVar7 + 0x70) != (longlong *)0x0) {
    plVar15 = *(longlong **)(lVar7 + 0x70);
  }
  uVar13 = (**(code **)(*plVar15 + 8))();
  local_e0 = local_d8;
  local_e8 = local_c0;
  cVar12 = (*pcVar9)(uVar13,&local_8c,&local_a8,&local_88);
  if (cVar12 == '\0') {
    lVar7 = *(longlong *)param_1[4];
    *(double *)(lVar7 + 0x10 + lVar16 * 0x18) = local_98;
    puVar2 = (undefined4 *)(lVar7 + lVar16 * 0x18);
    *puVar2 = (undefined4)local_a8;
    puVar2[1] = local_a8._4_4_;
    puVar2[2] = (undefined4)uStack_a0;
    puVar2[3] = uStack_a0._4_4_;
  }
  else {
    if (*(char *)param_1[5] == '\x01') {
      lVar8 = param_1[3];
      pcVar9 = *(code **)(lVar8 + 0x150);
      plVar15 = (longlong *)(lVar8 + 0x170);
      if (*(longlong **)(lVar8 + 0x160) != (longlong *)0x0) {
        plVar15 = *(longlong **)(lVar8 + 0x160);
      }
      uVar13 = (**(code **)(*plVar15 + 8))();
      dVar17 = (double)(*pcVar9)(uVar13,lVar8,&local_a8);
    }
    else {
      dVar17 = 1.0;
    }
    pdVar1 = (double *)param_1[7];
    uVar13 = param_1[3];
    dVar3 = *(double *)param_1[6];
    dVar4 = pdVar1[2];
    dVar5 = pdVar1[1];
    dVar6 = *pdVar1;
    puVar10 = *(undefined8 **)(lVar7 + 0x10);
    pcVar9 = (code *)*puVar10;
    plVar15 = puVar10 + 4;
    if ((longlong *)puVar10[2] != (longlong *)0x0) {
      plVar15 = (longlong *)puVar10[2];
    }
    uVar14 = (**(code **)(*plVar15 + 8))();
    dVar11 = (double)(*pcVar9)(uVar14,uVar13,&local_a8);
    dVar11 = dVar11 * dVar17;
    lVar7 = *(longlong *)param_1[4];
    *(double *)(lVar7 + lVar16 * 0x18) = dVar11 * dVar3 * dVar6 + local_a8;
    *(double *)(lVar7 + 8 + lVar16 * 0x18) = dVar5 * dVar3 * dVar11 + uStack_a0;
    *(double *)(lVar7 + 0x10 + lVar16 * 0x18) = dVar4 * dVar3 * dVar11 + local_98;
  }
  if ((local_80 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149689546 FUN_149689546 body=332 status=ok
// SIG undefined FUN_149689546(void)

undefined8 * FUN_149689546(undefined8 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_LAB_14bdac9c0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar5 = DAT_14c8464e8;
  param_1[4] = DAT_14c8464e0;
  param_1[5] = uVar5;
  param_1[6] = DAT_14c8464f0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0x3ff0000000000000;
  *param_1 = &PTR_FUN_14bdae000;
  param_1[0xb] = 0x4018000000000000;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  local_58 = param_1[0xc];
  local_50 = param_1[0xd];
  local_48 = param_1[0xe];
  local_40 = param_1[0xf];
  uVar5 = param_1[0x10];
  uVar6 = param_1[0x11];
  uVar7 = param_1[0x12];
  uVar8 = param_1[0x13];
  lVar9 = *param_2;
  lVar10 = param_2[1];
  lVar11 = param_2[2];
  lVar12 = param_2[3];
  lVar13 = param_2[4];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x24);
  lVar14 = param_2[5];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x34);
  lVar15 = param_2[7];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(int *)(param_1 + 0x12) = (int)param_2[6];
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar3;
  *(int *)(param_1 + 0x13) = (int)lVar15;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar4;
  *(int *)(param_1 + 0x10) = (int)lVar13;
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar1;
  *(int *)(param_1 + 0x11) = (int)lVar14;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar2;
  param_1[0xe] = lVar11;
  param_1[0xf] = lVar12;
  param_1[0xc] = lVar9;
  param_1[0xd] = lVar10;
  local_38._0_4_ = (undefined4)uVar5;
  local_38._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  uStack_30._0_4_ = (undefined4)uVar6;
  uStack_30._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_28._0_4_ = (undefined4)uVar7;
  local_28._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
  uStack_20._0_4_ = (undefined4)uVar8;
  uStack_20._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
  *(undefined4 *)(param_2 + 6) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x34) = local_28._4_4_;
  *(undefined4 *)(param_2 + 7) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x3c) = uStack_20._4_4_;
  *(undefined4 *)(param_2 + 4) = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_38._4_4_;
  *(undefined4 *)(param_2 + 5) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_30._4_4_;
  param_2[2] = local_48;
  param_2[3] = local_40;
  *param_2 = local_58;
  param_2[1] = local_50;
  local_38 = uVar5;
  uStack_30 = uVar6;
  local_28 = uVar7;
  uStack_20 = uVar8;
  if (*param_2 != 0) {
    plVar16 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar16 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar16 + 0x10))(plVar16);
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149689694 FUN_149689694 body=38 status=ok
// SIG undefined FUN_149689694(void)

undefined8 FUN_149689694(undefined8 param_1,int param_2)

{
  FUN_14968981a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496896ba FUN_1496896ba body=342 status=ok
// SIG undefined FUN_1496896ba(void)

void FUN_1496896ba(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  undefined1 auStack_e8 [40];
  undefined4 local_c0;
  undefined8 *local_b8;
  longlong local_a8;
  undefined8 *local_a0;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  undefined1 *local_80;
  double *local_78;
  double *local_70;
  undefined1 local_61;
  double local_60;
  double local_58;
  undefined8 local_50;
  undefined1 *local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_58 = *(double *)(param_3 + 0x88) * *(double *)(param_3 + 0x80) * *(double *)(param_3 + 0x70)
             * *(double *)(param_3 + 0x98) * *(double *)(param_1 + 0x58);
  local_50 = param_2;
  lVar1 = FUN_14479d2ce(param_1 + 8);
  if (*(char *)(lVar1 + 0xb4) == '\x01') {
    local_60 = (double)*(float *)(lVar1 + 0xb8);
  }
  else {
    local_60 = (double)*(float *)(lVar1 + 0xb0) * *(double *)(param_3 + 0x70);
  }
  local_70 = &local_60;
  local_61 = *(longlong *)(param_3 + 0x150) != 0;
  local_80 = &local_61;
  local_40 = &local_a8;
  local_a0 = &local_50;
  local_88 = param_5;
  local_78 = &local_58;
  local_b8 = &local_38;
  local_38 = 0;
  local_30 = 0;
  local_48 = &LAB_149689888;
  local_c0 = 0;
  local_a8 = param_4;
  local_98 = param_1;
  local_90 = param_3;
  FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(param_4 + 8),1);
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14968981a FUN_14968981a body=110 status=ok
// SIG undefined FUN_14968981a(void)

void FUN_14968981a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bdae000;
  if (param_1[0xc] != 0) {
    plVar3 = param_1 + 0x10;
    if ((longlong *)param_1[0xe] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0xe];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  *param_1 = &PTR_LAB_14bdac9c0;
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
                    /* WARNING: Could not recover jumptable at 0x00014968987d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 149689890 FUN_149689890 body=847 status=ok
// SIG undefined FUN_149689890(void)

void FUN_149689890(undefined8 *param_1,int param_2)

{
  double *pdVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 *puVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_128 [32];
  double *local_108;
  double *local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  double local_b8;
  uint local_ac;
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar3 = param_1[2];
  lVar13 = (longlong)param_2;
  local_ac = *(uint *)(*(longlong *)*param_1 + lVar13 * 4);
  lVar4 = *(longlong *)
           (*(longlong *)(*(longlong *)param_1[1] + 0x10) + (ulonglong)(local_ac >> 9) * 8);
  local_b8 = *(double *)(lVar4 + 0x10 + (ulonglong)(local_ac & 0x1ff) * 0x18);
  pdVar1 = (double *)(lVar4 + (ulonglong)(local_ac & 0x1ff) * 0x18);
  local_c8 = *pdVar1;
  uStack_c0 = pdVar1[1];
  local_a8 = *(double *)(param_1[3] + 0x70) * 4.0;
  pcVar5 = *(code **)(lVar3 + 0x60);
  plVar12 = (longlong *)(lVar3 + 0x80);
  if (*(longlong **)(lVar3 + 0x70) != (longlong *)0x0) {
    plVar12 = *(longlong **)(lVar3 + 0x70);
  }
  uVar10 = (**(code **)(*plVar12 + 8))();
  local_100 = &local_f8;
  local_108 = &local_e0;
  cVar9 = (*pcVar5)(uVar10,&local_ac,&local_c8,&local_a8);
  if (cVar9 == '\0') {
    lVar3 = *(longlong *)param_1[4];
    *(double *)(lVar3 + 0x10 + lVar13 * 0x18) = local_b8;
    puVar2 = (undefined4 *)(lVar3 + lVar13 * 0x18);
    *puVar2 = (undefined4)local_c8;
    puVar2[1] = local_c8._4_4_;
    puVar2[2] = (undefined4)uStack_c0;
    puVar2[3] = uStack_c0._4_4_;
  }
  else {
    if (*(char *)param_1[5] == '\x01') {
      lVar4 = param_1[3];
      pcVar5 = *(code **)(lVar4 + 0x150);
      plVar12 = (longlong *)(lVar4 + 0x170);
      if (*(longlong **)(lVar4 + 0x160) != (longlong *)0x0) {
        plVar12 = *(longlong **)(lVar4 + 0x160);
      }
      uVar10 = (**(code **)(*plVar12 + 8))();
      dVar14 = (double)(*pcVar5)(uVar10,lVar4,&local_c8);
    }
    else {
      dVar14 = 1.0;
    }
    uVar10 = param_1[3];
    dVar17 = *(double *)param_1[6];
    puVar6 = *(undefined8 **)(lVar3 + 0x10);
    pcVar5 = (code *)*puVar6;
    plVar12 = puVar6 + 4;
    if ((longlong *)puVar6[2] != (longlong *)0x0) {
      plVar12 = (longlong *)puVar6[2];
    }
    uVar11 = (**(code **)(*plVar12 + 8))();
    dVar7 = (double)(*pcVar5)(uVar11,uVar10,&local_c8);
    dVar7 = dVar7 * dVar14;
    dVar15 = local_e8 * dVar17 * dVar7 + local_b8;
    dVar16 = local_f0 * dVar17 * dVar7 + uStack_c0;
    dVar17 = dVar7 * dVar17 * local_f8 + local_c8;
    dVar7 = dVar15 - local_d0;
    dVar19 = dVar16 - local_d8;
    dVar18 = dVar17 - local_e0;
    dVar8 = dVar7 * dVar7 + dVar18 * dVar18 + dVar19 * dVar19;
    dVar14 = *(double *)param_1[7];
    if (dVar14 * dVar14 < dVar8) {
      dVar8 = SQRT(dVar8);
      dVar17 = 1.0 / dVar8;
      if (0.0 < dVar8) {
        dVar18 = dVar18 * dVar17;
        dVar19 = dVar19 * dVar17;
      }
      else {
        dVar18 = 0.0;
        dVar19 = 0.0;
      }
      dVar15 = local_d0 + (double)(-(ulonglong)(0.0 < dVar8) & (ulonglong)(dVar7 * dVar17)) * dVar14
      ;
      dVar16 = local_d8 + dVar19 * dVar14;
      dVar17 = local_e0 + dVar18 * dVar14;
    }
    lVar3 = *(longlong *)param_1[4];
    *(double *)(lVar3 + lVar13 * 0x18) = dVar17;
    *(double *)(lVar3 + 8 + lVar13 * 0x18) = dVar16;
    *(double *)(lVar3 + 0x10 + lVar13 * 0x18) = dVar15;
  }
  if ((local_a0 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149689be0 FUN_149689be0 body=29 status=ok
// SIG undefined FUN_149689be0(void)

undefined8 FUN_149689be0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149689bfe FUN_149689bfe body=116 status=ok
// SIG undefined FUN_149689bfe(void)

undefined8 * FUN_149689bfe(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  uVar1 = DAT_14c8464e8;
  puVar2[4] = DAT_14c8464e0;
  puVar2[5] = uVar1;
  puVar2[6] = DAT_14c8464f0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0x3ff0000000000000;
  *puVar2 = &PTR_FUN_14bdae070;
  puVar2[0xb] = 0x4000000000000000;
  *param_2 = puVar2;
  return param_2;
}



// FUNCTION 149689c72 FUN_149689c72 body=83 status=ok
// SIG undefined FUN_149689c72(void)

undefined8 * FUN_149689c72(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14bdac9c0;
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



// FUNCTION 149689cc6 FUN_149689cc6 body=222 status=ok
// SIG undefined FUN_149689cc6(void)

void FUN_149689cc6(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined8 param_5)

{
  undefined1 auStack_a8 [40];
  undefined4 local_80;
  undefined8 *local_78;
  longlong local_68;
  undefined8 *local_60;
  double *local_58;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  double local_38;
  undefined8 local_30;
  undefined1 *local_28;
  longlong *local_20;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_60 = &local_30;
  local_38 = *(double *)(param_3 + 0x88) * *(double *)(param_3 + 0x80) * *(double *)(param_3 + 0x70)
             * *(double *)(param_3 + 0x98) * *(double *)(param_1 + 0x58);
  local_58 = &local_38;
  local_20 = &local_68;
  local_40 = param_5;
  local_78 = &local_18;
  local_18 = 0;
  local_10 = 0;
  local_28 = &LAB_149689daa;
  local_80 = 0;
  local_68 = param_4;
  local_50 = param_1;
  local_48 = param_3;
  local_30 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(param_4 + 8),1);
  if ((local_8 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149689db2 FUN_149689db2 body=339 status=ok
// SIG undefined FUN_149689db2(void)

void FUN_149689db2(undefined8 *param_1,int param_2)

{
  double *pdVar1;
  double dVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  double dVar12;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double dStack_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar4 = param_1[3];
  lVar11 = (longlong)param_2;
  uVar3 = *(uint *)(*(longlong *)*param_1 + lVar11 * 4);
  lVar5 = *(longlong *)(*(longlong *)(*(longlong *)param_1[1] + 0x10) + (ulonglong)(uVar3 >> 9) * 8)
  ;
  local_78 = *(double *)(lVar5 + 0x10 + (ulonglong)(uVar3 & 0x1ff) * 0x18);
  pdVar1 = (double *)(lVar5 + (ulonglong)(uVar3 & 0x1ff) * 0x18);
  local_88 = *pdVar1;
  dStack_80 = pdVar1[1];
  local_a8 = 1;
  FUN_146c393d4(&local_a0,*(longlong *)param_1[1],uVar3,CONCAT71((int7)((ulonglong)local_78 >> 8),1)
               );
  uVar6 = param_1[4];
  dVar2 = *(double *)param_1[2];
  puVar7 = *(undefined8 **)(lVar4 + 0x10);
  pcVar8 = (code *)*puVar7;
  plVar10 = puVar7 + 4;
  if ((longlong *)puVar7[2] != (longlong *)0x0) {
    plVar10 = (longlong *)puVar7[2];
  }
  uVar9 = (**(code **)(*plVar10 + 8))();
  dVar12 = (double)(*pcVar8)(uVar9,uVar6,&local_88);
  lVar4 = *(longlong *)param_1[5];
  *(double *)(lVar4 + lVar11 * 0x18) = dVar2 * local_a0 * dVar12 + local_88;
  *(double *)(lVar4 + 8 + lVar11 * 0x18) = local_98 * dVar2 * dVar12 + dStack_80;
  *(double *)(lVar4 + 0x10 + lVar11 * 0x18) = local_90 * dVar2 * dVar12 + local_78;
  if ((local_70 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149689f06 FUN_149689f06 body=29 status=ok
// SIG undefined FUN_149689f06(void)

undefined8 FUN_149689f06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149689f24 FUN_149689f24 body=131 status=ok
// SIG undefined FUN_149689f24(void)

undefined8 * FUN_149689f24(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x90,0x10);
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  puVar2[0x10] = 0;
  puVar2[0x11] = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  uVar1 = DAT_14c8464e8;
  puVar2[4] = DAT_14c8464e0;
  puVar2[5] = uVar1;
  puVar2[6] = DAT_14c8464f0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0x3ff0000000000000;
  *puVar2 = &PTR_FUN_14bdae0e0;
  puVar2[0xb] = 0x4008000000000000;
  *param_2 = puVar2;
  return param_2;
}



// FUNCTION 149689fa8 FUN_149689fa8 body=83 status=ok
// SIG undefined FUN_149689fa8(void)

undefined8 * FUN_149689fa8(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14bdac9c0;
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



// FUNCTION 149689ffc FUN_149689ffc body=151 status=ok
// SIG undefined FUN_149689ffc(void)

void FUN_149689ffc(longlong param_1,undefined8 param_2,longlong param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  double dVar5;
  
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_3 + 0x48);
  uVar4 = *(undefined8 *)(param_3 + 0x40);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_3 + 0x38);
  *(undefined8 *)(param_1 + 0x68) = uVar4;
  dVar1 = *(double *)(param_3 + 0x50);
  dVar2 = *(double *)(param_3 + 0x58);
  dVar5 = *(double *)(param_3 + 0x60) + *(double *)(param_3 + 0x60);
  dVar3 = *(double *)(param_3 + 0x68);
  *(double *)(param_1 + 0x78) = dVar1 * dVar5 + dVar3 * (dVar2 + dVar2);
  *(double *)(param_1 + 0x80) = dVar5 * dVar2 - (dVar1 + dVar1) * dVar3;
  *(double *)(param_1 + 0x88) = 1.0 - ((dVar2 + dVar2) * dVar2 + dVar1 * (dVar1 + dVar1));
  return;
}



// FUNCTION 14968a094 FUN_14968a094 body=1176 status=ok
// SIG undefined FUN_14968a094(void)

void FUN_14968a094(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined8 param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_1f8 [40];
  undefined4 local_1d0;
  undefined8 *local_1c8;
  double local_1c0;
  longlong local_1b8;
  undefined8 *local_1b0;
  double *local_1a8;
  double *local_1a0;
  longlong local_198;
  undefined1 *local_190;
  undefined1 *local_188;
  double *local_180;
  double *local_178;
  undefined8 local_170;
  undefined1 local_161;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  undefined1 local_139;
  double local_138;
  double local_130;
  ulonglong local_128;
  double local_120;
  double dStack_118;
  double local_110;
  undefined8 local_108;
  undefined1 *local_100;
  longlong *local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_110 = *(double *)(param_1 + 0x70) * 0.25 + *(double *)(param_3 + 0x48) * 0.75;
  dStack_118 = *(double *)(param_1 + 0x68) * 0.25 + *(double *)(param_3 + 0x40) * 0.75;
  local_120 = *(double *)(param_1 + 0x60) * 0.25 + *(double *)(param_3 + 0x38) * 0.75;
  dVar1 = *(double *)(param_3 + 0x50);
  dVar2 = *(double *)(param_3 + 0x58);
  local_1c0 = *(double *)(param_3 + 0x68);
  dVar7 = local_110 - *(double *)(param_1 + 0x70);
  local_130 = dStack_118 - *(double *)(param_1 + 0x68);
  local_138 = local_120 - *(double *)(param_1 + 0x60);
  dVar5 = SQRT(dVar7 * dVar7 + local_138 * local_138 + local_130 * local_130);
  local_139 = 1e-08 < dVar5;
  dVar6 = 1.0 / dVar5;
  if (0.0 < dVar5) {
    local_138 = local_138 * dVar6;
    local_130 = local_130 * dVar6;
  }
  else {
    local_138 = 0.0;
    local_130 = 0.0;
  }
  local_128 = -(ulonglong)(0.0 < dVar5) & (ulonglong)(dVar7 * dVar6);
  dVar6 = *(double *)(param_1 + 0x88) * 0.25 +
          (1.0 - (dVar2 * (dVar2 + dVar2) + dVar1 * (dVar1 + dVar1))) * 0.75;
  dVar5 = *(double *)(param_3 + 0x60) + *(double *)(param_3 + 0x60);
  dVar7 = *(double *)(param_1 + 0x78) * 0.25 + ((dVar2 + dVar2) * local_1c0 + dVar1 * dVar5) * 0.75;
  dVar5 = *(double *)(param_1 + 0x80) * 0.25 + (dVar5 * dVar2 - (dVar1 + dVar1) * local_1c0) * 0.75;
  dVar1 = SQRT(dVar6 * dVar6 + dVar7 * dVar7 + dVar5 * dVar5);
  dVar2 = 1.0 / dVar1;
  if (0.0 < dVar1) {
    dVar6 = dVar6 * dVar2;
    dVar5 = dVar5 * dVar2;
  }
  else {
    dVar6 = 0.0;
    dVar5 = 0.0;
  }
  dVar3 = *(double *)(param_3 + 0x90) * *(double *)(param_3 + 0x70);
  local_148 = local_110 - dVar6 * dVar3;
  local_150 = dStack_118 - dVar5 * dVar3;
  local_158 = local_120 - dVar3 * (double)(-(ulonglong)(0.0 < dVar1) & (ulonglong)(dVar7 * dVar2));
  local_160 = *(double *)(param_3 + 0x70) * *(double *)(param_3 + 0x88) *
              *(double *)(param_3 + 0x80) * *(double *)(param_3 + 0x98) *
              *(double *)(param_1 + 0x58);
  *(double *)(param_1 + 0x70) = local_110;
  *(double *)(param_1 + 0x60) = local_120;
  *(double *)(param_1 + 0x68) = dStack_118;
  local_108 = param_2;
  lVar4 = FUN_14479d2ce(param_1 + 8);
  local_161 = *(undefined1 *)(lVar4 + 0xb4);
  local_190 = &local_161;
  local_f8 = &local_1b8;
  local_1b0 = &local_108;
  local_188 = &local_139;
  local_180 = &local_138;
  local_170 = param_5;
  local_1c8 = &local_f0;
  local_f0 = 0;
  local_e8 = 0;
  local_100 = &LAB_14968a532;
  local_1d0 = 0;
  local_1b8 = param_4;
  local_1a8 = &local_158;
  local_1a0 = &local_120;
  local_198 = param_3;
  local_178 = &local_160;
  FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(param_4 + 8),1);
  if ((local_e0 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14968a53a FUN_14968a53a body=787 status=ok
// SIG undefined FUN_14968a53a(void)

void FUN_14968a53a(undefined8 *param_1,int param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  longlong lVar5;
  double *pdVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  double dVar17;
  double dVar18;
  
  lVar10 = (longlong)param_2;
  uVar4 = *(uint *)(*(longlong *)*param_1 + lVar10 * 4);
  lVar5 = *(longlong *)(*(longlong *)(*(longlong *)param_1[1] + 0x10) + (ulonglong)(uVar4 >> 9) * 8)
  ;
  uVar11 = (ulonglong)(uVar4 & 0x1ff);
  dVar1 = *(double *)(lVar5 + uVar11 * 0x18);
  dVar2 = *(double *)(lVar5 + 8 + uVar11 * 0x18);
  dVar3 = *(double *)(lVar5 + 0x10 + uVar11 * 0x18);
  pdVar6 = (double *)param_1[2];
  dVar17 = pdVar6[2] - dVar3;
  dVar13 = pdVar6[1] - dVar2;
  dVar12 = *pdVar6 - dVar1;
  dVar8 = SQRT(dVar17 * dVar17 + dVar12 * dVar12 + dVar13 * dVar13);
  uVar15 = 0;
  uVar16 = 0x3ff00000;
  dVar14 = 1.0 / dVar8;
  if (0.0 < dVar8) {
    dVar12 = dVar12 * dVar14;
    dVar13 = dVar13 * dVar14;
  }
  else {
    dVar12 = 0.0;
    dVar13 = 0.0;
  }
  dVar14 = (double)(-(ulonglong)(0.0 < dVar8) & (ulonglong)(dVar17 * dVar14));
  pdVar6 = (double *)param_1[3];
  dVar17 = 1.0 - (SQRT((pdVar6[2] - dVar3) * (pdVar6[2] - dVar3) +
                       (*pdVar6 - dVar1) * (*pdVar6 - dVar1) +
                       (pdVar6[1] - dVar2) * (pdVar6[1] - dVar2)) / *(double *)(param_1[4] + 0x70) +
                 0.0001);
  dVar8 = 1.0;
  if (dVar17 <= 1.0) {
    dVar8 = dVar17;
  }
  dVar8 = (double)(~-(ulonglong)(dVar17 < 0.0) & (ulonglong)dVar8);
  dVar17 = *(double *)(param_1[4] + 0x78);
  if (dVar17 <= 1.0) {
    uVar15 = SUB84(dVar17,0);
    uVar16 = (undefined4)((ulonglong)dVar17 >> 0x20);
  }
  dVar17 = (double)(~-(ulonglong)(dVar17 < 0.0) & CONCAT44(uVar16,uVar15));
  dVar17 = (1.0 - dVar17) * dVar8 + dVar17 * dVar8 * dVar8 * dVar8;
  if (((*(char *)param_1[5] == '\x01') && (dVar17 < 0.699999988079071)) &&
     (*(char *)param_1[6] != '\0')) {
    dVar8 = SQRT(dVar14 * dVar14 + dVar12 * dVar12 + dVar13 * dVar13);
    dVar18 = 0.0;
    dVar9 = 1.0 / dVar8;
    if (0.0 < dVar8) {
      dVar7 = dVar14 * dVar9;
      dVar18 = dVar9 * dVar13;
    }
    else {
      dVar7 = 0.0;
    }
    pdVar6 = (double *)param_1[7];
    dVar8 = dVar7 * pdVar6[2] +
            (double)(-(ulonglong)(0.0 < dVar8) & (ulonglong)(dVar12 * dVar9)) * *pdVar6 +
            dVar18 * pdVar6[1];
    uVar11 = -(ulonglong)(-dVar8 <= dVar8);
    dVar17 = dVar17 * (1.0 - (double)(~uVar11 & (ulonglong)-dVar8 | (ulonglong)dVar8 & uVar11));
  }
  dVar17 = dVar17 * *(double *)param_1[8];
  lVar5 = *(longlong *)param_1[9];
  *(double *)(lVar5 + lVar10 * 0x18) = dVar1 + dVar12 * dVar17;
  *(double *)(lVar5 + 8 + lVar10 * 0x18) = dVar2 + dVar13 * dVar17;
  *(double *)(lVar5 + 0x10 + lVar10 * 0x18) = dVar3 + dVar14 * dVar17;
  return;
}



// FUNCTION 14968a84e FUN_14968a84e body=29 status=ok
// SIG undefined FUN_14968a84e(void)

undefined8 FUN_14968a84e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14968a86c FUN_14968a86c body=106 status=ok
// SIG undefined FUN_14968a86c(void)

undefined8 * FUN_14968a86c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  uVar1 = DAT_14c8464e8;
  puVar2[4] = DAT_14c8464e0;
  puVar2[5] = uVar1;
  puVar2[6] = DAT_14c8464f0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0x3ff0000000000000;
  *puVar2 = &PTR_FUN_14bdae150;
  puVar2[0xb] = 0x3ff0000000000000;
  *param_2 = puVar2;
  return param_2;
}



// FUNCTION 14968a8d6 FUN_14968a8d6 body=83 status=ok
// SIG undefined FUN_14968a8d6(void)

undefined8 * FUN_14968a8d6(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14bdac9c0;
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



// FUNCTION 14968a92a FUN_14968a92a body=293 status=ok
// SIG undefined FUN_14968a92a(void)

void FUN_14968a92a(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  undefined1 auStack_e8 [40];
  undefined4 local_c0;
  undefined8 *local_b8;
  longlong local_a8;
  undefined8 *local_a0;
  longlong local_98;
  undefined8 *local_90;
  longlong local_88;
  longlong local_80;
  double *local_78;
  undefined8 local_70;
  double local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_58 = param_2;
  lVar1 = FUN_14479d2ce(param_1 + 8);
  local_60 = *(undefined8 *)(&DAT_14bdae220 + (ulonglong)*(byte *)(lVar1 + 0xb4) * 8);
  local_90 = &local_60;
  local_68 = *(double *)(param_3 + 0x80) * *(double *)(param_3 + 0x70) * *(double *)(param_3 + 0x98)
             * *(double *)(param_1 + 0x58);
  local_78 = &local_68;
  local_98 = param_3 + 0x118;
  local_48 = &local_a8;
  local_70 = param_5;
  local_b8 = &local_40;
  local_40 = 0;
  local_38 = 0;
  local_50 = &LAB_14968aa54;
  local_c0 = 0;
  local_a8 = param_4;
  local_a0 = &local_58;
  local_88 = param_1;
  local_80 = param_3;
  FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(param_4 + 8),1);
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14968aa5c FUN_14968aa5c body=822 status=ok
// SIG undefined FUN_14968aa5c(void)

void FUN_14968aa5c(undefined8 *param_1,int param_2)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  double *pdVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  longlong *plVar15;
  longlong lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined1 local_e0 [24];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar5 = param_1[4];
  lVar16 = (longlong)param_2;
  uVar4 = *(uint *)(*(longlong *)*param_1 + lVar16 * 4);
  lVar6 = *(longlong *)(*(longlong *)(*(longlong *)param_1[1] + 0x10) + (ulonglong)(uVar4 >> 9) * 8)
  ;
  local_b8 = *(double *)(lVar6 + 0x10 + (ulonglong)(uVar4 & 0x1ff) * 0x18);
  puVar1 = (undefined4 *)(lVar6 + (ulonglong)(uVar4 & 0x1ff) * 0x18);
  local_c8 = *puVar1;
  uStack_c4 = puVar1[1];
  uStack_c0 = puVar1[2];
  uStack_bc = puVar1[3];
  local_e8 = 1;
  FUN_146c393d4(local_e0,*(longlong *)param_1[1],uVar4,CONCAT71((int7)((ulonglong)local_b8 >> 8),1))
  ;
  pdVar7 = (double *)param_1[2];
  dVar2 = pdVar7[3];
  dVar3 = pdVar7[4];
  dVar18 = pdVar7[5] + pdVar7[5];
  dVar17 = dVar2 * dVar18 + pdVar7[6] * (dVar3 + dVar3);
  dVar19 = dVar18 * dVar3 - (dVar2 + dVar2) * pdVar7[6];
  dVar23 = 1.0 - ((dVar3 + dVar3) * dVar3 + dVar2 * (dVar2 + dVar2));
  dVar21 = (double)CONCAT44(uStack_c4,local_c8);
  dVar22 = (double)CONCAT44(uStack_bc,uStack_c0);
  dVar18 = (local_b8 - pdVar7[2]) * dVar23 +
           (dVar21 - *pdVar7) * dVar17 + (dVar22 - pdVar7[1]) * dVar19;
  dVar2 = local_b8 - dVar23 * dVar18;
  dVar3 = dVar22 - dVar19 * dVar18;
  dVar18 = dVar21 - dVar18 * dVar17;
  dVar11 = dVar2 - local_b8;
  dVar13 = dVar3 - dVar22;
  dVar12 = dVar18 - dVar21;
  dVar25 = local_b8;
  if (0.0 <= (dVar23 * dVar11 + dVar17 * dVar12 + dVar19 * dVar13) * *(double *)param_1[3]) {
    puVar8 = *(undefined8 **)(lVar5 + 0x10);
    uVar9 = param_1[5];
    pcVar10 = (code *)*puVar8;
    plVar15 = puVar8 + 4;
    if ((longlong *)puVar8[2] != (longlong *)0x0) {
      plVar15 = (longlong *)puVar8[2];
    }
    uVar14 = (**(code **)(*plVar15 + 8))();
    dVar23 = (double)(*pcVar10)(uVar14,uVar9,&local_c8);
    dVar20 = *(double *)param_1[6] * dVar23;
    dVar24 = dVar11 * dVar20;
    dVar19 = dVar13 * dVar20;
    dVar20 = dVar20 * dVar12;
    dVar17 = SQRT(dVar11 * dVar11 + dVar12 * dVar12 + dVar13 * dVar13);
    if (dVar17 <= 0.0) {
      dVar17 = 0.0;
    }
    dVar25 = dVar2;
    dVar21 = dVar18;
    dVar22 = dVar3;
    if (dVar24 * dVar24 + dVar20 * dVar20 + dVar19 * dVar19 <= dVar17 * dVar17) {
      dVar25 = dVar24 * dVar23 + local_b8;
      dVar22 = dVar19 * dVar23 + (double)CONCAT44(uStack_bc,uStack_c0);
      dVar21 = dVar20 * dVar23 + (double)CONCAT44(uStack_c4,local_c8);
    }
  }
  lVar5 = *(longlong *)param_1[7];
  *(double *)(lVar5 + lVar16 * 0x18) = dVar21;
  *(double *)(lVar5 + 8 + lVar16 * 0x18) = dVar22;
  *(double *)(lVar5 + 0x10 + lVar16 * 0x18) = dVar25;
  if ((local_b0 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14968ad94 FUN_14968ad94 body=29 status=ok
// SIG undefined FUN_14968ad94(void)

undefined8 FUN_14968ad94(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14968adb2 FUN_14968adb2 body=156 status=ok
// SIG undefined FUN_14968adb2(void)

undefined8 * FUN_14968adb2(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x98,0x10);
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  uVar1 = DAT_14c8464e8;
  puVar2[4] = DAT_14c8464e0;
  puVar2[5] = uVar1;
  puVar2[6] = DAT_14c8464f0;
  puVar2[9] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[10] = 0x3ff0000000000000;
  *puVar2 = &PTR_FUN_14bdae1c0;
  puVar2[0xb] = 0x4018000000000000;
  puVar2[0xe] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  puVar2[0xc] = DAT_14c8464e0;
  puVar2[0xd] = uVar1;
  puVar2[0x11] = 0;
  puVar2[0xf] = 0;
  puVar2[0x10] = 0;
  puVar2[0x12] = 0x3ff0000000000000;
  *param_2 = puVar2;
  return param_2;
}



// FUNCTION 14968ae4e FUN_14968ae4e body=83 status=ok
// SIG undefined FUN_14968ae4e(void)

undefined8 * FUN_14968ae4e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14bdac9c0;
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



// FUNCTION 14968aeca FUN_14968aeca body=284 status=ok
// SIG undefined FUN_14968aeca(void)

void FUN_14968aeca(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined8 param_5)

{
  byte bVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [40];
  undefined4 local_b0;
  undefined8 *local_a8;
  longlong local_a0;
  undefined8 *local_98;
  longlong local_90;
  undefined8 *local_88;
  longlong local_80;
  double *local_78;
  undefined8 local_70;
  double local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_58 = param_2;
  plVar2 = (longlong *)FUN_14479d2ce(param_1 + 8);
  bVar1 = (**(code **)(*plVar2 + 0x2e0))(plVar2);
  local_60 = *(undefined8 *)(&DAT_14bdae220 + (ulonglong)bVar1 * 8);
  local_88 = &local_60;
  local_68 = *(double *)(param_3 + 0x80) * *(double *)(param_3 + 0x70) * *(double *)(param_3 + 0x98)
             * *(double *)(param_1 + 0x58);
  local_78 = &local_68;
  local_48 = &local_a0;
  local_70 = param_5;
  local_a8 = &local_40;
  local_40 = 0;
  local_38 = 0;
  local_50 = &LAB_14968afe8;
  local_b0 = 0;
  local_a0 = param_4;
  local_98 = &local_58;
  local_90 = param_1;
  local_80 = param_3;
  FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(param_4 + 8),1);
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14968aff0 FUN_14968aff0 body=795 status=ok
// SIG undefined FUN_14968aff0(void)

void FUN_14968aff0(undefined8 *param_1,int param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auStack_e8 [32];
  double local_c8;
  double dStack_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar5 = param_1[2];
  lVar16 = (longlong)param_2;
  uVar4 = *(uint *)(*(longlong *)*param_1 + lVar16 * 4);
  lVar6 = *(longlong *)(*(longlong *)(*(longlong *)param_1[1] + 0x10) + (ulonglong)(uVar4 >> 9) * 8)
  ;
  uVar14 = (ulonglong)(uVar4 & 0x1ff);
  local_b8 = *(double *)(lVar6 + 0x10 + uVar14 * 0x18);
  pdVar1 = (double *)(lVar6 + uVar14 * 0x18);
  local_c8 = *pdVar1;
  dStack_c0 = pdVar1[1];
  dVar2 = *(double *)(lVar5 + 0x78);
  dVar3 = *(double *)(lVar5 + 0x80);
  dVar18 = *(double *)(lVar5 + 0x88) + *(double *)(lVar5 + 0x88);
  dVar17 = dVar2 * dVar18 + *(double *)(lVar5 + 0x90) * (dVar3 + dVar3);
  dVar19 = dVar18 * dVar3 - (dVar2 + dVar2) * *(double *)(lVar5 + 0x90);
  dVar23 = 1.0 - ((dVar3 + dVar3) * dVar3 + dVar2 * (dVar2 + dVar2));
  dVar18 = (local_b8 - *(double *)(lVar5 + 0x70)) * dVar23 +
           (local_c8 - *(double *)(lVar5 + 0x60)) * dVar17 +
           (dStack_c0 - *(double *)(lVar5 + 0x68)) * dVar19;
  dVar2 = local_b8 - dVar23 * dVar18;
  dVar3 = dStack_c0 - dVar19 * dVar18;
  dVar18 = local_c8 - dVar18 * dVar17;
  dVar10 = dVar2 - local_b8;
  dVar12 = dVar3 - dStack_c0;
  dVar11 = dVar18 - local_c8;
  dVar25 = local_b8;
  dVar21 = local_c8;
  dVar22 = dStack_c0;
  if (0.0 <= (dVar23 * dVar10 + dVar17 * dVar11 + dVar19 * dVar12) * *(double *)param_1[3]) {
    puVar7 = *(undefined8 **)(lVar5 + 0x10);
    uVar8 = param_1[4];
    pcVar9 = (code *)*puVar7;
    plVar15 = puVar7 + 4;
    if ((longlong *)puVar7[2] != (longlong *)0x0) {
      plVar15 = (longlong *)puVar7[2];
    }
    uVar13 = (**(code **)(*plVar15 + 8))();
    dVar23 = (double)(*pcVar9)(uVar13,uVar8,&local_c8);
    dVar20 = *(double *)param_1[5] * dVar23;
    dVar24 = dVar10 * dVar20;
    dVar19 = dVar12 * dVar20;
    dVar20 = dVar20 * dVar11;
    dVar17 = SQRT(dVar10 * dVar10 + dVar11 * dVar11 + dVar12 * dVar12);
    if (dVar17 <= 0.0) {
      dVar17 = 0.0;
    }
    dVar25 = dVar2;
    dVar21 = dVar18;
    dVar22 = dVar3;
    if (dVar24 * dVar24 + dVar20 * dVar20 + dVar19 * dVar19 <= dVar17 * dVar17) {
      dVar25 = dVar24 * dVar23 + local_b8;
      dVar22 = dVar19 * dVar23 + dStack_c0;
      dVar21 = dVar20 * dVar23 + local_c8;
    }
  }
  lVar5 = *(longlong *)param_1[6];
  *(double *)(lVar5 + lVar16 * 0x18) = dVar21;
  *(double *)(lVar5 + 8 + lVar16 * 0x18) = dVar22;
  *(double *)(lVar5 + 0x10 + lVar16 * 0x18) = dVar25;
  if ((local_b0 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14968b30c FUN_14968b30c body=29 status=ok
// SIG undefined FUN_14968b30c(void)

undefined8 FUN_14968b30c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14968b32a FUN_14968b32a body=118 status=ok
// SIG undefined FUN_14968b32a(void)

undefined8 * FUN_14968b32a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x78,0x10);
  puVar2[0xe] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  uVar1 = DAT_14c8464e8;
  puVar2[4] = DAT_14c8464e0;
  puVar2[5] = uVar1;
  puVar2[6] = DAT_14c8464f0;
  puVar2[9] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[10] = 0x3ff0000000000000;
  puVar2[0xd] = 0x3ff0000000000000;
  *puVar2 = &PTR_FUN_14bdae250;
  *param_2 = puVar2;
  return param_2;
}



// FUNCTION 14968b3a0 FUN_14968b3a0 body=83 status=ok
// SIG undefined FUN_14968b3a0(void)

undefined8 * FUN_14968b3a0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14bdac9c0;
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



// FUNCTION 14968b3f4 FUN_14968b3f4 body=400 status=ok
// SIG undefined FUN_14968b3f4(void)

void FUN_14968b3f4(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  float fVar2;
  double dVar3;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 *local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  longlong local_80;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  undefined1 *local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14968b586();
  plVar1 = (longlong *)FUN_14479d2ce(param_1 + 8);
  fVar2 = (float)(**(code **)(*plVar1 + 0x2b8))(plVar1);
  dVar3 = *(double *)(param_3 + 0x70);
  if (dVar3 < 0.0) {
    dVar3 = sqrt(dVar3);
  }
  else {
    dVar3 = SQRT(dVar3);
  }
  local_a0 = (double)*(float *)(param_1 + 0x60) * 0.35;
  local_88 = (double)(float)((double)fVar2 * 0.025 * dVar3 * *(double *)(param_3 + 0x88));
  local_98 = 1.0 / ((double)*(float *)(param_1 + 0x58) * 12.566370964050293);
  local_90 = 1.0 / ((1.0 - (double)*(float *)(param_1 + 0x5c)) * 4.0);
  local_b8 = param_5;
  FUN_14968b638(param_1,&local_a0,param_3 + 0x38,param_4);
  local_58 = &local_80;
  local_70 = param_5;
  local_a8 = &local_50;
  local_50 = 0;
  local_48 = 0;
  local_60 = &LAB_14968bbde;
  local_b0 = 1;
  local_80 = param_3;
  local_78 = param_4;
  local_68 = param_1;
  FUN_1427ae281(L"ParallelFor Task",*(undefined4 *)(param_4 + 8),1);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14968b586 FUN_14968b586 body=177 status=ok
// SIG undefined FUN_14968b586(void)

void FUN_14968b586(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  
  *(undefined8 *)(param_1 + 0x70) = param_2;
  plVar2 = (longlong *)FUN_14479d2ce(param_1 + 8);
  fVar3 = (float)(**(code **)(*plVar2 + 0x2e0))(plVar2);
  fVar4 = (float)(**(code **)(*plVar2 + 0x2e8))(plVar2);
  uVar1 = (**(code **)(*plVar2 + 0x2f0))(plVar2);
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  *(float *)(param_1 + 0x58) = fVar3;
  fVar3 = (1.0 - (fVar4 + fVar4)) * 0.5;
  if (0.5 <= fVar3) {
    fVar3 = 0.5;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  *(float *)(param_1 + 0x5c) = fVar3;
  dVar5 = *(double *)(param_3 + 0x70);
  if (dVar5 <= 0.01) {
    dVar5 = 0.01;
  }
  *(float *)(param_1 + 0x60) = (float)dVar5;
  *(undefined4 *)(param_1 + 100) = uVar1;
  return;
}



// FUNCTION 14968b638 FUN_14968b638 body=56 status=ok
// SIG undefined FUN_14968b638(void)

void FUN_14968b638(longlong param_1)

{
  if (*(int *)(param_1 + 100) == 0) {
    FUN_14968b670();
    return;
  }
  FUN_14968b740();
  return;
}



// FUNCTION 14968b670 FUN_14968b670 body=207 status=ok
// SIG undefined FUN_14968b670(void)

void FUN_14968b670(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  undefined1 auStack_c8 [40];
  undefined4 local_a0;
  undefined8 *local_98;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar1 = *(undefined4 *)(param_4 + 8);
  FUN_14051b394(param_5,uVar1,0);
  local_58 = &local_88;
  local_78 = param_5;
  local_98 = &local_50;
  local_50 = 0;
  local_48 = 0;
  local_60 = &LAB_14968b842;
  local_a0 = 0;
  local_88 = param_2;
  local_80 = param_4;
  local_70 = param_3;
  local_68 = param_1;
  FUN_1427ae281(L"ParallelFor Task",uVar1,1);
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14968b740 FUN_14968b740 body=256 status=ok
// SIG undefined FUN_14968b740(void)

void FUN_14968b740(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined1 auStack_f8 [40];
  undefined4 local_d0;
  undefined8 *local_c8;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar1 = *(undefined4 *)(param_4 + 8);
  FUN_14051b394(param_5,uVar1,0);
  local_78 = &local_b8;
  local_a8 = param_5;
  local_98 = param_6;
  local_90 = param_7;
  local_c8 = &local_70;
  local_70 = 0;
  local_68 = 0;
  local_80 = &LAB_14968ba6c;
  local_d0 = 0;
  local_b8 = param_2;
  local_b0 = param_4;
  local_a0 = param_3;
  local_88 = param_1;
  FUN_1427ae281(L"ParallelFor Task",uVar1,1);
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14968b84a FUN_14968b84a body=545 status=ok
// SIG undefined FUN_14968b84a(void)

void FUN_14968b84a(undefined8 *param_1,int param_2)

{
  double *pdVar1;
  double dVar2;
  uint uVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_c8 [32];
  double local_a8;
  double dStack_a0;
  double local_98;
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar8 = (longlong)param_2;
  uVar3 = *(uint *)(*(longlong *)param_1[1] + lVar8 * 4);
  lVar4 = *(longlong *)
           (*(longlong *)(*(longlong *)(param_1[4] + 0x70) + 0x10) + (ulonglong)(uVar3 >> 9) * 8);
  uVar7 = (ulonglong)(uVar3 & 0x1ff);
  local_98 = *(double *)(lVar4 + 0x10 + uVar7 * 0x18);
  pdVar1 = (double *)(lVar4 + uVar7 * 0x18);
  local_a8 = *pdVar1;
  dStack_a0 = pdVar1[1];
  pdVar1 = (double *)param_1[3];
  local_78 = local_98 - pdVar1[2];
  local_80 = dStack_a0 - pdVar1[1];
  local_88 = local_a8 - *pdVar1;
  FUN_146bf2028(pdVar1 + 3,&local_a8);
  dVar2 = *(double *)*param_1;
  dVar10 = 1.0 / dVar2;
  dVar5 = local_98 * dVar10;
  dVar9 = dVar10 * dStack_a0;
  dVar10 = dVar10 * local_a8;
  dVar6 = dVar5 * dVar5 + dVar10 * dVar10 + dVar9 * dVar9 + 1.0;
  dVar2 = (1.5 / (dVar6 * SQRT(dVar6) * dVar6) + 1.0 / (SQRT(dVar6) * dVar6)) *
          dVar2 * ((double *)*param_1)[3] * 0.13333333333333333;
  local_98 = dVar5 * dVar2 + local_98;
  dStack_a0 = dVar9 * dVar2 + dStack_a0;
  local_a8 = dVar2 * dVar10 + local_a8;
  pdVar1 = (double *)param_1[3];
  FUN_146bed047(&local_88,pdVar1 + 3,&local_a8);
  dVar2 = pdVar1[2];
  dVar5 = pdVar1[1];
  lVar4 = *(longlong *)param_1[2];
  *(double *)(lVar4 + lVar8 * 0x18) = local_88 + *pdVar1;
  *(double *)(lVar4 + 8 + lVar8 * 0x18) = local_80 + dVar5;
  *(double *)(lVar4 + 0x10 + lVar8 * 0x18) = local_78 + dVar2;
  if ((local_70 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14968ba74 FUN_14968ba74 body=361 status=ok
// SIG undefined FUN_14968ba74(void)

void FUN_14968ba74(undefined8 *param_1,int param_2)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  int iVar4;
  double *pdVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  double local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar9 = (longlong)param_2;
  uVar3 = *(uint *)(*(longlong *)param_1[1] + lVar9 * 4);
  pdVar5 = (double *)param_1[3];
  lVar6 = *(longlong *)
           (*(longlong *)(*(longlong *)(param_1[6] + 0x70) + 0x10) + (ulonglong)(uVar3 >> 9) * 8);
  uVar7 = (ulonglong)(uVar3 & 0x1ff);
  local_48 = *(double *)(lVar6 + 0x10 + uVar7 * 0x18) - pdVar5[2];
  uStack_50 = *(double *)(lVar6 + 8 + uVar7 * 0x18) - pdVar5[1];
  local_58 = *(double *)(lVar6 + uVar7 * 0x18) - *pdVar5;
  FUN_146bf2028(pdVar5 + 3,&local_78);
  iVar4 = *(int *)(param_1 + 5);
  if (0 < iVar4) {
    iVar8 = 0;
    do {
      FUN_14963a902(*param_1,&local_58,&local_78,(double)param_1[4] * (1.0 / (double)iVar4));
      local_68 = local_48;
      local_78 = (undefined4)local_58;
      uStack_74 = local_58._4_4_;
      uStack_70 = (undefined4)uStack_50;
      uStack_6c = uStack_50._4_4_;
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(param_1 + 5));
  }
  pdVar5 = (double *)param_1[3];
  FUN_146bed047(&local_58,pdVar5 + 3,&local_78);
  dVar1 = pdVar5[2];
  dVar2 = pdVar5[1];
  lVar6 = *(longlong *)param_1[2];
  *(double *)(lVar6 + lVar9 * 0x18) = local_58 + *pdVar5;
  *(double *)(lVar6 + 8 + lVar9 * 0x18) = uStack_50 + dVar2;
  *(double *)(lVar6 + 0x10 + lVar9 * 0x18) = local_48 + dVar1;
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14968bbe6 FUN_14968bbe6 body=286 status=ok
// SIG undefined FUN_14968bbe6(void)

void FUN_14968bbe6(undefined8 *param_1,int param_2)

{
  double *pdVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_68 [32];
  double local_48;
  double dStack_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar10 = (longlong)param_2;
  uVar2 = *(uint *)(*(longlong *)param_1[1] + lVar10 * 4);
  lVar3 = *(longlong *)
           (*(longlong *)(*(longlong *)(param_1[3] + 0x70) + 0x10) + (ulonglong)(uVar2 >> 9) * 8);
  uVar7 = (ulonglong)(uVar2 & 0x1ff);
  local_38 = *(double *)(lVar3 + 0x10 + uVar7 * 0x18);
  pdVar1 = (double *)(lVar3 + uVar7 * 0x18);
  local_48 = *pdVar1;
  dStack_40 = pdVar1[1];
  puVar4 = *(undefined8 **)(param_1[3] + 0x10);
  uVar5 = *param_1;
  pcVar6 = (code *)*puVar4;
  plVar9 = puVar4 + 4;
  if ((longlong *)puVar4[2] != (longlong *)0x0) {
    plVar9 = (longlong *)puVar4[2];
  }
  uVar8 = (**(code **)(*plVar9 + 8))();
  dVar11 = (double)(*pcVar6)(uVar8,uVar5,&local_48);
  if (1.0 <= dVar11) {
    dVar11 = 1.0;
  }
  if (dVar11 <= 0.0) {
    dVar11 = 0.0;
  }
  lVar3 = *(longlong *)param_1[2];
  dVar12 = 1.0 - dVar11;
  *(double *)(lVar3 + lVar10 * 0x18) =
       dVar12 * local_48 + dVar11 * *(double *)(lVar3 + lVar10 * 0x18);
  *(double *)(lVar3 + 8 + lVar10 * 0x18) =
       dStack_40 * dVar12 + *(double *)(lVar3 + 8 + lVar10 * 0x18) * dVar11;
  *(double *)(lVar3 + 0x10 + lVar10 * 0x18) =
       local_38 * dVar12 + *(double *)(lVar3 + 0x10 + lVar10 * 0x18) * dVar11;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14968bd06 FUN_14968bd06 body=29 status=ok
// SIG undefined FUN_14968bd06(void)

undefined8 FUN_14968bd06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14968bd24 FUN_14968bd24 body=118 status=ok
// SIG undefined FUN_14968bd24(void)

undefined8 * FUN_14968bd24(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x78,0x10);
  puVar2[0xe] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  uVar1 = DAT_14c8464e8;
  puVar2[4] = DAT_14c8464e0;
  puVar2[5] = uVar1;
  puVar2[6] = DAT_14c8464f0;
  puVar2[9] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[10] = 0x3ff0000000000000;
  puVar2[0xd] = 0x3ff0000000000000;
  *puVar2 = &PTR_FUN_14bdae2c0;
  *param_2 = puVar2;
  return param_2;
}



// FUNCTION 14968bd9a FUN_14968bd9a body=83 status=ok
// SIG undefined FUN_14968bd9a(void)

undefined8 * FUN_14968bd9a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14bdac9c0;
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



// FUNCTION 14968bdee FUN_14968bdee body=566 status=ok
// SIG undefined FUN_14968bdee(void)

void FUN_14968bdee(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined8 param_5)

{
  double dVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined4 local_130;
  undefined8 *local_128;
  double local_120;
  double local_118;
  double local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  double local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong local_90;
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  undefined1 *local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_14968b586();
  local_110 = *(double *)(param_3 + 0x48) - *(double *)(param_3 + 0xe8);
  local_118 = *(double *)(param_3 + 0x40) - *(double *)(param_3 + 0xe0);
  local_120 = *(double *)(param_3 + 0x38) - *(double *)(param_3 + 0xd8);
  FUN_146bf2028(param_3 + 0x50,&local_a8,&local_120);
  fVar2 = *(float *)(param_1 + 0x60) * 0.6;
  *(float *)(param_1 + 0x60) = fVar2;
  local_120 = (double)fVar2;
  local_c0 = local_98;
  local_d0 = local_a8;
  uStack_c8 = uStack_a0;
  local_108 = local_a8;
  uStack_100 = uStack_a0;
  local_f8 = local_98;
  dVar1 = *(double *)(param_3 + 0x78);
  uVar3 = SUB84(dVar1,0);
  uVar4 = (undefined4)((ulonglong)dVar1 >> 0x20);
  if (1.0 <= dVar1) {
    uVar3 = 0;
    uVar4 = 0x3ff00000;
  }
  local_110 = 1.0 / ((1.0 - (double)*(float *)(param_1 + 0x5c)) * 4.0);
  local_f0 = 2.0 / (3.0 - (local_110 + local_110));
  local_b8 = local_f0 / 5.0;
  local_f0 = local_f0 / 105.0;
  local_118 = 1.0 / ((double)*(float *)(param_1 + 0x58) * 12.566370964050293);
  if ((double)CONCAT44(uVar4,uVar3) <= 0.0) {
    uVar4 = 0;
    uVar3 = 0;
  }
  local_b0 = CONCAT44(uVar4,uVar3);
  local_138 = param_5;
  local_e8 = local_120;
  local_e0 = local_118;
  local_d8 = local_110;
  FUN_14968c02e(param_1,&local_120,param_3 + 0x38,param_4);
  local_68 = &local_90;
  local_80 = param_5;
  local_128 = &local_60;
  local_60 = 0;
  local_58 = 0;
  local_70 = &LAB_14968bbde;
  local_130 = 1;
  local_90 = param_3;
  local_88 = param_4;
  local_78 = param_1;
  FUN_1427ae281(L"ParallelFor Task",*(undefined4 *)(param_4 + 8),1);
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14968c02e FUN_14968c02e body=56 status=ok
// SIG undefined FUN_14968c02e(void)

void FUN_14968c02e(longlong param_1)

{
  if (*(int *)(param_1 + 100) == 0) {
    FUN_14968c066();
    return;
  }
  FUN_14968c136();
  return;
}



// FUNCTION 14968c066 FUN_14968c066 body=207 status=ok
// SIG undefined FUN_14968c066(void)

void FUN_14968c066(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  undefined1 auStack_c8 [40];
  undefined4 local_a0;
  undefined8 *local_98;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar1 = *(undefined4 *)(param_4 + 8);
  FUN_14051b394(param_5,uVar1,0);
  local_58 = &local_88;
  local_78 = param_5;
  local_98 = &local_50;
  local_50 = 0;
  local_48 = 0;
  local_60 = &LAB_14968c238;
  local_a0 = 0;
  local_88 = param_2;
  local_80 = param_4;
  local_70 = param_3;
  local_68 = param_1;
  FUN_1427ae281(L"ParallelFor Task",uVar1,1);
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14968c136 FUN_14968c136 body=256 status=ok
// SIG undefined FUN_14968c136(void)

void FUN_14968c136(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined1 auStack_f8 [40];
  undefined4 local_d0;
  undefined8 *local_c8;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar1 = *(undefined4 *)(param_4 + 8);
  FUN_14051b394(param_5,uVar1,0);
  local_78 = &local_b8;
  local_a8 = param_5;
  local_98 = param_6;
  local_90 = param_7;
  local_c8 = &local_70;
  local_70 = 0;
  local_68 = 0;
  local_80 = &LAB_14968c394;
  local_d0 = 0;
  local_b8 = param_2;
  local_b0 = param_4;
  local_a0 = param_3;
  local_88 = param_1;
  FUN_1427ae281(L"ParallelFor Task",uVar1,1);
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14968c240 FUN_14968c240 body=338 status=ok
// SIG undefined FUN_14968c240(void)

void FUN_14968c240(undefined8 *param_1,int param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  double local_68;
  double dStack_60;
  double local_58;
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar7 = (longlong)param_2;
  uVar4 = *(uint *)(*(longlong *)param_1[1] + lVar7 * 4);
  lVar5 = *(longlong *)
           (*(longlong *)(*(longlong *)(param_1[4] + 0x70) + 0x10) + (ulonglong)(uVar4 >> 9) * 8);
  uVar6 = (ulonglong)(uVar4 & 0x1ff);
  local_58 = *(double *)(lVar5 + 0x10 + uVar6 * 0x18);
  pdVar1 = (double *)(lVar5 + uVar6 * 0x18);
  local_68 = *pdVar1;
  dStack_60 = pdVar1[1];
  pdVar1 = (double *)param_1[3];
  local_38 = local_58 - pdVar1[2];
  local_40 = dStack_60 - pdVar1[1];
  local_48 = local_68 - *pdVar1;
  FUN_146bf2028(pdVar1 + 3,&local_68);
  FUN_14963b01e(*param_1,&local_48,&local_68);
  local_58 = local_38 + local_58;
  dStack_60 = local_40 + dStack_60;
  local_68 = local_48 + local_68;
  pdVar1 = (double *)param_1[3];
  FUN_146bed047(&local_48,pdVar1 + 3,&local_68);
  dVar2 = pdVar1[2];
  dVar3 = pdVar1[1];
  lVar5 = *(longlong *)param_1[2];
  *(double *)(lVar5 + lVar7 * 0x18) = local_48 + *pdVar1;
  *(double *)(lVar5 + 8 + lVar7 * 0x18) = local_40 + dVar3;
  *(double *)(lVar5 + 0x10 + lVar7 * 0x18) = local_38 + dVar2;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14968c39c FUN_14968c39c body=361 status=ok
// SIG undefined FUN_14968c39c(void)

void FUN_14968c39c(undefined8 *param_1,int param_2)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  int iVar4;
  double *pdVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  double local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar9 = (longlong)param_2;
  uVar3 = *(uint *)(*(longlong *)param_1[1] + lVar9 * 4);
  pdVar5 = (double *)param_1[3];
  lVar6 = *(longlong *)
           (*(longlong *)(*(longlong *)(param_1[6] + 0x70) + 0x10) + (ulonglong)(uVar3 >> 9) * 8);
  uVar7 = (ulonglong)(uVar3 & 0x1ff);
  local_48 = *(double *)(lVar6 + 0x10 + uVar7 * 0x18) - pdVar5[2];
  uStack_50 = *(double *)(lVar6 + 8 + uVar7 * 0x18) - pdVar5[1];
  local_58 = *(double *)(lVar6 + uVar7 * 0x18) - *pdVar5;
  FUN_146bf2028(pdVar5 + 3,&local_78);
  iVar4 = *(int *)(param_1 + 5);
  if (0 < iVar4) {
    iVar8 = 0;
    do {
      FUN_14963b634(*param_1,&local_58,&local_78,(double)param_1[4] * (1.0 / (double)iVar4));
      local_68 = local_48;
      local_78 = (undefined4)local_58;
      uStack_74 = local_58._4_4_;
      uStack_70 = (undefined4)uStack_50;
      uStack_6c = uStack_50._4_4_;
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(param_1 + 5));
  }
  pdVar5 = (double *)param_1[3];
  FUN_146bed047(&local_58,pdVar5 + 3,&local_78);
  dVar1 = pdVar5[2];
  dVar2 = pdVar5[1];
  lVar6 = *(longlong *)param_1[2];
  *(double *)(lVar6 + lVar9 * 0x18) = local_58 + *pdVar5;
  *(double *)(lVar6 + 8 + lVar9 * 0x18) = uStack_50 + dVar2;
  *(double *)(lVar6 + 0x10 + lVar9 * 0x18) = local_48 + dVar1;
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14968c506 FUN_14968c506 body=29 status=ok
// SIG undefined FUN_14968c506(void)

undefined8 FUN_14968c506(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14968c524 FUN_14968c524 body=118 status=ok
// SIG undefined FUN_14968c524(void)

undefined8 * FUN_14968c524(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x78,0x10);
  puVar2[0xe] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  uVar1 = DAT_14c8464e8;
  puVar2[4] = DAT_14c8464e0;
  puVar2[5] = uVar1;
  puVar2[6] = DAT_14c8464f0;
  puVar2[9] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[10] = 0x3ff0000000000000;
  puVar2[0xd] = 0x3ff0000000000000;
  *puVar2 = &PTR_FUN_14bdae330;
  *param_2 = puVar2;
  return param_2;
}



// FUNCTION 14968c59a FUN_14968c59a body=83 status=ok
// SIG undefined FUN_14968c59a(void)

undefined8 * FUN_14968c59a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14bdac9c0;
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



// FUNCTION 14968c5ee FUN_14968c5ee body=585 status=ok
// SIG undefined FUN_14968c5ee(void)

void FUN_14968c5ee(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined8 param_5)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined4 local_150;
  undefined8 *local_148;
  double local_140;
  double local_138;
  double local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  double local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined1 *local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined4 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_14968b586();
  local_130 = *(double *)(param_3 + 0x48) - *(double *)(param_3 + 0xe8);
  local_138 = *(double *)(param_3 + 0x40) - *(double *)(param_3 + 0xe0);
  local_140 = *(double *)(param_3 + 0x38) - *(double *)(param_3 + 0xd8);
  FUN_146bf2028(param_3 + 0x50,&local_c8,&local_140);
  local_140 = (double)*(float *)(param_1 + 0x60);
  local_e0 = local_b8;
  local_f0 = local_c8;
  uStack_e8 = uStack_c0;
  local_128 = local_c8;
  uStack_120 = uStack_c0;
  local_118 = local_b8;
  dVar1 = *(double *)(param_3 + 0x78);
  uVar2 = SUB84(dVar1,0);
  uVar3 = (undefined4)((ulonglong)dVar1 >> 0x20);
  if (1.0 <= dVar1) {
    uVar2 = 0;
    uVar3 = 0x3ff00000;
  }
  local_138 = 1.0 / ((double)*(float *)(param_1 + 0x58) * 12.566370964050293);
  local_130 = 1.0 / ((1.0 - (double)*(float *)(param_1 + 0x5c)) * 4.0);
  dVar1 = 3.0 - (local_130 + local_130);
  local_d8 = 1.0 / (dVar1 * 10.0);
  local_110 = 1.0 / (dVar1 * 315.0);
  if ((double)CONCAT44(uVar3,uVar2) <= 0.0) {
    uVar3 = 0;
    uVar2 = 0;
  }
  local_d0 = CONCAT44(uVar3,uVar2);
  local_158 = param_5;
  local_108 = local_140;
  local_100 = local_138;
  local_f8 = local_130;
  FUN_14968c840(param_1,&local_140,param_3 + 0x38,param_4);
  local_88 = &local_b0;
  local_a0 = param_5;
  local_148 = &local_80;
  local_80 = 0;
  local_78 = 0;
  local_90 = &LAB_14968bbde;
  local_150 = 1;
  local_b0 = param_3;
  local_a8 = param_4;
  local_98 = param_1;
  FUN_1427ae281(L"ParallelFor Task",*(undefined4 *)(param_4 + 8),1);
  if ((local_70 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14968c840 FUN_14968c840 body=56 status=ok
// SIG undefined FUN_14968c840(void)

void FUN_14968c840(longlong param_1)

{
  if (*(int *)(param_1 + 100) == 0) {
    FUN_14968c878();
    return;
  }
  FUN_14968c948();
  return;
}



// FUNCTION 14968c878 FUN_14968c878 body=207 status=ok
// SIG undefined FUN_14968c878(void)

void FUN_14968c878(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  undefined1 auStack_c8 [40];
  undefined4 local_a0;
  undefined8 *local_98;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar1 = *(undefined4 *)(param_4 + 8);
  FUN_14051b394(param_5,uVar1,0);
  local_58 = &local_88;
  local_78 = param_5;
  local_98 = &local_50;
  local_50 = 0;
  local_48 = 0;
  local_60 = &LAB_14968ca4a;
  local_a0 = 0;
  local_88 = param_2;
  local_80 = param_4;
  local_70 = param_3;
  local_68 = param_1;
  FUN_1427ae281(L"ParallelFor Task",uVar1,1);
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14968c948 FUN_14968c948 body=256 status=ok
// SIG undefined FUN_14968c948(void)

void FUN_14968c948(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined1 auStack_f8 [40];
  undefined4 local_d0;
  undefined8 *local_c8;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar1 = *(undefined4 *)(param_4 + 8);
  FUN_14051b394(param_5,uVar1,0);
  local_78 = &local_b8;
  local_a8 = param_5;
  local_98 = param_6;
  local_90 = param_7;
  local_c8 = &local_70;
  local_70 = 0;
  local_68 = 0;
  local_80 = &LAB_14968cba6;
  local_d0 = 0;
  local_b8 = param_2;
  local_b0 = param_4;
  local_a0 = param_3;
  local_88 = param_1;
  FUN_1427ae281(L"ParallelFor Task",uVar1,1);
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14968ca52 FUN_14968ca52 body=338 status=ok
// SIG undefined FUN_14968ca52(void)

void FUN_14968ca52(undefined8 *param_1,int param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  double local_68;
  double dStack_60;
  double local_58;
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar7 = (longlong)param_2;
  uVar4 = *(uint *)(*(longlong *)param_1[1] + lVar7 * 4);
  lVar5 = *(longlong *)
           (*(longlong *)(*(longlong *)(param_1[4] + 0x70) + 0x10) + (ulonglong)(uVar4 >> 9) * 8);
  uVar6 = (ulonglong)(uVar4 & 0x1ff);
  local_58 = *(double *)(lVar5 + 0x10 + uVar6 * 0x18);
  pdVar1 = (double *)(lVar5 + uVar6 * 0x18);
  local_68 = *pdVar1;
  dStack_60 = pdVar1[1];
  pdVar1 = (double *)param_1[3];
  local_38 = local_58 - pdVar1[2];
  local_40 = dStack_60 - pdVar1[1];
  local_48 = local_68 - *pdVar1;
  FUN_146bf2028(pdVar1 + 3,&local_68);
  FUN_14963bbb6(*param_1,&local_48,&local_68);
  local_58 = local_38 + local_58;
  dStack_60 = local_40 + dStack_60;
  local_68 = local_48 + local_68;
  pdVar1 = (double *)param_1[3];
  FUN_146bed047(&local_48,pdVar1 + 3,&local_68);
  dVar2 = pdVar1[2];
  dVar3 = pdVar1[1];
  lVar5 = *(longlong *)param_1[2];
  *(double *)(lVar5 + lVar7 * 0x18) = local_48 + *pdVar1;
  *(double *)(lVar5 + 8 + lVar7 * 0x18) = local_40 + dVar3;
  *(double *)(lVar5 + 0x10 + lVar7 * 0x18) = local_38 + dVar2;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14968cbae FUN_14968cbae body=361 status=ok
// SIG undefined FUN_14968cbae(void)

void FUN_14968cbae(undefined8 *param_1,int param_2)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  int iVar4;
  double *pdVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  double local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar9 = (longlong)param_2;
  uVar3 = *(uint *)(*(longlong *)param_1[1] + lVar9 * 4);
  pdVar5 = (double *)param_1[3];
  lVar6 = *(longlong *)
           (*(longlong *)(*(longlong *)(param_1[6] + 0x70) + 0x10) + (ulonglong)(uVar3 >> 9) * 8);
  uVar7 = (ulonglong)(uVar3 & 0x1ff);
  local_48 = *(double *)(lVar6 + 0x10 + uVar7 * 0x18) - pdVar5[2];
  uStack_50 = *(double *)(lVar6 + 8 + uVar7 * 0x18) - pdVar5[1];
  local_58 = *(double *)(lVar6 + uVar7 * 0x18) - *pdVar5;
  FUN_146bf2028(pdVar5 + 3,&local_78);
  iVar4 = *(int *)(param_1 + 5);
  if (0 < iVar4) {
    iVar8 = 0;
    do {
      FUN_14963c446(*param_1,&local_58,&local_78,(double)param_1[4] * (1.0 / (double)iVar4));
      local_68 = local_48;
      local_78 = (undefined4)local_58;
      uStack_74 = local_58._4_4_;
      uStack_70 = (undefined4)uStack_50;
      uStack_6c = uStack_50._4_4_;
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(param_1 + 5));
  }
  pdVar5 = (double *)param_1[3];
  FUN_146bed047(&local_58,pdVar5 + 3,&local_78);
  dVar1 = pdVar5[2];
  dVar2 = pdVar5[1];
  lVar6 = *(longlong *)param_1[2];
  *(double *)(lVar6 + lVar9 * 0x18) = local_58 + *pdVar5;
  *(double *)(lVar6 + 8 + lVar9 * 0x18) = uStack_50 + dVar2;
  *(double *)(lVar6 + 0x10 + lVar9 * 0x18) = local_48 + dVar1;
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14968cd18 FUN_14968cd18 body=29 status=ok
// SIG undefined FUN_14968cd18(void)

undefined8 FUN_14968cd18(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14968cd36 FUN_14968cd36 body=118 status=ok
// SIG undefined FUN_14968cd36(void)

undefined8 * FUN_14968cd36(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x78,0x10);
  puVar2[0xe] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  uVar1 = DAT_14c8464e8;
  puVar2[4] = DAT_14c8464e0;
  puVar2[5] = uVar1;
  puVar2[6] = DAT_14c8464f0;
  puVar2[9] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[10] = 0x3ff0000000000000;
  puVar2[0xd] = 0x3ff0000000000000;
  *puVar2 = &PTR_FUN_14bdae3a0;
  *param_2 = puVar2;
  return param_2;
}



// FUNCTION 14968cdac FUN_14968cdac body=83 status=ok
// SIG undefined FUN_14968cdac(void)

undefined8 * FUN_14968cdac(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14bdac9c0;
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



// FUNCTION 14968ce00 FUN_14968ce00 body=389 status=ok
// SIG undefined FUN_14968ce00(void)

void FUN_14968ce00(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  float fVar2;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 *local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  undefined8 local_b8;
  double local_b0;
  undefined8 local_a8;
  double local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined1 *local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_14968b586();
  plVar1 = (longlong *)FUN_14479d2ce(param_1 + 8);
  fVar2 = (float)(**(code **)(*plVar1 + 0x2b8))(plVar1);
  local_a0 = (double)(float)((double)fVar2 * *(double *)(param_3 + 0x88));
  local_d0 = (double)*(float *)(param_1 + 0x60);
  local_c8 = 1.0 / ((double)*(float *)(param_1 + 0x58) * 12.566370964050293);
  local_c0 = 1.0 / ((1.0 - (double)*(float *)(param_1 + 0x5c)) * 4.0);
  local_b0 = -local_a0;
  local_b8 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_90 = 0x8000000000000000;
  local_88 = 0x8000000000000000;
  local_80 = 0;
  uStack_78 = 0;
  local_e8 = param_5;
  FUN_14968cf8a(param_1,&local_d0,param_3 + 0x38,param_4);
  local_48 = &local_70;
  local_60 = param_5;
  local_d8 = &local_40;
  local_40 = 0;
  local_38 = 0;
  local_50 = &LAB_14968bbde;
  local_e0 = 1;
  local_70 = param_3;
  local_68 = param_4;
  local_58 = param_1;
  FUN_1427ae281(L"ParallelFor Task",*(undefined4 *)(param_4 + 8),1);
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14968cf8a FUN_14968cf8a body=56 status=ok
// SIG undefined FUN_14968cf8a(void)

void FUN_14968cf8a(longlong param_1)

{
  if (*(int *)(param_1 + 100) == 0) {
    FUN_14968cfc2();
    return;
  }
  FUN_14968d092();
  return;
}



// FUNCTION 14968cfc2 FUN_14968cfc2 body=207 status=ok
// SIG undefined FUN_14968cfc2(void)

void FUN_14968cfc2(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  undefined1 auStack_c8 [40];
  undefined4 local_a0;
  undefined8 *local_98;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar1 = *(undefined4 *)(param_4 + 8);
  FUN_14051b394(param_5,uVar1,0);
  local_58 = &local_88;
  local_78 = param_5;
  local_98 = &local_50;
  local_50 = 0;
  local_48 = 0;
  local_60 = &LAB_14968d194;
  local_a0 = 0;
  local_88 = param_2;
  local_80 = param_4;
  local_70 = param_3;
  local_68 = param_1;
  FUN_1427ae281(L"ParallelFor Task",uVar1,1);
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14968d092 FUN_14968d092 body=256 status=ok
// SIG undefined FUN_14968d092(void)

void FUN_14968d092(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined1 auStack_f8 [40];
  undefined4 local_d0;
  undefined8 *local_c8;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar1 = *(undefined4 *)(param_4 + 8);
  FUN_14051b394(param_5,uVar1,0);
  local_78 = &local_b8;
  local_a8 = param_5;
  local_98 = param_6;
  local_90 = param_7;
  local_c8 = &local_70;
  local_70 = 0;
  local_68 = 0;
  local_80 = &LAB_14968d2f0;
  local_d0 = 0;
  local_b8 = param_2;
  local_b0 = param_4;
  local_a0 = param_3;
  local_88 = param_1;
  FUN_1427ae281(L"ParallelFor Task",uVar1,1);
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14968d19c FUN_14968d19c body=338 status=ok
// SIG undefined FUN_14968d19c(void)

void FUN_14968d19c(undefined8 *param_1,int param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  double local_68;
  double dStack_60;
  double local_58;
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar7 = (longlong)param_2;
  uVar4 = *(uint *)(*(longlong *)param_1[1] + lVar7 * 4);
  lVar5 = *(longlong *)
           (*(longlong *)(*(longlong *)(param_1[4] + 0x70) + 0x10) + (ulonglong)(uVar4 >> 9) * 8);
  uVar6 = (ulonglong)(uVar4 & 0x1ff);
  local_58 = *(double *)(lVar5 + 0x10 + uVar6 * 0x18);
  pdVar1 = (double *)(lVar5 + uVar6 * 0x18);
  local_68 = *pdVar1;
  dStack_60 = pdVar1[1];
  pdVar1 = (double *)param_1[3];
  local_38 = local_58 - pdVar1[2];
  local_40 = dStack_60 - pdVar1[1];
  local_48 = local_68 - *pdVar1;
  FUN_146bf2028(pdVar1 + 3,&local_68);
  FUN_14963d97c(*param_1,&local_48,&local_68);
  local_58 = local_38 + local_58;
  dStack_60 = local_40 + dStack_60;
  local_68 = local_48 + local_68;
  pdVar1 = (double *)param_1[3];
  FUN_146bed047(&local_48,pdVar1 + 3,&local_68);
  dVar2 = pdVar1[2];
  dVar3 = pdVar1[1];
  lVar5 = *(longlong *)param_1[2];
  *(double *)(lVar5 + lVar7 * 0x18) = local_48 + *pdVar1;
  *(double *)(lVar5 + 8 + lVar7 * 0x18) = local_40 + dVar3;
  *(double *)(lVar5 + 0x10 + lVar7 * 0x18) = local_38 + dVar2;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14968d2f8 FUN_14968d2f8 body=361 status=ok
// SIG undefined FUN_14968d2f8(void)

void FUN_14968d2f8(undefined8 *param_1,int param_2)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  int iVar4;
  double *pdVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  double local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar9 = (longlong)param_2;
  uVar3 = *(uint *)(*(longlong *)param_1[1] + lVar9 * 4);
  pdVar5 = (double *)param_1[3];
  lVar6 = *(longlong *)
           (*(longlong *)(*(longlong *)(param_1[6] + 0x70) + 0x10) + (ulonglong)(uVar3 >> 9) * 8);
  uVar7 = (ulonglong)(uVar3 & 0x1ff);
  local_48 = *(double *)(lVar6 + 0x10 + uVar7 * 0x18) - pdVar5[2];
  uStack_50 = *(double *)(lVar6 + 8 + uVar7 * 0x18) - pdVar5[1];
  local_58 = *(double *)(lVar6 + uVar7 * 0x18) - *pdVar5;
  FUN_146bf2028(pdVar5 + 3,&local_78);
  iVar4 = *(int *)(param_1 + 5);
  if (0 < iVar4) {
    iVar8 = 0;
    do {
      FUN_14963dcfe(*param_1,&local_58,&local_78,(double)param_1[4] * (1.0 / (double)iVar4));
      local_68 = local_48;
      local_78 = (undefined4)local_58;
      uStack_74 = local_58._4_4_;
      uStack_70 = (undefined4)uStack_50;
      uStack_6c = uStack_50._4_4_;
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(param_1 + 5));
  }
  pdVar5 = (double *)param_1[3];
  FUN_146bed047(&local_58,pdVar5 + 3,&local_78);
  dVar1 = pdVar5[2];
  dVar2 = pdVar5[1];
  lVar6 = *(longlong *)param_1[2];
  *(double *)(lVar6 + lVar9 * 0x18) = local_58 + *pdVar5;
  *(double *)(lVar6 + 8 + lVar9 * 0x18) = uStack_50 + dVar2;
  *(double *)(lVar6 + 0x10 + lVar9 * 0x18) = local_48 + dVar1;
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14968d462 FUN_14968d462 body=199 status=ok
// SIG undefined FUN_14968d462(void)

undefined8 * FUN_14968d462(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14bdae400;
  *(undefined1 *)((longlong)param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[6] = &PTR_LAB_14bdae420;
  param_1[7] = param_2;
  param_1[2] = &LAB_14968d656;
  param_1[10] = *param_3;
  param_1[0xc] = param_3[2];
  param_3[2] = 0;
  lVar5 = param_3[4];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar6 = param_3[5];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  lVar7 = param_3[7];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(param_1 + 0x10) = (int)param_3[6];
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(int *)(param_1 + 0x11) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
  *(int *)(param_1 + 0xe) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
  *(int *)(param_1 + 0xf) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar2;
  if (param_1[10] != 0) {
    *param_3 = 0;
  }
  param_1[0x14] = 0;
  param_1[0x16] = &PTR_LAB_14bdae440;
  param_1[0x17] = &LAB_14968d6a4;
  param_1[0x12] = &LAB_14968d6ac;
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 14968d52a FUN_14968d52a body=38 status=ok
// SIG undefined FUN_14968d52a(void)

undefined8 FUN_14968d52a(undefined8 param_1,int param_2)

{
  FUN_14968d700();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14968d550 FUN_14968d550 body=207 status=ok
// SIG undefined FUN_14968d550(void)

void FUN_14968d550(longlong param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar5 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x20);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_21 = (*pcVar2)(uVar4);
  puVar1 = (undefined1 *)(param_1 + 8);
  if (*(char *)(param_1 + 9) == '\x01') {
    pcVar2 = *(code **)(param_1 + 0x90);
    plVar5 = (longlong *)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xa0);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,puVar1,&local_21);
    if (cVar3 == '\0') goto LAB_14968d601;
  }
  if (&local_21 != puVar1) {
    *(undefined1 *)(param_1 + 8) = local_21;
    *(undefined1 *)(param_1 + 9) = 1;
  }
  pcVar2 = *(code **)(param_1 + 0x50);
  plVar5 = (longlong *)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x60);
  }
  uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
  (*pcVar2)(uVar4,puVar1);
LAB_14968d601:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14968d620 FUN_14968d620 body=53 status=ok
// SIG undefined FUN_14968d620(void)

void FUN_14968d620(longlong param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar4 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  *(undefined1 *)(param_1 + 8) = uVar2;
  *(undefined1 *)(param_1 + 9) = 1;
  return;
}



// FUNCTION 14968d686 FUN_14968d686 body=29 status=ok
// SIG undefined FUN_14968d686(void)

undefined8 FUN_14968d686(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14968d6e2 FUN_14968d6e2 body=29 status=ok
// SIG undefined FUN_14968d6e2(void)

undefined8 FUN_14968d6e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14968d700 FUN_14968d700 body=127 status=ok
// SIG undefined FUN_14968d700(void)

void FUN_14968d700(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bdae400;
  if (param_1[0x12] != 0) {
    plVar1 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(char *)((longlong)param_1 + 9) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 9) = 0;
  }
  return;
}



// FUNCTION 14968d780 FUN_14968d780 body=199 status=ok
// SIG undefined FUN_14968d780(void)

undefined8 * FUN_14968d780(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14bdae480;
  *(undefined1 *)((longlong)param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[6] = &PTR_LAB_14bdae4a0;
  param_1[7] = param_2;
  param_1[2] = &LAB_14968d974;
  param_1[10] = *param_3;
  param_1[0xc] = param_3[2];
  param_3[2] = 0;
  lVar5 = param_3[4];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar6 = param_3[5];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  lVar7 = param_3[7];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(param_1 + 0x10) = (int)param_3[6];
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(int *)(param_1 + 0x11) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
  *(int *)(param_1 + 0xe) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
  *(int *)(param_1 + 0xf) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar2;
  if (param_1[10] != 0) {
    *param_3 = 0;
  }
  param_1[0x14] = 0;
  param_1[0x16] = &PTR_LAB_14bdae4c0;
  param_1[0x17] = &LAB_14968d9c2;
  param_1[0x12] = &LAB_14968d9ca;
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 14968d848 FUN_14968d848 body=38 status=ok
// SIG undefined FUN_14968d848(void)

undefined8 FUN_14968d848(undefined8 param_1,int param_2)

{
  FUN_14968da1e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14968d86e FUN_14968d86e body=207 status=ok
// SIG undefined FUN_14968d86e(void)

void FUN_14968d86e(longlong param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar5 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x20);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_21 = (*pcVar2)(uVar4);
  puVar1 = (undefined1 *)(param_1 + 8);
  if (*(char *)(param_1 + 9) == '\x01') {
    pcVar2 = *(code **)(param_1 + 0x90);
    plVar5 = (longlong *)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xa0);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,puVar1,&local_21);
    if (cVar3 == '\0') goto LAB_14968d91f;
  }
  if (&local_21 != puVar1) {
    *(undefined1 *)(param_1 + 8) = local_21;
    *(undefined1 *)(param_1 + 9) = 1;
  }
  pcVar2 = *(code **)(param_1 + 0x50);
  plVar5 = (longlong *)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x60);
  }
  uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
  (*pcVar2)(uVar4,puVar1);
LAB_14968d91f:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14968d93e FUN_14968d93e body=53 status=ok
// SIG undefined FUN_14968d93e(void)

void FUN_14968d93e(longlong param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar4 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  *(undefined1 *)(param_1 + 8) = uVar2;
  *(undefined1 *)(param_1 + 9) = 1;
  return;
}



// FUNCTION 14968d9a4 FUN_14968d9a4 body=29 status=ok
// SIG undefined FUN_14968d9a4(void)

undefined8 FUN_14968d9a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14968da00 FUN_14968da00 body=29 status=ok
// SIG undefined FUN_14968da00(void)

undefined8 FUN_14968da00(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14968da1e FUN_14968da1e body=127 status=ok
// SIG undefined FUN_14968da1e(void)

void FUN_14968da1e(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bdae480;
  if (param_1[0x12] != 0) {
    plVar1 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(char *)((longlong)param_1 + 9) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 9) = 0;
  }
  return;
}



// FUNCTION 14968da9e FUN_14968da9e body=296 status=ok
// SIG undefined FUN_14968da9e(void)

void FUN_14968da9e(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_d8 [40];
  undefined4 local_b0;
  undefined8 *local_a8;
  longlong local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  undefined1 *local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar1 = (int)param_2[1];
  FUN_14478085e(param_3,iVar1,0);
  FUN_1448c4dd6(param_4,iVar1,0);
  local_60 = &local_98;
  local_a8 = &local_58;
  local_58 = 0;
  local_50 = 0;
  local_68 = &LAB_14968dbc8;
  local_b0 = 0;
  local_98 = param_1;
  local_90 = param_2;
  local_88 = param_4;
  local_80 = param_3;
  FUN_1401f8d10(L"ParallelFor Task",iVar1,1);
  if (0 < (longlong)iVar1) {
    lVar3 = 0;
    do {
      if (*(char *)(*param_4 + lVar3) == '\x01') {
        uVar2 = *(undefined4 *)(*param_3 + lVar3 * 4);
        FUN_146c14aac(*(undefined8 *)(param_1 + 0x1d0),&local_98,
                      *(undefined4 *)(*param_2 + lVar3 * 4));
        FUN_146c87142(param_1,*(undefined4 *)(*param_2 + lVar3 * 4),&local_98,uVar2);
      }
      lVar3 = lVar3 + 1;
    } while (iVar1 != lVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14968dbd0 FUN_14968dbd0 body=151 status=ok
// SIG undefined FUN_14968dbd0(void)

void FUN_14968dbd0(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined1 auStack_88 [40];
  undefined1 local_60 [48];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *param_1;
  lVar3 = (longlong)param_2;
  FUN_146c14aac(*(undefined8 *)(lVar1 + 0x1d0),local_60,
                *(undefined4 *)(*(longlong *)param_1[1] + lVar3 * 4));
  uVar2 = FUN_146c87088(lVar1,*(undefined4 *)(*(longlong *)param_1[1] + lVar3 * 4),local_60,
                        lVar3 * 4 + *(longlong *)param_1[3]);
  *(undefined1 *)(*(longlong *)param_1[2] + lVar3) = uVar2;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14968dc68 FUN_14968dc68 body=35 status=ok
// SIG undefined FUN_14968dc68(void)

void FUN_14968dc68(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14968dc8c FUN_14968dc8c body=171 status=ok
// SIG undefined FUN_14968dc8c(void)

void FUN_14968dc8c(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [46];
  undefined1 local_2a;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar1 = *(code **)(param_1 + 0x10);
  if (pcVar1 != (code *)0x0) {
    local_2a = 0;
    plVar3 = (longlong *)(param_1 + 0x30);
    if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x20);
    }
    uVar2 = (**(code **)(*plVar3 + 8))();
    (*pcVar1)(uVar2,&local_2a);
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),param_2);
  pcVar1 = *(code **)(param_1 + 0x50);
  if (pcVar1 != (code *)0x0) {
    local_29 = 0;
    plVar3 = (longlong *)(param_1 + 0x70);
    if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x60);
    }
    uVar2 = (**(code **)(*plVar3 + 8))(plVar3);
    (*pcVar1)(uVar2,&local_29);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14968dd38 FUN_14968dd38 body=171 status=ok
// SIG undefined FUN_14968dd38(void)

void FUN_14968dd38(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [46];
  undefined1 local_2a;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar1 = *(code **)(param_1 + 0x10);
  if (pcVar1 != (code *)0x0) {
    local_2a = 1;
    plVar3 = (longlong *)(param_1 + 0x30);
    if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x20);
    }
    uVar2 = (**(code **)(*plVar3 + 8))();
    (*pcVar1)(uVar2,&local_2a);
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),param_2);
  pcVar1 = *(code **)(param_1 + 0x50);
  if (pcVar1 != (code *)0x0) {
    local_29 = 1;
    plVar3 = (longlong *)(param_1 + 0x70);
    if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x60);
    }
    uVar2 = (**(code **)(*plVar3 + 8))(plVar3);
    (*pcVar1)(uVar2,&local_29);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14968dde4 FUN_14968dde4 body=27 status=ok
// SIG undefined FUN_14968dde4(void)

undefined8 FUN_14968dde4(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 8) + 0x30))();
  return param_2;
}



// FUNCTION 14968de00 FUN_14968de00 body=38 status=ok
// SIG undefined FUN_14968de00(void)

undefined8 FUN_14968de00(undefined8 param_1,int param_2)

{
  FUN_14968de26();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14968de26 FUN_14968de26 body=110 status=ok
// SIG undefined FUN_14968de26(void)

void FUN_14968de26(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14bdae620;
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[1];
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014968de8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x40))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 14968de94 FUN_14968de94 body=29 status=ok
// SIG undefined FUN_14968de94(void)

undefined8 FUN_14968de94(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14968dee6 FUN_14968dee6 body=76 status=ok
// SIG undefined FUN_14968dee6(void)

void FUN_14968dee6(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 0xa8);
    if (*(int *)(lVar2 + 0x138) == 0) {
      *(undefined4 *)(lVar2 + 0x138) = 7;
    }
  }
  return;
}



// FUNCTION 14968df32 FUN_14968df32 body=76 status=ok
// SIG undefined FUN_14968df32(void)

void FUN_14968df32(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 0xa8);
    if (*(int *)(lVar2 + 0x138) == 0) {
      *(undefined4 *)(lVar2 + 0x138) = 5;
    }
  }
  return;
}



// FUNCTION 14968df7e FUN_14968df7e body=76 status=ok
// SIG undefined FUN_14968df7e(void)

void FUN_14968df7e(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 0xa8);
    if (*(int *)(lVar2 + 0x138) == 0) {
      *(undefined4 *)(lVar2 + 0x138) = 6;
    }
  }
  return;
}



// FUNCTION 14968dfca FUN_14968dfca body=76 status=ok
// SIG undefined FUN_14968dfca(void)

void FUN_14968dfca(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 0xa8);
    if (*(int *)(lVar2 + 0x138) == 0) {
      *(undefined4 *)(lVar2 + 0x138) = 2;
    }
  }
  return;
}



// FUNCTION 14968e016 FUN_14968e016 body=76 status=ok
// SIG undefined FUN_14968e016(void)

void FUN_14968e016(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 0xa8);
    if (*(int *)(lVar2 + 0x138) == 0) {
      *(undefined4 *)(lVar2 + 0x138) = 3;
    }
  }
  return;
}



// FUNCTION 14968e062 FUN_14968e062 body=76 status=ok
// SIG undefined FUN_14968e062(void)

void FUN_14968e062(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 0xa8);
    if (*(int *)(lVar2 + 0x138) == 0) {
      *(undefined4 *)(lVar2 + 0x138) = 1;
    }
  }
  return;
}



// FUNCTION 14968e0ae FUN_14968e0ae body=76 status=ok
// SIG undefined FUN_14968e0ae(void)

void FUN_14968e0ae(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 0xa8);
    if (*(int *)(lVar2 + 0x138) == 0) {
      *(undefined4 *)(lVar2 + 0x138) = 4;
    }
  }
  return;
}



// FUNCTION 14968e113 FUN_14968e113 body=175 status=ok
// SIG undefined FUN_14968e113(void)

undefined8 FUN_14968e113(undefined8 param_1)

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
  local_b8 = FUN_1459fb6ce();
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



// FUNCTION 14968e1c4 FUN_14968e1c4 body=1151 status=ok
// SIG undefined FUN_14968e1c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14968e1c4(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  undefined8 *_Dst;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_1b8 [40];
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  undefined1 local_140 [16];
  double local_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined1 local_e8 [16];
  double local_d8;
  undefined8 uStack_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  _Dst = (undefined8 *)FUN_14001cc68(0xd8);
  memset(_Dst,0,0xd8);
  FUN_14845abbc(_Dst);
  *_Dst = &PTR_FUN_14bdcb820;
  _Dst[0x11] = 0;
  _Dst[0x12] = 0;
  _Dst[0x19] = 0x3ee4f8b588000000;
  *(undefined4 *)(_Dst + 0x1a) = 0x1010101;
  *(undefined1 *)((longlong)_Dst + 0xd4) = 0;
  lVar3 = *(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 8) + 0xe0) +
           (longlong)*(int *)(param_1 + 0x10) * 8);
  uVar4 = *(undefined8 *)(lVar3 + 0x30);
  lVar3 = *(longlong *)(lVar3 + 0x38);
  if (lVar3 == 0) {
    _Dst[0x11] = uVar4;
    _Dst[0x12] = 0;
  }
  else {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
    plVar5 = (longlong *)_Dst[0x12];
    _Dst[0x11] = uVar4;
    _Dst[0x12] = lVar3;
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
  lVar3 = *(longlong *)(param_1 + 8);
  *(bool *)((longlong)_Dst + 0xd2) = *(char *)(*(longlong *)(lVar3 + 0xc0) + 0xa8) == '\0';
  *(undefined1 *)(_Dst + 0x1a) = *(undefined1 *)(*(longlong *)(lVar3 + 0xc0) + 0xa9);
  *(undefined1 *)((longlong)_Dst + 0xd1) = *(undefined1 *)(*(longlong *)(lVar3 + 0xc0) + 0xaa);
  *(undefined1 *)((longlong)_Dst + 0xd3) = *(undefined1 *)(*(longlong *)(lVar3 + 0xc0) + 0xab);
  _Dst[0x19] = *(undefined8 *)(*(longlong *)(lVar3 + 0xc0) + 0xb0);
  *(undefined1 *)((longlong)_Dst + 0xd4) = *(undefined1 *)(*(longlong *)(lVar3 + 0xc0) + 0xb8);
  FUN_1485063a5(&local_128,
                *(undefined8 *)
                 (*(longlong *)(lVar3 + 0xa0) + (longlong)*(int *)(param_1 + 0x10) * 8));
  dVar10 = DAT_14c846520;
  auVar9 = _DAT_14c846510;
  dVar6 = DAT_14c846510;
  dVar7 = DAT_14c846510._8_8_;
  local_e8 = _DAT_14c846510;
  local_d8 = DAT_14c846520;
  uStack_d0 = 0;
  local_178 = local_128;
  dStack_170 = dStack_120;
  local_168 = local_118;
  dStack_160 = dStack_110;
  local_158 = local_108;
  dStack_150 = dStack_100;
  local_148 = local_f8;
  local_140 = _DAT_14c846510;
  local_130 = DAT_14c846520;
  FUN_148460e20(_Dst,&local_178);
  lVar3 = *(longlong *)(param_1 + 8);
  dVar15 = *(double *)(lVar3 + 0x100) - local_108;
  dVar16 = *(double *)(lVar3 + 0x108) - dStack_100;
  dVar11 = *(double *)(lVar3 + 0x110) - local_f8;
  dVar18 = -local_128;
  dVar19 = -dStack_120;
  dVar13 = local_118 * -1.0;
  dVar14 = dStack_110 * 1.0;
  dVar20 = dVar15 * dVar13 - dVar18 * dVar11;
  dVar17 = dVar16 * dVar18 - dVar19 * dVar15;
  dVar8 = dVar11 * dVar19 - dVar13 * dVar16;
  dVar8 = dVar8 + dVar8;
  dVar20 = dVar20 + dVar20;
  dVar17 = dVar17 + dVar17;
  auVar12 = divpd(_DAT_149934d80,auVar9);
  _Dst[0x13] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar6)) & auVar12._0_8_) *
               ((dVar17 * dVar19 - dVar20 * dVar13) + dVar14 * dVar8 + dVar15);
  _Dst[0x14] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar7)) & auVar12._8_8_) *
               (local_128 * dVar17 + dVar13 * dVar8 + dVar14 * dVar20 + dVar16);
  _Dst[0x15] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar10)) & (ulonglong)(1.0 / dVar10)
                       ) * (dVar14 * dVar17 + dVar11 + (dVar20 * dVar18 - dVar8 * dVar19));
  local_178 = local_128;
  dStack_170 = dStack_120;
  local_168 = local_118;
  dStack_160 = dStack_110;
  local_158 = local_108;
  dStack_150 = dStack_100;
  local_148 = local_f8;
  local_140 = auVar9;
  local_130 = dVar10;
  FUN_146c5d0c4(&local_178,&local_190,lVar3 + 0x118);
  _Dst[0x18] = local_180;
  _Dst[0x16] = local_190;
  _Dst[0x17] = uStack_188;
  *param_2 = _Dst;
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14968e682 FUN_14968e682 body=270 status=ok
// SIG undefined FUN_14968e682(void)

void FUN_14968e682(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 != 0) {
    lVar2 = *(longlong *)(param_3 + 0x20);
    FUN_1446f470e(&local_30,L"bShowPreview",1);
    if (lVar2 == local_30) {
      if (0 < *(int *)(param_1 + 0xa8)) {
        lVar2 = 0;
        do {
          if (*(char *)(*(longlong *)(param_1 + 0xc0) + 0xb9) == '\0') {
            FUN_14850635b(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + lVar2 * 8));
          }
          else {
            FUN_148506321();
          }
          lVar2 = lVar2 + 1;
        } while (lVar2 < *(int *)(param_1 + 0xa8));
      }
      iVar1 = *(int *)(param_1 + 0xf8);
      if ((longlong)iVar1 != 0) {
        lVar2 = *(longlong *)(param_1 + 0xf0);
        lVar3 = 0;
        do {
          FUN_1485054ca(*(undefined8 *)(lVar2 + lVar3),
                        *(undefined1 *)(*(longlong *)(param_1 + 0xc0) + 0xb9));
          lVar3 = lVar3 + 8;
        } while ((longlong)iVar1 * 8 != lVar3);
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0xf8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xf0);
    lVar3 = 0;
    do {
      FUN_1485051e4(*(undefined8 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14968e792 FUN_14968e792 body=131 status=ok
// SIG undefined FUN_14968e792(void)

void FUN_14968e792(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x138) != 0) {
    FUN_14968e816(param_1);
    *(undefined4 *)(param_1 + 0x138) = 0;
  }
  plVar2 = *(longlong **)(param_1 + 0x130);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x2b8))(plVar2,param_2);
  }
  iVar1 = *(int *)(param_1 + 0xf8);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0xf0);
    lVar4 = 0;
    do {
      FUN_148505016(*(undefined8 *)(lVar3 + lVar4),param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 14968e816 FUN_14968e816 body=538 status=ok
// SIG undefined FUN_14968e816(void)

void FUN_14968e816(longlong param_1,int param_2)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  double local_68;
  double dStack_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(double *)(param_1 + 0x158);
  local_58 = (*(double *)(param_1 + 0x150) + *(double *)(param_1 + 0x168)) * 0.5;
  dStack_60 = (*(double *)(param_1 + 0x148) + *(double *)(param_1 + 0x160)) * 0.5;
  dVar1 = (*(double *)(param_1 + 0x140) + local_68) * 0.5;
  if (param_2 == 1) {
    uVar2 = *(undefined8 *)(param_1 + 0x130);
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uVar3 = 1;
    local_68 = dVar1;
    goto LAB_14968e9cd;
  }
  switch(param_2) {
  case 2:
    uStack_80 = 0xbff0000000000000;
    dStack_60 = *(double *)(param_1 + 0x148);
    goto LAB_14968e985;
  case 3:
    uStack_80 = 0x3ff0000000000000;
    dStack_60 = *(double *)(param_1 + 0x160);
LAB_14968e985:
    local_78 = 0;
    break;
  case 4:
    uStack_80 = 0;
    local_78 = 0x3ff0000000000000;
    local_58 = *(double *)(param_1 + 0x168);
    break;
  case 5:
    uStack_80 = 0;
    local_78 = 0xbff0000000000000;
    local_58 = *(double *)(param_1 + 0x150);
    break;
  case 6:
    local_88 = 0x3ff0000000000000;
    goto LAB_14968ea1d;
  case 7:
    local_88 = 0xbff0000000000000;
    local_68 = *(double *)(param_1 + 0x140);
LAB_14968ea1d:
    uStack_80 = 0;
    local_78 = 0;
    dVar1 = local_68;
  default:
    goto switchD_14968e906_default;
  }
  local_88 = 0;
switchD_14968e906_default:
  local_68 = dVar1;
  if (*(char *)(*(longlong *)(param_1 + 0xd8) + 0xb0) == '\x01') {
    local_58 = *(double *)(param_1 + 0x110);
    local_68 = *(double *)(param_1 + 0x100);
    dStack_60 = *(double *)(param_1 + 0x108);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x130);
  uVar3 = 0;
LAB_14968e9cd:
  FUN_1484f1816(uVar2,&local_68,&local_88,uVar3);
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14968ea46 FUN_14968ea46 body=2816 status=ok
// SIG undefined FUN_14968ea46(void)

void FUN_14968ea46(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  double dVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  wchar_t *pwVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStack_3e8 [32];
  undefined1 local_3c8;
  longlong *local_3b8;
  undefined1 local_3b0 [8];
  longlong *local_3a8;
  longlong *local_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  double local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 local_340;
  wchar_t *local_338;
  double dStack_330;
  double local_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  code *local_118;
  undefined8 local_108;
  undefined **local_f8;
  longlong *local_f0;
  code *local_d8;
  undefined8 local_c8;
  undefined **local_b8;
  longlong *local_b0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  FUN_1484416be();
  local_338 = L"ToolName";
  dStack_330._0_4_ = 8;
  FUN_1446e940c(&local_398,&local_338);
  local_338 = L"UMirrorTool";
  dStack_330 = (double)CONCAT44(dStack_330._4_4_,0xb);
  FUN_1446e940c(local_3b0,&local_338);
  FUN_140208bae(&local_338,local_3b0,&local_398,L"Mirror");
  (**(code **)(*param_1 + 0x370))(param_1,&local_338);
  if (local_338 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_338 + 0x10))();
  }
  plVar8 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  local_338 = L"OnStartMirrorTool";
  dStack_330._0_4_ = 0x11;
  FUN_1446e940c(&local_398,&local_338);
  local_338 = L"UMirrorTool";
  dStack_330 = (double)CONCAT44(dStack_330._4_4_,0xb);
  FUN_1446e940c(local_3b0,&local_338);
  FUN_140208bae(&local_338,local_3b0,&local_398,
                L"Mirror one or more meshes across a plane. Ctrl+[shift+]clicking on a spot on the original mesh will place the plane there. Buttons will reset it."
               );
  (**(code **)(*plVar8 + 0x340))(plVar8,&local_338,2);
  if (local_338 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_338 + 0x10))();
  }
  FUN_1446f470e(&local_340,L"Mirror Tool Settings",1);
  plVar8 = (longlong *)FUN_14968f547(param_1,local_340);
  if ((plVar8 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar8);
  }
  param_1[0x18] = (longlong)plVar8;
  FUN_140056680(&local_338,&DAT_149dfb77a);
  (**(code **)(*plVar8 + 0x2a8))(plVar8,param_1,&local_338);
  if (local_338 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x18]);
  lVar9 = FUN_1484c5a9a(param_1);
  if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar9);
  }
  param_1[0x19] = lVar9;
  FUN_14851cc7c(lVar9);
  FUN_144a787a6(param_1[0x19] + 0xa8,&DAT_14cb4d6a0);
  (**(code **)(*(longlong *)param_1[0x19] + 0x2a8))
            ((longlong *)param_1[0x19],param_1,&DAT_14cc21558);
  local_c8 = 0;
  local_b8 = &PTR_LAB_14bdcb840;
  local_d8 = FUN_144579b7a;
  local_b0 = param_1;
  FUN_1484c5b30(param_1[0x19] + 0x28,param_1[0x19] + 0xa8);
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x19]);
  plVar8 = (longlong *)FUN_148f4c9e5(param_1);
  if ((plVar8 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar8);
  }
  param_1[0x1a] = (longlong)plVar8;
  (**(code **)(*plVar8 + 0x2a8))(plVar8,param_1,&DAT_14cc21558);
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x1a]);
  lVar9 = FUN_14968f60f(param_1);
  if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar9);
  }
  param_1[0x1b] = lVar9;
  FUN_14485c47a(lVar9 + 0xa8,param_1);
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x1b]);
  local_108 = 0;
  local_f8 = &PTR_LAB_14bdcb8c0;
  local_118 = FUN_144579c66;
  local_f0 = param_1;
  FUN_14968f6c0(param_1[0x18] + 0x28,param_1[0x18] + 0xba);
  FUN_14968f796(param_1);
  if (0 < (int)param_1[0x15]) {
    local_3b8 = param_1 + 0x1c;
    lVar9 = 0;
    do {
      plVar10 = (longlong *)FUN_14001cc68(0x230,0x10);
      plVar10[1] = (longlong)&DAT_100000001;
      *plVar10 = (longlong)&PTR_FUN_149fab260;
      plVar8 = plVar10 + 2;
      local_3c8 = 0;
      FUN_1411b354a(plVar8,0,0,0);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
        LOCK();
        plVar11 = plVar10 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
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
      uStack_390 = (double)((ulonglong)uStack_390 & 0xffffffff00000000);
      local_398 = (undefined8 *)0x3e800000000;
      FUN_148506727(&local_338,*(undefined8 *)(param_1[0x14] + lVar9 * 8),&local_398);
      FUN_146c00942(plVar8,&local_338);
      FUN_141082778(&local_338);
      FUN_1485063a5(&local_338,*(undefined8 *)(param_1[0x14] + lVar9 * 8));
      local_398 = (undefined8 *)DAT_14c846480;
      uStack_390 = (double)DAT_14c846488;
      local_388 = DAT_14c846490;
      uStack_380 = DAT_14c846498;
      local_378 = DAT_14c8464a0;
      uStack_370 = DAT_14c8464a8;
      local_368 = DAT_14c8464b0;
      local_360 = local_2f8;
      uStack_358 = uStack_2f0;
      local_350 = local_2e8;
      FUN_146c3cd49(plVar8,&local_398,1);
      plVar11 = (longlong *)FUN_149690085(DAT_14c951640);
      if ((plVar11 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(plVar11);
      }
      iVar2 = (int)param_1[0x1d];
      *(uint *)(param_1 + 0x1d) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0xec) < iVar2 + 1U) {
        FUN_1496c68f2(local_3b8,iVar2);
      }
      lVar3 = *local_3b8;
      *(longlong **)(lVar3 + (longlong)iVar2 * 8) = plVar11;
      if ((plVar11 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(plVar11);
        plVar11 = *(longlong **)(lVar3 + (longlong)iVar2 * 8);
      }
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
      }
      local_3a8 = plVar8;
      local_3a0 = plVar10;
      (**(code **)(*plVar11 + 0x2a0))(plVar11,&local_3a8);
      local_398 = (undefined8 *)0x0;
      uStack_390 = (double)((ulonglong)uStack_390 & 0xffffffff00000000);
      FUN_1446efa72(&local_398,0,3);
      puVar6 = local_398;
      uStack_390 = (double)CONCAT44(uStack_390._4_4_,3);
      *local_398 = &PTR_LAB_149e020b0;
      uVar12 = FUN_144a3f946();
      puVar6[2] = uVar12;
      *puVar6 = &PTR_FUN_14bdcb8e0;
      puVar6[3] = param_1;
      *(int *)(puVar6 + 4) = (int)lVar9;
      FUN_1448b6402(plVar11 + 8,local_3b0);
      FUN_1449db362(&local_398);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar10 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
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
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)param_1[0x15]);
    if (0 < (int)param_1[0x15]) {
      lVar9 = 0;
      do {
        if (*(char *)(param_1[0x18] + 0xb9) == '\0') {
          FUN_14850635b(*(undefined8 *)(param_1[0x14] + lVar9 * 8));
        }
        else {
          FUN_148506321();
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < (int)param_1[0x15]);
    }
  }
  FUN_149690136(param_1);
  param_1[0x2d] = DAT_14c8464f0;
  lVar9 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x2b] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x2c] = lVar9;
  uVar5 = DAT_14c8464e8._4_4_;
  uVar21 = (undefined4)DAT_14c8464e8;
  uVar20 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x28) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x144) = uVar20;
  *(undefined4 *)(param_1 + 0x29) = uVar21;
  *(undefined4 *)((longlong)param_1 + 0x14c) = uVar5;
  param_1[0x2a] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  if ((int)param_1[0x15] < 1) {
    dVar17 = (double)param_1[0x2a];
    dVar4 = (double)param_1[0x2d];
    dVar19 = (double)param_1[0x28];
    dVar14 = (double)param_1[0x29];
    dVar16 = (double)param_1[0x2c];
    dVar18 = (double)param_1[0x2b];
  }
  else {
    lVar9 = 0;
    do {
      plVar8 = (longlong *)FUN_1485062af(*(undefined8 *)(param_1[0x14] + lVar9 * 8));
      local_3c8 = 0;
      (**(code **)(*plVar8 + 800))(plVar8,0,&local_338,&local_398);
      dVar4 = local_328 + local_388;
      dVar16 = dStack_330 + uStack_390;
      dVar18 = (double)local_338 + (double)local_398;
      dVar17 = local_328 - local_388;
      dVar14 = dStack_330 - uStack_390;
      dVar19 = (double)local_338 - (double)local_398;
      if ((char)param_1[0x2e] == '\0') {
        param_1[0x28] = (longlong)dVar19;
        param_1[0x29] = (longlong)dVar14;
        *(undefined1 *)(param_1 + 0x2e) = 1;
      }
      else {
        dVar15 = (double)param_1[0x28];
        if (dVar19 <= (double)param_1[0x28]) {
          dVar15 = dVar19;
        }
        dVar19 = dVar15;
        param_1[0x28] = (longlong)dVar19;
        dVar15 = (double)param_1[0x29];
        if (dVar14 <= (double)param_1[0x29]) {
          dVar15 = dVar14;
        }
        dVar14 = dVar15;
        param_1[0x29] = (longlong)dVar14;
        dVar15 = (double)param_1[0x2a];
        if (dVar17 <= (double)param_1[0x2a]) {
          dVar15 = dVar17;
        }
        dVar17 = (double)param_1[0x2b];
        if ((double)param_1[0x2b] <= dVar18) {
          dVar17 = dVar18;
        }
        dVar18 = dVar17;
        dVar17 = (double)param_1[0x2c];
        if ((double)param_1[0x2c] <= dVar16) {
          dVar17 = dVar16;
        }
        dVar16 = dVar17;
        dVar17 = (double)param_1[0x2d];
        uVar20 = SUB84(dVar17,0);
        uVar21 = (undefined4)((ulonglong)dVar17 >> 0x20);
        if (dVar17 <= dVar4) {
          uVar20 = SUB84(dVar4,0);
          uVar21 = (undefined4)((ulonglong)dVar4 >> 0x20);
        }
        dVar4 = (double)CONCAT44(uVar21,uVar20);
        dVar17 = dVar15;
      }
      param_1[0x2a] = (longlong)dVar17;
      param_1[0x2b] = (longlong)dVar18;
      param_1[0x2c] = (longlong)dVar16;
      param_1[0x2d] = (longlong)dVar4;
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)param_1[0x15]);
  }
  param_1[0x20] = (longlong)((dVar18 + dVar19) * 0.5);
  param_1[0x21] = (longlong)((dVar16 + dVar14) * 0.5);
  param_1[0x22] = (longlong)((dVar4 + dVar17) * 0.5);
  param_1[0x23] = 0;
  param_1[0x24] = -0x4010000000000000;
  param_1[0x25] = 0;
  if ((*(char *)(param_1[0x18] + 0xa8) == '\0') || (*(char *)(param_1[0x18] + 0xa9) == '\x01')) {
    param_1[0x21] = (longlong)dVar14;
  }
  plVar8 = (longlong *)FUN_148f54d86(param_1);
  if ((plVar8 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar8);
  }
  param_1[0x26] = (longlong)plVar8;
  (**(code **)(*plVar8 + 0x2a0))(plVar8,param_1);
  lVar9 = param_1[0x26];
  local_310 = 0;
  local_320 = 0;
  uStack_318 = 0;
  local_308 = 0x3ff0000000000000;
  local_338 = (wchar_t *)param_1[0x20];
  dStack_330 = (double)param_1[0x21];
  local_328 = (double)param_1[0x22];
  local_388 = (double)DAT_14c8463c8;
  local_398 = (undefined8 *)CONCAT44(DAT_14c8463b8._4_4_,(undefined4)DAT_14c8463b8);
  uStack_390 = (double)CONCAT44(DAT_14c8463c0._4_4_,(undefined4)DAT_14c8463c0);
  FUN_146bfb7f2(&local_320,&local_398,param_1 + 0x23);
  uVar12 = (**(code **)(*param_1 + 0x390))(param_1);
  FUN_1484f0d7a(lVar9,uVar12,&local_338);
  lVar9 = param_1[0x26];
  local_338 = (wchar_t *)0x0;
  dStack_330 = (double)((ulonglong)dStack_330 & 0xffffffff00000000);
  FUN_1446efa72(&local_338,0,2,0x10);
  pwVar7 = local_338;
  dStack_330 = (double)CONCAT44(dStack_330._4_4_,2);
  *(undefined ***)local_338 = &PTR_LAB_149e020b0;
  uVar12 = FUN_144a3f946();
  *(undefined8 *)(pwVar7 + 8) = uVar12;
  *(undefined ***)pwVar7 = &PTR_FUN_14bdcb950;
  *(longlong **)(pwVar7 + 0xc) = param_1;
  FUN_1448b6402(lVar9 + 0xb0,&local_398,&local_338);
  FUN_1449db362(&local_338);
  if (0 < (int)param_1[0x15]) {
    lVar9 = 0;
    do {
      lVar3 = *(longlong *)(param_1[0x26] + 0xd8);
      uVar12 = FUN_1485062e8(*(undefined8 *)(param_1[0x14] + lVar9 * 8));
      iVar2 = *(int *)(lVar3 + 0xb8);
      *(uint *)(lVar3 + 0xb8) = iVar2 + 1U;
      if (*(uint *)(lVar3 + 0xbc) < iVar2 + 1U) {
        FUN_140097524((longlong *)(lVar3 + 0xb0),iVar2);
      }
      *(undefined8 *)(*(longlong *)(lVar3 + 0xb0) + (longlong)iVar2 * 8) = uVar12;
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)param_1[0x15]);
  }
  lVar9 = param_1[0x1f];
  if ((longlong)(int)lVar9 != 0) {
    lVar3 = param_1[0x1e];
    lVar13 = 0;
    do {
      FUN_1485051e4(*(undefined8 *)(lVar3 + lVar13));
      lVar13 = lVar13 + 8;
    } while ((longlong)(int)lVar9 * 8 != lVar13);
  }
  if ((local_90 ^ (ulonglong)auStack_3e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14968f547 FUN_14968f547 body=199 status=ok
// SIG undefined FUN_14968f547(void)

undefined8 FUN_14968f547(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_b8 = FUN_1459fb5e2();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  uStack_a0 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14968f60f FUN_14968f60f body=175 status=ok
// SIG undefined FUN_14968f60f(void)

undefined8 FUN_14968f60f(undefined8 param_1)

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
  local_b8 = FUN_14599d862();
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



// FUNCTION 14968f6c0 FUN_14968f6c0 body=212 status=ok
// SIG undefined FUN_14968f6c0(void)

void FUN_14968f6c0(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = FUN_14001cc68(0xd0,0x10);
  local_68[0] = *param_3;
  local_58[0] = 0;
  if (local_68[0] != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)*plVar3)(plVar3,local_58);
  }
  FUN_1496c65d4(uVar2,param_2,local_68);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14588c84a(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  if (*param_3 != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14968f796 FUN_14968f796 body=2286 status=ok
// SIG undefined FUN_14968f796(void)

void FUN_14968f796(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  byte bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  byte bVar8;
  longlong **pplVar9;
  longlong lVar10;
  undefined1 auStack_1f8 [40];
  undefined8 local_1d0;
  longlong *local_1c8;
  longlong *local_1c0;
  undefined4 local_1b8;
  longlong *local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  longlong *local_198;
  longlong *local_190 [2];
  undefined1 local_180 [4];
  undefined1 local_17c [4];
  longlong *local_178 [2];
  undefined8 local_168;
  longlong *local_160;
  longlong *local_158 [2];
  longlong *local_148 [2];
  longlong *local_138 [2];
  longlong local_128;
  undefined8 uStack_120;
  longlong *local_118;
  undefined4 local_110;
  longlong *local_108;
  undefined4 local_100;
  undefined8 local_f8;
  longlong *local_f0;
  wchar_t **local_e8;
  double *local_e0;
  longlong local_d8;
  undefined4 local_d0;
  wchar_t *local_c8;
  undefined4 local_c0 [2];
  longlong *local_b8 [2];
  undefined4 local_a8 [4];
  undefined1 local_98 [16];
  double local_88;
  double dStack_80;
  double local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  FUN_144a5dc74(&local_108);
  FUN_144a5dc74(&local_118);
  local_128 = 0;
  uStack_120 = 0;
  bVar3 = FUN_1484ca7f2(param_1);
  if (bVar3 != 0) {
    local_c8 = L"MirrorMultipleAssetsWithSameSource";
    local_c0[0] = 0x22;
    FUN_1446e940c(&local_d8,&local_c8);
    local_c8 = L"UMirrorTool";
    local_c0[0] = 0xb;
    FUN_1446e940c(&local_e8,&local_c8);
    FUN_140208bae(&local_c8,&local_e8,&local_d8,
                  L"WARNING: Multiple meshes in your selection use the same source asset! Only the \"Create New Assets\" save mode is supported."
                 );
    FUN_140008f88(&local_108,&local_c8);
    if (local_c8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_c8 + 0x10))();
    }
  }
  if ((int)param_1[0x15] < 1) {
LAB_14968fd66:
    bVar8 = 0;
    plVar7 = (longlong *)0x0;
  }
  else {
    lVar10 = 0;
    plVar7 = (longlong *)0x0;
    do {
      lVar2 = *(longlong *)(param_1[0x14] + lVar10 * 8);
      if (lVar2 == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        uVar4 = FUN_145a7b1c0();
        plVar5 = (longlong *)FUN_144718840(lVar2,uVar4);
      }
      (**(code **)(*plVar5 + 0x28))(plVar5,&local_c8);
      plVar6 = plVar7;
      if (dStack_80 != local_88 || local_78 != dStack_80) {
        plVar6 = plVar5;
      }
      if ((dStack_80 == 0.0 || local_88 == 0.0) || local_78 == 0.0) {
        if (plVar5 != (longlong *)0x0) {
          lVar10 = (**(code **)(*plVar5 + 0x18))(plVar5);
          local_c8 = *(wchar_t **)(lVar10 + 0x18);
          FUN_1400021e4(&local_c8,local_158);
          FUN_140233b1a(local_148,local_158);
          local_c8 = L"MirrorZeroScaledAsset";
          local_c0[0] = 0x15;
          FUN_1446e940c(local_17c,&local_c8);
          local_c8 = L"UMirrorTool";
          local_c0[0] = 0xb;
          FUN_1446e940c(local_180,&local_c8);
          FUN_140208bae(local_178,local_180,local_17c,
                        L"WARNING: The item \"{0}\" has a zero-scale on at least one axis. Mirroring cannot be correctly applied in this case. Consider instead baking the scale before mirroring."
                       );
          FUN_14023409e(&local_168,local_178,1);
          local_c8 = (wchar_t *)CONCAT44(local_c8._4_4_,4);
          FUN_14023423e(local_b8,local_148);
          local_e0 = (double *)local_a8;
          local_e8 = &local_c8;
          FUN_14010d304(&local_d8);
          local_f8 = local_168;
          local_f0 = local_160;
          if (local_160 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_160 + 1) = (int)local_160[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(local_138,&local_f8,&local_d8);
          FUN_14007f2db(local_d8,local_d0);
          if (local_d8 != 0) {
            FUN_1400020a8();
          }
          if (local_b8[0] != (longlong *)0x0) {
            (**(code **)(*local_b8[0] + 0x10))();
          }
          if (local_160 != (longlong *)0x0) {
            LOCK();
            plVar5 = local_160 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)*plVar5 == 0) {
              (**(code **)*local_160)(local_160);
              LOCK();
              piVar1 = (int *)((longlong)local_160 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_160 + 0x10))(local_160);
              }
            }
          }
          if (local_148[0] != (longlong *)0x0) {
            (**(code **)(*local_148[0] + 0x10))();
          }
          FUN_140008f88(&local_118,local_138);
          if (local_138[0] != (longlong *)0x0) {
            (**(code **)(*local_138[0] + 0x10))();
          }
          if (local_178[0] != (longlong *)0x0) {
            (**(code **)(*local_178[0] + 0x10))();
          }
          if (local_158[0] != (longlong *)0x0) {
            FUN_1400020a8();
          }
          bVar8 = 1;
          goto LAB_14968fd6a;
        }
        break;
      }
      lVar10 = lVar10 + 1;
      plVar7 = plVar6;
    } while (lVar10 < (int)param_1[0x15]);
    if (plVar7 == (longlong *)0x0) goto LAB_14968fd66;
    lVar10 = (**(code **)(*plVar7 + 0x18))(plVar7);
    local_c8 = *(wchar_t **)(lVar10 + 0x18);
    FUN_1400021e4(&local_c8,local_158);
    FUN_140233b1a(local_190,local_158);
    local_c8 = L"MirrorNonUniformScaledAsset";
    local_c0[0] = 0x1b;
    FUN_1446e940c(local_17c,&local_c8);
    local_c8 = L"UMirrorTool";
    local_c0[0] = 0xb;
    FUN_1446e940c(local_180,&local_c8);
    FUN_140208bae(local_178,local_180,local_17c,
                  L"WARNING: The item \"{0}\" has a non-uniform scaling transform. The mirror will be applied in world-space, so the underlying asset will not have mirror symmetry. Consider instead baking the scale before mirroring."
                 );
    FUN_14023409e(&local_1a0,local_178,1);
    local_c8 = (wchar_t *)CONCAT44(local_c8._4_4_,4);
    FUN_14023423e(local_b8,local_190);
    local_e0 = (double *)local_a8;
    local_e8 = &local_c8;
    FUN_14010d304(&local_d8);
    local_f8 = local_1a0;
    local_f0 = local_198;
    if (local_198 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_198 + 1) = (int)local_198[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_138,&local_f8,&local_d8);
    FUN_14007f2db(local_d8,local_d0);
    if (local_d8 != 0) {
      FUN_1400020a8();
    }
    if (local_b8[0] != (longlong *)0x0) {
      (**(code **)(*local_b8[0] + 0x10))();
    }
    if (local_198 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_198 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_198)(local_198);
        LOCK();
        piVar1 = (int *)((longlong)local_198 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_198 + 0x10))(local_198);
        }
      }
    }
    if (local_190[0] != (longlong *)0x0) {
      (**(code **)(*local_190[0] + 0x10))();
    }
    FUN_140008f88(&local_118,local_138);
    if (local_138[0] != (longlong *)0x0) {
      (**(code **)(*local_138[0] + 0x10))();
    }
    if (local_178[0] != (longlong *)0x0) {
      (**(code **)(*local_178[0] + 0x10))();
    }
    if (local_158[0] != (longlong *)0x0) {
      FUN_1400020a8();
    }
    bVar8 = 0;
  }
LAB_14968fd6a:
  bVar8 = plVar7 != (longlong *)0x0 | bVar8;
  if ((bVar3 & bVar8) == 1) {
    plVar7 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    local_1b0 = local_118;
    if (local_118 != (longlong *)0x0) {
      (**(code **)(*local_118 + 8))();
    }
    local_1a8 = local_110;
    local_1c0 = local_108;
    if (local_108 != (longlong *)0x0) {
      (**(code **)(*local_108 + 8))();
    }
    local_1b8 = local_100;
    local_c8 = L"CombinedWarnings";
    local_c0[0] = 0x10;
    FUN_1446e940c(local_178,&local_c8);
    local_c8 = L"UMirrorTool";
    local_c0[0] = 0xb;
    FUN_1446e940c(local_17c,&local_c8);
    FUN_140208bae(local_158,local_17c,local_178,L"{0}\n\n{1}");
    FUN_14023409e(&local_1d0,local_158,1);
    local_c8 = (wchar_t *)CONCAT44(local_c8._4_4_,4);
    FUN_14023423e(local_b8,&local_1c0);
    local_a8[0] = 4;
    FUN_14023423e(local_98,&local_1b0);
    local_e0 = &local_88;
    local_e8 = &local_c8;
    FUN_14010d304(&local_d8);
    local_f8 = local_1d0;
    local_f0 = local_1c8;
    if (local_1c8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_1c8 + 1) = (int)local_1c8[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_138,&local_f8,&local_d8);
    FUN_14007f2db(local_d8,local_d0);
    if (local_d8 != 0) {
      FUN_1400020a8();
    }
    lVar10 = 0x30;
    do {
      plVar5 = *(longlong **)((longlong)local_c0 + lVar10 + -8);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))();
        *(undefined8 *)((longlong)local_c0 + lVar10 + -8) = 0;
        *(undefined4 *)((longlong)local_c0 + lVar10) = 0;
      }
      lVar10 = lVar10 + -0x20;
    } while (lVar10 != -0x10);
    if (local_1c8 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_1c8 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_1c8)(local_1c8);
        LOCK();
        piVar1 = (int *)((longlong)local_1c8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_1c8 + 0x10))(local_1c8);
        }
      }
    }
    if (local_1c0 != (longlong *)0x0) {
      (**(code **)(*local_1c0 + 0x10))();
    }
    if (local_1b0 != (longlong *)0x0) {
      (**(code **)(*local_1b0 + 0x10))();
    }
    (**(code **)(*plVar7 + 0x340))(plVar7,local_138,3);
    if (local_138[0] != (longlong *)0x0) {
      (**(code **)(*local_138[0] + 0x10))();
    }
    if (local_158[0] != (longlong *)0x0) {
      (**(code **)(*local_158[0] + 0x10))();
    }
  }
  else {
    if (bVar3 == 0) {
      if (bVar8 == 0) goto LAB_14968fff7;
      plVar7 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
      lVar10 = *plVar7;
      pplVar9 = &local_118;
    }
    else {
      plVar7 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
      lVar10 = *plVar7;
      pplVar9 = &local_108;
    }
    (**(code **)(lVar10 + 0x340))(plVar7,pplVar9,3);
  }
LAB_14968fff7:
  if (local_128 != 0) {
    FUN_1400020a8();
  }
  if (local_118 != (longlong *)0x0) {
    (**(code **)(*local_118 + 0x10))();
  }
  if (local_108 != (longlong *)0x0) {
    (**(code **)(*local_108 + 0x10))();
  }
  if ((local_60 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149690085 FUN_149690085 body=175 status=ok
// SIG undefined FUN_149690085(void)

undefined8 FUN_149690085(undefined8 param_1)

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
  local_b8 = FUN_14594bcd8();
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



// FUNCTION 149690136 FUN_149690136 body=756 status=ok
// SIG undefined FUN_149690136(void)

void FUN_149690136(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_178 [32];
  undefined1 local_158;
  undefined8 local_150;
  longlong *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  void *local_70;
  int local_68;
  undefined4 local_64;
  void *local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar2 = param_1[0x1d];
  if (0 < (longlong)(int)lVar2) {
    local_140 = param_1 + 0x1e;
    lVar6 = 0;
    do {
      lVar3 = FUN_14969042b(DAT_14c951640);
      if ((param_1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(param_1);
      }
      *(longlong **)(lVar3 + 0x30) = param_1;
      *(int *)(lVar3 + 0x38) = (int)lVar6;
      FUN_1446ddc76(&local_50,"Preview",1);
      local_150 = 0;
      local_158 = 0;
      lVar4 = FUN_1484c90fb(lVar3,local_50,0,0);
      if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar4);
      }
      iVar1 = (int)param_1[0x1f];
      *(uint *)(param_1 + 0x1f) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xfc) < iVar1 + 1U) {
        FUN_148f93520(local_140,iVar1);
      }
      lVar7 = *local_140;
      *(longlong *)(lVar7 + (longlong)iVar1 * 8) = lVar4;
      if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar4);
        lVar4 = *(longlong *)(lVar7 + (longlong)iVar1 * 8);
      }
      lVar7 = lVar3 + 0x28;
      if (lVar3 == 0) {
        lVar7 = 0;
      }
      uVar5 = (**(code **)(*param_1 + 0x390))(param_1);
      FUN_148504f74(lVar4,uVar5,lVar7);
      FUN_148558526(*(undefined8 *)(lVar4 + 0x58),0);
      FUN_14851b65c(*(undefined8 *)(lVar4 + 0x58),1);
      FUN_148506417(&local_60,*(undefined8 *)(param_1[0x14] + lVar6 * 8),0);
      uVar5 = (**(code **)(*param_1 + 0x2c8))(param_1);
      uVar5 = FUN_1485578f6(uVar5);
      _Src = local_60;
      local_70 = (void *)0x0;
      lVar3 = (longlong)local_58;
      local_68 = local_58;
      if (lVar3 == 0) {
        local_64 = 0;
      }
      else {
        FUN_1411312f2(&local_70,local_58,0);
        memcpy(local_70,_Src,lVar3 << 3);
      }
      FUN_1485053d2(lVar4,&local_70,uVar5,0);
      FUN_14851bbe8(*(undefined8 *)(lVar4 + 0x58),
                    *(undefined8 *)(*(longlong *)(param_1[0x1c] + lVar6 * 8) + 0x30),1);
      FUN_1485063a5(&local_d8,*(undefined8 *)(param_1[0x14] + lVar6 * 8));
      local_108 = local_a8;
      uStack_104 = uStack_a4;
      uStack_100 = uStack_a0;
      uStack_fc = uStack_9c;
      local_118 = local_b8;
      uStack_114 = uStack_b4;
      uStack_110 = uStack_b0;
      uStack_10c = uStack_ac;
      local_128 = local_c8;
      uStack_120 = uStack_c0;
      local_138 = local_d8;
      uStack_130 = uStack_d0;
      local_f8 = (undefined4)DAT_14c846510;
      uStack_f4 = DAT_14c846510._4_4_;
      uStack_f0 = (undefined4)DAT_14c846518;
      uStack_ec = DAT_14c846518._4_4_;
      local_e8 = DAT_14c846520;
      uStack_e0 = 0;
      FUN_14851b91a(*(undefined8 *)(lVar4 + 0x58),&local_138);
      FUN_1485054ca(lVar4,*(undefined1 *)(param_1[0x18] + 0xb9));
      if (local_60 != (void *)0x0) {
        FUN_1400020a8();
      }
      lVar6 = lVar6 + 1;
    } while ((int)lVar2 != lVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14969042b FUN_14969042b body=175 status=ok
// SIG undefined FUN_14969042b(void)

undefined8 FUN_14969042b(undefined8 param_1)

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
  local_b8 = FUN_145b14fd4();
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



// FUNCTION 1496904dc FUN_1496904dc body=1174 status=ok
// SIG undefined FUN_1496904dc(void)

/* WARNING: Removing unreachable block (ram,0x00014969076e) */

void FUN_1496904dc(longlong *param_1,char param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 auStack_138 [40];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  double local_c8;
  wchar_t *local_b8;
  undefined8 uStack_b0;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  double local_68;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  plVar1 = (longlong *)param_1[0x18];
  FUN_140056680(&local_b8,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1,&local_b8);
  if (local_b8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  (**(code **)(*(longlong *)param_1[0x19] + 0x2a0))
            ((longlong *)param_1[0x19],param_1,&DAT_14cc21558);
  (**(code **)(*(longlong *)param_1[0x1a] + 0x2a0))
            ((longlong *)param_1[0x1a],param_1,&DAT_14cc21558);
  (**(code **)(*(longlong *)param_1[0x26] + 0x2a8))();
  if (0 < (int)param_1[0x15]) {
    lVar8 = 0;
    do {
      FUN_14850635b(*(undefined8 *)(param_1[0x14] + lVar8 * 8));
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)param_1[0x15]);
  }
  if (param_2 == '\x01') {
    lVar8 = (**(code **)(*param_1 + 0x2c8))(param_1);
    local_b8 = L"MirrorToolTransactionName";
    uStack_b0._0_4_ = 0x19;
    FUN_1446e940c(&local_110,&local_b8);
    local_b8 = L"UMirrorTool";
    uStack_b0 = CONCAT44(uStack_b0._4_4_,0xb);
    FUN_1446e940c(&local_58,&local_b8);
    FUN_140208bae(&local_b8,&local_58,&local_110,L"Mirror Tool");
    (**(code **)(*(longlong *)(lVar8 + 0x28) + 0x10))(lVar8 + 0x28,&local_b8);
    if (local_b8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_b8 + 0x10))();
    }
    local_58 = 0;
    uStack_50 = 0;
    if (0 < (int)param_1[0x1f]) {
      lVar8 = 0;
      do {
        uVar4 = *(undefined8 *)(param_1[0x1e] + lVar8 * 8);
        FUN_1485063a5(&local_b8,*(undefined8 *)(param_1[0x14] + lVar8 * 8));
        FUN_143b84538(uVar4,&local_110);
        uVar2 = uStack_50;
        lVar6 = (longlong)(int)uStack_50;
        uVar3 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar3);
        if (uStack_50._4_4_ < uVar3) {
          FUN_148f9379a(&local_58,uVar2 & 0xffffffff);
        }
        puVar9 = (undefined8 *)(local_58 + lVar6 * 0x58);
        *puVar9 = local_110;
        puVar7 = &uStack_108;
        for (lVar6 = 10; puVar9 = puVar9 + 1, lVar6 != 0; lVar6 = lVar6 + -1) {
          *puVar9 = *puVar7;
          puVar7 = puVar7 + 1;
        }
        local_110 = DAT_14c846480;
        uStack_108 = DAT_14c846488;
        local_100 = (undefined4)DAT_14c846490;
        uStack_fc = DAT_14c846490._4_4_;
        uStack_f8 = (undefined4)DAT_14c846498;
        uStack_f4 = DAT_14c846498._4_4_;
        local_f0 = (undefined4)DAT_14c8464a0;
        uStack_ec = DAT_14c8464a0._4_4_;
        uStack_e8 = (undefined4)DAT_14c8464a8;
        uStack_e4 = DAT_14c8464a8._4_4_;
        local_e0 = DAT_14c8464b0;
        local_d8 = local_78;
        uStack_d4 = uStack_74;
        uStack_d0 = uStack_70;
        uStack_cc = uStack_6c;
        local_c8 = local_68;
        FUN_146c3cfa5(*(undefined8 *)(local_58 + (longlong)((int)uStack_50 + -1) * 0x58),&local_110,
                      1);
        lVar6 = (longlong)((int)uStack_50 + -1) * 0x58;
        *(double *)(local_58 + 0x40 + lVar6) =
             (double)CONCAT44(uStack_74,local_78) * *(double *)(local_58 + 0x40 + lVar6);
        *(double *)(local_58 + 0x48 + lVar6) =
             (double)CONCAT44(uStack_6c,uStack_70) * *(double *)(local_58 + 0x48 + lVar6);
        *(double *)(local_58 + 0x50 + lVar6) = local_68 * *(double *)(local_58 + 0x50 + lVar6);
        lVar8 = lVar8 + 1;
      } while (lVar8 < (int)param_1[0x1f]);
    }
    FUN_149690974(param_1,&local_58);
    if (*(char *)(param_1[0x18] + 0xba) != '\0') {
      local_b8 = (wchar_t *)0x0;
      uStack_b0 = 0;
      if (0 < (int)param_1[0x15]) {
        lVar8 = 0;
        do {
          uVar4 = FUN_1485062af(*(undefined8 *)(param_1[0x14] + lVar8 * 8));
          uVar2 = uStack_b0;
          lVar6 = (longlong)(int)uStack_b0;
          uVar3 = (int)uStack_b0 + 1;
          uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar3);
          if (uStack_b0._4_4_ < uVar3) {
            FUN_1447d05f2(&local_b8,uVar2 & 0xffffffff);
          }
          *(undefined8 *)(local_b8 + lVar6 * 4) = uVar4;
          lVar8 = lVar8 + 1;
        } while (lVar8 < (int)param_1[0x15]);
      }
      lVar8 = param_1[0x1a];
      uVar4 = (**(code **)(*param_1 + 0x2c8))(param_1);
      FUN_14851d420(lVar8,&local_b8,uVar4,0);
      if (local_b8 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
    lVar8 = (**(code **)(*param_1 + 0x2c8))(param_1);
    (**(code **)(*(longlong *)(lVar8 + 0x28) + 0x18))(lVar8 + 0x28);
    FUN_148f93769(local_58,uStack_50 & 0xffffffff);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    lVar8 = param_1[0x1f];
    if ((longlong)(int)lVar8 != 0) {
      lVar6 = param_1[0x1e];
      lVar5 = 0;
      do {
        FUN_143b846cc(*(undefined8 *)(lVar6 + lVar5));
        lVar5 = lVar5 + 8;
      } while ((longlong)(int)lVar8 * 8 != lVar5);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149690974 FUN_149690974 body=1472 status=ok
// SIG undefined FUN_149690974(void)

void FUN_149690974(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_788 [32];
  undefined8 local_768;
  undefined4 local_754;
  longlong local_750;
  longlong *local_748;
  longlong *local_740;
  char local_738 [8];
  longlong local_730;
  longlong local_718;
  undefined8 uStack_710;
  undefined4 local_708;
  undefined4 uStack_704;
  longlong local_700;
  undefined8 uStack_6f8;
  longlong local_6f0;
  undefined8 uStack_6e8;
  undefined1 local_6e0 [4];
  undefined1 local_6dc [4];
  wchar_t *local_6d8;
  undefined4 local_6d0;
  longlong local_6b8;
  undefined4 local_6a8;
  undefined4 uStack_6a4;
  undefined4 uStack_6a0;
  undefined4 uStack_69c;
  undefined4 local_698;
  undefined4 uStack_694;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  undefined4 local_688;
  undefined4 uStack_684;
  undefined4 uStack_680;
  undefined4 uStack_67c;
  undefined8 local_678;
  undefined8 uStack_670;
  undefined8 local_668;
  undefined8 uStack_660;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined1 local_648 [16];
  undefined1 local_638 [1496];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_788;
  if ((int)param_2[1] != 0) {
    lVar13 = (longlong)(int)param_1[0x1d];
    if (lVar13 < 1) {
      local_708 = 0;
      local_700 = 0;
      uStack_6f8 = 0;
      local_6f0 = 0;
      uStack_6e8 = 0;
    }
    else {
      lVar12 = 0;
      do {
        local_750 = lVar13;
        if (*(int *)(*(longlong *)(*param_2 + lVar12) + 0x170) == 0) {
          local_6d8 = L"MirrorDestroyTitle";
          local_6d0 = 0x12;
          FUN_1446e940c(local_738,&local_6d8);
          local_6d8 = L"UMirrorTool";
          local_6d0 = 0xb;
          FUN_1446e940c(&local_718,&local_6d8);
          FUN_140208bae(&local_708,&local_718,local_738,L"Delete mesh components?");
          local_6d8 = L"MirrorDestroyQuestion";
          local_6d0 = 0x15;
          FUN_1446e940c(local_6dc,&local_6d8);
          local_6d8 = L"UMirrorTool";
          local_6d0 = 0xb;
          FUN_1446e940c(local_6e0,&local_6d8);
          FUN_140208bae(&local_6d8,local_6e0,local_6dc,
                        L"The mirror plane cropping has entirely cut away at least one mesh. Do you actually want to delete these mesh components? Note that either way all actors will remain, and meshes that are not fully cut away will still be mirrored as normal."
                       );
          uVar7 = FUN_146815484(1,&local_6d8,&local_708);
          uVar8 = uVar7;
          if (local_6d8 != (wchar_t *)0x0) {
            uVar8 = (**(code **)(*(longlong *)local_6d8 + 0x10))();
          }
          if ((longlong *)CONCAT44(uStack_704,local_708) != (longlong *)0x0) {
            uVar8 = (**(code **)(*(longlong *)CONCAT44(uStack_704,local_708) + 0x10))();
          }
          local_754 = (undefined4)CONCAT71((int7)(uVar8 >> 8),(uVar7 & 0xfffffffb) != 0);
          goto LAB_149690b36;
        }
        lVar12 = lVar12 + 0x58;
      } while (lVar13 * 0x58 - lVar12 != 0);
      local_754 = 0;
LAB_149690b36:
      local_708 = 0;
      local_700 = 0;
      uStack_6f8 = 0;
      local_6f0 = 0;
      uStack_6e8 = 0;
      lVar12 = 0;
      lVar13 = local_750;
      local_748 = param_2;
      local_740 = param_1;
      do {
        lVar14 = lVar12 * 0x58;
        lVar3 = *(longlong *)(*param_2 + lVar14);
        if (*(int *)(lVar3 + 0x170) == 0) {
          if ((char)local_754 != '\0') {
            plVar10 = (longlong *)FUN_1485062e8(*(undefined8 *)(param_1[0x14] + lVar12 * 8));
            (**(code **)(*plVar10 + 0x420))(plVar10,0);
          }
        }
        else if (*(char *)(param_1[0x18] + 0xba) == '\0') {
          uVar9 = FUN_1485062af(*(undefined8 *)(param_1[0x14] + lVar12 * 8));
          uVar8 = uStack_6f8;
          lVar14 = (longlong)(int)uStack_6f8;
          uVar5 = (int)uStack_6f8 + 1;
          uStack_6f8 = CONCAT44(uStack_6f8._4_4_,uVar5);
          if (uStack_6f8._4_4_ < uVar5) {
            FUN_1447d05f2(&local_700,uVar8 & 0xffffffff);
          }
          *(undefined8 *)(local_700 + lVar14 * 8) = uVar9;
          local_6d8 = (wchar_t *)0x1000000010101;
          local_768 = 0;
          FUN_148506f34(*(undefined8 *)(param_1[0x14] + lVar12 * 8),lVar3,1,&local_6d8);
        }
        else {
          local_718 = 0;
          uStack_710 = 0;
          lVar13 = *(longlong *)(param_1[0x14] + lVar12 * 8);
          if (lVar13 == 0) {
            plVar10 = (longlong *)0x0;
          }
          else {
            uVar9 = FUN_145b7126e();
            plVar10 = (longlong *)FUN_144718840(lVar13,uVar9);
          }
          iVar6 = (**(code **)(*plVar10 + 0x10))(plVar10);
          if (0 < iVar6) {
            iVar11 = 0;
            do {
              uVar9 = (**(code **)(*plVar10 + 0x18))(plVar10,iVar11);
              uVar8 = uStack_710;
              lVar13 = (longlong)(int)uStack_710;
              uVar5 = (int)uStack_710 + 1;
              uStack_710 = CONCAT44(uStack_710._4_4_,uVar5);
              if (uStack_710._4_4_ < uVar5) {
                FUN_144769b64(&local_718,uVar8 & 0xffffffff);
              }
              *(undefined8 *)(local_718 + lVar13 * 8) = uVar9;
              iVar11 = iVar11 + 1;
            } while (iVar6 != iVar11);
          }
          FUN_14850577a(&local_6d8,1);
          param_1 = local_740;
          lVar13 = (**(code **)(*local_740 + 0x390))(local_740);
          if ((lVar13 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar13);
          }
          param_2 = local_748;
          lVar4 = *local_748;
          puVar1 = (undefined4 *)(lVar4 + 8 + lVar14);
          local_6a8 = *puVar1;
          uStack_6a4 = puVar1[1];
          uStack_6a0 = puVar1[2];
          uStack_69c = puVar1[3];
          puVar1 = (undefined4 *)(lVar4 + 0x18 + lVar14);
          local_698 = *puVar1;
          uStack_694 = puVar1[1];
          uStack_690 = puVar1[2];
          uStack_68c = puVar1[3];
          puVar1 = (undefined4 *)(lVar4 + 0x28 + lVar14);
          local_688 = *puVar1;
          uStack_684 = puVar1[1];
          uStack_680 = puVar1[2];
          uStack_67c = puVar1[3];
          local_678 = *(undefined8 *)(lVar4 + 0x38 + lVar14);
          puVar2 = (undefined8 *)(lVar4 + 0x40 + lVar14);
          local_668 = *puVar2;
          uStack_660 = puVar2[1];
          local_658 = *(undefined8 *)(lVar4 + 0x50 + lVar14);
          uStack_670 = 0;
          uStack_650 = 0;
          local_6b8 = lVar13;
          FUN_14020fad6(local_648,L"Mirror");
          FUN_1457c8d02(local_638,&local_718);
          FUN_148505bae(&local_6d8,lVar3);
          lVar13 = local_750;
          plVar10 = (longlong *)param_1[0x19];
          iVar6 = (int)plVar10[0x16];
          if (iVar6 == DAT_14cb4d6a8) {
            if ((iVar6 < 2) || (iVar6 = FUN_144a80a00(plVar10[0x15],DAT_14cb4d6a0), iVar6 == 0))
            goto LAB_149690deb;
            plVar10 = (longlong *)param_1[0x19];
LAB_149690e7d:
            (**(code **)(*plVar10 + 0x2c0))(plVar10,&local_6d8);
          }
          else {
            if (DAT_14cb4d6a8 + iVar6 != 1) goto LAB_149690e7d;
LAB_149690deb:
            FUN_1485073fd(*(undefined8 *)(param_1[0x14] + lVar12 * 8),&local_6d8);
          }
          uVar9 = (**(code **)(*param_1 + 0x2c8))(param_1);
          FUN_148505c7a(local_738,uVar9,&local_6d8);
          lVar3 = local_730;
          if ((local_738[0] == '\0') && (local_730 != 0)) {
            lVar13 = (longlong)(int)uStack_6f8;
            uVar5 = (int)uStack_6f8 + 1;
            uStack_6f8 = CONCAT44(uStack_6f8._4_4_,uVar5);
            if (uStack_6f8._4_4_ < uVar5) {
              FUN_1447d05f2(&local_700);
            }
            *(longlong *)(local_700 + lVar13 * 8) = lVar3;
            lVar13 = local_750;
          }
          FUN_1484c7624(&local_6d8);
          if (local_718 != 0) {
            FUN_1400020a8();
          }
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 != lVar13);
      if (0 < (int)uStack_6f8) {
        plVar10 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
        (**(code **)(*plVar10 + 0x350))(plVar10,&local_708);
      }
    }
    if (local_6f0 != 0) {
      FUN_1400020a8();
    }
    if (local_700 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_788) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149690f79 FUN_149690f79 body=175 status=ok
// SIG undefined FUN_149690f79(void)

undefined8 FUN_149690f79(undefined8 param_1)

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
  local_b8 = FUN_145bad7ae();
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



// FUNCTION 14969102a FUN_14969102a body=659 status=ok
// SIG undefined FUN_14969102a(void)

void FUN_14969102a(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_218 [32];
  longlong local_1f8 [2];
  undefined1 *local_1e8;
  undefined8 local_1d8;
  undefined **local_1c8;
  longlong *local_1c0;
  code *local_1a8;
  undefined8 local_198;
  undefined **local_188;
  undefined1 *local_180;
  undefined1 *local_168;
  undefined8 local_158;
  undefined **local_148;
  longlong *local_140;
  undefined1 *local_128;
  undefined8 local_118;
  undefined **local_108;
  longlong *local_100;
  undefined1 *local_e8;
  undefined8 local_d8;
  undefined **local_c8;
  longlong *local_c0;
  undefined1 *local_a8;
  undefined8 local_98;
  undefined **local_88;
  longlong *local_80;
  code *local_68;
  undefined8 local_58;
  undefined **local_48;
  longlong *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_218;
  lVar2 = FUN_1496912be();
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x8e] = lVar2;
  (**(code **)(*param_1 + 0x308))(param_1,lVar2);
  plVar1 = (longlong *)param_1[0x8e];
  FUN_140056680(local_1f8,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a8))(plVar1,param_1,local_1f8);
  if (local_1f8[0] != 0) {
    FUN_1400020a8();
  }
  local_58 = 0;
  local_48 = &PTR_LAB_14bdcba20;
  local_68 = FUN_14457a10e;
  local_40 = param_1;
  FUN_14969136e(param_1[0x8e] + 0x28,param_1[0x8e] + 0xa8);
  local_98 = 0;
  local_88 = &PTR_LAB_14bdcba40;
  local_a8 = &LAB_14457a17c;
  local_80 = param_1;
  FUN_1484de26e(param_1[0x8e] + 0x28,param_1[0x8e] + 0xac);
  local_d8 = 0;
  local_c8 = &PTR_LAB_14bdcba60;
  local_e8 = &LAB_14457a1d2;
  local_c0 = param_1;
  FUN_1484c9b00(param_1[0x8e] + 0x28,param_1[0x8e] + 0xb0);
  local_118 = 0;
  local_108 = &PTR_LAB_14bdcba80;
  local_128 = &LAB_14457a228;
  local_100 = param_1;
  lVar2 = FUN_149691444(param_1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x8f] = lVar2;
  local_158 = 0;
  local_148 = &PTR_LAB_14bdcbaa0;
  local_168 = &LAB_14457a272;
  local_140 = param_1;
  lVar2 = FUN_14969151e(param_1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x90] = lVar2;
  local_198 = 0;
  local_188 = &PTR_LAB_14aeb6a30;
  local_180 = &LAB_1496c70fe;
  local_1a8 = FUN_146bd3274;
  lVar2 = FUN_1496915f8(param_1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x91] = lVar2;
  local_1d8 = 0;
  local_1c8 = &PTR_LAB_14bdcbac0;
  local_1e8 = &LAB_14457a2bc;
  local_1c0 = param_1;
  FUN_1484de26e(lVar2 + 0x28,lVar2 + 200);
  if ((local_20 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496912be FUN_1496912be body=175 status=ok
// SIG undefined FUN_1496912be(void)

undefined8 FUN_1496912be(undefined8 param_1)

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
  local_b8 = FUN_1459fb7ba();
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



// FUNCTION 14969136e FUN_14969136e body=212 status=ok
// SIG undefined FUN_14969136e(void)

void FUN_14969136e(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = FUN_14001cc68(0xd0,0x10);
  local_68[0] = *param_3;
  local_58[0] = 0;
  if (local_68[0] != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)*plVar3)(plVar3,local_58);
  }
  FUN_1496c6978(uVar2,param_2,local_68);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14588c84a(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  if (*param_3 != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149691444 FUN_149691444 body=216 status=ok
// SIG undefined FUN_149691444(void)

undefined8 FUN_149691444(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_b8 [32];
  longlong local_98 [2];
  longlong local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  code *local_58 [2];
  undefined8 local_48;
  undefined **local_38;
  undefined *local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = 0;
  local_38 = &PTR_LAB_149e16f80;
  local_30 = &DAT_1496c6e70;
  local_58[0] = FUN_140d11fbe;
  local_98[0] = *param_2;
  local_88 = param_2[2];
  param_2[2] = 0;
  local_78 = (undefined4)param_2[4];
  uStack_74 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_70 = (undefined4)param_2[5];
  uStack_6c = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_68 = (undefined4)param_2[6];
  uStack_64 = *(undefined4 *)((longlong)param_2 + 0x34);
  uStack_60 = (undefined4)param_2[7];
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0x3c);
  if (local_98[0] != 0) {
    *param_2 = 0;
  }
  uVar1 = FUN_1496c6c96(local_78,local_98,local_58);
  if (*param_2 != 0) {
    plVar2 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14969151e FUN_14969151e body=216 status=ok
// SIG undefined FUN_14969151e(void)

undefined8 FUN_14969151e(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_b8 [32];
  longlong local_98 [2];
  longlong local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  code *local_58 [2];
  undefined8 local_48;
  undefined **local_38;
  undefined *local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = 0;
  local_38 = &PTR_LAB_149e16f80;
  local_30 = &DAT_1496c704c;
  local_58[0] = FUN_140d11fbe;
  local_98[0] = *param_2;
  local_88 = param_2[2];
  param_2[2] = 0;
  local_78 = (undefined4)param_2[4];
  uStack_74 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_70 = (undefined4)param_2[5];
  uStack_6c = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_68 = (undefined4)param_2[6];
  uStack_64 = *(undefined4 *)((longlong)param_2 + 0x34);
  uStack_60 = (undefined4)param_2[7];
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0x3c);
  if (local_98[0] != 0) {
    *param_2 = 0;
  }
  uVar1 = FUN_1496c6e72(local_78,local_98,local_58);
  if (*param_2 != 0) {
    plVar2 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496915f8 FUN_1496915f8 body=240 status=ok
// SIG undefined FUN_1496915f8(void)

undefined8 FUN_1496915f8(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 uVar16;
  longlong *plVar17;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar16 = FUN_1496c704d();
  (**(code **)(*param_1 + 0x428))(param_1,uVar16);
  lVar1 = param_1[0x72];
  lVar2 = param_1[0x73];
  lVar3 = param_1[0x74];
  lVar4 = param_1[0x75];
  lVar5 = param_1[0x76];
  lVar6 = param_1[0x77];
  lVar7 = param_1[0x78];
  lVar8 = param_1[0x79];
  lVar9 = *param_2;
  lVar10 = param_2[1];
  lVar11 = param_2[2];
  lVar12 = param_2[3];
  lVar13 = param_2[4];
  lVar14 = param_2[5];
  lVar15 = param_2[7];
  param_1[0x78] = param_2[6];
  param_1[0x79] = lVar15;
  param_1[0x76] = lVar13;
  param_1[0x77] = lVar14;
  param_1[0x74] = lVar11;
  param_1[0x75] = lVar12;
  param_1[0x72] = lVar9;
  param_1[0x73] = lVar10;
  local_68._0_4_ = (undefined4)lVar1;
  local_68._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  uStack_60._0_4_ = (undefined4)lVar2;
  uStack_60._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  local_58._0_4_ = (undefined4)lVar3;
  local_58._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_50._0_4_ = (undefined4)lVar4;
  uStack_50._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  local_48._0_4_ = (undefined4)lVar5;
  local_48._4_4_ = (undefined4)((ulonglong)lVar5 >> 0x20);
  uStack_40._0_4_ = (undefined4)lVar6;
  uStack_40._4_4_ = (undefined4)((ulonglong)lVar6 >> 0x20);
  local_38._0_4_ = (undefined4)lVar7;
  local_38._4_4_ = (undefined4)((ulonglong)lVar7 >> 0x20);
  uStack_30._0_4_ = (undefined4)lVar8;
  uStack_30._4_4_ = (undefined4)((ulonglong)lVar8 >> 0x20);
  *(undefined4 *)(param_2 + 6) = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 0x34) = local_38._4_4_;
  *(undefined4 *)(param_2 + 7) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0x3c) = uStack_30._4_4_;
  *(undefined4 *)(param_2 + 4) = (undefined4)local_48;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_48._4_4_;
  *(undefined4 *)(param_2 + 5) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_40._4_4_;
  *(undefined4 *)(param_2 + 2) = (undefined4)local_58;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_58._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_50._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_68;
  *(undefined4 *)((longlong)param_2 + 4) = local_68._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_60._4_4_;
  local_68 = lVar1;
  uStack_60 = lVar2;
  local_58 = lVar3;
  uStack_50 = lVar4;
  local_48 = lVar5;
  uStack_40 = lVar6;
  local_38 = lVar7;
  uStack_30 = lVar8;
  if (*param_2 != 0) {
    plVar17 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar17 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar17 + 0x10))(plVar17);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar16;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496916ea FUN_1496916ea body=113 status=ok
// SIG undefined FUN_1496916ea(void)

void FUN_1496916ea(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)(param_1 + 0x470);
  FUN_140056680(local_30,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14969175c FUN_14969175c body=152 status=ok
// SIG undefined FUN_14969175c(void)

undefined8 FUN_14969175c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"StartOffsetToolMessage";
  local_28 = 0x16;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"UOffsetMeshTool";
  local_28 = 0xf;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_2,local_38,local_34,
                L"Offset the mesh vertex positions using various Offsetting methods.");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496917f6 FUN_1496917f6 body=152 status=ok
// SIG undefined FUN_1496917f6(void)

undefined8 FUN_1496917f6(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"OffsetMeshToolTransactionName";
  local_28 = 0x1d;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"UOffsetMeshTool";
  local_28 = 0xf;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_2,local_38,local_34,L"Offset Mesh");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14969189e FUN_14969189e body=926 status=ok
// SIG undefined FUN_14969189e(void)

undefined8 * FUN_14969189e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  float *pfVar4;
  float fVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined1 auStack_a8 [40];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)(*(longlong *)(param_1 + 0x350) + 0xa8) == '\x01') {
    puVar13 = (undefined8 *)FUN_14001cc68(0x120,0x10);
    FUN_14845aa48(puVar13,param_1 + 0x28);
    puVar13[0x13] = 0;
    puVar13[0x14] = 0x3ff0000000000000;
    puVar13[0x15] = 0x3ff0000000000000;
    puVar13[0x16] = 0;
    puVar13[0x17] = 0;
    puVar13[0x18] = 0;
    puVar13[0x19] = 0;
    puVar13[0x1a] = 0;
    puVar13[0x1b] = 0;
    puVar13[0x1c] = 0;
    puVar13[0x1d] = 0;
    *(undefined2 *)(puVar13 + 0x1e) = 0;
    puVar13[0x1f] = 0;
    puVar13[0x20] = 0;
    *(undefined1 *)(puVar13 + 0x21) = 0;
    *puVar13 = &PTR_FUN_14bdcbb40;
    *(undefined1 *)(puVar13 + 0x22) = 1;
    puVar13[0x23] = 0;
    lVar7 = *(longlong *)(param_1 + 0x360);
    dVar10 = (double)*(float *)(lVar7 + 0xa8);
    puVar13[0x23] = (double)*(int *)(param_1 + 0x78) * ((dVar10 * dVar10) / 50.0);
    *(byte *)(puVar13 + 0x22) = *(byte *)(lVar7 + 0xac) ^ 1;
    *(undefined1 *)(puVar13 + 0x1e) = 1;
  }
  else {
    puVar13 = (undefined8 *)FUN_14001cc68(0x130,0x10);
    FUN_1496c7102(puVar13,param_1 + 0x28);
    lVar7 = *(longlong *)(param_1 + 0x358);
    *(undefined4 *)(puVar13 + 0x22) = *(undefined4 *)(lVar7 + 0xa8);
    puVar13[0x23] = (double)*(float *)(lVar7 + 0xb0);
    *(undefined1 *)(puVar13 + 0x24) = *(undefined1 *)(lVar7 + 0xb4);
    *(byte *)(puVar13 + 0x1e) = *(byte *)(lVar7 + 0xac) ^ 1;
  }
  lVar7 = *(longlong *)(param_1 + 0x350);
  fVar5 = *(float *)(lVar7 + 0xac);
  dVar10 = (double)fVar5;
  if (fVar5 < 0.0) {
    dVar10 = -dVar10;
  }
  lVar3 = param_1 + -0x120;
  fVar5 = *(float *)(*(longlong *)(param_1 + 0x368) + 200);
  dVar11 = (double)fVar5;
  if (fVar5 < 0.0) {
    dVar11 = -dVar11;
  }
  uVar15 = -(ulonglong)(dVar11 <= dVar10);
  dVar12 = 1.0 / *(double *)(param_1 + 0x2e0);
  puVar13[0x13] =
       dVar12 * (double)(CONCAT44(~(uint)(uVar15 >> 0x20) & (uint)((ulonglong)dVar10 >> 0x20),
                                  ~(uint)uVar15 & SUB84(dVar10,0)) | (ulonglong)dVar11 & uVar15);
  puVar13[0x14] = dVar10 * dVar12;
  pfVar4 = (float *)(lVar7 + 0xac);
  puVar13[0x15] =
       *(undefined8 *)(&DAT_149931170 + (ulonglong)(*pfVar4 <= 0.0 && *pfVar4 != 0.0) * 8);
  puVar14 = (undefined8 *)FUN_1484c98de(lVar3);
  uVar8 = *puVar14;
  lVar7 = puVar14[1];
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  plVar9 = (longlong *)puVar13[0x17];
  puVar13[0x16] = uVar8;
  puVar13[0x17] = lVar7;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  cVar6 = *(char *)(*(longlong *)(param_1 + 0x350) + 0xb0);
  *(char *)((longlong)puVar13 + 0xf1) = cVar6;
  if (cVar6 == '\x01') {
    puVar14 = (undefined8 *)FUN_1484c98e6(lVar3);
    uVar8 = *puVar14;
    lVar7 = puVar14[1];
    if (lVar7 != 0) {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
    }
    plVar9 = (longlong *)puVar13[0x1d];
    puVar13[0x1c] = uVar8;
    puVar13[0x1d] = lVar7;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar9 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
  }
  puVar14 = (undefined8 *)FUN_1484c9dec(lVar3);
  uVar8 = *puVar14;
  lVar7 = puVar14[1];
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  plVar9 = (longlong *)puVar13[0x20];
  puVar13[0x1f] = uVar8;
  puVar13[0x20] = lVar7;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  *(undefined1 *)(puVar13 + 0x21) = 1;
  local_80 = *(undefined4 *)(param_1 + 0x2f0);
  uStack_7c = *(undefined4 *)(param_1 + 0x2f4);
  uStack_78 = *(undefined4 *)(param_1 + 0x2f8);
  uStack_74 = *(undefined4 *)(param_1 + 0x2fc);
  local_70 = *(undefined4 *)(param_1 + 0x300);
  uStack_6c = *(undefined4 *)(param_1 + 0x304);
  uStack_68 = *(undefined4 *)(param_1 + 0x308);
  uStack_64 = *(undefined4 *)(param_1 + 0x30c);
  local_60 = *(undefined4 *)(param_1 + 0x310);
  uStack_5c = *(undefined4 *)(param_1 + 0x314);
  uStack_58 = *(undefined4 *)(param_1 + 0x318);
  uStack_54 = *(undefined4 *)(param_1 + 0x31c);
  local_48 = *(undefined8 *)(param_1 + 0x330);
  uStack_40 = *(undefined8 *)(param_1 + 0x338);
  local_50 = *(undefined8 *)(param_1 + 800);
  local_38 = *(undefined8 *)(param_1 + 0x340);
  FUN_14845ad16(puVar13);
  *param_2 = puVar13;
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149691c3e FUN_149691c3e body=140 status=ok
// SIG undefined FUN_149691c3e(void)

bool FUN_149691c3e(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  int *local_48;
  code *local_40;
  int **local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = &local_2c;
  local_2c = 0;
  plVar1 = *(longlong **)(param_2 + 0x10);
  local_38 = &local_48;
  local_40 = FUN_14457a312;
  uVar2 = (**(code **)(*param_1 + 0x2c0))();
  (**(code **)(*plVar1 + 0x2c8))(plVar1,param_2,uVar2,&local_40);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 0 < local_2c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149691ccc FUN_149691ccc body=46 status=ok
// SIG undefined FUN_149691ccc(void)

longlong * FUN_149691ccc(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_149691cfa(*(undefined8 *)(param_2 + 8));
  (**(code **)(*plVar1 + 0x398))(plVar1,*(undefined1 *)(param_1 + 0x28));
  return plVar1;
}



// FUNCTION 149691cfa FUN_149691cfa body=175 status=ok
// SIG undefined FUN_149691cfa(void)

undefined8 FUN_149691cfa(undefined8 param_1)

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
  local_b8 = FUN_145baa910();
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



// FUNCTION 149691daa FUN_149691daa body=263 status=ok
// SIG undefined FUN_149691daa(void)

void FUN_149691daa(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  int local_78;
  undefined4 local_74;
  longlong *local_70;
  longlong *local_68;
  undefined8 *local_60;
  code *local_58;
  longlong **local_50;
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = &local_48;
  local_48 = 0;
  uStack_40 = 0;
  plVar1 = (longlong *)param_3[2];
  local_50 = &local_70;
  local_58 = FUN_14457a44c;
  local_70 = param_1;
  local_60 = param_3;
  uVar4 = (**(code **)(*param_1 + 0x2c0))();
  (**(code **)(*plVar1 + 0x2c8))(plVar1,param_3,uVar4,&local_58);
  uVar3 = uStack_40;
  lVar2 = local_48;
  local_80 = 0;
  local_78 = (int)uStack_40;
  if ((int)uStack_40 == 0) {
    local_74 = 0;
  }
  else {
    FUN_1484d7836(&local_80,uStack_40 & 0xffffffff,0);
    FUN_1484d7898(local_80,lVar2,uVar3 & 0xffffffff);
  }
  FUN_1484ca74c(param_2,&local_80);
  (**(code **)(*param_2 + 0x388))(param_2,*param_3);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149691eb2 FUN_149691eb2 body=136 status=ok
// SIG undefined FUN_149691eb2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_149691eb2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc21650) {
    FUN_144b3d300(&DAT_14cc21650);
    if (DAT_14cc21650 == -1) {
      _DAT_14cc21618 = FUN_145a7b1c0();
      DAT_14cc21640 = 0;
      _DAT_14cc21648 = 0x500000001;
      atexit((_func_5014 *)&LAB_144572681);
      _Init_thread_footer(&DAT_14cc21650);
    }
  }
  return &DAT_14cc21618;
}



// FUNCTION 149692251 FUN_149692251 body=285 status=ok
// SIG undefined FUN_149692251(void)

double * FUN_149692251(double *param_1,double *param_2,double *param_3,double param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0x3ff0000000000000;
  local_68 = param_3[3];
  dStack_60 = param_3[4];
  local_58 = param_3[5];
  dStack_50 = param_3[6];
  local_88 = *(undefined4 *)(param_2 + 3);
  uStack_84 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uStack_80 = *(undefined4 *)(param_2 + 4);
  uStack_7c = *(undefined4 *)((longlong)param_2 + 0x24);
  local_78 = *(undefined4 *)(param_2 + 5);
  uStack_74 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uStack_70 = *(undefined4 *)(param_2 + 6);
  uStack_6c = *(undefined4 *)((longlong)param_2 + 0x34);
  FUN_148503bf8(&local_a8);
  dVar5 = 1.0 - param_4;
  dVar1 = param_3[2];
  dVar2 = param_2[2];
  dVar3 = param_3[1];
  dVar4 = param_2[1];
  *param_1 = dVar5 * *param_2 + param_4 * *param_3;
  param_1[1] = dVar4 * dVar5 + dVar3 * param_4;
  param_1[2] = dVar2 * dVar5 + dVar1 * param_4;
  *(undefined4 *)(param_1 + 3) = (undefined4)local_a8;
  *(undefined4 *)((longlong)param_1 + 0x1c) = local_a8._4_4_;
  *(undefined4 *)(param_1 + 4) = (undefined4)uStack_a0;
  *(undefined4 *)((longlong)param_1 + 0x24) = uStack_a0._4_4_;
  *(undefined4 *)(param_1 + 5) = (undefined4)local_98;
  *(undefined4 *)((longlong)param_1 + 0x2c) = local_98._4_4_;
  *(undefined4 *)(param_1 + 6) = (undefined4)uStack_90;
  *(undefined4 *)((longlong)param_1 + 0x34) = uStack_90._4_4_;
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149692370 FUN_149692370 body=98 status=ok
// SIG undefined FUN_149692370(void)

void FUN_149692370(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  FUN_1496c442e();
  iVar1 = *(int *)(param_1 + 0x150);
  *(uint *)(param_1 + 0x150) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x154) < iVar1 + 1U) {
    FUN_1485c29b8((longlong *)(param_1 + 0x148),iVar1);
  }
  puVar3 = (undefined8 *)((longlong)iVar1 * 0x50 + *(longlong *)(param_1 + 0x148));
  for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 149692e52 FUN_149692e52 body=1353 status=ok
// SIG undefined FUN_149692e52(void)

void FUN_149692e52(longlong param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  iVar2 = *(int *)(param_1 + 0x1b8);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x1bc);
    iVar1 = 1;
    if (1 < iVar2) {
      iVar1 = iVar2;
    }
    if (iVar2 < 1) goto LAB_1496932d3;
    dVar7 = 1.0 / (double)iVar1;
  }
  else {
    dVar6 = *(double *)(param_1 + 0x198) - *(double *)(param_1 + 400);
    uVar3 = -(ulonglong)(-dVar6 <= dVar6);
    if (iVar2 == 2) {
      dVar7 = *(double *)(param_1 + 0x130) - *(double *)(param_1 + 0x118);
      dVar7 = ((double)(-(ulonglong)(0.0 <= dVar7) & (ulonglong)dVar7) /
              *(double *)(param_1 + 0x1a8)) * 57.29577951308232;
    }
    else {
      if (iVar2 != 1) {
        dVar7 = 0.5;
        iVar2 = 1;
        goto LAB_149692f8e;
      }
      dVar7 = *(double *)(param_1 + 0x1c0);
    }
    dVar7 = dVar7 / (double)(~uVar3 & (ulonglong)-dVar6 | (ulonglong)dVar6 & uVar3);
    iVar1 = 999;
    if ((int)(1.0 / dVar7) < 999) {
      iVar1 = (int)(1.0 / dVar7);
    }
    iVar2 = 0;
    if (0 < iVar1) {
      iVar2 = iVar1;
    }
    iVar2 = iVar2 + 1;
  }
LAB_149692f8e:
  dVar6 = 0.0;
  iVar1 = 0;
  do {
    dVar8 = 0.0;
    if (iVar1 != 0) {
      dVar8 = dVar7 * dVar6;
    }
    dVar4 = 1.0;
    if (dVar8 <= 1.0) {
      dVar4 = dVar8;
    }
    dVar4 = (double)(~-(ulonglong)(dVar8 < 0.0) & (ulonglong)dVar4);
    dVar8 = *(double *)(param_1 + 0x1a8);
    dVar10 = ((1.0 - dVar4) * *(double *)(param_1 + 400) + *(double *)(param_1 + 0x198) * dVar4 +
             *(double *)(param_1 + 0x1a0)) * 0.017453292519943295;
    dVar5 = cos(dVar10);
    dVar9 = *(double *)(param_1 + 0x1a8);
    local_100 = sin(dVar10);
    local_100 = local_100 * dVar9;
    local_f8 = 0.0;
    local_108 = dVar5 * dVar8;
    FUN_146bed047(&local_120,param_1 + 0x170,&local_108);
    local_148 = local_110 + *(double *)(param_1 + 0x168);
    dStack_150 = local_118 + *(double *)(param_1 + 0x160);
    local_158 = local_120 + *(double *)(param_1 + 0x158);
    local_130 = 0;
    local_140 = 0;
    uStack_138 = 0;
    local_128 = 0x3ff0000000000000;
    if (*(char *)(param_1 + 0x1b0) == '\x01') {
      local_f8 = local_148 - *(double *)(param_1 + 0x168);
      local_100 = dStack_150 - *(double *)(param_1 + 0x160);
      dVar8 = local_158 - *(double *)(param_1 + 0x158);
      dVar9 = SQRT(local_f8 * local_f8 + dVar8 * dVar8 + local_100 * local_100);
      dVar10 = 1.0 / dVar9;
      if (0.0 < dVar9) {
        local_f8 = local_f8 * dVar10;
        local_100 = local_100 * dVar10;
      }
      else {
        local_100 = 0.0;
        local_f8 = 0.0;
      }
      local_108 = (double)(-(ulonglong)(0.0 < dVar9) & (ulonglong)(dVar8 * dVar10));
      dVar8 = local_f8 * local_f8 + local_108 * local_108 + local_100 * local_100 + -1.0;
      uVar3 = -(ulonglong)(-dVar8 <= dVar8);
      if ((double)(~uVar3 & (ulonglong)-dVar8 | (ulonglong)dVar8 & uVar3) < 1e-08) {
        dVar8 = *(double *)(param_1 + 0x170);
        dVar9 = *(double *)(param_1 + 0x178);
        dVar10 = *(double *)(param_1 + 0x180) + *(double *)(param_1 + 0x180);
        local_120 = dVar8 * dVar10 + *(double *)(param_1 + 0x188) * (dVar9 + dVar9);
        local_118 = dVar10 * dVar9 - (dVar8 + dVar8) * *(double *)(param_1 + 0x188);
        local_110 = 1.0 - ((dVar9 + dVar9) * dVar9 + dVar8 * (dVar8 + dVar8));
        FUN_1482ae2be(&local_158,*(undefined4 *)(param_1 + 0x1b4),&local_108,&local_120);
      }
    }
    local_198 = local_130;
    local_190 = local_128;
    local_1a8 = local_140;
    uStack_1a0 = uStack_138;
    local_178 = local_148;
    local_188 = local_158;
    dStack_180 = dStack_150;
    local_160 = DAT_14c846520;
    local_170 = DAT_14c846510;
    uStack_168 = DAT_14c846518;
    FUN_149692370(param_1,&local_1a8,dVar4);
    dVar6 = dVar6 + 1.0;
    iVar1 = iVar1 + 1;
  } while (iVar2 != iVar1);
LAB_1496932d3:
  if ((local_f0 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14969339c FUN_14969339c body=4282 status=ok
// SIG undefined FUN_14969339c(void)

void FUN_14969339c(longlong *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  code *pcVar12;
  undefined4 uVar13;
  longlong lVar14;
  undefined8 uVar15;
  longlong *plVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  longlong lVar19;
  undefined1 auStack_758 [32];
  undefined8 *local_738;
  code **local_730;
  undefined1 local_724 [4];
  code *local_720;
  ulonglong local_718;
  undefined8 local_710;
  undefined1 local_708 [8];
  longlong *local_700;
  code *local_6f8;
  undefined8 local_6e8;
  undefined **local_6d8;
  longlong *local_6d0;
  longlong **local_6c8;
  code *local_6b8;
  undefined8 local_6a8;
  undefined **local_698;
  longlong *local_690;
  longlong **local_688;
  code *local_678;
  undefined8 local_668;
  undefined **local_658;
  longlong *local_650;
  longlong **local_648;
  undefined1 *local_638;
  undefined8 local_628;
  undefined **local_618;
  longlong *local_610;
  undefined1 *local_5f8;
  undefined8 local_5e8;
  undefined **local_5d8;
  longlong *local_5d0;
  undefined1 *local_5b8;
  undefined8 local_5a8;
  undefined **local_598;
  longlong *local_590;
  undefined1 *local_578;
  undefined8 local_568;
  undefined **local_558;
  longlong *local_550;
  undefined1 *local_538;
  undefined8 local_528;
  undefined **local_518;
  longlong *local_510;
  undefined1 *local_4f8;
  undefined8 local_4e8;
  undefined **local_4d8;
  longlong *local_4d0;
  undefined1 *local_4b8;
  undefined8 local_4a8;
  undefined **local_498;
  longlong *local_490;
  undefined1 *local_478;
  undefined8 local_468;
  undefined **local_458;
  longlong *local_450;
  undefined1 *local_438;
  undefined8 local_428;
  undefined **local_418;
  longlong *local_410;
  undefined1 *local_3f8;
  undefined8 local_3e8;
  undefined **local_3d8;
  longlong *local_3d0;
  undefined1 *local_3b8;
  undefined8 local_3a8;
  undefined **local_398;
  longlong *local_390;
  undefined1 *local_378;
  undefined8 local_368;
  undefined **local_358;
  longlong *local_350;
  code *local_338;
  undefined8 local_328;
  undefined **local_318;
  longlong *local_310;
  code *local_2f8;
  undefined8 local_2e8;
  undefined **local_2d8;
  longlong *local_2d0;
  code *local_2b8;
  undefined8 local_2a8;
  undefined **local_298;
  longlong *local_290;
  code *local_278;
  undefined8 local_268;
  undefined **local_258;
  longlong *local_250;
  code *local_238;
  undefined8 local_228;
  undefined **local_218;
  longlong *local_210;
  code *local_1f8;
  undefined8 local_1e8;
  undefined **local_1d8;
  longlong *local_1d0;
  code *local_1b8;
  undefined8 local_1a8;
  undefined **local_198;
  longlong *local_190;
  code *local_178;
  undefined8 local_168;
  undefined **local_158;
  longlong *local_150;
  code *local_138;
  undefined8 local_128;
  undefined **local_118;
  longlong *local_110;
  undefined1 *local_f8;
  undefined8 local_e8;
  undefined **local_d8;
  longlong *local_d0;
  undefined1 *local_b8;
  undefined8 local_a8;
  undefined **local_98;
  longlong *local_90;
  undefined1 *local_78;
  undefined8 local_68;
  undefined **local_58;
  longlong *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_758;
  FUN_1484416be();
  lVar14 = FUN_1484ec096(param_1);
  if ((lVar14 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar14);
  }
  param_1[0x8d] = lVar14;
  uVar15 = (**(code **)(*param_1 + 0x390))(param_1);
  FUN_1484e0ce2(lVar14,uVar15,&DAT_14c846480);
  plVar16 = (longlong *)FUN_148f4925a(param_1);
  if ((plVar16 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar16);
  }
  param_1[0x31] = (longlong)plVar16;
  (**(code **)(*plVar16 + 0x2a0))(plVar16,param_1);
  lVar14 = FUN_149694457(DAT_14c951640);
  if ((lVar14 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar14);
  }
  param_1[0x17] = lVar14;
  (**(code **)(*param_1 + 0x308))(param_1,lVar14);
  plVar16 = (longlong *)param_1[0x17];
  FUN_140056680(&local_720,&DAT_149dfb77a);
  (**(code **)(*plVar16 + 0x2a8))(plVar16,param_1,&local_720);
  if (local_720 != (code *)0x0) {
    FUN_1400020a8();
  }
  local_68 = 0;
  local_58 = &PTR_LAB_14bdcbbd0;
  local_78 = &LAB_14457a62e;
  local_50 = param_1;
  FUN_149694508(param_1[0x17] + 0x28,param_1[0x17] + 0xb8);
  local_a8 = 0;
  local_98 = &PTR_LAB_14bdcbc50;
  local_b8 = &LAB_14457a67e;
  local_90 = param_1;
  FUN_1496945de(param_1[0x17] + 0x28,param_1[0x17] + 0xb9);
  local_e8 = 0;
  local_d8 = &PTR_LAB_14bdcbcd0;
  local_f8 = &LAB_14457a6ce;
  local_d0 = param_1;
  FUN_1496946b4(param_1[0x17] + 0x28,param_1[0x17] + 0xb7);
  local_128 = 0;
  local_118 = &PTR_LAB_14bdcbcf0;
  local_138 = FUN_14457a71e;
  local_110 = param_1;
  FUN_1484c9b00(param_1[0x17] + 0x28,param_1[0x17] + 0xb4);
  local_168 = 0;
  local_158 = &PTR_LAB_14bdcbd10;
  local_178 = FUN_14457a7b2;
  local_150 = param_1;
  FUN_148f741f0(param_1[0x17] + 0x28,param_1[0x17] + 0xa8);
  local_1a8 = 0;
  local_198 = &PTR_LAB_14bdcbd30;
  local_1b8 = FUN_14457a858;
  local_190 = param_1;
  FUN_1484c9b00(param_1[0x17] + 0x28,param_1[0x17] + 0xac);
  local_1e8 = 0;
  local_1d8 = &PTR_LAB_14bdcbd50;
  local_1f8 = FUN_14457a8fe;
  local_1d0 = param_1;
  FUN_1484de26e(param_1[0x17] + 0x28,param_1[0x17] + 0xb0);
  local_228 = 0;
  local_218 = &PTR_LAB_14bdcbd70;
  local_238 = FUN_14457a9a4;
  local_210 = param_1;
  FUN_1484c9b00(param_1[0x17] + 0x28,param_1[0x17] + 0xb4);
  local_268 = 0;
  local_258 = &PTR_LAB_14bdcbd90;
  local_278 = FUN_14457aa38;
  local_250 = param_1;
  FUN_1484c9b00(param_1[0x17] + 0x28,param_1[0x17] + 0xb5);
  local_2a8 = 0;
  local_298 = &PTR_LAB_14bdcbdb0;
  local_2b8 = FUN_14457aade;
  local_290 = param_1;
  FUN_1484c9b00(param_1[0x17] + 0x28,param_1[0x17] + 0xb6);
  lVar14 = FUN_149694789(DAT_14c951640);
  if ((lVar14 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar14);
  }
  param_1[0x18] = lVar14;
  (**(code **)(*param_1 + 0x308))(param_1,lVar14);
  plVar16 = (longlong *)param_1[0x18];
  FUN_140056680(&local_720,&DAT_149dfb77a);
  (**(code **)(*plVar16 + 0x2a8))(plVar16,param_1,&local_720);
  if (local_720 != (code *)0x0) {
    FUN_1400020a8();
  }
  local_2e8 = 0;
  local_2d8 = &PTR_LAB_14bdcbdd0;
  local_2f8 = FUN_14457ab84;
  local_2d0 = param_1;
  FUN_1484c9b00(param_1[0x18] + 0x28,param_1[0x18] + 0xa8);
  local_328 = 0;
  local_318 = &PTR_LAB_14bdcbdf0;
  local_338 = FUN_14457ac2a;
  local_310 = param_1;
  FUN_1484de26e(param_1[0x18] + 0x28,param_1[0x18] + 0xac);
  (**(code **)(*param_1 + 0x328))(param_1,param_1[0x18],0);
  lVar14 = FUN_149694839(DAT_14c951640);
  if ((lVar14 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar14);
  }
  param_1[0x19] = lVar14;
  (**(code **)(*param_1 + 0x308))(param_1,lVar14);
  plVar16 = (longlong *)param_1[0x19];
  FUN_140056680(&local_720,&DAT_149dfb77a);
  (**(code **)(*plVar16 + 0x2a8))(plVar16,param_1,&local_720);
  if (local_720 != (code *)0x0) {
    FUN_1400020a8();
  }
  local_368 = 0;
  local_358 = &PTR_LAB_14bdcbe70;
  local_378 = &LAB_14457acd0;
  local_350 = param_1;
  FUN_1496948ea(param_1[0x19] + 0x28,param_1[0x19] + 0xa8);
  local_3a8 = 0;
  local_398 = &PTR_LAB_14bdcbe90;
  local_3b8 = &LAB_14457ad20;
  local_390 = param_1;
  FUN_1484c9b00(param_1[0x19] + 0x28,param_1[0x19] + 0xc0);
  local_3e8 = 0;
  local_3d8 = &PTR_LAB_14bdcbeb0;
  local_3f8 = &LAB_14457ad70;
  local_3d0 = param_1;
  uVar13 = FUN_14588c620(param_1[0x19] + 0x28,param_1[0x19] + 0xb8);
  *(undefined4 *)((longlong)param_1 + 0x174) = uVar13;
  (**(code **)(*param_1 + 0x328))(param_1,param_1[0x19],0);
  lVar14 = FUN_1496949bf(DAT_14c951640);
  if ((lVar14 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar14);
  }
  param_1[0x1a] = lVar14;
  (**(code **)(*param_1 + 0x308))(param_1,lVar14);
  plVar16 = (longlong *)param_1[0x1a];
  FUN_140056680(&local_720,&DAT_149dfb77a);
  (**(code **)(*plVar16 + 0x2a8))(plVar16,param_1,&local_720);
  if (local_720 != (code *)0x0) {
    FUN_1400020a8();
  }
  local_428 = 0;
  local_418 = &PTR_LAB_14bdcbed0;
  local_438 = &LAB_14457adc0;
  local_410 = param_1;
  FUN_1496948ea(param_1[0x1a] + 0x28,param_1[0x1a] + 0xa8);
  local_468 = 0;
  local_458 = &PTR_LAB_14bdcbef0;
  local_478 = &LAB_14457ae10;
  local_450 = param_1;
  FUN_1496948ea(param_1[0x1a] + 0x28,param_1[0x1a] + 0xc1);
  local_4a8 = 0;
  local_498 = &PTR_LAB_14bdcbf10;
  local_4b8 = &LAB_14457ae60;
  local_490 = param_1;
  FUN_1484c9b00(param_1[0x1a] + 0x28,param_1[0x1a] + 0xc0);
  local_4e8 = 0;
  local_4d8 = &PTR_LAB_14bdcbf30;
  local_4f8 = &LAB_14457aeb0;
  local_4d0 = param_1;
  FUN_1484c9b00(param_1[0x1a] + 0x28,param_1[0x1a] + 0xd8);
  local_528 = 0;
  local_518 = &PTR_LAB_14bdcbf50;
  local_538 = &LAB_14457af00;
  local_510 = param_1;
  uVar13 = FUN_14588c620(param_1[0x1a] + 0x28,param_1[0x1a] + 0xb8);
  *(undefined4 *)(param_1 + 0x2f) = uVar13;
  local_568 = 0;
  local_558 = &PTR_LAB_14bdcbf70;
  local_578 = &LAB_14457af50;
  local_550 = param_1;
  uVar13 = FUN_14588c620(param_1[0x1a] + 0x28,param_1[0x1a] + 0xd0);
  *(undefined4 *)((longlong)param_1 + 0x17c) = uVar13;
  (**(code **)(*param_1 + 0x328))(param_1,param_1[0x1a],0);
  lVar14 = FUN_149694a6f(DAT_14c951640);
  if ((lVar14 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar14);
  }
  param_1[0x1b] = lVar14;
  (**(code **)(*param_1 + 0x308))(param_1,lVar14);
  plVar16 = (longlong *)param_1[0x1b];
  FUN_140056680(&local_720,&DAT_149dfb77a);
  (**(code **)(*plVar16 + 0x2a8))(plVar16,param_1,&local_720);
  if (local_720 != (code *)0x0) {
    FUN_1400020a8();
  }
  local_5a8 = 0;
  local_598 = &PTR_LAB_14bdcbf90;
  local_5b8 = &LAB_14457afa0;
  local_590 = param_1;
  FUN_1496948ea(param_1[0x1b] + 0x28,param_1[0x1b] + 0xa8);
  local_5e8 = 0;
  local_5d8 = &PTR_LAB_14bdcbfb0;
  local_5f8 = &LAB_14457aff0;
  local_5d0 = param_1;
  uVar13 = FUN_14588c620(param_1[0x1b] + 0x28,param_1[0x1b] + 0xb8);
  *(undefined4 *)(param_1 + 0x30) = uVar13;
  (**(code **)(*param_1 + 0x328))(param_1,param_1[0x1b],0);
  lVar14 = FUN_149694b1f(DAT_14c951640);
  if ((lVar14 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar14);
  }
  param_1[0x1c] = lVar14;
  (**(code **)(*param_1 + 0x308))(param_1,lVar14);
  plVar16 = (longlong *)param_1[0x1c];
  FUN_140056680(&local_720,&DAT_149dfb77a);
  (**(code **)(*plVar16 + 0x2a8))(plVar16,param_1,&local_720);
  if (local_720 != (code *)0x0) {
    FUN_1400020a8();
  }
  lVar14 = FUN_149694bcf(DAT_14c951640);
  if ((lVar14 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar14);
  }
  param_1[0x1d] = lVar14;
  (**(code **)(*param_1 + 0x308))(param_1,lVar14);
  plVar16 = (longlong *)param_1[0x1d];
  FUN_140056680(&local_720,&DAT_149dfb77a);
  (**(code **)(*plVar16 + 0x2a8))(plVar16,param_1,&local_720);
  if (local_720 != (code *)0x0) {
    FUN_1400020a8();
  }
  lVar14 = FUN_149694c7f(DAT_14c951640);
  if ((lVar14 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar14);
  }
  param_1[0x1e] = lVar14;
  (**(code **)(*param_1 + 0x308))(param_1,lVar14);
  plVar16 = (longlong *)param_1[0x1e];
  FUN_140056680(&local_720,&DAT_149dfb77a);
  (**(code **)(*plVar16 + 0x2a8))(plVar16,param_1,&local_720);
  if (local_720 != (code *)0x0) {
    FUN_1400020a8();
  }
  local_628 = 0;
  local_618 = &PTR_LAB_14bdcbfd0;
  local_638 = &LAB_14457b040;
  local_610 = param_1;
  FUN_1484c9b00(param_1[0x1e] + 0x28,param_1[0x1e] + 0xa8);
  lVar14 = param_1[0x1e];
  lVar11 = *(longlong *)(lVar14 + 0xb8);
  param_1[0x1f] = *(longlong *)(lVar14 + 0xb0);
  param_1[0x20] = lVar11;
  param_1[0x21] = *(longlong *)(lVar14 + 0xc0);
  lVar11 = *(longlong *)(lVar14 + 0xd0);
  param_1[0x22] = *(longlong *)(lVar14 + 200);
  param_1[0x23] = lVar11;
  param_1[0x24] = *(longlong *)(lVar14 + 0xd8);
  uVar13 = *(undefined4 *)(lVar14 + 0xe4);
  uVar1 = *(undefined4 *)(lVar14 + 0xe8);
  uVar2 = *(undefined4 *)(lVar14 + 0xec);
  *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(lVar14 + 0xe0);
  *(undefined4 *)((longlong)param_1 + 300) = uVar13;
  *(undefined4 *)(param_1 + 0x26) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x134) = uVar2;
  param_1[0x27] = *(longlong *)(lVar14 + 0xf0);
  local_668 = 0;
  local_658 = &PTR_LAB_14bdcbff0;
  local_678 = FUN_14457b0ec;
  local_700 = param_1;
  local_650 = param_1;
  local_648 = &local_700;
  uVar13 = FUN_148f8e3ec(lVar14 + 0x28,lVar14 + 0xb0);
  *(undefined4 *)(param_1 + 0x28) = uVar13;
  local_6a8 = 0;
  local_698 = &PTR_LAB_14bdcc010;
  local_6b8 = FUN_14457b32c;
  local_690 = param_1;
  local_688 = &local_700;
  uVar13 = FUN_148f8e3ec(param_1[0x1e] + 0x28,param_1[0x1e] + 200);
  *(undefined4 *)((longlong)param_1 + 0x144) = uVar13;
  local_6e8 = 0;
  local_6d8 = &PTR_LAB_14bdcc030;
  local_6f8 = FUN_14457b56c;
  local_6d0 = param_1;
  local_6c8 = &local_700;
  uVar13 = FUN_148f8e3ec(param_1[0x1e] + 0x28,param_1[0x1e] + 0xe0);
  *(undefined4 *)(param_1 + 0x29) = uVar13;
  lVar14 = FUN_149694d2f(DAT_14c951640);
  if ((lVar14 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar14);
  }
  param_1[0x2a] = lVar14;
  (**(code **)(*param_1 + 0x308))(param_1,lVar14);
  plVar16 = (longlong *)param_1[0x2a];
  FUN_140056680(&local_720,&DAT_149dfb77a);
  (**(code **)(*plVar16 + 0x2a8))(plVar16,param_1,&local_720);
  if (local_720 != (code *)0x0) {
    FUN_1400020a8();
  }
  *(byte *)(param_1[0x2a] + 0xaa) =
       *(byte *)(param_1[0x2a] + 0xaa) & *(byte *)((longlong)param_1 + 0x351);
  *(undefined1 *)(param_1[0x2a] + 0xac) = *(undefined1 *)((longlong)param_1 + 0x351);
  *(undefined4 *)(param_1 + 0x42) = 0x40000000;
  FUN_149694de0(param_1);
  lVar14 = param_1[0x62];
  lVar11 = param_1[99];
  if ((longlong)(int)lVar11 != 0) {
    lVar19 = 0;
    do {
      if (*(longlong *)(lVar14 + 0xe0 + lVar19) != 0) {
        *(undefined1 *)(param_1[0x2a] + 0xab) = 1;
      }
      lVar19 = lVar19 + 0x148;
    } while ((longlong)(int)lVar11 * 0x148 - lVar19 != 0);
    lVar14 = param_1[0x62];
  }
  lVar11 = *(longlong *)(lVar14 + 0x50);
  uVar13 = *(undefined4 *)(lVar14 + 0x20);
  uVar1 = *(undefined4 *)(lVar14 + 0x24);
  uVar2 = *(undefined4 *)(lVar14 + 0x28);
  uVar3 = *(undefined4 *)(lVar14 + 0x2c);
  uVar4 = *(undefined4 *)(lVar14 + 0x30);
  uVar5 = *(undefined4 *)(lVar14 + 0x34);
  uVar6 = *(undefined4 *)(lVar14 + 0x38);
  uVar7 = *(undefined4 *)(lVar14 + 0x3c);
  uVar8 = *(undefined4 *)(lVar14 + 0x44);
  uVar9 = *(undefined4 *)(lVar14 + 0x48);
  uVar10 = *(undefined4 *)(lVar14 + 0x4c);
  *(undefined4 *)(param_1 + 0x33) = *(undefined4 *)(lVar14 + 0x40);
  *(undefined4 *)((longlong)param_1 + 0x19c) = uVar8;
  *(undefined4 *)(param_1 + 0x34) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = uVar10;
  param_1[0x35] = lVar11;
  *(undefined4 *)(param_1 + 0x36) = uVar13;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = uVar1;
  *(undefined4 *)(param_1 + 0x37) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = uVar3;
  *(undefined4 *)(param_1 + 0x38) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = uVar5;
  *(undefined4 *)(param_1 + 0x39) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = uVar7;
  plVar16 = (longlong *)FUN_148f54d86(param_1);
  if ((plVar16 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar16);
  }
  param_1[0x32] = (longlong)plVar16;
  (**(code **)(*plVar16 + 0x2a0))(plVar16,param_1);
  lVar14 = param_1[0x32];
  uVar15 = (**(code **)(*param_1 + 0x390))(param_1);
  FUN_1484f0d7a(lVar14,uVar15,param_1 + 0x33);
  lVar14 = param_1[0x32];
  local_720 = (code *)0x0;
  local_718._0_4_ = 0;
  uVar17 = 0;
  FUN_1446efa72(&local_720,0,2,0x10);
  pcVar12 = local_720;
  local_718 = CONCAT44(local_718._4_4_,2);
  *(undefined ***)local_720 = &PTR_LAB_149e020b0;
  uVar15 = FUN_144a3f946();
  *(undefined8 *)(pcVar12 + 0x10) = uVar15;
  *(undefined ***)pcVar12 = &PTR_FUN_14bdcc050;
  *(longlong **)(pcVar12 + 0x18) = param_1;
  FUN_1448b6402(lVar14 + 0xb0,local_708,&local_720);
  FUN_1449db362(&local_720);
  uVar15 = (**(code **)(*param_1 + 0x2c8))(param_1);
  lVar14 = FUN_148451390(uVar15);
  if (lVar14 != 0) {
    uVar17 = FUN_148413bcc(lVar14);
  }
  local_720 = (code *)0x4034000000000000;
  local_718 = 0x4034000000000000;
  local_710 = 0x4034000000000000;
  uVar15 = *(undefined8 *)(*(longlong *)(param_1[0x32] + 200) + 0x218);
  uVar18 = (**(code **)(*param_1 + 0x180))(param_1);
  local_738 = &DAT_14c8464e0;
  local_730 = &local_720;
  plVar16 = (longlong *)FUN_14841d738(uVar18,uVar15,uVar17,&DAT_149e1dd34);
  *(undefined4 *)(plVar16 + 0xd5) = 0x40a00000;
  plVar16[0xd2] = 0x401e000000000000;
  plVar16[0xd3] = 0x401e000000000000;
  plVar16[0xd4] = 0x401e000000000000;
  FUN_1448215fa(plVar16);
  (**(code **)(*plVar16 + 0x540))(plVar16);
  if ((plVar16 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar16);
  }
  param_1[0x2d] = (longlong)plVar16;
  lVar14 = FUN_1496952d6(param_1);
  if ((lVar14 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar14);
  }
  param_1[0x2b] = lVar14;
  local_720 = FUN_149695462;
  local_718 = local_718 & 0xffffffff00000000;
  FUN_149695386(lVar14 + 0x28,local_708,param_1,&local_720);
  (**(code **)(*(longlong *)param_1[0x2b] + 0x2f8))((longlong *)param_1[0x2b],plVar16,0);
  FUN_14969583c(param_1);
  local_720 = (code *)0x14ba1690c;
  local_718._0_4_ = 8;
  FUN_1446e940c(local_708,&local_720);
  local_720 = (code *)0x14bd6b408;
  local_718 = CONCAT44(local_718._4_4_,0xc);
  FUN_1446e940c(local_724,&local_720);
  FUN_140208bae(&local_720,local_724,local_708,L"Pattern");
  (**(code **)(*param_1 + 0x370))(param_1,&local_720);
  if (local_720 != (code *)0x0) {
    (**(code **)(*(longlong *)local_720 + 0x10))();
  }
  plVar16 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  local_720 = (code *)0x14bdb2eca;
  local_718._0_4_ = 0x12;
  FUN_1446e940c(local_708,&local_720);
  local_720 = (code *)0x14bd6b408;
  local_718 = CONCAT44(local_718._4_4_,0xc);
  FUN_1446e940c(local_724,&local_720);
  FUN_140208bae(&local_720,local_724,local_708,L"Create Patterns for the selected Objects");
  (**(code **)(*plVar16 + 0x340))(plVar16,&local_720,2);
  if (local_720 != (code *)0x0) {
    (**(code **)(*(longlong *)local_720 + 0x10))();
  }
  if ((char)param_1[0x6a] == '\x01') {
    plVar16 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    local_720 = (code *)0x14bdb2fbc;
    local_718._0_4_ = 0x16;
    FUN_1446e940c(local_708,&local_720);
    local_720 = (code *)0x14bd6b408;
    local_718 = CONCAT44(local_718._4_4_,0xc);
    FUN_1446e940c(local_724,&local_720);
    FUN_140208bae(&local_720,local_724,local_708,
                  L"Source Objects have Non-Uniform Scaling, which may prevent Pattern Transforms from working correctly."
                 );
    (**(code **)(*plVar16 + 0x340))(plVar16,&local_720,3);
    if (local_720 != (code *)0x0) {
      (**(code **)(*(longlong *)local_720 + 0x10))();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_758) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149694457 FUN_149694457 body=175 status=ok
// SIG undefined FUN_149694457(void)

undefined8 FUN_149694457(undefined8 param_1)

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
  local_b8 = FUN_1459f832e();
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



// FUNCTION 149694508 FUN_149694508 body=212 status=ok
// SIG undefined FUN_149694508(void)

void FUN_149694508(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = FUN_14001cc68(0xd0,0x10);
  local_68[0] = *param_3;
  local_58[0] = 0;
  if (local_68[0] != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)*plVar3)(plVar3,local_58);
  }
  FUN_1496c8e76(uVar2,param_2,local_68);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14588c84a(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  if (*param_3 != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496945de FUN_1496945de body=212 status=ok
// SIG undefined FUN_1496945de(void)

void FUN_1496945de(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = FUN_14001cc68(0xd0,0x10);
  local_68[0] = *param_3;
  local_58[0] = 0;
  if (local_68[0] != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)*plVar3)(plVar3,local_58);
  }
  FUN_1496c9194(uVar2,param_2,local_68);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14588c84a(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  if (*param_3 != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496946b4 FUN_1496946b4 body=212 status=ok
// SIG undefined FUN_1496946b4(void)

void FUN_1496946b4(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = FUN_14001cc68(0xd0,0x10);
  local_68[0] = *param_3;
  local_58[0] = 0;
  if (local_68[0] != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)*plVar3)(plVar3,local_58);
  }
  FUN_1496c94b2(uVar2,param_2,local_68);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14588c84a(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  if (*param_3 != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149694789 FUN_149694789 body=175 status=ok
// SIG undefined FUN_149694789(void)

undefined8 FUN_149694789(undefined8 param_1)

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
  local_b8 = FUN_1459f841a();
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



// FUNCTION 149694839 FUN_149694839 body=175 status=ok
// SIG undefined FUN_149694839(void)

undefined8 FUN_149694839(undefined8 param_1)

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
  local_b8 = FUN_1459f8506();
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



// FUNCTION 1496948ea FUN_1496948ea body=212 status=ok
// SIG undefined FUN_1496948ea(void)

void FUN_1496948ea(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = FUN_14001cc68(0xd0,0x10);
  local_68[0] = *param_3;
  local_58[0] = 0;
  if (local_68[0] != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)*plVar3)(plVar3,local_58);
  }
  FUN_1496c97d0(uVar2,param_2,local_68);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14588c84a(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  if (*param_3 != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496949bf FUN_1496949bf body=175 status=ok
// SIG undefined FUN_1496949bf(void)

undefined8 FUN_1496949bf(undefined8 param_1)

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
  local_b8 = FUN_1459f85f2();
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



// FUNCTION 149694a6f FUN_149694a6f body=175 status=ok
// SIG undefined FUN_149694a6f(void)

undefined8 FUN_149694a6f(undefined8 param_1)

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
  local_b8 = FUN_1459f86de();
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



// FUNCTION 149694b1f FUN_149694b1f body=175 status=ok
// SIG undefined FUN_149694b1f(void)

undefined8 FUN_149694b1f(undefined8 param_1)

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
  local_b8 = FUN_1459f87ca();
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


