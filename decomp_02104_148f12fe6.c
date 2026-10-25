// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148f12fe6 FUN_148f12fe6 body=101 status=ok
// SIG undefined FUN_148f12fe6(void)

void FUN_148f12fe6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9deb20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148f1304c FUN_148f1304c body=134 status=ok
// SIG undefined FUN_148f1304c(void)

void FUN_148f1304c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9deb20;
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
                    /* WARNING: Could not recover jumptable at 0x000148f130c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f130d2 FUN_148f130d2 body=39 status=ok
// SIG undefined FUN_148f130d2(void)

void FUN_148f130d2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148f130f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148f130fa FUN_148f130fa body=146 status=ok
// SIG undefined FUN_148f130fa(void)

bool FUN_148f130fa(longlong param_1)

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



// FUNCTION 148f1318e FUN_148f1318e body=67 status=ok
// SIG undefined FUN_148f1318e(void)

void FUN_148f1318e(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  (**(code **)*param_1)(((undefined8 *)*param_1)[1]);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f131d2 FUN_148f131d2 body=288 status=ok
// SIG undefined FUN_148f131d2(void)

undefined4 * FUN_148f131d2(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1458c09f4(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  FUN_1411b79c1(0,0);
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_58 = 0;
  cVar1 = FUN_1458c0912(param_1,param_3,local_40,local_48);
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
      FUN_1458c0ada(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f132f4 FUN_148f132f4 body=29 status=ok
// SIG undefined FUN_148f132f4(void)

undefined8 FUN_148f132f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f1332c FUN_148f1332c body=29 status=ok
// SIG undefined FUN_148f1332c(void)

bool FUN_148f1332c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148f1334a FUN_148f1334a body=26 status=ok
// SIG undefined FUN_148f1334a(void)

bool FUN_148f1334a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148f13364 FUN_148f13364 body=24 status=ok
// SIG undefined FUN_148f13364(void)

bool FUN_148f13364(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148f1337c FUN_148f1337c body=101 status=ok
// SIG undefined FUN_148f1337c(void)

void FUN_148f1337c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dec20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148f133e2 FUN_148f133e2 body=101 status=ok
// SIG undefined FUN_148f133e2(void)

void FUN_148f133e2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dec20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148f13448 FUN_148f13448 body=134 status=ok
// SIG undefined FUN_148f13448(void)

void FUN_148f13448(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b972ed0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9dec20;
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
                    /* WARNING: Could not recover jumptable at 0x000148f134bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f134ce FUN_148f134ce body=52 status=ok
// SIG undefined FUN_148f134ce(void)

void FUN_148f134ce(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148f134ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148f13502 FUN_148f13502 body=167 status=ok
// SIG undefined FUN_148f13502(void)

bool FUN_148f13502(longlong param_1,undefined8 param_2,undefined4 param_3)

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



// FUNCTION 148f135aa FUN_148f135aa body=308 status=ok
// SIG undefined FUN_148f135aa(void)

void FUN_148f135aa(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar5 = *(int *)(param_1 + 0x268);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar5) || (uStack_58 != lVar2)) {
    do {
      lVar4 = *(longlong *)(*local_88 + (longlong)iStack_6c * 0x10);
      if (lVar4 != 0) {
        iVar3 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
          FUN_14088b8ea(param_2,iVar3);
        }
        *(longlong *)(*param_2 + (longlong)iVar3 * 8) = lVar4;
      }
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar5));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f136e0 FUN_148f136e0 body=62 status=ok
// SIG undefined FUN_148f136e0(void)

void FUN_148f136e0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148f1371e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x40,8);
  }
  return;
}



// FUNCTION 148f1371e FUN_148f1371e body=93 status=ok
// SIG undefined FUN_148f1371e(void)

ulonglong FUN_148f1371e(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 6,8);
      uVar1 = uVar1 >> 6;
    }
  }
  return uVar1;
}



// FUNCTION 148f1377c FUN_148f1377c body=62 status=ok
// SIG undefined FUN_148f1377c(void)

void FUN_148f1377c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148f137ba(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 148f137ba FUN_148f137ba body=112 status=ok
// SIG undefined FUN_148f137ba(void)

ulonglong FUN_148f137ba(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148f137f4;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x18,8);
      param_2 = param_2 / 0x18;
    }
  }
LAB_148f137f4:
  return param_2 & 0xffffffff;
}



// FUNCTION 148f1382a FUN_148f1382a body=147 status=ok
// SIG undefined FUN_148f1382a(void)

void FUN_148f1382a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148f138be FUN_148f138be body=83 status=ok
// SIG undefined FUN_148f138be(void)

longlong * FUN_148f138be(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_1465a3a92();
    cVar2 = FUN_1448093f4(lVar1,uVar3);
    if (cVar2 != '\0') {
      *param_2 = *param_1;
      lVar1 = param_1[1];
      param_2[1] = lVar1;
      if (lVar1 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 148f1392a FUN_148f1392a body=29 status=ok
// SIG undefined FUN_148f1392a(void)

undefined8 FUN_148f1392a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f13948 FUN_148f13948 body=138 status=ok
// SIG undefined FUN_148f13948(void)

void FUN_148f13948(char *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*param_1 == '\x03') {
    plVar3 = *(longlong **)(param_1 + 0x10);
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
  else if (*param_1 == '\x01') {
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
  }
  *param_1 = '\x03';
  *(undefined8 *)(param_1 + 8) = *param_2;
  lVar2 = param_2[1];
  *(longlong *)(param_1 + 0x10) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  param_1[0x20] = '\0';
  param_1[0x18] = '\0';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,*(int *)(param_1 + 0x28) + -1,1);
    param_1[0x28] = '\0';
    param_1[0x29] = '\0';
    param_1[0x2a] = '\0';
    param_1[0x2b] = '\0';
  }
  return;
}



// FUNCTION 148f139d2 FUN_148f139d2 body=9 status=ok
// SIG undefined FUN_148f139d2(void)

void FUN_148f139d2(longlong param_1)

{
  FUN_140e02a86(param_1 + 0x10);
  return;
}



// FUNCTION 148f139dc FUN_148f139dc body=29 status=ok
// SIG undefined FUN_148f139dc(void)

undefined8 FUN_148f139dc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f139f9 FUN_148f139f9 body=17 status=ok
// SIG undefined FUN_148f139f9(void)

void FUN_148f139f9(void *param_1,ulonglong param_2)

{
  memset(param_1,0,(param_2 & 0xffffffff) * 0x18);
  return;
}



// FUNCTION 148f13a0a FUN_148f13a0a body=147 status=ok
// SIG undefined FUN_148f13a0a(void)

void FUN_148f13a0a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148f13a9e FUN_148f13a9e body=84 status=ok
// SIG undefined FUN_148f13a9e(void)

void FUN_148f13a9e(longlong *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)(*param_1 + 0x18);
  FUN_140e02b28(_Dst);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + 1);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (ulonglong)param_2 * 0x18),(longlong)iVar2 * 0x18);
    iVar1 = (int)param_1[1];
  }
  *(uint *)(param_1 + 1) = iVar1 - param_2;
  return;
}



// FUNCTION 148f13af2 FUN_148f13af2 body=62 status=ok
// SIG undefined FUN_148f13af2(void)

void FUN_148f13af2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148f13b30(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 148f13b30 FUN_148f13b30 body=112 status=ok
// SIG undefined FUN_148f13b30(void)

ulonglong FUN_148f13b30(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148f13b6a;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x18,8);
      param_2 = param_2 / 0x18;
    }
  }
LAB_148f13b6a:
  return param_2 & 0xffffffff;
}



// FUNCTION 148f13ba0 FUN_148f13ba0 body=83 status=ok
// SIG undefined FUN_148f13ba0(void)

longlong * FUN_148f13ba0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_141845ccc();
    cVar2 = FUN_1448093f4(lVar1,uVar3);
    if (cVar2 != '\0') {
      *param_2 = *param_1;
      lVar1 = param_1[1];
      param_2[1] = lVar1;
      if (lVar1 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 148f13c0e FUN_148f13c0e body=29 status=ok
// SIG undefined FUN_148f13c0e(void)

bool FUN_148f13c0e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148f13c2c FUN_148f13c2c body=26 status=ok
// SIG undefined FUN_148f13c2c(void)

bool FUN_148f13c2c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148f13c46 FUN_148f13c46 body=93 status=ok
// SIG undefined FUN_148f13c46(void)

void FUN_148f13c46(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8700;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9decf0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148f13ca4 FUN_148f13ca4 body=93 status=ok
// SIG undefined FUN_148f13ca4(void)

void FUN_148f13ca4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8700;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9decf0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148f13d02 FUN_148f13d02 body=126 status=ok
// SIG undefined FUN_148f13d02(void)

void FUN_148f13d02(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8700;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9decf0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148f13d71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f13d80 FUN_148f13d80 body=64 status=ok
// SIG undefined FUN_148f13d80(void)

void FUN_148f13d80(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148f13dbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3);
  return;
}



// FUNCTION 148f13dda FUN_148f13dda body=93 status=ok
// SIG undefined FUN_148f13dda(void)

void FUN_148f13dda(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e35290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9ded60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148f13e38 FUN_148f13e38 body=126 status=ok
// SIG undefined FUN_148f13e38(void)

void FUN_148f13e38(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e35290;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9ded60;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148f13ea7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f13eb6 FUN_148f13eb6 body=38 status=ok
// SIG undefined FUN_148f13eb6(void)

void FUN_148f13eb6(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148f13ed9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148f13edc FUN_148f13edc body=1 status=ok
// SIG undefined FUN_148f13edc(void)

void FUN_148f13edc(void)

{
  return;
}



// FUNCTION 148f13ede FUN_148f13ede body=29 status=ok
// SIG undefined FUN_148f13ede(void)

undefined8 FUN_148f13ede(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f13efc FUN_148f13efc body=31 status=ok
// SIG undefined FUN_148f13efc(void)

undefined8 FUN_148f13efc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f13f22 FUN_148f13f22 body=29 status=ok
// SIG undefined FUN_148f13f22(void)

bool FUN_148f13f22(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148f13f40 FUN_148f13f40 body=26 status=ok
// SIG undefined FUN_148f13f40(void)

bool FUN_148f13f40(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148f13f5a FUN_148f13f5a body=93 status=ok
// SIG undefined FUN_148f13f5a(void)

void FUN_148f13f5a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9dedf0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148f13fb8 FUN_148f13fb8 body=126 status=ok
// SIG undefined FUN_148f13fb8(void)

void FUN_148f13fb8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9dedf0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148f14027. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f14036 FUN_148f14036 body=142 status=ok
// SIG undefined FUN_148f14036(void)

bool FUN_148f14036(longlong param_1)

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
    (**(code **)(param_1 + 0x20))(lVar2);
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



// FUNCTION 148f140c6 FUN_148f140c6 body=48 status=ok
// SIG undefined FUN_148f140c6(void)

void FUN_148f140c6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xc,4);
  }
  return;
}



// FUNCTION 148f140f6 FUN_148f140f6 body=147 status=ok
// SIG undefined FUN_148f140f6(void)

void FUN_148f140f6(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148f1418a FUN_148f1418a body=132 status=ok
// SIG undefined FUN_148f1418a(void)

void FUN_148f1418a(longlong param_1,int param_2)

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



// FUNCTION 148f14210 FUN_148f14210 body=29 status=ok
// SIG undefined FUN_148f14210(void)

undefined8 FUN_148f14210(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f14248 FUN_148f14248 body=29 status=ok
// SIG undefined FUN_148f14248(void)

bool FUN_148f14248(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148f14266 FUN_148f14266 body=26 status=ok
// SIG undefined FUN_148f14266(void)

bool FUN_148f14266(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148f14280 FUN_148f14280 body=24 status=ok
// SIG undefined FUN_148f14280(void)

bool FUN_148f14280(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148f14298 FUN_148f14298 body=93 status=ok
// SIG undefined FUN_148f14298(void)

void FUN_148f14298(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9df070;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148f142f6 FUN_148f142f6 body=93 status=ok
// SIG undefined FUN_148f142f6(void)

void FUN_148f142f6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9df070;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148f14354 FUN_148f14354 body=126 status=ok
// SIG undefined FUN_148f14354(void)

void FUN_148f14354(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9ef0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9df070;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148f143c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f143d2 FUN_148f143d2 body=40 status=ok
// SIG undefined FUN_148f143d2(void)

void FUN_148f143d2(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148f143f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148f143fa FUN_148f143fa body=152 status=ok
// SIG undefined FUN_148f143fa(void)

bool FUN_148f143fa(longlong param_1,undefined8 param_2)

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



// FUNCTION 148f14494 FUN_148f14494 body=29 status=ok
// SIG undefined FUN_148f14494(void)

undefined8 FUN_148f14494(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f144cc FUN_148f144cc body=29 status=ok
// SIG undefined FUN_148f144cc(void)

bool FUN_148f144cc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148f144ea FUN_148f144ea body=26 status=ok
// SIG undefined FUN_148f144ea(void)

bool FUN_148f144ea(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148f14504 FUN_148f14504 body=24 status=ok
// SIG undefined FUN_148f14504(void)

bool FUN_148f14504(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148f1451c FUN_148f1451c body=93 status=ok
// SIG undefined FUN_148f1451c(void)

void FUN_148f1451c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9df0e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148f1457a FUN_148f1457a body=93 status=ok
// SIG undefined FUN_148f1457a(void)

void FUN_148f1457a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9df0e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148f145d8 FUN_148f145d8 body=126 status=ok
// SIG undefined FUN_148f145d8(void)

void FUN_148f145d8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9df0e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148f14647. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f14656 FUN_148f14656 body=35 status=ok
// SIG undefined FUN_148f14656(void)

void FUN_148f14656(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148f14675. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 148f1467a FUN_148f1467a body=142 status=ok
// SIG undefined FUN_148f1467a(void)

bool FUN_148f1467a(longlong param_1)

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
    (**(code **)(param_1 + 0x20))(lVar2);
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



// FUNCTION 148f14709 FUN_148f14709 body=19 status=ok
// SIG undefined FUN_148f14709(void)

void FUN_148f14709(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 4);
    return;
  }
  return;
}



// FUNCTION 148f1471c FUN_148f1471c body=89 status=ok
// SIG undefined FUN_148f1471c(void)

void FUN_148f1471c(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x10 + *param_1);
  FUN_140368c45(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 148f14776 FUN_148f14776 body=62 status=ok
// SIG undefined FUN_148f14776(void)

void FUN_148f14776(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148f147b4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 148f147b4 FUN_148f147b4 body=93 status=ok
// SIG undefined FUN_148f147b4(void)

ulonglong FUN_148f147b4(uint param_1,uint param_2)

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



// FUNCTION 148f1481e FUN_148f1481e body=137 status=ok
// SIG undefined FUN_148f1481e(void)

float FUN_148f1481e(longlong param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = *(float *)(param_1 + 0x2c8);
  fVar1 = *(float *)(param_1 + 0x3c8);
  if ((fVar1 != 0.0) || (NAN(fVar1))) {
    if (*(int *)(param_1 + 0x3a8) < 1) {
      iVar2 = FUN_14119091a(param_1);
      fVar4 = (float)iVar2;
      fVar3 = *(float *)(param_1 + 0x3c8);
    }
    else {
      fVar4 = *(float *)(param_1 + 0x3b0);
      fVar3 = fVar1;
    }
    fVar5 = fVar1 * fVar4 + fVar5;
    fVar1 = 0.0;
    if (0.0 <= fVar5) {
      fVar1 = fVar5;
    }
    fVar5 = (float)((uint)fVar1 & -(uint)(fVar3 < 0.0) | ~-(uint)(fVar3 < 0.0) & (uint)fVar5);
  }
  return fVar5;
}



// FUNCTION 148f148a8 FUN_148f148a8 body=193 status=ok
// SIG undefined FUN_148f148a8(void)

void FUN_148f148a8(longlong *param_1)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  cVar2 = FUN_14130ac92(param_1[6]);
  if ((cVar2 != '\0') && (param_1[0x20] != 0)) {
    lVar3 = (**(code **)(*param_1 + 0x180))(param_1);
    if (*(longlong *)(lVar3 + 0x1f0) == 0) {
      puVar4 = (undefined8 *)(lVar3 + 0x458);
    }
    else {
      puVar4 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
    }
    uVar1 = *puVar4;
    lVar3 = FUN_144a61814(uVar1,param_1 + 0x20);
    if (lVar3 != 0) {
      FUN_1405a424c(uVar1,param_1[0x20]);
    }
    param_1[0x20] = 0;
    (**(code **)(*(longlong *)param_1[6] + 0x808))((longlong *)param_1[6],0xffffffff,0,0);
    FUN_14114867a(param_1,0);
    FUN_1447f69b6(param_1 + 0xe);
    return;
  }
  return;
}



// FUNCTION 148f1496a FUN_148f1496a body=58 status=ok
// SIG undefined FUN_148f1496a(void)

ulonglong FUN_148f1496a(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  undefined7 uVar3;
  
  uVar3 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar2 = CONCAT71(uVar3,1);
  if (param_2 != 0) {
    lVar1 = FUN_14018fcd2();
    if (*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) {
      uVar2 = CONCAT71(uVar3,*(longlong *)
                              (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
                              (longlong)*(int *)(lVar1 + 0x38) * 8) != lVar1 + 0x30);
    }
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 148f149a4 FUN_148f149a4 body=112 status=ok
// SIG undefined FUN_148f149a4(void)

void FUN_148f149a4(longlong param_1,float param_2)

{
  if (param_2 <= *(float *)(param_1 + 0xe8)) {
    if (*(int *)(param_1 + 0x130) != 0) {
      FUN_14107bcb4(*(undefined8 *)(param_1 + 0x30),param_1 + 0x128,0);
      *(undefined4 *)(param_1 + 0x130) = 0;
      if (*(int *)(param_1 + 0x134) < 0) {
        FUN_146551c6e(param_1 + 0x128,0);
      }
    }
    *(undefined4 *)(param_1 + 0xe4) = 0;
    *(undefined8 *)(param_1 + 0xdc) = 0;
  }
  return;
}



// FUNCTION 148f14a14 thunk_FUN_141131d4c body=5 status=ok
// SIG undefined thunk_FUN_141131d4c(void)

void thunk_FUN_141131d4c(longlong param_1)

{
  byte bVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint *puVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  
  if (*(char *)(*(longlong *)(param_1 + 0x30) + 0x178) != '\x03') {
    return;
  }
  iVar10 = (int)((float)(*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xb4)) * 0.5 +
                (float)*(int *)(param_1 + 0xb4));
  uVar3 = rand();
  fVar11 = *(float *)(param_1 + 0xf4);
  if ((float)(uVar3 & 0x7fff) / 32767.0 < fVar11) {
    *(float *)(param_1 + 0xf4) = fVar11 - *(float *)(param_1 + 200);
    iVar9 = *(int *)(param_1 + 0xb4);
    iVar10 = iVar10 - iVar9;
    if (iVar10 < 0) {
      iVar10 = 0;
    }
    else {
      uVar3 = rand();
      iVar4 = (int)((float)(iVar10 + 1) * ((float)(uVar3 & 0x7fff) / 32767.0));
      if (iVar4 < iVar10) {
        iVar10 = iVar4;
      }
    }
    iVar10 = iVar10 + iVar9;
    if (*(int *)(param_1 + 0xcc) == iVar10) goto LAB_141131e47;
    *(int *)(param_1 + 0xcc) = iVar10;
  }
  else {
    *(float *)(param_1 + 0xf4) = fVar11 + *(float *)(param_1 + 200);
    iVar9 = *(int *)(param_1 + 0xc0) - iVar10;
    if (iVar9 < 0) {
      iVar9 = 0;
    }
    else {
      uVar3 = rand();
      iVar4 = (int)((float)(iVar9 + 1) * ((float)(uVar3 & 0x7fff) / 32767.0));
      if (iVar4 < iVar9) {
        iVar9 = iVar4;
      }
    }
    if (*(int *)(param_1 + 0xcc) == iVar9 + iVar10) goto LAB_141131e47;
    *(int *)(param_1 + 0xcc) = iVar9 + iVar10;
  }
  uVar2 = *(ulonglong *)(param_1 + 0x38);
  if (uVar2 < 0xffffffff00000000) {
    plVar8 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar8 = (longlong *)0x0;
    }
    (**(code **)(*plVar8 + 0x58))(plVar8,param_1,uVar2,1);
  }
  else {
    uVar3 = (uint)uVar2;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c998088)) {
      puVar6 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar6 = DAT_14c998080;
      }
      if ((*(uint *)(puVar6 + ((uint)(uVar2 >> 3) & 0xffffffc)) >> (uVar3 & 0x1f) & 1) != 0) {
        lVar5 = DAT_14c998060 + (ulonglong)(uVar3 & 0x7fffffff) * 0x68;
        puVar7 = *(uint **)(lVar5 + 0x18);
        if (*(uint **)(lVar5 + 0x18) == (uint *)0x0) {
          puVar7 = (uint *)(lVar5 + 8);
        }
        *puVar7 = *puVar7 | 2;
        *(byte *)(lVar5 + 0x60) = *(byte *)(lVar5 + 0x60) | 1;
      }
    }
  }
LAB_141131e47:
  *(undefined4 *)(param_1 + 0xd0) = 0;
  lVar5 = *(longlong *)(param_1 + 0x30);
  bVar1 = *(byte *)(lVar5 + 0xbd8);
  if (((int)(uint)bVar1 < *(int *)(lVar5 + 0xbf0)) &&
     (plVar8 = *(longlong **)
                (*(longlong *)(lVar5 + 0xbe8) + 8 + (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8),
     plVar8 != (longlong *)0x0)) {
    fVar11 = (float)(**(code **)(*plVar8 + 0x350))();
    *(float *)(param_1 + 0xd0) = (float)*(int *)(param_1 + 0xcc) * fVar11;
  }
  return;
}



// FUNCTION 148f14a1a thunk_FUN_141131d4c body=5 status=ok
// SIG undefined thunk_FUN_141131d4c(void)

void thunk_FUN_141131d4c(longlong param_1)

{
  byte bVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint *puVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  
  if (*(char *)(*(longlong *)(param_1 + 0x30) + 0x178) != '\x03') {
    return;
  }
  iVar10 = (int)((float)(*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xb4)) * 0.5 +
                (float)*(int *)(param_1 + 0xb4));
  uVar3 = rand();
  fVar11 = *(float *)(param_1 + 0xf4);
  if ((float)(uVar3 & 0x7fff) / 32767.0 < fVar11) {
    *(float *)(param_1 + 0xf4) = fVar11 - *(float *)(param_1 + 200);
    iVar9 = *(int *)(param_1 + 0xb4);
    iVar10 = iVar10 - iVar9;
    if (iVar10 < 0) {
      iVar10 = 0;
    }
    else {
      uVar3 = rand();
      iVar4 = (int)((float)(iVar10 + 1) * ((float)(uVar3 & 0x7fff) / 32767.0));
      if (iVar4 < iVar10) {
        iVar10 = iVar4;
      }
    }
    iVar10 = iVar10 + iVar9;
    if (*(int *)(param_1 + 0xcc) == iVar10) goto LAB_141131e47;
    *(int *)(param_1 + 0xcc) = iVar10;
  }
  else {
    *(float *)(param_1 + 0xf4) = fVar11 + *(float *)(param_1 + 200);
    iVar9 = *(int *)(param_1 + 0xc0) - iVar10;
    if (iVar9 < 0) {
      iVar9 = 0;
    }
    else {
      uVar3 = rand();
      iVar4 = (int)((float)(iVar9 + 1) * ((float)(uVar3 & 0x7fff) / 32767.0));
      if (iVar4 < iVar9) {
        iVar9 = iVar4;
      }
    }
    if (*(int *)(param_1 + 0xcc) == iVar9 + iVar10) goto LAB_141131e47;
    *(int *)(param_1 + 0xcc) = iVar9 + iVar10;
  }
  uVar2 = *(ulonglong *)(param_1 + 0x38);
  if (uVar2 < 0xffffffff00000000) {
    plVar8 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar8 = (longlong *)0x0;
    }
    (**(code **)(*plVar8 + 0x58))(plVar8,param_1,uVar2,1);
  }
  else {
    uVar3 = (uint)uVar2;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c998088)) {
      puVar6 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar6 = DAT_14c998080;
      }
      if ((*(uint *)(puVar6 + ((uint)(uVar2 >> 3) & 0xffffffc)) >> (uVar3 & 0x1f) & 1) != 0) {
        lVar5 = DAT_14c998060 + (ulonglong)(uVar3 & 0x7fffffff) * 0x68;
        puVar7 = *(uint **)(lVar5 + 0x18);
        if (*(uint **)(lVar5 + 0x18) == (uint *)0x0) {
          puVar7 = (uint *)(lVar5 + 8);
        }
        *puVar7 = *puVar7 | 2;
        *(byte *)(lVar5 + 0x60) = *(byte *)(lVar5 + 0x60) | 1;
      }
    }
  }
LAB_141131e47:
  *(undefined4 *)(param_1 + 0xd0) = 0;
  lVar5 = *(longlong *)(param_1 + 0x30);
  bVar1 = *(byte *)(lVar5 + 0xbd8);
  if (((int)(uint)bVar1 < *(int *)(lVar5 + 0xbf0)) &&
     (plVar8 = *(longlong **)
                (*(longlong *)(lVar5 + 0xbe8) + 8 + (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8),
     plVar8 != (longlong *)0x0)) {
    fVar11 = (float)(**(code **)(*plVar8 + 0x350))();
    *(float *)(param_1 + 0xd0) = (float)*(int *)(param_1 + 0xcc) * fVar11;
  }
  return;
}



// FUNCTION 148f14a20 FUN_148f14a20 body=75 status=ok
// SIG undefined FUN_148f14a20(void)

void FUN_148f14a20(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_1403ae288(param_1 + 0x68);
  if (cVar2 != '\0') {
    uVar1 = FUN_14008e0ae(param_1 + 0x68);
    FUN_1409d461e(uVar1,param_2,1);
    return;
  }
  return;
}



// FUNCTION 148f14a7a FUN_148f14a7a body=54 status=ok
// SIG undefined FUN_148f14a7a(void)

undefined8 FUN_148f14a7a(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1403ae288(param_1 + 0x68);
  if (cVar1 != '\0') {
    uVar2 = FUN_140280ec4(param_1 + 0x68);
    uVar2 = FUN_143d46e84(uVar2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 148f14ab0 FUN_148f14ab0 body=81 status=ok
// SIG undefined FUN_148f14ab0(void)

float FUN_148f14ab0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  
  cVar1 = FUN_1403ae288(param_1 + 0x68);
  fVar3 = 0.0;
  if (cVar1 != '\0') {
    lVar2 = FUN_140280ec4(0);
    fVar4 = *(float *)(lVar2 + 0x30) - *(float *)(lVar2 + 0x24);
    fVar3 = 0.0;
    if ((fVar4 != 0.0) || (NAN(fVar4))) {
      fVar3 = (*(float *)(lVar2 + 200) - *(float *)(lVar2 + 0x24)) / fVar4;
    }
  }
  return fVar3;
}



// FUNCTION 148f14b14 FUN_148f14b14 body=587 status=ok
// SIG undefined FUN_148f14b14(void)

void FUN_148f14b14(longlong param_1,double *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_58 [32];
  double local_38;
  double local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_1402179b4(*(longlong *)(param_1 + 0x28) + 0x100);
  if (lVar2 != 0) {
    uVar3 = FUN_1401f2ad8(lVar2 + 0x280);
    FUN_14485c47a(param_3 + 0xb0,uVar3);
    lVar2 = *(longlong *)(param_1 + -8);
    if ((((lVar2 != 0) && (0 < *(int *)(lVar2 + 0xd10))) && (**(longlong **)(lVar2 + 0xd08) != 0))
       && (plVar1 = *(longlong **)(**(longlong **)(lVar2 + 0xd08) + 0x48), plVar1 != (longlong *)0x0
          )) {
      (**(code **)(*plVar1 + 0x4b0))
                (plVar1,&local_38,*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x180));
      dVar9 = *param_2;
      dVar5 = param_2[1];
      dVar8 = param_2[2];
      dVar10 = dVar8 * dVar8 + dVar9 * dVar9 + dVar5 * dVar5;
      if (((dVar10 != 1.0) || (dVar4 = dVar9, dVar6 = dVar5, dVar7 = dVar8, NAN(dVar10))) &&
         (dVar4 = DAT_14c8464e0, dVar6 = DAT_14c8464e8, dVar7 = DAT_14c8464f0,
         9.99999993922529e-09 <= dVar10)) {
        dVar10 = 1.0 / SQRT(dVar10);
        dVar4 = dVar9 * dVar10;
        dVar6 = dVar5 * dVar10;
        dVar7 = dVar8 * dVar10;
      }
      dVar9 = (double)(float)SQRT(local_38 * local_38 + local_30 * local_30);
      dVar8 = -dVar7 * dVar9;
      dVar5 = -dVar6 * dVar9;
      dVar9 = -dVar4 * dVar9;
      *(double *)(param_3 + 0x10) = *(double *)(param_3 + 0x10) + dVar9;
      *(double *)(param_3 + 0x18) = *(double *)(param_3 + 0x18) + dVar5;
      *(double *)(param_3 + 0x20) = *(double *)(param_3 + 0x20) + dVar8;
      dVar10 = dVar9 * dVar9 + dVar5 * dVar5;
      if ((dVar10 != 1.0) || (NAN(dVar10))) {
        dVar4 = DAT_14c8464e0;
        dVar6 = DAT_14c8464e8;
        dVar8 = DAT_14c8464f0;
        if (9.99999993922529e-09 <= dVar10) {
          dVar4 = dVar9 * (1.0 / SQRT(dVar10));
          dVar6 = dVar5 * (1.0 / SQRT(dVar10));
          dVar8 = 0.0;
        }
      }
      else {
        dVar4 = dVar9;
        dVar6 = dVar5;
        dVar8 = (double)(-(ulonglong)(dVar8 == 0.0) & (ulonglong)dVar8);
      }
      *(double *)(param_3 + 0x40) = dVar4;
      *(double *)(param_3 + 0x48) = dVar6;
      *(double *)(param_3 + 0x50) = dVar8;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f14d60 FUN_148f14d60 body=463 status=ok
// SIG undefined FUN_148f14d60(void)

void FUN_148f14d60(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  lVar1 = param_1 + -0x38;
  lVar9 = *(longlong *)(param_1 + -8);
  if (lVar9 == 0) goto LAB_148f14d87;
  cVar5 = *(char *)(lVar9 + 0x178);
  lVar11 = *(longlong *)(lVar9 + 0x168);
  if (lVar11 == 0) {
LAB_148f14e42:
    lVar11 = 0;
  }
  else {
    lVar10 = FUN_144a2f878();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x38) < *(int *)(lVar10 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8
         ) != lVar10 + 0x30)) goto LAB_148f14e42;
  }
  if (*(int *)(*(longlong *)(param_1 + 0x28) + 0x148) != 0) {
    bVar2 = *(byte *)(lVar9 + 0xbd8);
    if ((int)(uint)bVar2 < *(int *)(lVar9 + 0xbf0)) {
      plVar4 = *(longlong **)
                (*(longlong *)(lVar9 + 0xbe8) + 0x10 +
                (ulonglong)bVar2 * 0x80 + (ulonglong)bVar2 * 8);
      if (plVar4 != (longlong *)0x0) {
        iVar6 = (**(code **)(*plVar4 + 0x2e8))(plVar4);
        iVar7 = (**(code **)(*plVar4 + 0x2e0))(plVar4);
        if (iVar6 < iVar7) {
          FUN_14592b798(lVar1,9);
        }
        uVar8 = (**(code **)(*plVar4 + 0x330))(plVar4);
        FUN_1401e6366(lVar9,*(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x148),uVar8 ^ 1,0);
        if (lVar11 != 0 && cVar5 == '\x03') {
          FUN_148f1aaee(lVar11 + 0x55b8,*(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x148),1);
        }
      }
    }
  }
  if (lVar11 != 0 && cVar5 == '\x03') {
    FUN_1447f69b6(lVar11 + 0x5860);
  }
LAB_148f14d87:
  lVar9 = FUN_14095dd8e(*(longlong *)(param_1 + 0x28) + 0x118);
  if (lVar9 != 0) {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + -8) + 0x1b0);
    cVar5 = FUN_14899ea9e(uVar3,uVar3,*(longlong *)(param_1 + 0x28) + 0x118,
                          *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x140));
    *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) & 0xf7 | cVar5 * '\b';
    if (cVar5 != '\0') {
      FUN_148f14f30(lVar1);
    }
  }
  *(char *)(param_1 + 0x62) = *(char *)(param_1 + 0x62) + '\x01';
  FUN_144a62f0c(lVar1,*(undefined8 *)(param_1 + 8),2);
  FUN_148f15024(lVar1,param_2);
  return;
}



// FUNCTION 148f14f30 FUN_148f14f30 body=242 status=ok
// SIG undefined FUN_148f14f30(void)

void FUN_148f14f30(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined4 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 0xf0) == 0) && (lVar2 = *(longlong *)(param_1 + 0x30), lVar2 != 0)) {
    bVar1 = *(byte *)(lVar2 + 0xbd8);
    if ((int)(uint)bVar1 < *(int *)(lVar2 + 0xbf0)) {
      lVar2 = *(longlong *)
               ((ulonglong)bVar1 * 0x80 + *(longlong *)(lVar2 + 0xbe8) + 8 + (ulonglong)bVar1 * 8);
      if (lVar2 != 0) {
        local_30 = &LAB_148f153b2;
        local_28 = 0;
        FUN_148f153ba(lVar2 + 0x58,&local_20,param_1);
        *(undefined8 *)(param_1 + 0xf0) = local_20;
      }
    }
  }
  cVar3 = FUN_1404fa388(param_1 + 0x118);
  if (cVar3 == '\0') {
    FUN_14592ba58(param_1,0xb,param_1 + 0x118);
    FUN_14107507c(param_1,1);
  }
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0x140);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f15024 FUN_148f15024 body=134 status=ok
// SIG undefined FUN_148f15024(void)

void FUN_148f15024(longlong param_1,longlong param_2)

{
  undefined1 auStack_128 [32];
  undefined1 local_108 [128];
  char local_88;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (((*(byte *)(param_1 + 0x98) & 1) != 0) && (*(longlong *)(param_2 + 0x478) != 0)) {
    FUN_14095fa38(local_108,param_2 + 800);
    FUN_14592b798(param_1,'\b' - (local_88 == '\0'));
    FUN_141902f66(local_108);
  }
  if ((local_18 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f150ac FUN_148f150ac body=68 status=ok
// SIG undefined FUN_148f150ac(void)

void FUN_148f150ac(longlong *param_1)

{
  longlong lVar1;
  float fVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  fVar2 = *(float *)((longlong)param_1 + 0xcc) - *(float *)(lVar1 + 0x6f4);
  *(float *)((longlong)param_1 + 0xcc) = fVar2;
  if (0.0 < fVar2) {
    return;
  }
  FUN_148f150f0(param_1);
  return;
}



// FUNCTION 148f150f0 FUN_148f150f0 body=123 status=ok
// SIG undefined FUN_148f150f0(void)

void FUN_148f150f0(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x30);
  if (lVar2 != 0) {
    bVar1 = *(byte *)(lVar2 + 0xbd8);
    if (((int)(uint)bVar1 < *(int *)(lVar2 + 0xbf0)) &&
       (lVar2 = *(longlong *)
                 (*(longlong *)(lVar2 + 0xbe8) + 8 + (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8)
       , lVar2 != 0)) {
      if (*(longlong *)(param_1 + 0xf0) != 0) {
        FUN_14480f766(lVar2 + 0x58);
      }
      *(undefined8 *)(param_1 + 0xf0) = 0;
    }
  }
  FUN_1458d9c40(param_1,param_1 + 0x118,0xc);
  FUN_14107507c(param_1,0);
  return;
}



// FUNCTION 148f1516c FUN_148f1516c body=201 status=ok
// SIG undefined FUN_148f1516c(void)

void FUN_148f1516c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined1 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148f150f0();
  if ((*(byte *)(param_1 + 0x98) & 8) != 0) {
    *(byte *)(param_1 + 0x98) = *(byte *)(param_1 + 0x98) & 0xf7;
    local_30 = FUN_14095dd8e(*(longlong *)(param_1 + 0x60) + 0x118);
    if (local_30 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(local_30);
    }
    local_28 = 1;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1b0);
    lVar2 = lVar1;
    if ((lVar1 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c(lVar1);
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1b0);
    }
    local_20 = lVar1;
    FUN_14109058a(lVar2);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f15236 FUN_148f15236 body=22 status=ok
// SIG undefined FUN_148f15236(void)

void FUN_148f15236(longlong param_1,char param_2)

{
  if (((*(byte *)(param_1 + 0x98) & 0x20) != 0) && (*(char *)(param_1 + 0x99) != param_2)) {
    if (*(char *)(param_1 + 0x99) == '\x01') {
      FUN_1458d9b9a(param_1);
      if ((*(byte *)(param_1 + 0x98) & 8) != 0) {
        FUN_148f1516c(param_1);
        return;
      }
    }
    else if (*(char *)(param_1 + 0x99) == '\0') {
      FUN_14592b638(param_1);
      return;
    }
    return;
  }
  return;
}



// FUNCTION 148f1524c FUN_148f1524c body=73 status=ok
// SIG undefined FUN_148f1524c(void)

void FUN_148f1524c(longlong param_1)

{
  if (*(char *)(param_1 + 0x99) == '\x01') {
    FUN_1458d9b9a(param_1);
    if ((*(byte *)(param_1 + 0x98) & 8) != 0) {
      FUN_148f1516c(param_1);
      return;
    }
  }
  else if (*(char *)(param_1 + 0x99) == '\0') {
    FUN_14592b638(param_1);
    return;
  }
  return;
}



// FUNCTION 148f15296 FUN_148f15296 body=97 status=ok
// SIG undefined FUN_148f15296(void)

void FUN_148f15296(undefined8 param_1)

{
  undefined1 auStack_588 [32];
  undefined1 local_568 [1360];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_588;
  FUN_1403df946(local_568);
  FUN_148f15024(param_1,local_568);
  FUN_1403dfcb0(local_568);
  if ((local_18 ^ (ulonglong)auStack_588) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f152f8 FUN_148f152f8 body=58 status=ok
// SIG undefined FUN_148f152f8(void)

void FUN_148f152f8(longlong param_1)

{
  if (*(char *)(param_1 + 0x99) == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x99) = 0;
  FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x40),1);
  FUN_148f1524c(param_1);
  return;
}



// FUNCTION 148f15332 FUN_148f15332 body=58 status=ok
// SIG undefined FUN_148f15332(void)

void FUN_148f15332(longlong param_1)

{
  if (*(char *)(param_1 + 0x99) == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x99) = 0;
  FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x40),1);
  FUN_148f1524c(param_1);
  return;
}



// FUNCTION 148f1536c FUN_148f1536c body=58 status=ok
// SIG undefined FUN_148f1536c(void)

void FUN_148f1536c(longlong param_1)

{
  if (*(char *)(param_1 + 0x99) == '\x01') {
    return;
  }
  *(undefined1 *)(param_1 + 0x99) = 1;
  FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x40),1);
  FUN_148f1524c(param_1);
  return;
}



// FUNCTION 148f153ba FUN_148f153ba body=254 status=ok
// SIG undefined FUN_148f153ba(void)

undefined8
FUN_148f153ba(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
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
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
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
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9e1330;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f154ba FUN_148f154ba body=62 status=ok
// SIG undefined FUN_148f154ba(void)

longlong FUN_148f154ba(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14019e766(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x8c0 + *param_1;
  thunk_FUN_144894d4c(lVar2);
  return lVar2;
}



// FUNCTION 148f154f8 FUN_148f154f8 body=244 status=ok
// SIG undefined FUN_148f154f8(void)

undefined8 FUN_148f154f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_14b9e16b0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14b9e1640;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_148f155ee;
  FUN_148f1b6a0(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f155ee FUN_148f155ee body=152 status=ok
// SIG undefined FUN_148f155ee(void)

void FUN_148f155ee(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  
  if (((0 < *(int *)(param_1 + 0xb0)) && ((*(byte *)(param_1 + 0xcc) & 3) == 0)) &&
     (*(char *)(param_1 + 0xcd) == '\x01')) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    if (*(longlong **)(lVar2 + 0x1b0) != (longlong *)0x0) {
      cVar4 = (**(code **)(**(longlong **)(lVar2 + 0x1b0) + 0x700))();
      if (cVar4 != '\0') {
        bVar1 = *(byte *)(lVar2 + 0xbd8);
        if (((int)(uint)bVar1 < *(int *)(lVar2 + 0xbf0)) &&
           (plVar3 = *(longlong **)
                      (*(longlong *)(lVar2 + 0xbe8) + 0x10 +
                      (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8), plVar3 != (longlong *)0x0)) {
          cVar4 = (**(code **)(*plVar3 + 0x338))(plVar3,1);
          if (cVar4 != '\0') {
            *(byte *)(param_1 + 0xcc) = *(byte *)(param_1 + 0xcc) | 1;
            FUN_148f15734(param_1);
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 148f15686 FUN_148f15686 body=174 status=ok
// SIG undefined FUN_148f15686(void)

void FUN_148f15686(longlong param_1,int param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x30);
  if (*(char *)(lVar2 + 0x178) != '\x03') {
    return;
  }
  bVar1 = *(byte *)(lVar2 + 0xbd8);
  if ((int)(uint)bVar1 < *(int *)(lVar2 + 0xbf0)) {
    plVar3 = *(longlong **)
              (*(longlong *)(lVar2 + 0xbe8) + 0x10 + (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8)
    ;
    if (plVar3 != (longlong *)0x0) {
      iVar4 = (**(code **)(*plVar3 + 0x2c0))(plVar3);
      if (iVar4 < param_2) {
        iVar4 = (**(code **)(*plVar3 + 0x2c0))(plVar3);
        iVar4 = iVar4 + *(int *)(param_1 + 0xb0);
        if (param_2 <= iVar4) {
          iVar4 = param_2;
        }
        iVar5 = (**(code **)(*plVar3 + 0x2c0))(plVar3);
        if (iVar4 - iVar5 != 0) {
          (**(code **)(*plVar3 + 0x370))(plVar3,iVar4 - iVar5,0,0,1);
        }
      }
    }
  }
  FUN_148f15734(param_1);
  return;
}



// FUNCTION 148f15734 FUN_148f15734 body=166 status=ok
// SIG undefined FUN_148f15734(void)

void FUN_148f15734(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 uVar5;
  
  lVar2 = param_1[6];
  if (*(char *)(lVar2 + 0x178) != '\x03') {
    bVar1 = *(byte *)(lVar2 + 0xbd8);
    uVar5 = 0;
    if ((int)(uint)bVar1 < *(int *)(lVar2 + 0xbf0)) {
      plVar3 = *(longlong **)
                (*(longlong *)(lVar2 + 0xbe8) + 0x10 +
                (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8);
      if (plVar3 != (longlong *)0x0) {
        uVar5 = (**(code **)(*plVar3 + 0x2c0))(plVar3,0);
      }
    }
    FUN_148a0d3bc(lVar2,uVar5);
  }
  cVar4 = (**(code **)(*param_1 + 0x2b8))(param_1);
  if ((cVar4 != '\0') || (*(longlong *)(lVar2 + 0xd60) == DAT_14cb95128)) {
    FUN_1459d275c(lVar2,*(undefined1 *)(lVar2 + 0xbd8),0x3a83126f);
  }
  FUN_140dcf9f6(param_1,3);
  FUN_140dc446a(param_1,1);
  return;
}



// FUNCTION 148f157da FUN_148f157da body=161 status=ok
// SIG undefined FUN_148f157da(void)

void FUN_148f157da(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  cVar3 = FUN_14130ac92(param_1[6]);
  if (cVar3 == '\0') {
    return;
  }
  if (((int)param_1[0x16] < 1) || ((*(byte *)((longlong)param_1 + 0xcc) & 2) != 0)) {
    if (param_1[0x1c] == 0) {
      return;
    }
    plVar1 = param_1 + 0x1c;
    lVar4 = (**(code **)(*param_1 + 0x180))(param_1);
    if (*(longlong *)(lVar4 + 0x1f0) == 0) {
      puVar5 = (undefined8 *)(lVar4 + 0x458);
    }
    else {
      puVar5 = (undefined8 *)(*(longlong *)(lVar4 + 0x1f0) + 0xf0);
    }
    uVar2 = *puVar5;
    lVar4 = FUN_144a61814(uVar2,plVar1);
    if (lVar4 != 0) {
      FUN_1405a424c(uVar2,*plVar1);
    }
    *plVar1 = 0;
  }
  FUN_140f1f37c(param_1);
  return;
}



// FUNCTION 148f158e6 FUN_148f158e6 body=244 status=ok
// SIG undefined FUN_148f158e6(void)

undefined8 FUN_148f158e6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_14b3e9c20;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14b9e1720;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = &LAB_148f1587c;
  FUN_140ebcfd8(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f159dc FUN_148f159dc body=210 status=ok
// SIG undefined FUN_148f159dc(void)

undefined8 FUN_148f159dc(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined7 uVar6;
  byte bVar7;
  longlong lVar8;
  
  lVar3 = FUN_1400e8a68(param_3);
  if (lVar3 == 0) {
    return 0;
  }
  lVar8 = lVar3 + 0x3a30;
  lVar3 = (**(code **)(*(longlong *)(lVar3 + 0x3a30) + 0x10))(lVar8);
  bVar7 = (byte)lVar8;
  if (0 < *(int *)(lVar3 + 0xa8)) {
    lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0xa0) + 0x20);
    if ((DAT_14c950c29 == '\x01') && (lVar3 != 0)) {
      lVar8 = lVar3;
      FUN_1456cec3c(lVar3);
    }
    else if (lVar3 == 0) goto LAB_148f15a8f;
    if (*(char *)(param_1 + 0x10) == '\0') {
      lVar4 = FUN_145908c4c();
      lVar8 = *(longlong *)(lVar3 + 0x10);
      if (*(int *)(lVar4 + 0x38) <= *(int *)(lVar8 + 0x38)) {
        lVar8 = *(longlong *)(lVar8 + 0x30);
        if (*(longlong *)(lVar8 + (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30) {
          uVar6 = (undefined7)((ulonglong)(lVar4 + 0x30) >> 8);
          bVar2 = 1;
          bVar7 = 0;
          goto LAB_148f15a91;
        }
      }
    }
    bVar7 = (byte)lVar8;
    bVar2 = *(byte *)(lVar3 + 0xbd8);
    if ((int)(uint)bVar2 < *(int *)(lVar3 + 0xbf0)) {
      plVar1 = *(longlong **)
                (*(longlong *)(lVar3 + 0xbe8) + 0x10 +
                (ulonglong)bVar2 * 0x80 + (ulonglong)bVar2 * 8);
      bVar7 = 0;
      if (plVar1 != (longlong *)0x0) {
        uVar5 = (**(code **)(*plVar1 + 0x318))();
        bVar7 = (byte)uVar5;
        uVar6 = (undefined7)((ulonglong)uVar5 >> 8);
        bVar2 = 1;
        goto LAB_148f15a91;
      }
    }
  }
LAB_148f15a8f:
  bVar2 = 0;
  uVar6 = 0;
LAB_148f15a91:
  return CONCAT71(uVar6,bVar2 & bVar7);
}



// FUNCTION 148f15aae FUN_148f15aae body=166 status=ok
// SIG undefined FUN_148f15aae(void)

byte FUN_148f15aae(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  
  plVar3 = (longlong *)FUN_1400e8a68(param_3);
  bVar6 = (byte)param_3;
  if (plVar3 != (longlong *)0x0) {
    cVar1 = (**(code **)(*plVar3 + 0x688))(plVar3);
    if (cVar1 == '\0') {
      uVar2 = FUN_1459b76c0(0);
      lVar4 = FUN_14142c2e4(plVar3,uVar2);
      if (lVar4 != 0) {
        if ((*(longlong *)(lVar4 + 0x28) != 0 && *(longlong *)(lVar4 + 0x20) != 0) &&
           (lVar4 = FUN_14142c2dc(), lVar4 != 0)) {
          lVar5 = FUN_144a7d050();
          if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
            bVar6 = 1;
            goto LAB_148f15ae2;
          }
        }
        bVar6 = 0;
        goto LAB_148f15ae2;
      }
    }
    lVar4 = FUN_1404281d6(plVar3);
    bVar6 = lVar4 != 0;
  }
LAB_148f15ae2:
  return plVar3 != (longlong *)0x0 & bVar6;
}



// FUNCTION 148f15b54 FUN_148f15b54 body=59 status=ok
// SIG undefined FUN_148f15b54(void)

byte FUN_148f15b54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  
  lVar3 = FUN_1400e8a68(param_3);
  bVar4 = (byte)param_3;
  if (lVar3 != 0) {
    iVar1 = FUN_14042831e(lVar3);
    iVar2 = FUN_1403ae46b();
    bVar4 = iVar1 == iVar2;
  }
  return lVar3 != 0 & bVar4;
}



// FUNCTION 148f15b90 FUN_148f15b90 body=733 status=ok
// SIG undefined FUN_148f15b90(void)

void FUN_148f15b90(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_118 [40];
  longlong local_f0;
  undefined2 local_e8;
  undefined1 local_e6;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 *puStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined2 local_a0;
  undefined8 local_9c;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  puStack_d0 = (undefined8 *)0x0;
  local_a0 = 0;
  local_9c = 0xffffffffffffffff;
  local_70 = 0;
  local_68 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_64 = 0xffffffff00000080;
  local_5c = 0;
  local_50 = 0;
  local_48 = 0;
  local_a8 = 0x14;
  local_f0 = FUN_145b90a14();
  if ((local_f0 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_f0);
  }
  local_e8 = 1;
  local_e6 = 0;
  local_e4 = 0xffffffff;
  local_c8 = CONCAT44(local_c8._4_4_,1);
  FUN_146469efe(&puStack_d0,0);
  puVar5 = puStack_d0;
  FUN_1446f470e(&local_e0,L"Enemy Radar Interface",1);
  *puVar5 = local_e0;
  uVar4 = FUN_144830b78(puVar5 + 1,&local_f0);
  *(undefined4 *)(puVar5 + 1) = uVar4;
  puVar5[2] = 0;
  puVar5[3] = 0;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  lVar2 = *param_2;
  FUN_1481cc21c(lVar2 + (longlong)iVar1 * 0x98,&local_d8);
  puVar5 = (undefined8 *)((longlong)iVar1 * 0x98 + lVar2);
  *puVar5 = DAT_14cbe7a28;
  iVar1 = *(int *)(puVar5 + 4);
  *(uint *)(puVar5 + 4) = iVar1 + 1U;
  if (*(uint *)((longlong)puVar5 + 0x24) < iVar1 + 1U) {
    FUN_14024cd4c(puVar5 + 3,iVar1);
  }
  lVar2 = puVar5[3];
  FUN_1446f470e(&local_f0,&DAT_14a1c72e4,1);
  plVar7 = (longlong *)(lVar2 + (longlong)iVar1 * 0xc);
  plVar6 = plVar7 + 1;
  *plVar7 = local_f0;
  uVar4 = FUN_144830b78(plVar6,&DAT_14cb420d0);
  *(undefined4 *)plVar6 = uVar4;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  lVar3 = *param_2;
  lVar8 = (longlong)iVar1 * 0x98;
  lVar2 = lVar3 + lVar8;
  FUN_1481cc21c(lVar2,&local_d8);
  *(undefined8 *)(lVar3 + lVar8) = DAT_14cbe7a30;
  iVar1 = *(int *)(lVar3 + 0x10 + lVar8);
  *(uint *)(lVar3 + 0x10 + lVar8) = iVar1 + 1U;
  if (*(uint *)(lVar3 + 0x14 + lVar8) < iVar1 + 1U) {
    FUN_146469efe(lVar3 + lVar8 + 8,iVar1);
  }
  lVar3 = *(longlong *)(lVar2 + 8);
  FUN_1446f470e(&local_f0,L"Index",1);
  plVar7 = (longlong *)((longlong)iVar1 * 0x20 + lVar3);
  *plVar7 = local_f0;
  uVar4 = FUN_144830b78(plVar7 + 1,&DAT_14cb420d0);
  *(undefined4 *)(plVar7 + 1) = uVar4;
  plVar7[2] = 0;
  plVar7[3] = 0;
  iVar1 = *(int *)(lVar2 + 0x20);
  *(uint *)(lVar2 + 0x20) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x24) < iVar1 + 1U) {
    FUN_14024cd4c((longlong *)(lVar2 + 0x18),iVar1);
  }
  lVar2 = *(longlong *)(lVar2 + 0x18);
  FUN_1446f470e(&local_f0,L"Value",1);
  plVar7 = (longlong *)(lVar2 + (longlong)iVar1 * 0xc);
  plVar6 = plVar7 + 1;
  *plVar7 = local_f0;
  uVar4 = FUN_144830b78(plVar6,&DAT_14cb420f0);
  *(undefined4 *)plVar6 = uVar4;
  FUN_148060334(&local_d8);
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f15e6e FUN_148f15e6e body=352 status=ok
// SIG undefined FUN_148f15e6e(void)

void FUN_148f15e6e(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined **ppuVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_2 == DAT_14cbe7a28) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    *local_30 = &PTR_LAB_14ad81180;
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
    local_30[2] = lVar3;
    ppuVar2 = &PTR_FUN_14b9e1790;
  }
  else {
    if (*param_2 != DAT_14cbe7a30) goto LAB_148f15f1d;
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    *local_30 = &PTR_LAB_14ad81180;
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
    local_30[2] = lVar3;
    ppuVar2 = &PTR_FUN_14b9e1800;
  }
  local_28 = 2;
  *local_30 = ppuVar2;
  local_30[3] = param_1;
  FUN_144a450dc(param_4,&local_30);
  FUN_1449db362(&local_30);
LAB_148f15f1d:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f15fd0 FUN_148f15fd0 body=148 status=ok
// SIG undefined FUN_148f15fd0(void)

void FUN_148f15fd0(int *param_1,char *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (*param_2 == '\x01') {
    iVar5 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar5 + 1;
    iVar5 = **(int **)(*(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 8);
    *param_1 = iVar5;
    plVar6 = (longlong *)(param_2 + 0x48);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar4 = uVar1 & 0x7fff;
    piVar3 = *(int **)(*(longlong *)(param_2 + 0x80) + 0x20);
    iVar5 = *piVar3;
    lVar7 = 0;
    if (iVar5 <= (int)uVar4) {
      do {
        uVar4 = uVar4 - iVar5;
        iVar5 = piVar3[lVar7 + 1];
        lVar7 = lVar7 + 1;
      } while (iVar5 <= (int)uVar4);
    }
    iVar5 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x18) + lVar7 * 8)
                    + (longlong)(int)uVar4);
    *param_1 = iVar5;
    plVar6 = (longlong *)(*(longlong *)(param_2 + 0x80) + 0x38);
  }
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(*plVar6 + (longlong)iVar5 * 8);
  return;
}



// FUNCTION 148f16064 FUN_148f16064 body=253 status=ok
// SIG undefined FUN_148f16064(void)

void FUN_148f16064(char *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  int local_40;
  int *local_38;
  undefined8 uStack_30;
  int local_28;
  undefined1 local_20 [8];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148f15fd0(local_20,param_1);
  local_38 = (int *)0x0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_144a98d08(&local_38,param_1);
  FUN_144a76c20(&local_48,param_1);
  piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar3 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar2 = 0;
    do {
      piVar3 = local_38 + local_28;
      iVar1 = *local_38;
      if (((longlong)iVar1 < 0) || ((int)local_18[1] <= iVar1)) {
        *local_48 = 0;
      }
      else {
        *local_48 = *(undefined4 *)(*local_18 + (longlong)iVar1 * 4);
      }
      local_48 = local_48 + local_40;
      iVar2 = iVar2 + 1;
      piVar4 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar4 = (int *)(param_1 + 0x3c);
      }
      local_38 = piVar3;
    } while (iVar2 < *piVar4);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f16184 FUN_148f16184 body=208 status=ok
// SIG undefined FUN_148f16184(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148f16184(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  
  lVar1 = *(longlong *)(param_2 + 0x48);
  uVar7 = *(int *)(param_2 + 0x50) + 0xfU & 0xfffffff0;
  uVar8 = (ulonglong)uVar7;
  FUN_148f1bd2e();
  *(uint *)(param_2 + 0x50) = uVar7 + _DAT_14cbe824c;
  lVar2 = *(longlong *)(param_2 + 0x38);
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    lVar6 = lVar1 + 0x48;
    if (*(longlong *)(lVar1 + 0x50) != 0) {
      lVar6 = *(longlong *)(lVar1 + 0x50);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(lVar1 + 0x58) - 1U &
                             (int)lVar3 + (int)((ulonglong)lVar3 >> 0x20) * 0x17) * 4);
    if (iVar5 != -1) {
      do {
        lVar6 = *(longlong *)(lVar1 + 0x10) + (longlong)iVar5 * 0x30;
        if (*(longlong *)(*(longlong *)(lVar1 + 0x10) + (longlong)iVar5 * 0x30) == lVar3) {
          if ((lVar6 + 8U & 0xfffffffffffffff7) != 0) {
            *(undefined4 *)(lVar2 + uVar8) = *(undefined4 *)(lVar6 + 8);
            uVar4 = *(undefined8 *)(lVar6 + 0x18);
            goto LAB_148f161c7;
          }
          break;
        }
        iVar5 = *(int *)(lVar6 + 0x28);
      } while (iVar5 != -1);
    }
  }
  *(undefined4 *)(lVar2 + uVar8) = 0;
  uVar4 = FUN_144b36954();
LAB_148f161c7:
  *(undefined8 *)(lVar2 + 8 + uVar8) = uVar4;
  return;
}



// FUNCTION 148f1625a FUN_148f1625a body=111 status=ok
// SIG undefined FUN_148f1625a(void)

undefined8 FUN_148f1625a(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  undefined8 **local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  local_18 = &local_28;
  local_30 = *(undefined8 *)(param_3 + 0x100);
  local_20 = &local_30;
  local_28 = param_2;
  FUN_148f1c024(param_1 + 0x38,local_c);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f162ca FUN_148f162ca body=129 status=ok
// SIG undefined FUN_148f162ca(void)

bool FUN_148f162ca(undefined8 param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    lVar2 = FUN_14479d2ce(param_3 + 0x48);
    if ((lVar2 != 0) && (plVar3 = *(longlong **)(lVar2 + 0xa8), plVar3 != (longlong *)0x0)) {
      lVar2 = FUN_144a7cbb2();
      if (((*(int *)(lVar2 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
          (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
           lVar2 + 0x30)) || (plVar3 = (longlong *)plVar3[0x36], plVar3 != (longlong *)0x0)) {
        cVar1 = (**(code **)(*plVar3 + 0x700))(plVar3);
        if (cVar1 != '\0') {
          FUN_148f1634c(plVar3,param_2);
        }
      }
    }
  }
  return param_2 == 0;
}



// FUNCTION 148f1634c FUN_148f1634c body=1815 status=ok
// SIG undefined FUN_148f1634c(void)

void FUN_148f1634c(longlong *param_1,longlong param_2)

{
  float fVar1;
  double dVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  double dVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  double *pdVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  longlong lVar16;
  double *pdVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auStack_188 [32];
  double *local_168;
  undefined8 *local_160;
  undefined *local_158;
  longlong *local_150;
  undefined8 local_148;
  undefined *local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined8 *local_128;
  undefined8 *local_120;
  undefined2 local_118;
  undefined8 *local_110;
  undefined *local_108;
  longlong *local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) < 0) {
    FUN_14482f6fa(param_2,0);
  }
  puVar9 = (undefined8 *)FUN_1447210f0(param_1);
  if (puVar9 == (undefined8 *)0x0) goto LAB_148f163ff;
  dVar2 = (double)puVar9[0xda];
  if ((DAT_14c75b13c < DAT_14cbe7a88) || (plVar3 = local_138, DAT_14c75b13c < DAT_14cbe7a8c)) {
    DAT_14cbe7a88 = DAT_14c75b13c + 0xe10;
    DAT_14cbe7a8c = DAT_14c75b13c;
    local_110 = (undefined8 *)&DAT_100000000;
    local_108 = &DAT_14cbe7a48;
    local_100 = (longlong *)&DAT_ffffffff;
    local_f8 = 0;
    if (DAT_14cbe7a60 != 0) {
      FUN_1449c0562(&local_110);
    }
    local_148 = local_110;
    local_140 = local_108;
    local_138 = local_100;
    plVar3 = local_138;
    local_130 = local_f8;
    uStack_12c = local_f4;
    local_150 = &DAT_14cbe7a38;
    local_128 = &DAT_14cbe7a38;
    local_120 = &DAT_14cbe7a38;
    local_118 = 0;
    local_138._4_4_ = (int)((ulonglong)local_100 >> 0x20);
    if (local_138._4_4_ < *(int *)(local_108 + 0x18)) {
      iVar8 = local_138._4_4_;
      local_138 = plVar3;
      do {
        cVar6 = FUN_144729dda(*local_150 + (longlong)iVar8 * 0x30 + 0x20);
        if (cVar6 == '\0') {
          FUN_148f1c95e(local_128,local_138._4_4_);
          local_118 = CONCAT11(local_118._1_1_,1);
        }
        local_138 = (longlong *)CONCAT44(local_138._4_4_,(uint)local_138 & ~local_148._4_4_);
        FUN_1449c0562(&local_148);
        iVar8 = local_138._4_4_;
      } while (local_138._4_4_ < *(int *)(local_140 + 0x18));
      plVar3 = local_138;
      if (((local_118 & 1) != 0) && (local_118._1_1_ == '\x01')) {
        FUN_148f1c73a(local_120,*(int *)(local_120 + 1) - *(int *)((longlong)local_120 + 0x34));
        plVar3 = local_138;
      }
    }
  }
  local_138 = plVar3;
  uVar7 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  local_150 = param_1;
  pdVar10 = (double *)FUN_148f1ca70(uVar7 >> 0x10 ^ uVar7);
  if ((*pdVar10 <= dVar2) || (*(int *)((longlong)pdVar10 + 0x1c) == 0 && *(int *)(pdVar10 + 3) == 0)
     ) {
    *pdVar10 = dVar2 + 0.05000000074505806;
    FUN_14485c47a(pdVar10 + 3,param_1);
    local_168 = pdVar10 + 1;
    *(undefined4 *)(pdVar10 + 2) = 0;
    if (*(int *)((longlong)pdVar10 + 0x14) < 0) {
      FUN_14482f6fa(local_168,0);
    }
    pdVar17 = (double *)(param_1[0x39] + 0x260);
    if (param_1[0x39] == 0) {
      pdVar17 = (double *)&DAT_14c8464e0;
    }
    dVar2 = *pdVar17;
    dVar5 = pdVar17[1];
    (**(code **)(*param_1 + 0x720))(param_1,&local_110);
    FUN_144a76660(&local_110,&local_150);
    dVar20 = (double)local_150 * (double)local_150 + (double)local_148 * (double)local_148;
    if (((dVar20 != 1.0) || (puVar4 = local_148, plVar3 = local_150, NAN(dVar20))) &&
       (puVar4 = DAT_14c8464e8, plVar3 = DAT_14c8464e0, 9.99999993922529e-09 <= dVar20)) {
      puVar4 = (undefined8 *)((double)local_148 * (1.0 / SQRT(dVar20)));
      plVar3 = (longlong *)((double)local_150 * (1.0 / SQRT(dVar20)));
    }
    lVar11 = FUN_1403ca227();
    fVar1 = *(float *)(lVar11 + 0x310);
    uVar12 = FUN_1449d6ade();
    plVar13 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar12);
    if (plVar13 == (longlong *)0x0) {
LAB_148f165f7:
      plVar14 = (longlong *)0x0;
    }
    else {
      uVar12 = FUN_1449d6ade();
      plVar14 = (longlong *)FUN_144718840(plVar13,uVar12);
      if (plVar13 == plVar14) goto LAB_148f165f7;
    }
    local_110 = puVar9;
    FUN_14021d432(&local_150,&DAT_14cb71320);
    plVar13 = local_138;
    local_158 = local_140;
    LOCK();
    *(int *)(local_140 + 8) = *(int *)(local_140 + 8) + 1;
    UNLOCK();
    puVar9 = (undefined8 *)CONCAT44(uStack_12c,local_130);
    local_160 = local_128;
    LOCK();
    *(int *)(local_128 + 1) = *(int *)(local_128 + 1) + 1;
    UNLOCK();
    if (local_148 != puVar9) {
      puVar15 = local_148;
      do {
        lVar11 = puVar15[2];
        cVar6 = FUN_1449ce97a(lVar11);
        if ((cVar6 == '\0') &&
           (cVar6 = (**(code **)(*(longlong *)(lVar11 + 0x10a0) + 0x40))(lVar11 + 0x10a0),
           cVar6 == '\0')) {
          if (plVar14 != (longlong *)0x0) {
            lVar16 = (**(code **)(*(longlong *)(lVar11 + 0x870) + 0x10))(lVar11 + 0x870);
            uVar12 = (**(code **)(*plVar14 + 0x10))(plVar14);
            if ((lVar16 == 0) || (iVar8 = FUN_14479d732(lVar16,uVar12), iVar8 != 2))
            goto LAB_148f1669d;
          }
          pdVar17 = (double *)(*(longlong *)(lVar11 + 0x1c8) + 0x260);
          if (*(longlong *)(lVar11 + 0x1c8) == 0) {
            pdVar17 = (double *)&DAT_14c8464e0;
          }
          dVar21 = *pdVar17 - dVar2;
          dVar22 = pdVar17[1] - dVar5;
          dVar20 = dVar21 * dVar21 + dVar22 * dVar22;
          if ((float)dVar20 <= fVar1 * fVar1) {
            if (9.99999993922529e-09 < dVar20) {
              dVar22 = dVar22 * (1.0 / SQRT(dVar20));
            }
            else {
              dVar22 = 0.0;
            }
            dVar20 = (double)(-(ulonglong)(9.99999993922529e-09 < dVar20) &
                             (ulonglong)(dVar21 * (1.0 / SQRT(dVar20))));
            fVar18 = (float)((double)plVar3 * dVar20 + (double)puVar4 * dVar22);
            fVar19 = fVar18;
            if (1.0 <= fVar18) {
              fVar19 = 1.0;
            }
            fVar19 = acosf((float)(-(uint)(fVar18 < -1.0) & 0xbf800000 |
                                  ~-(uint)(fVar18 < -1.0) & (uint)fVar19));
            uVar7 = -(uint)((float)(dVar22 * (double)plVar3 + dVar20 * -(double)puVar4) < 0.0);
            dVar20 = (double)FUN_144719204((double)(float)(uVar7 & (uint)(360.0 - fVar19 * 57.295776
                                                                         ) |
                                                          ~uVar7 & (uint)(fVar19 * 57.295776)),
                                           0x4076800000000000);
            pdVar17 = local_168;
            iVar8 = *(int *)(pdVar10 + 2);
            *(uint *)(pdVar10 + 2) = iVar8 + 1U;
            if (*(uint *)((longlong)pdVar10 + 0x14) < iVar8 + 1U) {
              FUN_14475e4ac(local_168,iVar8);
            }
            *(float *)((longlong)*pdVar17 + (longlong)iVar8 * 4) =
                 (float)(double)(~-(ulonglong)(dVar20 < 0.0) & (ulonglong)dVar20 |
                                (ulonglong)(dVar20 + 360.0) & -(ulonglong)(dVar20 < 0.0)) / 360.0;
          }
        }
LAB_148f1669d:
        for (puVar15 = (undefined8 *)FUN_144b39bc4(*puVar15); puVar15 != (undefined8 *)0x0;
            puVar15 = (undefined8 *)FUN_144b39bc4(*puVar15)) {
          lVar11 = FUN_1447210f0(puVar15[2]);
          if (lVar11 == *plVar13) goto LAB_148f166cf;
        }
        puVar15 = (undefined8 *)0x0;
LAB_148f166cf:
      } while (puVar15 != puVar9);
    }
    LOCK();
    *(int *)(local_160 + 1) = *(int *)(local_160 + 1) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_158 + 8) = *(int *)(local_158 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_128 + 1) = *(int *)(local_128 + 1) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_140 + 8) = *(int *)(local_140 + 8) + -1;
    UNLOCK();
    pdVar10 = local_168;
  }
  else {
    pdVar10 = pdVar10 + 1;
  }
  FUN_144a67f5c(param_2,pdVar10);
LAB_148f163ff:
  if ((local_f0 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f16a64 FUN_148f16a64 body=40 status=ok
// SIG undefined FUN_148f16a64(void)

void FUN_148f16a64(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  longlong lVar1;
  
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
  for (lVar1 = 0x14; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined4 *)param_2 = *param_3;
    param_3 = param_3 + 1;
    param_2 = (undefined8 *)((longlong)param_2 + 4);
  }
  return;
}



// FUNCTION 148f16a8c FUN_148f16a8c body=2045 status=ok
// SIG undefined FUN_148f16a8c(void)

void FUN_148f16a8c(longlong param_1,longlong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_198 [40];
  longlong local_170;
  longlong *local_168;
  longlong *local_160;
  undefined4 local_158 [2];
  longlong local_150;
  undefined8 uStack_148;
  longlong *local_140;
  undefined2 local_138;
  undefined1 local_136;
  undefined4 local_134;
  longlong *local_130;
  longlong *local_128;
  undefined4 local_120 [2];
  longlong local_118;
  undefined8 uStack_110;
  longlong *local_108;
  undefined2 local_100;
  undefined1 local_fe;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  longlong local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  ulonglong local_c8;
  undefined2 local_c0;
  undefined8 local_bc;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_d0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_c0 = 0;
  local_bc = 0xffffffffffffffff;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  local_f8 = DAT_14cbe7a90;
  local_c8 = 0x34;
  FUN_144a5dc74(&local_160);
  FUN_1446f470e(&local_140,L"Weapon Sight interface",1);
  local_108 = *(longlong **)(param_1 + 0x10);
  local_170 = param_1;
  if ((local_108 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  local_100 = 1;
  local_fe = 0;
  local_fc = 0xffffffff;
  local_128 = local_140;
  local_120[0] = FUN_144830b78(local_120);
  local_118 = 0;
  uStack_110 = 0;
  FUN_1480742ba(&local_f8,&local_128,&local_160);
  if (local_118 != 0) {
    FUN_1400020a8();
  }
  if (local_160 != (longlong *)0x0) {
    (**(code **)(*local_160 + 0x10))();
  }
  puVar4 = DAT_14cbe7aa0;
  if (DAT_14cbe7aa8 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_160,puVar4,1);
  local_128 = local_160;
  local_120[0] = FUN_144830b78(local_120,&DAT_14cb420f0);
  uVar2 = uStack_d8;
  local_118 = 0;
  uStack_110 = 0;
  lVar6 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_e0 + 8 + lVar6 * 0xc) = local_120[0];
  *(longlong **)(local_e0 + lVar6 * 0xc) = local_128;
  if (local_118 != 0) {
    FUN_1400020a8();
  }
  puVar4 = DAT_14cbe7ae0;
  if (DAT_14cbe7ae8 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_160,puVar4,1);
  local_128 = local_160;
  local_120[0] = FUN_144830b78(local_120,&DAT_14cb420f0);
  uVar2 = uStack_d8;
  local_118 = 0;
  uStack_110 = 0;
  lVar6 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_e0 + 8 + lVar6 * 0xc) = local_120[0];
  *(longlong **)(local_e0 + lVar6 * 0xc) = local_128;
  if (local_118 != 0) {
    FUN_1400020a8();
  }
  puVar4 = DAT_14cbe7b20;
  if (DAT_14cbe7b28 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_160,puVar4,1);
  local_128 = local_160;
  local_120[0] = FUN_144830b78(local_120,&DAT_14cb420f0);
  uVar2 = uStack_d8;
  local_118 = 0;
  uStack_110 = 0;
  lVar6 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_e0 + 8 + lVar6 * 0xc) = local_120[0];
  *(longlong **)(local_e0 + lVar6 * 0xc) = local_128;
  if (local_118 != 0) {
    FUN_1400020a8();
  }
  puVar4 = DAT_14cbe7b60;
  if (DAT_14cbe7b68 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_160,puVar4,1);
  local_128 = local_160;
  local_120[0] = FUN_144830b78(local_120,&DAT_14cb420f0);
  uVar2 = uStack_d8;
  local_118 = 0;
  uStack_110 = 0;
  lVar6 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_e0 + 8 + lVar6 * 0xc) = local_120[0];
  *(longlong **)(local_e0 + lVar6 * 0xc) = local_128;
  if (local_118 != 0) {
    FUN_1400020a8();
  }
  puVar4 = DAT_14cbe7ba0;
  if (DAT_14cbe7ba8 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_160,puVar4,1);
  local_128 = local_160;
  local_120[0] = FUN_144830b78(local_120,&DAT_14cb420f0);
  uVar2 = uStack_d8;
  local_118 = 0;
  uStack_110 = 0;
  lVar6 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_e0 + 8 + lVar6 * 0xc) = local_120[0];
  *(longlong **)(local_e0 + lVar6 * 0xc) = local_128;
  if (local_118 != 0) {
    FUN_1400020a8();
  }
  puVar4 = DAT_14cbe7be0;
  if (DAT_14cbe7be8 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_160,puVar4,1);
  local_128 = local_160;
  local_120[0] = FUN_144830b78(local_120,&DAT_14cb420f0);
  uVar2 = uStack_d8;
  local_118 = 0;
  uStack_110 = 0;
  lVar6 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_e0 + 8 + lVar6 * 0xc) = local_120[0];
  *(longlong **)(local_e0 + lVar6 * 0xc) = local_128;
  if (local_118 != 0) {
    FUN_1400020a8();
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_f8);
  FUN_148060334(&local_f8);
  lVar6 = 0;
  do {
    puVar4 = &DAT_149dfb77a;
    if (*(int *)((longlong)&DAT_14cbe7aa8 + lVar6) != 0) {
      puVar4 = *(undefined2 **)((longlong)&DAT_14cbe7aa0 + lVar6);
    }
    FUN_1446f470e(&local_168,puVar4,1);
    puVar5 = &DAT_14cb420d0;
    if ((&DAT_14cbe7adc)[lVar6] != '\0') {
      puVar5 = &DAT_14cb420f0;
    }
    local_160 = local_168;
    local_158[0] = FUN_144830b78(local_158,puVar5);
    local_150 = 0;
    uStack_148 = 0;
    local_d0 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_c0 = 0;
    local_bc = 0xffffffffffffffff;
    local_90 = 0;
    local_88 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_84 = 0xffffffff00000080;
    local_7c = 0;
    local_70 = 0;
    local_68 = 0;
    local_f8 = *(undefined8 *)((longlong)&DAT_14cbe7ac0 + lVar6);
    local_c8 = local_c8 & 0xfffff800 | 0x34;
    FUN_144a5dc74(&local_108);
    FUN_1446f470e(&local_130,L"Weapon Sight interface",1);
    local_140 = *(longlong **)(local_170 + 0x10);
    if ((local_140 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_138 = 1;
    local_136 = 0;
    local_134 = 0xffffffff;
    local_128 = local_130;
    local_120[0] = FUN_144830b78(local_120,&local_140);
    local_118 = 0;
    uStack_110 = 0;
    FUN_1480742ba(&local_f8,&local_128,&local_108);
    if (local_118 != 0) {
      FUN_1400020a8();
    }
    if (local_108 != (longlong *)0x0) {
      (**(code **)(*local_108 + 0x10))();
    }
    uVar2 = uStack_d8;
    lVar7 = (longlong)(int)uStack_d8;
    uVar3 = (int)uStack_d8 + 1;
    uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
    if (uStack_d8._4_4_ < uVar3) {
      FUN_14024cd4c(&local_e0,uVar2 & 0xffffffff);
    }
    *(undefined4 *)(local_e0 + 8 + lVar7 * 0xc) = local_158[0];
    *(longlong **)(local_e0 + lVar7 * 0xc) = local_160;
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_148d135c0(param_2,iVar1);
    }
    FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_f8);
    FUN_148060334(&local_f8);
    if (local_150 != 0) {
      FUN_1400020a8();
    }
    lVar6 = lVar6 + 0x40;
  } while (lVar6 != 0x440);
  if ((local_60 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f172ac FUN_148f172ac body=303 status=ok
// SIG undefined FUN_148f172ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148f172ac(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong lVar6;
  ulonglong uVar5;
  
  lVar1 = *(longlong *)(param_2 + 0x48);
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    lVar6 = lVar1 + 0x48;
    if (*(longlong *)(lVar1 + 0x50) != 0) {
      lVar6 = *(longlong *)(lVar1 + 0x50);
    }
    iVar3 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(lVar1 + 0x58) - 1U &
                             (int)lVar2 + (int)((ulonglong)lVar2 >> 0x20) * 0x17) * 4);
    if (iVar3 != -1) {
      do {
        lVar6 = *(longlong *)(lVar1 + 0x10) + (longlong)iVar3 * 0x60;
        if (*(longlong *)(*(longlong *)(lVar1 + 0x10) + (longlong)iVar3 * 0x60) == lVar2)
        goto LAB_148f17308;
        iVar3 = *(int *)(lVar6 + 0x58);
      } while (iVar3 != -1);
    }
  }
  lVar6 = 0;
LAB_148f17308:
  uVar4 = *(int *)(param_2 + 0x50) + 0xfU & 0xfffffff0;
  uVar5 = (ulonglong)uVar4;
  FUN_148f1cf3a();
  *(uint *)(param_2 + 0x50) = uVar4 + _DAT_14cbe82dc;
  lVar1 = *(longlong *)(param_2 + 0x38);
  *(undefined4 *)(lVar1 + uVar5) = *(undefined4 *)(lVar6 + 8);
  *(undefined4 *)(lVar1 + 4 + uVar5) = *(undefined4 *)(lVar6 + 0xc);
  *(undefined4 *)(lVar1 + 8 + uVar5) = *(undefined4 *)(lVar6 + 0x10);
  *(undefined4 *)(lVar1 + 0xc + uVar5) = *(undefined4 *)(lVar6 + 0x14);
  *(undefined4 *)(lVar1 + 0x10 + uVar5) = *(undefined4 *)(lVar6 + 0x18);
  *(undefined4 *)(lVar1 + 0x14 + uVar5) = *(undefined4 *)(lVar6 + 0x1c);
  *(undefined4 *)(lVar1 + 0x18 + uVar5) = *(undefined4 *)(lVar6 + 0x20);
  *(undefined4 *)(lVar1 + 0x1c + uVar5) = *(undefined4 *)(lVar6 + 0x24);
  *(undefined4 *)(lVar1 + 0x20 + uVar5) = *(undefined4 *)(lVar6 + 0x28);
  *(undefined8 *)(lVar1 + 0x24 + uVar5) = 0;
  *(undefined4 *)(lVar1 + 0x2c + uVar5) = 0;
  *(undefined4 *)(lVar1 + 0x30 + uVar5) = *(undefined4 *)(lVar6 + 0x38);
  *(undefined4 *)(lVar1 + 0x34 + uVar5) = *(undefined4 *)(lVar6 + 0x3c);
  *(undefined8 *)(lVar1 + 0x38 + uVar5) = 0;
  return;
}



// FUNCTION 148f173de FUN_148f173de body=33 status=ok
// SIG undefined FUN_148f173de(void)

void FUN_148f173de(longlong param_1)

{
  FUN_148a1f642();
  FUN_148d57ca0(param_1 + 0xde0);
  return;
}



// FUNCTION 148f17400 FUN_148f17400 body=127 status=ok
// SIG undefined FUN_148f17400(void)

void FUN_148f17400(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  bVar1 = *(byte *)(param_1 + 0xbd8);
  if ((int)(uint)bVar1 < *(int *)(param_1 + 0xbf0)) {
    lVar2 = *(longlong *)
             (*(longlong *)(param_1 + 0xbe8) + 0x20 + (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8
             );
    if (lVar2 != 0) {
      lVar3 = FUN_14018fcd2();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        FUN_1457c7c16(lVar2,param_2,param_3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148f17480 FUN_148f17480 body=451 status=ok
// SIG undefined FUN_148f17480(void)

void FUN_148f17480(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 unaff_RBX;
  longlong *plVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined8 *local_80;
  undefined8 local_70;
  longlong local_68;
  longlong *local_60;
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((int)param_1[0x15] == 2) {
    plVar3 = param_1 + -0x1be;
    lVar7 = param_1[0x14];
    if (((lVar7 != 0) && (*(longlong *)(lVar7 + 0x20) != 0)) &&
       (*(int *)(lVar7 + 0x28) - 1U < 0xfffffffe)) {
      uVar6 = FUN_1447210f0(plVar3);
      FUN_1407f7f84(&local_68,uVar6);
      unaff_RBX = param_2;
      if (local_60 != (longlong *)0x0) {
        iVar5 = (int)local_60[1];
        do {
          if (iVar5 == 0) {
            plVar8 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar4 = (int)local_60[1];
          bVar9 = iVar5 == iVar4;
          if (bVar9) {
            *(int *)(local_60 + 1) = iVar5 + 1;
            iVar4 = iVar5;
          }
          iVar5 = iVar4;
          UNLOCK();
          plVar8 = local_60;
        } while (!bVar9);
        LOCK();
        piVar1 = (int *)((longlong)local_60 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_60 + 0x10))();
        }
        if (plVar8 != (longlong *)0x0) {
          if (local_68 != 0) {
            lVar7 = param_1[-0x188];
            local_70 = *(undefined8 *)(param_1[0x14] + 0x20);
            FUN_1446dcdd4(&local_68);
            uVar6 = FUN_141880288(&local_68);
            local_80 = &DAT_14cb7bc40;
            local_88 = 1;
            FUN_1408f24ec(local_68,uVar6,lVar7,param_2);
            if (local_50 != 0) {
              FUN_1400020a8();
            }
          }
          LOCK();
          plVar2 = plVar8 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
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
    }
    fVar10 = (float)(**(code **)(*param_1 + 0x28))(param_1);
    fVar11 = (float)(**(code **)(*param_1 + 0x20))(param_1);
    FUN_1401e6366(plVar3,(int)fVar11,
                  CONCAT71((int7)((ulonglong)unaff_RBX >> 8),ABS(fVar10) <= 1e-08) & 0xffffffff,0);
    lVar7 = FUN_1447210f0(plVar3);
    *(float *)(param_1 + 0x1c) = (float)*(double *)(lVar7 + 0x6d0);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f17644 FUN_148f17644 body=96 status=ok
// SIG undefined FUN_148f17644(void)

void FUN_148f17644(longlong param_1,longlong *param_2)

{
  char cVar1;
  
  *(undefined1 *)(param_1 + 0xed4) = 1;
  if (((param_2 != (longlong *)0x0) && (*(char *)(param_1 + 0x178) != '\x03')) &&
     (*(longlong *)(param_1 + 0xd60) == DAT_14cb95120)) {
    cVar1 = (**(code **)(*param_2 + 0x6c8))(param_2);
    if (cVar1 != '\0') {
      FUN_148a1fc34(param_1);
      FUN_1408bd412(param_1,&DAT_14cb95128);
      return;
    }
  }
  return;
}



// FUNCTION 148f176a4 FUN_148f176a4 body=74 status=ok
// SIG undefined FUN_148f176a4(void)

void FUN_148f176a4(longlong param_1)

{
  *(undefined1 *)(param_1 + 0xed4) = 0;
  if ((*(char *)(param_1 + 0x178) != '\x03') && (*(longlong *)(param_1 + 0xd60) != DAT_14cb95120)) {
    FUN_148a1f8a2(param_1);
    FUN_1408bd412(param_1,&DAT_14cb95120);
    return;
  }
  return;
}



// FUNCTION 148f176ee FUN_148f176ee body=78 status=ok
// SIG undefined FUN_148f176ee(void)

undefined8 FUN_148f176ee(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_148a20200(param_1,*(undefined1 *)(param_1 + 0xbd8));
  if (lVar1 != 0) {
    lVar2 = FUN_140086990();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      uVar3 = FUN_140086a76(lVar1);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 148f1773c FUN_148f1773c body=129 status=ok
// SIG undefined FUN_148f1773c(void)

void FUN_148f1773c(longlong param_1,byte param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((int)(uint)param_2 < *(int *)(param_1 + 0xbf0)) {
    lVar1 = *(longlong *)
             (*(longlong *)(param_1 + 0xbe8) + 0x38 +
             (ulonglong)param_2 * 0x80 + (ulonglong)param_2 * 8);
    if (lVar1 != 0) {
      lVar2 = FUN_145b99072();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        FUN_148e0338c(lVar1 + 0x48,param_3);
        return;
      }
    }
  }
  FUN_1418cffa4(param_3,param_1 + 0xed8);
  return;
}



// FUNCTION 148f177be FUN_148f177be body=439 status=ok
// SIG undefined FUN_148f177be(void)

void FUN_148f177be(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_c8 [32];
  undefined2 *local_a8;
  undefined8 *local_a0;
  undefined4 local_98;
  undefined2 local_90 [2];
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((param_2 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(param_1 + 0xf18) = param_2;
    if (param_2 == 0) goto LAB_148f17925;
  }
  else {
    FUN_1456cec3c(param_2);
    *(longlong *)(param_1 + 0xf18) = param_2;
  }
  if (*(char *)(param_1 + 0x178) != '\x03') {
    cVar3 = FUN_14130ac92(param_1);
    if (cVar3 != '\0') {
      uVar4 = FUN_1401b4c98(param_1);
      local_a0 = (undefined8 *)0x0;
      local_98 = 0;
      FUN_1446efa72(&local_a0,0,3,0x10);
      puVar1 = local_a0;
      local_98 = 3;
      *local_a0 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      local_a0[2] = lVar5;
      *local_a0 = &PTR_FUN_14b9e1ae0;
      local_a0[3] = 0;
      FUN_14485c47a(local_a0 + 3,param_1);
      *(undefined4 *)(puVar1 + 5) = 0;
      puVar1[4] = FUN_148f17976;
      local_88 = 0;
      local_80 = 0;
      FUN_14487d8d8(&local_88,&local_a0);
      local_48 = 1;
      local_a8 = local_90;
      local_90[0] = 1;
      local_8c = 0xbf800000;
      FUN_1406f4044(uVar4,param_1 + 0xf60,&local_88,0x3e800000);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
      FUN_1449db362(&local_a0);
    }
  }
LAB_148f17925:
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f17976 FUN_148f17976 body=119 status=ok
// SIG undefined FUN_148f17976(void)

void FUN_148f17976(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  if ((*(longlong *)(param_1 + 0xf18) != 0) && (*(char *)(param_1 + 0x178) != '\x03')) {
    cVar2 = FUN_14130ac92(param_1);
    if (cVar2 != '\0') {
      lVar1 = param_1 + 0xf20;
      cVar2 = FUN_148d0512c(*(longlong *)(param_1 + 0xf18) + 0xae0,lVar1);
      if (cVar2 == '\0') {
        FUN_14400a028(lVar1,*(longlong *)(param_1 + 0xf18) + 0xae0);
        FUN_148ca122c(param_1,lVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148f179ee FUN_148f179ee body=235 status=ok
// SIG undefined FUN_148f179ee(void)

void FUN_148f179ee(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(longlong *)(param_1 + 0xf18) != 0) && (*(char *)(param_1 + 0x178) != '\x03')) {
    cVar2 = FUN_14130ac92(param_1);
    if (cVar2 != '\0') {
      local_68 = 0;
      uStack_60 = 0;
      local_58 = DAT_14c8464e0;
      uStack_50 = DAT_14c8464e8;
      local_48 = DAT_14c8464f0;
      local_40 = (undefined4)DAT_14c8464f8;
      uStack_3c = DAT_14c8464f8._4_4_;
      uStack_38 = (undefined4)DAT_14c846500;
      uStack_34 = DAT_14c846500._4_4_;
      local_30 = DAT_14c846508;
      FUN_148bab1be(param_1 + 0xf20);
      FUN_148ca122c(param_1,param_1 + 0xf20);
      uVar3 = FUN_1401b4c98(param_1);
      puVar1 = (undefined8 *)(param_1 + 0xf60);
      lVar4 = FUN_144a61814(uVar3,puVar1);
      if (lVar4 != 0) {
        FUN_1405a424c(uVar3,*puVar1);
      }
      *puVar1 = 0;
    }
  }
  *(undefined8 *)(param_1 + 0xf18) = 0;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f17aea FUN_148f17aea body=108 status=ok
// SIG undefined FUN_148f17aea(void)

undefined4 FUN_148f17aea(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  bVar1 = *(byte *)(param_1 + 0xbd8);
  uVar4 = 0;
  if ((int)(uint)bVar1 < *(int *)(param_1 + 0xbf0)) {
    lVar2 = *(longlong *)
             (*(longlong *)(param_1 + 0xbe8) + 8 + (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8);
    if (lVar2 != 0) {
      lVar3 = FUN_1459f3c32();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        uVar4 = *(undefined4 *)(lVar2 + 0x334);
      }
    }
  }
  return uVar4;
}



// FUNCTION 148f17b56 FUN_148f17b56 body=108 status=ok
// SIG undefined FUN_148f17b56(void)

undefined4 FUN_148f17b56(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  bVar1 = *(byte *)(param_1 + 0xbd8);
  uVar4 = 0;
  if ((int)(uint)bVar1 < *(int *)(param_1 + 0xbf0)) {
    lVar2 = *(longlong *)
             (*(longlong *)(param_1 + 0xbe8) + 8 + (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8);
    if (lVar2 != 0) {
      lVar3 = FUN_1459f3c32();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        uVar4 = *(undefined4 *)(lVar2 + 0x340);
      }
    }
  }
  return uVar4;
}



// FUNCTION 148f17bc2 FUN_148f17bc2 body=113 status=ok
// SIG undefined FUN_148f17bc2(void)

undefined4 FUN_148f17bc2(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  bVar1 = *(byte *)(param_1 + 0xbd8);
  uVar4 = 0x3f800000;
  if ((int)(uint)bVar1 < *(int *)(param_1 + 0xbf0)) {
    lVar2 = *(longlong *)
             (*(longlong *)(param_1 + 0xbe8) + 8 + (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8);
    if (lVar2 != 0) {
      lVar3 = FUN_1459f3c32();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        uVar4 = *(undefined4 *)(lVar2 + 0x34c);
      }
    }
  }
  return uVar4;
}



// FUNCTION 148f17c34 FUN_148f17c34 body=78 status=ok
// SIG undefined FUN_148f17c34(void)

longlong FUN_148f17c34(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)(*(longlong *)(param_1 + -0x540) + 0xa8))(param_1 + -0x540,0);
  if (lVar1 != 0) {
    lVar2 = FUN_144a78c84();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 148f17c82 FUN_148f17c82 body=1642 status=ok
// SIG undefined FUN_148f17c82(void)

undefined1 *
FUN_148f17c82(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined1 *puVar12;
  longlong lVar13;
  longlong lVar14;
  byte bVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined1 *local_a0;
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  longlong local_80;
  undefined1 local_78;
  undefined7 uStack_77;
  longlong *local_70;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar6 = FUN_140b99898(param_4);
  if (lVar6 == 0) {
    plVar9 = (longlong *)FUN_1447262c2(param_4);
    if (plVar9 != (longlong *)0x0) {
      uVar10 = FUN_141262f1a();
      plVar9 = (longlong *)(**(code **)(*plVar9 + 0x288))(plVar9,uVar10);
      if (plVar9 != (longlong *)0x0) {
        uVar10 = FUN_141262f1a();
        plVar11 = (longlong *)FUN_144718840(plVar9,uVar10);
        if (((plVar11 != (longlong *)0x0 && plVar9 != plVar11) &&
            (lVar6 = (**(code **)(*plVar11 + 0x10))(plVar11), 0 < *(int *)(lVar6 + 0xa8))) &&
           (lVar6 = (**(code **)(*plVar11 + 0x10))(plVar11), 0 < *(int *)(lVar6 + 0xa8))) {
          lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0xa0) + 0x20);
          if ((DAT_14c950c29 == '\x01') && (lVar6 != 0)) {
            FUN_1456cec3c(lVar6);
          }
          else if (lVar6 == 0) goto LAB_148f17ff9;
          lVar8 = FUN_144a7a5f4();
          if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) goto LAB_148f17cc4;
        }
      }
    }
LAB_148f17ff9:
    FUN_140082e80(param_4,&local_78);
    if (CONCAT71(uStack_77,local_78) == 0) {
      *(undefined8 *)(param_2 + 0x30) = 0;
      *(undefined8 *)(param_2 + 0x38) = 0x100000000;
    }
    else if ((*(int *)(param_1 + 0x38) == 0) ||
            (*(longlong *)(CONCAT71(uStack_77,local_78) + 0x140) == 0)) {
      *(undefined8 *)(param_2 + 0x30) = 0;
      *(undefined4 *)(param_2 + 0x3c) = 1;
LAB_148f180f3:
      *(undefined4 *)(param_2 + 0x38) = 1;
      *param_2 = 0;
      *(undefined4 *)(param_2 + 0x28) = 0;
      FUN_1400831be(param_2,&local_78);
    }
    else {
      uVar10 = FUN_140231a4a();
      FUN_1402315da(uVar10,&local_98);
      if (((local_98 == 0) || (*(uint *)(param_1 + 0x38) == 0)) ||
         ((*(uint *)(param_1 + 0x38) >> (*(uint *)(local_98 + 0x150) & 0x1f) & 1) == 0)) {
        if (local_90 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_90 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
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
        *(undefined8 *)(param_2 + 0x30) = 0;
        *(undefined8 *)(param_2 + 0x38) = 0x100000000;
        if (CONCAT71(uStack_77,local_78) != 0) goto LAB_148f180f3;
      }
      else {
        *(undefined8 *)(param_2 + 0x30) = 0;
        *(undefined8 *)(param_2 + 0x38) = 0x100000000;
        if (local_90 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_90 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
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
      }
    }
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_70 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    goto LAB_148f17ced;
  }
LAB_148f17cc4:
  if ((*(uint *)(param_1 + 0x38) != 0) &&
     ((*(uint *)(param_1 + 0x38) >> (*(byte *)(lVar6 + 0xe39) & 0x1f) & 1) != 0)) {
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0x100000000;
    goto LAB_148f17ced;
  }
  lVar8 = param_1 + 8;
  lVar7 = FUN_14479d2ce(lVar8);
  if (lVar7 == 0) {
    if (*(longlong *)(param_1 + 0x10) != 0) {
      lVar7 = FUN_140007850();
      cVar4 = (*(code *)PTR_FUN_14c758760)();
      if ((lVar7 == 0) || (cVar4 == '\0')) {
        FUN_14485c47a(lVar8,lVar7);
        if (lVar7 == 0) goto LAB_148f17f5e;
      }
      else {
        uVar17 = *(uint *)(lVar7 + 0xc);
        if ((int)uVar17 < DAT_14c9647dc) {
          lVar13 = (ulonglong)((uVar17 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8);
        }
        else {
          lVar13 = 0;
        }
        if ((*(uint *)(lVar13 + 8) & 0x8400000) == 0) {
          FUN_14485c47a(lVar8,lVar7);
        }
      }
      if ((*(uint *)(lVar7 + 8) >> 0x1e & 1) == 0) goto LAB_148f17d34;
    }
  }
  else {
LAB_148f17d34:
    lVar8 = FUN_144a797b2();
    if ((((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8
           ) == lVar8 + 0x30)) && (lVar8 = FUN_144a7b33c(), lVar8 != 0)) &&
       (*(int *)(lVar8 + 0x38) <= *(int *)(lVar7 + 0x38))) {
      lVar13 = 0;
      if (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
          lVar8 + 0x30) {
        lVar13 = lVar7;
      }
      if ((lVar13 == 0) || (DAT_14c950c29 == '\0')) {
        if (lVar13 == 0) goto LAB_148f17f5e;
      }
      else {
        FUN_1456cec3c(lVar13);
      }
      lVar8 = FUN_144a7b33c();
      if (((lVar8 != 0) && (*(int *)(lVar8 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
          lVar8 + 0x30)) {
        *(undefined8 *)(param_2 + 0x30) = 0;
        *(undefined8 *)(param_2 + 0x38) = 0x100000000;
        uVar17 = *(uint *)(param_1 + 0x30);
        if (uVar17 == 0) {
          uVar17 = *(uint *)(lVar6 + 0x8f8);
        }
        if ((char)uVar17 == '\0') {
          local_88 = lVar7;
          if ((lVar13 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar7);
          }
          lVar8 = FUN_140083030(lVar6,&local_88);
          if (lVar8 != 0) {
            iVar3 = *(int *)(param_2 + 0x38);
            *(uint *)(param_2 + 0x38) = iVar3 + 1U;
            if (*(uint *)(param_2 + 0x3c) < iVar3 + 1U) {
              FUN_1400832a0(param_2,iVar3);
            }
            puVar12 = *(undefined1 **)(param_2 + 0x30);
            if (*(undefined1 **)(param_2 + 0x30) == (undefined1 *)0x0) {
              puVar12 = param_2;
            }
            lVar7 = (longlong)iVar3 * 0x30;
            puVar12[lVar7] = 0;
            *(undefined4 *)(puVar12 + lVar7 + 0x28) = 0;
            FUN_1456bb102(puVar12 + lVar7,lVar8);
          }
        }
        else {
          bVar2 = *(byte *)(lVar6 + 0xbf0);
          if (bVar2 != 0) {
            uVar16 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
            do {
              if ((uVar17 & 1) != 0) {
                local_80 = lVar7;
                if ((lVar13 != 0) && (DAT_14c950c29 != '\0')) {
                  FUN_1456cec3c(lVar7);
                }
                lVar8 = FUN_1448a09a2(lVar6,&local_80,(int)uVar16 + -1);
                if (lVar8 != 0) {
                  local_78 = 0;
                  local_50 = 0;
                  FUN_1456bb102(&local_78,lVar8);
                  cVar4 = FUN_14008324a(param_2,&local_78);
                  local_a0 = param_2;
                  FUN_144a5ac3a(&local_78);
                  param_2 = local_a0;
                  if (cVar4 == '\0') {
                    lVar14 = (longlong)*(int *)(local_a0 + 0x38);
                    uVar5 = *(int *)(local_a0 + 0x38) + 1;
                    *(uint *)(local_a0 + 0x38) = uVar5;
                    if (*(uint *)(local_a0 + 0x3c) < uVar5) {
                      local_a8 = lVar14;
                      FUN_1400832a0(local_a0,lVar14);
                      lVar14 = local_a8;
                    }
                    puVar12 = *(undefined1 **)(param_2 + 0x30);
                    if (*(undefined1 **)(param_2 + 0x30) == (undefined1 *)0x0) {
                      puVar12 = param_2;
                    }
                    lVar14 = lVar14 * 0x30;
                    puVar12[lVar14] = 0;
                    *(undefined4 *)(puVar12 + lVar14 + 0x28) = 0;
                    FUN_1456bb102(puVar12 + lVar14,lVar8);
                  }
                }
              }
              uVar17 = uVar17 >> 1 & 0x7f;
            } while ((uVar17 != 0) &&
                    (bVar15 = (byte)uVar16, uVar16 = (ulonglong)((int)uVar16 + 1), bVar15 < bVar2));
          }
        }
        cVar4 = FUN_144b0893e(param_2);
        if (cVar4 == '\0') goto LAB_148f17ced;
        FUN_1446fdf24(param_2);
      }
    }
  }
LAB_148f17f5e:
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined1 **)(param_2 + 0x38) = &DAT_100000001;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 0x28) = 0;
  FUN_1456bb102(param_2,lVar6);
LAB_148f17ced:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148f182ee FUN_148f182ee body=32 status=ok
// SIG undefined FUN_148f182ee(void)

undefined8 FUN_148f182ee(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"OakWeaponNamingStrategy");
  return param_2;
}



// FUNCTION 148f18312 FUN_148f18312 body=1 status=ok
// SIG undefined FUN_148f18312(void)

void FUN_148f18312(void)

{
  return;
}



// FUNCTION 148f18314 FUN_148f18314 body=199 status=ok
// SIG undefined FUN_148f18314(void)

void FUN_148f18314(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  char param_5)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    lVar1 = FUN_144a2f878();
    if ((((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) &&
        (*(char *)(param_1 + 0x178) == '\x03')) && (0 < *(int *)(param_1 + 0x6190))) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x6188) + 0x20);
      if ((lVar1 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar1);
      }
      else if (lVar1 == 0) {
        return;
      }
      if (param_5 == '\0') {
        lVar2 = FUN_145908c4c();
        if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
          return;
        }
      }
      FUN_1401e6366(lVar1,param_2,param_3,param_4);
      return;
    }
  }
  return;
}



// FUNCTION 148f183dc FUN_148f183dc body=284 status=ok
// SIG undefined FUN_148f183dc(void)

void FUN_148f183dc(longlong param_1,int param_2,undefined4 param_3,char param_4)

{
  byte bVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_1 != 0) {
    lVar4 = FUN_144a2f878();
    if ((((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
        (*(char *)(param_1 + 0x178) == '\x03')) && (0 < *(int *)(param_1 + 0x6190))) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x6188) + 0x20);
      if ((lVar4 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar4);
      }
      else if (lVar4 == 0) {
        return;
      }
      if (param_4 == '\0') {
        lVar5 = FUN_145908c4c();
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
          return;
        }
      }
      bVar1 = *(byte *)(lVar4 + 0xbd8);
      if (((int)(uint)bVar1 < *(int *)(lVar4 + 0xbf0)) &&
         (plVar2 = *(longlong **)
                    (*(longlong *)(lVar4 + 0xbe8) + 0x10 +
                    (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8), plVar2 != (longlong *)0x0)) {
        uVar3 = (**(code **)(*plVar2 + 0x330))();
        FUN_1401e6366(lVar4,param_2,uVar3 ^ 1,param_3);
      }
      if (0 < param_2) {
        FUN_148f1aaee(param_1 + 0x55b8,param_2,2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148f184f8 FUN_148f184f8 body=151 status=ok
// SIG undefined FUN_148f184f8(void)

void FUN_148f184f8(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    lVar2 = FUN_144a2f878();
    if ((((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) &&
        (*(char *)(param_1 + 0x178) == '\x03')) && (0 < *(int *)(param_1 + 0x6190))) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6188) + 0x20);
      if ((plVar1 != (longlong *)0x0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(plVar1);
      }
      else if (plVar1 == (longlong *)0x0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000148f18582. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x808))(plVar1,param_2,param_3,1);
      return;
    }
  }
  return;
}



// FUNCTION 148f18590 FUN_148f18590 body=226 status=ok
// SIG undefined FUN_148f18590(void)

void FUN_148f18590(longlong param_1,undefined4 param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    lVar1 = FUN_144a2f878();
    if ((((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) &&
        (*(char *)(param_1 + 0x178) == '\x03')) && (0 < *(int *)(param_1 + 0x6190))) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x6188) + 0x20);
      if ((lVar1 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar1);
      }
      else if (lVar1 == 0) {
        return;
      }
      lVar2 = FUN_144a7a5f4();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        if (param_3 == '\0') {
          lVar2 = FUN_145908c4c();
          if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
            return;
          }
        }
        FUN_148f17400(lVar1,param_2,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148f1869a FUN_148f1869a body=54 status=ok
// SIG undefined FUN_148f1869a(void)

bool FUN_148f1869a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_140b99898(param_3);
  if ((lVar1 != 0) && ((ulonglong)*(byte *)(param_1 + 8) != 0x11)) {
    *(undefined4 *)(lVar1 + 0xe3c + (ulonglong)*(byte *)(param_1 + 8) * 4) = 0;
  }
  return lVar1 != 0;
}



// FUNCTION 148f186d0 FUN_148f186d0 body=242 status=ok
// SIG undefined FUN_148f186d0(void)

undefined8
FUN_148f186d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,float param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  lVar1 = FUN_140b99898(param_4);
  if (lVar1 == 0) goto LAB_148f187aa;
  uVar2 = (ulonglong)*(byte *)(param_1 + 8);
  iVar3 = 0;
  if (uVar2 != 0x11) {
    iVar3 = *(int *)(lVar1 + 0xe3c + uVar2 * 4);
  }
  switch(param_5) {
  case 0:
    param_6 = (float)iVar3 *
              (float)(-(uint)(param_6 < 0.0) & (uint)(1.0 / (1.0 - param_6)) |
                     ~-(uint)(param_6 < 0.0) & (uint)(param_6 + 1.0));
    goto LAB_148f1879a;
  case 1:
  case 2:
    iVar3 = iVar3 + ((int)ROUND(param_6 + param_6 + -0.5) >> 1);
    break;
  case 3:
    param_6 = (float)iVar3 * param_6;
LAB_148f1879a:
    iVar3 = (int)param_6;
    break;
  case 4:
    iVar3 = (int)ROUND(param_6 + param_6 + -0.5) >> 1;
  }
  if (*(byte *)(param_1 + 8) != 0x11) {
    *(int *)(lVar1 + 0xe3c + uVar2 * 4) = iVar3;
  }
LAB_148f187aa:
  FUN_14162be86(param_2,lVar1 != 0);
  return param_2;
}



// FUNCTION 148f187c2 FUN_148f187c2 body=124 status=ok
// SIG undefined FUN_148f187c2(void)

undefined8 *
FUN_148f187c2(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined1 param_6,undefined4 param_7,undefined8 param_8)

{
  char cVar1;
  
  cVar1 = FUN_1412cbf0e(param_5);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x60))(param_1,param_2,param_3,param_4,param_6,param_7,param_8);
  }
  else {
    *param_2 = *param_5;
  }
  return param_2;
}



// FUNCTION 148f1883e FUN_148f1883e body=272 status=ok
// SIG undefined FUN_148f1883e(void)

void FUN_148f1883e(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  code *local_30;
  undefined4 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 0x1870) != *param_2) ||
     (*(int *)(param_1 + 0x1878) != (int)param_2[1])) {
    *(longlong *)(param_1 + 0x1870) = *param_2;
    *(int *)(param_1 + 0x1878) = (int)param_2[1];
    *(undefined8 *)(param_1 + 0x1880) = 0;
  }
  *(undefined4 *)(param_1 + 0x18b0) = param_3;
  *(undefined4 *)(param_1 + 0x18b4) = param_4;
  *(undefined4 *)(param_1 + 0x18b8) = param_5;
  if (*(char *)(param_1 + 0x178) == '\x03') {
    lVar1 = FUN_148f1d84c(param_1 + 0x1870);
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x18) - 1U < 2)) &&
       (lVar1 = *(longlong *)(param_1 + 0x1b0), lVar1 != 0)) {
      uVar2 = FUN_1403ec9c0();
      plVar3 = (longlong *)FUN_144718840(lVar1,uVar2);
      if (plVar3 != (longlong *)0x0) {
        lVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
        local_30 = FUN_148f18a50;
        local_28 = 0;
        FUN_148f18950(lVar1 + 8,&local_20,param_1);
        *(undefined8 *)(param_1 + 0x18d0) = local_20;
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f18950 FUN_148f18950 body=254 status=ok
// SIG undefined FUN_148f18950(void)

undefined8
FUN_148f18950(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
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
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b3e9ef0;
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
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9e1be0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1403524de(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f18a50 FUN_148f18a50 body=484 status=ok
// SIG undefined FUN_148f18a50(void)

void FUN_148f18a50(longlong param_1,longlong *param_2)

{
  double dVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  
  if (((param_2 != (longlong *)0x0) && (lVar4 = FUN_1447210f0(), lVar4 != 0)) &&
     (lVar5 = (**(code **)(*param_2 + 0x100))(param_2), lVar5 == param_1)) {
    if ((*(byte *)(param_1 + 0xee1) & 1) != 0) {
      FUN_148f18cae(param_1,param_1 + 0x1018,0);
      return;
    }
    lVar5 = *(longlong *)(param_1 + 0x168);
    if (lVar5 != 0) {
      dVar1 = *(double *)(lVar4 + 0x6d0);
      lVar4 = FUN_144a7a5f4();
      iVar2 = *(int *)(lVar4 + 0x38);
      if ((iVar2 <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
         (*(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar2 * 8) ==
          lVar4 + 0x30)) {
        cVar3 = FUN_14893e652(param_1,CONCAT71((int7)(int3)((uint)iVar2 >> 8),1));
        if (cVar3 == '\0') {
          fVar7 = (float)(**(code **)(*(longlong *)(lVar5 + 0xdf0) + 0x40))(lVar5 + 0xdf0);
          fVar8 = (float)(**(code **)(*(longlong *)(lVar5 + 0xdf0) + 0x38))(lVar5 + 0xdf0);
          if ((float)dVar1 < fVar8 + fVar7) {
            return;
          }
        }
        lVar4 = FUN_148f1d84c(param_1 + 0x1870);
        if (lVar4 != 0) {
          if (*(int *)(lVar4 + 0x18) == 2) {
            if ((cVar3 == '\0') &&
               (lVar4 = (**(code **)(*param_2 + 8))(param_2), (*(byte *)(lVar4 + 0x7c) & 1) == 0)) {
              return;
            }
            (**(code **)(*(longlong *)(lVar5 + 0xdf0) + 0x68))(lVar5 + 0xdf0,param_1 + 0x1018);
            UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(lVar5 + 0xdf0) + 0x60);
            uVar6 = 2;
          }
          else {
            if (*(int *)(lVar4 + 0x18) != 1) {
              return;
            }
            if ((cVar3 == '\0') &&
               (lVar4 = (**(code **)(*param_2 + 8))(param_2), (*(byte *)(lVar4 + 0x7c) & 1) == 0)) {
              return;
            }
            fVar7 = (float)(**(code **)(*(longlong *)(lVar5 + 0xdf0) + 0x30))(lVar5 + 0xdf0);
            FUN_148f18cae(param_1,param_1 + 0x1018,0.0001 < fVar7);
            UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(lVar5 + 0xdf0) + 0x60);
            uVar6 = 1;
          }
                    /* WARNING: Could not recover jumptable at 0x000148f18c31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(lVar5 + 0xdf0,uVar6);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 148f18c34 FUN_148f18c34 body=110 status=ok
// SIG undefined FUN_148f18c34(void)

void FUN_148f18c34(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if ((*(longlong *)(param_1 + 0x1888) != *param_2) ||
     (*(int *)(param_1 + 0x1890) != (int)param_2[1])) {
    *(longlong *)(param_1 + 0x1888) = *param_2;
    *(int *)(param_1 + 0x1890) = (int)param_2[1];
    *(undefined8 *)(param_1 + 0x1898) = 0;
  }
  *(undefined8 *)(param_1 + 0x18c8) = 0;
  plVar1 = (longlong *)FUN_148f1d84c(param_1 + 0x1888);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1);
    *(undefined8 *)(param_1 + 0x18c8) = uVar2;
  }
  return;
}



// FUNCTION 148f18cae FUN_148f18cae body=2353 status=ok
// SIG undefined FUN_148f18cae(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_148f18cae(longlong param_1,longlong param_2,undefined1 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 *puVar7;
  undefined8 **ppuVar8;
  int iVar9;
  undefined1 uVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  longlong *plVar16;
  undefined4 *puVar17;
  longlong *plVar18;
  bool bVar19;
  float fVar20;
  undefined1 auStack_758 [32];
  undefined8 *local_738;
  undefined8 ***local_730;
  longlong *local_728;
  undefined8 local_720;
  undefined4 *local_718;
  int local_710;
  undefined4 local_708;
  undefined1 local_700;
  undefined4 local_6f8;
  longlong local_6f0;
  undefined4 local_6e8;
  undefined4 uStack_6e4;
  undefined4 uStack_6e0;
  undefined4 uStack_6dc;
  undefined4 local_6d8;
  undefined4 uStack_6d4;
  undefined4 uStack_6d0;
  undefined4 uStack_6cc;
  undefined4 local_6c8;
  undefined4 uStack_6c4;
  undefined4 uStack_6c0;
  undefined4 uStack_6bc;
  undefined8 *local_6b8;
  undefined8 *local_6b0;
  undefined8 ***local_6a8;
  undefined8 local_6a0;
  undefined8 local_698;
  longlong *local_690;
  float local_684;
  undefined1 local_680;
  undefined1 local_67a;
  undefined1 local_679;
  undefined8 **local_678;
  longlong *plStack_670;
  undefined8 local_668;
  undefined8 uStack_660;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined8 local_648;
  undefined8 uStack_640;
  undefined8 local_638;
  undefined8 local_628;
  undefined8 local_618;
  undefined8 local_5e8;
  undefined8 local_5d8;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined8 local_598;
  undefined8 local_590;
  undefined8 local_588;
  undefined8 local_580;
  undefined4 local_578;
  undefined4 local_574;
  undefined4 local_570;
  longlong local_368;
  undefined4 local_360;
  undefined2 local_348;
  undefined1 local_340;
  char local_338;
  longlong local_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined2 local_310;
  undefined1 local_308;
  byte local_300;
  longlong local_2f8 [5];
  undefined8 local_2d0;
  undefined4 local_2c8;
  undefined8 local_2c4;
  undefined4 local_2bc;
  undefined8 local_2b0;
  undefined4 local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_280;
  undefined4 local_278;
  undefined8 local_274;
  undefined4 local_26c;
  undefined8 local_260;
  undefined4 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_220;
  undefined4 local_218;
  undefined8 local_214;
  undefined4 local_20c;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined1 local_1f0;
  undefined4 local_1c8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_758;
  if ((((*(longlong *)(param_1 + 0x1870) != 0) && (*(int *)(param_1 + 0x1878) - 1U < 0xfffffffe)) &&
      ((*(byte *)(param_1 + 0x10c5) & 3) == 1)) &&
     ((*(char *)(param_1 + 0x18bc) == '\0' &&
      (plVar12 = (longlong *)FUN_148f1d84c(param_1 + 0x1870), plVar12 != (longlong *)0x0)))) {
    lVar13 = (**(code **)(*plVar12 + 8))(plVar12);
    lVar14 = FUN_140ff140e();
    if ((lVar14 != 0) &&
       ((*(int *)(lVar14 + 0x38) <= *(int *)(lVar13 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8) ==
         lVar14 + 0x30)))) {
      if ((plVar12[4] != 0) && ((int)plVar12[5] - 1U < 0xfffffffe)) {
        uVar15 = FUN_1447210f0(param_1);
        FUN_1407f7f84(&local_678,uVar15);
        if (plStack_670 != (longlong *)0x0) {
          iVar11 = (int)plStack_670[1];
          do {
            if (iVar11 == 0) {
              plVar18 = (longlong *)0x0;
              break;
            }
            LOCK();
            iVar9 = (int)plStack_670[1];
            bVar19 = iVar11 == iVar9;
            if (bVar19) {
              *(int *)(plStack_670 + 1) = iVar11 + 1;
              iVar9 = iVar11;
            }
            iVar11 = iVar9;
            UNLOCK();
            plVar18 = plStack_670;
          } while (!bVar19);
          LOCK();
          piVar1 = (int *)((longlong)plStack_670 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plStack_670 + 0x10))();
          }
          ppuVar8 = local_678;
          if (plVar18 != (longlong *)0x0) {
            if (local_678 != (undefined8 **)0x0) {
              local_648 = 0;
              uStack_640 = 0;
              local_658 = 0;
              uStack_650 = 0;
              local_668 = 0;
              uStack_660 = 0;
              local_678 = (undefined8 **)0x0;
              plStack_670 = (longlong *)0x0;
              local_638 = CONCAT44(local_638._4_4_,0xc0);
              local_628 = 0;
              local_618 = 0;
              local_5e8 = 0;
              local_5d8 = 0;
              local_5a8 = 0;
              uStack_5a0 = 0;
              local_598 = 0;
              local_590 = 0x3ff0000000000000;
              local_588 = 0x3ff0000000000000;
              local_580 = 0x3ff0000000000000;
              local_578 = 0;
              local_570 = 0;
              local_574 = *(undefined4 *)(param_1 + 0x74);
              local_6f0 = *(longlong *)(param_1 + 0x1b0);
              local_330 = plVar12[4];
              FUN_1446dcdd4(local_2f8);
              uVar15 = FUN_141880288(local_2f8);
              local_738 = (undefined8 *)CONCAT71(local_738._1_7_,1);
              local_730 = &local_678;
              FUN_1408f24ec(ppuVar8,uVar15,local_6f0,param_2);
              if (local_2f8[3] != 0) {
                FUN_1400020a8();
              }
              FUN_141466e9a(&local_678);
            }
            LOCK();
            plVar16 = plVar18 + 1;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)*plVar16 == 0) {
              (**(code **)*plVar18)(plVar18);
              LOCK();
              piVar1 = (int *)((longlong)plVar18 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar18 + 0x10))(plVar18);
              }
            }
          }
        }
      }
      lVar13 = FUN_1407a0dc0(plVar12 + 9);
      if (lVar13 != 0) {
        plVar18 = local_2f8 + 1;
        local_2d0 = 0;
        local_2c8 = 0;
        local_2f8[0] = 0;
        local_2f8[1] = 0;
        local_2f8[2] = 0;
        local_2c4 = 0xffffffff00000080;
        local_2bc = 0;
        local_2b0 = 0;
        local_2a8 = 0;
        local_280 = 0;
        local_278 = 0;
        local_2a0 = 0;
        uStack_298 = 0;
        local_274 = 0xffffffff00000080;
        local_26c = 0;
        local_260 = 0;
        local_258 = 0;
        local_250 = 0;
        local_248 = 0xffffffff00000000;
        local_220 = 0;
        local_218 = 0;
        local_240 = 0;
        uStack_238 = 0;
        local_214 = 0xffffffff00000080;
        local_20c = 0;
        local_200 = 0;
        local_1f8 = 0;
        local_1f0 = 0;
        local_1c8 = 0;
        local_1a0 = 0;
        local_198 = 0x200000000;
        local_188 = 0;
        local_180 = 0;
        uStack_17c = 0x20;
        uStack_178 = 0xffffffff;
        uStack_174 = 0;
        local_168 = 0;
        local_160 = 0;
        local_138 = 0;
        local_130 = 0x200000000;
        local_120 = 0;
        local_118 = 0;
        uStack_114 = 0x20;
        uStack_110 = 0xffffffff;
        uStack_10c = 0;
        local_100 = 0;
        local_f8 = 0;
        local_d0 = 0;
        local_c8 = 0x200000000;
        local_b8 = 0;
        local_b0 = 0;
        uStack_ac = 0x20;
        uStack_a8 = 0xffffffff;
        uStack_a4 = 0;
        local_98 = 0;
        local_90 = 0;
        local_88 = 0;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar13);
        }
        local_6f0 = param_1 + 0x1040;
        local_318 = *(undefined8 *)(param_1 + 0x1050);
        local_328 = *(undefined8 *)(param_1 + 0x1040);
        uStack_320 = *(undefined8 *)(param_1 + 0x1048);
        local_330 = 0;
        local_310 = 0x18;
        local_308 = 4;
        local_300 = (byte)~DAT_14c9a8994 >> 3 & 4;
        local_360 = (undefined4)plVar12[0xe];
        local_368 = 0;
        local_348 = 4;
        local_340 = 3;
        local_338 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
        local_2f8[0] = lVar13;
        FUN_1412d0e8a(&local_6b0);
        local_678 = &local_6b0;
        plStack_670 = &local_330;
        FUN_140ffad64(plVar18,&local_698,&local_678,0);
        FUN_143e0e83f(&local_6b0);
        plStack_670 = &local_368;
        local_678 = &local_6b0;
        FUN_140ffad64(plVar18,&local_698,&local_678,0);
        uVar15 = FUN_14485cccc(param_2 + 0xb8);
        local_678 = (undefined8 **)0x0;
        plStack_670 = (longlong *)0x0;
        local_658 = CONCAT62(local_658._2_6_,8);
        FUN_14485c47a(&plStack_670,uVar15);
        uStack_650 = CONCAT71(uStack_650._1_7_,7);
        uVar10 = 7;
        if ((DAT_14c9a8cf4 & 0x20) != 0) {
          uVar10 = 0;
        }
        local_648 = CONCAT71(local_648._1_7_,uVar10);
        FUN_1412d0e98(&local_698);
        local_6b0 = &local_698;
        local_6a8 = &local_678;
        FUN_140ff1448(plVar18,&local_684,&local_6b0,0);
        FUN_144a2da94(&local_678);
        FUN_140ff15b2(local_2f8);
        local_6a8 = (undefined8 ***)CONCAT44(local_6a8._4_4_,0x4000);
        local_6a0 = 0;
        puVar7 = *(undefined4 **)(*(longlong *)(param_1 + 0xe10) + 8);
        puVar17 = &DAT_14c9485f0;
        if (puVar7 != (undefined4 *)0x0) {
          puVar17 = puVar7;
        }
        FUN_1447325ac(puVar17,&local_6b8,1);
        if (local_6b8 != (undefined8 *)0x0) {
          local_6a0 = 0;
        }
        local_6b0 = local_6b8;
        fVar4 = *(float *)(param_1 + 0xe40);
        fVar5 = *(float *)(param_1 + 0x18b4);
        fVar20 = *(float *)(plVar12 + 0x18) * *(float *)(param_1 + 0x1158);
        fVar6 = *(float *)(param_1 + 0x18b0);
        local_6e8 = (undefined4)plVar12[0xf];
        uStack_6e4 = *(undefined4 *)((longlong)plVar12 + 0x7c);
        uStack_6e0 = (undefined4)plVar12[0x10];
        uStack_6dc = *(undefined4 *)((longlong)plVar12 + 0x84);
        local_6d8 = (undefined4)plVar12[0x11];
        uStack_6d4 = *(undefined4 *)((longlong)plVar12 + 0x8c);
        uStack_6d0 = (undefined4)plVar12[0x12];
        uStack_6cc = *(undefined4 *)((longlong)plVar12 + 0x94);
        local_6c8 = (undefined4)plVar12[0x13];
        uStack_6c4 = *(undefined4 *)((longlong)plVar12 + 0x9c);
        uStack_6c0 = (undefined4)plVar12[0x14];
        uStack_6bc = *(undefined4 *)((longlong)plVar12 + 0xa4);
        uVar15 = FUN_14485cccc();
        local_6f8 = 0;
        local_708 = 0;
        local_738 = &DAT_14c8464f8;
        local_700 = 0;
        local_720 = 0;
        local_728 = (longlong *)CONCAT71(local_728._1_7_,2);
        local_730 = (undefined8 ***)local_2f8;
        local_718 = &local_6e8;
        local_710 = (int)ROUND(fVar6 + fVar6 + -0.5) >> 1;
        FUN_140ff1788(&local_678,*(undefined8 *)(param_1 + 0x1b0),local_6f0,uVar15);
        plVar16 = (longlong *)FUN_14001cc68(0x3c0,0x10);
        bVar19 = 1e-08 < ABS(fVar20 + -1.0);
        plVar16[1] = (longlong)&DAT_100000001;
        *plVar16 = (longlong)&PTR_FUN_14b9e1c50;
        local_679 = 1;
        local_698._0_5_ = CONCAT14(bVar19,(undefined4)local_698);
        if (bVar19) {
          local_698 = (longlong *)CONCAT44(local_698._4_4_,fVar20);
        }
        local_680 = 1;
        local_730 = (undefined8 ***)&local_67a;
        local_738 = &local_698;
        local_728 = plVar12 + 0x19;
        local_684 = fVar4 * fVar5;
        local_67a = param_3;
        FUN_148937374(plVar16 + 2,&local_678,&local_6b0);
        if (plVar16 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
          UNLOCK();
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
        uVar15 = FUN_1447210f0(param_1);
        FUN_140e67fb0(&local_698,uVar15);
        if (local_690 != (longlong *)0x0) {
          iVar11 = (int)local_690[1];
          do {
            if (iVar11 == 0) {
              plVar12 = (longlong *)0x0;
              break;
            }
            LOCK();
            iVar9 = (int)local_690[1];
            bVar19 = iVar11 == iVar9;
            if (bVar19) {
              *(int *)(local_690 + 1) = iVar11 + 1;
              iVar9 = iVar11;
            }
            iVar11 = iVar9;
            UNLOCK();
            plVar12 = local_690;
          } while (!bVar19);
          LOCK();
          piVar1 = (int *)((longlong)local_690 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_690 + 0x10))();
          }
          plVar3 = local_698;
          if (plVar12 != (longlong *)0x0) {
            if (local_698 != (longlong *)0x0) {
              if (plVar16 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
                UNLOCK();
              }
              local_698 = plVar16 + 2;
              local_690 = plVar16;
              FUN_140e67c44(plVar3,&local_698);
              plVar3 = local_690;
              if (local_690 != (longlong *)0x0) {
                LOCK();
                plVar2 = local_690 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)*local_690)(local_690);
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
            LOCK();
            plVar3 = plVar12 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*plVar12)(plVar12);
              LOCK();
              piVar1 = (int *)((longlong)plVar12 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar12 + 0x10))(plVar12);
              }
            }
          }
        }
        if (plVar16 != (longlong *)0x0) {
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
        local_638 = 0;
        FUN_14076ba36();
        FUN_144a2da94(&local_368);
        FUN_144a2da94(&local_330);
        local_2f8[0] = 0;
        FUN_14076ba36(plVar18);
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_758) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f195e0 FUN_148f195e0 body=81 status=ok
// SIG undefined FUN_148f195e0(void)

void FUN_148f195e0(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(undefined8 *)(param_1 + 0x60);
  local_18 = *(undefined4 *)(param_1 + 0x68);
  FUN_148f19632();
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_148aca1d8(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f19632 FUN_148f19632 body=194 status=ok
// SIG undefined FUN_148f19632(void)

void FUN_148f19632(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined4)*param_2;
  uStack_44 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_40 = (undefined4)param_2[1];
  uStack_3c = *(undefined4 *)((longlong)param_2 + 0xc);
  FUN_148f1dba4();
  plVar7 = (longlong *)(param_1 + 0x38);
  FUN_148cf887e(plVar7,(int)param_2[1],1);
  if (0 < (int)param_2[1]) {
    lVar6 = 0x18;
    lVar8 = 0;
    lVar9 = 0;
    do {
      FUN_148aca162(*param_2 + lVar6);
      *(undefined8 *)(*plVar7 + lVar8) = *(undefined8 *)(*param_2 + -0x18 + lVar6);
      *(undefined4 *)(*plVar7 + 8 + lVar8) = *(undefined4 *)(*param_2 + lVar6);
      puVar1 = (undefined4 *)(*param_2 + 4 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(*plVar7 + 0xc + lVar8);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + 0x1c;
      lVar6 = lVar6 + 0x30;
    } while (lVar9 < (int)param_2[1]);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f196f6 FUN_148f196f6 body=81 status=ok
// SIG undefined FUN_148f196f6(void)

void FUN_148f196f6(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(undefined8 *)(param_1 + 0x60);
  local_18 = *(undefined4 *)(param_1 + 0x68);
  FUN_148f19748();
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_148aca1d8(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f19748 FUN_148f19748 body=194 status=ok
// SIG undefined FUN_148f19748(void)

void FUN_148f19748(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined4)*param_2;
  uStack_44 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_40 = (undefined4)param_2[1];
  uStack_3c = *(undefined4 *)((longlong)param_2 + 0xc);
  FUN_148f1dcb6();
  plVar7 = (longlong *)(param_1 + 0x38);
  FUN_148cf887e(plVar7,(int)param_2[1],1);
  if (0 < (int)param_2[1]) {
    lVar6 = 0xc;
    lVar8 = 0;
    lVar9 = 0;
    do {
      FUN_148aca162(*param_2 + lVar6);
      *(undefined8 *)(*plVar7 + lVar8) = *(undefined8 *)(*param_2 + -0xc + lVar6);
      *(undefined4 *)(*plVar7 + 8 + lVar8) = *(undefined4 *)(*param_2 + lVar6);
      puVar1 = (undefined4 *)(*param_2 + 4 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(*plVar7 + 0xc + lVar8);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + 0x1c;
      lVar6 = lVar6 + 0x20;
    } while (lVar9 < (int)param_2[1]);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f1980c FUN_148f1980c body=68 status=ok
// SIG undefined FUN_148f1980c(void)

void FUN_148f1980c(longlong *param_1)

{
  FUN_14596f57b(param_1[0xc],(int)param_1[0xd]);
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (*(int *)((longlong)param_1 + 0x6c) != 0) {
    FUN_148f1ddc4(param_1 + 0xc);
  }
  FUN_14573a7de(param_1);
                    /* WARNING: Could not recover jumptable at 0x000148f19849. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2a0))(param_1);
  return;
}



// FUNCTION 148f19850 FUN_148f19850 body=81 status=ok
// SIG undefined FUN_148f19850(void)

void FUN_148f19850(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(undefined8 *)(param_1 + 0x60);
  local_18 = *(undefined4 *)(param_1 + 0x68);
  FUN_148f198a2();
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_148aca1d8(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f198a2 FUN_148f198a2 body=194 status=ok
// SIG undefined FUN_148f198a2(void)

void FUN_148f198a2(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined4)*param_2;
  uStack_44 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_40 = (undefined4)param_2[1];
  uStack_3c = *(undefined4 *)((longlong)param_2 + 0xc);
  FUN_148f1ddf4();
  plVar7 = (longlong *)(param_1 + 0x38);
  FUN_148cf887e(plVar7,(int)param_2[1],1);
  if (0 < (int)param_2[1]) {
    lVar6 = 0x60;
    lVar8 = 0;
    lVar9 = 0;
    do {
      FUN_148aca162(*param_2 + lVar6);
      *(undefined8 *)(*plVar7 + lVar8) = *(undefined8 *)(*param_2 + -0x60 + lVar6);
      *(undefined4 *)(*plVar7 + 8 + lVar8) = *(undefined4 *)(*param_2 + lVar6);
      puVar1 = (undefined4 *)(*param_2 + 4 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(*plVar7 + 0xc + lVar8);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + 0x1c;
      lVar6 = lVar6 + 0x78;
    } while (lVar9 < (int)param_2[1]);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f19966 FUN_148f19966 body=81 status=ok
// SIG undefined FUN_148f19966(void)

void FUN_148f19966(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(undefined8 *)(param_1 + 0x60);
  local_18 = *(undefined4 *)(param_1 + 0x68);
  FUN_148f199b8();
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_148aca1d8(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f199b8 FUN_148f199b8 body=194 status=ok
// SIG undefined FUN_148f199b8(void)

void FUN_148f199b8(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined4)*param_2;
  uStack_44 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_40 = (undefined4)param_2[1];
  uStack_3c = *(undefined4 *)((longlong)param_2 + 0xc);
  FUN_148f1df02();
  plVar7 = (longlong *)(param_1 + 0x38);
  FUN_148cf887e(plVar7,(int)param_2[1],1);
  if (0 < (int)param_2[1]) {
    lVar6 = 0x18;
    lVar8 = 0;
    lVar9 = 0;
    do {
      FUN_148aca162(*param_2 + lVar6);
      *(undefined8 *)(*plVar7 + lVar8) = *(undefined8 *)(*param_2 + -0x18 + lVar6);
      *(undefined4 *)(*plVar7 + 8 + lVar8) = *(undefined4 *)(*param_2 + lVar6);
      puVar1 = (undefined4 *)(*param_2 + 4 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(*plVar7 + 0xc + lVar8);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + 0x1c;
      lVar6 = lVar6 + 0x30;
    } while (lVar9 < (int)param_2[1]);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f19a88 FUN_148f19a88 body=384 status=ok
// SIG undefined FUN_148f19a88(void)

double * FUN_148f19a88(longlong param_1,double *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_98 [44];
  undefined4 local_6c;
  undefined4 local_68 [6];
  longlong local_50;
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar1 = FUN_140944864(&DAT_14cbe81c0);
    if (lVar1 != 0) {
      uVar2 = FUN_1447262c2(param_4);
      lVar3 = FUN_14589e76e(uVar2);
      if (lVar3 != 0) {
        lVar4 = FUN_1406f6176();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          lVar3 = FUN_140e13f44(lVar3);
          if (lVar3 != 0) {
            local_68[0] = FUN_14574753c(lVar3);
            plVar5 = (longlong *)FUN_140d17acc(lVar3);
            if (plVar5 != (longlong *)0x0) {
              if (*(longlong *)(param_1 + 0x10) != *(longlong *)(param_1 + 8)) {
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 8);
                FUN_1446dcdd4(local_68,param_1 + 8);
                FUN_1404e49fa(param_1 + 0x18,local_68);
                if (local_50 != 0) {
                  FUN_1400020a8();
                }
              }
              FUN_140feee70(lVar1,local_68,param_1 + 0x18);
              local_6c = 0xffffffff;
              uVar2 = (**(code **)(*plVar5 + 0x30))(plVar5,local_68);
              auVar6._8_4_ = (int)((ulonglong)uVar2 >> 0x20);
              auVar6._0_8_ = uVar2;
              auVar6._12_4_ = 0x45300000;
              *(undefined2 *)(param_2 + 3) = 8;
              *param_2 = ((double)CONCAT44(0x43300000,(int)uVar2) - 4503599627370496.0) +
                         (auVar6._8_8_ - 1.9342813113834067e+25);
              *(undefined1 *)(param_2 + 4) = 0x15;
              if (local_40 != 0) {
                FUN_1400020a8();
              }
              goto LAB_148f19acd;
            }
          }
        }
      }
    }
  }
  *(undefined2 *)(param_2 + 3) = 0;
  *(undefined1 *)(param_2 + 4) = 0;
LAB_148f19acd:
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f19c12 FUN_148f19c12 body=39 status=ok
// SIG undefined FUN_148f19c12(void)

undefined4 FUN_148f19c12(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = FUN_148cce9a0(param_1 + -0x3b68);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(lVar1 + 0x1a0);
  }
  return uVar2;
}



// FUNCTION 148f19c3a FUN_148f19c3a body=44 status=ok
// SIG undefined FUN_148f19c3a(void)

undefined4 FUN_148f19c3a(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = FUN_148cce9a0(param_1 + -0x3b68);
  if (lVar1 == 0) {
    uVar2 = 0x3f800000;
  }
  else {
    uVar2 = *(undefined4 *)(lVar1 + 0x1a4);
  }
  return uVar2;
}



// FUNCTION 148f19cbc FUN_148f19cbc body=38 status=ok
// SIG undefined FUN_148f19cbc(void)

undefined8 FUN_148f19cbc(undefined8 param_1,int param_2)

{
  FUN_140e7b284();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f19cee FUN_148f19cee body=57 status=ok
// SIG undefined FUN_148f19cee(void)

void FUN_148f19cee(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined4 *)
           FUN_148f19d28(param_1 + 0x10,(int)((ulonglong)*param_3 >> 0x20) * 0x17 + (int)*param_3);
  for (lVar2 = 0x14; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar1 = *param_2;
    param_2 = param_2 + 1;
    puVar1 = puVar1 + 1;
  }
  return;
}



// FUNCTION 148f19d28 FUN_148f19d28 body=188 status=ok
// SIG undefined FUN_148f19d28(void)

longlong FUN_148f19d28(longlong *param_1,uint param_2,longlong *param_3)

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
        lVar3 = *param_1 + (longlong)iVar1 * 0x60;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x60) == *param_3) {
          if (lVar3 != 0) goto LAB_148f19dc7;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x58);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_148f19de6(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x60 + *param_1;
LAB_148f19dc7:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 148f19de6 FUN_148f19de6 body=293 status=ok
// SIG undefined FUN_148f19de6(void)

undefined4 * FUN_148f19de6(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

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
  FUN_148f19f0c(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  local_40[4] = 0;
  local_40[5] = 0;
  local_40[6] = 0;
  local_40[7] = 0;
  local_40[8] = 0;
  local_40[9] = 0;
  local_40[10] = 0;
  *(undefined4 *)(local_40 + 0xb) = 0xffffffff;
  cVar1 = FUN_148f19ffa(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x5c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0xb) =
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
      FUN_148f1a10a(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f19f0c FUN_148f19f0c body=238 status=ok
// SIG undefined FUN_148f19f0c(void)

int * FUN_148f19f0c(longlong *param_1,int *param_2)

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
      FUN_14488f93c(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x60);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x60) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x60 + *param_1;
  return param_2;
}



// FUNCTION 148f19ffa FUN_148f19ffa body=149 status=ok
// SIG undefined FUN_148f19ffa(void)

undefined8 FUN_148f19ffa(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x60);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x60) == *param_3) {
          memmove(_Dst,param_3,0x58);
          FUN_148f1a090(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 148f1a090 FUN_148f1a090 body=122 status=ok
// SIG undefined FUN_148f1a090(void)

void FUN_148f1a090(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60 + 4) = uVar4;
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



// FUNCTION 148f1a10a FUN_148f1a10a body=451 status=ok
// SIG undefined FUN_148f1a10a(void)

void FUN_148f1a10a(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x60;
        uVar10 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x5c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x58 + lVar7) =
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



// FUNCTION 148f1a2e8 FUN_148f1a2e8 body=29 status=ok
// SIG undefined FUN_148f1a2e8(void)

bool FUN_148f1a2e8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148f1a306 FUN_148f1a306 body=93 status=ok
// SIG undefined FUN_148f1a306(void)

void FUN_148f1a306(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9e1020;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148f1a364 FUN_148f1a364 body=93 status=ok
// SIG undefined FUN_148f1a364(void)

void FUN_148f1a364(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9e1020;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148f1a3c2 FUN_148f1a3c2 body=126 status=ok
// SIG undefined FUN_148f1a3c2(void)

void FUN_148f1a3c2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9e1020;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148f1a431. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f1a440 FUN_148f1a440 body=38 status=ok
// SIG undefined FUN_148f1a440(void)

void FUN_148f1a440(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148f1a463. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148f1a46c FUN_148f1a46c body=29 status=ok
// SIG undefined FUN_148f1a46c(void)

bool FUN_148f1a46c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148f1a48a FUN_148f1a48a body=26 status=ok
// SIG undefined FUN_148f1a48a(void)

bool FUN_148f1a48a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148f1a4a4 FUN_148f1a4a4 body=93 status=ok
// SIG undefined FUN_148f1a4a4(void)

void FUN_148f1a4a4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9e1090;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148f1a502 FUN_148f1a502 body=126 status=ok
// SIG undefined FUN_148f1a502(void)

void FUN_148f1a502(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9e1090;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148f1a571. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f1a580 FUN_148f1a580 body=142 status=ok
// SIG undefined FUN_148f1a580(void)

bool FUN_148f1a580(longlong param_1)

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
    (**(code **)(param_1 + 0x20))(lVar2);
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



// FUNCTION 148f1a62a FUN_148f1a62a body=29 status=ok
// SIG undefined FUN_148f1a62a(void)

bool FUN_148f1a62a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148f1a648 FUN_148f1a648 body=93 status=ok
// SIG undefined FUN_148f1a648(void)

void FUN_148f1a648(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9e1100;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148f1a6a6 FUN_148f1a6a6 body=126 status=ok
// SIG undefined FUN_148f1a6a6(void)

void FUN_148f1a6a6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9e1100;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148f1a715. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f1a724 FUN_148f1a724 body=35 status=ok
// SIG undefined FUN_148f1a724(void)

void FUN_148f1a724(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148f1a743. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 148f1a762 FUN_148f1a762 body=29 status=ok
// SIG undefined FUN_148f1a762(void)

bool FUN_148f1a762(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148f1a780 FUN_148f1a780 body=93 status=ok
// SIG undefined FUN_148f1a780(void)

void FUN_148f1a780(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9e1170;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148f1a7de FUN_148f1a7de body=126 status=ok
// SIG undefined FUN_148f1a7de(void)

void FUN_148f1a7de(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e01f80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9e1170;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148f1a84d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f1a85c FUN_148f1a85c body=48 status=ok
// SIG undefined FUN_148f1a85c(void)

void FUN_148f1a85c(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148f1a889. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2);
  return;
}



// FUNCTION 148f1a8a6 FUN_148f1a8a6 body=29 status=ok
// SIG undefined FUN_148f1a8a6(void)

bool FUN_148f1a8a6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148f1a8c4 FUN_148f1a8c4 body=93 status=ok
// SIG undefined FUN_148f1a8c4(void)

void FUN_148f1a8c4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8700;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9e11e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148f1a922 FUN_148f1a922 body=93 status=ok
// SIG undefined FUN_148f1a922(void)

void FUN_148f1a922(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8700;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9e11e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148f1a980 FUN_148f1a980 body=126 status=ok
// SIG undefined FUN_148f1a980(void)

void FUN_148f1a980(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8700;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9e11e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148f1a9ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f1a9fe FUN_148f1a9fe body=64 status=ok
// SIG undefined FUN_148f1a9fe(void)

void FUN_148f1a9fe(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148f1aa3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3);
  return;
}



// FUNCTION 148f1aa3e FUN_148f1aa3e body=174 status=ok
// SIG undefined FUN_148f1aa3e(void)

bool FUN_148f1aa3e(longlong param_1,undefined4 param_2,undefined4 param_3)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3);
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



// FUNCTION 148f1aaee FUN_148f1aaee body=173 status=ok
// SIG undefined FUN_148f1aaee(void)

void FUN_148f1aaee(longlong *param_1,undefined4 param_2,undefined4 param_3)

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
        goto LAB_148f1ab75;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148f1ab75:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148f1ab9c FUN_148f1ab9c body=31 status=ok
// SIG undefined FUN_148f1ab9c(void)

undefined8 FUN_148f1ab9c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f1abd6 FUN_148f1abd6 body=29 status=ok
// SIG undefined FUN_148f1abd6(void)

bool FUN_148f1abd6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148f1abf4 FUN_148f1abf4 body=26 status=ok
// SIG undefined FUN_148f1abf4(void)

bool FUN_148f1abf4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148f1ac0e FUN_148f1ac0e body=101 status=ok
// SIG undefined FUN_148f1ac0e(void)

void FUN_148f1ac0e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7890;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9e1250;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148f1ac74 FUN_148f1ac74 body=101 status=ok
// SIG undefined FUN_148f1ac74(void)

void FUN_148f1ac74(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7890;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9e1250;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148f1acda FUN_148f1acda body=134 status=ok
// SIG undefined FUN_148f1acda(void)

void FUN_148f1acda(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f7890;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9e1250;
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
                    /* WARNING: Could not recover jumptable at 0x000148f1ad51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f1ad60 FUN_148f1ad60 body=44 status=ok
// SIG undefined FUN_148f1ad60(void)

void FUN_148f1ad60(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148f1ad89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148f1ad8c FUN_148f1ad8c body=156 status=ok
// SIG undefined FUN_148f1ad8c(void)

bool FUN_148f1ad8c(longlong param_1,undefined8 param_2)

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



// FUNCTION 148f1ae2a FUN_148f1ae2a body=31 status=ok
// SIG undefined FUN_148f1ae2a(void)

undefined8 FUN_148f1ae2a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f1ae64 FUN_148f1ae64 body=29 status=ok
// SIG undefined FUN_148f1ae64(void)

bool FUN_148f1ae64(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148f1ae82 FUN_148f1ae82 body=26 status=ok
// SIG undefined FUN_148f1ae82(void)

bool FUN_148f1ae82(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148f1ae9c FUN_148f1ae9c body=101 status=ok
// SIG undefined FUN_148f1ae9c(void)

void FUN_148f1ae9c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7900;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9e12c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148f1af02 FUN_148f1af02 body=101 status=ok
// SIG undefined FUN_148f1af02(void)

void FUN_148f1af02(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7900;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9e12c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148f1af68 FUN_148f1af68 body=134 status=ok
// SIG undefined FUN_148f1af68(void)

void FUN_148f1af68(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f7900;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9e12c0;
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
                    /* WARNING: Could not recover jumptable at 0x000148f1afdf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f1afee FUN_148f1afee body=60 status=ok
// SIG undefined FUN_148f1afee(void)

void FUN_148f1afee(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148f1b027. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3);
  return;
}



// FUNCTION 148f1b02a FUN_148f1b02a body=172 status=ok
// SIG undefined FUN_148f1b02a(void)

bool FUN_148f1b02a(longlong param_1,undefined8 param_2,undefined4 param_3)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
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



// FUNCTION 148f1b0d8 FUN_148f1b0d8 body=29 status=ok
// SIG undefined FUN_148f1b0d8(void)

undefined8 FUN_148f1b0d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f1b110 FUN_148f1b110 body=29 status=ok
// SIG undefined FUN_148f1b110(void)

bool FUN_148f1b110(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148f1b12e FUN_148f1b12e body=26 status=ok
// SIG undefined FUN_148f1b12e(void)

bool FUN_148f1b12e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148f1b148 FUN_148f1b148 body=24 status=ok
// SIG undefined FUN_148f1b148(void)

bool FUN_148f1b148(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148f1b160 FUN_148f1b160 body=101 status=ok
// SIG undefined FUN_148f1b160(void)

void FUN_148f1b160(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9e1330;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148f1b1c6 FUN_148f1b1c6 body=101 status=ok
// SIG undefined FUN_148f1b1c6(void)

void FUN_148f1b1c6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9e1330;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148f1b22c FUN_148f1b22c body=134 status=ok
// SIG undefined FUN_148f1b22c(void)

void FUN_148f1b22c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9e1330;
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
                    /* WARNING: Could not recover jumptable at 0x000148f1b2a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f1b2b2 FUN_148f1b2b2 body=39 status=ok
// SIG undefined FUN_148f1b2b2(void)

void FUN_148f1b2b2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148f1b2d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148f1b2da FUN_148f1b2da body=146 status=ok
// SIG undefined FUN_148f1b2da(void)

bool FUN_148f1b2da(longlong param_1)

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



// FUNCTION 148f1b36d thunk_FUN_144894d4c body=5 status=ok
// SIG undefined thunk_FUN_144894d4c(void)

void * thunk_FUN_144894d4c(void *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  bool bVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0;
  *(undefined8 *)((longlong)param_1 + 0x130) = 0;
  *(undefined8 *)((longlong)param_1 + 0x138) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x140) = 0;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0;
  *(undefined8 *)((longlong)param_1 + 0x150) = 0;
  *(undefined8 *)((longlong)param_1 + 0x158) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x160) = 0;
  *(undefined8 *)((longlong)param_1 + 0x168) = 0;
  *(undefined8 *)((longlong)param_1 + 0x170) = 0;
  *(undefined8 *)((longlong)param_1 + 0x178) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x180) = 0;
  *(undefined8 *)((longlong)param_1 + 0x188) = 0;
  *(undefined8 *)((longlong)param_1 + 400) = 0;
  *(undefined8 *)((longlong)param_1 + 0x198) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b8) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1c0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d8) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1e0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1f0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1f8) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x200) = 0;
  *(undefined8 *)((longlong)param_1 + 0x208) = 0;
  *(undefined8 *)((longlong)param_1 + 0x210) = 0;
  *(undefined8 *)((longlong)param_1 + 0x218) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x220) = 0;
  *(undefined8 *)((longlong)param_1 + 0x228) = 0;
  *(undefined8 *)((longlong)param_1 + 0x230) = 0;
  *(undefined8 *)((longlong)param_1 + 0x238) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x240) = 0;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined8 *)((longlong)param_1 + 0x278) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x290) = 0;
  *(undefined8 *)((longlong)param_1 + 0x280) = 0;
  *(undefined8 *)((longlong)param_1 + 0x288) = 0;
  *(undefined8 *)((longlong)param_1 + 0x298) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x2b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b8) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x390) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3b8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x460) = 0;
  *(undefined8 *)((longlong)param_1 + 0x520) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5d8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x630) = 0;
  *(undefined8 *)((longlong)param_1 + 0x490) = 0;
  *(undefined8 *)((longlong)param_1 + 0x498) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4d8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4e0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x700) = 0;
  *(undefined8 *)((longlong)param_1 + 0x708) = 0;
  *(undefined4 *)((longlong)param_1 + 0x710) = 0;
  *(undefined1 *)((longlong)param_1 + 0x710) = 1;
  *(undefined8 *)((longlong)param_1 + 0x714) = 0x459c400044fa0000;
  *(undefined8 *)((longlong)param_1 + 0x71c) = 0x40000000;
  *(undefined8 *)((longlong)param_1 + 0x724) = 0x48127c0000000000;
  *(undefined8 *)((longlong)param_1 + 0x72c) = 0x4248000042480000;
  *(undefined8 *)((longlong)param_1 + 0x734) = 0x3f80000041000000;
  *(undefined8 *)((longlong)param_1 + 0x73c) = 0x461c400043fa0000;
  *(undefined8 *)((longlong)param_1 + 0x744) = 0x4080000041000000;
  *(undefined8 *)((longlong)param_1 + 0x74c) = 0x4496000043480000;
  *(undefined8 *)((longlong)param_1 + 0x754) = 0x43c8000041800000;
  *(undefined8 *)((longlong)param_1 + 0x75c) = 0x4180000044960000;
  *(undefined8 *)((longlong)param_1 + 0x764) = 0x44e1000044160000;
  *(undefined8 *)((longlong)param_1 + 0x76c) = 0x3c23d70a41800000;
  *(undefined8 *)((longlong)param_1 + 0x774) = 0x40a0000040000000;
  *(undefined8 *)((longlong)param_1 + 0x77c) = 0xbe4ccccd;
  *(undefined8 *)((longlong)param_1 + 0x784) = 0x3f000000;
  *(undefined8 *)((longlong)param_1 + 0x78c) = 0x3f8000003fc00000;
  *(undefined8 *)((longlong)param_1 + 0x794) = 0x3f0000003f800000;
  *(undefined8 *)((longlong)param_1 + 0x79c) = 0x3ecccccd41200000;
  *(undefined8 *)((longlong)param_1 + 0x7a4) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x7ac) = 0x466a600040000000;
  *(undefined4 *)((longlong)param_1 + 0x7b4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7b8) = 0x3e5f3b64;
  *(undefined4 *)((longlong)param_1 + 0x7bc) = 0x3e5f3b64;
  *(undefined4 *)((longlong)param_1 + 0x7c0) = 0x3e5f3b64;
  *(undefined4 *)((longlong)param_1 + 0x7c4) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x7f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7e8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7f0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7d8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7e0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c8) = 0;
  *(undefined8 *)((longlong)param_1 + 2000) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cadba18) {
    FUN_144b3d300(&DAT_14cadba18);
    if (DAT_14cadba18 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar8 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.EdgeDetection.Enabled",1);
      if (plVar8 == (longlong *)0x0) {
        DAT_14cadba10 = 0;
      }
      else {
        DAT_14cadba10 = (**(code **)(*plVar8 + 0x68))(plVar8);
      }
      _Init_thread_footer(&DAT_14cadba18);
    }
  }
  lVar3 = DAT_14cadba10;
  if (DAT_14cadba10 == 0) {
    bVar11 = false;
  }
  else {
    iVar5 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar5 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar5 == 2)) {
      uVar9 = 0;
    }
    else if (iVar5 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = *(int *)(lVar3 + uVar9 * 4) == 1;
  }
  *(byte *)((longlong)param_1 + 0x7cc) = *(byte *)((longlong)param_1 + 0x7cc) & 0xfe | bVar11;
  *(undefined8 *)((longlong)param_1 + 2000) = 0x3f80000040000000;
  *(undefined8 *)((longlong)param_1 + 0x7d8) = 0x3f80000040000000;
  *(undefined8 *)((longlong)param_1 + 0x7e0) = 0x477de800;
  *(undefined8 *)((longlong)param_1 + 0x7e8) = 0x400000003f800000;
  *(undefined8 *)((longlong)param_1 + 0x7f0) = 0x461c400044bb8000;
  *(undefined8 *)((longlong)param_1 + 0x7f8) = 0x3f0000003f666666;
  *(undefined4 *)((longlong)param_1 + 0x800) = 0x3dcccccd;
  *(undefined8 *)((longlong)param_1 + 0x808) = 0;
  *(undefined8 *)((longlong)param_1 + 0x810) = 0;
  *(undefined8 *)((longlong)param_1 + 0x818) = 0;
  *(undefined8 *)((longlong)param_1 + 0x820) = 0;
  *(undefined8 *)((longlong)param_1 + 0x828) = 0;
  *(undefined8 *)((longlong)param_1 + 0x830) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cade0d0) {
    FUN_144b3d300(&DAT_14cade0d0);
    if (DAT_14cade0d0 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar8 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.OutlineTech.Enabled",1);
      if (plVar8 == (longlong *)0x0) {
        DAT_14cade0c8 = 0;
      }
      else {
        DAT_14cade0c8 = (**(code **)(*plVar8 + 0x68))(plVar8);
      }
      _Init_thread_footer(&DAT_14cade0d0);
    }
  }
  lVar3 = DAT_14cade0c8;
  if (DAT_14cade0c8 == 0) {
    bVar4 = 2;
  }
  else {
    iVar5 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar5 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar5 == 2)) {
      uVar9 = 0;
    }
    else if (iVar5 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    bVar4 = *(int *)(lVar3 + uVar9 * 4) == 1 | 2;
  }
  *(byte *)((longlong)param_1 + 0x80c) = *(byte *)((longlong)param_1 + 0x80c) & 0xfc | bVar4;
  *(undefined4 *)((longlong)param_1 + 0x810) = 0x40800000;
  *(undefined4 *)((longlong)param_1 + 0x814) = 0x43480000;
  *(undefined4 *)((longlong)param_1 + 0x818) = 0x44e10000;
  *(undefined4 *)((longlong)param_1 + 0x81c) = 0x40600000;
  *(undefined8 *)((longlong)param_1 + 0x820) = 0x3f0000003dcccccd;
  iVar5 = *(int *)((longlong)param_1 + 0x830);
  *(int *)((longlong)param_1 + 0x830) = iVar5 + 8;
  if ((uint)(*(int *)((longlong)param_1 + 0x834) - iVar5) < 8) {
    FUN_14489624a((longlong)param_1 + 0x828);
  }
  lVar3 = *(longlong *)((longlong)param_1 + 0x828);
  lVar10 = (longlong)iVar5 * 0x10;
  puVar2 = (undefined8 *)(lVar3 + 0x70 + lVar10);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar3 + 0x60 + lVar10);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar3 + 0x50 + lVar10);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar3 + 0x40 + lVar10);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar3 + 0x30 + lVar10);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar3 + 0x20 + lVar10);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar3 + 0x10 + lVar10);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(lVar3 + lVar10) = 0;
  ((undefined8 *)(lVar3 + lVar10))[1] = 0;
  puVar2 = *(undefined8 **)((longlong)param_1 + 0x828);
  *puVar2 = 0;
  puVar2[1] = 0x3ff0000000000000;
  lVar3 = *(longlong *)((longlong)param_1 + 0x828);
  *(undefined8 *)(lVar3 + 0x10) = 0x3ff0000000000000;
  *(undefined8 *)(lVar3 + 0x18) = 0;
  lVar3 = *(longlong *)((longlong)param_1 + 0x828);
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 0xbff0000000000000;
  lVar3 = *(longlong *)((longlong)param_1 + 0x828);
  *(undefined8 *)(lVar3 + 0x30) = 0xbff0000000000000;
  *(undefined8 *)(lVar3 + 0x38) = 0;
  lVar3 = *(longlong *)((longlong)param_1 + 0x828);
  *(undefined8 *)(lVar3 + 0x40) = 0xbfe0000000000000;
  *(undefined8 *)(lVar3 + 0x48) = 0x3fe0000000000000;
  lVar3 = *(longlong *)((longlong)param_1 + 0x828);
  *(undefined8 *)(lVar3 + 0x50) = 0x3fe0000000000000;
  *(undefined8 *)(lVar3 + 0x58) = 0x3fe0000000000000;
  lVar3 = *(longlong *)((longlong)param_1 + 0x828);
  *(undefined8 *)(lVar3 + 0x60) = 0x3fe0000000000000;
  *(undefined8 *)(lVar3 + 0x68) = 0xbfe0000000000000;
  lVar3 = *(longlong *)((longlong)param_1 + 0x828);
  *(undefined8 *)(lVar3 + 0x70) = 0xbfe0000000000000;
  *(undefined8 *)(lVar3 + 0x78) = 0xbfe0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x840) = 0;
  *(undefined8 *)((longlong)param_1 + 0x848) = 0;
  *(undefined8 *)((longlong)param_1 + 0x880) = 0;
  *(undefined8 *)((longlong)param_1 + 0x888) = 0;
  *(undefined4 *)((longlong)param_1 + 0x848) = 0x41400000;
  *(undefined8 *)((longlong)param_1 + 0x850) = 0x40c000003f800000;
  *(undefined8 *)((longlong)param_1 + 0x858) = 0x4180000040c00000;
  *(undefined8 *)((longlong)param_1 + 0x860) = 0x404000003f800000;
  *(undefined8 *)((longlong)param_1 + 0x868) = 0x40c0000040400000;
  *(undefined8 *)((longlong)param_1 + 0x870) = 0x466a600045ea6000;
  *(undefined8 *)((longlong)param_1 + 0x878) = 0x4708b80046c35000;
  *(undefined1 *)((longlong)param_1 + 0x880) = 3;
  *(undefined4 *)((longlong)param_1 + 0x884) = 0x3e99999a;
  *(undefined8 *)((longlong)param_1 + 0x890) = 0;
  *(undefined8 *)((longlong)param_1 + 0x898) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8a0) = 0;
  *(undefined1 **)((longlong)param_1 + 0x894) = &DAT_3f8000003f800000;
  memset(param_1,0,0x700);
  *(undefined8 *)((longlong)param_1 + 0x8a8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8b8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0x45cb2000;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x130) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x138) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x140) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x150) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x158) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x170) = 0;
  *(undefined8 *)((longlong)param_1 + 0x178) = 0;
  *(undefined8 *)((longlong)param_1 + 0x160) = 0;
  *(undefined8 *)((longlong)param_1 + 0x168) = 0;
  *(undefined8 *)((longlong)param_1 + 0x180) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x188) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 400) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x198) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1a0) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1a8) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1b0) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1b8) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1c0) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1c8) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1d0) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1d8) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1e0) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1e8) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1f0) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1f8) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x210) = 0;
  *(undefined8 *)((longlong)param_1 + 0x218) = 0;
  *(undefined8 *)((longlong)param_1 + 0x200) = 0;
  *(undefined8 *)((longlong)param_1 + 0x208) = 0;
  *(undefined8 *)((longlong)param_1 + 0x220) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x228) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x230) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x238) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x240) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 600) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x278) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x280) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x288) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x290) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x298) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x2b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c0) = 0x3f8000003f000000;
  *(undefined8 *)((longlong)param_1 + 0x2c8) = 0x3f19999a3db851ec;
  *(undefined1 **)((longlong)param_1 + 0x2d0) = &DAT_3f8000003f800000;
  *(undefined8 *)((longlong)param_1 + 0x2d8) = 0x3f0ccccd3f6147ae;
  *(undefined4 *)((longlong)param_1 + 0x2e0) = 0x3e851eb8;
  *(undefined8 *)((longlong)param_1 + 0x2e8) = 0x3f8000003d23d70a;
  *(undefined1 **)((longlong)param_1 + 0x2f0) = &DAT_3f8000003f800000;
  *(undefined4 *)((longlong)param_1 + 0x2f8) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x304) = 0xbf8000003f2ccccd;
  *(undefined8 *)((longlong)param_1 + 0x30c) = 0x3e99999a40800000;
  *(undefined8 *)((longlong)param_1 + 0x314) = 0x400000003f800000;
  *(undefined8 *)((longlong)param_1 + 0x328) = 0x3eb168733eb16873;
  *(undefined8 *)((longlong)param_1 + 0x330) = 0x3f8000003eb16873;
  *(undefined8 *)((longlong)param_1 + 0x338) = 0x3e0d4fdf3e0d4fdf;
  *(undefined8 *)((longlong)param_1 + 0x340) = 0x3f8000003e0d4fdf;
  *(undefined8 *)((longlong)param_1 + 0x348) = 0x3df0d8453df0d845;
  *(undefined8 *)((longlong)param_1 + 0x350) = 0x3f8000003df0d845;
  *(undefined8 *)((longlong)param_1 + 0x358) = 0x3d872b023d872b02;
  *(undefined8 *)((longlong)param_1 + 0x360) = 0x3f8000003d872b02;
  *(undefined8 *)((longlong)param_1 + 0x31c) = 0x41f0000041200000;
  *(undefined8 *)((longlong)param_1 + 0x368) = 0x3d872b023d872b02;
  *(undefined8 *)((longlong)param_1 + 0x370) = 0x3f8000003d872b02;
  *(undefined8 *)((longlong)param_1 + 0x378) = 0x3d79db233d79db23;
  *(undefined8 *)((longlong)param_1 + 0x380) = 0x3f8000003d79db23;
  *(undefined4 *)((longlong)param_1 + 0x324) = 0x42800000;
  *(undefined1 **)((longlong)param_1 + 0x388) = &DAT_3f8000003f800000;
  *(undefined8 *)((longlong)param_1 + 0x398) = 0x3fe0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x3a0) = 0x3fe0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x3a8) = 0x466a600040e00000;
  *(undefined8 *)((longlong)param_1 + 0x3b0) = 0x3e08312741700000;
  *(undefined4 *)((longlong)param_1 + 0x3c0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c4) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x3c8) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x3cc) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x3d0) = 0x3f800000;
  *(byte *)((longlong)param_1 + 0x444) = *(byte *)((longlong)param_1 + 0x444) | 1;
  *(undefined4 *)((longlong)param_1 + 0x458) = 0x3f800000;
  *(undefined1 **)((longlong)param_1 + 0x448) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_1 + 0x450) = &DAT_3f8000003f800000;
  *(undefined8 *)((longlong)param_1 + 0x468) = 0x42c8000042700000;
  *(undefined4 *)((longlong)param_1 + 0x4c0) = 0x41800000;
  *(undefined1 *)((longlong)param_1 + 0x36) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4a0) = 0x42b4000041200000;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb02a78) {
    FUN_144b3d300(&DAT_14cb02a78);
    if (DAT_14cb02a78 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar8 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.DefaultFeature.AutoExposure.ExtendDefaultLuminanceRange"
                          ,1);
      if (plVar8 == (longlong *)0x0) {
        DAT_14cb02a70 = 0;
      }
      else {
        DAT_14cb02a70 = (**(code **)(*plVar8 + 0x68))(plVar8);
      }
      _Init_thread_footer(&DAT_14cb02a78);
    }
  }
  lVar10 = DAT_14cb02a70;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar5 = *(int *)(lVar3 + 0xc60);
  if (iVar5 == 0x40000002) {
    uVar9 = 0;
  }
  else {
    bVar11 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar5 != 2)) {
      if (iVar5 == 1) {
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        bVar11 = DVar6 == DVar7;
      }
      else {
        bVar11 = false;
      }
    }
    uVar9 = (ulonglong)(bVar11 ^ 1);
  }
  if (*(int *)(lVar10 + uVar9 * 4) == 0) {
    uVar13 = 0x40800000;
    uVar14 = 0xc1000000;
    uVar12 = 0x41000000;
    uVar15 = 0x3cf5c28f;
  }
  else {
    uVar12 = 0x41a00000;
    uVar15 = 0xc1200000;
    uVar14 = 0xc1200000;
    uVar13 = 0x41a00000;
  }
  piVar1 = (int *)(lVar3 + 0xc60);
  *(undefined4 *)((longlong)param_1 + 0x4a8) = uVar15;
  *(undefined4 *)((longlong)param_1 + 0x4ac) = uVar12;
  *(undefined4 *)((longlong)param_1 + 0x4b8) = uVar14;
  *(undefined4 *)((longlong)param_1 + 0x4bc) = uVar13;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb02a88) {
    FUN_144b3d300(&DAT_14cb02a88);
    if (DAT_14cb02a88 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar8 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.DefaultFeature.AutoExposure.Bias",1);
      if (plVar8 == (longlong *)0x0) {
        DAT_14cb02a80 = 0;
      }
      else {
        DAT_14cb02a80 = (**(code **)(*plVar8 + 0x70))(plVar8);
      }
      _Init_thread_footer(&DAT_14cb02a88);
    }
  }
  lVar3 = DAT_14cb02a80;
  iVar5 = *piVar1;
  if (iVar5 == 0x40000002) {
    uVar9 = 0;
  }
  else {
    bVar11 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar5 != 2)) {
      if (iVar5 == 1) {
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        bVar11 = DVar6 == DVar7;
      }
      else {
        bVar11 = false;
      }
    }
    uVar9 = (ulonglong)(bVar11 ^ 1);
  }
  *(undefined4 *)((longlong)param_1 + 0x47c) = *(undefined4 *)(lVar3 + uVar9 * 4);
  *(undefined8 *)((longlong)param_1 + 0x4b0) = 0x3f80000040400000;
  *(byte *)((longlong)param_1 + 0x488) = *(byte *)((longlong)param_1 + 0x488) | 1;
  *(undefined1 *)((longlong)param_1 + 0x4c4) = 0;
  *(undefined1 **)((longlong)param_1 + 0x4c8) = &DAT_3f8000003f800000;
  *(undefined4 *)((longlong)param_1 + 0x4d0) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x4f0) = 0x3f19999a3f800000;
  *(undefined8 *)((longlong)param_1 + 0x4f8) = 0x42480000;
  *(undefined1 **)((longlong)param_1 + 0x500) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_1 + 0x508) = &DAT_3f8000003f800000;
  *(undefined8 *)((longlong)param_1 + 0x510) = 0x404000003f800000;
  *(undefined4 *)((longlong)param_1 + 0x518) = 0x41000000;
  *(undefined4 *)((longlong)param_1 + 0x5a8) = 0x3ecccccd;
  *(undefined8 *)((longlong)param_1 + 0x5ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5b4) = 0;
  *(undefined1 **)((longlong)param_1 + 0x5bc) = &DAT_3f8000003f800000;
  *(undefined8 *)((longlong)param_1 + 0x5c4) = 0x3db851ec3f800000;
  *(undefined8 *)((longlong)param_1 + 0x5cc) = 0x3f8000003f000000;
  *(undefined4 *)((longlong)param_1 + 0x5d4) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x5e0) = 0x3f8000003f000000;
  *(undefined4 *)((longlong)param_1 + 0x5e8) = 0x43480000;
  *(undefined4 *)((longlong)param_1 + 0x5f8) = 0x42a00000;
  *(undefined8 *)((longlong)param_1 + 0x5f0) = 0x459c400045fa0000;
  *(undefined8 *)((longlong)param_1 + 0x5fc) = 0x4040000040000000;
  *(undefined8 *)((longlong)param_1 + 0x604) = 0x3f19999a42480000;
  *(undefined8 *)((longlong)param_1 + 0x60c) = 0x3c23d70a3fd9999a;
  *(byte *)((longlong)param_1 + 0x5ec) = *(byte *)((longlong)param_1 + 0x5ec) & 0xfe;
  *(undefined4 *)((longlong)param_1 + 0x614) = 0x3dcccccd;
  *(byte *)((longlong)param_1 + 0x618) = *(byte *)((longlong)param_1 + 0x618) & 0xfe;
  *(undefined4 *)((longlong)param_1 + 0x61c) = 1;
  *(undefined8 *)((longlong)param_1 + 0x620) = 0x434800003f800000;
  *(undefined1 *)((longlong)param_1 + 0x3d4) = 1;
  *(undefined1 **)((longlong)param_1 + 0x3d8) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_1 + 0x3e0) = &DAT_3f8000003f800000;
  *(undefined4 *)((longlong)param_1 + 1000) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x41c) = 0x3f800000;
  *(undefined1 **)((longlong)param_1 + 0x3f0) = &DAT_3f8000003f800000;
  *(undefined8 *)((longlong)param_1 + 0x3f8) = 0x3f800000469c4000;
  *(undefined1 **)((longlong)param_1 + 0x400) = &DAT_3f8000003f800000;
  *(byte *)((longlong)param_1 + 0x408) = *(byte *)((longlong)param_1 + 0x408) | 1;
  *(undefined8 *)((longlong)param_1 + 0x40c) = 0x3f800000469c4000;
  *(undefined8 *)((longlong)param_1 + 0x414) = 0x447a000000000000;
  *(undefined4 *)((longlong)param_1 + 0x628) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x640) = 0;
  *(undefined8 *)((longlong)param_1 + 0x470) = 0x3f99999a40800000;
  *(undefined4 *)((longlong)param_1 + 0x478) = 5;
  *(undefined8 *)((longlong)param_1 + 0x638) = 0x3f80000041c49ba6;
  *(undefined8 *)((longlong)param_1 + 0x644) = 0x3f800000;
  *(byte *)((longlong)param_1 + 0x64c) = *(byte *)((longlong)param_1 + 0x64c) & 0xfe;
  *(undefined8 *)((longlong)param_1 + 0x650) = 0x4396000000000000;
  *(undefined8 *)((longlong)param_1 + 0x658) = 0x43fa0000;
  *(undefined8 *)((longlong)param_1 + 0x660) = 0x4170000041700000;
  *(undefined8 *)((longlong)param_1 + 0x668) = 0x3ecccccd;
  *(undefined8 *)((longlong)param_1 + 0x670) = 0x3f80000043480000;
  *(undefined8 *)((longlong)param_1 + 0x528) = 0x3f4ccccd3f800000;
  *(undefined8 *)((longlong)param_1 + 0x530) = 0x3f19999a3ecccccd;
  *(undefined1 **)((longlong)param_1 + 0x538) = &DAT_3f8000003f800000;
  *(undefined8 *)((longlong)param_1 + 0x540) = 0x3f07ae143f19999a;
  *(undefined8 *)((longlong)param_1 + 0x548) = 0x3f4ccccd3f4ccccd;
  *(undefined8 *)((longlong)param_1 + 0x550) = 0x3eeb851f3f800000;
  *(undefined8 *)((longlong)param_1 + 0x558) = 0x3f8000003f000000;
  *(undefined8 *)((longlong)param_1 + 0x560) = 0x3ec7ae143ecccccd;
  *(undefined8 *)((longlong)param_1 + 0x568) = 0x3f4ccccd3f000000;
  *(undefined8 *)((longlong)param_1 + 0x570) = 0x3e9eb8523f800000;
  *(undefined8 *)((longlong)param_1 + 0x578) = 0x3f8000003f666666;
  *(undefined8 *)((longlong)param_1 + 0x580) = 0x3e8a3d713f4ccccd;
  *(undefined8 *)((longlong)param_1 + 0x588) = 0x3f4ccccd3f800000;
  *(undefined8 *)((longlong)param_1 + 0x590) = 0x3e6147ae3ecccccd;
  *(undefined8 *)((longlong)param_1 + 0x598) = 0x3f3333333f666666;
  *(undefined8 *)((longlong)param_1 + 0x5a0) = 0x3e19999a3f333333;
  *(undefined8 *)((longlong)param_1 + 0x678) = 0x40a000003f000000;
  *(undefined8 *)((longlong)param_1 + 0x680) = 0x1e;
  *(byte *)((longlong)param_1 + 0x688) = *(byte *)((longlong)param_1 + 0x688) & 0xfe;
  *(undefined4 *)((longlong)param_1 + 0x68c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x6f0) = 0x42c80000;
  *(undefined1 *)((longlong)param_1 + 0x421) = 1;
  *(undefined1 *)((longlong)param_1 + 0x420) = 1;
  *(undefined4 *)((longlong)param_1 + 0x424) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x3ec) = 0;
  *(byte *)((longlong)param_1 + 0x428) = *(byte *)((longlong)param_1 + 0x428) & 0xfc | 1;
  *(undefined4 *)((longlong)param_1 + 0x42c) = 0x3ecccccd;
  *(undefined4 *)((longlong)param_1 + 0x430) = 1;
  *(undefined4 *)((longlong)param_1 + 0x434) = 0;
  *(undefined4 *)((longlong)param_1 + 0x438) = 0x42c80000;
  *(undefined8 *)((longlong)param_1 + 0x43c) = 0x3f19999a42480000;
  *(undefined1 *)((longlong)param_1 + 0x6c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c8) = 0x33f19999a;
  *(undefined4 *)((longlong)param_1 + 0x6d0) = 1;
  *(undefined1 *)((longlong)param_1 + 0x6d4) = 1;
  *(byte *)((longlong)param_1 + 0x6d5) = *(byte *)((longlong)param_1 + 0x6d5) | 1;
  *(undefined8 *)((longlong)param_1 + 0x6d8) = 0x80000000020;
  *(undefined4 *)((longlong)param_1 + 0x6e0) = 0x41c00000;
  *(uint *)((longlong)param_1 + 0x6e4) = *(uint *)((longlong)param_1 + 0x6e4) & 0xfffff800 | 0x7f9;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xfe;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cadba18) {
    FUN_144b3d300();
    if (DAT_14cadba18 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar8 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.EdgeDetection.Enabled",1);
      if (plVar8 == (longlong *)0x0) {
        DAT_14cadba10 = 0;
      }
      else {
        DAT_14cadba10 = (**(code **)(*plVar8 + 0x68))(plVar8);
      }
      _Init_thread_footer();
    }
  }
  lVar3 = DAT_14cadba10;
  if (DAT_14cadba10 == 0) {
    bVar11 = false;
  }
  else {
    iVar5 = *piVar1;
    if (((iVar5 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar5 == 2)) {
      uVar9 = 0;
    }
    else if (iVar5 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = *(int *)(lVar3 + uVar9 * 4) == 1;
  }
  *(bool *)((longlong)param_1 + 0x6f8) = bVar11;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cadba18) {
    FUN_144b3d300();
    if (DAT_14cadba18 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar8 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.EdgeDetection.Enabled",1);
      if (plVar8 == (longlong *)0x0) {
        DAT_14cadba10 = 0;
      }
      else {
        DAT_14cadba10 = (**(code **)(*plVar8 + 0x68))(plVar8);
      }
      _Init_thread_footer();
    }
  }
  lVar3 = DAT_14cadba10;
  if (DAT_14cadba10 == 0) {
    bVar11 = false;
  }
  else {
    iVar5 = *piVar1;
    if (((iVar5 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar5 == 2)) {
      uVar9 = 0;
    }
    else if (iVar5 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = *(int *)(lVar3 + uVar9 * 4) == 1;
  }
  *(bool *)((longlong)param_1 + 0x6f9) = bVar11;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cade0d0) {
    FUN_144b3d300();
    if (DAT_14cade0d0 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar8 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.OutlineTech.Enabled",1);
      if (plVar8 == (longlong *)0x0) {
        DAT_14cade0c8 = 0;
      }
      else {
        DAT_14cade0c8 = (**(code **)(*plVar8 + 0x68))(plVar8);
      }
      _Init_thread_footer();
    }
  }
  lVar3 = DAT_14cade0c8;
  if (DAT_14cade0c8 == 0) {
    bVar11 = false;
  }
  else {
    iVar5 = *piVar1;
    if (((iVar5 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar5 == 2)) {
      uVar9 = 0;
    }
    else if (iVar5 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = *(int *)(lVar3 + uVar9 * 4) == 1;
  }
  *(bool *)((longlong)param_1 + 0x6fa) = bVar11;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cade0c0) {
    FUN_144b3d300();
    if (DAT_14cade0c0 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar8 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Kuwahara.Enabled",1);
      if (plVar8 == (longlong *)0x0) {
        DAT_14cade0b8 = 0;
      }
      else {
        DAT_14cade0b8 = (**(code **)(*plVar8 + 0x68))(plVar8);
      }
      _Init_thread_footer();
    }
  }
  lVar3 = DAT_14cade0b8;
  iVar5 = *piVar1;
  if (DAT_14cade0b8 == 0) {
    bVar11 = false;
    goto LAB_144895c8c;
  }
  if (iVar5 == 0x40000002) {
    iVar5 = 0x40000002;
LAB_1448960a4:
    uVar9 = 0;
  }
  else {
    if ((DAT_14c86a9f8 != '\x01') || (iVar5 == 2)) goto LAB_1448960a4;
    if (iVar5 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
      iVar5 = *piVar1;
    }
    else {
      uVar9 = 1;
    }
  }
  bVar11 = *(int *)(lVar3 + uVar9 * 4) == 1;
LAB_144895c8c:
  *(bool *)((longlong)param_1 + 0x6fb) = bVar11;
  lVar3 = DAT_14cade0e8;
  if (((iVar5 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar5 == 2)) {
    uVar9 = 0;
  }
  else if (iVar5 == 1) {
    DVar6 = FUN_140ad26c0();
    DVar7 = GetCurrentThreadId();
    uVar9 = (ulonglong)(DVar6 != DVar7);
  }
  else {
    uVar9 = 1;
  }
  *(bool *)((longlong)param_1 + 0x6fc) = *(int *)(lVar3 + uVar9 * 4) == 1;
  *(undefined8 *)((longlong)param_1 + 0x8a8) = 0;
  return param_1;
}



// FUNCTION 148f1b38c FUN_148f1b38c body=93 status=ok
// SIG undefined FUN_148f1b38c(void)

void FUN_148f1b38c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9e13f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148f1b3ea FUN_148f1b3ea body=93 status=ok
// SIG undefined FUN_148f1b3ea(void)

void FUN_148f1b3ea(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9e13f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148f1b448 FUN_148f1b448 body=126 status=ok
// SIG undefined FUN_148f1b448(void)

void FUN_148f1b448(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e01f80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9e13f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148f1b4b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f1b4c6 FUN_148f1b4c6 body=48 status=ok
// SIG undefined FUN_148f1b4c6(void)

void FUN_148f1b4c6(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148f1b4f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2);
  return;
}



// FUNCTION 148f1b4fc FUN_148f1b4fc body=29 status=ok
// SIG undefined FUN_148f1b4fc(void)

bool FUN_148f1b4fc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148f1b51a FUN_148f1b51a body=26 status=ok
// SIG undefined FUN_148f1b51a(void)

bool FUN_148f1b51a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148f1b534 FUN_148f1b534 body=93 status=ok
// SIG undefined FUN_148f1b534(void)

void FUN_148f1b534(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9e15d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148f1b592 FUN_148f1b592 body=126 status=ok
// SIG undefined FUN_148f1b592(void)

void FUN_148f1b592(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9e15d0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148f1b601. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f1b610 FUN_148f1b610 body=142 status=ok
// SIG undefined FUN_148f1b610(void)

bool FUN_148f1b610(longlong param_1)

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
    (**(code **)(param_1 + 0x20))(lVar2);
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



// FUNCTION 148f1b6a0 FUN_148f1b6a0 body=230 status=ok
// SIG undefined FUN_148f1b6a0(void)

undefined8 * FUN_148f1b6a0(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 148f1b788 FUN_148f1b788 body=29 status=ok
// SIG undefined FUN_148f1b788(void)

undefined8 FUN_148f1b788(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f1b7c0 FUN_148f1b7c0 body=29 status=ok
// SIG undefined FUN_148f1b7c0(void)

bool FUN_148f1b7c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148f1b7de FUN_148f1b7de body=26 status=ok
// SIG undefined FUN_148f1b7de(void)

bool FUN_148f1b7de(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148f1b7f8 FUN_148f1b7f8 body=24 status=ok
// SIG undefined FUN_148f1b7f8(void)

bool FUN_148f1b7f8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148f1b81c FUN_148f1b81c body=93 status=ok
// SIG undefined FUN_148f1b81c(void)

void FUN_148f1b81c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9e16b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9e1640;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148f1b87a FUN_148f1b87a body=93 status=ok
// SIG undefined FUN_148f1b87a(void)

void FUN_148f1b87a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9e16b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9e1640;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148f1b8d8 FUN_148f1b8d8 body=126 status=ok
// SIG undefined FUN_148f1b8d8(void)

void FUN_148f1b8d8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b9e16b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9e1640;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148f1b947. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f1b956 FUN_148f1b956 body=38 status=ok
// SIG undefined FUN_148f1b956(void)

void FUN_148f1b956(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148f1b979. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148f1b97c FUN_148f1b97c body=150 status=ok
// SIG undefined FUN_148f1b97c(void)

bool FUN_148f1b97c(longlong param_1,undefined4 param_2)

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



// FUNCTION 148f1ba16 FUN_148f1ba16 body=29 status=ok
// SIG undefined FUN_148f1ba16(void)

undefined8 FUN_148f1ba16(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f1ba4e FUN_148f1ba4e body=29 status=ok
// SIG undefined FUN_148f1ba4e(void)

bool FUN_148f1ba4e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148f1ba6c FUN_148f1ba6c body=26 status=ok
// SIG undefined FUN_148f1ba6c(void)

bool FUN_148f1ba6c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148f1ba86 FUN_148f1ba86 body=24 status=ok
// SIG undefined FUN_148f1ba86(void)

bool FUN_148f1ba86(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148f1ba9e FUN_148f1ba9e body=93 status=ok
// SIG undefined FUN_148f1ba9e(void)

void FUN_148f1ba9e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9e1720;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148f1bafc FUN_148f1bafc body=93 status=ok
// SIG undefined FUN_148f1bafc(void)

void FUN_148f1bafc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9e1720;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148f1bb5a FUN_148f1bb5a body=126 status=ok
// SIG undefined FUN_148f1bb5a(void)

void FUN_148f1bb5a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9c20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9e1720;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148f1bbc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f1bbd8 FUN_148f1bbd8 body=38 status=ok
// SIG undefined FUN_148f1bbd8(void)

void FUN_148f1bbd8(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148f1bbfb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148f1bbfe FUN_148f1bbfe body=150 status=ok
// SIG undefined FUN_148f1bbfe(void)

bool FUN_148f1bbfe(longlong param_1,undefined4 param_2)

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



// FUNCTION 148f1bc96 FUN_148f1bc96 body=151 status=ok
// SIG undefined FUN_148f1bc96(void)

void FUN_148f1bc96(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(uint *)(param_1 + 2) = (int)param_1[2] + 0xfU & 0xfffffff0;
  FUN_148f1bd2e();
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x30;
  lVar3 = param_1[2];
  *(undefined8 *)(lVar2 + lVar4) = param_2;
  *(undefined2 **)(lVar2 + 8 + lVar4) = &DAT_149dfb77a;
  *(undefined4 *)(lVar2 + 0x10 + lVar4) = 0x7b;
  *(int *)(lVar2 + 0x14 + lVar4) = (int)lVar3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar4) = &DAT_14cbe8210;
  *(int *)(param_1 + 2) = (int)param_1[2] + 0x10;
  return;
}



// FUNCTION 148f1bd2e FUN_148f1bd2e body=258 status=ok
// SIG undefined FUN_148f1bd2e(void)

void FUN_148f1bd2e(void)

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
              0x110) < DAT_14cbe8290) {
    FUN_144b3d300(&DAT_14cbe8290);
    if (DAT_14cbe8290 == -1) {
      FUN_148f1be32(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FShaderParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x19;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cbe8210,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14435fd37);
      _Init_thread_footer(&DAT_14cbe8290);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f1be32 FUN_148f1be32 body=226 status=ok
// SIG undefined FUN_148f1be32(void)

longlong * FUN_148f1be32(longlong *param_1)

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
  pcVar13 = FUN_148f1bf16;
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



// FUNCTION 148f1bf16 FUN_148f1bf16 body=136 status=ok
// SIG undefined FUN_148f1bf16(void)

code * FUN_148f1bf16(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"EnemyDirections";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000001b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148f1bf9e;
}


