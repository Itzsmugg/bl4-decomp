// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14767d59a FUN_14767d59a body=126 status=ok
// SIG undefined FUN_14767d59a(void)

void FUN_14767d59a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a4d7700;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a4d7b80;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014767d609. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14767d636 FUN_14767d636 body=93 status=ok
// SIG undefined FUN_14767d636(void)

void FUN_14767d636(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a481140;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a4d7bf0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14767d694 FUN_14767d694 body=93 status=ok
// SIG undefined FUN_14767d694(void)

void FUN_14767d694(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a481140;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a4d7bf0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14767d6f2 FUN_14767d6f2 body=126 status=ok
// SIG undefined FUN_14767d6f2(void)

void FUN_14767d6f2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a481140;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a4d7bf0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014767d761. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14767d77e FUN_14767d77e body=48 status=ok
// SIG undefined FUN_14767d77e(void)

void FUN_14767d77e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 14767d7ae FUN_14767d7ae body=38 status=ok
// SIG undefined FUN_14767d7ae(void)

undefined8 FUN_14767d7ae(undefined8 param_1,int param_2)

{
  FUN_14588bc26();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14767d7e0 FUN_14767d7e0 body=62 status=ok
// SIG undefined FUN_14767d7e0(void)

void FUN_14767d7e0(void)

{
  undefined8 *in_R9;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *in_R9;
  FUN_14767dad4();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14767d828 FUN_14767d828 body=336 status=ok
// SIG undefined FUN_14767d828(void)

void FUN_14767d828(longlong param_1,uint *param_2,longlong param_3,longlong param_4,longlong param_5
                  )

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  byte local_50;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar5 = param_2[1];
  local_88 = param_1;
  local_80 = param_3;
  local_78 = param_4;
  if (**(int **)(param_1 + -0x28) != 0 || ((byte)uVar5 & 1) != 0) {
    uVar3 = *param_2;
    uVar6 = FUN_140732858();
    if (0 < (int)uVar3) {
      lVar2 = local_88 + -0xd8;
      lVar1 = local_88 + -0x10;
      uVar7 = 0;
      do {
        lVar4 = *(longlong *)(param_5 + uVar7 * 8);
        local_68 = 0;
        if (lVar4 != 0) {
          local_60 = 0;
          FUN_14485c47a(&local_60,lVar4);
          local_68 = local_60;
        }
        FUN_14027461a(lVar1,&local_6c,lVar4);
        FUN_1407880ce(lVar2,&local_70,&local_68);
        local_54 = *(undefined4 *)(local_78 + uVar7 * 4);
        local_4a = *(undefined2 *)(local_80 + uVar7 * 2);
        local_60 = CONCAT44(*(undefined4 *)(local_88 + -0x18),local_6c);
        local_58 = local_70;
        local_50 = (byte)uVar5;
        FUN_1449da5a2(uVar6,&local_4a,&local_60);
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14767d97a FUN_14767d97a body=180 status=ok
// SIG undefined FUN_14767d97a(void)

void FUN_14767d97a(longlong param_1,undefined2 param_2,char param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_88 [36];
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  char local_48;
  undefined2 local_42;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((**(int **)(param_1 + -0x28) != 0) || (param_3 != '\0')) {
    uVar1 = FUN_140732858();
    FUN_14767db5c(param_1 + -0xd8,&local_64,param_5);
    local_50 = local_5c;
    local_58 = local_64;
    local_4c = param_4;
    local_48 = param_3;
    local_42 = param_2;
    FUN_1449da5a2(uVar1);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14767da30 FUN_14767da30 body=88 status=ok
// SIG undefined FUN_14767da30(void)

void FUN_14767da30(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_3[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_3;
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar3) != 0) {
        FUN_14767dc04(param_1 + -0xd8,param_2);
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar3);
  }
  return;
}



// FUNCTION 14767da88 FUN_14767da88 body=38 status=ok
// SIG undefined FUN_14767da88(void)

undefined8 FUN_14767da88(undefined8 param_1,int param_2)

{
  FUN_14588bc26();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14767daae FUN_14767daae body=38 status=ok
// SIG undefined FUN_14767daae(void)

undefined8 FUN_14767daae(undefined8 param_1,int param_2)

{
  FUN_14588bc26();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14767dad4 FUN_14767dad4 body=135 status=ok
// SIG undefined FUN_14767dad4(void)

void FUN_14767dad4(longlong param_1,int param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  int local_3c;
  undefined8 *local_38;
  int *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x10);
  *(undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x10) = *param_3;
  local_3c = param_2;
  FUN_140d0e176(param_1 + 0x18);
  local_38 = param_3;
  local_30 = &local_3c;
  FUN_14073929c(param_1 + 0x18,local_24,&local_38,0);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14767db5c FUN_14767db5c body=167 status=ok
// SIG undefined FUN_14767db5c(void)

longlong FUN_14767db5c(longlong param_1,longlong param_2,longlong param_3)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  if (param_3 != 0) {
    local_30 = 0;
    FUN_14485c47a(&local_30,param_3);
    local_38 = local_30;
  }
  FUN_1407880ce(param_1,&local_30,&local_38);
  FUN_14027461a(param_1 + 200,param_2,param_3);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 8) = (undefined4)local_30;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14767dc04 FUN_14767dc04 body=137 status=ok
// SIG undefined FUN_14767dc04(void)

void FUN_14767dc04(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_58 [36];
  undefined1 local_34 [12];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = param_3;
  cVar1 = FUN_14767dc8e();
  if (cVar1 != '\0') {
    FUN_14767db5c(param_1,local_34,param_3);
    if (**(int **)(param_1 + 0xb0) != 0) {
      thunk_FUN_140adeba6(*(int **)(param_1 + 0xb0),local_34);
    }
    FUN_140787e46(param_1,param_2,local_34,param_3);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14767dc8e FUN_14767dc8e body=129 status=ok
// SIG undefined FUN_14767dc8e(void)

byte FUN_14767dc8e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auStack_48 [36];
  undefined1 local_24 [8];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  bVar2 = 1;
  if (**(int **)(param_1 + 0xb0) == 0) {
    lVar1 = param_1;
    FUN_14767dd10(param_1,local_24,param_2);
    bVar2 = (byte)lVar1;
    if (local_1c != -1) {
      lVar1 = FUN_1400e4054(*(undefined8 *)(param_1 + 0xb0),local_24);
      bVar2 = lVar1 != 0;
    }
    bVar2 = local_1c != -1 & bVar2;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar2;
}



// FUNCTION 14767dd10 FUN_14767dd10 body=171 status=ok
// SIG undefined FUN_14767dd10(void)

longlong FUN_14767dd10(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  if (*param_3 == 0) {
    lVar1 = 0;
  }
  else {
    local_30 = 0;
    FUN_14485c47a(&local_30);
    local_38 = local_30;
    lVar1 = *param_3;
  }
  FUN_1407336f2(param_1 + 200,param_2,lVar1);
  FUN_1476590b8(param_1,&local_30,&local_38);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 8) = (undefined4)local_30;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14767ddbc FUN_14767ddbc body=48 status=ok
// SIG undefined FUN_14767ddbc(void)

void FUN_14767ddbc(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,4);
  }
  return;
}



// FUNCTION 14767ddec FUN_14767ddec body=770 status=ok
// SIG undefined FUN_14767ddec(void)

int * FUN_14767ddec(short *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6,longlong *param_7,longlong *param_8,
                   longlong *param_9)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  longlong *plVar9;
  undefined1 auStack_1a8 [32];
  undefined1 **local_188;
  undefined1 **local_180;
  undefined1 *local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  undefined4 local_154;
  longlong *local_150;
  longlong *local_148;
  undefined1 *local_140;
  short **local_138;
  short *local_130;
  longlong *local_128;
  longlong *local_120;
  undefined1 *local_118;
  byte local_110;
  undefined1 local_108 [32];
  undefined8 local_e8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [32];
  undefined8 local_88;
  undefined1 local_80 [32];
  undefined8 local_60;
  undefined1 *local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if ((((*param_1 == -1) || (param_1[1] == -1)) || (param_1[2] == -1)) ||
     ((param_1[3] == -1 || (cVar8 = FUN_14767e146(param_1,param_3), cVar8 == '\0')))) {
    *param_2 = -1;
    goto LAB_14767de3a;
  }
  plVar9 = (longlong *)FUN_14001cc68(0x50,0x10);
  plVar9[1] = (longlong)&DAT_100000001;
  *plVar9 = (longlong)&PTR_FUN_14a4d7db0;
  plVar9[2] = (longlong)&PTR_FUN_14a4d7dc8;
  lVar3 = *param_8;
  lVar4 = *param_9;
  plVar9[3] = *param_7;
  plVar9[4] = lVar3;
  plVar9[5] = 0;
  plVar9[6] = lVar4;
  *(undefined4 *)(plVar9 + 9) = *(undefined4 *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 2);
  uVar6 = *(undefined4 *)(param_1 + 4);
  uVar7 = *(undefined4 *)(param_1 + 6);
  *(undefined4 *)(plVar9 + 7) = *(undefined4 *)param_1;
  *(undefined4 *)((longlong)plVar9 + 0x3c) = uVar5;
  *(undefined4 *)(plVar9 + 8) = uVar6;
  *(undefined4 *)((longlong)plVar9 + 0x44) = uVar7;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
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
  local_60 = 0x10000000000;
  local_88 = 0x10000000000;
  FUN_14767e226(param_1,local_80);
  local_e8 = 0x10000000000;
  local_c0 = 0x10000000000;
  local_b8 = 0;
  uStack_b0 = 0;
  FUN_14767e268(param_1,local_108);
  local_138 = &local_130;
  local_140 = &LAB_14767e36c;
  local_110 = *(byte *)(param_6 + 8);
  local_130 = param_1;
  (*(code *)(&PTR_LAB_14a475bc0)[local_110])(&local_118);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  local_168 = local_a8;
  local_180 = &local_140;
  local_188 = &local_118;
  local_178 = local_108;
  local_170 = local_80;
  local_150 = plVar9 + 2;
  local_148 = plVar9;
  FUN_1406ac01c(param_4,param_2,param_5,&local_150);
  if (*param_2 == -1) {
    if ((*(byte *)(param_5 + 1) & 4) != 0) {
      FUN_145c71394(param_4,&local_58);
      *param_2 = (int)local_58;
      if ((int)local_58 != -1) goto LAB_14767e00a;
    }
  }
  else {
LAB_14767e00a:
    local_50 = 0;
    local_58 = &LAB_143314ae2;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    local_188 = &local_58;
    local_128 = plVar9 + 2;
    local_120 = plVar9;
    FUN_1406abf4a(param_4,&local_154,param_5,&local_128);
    FUN_1407ce0e2(param_4,*param_2,local_154);
    FUN_1407cdf34(param_4,*param_2,0xffffffff);
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
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
LAB_14767de3a:
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14767e0f0 FUN_14767e0f0 body=84 status=ok
// SIG undefined FUN_14767e0f0(void)

void FUN_14767e0f0(longlong *param_1,undefined4 *param_2,longlong param_3)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  FUN_14767e518(param_3 + 8,
                *(undefined8 *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8),
                &local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14767e146 FUN_14767e146 body=223 status=ok
// SIG undefined FUN_14767e146(void)

undefined8 FUN_14767e146(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  
  uVar1 = *param_1;
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ulonglong)
            CONCAT11((char)(uVar1 >> 8),
                     (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0);
  }
  uVar1 = param_1[1];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[2];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar5 = false;
  }
  else {
    bVar5 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[3];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar6 = false;
  }
  else {
    bVar6 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 & bVar4 & bVar5 & bVar6);
}



// FUNCTION 14767e226 FUN_14767e226 body=65 status=ok
// SIG undefined FUN_14767e226(void)

void FUN_14767e226(undefined2 *param_1,undefined8 param_2)

{
  FUN_140dba9e6(param_2,*param_1);
  FUN_140dba9e6(param_2,param_1[1]);
  FUN_140dba9e6(param_2,param_1[2]);
  FUN_140dba9e6(param_2,param_1[3]);
  return;
}



// FUNCTION 14767e268 FUN_14767e268 body=197 status=ok
// SIG undefined FUN_14767e268(void)

void FUN_14767e268(undefined2 *param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_32 = *param_1;
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[1];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[2];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[3];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14767e32e FUN_14767e32e body=1 status=ok
// SIG undefined FUN_14767e32e(void)

void FUN_14767e32e(void)

{
  return;
}



// FUNCTION 14767e330 FUN_14767e330 body=29 status=ok
// SIG undefined FUN_14767e330(void)

undefined8 FUN_14767e330(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14767e34e FUN_14767e34e body=29 status=ok
// SIG undefined FUN_14767e34e(void)

undefined8 FUN_14767e34e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14767e384 FUN_14767e384 body=340 status=ok
// SIG undefined FUN_14767e384(void)

void FUN_14767e384(short *param_1,longlong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  ushort uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  lVar7 = (longlong)(int)param_3[1];
  FUN_1403f967c(param_3,4);
  uVar2 = (uint)*(ushort *)(param_2 + 0xc);
  puVar1 = *(ulonglong **)(param_2 + 0x28);
  if (uVar2 != 0) {
    lVar5 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    puVar4 = puVar1;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == *param_1) goto LAB_14767e3d5;
      puVar4 = puVar4 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_14767e3d5:
  lVar5 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
    *(int *)(lVar5 + lVar7 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar2 = (uint)*(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if ((short)uVar2 != 0) {
    uVar6 = (ulonglong)(uVar2 << 5);
    puVar4 = puVar1;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == param_1[1]) goto LAB_14767e429;
      puVar4 = puVar4 + 4;
      uVar6 = uVar6 - 0x20;
    } while (uVar6 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_14767e429:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
    *(int *)(lVar5 + 4 + lVar7 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar2 = (uint)*(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  uVar3 = (ushort)uVar2;
  if (uVar3 != 0) {
    uVar6 = (ulonglong)(uVar2 << 5);
    puVar4 = puVar1;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == param_1[2]) goto LAB_14767e476;
      puVar4 = puVar4 + 4;
      uVar6 = uVar6 - 0x20;
    } while (uVar6 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_14767e476:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
    *(int *)(lVar5 + 8 + lVar7 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar3 = *(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
    uVar2 = (uint)uVar3;
  }
  if (uVar3 != 0) {
    uVar6 = (ulonglong)(uVar2 << 5);
    do {
      if (*(short *)((longlong)puVar1 + 0x1e) == param_1[3]) goto LAB_14767e4bb;
      puVar1 = puVar1 + 4;
      uVar6 = uVar6 - 0x20;
    } while (uVar6 != 0);
  }
  puVar1 = (ulonglong *)0x0;
LAB_14767e4bb:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
    *(int *)(lVar5 + 0xc + lVar7 * 4) = (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
  }
  return;
}



// FUNCTION 14767e4d8 FUN_14767e4d8 body=64 status=ok
// SIG undefined FUN_14767e4d8(void)

void FUN_14767e4d8(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_14759215a(*param_1);
  param_1[2] = uVar2;
  lVar1 = param_1[3];
  if (-1 < *(int *)(lVar1 + 0x4c)) {
    *(undefined4 *)(lVar1 + 0x48) = 0;
    return;
  }
  *(undefined4 *)(lVar1 + 0x48) = 0;
  FUN_14767ddbc(lVar1 + 0x40);
  return;
}



// FUNCTION 14767e518 FUN_14767e518 body=157 status=ok
// SIG undefined FUN_14767e518(void)

void FUN_14767e518(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  ushort uVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  
  puVar2 = (uint *)*param_3;
  lVar3 = *(longlong *)(param_2 + 0x20);
  lVar5 = 0;
  lVar7 = lVar3 + (ulonglong)puVar2[3];
  if ((ulonglong)puVar2[3] == 0xffffffff) {
    lVar7 = lVar5;
  }
  lVar4 = lVar3 + (ulonglong)puVar2[2];
  if ((ulonglong)puVar2[2] == 0xffffffff) {
    lVar4 = lVar5;
  }
  lVar8 = lVar3 + (ulonglong)puVar2[1];
  if ((ulonglong)puVar2[1] == 0xffffffff) {
    lVar8 = lVar5;
  }
  lVar3 = lVar3 + (ulonglong)*puVar2;
  if ((ulonglong)*puVar2 == 0xffffffff) {
    lVar3 = lVar5;
  }
  uVar1 = *(ushort *)(param_2 + 0xe);
  if ((ulonglong)uVar1 != 0) {
    uVar6 = 0;
    do {
      FUN_14767e5b6(param_1,*(undefined8 *)(lVar3 + uVar6 * 8),*(undefined4 *)(lVar8 + uVar6 * 4),
                    lVar4,*(undefined8 *)(lVar7 + uVar6 * 8));
      uVar6 = uVar6 + 1;
      lVar4 = lVar4 + 0x18;
    } while (uVar1 != uVar6);
  }
  return;
}



// FUNCTION 14767e5b6 FUN_14767e5b6 body=625 status=ok
// SIG undefined FUN_14767e5b6(void)

void FUN_14767e5b6(undefined8 *param_1,longlong param_2,ulonglong param_3,longlong param_4,
                  undefined8 param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  byte bVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_60;
  longlong *local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar6 = (**(code **)(*(longlong *)(*(longlong *)(param_4 + 0x10) + 0xf8) + 0x18))
                    (*(longlong *)(param_4 + 0x10) + 0xf8,param_4);
  if (lVar6 == 0) goto LAB_14767e6e5;
  plVar7 = (longlong *)FUN_143314aeb(param_1[2],lVar6);
  if (plVar7 == (longlong *)0x0) goto LAB_14767e6e5;
  lVar10 = *(longlong *)(param_1[1] + 8);
  lVar8 = (param_3 & 0xffff) * 0x128;
  uVar9 = *(undefined8 *)(lVar10 + 0x100 + lVar8);
  plVar4 = *(longlong **)(lVar10 + 0x108 + lVar8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_49 = 0;
  FUN_147591e2e(lVar6,param_5,&local_49);
  (**(code **)(*plVar7 + 0x2b8))(plVar7,local_49);
  lVar6 = FUN_1458989be();
  if ((*(int *)(plVar7[2] + 0x38) < *(int *)(lVar6 + 0x38)) ||
     (*(longlong *)(*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
      lVar6 + 0x30)) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_88 = uVar9;
    local_80 = plVar4;
    (**(code **)(*plVar7 + 0x2d0))(plVar7,*(undefined4 *)(lVar10 + lVar8 + 0x110),&local_88,0);
  }
  else {
    (**(code **)(*plVar7 + 0x2f0))(plVar7,*param_1);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_60 = uVar9;
    local_58 = plVar4;
    (**(code **)(*plVar7 + 0x2d0))(plVar7,*(undefined4 *)(lVar10 + lVar8 + 0x110),&local_60,0);
    if (plVar7[0x13] != 0) {
      uVar9 = FUN_1459e43dc();
      bVar5 = FUN_144a7ca96(plVar7 + 0x13,uVar9);
      lVar6 = plVar7[0x13];
      if ((lVar6 != 0 & bVar5) == 1) {
        if (param_2 == 0) {
LAB_14767e7ab:
          param_2 = 0;
        }
        else {
          lVar10 = FUN_144a799b0();
          if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar10 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar10 + 0x38) * 8) != lVar10 + 0x30)) goto LAB_14767e7ab;
        }
        FUN_14485c47a(lVar6 + 0x60,param_2);
        local_78 = 0;
        uStack_70 = 0;
        FUN_14485c47a(&local_78,plVar7);
        FUN_14485c47a(&uStack_70,lVar6);
        lVar6 = param_1[3];
        iVar3 = *(int *)(lVar6 + 0x48);
        *(uint *)(lVar6 + 0x48) = iVar3 + 1U;
        if (*(uint *)(lVar6 + 0x4c) < iVar3 + 1U) {
          FUN_14767e828((longlong *)(lVar6 + 0x40),iVar3);
        }
        puVar2 = (undefined4 *)(*(longlong *)(lVar6 + 0x40) + (longlong)iVar3 * 0x10);
        *puVar2 = (undefined4)local_78;
        puVar2[1] = local_78._4_4_;
        puVar2[2] = (undefined4)uStack_70;
        puVar2[3] = uStack_70._4_4_;
        FUN_147597062(plVar7,*param_1);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
LAB_14767e6e5:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14767e828 FUN_14767e828 body=132 status=ok
// SIG undefined FUN_14767e828(void)

void FUN_14767e828(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14767e8ae FUN_14767e8ae body=410 status=ok
// SIG undefined FUN_14767e8ae(void)

longlong * FUN_14767e8ae(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14767ea4a();
  if (*param_2 != 0) goto LAB_14767e8dc;
  plVar3 = (longlong *)FUN_14001cc68(0xe8);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a4d7dd0;
  plVar4 = plVar3 + 2;
  memset(plVar4,0,0xd8);
  FUN_14767ebb8(plVar4);
  local_40 = plVar4;
  local_38 = plVar3;
  FUN_14767fe20(&local_40,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_2 = 0x10;
    plVar4 = (longlong *)param_2[1];
    if (plVar4 != (longlong *)0x0) {
      param_2[1] = 0;
LAB_14767ea0e:
      LOCK();
      plVar3 = plVar4 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x00014767e9fe:
        if (iVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_2 = (longlong)plVar4;
    plVar4 = (longlong *)param_2[1];
    if (plVar3 == plVar4) {
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar4 = plVar3;
        goto joined_r0x00014767e9fe;
      }
    }
    else {
      param_2[1] = (longlong)plVar3;
      if (plVar4 != (longlong *)0x0) goto LAB_14767ea0e;
    }
  }
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
  plVar4 = (longlong *)*param_2;
  (**(code **)(*plVar4 + 0x10))(plVar4,param_3,param_1);
  local_48 = param_2[1];
  if (local_48 != 0) {
    LOCK();
    *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
    UNLOCK();
  }
  local_50 = plVar4;
  FUN_14767eafe(param_1,param_3,&local_50);
LAB_14767e8dc:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14767ea4a FUN_14767ea4a body=179 status=ok
// SIG undefined FUN_14767ea4a(void)

undefined8 * FUN_14767ea4a(longlong param_1,undefined8 *param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar3 = *(uint *)(param_1 + 0xf0);
  uVar8 = (ulonglong)uVar3;
  lVar4 = *(longlong *)(param_1 + 0xe8);
  uVar11 = 0;
  if (0 < (int)uVar3) {
    do {
      uVar10 = (int)(uVar8 >> 1) + uVar11;
      uVar9 = (uint)uVar8;
      if (*(uint *)(lVar4 + (ulonglong)uVar10 * 0x18) < param_3) {
        uVar11 = uVar10 + (uVar9 & 1);
      }
      uVar8 = uVar8 >> 1;
    } while (1 < uVar9);
  }
  if (((int)uVar11 < (int)uVar3) && (*(uint *)(lVar4 + (ulonglong)uVar11 * 0x18) <= param_3)) {
    lVar4 = lVar4 + (ulonglong)uVar11 * 0x18;
    puVar7 = (undefined8 *)(lVar4 + 8);
    if (puVar7 != (undefined8 *)0x0) {
      uVar6 = *puVar7;
      plVar5 = *(longlong **)(lVar4 + 0x10);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        *param_2 = uVar6;
        param_2[1] = plVar5;
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) {
          return param_2;
        }
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 != 0) {
          return param_2;
        }
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return param_2;
      }
      goto LAB_14767eaa4;
    }
  }
  uVar6 = 0;
LAB_14767eaa4:
  *param_2 = uVar6;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 14767eafe FUN_14767eafe body=184 status=ok
// SIG undefined FUN_14767eafe(void)

void FUN_14767eafe(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_3;
  local_28 = (longlong *)param_3[1];
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  local_1c = param_2;
  FUN_140dd6482(param_1 + 0xe8,&local_1c,&local_30);
  plVar3 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = (longlong *)param_3[1];
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14767ebb8 FUN_14767ebb8 body=120 status=ok
// SIG undefined FUN_14767ebb8(void)

void FUN_14767ebb8(undefined8 *param_1)

{
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000000;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *param_1 = &PTR_FUN_14a4d7df0;
  return;
}



// FUNCTION 14767ec30 FUN_14767ec30 body=9 status=ok
// SIG undefined FUN_14767ec30(void)

void FUN_14767ec30(longlong param_1)

{
  FUN_14767f3fe(param_1 + 0x10);
  return;
}



// FUNCTION 14767ec3a FUN_14767ec3a body=29 status=ok
// SIG undefined FUN_14767ec3a(void)

undefined8 FUN_14767ec3a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14767ec58 FUN_14767ec58 body=38 status=ok
// SIG undefined FUN_14767ec58(void)

undefined8 FUN_14767ec58(undefined8 param_1,int param_2)

{
  FUN_14767f3fe();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14767eca4 FUN_14767eca4 body=94 status=ok
// SIG undefined FUN_14767eca4(void)

void FUN_14767eca4(longlong param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x10 + (longlong)param_2 * 0x40);
  lVar1 = *(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x40;
  uStack_20 = *(undefined4 *)(lVar1 + 8);
  uStack_1c = *(undefined4 *)(lVar1 + 0xc);
  local_28 = *param_4;
  FUN_14767f49a();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14767ed04 FUN_14767ed04 body=972 status=ok
// SIG undefined FUN_14767ed04(void)

ulonglong FUN_14767ed04(longlong param_1,int param_2,char param_3,char param_4)

{
  uint uVar1;
  void *pvVar2;
  byte bVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  ulonglong unaff_RBP;
  undefined7 uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStack_98 [32];
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
  uint uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    cVar6 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))();
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),3);
    if (cVar6 == '\0') goto LAB_14767ed73;
  }
  uVar11 = (undefined7)(unaff_RBP >> 8);
  if (param_3 == '\x01') {
    if (param_4 == '\0') {
      lVar4 = *(longlong *)(param_1 + 0x68);
      lVar8 = (longlong)param_2 * 0x40;
      puVar9 = (undefined4 *)(lVar4 + lVar8);
      local_78 = *puVar9;
      uStack_74 = puVar9[1];
      uStack_70 = puVar9[2];
      uStack_6c = puVar9[3];
      puVar9 = (undefined4 *)(lVar4 + 0x10 + lVar8);
      local_68 = *puVar9;
      uStack_64 = puVar9[1];
      uStack_60 = puVar9[2];
      uStack_5c = puVar9[3];
      puVar9 = (undefined4 *)(lVar4 + 0x20 + lVar8);
      local_58 = *puVar9;
      uStack_54 = puVar9[1];
      uStack_50 = puVar9[2];
      uStack_4c = puVar9[3];
      puVar9 = (undefined4 *)(lVar4 + 0x30 + lVar8);
      local_48 = *puVar9;
      uStack_44 = puVar9[1];
      uStack_40 = puVar9[2];
      uStack_3c = puVar9[3];
      FUN_14767f532(param_1 + 0x18);
      FUN_14767fd00(param_1 + 0x68,param_2);
      uVar7 = *(uint *)(param_1 + 0xa8);
      lVar4 = *(longlong *)(param_1 + 0xa0);
      uVar14 = 0;
      uVar13 = uVar7;
      if (0 < (int)uVar7) {
        do {
          uVar1 = (uVar13 >> 1) + uVar14;
          if (*(int *)(lVar4 + (ulonglong)uVar1 * 0x28) < param_2) {
            uVar14 = uVar1 + (uVar13 & 1);
          }
          bVar5 = 1 < uVar13;
          uVar13 = uVar13 >> 1;
        } while (bVar5);
      }
      if (((int)uVar14 < (int)uVar7) && (*(int *)(lVar4 + (ulonglong)uVar14 * 0x28) <= param_2)) {
        if (~uVar14 + uVar7 != 0) {
          pvVar2 = (void *)(lVar4 + (ulonglong)uVar14 * 0x28);
          memmove(pvVar2,(void *)((longlong)pvVar2 + 0x28),(longlong)(int)(~uVar14 + uVar7) * 0x28);
          uVar7 = *(uint *)(param_1 + 0xa8);
        }
        *(uint *)(param_1 + 0xa8) = uVar7 - 1;
LAB_14767f0c7:
        FUN_14767fd72(param_1 + 0xa0);
      }
LAB_14767eefa:
      if ((uStack_3c & 1) != 0) {
        FUN_14767fbc4(&uStack_60);
      }
      unaff_RBP = 0;
      goto LAB_14767ed73;
    }
    unaff_RBP = CONCAT71(uVar11,3);
    if ((*(byte *)(*(longlong *)(param_1 + 0x68) + 0x3c + (longlong)param_2 * 0x40) & 1) == 0)
    goto LAB_14767ed73;
    puVar9 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x40);
  }
  else {
    uVar7 = *(uint *)(param_1 + 0xa8);
    lVar4 = *(longlong *)(param_1 + 0xa0);
    uVar10 = 0;
    if (0 < (int)uVar7) {
      uVar12 = (ulonglong)uVar7;
      uVar13 = uVar7;
      do {
        uVar12 = uVar12 >> 1;
        uVar14 = (uint)uVar12 + (int)uVar10;
        if (*(int *)(lVar4 + (ulonglong)uVar14 * 0x28) < param_2) {
          uVar10 = (ulonglong)(uVar14 + (uVar13 & 1));
        }
        bVar5 = 1 < uVar13;
        uVar13 = (uint)uVar12;
      } while (bVar5);
    }
    if ((((int)uVar10 < (int)uVar7) && (*(int *)(lVar4 + uVar10 * 0x28) <= param_2)) &&
       (lVar4 + uVar10 * 0x28 != -4)) {
      FUN_14767fbc4();
      uVar7 = *(uint *)(param_1 + 0xa8);
      lVar4 = *(longlong *)(param_1 + 0xa0);
      uVar14 = 0;
      uVar13 = uVar7;
      if (0 < (int)uVar7) {
        do {
          uVar1 = (uVar13 >> 1) + uVar14;
          if (*(int *)(lVar4 + (ulonglong)uVar1 * 0x28) < param_2) {
            uVar14 = uVar1 + (uVar13 & 1);
          }
          bVar5 = 1 < uVar13;
          uVar13 = uVar13 >> 1;
        } while (bVar5);
      }
      unaff_RBP = CONCAT71(uVar11,1);
      if (((int)uVar14 < (int)uVar7) && (*(int *)(lVar4 + (ulonglong)uVar14 * 0x28) <= param_2)) {
        if (~uVar14 + uVar7 != 0) {
          pvVar2 = (void *)(lVar4 + (ulonglong)uVar14 * 0x28);
          memmove(pvVar2,(void *)((longlong)pvVar2 + 0x28),(longlong)(int)(~uVar14 + uVar7) * 0x28);
          uVar7 = *(uint *)(param_1 + 0xa8);
        }
        *(uint *)(param_1 + 0xa8) = uVar7 - 1;
        FUN_14767fd72(param_1 + 0xa0);
      }
      goto LAB_14767ed73;
    }
    unaff_RBP = CONCAT71(uVar11,1);
    if (param_4 == '\x01') {
      bVar3 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x3c + (longlong)param_2 * 0x40);
      if ((bVar3 & 1) == 0) goto LAB_14767ed73;
      puVar9 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x40);
      *(byte *)(puVar9 + 0xf) = bVar3 | 2;
    }
    else {
      if (param_4 != '\0') goto LAB_14767ed73;
      puVar9 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x40);
      bVar3 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x3c + (longlong)param_2 * 0x40);
      if ((bVar3 & 2) == 0) {
        local_78 = *puVar9;
        uStack_74 = puVar9[1];
        uStack_70 = puVar9[2];
        uStack_6c = puVar9[3];
        local_68 = puVar9[4];
        uStack_64 = puVar9[5];
        uStack_60 = puVar9[6];
        uStack_5c = puVar9[7];
        local_58 = puVar9[8];
        uStack_54 = puVar9[9];
        uStack_50 = puVar9[10];
        uStack_4c = puVar9[0xb];
        local_48 = puVar9[0xc];
        uStack_44 = puVar9[0xd];
        uStack_40 = puVar9[0xe];
        uStack_3c = puVar9[0xf];
        FUN_14767f532(param_1 + 0x18);
        FUN_14767fd00(param_1 + 0x68,param_2);
        uVar7 = *(uint *)(param_1 + 0xa8);
        lVar4 = *(longlong *)(param_1 + 0xa0);
        uVar14 = 0;
        uVar13 = uVar7;
        if (0 < (int)uVar7) {
          do {
            uVar1 = (uVar13 >> 1) + uVar14;
            if (*(int *)(lVar4 + (ulonglong)uVar1 * 0x28) < param_2) {
              uVar14 = uVar1 + (uVar13 & 1);
            }
            bVar5 = 1 < uVar13;
            uVar13 = uVar13 >> 1;
          } while (bVar5);
        }
        if (((int)uVar14 < (int)uVar7) && (*(int *)(lVar4 + (ulonglong)uVar14 * 0x28) <= param_2)) {
          if (~uVar14 + uVar7 != 0) {
            pvVar2 = (void *)(lVar4 + (ulonglong)uVar14 * 0x28);
            memmove(pvVar2,(void *)((longlong)pvVar2 + 0x28),(longlong)(int)(~uVar14 + uVar7) * 0x28
                   );
            uVar7 = *(uint *)(param_1 + 0xa8);
          }
          *(uint *)(param_1 + 0xa8) = uVar7 - 1;
          goto LAB_14767f0c7;
        }
        goto LAB_14767eefa;
      }
      if ((bVar3 & 1) == 0) goto LAB_14767ed73;
    }
  }
  FUN_14767fbc4(puVar9 + 6);
LAB_14767ed73:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 14767f0d2 FUN_14767f0d2 body=485 status=ok
// SIG undefined FUN_14767f0d2(void)

undefined8 FUN_14767f0d2(longlong param_1,int param_2,char param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  byte *pbVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar4 = *(longlong **)(param_1 + 0xb8);
  lVar14 = (longlong)param_2;
  if (plVar4 != (longlong *)0x0) {
    cVar7 = (**(code **)(*plVar4 + 8))(plVar4,lVar14 * 0x40 + *(longlong *)(param_1 + 0x68));
    uVar9 = 3;
    if (cVar7 == '\0') goto LAB_14767f187;
  }
  if (param_3 == '\x01') {
    local_38 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x10 + lVar14 * 0x40);
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + lVar14 * 0x40);
    local_48 = *puVar1;
    uStack_44 = puVar1[1];
    uStack_40 = puVar1[2];
    uStack_3c = puVar1[3];
    FUN_14767f532(param_1 + 0x18);
    FUN_14767fd00(param_1 + 0x68,param_2);
    uVar8 = *(uint *)(param_1 + 0xa8);
    uVar10 = (ulonglong)uVar8;
    lVar14 = *(longlong *)(param_1 + 0xa0);
    uVar13 = 0;
    if (0 < (int)uVar8) {
      do {
        uVar12 = (int)(uVar10 >> 1) + uVar13;
        uVar11 = (uint)uVar10;
        if (*(int *)(lVar14 + (ulonglong)uVar12 * 0x28) < param_2) {
          uVar13 = uVar12 + (uVar11 & 1);
        }
        uVar10 = uVar10 >> 1;
      } while (1 < uVar11);
    }
    if (((int)uVar13 < (int)uVar8) && (*(int *)(lVar14 + (ulonglong)uVar13 * 0x28) <= param_2)) {
      if (~uVar13 + uVar8 != 0) {
        pvVar2 = (void *)(lVar14 + (ulonglong)uVar13 * 0x28);
        memmove(pvVar2,(void *)((longlong)pvVar2 + 0x28),(longlong)(int)(~uVar13 + uVar8) * 0x28);
        uVar8 = *(uint *)(param_1 + 0xa8);
      }
      *(uint *)(param_1 + 0xa8) = uVar8 - 1;
      FUN_14767fd72(param_1 + 0xa0);
    }
    uVar9 = 0;
  }
  else {
    uVar8 = *(uint *)(param_1 + 0xa8);
    lVar5 = *(longlong *)(param_1 + 0xa0);
    uVar11 = 0;
    uVar13 = uVar8;
    if (0 < (int)uVar8) {
      do {
        uVar12 = (uVar13 >> 1) + uVar11;
        if (*(int *)(lVar5 + (ulonglong)uVar12 * 0x28) < param_2) {
          uVar11 = uVar12 + (uVar13 & 1);
        }
        bVar6 = 1 < uVar13;
        uVar13 = uVar13 >> 1;
      } while (bVar6);
    }
    if (((int)uVar11 < (int)uVar8) && (*(int *)(lVar5 + (ulonglong)uVar11 * 0x28) <= param_2)) {
      if (~uVar11 + uVar8 != 0) {
        pvVar2 = (void *)(lVar5 + (ulonglong)uVar11 * 0x28);
        memmove(pvVar2,(void *)((longlong)pvVar2 + 0x28),(longlong)(int)(~uVar11 + uVar8) * 0x28);
        uVar8 = *(uint *)(param_1 + 0xa8);
      }
      *(uint *)(param_1 + 0xa8) = uVar8 - 1;
      FUN_14767fd72(param_1 + 0xa0);
    }
    else {
      pbVar3 = (byte *)(*(longlong *)(param_1 + 0x68) + 0x3c + lVar14 * 0x40);
      *pbVar3 = *pbVar3 | 2;
    }
    uVar9 = 1;
  }
LAB_14767f187:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 14767f2ba FUN_14767f2ba body=38 status=ok
// SIG undefined FUN_14767f2ba(void)

undefined8 FUN_14767f2ba(undefined8 param_1,int param_2)

{
  FUN_14767f3fe();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14767f2e0 FUN_14767f2e0 body=52 status=ok
// SIG undefined FUN_14767f2e0(void)

void FUN_14767f2e0(longlong *param_1)

{
  FUN_14767f314();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14767f314 FUN_14767f314 body=91 status=ok
// SIG undefined FUN_14767f314(void)

void FUN_14767f314(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_146e1a100(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 14767f370 FUN_14767f370 body=52 status=ok
// SIG undefined FUN_14767f370(void)

void FUN_14767f370(longlong *param_1)

{
  FUN_14767f3a4();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14767f3a4 FUN_14767f3a4 body=89 status=ok
// SIG undefined FUN_14767f3a4(void)

void FUN_14767f3a4(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1407f13e6(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 14767f3fe FUN_14767f3fe body=155 status=ok
// SIG undefined FUN_14767f3fe(void)

void FUN_14767f3fe(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a4d7e40;
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
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_14767f2e0(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_14767f370(param_1 + 3);
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014767f48d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14767f49a FUN_14767f49a body=150 status=ok
// SIG undefined FUN_14767f49a(void)

void FUN_14767f49a(longlong param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  int local_3c;
  undefined4 *local_38;
  int *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *(longlong *)(param_1 + 0x68);
  lVar6 = (longlong)param_2 * 0x40;
  local_48 = *(undefined8 *)(lVar2 + 0x10 + lVar6);
  local_58 = *(undefined8 *)(lVar2 + lVar6);
  uStack_50 = ((undefined8 *)(lVar2 + lVar6))[1];
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  puVar1 = (undefined4 *)(lVar2 + lVar6);
  *puVar1 = *param_3;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  *(undefined8 *)(lVar2 + 0x10 + lVar6) = *(undefined8 *)(param_3 + 4);
  local_3c = param_2;
  FUN_14767f532(param_1 + 0x18);
  local_38 = param_3;
  local_30 = &local_3c;
  FUN_14767f6de(param_1 + 0x18,local_24);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14767f532 FUN_14767f532 body=165 status=ok
// SIG undefined FUN_14767f532(void)

void FUN_14767f532(longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar3 = FUN_1447addd0(param_2 + 2,0x10);
    uVar4 = FUN_144a78877(*param_2,param_2[1]);
    iVar5 = FUN_144a78877(uVar4,uVar3);
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    uVar7 = (ulonglong)
            *(int *)((longlong)plVar6 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4);
    if (uVar7 != 0xffffffffffffffff) {
      lVar1 = *param_1;
      do {
        cVar2 = FUN_14767f62f(lVar1 + uVar7 * 0x24,param_2);
        if (cVar2 != '\0') {
          FUN_14767f5d8(param_1,uVar7 & 0xffffffff);
          return;
        }
        uVar7 = (ulonglong)*(int *)(lVar1 + 0x1c + uVar7 * 0x24);
      } while (uVar7 != 0xffffffffffffffff);
    }
  }
  return;
}



// FUNCTION 14767f5d8 FUN_14767f5d8 body=87 status=ok
// SIG undefined FUN_14767f5d8(void)

void FUN_14767f5d8(longlong *param_1,int param_2)

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
  lVar1 = lVar2 + (longlong)param_2 * 0x24;
  lVar6 = (longlong)*(int *)(lVar1 + 0x20);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x1c + lVar6 * 0x24);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x24 + 0x1c);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x1c);
  FUN_14767f66c();
  return;
}



// FUNCTION 14767f62f FUN_14767f62f body=61 status=ok
// SIG undefined FUN_14767f62f(void)

undefined4 FUN_14767f62f(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    uVar1 = CONCAT31((int3)((uint)(param_1[2] ^ param_2[2]) >> 8),
                     param_1[5] == param_2[5] &&
                     (param_1[4] == param_2[4] &&
                     (param_1[3] == param_2[3] && (param_1[2] ^ param_2[2]) == 0)));
  }
  return uVar1;
}



// FUNCTION 14767f66c FUN_14767f66c body=114 status=ok
// SIG undefined FUN_14767f66c(void)

void FUN_14767f66c(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x24) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x24);
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



// FUNCTION 14767f6de FUN_14767f6de body=334 status=ok
// SIG undefined FUN_14767f6de(void)

undefined4 * FUN_14767f6de(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14767f82e(param_1,local_48);
  puVar1 = (undefined4 *)*param_3;
  puVar2 = (undefined4 *)param_3[1];
  *(undefined8 *)(local_40 + 4) = *(undefined8 *)(puVar1 + 4);
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar3 = puVar1[3];
  *local_40 = *puVar1;
  local_40[1] = uVar5;
  local_40[2] = uVar6;
  local_40[3] = uVar3;
  local_40[6] = *puVar2;
  local_40[7] = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = FUN_1447addd0(local_40 + 2,0x10);
  uVar6 = FUN_144a78877(*local_40,local_40[1]);
  uVar7 = FUN_144a78877(uVar6,uVar5);
  cVar4 = FUN_14767f914(param_1,uVar7,local_40,&local_4c);
  uVar5 = local_4c;
  if (cVar4 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar10 = 1;
    if (3 < uVar8) {
      uVar9 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar11 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      local_40[8] = uVar7;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      local_40[7] = *(undefined4 *)
                     (lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
      ;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_14767f9e6(param_1);
    }
  }
  *param_2 = uVar5;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14767f82e FUN_14767f82e body=230 status=ok
// SIG undefined FUN_14767f82e(void)

int * FUN_14767f82e(longlong *param_1,int *param_2)

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
      FUN_14042c636(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x24);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x24) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x24 + *param_1;
  return param_2;
}



// FUNCTION 14767f914 FUN_14767f914 body=102 status=ok
// SIG undefined FUN_14767f914(void)

undefined8 FUN_14767f914(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar8 = FUN_14767f97a(), iVar8 != -1)) {
    lVar2 = *param_1;
    lVar9 = (longlong)iVar8;
    uVar4 = *param_3;
    uVar5 = param_3[1];
    uVar6 = param_3[2];
    uVar7 = param_3[3];
    uVar3 = *(undefined8 *)(param_3 + 4);
    *(undefined4 *)(lVar2 + 0x18 + lVar9 * 0x24) = param_3[6];
    *(undefined8 *)(lVar2 + 0x10 + lVar9 * 0x24) = uVar3;
    puVar1 = (undefined4 *)(lVar2 + lVar9 * 0x24);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
    FUN_14767f66c(param_1,*param_4);
    *param_4 = iVar8;
    return 1;
  }
  return 0;
}



// FUNCTION 14767f97a FUN_14767f97a body=107 status=ok
// SIG undefined FUN_14767f97a(void)

int FUN_14767f97a(longlong *param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar1 = *param_1;
      do {
        cVar2 = FUN_14767f62f(lVar1 + (longlong)iVar4 * 0x24,param_3);
        if (cVar2 != '\0') {
          return iVar4;
        }
        iVar4 = *(int *)(lVar1 + 0x1c + (longlong)iVar4 * 0x24);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 14767f9e6 FUN_14767f9e6 body=477 status=ok
// SIG undefined FUN_14767f9e6(void)

void FUN_14767f9e6(longlong *param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint uVar11;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)((longlong)plVar10 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar3 != uVar11);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        puVar2 = (undefined4 *)(*local_88 + (longlong)iVar5 * 0x24);
        uVar6 = FUN_1447addd0(puVar2 + 2,0x10);
        uVar7 = FUN_144a78877(*puVar2,puVar2[1]);
        iVar8 = FUN_144a78877(uVar7,uVar6);
        uVar9 = (longlong)iVar8 & (longlong)(int)param_1[9] - 1U;
        iVar8 = (int)uVar9;
        puVar2[8] = iVar8;
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        puVar2[7] = *(undefined4 *)
                     ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(int *)((longlong)plVar10 + ((longlong)iVar8 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5
        ;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14767fbc4 FUN_14767fbc4 body=315 status=ok
// SIG undefined FUN_14767fbc4(void)

void FUN_14767fbc4(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  lVar3 = FUN_14479d2ce(param_1 + 0x14);
  if (lVar3 != 0) {
    lVar5 = param_1 + 0x1c;
    cVar2 = FUN_144729dda(lVar5);
    if (cVar2 != '\0') {
      lVar4 = FUN_14479d2ce(lVar5);
      lVar4 = (**(code **)(*(longlong *)(lVar4 + 0xf8) + 0x18))(lVar4 + 0xf8,param_1);
      if (lVar4 != 0) {
        plVar1 = *(longlong **)(lVar4 + 0x108);
        if ((DAT_14c950c29 == '\x01') && (plVar1 != (longlong *)0x0)) {
          FUN_1456cec3c(plVar1);
        }
        else if (plVar1 == (longlong *)0x0) {
          return;
        }
        (**(code **)(*plVar1 + 0x2b8))(plVar1,*(undefined1 *)(param_1 + 0x11));
        *(undefined1 *)((longlong)plVar1 + 0x29) = 0;
        if (*(char *)(param_1 + 0x10) == '\x01') {
          lVar5 = FUN_14479d2ce(lVar5);
          if (lVar5 == 0) {
            lVar5 = *(longlong *)(lVar3 + 0xb0);
            if (lVar5 == 0) {
              lVar5 = FUN_1448abda6(lVar3);
            }
            uVar6 = FUN_14759215a(lVar5);
            FUN_147593b20(uVar6,plVar1,1);
            return;
          }
          FUN_1475c689e(lVar5 + 0xf8,1);
          lVar4 = *(longlong *)(lVar3 + 0xb0);
          if (lVar4 == 0) {
            lVar4 = FUN_1448abda6(lVar3);
          }
          uVar6 = FUN_14759215a(lVar4);
          FUN_147593b20(uVar6,plVar1,1);
          FUN_1475c689e(lVar5 + 0xf8,0);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14767fd00 FUN_14767fd00 body=114 status=ok
// SIG undefined FUN_14767fd00(void)

void FUN_14767fd00(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x40) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40 + 4) = uVar4;
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



// FUNCTION 14767fd72 FUN_14767fd72 body=62 status=ok
// SIG undefined FUN_14767fd72(void)

void FUN_14767fd72(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14767fdb0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x28,4);
  }
  return;
}



// FUNCTION 14767fdb0 FUN_14767fdb0 body=112 status=ok
// SIG undefined FUN_14767fdb0(void)

ulonglong FUN_14767fdb0(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x28) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14767fdea;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x28,4);
      param_2 = param_2 / 0x28;
    }
  }
LAB_14767fdea:
  return param_2 & 0xffffffff;
}



// FUNCTION 14767fe20 FUN_14767fe20 body=167 status=ok
// SIG undefined FUN_14767fe20(void)

void FUN_14767fe20(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14767fe9b;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14767fe9b;
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
LAB_14767fe9b:
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
                    /* WARNING: Could not recover jumptable at 0x00014767febb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14767fec8 FUN_14767fec8 body=273 status=ok
// SIG undefined FUN_14767fec8(void)

void FUN_14767fec8(undefined8 param_1,longlong param_2,longlong param_3,undefined2 param_4,
                  undefined2 param_5)

{
  longlong lVar1;
  undefined1 auStack_188 [32];
  undefined1 local_168 [2];
  undefined2 local_166;
  undefined2 local_164;
  undefined2 local_162;
  undefined1 local_15f;
  undefined4 local_15c;
  undefined1 local_158;
  undefined1 local_150 [80];
  longlong local_100;
  undefined8 local_d0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [80];
  longlong local_48;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_a0 = param_1;
  FUN_1403b8af8(local_98,param_3);
  local_38 = *(undefined4 *)(param_3 + 0x60);
  lVar1 = FUN_14009d2a0();
  local_166 = *(undefined2 *)(lVar1 + 0x50);
  local_162 = param_5;
  local_15f = 0;
  local_15c = 0x6ff;
  local_158 = 0;
  local_164 = param_4;
  FUN_1403b8af8(local_150,param_3);
  local_d0 = 0x10000000000;
  local_a8 = 0x10000000000;
  FUN_14767ffda(local_168,local_150);
  FUN_147680082(local_168,param_2 + 0x28,local_150,&local_a0);
  if (local_100 != 0) {
    FUN_1400020a8();
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14767ffda FUN_14767ffda body=167 status=ok
// SIG undefined FUN_14767ffda(void)

void FUN_14767ffda(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_32 = *(undefined2 *)(param_1 + 2);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = *(undefined2 *)(param_1 + 4);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = *(undefined2 *)(param_1 + 6);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147680082 FUN_147680082 body=752 status=ok
// SIG undefined FUN_147680082(void)

void FUN_147680082(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 local_100;
  char local_ed;
  int local_ec;
  int local_e8;
  int local_e4;
  longlong local_e0;
  longlong local_d8;
  undefined8 local_d0;
  longlong local_c8;
  longlong local_c0;
  int local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  int local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  int local_88;
  undefined8 local_80;
  undefined8 *local_78;
  int local_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (((*(short *)(param_1 + 2) != -1) && (*(short *)(param_1 + 4) != -1)) &&
     (*(short *)(param_1 + 6) != -1)) {
    local_ed = *(char *)(param_2 + 0x270);
    FUN_14150e78a(&local_60);
    local_e8 = *(int *)(param_2 + 0x10);
    lVar3 = param_1;
    uVar4 = param_4;
    if (local_50 != local_e8) {
      do {
        local_d0 = uVar4;
        local_d8 = lVar3;
        iVar10 = local_50;
        lVar8 = local_58;
        lVar6 = local_d8;
        lVar3 = *(longlong *)(*(longlong *)(local_58 + 0x60) + (longlong)local_50 * 8);
        if (local_ed == '\0') {
          *(undefined4 *)(lVar3 + 0x14) = 0;
          local_e0 = lVar3;
        }
        else {
          local_e0 = 0;
        }
        if (*(ushort *)(lVar3 + 0xc) != 0) {
          puVar11 = *(undefined8 **)(lVar3 + 0x28);
          lVar7 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
          do {
            if (*(short *)((longlong)puVar11 + 0x1e) == *(short *)(local_d8 + 6))
            goto LAB_14768018f;
            puVar11 = puVar11 + 4;
            lVar7 = lVar7 + -0x20;
          } while (lVar7 != 0);
        }
        puVar11 = (undefined8 *)0x0;
LAB_14768018f:
        iVar1 = *(int *)(lVar3 + 0x14);
        if (iVar1 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(puVar11 + 1));
        }
        LOCK();
        *(int *)(puVar11 + 3) = *(int *)(puVar11 + 3) + 1;
        UNLOCK();
        uVar4 = *puVar11;
        local_c8 = lVar8;
        if (*(ushort *)(lVar3 + 0xc) != 0) {
          puVar9 = *(undefined8 **)(lVar3 + 0x28);
          lVar8 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
          do {
            if (*(short *)((longlong)puVar9 + 0x1e) == *(short *)(lVar6 + 4)) goto LAB_1476801c8;
            puVar9 = puVar9 + 4;
            lVar8 = lVar8 + -0x20;
          } while (lVar8 != 0);
        }
        puVar9 = (undefined8 *)0x0;
LAB_1476801c8:
        iVar2 = *(int *)(lVar3 + 0x14);
        local_e4 = iVar1;
        if (iVar2 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(puVar9 + 1));
        }
        LOCK();
        *(int *)(puVar9 + 3) = *(int *)(puVar9 + 3) + 1;
        UNLOCK();
        uVar5 = *puVar9;
        if (*(ushort *)(lVar3 + 0xc) != 0) {
          puVar12 = *(undefined8 **)(lVar3 + 0x28);
          lVar8 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
          do {
            if (*(short *)((longlong)puVar12 + 0x1e) == *(short *)(lVar6 + 2)) goto LAB_1476801fa;
            puVar12 = puVar12 + 4;
            lVar8 = lVar8 + -0x20;
          } while (lVar8 != 0);
        }
        puVar12 = (undefined8 *)0x0;
LAB_1476801fa:
        iVar1 = *(int *)(lVar3 + 0x14);
        if (iVar1 == 1) {
          local_ec = iVar10;
          AcquireSRWLockShared((PSRWLOCK)(puVar12 + 1));
          iVar10 = local_ec;
        }
        LOCK();
        *(int *)(puVar12 + 3) = *(int *)(puVar12 + 3) + 1;
        UNLOCK();
        local_98 = *puVar12;
        local_b0 = *(undefined8 *)(lVar3 + 0x18);
        local_70 = local_e4;
        local_c0 = local_c8;
        local_108 = uVar5;
        local_100 = uVar4;
        local_b8 = iVar10;
        local_a8 = puVar12;
        local_a0 = iVar1;
        local_90 = puVar9;
        local_88 = iVar2;
        local_80 = uVar5;
        local_78 = puVar11;
        local_68 = uVar4;
        FUN_147680374(local_d0,&local_c0);
        FUN_147680516(&local_b0);
        if (local_e0 != 0) {
          *(undefined4 *)(local_e0 + 0x14) = 1;
        }
        local_50 = FUN_1403b8464(&local_60,local_50 + 1);
        lVar3 = local_d8;
        uVar4 = local_d0;
      } while (local_50 != local_e8);
    }
    if (local_60 != 0) {
      if (*(char *)(local_58 + 0x270) == '\0') {
        *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
        UNLOCK();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147680374 FUN_147680374 body=416 status=ok
// SIG undefined FUN_147680374(void)

void FUN_147680374(longlong *param_1,undefined4 *param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  byte local_88;
  undefined8 local_74;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_54;
  byte local_50;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = *param_1;
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  local_a0 = param_4;
  FUN_140cd6274(&local_54);
  if (**(int **)(lVar1 + 0xb0) != 0 || (local_50 & 1) != 0) {
    local_a8 = FUN_140732858();
    if (0 < (int)local_54) {
      uVar5 = 0;
      do {
        local_98 = *(undefined8 *)(param_5 + uVar5 * 8);
        FUN_14768058e(lVar1,&local_74,&local_98,param_6);
        local_8c = *(undefined4 *)(local_a0 + uVar5 * 4);
        local_4a = *(undefined2 *)(param_3 + uVar5 * 2);
        local_90 = local_6c;
        local_98 = local_74;
        local_88 = local_50;
        FUN_1449da5a2(local_a8,&local_4a,&local_98);
        lVar3 = FUN_1400e4054(*(undefined8 *)(lVar1 + 0xb0),&local_74);
        if (lVar3 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = (undefined4)
                  CONCAT71((int7)((ulonglong)&local_74 >> 8),'\x02' - (*(short *)(lVar3 + 0xe) == 0)
                          );
        }
        cVar2 = FUN_14768064c(lVar1,local_6c,uVar4);
        if (cVar2 == '\0') {
          FUN_1476806e4(&local_98,*(undefined8 *)(param_5 + uVar5 * 8),param_6);
          FUN_147680850(lVar1,local_6c,uVar4,&local_98);
        }
        uVar5 = uVar5 + 1;
        param_6 = param_6 + 0x18;
      } while (local_54 != uVar5);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147680516 FUN_147680516 body=120 status=ok
// SIG undefined FUN_147680516(void)

void FUN_147680516(longlong param_1)

{
  int *piVar1;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x38) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x40) == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 0x38) + 8));
    }
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x20) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x28) == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 0x20) + 8));
    }
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x10) == 1) {
                    /* WARNING: Could not recover jumptable at 0x000147680580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 8) + 8));
      return;
    }
  }
  return;
}



// FUNCTION 14768058e FUN_14768058e body=189 status=ok
// SIG undefined FUN_14768058e(void)

longlong FUN_14768058e(longlong param_1,longlong param_2,longlong *param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = 0;
  if (*param_3 == 0) {
    lVar1 = 0;
  }
  else {
    local_38 = 0;
    FUN_14485c47a(&local_38);
    local_50 = local_38;
    lVar1 = *param_3;
  }
  local_48 = *param_4;
  uStack_44 = param_4[1];
  uStack_40 = param_4[2];
  uStack_3c = param_4[3];
  FUN_14027461a(param_1 + 200,param_2,lVar1);
  FUN_1476808f8(param_1,&local_38,&local_50);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 8) = (undefined4)local_38;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14768064c FUN_14768064c body=151 status=ok
// SIG undefined FUN_14768064c(void)

ulonglong FUN_14768064c(longlong param_1,int param_2,char param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  undefined8 in_RAX;
  ulonglong uVar5;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  undefined7 uVar6;
  
  lVar7 = (longlong)param_2 * 0x40 + *(longlong *)(param_1 + 0x68);
  uVar6 = (undefined7)((ulonglong)in_RAX >> 8);
  uVar5 = CONCAT71(uVar6,1);
  if (param_3 == '\x02') {
    bVar2 = *(byte *)(lVar7 + 0x3c);
    if (((bVar2 & 2) == 0 & bVar2) == 0) {
      uVar3 = *(uint *)(param_1 + 0xa8);
      lVar7 = *(longlong *)(param_1 + 0xa0);
      uVar9 = 0;
      uVar8 = uVar3;
      if (0 < (int)uVar3) {
        do {
          uVar1 = (uVar8 >> 1) + uVar9;
          if (*(int *)(lVar7 + (ulonglong)uVar1 * 0x28) < param_2) {
            uVar9 = uVar1 + (uVar8 & 1);
          }
          bVar4 = 1 < uVar8;
          uVar8 = uVar8 >> 1;
        } while (bVar4);
      }
      if (((int)uVar9 < (int)uVar3) && (*(int *)(lVar7 + (ulonglong)uVar9 * 0x28) <= param_2)) {
        lVar7 = lVar7 + (ulonglong)uVar9 * 0x28;
        uVar5 = CONCAT71((int7)((ulonglong)lVar7 >> 8),lVar7 != -4);
      }
      else {
        uVar5 = 0;
      }
    }
  }
  else if (param_3 == '\x01') {
    uVar5 = CONCAT71(uVar6,*(undefined1 *)(lVar7 + 0x3c));
  }
  return uVar5 & 0xffffffffffffff01;
}



// FUNCTION 1476806e4 FUN_1476806e4 body=362 status=ok
// SIG undefined FUN_1476806e4(void)

undefined4 * FUN_1476806e4(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = *(longlong *)(param_2 + 0xb0);
  if (lVar5 == 0) {
    lVar5 = FUN_1448abda6(param_2);
  }
  uVar6 = FUN_14759215a(lVar5);
  lVar5 = (**(code **)(*(longlong *)(*(longlong *)(param_3 + 4) + 0xf8) + 0x18))
                    (*(longlong *)(param_3 + 4) + 0xf8,param_3);
  if (lVar5 != 0) {
    lVar1 = *(longlong *)(lVar5 + 0x108);
    if ((DAT_14c950c29 == '\x01') && (lVar1 != 0)) {
      FUN_1456cec3c(lVar1);
    }
    puVar7 = (undefined4 *)(lVar1 + 0x2c);
    if (lVar1 == 0) {
      puVar7 = param_3;
    }
    local_48 = *puVar7;
    uStack_44 = puVar7[1];
    uStack_40 = puVar7[2];
    uStack_3c = puVar7[3];
    lVar5 = FUN_143314aeb(uVar6,lVar5);
    if (lVar5 != 0) {
      FUN_147592202(uVar6,lVar5);
    }
    *param_1 = local_48;
    param_1[1] = uStack_44;
    param_1[2] = uStack_40;
    param_1[3] = uStack_3c;
    *(bool *)(param_1 + 4) = lVar5 == 0;
    *(undefined1 *)((longlong)param_1 + 0x11) = 0;
    *(undefined8 *)(param_1 + 5) = 0;
    FUN_14485c47a(param_1 + 5,param_2);
    uVar6 = *(undefined8 *)(param_3 + 4);
    *(undefined8 *)(param_1 + 7) = 0;
    FUN_14485c47a(param_1 + 7,uVar6);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
  }
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  FUN_14485c47a(param_1 + 5,param_2);
  uVar6 = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)(param_1 + 7) = 0;
  FUN_14485c47a(param_1 + 7,uVar6);
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147680850 FUN_147680850 body=166 status=ok
// SIG undefined FUN_147680850(void)

void FUN_147680850(longlong param_1,int param_2,char param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_38 [44];
  int local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar6 = (longlong)param_2 * 0x40 + *(longlong *)(param_1 + 0x68);
  local_c = param_2;
  if (param_3 == '\x02') {
    if ((*(byte *)(lVar6 + 0x3c) & 1) == 0) {
      *(undefined4 *)(lVar6 + 0x38) = param_4[8];
      uVar1 = *param_4;
      uVar2 = param_4[1];
      uVar3 = param_4[2];
      uVar4 = param_4[3];
      uVar5 = *(undefined8 *)(param_4 + 6);
      *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(param_4 + 4);
      *(undefined8 *)(lVar6 + 0x30) = uVar5;
      *(undefined4 *)(lVar6 + 0x18) = uVar1;
      *(undefined4 *)(lVar6 + 0x1c) = uVar2;
      *(undefined4 *)(lVar6 + 0x20) = uVar3;
      *(undefined4 *)(lVar6 + 0x24) = uVar4;
      *(byte *)(lVar6 + 0x3c) = *(byte *)(lVar6 + 0x3c) | 1;
    }
    else {
      FUN_147680aee(param_1 + 0xa0,&local_c,param_4);
    }
  }
  else if (param_3 == '\x01') {
    *(undefined4 *)(lVar6 + 0x38) = param_4[8];
    uVar1 = *param_4;
    uVar2 = param_4[1];
    uVar3 = param_4[2];
    uVar4 = param_4[3];
    uVar5 = *(undefined8 *)(param_4 + 6);
    *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(param_4 + 4);
    *(undefined8 *)(lVar6 + 0x30) = uVar5;
    *(undefined4 *)(lVar6 + 0x18) = uVar1;
    *(undefined4 *)(lVar6 + 0x1c) = uVar2;
    *(undefined4 *)(lVar6 + 0x20) = uVar3;
    *(undefined4 *)(lVar6 + 0x24) = uVar4;
    *(byte *)(lVar6 + 0x3c) = *(byte *)(lVar6 + 0x3c) | 3;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476808f8 FUN_1476808f8 body=269 status=ok
// SIG undefined FUN_1476808f8(void)

int * FUN_1476808f8(longlong param_1,int *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  int *piStack_60;
  undefined8 local_58;
  int local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = (longlong *)(param_1 + 0x18);
  uVar2 = FUN_1447addd0(param_3 + 1,0x10);
  uVar3 = FUN_144a78877(*(undefined4 *)param_3,*(undefined4 *)((longlong)param_3 + 4));
  uVar2 = FUN_144a78877(uVar3,uVar2);
  iVar4 = FUN_14767f97a(plVar1,uVar2,param_3);
  if (((iVar4 == -1) || (lVar5 = (longlong)iVar4 * 0x24 + *plVar1, lVar5 == 0)) ||
     (iVar4 = *(int *)(lVar5 + 0x18), *param_2 = iVar4, iVar4 == -1)) {
    local_58 = param_3[2];
    local_68 = (undefined8 *)*param_3;
    piStack_60 = (int *)param_3[1];
    FUN_147680a06(param_1 + 0x68,local_48);
    local_40[2] = local_58;
    *local_40 = local_68;
    local_40[1] = piStack_60;
    local_40[3] = 0;
    local_40[4] = 0;
    *(undefined8 *)((longlong)local_40 + 0x2c) = 0;
    *(undefined8 *)((longlong)local_40 + 0x34) = 0;
    *(undefined1 *)((longlong)local_40 + 0x3c) = 0;
    *param_2 = local_48[0];
    local_68 = param_3;
    piStack_60 = param_2;
    FUN_14767f6de(plVar1,local_48,&local_68);
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147680a06 FUN_147680a06 body=231 status=ok
// SIG undefined FUN_147680a06(void)

int * FUN_147680a06(longlong *param_1,int *param_2)

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
      FUN_146e1a160(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x40);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x40) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x40 + *param_1;
  return param_2;
}



// FUNCTION 147680aee FUN_147680aee body=226 status=ok
// SIG undefined FUN_147680aee(void)

void FUN_147680aee(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  int *piVar12;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar10 = *param_1;
  if ((int)uVar2 < 1) {
    uVar11 = 0;
  }
  else {
    iVar8 = *param_2;
    uVar11 = 0;
    uVar9 = uVar2;
    do {
      uVar1 = (uVar9 >> 1) + uVar11;
      if (*(int *)(lVar10 + (ulonglong)uVar1 * 0x28) < iVar8) {
        uVar11 = uVar1 + (uVar9 & 1);
      }
      bVar3 = 1 < uVar9;
      uVar9 = uVar9 >> 1;
    } while (bVar3);
    if (((int)uVar11 < (int)uVar2) && (*(int *)(lVar10 + (ulonglong)uVar11 * 0x28) <= iVar8)) {
      piVar12 = (int *)(lVar10 + (ulonglong)uVar11 * 0x28);
      goto LAB_147680b93;
    }
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar2) {
    FUN_147680bd0(param_1,uVar2);
    lVar10 = *param_1;
  }
  lVar4 = (ulonglong)uVar11 * 0x28;
  memmove((void *)(lVar10 + lVar4 + 0x28),(void *)(lVar10 + lVar4),
          (ulonglong)(uVar2 - uVar11) * 0x28);
  piVar12 = (int *)(lVar4 + *param_1);
  iVar8 = *param_2;
LAB_147680b93:
  *piVar12 = iVar8;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  *(undefined8 *)(piVar12 + 1) = *param_3;
  *(undefined8 *)(piVar12 + 3) = uVar5;
  *(undefined8 *)(piVar12 + 5) = uVar6;
  *(undefined8 *)(piVar12 + 7) = uVar7;
  piVar12[9] = *(int *)(param_3 + 4);
  return;
}



// FUNCTION 147680bd0 FUN_147680bd0 body=147 status=ok
// SIG undefined FUN_147680bd0(void)

void FUN_147680bd0(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147680c64 FUN_147680c64 body=255 status=ok
// SIG undefined FUN_147680c64(void)

void FUN_147680c64(undefined2 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  ulonglong *local_48;
  undefined2 local_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_3a = 0xffff;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = *param_1;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[1];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[2];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[3];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147680d64 FUN_147680d64 body=599 status=ok
// SIG undefined FUN_147680d64(void)

void FUN_147680d64(undefined8 param_1,longlong param_2,short *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  int local_c4;
  int local_c0;
  int local_bc;
  longlong local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  int local_a0;
  longlong local_98;
  longlong *local_90;
  int local_88;
  longlong local_80;
  longlong *local_78;
  int local_70;
  longlong local_68;
  longlong *local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar14 = *(longlong **)(param_2 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar14 + 0x1e) == param_3[3]) goto LAB_147680da4;
      plVar14 = plVar14 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  plVar14 = (longlong *)0x0;
LAB_147680da4:
  iVar2 = *(int *)(param_2 + 0x14);
  local_b0 = param_1;
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar14 + 1));
  }
  LOCK();
  *(int *)(plVar14 + 3) = (int)plVar14[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar12 = *(longlong **)(param_2 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar12 + 0x1e) == param_3[2]) goto LAB_147680dcb;
      plVar12 = plVar12 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  plVar12 = (longlong *)0x0;
LAB_147680dcb:
  lVar7 = *plVar14;
  iVar3 = *(int *)(param_2 + 0x14);
  if (iVar3 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar12 + 1));
  }
  LOCK();
  *(int *)(plVar12 + 3) = (int)plVar12[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar9 = *(longlong **)(param_2 + 0x28);
    lVar13 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar9 + 0x1e) == param_3[1]) goto LAB_147680dfb;
      plVar9 = plVar9 + 4;
      lVar13 = lVar13 + -0x20;
    } while (lVar13 != 0);
  }
  plVar9 = (longlong *)0x0;
LAB_147680dfb:
  lVar13 = *plVar12;
  iVar4 = *(int *)(param_2 + 0x14);
  local_c0 = iVar3;
  local_bc = iVar2;
  if (iVar4 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar9 + 1));
  }
  LOCK();
  *(int *)(plVar9 + 3) = (int)plVar9[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar11 = *(longlong **)(param_2 + 0x28);
    lVar8 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar11 + 0x1e) == *param_3) goto LAB_147680e32;
      plVar11 = plVar11 + 4;
      lVar8 = lVar8 + -0x20;
    } while (lVar8 != 0);
  }
  plVar11 = (longlong *)0x0;
LAB_147680e32:
  lVar8 = *plVar9;
  iVar2 = *(int *)(param_2 + 0x14);
  local_88 = iVar4;
  local_b8 = param_2;
  if (iVar2 == 1) {
    local_c4 = iVar4;
    AcquireSRWLockShared((PSRWLOCK)(plVar11 + 1));
    local_88 = local_c4;
  }
  uVar6 = local_b0;
  LOCK();
  *(int *)(plVar11 + 3) = (int)plVar11[3] + 1;
  UNLOCK();
  lVar5 = *plVar11;
  local_70 = local_c0;
  local_58 = local_bc;
  uVar1 = *(ushort *)(local_b8 + 0xe);
  local_a8 = plVar11;
  local_a0 = iVar2;
  local_98 = lVar5;
  local_90 = plVar9;
  local_80 = lVar8;
  local_78 = plVar12;
  local_68 = lVar13;
  local_60 = plVar14;
  local_50 = lVar7;
  if ((ulonglong)uVar1 != 0) {
    uVar10 = 0;
    do {
      local_d8 = *(undefined8 *)(lVar7 + uVar10 * 8);
      FUN_14767e5b6(uVar6,*(undefined8 *)(lVar5 + uVar10 * 8),*(undefined4 *)(lVar8 + uVar10 * 4),
                    lVar13);
      uVar10 = uVar10 + 1;
      lVar13 = lVar13 + 0x18;
    } while (uVar1 != uVar10);
  }
  FUN_147680fbc(&local_a8);
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147680fbc FUN_147680fbc body=151 status=ok
// SIG undefined FUN_147680fbc(void)

void FUN_147680fbc(longlong *param_1)

{
  int *piVar1;
  
  if (param_1[9] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[9] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[10] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[9] + 8));
    }
  }
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[7] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[6] + 8));
    }
  }
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[4] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x000147681045. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 147681054 FUN_147681054 body=169 status=ok
// SIG undefined FUN_147681054(void)

undefined8 *
FUN_147681054(undefined8 *param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 2);
  uVar1 = param_3[1];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[7] = 0x10000000000;
  param_1[0xc] = 0x10000000000;
  param_1[0x13] = 0x10000000000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x18] = 0x10000000000;
  FUN_14767e268(0,param_1 + 3);
  param_1[0x19] = param_2;
  param_1[0x1a] = *(undefined8 *)(param_2 + 0x248);
  uVar1 = *param_5;
  uVar2 = *param_6;
  param_1[0x1b] = *param_4;
  param_1[0x1c] = uVar1;
  param_1[0x1d] = 0;
  param_1[0x1e] = uVar2;
  return param_1;
}



// FUNCTION 1476810fe FUN_1476810fe body=228 status=ok
// SIG undefined FUN_1476810fe(void)

undefined8
FUN_1476810fe(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  *local_40 = &PTR_LAB_14a4d7700;
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
  *local_40 = &PTR_FUN_14a4d7ea0;
  local_40[3] = param_3;
  local_40[4] = param_4;
  FUN_1409960cc(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476811e4 FUN_1476811e4 body=839 status=ok
// SIG undefined FUN_1476811e4(void)

void FUN_1476811e4(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  ushort uVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  uint local_90;
  int iStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  longlong *local_80;
  longlong *local_78;
  undefined2 local_70;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (0 < (longlong)*(int *)(param_1 + 0xf8)) {
    local_b8 = param_1 + 0x128;
    plVar1 = (longlong *)(param_1 + 0x50);
    local_b0 = param_1 + 0x88;
    uVar10 = (longlong)*(int *)(param_1 + 0xf8);
    do {
      uVar11 = uVar10 - 1;
      if ((longlong)uVar10 <= (longlong)*(int *)(param_1 + 0x118)) {
        lVar7 = *(longlong *)(param_1 + 0x110);
        if (*(longlong *)(param_1 + 0x110) == 0) {
          lVar7 = param_1 + 0x100;
        }
        if ((*(uint *)(lVar7 + (uVar11 >> 5) * 4) >> ((uint)uVar11 & 0x1f) & 1) != 0) {
          cVar5 = FUN_147681b16(*(longlong *)(param_1 + 0xf0) + uVar11 * 0x30);
          if (cVar5 != '\0') {
            FUN_1476595ee(*(longlong *)(param_1 + 0xf0) + uVar11 * 0x30 + 0x10);
            FUN_147681b98((longlong *)(param_1 + 0xf0),uVar11 & 0xffffffff);
            uVar6 = (uint)(uVar11 & 0xffff);
            if ((int)uVar6 < *(int *)(param_1 + 0x140)) {
              lVar7 = *(longlong *)(param_1 + 0x138);
              if (*(longlong *)(param_1 + 0x138) == 0) {
                lVar7 = local_b8;
              }
              puVar2 = (uint *)(lVar7 + ((uVar11 & 0xffff) >> 5) * 4);
              *puVar2 = *puVar2 & ~(1 << ((byte)uVar11 & 0x1f));
            }
            if (*(int *)(param_1 + 0x98) != 0) {
              lVar7 = *(longlong *)(param_1 + 0x90);
              if (*(longlong *)(param_1 + 0x90) == 0) {
                lVar7 = local_b0;
              }
              iVar9 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x98) - 1U & uVar6) * 4);
              while (iVar8 = iVar9, iVar8 != -1) {
                lVar7 = *plVar1;
                iVar9 = *(int *)(lVar7 + 4 + (longlong)iVar8 * 0xc);
                if (*(short *)(lVar7 + (longlong)iVar8 * 0xc) == (short)uVar11) {
                  do {
                    FUN_140bbeb1c(param_1,lVar7 + (longlong)iVar8 * 0xc + 2);
                    FUN_14086b624(plVar1,iVar8);
                    do {
                      iVar8 = iVar9;
                      if (iVar8 == -1) goto LAB_147681282;
                      lVar7 = *plVar1;
                      iVar9 = *(int *)(lVar7 + 4 + (longlong)iVar8 * 0xc);
                    } while (*(short *)(lVar7 + (longlong)iVar8 * 0xc) != (short)uVar11);
                  } while( true );
                }
              }
            }
          }
        }
      }
LAB_147681282:
      bVar4 = 1 < (longlong)uVar10;
      uVar10 = uVar11;
    } while (bVar4);
  }
  plVar1 = (longlong *)(param_1 + 0xa0);
  local_60 = param_1 + 0xb0;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  if (*(int *)(param_1 + 200) != 0) {
    FUN_1449c0562(&local_68);
  }
  local_90 = local_58;
  iStack_8c = iStack_54;
  local_88 = local_50;
  local_84 = local_4c;
  local_a0 = local_68;
  local_98 = local_60;
  local_70 = 0;
  local_a8 = plVar1;
  local_80 = plVar1;
  local_78 = plVar1;
  if (iStack_54 < *(int *)(local_60 + 0x18)) {
    do {
      cVar5 = FUN_147681b16((longlong)iStack_8c * 0x1c + *local_a8);
      if ((cVar5 == '\0') &&
         (uVar3 = *(ushort *)(*local_a8 + 0x10 + (longlong)iStack_8c * 0x1c),
         (int)(uint)uVar3 < *(int *)(param_1 + 0x118))) {
        lVar7 = *(longlong *)(param_1 + 0x110);
        if (*(longlong *)(param_1 + 0x110) == 0) {
          lVar7 = param_1 + 0x100;
        }
        if ((*(uint *)(lVar7 + (ulonglong)(uVar3 >> 5) * 4) >> (uVar3 & 0x1f) & 1) == 0)
        goto LAB_147681454;
      }
      else {
LAB_147681454:
        FUN_147681c12(local_80);
        local_70 = CONCAT11(local_70._1_1_,1);
      }
      local_90 = local_90 & ~local_a0._4_4_;
      FUN_1449c0562(&local_a0);
    } while (iStack_8c < *(int *)(local_98 + 0x18));
    if (((local_70 & 1) != 0) && (local_70._1_1_ == '\x01')) {
      FUN_147681cf8(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14768152c FUN_14768152c body=493 status=ok
// SIG undefined FUN_14768152c(void)

void FUN_14768152c(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  uint *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  ushort uVar5;
  char cVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined8 local_a0;
  longlong *local_98;
  uint local_90;
  int iStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  longlong *local_80;
  longlong *local_78;
  undefined2 local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar8 = FUN_14009d2a0();
  uVar3 = *(undefined2 *)(lVar8 + 0x11c);
  local_60 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_68);
  }
  local_90 = local_58;
  iStack_8c = iStack_54;
  local_88 = local_50;
  local_84 = local_4c;
  local_a0 = local_68;
  local_98 = local_60;
  local_70 = 0;
  local_a8 = param_1;
  local_80 = param_1;
  local_78 = param_1;
  if (iStack_54 < (int)local_60[3]) {
    plVar1 = param_1 + 0x25;
    do {
      uVar4 = *(undefined2 *)(*local_a8 + (longlong)iStack_8c * 0xc);
      local_68 = CONCAT62(local_68._2_6_,uVar4);
      uVar5 = *(ushort *)(*local_a8 + 2 + (longlong)iStack_8c * 0xc);
      if (uVar5 != 0xffff) {
        cVar6 = FUN_140bbead8(param_2 + 0x28,uVar4,uVar3);
        if (cVar6 != '\0') {
          FUN_14086b58e(param_1 + 10,uVar5,&local_68);
          iVar10 = ((uint)uVar5 - (int)param_1[0x28]) + 1;
          if (0 < iVar10) {
            uVar7 = FUN_144a54ea4(plVar1,iVar10);
            FUN_1447c6044(plVar1,uVar7,iVar10,0);
          }
          plVar9 = (longlong *)param_1[0x27];
          if ((longlong *)param_1[0x27] == (longlong *)0x0) {
            plVar9 = plVar1;
          }
          puVar2 = (uint *)((longlong)plVar9 + (ulonglong)(uVar5 >> 5) * 4);
          *puVar2 = *puVar2 | 1 << ((byte)uVar5 & 0x1f);
          FUN_14086b4ac(local_80,iStack_8c);
          local_70 = CONCAT11(local_70._1_1_,1);
        }
      }
      local_90 = local_90 & ~local_a0._4_4_;
      FUN_1449c0562(&local_a0);
    } while (iStack_8c < (int)local_98[3]);
    if (((local_70 & 1) != 0) && (local_70._1_1_ == '\x01')) {
      FUN_14767a9b8(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14768171a FUN_14768171a body=228 status=ok
// SIG undefined FUN_14768171a(void)

undefined8 FUN_14768171a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  *local_38 = &PTR_LAB_14a481140;
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
  *local_38 = &PTR_FUN_14a4d7f10;
  local_38[3] = param_3;
  local_38[4] = FUN_147681800;
  FUN_140996264(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147681800 FUN_147681800 body=380 status=ok
// SIG undefined FUN_147681800(void)

void FUN_147681800(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = param_1 + 0xa0;
  lVar2 = param_1 + 0xb0;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = lVar2;
  if (*(int *)(param_1 + 200) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar3 = *(int *)(param_1 + 200);
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = lVar1;
  if ((iStack_44 != iVar3) || (uStack_50 != lVar2)) {
    do {
      do {
        local_68 = local_68 & ~uStack_74;
        FUN_1449c0562(&local_78);
      } while (iStack_64 != iVar3);
    } while ((CONCAT44(uStack_6c,uStack_70) != lVar2) || (local_80 != lVar1));
  }
  lVar1 = param_1 + 0xf0;
  lVar2 = param_1 + 0x100;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = lVar2;
  if (*(int *)(param_1 + 0x118) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar3 = *(int *)(param_1 + 0x118);
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_80 = lVar1;
  if ((iStack_44 != iVar3) || (uStack_50 != lVar2)) {
    do {
      do {
        local_68 = local_68 & ~uStack_74;
        FUN_1449c0562(&local_78);
      } while (iStack_64 != iVar3);
    } while ((CONCAT44(uStack_6c,uStack_70) != lVar2) || (local_80 != lVar1));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14768197e FUN_14768197e body=29 status=ok
// SIG undefined FUN_14768197e(void)

undefined8 FUN_14768197e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476819b8 FUN_1476819b8 body=93 status=ok
// SIG undefined FUN_1476819b8(void)

void FUN_1476819b8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a4d7700;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a4d7ea0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147681a16 FUN_147681a16 body=93 status=ok
// SIG undefined FUN_147681a16(void)

void FUN_147681a16(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a4d7700;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a4d7ea0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147681a74 FUN_147681a74 body=126 status=ok
// SIG undefined FUN_147681a74(void)

void FUN_147681a74(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a4d7700;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a4d7ea0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147681ae3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147681b00 FUN_147681b00 body=21 status=ok
// SIG undefined FUN_147681b00(void)

undefined8 FUN_147681b00(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147681b16 FUN_147681b16 body=129 status=ok
// SIG undefined FUN_147681b16(void)

uint FUN_147681b16(undefined8 *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_1;
  lVar2 = FUN_14479d2ce();
  uVar1 = 1;
  if ((lVar2 != 0) && ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0)) {
    uVar1 = *(uint *)(lVar2 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    uVar1 = *(uint *)(lVar2 + 8) >> 0x1c & 1;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147681b98 FUN_147681b98 body=122 status=ok
// SIG undefined FUN_147681b98(void)

void FUN_147681b98(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x30) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30 + 4) = uVar4;
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



// FUNCTION 147681c12 FUN_147681c12 body=101 status=ok
// SIG undefined FUN_147681c12(void)

void FUN_147681c12(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x18 + (longlong)param_2 * 0x1c);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x14 + lVar5 * 0x1c);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x1c + 0x14);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x1c + 0x14);
  FUN_147681c78();
  return;
}



// FUNCTION 147681c78 FUN_147681c78 body=128 status=ok
// SIG undefined FUN_147681c78(void)

void FUN_147681c78(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x1c) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1c) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1c + 4) = uVar4;
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



// FUNCTION 147681cf8 FUN_147681cf8 body=68 status=ok
// SIG undefined FUN_147681cf8(void)

void FUN_147681cf8(longlong param_1,uint param_2)

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
  FUN_147681d3c(param_1);
  return;
}



// FUNCTION 147681d3c FUN_147681d3c body=534 status=ok
// SIG undefined FUN_147681d3c(void)

void FUN_147681d3c(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar6 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar5 = (longlong)iVar6 * 0x1c;
        uVar10 = FUN_144a78877(*(undefined4 *)(lVar3 + lVar5),*(undefined4 *)(lVar3 + 4 + lVar5));
        uVar4 = *(undefined8 *)(lVar3 + 8 + lVar5);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar11 = (uint)uVar4 & 0xffff;
        uVar9 = (longlong)
                (int)((uint)uVar4 * 0x10000 + uVar11 + (int)((ulonglong)uVar4 >> 0x20) +
                      (uVar10 >> 2) + uVar10 * 0x40 + (uVar2 << 0x13 | uVar2 & 0xffff) +
                      (uVar11 >> 4) + 0x9e3779b9 ^ uVar10) & (longlong)(int)param_1[9] - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar3 + 0x18 + lVar5) = iVar8;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x14 + lVar5) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar8 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar6 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147681f54 FUN_147681f54 body=29 status=ok
// SIG undefined FUN_147681f54(void)

undefined8 FUN_147681f54(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147681f8e FUN_147681f8e body=93 status=ok
// SIG undefined FUN_147681f8e(void)

void FUN_147681f8e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a481140;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a4d7f10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147681fec FUN_147681fec body=93 status=ok
// SIG undefined FUN_147681fec(void)

void FUN_147681fec(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a481140;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a4d7f10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14768204a FUN_14768204a body=126 status=ok
// SIG undefined FUN_14768204a(void)

void FUN_14768204a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a481140;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a4d7f10;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001476820b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1476820d6 FUN_1476820d6 body=21 status=ok
// SIG undefined FUN_1476820d6(void)

undefined8 FUN_1476820d6(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1476820ec FUN_1476820ec body=410 status=ok
// SIG undefined FUN_1476820ec(void)

longlong * FUN_1476820ec(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147682288();
  if (*param_2 != 0) goto LAB_14768211a;
  plVar3 = (longlong *)FUN_14001cc68(0xe8);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a4d7f80;
  plVar4 = plVar3 + 2;
  memset(plVar4,0,0xd8);
  FUN_1476823f6(plVar4);
  local_40 = plVar4;
  local_38 = plVar3;
  FUN_1476835c6(&local_40,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_2 = 0x10;
    plVar4 = (longlong *)param_2[1];
    if (plVar4 != (longlong *)0x0) {
      param_2[1] = 0;
LAB_14768224c:
      LOCK();
      plVar3 = plVar4 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x00014768223c:
        if (iVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_2 = (longlong)plVar4;
    plVar4 = (longlong *)param_2[1];
    if (plVar3 == plVar4) {
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar4 = plVar3;
        goto joined_r0x00014768223c;
      }
    }
    else {
      param_2[1] = (longlong)plVar3;
      if (plVar4 != (longlong *)0x0) goto LAB_14768224c;
    }
  }
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
  plVar4 = (longlong *)*param_2;
  (**(code **)(*plVar4 + 0x10))(plVar4,param_3,param_1);
  local_48 = param_2[1];
  if (local_48 != 0) {
    LOCK();
    *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
    UNLOCK();
  }
  local_50 = plVar4;
  FUN_14768233c(param_1,param_3,&local_50);
LAB_14768211a:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147682288 FUN_147682288 body=179 status=ok
// SIG undefined FUN_147682288(void)

undefined8 * FUN_147682288(longlong param_1,undefined8 *param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar3 = *(uint *)(param_1 + 0xf0);
  uVar8 = (ulonglong)uVar3;
  lVar4 = *(longlong *)(param_1 + 0xe8);
  uVar11 = 0;
  if (0 < (int)uVar3) {
    do {
      uVar10 = (int)(uVar8 >> 1) + uVar11;
      uVar9 = (uint)uVar8;
      if (*(uint *)(lVar4 + (ulonglong)uVar10 * 0x18) < param_3) {
        uVar11 = uVar10 + (uVar9 & 1);
      }
      uVar8 = uVar8 >> 1;
    } while (1 < uVar9);
  }
  if (((int)uVar11 < (int)uVar3) && (*(uint *)(lVar4 + (ulonglong)uVar11 * 0x18) <= param_3)) {
    lVar4 = lVar4 + (ulonglong)uVar11 * 0x18;
    puVar7 = (undefined8 *)(lVar4 + 8);
    if (puVar7 != (undefined8 *)0x0) {
      uVar6 = *puVar7;
      plVar5 = *(longlong **)(lVar4 + 0x10);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        *param_2 = uVar6;
        param_2[1] = plVar5;
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) {
          return param_2;
        }
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 != 0) {
          return param_2;
        }
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return param_2;
      }
      goto LAB_1476822e2;
    }
  }
  uVar6 = 0;
LAB_1476822e2:
  *param_2 = uVar6;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 14768233c FUN_14768233c body=184 status=ok
// SIG undefined FUN_14768233c(void)

void FUN_14768233c(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_3;
  local_28 = (longlong *)param_3[1];
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  local_1c = param_2;
  FUN_140dd6482(param_1 + 0xe8,&local_1c,&local_30);
  plVar3 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = (longlong *)param_3[1];
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476823f6 FUN_1476823f6 body=120 status=ok
// SIG undefined FUN_1476823f6(void)

void FUN_1476823f6(undefined8 *param_1)

{
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000000;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *param_1 = &PTR_FUN_14a4d7fa0;
  return;
}



// FUNCTION 14768246e FUN_14768246e body=9 status=ok
// SIG undefined FUN_14768246e(void)

void FUN_14768246e(longlong param_1)

{
  FUN_147682bd6(param_1 + 0x10);
  return;
}



// FUNCTION 147682478 FUN_147682478 body=29 status=ok
// SIG undefined FUN_147682478(void)

undefined8 FUN_147682478(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147682496 FUN_147682496 body=38 status=ok
// SIG undefined FUN_147682496(void)

undefined8 FUN_147682496(undefined8 param_1,int param_2)

{
  FUN_147682bd6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476824e2 FUN_1476824e2 body=82 status=ok
// SIG undefined FUN_1476824e2(void)

void FUN_1476824e2(longlong param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x18;
  uStack_10 = *(undefined4 *)(lVar1 + 8);
  uStack_c = *(undefined4 *)(lVar1 + 0xc);
  local_18 = *param_4;
  FUN_147682c72();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147682536 FUN_147682536 body=924 status=ok
// SIG undefined FUN_147682536(void)

ulonglong FUN_147682536(longlong param_1,int param_2,char param_3,char param_4)

{
  uint uVar1;
  void *pvVar2;
  byte bVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  ulonglong unaff_RBP;
  undefined7 uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    cVar6 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))();
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),3);
    if (cVar6 == '\0') goto LAB_1476825a9;
  }
  uVar10 = (undefined7)(unaff_RBP >> 8);
  if (param_3 == '\x01') {
    if (param_4 == '\0') {
      local_38 = *(ulonglong *)(*(longlong *)(param_1 + 0x68) + 0x10 + (longlong)param_2 * 0x18);
      puVar8 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x18);
      local_48 = *puVar8;
      uStack_44 = puVar8[1];
      uStack_40 = puVar8[2];
      uStack_3c = puVar8[3];
      FUN_147682cf8(param_1 + 0x18);
      FUN_1476834b8(param_1 + 0x68,param_2);
      uVar7 = *(uint *)(param_1 + 0xa8);
      lVar4 = *(longlong *)(param_1 + 0xa0);
      uVar13 = 0;
      uVar12 = uVar7;
      if (0 < (int)uVar7) {
        do {
          uVar1 = (uVar12 >> 1) + uVar13;
          if (*(int *)(lVar4 + (ulonglong)uVar1 * 8) < param_2) {
            uVar13 = uVar1 + (uVar12 & 1);
          }
          bVar5 = 1 < uVar12;
          uVar12 = uVar12 >> 1;
        } while (bVar5);
      }
      if (((int)uVar13 < (int)uVar7) && (*(int *)(lVar4 + (ulonglong)uVar13 * 8) <= param_2)) {
        if (~uVar13 + uVar7 != 0) {
          pvVar2 = (void *)(lVar4 + (ulonglong)uVar13 * 8);
          memmove(pvVar2,(void *)((longlong)pvVar2 + 8),(longlong)(int)(~uVar13 + uVar7) << 3);
          uVar7 = *(uint *)(param_1 + 0xa8);
        }
        *(uint *)(param_1 + 0xa8) = uVar7 - 1;
LAB_1476828c9:
        FUN_14768352a(param_1 + 0xa0);
      }
LAB_14768270e:
      if ((local_38 & 0x100000000) != 0) {
        FUN_1476833ea(&local_48,(undefined4)local_38);
      }
      unaff_RBP = 0;
      goto LAB_1476825a9;
    }
    unaff_RBP = CONCAT71(uVar10,3);
    if ((*(byte *)(*(longlong *)(param_1 + 0x68) + 0x14 + (longlong)param_2 * 0x18) & 1) == 0)
    goto LAB_1476825a9;
    puVar8 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x18);
  }
  else {
    uVar7 = *(uint *)(param_1 + 0xa8);
    lVar4 = *(longlong *)(param_1 + 0xa0);
    uVar9 = 0;
    if (0 < (int)uVar7) {
      uVar11 = (ulonglong)uVar7;
      uVar12 = uVar7;
      do {
        uVar11 = uVar11 >> 1;
        uVar13 = (uint)uVar11 + (int)uVar9;
        if (*(int *)(lVar4 + (ulonglong)uVar13 * 8) < param_2) {
          uVar9 = (ulonglong)(uVar13 + (uVar12 & 1));
        }
        bVar5 = 1 < uVar12;
        uVar12 = (uint)uVar11;
      } while (bVar5);
    }
    if ((((int)uVar9 < (int)uVar7) && (*(int *)(lVar4 + uVar9 * 8) <= param_2)) &&
       (puVar8 = (undefined4 *)(lVar4 + uVar9 * 8 + 4), puVar8 != (undefined4 *)0x0)) {
      FUN_1476833ea((longlong)param_2 * 0x18 + *(longlong *)(param_1 + 0x68),*puVar8);
      uVar7 = *(uint *)(param_1 + 0xa8);
      lVar4 = *(longlong *)(param_1 + 0xa0);
      uVar13 = 0;
      uVar12 = uVar7;
      if (0 < (int)uVar7) {
        do {
          uVar1 = (uVar12 >> 1) + uVar13;
          if (*(int *)(lVar4 + (ulonglong)uVar1 * 8) < param_2) {
            uVar13 = uVar1 + (uVar12 & 1);
          }
          bVar5 = 1 < uVar12;
          uVar12 = uVar12 >> 1;
        } while (bVar5);
      }
      unaff_RBP = CONCAT71(uVar10,1);
      if (((int)uVar13 < (int)uVar7) && (*(int *)(lVar4 + (ulonglong)uVar13 * 8) <= param_2)) {
        if (~uVar13 + uVar7 != 0) {
          pvVar2 = (void *)(lVar4 + (ulonglong)uVar13 * 8);
          memmove(pvVar2,(void *)((longlong)pvVar2 + 8),(longlong)(int)(~uVar13 + uVar7) << 3);
          uVar7 = *(uint *)(param_1 + 0xa8);
        }
        *(uint *)(param_1 + 0xa8) = uVar7 - 1;
        FUN_14768352a(param_1 + 0xa0);
      }
      goto LAB_1476825a9;
    }
    unaff_RBP = CONCAT71(uVar10,1);
    if (param_4 == '\x01') {
      bVar3 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x14 + (longlong)param_2 * 0x18);
      if ((bVar3 & 1) == 0) goto LAB_1476825a9;
      puVar8 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x18);
      *(byte *)(puVar8 + 5) = bVar3 | 2;
    }
    else {
      if (param_4 != '\0') goto LAB_1476825a9;
      puVar8 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x18);
      if ((*(byte *)(puVar8 + 5) & 2) == 0) {
        local_38 = *(ulonglong *)(puVar8 + 4);
        local_48 = *puVar8;
        uStack_44 = puVar8[1];
        uStack_40 = puVar8[2];
        uStack_3c = puVar8[3];
        FUN_147682cf8(param_1 + 0x18);
        FUN_1476834b8(param_1 + 0x68,param_2);
        uVar7 = *(uint *)(param_1 + 0xa8);
        lVar4 = *(longlong *)(param_1 + 0xa0);
        uVar13 = 0;
        uVar12 = uVar7;
        if (0 < (int)uVar7) {
          do {
            uVar1 = (uVar12 >> 1) + uVar13;
            if (*(int *)(lVar4 + (ulonglong)uVar1 * 8) < param_2) {
              uVar13 = uVar1 + (uVar12 & 1);
            }
            bVar5 = 1 < uVar12;
            uVar12 = uVar12 >> 1;
          } while (bVar5);
        }
        if (((int)uVar13 < (int)uVar7) && (*(int *)(lVar4 + (ulonglong)uVar13 * 8) <= param_2)) {
          if (~uVar13 + uVar7 != 0) {
            pvVar2 = (void *)(lVar4 + (ulonglong)uVar13 * 8);
            memmove(pvVar2,(void *)((longlong)pvVar2 + 8),(longlong)(int)(~uVar13 + uVar7) << 3);
            uVar7 = *(uint *)(param_1 + 0xa8);
          }
          *(uint *)(param_1 + 0xa8) = uVar7 - 1;
          goto LAB_1476828c9;
        }
        goto LAB_14768270e;
      }
      if ((*(byte *)(puVar8 + 5) & 1) == 0) goto LAB_1476825a9;
    }
  }
  FUN_1476833ea(puVar8,puVar8[4]);
LAB_1476825a9:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 1476828d4 FUN_1476828d4 body=444 status=ok
// SIG undefined FUN_1476828d4(void)

undefined8 FUN_1476828d4(longlong param_1,int param_2,char param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  byte *pbVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = *(longlong **)(param_1 + 0xb8);
  lVar14 = (longlong)param_2;
  if (plVar4 != (longlong *)0x0) {
    cVar7 = (**(code **)(*plVar4 + 8))(plVar4,lVar14 * 0x18 + *(longlong *)(param_1 + 0x68));
    uVar9 = 3;
    if (cVar7 == '\0') goto LAB_14768297d;
  }
  if (param_3 == '\x01') {
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + lVar14 * 0x18);
    local_38 = *puVar1;
    uStack_34 = puVar1[1];
    uStack_30 = puVar1[2];
    uStack_2c = puVar1[3];
    FUN_147682cf8(param_1 + 0x18);
    FUN_1476834b8(param_1 + 0x68,param_2);
    uVar8 = *(uint *)(param_1 + 0xa8);
    uVar10 = (ulonglong)uVar8;
    lVar14 = *(longlong *)(param_1 + 0xa0);
    uVar13 = 0;
    if (0 < (int)uVar8) {
      do {
        uVar12 = (int)(uVar10 >> 1) + uVar13;
        uVar11 = (uint)uVar10;
        if (*(int *)(lVar14 + (ulonglong)uVar12 * 8) < param_2) {
          uVar13 = uVar12 + (uVar11 & 1);
        }
        uVar10 = uVar10 >> 1;
      } while (1 < uVar11);
    }
    if (((int)uVar13 < (int)uVar8) && (*(int *)(lVar14 + (ulonglong)uVar13 * 8) <= param_2)) {
      if (~uVar13 + uVar8 != 0) {
        pvVar2 = (void *)(lVar14 + (ulonglong)uVar13 * 8);
        memmove(pvVar2,(void *)((longlong)pvVar2 + 8),(longlong)(int)(~uVar13 + uVar8) << 3);
        uVar8 = *(uint *)(param_1 + 0xa8);
      }
      *(uint *)(param_1 + 0xa8) = uVar8 - 1;
      FUN_14768352a(param_1 + 0xa0);
    }
    uVar9 = 0;
  }
  else {
    uVar8 = *(uint *)(param_1 + 0xa8);
    lVar5 = *(longlong *)(param_1 + 0xa0);
    uVar11 = 0;
    uVar13 = uVar8;
    if (0 < (int)uVar8) {
      do {
        uVar12 = (uVar13 >> 1) + uVar11;
        if (*(int *)(lVar5 + (ulonglong)uVar12 * 8) < param_2) {
          uVar11 = uVar12 + (uVar13 & 1);
        }
        bVar6 = 1 < uVar13;
        uVar13 = uVar13 >> 1;
      } while (bVar6);
    }
    if (((int)uVar11 < (int)uVar8) && (*(int *)(lVar5 + (ulonglong)uVar11 * 8) <= param_2)) {
      if (~uVar11 + uVar8 != 0) {
        pvVar2 = (void *)(lVar5 + (ulonglong)uVar11 * 8);
        memmove(pvVar2,(void *)((longlong)pvVar2 + 8),(longlong)(int)(~uVar11 + uVar8) << 3);
        uVar8 = *(uint *)(param_1 + 0xa8);
      }
      *(uint *)(param_1 + 0xa8) = uVar8 - 1;
      FUN_14768352a(param_1 + 0xa0);
    }
    else {
      pbVar3 = (byte *)(*(longlong *)(param_1 + 0x68) + 0x14 + lVar14 * 0x18);
      *pbVar3 = *pbVar3 | 2;
    }
    uVar9 = 1;
  }
LAB_14768297d:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 147682a94 FUN_147682a94 body=38 status=ok
// SIG undefined FUN_147682a94(void)

undefined8 FUN_147682a94(undefined8 param_1,int param_2)

{
  FUN_147682bd6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147682aba FUN_147682aba body=52 status=ok
// SIG undefined FUN_147682aba(void)

void FUN_147682aba(longlong *param_1)

{
  FUN_147682aee();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147682aee FUN_147682aee body=89 status=ok
// SIG undefined FUN_147682aee(void)

void FUN_147682aee(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1405357e8(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 147682b48 FUN_147682b48 body=52 status=ok
// SIG undefined FUN_147682b48(void)

void FUN_147682b48(longlong *param_1)

{
  FUN_147682b7c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147682b7c FUN_147682b7c body=89 status=ok
// SIG undefined FUN_147682b7c(void)

void FUN_147682b7c(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140411364(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 147682bd6 FUN_147682bd6 body=155 status=ok
// SIG undefined FUN_147682bd6(void)

void FUN_147682bd6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a4d7ff0;
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
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_147682aba(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_147682b48(param_1 + 3);
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147682c65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 147682c72 FUN_147682c72 body=133 status=ok
// SIG undefined FUN_147682c72(void)

void FUN_147682c72(longlong param_1,int param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  int local_3c;
  undefined4 *local_38;
  int *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x18);
  local_58 = *puVar1;
  uStack_50 = puVar1[1];
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x18);
  *puVar2 = *param_3;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  local_3c = param_2;
  FUN_147682cf8(param_1 + 0x18);
  local_38 = param_3;
  local_30 = &local_3c;
  FUN_147682eac(param_1 + 0x18,local_24);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147682cf8 FUN_147682cf8 body=205 status=ok
// SIG undefined FUN_147682cf8(void)

void FUN_147682cf8(longlong *param_1,int *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = *(undefined8 *)(param_2 + 2);
    uVar4 = (uint)((ulonglong)uVar1 >> 0x10);
    uVar8 = (uint)uVar1 & 0xffff;
    uVar5 = FUN_144a78877(*param_2,param_2[1]);
    iVar6 = FUN_144a78877(uVar5,((uint)uVar1 << 0x10 | uVar8) + (int)((ulonglong)uVar1 >> 0x20) +
                                (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar8 >> 4));
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar7 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar6 != -1) {
      lVar2 = *param_1;
      do {
        lVar3 = (longlong)iVar6 * 0x1c;
        if (((*(int *)(lVar2 + lVar3) == *param_2) && (*(int *)(lVar2 + 4 + lVar3) == param_2[1]))
           && (*(longlong *)(lVar2 + lVar3 + 8) == *(longlong *)(param_2 + 2))) {
          FUN_147682dc6(param_1);
          return;
        }
        iVar6 = *(int *)(lVar2 + lVar3 + 0x14);
      } while (iVar6 != -1);
    }
  }
  return;
}



// FUNCTION 147682dc6 FUN_147682dc6 body=101 status=ok
// SIG undefined FUN_147682dc6(void)

void FUN_147682dc6(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x18 + (longlong)param_2 * 0x1c);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x14 + lVar5 * 0x1c);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x1c + 0x14);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x1c + 0x14);
  FUN_147682e2c();
  return;
}



// FUNCTION 147682e2c FUN_147682e2c body=128 status=ok
// SIG undefined FUN_147682e2c(void)

void FUN_147682e2c(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x1c) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1c) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1c + 4) = uVar4;
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



// FUNCTION 147682eac FUN_147682eac body=359 status=ok
// SIG undefined FUN_147682eac(void)

undefined4 * FUN_147682eac(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147683014(param_1,local_48);
  puVar1 = (undefined4 *)*param_3;
  puVar2 = (undefined4 *)param_3[1];
  uVar7 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *local_40 = *puVar1;
  local_40[1] = uVar7;
  local_40[2] = uVar4;
  local_40[3] = uVar5;
  local_40[4] = *puVar2;
  local_40[5] = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = *(undefined8 *)(local_40 + 2);
  uVar8 = (uint)((ulonglong)uVar3 >> 0x10);
  uVar9 = (uint)uVar3 & 0xffff;
  uVar7 = FUN_144a78877(*local_40,local_40[1]);
  uVar8 = FUN_144a78877(uVar7,((uint)uVar3 << 0x10 | uVar9) + (int)((ulonglong)uVar3 >> 0x20) +
                              (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar9 >> 4));
  cVar6 = FUN_147683110(param_1,uVar8,local_40,&local_4c);
  uVar7 = local_4c;
  if (cVar6 == '\0') {
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
      local_40[6] = uVar8;
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      local_40[5] = *(undefined4 *)
                     (lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
      ;
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar11;
      FUN_1476831e2(param_1);
    }
  }
  *param_2 = uVar7;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147683014 FUN_147683014 body=251 status=ok
// SIG undefined FUN_147683014(void)

int * FUN_147683014(longlong *param_1,int *param_2)

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
      FUN_1406245f8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x1c);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x1c) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x1c + *param_1;
  return param_2;
}



// FUNCTION 147683110 FUN_147683110 body=98 status=ok
// SIG undefined FUN_147683110(void)

undefined8 FUN_147683110(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar7 = FUN_147683172(), iVar7 != -1)) {
    lVar2 = *param_1;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    *(undefined4 *)(lVar2 + 0x10 + (longlong)iVar7 * 0x1c) = param_3[4];
    puVar1 = (undefined4 *)(lVar2 + (longlong)iVar7 * 0x1c);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_147682e2c(param_1,*param_4);
    *param_4 = iVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 147683172 FUN_147683172 body=111 status=ok
// SIG undefined FUN_147683172(void)

int FUN_147683172(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar3 = (longlong)iVar1 * 0x1c;
        if (((*(int *)(lVar2 + lVar3) == *param_3) && (*(int *)(lVar2 + 4 + lVar3) == param_3[1]))
           && (*(longlong *)(lVar2 + lVar3 + 8) == *(longlong *)(param_3 + 2))) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x14 + lVar3);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1476831e2 FUN_1476831e2 body=518 status=ok
// SIG undefined FUN_1476831e2(void)

void FUN_1476831e2(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint uVar11;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)((longlong)plVar10 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar2 != uVar11);
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
    uVar4 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar6 = local_78._4_4_;
      local_78 = uVar4;
      do {
        lVar3 = *local_90;
        lVar5 = (longlong)iVar6 * 0x1c;
        uVar4 = *(undefined8 *)(lVar3 + 8 + lVar5);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar11 = (uint)uVar4 & 0xffff;
        uVar7 = FUN_144a78877(*(undefined4 *)(lVar3 + lVar5),*(undefined4 *)(lVar3 + 4 + lVar5));
        iVar8 = FUN_144a78877(uVar7,((uint)uVar4 << 0x10 | uVar11) + (int)((ulonglong)uVar4 >> 0x20)
                                    + (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar11 >> 4));
        uVar9 = (longlong)iVar8 & (longlong)(int)param_1[9] - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar3 + 0x18 + lVar5) = iVar8;
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x14 + lVar5) =
             *(undefined4 *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(int *)((longlong)plVar10 + ((longlong)iVar8 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar6 = local_78._4_4_;
        uVar4 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar4;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476833ea FUN_1476833ea body=204 status=ok
// SIG undefined FUN_1476833ea(void)

void FUN_1476833ea(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  wchar_t *_Str;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_1;
  uStack_3c = param_1[1];
  lVar2 = FUN_14479d2ce();
  if (lVar2 != 0) {
    lVar3 = FUN_144a3a302();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      FUN_1400021e4(param_1 + 2,&local_40);
      if (local_38 == 0) {
        _Str = L"";
      }
      else {
        _Str = (wchar_t *)CONCAT44(uStack_3c,local_40);
      }
      iVar1 = _wtoi(_Str);
      FUN_1479ee3aa(lVar2,iVar1,param_2);
      if (CONCAT44(uStack_3c,local_40) != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476834b8 FUN_1476834b8 body=114 status=ok
// SIG undefined FUN_1476834b8(void)

void FUN_1476834b8(longlong *param_1,int param_2)

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



// FUNCTION 14768352a FUN_14768352a body=62 status=ok
// SIG undefined FUN_14768352a(void)

void FUN_14768352a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147683568(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 147683568 FUN_147683568 body=93 status=ok
// SIG undefined FUN_147683568(void)

ulonglong FUN_147683568(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,4);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 1476835c6 FUN_1476835c6 body=167 status=ok
// SIG undefined FUN_1476835c6(void)

void FUN_1476835c6(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_147683641;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_147683641;
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
LAB_147683641:
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
                    /* WARNING: Could not recover jumptable at 0x000147683661. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14768366e FUN_14768366e body=42 status=ok
// SIG undefined FUN_14768366e(void)

longlong FUN_14768366e(longlong param_1,int param_2)

{
  FUN_147683aae(param_1 + 8);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14768369a FUN_14768369a body=256 status=ok
// SIG undefined FUN_14768369a(void)

void FUN_14768369a(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = FUN_14009d2a0();
  lVar3 = (longlong)(int)param_2[1] * 0x28 + *(longlong *)(*param_2 + 8);
  uVar1 = *(ushort *)(lVar2 + 0x11a);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar3 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar3 + 0x20) < (int)(uint)uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(lVar3 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = *(ushort *)(lVar2 + 0x11c);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar3 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar3 + 0x20) < (int)(uint)uVar1)) {
    bVar5 = false;
  }
  else {
    bVar5 = (*(uint *)(lVar3 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  if (bVar4) {
    local_38 = (undefined4)*param_2;
    uStack_34 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_30 = (undefined4)param_2[1];
    uStack_2c = *(undefined4 *)((longlong)param_2 + 0xc);
    local_58 = param_5;
    FUN_147683b74(param_1,&local_38,param_3,param_4);
  }
  else if (bVar5) {
    local_48 = (undefined4)*param_2;
    uStack_44 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_40 = (undefined4)param_2[1];
    uStack_3c = *(undefined4 *)((longlong)param_2 + 0xc);
    local_58 = param_5;
    FUN_147683d1e(param_1,&local_48,param_3,param_4);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14768379c FUN_14768379c body=784 status=ok
// SIG undefined FUN_14768379c(void)

void FUN_14768379c(longlong param_1,char param_2,undefined8 param_3)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  undefined1 *puVar6;
  uint *puVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  longlong local_c0;
  longlong local_b8;
  ulonglong local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_9c [4];
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_2 != '\0') {
    puVar1 = (uint *)(param_1 + 0x58);
    puVar7 = *(uint **)(param_1 + 0x68);
    if (*(uint **)(param_1 + 0x68) == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar8 = *(int *)(param_1 + 0x70) + 0x1f;
    if (0x1f < uVar8) {
      plVar2 = (longlong *)(param_1 + 8);
      lVar9 = 0;
      do {
        uVar3 = *puVar7;
        if (uVar3 != 0) {
          iVar10 = 0;
          if (uVar3 != 0) {
            for (; (uVar3 >> iVar10 & 1) == 0; iVar10 = iVar10 + 1) {
            }
          }
          if (iVar10 + 1 != (int)lVar9 && iVar10 - (int)lVar9 < *(int *)(param_1 + 0x70)) {
            local_78 = 0;
            iVar10 = 0;
            local_70 = 0;
            local_98 = 0;
            uStack_90 = 0;
            local_6c = 0xffffffff00000080;
            local_64 = 0;
            local_58 = (undefined1 *)0x0;
            local_50 = 0;
            lVar9 = param_1 + 0x18;
            local_c0 = 0x100000000;
            local_b0 = 0xffffffff;
            local_a8 = 0;
            local_b8 = lVar9;
            if (*(int *)(param_1 + 0x30) != 0) {
              FUN_1449c0562(&local_c0);
              iVar10 = *(int *)(param_1 + 0x30);
            }
            local_d0 = local_b0;
            uVar4 = local_d0;
            local_c8 = local_a8;
            local_c4 = local_a4;
            local_e0 = (uint *)local_c0;
            local_d8 = local_b8;
            local_d0._4_4_ = (int)(local_b0 >> 0x20);
            iVar5 = local_d0._4_4_;
            local_e8 = plVar2;
            if ((local_d0._4_4_ != iVar10) || (local_d0 = uVar4, local_b8 != lVar9)) {
              do {
                local_d0 = uVar4;
                local_b8 = *local_e8 + (longlong)iVar5 * 0x1c;
                local_c0 = *local_e8 + (longlong)iVar5 * 0x1c + 0x10;
                FUN_14768473c(&local_98,local_9c);
                local_d0 = CONCAT44(local_d0._4_4_,(uint)local_d0 & ~local_e0._4_4_);
                FUN_1449c0562(&local_e0);
                iVar5 = local_d0._4_4_;
                uVar4 = local_d0;
              } while (local_e8 != plVar2 || (local_d8 != lVar9 || local_d0._4_4_ != iVar10));
            }
            local_e8 = (longlong *)0x100000000;
            local_d8 = 0xffffffff;
            local_d0 = local_d0 & 0xffffffff00000000;
            local_d8._4_4_ = 0;
            local_e0 = puVar1;
            if (*(int *)(param_1 + 0x70) != 0) {
              FUN_1449c0562(&local_e8);
            }
            if ((int)local_d8._4_4_ < (int)local_e0[6]) {
              uVar8 = local_d8._4_4_;
              do {
                if ((int)uStack_90 != local_64) {
                  puVar6 = local_58;
                  if (local_58 == (undefined1 *)0x0) {
                    puVar6 = local_60;
                  }
                  iVar10 = *(int *)(puVar6 + (ulonglong)(local_50 - 1U & uVar8) * 4);
                  while (iVar10 != -1) {
                    lVar9 = local_98 + (longlong)iVar10 * 0x1c;
                    if (*(uint *)(local_98 + (longlong)iVar10 * 0x1c) == uVar8) {
                      if (lVar9 + 4 != 0 && lVar9 != 0) {
                        FUN_147684c18(plVar2,lVar9 + 4);
                        uVar8 = local_d8._4_4_;
                      }
                      break;
                    }
                    iVar10 = *(int *)(lVar9 + 0x14);
                  }
                }
                FUN_1410928e4(param_3,uVar8);
                local_d8 = CONCAT44(local_d8._4_4_,(uint)local_d8 & ~local_e8._4_4_);
                FUN_1449c0562(&local_e8);
                uVar8 = local_d8._4_4_;
              } while ((int)local_d8._4_4_ < (int)local_e0[6]);
            }
            *(undefined4 *)(param_1 + 0x70) = 0;
            local_50 = 0;
            if (local_58 != (undefined1 *)0x0) {
              FUN_1400020a8();
            }
            FUN_147684d66(&local_98);
          }
          break;
        }
        lVar9 = lVar9 + -0x20;
        puVar7 = puVar7 + 1;
      } while ((ulonglong)(uVar8 & 0xffffffe0) + lVar9 != 0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147683aae FUN_147683aae body=56 status=ok
// SIG undefined FUN_147683aae(void)

void FUN_147683aae(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_147683ae6(param_1);
  return;
}



// FUNCTION 147683ae6 FUN_147683ae6 body=52 status=ok
// SIG undefined FUN_147683ae6(void)

void FUN_147683ae6(longlong *param_1)

{
  FUN_147683b1a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147683b1a FUN_147683b1a body=89 status=ok
// SIG undefined FUN_147683b1a(void)

void FUN_147683b1a(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140411364(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 147683b74 FUN_147683b74 body=398 status=ok
// SIG undefined FUN_147683b74(void)

void FUN_147683b74(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  longlong *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    lVar5 = *(longlong *)(lVar3 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)(lVar5 + 0x1e) == *(short *)(param_1 + 0x7c)) goto LAB_147683bc5;
      lVar5 = lVar5 + 0x20;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  lVar5 = 0;
LAB_147683bc5:
  iVar1 = *(int *)(lVar3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(lVar5 + 8));
  }
  LOCK();
  *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1;
  UNLOCK();
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    puVar6 = *(undefined8 **)(lVar3 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar6 + 0x1e) == *(short *)(param_1 + 0x7a)) goto LAB_147683bf1;
      puVar6 = puVar6 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  puVar6 = (undefined8 *)0x0;
LAB_147683bf1:
  iVar2 = *(int *)(lVar3 + 0x14);
  if (iVar2 == 1) {
    local_60 = param_2;
    AcquireSRWLockShared((PSRWLOCK)(puVar6 + 1));
    param_2 = local_60;
  }
  LOCK();
  *(int *)(puVar6 + 3) = *(int *)(puVar6 + 3) + 1;
  UNLOCK();
  local_70 = *puVar6;
  local_58 = (undefined4)*param_2;
  uStack_54 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_50 = (undefined4)param_2[1];
  uStack_4c = *(undefined4 *)((longlong)param_2 + 0xc);
  local_78 = param_4;
  FUN_147683e54(param_1 + 8,param_5,&local_58,param_3);
  if (puVar6 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar6 + 3) = *(int *)(puVar6 + 3) + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(puVar6 + 1));
    }
  }
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147683d1e FUN_147683d1e body=308 status=ok
// SIG undefined FUN_147683d1e(void)

void FUN_147683d1e(longlong param_1,longlong *param_2,longlong param_3,int *param_4,
                  undefined8 param_5)

{
  uint *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar7 = (ulonglong)
          *(ushort *)
           (*(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8) + 0xe);
  local_58 = param_1;
  if (uVar7 != 0) {
    param_1 = param_1 + 0x58;
    uVar8 = 0;
    do {
      local_4a = *(undefined2 *)(param_3 + uVar8 * 2);
      if (((*param_4 != -1) && (param_4[1] != -1)) && ((*(byte *)(param_4 + 2) & 1) == 0)) {
        cVar2 = FUN_140add178(param_5,&local_4a,param_4);
        if (cVar2 != '\0') {
          iVar4 = param_4[1];
          iVar6 = (iVar4 - *(int *)(local_58 + 0x70)) + 1;
          if (0 < iVar6) {
            uVar3 = FUN_144a54ea4(param_1,iVar6);
            FUN_1447c6044(param_1,uVar3,iVar6,0);
            iVar4 = param_4[1];
          }
          lVar5 = *(longlong *)(local_58 + 0x68);
          if (*(longlong *)(local_58 + 0x68) == 0) {
            lVar5 = param_1;
          }
          iVar6 = iVar4 + 0x1f;
          if (-1 < iVar4) {
            iVar6 = iVar4;
          }
          puVar1 = (uint *)(lVar5 + (longlong)(iVar6 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)iVar4 & 0x1f);
        }
        *(byte *)(param_4 + 2) = *(byte *)(param_4 + 2) | 1;
      }
      uVar8 = uVar8 + 1;
      param_4 = param_4 + 3;
    } while (uVar7 != uVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147683e54 FUN_147683e54 body=450 status=ok
// SIG undefined FUN_147683e54(void)

void FUN_147683e54(undefined8 param_1,longlong param_2,longlong *param_3,longlong param_4,
                  undefined8 *param_5,longlong param_6)

{
  ushort uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_98 [36];
  int local_74;
  longlong local_70;
  undefined8 local_64;
  uint local_5c;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = FUN_14038fb82();
  uVar1 = *(ushort *)(lVar5 + 0xf12);
  if (uVar1 != 0xffff) {
    lVar8 = (longlong)(int)param_3[1] * 0x28 + *(longlong *)(*param_3 + 8);
    uVar2 = *(uint *)(lVar8 + 0x20);
    if ((uVar2 != uVar1 && (int)(uint)uVar1 <= (int)uVar2) &&
       ((*(uint *)(lVar8 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0)) {
      lVar8 = *(longlong *)(*(longlong *)(*param_3 + 0x60) + (longlong)(int)param_3[1] * 8);
      uVar1 = *(ushort *)(lVar8 + 0xe);
      if (*(ushort *)(lVar8 + 0xc) != 0) {
        plVar9 = *(longlong **)(lVar8 + 0x28);
        lVar6 = (ulonglong)*(ushort *)(lVar8 + 0xc) << 5;
        do {
          if (*(short *)((longlong)plVar9 + 0x1e) == *(short *)(lVar5 + 0xea)) goto LAB_147683f01;
          plVar9 = plVar9 + 4;
          lVar6 = lVar6 + -0x20;
        } while (lVar6 != 0);
      }
      plVar9 = (longlong *)0x0;
LAB_147683f01:
      local_74 = *(int *)(lVar8 + 0x14);
      if (local_74 == 1) {
        AcquireSRWLockShared((PSRWLOCK)(plVar9 + 1));
      }
      LOCK();
      *(int *)(plVar9 + 3) = (int)plVar9[3] + 1;
      UNLOCK();
      if (uVar1 != 0) {
        local_70 = *plVar9;
        uVar7 = 0;
        do {
          uVar3 = *(undefined8 *)(local_70 + uVar7 * 4);
          local_58 = 0;
          if (*(longlong *)(param_6 + uVar7 * 4) != 0) {
            local_64 = 0;
            FUN_14485c47a(&local_64);
            local_58 = local_64;
          }
          local_50 = uVar3;
          uVar4 = FUN_147684018(param_1,&local_58,param_2);
          local_64 = CONCAT44(uVar4,*(undefined4 *)(param_2 + 8));
          local_5c = local_5c & 0xffffff00;
          FUN_140addf02(param_2,param_4 + uVar7,&local_64);
          *(uint *)(param_5 + 1) = local_5c;
          *param_5 = local_64;
          uVar7 = uVar7 + 2;
          param_5 = (undefined8 *)((longlong)param_5 + 0xc);
        } while ((uint)uVar1 * 2 != uVar7);
      }
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 3) = (int)plVar9[3] + -1;
        UNLOCK();
        if (local_74 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(plVar9 + 1));
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147684018 FUN_147684018 body=253 status=ok
// SIG undefined FUN_147684018(void)

ulonglong FUN_147684018(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  byte bVar4;
  uint uVar5;
  uint *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 0xffffffff;
  uVar5 = FUN_144a78877(*param_2,param_2[1]);
  uVar3 = *(undefined8 *)(param_2 + 2);
  uVar2 = (uint)((ulonglong)uVar3 >> 0x10);
  uVar9 = (uint)uVar3 & 0xffff;
  puVar6 = (uint *)FUN_147684116(param_1,(uVar9 >> 4) +
                                         (uint)uVar3 * 0x10000 + uVar9 +
                                         (int)((ulonglong)uVar3 >> 0x20) +
                                         (uVar5 >> 2) + uVar5 * 0x40 +
                                         (uVar2 << 0x13 | uVar2 & 0xffff) + 0x9e3779b9 ^ uVar5,
                                 param_2,&local_2c);
  uVar2 = *puVar6;
  uVar7 = (ulonglong)uVar2;
  if (uVar7 == 0xffffffff) {
    uVar7 = FUN_14086cb32(*param_3);
    *puVar6 = (uint)uVar7;
  }
  else if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(param_1 + 0x68))) {
    lVar8 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x60);
    }
    bVar4 = (byte)uVar2 & 0x1f;
    puVar1 = (uint *)(lVar8 + (ulonglong)(uVar2 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    uVar7 = (ulonglong)*puVar6;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147684116 FUN_147684116 body=167 status=ok
// SIG undefined FUN_147684116(void)

longlong FUN_147684116(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = FUN_1476841be();
  if (iVar1 != -1) {
    if (*param_1 + (longlong)iVar1 * 0x1c != 0) {
      lVar2 = (longlong)iVar1 * 0x1c + *param_1;
      goto LAB_147684163;
    }
  }
  local_40 = param_3;
  local_38 = param_4;
  FUN_14768422e(param_1,&local_2c,param_2);
  lVar2 = *param_1 + (longlong)local_2c * 0x1c;
LAB_147684163:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476841be FUN_1476841be body=111 status=ok
// SIG undefined FUN_1476841be(void)

int FUN_1476841be(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar3 = (longlong)iVar1 * 0x1c;
        if (((*(int *)(lVar2 + lVar3) == *param_3) && (*(int *)(lVar2 + 4 + lVar3) == param_3[1]))
           && (*(longlong *)(lVar2 + lVar3 + 8) == *(longlong *)(param_3 + 2))) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x14 + lVar3);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 14768422e FUN_14768422e body=279 status=ok
// SIG undefined FUN_14768422e(void)

undefined4 * FUN_14768422e(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147684346(param_1,local_48);
  puVar1 = (undefined4 *)*param_4;
  puVar2 = (undefined4 *)param_4[1];
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *local_40 = *puVar1;
  local_40[1] = uVar3;
  local_40[2] = uVar4;
  local_40[3] = uVar5;
  local_40[4] = *puVar2;
  local_40[5] = 0xffffffff;
  cVar6 = FUN_147684442(param_1,param_3,local_40,local_48);
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
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      local_40[6] = param_3;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      local_40[5] = *(undefined4 *)
                     (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) *
                               4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_147684524(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147684346 FUN_147684346 body=251 status=ok
// SIG undefined FUN_147684346(void)

int * FUN_147684346(longlong *param_1,int *param_2)

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
      FUN_1406245f8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x1c);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x1c) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x1c + *param_1;
  return param_2;
}



// FUNCTION 147684442 FUN_147684442 body=98 status=ok
// SIG undefined FUN_147684442(void)

undefined8 FUN_147684442(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar7 = FUN_1476841be(), iVar7 != -1)) {
    lVar2 = *param_1;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    *(undefined4 *)(lVar2 + 0x10 + (longlong)iVar7 * 0x1c) = param_3[4];
    puVar1 = (undefined4 *)(lVar2 + (longlong)iVar7 * 0x1c);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_1476844a4(param_1,*param_4);
    *param_4 = iVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 1476844a4 FUN_1476844a4 body=128 status=ok
// SIG undefined FUN_1476844a4(void)

void FUN_1476844a4(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x1c) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1c) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1c + 4) = uVar4;
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



// FUNCTION 147684524 FUN_147684524 body=534 status=ok
// SIG undefined FUN_147684524(void)

void FUN_147684524(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar6 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar5 = (longlong)iVar6 * 0x1c;
        uVar10 = FUN_144a78877(*(undefined4 *)(lVar3 + lVar5),*(undefined4 *)(lVar3 + 4 + lVar5));
        uVar4 = *(undefined8 *)(lVar3 + 8 + lVar5);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar11 = (uint)uVar4 & 0xffff;
        uVar9 = (longlong)
                (int)((uint)uVar4 * 0x10000 + uVar11 + (int)((ulonglong)uVar4 >> 0x20) +
                      (uVar10 >> 2) + uVar10 * 0x40 + (uVar2 << 0x13 | uVar2 & 0xffff) +
                      (uVar11 >> 4) + 0x9e3779b9 ^ uVar10) & (longlong)(int)param_1[9] - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar3 + 0x18 + lVar5) = iVar8;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x14 + lVar5) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar8 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar6 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14768473c FUN_14768473c body=287 status=ok
// SIG undefined FUN_14768473c(void)

undefined4 * FUN_14768473c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14768485c(param_1,local_48);
  puVar1 = (uint *)param_3[1];
  uVar7 = *(uint *)*param_3;
  *local_40 = uVar7;
  uVar6 = puVar1[1];
  uVar2 = puVar1[2];
  uVar3 = puVar1[3];
  local_40[1] = *puVar1;
  local_40[2] = uVar6;
  local_40[3] = uVar2;
  local_40[4] = uVar3;
  local_40[5] = 0xffffffff;
  local_4c = local_48[0];
  cVar5 = FUN_147684958(param_1,uVar7,local_40,&local_4c);
  uVar4 = local_4c;
  if (cVar5 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      local_40[6] = uVar7;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      local_40[5] = *(uint *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                       (longlong)(int)uVar7) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_147684a68(param_1);
    }
  }
  *param_2 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14768485c FUN_14768485c body=251 status=ok
// SIG undefined FUN_14768485c(void)

int * FUN_14768485c(longlong *param_1,int *param_2)

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
      FUN_1406245f8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x1c);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x1c) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x1c + *param_1;
  return param_2;
}



// FUNCTION 147684958 FUN_147684958 body=144 status=ok
// SIG undefined FUN_147684958(void)

undefined8 FUN_147684958(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
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
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x1c);
        if (*(int *)(*param_1 + (longlong)iVar7 * 0x1c) == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          piVar1[4] = param_3[4];
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_1476849e8(iVar2,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[5];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 1476849e8 FUN_1476849e8 body=128 status=ok
// SIG undefined FUN_1476849e8(void)

void FUN_1476849e8(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x1c) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1c) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1c + 4) = uVar4;
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



// FUNCTION 147684a68 FUN_147684a68 body=430 status=ok
// SIG undefined FUN_147684a68(void)

void FUN_147684a68(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
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
  uVar5 = local_58;
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
    uVar5 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar6 = local_58._4_4_;
      local_58 = uVar5;
      do {
        lVar3 = *local_70;
        lVar4 = (longlong)iVar6 * 0x1c;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar4);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x18 + lVar4) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x14 + lVar4) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar6 = local_58._4_4_;
        uVar5 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar5;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147684c18 FUN_147684c18 body=232 status=ok
// SIG undefined FUN_147684c18(void)

void FUN_147684c18(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  uint uVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar6 = FUN_144a78877(*param_2,param_2[1]);
    lVar2 = *(longlong *)(param_2 + 2);
    uVar5 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar8 = (uint)lVar2 & 0xffff;
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar7 +
                    ((longlong)
                     (int)((uVar8 >> 4) +
                           (uint)lVar2 * 0x10000 + uVar8 + (int)((ulonglong)lVar2 >> 0x20) +
                           (uVar6 >> 2) + uVar6 * 0x40 + (uVar5 << 0x13 | uVar5 & 0xffff) +
                           0x9e3779b9 ^ uVar6) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      lVar3 = *param_1;
      do {
        lVar4 = (longlong)iVar1 * 0x1c;
        if (((*(int *)(lVar3 + lVar4) == *param_2) && (*(int *)(lVar3 + 4 + lVar4) == param_2[1]))
           && (*(longlong *)(lVar3 + lVar4 + 8) == lVar2)) {
          FUN_147684d00(param_1);
          return;
        }
        iVar1 = *(int *)(lVar3 + lVar4 + 0x14);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 147684d00 FUN_147684d00 body=101 status=ok
// SIG undefined FUN_147684d00(void)

void FUN_147684d00(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x18 + (longlong)param_2 * 0x1c);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x14 + lVar5 * 0x1c);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x1c + 0x14);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x1c + 0x14);
  FUN_1476844a4();
  return;
}



// FUNCTION 147684d66 FUN_147684d66 body=52 status=ok
// SIG undefined FUN_147684d66(void)

void FUN_147684d66(longlong *param_1)

{
  FUN_147684d9a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147684d9a FUN_147684d9a body=89 status=ok
// SIG undefined FUN_147684d9a(void)

void FUN_147684d9a(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140411364(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 147684df4 FUN_147684df4 body=92 status=ok
// SIG undefined FUN_147684df4(void)

void FUN_147684df4(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(short *)(param_2 + 0x14) != -1) {
    lVar1 = FUN_14009d2a0();
    FUN_1405e0ab4(*param_1 + 0x28,*(undefined2 *)(param_2 + 0x14),*(undefined2 *)(lVar1 + 0x11c));
    *(undefined2 *)(param_2 + 0x14) = 0xffff;
    if (*(longlong *)(param_1[1] + 0x1d0) != 0) {
      FUN_14754610e(*(longlong *)(param_1[1] + 0x1d0),*(undefined4 *)(param_2 + 0x16));
    }
    *(undefined4 *)(param_2 + 0x16) = 0xffff00ff;
  }
  return;
}



// FUNCTION 147684e50 FUN_147684e50 body=63 status=ok
// SIG undefined FUN_147684e50(void)

void FUN_147684e50(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145cd2eb6(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_147681d3c(param_1);
    return;
  }
  FUN_147684e90(param_1);
  FUN_145cd2eb6(param_1);
  return;
}



// FUNCTION 147684e90 FUN_147684e90 body=329 status=ok
// SIG undefined FUN_147684e90(void)

void FUN_147684e90(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x18 + (longlong)iVar4 * 0x1c) * 4) =
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



// FUNCTION 147684fda FUN_147684fda body=184 status=ok
// SIG undefined FUN_147684fda(void)

undefined8 * FUN_147684fda(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[6] = 0x10000000000;
  param_1[0xb] = 0x10000000000;
  param_1[0x12] = 0x10000000000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x17] = 0x10000000000;
  local_32 = *(undefined2 *)param_1;
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_1 + 2,&local_48);
  local_32 = *(undefined2 *)((longlong)param_1 + 2);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_1 + 2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147685094 FUN_147685094 body=85 status=ok
// SIG undefined FUN_147685094(void)

void FUN_147685094(longlong *param_1)

{
  int *piVar1;
  
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[4] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001476850db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1476850ea FUN_1476850ea body=435 status=ok
// SIG undefined FUN_1476850ea(void)

void FUN_1476850ea(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 unaff_RBP;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar7 = (ulonglong)*(ushort *)(param_2 + 0xe);
  lVar1 = *(longlong *)(param_2 + 0x18);
  lVar3 = FUN_14009d2a0();
  if (*(ushort *)(param_2 + 0xc) == 0) {
    uVar6 = 0;
  }
  else {
    lVar4 = *(longlong *)(param_2 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)(lVar4 + 0x1e) == *(short *)(lVar3 + 0x11a)) goto LAB_147685151;
      lVar4 = lVar4 + 0x20;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
    lVar4 = 0;
LAB_147685151:
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),lVar4 != 0);
  }
  lVar3 = FUN_14009d2a0();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    lVar4 = *(longlong *)(param_2 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)(lVar4 + 0x1e) == *(short *)(lVar3 + 0x10a)) {
        if (lVar4 != 0) {
          if (uVar7 != 0) {
            uVar8 = 0;
            do {
              local_60 = 0;
              if (*(longlong *)(param_3 + uVar8 * 8) != 0) {
                local_50 = 0;
                FUN_14485c47a(&local_50);
                local_60 = local_50;
              }
              local_58 = *(undefined8 *)(param_4 + uVar8 * 8);
              uVar2 = FUN_14768529e(param_1,*(undefined2 *)(lVar1 + uVar8 * 2),&local_60,
                                    uVar6 & 0xffffffff);
              *(undefined1 *)
               (*(longlong *)(param_1 + 0xf0) + 0x2c + (ulonglong)((uint)uVar2 * 0x30)) = 1;
              uVar8 = uVar8 + 1;
            } while (uVar7 != uVar8);
          }
          goto LAB_1476851ea;
        }
        break;
      }
      lVar4 = lVar4 + 0x20;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  if (uVar7 != 0) {
    uVar8 = 0;
    do {
      local_60 = 0;
      if (*(longlong *)(param_3 + uVar8 * 8) != 0) {
        local_50 = 0;
        FUN_14485c47a(&local_50);
        local_60 = local_50;
      }
      local_58 = *(undefined8 *)(param_4 + uVar8 * 8);
      FUN_14768529e(param_1,*(undefined2 *)(lVar1 + uVar8 * 2),&local_60,uVar6 & 0xffffffff);
      uVar8 = uVar8 + 1;
    } while (uVar7 != uVar8);
  }
LAB_1476851ea:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14768529e FUN_14768529e body=473 status=ok
// SIG undefined FUN_14768529e(void)

uint FUN_14768529e(longlong param_1,undefined2 param_2,undefined8 param_3,char param_4)

{
  uint *puVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_78 [36];
  ushort local_54;
  undefined2 local_52;
  ushort *local_50;
  ushort *local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_52 = param_2;
  uVar3 = FUN_147685478();
  uVar2 = FUN_1476854e6(param_1,param_3);
  local_54 = uVar2;
  if ((ushort)uVar3 == uVar2) {
    if (param_4 != '\0') {
      lVar5 = param_1 + 0x128;
      iVar6 = ((uint)uVar2 - *(int *)(param_1 + 0x140)) + 1;
      if (0 < iVar6) {
        uVar4 = FUN_144a54ea4(lVar5,iVar6);
        FUN_1447c6044(lVar5,uVar4,iVar6,0);
      }
      if (*(longlong *)(param_1 + 0x138) != 0) {
        lVar5 = *(longlong *)(param_1 + 0x138);
      }
      puVar1 = (uint *)(lVar5 + (ulonglong)(uVar2 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
    }
  }
  else {
    if ((ushort)uVar3 != 0xffff) {
      lVar5 = param_1 + 0x128;
      iVar6 = ((uVar3 & 0xffff) - *(int *)(param_1 + 0x140)) + 1;
      if (0 < iVar6) {
        uVar4 = FUN_144a54ea4(lVar5,iVar6);
        FUN_1447c6044(lVar5,uVar4,iVar6,0);
      }
      if (*(longlong *)(param_1 + 0x138) != 0) {
        lVar5 = *(longlong *)(param_1 + 0x138);
      }
      puVar1 = (uint *)(lVar5 + (ulonglong)((uVar3 & 0xffff) >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)uVar3 & 0x1f);
      FUN_14086b58e(param_1 + 0x50,uVar3,&local_52);
      FUN_140bbeb1c(param_1,&local_52);
    }
    lVar5 = param_1 + 0x128;
    iVar6 = ((uint)uVar2 - *(int *)(param_1 + 0x140)) + 1;
    if (0 < iVar6) {
      uVar4 = FUN_144a54ea4(lVar5,iVar6);
      FUN_1447c6044(lVar5,uVar4,iVar6,0);
    }
    if (*(longlong *)(param_1 + 0x138) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x138);
    }
    puVar1 = (uint *)(lVar5 + (ulonglong)(uVar2 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
    local_50 = &local_52;
    local_48 = &local_54;
    FUN_140bbf6f4(param_1,local_3c,&local_50,0);
    local_50 = &local_54;
    local_48 = &local_52;
    FUN_140bbf5de(param_1 + 0x50,local_3c,&local_50,0);
    uVar3 = (uint)local_54;
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147685478 FUN_147685478 body=109 status=ok
// SIG undefined FUN_147685478(void)

ushort FUN_147685478(longlong *param_1,ushort param_2)

{
  ushort *puVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & (uint)param_2) * 4);
    if (iVar2 != -1) {
      do {
        puVar1 = (ushort *)(*param_1 + (longlong)iVar2 * 0xc);
        if (*puVar1 == param_2) {
          if (puVar1 + 1 == (ushort *)0x0 || puVar1 == (ushort *)0x0) {
            return 0xffff;
          }
          return puVar1[1];
        }
        iVar2 = *(int *)(puVar1 + 2);
      } while (iVar2 != -1);
    }
  }
  return 0xffff;
}



// FUNCTION 1476854e6 FUN_1476854e6 body=285 status=ok
// SIG undefined FUN_1476854e6(void)

ulonglong FUN_1476854e6(longlong param_1,undefined4 *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_88 [46];
  ushort local_5a;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 *local_40;
  ushort *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = FUN_147685604();
  if ((short)uVar3 == -1) {
    local_58 = *param_2;
    uStack_54 = param_2[1];
    uStack_50 = param_2[2];
    uStack_4c = param_2[3];
    FUN_147685722(param_1 + 0xf0,&local_40);
    *(ulonglong *)local_38 = CONCAT44(uStack_54,local_58);
    *(ulonglong *)(local_38 + 4) = CONCAT44(uStack_4c,uStack_50);
    local_38[8] = 0;
    local_38[9] = 0;
    local_38[10] = 0;
    local_38[0xb] = 0;
    local_38[0xc] = 0;
    local_38[0xd] = 0;
    local_38[0xe] = 0;
    local_38[0xf] = 0;
    local_38[0x10] = 0;
    local_38[0x11] = 0;
    local_38[0x12] = 0xffff;
    *(undefined1 *)(local_38 + 0x13) = 0xff;
    local_38[0x14] = 0xffff;
    *(undefined1 *)(local_38 + 0x16) = 0;
    local_5a = (ushort)local_40;
    lVar5 = param_1 + 0x148;
    iVar4 = (((uint)local_40 & 0xffff) - *(int *)(param_1 + 0x160)) + 1;
    if (0 < iVar4) {
      uVar2 = FUN_144a54ea4(lVar5,iVar4);
      FUN_1447c6044(lVar5,uVar2,iVar4,0);
    }
    if (*(longlong *)(param_1 + 0x158) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x158);
    }
    puVar1 = (uint *)(lVar5 + (ulonglong)((uint)local_40 >> 3 & 0x1ffc));
    *puVar1 = *puVar1 | 1 << ((byte)local_40 & 0x1f);
    local_38 = &local_5a;
    local_40 = param_2;
    FUN_147685812(param_1 + 0xa0,&local_58);
    uVar3 = (ulonglong)local_5a;
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147685604 FUN_147685604 body=173 status=ok
// SIG undefined FUN_147685604(void)

undefined2 FUN_147685604(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined2 *puVar7;
  uint uVar8;
  
  uVar4 = FUN_144a78877(*param_2,param_2[1]);
  uVar1 = *(undefined8 *)(param_2 + 2);
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar8 = (uint)uVar1 & 0xffff;
  iVar5 = FUN_1476856b2((longlong *)(param_1 + 0xa0),
                        (uVar8 >> 4) +
                        (uint)uVar1 * 0x10000 + uVar8 + (int)((ulonglong)uVar1 >> 0x20) +
                        (uVar4 >> 2) + uVar4 * 0x40 + (uVar2 << 0x13 | uVar2 & 0xffff) + 0x9e3779b9
                        ^ uVar4,param_2);
  uVar3 = 0xffff;
  if ((iVar5 != -1) &&
     (lVar6 = (longlong)iVar5 * 0x1c + *(longlong *)(param_1 + 0xa0),
     puVar7 = (undefined2 *)(lVar6 + 0x10), puVar7 != (undefined2 *)0x0 && lVar6 != 0)) {
    uVar3 = *puVar7;
  }
  return uVar3;
}



// FUNCTION 1476856b2 FUN_1476856b2 body=111 status=ok
// SIG undefined FUN_1476856b2(void)

int FUN_1476856b2(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar3 = (longlong)iVar1 * 0x1c;
        if (((*(int *)(lVar2 + lVar3) == *param_3) && (*(int *)(lVar2 + 4 + lVar3) == param_3[1]))
           && (*(longlong *)(lVar2 + lVar3 + 8) == *(longlong *)(param_3 + 2))) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x14 + lVar3);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 147685722 FUN_147685722 body=240 status=ok
// SIG undefined FUN_147685722(void)

int * FUN_147685722(longlong *param_1,int *param_2)

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
      FUN_145faae12(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x30);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x30) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x30 + *param_1;
  return param_2;
}



// FUNCTION 147685812 FUN_147685812 body=378 status=ok
// SIG undefined FUN_147685812(void)

undefined4 * FUN_147685812(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14768598e(param_1,local_48);
  puVar1 = (undefined4 *)*param_3;
  puVar2 = (undefined2 *)param_3[1];
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  *local_40 = *puVar1;
  local_40[1] = uVar4;
  local_40[2] = uVar5;
  local_40[3] = uVar6;
  *(undefined2 *)(local_40 + 4) = *puVar2;
  local_40[5] = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = FUN_144a78877(*local_40,local_40[1]);
  uVar3 = *(undefined8 *)(local_40 + 2);
  uVar9 = (uint)((ulonglong)uVar3 >> 0x10);
  uVar13 = (uint)uVar3 & 0xffff;
  uVar8 = (uVar13 >> 4) +
          (uint)uVar3 * 0x10000 + uVar13 + (int)((ulonglong)uVar3 >> 0x20) +
          (uVar8 >> 2) + uVar8 * 0x40 + (uVar9 << 0x13 | uVar9 & 0xffff) + 0x9e3779b9 ^ uVar8;
  cVar7 = FUN_147685a8a(param_1,uVar8,local_40,&local_4c);
  uVar4 = local_4c;
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
      local_40[6] = uVar8;
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      local_40[5] = *(undefined4 *)
                     (lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
      ;
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar11;
      FUN_147681d3c(param_1);
    }
  }
  *param_2 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14768598e FUN_14768598e body=251 status=ok
// SIG undefined FUN_14768598e(void)

int * FUN_14768598e(longlong *param_1,int *param_2)

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
      FUN_1406245f8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x1c);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x1c) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x1c + *param_1;
  return param_2;
}



// FUNCTION 147685a8a FUN_147685a8a body=98 status=ok
// SIG undefined FUN_147685a8a(void)

undefined8 FUN_147685a8a(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar7 = FUN_1476856b2(), iVar7 != -1)) {
    lVar2 = *param_1;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    *(undefined4 *)(lVar2 + 0x10 + (longlong)iVar7 * 0x1c) = param_3[4];
    puVar1 = (undefined4 *)(lVar2 + (longlong)iVar7 * 0x1c);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_147681c78(param_1,*param_4);
    *param_4 = iVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 147685aec FUN_147685aec body=185 status=ok
// SIG undefined FUN_147685aec(void)

void FUN_147685aec(longlong param_1,undefined2 param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_58 [46];
  undefined2 local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2a = param_2;
  uVar2 = FUN_147685478();
  if ((short)uVar2 != -1) {
    uVar6 = uVar2 & 0xffff;
    FUN_14086b58e(param_1 + 0x50,uVar2,&local_2a);
    FUN_140bbeb1c(param_1,&local_2a);
    lVar4 = param_1 + 0x128;
    iVar5 = (uVar6 - *(int *)(param_1 + 0x140)) + 1;
    if (0 < iVar5) {
      uVar3 = FUN_144a54ea4(lVar4,iVar5);
      FUN_1447c6044(lVar4,uVar3,iVar5,0);
    }
    if (*(longlong *)(param_1 + 0x138) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x138);
    }
    puVar1 = (uint *)(lVar4 + (ulonglong)(uVar6 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar6 & 0x1f);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147685ba6 FUN_147685ba6 body=705 status=ok
// SIG undefined FUN_147685ba6(void)

void FUN_147685ba6(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  longlong param_5)

{
  undefined2 uVar1;
  undefined2 uVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_b8 [32];
  undefined4 *local_98;
  longlong local_90;
  undefined2 local_7a;
  longlong local_78;
  int local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = FUN_14009d2a0();
  FUN_14038fb82();
  iVar5 = (int)param_4[1];
  if (iVar5 == 0) goto LAB_147685cfc;
  local_6c = iVar5;
  if (iVar5 < 2) {
    lVar7 = *param_1 + 0x28;
    uVar1 = *(undefined2 *)*param_4;
    cVar4 = FUN_140bbead8(lVar7,uVar1,*(undefined2 *)(local_78 + 0x110));
    if (cVar4 == '\0') goto LAB_147685c44;
    cVar4 = FUN_140bbead8(lVar7,uVar1,*(undefined2 *)(local_78 + 0xf4));
    if (cVar4 != '\0') goto LAB_147685c44;
    if ((iVar5 == 1) && (*(short *)(param_5 + 0x14) == -1)) {
      FUN_14055cd1c(lVar7,uVar1,*(undefined2 *)(local_78 + 0x5a));
      FUN_14768637c(*param_1,param_2,param_3,*(undefined2 *)*param_4);
    }
  }
  else {
LAB_147685c44:
    if (*(short *)(param_5 + 0x14) == -1) {
      lVar7 = *param_1;
      if (*(longlong *)(param_1[1] + 0x1d0) == 0) {
        lVar6 = FUN_147685e68(lVar7);
        lVar7 = param_1[1];
        if ((lVar6 != 0) && (DAT_14c950c29 != 0)) {
          FUN_1456cec3c(lVar6);
        }
        *(longlong *)(lVar7 + 0x1d0) = lVar6;
        FUN_14129a52a(*param_1 + 0x2a0,param_1[1],*(undefined8 *)(param_1[1] + 0x1d0));
        lVar7 = *param_1;
      }
      FUN_14485c47a(param_5,lVar7);
      lVar7 = *(longlong *)(param_1[1] + 0x1d0);
      if ((lVar7 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar7);
      }
      local_50 = 0;
      FUN_14485c47a(&local_50,lVar7);
      *(undefined8 *)(param_5 + 8) = local_50;
      FUN_1457ab9aa(*(undefined8 *)(param_1[1] + 0x1d0),&local_50);
      *(undefined4 *)(param_5 + 0x16) = (undefined4)local_50;
      local_68 = (undefined4)*param_4;
      uStack_64 = *(undefined4 *)((longlong)param_4 + 4);
      uStack_60 = (undefined4)param_4[1];
      uStack_5c = *(undefined4 *)((longlong)param_4 + 0xc);
      local_98 = &local_68;
      local_90 = param_5;
      FUN_147685ecc(*param_1,param_2,param_3,
                    *(undefined2 *)(*(longlong *)(param_1[1] + 0x1d0) + 0x66));
      iVar5 = (int)param_4[1];
    }
    if (iVar5 != 0) {
      local_7a = *(undefined2 *)(*(longlong *)(param_1[1] + 0x1d0) + 0x66);
      lVar7 = *param_4;
      lVar6 = 0;
      do {
        uVar1 = *(undefined2 *)(lVar7 + lVar6);
        lVar3 = *param_1;
        uVar2 = *(undefined2 *)(local_78 + 0x5a);
        cVar4 = FUN_140bbead8(lVar3 + 0x28,uVar1,uVar2);
        if (cVar4 == '\0') {
          FUN_147686232(lVar3 + 0x28,uVar1,uVar2,param_5 + 0x16);
        }
        else {
          FUN_1476862f4();
        }
        FUN_1405e0ab4(*param_1 + 0x28,uVar1,local_7a);
        lVar6 = lVar6 + 2;
      } while ((longlong)iVar5 * 2 != lVar6);
    }
  }
  *(int *)(param_5 + 0x10) = local_6c;
LAB_147685cfc:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147685e68 FUN_147685e68 body=98 status=ok
// SIG undefined FUN_147685e68(void)

void FUN_147685e68(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14099c56c();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_14009ee5c(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147685ecc FUN_147685ecc body=869 status=ok
// SIG undefined FUN_147685ecc(void)

void FUN_147685ecc(longlong param_1,ulonglong param_2,undefined8 param_3,undefined2 param_4,
                  longlong *param_5,longlong param_6)

{
  double *pdVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined **_Str;
  byte bVar6;
  bool bVar7;
  longlong lVar8;
  bool bVar9;
  float fVar10;
  undefined1 auStack_148 [38];
  undefined2 local_122;
  ulonglong local_120;
  ulonglong local_118;
  longlong local_110;
  longlong local_108;
  undefined2 local_fa;
  undefined8 local_f8 [5];
  undefined8 local_d0;
  undefined **local_c8;
  int local_c0;
  double *local_b8;
  undefined1 local_b0;
  undefined2 local_a8;
  undefined4 local_a6;
  undefined1 local_a2;
  undefined2 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  uint local_88;
  double local_80;
  undefined1 local_78;
  undefined2 local_70;
  undefined2 local_6e;
  undefined2 local_6c;
  undefined2 local_6a;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_120 = param_2 >> 0x20;
  local_118 = param_2;
  local_f8[0] = param_3;
  local_108 = FUN_14009d2a0();
  lVar3 = FUN_14038fb82();
  lVar4 = param_5[1];
  if ((longlong)(int)lVar4 == 0) {
    fVar10 = 0.0;
  }
  else {
    lVar5 = *param_5;
    fVar10 = 0.0;
    bVar7 = false;
    lVar8 = 0;
    local_122 = param_4;
    local_110 = param_1;
    do {
      FUN_1475db864(param_1 + 0x28,&local_c8,*(undefined2 *)(lVar5 + lVar8),
                    *(undefined2 *)(lVar3 + 0xb6));
      pdVar1 = local_b8;
      if (local_b8 != (double *)0x0) {
        fVar10 = (float)*local_b8;
        bVar7 = true;
      }
      if (local_c8 != (undefined **)0x0) {
        LOCK();
        *(int *)(local_c8 + 3) = *(int *)(local_c8 + 3) + -1;
        UNLOCK();
        if (local_c0 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(local_c8 + 1));
        }
      }
    } while ((pdVar1 == (double *)0x0) &&
            (bVar9 = (longlong)(int)lVar4 * 2 + -2 != lVar8, lVar8 = lVar8 + 2, bVar9));
    uVar2 = 0x10000;
    param_1 = local_110;
    param_4 = local_122;
    if (bVar7) goto LAB_147685fbd;
  }
  bVar6 = 0;
  local_c8 = (undefined **)CONCAT44((int)local_120,(int)local_118);
  lVar4 = FUN_14479d2ce();
  if (lVar4 != 0) {
    lVar5 = FUN_144a3a302();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) {
      FUN_1400021e4(local_f8,&local_c8);
      _Str = local_c8;
      if (local_c0 == 0) {
        _Str = (undefined **)&DAT_149dfb77a;
      }
      uVar2 = _wtoi((wchar_t *)_Str);
      if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(lVar4 + 0x358))) {
        fVar10 = *(float *)(*(longlong *)(lVar4 + 0x350) + (ulonglong)uVar2 * 4);
        bVar6 = 1;
      }
      if (local_c8 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      uVar2 = (uint)bVar6 << 0x10;
      goto LAB_147685fbd;
    }
  }
  uVar2 = 0;
LAB_147685fbd:
  local_c8 = (undefined **)CONCAT44((int)local_120,(int)local_118);
  local_b8 = (double *)FUN_14479d2ce(&local_c8);
  local_a8 = *(undefined2 *)(local_108 + 0x5c);
  local_a6 = *(undefined4 *)(param_6 + 0x16);
  local_a0 = *(undefined2 *)(local_108 + 0xbc);
  local_88 = *(ushort *)(lVar3 + 0xb6) | uVar2;
  local_80 = (double)fVar10;
  local_70 = *(undefined2 *)(lVar3 + 0xb4);
  local_6e = *(undefined2 *)(lVar3 + 0xf12);
  local_6a = *(undefined2 *)(local_108 + 0x11a);
  local_c0 = CONCAT22(local_c0._2_2_,*(undefined2 *)(local_108 + 0x4a));
  local_b0 = 1;
  local_a2 = 1;
  local_90 = 1;
  local_98 = 0;
  local_78 = 1;
  local_68 = 1;
  local_c8 = &PTR_FUN_14a4d8060;
  local_d0 = 0x10000000000;
  local_6c = param_4;
  FUN_14768656a(&local_c8,&local_fa,param_1 + 0x28);
  *(undefined2 *)(param_6 + 0x14) = local_fa;
  FUN_140dbd3cc(param_1 + 0x28,*(undefined2 *)*param_5,local_fa,*(longlong *)(param_1 + 600) + 0x200
               );
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147686232 FUN_147686232 body=193 status=ok
// SIG undefined FUN_147686232(void)

void FUN_147686232(longlong param_1,ulonglong param_2,short param_3,undefined4 *param_4)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  FUN_1405e0ab4();
  uVar4 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x98) + (param_2 & 0xffff) * 8);
  if ((uVar4 != 0xffff) &&
     (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x60) + uVar4 * 8), lVar3 != 0)) {
    uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x98) + 2 + (param_2 & 0xffff) * 8);
    if (*(ushort *)(lVar3 + 0xc) != 0) {
      plVar6 = *(longlong **)(lVar3 + 0x28);
      lVar5 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
      do {
        if (*(short *)((longlong)plVar6 + 0x1e) == param_3) goto LAB_14768629b;
        plVar6 = plVar6 + 4;
        lVar5 = lVar5 + -0x20;
      } while (lVar5 != 0);
    }
    plVar6 = (longlong *)0x0;
LAB_14768629b:
    iVar2 = *(int *)(lVar3 + 0x14);
    if (iVar2 == 1) {
      AcquireSRWLockExclusive((PSRWLOCK)(plVar6 + 1));
    }
    LOCK();
    *(int *)(plVar6 + 3) = (int)plVar6[3] + 1;
    UNLOCK();
    *(undefined4 *)(*plVar6 + (ulonglong)*(byte *)((longlong)plVar6 + 0x1c) * (ulonglong)uVar1) =
         *param_4;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 3) = (int)plVar6[3] + -1;
      UNLOCK();
      if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001476862e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ReleaseSRWLockExclusive((PSRWLOCK)(plVar6 + 1));
        return;
      }
    }
  }
  return;
}



// FUNCTION 1476862f4 FUN_1476862f4 body=134 status=ok
// SIG undefined FUN_1476862f4(void)

void FUN_1476862f4(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  ulonglong uVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  int local_28;
  undefined4 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1476869ac(param_1,&local_38,param_2,param_3);
  *local_20 = *param_4;
  if (local_38 != 0) {
    uVar1 = *(ulonglong *)(local_38 + 0x10);
    if (*(ulonglong *)(local_38 + 0x10) < local_30) {
      uVar1 = local_30;
    }
    *(ulonglong *)(local_38 + 0x10) = uVar1;
    LOCK();
    *(int *)(local_38 + 0x18) = *(int *)(local_38 + 0x18) + -1;
    UNLOCK();
    if (local_28 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(local_38 + 8));
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14768637c FUN_14768637c body=493 status=ok
// SIG undefined FUN_14768637c(void)

void FUN_14768637c(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ushort uVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  wchar_t *_Str;
  undefined *puVar7;
  bool bVar8;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined2 *local_78;
  undefined4 *local_70;
  undefined2 local_64;
  undefined2 local_62;
  undefined4 local_60;
  undefined4 uStack_5c;
  int local_58;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80 = param_3;
  lVar4 = FUN_14009d2a0();
  lVar5 = FUN_14038fb82();
  uVar1 = *(ushort *)(*(longlong *)(param_1 + 0xc0) + (param_4 & 0xffff) * 8);
  if (uVar1 == 0xffff) {
    puVar7 = &DAT_14cab2728;
  }
  else {
    puVar7 = (undefined *)((ulonglong)((uint)uVar1 * 0x28) + *(longlong *)(param_1 + 0x30));
  }
  local_64 = *(undefined2 *)(lVar4 + 0x10a);
  local_70 = &local_60;
  local_62 = *(undefined2 *)(lVar4 + 0x132);
  local_40 = 0x10000000000;
  local_78 = &local_64;
  FUN_1447c44f6(&local_60);
  cVar2 = FUN_140fc5994(puVar7,&local_60);
  uVar1 = *(ushort *)(lVar5 + 0xb6);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(puVar7 + 0x20) == (uint)uVar1 || (int)*(uint *)(puVar7 + 0x20) < (int)(uint)uVar1))
  {
    bVar8 = false;
  }
  else {
    bVar8 = (*(uint *)(puVar7 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  if ((!bVar8) && (cVar2 == '\x01')) {
    local_60 = (undefined4)param_2;
    uStack_5c = (undefined4)((ulonglong)param_2 >> 0x20);
    lVar4 = FUN_14479d2ce();
    if (lVar4 != 0) {
      lVar6 = FUN_144a3a302();
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
           ) == lVar6 + 0x30)) {
        FUN_1400021e4(&local_80,&local_60);
        if (local_58 == 0) {
          _Str = L"";
        }
        else {
          _Str = (wchar_t *)CONCAT44(uStack_5c,local_60);
        }
        uVar3 = _wtoi(_Str);
        if ((-1 < (int)uVar3) && ((int)uVar3 < *(int *)(lVar4 + 0x358))) {
          local_78 = (undefined2 *)
                     CONCAT44(local_78._4_4_,
                              *(undefined4 *)(*(longlong *)(lVar4 + 0x350) + (ulonglong)uVar3 * 4));
          FUN_140fc397e(param_1 + 0x28,param_4 & 0xffffffff,*(undefined2 *)(lVar5 + 0xb6));
        }
        if (CONCAT44(uStack_5c,local_60) != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  lVar4 = FUN_14009d2a0();
  FUN_14055cd1c(param_1 + 0x28,param_4 & 0xffffffff,*(undefined2 *)(lVar4 + 0xf2));
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14768656a FUN_14768656a body=308 status=ok
// SIG undefined FUN_14768656a(void)

undefined2 * FUN_14768656a(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_58 [2];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[0] = param_4;
  FUN_1476868e0(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x60) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_147686958(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  FUN_14163869e(local_58,&local_78,&local_80);
  *param_2 = local_88;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476866a0 FUN_1476866a0 body=163 status=ok
// SIG undefined FUN_1476866a0(void)

void FUN_1476866a0(short *param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((char)param_1[1] == '\x01') {
    if (*(ushort *)(param_2 + 0xc) != 0) {
      plVar3 = *(longlong **)(param_2 + 0x28);
      lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
      do {
        if (*(short *)((longlong)plVar3 + 0x1e) == *param_1) goto LAB_1476866dd;
        plVar3 = plVar3 + 4;
        lVar2 = lVar2 + -0x20;
      } while (lVar2 != 0);
    }
    plVar3 = (longlong *)0x0;
LAB_1476866dd:
    iVar1 = *(int *)(param_2 + 0x14);
    if (iVar1 == 1) {
      AcquireSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
    }
    LOCK();
    *(int *)(plVar3 + 3) = (int)plVar3[3] + 1;
    UNLOCK();
    *(undefined8 *)(*plVar3 + (longlong)param_3 * (ulonglong)*(byte *)((longlong)plVar3 + 0x1c)) =
         *(undefined8 *)(param_1 + 4);
    if ((char)param_1[8] == '\x01') {
      *(undefined1 *)(param_1 + 8) = 0;
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 3) = (int)plVar3[3] + -1;
      UNLOCK();
      if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000147686732. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ReleaseSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
        return;
      }
    }
  }
  return;
}



// FUNCTION 147686744 FUN_147686744 body=79 status=ok
// SIG undefined FUN_147686744(void)

undefined8 * FUN_147686744(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4d8080;
  if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x26) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x26) = 0;
  }
  if (*(char *)(param_1 + 3) == '\x01') {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147686794 FUN_147686794 body=78 status=ok
// SIG undefined FUN_147686794(void)

undefined8 FUN_147686794(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_14768656a();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476867e4 FUN_1476867e4 body=82 status=ok
// SIG undefined FUN_1476867e4(void)

void FUN_1476867e4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_1476868e0(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x60) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147686838 FUN_147686838 body=86 status=ok
// SIG undefined FUN_147686838(void)

void FUN_147686838(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_18 = param_3[2];
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = (undefined4)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_147686958(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147686890 FUN_147686890 body=79 status=ok
// SIG undefined FUN_147686890(void)

undefined8 * FUN_147686890(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4d8080;
  if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x26) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x26) = 0;
  }
  if (*(char *)(param_1 + 3) == '\x01') {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476868e0 FUN_1476868e0 body=119 status=ok
// SIG undefined FUN_1476868e0(void)

void FUN_1476868e0(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  FUN_140dba9e6(*param_1,param_2[0xc]);
  FUN_140dba9e6(*param_1,param_2[0x10]);
  if (*(char *)(param_2 + 0x1d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x1c]);
  }
  FUN_140dba9e6(*param_1,param_2[0x28]);
  FUN_140dba9e6(*param_1,param_2[0x29]);
  FUN_140dba9e6(*param_1,param_2[0x2a]);
  FUN_140dba9e6(*param_1,param_2[0x2b]);
  return;
}



// FUNCTION 147686958 FUN_147686958 body=84 status=ok
// SIG undefined FUN_147686958(void)

void FUN_147686958(undefined8 *param_1,longlong param_2)

{
  FUN_1457abe70(param_2,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140dbd8a8(param_2 + 0x18,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_147563f92(param_2 + 0x20,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_1476866a0(param_2 + 0x38,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 1476869ac FUN_1476869ac body=198 status=ok
// SIG undefined FUN_1476869ac(void)

undefined8 * FUN_1476869ac(longlong param_1,undefined8 *param_2,ushort param_3,ushort param_4)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (param_4 != 0xffff) {
    uVar3 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x98) + (ulonglong)param_3 * 8);
    if (((uVar3 != 0xffff) &&
        ((int)(uint)param_4 < *(int *)(*(longlong *)(param_1 + 8) + 0x20 + uVar3 * 0x28))) &&
       ((*(uint *)(*(longlong *)(param_1 + 8) + uVar3 * 0x28 + (ulonglong)(param_4 >> 5) * 4) >>
         (param_4 & 0x1f) & 1) != 0)) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x60) + uVar3 * 8);
      uVar1 = *(ushort *)(lVar2 + 0xc);
      if (uVar1 != 0) {
        lVar2 = *(longlong *)(lVar2 + 0x28);
        lVar4 = (ulonglong)uVar1 << 5;
        do {
          if (*(ushort *)(lVar2 + 0x1e) == param_4) {
            FUN_147686a72(param_2,lVar2,*(char *)(param_1 + 0x270) != '\0',
                          *(undefined8 *)(param_1 + 0x248),
                          *(undefined2 *)
                           (*(longlong *)(param_1 + 0x98) + 2 + (ulonglong)param_3 * 8));
            return param_2;
          }
          lVar2 = lVar2 + 0x20;
          lVar4 = lVar4 + -0x20;
        } while (lVar4 != 0);
      }
    }
  }
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 1;
  return param_2;
}



// FUNCTION 147686a72 FUN_147686a72 body=218 status=ok
// SIG undefined FUN_147686a72(void)

undefined8 *
FUN_147686a72(undefined8 *param_1,longlong *param_2,int param_3,ulonglong param_4,uint param_5)

{
  ulonglong uVar1;
  undefined1 auStack_68 [40];
  longlong *local_40;
  ulonglong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 1;
  param_1[3] = 0;
  if (param_2 != (longlong *)0x0) {
    local_40 = param_2;
    local_38 = param_4;
    local_30 = param_3;
    if (param_3 == 1) {
      AcquireSRWLockExclusive((PSRWLOCK)(param_2 + 1));
    }
    LOCK();
    *(int *)(param_2 + 3) = (int)param_2[3] + 1;
    UNLOCK();
    FUN_1475493a6(param_1,&local_40);
    if (local_40 != (longlong *)0x0) {
      uVar1 = local_40[2];
      if ((ulonglong)local_40[2] < local_38) {
        uVar1 = local_38;
      }
      local_40[2] = uVar1;
      LOCK();
      *(int *)(local_40 + 3) = (int)local_40[3] + -1;
      UNLOCK();
      if (local_30 == 1) {
        ReleaseSRWLockExclusive((PSRWLOCK)(local_40 + 1));
      }
    }
    param_1[3] = (ulonglong)param_5 * 4 + *param_2;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147686b4e FUN_147686b4e body=232 status=ok
// SIG undefined FUN_147686b4e(void)

void FUN_147686b4e(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  uint uVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar6 = FUN_144a78877(*param_2,param_2[1]);
    lVar2 = *(longlong *)(param_2 + 2);
    uVar5 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar8 = (uint)lVar2 & 0xffff;
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar7 +
                    ((longlong)
                     (int)((uVar8 >> 4) +
                           (uint)lVar2 * 0x10000 + uVar8 + (int)((ulonglong)lVar2 >> 0x20) +
                           (uVar6 >> 2) + uVar6 * 0x40 + (uVar5 << 0x13 | uVar5 & 0xffff) +
                           0x9e3779b9 ^ uVar6) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      lVar3 = *param_1;
      do {
        lVar4 = (longlong)iVar1 * 0x1c;
        if (((*(int *)(lVar3 + lVar4) == *param_2) && (*(int *)(lVar3 + 4 + lVar4) == param_2[1]))
           && (*(longlong *)(lVar3 + lVar4 + 8) == lVar2)) {
          FUN_147681c12(param_1);
          return;
        }
        iVar1 = *(int *)(lVar3 + lVar4 + 0x14);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 147686c36 FUN_147686c36 body=167 status=ok
// SIG undefined FUN_147686c36(void)

void FUN_147686c36(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_32 = *(undefined2 *)(param_1 + 2);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = *(undefined2 *)(param_1 + 4);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = *(undefined2 *)(param_1 + 6);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147686cde FUN_147686cde body=752 status=ok
// SIG undefined FUN_147686cde(void)

void FUN_147686cde(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 local_100;
  char local_ed;
  int local_ec;
  int local_e8;
  int local_e4;
  longlong local_e0;
  longlong local_d8;
  undefined8 local_d0;
  longlong local_c8;
  longlong local_c0;
  int local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  int local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  int local_88;
  undefined8 local_80;
  undefined8 *local_78;
  int local_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (((*(short *)(param_1 + 2) != -1) && (*(short *)(param_1 + 4) != -1)) &&
     (*(short *)(param_1 + 6) != -1)) {
    local_ed = *(char *)(param_2 + 0x270);
    FUN_14150e78a(&local_60);
    local_e8 = *(int *)(param_2 + 0x10);
    lVar3 = param_1;
    uVar4 = param_4;
    if (local_50 != local_e8) {
      do {
        local_d0 = uVar4;
        local_d8 = lVar3;
        iVar10 = local_50;
        lVar8 = local_58;
        lVar6 = local_d8;
        lVar3 = *(longlong *)(*(longlong *)(local_58 + 0x60) + (longlong)local_50 * 8);
        if (local_ed == '\0') {
          *(undefined4 *)(lVar3 + 0x14) = 0;
          local_e0 = lVar3;
        }
        else {
          local_e0 = 0;
        }
        if (*(ushort *)(lVar3 + 0xc) != 0) {
          puVar11 = *(undefined8 **)(lVar3 + 0x28);
          lVar7 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
          do {
            if (*(short *)((longlong)puVar11 + 0x1e) == *(short *)(local_d8 + 6))
            goto LAB_147686deb;
            puVar11 = puVar11 + 4;
            lVar7 = lVar7 + -0x20;
          } while (lVar7 != 0);
        }
        puVar11 = (undefined8 *)0x0;
LAB_147686deb:
        iVar1 = *(int *)(lVar3 + 0x14);
        if (iVar1 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(puVar11 + 1));
        }
        LOCK();
        *(int *)(puVar11 + 3) = *(int *)(puVar11 + 3) + 1;
        UNLOCK();
        uVar4 = *puVar11;
        local_c8 = lVar8;
        if (*(ushort *)(lVar3 + 0xc) != 0) {
          puVar9 = *(undefined8 **)(lVar3 + 0x28);
          lVar8 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
          do {
            if (*(short *)((longlong)puVar9 + 0x1e) == *(short *)(lVar6 + 4)) goto LAB_147686e24;
            puVar9 = puVar9 + 4;
            lVar8 = lVar8 + -0x20;
          } while (lVar8 != 0);
        }
        puVar9 = (undefined8 *)0x0;
LAB_147686e24:
        iVar2 = *(int *)(lVar3 + 0x14);
        local_e4 = iVar1;
        if (iVar2 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(puVar9 + 1));
        }
        LOCK();
        *(int *)(puVar9 + 3) = *(int *)(puVar9 + 3) + 1;
        UNLOCK();
        uVar5 = *puVar9;
        if (*(ushort *)(lVar3 + 0xc) != 0) {
          puVar12 = *(undefined8 **)(lVar3 + 0x28);
          lVar8 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
          do {
            if (*(short *)((longlong)puVar12 + 0x1e) == *(short *)(lVar6 + 2)) goto LAB_147686e56;
            puVar12 = puVar12 + 4;
            lVar8 = lVar8 + -0x20;
          } while (lVar8 != 0);
        }
        puVar12 = (undefined8 *)0x0;
LAB_147686e56:
        iVar1 = *(int *)(lVar3 + 0x14);
        if (iVar1 == 1) {
          local_ec = iVar10;
          AcquireSRWLockShared((PSRWLOCK)(puVar12 + 1));
          iVar10 = local_ec;
        }
        LOCK();
        *(int *)(puVar12 + 3) = *(int *)(puVar12 + 3) + 1;
        UNLOCK();
        local_98 = *puVar12;
        local_b0 = *(undefined8 *)(lVar3 + 0x18);
        local_70 = local_e4;
        local_c0 = local_c8;
        local_108 = uVar5;
        local_100 = uVar4;
        local_b8 = iVar10;
        local_a8 = puVar12;
        local_a0 = iVar1;
        local_90 = puVar9;
        local_88 = iVar2;
        local_80 = uVar5;
        local_78 = puVar11;
        local_68 = uVar4;
        FUN_147686fd0(local_d0,&local_c0);
        FUN_1476871a8(&local_b0);
        if (local_e0 != 0) {
          *(undefined4 *)(local_e0 + 0x14) = 1;
        }
        local_50 = FUN_1403b8464(&local_60,local_50 + 1);
        lVar3 = local_d8;
        uVar4 = local_d0;
      } while (local_50 != local_e8);
    }
    if (local_60 != 0) {
      if (*(char *)(local_58 + 0x270) == '\0') {
        *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
        UNLOCK();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147686fd0 FUN_147686fd0 body=470 status=ok
// SIG undefined FUN_147686fd0(void)

void FUN_147686fd0(longlong *param_1,undefined4 *param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined4 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  ulonglong local_84;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  byte local_64;
  ulonglong local_60;
  undefined4 local_58;
  undefined4 local_54;
  byte local_50;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = *param_1;
  local_78 = *param_2;
  uStack_74 = param_2[1];
  uStack_70 = param_2[2];
  uStack_6c = param_2[3];
  local_90 = param_4;
  FUN_140cd6274(&local_68);
  if (**(int **)(lVar1 + 0xb0) != 0 || (local_64 & 1) != 0) {
    local_98 = FUN_140732858();
    if (0 < (int)local_68) {
      lVar8 = 0;
      uVar9 = 0;
      do {
        local_60 = *(ulonglong *)(param_5 + uVar9 * 8);
        FUN_147687220(lVar1,&local_84,&local_60,param_6 + lVar8);
        local_54 = *(undefined4 *)(local_90 + uVar9 * 4);
        local_4a = *(undefined2 *)(param_3 + uVar9 * 2);
        local_58 = local_7c;
        local_60 = local_84;
        local_50 = local_64;
        FUN_1449da5a2(local_98,&local_4a,&local_60);
        lVar4 = FUN_1400e4054(*(undefined8 *)(lVar1 + 0xb0),&local_84);
        if (lVar4 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = (undefined4)
                  CONCAT71((int7)((ulonglong)&local_84 >> 8),'\x02' - (*(short *)(lVar4 + 0xe) == 0)
                          );
        }
        cVar3 = FUN_1476872d6(lVar1,local_7c,uVar7);
        if (cVar3 == '\0') {
          uVar2 = *(undefined8 *)(param_6 + uVar9 * 8);
          uVar5 = 0;
          uVar6 = 0;
          if (*(longlong *)(param_5 + uVar9 * 8) != 0) {
            local_60 = 0;
            FUN_14485c47a(&local_60);
            uVar5 = local_60 >> 0x20;
            uVar6 = (uint)local_60;
          }
          uVar10 = FUN_147687368((ulonglong)uVar6 | uVar5 << 0x20,uVar2);
          local_60 = CONCAT44(local_60._4_4_,uVar10);
          FUN_147687442(lVar1,local_7c,uVar7,&local_60);
        }
        uVar9 = uVar9 + 1;
        lVar8 = lVar8 + 8;
      } while (local_68 != uVar9);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476871a8 FUN_1476871a8 body=120 status=ok
// SIG undefined FUN_1476871a8(void)

void FUN_1476871a8(longlong param_1)

{
  int *piVar1;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x38) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x40) == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 0x38) + 8));
    }
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x20) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x28) == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 0x20) + 8));
    }
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x10) == 1) {
                    /* WARNING: Could not recover jumptable at 0x000147687212. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 8) + 8));
      return;
    }
  }
  return;
}



// FUNCTION 147687220 FUN_147687220 body=181 status=ok
// SIG undefined FUN_147687220(void)

longlong FUN_147687220(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = 0;
  local_40 = 0;
  if (*param_3 != 0) {
    local_40 = 0;
    FUN_14485c47a(&local_40,*param_3,0);
    lVar1 = *param_3;
  }
  local_38 = *param_4;
  FUN_14027461a(param_1 + 200,param_2,lVar1);
  FUN_1476874d2(param_1,&local_44,&local_40);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 8) = local_44;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476872d6 FUN_1476872d6 body=146 status=ok
// SIG undefined FUN_1476872d6(void)

ulonglong FUN_1476872d6(longlong param_1,int param_2,char param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  ulonglong uVar5;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int7 iVar6;
  
  lVar7 = (longlong)param_2 * 0x18 + *(longlong *)(param_1 + 0x68);
  iVar6 = (int7)(int3)((uint)param_2 >> 8);
  uVar5 = CONCAT71(iVar6,1);
  if (param_3 == '\x02') {
    bVar2 = *(byte *)(lVar7 + 0x14);
    if (((bVar2 & 2) == 0 & bVar2) == 0) {
      uVar3 = *(uint *)(param_1 + 0xa8);
      lVar7 = *(longlong *)(param_1 + 0xa0);
      uVar9 = 0;
      uVar8 = uVar3;
      if (0 < (int)uVar3) {
        do {
          uVar1 = (uVar8 >> 1) + uVar9;
          if (*(int *)(lVar7 + (ulonglong)uVar1 * 8) < param_2) {
            uVar9 = uVar1 + (uVar8 & 1);
          }
          bVar4 = 1 < uVar8;
          uVar8 = uVar8 >> 1;
        } while (bVar4);
      }
      if (((int)uVar9 < (int)uVar3) && (*(int *)(lVar7 + (ulonglong)uVar9 * 8) <= param_2)) {
        lVar7 = lVar7 + (ulonglong)uVar9 * 8;
        uVar5 = CONCAT71((int7)((ulonglong)lVar7 >> 8),lVar7 != -4);
      }
      else {
        uVar5 = 0;
      }
    }
  }
  else if (param_3 == '\x01') {
    uVar5 = CONCAT71(iVar6,*(undefined1 *)(lVar7 + 0x14));
  }
  return uVar5 & 0xffffffffffffff01;
}



// FUNCTION 147687368 FUN_147687368 body=217 status=ok
// SIG undefined FUN_147687368(void)

undefined4 FUN_147687368(wchar_t *param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  wchar_t *_Str;
  undefined4 uVar4;
  undefined1 auStack_68 [32];
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = param_1;
  local_38 = param_2;
  lVar2 = FUN_14479d2ce(&local_48);
  uVar4 = 0;
  if (lVar2 != 0) {
    lVar3 = FUN_144a3a302();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      FUN_1400021e4(&local_38,&local_48);
      _Str = local_48;
      if (local_40 == 0) {
        _Str = L"";
      }
      uVar1 = _wtoi(_Str);
      uVar4 = 0;
      if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(lVar2 + 0x358))) {
        uVar4 = *(undefined4 *)(*(longlong *)(lVar2 + 0x350) + (ulonglong)uVar1 * 4);
      }
      if (local_48 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 147687442 FUN_147687442 body=142 status=ok
// SIG undefined FUN_147687442(void)

void FUN_147687442(longlong param_1,int param_2,char param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined1 auStack_38 [44];
  int local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = (longlong)param_2 * 0x18 + *(longlong *)(param_1 + 0x68);
  local_c = param_2;
  if (param_3 == '\x02') {
    if ((*(byte *)(lVar1 + 0x14) & 1) == 0) {
      *(undefined4 *)(lVar1 + 0x10) = *param_4;
      *(byte *)(lVar1 + 0x14) = *(byte *)(lVar1 + 0x14) | 1;
    }
    else {
      FUN_1476876d4(param_1 + 0xa0,&local_c,param_4);
    }
  }
  else if (param_3 == '\x01') {
    *(undefined4 *)(lVar1 + 0x10) = *param_4;
    *(byte *)(lVar1 + 0x14) = *(byte *)(lVar1 + 0x14) | 3;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476874d2 FUN_1476874d2 body=283 status=ok
// SIG undefined FUN_1476874d2(void)

int * FUN_1476874d2(longlong param_1,int *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  int local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = (longlong *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_3 + 2);
  uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar7 = (uint)uVar2 & 0xffff;
  uVar4 = FUN_144a78877(*param_3,param_3[1]);
  uVar4 = FUN_144a78877(uVar4,((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                              (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4));
  iVar5 = FUN_147683172(plVar1,uVar4,param_3);
  if (((iVar5 == -1) || (lVar6 = (longlong)iVar5 * 0x1c + *plVar1, lVar6 == 0)) ||
     (iVar5 = *(int *)(lVar6 + 0x10), *param_2 = iVar5, iVar5 == -1)) {
    local_68._0_4_ = *param_3;
    local_68._4_4_ = param_3[1];
    uStack_60._0_4_ = param_3[2];
    uStack_60._4_4_ = param_3[3];
    FUN_1476875ee(param_1 + 0x68,local_48);
    local_40[4] = local_58;
    *local_40 = (undefined4)local_68;
    local_40[1] = local_68._4_4_;
    local_40[2] = (undefined4)uStack_60;
    local_40[3] = uStack_60._4_4_;
    *(undefined1 *)(local_40 + 5) = 0;
    *param_2 = local_48[0];
    local_68 = param_3;
    uStack_60 = param_2;
    FUN_147682eac(plVar1,local_48,&local_68);
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476875ee FUN_1476875ee body=230 status=ok
// SIG undefined FUN_1476875ee(void)

int * FUN_1476875ee(longlong *param_1,int *param_2)

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
      FUN_1403951a8(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 1476876d4 FUN_1476876d4 body=198 status=ok
// SIG undefined FUN_1476876d4(void)

void FUN_1476876d4(longlong *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int *piVar9;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar4 = *param_1;
  if ((int)uVar2 < 1) {
    uVar7 = 0;
  }
  else {
    iVar5 = *param_2;
    uVar7 = 0;
    uVar6 = uVar2;
    do {
      uVar1 = (uVar6 >> 1) + uVar7;
      if (*(int *)(lVar4 + (ulonglong)uVar1 * 8) < iVar5) {
        uVar7 = uVar1 + (uVar6 & 1);
      }
      bVar3 = 1 < uVar6;
      uVar6 = uVar6 >> 1;
    } while (bVar3);
    if (((int)uVar7 < (int)uVar2) && (*(int *)(lVar4 + (ulonglong)uVar7 * 8) <= iVar5)) {
      piVar9 = (int *)(lVar4 + (ulonglong)uVar7 * 8);
      goto LAB_14768776d;
    }
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar2) {
    FUN_14768779a(param_1,uVar2);
    lVar4 = *param_1;
  }
  uVar8 = (ulonglong)uVar7;
  memmove((void *)(lVar4 + uVar8 * 8 + 8),(void *)(lVar4 + uVar8 * 8),
          (ulonglong)(uVar2 - uVar7) << 3);
  piVar9 = (int *)(uVar8 * 8 + *param_1);
  iVar5 = *param_2;
LAB_14768776d:
  *piVar9 = iVar5;
  piVar9[1] = *param_3;
  return;
}



// FUNCTION 14768779a FUN_14768779a body=132 status=ok
// SIG undefined FUN_14768779a(void)

void FUN_14768779a(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147687820 FUN_147687820 body=166 status=ok
// SIG undefined FUN_147687820(void)

void FUN_147687820(undefined2 *param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_32 = *param_1;
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[1];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[2];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476878c8 FUN_1476878c8 body=605 status=ok
// SIG undefined FUN_1476878c8(void)

int * FUN_1476878c8(short *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  longlong *plVar8;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 **local_100;
  short *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  int local_d4;
  longlong *local_d0;
  longlong *local_c8;
  undefined1 *local_c0;
  short **local_b8;
  short *local_b0;
  undefined1 local_a8 [8];
  byte local_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((((*param_1 == -1) || (param_1[1] == -1)) || (param_1[2] == -1)) ||
     (cVar7 = FUN_147687bbc(param_1,param_3), cVar7 == '\0')) {
    *param_2 = -1;
    goto LAB_14768790e;
  }
  plVar8 = (longlong *)FUN_14001cc68(0x30,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14a4d80a0;
  plVar8[2] = (longlong)&PTR_FUN_14a4d80b8;
  uVar4 = *(undefined4 *)(param_1 + 2);
  uVar5 = *(undefined4 *)(param_1 + 4);
  uVar6 = *(undefined4 *)(param_1 + 6);
  *(undefined4 *)((longlong)plVar8 + 0x1c) = *(undefined4 *)param_1;
  *(undefined4 *)(plVar8 + 4) = uVar4;
  *(undefined4 *)((longlong)plVar8 + 0x24) = uVar5;
  *(undefined4 *)(plVar8 + 5) = uVar6;
  *(undefined4 *)((longlong)plVar8 + 0x2c) = *(undefined4 *)(param_1 + 8);
  if (plVar8 != (longlong *)0x0) {
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
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  local_50 = 0;
  FUN_1400abb7c(local_70,param_1 + 0x3c);
  local_78 = 0;
  FUN_1400abb7c(local_98,param_1 + 0x50);
  FUN_140dba9e6(local_70,*param_1);
  FUN_140dba9e6(local_70,param_1[1]);
  FUN_140dba9e6(local_70,param_1[2]);
  local_b8 = &local_b0;
  local_c0 = &LAB_147687ca4;
  local_a0 = *(byte *)(param_6 + 8);
  local_b0 = param_1;
  (*(code *)(&PTR_LAB_14a475bc0)[local_a0])(local_a8);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  local_100 = &local_c0;
  local_108 = local_a8;
  local_f8 = param_1 + 0xc;
  local_f0 = local_70;
  local_e8 = local_98;
  local_d0 = plVar8 + 2;
  local_c8 = plVar8;
  FUN_1406ac01c(param_4,param_2,param_5,&local_d0);
  iVar3 = *param_2;
  if (*param_2 == -1) {
    if ((*(byte *)(param_5 + 1) & 4) != 0) {
      FUN_145c71394(param_4,&local_d4);
      *param_2 = local_d4;
      iVar3 = local_d4;
      if (local_d4 != -1) goto LAB_147687ab2;
    }
  }
  else {
LAB_147687ab2:
    FUN_1407ce0e2(param_4,iVar3,0xffffffff);
    FUN_1407cdf34(param_4,*param_2,0xffffffff);
  }
  if (plVar8 != (longlong *)0x0) {
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
LAB_14768790e:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147687b26 FUN_147687b26 body=149 status=ok
// SIG undefined FUN_147687b26(void)

void FUN_147687b26(longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (uint *)*param_2;
  local_38 = *param_1;
  local_30 = (int)param_1[1];
  lVar5 = *(longlong *)
           (*(longlong *)(*(longlong *)(local_38 + 0x60) + (longlong)local_30 * 8) + 0x20);
  lVar3 = 0;
  lVar2 = lVar5 + (ulonglong)*puVar1;
  if ((ulonglong)*puVar1 == 0xffffffff) {
    lVar2 = lVar3;
  }
  lVar4 = lVar5 + (ulonglong)puVar1[1];
  if ((ulonglong)puVar1[1] == 0xffffffff) {
    lVar4 = lVar3;
  }
  local_2c = *(undefined4 *)((longlong)param_1 + 0xc);
  lVar5 = lVar5 + (ulonglong)puVar1[2];
  if ((ulonglong)puVar1[2] == 0xffffffff) {
    lVar5 = lVar3;
  }
  FUN_147687dc4(&local_38,lVar2,lVar4,lVar5);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147687bbc FUN_147687bbc body=170 status=ok
// SIG undefined FUN_147687bbc(void)

undefined8 FUN_147687bbc(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  bool bVar5;
  
  uVar1 = *param_1;
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ulonglong)
            CONCAT11((char)(uVar1 >> 8),
                     (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0);
  }
  uVar1 = param_1[1];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[2];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar5 = false;
  }
  else {
    bVar5 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 & bVar4 & bVar5);
}



// FUNCTION 147687c66 FUN_147687c66 body=1 status=ok
// SIG undefined FUN_147687c66(void)

void FUN_147687c66(void)

{
  return;
}



// FUNCTION 147687c68 FUN_147687c68 body=29 status=ok
// SIG undefined FUN_147687c68(void)

undefined8 FUN_147687c68(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147687c86 FUN_147687c86 body=29 status=ok
// SIG undefined FUN_147687c86(void)

undefined8 FUN_147687c86(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147687cbc FUN_147687cbc body=263 status=ok
// SIG undefined FUN_147687cbc(void)

void FUN_147687cbc(short *param_1,longlong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  ushort uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  lVar7 = (longlong)(int)param_3[1];
  FUN_1403f967c(param_3,3);
  uVar3 = *(ushort *)(param_2 + 0xc);
  uVar2 = (uint)uVar3;
  puVar1 = *(ulonglong **)(param_2 + 0x28);
  if (uVar2 != 0) {
    lVar5 = (ulonglong)uVar3 << 5;
    puVar4 = puVar1;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == *param_1) goto LAB_147687d0d;
      puVar4 = puVar4 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_147687d0d:
  lVar5 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
    *(int *)(lVar5 + lVar7 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar3 = *(ushort *)(param_2 + 0xc);
    uVar2 = (uint)uVar3;
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if (uVar3 != 0) {
    uVar6 = (ulonglong)(uVar2 << 5);
    puVar4 = puVar1;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == param_1[1]) goto LAB_147687d61;
      puVar4 = puVar4 + 4;
      uVar6 = uVar6 - 0x20;
    } while (uVar6 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_147687d61:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
    *(int *)(lVar5 + 4 + lVar7 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar3 = *(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
    uVar2 = (uint)uVar3;
  }
  if (uVar3 != 0) {
    uVar6 = (ulonglong)(uVar2 << 5);
    do {
      if (*(short *)((longlong)puVar1 + 0x1e) == param_1[2]) goto LAB_147687da6;
      puVar1 = puVar1 + 4;
      uVar6 = uVar6 - 0x20;
    } while (uVar6 != 0);
  }
  puVar1 = (ulonglong *)0x0;
LAB_147687da6:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
    *(int *)(lVar5 + 8 + lVar7 * 4) = (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
  }
  return;
}



// FUNCTION 147687dc4 FUN_147687dc4 body=204 status=ok
// SIG undefined FUN_147687dc4(void)

void FUN_147687dc4(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  int iVar3;
  wchar_t *_Str;
  longlong lVar4;
  undefined1 auStack_78 [32];
  wchar_t *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(ushort *)
           (*(longlong *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8) + 0xe);
  if (uVar1 != 0) {
    lVar4 = 0;
    do {
      uVar2 = *(undefined8 *)(param_2 + lVar4);
      FUN_1400021e4(param_3 + lVar4,&local_58);
      _Str = L"";
      if (local_50 != 0) {
        _Str = local_58;
      }
      iVar3 = _wtoi(_Str);
      FUN_1479ee3aa(uVar2,iVar3,(float)*(double *)(param_4 + lVar4));
      if (local_58 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      lVar4 = lVar4 + 8;
    } while ((ulonglong)uVar1 * 8 != lVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147687e92 FUN_147687e92 body=126 status=ok
// SIG undefined FUN_147687e92(void)

undefined4 * FUN_147687e92(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[4] = param_3[4];
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1403b8af8(param_1 + 6,param_3 + 6);
  *(undefined8 *)(param_1 + 0x26) = 0;
  FUN_1400abb7c(param_1 + 0x1e,param_3 + 0x1e);
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_1400abb7c(param_1 + 0x28,param_3 + 0x28);
  *(longlong *)(param_1 + 0x32) = param_2;
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 147687f10 FUN_147687f10 body=219 status=ok
// SIG undefined FUN_147687f10(void)

void FUN_147687f10(undefined2 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  ulonglong *local_48;
  undefined2 local_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_3a = 0xffff;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = *param_1;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[1];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[2];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147687fec FUN_147687fec body=464 status=ok
// SIG undefined FUN_147687fec(void)

void FUN_147687fec(longlong *param_1,short *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_d8 [44];
  int local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 *local_90;
  int local_88;
  undefined8 local_80;
  undefined8 *local_78;
  int local_70;
  undefined8 local_68;
  undefined8 *local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar4 = *(longlong *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8);
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    puVar10 = *(undefined8 **)(lVar4 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar10 + 0x1e) == param_2[2]) goto LAB_147688036;
      puVar10 = puVar10 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  puVar10 = (undefined8 *)0x0;
LAB_147688036:
  iVar1 = *(int *)(lVar4 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar10 + 1));
  }
  LOCK();
  *(int *)(puVar10 + 3) = *(int *)(puVar10 + 3) + 1;
  UNLOCK();
  lVar4 = *(longlong *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8);
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    puVar9 = *(undefined8 **)(lVar4 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar9 + 0x1e) == param_2[1]) goto LAB_14768806c;
      puVar9 = puVar9 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  puVar9 = (undefined8 *)0x0;
LAB_14768806c:
  uVar5 = *puVar10;
  iVar2 = *(int *)(lVar4 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar9 + 1));
  }
  LOCK();
  *(int *)(puVar9 + 3) = *(int *)(puVar9 + 3) + 1;
  UNLOCK();
  lVar4 = *(longlong *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8);
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    puVar8 = *(undefined8 **)(lVar4 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar8 + 0x1e) == *param_2) goto LAB_1476880b2;
      puVar8 = puVar8 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  puVar8 = (undefined8 *)0x0;
LAB_1476880b2:
  uVar6 = *puVar9;
  iVar3 = *(int *)(lVar4 + 0x14);
  local_ac = iVar1;
  if (iVar3 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar8 + 1));
  }
  LOCK();
  *(int *)(puVar8 + 3) = *(int *)(puVar8 + 3) + 1;
  UNLOCK();
  local_80 = *puVar8;
  local_58 = local_ac;
  local_a8 = (undefined4)*param_1;
  uStack_a4 = *(undefined4 *)((longlong)param_1 + 4);
  uStack_a0 = (undefined4)param_1[1];
  uStack_9c = *(undefined4 *)((longlong)param_1 + 0xc);
  local_90 = puVar8;
  local_88 = iVar3;
  local_78 = puVar9;
  local_70 = iVar2;
  local_68 = uVar6;
  local_60 = puVar10;
  local_50 = uVar5;
  FUN_147687dc4(&local_a8,local_80,uVar6);
  FUN_1476881be(&local_90);
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476881be FUN_1476881be body=118 status=ok
// SIG undefined FUN_1476881be(void)

void FUN_1476881be(longlong *param_1)

{
  int *piVar1;
  
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[7] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[6] + 8));
    }
  }
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[4] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x000147688226. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 147688234 FUN_147688234 body=230 status=ok
// SIG undefined FUN_147688234(void)

int * FUN_147688234(longlong *param_1,int *param_2)

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
      FUN_1447cc1b4(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0xc);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0xc) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0xc + *param_1;
  return param_2;
}



// FUNCTION 14768831a FUN_14768831a body=301 status=ok
// SIG undefined FUN_14768831a(void)

undefined4 * FUN_14768831a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147688448(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = FUN_144a78877(uVar6,uVar6 >> 0x20);
  cVar3 = FUN_14768852e(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
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
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)(local_40 + 2) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_147688672(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147688448 FUN_147688448 body=230 status=ok
// SIG undefined FUN_147688448(void)

int * FUN_147688448(longlong *param_1,int *param_2)

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



// FUNCTION 14768852e FUN_14768852e body=142 status=ok
// SIG undefined FUN_14768852e(void)

undefined8 FUN_14768852e(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar4 * 0x14);
        if ((*piVar1 == *param_3) && (*(int *)(*param_1 + 4 + (longlong)iVar4 * 0x14) == param_3[1])
           ) {
          uVar2 = *(undefined8 *)param_3;
          piVar1[2] = param_3[2];
          *(undefined8 *)piVar1 = uVar2;
          FUN_1476885bc(param_1,*param_4);
          *param_4 = iVar4;
          return 1;
        }
        iVar4 = piVar1[3];
      } while (iVar4 != -1);
    }
  }
  return 0;
}



// FUNCTION 1476885bc FUN_1476885bc body=114 status=ok
// SIG undefined FUN_1476885bc(void)

void FUN_1476885bc(longlong *param_1,int param_2)

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



// FUNCTION 14768862e FUN_14768862e body=68 status=ok
// SIG undefined FUN_14768862e(void)

void FUN_14768862e(longlong param_1,uint param_2)

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
  FUN_147688672(param_1);
  return;
}



// FUNCTION 147688672 FUN_147688672 body=446 status=ok
// SIG undefined FUN_147688672(void)

void FUN_147688672(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5;
        iVar6 = FUN_144a78877(*(undefined4 *)(lVar3 + lVar10 * 0x14),
                              *(undefined4 *)(lVar3 + 4 + lVar10 * 0x14));
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x10 + lVar10 * 0x14) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xc + lVar10 * 0x14) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147688832 FUN_147688832 body=138 status=ok
// SIG undefined FUN_147688832(void)

undefined4 * FUN_147688832(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  if (*param_3 != 0) {
    local_28 = 0;
    FUN_14485c47a(&local_28);
    local_30 = local_28;
  }
  FUN_14765acc6(param_1,param_2 + 2,&local_30);
  *param_2 = 0xffffffff;
  param_2[1] = *(undefined4 *)(param_1 + 0xc0);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476888be FUN_1476888be body=194 status=ok
// SIG undefined FUN_1476888be(void)

void FUN_1476888be(longlong *param_1,int *param_2,undefined1 *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int *piVar9;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar4 = *param_1;
  if ((int)uVar2 < 1) {
    uVar7 = 0;
  }
  else {
    iVar5 = *param_2;
    uVar7 = 0;
    uVar6 = uVar2;
    do {
      uVar1 = (uVar6 >> 1) + uVar7;
      if (*(int *)(lVar4 + (ulonglong)uVar1 * 8) < iVar5) {
        uVar7 = uVar1 + (uVar6 & 1);
      }
      bVar3 = 1 < uVar6;
      uVar6 = uVar6 >> 1;
    } while (bVar3);
    if (((int)uVar7 < (int)uVar2) && (*(int *)(lVar4 + (ulonglong)uVar7 * 8) <= iVar5)) {
      piVar9 = (int *)(lVar4 + (ulonglong)uVar7 * 8);
      goto LAB_147688957;
    }
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar2) {
    FUN_147688980(param_1,uVar2);
    lVar4 = *param_1;
  }
  uVar8 = (ulonglong)uVar7;
  memmove((void *)(lVar4 + uVar8 * 8 + 8),(void *)(lVar4 + uVar8 * 8),
          (ulonglong)(uVar2 - uVar7) << 3);
  piVar9 = (int *)(uVar8 * 8 + *param_1);
  iVar5 = *param_2;
LAB_147688957:
  *piVar9 = iVar5;
  *(undefined1 *)(piVar9 + 1) = *param_3;
  return;
}



// FUNCTION 147688980 FUN_147688980 body=132 status=ok
// SIG undefined FUN_147688980(void)

void FUN_147688980(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147688a06 FUN_147688a06 body=446 status=ok
// SIG undefined FUN_147688a06(void)

void FUN_147688a06(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5;
        iVar6 = FUN_144a78877(*(undefined4 *)(lVar3 + lVar10 * 0x24),
                              *(undefined4 *)(lVar3 + 4 + lVar10 * 0x24));
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x20 + lVar10 * 0x24) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x1c + lVar10 * 0x24) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147688bc6 FUN_147688bc6 body=87 status=ok
// SIG undefined FUN_147688bc6(void)

void FUN_147688bc6(longlong *param_1,int param_2)

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
  lVar1 = lVar2 + (longlong)param_2 * 0x24;
  lVar6 = (longlong)*(int *)(lVar1 + 0x20);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x1c + lVar6 * 0x24);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x24 + 0x1c);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x1c);
  FUN_147688c1e();
  return;
}



// FUNCTION 147688c1e FUN_147688c1e body=114 status=ok
// SIG undefined FUN_147688c1e(void)

void FUN_147688c1e(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x24) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x24);
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



// FUNCTION 147688c90 FUN_147688c90 body=309 status=ok
// SIG undefined FUN_147688c90(void)

undefined4 * FUN_147688c90(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147688dc6(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar8 = *(ulonglong *)*param_3;
  *local_40 = uVar8;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = uVar2;
  *(undefined4 *)(local_40 + 2) = uVar3;
  *(undefined4 *)((longlong)local_40 + 0x14) = uVar4;
  *(undefined4 *)(local_40 + 3) = puVar1[4];
  *(undefined4 *)((longlong)local_40 + 0x1c) = 0xffffffff;
  local_4c = local_48[0];
  uVar6 = FUN_144a78877(uVar8,uVar8 >> 0x20);
  cVar5 = FUN_147688eac(param_1,uVar6,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar5 == '\0') {
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
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      *(uint *)(local_40 + 4) = uVar6;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0x1c) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_147688a06(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147688dc6 FUN_147688dc6 body=230 status=ok
// SIG undefined FUN_147688dc6(void)

int * FUN_147688dc6(longlong *param_1,int *param_2)

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
      FUN_14042c636(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x24);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x24) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x24 + *param_1;
  return param_2;
}



// FUNCTION 147688eac FUN_147688eac body=152 status=ok
// SIG undefined FUN_147688eac(void)

undefined8 FUN_147688eac(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar8 * 0x24);
        if ((*piVar1 == *param_3) && (*(int *)(*param_1 + 4 + (longlong)iVar8 * 0x24) == param_3[1])
           ) {
          iVar3 = *param_3;
          iVar4 = param_3[1];
          iVar5 = param_3[2];
          iVar6 = param_3[3];
          uVar2 = *(undefined8 *)(param_3 + 4);
          piVar1[6] = param_3[6];
          *(undefined8 *)(piVar1 + 4) = uVar2;
          *piVar1 = iVar3;
          piVar1[1] = iVar4;
          piVar1[2] = iVar5;
          piVar1[3] = iVar6;
          FUN_147688c1e(iVar3,*param_4);
          *param_4 = iVar8;
          return 1;
        }
        iVar8 = piVar1[7];
      } while (iVar8 != -1);
    }
  }
  return 0;
}



// FUNCTION 147688f44 FUN_147688f44 body=46 status=ok
// SIG undefined FUN_147688f44(void)

void FUN_147688f44(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_147688f90(param_1 + 0x10);
  return;
}



// FUNCTION 147688f72 FUN_147688f72 body=29 status=ok
// SIG undefined FUN_147688f72(void)

undefined8 FUN_147688f72(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147688f90 FUN_147688f90 body=52 status=ok
// SIG undefined FUN_147688f90(void)

void FUN_147688f90(longlong *param_1)

{
  FUN_147688fc4();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147688fc4 FUN_147688fc4 body=89 status=ok
// SIG undefined FUN_147688fc4(void)

void FUN_147688fc4(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1407f13e6(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 14768901e FUN_14768901e body=191 status=ok
// SIG undefined FUN_14768901e(void)

undefined8 * FUN_14768901e(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[7] = 0x10000000000;
  param_1[0xc] = 0x10000000000;
  param_1[0x13] = 0x10000000000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x18] = 0x10000000000;
  local_32 = *(undefined2 *)((longlong)param_1 + 2);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_1 + 3,&local_48);
  local_32 = *(undefined2 *)((longlong)param_1 + 4);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_1 + 3,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476890de FUN_1476890de body=120 status=ok
// SIG undefined FUN_1476890de(void)

void FUN_1476890de(longlong param_1)

{
  int *piVar1;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x38) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x40) == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 0x38) + 8));
    }
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x20) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x28) == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 0x20) + 8));
    }
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x10) == 1) {
                    /* WARNING: Could not recover jumptable at 0x000147689148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 8) + 8));
      return;
    }
  }
  return;
}



// FUNCTION 147689156 FUN_147689156 body=476 status=ok
// SIG undefined FUN_147689156(void)

longlong * FUN_147689156(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147689334();
  if (*param_2 != 0) goto LAB_147689184;
  plVar3 = (longlong *)FUN_14001cc68(0xd8);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a4d80f0;
  plVar4 = plVar3 + 2;
  memset(plVar3 + 3,0,0xc0);
  *(undefined8 *)((longlong)plVar3 + 0x54) = 0xffffffff00000080;
  plVar3[0xf] = 0;
  plVar3[0x10] = 0;
  *(undefined8 *)((longlong)plVar3 + 0xa4) = 0xffffffff00000080;
  *(undefined8 *)((longlong)plVar3 + 0xac) = 0;
  *(undefined8 *)((longlong)plVar3 + 0xb4) = 0;
  *(undefined8 *)((longlong)plVar3 + 0xbc) = 0;
  *(undefined8 *)((longlong)plVar3 + 0xc4) = 0;
  *(undefined8 *)((longlong)plVar3 + 0xcc) = 0xffffffff00000000;
  plVar3[2] = (longlong)&PTR_FUN_14a4d8110;
  local_40 = plVar4;
  local_38 = plVar3;
  FUN_14768a080(&local_40,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_2 = 0x10;
    plVar4 = (longlong *)param_2[1];
    if (plVar4 != (longlong *)0x0) {
      param_2[1] = 0;
LAB_1476892f8:
      LOCK();
      plVar3 = plVar4 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x0001476892e8:
        if (iVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_2 = (longlong)plVar4;
    plVar4 = (longlong *)param_2[1];
    if (plVar3 == plVar4) {
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar4 = plVar3;
        goto joined_r0x0001476892e8;
      }
    }
    else {
      param_2[1] = (longlong)plVar3;
      if (plVar4 != (longlong *)0x0) goto LAB_1476892f8;
    }
  }
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
  plVar4 = (longlong *)*param_2;
  (**(code **)(*plVar4 + 0x10))(plVar4,param_3,param_1);
  local_48 = param_2[1];
  if (local_48 != 0) {
    LOCK();
    *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
    UNLOCK();
  }
  local_50 = plVar4;
  FUN_1476893e8(param_1,param_3,&local_50);
LAB_147689184:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147689334 FUN_147689334 body=179 status=ok
// SIG undefined FUN_147689334(void)

undefined8 * FUN_147689334(longlong param_1,undefined8 *param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar3 = *(uint *)(param_1 + 0xf0);
  uVar8 = (ulonglong)uVar3;
  lVar4 = *(longlong *)(param_1 + 0xe8);
  uVar11 = 0;
  if (0 < (int)uVar3) {
    do {
      uVar10 = (int)(uVar8 >> 1) + uVar11;
      uVar9 = (uint)uVar8;
      if (*(uint *)(lVar4 + (ulonglong)uVar10 * 0x18) < param_3) {
        uVar11 = uVar10 + (uVar9 & 1);
      }
      uVar8 = uVar8 >> 1;
    } while (1 < uVar9);
  }
  if (((int)uVar11 < (int)uVar3) && (*(uint *)(lVar4 + (ulonglong)uVar11 * 0x18) <= param_3)) {
    lVar4 = lVar4 + (ulonglong)uVar11 * 0x18;
    puVar7 = (undefined8 *)(lVar4 + 8);
    if (puVar7 != (undefined8 *)0x0) {
      uVar6 = *puVar7;
      plVar5 = *(longlong **)(lVar4 + 0x10);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        *param_2 = uVar6;
        param_2[1] = plVar5;
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) {
          return param_2;
        }
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 != 0) {
          return param_2;
        }
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return param_2;
      }
      goto LAB_14768938e;
    }
  }
  uVar6 = 0;
LAB_14768938e:
  *param_2 = uVar6;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1476893e8 FUN_1476893e8 body=184 status=ok
// SIG undefined FUN_1476893e8(void)

void FUN_1476893e8(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_3;
  local_28 = (longlong *)param_3[1];
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  local_1c = param_2;
  FUN_140dd6482(param_1 + 0xe8,&local_1c,&local_30);
  plVar3 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = (longlong *)param_3[1];
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476894a2 FUN_1476894a2 body=9 status=ok
// SIG undefined FUN_1476894a2(void)

void FUN_1476894a2(longlong param_1)

{
  FUN_147689da2(param_1 + 0x10);
  return;
}



// FUNCTION 1476894ac FUN_1476894ac body=29 status=ok
// SIG undefined FUN_1476894ac(void)

undefined8 FUN_1476894ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476894ca FUN_1476894ca body=38 status=ok
// SIG undefined FUN_1476894ca(void)

undefined8 FUN_1476894ca(undefined8 param_1,int param_2)

{
  FUN_147689da2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476894fc FUN_1476894fc body=14 status=ok
// SIG undefined FUN_1476894fc(void)

void FUN_1476894fc(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  *(undefined4 *)(param_1 + 0xc0) = param_2;
  return;
}



// FUNCTION 14768950a FUN_14768950a body=74 status=ok
// SIG undefined FUN_14768950a(void)

void FUN_14768950a(longlong param_1,int param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0xc);
  FUN_147689e14();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147689556 FUN_147689556 body=916 status=ok
// SIG undefined FUN_147689556(void)

ulonglong FUN_147689556(longlong param_1,int param_2,char param_3,char param_4)

{
  void *pvVar1;
  byte bVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong unaff_RBP;
  undefined7 uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  uint local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))();
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),3);
    if (cVar5 == '\0') goto LAB_1476895c9;
  }
  uVar10 = (undefined7)(unaff_RBP >> 8);
  if (param_3 == '\x01') {
    if (param_4 == '\0') {
      local_38 = *(uint *)(*(longlong *)(param_1 + 0x68) + 8 + (longlong)param_2 * 0xc);
      local_40 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0xc);
      FUN_147689e9a(param_1 + 0x18);
      FUN_147689f72(param_1 + 0x68,param_2);
      uVar6 = *(uint *)(param_1 + 0xa8);
      lVar3 = *(longlong *)(param_1 + 0xa0);
      uVar14 = 0;
      if (0 < (int)uVar6) {
        uVar9 = (ulonglong)uVar6;
        uVar12 = uVar6;
        do {
          uVar9 = uVar9 >> 1;
          uVar13 = (uint)uVar9 + uVar14;
          if (*(int *)(lVar3 + (ulonglong)uVar13 * 8) < param_2) {
            uVar14 = uVar13 + (uVar12 & 1);
          }
          bVar4 = 1 < uVar12;
          uVar12 = (uint)uVar9;
        } while (bVar4);
      }
      if (((int)uVar14 < (int)uVar6) && (*(int *)(lVar3 + (ulonglong)uVar14 * 8) <= param_2)) {
        if (~uVar14 + uVar6 != 0) {
          pvVar1 = (void *)(lVar3 + (ulonglong)uVar14 * 8);
          memmove(pvVar1,(void *)((longlong)pvVar1 + 8),(longlong)(int)(~uVar14 + uVar6) << 3);
          uVar6 = *(uint *)(param_1 + 0xa8);
        }
        *(uint *)(param_1 + 0xa8) = uVar6 - 1;
LAB_1476898e1:
        FUN_147689fe4(param_1 + 0xa0);
      }
LAB_14768972e:
      if ((local_38 & 0x100) != 0) {
        FUN_14765abdc(&local_40,(undefined1)local_38);
      }
      unaff_RBP = 0;
      goto LAB_1476895c9;
    }
    unaff_RBP = CONCAT71(uVar10,3);
    if ((*(byte *)(*(longlong *)(param_1 + 0x68) + 9 + (longlong)param_2 * 0xc) & 1) == 0)
    goto LAB_1476895c9;
    puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0xc);
  }
  else {
    uVar6 = *(uint *)(param_1 + 0xa8);
    lVar3 = *(longlong *)(param_1 + 0xa0);
    uVar9 = 0;
    if (0 < (int)uVar6) {
      uVar11 = (ulonglong)uVar6;
      uVar14 = uVar6;
      do {
        uVar11 = uVar11 >> 1;
        uVar12 = (uint)uVar11 + (int)uVar9;
        if (*(int *)(lVar3 + (ulonglong)uVar12 * 8) < param_2) {
          uVar9 = (ulonglong)(uVar12 + (uVar14 & 1));
        }
        bVar4 = 1 < uVar14;
        uVar14 = (uint)uVar11;
      } while (bVar4);
    }
    if ((((int)uVar9 < (int)uVar6) && (*(int *)(lVar3 + uVar9 * 8) <= param_2)) &&
       (puVar7 = (undefined1 *)(lVar3 + uVar9 * 8 + 4), puVar7 != (undefined1 *)0x0)) {
      FUN_14765abdc((longlong)param_2 * 0xc + *(longlong *)(param_1 + 0x68),
                    CONCAT71((int7)(uVar9 >> 8),*puVar7));
      uVar6 = *(uint *)(param_1 + 0xa8);
      lVar3 = *(longlong *)(param_1 + 0xa0);
      uVar12 = 0;
      uVar14 = uVar6;
      if (0 < (int)uVar6) {
        do {
          uVar13 = (uVar14 >> 1) + uVar12;
          if (*(int *)(lVar3 + (ulonglong)uVar13 * 8) < param_2) {
            uVar12 = uVar13 + (uVar14 & 1);
          }
          bVar4 = 1 < uVar14;
          uVar14 = uVar14 >> 1;
        } while (bVar4);
      }
      unaff_RBP = CONCAT71(uVar10,1);
      if (((int)uVar12 < (int)uVar6) && (*(int *)(lVar3 + (ulonglong)uVar12 * 8) <= param_2)) {
        if (~uVar12 + uVar6 != 0) {
          pvVar1 = (void *)(lVar3 + (ulonglong)uVar12 * 8);
          memmove(pvVar1,(void *)((longlong)pvVar1 + 8),(longlong)(int)(~uVar12 + uVar6) << 3);
          uVar6 = *(uint *)(param_1 + 0xa8);
        }
        *(uint *)(param_1 + 0xa8) = uVar6 - 1;
        FUN_147689fe4(param_1 + 0xa0);
      }
      goto LAB_1476895c9;
    }
    unaff_RBP = CONCAT71(uVar10,1);
    if (param_4 == '\x01') {
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0x68) + 9 + (longlong)param_2 * 0xc);
      if ((bVar2 & 1) == 0) goto LAB_1476895c9;
      puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0xc);
      *(byte *)((longlong)puVar8 + 9) = bVar2 | 2;
    }
    else {
      if (param_4 != '\0') goto LAB_1476895c9;
      puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0xc);
      if ((*(byte *)((longlong)puVar8 + 9) & 2) == 0) {
        local_38 = *(uint *)(puVar8 + 1);
        local_40 = *puVar8;
        FUN_147689e9a(param_1 + 0x18);
        FUN_147689f72(param_1 + 0x68,param_2);
        uVar6 = *(uint *)(param_1 + 0xa8);
        lVar3 = *(longlong *)(param_1 + 0xa0);
        uVar14 = 0;
        if (0 < (int)uVar6) {
          uVar9 = (ulonglong)uVar6;
          uVar12 = uVar6;
          do {
            uVar9 = uVar9 >> 1;
            uVar13 = (uint)uVar9 + uVar14;
            if (*(int *)(lVar3 + (ulonglong)uVar13 * 8) < param_2) {
              uVar14 = uVar13 + (uVar12 & 1);
            }
            bVar4 = 1 < uVar12;
            uVar12 = (uint)uVar9;
          } while (bVar4);
        }
        if (((int)uVar14 < (int)uVar6) && (*(int *)(lVar3 + (ulonglong)uVar14 * 8) <= param_2)) {
          if (~uVar14 + uVar6 != 0) {
            pvVar1 = (void *)(lVar3 + (ulonglong)uVar14 * 8);
            memmove(pvVar1,(void *)((longlong)pvVar1 + 8),(longlong)(int)(~uVar14 + uVar6) << 3);
            uVar6 = *(uint *)(param_1 + 0xa8);
          }
          *(uint *)(param_1 + 0xa8) = uVar6 - 1;
          goto LAB_1476898e1;
        }
        goto LAB_14768972e;
      }
      if ((*(byte *)((longlong)puVar8 + 9) & 1) == 0) goto LAB_1476895c9;
    }
  }
  FUN_14765abdc(puVar8,*(undefined1 *)(puVar8 + 1));
LAB_1476895c9:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 1476898ec FUN_1476898ec body=444 status=ok
// SIG undefined FUN_1476898ec(void)

undefined8 FUN_1476898ec(longlong param_1,int param_2,char param_3)

{
  void *pvVar1;
  byte *pbVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0xb8);
  lVar13 = (longlong)param_2;
  if (plVar3 != (longlong *)0x0) {
    cVar6 = (**(code **)(*plVar3 + 8))(plVar3,lVar13 * 0xc + *(longlong *)(param_1 + 0x68));
    uVar8 = 3;
    if (cVar6 == '\0') goto LAB_147689995;
  }
  if (param_3 == '\x01') {
    local_30 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + lVar13 * 0xc);
    FUN_147689e9a(param_1 + 0x18);
    FUN_147689f72(param_1 + 0x68,param_2);
    uVar7 = *(uint *)(param_1 + 0xa8);
    uVar9 = (ulonglong)uVar7;
    lVar13 = *(longlong *)(param_1 + 0xa0);
    uVar12 = 0;
    if (0 < (int)uVar7) {
      do {
        uVar11 = (int)(uVar9 >> 1) + uVar12;
        uVar10 = (uint)uVar9;
        if (*(int *)(lVar13 + (ulonglong)uVar11 * 8) < param_2) {
          uVar12 = uVar11 + (uVar10 & 1);
        }
        uVar9 = uVar9 >> 1;
      } while (1 < uVar10);
    }
    if (((int)uVar12 < (int)uVar7) && (*(int *)(lVar13 + (ulonglong)uVar12 * 8) <= param_2)) {
      if (~uVar12 + uVar7 != 0) {
        pvVar1 = (void *)(lVar13 + (ulonglong)uVar12 * 8);
        memmove(pvVar1,(void *)((longlong)pvVar1 + 8),(longlong)(int)(~uVar12 + uVar7) << 3);
        uVar7 = *(uint *)(param_1 + 0xa8);
      }
      *(uint *)(param_1 + 0xa8) = uVar7 - 1;
      FUN_147689fe4(param_1 + 0xa0);
    }
    uVar8 = 0;
  }
  else {
    uVar7 = *(uint *)(param_1 + 0xa8);
    lVar4 = *(longlong *)(param_1 + 0xa0);
    uVar10 = 0;
    uVar12 = uVar7;
    if (0 < (int)uVar7) {
      do {
        uVar11 = (uVar12 >> 1) + uVar10;
        if (*(int *)(lVar4 + (ulonglong)uVar11 * 8) < param_2) {
          uVar10 = uVar11 + (uVar12 & 1);
        }
        bVar5 = 1 < uVar12;
        uVar12 = uVar12 >> 1;
      } while (bVar5);
    }
    if (((int)uVar10 < (int)uVar7) && (*(int *)(lVar4 + (ulonglong)uVar10 * 8) <= param_2)) {
      if (~uVar10 + uVar7 != 0) {
        pvVar1 = (void *)(lVar4 + (ulonglong)uVar10 * 8);
        memmove(pvVar1,(void *)((longlong)pvVar1 + 8),(longlong)(int)(~uVar10 + uVar7) << 3);
        uVar7 = *(uint *)(param_1 + 0xa8);
      }
      *(uint *)(param_1 + 0xa8) = uVar7 - 1;
      FUN_147689fe4(param_1 + 0xa0);
    }
    else {
      pbVar2 = (byte *)(*(longlong *)(param_1 + 0x68) + 9 + lVar13 * 0xc);
      *pbVar2 = *pbVar2 | 2;
    }
    uVar8 = 1;
  }
LAB_147689995:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 147689aaa FUN_147689aaa body=436 status=ok
// SIG undefined FUN_147689aaa(void)

void FUN_147689aaa(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 local_80;
  longlong lStack_78;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  longlong local_60;
  longlong local_58;
  undefined2 local_50;
  undefined8 local_48;
  longlong lStack_40;
  uint local_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = param_1 + 0x18;
  lStack_40 = param_1 + 0x28;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  uStack_30 = 0;
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_1449c0562(&local_48);
  }
  local_70 = local_38;
  iStack_6c = iStack_34;
  uStack_68 = CONCAT44(uStack_2c,uStack_30);
  local_80 = local_48;
  lStack_78 = lStack_40;
  local_50 = 0;
  local_88 = lVar1;
  local_60 = lVar1;
  local_58 = lVar1;
  if (iStack_34 < *(int *)(lStack_40 + 0x18)) {
    do {
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (iStack_6c < *(int *)(lStack_78 + 0x18));
    if (((local_50 & 1) != 0) && (local_50._1_1_ == '\x01')) {
      FUN_14768862e(local_58,*(int *)(local_58 + 8) - *(int *)(local_58 + 0x34));
    }
  }
  lVar1 = param_1 + 0x68;
  lVar2 = param_1 + 0x78;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  uStack_30 = 0;
  lStack_40 = lVar2;
  if (*(int *)(param_1 + 0x90) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_48);
    iVar3 = *(int *)(param_1 + 0x90);
  }
  uStack_68 = CONCAT44(uStack_2c,uStack_30);
  local_80._0_4_ = (undefined4)local_48;
  local_80._4_4_ = local_48._4_4_;
  lStack_78 = lStack_40;
  local_70 = local_38;
  iStack_6c = iStack_34;
  local_88 = lVar1;
  if ((iStack_34 != iVar3) || (lStack_40 != lVar2)) {
    do {
      do {
        local_70 = local_70 & ~local_80._4_4_;
        FUN_1449c0562(&local_80);
      } while (iStack_6c != iVar3);
    } while ((lStack_78 != lVar2) || (local_88 != lVar1));
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147689c60 FUN_147689c60 body=38 status=ok
// SIG undefined FUN_147689c60(void)

undefined8 FUN_147689c60(undefined8 param_1,int param_2)

{
  FUN_147689da2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147689c86 FUN_147689c86 body=52 status=ok
// SIG undefined FUN_147689c86(void)

void FUN_147689c86(longlong *param_1)

{
  FUN_147689cba();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}


