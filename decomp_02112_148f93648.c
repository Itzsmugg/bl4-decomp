// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148f93648 FUN_148f93648 body=132 status=ok
// SIG undefined FUN_148f93648(void)

void FUN_148f93648(longlong param_1,int param_2)

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



// FUNCTION 148f936ce FUN_148f936ce body=62 status=ok
// SIG undefined FUN_148f936ce(void)

void FUN_148f936ce(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148f9370c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 148f9370c FUN_148f9370c body=93 status=ok
// SIG undefined FUN_148f9370c(void)

ulonglong FUN_148f9370c(uint param_1,uint param_2)

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



// FUNCTION 148f93769 FUN_148f93769 body=48 status=ok
// SIG undefined FUN_148f93769(void)

void FUN_148f93769(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    param_1 = param_1 + 0xb;
  }
  return;
}



// FUNCTION 148f9379a FUN_148f9379a body=143 status=ok
// SIG undefined FUN_148f9379a(void)

void FUN_148f9379a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x58,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x58)) {
      uVar5 = uVar4 / 0x58 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x58,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148f9382a FUN_148f9382a body=29 status=ok
// SIG undefined FUN_148f9382a(void)

undefined8 FUN_148f9382a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f93862 FUN_148f93862 body=29 status=ok
// SIG undefined FUN_148f93862(void)

bool FUN_148f93862(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148f93880 FUN_148f93880 body=26 status=ok
// SIG undefined FUN_148f93880(void)

bool FUN_148f93880(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148f9389a FUN_148f9389a body=24 status=ok
// SIG undefined FUN_148f9389a(void)

bool FUN_148f9389a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148f938b2 FUN_148f938b2 body=101 status=ok
// SIG undefined FUN_148f938b2(void)

void FUN_148f938b2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aeff220;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba316f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148f93918 FUN_148f93918 body=101 status=ok
// SIG undefined FUN_148f93918(void)

void FUN_148f93918(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aeff220;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba316f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148f9397e FUN_148f9397e body=134 status=ok
// SIG undefined FUN_148f9397e(void)

void FUN_148f9397e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14aeff220;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba316f0;
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
                    /* WARNING: Could not recover jumptable at 0x000148f939f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f93a04 FUN_148f93a04 body=118 status=ok
// SIG undefined FUN_148f93a04(void)

void FUN_148f93a04(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88 [13];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = FUN_14479d2ce(param_1 + 0x18);
  pcVar2 = *(code **)(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x28);
  puVar5 = local_88;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = *param_3;
    param_3 = param_3 + 1;
    puVar5 = puVar5 + 1;
  }
  (*pcVar2)(iVar1 + lVar3,param_2);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f93a7c FUN_148f93a7c body=199 status=ok
// SIG undefined FUN_148f93a7c(void)

bool FUN_148f93a7c(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_b8 [32];
  longlong local_98 [13];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar3 = FUN_144a61b4f();
  if (cVar3 == '\0') {
    FUN_140192332(param_1 + 0x18,local_98,0);
    lVar7 = local_98[0];
  }
  else {
    lVar7 = 0;
  }
  lVar4 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar4 != 0) {
    pcVar2 = *(code **)(param_1 + 0x20);
    iVar1 = *(int *)(param_1 + 0x28);
    plVar6 = local_98;
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *plVar6 = *param_3;
      param_3 = param_3 + 1;
      plVar6 = plVar6 + 1;
    }
    (*pcVar2)(iVar1 + lVar4,param_2);
  }
  if ((lVar7 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar7);
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return lVar4 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f93b44 FUN_148f93b44 body=205 status=ok
// SIG undefined FUN_148f93b44(void)

undefined8 * FUN_148f93b44(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14ba31760;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[8] = 0;
  param_1[10] = &PTR_LAB_14ba31780;
  param_1[0xb] = param_2;
  param_1[6] = &LAB_148f93d98;
  param_1[0xe] = *param_3;
  param_1[0x10] = param_3[2];
  param_3[2] = 0;
  lVar5 = param_3[4];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar6 = param_3[5];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  lVar7 = param_3[7];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(param_1 + 0x14) = (int)param_3[6];
  *(undefined4 *)((longlong)param_1 + 0xa4) = uVar3;
  *(int *)(param_1 + 0x15) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0xac) = uVar4;
  *(int *)(param_1 + 0x12) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar1;
  *(int *)(param_1 + 0x13) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar2;
  if (param_1[0xe] != 0) {
    *param_3 = 0;
  }
  param_1[0x18] = 0;
  param_1[0x1a] = &PTR_LAB_14ba317a0;
  param_1[0x1b] = &LAB_148f93df6;
  param_1[0x16] = &LAB_148f93e28;
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 148f93c12 FUN_148f93c12 body=38 status=ok
// SIG undefined FUN_148f93c12(void)

undefined8 FUN_148f93c12(undefined8 param_1,int param_2)

{
  FUN_148f93e7c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f93c38 FUN_148f93c38 body=227 status=ok
// SIG undefined FUN_148f93c38(void)

void FUN_148f93c38(longlong param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pcVar2 = *(code **)(param_1 + 0x30);
  plVar5 = (longlong *)(param_1 + 0x50);
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x40);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar2)(&local_40,uVar4);
  puVar1 = (undefined4 *)(param_1 + 8);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    pcVar2 = *(code **)(param_1 + 0xb0);
    plVar5 = (longlong *)(param_1 + 0xd0);
    if (*(longlong **)(param_1 + 0xc0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xc0);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,puVar1,&local_40);
    if (cVar3 == '\0') goto LAB_148f93cfb;
  }
  if (&local_40 != puVar1) {
    *(undefined8 *)(param_1 + 0x18) = local_30;
    *puVar1 = local_40;
    *(undefined4 *)(param_1 + 0xc) = uStack_3c;
    *(undefined4 *)(param_1 + 0x10) = uStack_38;
    *(undefined4 *)(param_1 + 0x14) = uStack_34;
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  pcVar2 = *(code **)(param_1 + 0x70);
  plVar5 = (longlong *)(param_1 + 0x90);
  if (*(longlong **)(param_1 + 0x80) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x80);
  }
  uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
  (*pcVar2)(uVar4,puVar1);
LAB_148f93cfb:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f93d1c FUN_148f93d1c body=123 status=ok
// SIG undefined FUN_148f93d1c(void)

void FUN_148f93d1c(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar1 = *(code **)(param_1 + 0x30);
  plVar3 = (longlong *)(param_1 + 0x50);
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x40);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(&local_38,uVar2);
  if (&local_38 != (undefined4 *)(param_1 + 8)) {
    *(undefined8 *)(param_1 + 0x18) = local_28;
    *(undefined4 *)(param_1 + 8) = local_38;
    *(undefined4 *)(param_1 + 0xc) = uStack_34;
    *(undefined4 *)(param_1 + 0x10) = uStack_30;
    *(undefined4 *)(param_1 + 0x14) = uStack_2c;
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f93dd8 FUN_148f93dd8 body=29 status=ok
// SIG undefined FUN_148f93dd8(void)

undefined8 FUN_148f93dd8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f93e5e FUN_148f93e5e body=29 status=ok
// SIG undefined FUN_148f93e5e(void)

undefined8 FUN_148f93e5e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f93e7c FUN_148f93e7c body=133 status=ok
// SIG undefined FUN_148f93e7c(void)

void FUN_148f93e7c(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14ba31760;
  if (param_1[0x16] != 0) {
    plVar1 = param_1 + 0x1a;
    if ((longlong *)param_1[0x18] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x18];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0xe] != 0) {
    plVar1 = param_1 + 0x12;
    if ((longlong *)param_1[0x10] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x10];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[6] != 0) {
    plVar1 = param_1 + 10;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 148f93f02 FUN_148f93f02 body=199 status=ok
// SIG undefined FUN_148f93f02(void)

undefined8 * FUN_148f93f02(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14ba31800;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  param_1[4] = 0;
  param_1[6] = &PTR_LAB_14ba31820;
  param_1[7] = param_2;
  param_1[2] = &LAB_148f940f6;
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
  param_1[0x16] = &PTR_LAB_14ba31840;
  param_1[0x17] = &LAB_148f94144;
  param_1[0x12] = &LAB_148f9414c;
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 148f93fca FUN_148f93fca body=38 status=ok
// SIG undefined FUN_148f93fca(void)

undefined8 FUN_148f93fca(undefined8 param_1,int param_2)

{
  FUN_148f941a0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f93ff0 FUN_148f93ff0 body=207 status=ok
// SIG undefined FUN_148f93ff0(void)

void FUN_148f93ff0(longlong param_1)

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
    if (cVar3 == '\0') goto LAB_148f940a1;
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
LAB_148f940a1:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f940c0 FUN_148f940c0 body=53 status=ok
// SIG undefined FUN_148f940c0(void)

void FUN_148f940c0(longlong param_1)

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



// FUNCTION 148f94126 FUN_148f94126 body=29 status=ok
// SIG undefined FUN_148f94126(void)

undefined8 FUN_148f94126(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f94182 FUN_148f94182 body=29 status=ok
// SIG undefined FUN_148f94182(void)

undefined8 FUN_148f94182(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f941a0 FUN_148f941a0 body=127 status=ok
// SIG undefined FUN_148f941a0(void)

void FUN_148f941a0(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14ba31800;
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



// FUNCTION 148f94220 FUN_148f94220 body=29 status=ok
// SIG undefined FUN_148f94220(void)

undefined8 FUN_148f94220(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f94258 FUN_148f94258 body=29 status=ok
// SIG undefined FUN_148f94258(void)

bool FUN_148f94258(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148f94276 FUN_148f94276 body=26 status=ok
// SIG undefined FUN_148f94276(void)

bool FUN_148f94276(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148f94290 FUN_148f94290 body=24 status=ok
// SIG undefined FUN_148f94290(void)

bool FUN_148f94290(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148f942a8 FUN_148f942a8 body=101 status=ok
// SIG undefined FUN_148f942a8(void)

void FUN_148f942a8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aefe820;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba318a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148f9430e FUN_148f9430e body=101 status=ok
// SIG undefined FUN_148f9430e(void)

void FUN_148f9430e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aefe820;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba318a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148f94374 FUN_148f94374 body=134 status=ok
// SIG undefined FUN_148f94374(void)

void FUN_148f94374(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14aefe820;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba318a0;
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
                    /* WARNING: Could not recover jumptable at 0x000148f943eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f943fa FUN_148f943fa body=44 status=ok
// SIG undefined FUN_148f943fa(void)

void FUN_148f943fa(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148f94423. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148f94426 FUN_148f94426 body=156 status=ok
// SIG undefined FUN_148f94426(void)

bool FUN_148f94426(longlong param_1,undefined8 param_2)

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



// FUNCTION 148f944c4 FUN_148f944c4 body=319 status=ok
// SIG undefined FUN_148f944c4(void)

undefined8 * FUN_148f944c4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_14845abbc();
  *param_1 = &PTR_FUN_14ba31910;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0x3ff0000000000000;
  uVar1 = DAT_14c8464e8;
  param_1[0x1a] = DAT_14c8464e0;
  param_1[0x1b] = uVar1;
  param_1[0x1c] = DAT_14c8464f0;
  uVar1 = DAT_14c846518;
  param_1[0x1d] = DAT_14c846510;
  param_1[0x1e] = uVar1;
  param_1[0x1f] = DAT_14c846520;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x23] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x21] = DAT_14c8464e0;
  param_1[0x22] = uVar1;
  param_1[0x26] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x27] = 0x3ff0000000000000;
  param_1[0x28] = 0x3ff0000000000000;
  param_1[0x29] = 0x3ff0000000000000;
  param_1[0x2a] = 0x3ff0000000000000;
  param_1[0x2b] = 0x4234000000000002;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x2e] = 0x3fe0000000000000;
  param_1[0x2f] = 0x3f0000003f000000;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x184) = DAT_14c8461b4;
  *(undefined8 *)((longlong)param_1 + 0x18c) = DAT_14c84635c;
  return param_1;
}



// FUNCTION 148f94604 FUN_148f94604 body=38 status=ok
// SIG undefined FUN_148f94604(void)

undefined8 FUN_148f94604(undefined8 param_1,int param_2)

{
  FUN_148f9462a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f9462a FUN_148f9462a body=157 status=ok
// SIG undefined FUN_148f9462a(void)

void FUN_148f9462a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14ba31910;
  plVar3 = (longlong *)param_1[0x14];
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
  plVar3 = (longlong *)param_1[0x12];
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
  *param_1 = &PTR_LAB_14aee4ae0;
  FUN_146c81a14(param_1 + 0xc);
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148f946bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar4)(puVar4,1);
    return;
  }
  return;
}



// FUNCTION 148f946c8 FUN_148f946c8 body=36 status=ok
// SIG undefined FUN_148f946c8(void)

undefined8 FUN_148f946c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 148f94708 FUN_148f94708 body=93 status=ok
// SIG undefined FUN_148f94708(void)

void FUN_148f94708(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba319b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148f94766 FUN_148f94766 body=126 status=ok
// SIG undefined FUN_148f94766(void)

void FUN_148f94766(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba319b0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148f947d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f947e4 FUN_148f947e4 body=21 status=ok
// SIG undefined FUN_148f947e4(void)

undefined8 FUN_148f947e4(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148f947fa FUN_148f947fa body=37 status=ok
// SIG undefined FUN_148f947fa(void)

void FUN_148f947fa(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148f94820();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148f94820 FUN_148f94820 body=58 status=ok
// SIG undefined FUN_148f94820(void)

undefined8 FUN_148f94820(void)

{
  char cVar1;
  undefined8 uVar2;
  
  FUN_144376444();
  FUN_144376444();
  FUN_144376444();
  uVar2 = 0;
  if ((DAT_14c7647f8 == '\0') && (cVar1 = FUN_148f94b80(0xfb), cVar1 != '\0')) {
    uVar2 = 0xfb;
  }
  return uVar2;
}



// FUNCTION 148f9485a FUN_148f9485a body=280 status=ok
// SIG undefined FUN_148f9485a(void)

void FUN_148f9485a(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar2 = &local_24;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = puVar1;
  }
  puVar1 = &local_28;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_144376444();
  FUN_1485f68c1(puVar2,puVar1);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f94974 FUN_148f94974 body=37 status=ok
// SIG undefined FUN_148f94974(void)

void FUN_148f94974(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_144376116();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148f9499a FUN_148f9499a body=139 status=ok
// SIG undefined FUN_148f9499a(void)

void FUN_148f9499a(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148f94a26(&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f94a26 FUN_148f94a26 body=187 status=ok
// SIG undefined FUN_148f94a26(void)

longlong * FUN_148f94a26(longlong *param_1)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  ulonglong unaff_RBX;
  longlong lVar6;
  longlong lVar7;
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_144376444();
  if (DAT_14cbf4068 == 0) {
    uVar5 = FUN_146669c42();
    DAT_14cbf4068 = FUN_14171c317(FUN_146669c71,uVar5,L"EStreamlineDLSSGMode");
  }
  lVar3 = DAT_14cbf4068;
  if (1 < *(int *)(DAT_14cbf4068 + 0x48)) {
    lVar7 = 8;
    lVar6 = 0;
    do {
      uVar1 = *(undefined1 *)(*(longlong *)(lVar3 + 0x40) + lVar7);
      unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),uVar1);
      cVar4 = FUN_148f94b80(unaff_RBX & 0xffffffff);
      if (cVar4 != '\0') {
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_148f94d46(param_1,iVar2);
        }
        *(undefined1 *)(*param_1 + (longlong)iVar2) = uVar1;
      }
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 0x10;
    } while (lVar6 < (longlong)*(int *)(lVar3 + 0x48) + -1);
  }
  return param_1;
}



// FUNCTION 148f94ae8 FUN_148f94ae8 body=150 status=ok
// SIG undefined FUN_148f94ae8(void)

void FUN_148f94ae8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148f94b80(local_19);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f94b80 FUN_148f94b80 body=207 status=ok
// SIG undefined FUN_148f94b80(void)

ulonglong FUN_148f94b80(uint param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  bool bVar5;
  undefined1 auStack_48 [40];
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144376444();
  cVar2 = FUN_1443764b4(param_1);
  if (cVar2 == '\0') {
    uVar4 = 0;
    goto LAB_148f94bf6;
  }
  if ((char)param_1 == '\0') {
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    goto LAB_148f94bf6;
  }
  FUN_144376444();
  FUN_144376444();
  uVar4 = 0;
  if (DAT_14c7647f8 != '\0') goto LAB_148f94bf6;
  local_1c = 0;
  local_20 = 0;
  FUN_14586b670();
  param_1 = param_1 & 0xff;
  if (param_1 < 0x1f) {
    if (param_1 != 0x11) {
      if (param_1 != 0x17) goto LAB_148f94bf6;
      bVar3 = local_1c < 3;
      bVar5 = SBORROW4(local_20,2);
      iVar1 = local_20 + -2;
      goto LAB_148f94c47;
    }
LAB_148f94c27:
    bVar3 = local_1c < 2;
    bVar5 = 0 < local_20;
  }
  else {
    if (param_1 != 0x1f) {
      if (param_1 != 0xfb) goto LAB_148f94bf6;
      goto LAB_148f94c27;
    }
    bVar3 = local_1c < 4;
    bVar5 = SBORROW4(local_20,3);
    iVar1 = local_20 + -3;
LAB_148f94c47:
    bVar5 = bVar5 == iVar1 < 0;
  }
  uVar4 = (ulonglong)(byte)(bVar5 & bVar3);
LAB_148f94bf6:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f94c54 FUN_148f94c54 body=50 status=ok
// SIG undefined FUN_148f94c54(void)

void FUN_148f94c54(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_144376444();
  FUN_144376444();
  *(bool *)param_3 = DAT_14c7647f8 == '\0';
  return;
}



// FUNCTION 148f94c86 FUN_148f94c86 body=43 status=ok
// SIG undefined FUN_148f94c86(void)

void FUN_148f94c86(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_144376444();
  *param_3 = DAT_14c7647f8;
  return;
}



// FUNCTION 148f94cb2 FUN_148f94cb2 body=143 status=ok
// SIG undefined FUN_148f94cb2(void)

void FUN_148f94cb2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [39];
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_11 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_11);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_11);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_144376284(local_11);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f94d46 FUN_148f94d46 body=124 status=ok
// SIG undefined FUN_148f94d46(void)

void FUN_148f94d46(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
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
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    iVar2 = FUN_144a3809e(lVar4,1);
    iVar5 = 0x7fffffff;
    if ((int)uVar1 <= iVar2) {
      iVar5 = iVar2;
    }
    *(int *)(param_1 + 0xc) = iVar5;
    FUN_1446f8d3c(param_1,param_2,iVar5,1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148f94dc4 FUN_148f94dc4 body=36 status=ok
// SIG undefined FUN_148f94dc4(void)

undefined8 FUN_148f94dc4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 148f94e04 FUN_148f94e04 body=93 status=ok
// SIG undefined FUN_148f94e04(void)

void FUN_148f94e04(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba32890;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148f94e62 FUN_148f94e62 body=123 status=ok
// SIG undefined FUN_148f94e62(void)

void FUN_148f94e62(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba32890;
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



// FUNCTION 148f94ede FUN_148f94ede body=21 status=ok
// SIG undefined FUN_148f94ede(void)

undefined8 FUN_148f94ede(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148f94ef4 FUN_148f94ef4 body=39 status=ok
// SIG undefined FUN_148f94ef4(void)

void FUN_148f94ef4(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148f94f1c();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148f94f1c FUN_148f94f1c body=161 status=ok
// SIG undefined FUN_148f94f1c(void)

undefined8 FUN_148f94f1c(void)

{
  undefined8 uVar1;
  
  FUN_144376878();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf41f8) {
    FUN_144b3d300(&DAT_14cbf41f8);
    if (DAT_14cbf41f8 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14cbf41f0 =
           (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Streamline.DeepDVC.Intensity",1);
      _Init_thread_footer(&DAT_14cbf41f8);
    }
  }
  if (DAT_14cbf41f0 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148f94f59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*DAT_14cbf41f0 + 0xb8))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 148f94fbe FUN_148f94fbe body=37 status=ok
// SIG undefined FUN_148f94fbe(void)

void FUN_148f94fbe(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1443766ce();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148f94fe4 FUN_148f94fe4 body=39 status=ok
// SIG undefined FUN_148f94fe4(void)

void FUN_148f94fe4(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148f9500c();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148f9500c FUN_148f9500c body=161 status=ok
// SIG undefined FUN_148f9500c(void)

undefined8 FUN_148f9500c(void)

{
  undefined8 uVar1;
  
  FUN_144376878();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf4218) {
    FUN_144b3d300(&DAT_14cbf4218);
    if (DAT_14cbf4218 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14cbf4210 =
           (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))
                     (DAT_14c8407a8,L"r.Streamline.DeepDVC.SaturationBoost",1);
      _Init_thread_footer(&DAT_14cbf4218);
    }
  }
  if (DAT_14cbf4210 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148f95049. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*DAT_14cbf4210 + 0xb8))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 148f950ae FUN_148f950ae body=48 status=ok
// SIG undefined FUN_148f950ae(void)

void FUN_148f950ae(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_144376878();
  FUN_144376878();
  FUN_144376878();
  *param_3 = 0;
  return;
}



// FUNCTION 148f950de FUN_148f950de body=139 status=ok
// SIG undefined FUN_148f950de(void)

void FUN_148f950de(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148f9516a(&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f9516a FUN_148f9516a body=187 status=ok
// SIG undefined FUN_148f9516a(void)

longlong * FUN_148f9516a(longlong *param_1)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  ulonglong unaff_RBX;
  longlong lVar6;
  longlong lVar7;
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_144376878();
  if (DAT_14cbf4138 == 0) {
    uVar5 = FUN_146669ffc();
    DAT_14cbf4138 = FUN_14171c317(FUN_14666a02b,uVar5,L"EStreamlineDeepDVCMode");
  }
  lVar3 = DAT_14cbf4138;
  if (1 < *(int *)(DAT_14cbf4138 + 0x48)) {
    lVar7 = 8;
    lVar6 = 0;
    do {
      uVar1 = *(undefined1 *)(*(longlong *)(lVar3 + 0x40) + lVar7);
      unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),uVar1);
      cVar4 = FUN_148f952c4(unaff_RBX & 0xffffffff);
      if (cVar4 != '\0') {
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_148f957a0(param_1,iVar2);
        }
        *(undefined1 *)(*param_1 + (longlong)iVar2) = uVar1;
      }
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 0x10;
    } while (lVar6 < (longlong)*(int *)(lVar3 + 0x48) + -1);
  }
  return param_1;
}



// FUNCTION 148f9522c FUN_148f9522c body=150 status=ok
// SIG undefined FUN_148f9522c(void)

void FUN_148f9522c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148f952c4(local_19);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f952c4 FUN_148f952c4 body=107 status=ok
// SIG undefined FUN_148f952c4(void)

bool FUN_148f952c4(undefined4 param_1)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  
  FUN_144376878();
  if (DAT_14cbf4138 == 0) {
    uVar2 = FUN_146669ffc();
    DAT_14cbf4138 = FUN_14171c317(FUN_14666a02b,uVar2,L"EStreamlineDeepDVCMode");
  }
  cVar1 = FUN_1443768e8(param_1);
  if (cVar1 == '\0') {
    bVar3 = false;
  }
  else if ((char)param_1 == '\0') {
    bVar3 = true;
  }
  else {
    FUN_144376878();
    FUN_144376878();
    bVar3 = DAT_14c7647fc == '\0';
  }
  return bVar3;
}



// FUNCTION 148f95334 FUN_148f95334 body=50 status=ok
// SIG undefined FUN_148f95334(void)

void FUN_148f95334(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_144376878();
  FUN_144376878();
  *(bool *)param_3 = DAT_14c7647fc == '\0';
  return;
}



// FUNCTION 148f95366 FUN_148f95366 body=43 status=ok
// SIG undefined FUN_148f95366(void)

void FUN_148f95366(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_144376878();
  *param_3 = DAT_14c7647fc;
  return;
}



// FUNCTION 148f95392 FUN_148f95392 body=148 status=ok
// SIG undefined FUN_148f95392(void)

void FUN_148f95392(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_14);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_14);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148f95428(local_14);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f95428 FUN_148f95428 body=294 status=ok
// SIG undefined FUN_148f95428(void)

void FUN_148f95428(float param_1)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144376878();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cbf41e8) && (FUN_144b3d300(&DAT_14cbf41e8), DAT_14cbf41e8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14cbf41e0 =
         (longlong *)
         (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Streamline.DeepDVC.Intensity",1);
    _Init_thread_footer(&DAT_14cbf41e8);
  }
  plVar1 = DAT_14cbf41e0;
  if (DAT_14cbf41e0 != (longlong *)0x0) {
    FUN_140002266(&local_40,L"%2.2f",(double)param_1);
    puVar2 = local_40;
    if (local_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    (**(code **)(*plVar1 + 0x98))(plVar1,puVar2,0xc000000,0);
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f95550 FUN_148f95550 body=143 status=ok
// SIG undefined FUN_148f95550(void)

void FUN_148f95550(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [39];
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_11 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_11);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_11);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_144376772(local_11);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f955e0 FUN_148f955e0 body=148 status=ok
// SIG undefined FUN_148f955e0(void)

void FUN_148f955e0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_14);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_14);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148f95676(local_14);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f95676 FUN_148f95676 body=294 status=ok
// SIG undefined FUN_148f95676(void)

void FUN_148f95676(float param_1)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144376878();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cbf4208) && (FUN_144b3d300(&DAT_14cbf4208), DAT_14cbf4208 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14cbf4200 =
         (longlong *)
         (**(code **)(*DAT_14c8407a8 + 200))
                   (DAT_14c8407a8,L"r.Streamline.DeepDVC.SaturationBoost",1);
    _Init_thread_footer(&DAT_14cbf4208);
  }
  plVar1 = DAT_14cbf4200;
  if (DAT_14cbf4200 != (longlong *)0x0) {
    FUN_140002266(&local_40,L"%2.2f",(double)param_1);
    puVar2 = local_40;
    if (local_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    (**(code **)(*plVar1 + 0x98))(plVar1,puVar2,0xc000000,0);
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f957a0 FUN_148f957a0 body=124 status=ok
// SIG undefined FUN_148f957a0(void)

void FUN_148f957a0(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
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
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    iVar2 = FUN_144a3809e(lVar4,1);
    iVar5 = 0x7fffffff;
    if ((int)uVar1 <= iVar2) {
      iVar5 = iVar2;
    }
    *(int *)(param_1 + 0xc) = iVar5;
    FUN_1446f8d3c(param_1,param_2,iVar5,1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148f9581e FUN_148f9581e body=36 status=ok
// SIG undefined FUN_148f9581e(void)

undefined8 FUN_148f9581e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 148f9585e FUN_148f9585e body=93 status=ok
// SIG undefined FUN_148f9585e(void)

void FUN_148f9585e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba338f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148f958bc FUN_148f958bc body=123 status=ok
// SIG undefined FUN_148f958bc(void)

void FUN_148f958bc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba338f0;
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



// FUNCTION 148f95938 FUN_148f95938 body=21 status=ok
// SIG undefined FUN_148f95938(void)

undefined8 FUN_148f95938(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148f95964 FUN_148f95964 body=38 status=ok
// SIG undefined FUN_148f95964(void)

undefined8 FUN_148f95964(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Project",1);
  return param_2;
}



// FUNCTION 148f9598a FUN_148f9598a body=38 status=ok
// SIG undefined FUN_148f9598a(void)

undefined8 FUN_148f9598a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Plugins",1);
  return param_2;
}



// FUNCTION 148f959cc FUN_148f959cc body=38 status=ok
// SIG undefined FUN_148f959cc(void)

void FUN_148f959cc(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(8,0x10);
  FUN_144377126(uVar1,DAT_14cbf43d0);
  return;
}



// FUNCTION 148f959f2 FUN_148f959f2 body=13 status=ok
// SIG undefined FUN_148f959f2(void)

int FUN_148f959f2(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x10);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2 + 1;
}



// FUNCTION 148f95a06 FUN_148f95a06 body=31 status=ok
// SIG undefined FUN_148f95a06(void)

undefined8 FUN_148f95a06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f95a42 FUN_148f95a42 body=93 status=ok
// SIG undefined FUN_148f95a42(void)

void FUN_148f95a42(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba347d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148f95aa0 FUN_148f95aa0 body=126 status=ok
// SIG undefined FUN_148f95aa0(void)

void FUN_148f95aa0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba347d0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148f95b0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f95b1e FUN_148f95b1e body=21 status=ok
// SIG undefined FUN_148f95b1e(void)

undefined8 FUN_148f95b1e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148f95b34 FUN_148f95b34 body=31 status=ok
// SIG undefined FUN_148f95b34(void)

undefined8 FUN_148f95b34(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f95b70 FUN_148f95b70 body=93 status=ok
// SIG undefined FUN_148f95b70(void)

void FUN_148f95b70(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba34980;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148f95bce FUN_148f95bce body=126 status=ok
// SIG undefined FUN_148f95bce(void)

void FUN_148f95bce(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e170a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba34980;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148f95c3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f95c5a FUN_148f95c5a body=29 status=ok
// SIG undefined FUN_148f95c5a(void)

undefined8 FUN_148f95c5a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f95c78 FUN_148f95c78 body=258 status=ok
// SIG undefined FUN_148f95c78(void)

void FUN_148f95c78(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf4460) {
    FUN_144b3d300(&DAT_14cbf4460);
    if (DAT_14cbf4460 == -1) {
      FUN_148f95d7c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FXeSSShaderParameters";
      local_38 = 0;
      local_50 = 0x60;
      local_58 = 0xb8;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cbf43e0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14437a5b6);
      _Init_thread_footer(&DAT_14cbf4460);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f95d7c FUN_148f95d7c body=226 status=ok
// SIG undefined FUN_148f95d7c(void)

longlong * FUN_148f95d7c(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_148f95e60;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f95e60 FUN_148f95e60 body=136 status=ok
// SIG undefined FUN_148f95e60(void)

code * FUN_148f95e60(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SceneColorOutput";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000000c1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 10;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148f95ee8;
}



// FUNCTION 148f95ee8 FUN_148f95ee8 body=136 status=ok
// SIG undefined FUN_148f95ee8(void)

code * FUN_148f95ee8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DummyBuffer";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000000be;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xf;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148f95f70;
}



// FUNCTION 148f95f70 FUN_148f95f70 body=136 status=ok
// SIG undefined FUN_148f95f70(void)

code * FUN_148f95f70(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InputVelocity";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000000bb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 10;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148f95ff8;
}



// FUNCTION 148f95ff8 FUN_148f95ff8 body=130 status=ok
// SIG undefined FUN_148f95ff8(void)

undefined1 * FUN_148f95ff8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InputColor";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xba;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 10;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_148f9607a;
}



// FUNCTION 148f9608a FUN_148f9608a body=43 status=ok
// SIG undefined FUN_148f9608a(void)

void FUN_148f9608a(longlong param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  uVar1 = FUN_143c18c90();
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 0x90) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x000148f960b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_2,UNRECOVERED_JUMPTABLE);
  return;
}



// FUNCTION 148f960ba FUN_148f960ba body=56 status=ok
// SIG undefined FUN_148f960ba(void)

undefined8 * FUN_148f960ba(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x98);
  FUN_14162ea22(puVar1);
  *puVar1 = &PTR_FUN_14ba34af0;
  puVar1[0x12] = 0;
  return puVar1;
}



// FUNCTION 148f960f2 FUN_148f960f2 body=43 status=ok
// SIG undefined FUN_148f960f2(void)

undefined8 FUN_148f960f2(undefined8 param_1,int param_2)

{
  FUN_141653b52();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 148f9611e FUN_148f9611e body=36 status=ok
// SIG undefined FUN_148f9611e(void)

undefined8 FUN_148f9611e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 148f9615e FUN_148f9615e body=93 status=ok
// SIG undefined FUN_148f9615e(void)

void FUN_148f9615e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba34b50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148f961bc FUN_148f961bc body=123 status=ok
// SIG undefined FUN_148f961bc(void)

void FUN_148f961bc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba34b50;
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



// FUNCTION 148f96238 FUN_148f96238 body=21 status=ok
// SIG undefined FUN_148f96238(void)

undefined8 FUN_148f96238(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148f9625a FUN_148f9625a body=221 status=ok
// SIG undefined FUN_148f9625a(void)

void FUN_148f9625a(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  uVar2 = *param_2;
  uStack_30._0_4_ = 1;
  uStack_30._4_4_ = 0;
  FUN_148f96430(&local_38,0);
  iVar3 = (int)uStack_30;
  *local_38 = 0;
  local_38[1] = uVar2;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  *(undefined4 *)((longlong)local_38 + 0x14) = 4;
  *(undefined4 *)(local_38 + 3) = 0x40;
  *(undefined4 *)((longlong)local_38 + 0x1c) = 0;
  uVar2 = param_2[1];
  lVar5 = (longlong)(int)uStack_30;
  uVar4 = (int)uStack_30 + 1;
  uStack_30 = CONCAT44(uStack_30._4_4_,uVar4);
  if (uStack_30._4_4_ < uVar4) {
    FUN_148f96430(&local_38,iVar3);
  }
  local_38[lVar5 * 4] = 0;
  local_38[lVar5 * 4 + 1] = uVar2;
  puVar1 = local_38 + lVar5 * 4 + 2;
  *(undefined4 *)puVar1 = 0xffffffff;
  *(undefined4 *)((longlong)puVar1 + 4) = 8;
  *(undefined4 *)(puVar1 + 1) = 0x40;
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  (**(code **)(*param_1 + 0xd0))(param_1,uStack_30 & 0xffffffff,local_38);
  if (local_38 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f96338 FUN_148f96338 body=221 status=ok
// SIG undefined FUN_148f96338(void)

void FUN_148f96338(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  uVar2 = *param_2;
  uStack_30._0_4_ = 1;
  uStack_30._4_4_ = 0;
  FUN_148f96430(&local_38,0);
  iVar3 = (int)uStack_30;
  *local_38 = 0;
  local_38[1] = uVar2;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  *(undefined4 *)((longlong)local_38 + 0x14) = 0x40;
  *(undefined4 *)(local_38 + 3) = 4;
  *(undefined4 *)((longlong)local_38 + 0x1c) = 0;
  uVar2 = param_2[1];
  lVar5 = (longlong)(int)uStack_30;
  uVar4 = (int)uStack_30 + 1;
  uStack_30 = CONCAT44(uStack_30._4_4_,uVar4);
  if (uStack_30._4_4_ < uVar4) {
    FUN_148f96430(&local_38,iVar3);
  }
  local_38[lVar5 * 4] = 0;
  local_38[lVar5 * 4 + 1] = uVar2;
  puVar1 = local_38 + lVar5 * 4 + 2;
  *(undefined4 *)puVar1 = 0xffffffff;
  *(undefined4 *)((longlong)puVar1 + 4) = 0x40;
  *(undefined4 *)(puVar1 + 1) = 8;
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  (**(code **)(*param_1 + 0xd0))(param_1,uStack_30 & 0xffffffff,local_38);
  if (local_38 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f96430 FUN_148f96430 body=132 status=ok
// SIG undefined FUN_148f96430(void)

void FUN_148f96430(longlong param_1,int param_2)

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



// FUNCTION 148f964b6 FUN_148f964b6 body=36 status=ok
// SIG undefined FUN_148f964b6(void)

undefined8 FUN_148f964b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 148f964f6 FUN_148f964f6 body=93 status=ok
// SIG undefined FUN_148f964f6(void)

void FUN_148f964f6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba34cb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148f96554 FUN_148f96554 body=123 status=ok
// SIG undefined FUN_148f96554(void)

void FUN_148f96554(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba34cb0;
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



// FUNCTION 148f965d0 FUN_148f965d0 body=21 status=ok
// SIG undefined FUN_148f965d0(void)

undefined8 FUN_148f965d0(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148f965f2 FUN_148f965f2 body=71 status=ok
// SIG undefined FUN_148f965f2(void)

void FUN_148f965f2(longlong param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 0x90) + 0x58);
  uVar1 = FUN_143c18d64();
  uVar2 = FUN_143c18d7f();
  uVar3 = FUN_143c18d73();
                    /* WARNING: Could not recover jumptable at 0x000148f96636. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar3,uVar2,uVar1,param_2);
  return;
}



// FUNCTION 148f96654 FUN_148f96654 body=56 status=ok
// SIG undefined FUN_148f96654(void)

undefined8 * FUN_148f96654(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x98);
  FUN_14162ea22(puVar1);
  *puVar1 = &PTR_FUN_14ba34d70;
  puVar1[0x12] = 0;
  return puVar1;
}



// FUNCTION 148f9668c FUN_148f9668c body=43 status=ok
// SIG undefined FUN_148f9668c(void)

undefined8 FUN_148f9668c(undefined8 param_1,int param_2)

{
  FUN_141653b52();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 148f966b8 FUN_148f966b8 body=36 status=ok
// SIG undefined FUN_148f966b8(void)

undefined8 FUN_148f966b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 148f966f8 FUN_148f966f8 body=93 status=ok
// SIG undefined FUN_148f966f8(void)

void FUN_148f966f8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba34dd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148f96756 FUN_148f96756 body=123 status=ok
// SIG undefined FUN_148f96756(void)

void FUN_148f96756(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba34dd0;
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



// FUNCTION 148f967d2 FUN_148f967d2 body=21 status=ok
// SIG undefined FUN_148f967d2(void)

undefined8 FUN_148f967d2(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148f967e8 FUN_148f967e8 body=36 status=ok
// SIG undefined FUN_148f967e8(void)

undefined8 FUN_148f967e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 148f96828 FUN_148f96828 body=93 status=ok
// SIG undefined FUN_148f96828(void)

void FUN_148f96828(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba34f00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148f96886 FUN_148f96886 body=123 status=ok
// SIG undefined FUN_148f96886(void)

void FUN_148f96886(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba34f00;
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



// FUNCTION 148f96902 FUN_148f96902 body=21 status=ok
// SIG undefined FUN_148f96902(void)

undefined8 FUN_148f96902(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148f96918 FUN_148f96918 body=162 status=ok
// SIG undefined FUN_148f96918(void)

void FUN_148f96918(undefined8 param_1,longlong param_2,byte *param_3)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_20._4_4_ * local_20._0_4_ < 0x384001 | 2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f969bc FUN_148f969bc body=139 status=ok
// SIG undefined FUN_148f969bc(void)

void FUN_148f969bc(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148f96a48(&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f96a48 FUN_148f96a48 body=169 status=ok
// SIG undefined FUN_148f96a48(void)

longlong * FUN_148f96a48(longlong *param_1)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (DAT_14cbf44a8 == 0) {
    uVar4 = FUN_14666ad20();
    DAT_14cbf44a8 = FUN_14171c317(FUN_14666ad4f,uVar4,L"EXeSSQualityMode");
  }
  lVar3 = DAT_14cbf44a8;
  if (1 < *(int *)(DAT_14cbf44a8 + 0x48)) {
    lVar5 = 8;
    lVar6 = 0;
    do {
      uVar1 = *(undefined1 *)(*(longlong *)(lVar3 + 0x40) + lVar5);
      iVar2 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
        FUN_148f96f7a(param_1,iVar2);
      }
      *(undefined1 *)(*param_1 + (longlong)iVar2) = uVar1;
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x10;
    } while (lVar6 < (longlong)*(int *)(lVar3 + 0x48) + -1);
  }
  return param_1;
}



// FUNCTION 148f96af2 FUN_148f96af2 body=37 status=ok
// SIG undefined FUN_148f96af2(void)

void FUN_148f96af2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148f96b18();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148f96b18 FUN_148f96b18 body=561 status=ok
// SIG undefined FUN_148f96b18(void)

ulonglong FUN_148f96b18(void)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cbf4580) && (FUN_144b3d300(&DAT_14cbf4580), DAT_14cbf4580 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14cbf4578 =
         (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.XeSS.Quality",1);
    _Init_thread_footer(&DAT_14cbf4580);
  }
  if (DAT_14cbf4570 != 0) {
    cVar2 = FUN_144afcdd4();
    uVar7 = 0;
    if (cVar2 == '\0') goto LAB_148f96cc2;
    uVar3 = (**(code **)(*DAT_14cbf4578 + 0xb0))();
    iVar6 = 0x66;
    if (uVar3 < 7) {
      iVar6 = uVar3 + 100;
    }
    local_50 = 0x100000000;
    local_48 = &DAT_14cbf4520;
    local_40 = 0xffffffff;
    local_38 = 0;
    if (DAT_14cbf4538 != 0) {
      FUN_1449c0562(&local_50);
      uVar7 = (ulonglong)DAT_14cbf4538;
    }
    local_60 = local_40;
    uVar1 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_70 = local_50;
    local_68 = local_48;
    local_78 = &DAT_14cbf4510;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if ((local_60._4_4_ != (int)uVar7) || (local_48 != &DAT_14cbf4520)) {
      iVar4 = local_60._4_4_;
      local_60 = uVar1;
      do {
        if (*(int *)(*local_78 + 4 + (longlong)iVar4 * 0x10) == iVar6) {
          uVar7 = CONCAT71((int7)(uVar7 >> 8),*(undefined1 *)(*local_78 + (longlong)iVar4 * 0x10));
          goto LAB_148f96cc2;
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar1 = local_60;
      } while (local_78 != &DAT_14cbf4510 ||
               (local_68 != &DAT_14cbf4520 || local_60._4_4_ != (int)uVar7));
    }
    local_60 = uVar1;
    FUN_140002266(&local_78,L"ToXeSSQualityMode called with invalid value (%d)",uVar3);
    plVar5 = local_78;
    if ((int)local_70 == 0) {
      plVar5 = (longlong *)&DAT_149dfb77a;
    }
    FUN_1415b7ec4(plVar5,3,0);
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  uVar7 = 0;
LAB_148f96cc2:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 148f96d50 FUN_148f96d50 body=248 status=ok
// SIG undefined FUN_148f96d50(void)

void FUN_148f96d50(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
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
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  puVar3 = &local_20;
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_14437b706(CONCAT71((int7)((ulonglong)puVar1 >> 8),local_19),puVar3);
  *param_3 = uVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f96e4e FUN_148f96e4e body=143 status=ok
// SIG undefined FUN_148f96e4e(void)

void FUN_148f96e4e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [39];
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_11 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_11);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_11);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14437b80e(local_11);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f96efa FUN_148f96efa body=128 status=ok
// SIG undefined FUN_148f96efa(void)

void FUN_148f96efa(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cbf4510;
  if (DAT_14cbf4544 != 0) {
    *(int *)(DAT_14cbf4510 + (longlong)DAT_14cbf4540 * 0x10) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x10) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cbf4544) {
    iVar4 = DAT_14cbf4540;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x10) = iVar4;
  DAT_14cbf4544 = DAT_14cbf4544 + 1;
  puVar3 = &DAT_14cbf4520;
  if (DAT_14cbf4530 != (undefined *)0x0) {
    puVar3 = DAT_14cbf4530;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cbf4540 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 148f96f7a FUN_148f96f7a body=124 status=ok
// SIG undefined FUN_148f96f7a(void)

void FUN_148f96f7a(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
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
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    iVar2 = FUN_144a3809e(lVar4,1);
    iVar5 = 0x7fffffff;
    if ((int)uVar1 <= iVar2) {
      iVar5 = iVar2;
    }
    *(int *)(param_1 + 0xc) = iVar5;
    FUN_1446f8d3c(param_1,param_2,iVar5,1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148f96ff8 FUN_148f96ff8 body=36 status=ok
// SIG undefined FUN_148f96ff8(void)

undefined8 FUN_148f96ff8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 148f97038 FUN_148f97038 body=93 status=ok
// SIG undefined FUN_148f97038(void)

void FUN_148f97038(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba35eb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148f97096 FUN_148f97096 body=123 status=ok
// SIG undefined FUN_148f97096(void)

void FUN_148f97096(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba35eb0;
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



// FUNCTION 148f97112 FUN_148f97112 body=21 status=ok
// SIG undefined FUN_148f97112(void)

undefined8 FUN_148f97112(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148f9712c FUN_148f9712c body=58 status=ok
// SIG undefined FUN_148f9712c(void)

void FUN_148f9712c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong **)(DAT_14cbf4678 + 0x30) == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(DAT_14cbf4678 + 0x30) + 0x28))();
  }
  *param_3 = uVar1;
  return;
}



// FUNCTION 148f97166 FUN_148f97166 body=64 status=ok
// SIG undefined FUN_148f97166(void)

void FUN_148f97166(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong **)(DAT_14cbf4678 + 0x30) == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(DAT_14cbf4678 + 0x30) + 0x80))();
  }
  *param_3 = uVar1;
  return;
}



// FUNCTION 148f971a6 FUN_148f971a6 body=61 status=ok
// SIG undefined FUN_148f971a6(void)

void FUN_148f971a6(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong **)(DAT_14cbf4678 + 0x30) == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(DAT_14cbf4678 + 0x30) + 0x78))();
  }
  *param_3 = uVar1;
  return;
}



// FUNCTION 148f97218 FUN_148f97218 body=58 status=ok
// SIG undefined FUN_148f97218(void)

void FUN_148f97218(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong **)(DAT_14cbf4678 + 0x30) == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(DAT_14cbf4678 + 0x30) + 0x10))();
  }
  *param_3 = uVar1;
  return;
}



// FUNCTION 148f97252 FUN_148f97252 body=64 status=ok
// SIG undefined FUN_148f97252(void)

void FUN_148f97252(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong **)(DAT_14cbf4678 + 0x30) == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(DAT_14cbf4678 + 0x30) + 0xa0))();
  }
  *param_3 = uVar1;
  return;
}



// FUNCTION 148f97292 FUN_148f97292 body=64 status=ok
// SIG undefined FUN_148f97292(void)

void FUN_148f97292(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong **)(DAT_14cbf4678 + 0x30) == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(DAT_14cbf4678 + 0x30) + 0x88))();
  }
  *param_3 = uVar1;
  return;
}



// FUNCTION 148f972d2 FUN_148f972d2 body=64 status=ok
// SIG undefined FUN_148f972d2(void)

void FUN_148f972d2(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong **)(DAT_14cbf4678 + 0x30) == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(DAT_14cbf4678 + 0x30) + 0x98))();
  }
  *param_3 = uVar1;
  return;
}



// FUNCTION 148f97312 FUN_148f97312 body=64 status=ok
// SIG undefined FUN_148f97312(void)

void FUN_148f97312(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong **)(DAT_14cbf4678 + 0x30) == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(DAT_14cbf4678 + 0x30) + 0x90))();
  }
  *param_3 = uVar1;
  return;
}



// FUNCTION 148f97352 FUN_148f97352 body=139 status=ok
// SIG undefined FUN_148f97352(void)

void FUN_148f97352(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148f973de(&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f973de FUN_148f973de body=169 status=ok
// SIG undefined FUN_148f973de(void)

longlong * FUN_148f973de(longlong *param_1)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (DAT_14cbf45d8 == 0) {
    uVar4 = FUN_14666b07c();
    DAT_14cbf45d8 = FUN_14171c317(FUN_14666b0ab,uVar4,L"EXeLLMode");
  }
  lVar3 = DAT_14cbf45d8;
  if (1 < *(int *)(DAT_14cbf45d8 + 0x48)) {
    lVar5 = 8;
    lVar6 = 0;
    do {
      uVar1 = *(undefined1 *)(*(longlong *)(lVar3 + 0x40) + lVar5);
      iVar2 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
        FUN_148f97614(param_1,iVar2);
      }
      *(undefined1 *)(*param_1 + (longlong)iVar2) = uVar1;
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x10;
    } while (lVar6 < (longlong)*(int *)(lVar3 + 0x48) + -1);
  }
  return param_1;
}



// FUNCTION 148f97488 FUN_148f97488 body=58 status=ok
// SIG undefined FUN_148f97488(void)

void FUN_148f97488(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong **)(DAT_14cbf4678 + 0x38) == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(DAT_14cbf4678 + 0x38) + 0x28))();
  }
  *param_3 = uVar1;
  return;
}



// FUNCTION 148f974ca FUN_148f974ca body=168 status=ok
// SIG undefined FUN_148f974ca(void)

void FUN_148f974ca(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_38 [36];
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_14);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_14);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar1 = *(longlong **)(DAT_14cbf4678 + 0x30);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,local_14 != 0);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f97574 FUN_148f97574 body=143 status=ok
// SIG undefined FUN_148f97574(void)

void FUN_148f97574(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [39];
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_11 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_11);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_11);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14437bfde(local_11);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f97614 FUN_148f97614 body=124 status=ok
// SIG undefined FUN_148f97614(void)

void FUN_148f97614(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
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
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    iVar2 = FUN_144a3809e(lVar4,1);
    iVar5 = 0x7fffffff;
    if ((int)uVar1 <= iVar2) {
      iVar5 = iVar2;
    }
    *(int *)(param_1 + 0xc) = iVar5;
    FUN_1446f8d3c(param_1,param_2,iVar5,1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148f97692 FUN_148f97692 body=36 status=ok
// SIG undefined FUN_148f97692(void)

undefined8 FUN_148f97692(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 148f976d2 FUN_148f976d2 body=93 status=ok
// SIG undefined FUN_148f976d2(void)

void FUN_148f976d2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba37060;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148f97730 FUN_148f97730 body=123 status=ok
// SIG undefined FUN_148f97730(void)

void FUN_148f97730(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba37060;
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



// FUNCTION 148f977ac FUN_148f977ac body=21 status=ok
// SIG undefined FUN_148f977ac(void)

undefined8 FUN_148f977ac(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148f977c6 FUN_148f977c6 body=117 status=ok
// SIG undefined FUN_148f977c6(void)

void FUN_148f977c6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1446ddc76(&local_20,"GbxElasticTelemetry",1);
  plVar2 = (longlong *)FUN_1447c1074(local_20);
  uVar1 = (**(code **)(*plVar2 + 0xb0))(plVar2);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f97842 FUN_148f97842 body=355 status=ok
// SIG undefined FUN_148f97842(void)

void FUN_148f97842(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  void *_Src;
  undefined1 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  longlong local_58 [2];
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
  local_58[0] = 0;
  local_58[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  _Src = local_48;
  plVar2 = local_58;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = (void *)0x0;
  lVar3 = (longlong)(int)uStack_40;
  local_60 = (int)uStack_40;
  if (lVar3 == 0) {
    local_5c = 0;
  }
  else {
    FUN_1446dd670(&local_68,uStack_40 & 0xffffffff,0);
    memcpy(local_68,_Src,lVar3 * 2);
  }
  uVar1 = FUN_148f979a6(&local_68,plVar2);
  *param_3 = uVar1;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f979a6 FUN_148f979a6 body=125 status=ok
// SIG undefined FUN_148f979a6(void)

undefined4 FUN_148f979a6(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446ddc76(&local_28,"GbxElasticTelemetry",1);
  plVar2 = (longlong *)FUN_1447c1074(local_28);
  uVar1 = (**(code **)(*plVar2 + 0x50))(plVar2,param_1,param_2);
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f97a24 FUN_148f97a24 body=328 status=ok
// SIG undefined FUN_148f97a24(void)

void FUN_148f97a24(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_88 [40];
  void *local_60;
  int local_58;
  undefined4 local_54;
  undefined4 local_4c;
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
  local_4c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  _Src = local_48;
  uVar1 = local_4c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = (void *)0x0;
  lVar2 = (longlong)(int)uStack_40;
  local_58 = (int)uStack_40;
  if (lVar2 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1446dd670(&local_60,uStack_40 & 0xffffffff,0);
    memcpy(local_60,_Src,lVar2 * 2);
  }
  FUN_148f97b6e(&local_60,uVar1);
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f97b6e FUN_148f97b6e body=147 status=ok
// SIG undefined FUN_148f97b6e(void)

void FUN_148f97b6e(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  longlong *local_48;
  undefined4 *local_40;
  undefined1 *local_38;
  longlong **local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = param_2;
  FUN_1446ddc76(&local_48,"GbxElasticTelemetry",1);
  plVar1 = (longlong *)FUN_1447c1074(local_48);
  local_38 = &LAB_14437d3c6;
  local_48 = param_1;
  local_40 = &local_24;
  local_30 = &local_48;
  (**(code **)(*plVar1 + 0x48))(plVar1);
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f97c02 FUN_148f97c02 body=319 status=ok
// SIG undefined FUN_148f97c02(void)

void FUN_148f97c02(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  undefined4 local_3c;
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = (void *)0x0;
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
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  _Src = local_38;
  uVar1 = local_3c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = (void *)0x0;
  lVar2 = (longlong)(int)uStack_30;
  local_48 = (int)uStack_30;
  if (lVar2 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,uStack_30 & 0xffffffff,0);
    memcpy(local_50,_Src,lVar2 * 2);
  }
  FUN_148f97d42(&local_50,uVar1);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f97d42 FUN_148f97d42 body=145 status=ok
// SIG undefined FUN_148f97d42(void)

void FUN_148f97d42(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  longlong *local_48;
  undefined4 *local_40;
  undefined1 *local_38;
  longlong **local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = param_2;
  FUN_1446ddc76(&local_48,"GbxElasticTelemetry",1);
  plVar1 = (longlong *)FUN_1447c1074(local_48);
  local_38 = &LAB_14437d3b0;
  local_48 = param_1;
  local_40 = &local_24;
  local_30 = &local_48;
  (**(code **)(*plVar1 + 0x48))(plVar1);
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f97dd4 FUN_148f97dd4 body=332 status=ok
// SIG undefined FUN_148f97dd4(void)

void FUN_148f97dd4(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_98 [32];
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  _Src = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_40;
  local_68 = local_50;
  uStack_64 = uStack_4c;
  uStack_60 = uStack_48;
  uStack_5c = uStack_44;
  local_78 = (void *)0x0;
  lVar1 = (longlong)(int)uStack_30;
  local_70 = (int)uStack_30;
  if (lVar1 == 0) {
    local_6c = 0;
  }
  else {
    FUN_1446dd670(&local_78,uStack_30 & 0xffffffff,0);
    memcpy(local_78,_Src,lVar1 * 2);
  }
  FUN_148f97f22(&local_78,&local_68);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f97f22 FUN_148f97f22 body=141 status=ok
// SIG undefined FUN_148f97f22(void)

void FUN_148f97f22(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  longlong *local_40;
  undefined8 local_38;
  undefined1 *local_30;
  longlong **local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446ddc76(&local_40,"GbxElasticTelemetry",1);
  plVar1 = (longlong *)FUN_1447c1074(local_40);
  local_30 = &LAB_14437d3ee;
  local_40 = param_1;
  local_38 = param_2;
  local_28 = &local_40;
  (**(code **)(*plVar1 + 0x48))(plVar1);
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f97fb0 FUN_148f97fb0 body=402 status=ok
// SIG undefined FUN_148f97fb0(void)

void FUN_148f97fb0(undefined8 param_1,longlong param_2)

{
  void *pvVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  void *local_48;
  ulonglong uStack_40;
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
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
  pvVar1 = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = (void *)0x0;
  lVar2 = (longlong)(int)uStack_40;
  local_50 = (int)uStack_40;
  if (lVar2 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,uStack_40 & 0xffffffff,0);
    memcpy(local_58,pvVar1,lVar2 * 2);
  }
  pvVar1 = local_38;
  local_68 = (void *)0x0;
  lVar2 = (longlong)(int)uStack_30;
  local_60 = (int)uStack_30;
  if (lVar2 == 0) {
    local_5c = 0;
  }
  else {
    FUN_1446dd670(&local_68,uStack_30 & 0xffffffff,0);
    memcpy(local_68,pvVar1,lVar2 * 2);
  }
  FUN_148f98144(&local_68,&local_58);
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f98144 FUN_148f98144 body=154 status=ok
// SIG undefined FUN_148f98144(void)

void FUN_148f98144(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  undefined1 *local_30;
  longlong **local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446ddc76(&local_40,"GbxElasticTelemetry",1);
  plVar1 = (longlong *)FUN_1447c1074(local_40);
  local_30 = &LAB_14437d39e;
  local_40 = param_1;
  local_38 = param_2;
  local_28 = &local_40;
  (**(code **)(*plVar1 + 0x48))(plVar1);
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f981e0 FUN_148f981e0 body=332 status=ok
// SIG undefined FUN_148f981e0(void)

void FUN_148f981e0(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_98 [32];
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  _Src = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_40;
  local_68 = local_50;
  uStack_64 = uStack_4c;
  uStack_60 = uStack_48;
  uStack_5c = uStack_44;
  local_78 = (void *)0x0;
  lVar1 = (longlong)(int)uStack_30;
  local_70 = (int)uStack_30;
  if (lVar1 == 0) {
    local_6c = 0;
  }
  else {
    FUN_1446dd670(&local_78,uStack_30 & 0xffffffff,0);
    memcpy(local_78,_Src,lVar1 * 2);
  }
  FUN_148f9832e(&local_78,&local_68);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f9832e FUN_148f9832e body=141 status=ok
// SIG undefined FUN_148f9832e(void)

void FUN_148f9832e(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  longlong *local_40;
  undefined8 local_38;
  undefined1 *local_30;
  longlong **local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446ddc76(&local_40,"GbxElasticTelemetry",1);
  plVar1 = (longlong *)FUN_1447c1074(local_40);
  local_30 = &LAB_14437d3dc;
  local_40 = param_1;
  local_38 = param_2;
  local_28 = &local_40;
  (**(code **)(*plVar1 + 0x48))(plVar1);
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f983c4 FUN_148f983c4 body=250 status=ok
// SIG undefined FUN_148f983c4(void)

void FUN_148f983c4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_1;
  uVar1 = *param_3;
  FUN_1449b8608(local_50,param_2,&DAT_14b4d9526);
  FUN_14626eb76(uVar2,local_50,(int)uVar1);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  uVar2 = *param_1;
  uVar1 = param_3[1];
  FUN_1449b8608(local_50,param_2,&DAT_14b4d952c);
  FUN_14626eb76(uVar2,local_50,(int)uVar1);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  uVar2 = *param_1;
  uVar1 = param_3[2];
  FUN_1449b8608(local_50,param_2,&DAT_14b4d9532);
  FUN_14626eb76(uVar2,local_50,(int)uVar1);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f984c0 FUN_148f984c0 body=250 status=ok
// SIG undefined FUN_148f984c0(void)

void FUN_148f984c0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_1;
  uVar1 = *param_3;
  FUN_1449b8608(local_50,param_2,L"_Pitch");
  FUN_14626eb76(uVar2,local_50,(int)uVar1);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  uVar2 = *param_1;
  uVar1 = param_3[1];
  FUN_1449b8608(local_50,param_2,L"_Yaw");
  FUN_14626eb76(uVar2,local_50,(int)uVar1);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  uVar2 = *param_1;
  uVar1 = param_3[2];
  FUN_1449b8608(local_50,param_2,L"_Roll");
  FUN_14626eb76(uVar2,local_50,(int)uVar1);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f985c8 FUN_148f985c8 body=200 status=ok
// SIG undefined FUN_148f985c8(void)

undefined4 FUN_148f985c8(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  int local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x150));
  local_50 = *param_2;
  uVar3 = 0;
  local_48 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_48 = 0;
  }
  FUN_1449ba96e(param_1 + 0x28,&local_40);
  if (local_40 != (longlong *)0x0) {
    uVar3 = (**(code **)(*local_40 + 0x58))(local_40,param_3);
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x150));
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f98722 FUN_148f98722 body=89 status=ok
// SIG undefined FUN_148f98722(void)

undefined8 * FUN_148f98722(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0xd0);
  _Src = *(void **)(param_1 + 200);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 148f9877c FUN_148f9877c body=953 status=ok
// SIG undefined FUN_148f9877c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_148f9877c(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  void *_Src;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  undefined2 *puVar13;
  longlong lVar14;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  LPCRITICAL_SECTION local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong *local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf4748) {
    FUN_144b3d300(&DAT_14cbf4748);
    if (DAT_14cbf4748 == -1) {
      DAT_14cbf4738 = (void *)0x0;
      _DAT_14cbf4740 = 0;
      atexit((_func_5014 *)&LAB_14437c3f5);
      _Init_thread_footer(&DAT_14cbf4748);
    }
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x150);
  EnterCriticalSection(lpCriticalSection);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    local_98 = lpCriticalSection;
    plVar10 = (longlong *)FUN_14001cc68(0x50,0x10);
    plVar10[4] = 0;
    iVar12 = 0;
    *(undefined4 *)(plVar10 + 5) = 0;
    *plVar10 = 0;
    plVar10[1] = 0;
    *(undefined8 *)((longlong)plVar10 + 0x2c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)plVar10 + 0x34) = 0;
    plVar10[8] = 0;
    *(undefined4 *)(plVar10 + 9) = 0;
    local_a0 = (longlong *)FUN_14001cc68(0x18,0x10);
    local_a0[1] = (longlong)&DAT_100000001;
    *local_a0 = (longlong)&PTR_FUN_149e49100;
    local_a0[2] = (longlong)plVar10;
    plVar1 = (longlong *)(param_1 + 0x28);
    lVar14 = param_1 + 0x38;
    local_68 = (longlong *)&DAT_100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_60 = (longlong *)lVar14;
    if (*(int *)(param_1 + 0x50) != 0) {
      FUN_1449c0562(&local_68);
      iVar12 = *(int *)(param_1 + 0x50);
    }
    local_78 = local_58;
    uVar7 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_88 = local_68;
    local_80 = (longlong)local_60;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    iVar9 = local_78._4_4_;
    local_90 = plVar1;
    if ((local_78._4_4_ != iVar12) || (local_78 = uVar7, local_60 != (longlong *)lVar14)) {
      do {
        local_78 = uVar7;
        lVar4 = *local_90;
        lVar11 = (longlong)iVar9;
        iVar9 = *(int *)(lVar4 + 8 + lVar11 * 0x28);
        if (iVar9 == 0) {
          puVar13 = &DAT_149dfb77a;
        }
        else {
          puVar13 = *(undefined2 **)(lVar4 + lVar11 * 0x28);
        }
        lVar4 = lVar4 + lVar11 * 0x28;
        iVar5 = iVar9 + -1;
        if (iVar9 == 0) {
          iVar5 = 0;
        }
        uVar8 = FUN_144a49b4a(iVar5,puVar13);
        iVar9 = FUN_14047c88e(plVar10,uVar8,lVar4);
        if (iVar9 == -1) {
          FUN_14047c142(plVar10,lVar4,lVar4 + 0x10);
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar9 = local_78._4_4_;
        uVar7 = local_78;
      } while (local_90 != plVar1 || (local_80 != lVar14 || local_78._4_4_ != iVar12));
    }
    FUN_145fe0690(&local_90,&DAT_14cbf4738,0);
    plVar1 = local_a0;
    local_60 = local_a0;
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
      UNLOCK();
    }
    local_68 = plVar10;
    FUN_145927d24(&local_68,local_90,1);
    plVar10 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_60 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar3 = (int *)((longlong)plVar10 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
    if (DAT_14cbf4740 - 3U < 0x7ffffffe) {
      FUN_145825fe6(&DAT_14cbf4738,0,1);
      iVar12 = DAT_14cbf4740 + -1;
      if (DAT_14cbf4740 == 0) {
        iVar12 = 0;
      }
      FUN_145825fe6(&DAT_14cbf4738,iVar12 + -1,1);
    }
    plVar10 = local_88;
    *(undefined1 *)(param_1 + 0x20) = 0;
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_88 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar3 = (int *)((longlong)plVar10 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
    lpCriticalSection = local_98;
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar1 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar1)(plVar1);
        LOCK();
        piVar3 = (int *)((longlong)plVar1 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
  }
  *param_2 = 0;
  uVar6 = _DAT_14cbf4740;
  _Src = DAT_14cbf4738;
  lVar14 = (longlong)DAT_14cbf4740;
  *(int *)(param_2 + 1) = DAT_14cbf4740;
  if (lVar14 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,uVar6 & 0xffffffff,0);
    memcpy((void *)*param_2,_Src,lVar14 * 2);
  }
  LeaveCriticalSection(lpCriticalSection);
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f98b36 FUN_148f98b36 body=162 status=ok
// SIG undefined FUN_148f98b36(void)

void FUN_148f98b36(LPCRITICAL_SECTION param_1)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  _LIST_ENTRY *p_Var3;
  
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != 2) {
    FUN_1446efa72(param_1 + 1,0,2,0x10);
    param_1[1].LockCount = 2;
  }
  p_Var1 = param_1[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f2a800;
  LOCK();
  UNLOCK();
  p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
  lVar2 = DAT_14c758608 + 1;
  if (p_Var3 == (_LIST_ENTRY *)0x0) {
    LOCK();
    UNLOCK();
    p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  (p_Var1->ProcessLocksList).Flink = p_Var3;
  *(undefined ***)p_Var1 = &PTR_FUN_14ba38660;
  (p_Var1->ProcessLocksList).Blink = (_LIST_ENTRY *)FUN_14437cfe4;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148f98bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_1);
    return;
  }
  return;
}



// FUNCTION 148f98bd8 FUN_148f98bd8 body=215 status=ok
// SIG undefined FUN_148f98bd8(void)

void FUN_148f98bd8(LPCRITICAL_SECTION param_1,longlong *param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  _LIST_ENTRY *p_Var2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != 6) {
    FUN_1446efa72(param_1 + 1,0,6,0x10);
    param_1[1].LockCount = 6;
  }
  p_Var1 = param_1[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ba38740;
  p_Var2 = (_LIST_ENTRY *)*param_2;
  (p_Var1->ProcessLocksList).Flink = p_Var2;
  p_Var1->EntryCount = 0;
  p_Var1->ContentionCount = 0;
  if (p_Var2 != (_LIST_ENTRY *)0x0) {
    plVar5 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_2[2];
    }
    (**(code **)*plVar5)(plVar5,&p_Var1->EntryCount);
  }
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
  p_Var1[1].EntryCount = (int)lVar4;
  p_Var1[1].ContentionCount = (int)((ulonglong)lVar4 >> 0x20);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba386d0;
  *(code **)&p_Var1[1].Flags = FUN_148f98eee;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148f98c8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_1);
    return;
  }
  return;
}



// FUNCTION 148f98cb0 FUN_148f98cb0 body=399 status=ok
// SIG undefined FUN_148f98cb0(void)

_LIST_ENTRY * FUN_148f98cb0(longlong *param_1,_LIST_ENTRY *param_2)

{
  int *piVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  longlong lVar3;
  longlong *plVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  _LIST_ENTRY *p_Var5;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  undefined8 local_78 [2];
  undefined8 local_68;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = local_78;
  local_78[0] = 0;
  local_68 = 0;
  (**(code **)(*param_1 + 0x78))(param_1,&local_88);
  param_2->Flink = (_LIST_ENTRY *)0x0;
  param_2->Blink = (_LIST_ENTRY *)0x0;
  if (local_88 != (longlong *)0x0) {
    (**(code **)(*local_88 + 0x138))(local_88,1);
    plVar4 = (longlong *)FUN_1405d8a54(1);
    local_90 = plVar4;
    lpCriticalSection = (LPCRITICAL_SECTION)(**(code **)(*local_88 + 0xf0))();
    EnterCriticalSection(lpCriticalSection);
    if (lpCriticalSection[1].LockCount != 3) {
      FUN_1446efa72(lpCriticalSection + 1,0,3,0x10);
      lpCriticalSection[1].LockCount = 3;
    }
    p_Var2 = lpCriticalSection[1].DebugInfo;
    *(undefined ***)p_Var2 = &PTR_LAB_149f2a800;
    LOCK();
    UNLOCK();
    p_Var5 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
    lVar3 = DAT_14c758608 + 1;
    if (p_Var5 == (_LIST_ENTRY *)0x0) {
      LOCK();
      UNLOCK();
      p_Var5 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    (p_Var2->ProcessLocksList).Flink = p_Var5;
    *(undefined ***)p_Var2 = &PTR_FUN_14ba387b0;
    (p_Var2->ProcessLocksList).Blink = param_2;
    *(longlong ***)&p_Var2->EntryCount = &local_88;
    *(longlong ***)&p_Var2->Flags = &local_90;
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(lpCriticalSection);
      plVar4 = local_90;
    }
    (**(code **)(*plVar4 + 0x20))(plVar4,0xffffffff,0);
    FUN_14018802a(local_90);
  }
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_80 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)local_80 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_80 + 0x10))(local_80);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f98e56 FUN_148f98e56 body=95 status=ok
// SIG undefined FUN_148f98e56(void)

void FUN_148f98e56(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x40))();
  if (cVar1 != '\0') {
    lVar2 = FUN_140885e8c();
    if ((lVar2 != 0) &&
       (((DAT_14c872bf0 != '\0' ||
         ((*(int *)(lVar2 + 0x6c) != 0 && (*(int *)(lVar2 + 0x6c) <= (int)param_1[0x1f])))) ||
        ((0 < *(int *)(lVar2 + 0x68) &&
         (*(int *)(lVar2 + 0x68) <= *(int *)((longlong)param_1 + 0xf4))))))) {
                    /* WARNING: Could not recover jumptable at 0x000148f98e86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xa8))(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 148f98eb6 FUN_148f98eb6 body=55 status=ok
// SIG undefined FUN_148f98eb6(void)

ulonglong FUN_148f98eb6(longlong param_1)

{
  int iVar1;
  undefined8 unaff_RBX;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x128));
  iVar1 = *(int *)(param_1 + 0x180);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x128));
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),iVar1 != 0) & 0xffffffff;
}



// FUNCTION 148f98eee FUN_148f98eee body=344 status=ok
// SIG undefined FUN_148f98eee(void)

void FUN_148f98eee(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,longlong *param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = *param_2;
  local_40 = param_2[1];
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  local_58 = *param_1;
  local_50 = param_1[1];
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  FUN_14437d12a(&local_38,&local_58,&local_48,param_3);
  if (local_38 != 0) {
    local_68 = local_38;
    local_60 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
    }
    FUN_148f99048(param_4,&local_68);
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  plVar3 = (longlong *)param_1[1];
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
  plVar3 = (longlong *)param_2[1];
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
  if (*param_4 != 0) {
    plVar3 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f99048 FUN_148f99048 body=94 status=ok
// SIG undefined FUN_148f99048(void)

void FUN_148f99048(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  pcVar3 = (code *)*param_1;
  plVar5 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[2];
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar3)(uVar4,param_2);
  plVar5 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000148f9909a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148f990a6 FUN_148f990a6 body=31 status=ok
// SIG undefined FUN_148f990a6(void)

undefined8 FUN_148f990a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f990e2 FUN_148f990e2 body=93 status=ok
// SIG undefined FUN_148f990e2(void)

void FUN_148f990e2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba383f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148f99140 FUN_148f99140 body=126 status=ok
// SIG undefined FUN_148f99140(void)

void FUN_148f99140(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba383f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148f991af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f991be FUN_148f991be body=21 status=ok
// SIG undefined FUN_148f991be(void)

undefined8 FUN_148f991be(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148f991d4 FUN_148f991d4 body=31 status=ok
// SIG undefined FUN_148f991d4(void)

undefined8 FUN_148f991d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f99210 FUN_148f99210 body=93 status=ok
// SIG undefined FUN_148f99210(void)

void FUN_148f99210(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba38520;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148f9926e FUN_148f9926e body=93 status=ok
// SIG undefined FUN_148f9926e(void)

void FUN_148f9926e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba38520;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148f992cc FUN_148f992cc body=126 status=ok
// SIG undefined FUN_148f992cc(void)

void FUN_148f992cc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba38520;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148f9933b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f99356 FUN_148f99356 body=31 status=ok
// SIG undefined FUN_148f99356(void)

undefined8 FUN_148f99356(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f9938e FUN_148f9938e body=93 status=ok
// SIG undefined FUN_148f9938e(void)

void FUN_148f9938e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba38590;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148f993ec FUN_148f993ec body=126 status=ok
// SIG undefined FUN_148f993ec(void)

void FUN_148f993ec(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba38590;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148f9945b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f9946a FUN_148f9946a body=21 status=ok
// SIG undefined FUN_148f9946a(void)

undefined8 FUN_148f9946a(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148f99480 FUN_148f99480 body=29 status=ok
// SIG undefined FUN_148f99480(void)

undefined8 FUN_148f99480(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f994b4 FUN_148f994b4 body=93 status=ok
// SIG undefined FUN_148f994b4(void)

void FUN_148f994b4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f2a800;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba38660;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148f99512 FUN_148f99512 body=93 status=ok
// SIG undefined FUN_148f99512(void)

void FUN_148f99512(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f2a800;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba38660;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148f99570 FUN_148f99570 body=126 status=ok
// SIG undefined FUN_148f99570(void)

void FUN_148f99570(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f2a800;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba38660;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148f995df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f995ee FUN_148f995ee body=189 status=ok
// SIG undefined FUN_148f995ee(void)

void FUN_148f995ee(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar3 = *(code **)(param_1 + 0x18);
  local_28 = *param_3;
  local_20 = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  local_38 = *param_2;
  local_30 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  (*pcVar3)(&local_38,&local_28,param_4);
  plVar4 = (longlong *)param_2[1];
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
  plVar4 = (longlong *)param_3[1];
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f996ac FUN_148f996ac body=191 status=ok
// SIG undefined FUN_148f996ac(void)

undefined8
FUN_148f996ac(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar3 = *(code **)(param_1 + 0x18);
  local_28 = *param_3;
  local_20 = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  local_38 = *param_2;
  local_30 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  (*pcVar3)(&local_38,&local_28,param_4);
  plVar4 = (longlong *)param_2[1];
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
  plVar4 = (longlong *)param_3[1];
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f9976c FUN_148f9976c body=71 status=ok
// SIG undefined FUN_148f9976c(void)

undefined8 * FUN_148f9976c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14ba38740;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f997d6 FUN_148f997d6 body=138 status=ok
// SIG undefined FUN_148f997d6(void)

void FUN_148f997d6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba38740;
  lVar2 = *(longlong *)(param_1 + 0x10);
  puVar1[2] = lVar2;
  puVar1[4] = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x30);
    if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x20);
    }
    (**(code **)*puVar3)(puVar3,puVar1 + 4);
  }
  puVar1[10] = *(undefined8 *)(param_1 + 0x50);
  *puVar1 = &PTR_FUN_14ba386d0;
  puVar1[0xb] = *(undefined8 *)(param_1 + 0x58);
  return;
}



// FUNCTION 148f99860 FUN_148f99860 body=138 status=ok
// SIG undefined FUN_148f99860(void)

void FUN_148f99860(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba38740;
  lVar2 = *(longlong *)(param_1 + 0x10);
  puVar1[2] = lVar2;
  puVar1[4] = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x30);
    if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x20);
    }
    (**(code **)*puVar3)(puVar3,puVar1 + 4);
  }
  puVar1[10] = *(undefined8 *)(param_1 + 0x50);
  *puVar1 = &PTR_FUN_14ba386d0;
  puVar1[0xb] = *(undefined8 *)(param_1 + 0x58);
  return;
}



// FUNCTION 148f998ea FUN_148f998ea body=176 status=ok
// SIG undefined FUN_148f998ea(void)

void FUN_148f998ea(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  _LIST_ENTRY *p_Var2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 6) {
    FUN_1446efa72(param_2 + 1,0,6,0x10);
    param_2[1].LockCount = 6;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ba38740;
  p_Var2 = *(_LIST_ENTRY **)(param_1 + 0x10);
  (p_Var1->ProcessLocksList).Flink = p_Var2;
  p_Var1->EntryCount = 0;
  p_Var1->ContentionCount = 0;
  if (p_Var2 != (_LIST_ENTRY *)0x0) {
    puVar4 = (undefined8 *)(param_1 + 0x30);
    if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)(param_1 + 0x20);
    }
    (**(code **)*puVar4)(puVar4,&p_Var1->EntryCount);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  p_Var1[1].EntryCount = (int)uVar3;
  p_Var1[1].ContentionCount = (int)((ulonglong)uVar3 >> 0x20);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba386d0;
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  p_Var1[1].Flags = (int)uVar3;
  p_Var1[1].CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1[1].SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148f9998a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f9999a FUN_148f9999a body=174 status=ok
// SIG undefined FUN_148f9999a(void)

void FUN_148f9999a(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_48 [32];
  undefined1 *local_28;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = &local_19;
  local_19 = param_4;
  FUN_148f99b06(param_1 + 0x10,param_1 + 0x58,param_2,param_3);
  plVar3 = *(longlong **)(param_2 + 8);
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
  puVar4 = *(undefined8 **)(param_3 + 8);
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar4 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar4)(puVar4);
      LOCK();
      piVar2 = (int *)((longlong)puVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f99a5a FUN_148f99a5a body=169 status=ok
// SIG undefined FUN_148f99a5a(void)

undefined8 FUN_148f99a5a(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined1 *local_28;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = &local_19;
  local_19 = param_4;
  FUN_148f99b06(param_1 + 0x10,param_1 + 0x58,param_2,param_3);
  plVar3 = *(longlong **)(param_2 + 8);
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
  plVar3 = *(longlong **)(param_3 + 8);
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
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f99b06 FUN_148f99b06 body=189 status=ok
// SIG undefined FUN_148f99b06(void)

void FUN_148f99b06(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined1 *param_5)

{
  undefined1 uVar1;
  code *pcVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68 [2];
  undefined8 local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  pcVar2 = (code *)*param_2;
  local_68[0] = *param_1;
  local_58[0] = 0;
  if (local_68[0] != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)*plVar3)(plVar3,local_58);
  }
  uVar1 = *param_5;
  local_78 = *param_4;
  local_70 = param_4[1];
  *param_4 = 0;
  param_4[1] = 0;
  local_88 = *param_3;
  local_80 = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  (*pcVar2)(&local_88,&local_78,uVar1,local_68);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f99bec FUN_148f99bec body=190 status=ok
// SIG undefined FUN_148f99bec(void)

void FUN_148f99bec(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148f99cac(plVar2);
  *param_3 = uVar1;
  FUN_145aea73f(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f99cac FUN_148f99cac body=294 status=ok
// SIG undefined FUN_148f99cac(void)

ulonglong FUN_148f99cac(longlong param_1)

{
  int iVar1;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong local_88;
  longlong alStack_80 [3];
  longlong local_68;
  longlong alStack_60 [5];
  
  alStack_60[2] = DAT_14c707940 ^ (ulonglong)auStack_e8;
  alStack_60[1] = 0;
  local_68 = 0;
  alStack_60[0] = 0;
  alStack_80[1] = 0;
  local_88 = 0;
  alStack_80[0] = 0;
  FUN_148612620(&local_68,&local_88);
  local_98 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_148f9a216(&local_a8,(alStack_80[0] - local_88 >> 3) * 0x2e8ba2e8ba2e8ba3,&local_88,alStack_80)
  ;
  local_b8 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  FUN_1401da014(&local_c8,alStack_60[0] - local_68 >> 5,&local_68,alStack_60);
  FUN_14861280c(&local_c8,&local_a8,param_1);
  iVar1 = *(int *)(param_1 + 8);
  FUN_148613aa8(&local_88);
  FUN_1401d7744(&local_68);
  if ((alStack_60[2] ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)param_1 >> 8),0 < iVar1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f99dda FUN_148f99dda body=413 status=ok
// SIG undefined FUN_148f99dda(void)

void FUN_148f99dda(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  void *_Src;
  undefined1 uVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined1 auStack_e8 [40];
  void *local_c0;
  int local_b8;
  undefined4 local_b4;
  undefined1 local_b0 [8];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 uStack_64;
  undefined8 local_58;
  undefined8 uStack_50;
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
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
  local_b0[0] = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  local_58 = 0;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b0);
  }
  _Src = local_48;
  puVar2 = local_b0;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_c0 = (void *)0x0;
  lVar3 = (longlong)(int)uStack_40;
  local_b8 = (int)uStack_40;
  if (lVar3 == 0) {
    local_b4 = 0;
  }
  else {
    FUN_1446dd670(&local_c0,uStack_40 & 0xffffffff,0);
    memcpy(local_c0,_Src,lVar3 * 2);
  }
  uVar1 = FUN_148f99f78(&local_c0,puVar2);
  *param_3 = uVar1;
  FUN_1486132b6(local_b0);
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f99f78 FUN_148f99f78 body=339 status=ok
// SIG undefined FUN_148f99f78(void)

ulonglong FUN_148f99f78(longlong *param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 *puVar13;
  byte bVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  longlong lVar18;
  undefined4 *puVar19;
  longlong lVar20;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  bVar14 = FUN_148f99cac(&local_58);
  lVar18 = local_58;
  iVar17 = (int)uStack_50;
  if ((0 < (int)uStack_50 & bVar14) == 1) {
    uVar16 = uStack_50 & 0xffffffff;
    iVar1 = (int)param_1[1];
    puVar19 = (undefined4 *)(local_58 + 0x28);
    lVar20 = 0;
    local_60 = param_2;
    do {
      if (puVar19[-2] == iVar1) {
        if ((iVar1 < 2) ||
           (iVar15 = wcscmp(*(wchar_t **)(puVar19 + -4),(wchar_t *)*param_1), iVar15 == 0))
        goto LAB_148f9a067;
      }
      else if (puVar19[-2] + iVar1 == 1) {
LAB_148f9a067:
        puVar13 = local_60;
        *local_60 = *(undefined1 *)(puVar19 + -10);
        lVar18 = lVar18 - lVar20;
        FUN_144a787a6(local_60 + 8,lVar18 + 8);
        FUN_144a787a6(puVar13 + 0x18,lVar18 + 0x18);
        uVar2 = puVar19[1];
        uVar3 = puVar19[2];
        uVar4 = puVar19[3];
        uVar5 = puVar19[4];
        uVar6 = puVar19[5];
        uVar7 = puVar19[6];
        uVar8 = puVar19[7];
        uVar9 = puVar19[7];
        uVar10 = puVar19[8];
        uVar11 = puVar19[9];
        uVar12 = puVar19[10];
        *(undefined4 *)(puVar13 + 0x28) = *puVar19;
        *(undefined4 *)(puVar13 + 0x2c) = uVar2;
        *(undefined4 *)(puVar13 + 0x30) = uVar3;
        *(undefined4 *)(puVar13 + 0x34) = uVar4;
        *(undefined4 *)(puVar13 + 0x38) = uVar5;
        *(undefined4 *)(puVar13 + 0x3c) = uVar6;
        *(undefined4 *)(puVar13 + 0x40) = uVar7;
        *(undefined4 *)(puVar13 + 0x44) = uVar8;
        *(undefined4 *)(puVar13 + 0x44) = uVar9;
        *(undefined4 *)(puVar13 + 0x48) = uVar10;
        *(undefined4 *)(puVar13 + 0x4c) = uVar11;
        *(undefined4 *)(puVar13 + 0x50) = uVar12;
        FUN_144a787a6(puVar13 + 0x58,lVar18 + 0x58);
        uVar16 = CONCAT71((int7)((ulonglong)(puVar13 + 0x58) >> 8),1);
        lVar18 = local_58;
        iVar17 = (int)uStack_50;
        goto LAB_148f9a017;
      }
      lVar20 = lVar20 + -0x68;
      puVar19 = puVar19 + 0x1a;
    } while (uVar16 * 0x68 + lVar20 != 0);
  }
  uVar16 = 0;
LAB_148f9a017:
  FUN_145aea73f(lVar18,iVar17);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar16 & 0xffffffff;
}



// FUNCTION 148f9a0d0 FUN_148f9a0d0 body=37 status=ok
// SIG undefined FUN_148f9a0d0(void)

void FUN_148f9a0d0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1486126aa();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148f9a0fa FUN_148f9a0fa body=233 status=ok
// SIG undefined FUN_148f9a0fa(void)

void FUN_148f9a0fa(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_48 [40];
  undefined4 local_20;
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
  FUN_14437e0ba(iVar1 != 0,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f9a1e8 FUN_148f9a1e8 body=37 status=ok
// SIG undefined FUN_148f9a1e8(void)

void FUN_148f9a1e8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148613438();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148f9a216 FUN_148f9a216 body=106 status=ok
// SIG undefined FUN_148f9a216(void)

void FUN_148f9a216(longlong *param_1,ulonglong param_2,undefined8 *param_3,undefined8 *param_4)

{
  code *pcVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    if (0x2e8ba2e8ba2e8ba < param_2) {
      FUN_148f9a280();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    lVar2 = FUN_14861243a(param_1,param_2);
    *param_1 = lVar2;
    param_1[1] = lVar2;
    param_1[2] = param_2 * 0x58 + lVar2;
    lVar2 = FUN_148612308(*param_3,*param_4,lVar2,param_1);
    param_1[1] = lVar2;
  }
  return;
}



// FUNCTION 148f9a280 FUN_148f9a280 body=16 status=ok
// SIG undefined FUN_148f9a280(void)

void FUN_148f9a280(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 148f9a292 FUN_148f9a292 body=31 status=ok
// SIG undefined FUN_148f9a292(void)

undefined8 FUN_148f9a292(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f9a2ce FUN_148f9a2ce body=93 status=ok
// SIG undefined FUN_148f9a2ce(void)

void FUN_148f9a2ce(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba39be0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148f9a32c FUN_148f9a32c body=123 status=ok
// SIG undefined FUN_148f9a32c(void)

void FUN_148f9a32c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba39be0;
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



// FUNCTION 148f9a3a8 FUN_148f9a3a8 body=21 status=ok
// SIG undefined FUN_148f9a3a8(void)

undefined8 FUN_148f9a3a8(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148f9a3ca FUN_148f9a3ca body=36 status=ok
// SIG undefined FUN_148f9a3ca(void)

undefined8 FUN_148f9a3ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 148f9a40a FUN_148f9a40a body=93 status=ok
// SIG undefined FUN_148f9a40a(void)

void FUN_148f9a40a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba39ca0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148f9a468 FUN_148f9a468 body=123 status=ok
// SIG undefined FUN_148f9a468(void)

void FUN_148f9a468(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba39ca0;
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



// FUNCTION 148f9a4e4 FUN_148f9a4e4 body=21 status=ok
// SIG undefined FUN_148f9a4e4(void)

undefined8 FUN_148f9a4e4(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148f9a4fa FUN_148f9a4fa body=36 status=ok
// SIG undefined FUN_148f9a4fa(void)

undefined8 FUN_148f9a4fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 148f9a53a FUN_148f9a53a body=93 status=ok
// SIG undefined FUN_148f9a53a(void)

void FUN_148f9a53a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba39dc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148f9a598 FUN_148f9a598 body=123 status=ok
// SIG undefined FUN_148f9a598(void)

void FUN_148f9a598(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba39dc0;
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



// FUNCTION 148f9a614 FUN_148f9a614 body=21 status=ok
// SIG undefined FUN_148f9a614(void)

undefined8 FUN_148f9a614(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148f9a62d FUN_148f9a62d body=96 status=ok
// SIG undefined FUN_148f9a62d(void)

undefined8 FUN_148f9a62d(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400021e4(param_2,local_28);
  FUN_1489bb5d7(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f9a68e FUN_148f9a68e body=140 status=ok
// SIG undefined FUN_148f9a68e(void)

undefined8 FUN_148f9a68e(undefined8 param_1,undefined8 *param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  FUN_1489bb965(0,&local_38);
  puVar1 = local_38;
  if ((int)uStack_30 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_40,puVar1,1);
  *param_2 = local_40;
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148f9a71b FUN_148f9a71b body=182 status=ok
// SIG undefined FUN_148f9a71b(void)

longlong * FUN_148f9a71b(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_58 [36];
  uint local_34;
  void *local_30;
  uint local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x60))(param_2,&local_30);
  local_34 = local_28;
  FUN_1489b6c87(param_1);
  if (*(char *)((longlong)param_1 + 0x14) == '\0') {
    if ((int)param_1[2] + local_28 <= *(uint *)(param_1 + 1)) {
      memcpy((void *)((longlong)(int)param_1[2] + *param_1),local_30,(ulonglong)local_28);
      *(uint *)(param_1 + 2) = (int)param_1[2] + local_28;
      goto LAB_148f9a774;
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
LAB_148f9a774:
  local_34 = (**(code **)(*param_2 + 0x38))(param_2);
  FUN_1489b6c87(param_1);
  if (local_30 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f9a7d2 FUN_148f9a7d2 body=198 status=ok
// SIG undefined FUN_148f9a7d2(void)

longlong * FUN_148f9a7d2(longlong *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  if ((char)param_1[2] == '\0') {
    iVar1 = *(int *)((longlong)param_1 + 0xc) + 4;
    if ((int)param_1[1] < iVar1) goto LAB_148f9a808;
    uVar2 = *(uint *)(*param_1 + (longlong)*(int *)((longlong)param_1 + 0xc));
    uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    *(int *)((longlong)param_1 + 0xc) = iVar1;
  }
  else {
LAB_148f9a808:
    *(undefined1 *)(param_1 + 2) = 1;
    uVar2 = 0;
  }
  FUN_148f9a89a(param_1,local_38,uVar2);
  (**(code **)(*param_2 + 0x58))(param_2,local_38);
  if ((char)param_1[2] == '\0') {
    iVar1 = *(int *)((longlong)param_1 + 0xc) + 4;
    if (iVar1 <= (int)param_1[1]) {
      uVar2 = *(uint *)(*param_1 + (longlong)*(int *)((longlong)param_1 + 0xc));
      uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
      *(int *)((longlong)param_1 + 0xc) = iVar1;
      goto LAB_148f9a843;
    }
  }
  *(undefined1 *)(param_1 + 2) = 1;
  uVar2 = 0;
LAB_148f9a843:
  (**(code **)(*param_2 + 0x28))(param_2,uVar2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f9a89a FUN_148f9a89a body=155 status=ok
// SIG undefined FUN_148f9a89a(void)

void FUN_148f9a89a(longlong *param_1,longlong *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  if (-1 < param_3) {
    if (*(int *)((longlong)param_2 + 0xc) < param_3) {
      FUN_144893a1c(param_2,param_3);
    }
    if (((char)param_1[2] == '\0') &&
       (iVar4 = *(int *)((longlong)param_1 + 0xc) + param_3, iVar4 <= (int)param_1[1])) {
      if (param_3 != 0) {
        iVar4 = 0;
        do {
          lVar3 = *param_1;
          iVar1 = *(int *)((longlong)param_1 + 0xc);
          iVar2 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
            FUN_1447403be(param_2,iVar2);
          }
          *(undefined1 *)(*param_2 + (longlong)iVar2) =
               *(undefined1 *)(lVar3 + (ulonglong)(uint)(iVar1 + iVar4));
          iVar4 = iVar4 + 1;
        } while (param_3 != iVar4);
        iVar4 = param_3 + *(int *)((longlong)param_1 + 0xc);
      }
      *(int *)((longlong)param_1 + 0xc) = iVar4;
    }
    else {
      *(undefined1 *)(param_1 + 2) = 1;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_3);
}



// FUNCTION 148f9a936 FUN_148f9a936 body=36 status=ok
// SIG undefined FUN_148f9a936(void)

undefined8 FUN_148f9a936(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 148f9a976 FUN_148f9a976 body=93 status=ok
// SIG undefined FUN_148f9a976(void)

void FUN_148f9a976(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba39f70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148f9a9d4 FUN_148f9a9d4 body=126 status=ok
// SIG undefined FUN_148f9a9d4(void)

void FUN_148f9a9d4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba39f70;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148f9aa43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f9aa52 FUN_148f9aa52 body=21 status=ok
// SIG undefined FUN_148f9aa52(void)

undefined8 FUN_148f9aa52(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148f9aa6c FUN_148f9aa6c body=43 status=ok
// SIG undefined FUN_148f9aa6c(void)

undefined8 FUN_148f9aa6c(undefined8 param_1,int param_2)

{
  FUN_145e3acb6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xf8);
  }
  return param_1;
}



// FUNCTION 148f9aab8 FUN_148f9aab8 body=161 status=ok
// SIG undefined FUN_148f9aab8(void)

void FUN_148f9aab8(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148f9ab5a(param_3,local_20 + 0x2c8);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f9ab5a FUN_148f9ab5a body=95 status=ok
// SIG undefined FUN_148f9ab5a(void)

undefined8 * FUN_148f9ab5a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145be9a0d(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148f9ac5e(param_1,iVar1);
      FUN_148f9acd1(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148f9abba FUN_148f9abba body=159 status=ok
// SIG undefined FUN_148f9abba(void)

void FUN_148f9abba(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = 0;
  uStack_20 = 0;
  FUN_145cc8b60(local_30);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f9ac5e FUN_148f9ac5e body=115 status=ok
// SIG undefined FUN_148f9ac5e(void)

void FUN_148f9ac5e(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x48,8);
    iVar2 = (int)(uVar1 / 0x48);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x48,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148f9acd1 FUN_148f9acd1 body=52 status=ok
// SIG undefined FUN_148f9acd1(void)

void FUN_148f9acd1(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_146645a86(param_1,param_2);
    param_1 = param_1 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return;
}



// FUNCTION 148f9ad06 FUN_148f9ad06 body=36 status=ok
// SIG undefined FUN_148f9ad06(void)

undefined8 FUN_148f9ad06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 148f9ad46 FUN_148f9ad46 body=93 status=ok
// SIG undefined FUN_148f9ad46(void)

void FUN_148f9ad46(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba3a760;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148f9ada4 FUN_148f9ada4 body=123 status=ok
// SIG undefined FUN_148f9ada4(void)

void FUN_148f9ada4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba3a760;
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



// FUNCTION 148f9ae20 FUN_148f9ae20 body=21 status=ok
// SIG undefined FUN_148f9ae20(void)

undefined8 FUN_148f9ae20(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148f9ae50 FUN_148f9ae50 body=43 status=ok
// SIG undefined FUN_148f9ae50(void)

undefined8 FUN_148f9ae50(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  
  *(int *)(param_1 + 1) = (int)param_2[1];
  uVar1 = (**(code **)(*param_2 + 0x38))(param_2);
  (**(code **)(*param_1 + 0x28))(param_1,uVar1);
  return 1;
}



// FUNCTION 148f9ae8a FUN_148f9ae8a body=197 status=ok
// SIG undefined FUN_148f9ae8a(void)

void FUN_148f9ae8a(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (*(int *)(param_1 + 0xc0) == 0) {
    *(undefined4 *)(param_1 + 0xc0) = 0x1e;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x2f8);
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FUN_1463eca0c(param_1);
    *(undefined8 *)(param_1 + 0x2f8) = 0;
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    *(undefined8 *)(param_1 + 0x1b0) = 0;
  }
  if (param_2 != 0) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    *(longlong *)(param_1 + 0x1a8) = param_2;
    lVar2 = FUN_144a79778(param_2);
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    *(longlong *)(param_1 + 0x1b0) = lVar2;
    *(longlong *)(param_1 + 0x2f8) = param_2 + 0x28;
    FUN_14597435c(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x2f8) = uVar1;
  return;
}



// FUNCTION 148f9af9c FUN_148f9af9c body=405 status=ok
// SIG undefined FUN_148f9af9c(void)

longlong FUN_148f9af9c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *plStack_90;
  code *local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  code *pcStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar3 = *(int *)(param_1 + 100);
  plVar4 = *(longlong **)(param_1 + 0x30);
  if (plVar4 == (longlong *)0x0) {
LAB_148f9b0b5:
    local_98 = 0;
    plStack_90 = (longlong *)0x0;
    bVar8 = true;
  }
  else {
    iVar7 = (int)plVar4[1];
    do {
      if (iVar7 == 0) goto LAB_148f9b0b5;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar8 = iVar7 == iVar6;
      if (bVar8) {
        *(int *)(plVar4 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar8);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
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
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    bVar8 = false;
    local_98 = uVar5;
    plStack_90 = plVar4;
  }
  plVar4 = plStack_90;
  pcStack_40 = FUN_14437fb64;
  local_48 = &LAB_14437fb4e;
  puStack_50 = &LAB_14437fb36;
  local_58 = FUN_14437fab4;
  *(bool *)param_2 = iVar3 == 3;
  *(undefined4 *)(param_2 + 0x48) = 0x4437fab4;
  *(undefined4 *)(param_2 + 0x4c) = 1;
  *(undefined4 *)(param_2 + 0x50) = 0x4437fb36;
  *(undefined4 *)(param_2 + 0x54) = 1;
  *(undefined4 *)(param_2 + 0x58) = 0x4437fb4e;
  *(undefined4 *)(param_2 + 0x5c) = 1;
  *(undefined4 *)(param_2 + 0x60) = 0x4437fb64;
  *(undefined4 *)(param_2 + 100) = 1;
  if (*(code **)(param_2 + 0x50) != (code *)0x0) {
    (**(code **)(param_2 + 0x50))(param_2 + 8,&local_98);
  }
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(&local_98);
  }
  if (!bVar8) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148f9b180 FUN_148f9b180 body=292 status=ok
// SIG undefined FUN_148f9b180(void)

longlong FUN_148f9b180(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145ffc974(param_1,&local_40,0,param_3);
  plVar3 = local_38;
  lVar6 = local_40;
  if (local_40 != 0) {
    if (local_38 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
    }
    iVar4 = *(int *)(param_1 + 0x88);
    *(uint *)(param_1 + 0x88) = iVar4 + 1U;
    if (*(uint *)(param_1 + 0x8c) < iVar4 + 1U) {
      FUN_148f9b8c6((longlong *)(param_1 + 0x80),iVar4);
    }
    lVar5 = *(longlong *)(param_1 + 0x80);
    *(longlong *)(lVar5 + (longlong)iVar4 * 0x10) = lVar6;
    *(longlong **)(lVar5 + 8 + (longlong)iVar4 * 0x10) = plVar3;
    if (plVar3 != (longlong *)0x0) {
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
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return local_40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


