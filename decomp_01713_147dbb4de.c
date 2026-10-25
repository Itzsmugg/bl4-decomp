// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147dbb4de FUN_147dbb4de body=114 status=ok
// SIG undefined FUN_147dbb4de(void)

void FUN_147dbb4de(longlong *param_1,int param_2)

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



// FUNCTION 147dbb550 FUN_147dbb550 body=436 status=ok
// SIG undefined FUN_147dbb550(void)

void FUN_147dbb550(longlong *param_1)

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
        uVar10 = (longlong)(int)((uint)((ulonglong)uVar4 >> 0x20) ^ (uint)uVar4) &
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



// FUNCTION 147dbb706 FUN_147dbb706 body=132 status=ok
// SIG undefined FUN_147dbb706(void)

void FUN_147dbb706(longlong param_1,int param_2)

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



// FUNCTION 147dbb78c FUN_147dbb78c body=103 status=ok
// SIG undefined FUN_147dbb78c(void)

void FUN_147dbb78c(longlong *param_1,uint param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  lVar1 = *param_1;
  puVar2 = *(undefined8 **)(lVar1 + (longlong)(int)param_2 * 8);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  iVar3 = (int)param_1[1];
  iVar4 = ~param_2 + iVar3;
  if (iVar4 != 0) {
    iVar5 = 1;
    if (iVar4 < 1) {
      iVar5 = iVar4;
    }
    memmove((void *)(lVar1 + (longlong)(int)param_2 * 8),
            (void *)(lVar1 + (longlong)(iVar3 - iVar5) * 8),(longlong)iVar5 << 3);
    iVar3 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar3 + -1;
  return;
}



// FUNCTION 147dbb7f4 FUN_147dbb7f4 body=62 status=ok
// SIG undefined FUN_147dbb7f4(void)

void FUN_147dbb7f4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147dbb832(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 147dbb832 FUN_147dbb832 body=93 status=ok
// SIG undefined FUN_147dbb832(void)

ulonglong FUN_147dbb832(uint param_1,uint param_2)

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



// FUNCTION 147dbb890 FUN_147dbb890 body=31 status=ok
// SIG undefined FUN_147dbb890(void)

undefined8 FUN_147dbb890(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147dbb8c8 FUN_147dbb8c8 body=93 status=ok
// SIG undefined FUN_147dbb8c8(void)

void FUN_147dbb8c8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab18800;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab18790;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147dbb926 FUN_147dbb926 body=93 status=ok
// SIG undefined FUN_147dbb926(void)

void FUN_147dbb926(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab18800;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab18790;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147dbb984 FUN_147dbb984 body=126 status=ok
// SIG undefined FUN_147dbb984(void)

void FUN_147dbb984(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ab18800;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab18790;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147dbb9f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147dbba10 FUN_147dbba10 body=21 status=ok
// SIG undefined FUN_147dbba10(void)

undefined8 FUN_147dbba10(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147dbba28 FUN_147dbba28 body=31 status=ok
// SIG undefined FUN_147dbba28(void)

undefined8 FUN_147dbba28(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147dbba60 FUN_147dbba60 body=93 status=ok
// SIG undefined FUN_147dbba60(void)

void FUN_147dbba60(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab188e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab18870;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147dbbabe FUN_147dbbabe body=93 status=ok
// SIG undefined FUN_147dbbabe(void)

void FUN_147dbbabe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab188e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab18870;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147dbbb1c FUN_147dbbb1c body=126 status=ok
// SIG undefined FUN_147dbbb1c(void)

void FUN_147dbbb1c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ab188e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab18870;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147dbbb8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147dbbba8 FUN_147dbbba8 body=21 status=ok
// SIG undefined FUN_147dbbba8(void)

undefined8 FUN_147dbbba8(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147dbbbf0 FUN_147dbbbf0 body=31 status=ok
// SIG undefined FUN_147dbbbf0(void)

undefined8 FUN_147dbbbf0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147dbbc2a FUN_147dbbc2a body=93 status=ok
// SIG undefined FUN_147dbbc2a(void)

void FUN_147dbbc2a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca5b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab18950;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147dbbc88 FUN_147dbbc88 body=93 status=ok
// SIG undefined FUN_147dbbc88(void)

void FUN_147dbbc88(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca5b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab18950;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147dbbce6 FUN_147dbbce6 body=126 status=ok
// SIG undefined FUN_147dbbce6(void)

void FUN_147dbbce6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1ca5b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab18950;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147dbbd55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147dbbd64 FUN_147dbbd64 body=135 status=ok
// SIG undefined FUN_147dbbd64(void)

void FUN_147dbbd64(longlong param_1,undefined8 param_2,undefined2 *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined2 local_38 [4];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = FUN_14479d2ce(param_1 + 0x18);
  pcVar1 = *(code **)(param_1 + 0x20);
  local_38[0] = *param_3;
  local_30 = *(longlong *)(param_3 + 4);
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  (*pcVar1)(uVar2,param_2,local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dbbdec FUN_147dbbdec body=31 status=ok
// SIG undefined FUN_147dbbdec(void)

undefined8 FUN_147dbbdec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147dbbe26 FUN_147dbbe26 body=93 status=ok
// SIG undefined FUN_147dbbe26(void)

void FUN_147dbbe26(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8660;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab189c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147dbbe84 FUN_147dbbe84 body=93 status=ok
// SIG undefined FUN_147dbbe84(void)

void FUN_147dbbe84(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8660;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab189c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147dbbee2 FUN_147dbbee2 body=126 status=ok
// SIG undefined FUN_147dbbee2(void)

void FUN_147dbbee2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8660;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab189c0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147dbbf51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147dbbf60 FUN_147dbbf60 body=58 status=ok
// SIG undefined FUN_147dbbf60(void)

void FUN_147dbbf60(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147dbbf97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 147dbbf9a FUN_147dbbf9a body=48 status=ok
// SIG undefined FUN_147dbbf9a(void)

void FUN_147dbbf9a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 147dbbfca FUN_147dbbfca body=9 status=ok
// SIG undefined FUN_147dbbfca(void)

void FUN_147dbbfca(longlong param_1)

{
  FUN_147dbbff2(param_1 + 0x10);
  return;
}



// FUNCTION 147dbbfd4 FUN_147dbbfd4 body=29 status=ok
// SIG undefined FUN_147dbbfd4(void)

undefined8 FUN_147dbbfd4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147dbbff2 FUN_147dbbff2 body=70 status=ok
// SIG undefined FUN_147dbbff2(void)

void FUN_147dbbff2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab0c3f0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_147dbc038(param_1 + 2);
  return;
}



// FUNCTION 147dbc038 FUN_147dbc038 body=52 status=ok
// SIG undefined FUN_147dbc038(void)

void FUN_147dbc038(longlong *param_1)

{
  FUN_147dbc06c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147dbc06c FUN_147dbc06c body=89 status=ok
// SIG undefined FUN_147dbc06c(void)

void FUN_147dbc06c(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1401ad22e(param_1,0);
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



// FUNCTION 147dbc0c6 FUN_147dbc0c6 body=31 status=ok
// SIG undefined FUN_147dbc0c6(void)

undefined8 FUN_147dbc0c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147dbc100 FUN_147dbc100 body=93 status=ok
// SIG undefined FUN_147dbc100(void)

void FUN_147dbc100(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab18ff0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab18a50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147dbc15e FUN_147dbc15e body=93 status=ok
// SIG undefined FUN_147dbc15e(void)

void FUN_147dbc15e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab18ff0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab18a50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147dbc1bc FUN_147dbc1bc body=126 status=ok
// SIG undefined FUN_147dbc1bc(void)

void FUN_147dbc1bc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ab18ff0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab18a50;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147dbc22b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147dbc23a FUN_147dbc23a body=40 status=ok
// SIG undefined FUN_147dbc23a(void)

void FUN_147dbc23a(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147dbc25f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 147dbc264 FUN_147dbc264 body=48 status=ok
// SIG undefined FUN_147dbc264(void)

void FUN_147dbc264(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 147dbc294 FUN_147dbc294 body=132 status=ok
// SIG undefined FUN_147dbc294(void)

void FUN_147dbc294(longlong param_1,int param_2)

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



// FUNCTION 147dbc319 FUN_147dbc319 body=563 status=ok
// SIG undefined FUN_147dbc319(void)

undefined8 FUN_147dbc319(longlong *param_1,undefined1 *param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined7 uVar8;
  longlong lVar9;
  uint uVar10;
  bool bVar11;
  undefined1 auStack_58 [40];
  longlong local_30;
  uint local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140056680(&local_30,L"Unloaded");
  uVar4 = *(uint *)(param_1 + 1);
  if (uVar4 == local_28) {
    bVar11 = true;
    if (1 < (int)uVar4) {
      lVar9 = 0;
      while( true ) {
        uVar1 = *(ushort *)(*param_1 + lVar9);
        uVar4 = (uint)uVar1;
        uVar2 = *(ushort *)(local_30 + lVar9);
        uVar10 = (uint)uVar2;
        if (uVar1 != uVar2) {
          if ((uVar2 | uVar1) < 0x80) {
            uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_147dbc384;
          }
          iVar5 = uVar4 - uVar10;
          goto LAB_147dbc506;
        }
        if (uVar1 == 0) break;
LAB_147dbc384:
        lVar9 = lVar9 + 2;
      }
      iVar5 = 0;
LAB_147dbc506:
      bVar11 = iVar5 == 0;
    }
  }
  else {
    bVar11 = local_28 + uVar4 == 1;
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if (bVar11) {
    uVar3 = 0;
    uVar8 = 0;
  }
  else {
    FUN_140056680(&local_30,L"Loaded");
    uVar4 = *(uint *)(param_1 + 1);
    uVar7 = (ulonglong)uVar4;
    if (uVar4 == local_28) {
      bVar11 = true;
      if (1 < (int)uVar4) {
        lVar9 = 0;
        while( true ) {
          uVar1 = *(ushort *)(*param_1 + lVar9);
          uVar4 = (uint)uVar1;
          uVar2 = *(ushort *)(local_30 + lVar9);
          uVar10 = (uint)uVar2;
          if (uVar1 != uVar2) {
            if ((uVar2 | uVar1) < 0x80) {
              uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
              uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_147dbc43d;
            }
            uVar7 = (ulonglong)(uVar4 - uVar10);
            goto LAB_147dbc53a;
          }
          if (uVar1 == 0) break;
LAB_147dbc43d:
          lVar9 = lVar9 + 2;
        }
        uVar7 = 0;
LAB_147dbc53a:
        bVar11 = (int)uVar7 == 0;
      }
    }
    else {
      bVar11 = local_28 + uVar4 == 1;
    }
    if (local_30 != 0) {
      uVar7 = FUN_1400020a8();
    }
    uVar8 = (undefined7)(uVar7 >> 8);
    uVar3 = 1;
    if (!bVar11) {
      FUN_140056680(&local_30,L"Activated");
      uVar4 = *(uint *)(param_1 + 1);
      uVar7 = (ulonglong)uVar4;
      if (uVar4 == local_28) {
        bVar11 = true;
        if (1 < (int)uVar4) {
          lVar9 = 0;
          while( true ) {
            uVar1 = *(ushort *)(*param_1 + lVar9);
            uVar4 = (uint)uVar1;
            uVar2 = *(ushort *)(local_30 + lVar9);
            uVar10 = (uint)uVar2;
            if (uVar1 != uVar2) {
              if ((uVar2 | uVar1) < 0x80) {
                uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_147dbc4db;
              }
              uVar7 = (ulonglong)(uVar4 - uVar10);
              goto LAB_147dbc546;
            }
            if (uVar1 == 0) break;
LAB_147dbc4db:
            lVar9 = lVar9 + 2;
          }
          uVar7 = 0;
LAB_147dbc546:
          bVar11 = (int)uVar7 == 0;
        }
      }
      else {
        bVar11 = local_28 + uVar4 == 1;
      }
      if (local_30 != 0) {
        uVar7 = FUN_1400020a8();
      }
      uVar8 = (undefined7)(uVar7 >> 8);
      uVar3 = 2;
      if (!bVar11) {
        uVar6 = 0;
        goto LAB_147dbc3d1;
      }
    }
  }
  *param_2 = uVar3;
  uVar6 = CONCAT71(uVar8,1);
LAB_147dbc3d1:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dbc54e FUN_147dbc54e body=546 status=ok
// SIG undefined FUN_147dbc54e(void)

void FUN_147dbc54e(longlong *param_1,longlong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined2 *puVar11;
  longlong *_Dst;
  undefined2 *puVar12;
  int iVar13;
  int iVar14;
  undefined8 *puVar15;
  int iVar16;
  longlong lVar17;
  undefined8 *puVar18;
  longlong lVar19;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  _Dst = (longlong *)*param_1;
  if (_Dst != param_2) {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = *_Dst;
    *_Dst = 0;
    *(int *)(param_2 + 1) = (int)_Dst[1];
    *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)_Dst + 0xc);
    _Dst[1] = 0;
    _Dst = (longlong *)*param_1;
  }
  FUN_1447a1747(_Dst,1);
  iVar7 = (int)param_1[1] + -1;
  if (iVar7 == 0) {
    iVar7 = 0;
  }
  else {
    iVar8 = 1;
    if (iVar7 < 1) {
      iVar8 = iVar7;
    }
    memmove(_Dst,_Dst + (longlong)((int)param_1[1] - iVar8) * 2,(longlong)iVar8 << 4);
    iVar7 = (int)param_1[1] + -1;
  }
  *(int *)(param_1 + 1) = iVar7;
  FUN_140b12644(param_1);
  iVar7 = (int)param_1[1];
  if (iVar7 < 2) {
LAB_147dbc739:
    if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  lVar3 = *param_1;
  iVar13 = 0;
  iVar8 = 1;
  iVar16 = 0;
LAB_147dbc619:
  iVar13 = iVar13 + 2;
  iVar14 = iVar8;
  if (iVar13 < iVar7) {
    puVar11 = &DAT_149dfb77a;
    if (*(int *)(lVar3 + 8 + (longlong)iVar13 * 0x10) != 0) {
      puVar11 = *(undefined2 **)(lVar3 + (longlong)iVar13 * 0x10);
    }
    puVar12 = &DAT_149dfb77a;
    if (*(int *)(lVar3 + 8 + (longlong)iVar8 * 0x10) != 0) {
      puVar12 = *(undefined2 **)(lVar3 + (longlong)iVar8 * 0x10);
    }
    lVar19 = 0;
    while( true ) {
      uVar1 = *(ushort *)((longlong)puVar12 + lVar19);
      uVar9 = (uint)uVar1;
      uVar2 = *(ushort *)((longlong)puVar11 + lVar19);
      uVar10 = (uint)uVar2;
      iVar14 = iVar13;
      if (uVar1 != uVar2) break;
      if (uVar1 == 0) goto LAB_147dbc695;
LAB_147dbc665:
      lVar19 = lVar19 + 2;
    }
    if ((uVar2 | uVar1) < 0x80) {
      uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar1];
      uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
      if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_147dbc665;
    }
    if ((int)(uVar9 - uVar10) < 0) {
      iVar14 = iVar8;
    }
  }
LAB_147dbc695:
  lVar19 = (longlong)iVar16 * 0x10;
  puVar11 = &DAT_149dfb77a;
  if (*(int *)(lVar3 + 8 + lVar19) != 0) {
    puVar11 = *(undefined2 **)(lVar3 + lVar19);
  }
  lVar17 = (longlong)iVar14 * 0x10;
  puVar12 = &DAT_149dfb77a;
  if (*(int *)(lVar3 + 8 + lVar17) != 0) {
    puVar12 = *(undefined2 **)(lVar3 + lVar17);
  }
  puVar15 = (undefined8 *)(lVar19 + lVar3);
  puVar18 = (undefined8 *)(lVar17 + lVar3);
  lVar19 = 0;
  do {
    uVar1 = *(ushort *)((longlong)puVar12 + lVar19);
    uVar9 = (uint)uVar1;
    uVar2 = *(ushort *)((longlong)puVar11 + lVar19);
    uVar10 = (uint)uVar2;
    if (uVar1 == uVar2) {
      if (uVar1 == 0) goto LAB_147dbc739;
    }
    else {
      if (0x7f < (uVar2 | uVar1)) break;
      uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar1];
      uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
      if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[uVar2]) break;
    }
    lVar19 = lVar19 + 2;
  } while( true );
  if (-1 < (int)(uVar9 - uVar10)) goto LAB_147dbc739;
  uVar4 = *puVar15;
  uVar5 = puVar15[1];
  uVar6 = puVar18[1];
  *puVar15 = *puVar18;
  puVar15[1] = uVar6;
  local_48._0_4_ = (undefined4)uVar4;
  local_48._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar5;
  uStack_40._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  *(undefined4 *)puVar18 = (undefined4)local_48;
  *(undefined4 *)((longlong)puVar18 + 4) = local_48._4_4_;
  *(undefined4 *)(puVar18 + 1) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)puVar18 + 0xc) = uStack_40._4_4_;
  iVar13 = iVar14 * 2;
  iVar8 = iVar14 * 2 + 1;
  iVar16 = iVar14;
  local_48 = uVar4;
  uStack_40 = uVar5;
  if (iVar7 <= iVar8) goto LAB_147dbc739;
  goto LAB_147dbc619;
}



// FUNCTION 147dbc772 FUN_147dbc772 body=95 status=ok
// SIG undefined FUN_147dbc772(void)

void FUN_147dbc772(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 147dbc7d2 FUN_147dbc7d2 body=132 status=ok
// SIG undefined FUN_147dbc7d2(void)

void FUN_147dbc7d2(longlong param_1,int param_2)

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



// FUNCTION 147dbc858 FUN_147dbc858 body=132 status=ok
// SIG undefined FUN_147dbc858(void)

void FUN_147dbc858(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar1 >> 0x10 ^ uVar1) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x18) == param_2) {
          FUN_147dbc8dc(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 147dbc8dc FUN_147dbc8dc body=87 status=ok
// SIG undefined FUN_147dbc8dc(void)

void FUN_147dbc8dc(longlong *param_1,int param_2)

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
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_147dbc934();
  return;
}



// FUNCTION 147dbc934 FUN_147dbc934 body=114 status=ok
// SIG undefined FUN_147dbc934(void)

void FUN_147dbc934(longlong *param_1,int param_2)

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



// FUNCTION 147dbc9a6 FUN_147dbc9a6 body=328 status=ok
// SIG undefined FUN_147dbc9a6(void)

undefined4 * FUN_147dbc9a6(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
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
  FUN_147dbcaf0(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_147dbcbd6(param_1,uVar4,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
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
      FUN_147dbcc56(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dbcaf0 FUN_147dbcaf0 body=230 status=ok
// SIG undefined FUN_147dbcaf0(void)

int * FUN_147dbcaf0(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar6);
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



// FUNCTION 147dbcbd6 FUN_147dbcbd6 body=128 status=ok
// SIG undefined FUN_147dbcbd6(void)

undefined8 FUN_147dbcbd6(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_147dbc934((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 147dbcc56 FUN_147dbcc56 body=474 status=ok
// SIG undefined FUN_147dbcc56(void)

void FUN_147dbcc56(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
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
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147dbce32 FUN_147dbce32 body=67 status=ok
// SIG undefined FUN_147dbce32(void)

void FUN_147dbce32(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_1459fee0e(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_147dbcc56(param_1);
    return;
  }
  FUN_147dbce76(param_1);
  FUN_1459fee0e(param_1,0);
  return;
}



// FUNCTION 147dbce76 FUN_147dbce76 body=322 status=ok
// SIG undefined FUN_147dbce76(void)

void FUN_147dbce76(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
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



// FUNCTION 147dbcfba FUN_147dbcfba body=213 status=ok
// SIG undefined FUN_147dbcfba(void)

int FUN_147dbcfba(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    bVar4 = DAT_14c950c29;
    for (iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0xb0 + (longlong)iVar1 * 0xb8)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0xb8);
      if (((bVar4 & 1) != 0) && (lVar3 != 0)) {
        FUN_1456cec3c(lVar3);
        bVar4 = DAT_14c950c29;
      }
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if (lVar3 == lVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}



// FUNCTION 147dbd090 FUN_147dbd090 body=96 status=ok
// SIG undefined FUN_147dbd090(void)

void FUN_147dbd090(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 8 + lVar5 * 0x10);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x10 + 8);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_147d87596(param_1,param_2,1);
  return;
}



// FUNCTION 147dbd0f0 FUN_147dbd0f0 body=31 status=ok
// SIG undefined FUN_147dbd0f0(void)

undefined8 FUN_147dbd0f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147dbd12a FUN_147dbd12a body=26 status=ok
// SIG undefined FUN_147dbd12a(void)

bool FUN_147dbd12a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147dbd144 FUN_147dbd144 body=93 status=ok
// SIG undefined FUN_147dbd144(void)

void FUN_147dbd144(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab18c80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab18c10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147dbd1a2 FUN_147dbd1a2 body=93 status=ok
// SIG undefined FUN_147dbd1a2(void)

void FUN_147dbd1a2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab18c80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab18c10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147dbd200 FUN_147dbd200 body=126 status=ok
// SIG undefined FUN_147dbd200(void)

void FUN_147dbd200(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ab18c80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab18c10;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147dbd26f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147dbd27e FUN_147dbd27e body=58 status=ok
// SIG undefined FUN_147dbd27e(void)

void FUN_147dbd27e(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147dbd2b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 147dbd2b8 FUN_147dbd2b8 body=161 status=ok
// SIG undefined FUN_147dbd2b8(void)

bool FUN_147dbd2b8(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

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
    FUN_1400841de(param_1 + 0x18,&local_40);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3,param_4);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dbd35c FUN_147dbd35c body=207 status=ok
// SIG undefined FUN_147dbd35c(void)

int FUN_147dbd35c(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    bVar4 = DAT_14c950c29;
    for (iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0x10 + (longlong)iVar1 * 0x18)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x18);
      if (((bVar4 & 1) != 0) && (lVar3 != 0)) {
        FUN_1456cec3c(lVar3);
        bVar4 = DAT_14c950c29;
      }
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if (lVar3 == lVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}



// FUNCTION 147dbd42c FUN_147dbd42c body=351 status=ok
// SIG undefined FUN_147dbd42c(void)

undefined4 * FUN_147dbd42c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147dbd58c(param_1,local_48);
  FUN_147dbd716(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  if ((uVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar5);
  }
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_147dbd672(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
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
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0x14) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_147dbd7e0(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dbd58c FUN_147dbd58c body=230 status=ok
// SIG undefined FUN_147dbd58c(void)

int * FUN_147dbd58c(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar6);
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



// FUNCTION 147dbd672 FUN_147dbd672 body=162 status=ok
// SIG undefined FUN_147dbd672(void)

undefined8 FUN_147dbd672(longlong *param_1,undefined4 param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    if ((local_30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    iVar5 = FUN_147dbd35c(param_1,param_2,&local_30);
    if (iVar5 != -1) {
      uVar2 = *(undefined4 *)((longlong)param_3 + 4);
      lVar4 = param_3[1];
      uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar5 * 0x18);
      *puVar1 = (int)*param_3;
      puVar1[1] = uVar2;
      puVar1[2] = (int)lVar4;
      puVar1[3] = uVar3;
      FUN_147dbd76e(param_1,*param_4);
      *param_4 = iVar5;
      uVar6 = 1;
      goto LAB_147dbd696;
    }
  }
  uVar6 = 0;
LAB_147dbd696:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dbd716 FUN_147dbd716 body=87 status=ok
// SIG undefined FUN_147dbd716(void)

longlong * FUN_147dbd716(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  byte bVar2;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if (lVar1 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c();
  }
  bVar2 = DAT_14c950c29;
  lVar1 = *param_3;
  param_1[1] = lVar1;
  if ((lVar1 != 0) && ((bVar2 & 1) != 0)) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 147dbd76e FUN_147dbd76e body=114 status=ok
// SIG undefined FUN_147dbd76e(void)

void FUN_147dbd76e(longlong *param_1,int param_2)

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



// FUNCTION 147dbd7e0 FUN_147dbd7e0 body=510 status=ok
// SIG undefined FUN_147dbd7e0(void)

void FUN_147dbd7e0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
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
  uVar5 = *(uint *)(param_1 + 9);
  uVar3 = local_70;
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      do {
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)((longlong)plVar4 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar5 != uVar8);
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
    uVar3 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar9 = local_70._4_4_;
      local_70 = uVar3;
      do {
        lVar2 = *local_88;
        uVar7 = *(ulonglong *)(lVar2 + (longlong)iVar9 * 0x18);
        if ((DAT_14c950c29 == '\x01') && (uVar7 != 0)) {
          FUN_1456cec3c(uVar7);
        }
        lVar2 = lVar2 + (longlong)iVar9 * 0x18;
        uVar5 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar7 = (longlong)(int)(uVar5 >> 0x10 ^ uVar5) & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x14) = iVar6;
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10) =
             *(undefined4 *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(int *)((longlong)plVar4 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar9;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar9 = local_70._4_4_;
        uVar3 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147dbd9e0 FUN_147dbd9e0 body=315 status=ok
// SIG undefined FUN_147dbd9e0(void)

void FUN_147dbd9e0(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar6 = *param_2;
    if ((uVar6 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(uVar6);
    }
    uVar3 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    uVar6 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
    iVar5 = *(int *)((longlong)plVar4 + uVar6 * 4);
    if (iVar5 != -1) {
      puVar8 = (ulonglong *)((longlong)plVar4 + uVar6 * 4);
      bVar2 = DAT_14c950c29;
      do {
        puVar7 = (ulonglong *)((longlong)iVar5 * 0x18 + *param_1);
        uVar6 = *param_2;
        if ((uVar6 != 0 & bVar2) == 1) {
          FUN_1456cec3c(uVar6);
          bVar2 = DAT_14c950c29;
        }
        uVar1 = *puVar7;
        if (((bVar2 & 1) != 0) && (uVar1 != 0)) {
          FUN_1456cec3c(uVar1);
          bVar2 = DAT_14c950c29;
        }
        if ((uVar6 != 0 & bVar2) == 1) {
          FUN_1456cec3c(uVar6);
          bVar2 = DAT_14c950c29;
        }
        if (uVar1 == uVar6) {
          FUN_147dbdb1c(param_1,(int)*puVar8);
          return;
        }
        iVar5 = (int)puVar7[2];
        puVar8 = puVar7 + 2;
      } while (iVar5 != -1);
    }
  }
  return;
}



// FUNCTION 147dbdb1c FUN_147dbdb1c body=87 status=ok
// SIG undefined FUN_147dbdb1c(void)

void FUN_147dbdb1c(longlong *param_1,int param_2)

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
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_147dbd76e();
  return;
}



// FUNCTION 147dbdb74 FUN_147dbdb74 body=62 status=ok
// SIG undefined FUN_147dbdb74(void)

void FUN_147dbdb74(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147dbdbb2(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 147dbdbb2 FUN_147dbdbb2 body=93 status=ok
// SIG undefined FUN_147dbdbb2(void)

ulonglong FUN_147dbdbb2(uint param_1,uint param_2)

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



// FUNCTION 147dbdc10 FUN_147dbdc10 body=107 status=ok
// SIG undefined FUN_147dbdc10(void)

void FUN_147dbdc10(longlong *param_1,longlong *param_2)

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
        if ((int)(~uVar3 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 8;
    } while (lVar4 * 8 - uVar3 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147dbc7d2(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar4 * 8) = *param_2;
  return;
}



// FUNCTION 147dbdc7c FUN_147dbdc7c body=114 status=ok
// SIG undefined FUN_147dbdc7c(void)

void FUN_147dbdc7c(longlong *param_1,int param_2)

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



// FUNCTION 147dbdcee FUN_147dbdcee body=132 status=ok
// SIG undefined FUN_147dbdcee(void)

void FUN_147dbdcee(longlong *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     (int)(((uint)param_2 << 0x10 | uVar4) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x18) == param_2) {
          FUN_147dbdd72(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 147dbdd72 FUN_147dbdd72 body=87 status=ok
// SIG undefined FUN_147dbdd72(void)

void FUN_147dbdd72(longlong *param_1,int param_2)

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
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_147dbdc7c();
  return;
}



// FUNCTION 147dbddca FUN_147dbddca body=114 status=ok
// SIG undefined FUN_147dbddca(void)

void FUN_147dbddca(longlong *param_1,int param_2)

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



// FUNCTION 147dbde3c FUN_147dbde3c body=253 status=ok
// SIG undefined FUN_147dbde3c(void)

void FUN_147dbde3c(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  longlong lVar5;
  ushort uVar6;
  ushort uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = (int)param_2[1];
    if (iVar2 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*param_2;
    }
    iVar1 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    iVar2 = FUN_144a49b4a(iVar1,puVar4);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      iVar1 = (int)param_2[1];
LAB_147dbdeb2:
      plVar3 = (longlong *)(*param_1 + (longlong)iVar2 * 0x20);
      iVar2 = *(int *)(*param_1 + 8 + (longlong)iVar2 * 0x20);
      if (iVar2 == iVar1) {
        if (1 < iVar1) {
          lVar5 = 0;
          do {
            uVar7 = *(ushort *)(*plVar3 + lVar5);
            uVar8 = (ulonglong)uVar7;
            uVar6 = *(ushort *)(*param_2 + lVar5);
            if (uVar7 == uVar6) {
              if (uVar7 == 0) break;
            }
            else {
              if (0x7f < (uVar6 | uVar7)) goto LAB_147dbdf21;
              uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
              uVar9 = (ulonglong)uVar6;
              uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar9]) goto LAB_147dbdf21;
            }
            lVar5 = lVar5 + 2;
          } while( true );
        }
        goto LAB_147dbdf27;
      }
      if (iVar2 + iVar1 == 1) goto LAB_147dbdf27;
      goto LAB_147dbdf13;
    }
  }
  return;
LAB_147dbdf21:
  if (uVar7 == uVar6) {
LAB_147dbdf27:
    FUN_147dbdf3a(param_1);
    return;
  }
LAB_147dbdf13:
  iVar2 = (int)plVar3[3];
  if (iVar2 == -1) {
    return;
  }
  goto LAB_147dbdeb2;
}



// FUNCTION 147dbdf3a FUN_147dbdf3a body=90 status=ok
// SIG undefined FUN_147dbdf3a(void)

void FUN_147dbdf3a(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_147dbdf94();
  return;
}



// FUNCTION 147dbdf94 FUN_147dbdf94 body=51 status=ok
// SIG undefined FUN_147dbdf94(void)

void FUN_147dbdf94(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + (longlong)param_2 * 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_147dbddca(param_1,param_2);
  return;
}



// FUNCTION 147dbdfc8 FUN_147dbdfc8 body=112 status=ok
// SIG undefined FUN_147dbdfc8(void)

void FUN_147dbdfc8(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x14,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x14)) {
      uVar2 = uVar1 / 0x14 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x14,4);
  }
  return;
}



// FUNCTION 147dbe038 FUN_147dbe038 body=132 status=ok
// SIG undefined FUN_147dbe038(void)

void FUN_147dbe038(longlong param_1,int param_2)

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



// FUNCTION 147dbe0be FUN_147dbe0be body=257 status=ok
// SIG undefined FUN_147dbe0be(void)

longlong * FUN_147dbe0be(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  longlong local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  local_28 = 0xffffffff;
  lVar1 = FUN_14171b860(param_2,DAT_14cb114f0);
  if (lVar1 == 0) {
    uVar2 = FUN_145992eaa();
    puVar3 = (undefined8 *)FUN_1468ff240(param_2,uVar2);
    if (puVar3 == (undefined8 *)0x0) {
      *param_1 = 0;
      goto LAB_147dbe12d;
    }
    (**(code **)*puVar3)(puVar3,&local_40);
    if (DAT_14c950c29 == 1) {
      if (local_40 == 0) {
        local_40 = 0;
      }
      else {
        FUN_1456cec3c();
      }
    }
    local_28 = local_38;
    local_30 = local_40;
  }
  else {
    (**(code **)(*param_2 + 0x248))(param_2,lVar1,&local_30);
  }
  *param_1 = local_30;
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
LAB_147dbe12d:
  *(undefined4 *)(param_1 + 1) = local_28;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dbe1c0 FUN_147dbe1c0 body=123 status=ok
// SIG undefined FUN_147dbe1c0(void)

void FUN_147dbe1c0(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)*param_1)(param_1,&local_28);
  if (DAT_14c950c29 == '\x01') {
    if (local_28 == 0) {
      local_28 = 0;
    }
    else {
      FUN_1456cec3c();
    }
  }
  *param_3 = local_28;
  *(undefined4 *)(param_3 + 1) = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dbe23c FUN_147dbe23c body=184 status=ok
// SIG undefined FUN_147dbe23c(void)

void FUN_147dbe23c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_14171b860(param_1,DAT_14cb11500);
  if (lVar1 == 0) {
    uVar2 = FUN_145992eaa();
    lVar1 = FUN_1468ff240(param_1,uVar2);
    if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  else {
    local_30 = *param_2;
    if (DAT_14c950c29 == '\x01') {
      if (local_30 == 0) {
        local_30 = 0;
      }
      else {
        FUN_1456cec3c();
        local_30 = *param_2;
      }
    }
    local_28 = (undefined4)param_2[1];
    (**(code **)(*param_1 + 0x248))(param_1,lVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dbe308 FUN_147dbe308 body=178 status=ok
// SIG undefined FUN_147dbe308(void)

void FUN_147dbe308(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  local_20 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 8))(param_1,puVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dbe3be FUN_147dbe3be body=235 status=ok
// SIG undefined FUN_147dbe3be(void)

void FUN_147dbe3be(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar2 = &local_28;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147dbe4aa(puVar2,local_2c);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dbe4aa FUN_147dbe4aa body=173 status=ok
// SIG undefined FUN_147dbe4aa(void)

void FUN_147dbe4aa(longlong *param_1,undefined4 param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *param_1;
  lVar3 = FUN_1447210f0(lVar2);
  if (((lVar3 != 0) &&
      (((bVar1 = *(byte *)(lVar3 + 0x152), bVar1 == 1 ||
        ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) &&
       (*(char *)(lVar2 + 0x178) == '\x03')))) &&
     (FUN_1437a3d60(&local_40,lVar2), local_38 != -1 && local_40 != (longlong *)0x0)) {
    (**(code **)(*local_40 + 0x5e0))(local_40,local_38,param_2);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147dbe558 FUN_147dbe558 body=157 status=ok
// SIG undefined FUN_147dbe558(void)

void FUN_147dbe558(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147dbe5f6(puVar1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dbe5f6 FUN_147dbe5f6 body=157 status=ok
// SIG undefined FUN_147dbe5f6(void)

void FUN_147dbe5f6(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *param_1;
  lVar3 = FUN_1447210f0(lVar2);
  if (((lVar3 != 0) &&
      (((bVar1 = *(byte *)(lVar3 + 0x152), bVar1 == 1 ||
        ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) &&
       (*(char *)(lVar2 + 0x178) == '\x03')))) &&
     (FUN_1437a3d60(&local_28,lVar2), local_20 != -1 && local_28 != (longlong *)0x0)) {
    (**(code **)(*local_28 + 0x5d8))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147dbe6b8 FUN_147dbe6b8 body=358 status=ok
// SIG undefined FUN_147dbe6b8(void)

void FUN_147dbe6b8(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [32];
  code *local_38;
  ulonglong *local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = FUN_1475a25ce(param_2 + 0xf0);
  if ((*(longlong *)(lVar3 + 0x30) == 0) ||
     (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x30) + 0x2b0), lVar3 == 0)) {
    local_28 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = *(ulonglong *)(lVar3 + 0x3f0);
    if (uVar4 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(uVar4);
    }
    local_28 = uVar4;
    if ((~DAT_14c950c29 & 1) == 0 && uVar4 != 0) {
      FUN_1456cec3c(uVar4);
    }
    if ((uVar4 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c(uVar4);
    }
  }
  uVar1 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  iVar2 = FUN_14017c546((longlong *)(param_1 + 0x30),uVar1 >> 0x10 ^ uVar1,&local_28);
  if ((iVar2 != -1) &&
     (lVar3 = (longlong)iVar2 * 0x60 + *(longlong *)(param_1 + 0x30), uVar4 = lVar3 + 8,
     uVar4 != 0 && lVar3 != 0)) {
    local_38 = FUN_1437abb4c;
    local_30 = &local_28;
    local_28 = uVar4;
    FUN_147dccd66(param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dbe820 FUN_147dbe820 body=358 status=ok
// SIG undefined FUN_147dbe820(void)

void FUN_147dbe820(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  ulonglong *local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = FUN_1475a25ce(param_2 + 0xf0);
  if ((*(longlong *)(lVar3 + 0x30) == 0) ||
     (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x30) + 0x2b0), lVar3 == 0)) {
    local_28 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = *(ulonglong *)(lVar3 + 0x3f0);
    if (uVar4 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(uVar4);
    }
    local_28 = uVar4;
    if ((~DAT_14c950c29 & 1) == 0 && uVar4 != 0) {
      FUN_1456cec3c(uVar4);
    }
    if ((uVar4 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c(uVar4);
    }
  }
  uVar1 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  iVar2 = FUN_14017c546((longlong *)(param_1 + 0x30),uVar1 >> 0x10 ^ uVar1,&local_28);
  if ((iVar2 != -1) &&
     (lVar3 = (longlong)iVar2 * 0x60 + *(longlong *)(param_1 + 0x30), uVar4 = lVar3 + 8,
     uVar4 != 0 && lVar3 != 0)) {
    local_38 = &LAB_1437abb94;
    local_30 = &local_28;
    local_28 = uVar4;
    FUN_147dccd66(param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dbe988 FUN_147dbe988 body=128 status=ok
// SIG undefined FUN_147dbe988(void)

undefined8 * FUN_147dbe988(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_14017c366();
  if (lVar1 == 0) {
    puVar2 = &DAT_14cb116b0;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb116c0) {
      FUN_144b3d300(&DAT_14cb116c0);
      if (DAT_14cb116c0 == -1) {
        DAT_14cb116b0 = 0;
        uRam000000014cb116b8 = 0;
        atexit((_func_5014 *)&LAB_1437a467b);
        _Init_thread_footer(&DAT_14cb116c0);
      }
    }
  }
  else {
    puVar2 = (undefined8 *)(lVar1 + 8);
  }
  return puVar2;
}



// FUNCTION 147dbea0c FUN_147dbea0c body=147 status=ok
// SIG undefined FUN_147dbea0c(void)

void FUN_147dbea0c(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_158 [40];
  undefined1 local_130 [256];
  longlong local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_144a81018(local_130,"virtual ANavigationDataChunkActor::BeginPlay");
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  FUN_1405f1eac(param_1);
  lVar2 = FUN_1447210f0(param_1);
  if ((lVar2 != 0) && (plVar1 = *(longlong **)(lVar2 + 0x168), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x308))(plVar1,param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dbeaa0 FUN_147dbeaa0 body=153 status=ok
// SIG undefined FUN_147dbeaa0(void)

void FUN_147dbeaa0(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_158 [32];
  undefined1 local_138 [256];
  longlong local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_144a81018(local_138,"virtual ANavigationDataChunkActor::EndPlay");
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  lVar2 = FUN_1447210f0(param_1);
  if ((lVar2 != 0) && (plVar1 = *(longlong **)(lVar2 + 0x168), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x310))(plVar1,param_1);
  }
  FUN_1403d8a98(param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dbebd4 FUN_147dbebd4 body=1847 status=ok
// SIG undefined FUN_147dbebd4(void)

void FUN_147dbebd4(longlong param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong **pplVar11;
  undefined8 *puVar12;
  int iVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 auStack_158 [32];
  longlong local_138;
  undefined8 uStack_130;
  longlong *local_128;
  undefined8 uStack_120;
  longlong *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (*(longlong *)(param_1 + 0x30) != 0) goto LAB_147dbec22;
  local_118 = (longlong *)0x0;
  uStack_110 = 0;
  local_128 = (longlong *)0x0;
  uStack_120 = 0;
  iVar13 = *(int *)(param_1 + 0x18);
  if (iVar13 < 0) {
LAB_147dbf304:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar13);
  }
  if (iVar13 != 0) {
    FUN_147dc33f6(&local_118);
    iVar13 = *(int *)(param_1 + 0x18);
    if (iVar13 < 0) goto LAB_147dbf304;
    if ((int)uStack_120._4_4_ < iVar13) {
      FUN_147dc33f6(&local_128);
      iVar13 = *(int *)(param_1 + 0x18);
    }
    if (iVar13 != 0) {
      lVar14 = *(longlong *)(param_1 + 0x10);
      lVar18 = 0;
      do {
        uVar9 = uStack_110;
        uVar8 = uStack_120;
        lVar3 = *(longlong *)(lVar14 + lVar18);
        if (*(char *)(*(longlong *)(lVar3 + 0xa8) + 0xe0) == '\x01') {
          iVar17 = (int)uStack_120;
          uVar10 = (int)uStack_120 + 1;
          uStack_120 = CONCAT44(uStack_120._4_4_,uVar10);
          pplVar11 = &local_128;
          if (uStack_120._4_4_ < uVar10) {
            FUN_147dc3456(&local_128,uVar8 & 0xffffffff);
          }
        }
        else {
          iVar17 = (int)uStack_110;
          uVar10 = (int)uStack_110 + 1;
          uStack_110 = CONCAT44(uStack_110._4_4_,uVar10);
          pplVar11 = &local_118;
          if (uStack_110._4_4_ < uVar10) {
            FUN_147dc3456(&local_118,uVar9 & 0xffffffff);
          }
        }
        (*pplVar11)[iVar17] = lVar3;
        lVar18 = lVar18 + 8;
      } while ((longlong)iVar13 * 8 != lVar18);
    }
  }
  lVar14 = (longlong)(int)uStack_110;
  if (lVar14 != 0) {
    puVar12 = (undefined8 *)FUN_14001cc68(0x68,0x10);
    puVar12[4] = 0;
    puVar12[5] = 0;
    puVar12[6] = 0;
    puVar12[7] = 0;
    puVar12[8] = 0;
    puVar12[9] = 0;
    puVar12[0xc] = 0;
    puVar12[1] = 0;
    puVar12[2] = 0;
    puVar12[3] = puVar12;
    puVar12[10] = 0;
    puVar12[0xb] = 0;
    *(undefined1 *)(puVar12 + 0xc) = 0;
    *puVar12 = &PTR_FUN_14ab1f5d0;
    puVar2 = *(undefined8 **)(param_1 + 0x30);
    *(undefined8 **)(param_1 + 0x30) = puVar12;
    if (puVar2 == (undefined8 *)0x0) {
      plVar16 = local_118 + lVar14;
LAB_147dbede1:
      uStack_130 = 0;
      local_138 = 0;
      plVar15 = local_118;
      do {
        lVar14 = *plVar15;
        (**(code **)(**(longlong **)(lVar14 + 0xa8) + 0x2e0))
                  (*(longlong **)(lVar14 + 0xa8),&local_c8);
        local_d8 = local_98;
        local_e8 = local_a8;
        uStack_e4 = uStack_a4;
        uStack_e0 = uStack_a0;
        uStack_dc = uStack_9c;
        local_f8 = local_b8;
        uStack_f4 = uStack_b4;
        uStack_f0 = uStack_b0;
        uStack_ec = uStack_ac;
        local_108 = CONCAT44(uStack_c4,local_c8);
        uStack_100 = CONCAT44(uStack_bc,uStack_c0);
        if ((lVar14 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar14);
        }
        uVar8 = uStack_130;
        lVar18 = (longlong)(int)uStack_130;
        uVar10 = (int)uStack_130 + 1;
        uStack_130 = CONCAT44(uStack_130._4_4_,uVar10);
        if (uStack_130._4_4_ < uVar10) {
          FUN_147dc37ce(&local_138,uVar8 & 0xffffffff);
        }
        lVar18 = lVar18 * 0x40;
        *(undefined8 *)(local_138 + 0x30 + lVar18) = local_d8;
        puVar1 = (undefined4 *)(local_138 + 0x20 + lVar18);
        *puVar1 = local_e8;
        puVar1[1] = uStack_e4;
        puVar1[2] = uStack_e0;
        puVar1[3] = uStack_dc;
        puVar1 = (undefined4 *)(local_138 + 0x10 + lVar18);
        *puVar1 = local_f8;
        puVar1[1] = uStack_f4;
        puVar1[2] = uStack_f0;
        puVar1[3] = uStack_ec;
        puVar1 = (undefined4 *)(local_138 + lVar18);
        *puVar1 = (undefined4)local_108;
        puVar1[1] = local_108._4_4_;
        puVar1[2] = (int)uStack_100;
        puVar1[3] = uStack_100._4_4_;
        *(longlong *)(local_138 + 0x38 + lVar18) = lVar14;
        if ((lVar14 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar14);
        }
        plVar15 = plVar15 + 1;
      } while (plVar15 != plVar16);
    }
    else {
      (**(code **)*puVar2)(puVar2,1);
      local_138 = 0;
      uStack_130 = 0;
      if ((longlong)(int)uStack_110 != 0) {
        plVar16 = local_118 + (int)uStack_110;
        goto LAB_147dbede1;
      }
    }
    lVar14 = *(longlong *)(param_1 + 0x30);
    if ((longlong *)(lVar14 + 8) != &local_138) {
      if (*(longlong *)(lVar14 + 8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(lVar14 + 8) = local_138;
      local_138 = 0;
      *(int *)(lVar14 + 0x10) = (int)uStack_130;
      *(uint *)(lVar14 + 0x14) = uStack_130._4_4_;
      uStack_130 = 0;
    }
    FUN_147dc3854(lVar14);
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x20))();
    if (local_138 != 0) {
      FUN_1400020a8();
    }
    puVar12 = (undefined8 *)FUN_14001cc68(0x58,0x10);
    puVar12[4] = 0;
    puVar12[5] = 0;
    puVar12[6] = 0;
    puVar12[7] = 0;
    puVar12[10] = 0;
    puVar12[1] = 0;
    puVar12[2] = 0;
    puVar12[3] = puVar12;
    puVar12[8] = 0;
    puVar12[9] = 0;
    *(undefined1 *)(puVar12 + 10) = 0;
    *puVar12 = &PTR_FUN_14ab1f670;
    puVar2 = *(undefined8 **)(param_1 + 0x38);
    *(undefined8 **)(param_1 + 0x38) = puVar12;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    plVar16 = local_118;
    local_108 = 0;
    uStack_100 = 0;
    lVar14 = (longlong)(int)uStack_110;
    if (lVar14 != 0) {
      lVar18 = 0;
      do {
        lVar3 = *(longlong *)((longlong)plVar16 + lVar18);
        (**(code **)(**(longlong **)(lVar3 + 0xa8) + 0x2e0))(*(longlong **)(lVar3 + 0xa8),&local_c8)
        ;
        uVar6 = CONCAT44(uStack_ac,uStack_b0);
        uVar7 = CONCAT44(uStack_a4,local_a8);
        uVar4 = CONCAT44(uStack_c4,local_c8);
        uVar5 = CONCAT44(uStack_bc,uStack_c0);
        if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar3);
        }
        uVar8 = uStack_100;
        lVar19 = (longlong)(int)uStack_100;
        uVar10 = (int)uStack_100 + 1;
        uStack_100 = CONCAT44(uStack_100._4_4_,uVar10);
        if (uStack_100._4_4_ < uVar10) {
          FUN_147dc5004(&local_108,uVar8 & 0xffffffff);
        }
        lVar19 = lVar19 * 0x30;
        *(undefined8 *)(local_108 + lVar19) = uVar4;
        *(undefined8 *)(local_108 + 8 + lVar19) = uVar5;
        *(undefined8 *)(local_108 + 0x10 + lVar19) = uVar6;
        *(undefined8 *)(local_108 + 0x18 + lVar19) = uVar7;
        *(undefined1 *)(local_108 + 0x20 + lVar19) = 1;
        *(longlong *)(local_108 + 0x28 + lVar19) = lVar3;
        if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar3);
        }
        lVar18 = lVar18 + 8;
      } while (lVar14 * 8 != lVar18);
    }
    lVar14 = *(longlong *)(param_1 + 0x38);
    if ((undefined8 *)(lVar14 + 8) != &local_108) {
      if (*(longlong *)(lVar14 + 8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(lVar14 + 8) = local_108;
      local_108 = 0;
      *(int *)(lVar14 + 0x10) = (int)uStack_100;
      *(uint *)(lVar14 + 0x14) = uStack_100._4_4_;
      uStack_100 = 0;
    }
    FUN_147dc5098(lVar14);
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x20))();
    if (local_108 != 0) {
      FUN_1400020a8();
    }
  }
  lVar14 = (longlong)(int)uStack_120;
  if (lVar14 != 0) {
    puVar12 = (undefined8 *)FUN_14001cc68(0x58,0x10);
    puVar12[4] = 0;
    puVar12[5] = 0;
    puVar12[6] = 0;
    puVar12[7] = 0;
    puVar12[10] = 0;
    puVar12[1] = 0;
    puVar12[2] = 0;
    puVar12[3] = puVar12;
    puVar12[8] = 0;
    puVar12[9] = 0;
    *(undefined1 *)(puVar12 + 10) = 0;
    *puVar12 = &PTR_FUN_14ab1f670;
    puVar2 = *(undefined8 **)(param_1 + 0x40);
    *(undefined8 **)(param_1 + 0x40) = puVar12;
    if (puVar2 == (undefined8 *)0x0) {
      plVar16 = local_128 + lVar14;
LAB_147dbef34:
      uStack_100 = 0;
      local_108 = 0;
      plVar15 = local_128;
      do {
        lVar14 = *plVar15;
        (**(code **)(**(longlong **)(lVar14 + 0xa8) + 0x2e0))
                  (*(longlong **)(lVar14 + 0xa8),&local_c8);
        uVar6 = CONCAT44(uStack_ac,uStack_b0);
        uVar7 = CONCAT44(uStack_a4,local_a8);
        uVar4 = CONCAT44(uStack_c4,local_c8);
        uVar5 = CONCAT44(uStack_bc,uStack_c0);
        if ((lVar14 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar14);
        }
        uVar8 = uStack_100;
        lVar18 = (longlong)(int)uStack_100;
        uVar10 = (int)uStack_100 + 1;
        uStack_100 = CONCAT44(uStack_100._4_4_,uVar10);
        if (uStack_100._4_4_ < uVar10) {
          FUN_147dc5004(&local_108,uVar8 & 0xffffffff);
        }
        lVar18 = lVar18 * 0x30;
        *(undefined8 *)(local_108 + lVar18) = uVar4;
        *(undefined8 *)(local_108 + 8 + lVar18) = uVar5;
        *(undefined8 *)(local_108 + 0x10 + lVar18) = uVar6;
        *(undefined8 *)(local_108 + 0x18 + lVar18) = uVar7;
        *(undefined1 *)(local_108 + 0x20 + lVar18) = 1;
        *(longlong *)(local_108 + 0x28 + lVar18) = lVar14;
        if ((lVar14 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar14);
        }
        plVar15 = plVar15 + 1;
      } while (plVar15 != plVar16);
    }
    else {
      (**(code **)*puVar2)(puVar2,1);
      local_108 = 0;
      uStack_100 = 0;
      if ((longlong)(int)uStack_120 != 0) {
        plVar16 = local_128 + (int)uStack_120;
        goto LAB_147dbef34;
      }
    }
    lVar14 = *(longlong *)(param_1 + 0x40);
    if ((undefined8 *)(lVar14 + 8) != &local_108) {
      if (*(longlong *)(lVar14 + 8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(lVar14 + 8) = local_108;
      local_108 = 0;
      *(int *)(lVar14 + 0x10) = (int)uStack_100;
      *(uint *)(lVar14 + 0x14) = uStack_100._4_4_;
      uStack_100 = 0;
    }
    FUN_147dc5098(lVar14);
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x20))();
    if (local_108 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_128 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_118 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_147dbec22:
  if ((local_90 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147dbf30e FUN_147dbf30e body=105 status=ok
// SIG undefined FUN_147dbf30e(void)

void FUN_147dbf30e(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x38) = 0;
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
                    /* WARNING: Could not recover jumptable at 0x000147dbf36d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 147dbf37a FUN_147dbf37a body=139 status=ok
// SIG undefined FUN_147dbf37a(void)

void FUN_147dbf37a(undefined8 param_1)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  code *local_20;
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = FUN_144a7757c();
  lVar3 = FUN_144a78ede(param_1,uVar2);
  bVar1 = *(byte *)(lVar3 + 0x152);
  if ((bVar1 == 1) || ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) {
    local_18 = &local_28;
    local_20 = FUN_1437abd1c;
    local_28 = param_1;
    FUN_147dbf406(param_1);
  }
  FUN_147dbf58e(param_1);
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147dbf406 FUN_147dbf406 body=390 status=ok
// SIG undefined FUN_147dbf406(void)

void FUN_147dbf406(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((longlong)*(int *)(param_1 + 0x90) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x88);
    lVar8 = (longlong)*(int *)(param_1 + 0x90) * 0x48;
    do {
      cVar3 = (*(code *)*param_2)(param_2[1],lVar5);
      uVar2 = local_70;
      if (cVar3 == '\0') goto LAB_147dbf4c8;
      lVar5 = lVar5 + 0x48;
      lVar8 = lVar8 + -0x48;
    } while (lVar8 != 0);
  }
  plVar1 = (longlong *)(param_1 + 0x28);
  lVar5 = param_1 + 0x38;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  uStack_48 = 0;
  uStack_58 = lVar5;
  if (*(int *)(param_1 + 0x50) == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar7 = *(int *)(param_1 + 0x50);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  uVar2 = local_70;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
  local_88 = plVar1;
  if ((local_70._4_4_ != iVar7) || (uStack_58 != lVar5)) {
    iVar4 = local_70._4_4_;
    local_70 = uVar2;
    do {
      lVar8 = (longlong)iVar4 * 0x10 + *local_88;
      cVar3 = FUN_144729dda(lVar8);
      if (cVar3 != '\0') {
        lVar8 = FUN_14479d2ce(lVar8);
        if ((longlong)*(int *)(lVar8 + 0x1c8) != 0) {
          lVar6 = *(longlong *)(lVar8 + 0x1c0);
          lVar8 = (longlong)*(int *)(lVar8 + 0x1c8) * 0x48;
          do {
            cVar3 = (*(code *)*param_2)(param_2[1],lVar6);
            uVar2 = local_70;
            if (cVar3 == '\0') goto LAB_147dbf4c8;
            lVar6 = lVar6 + 0x48;
            lVar8 = lVar8 + -0x48;
          } while (lVar8 != 0);
        }
      }
      local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~uStack_7c);
      FUN_1449c0562(&local_80);
      iVar4 = local_70._4_4_;
      uVar2 = local_70;
    } while (local_88 != plVar1 ||
             (CONCAT44(uStack_74,uStack_78) != lVar5 || local_70._4_4_ != iVar7));
  }
LAB_147dbf4c8:
  local_70 = uVar2;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147dbf58e FUN_147dbf58e body=213 status=ok
// SIG undefined FUN_147dbf58e(void)

void FUN_147dbf58e(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  code *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = param_1 + 0xe8;
  if (*(int *)(param_1 + 0xf0) != *(int *)(param_1 + 0x11c)) {
    FUN_147dc8060(lVar1);
    FUN_147dc81a4(lVar1);
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  if (*(int *)(param_1 + 0x144) < 0) {
    FUN_147dc8930(param_1 + 0x138);
  }
  local_28 = &local_38;
  local_30 = FUN_1437ae5ba;
  local_38 = param_1;
  FUN_147dbf406(param_1);
  if (*(int *)(param_1 + 0xf0) == *(int *)(param_1 + 0x11c)) {
    FUN_147dc88ec(lVar1);
  }
  if ((*(int *)(param_1 + 0x140) == 0) && (*(int *)(param_1 + 0x144) != 0)) {
    FUN_147dc8930(param_1 + 0x138);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dbf664 FUN_147dbf664 body=352 status=ok
// SIG undefined FUN_147dbf664(void)

longlong FUN_147dbf664(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  longlong *local_38;
  undefined8 uStack_30;
  longlong *local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = (longlong *)0x0;
  uStack_20 = 0;
  local_38 = (longlong *)0x0;
  uStack_30 = 0;
  cVar2 = FUN_147dbf7c6(param_2);
  if (cVar2 != '\0') {
    if (*local_28 == 0) {
      if (0 < *(int *)(param_1 + 0x80)) {
        plVar5 = (longlong *)(*(longlong *)(param_1 + 0x78) + 0x10);
LAB_147dbf6fc:
        lVar4 = *plVar5;
        goto LAB_147dbf786;
      }
    }
    else if ((longlong)*(int *)(param_1 + 0x80) != 0) {
      plVar5 = (longlong *)(*(longlong *)(param_1 + 0x78) + 0x10);
      lVar3 = (longlong)*(int *)(param_1 + 0x80) * 0x28;
      lVar4 = 0;
      do {
        if (plVar5[-2] == *local_28) {
          if (((plVar5 == (longlong *)&DAT_00000010) ||
              (plVar1 = (longlong *)*plVar5, plVar1 == (longlong *)0x0)) ||
             (cVar2 = (**(code **)(*plVar1 + 0x2a0))(plVar1,&local_28), cVar2 == '\0'))
          goto LAB_147dbf784;
          if ((int)uStack_30 < 1) goto LAB_147dbf6fc;
          plVar1 = plVar5 + 2;
          if ((longlong)(int)*plVar1 == 0) goto LAB_147dbf784;
          plVar5 = (longlong *)(plVar5[1] + 0x10);
          lVar3 = (longlong)(int)*plVar1 * 0x18;
          lVar4 = 0;
          goto LAB_147dbf74e;
        }
        plVar5 = plVar5 + 5;
        lVar3 = lVar3 + -0x28;
      } while (lVar3 != 0);
      goto LAB_147dbf786;
    }
  }
LAB_147dbf784:
  lVar4 = 0;
LAB_147dbf786:
  if (local_38 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_28 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
  while( true ) {
    plVar5 = plVar5 + 3;
    lVar3 = lVar3 + -0x18;
    if (lVar3 == 0) break;
LAB_147dbf74e:
    if (plVar5[-2] == *local_38) {
      if (((plVar5 == (longlong *)&DAT_00000010) ||
          (plVar1 = (longlong *)*plVar5, plVar1 == (longlong *)0x0)) ||
         (cVar2 = (**(code **)(*plVar1 + 0x2a0))(plVar1,&local_38), cVar2 == '\0'))
      goto LAB_147dbf784;
      goto LAB_147dbf6fc;
    }
  }
  goto LAB_147dbf786;
}



// FUNCTION 147dbf7c6 FUN_147dbf7c6 body=645 status=ok
// SIG undefined FUN_147dbf7c6(void)

/* WARNING: Removing unreachable block (ram,0x000147dbfa36) */

ulonglong FUN_147dbf7c6(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined8 unaff_RBX;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = param_1;
  if (param_1 == 0) {
    iVar3 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
      FUN_1446f84a2(param_2,iVar3);
    }
    *(undefined8 *)(*param_2 + (longlong)iVar3 * 8) = 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  }
  else {
    local_68 = 0;
    uStack_60 = 0;
    FUN_1400021e4(&local_58,&local_78);
    uVar2 = FUN_1403de9f2(&local_78,&local_68,&DAT_149e31048,1);
    uVar6 = (ulonglong)uVar2;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if (uVar2 == 0) {
      FUN_1400021e4(&local_58,&local_78);
      uVar6 = uStack_60;
      lVar5 = (longlong)(int)uStack_60;
      uVar2 = (int)uStack_60 + 1;
      uStack_60 = CONCAT44(uStack_60._4_4_,uVar2);
      if (uStack_60._4_4_ < uVar2) {
        FUN_1447a1bd6(&local_68,uVar6 & 0xffffffff);
      }
      uVar6 = lVar5 * 0x10;
      *(undefined8 *)(local_68 + uVar6) = 0;
      *(longlong *)(local_68 + uVar6) = local_78;
      local_78 = 0;
      *(int *)(local_68 + 8 + uVar6) = (int)uStack_70;
      *(undefined4 *)(local_68 + 0xc + uVar6) = uStack_70._4_4_;
      uStack_70 = 0;
    }
    uVar6 = CONCAT71((int7)(uVar6 >> 8),(int)uStack_60 < 3);
    if ((int)uStack_60 < 3) {
      local_78 = 0;
      uStack_70 = 0;
      local_80 = param_3;
      iVar3 = FUN_1403de9f2(local_68,&local_78,&DAT_149e0635c,1);
      lVar5 = local_78;
      if (iVar3 != 0) {
        lVar8 = (longlong)(int)uStack_70;
        if (lVar8 != 0) {
          lVar7 = 0;
          do {
            puVar4 = &DAT_149dfb77a;
            if (*(int *)(lVar5 + 8 + lVar7) != 0) {
              puVar4 = *(undefined2 **)(lVar5 + lVar7);
            }
            FUN_1446f470e(&local_50,puVar4,1);
            iVar3 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar3 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
              FUN_1446f84a2(param_2,iVar3);
            }
            *(undefined8 *)(*param_2 + (longlong)iVar3 * 8) = local_50;
            lVar7 = lVar7 + 0x10;
          } while (lVar8 * 0x10 != lVar7);
        }
      }
      plVar1 = local_80;
      if (1 < (int)uStack_60) {
        if (*(int *)(local_68 + 0x18) == 0) {
          puVar4 = &DAT_149dfb77a;
        }
        else {
          puVar4 = *(undefined2 **)(local_68 + 0x10);
        }
        FUN_1446f470e(&local_50,puVar4,1);
        iVar3 = (int)plVar1[1];
        *(uint *)(plVar1 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)plVar1 + 0xc) < iVar3 + 1U) {
          FUN_1446f84a2(plVar1,iVar3);
        }
        *(undefined8 *)(*plVar1 + (longlong)iVar3 * 8) = local_50;
      }
      FUN_1447a1747(local_78,uStack_70 & 0xffffffff);
      if (local_78 != 0) {
        FUN_1400020a8();
      }
    }
    FUN_1447a1747(local_68,(int)uStack_60);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 147dbfa4c FUN_147dbfa4c body=93 status=ok
// SIG undefined FUN_147dbfa4c(void)

undefined4 FUN_147dbfa4c(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = FUN_1437b18dc();
  if ((char)uVar1 != '\0') {
    if ((longlong)*(int *)(param_2 + 0x1c8) != 0) {
      lVar2 = *(longlong *)(param_2 + 0x1c0);
      lVar3 = (longlong)*(int *)(param_2 + 0x1c8) * 0x48;
      do {
        FUN_147dbebd4(lVar2);
        lVar2 = lVar2 + 0x48;
        lVar3 = lVar3 + -0x48;
      } while (lVar3 != 0);
    }
    FUN_147dbf58e(param_1);
  }
  return uVar1;
}



// FUNCTION 147dbfaaa FUN_147dbfaaa body=93 status=ok
// SIG undefined FUN_147dbfaaa(void)

undefined4 FUN_147dbfaaa(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = FUN_1437b19c6();
  if ((char)uVar1 != '\0') {
    if ((longlong)*(int *)(param_2 + 0x1c8) != 0) {
      lVar2 = *(longlong *)(param_2 + 0x1c0);
      lVar3 = (longlong)*(int *)(param_2 + 0x1c8) * 0x48;
      do {
        FUN_147dbf30e(lVar2);
        lVar2 = lVar2 + 0x48;
        lVar3 = lVar3 + -0x48;
      } while (lVar3 != 0);
    }
    FUN_147dbf58e(param_1);
  }
  return uVar1;
}



// FUNCTION 147dbfb08 FUN_147dbfb08 body=90 status=ok
// SIG undefined FUN_147dbfb08(void)

void FUN_147dbfb08(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  code *local_28;
  undefined8 **local_20;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = &local_18;
  local_20 = &local_30;
  local_28 = FUN_1437abfde;
  local_18 = param_1;
  local_10 = param_2;
  FUN_147dbf406();
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dbfb64 FUN_147dbfb64 body=145 status=ok
// SIG undefined FUN_147dbfb64(void)

void FUN_147dbfb64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 **local_68;
  undefined8 **local_60;
  code *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = &local_10;
  local_68 = &local_30;
  local_60 = &local_48;
  local_50 = &local_70;
  local_58 = FUN_1437ac0ba;
  local_70 = param_2;
  local_40 = param_2;
  local_38 = param_3;
  local_30 = local_48;
  local_28 = param_4;
  local_20 = param_2;
  local_18 = param_3;
  local_10 = param_1;
  FUN_147dbf406();
  if ((local_8 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dbfbf6 FUN_147dbfbf6 body=323 status=ok
// SIG undefined FUN_147dbfbf6(void)

void FUN_147dbfbf6(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
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
  iVar3 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(int *)(param_2 + 0x4c) != iVar3) {
    FUN_1407d00f0(param_2);
  }
  local_40 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_68 = local_48;
  local_60 = local_40;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      lVar4 = (longlong)iStack_54;
      lVar1 = *local_70;
      iVar3 = *(int *)(param_2 + 0x48);
      *(uint *)(param_2 + 0x48) = iVar3 + 1U;
      if (*(uint *)(param_2 + 0x4c) < iVar3 + 1U) {
        FUN_146276acc(param_2,iVar3);
      }
      lVar2 = *(longlong *)(param_2 + 0x40);
      if (*(longlong *)(param_2 + 0x40) == 0) {
        lVar2 = param_2;
      }
      *(undefined8 *)(lVar2 + (longlong)iVar3 * 8) = *(undefined8 *)(lVar4 * 0x20 + lVar1);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147dbfd3c FUN_147dbfd3c body=1226 status=ok
// SIG undefined FUN_147dbfd3c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147dbfd3c(longlong param_1,float param_2,undefined8 *param_3)

{
  int iVar1;
  double *pdVar2;
  longlong lVar3;
  double dVar4;
  ulonglong uVar5;
  double dVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  uint uVar11;
  double *pdVar12;
  float *pfVar13;
  float *pfVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  uint uVar34;
  uint uVar35;
  undefined1 auStack_248 [32];
  float local_228;
  float local_224;
  code *local_220;
  ulonglong local_218;
  ulonglong uStack_210;
  double local_208;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined1 local_1d8 [64];
  double local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  double local_180;
  ulonglong local_178;
  ulonglong uStack_170;
  double local_168;
  double local_160;
  undefined1 local_158 [32];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  fVar31 = *(float *)(param_1 + 0x158);
  local_224 = *(float *)(param_1 + 0x15c);
  local_220 = (code *)*param_3;
  pdVar2 = (double *)param_3[1];
  local_188 = *(undefined8 *)(param_1 + 0x30);
  pdVar12 = &local_198;
  local_198 = *(double *)(param_1 + 0x20);
  uStack_190 = *(undefined8 *)(param_1 + 0x28);
  FUN_144a7484c(pdVar12,local_158);
  auVar9 = _DAT_1499387d0;
  local_138 = *(undefined8 *)(param_1 + 8);
  uStack_130 = *(undefined8 *)(param_1 + 0x10);
  local_128 = *(undefined8 *)(param_1 + 0x18);
  uStack_120 = 0;
  local_118 = 0x3ff0000000000000;
  uStack_110 = 0x3ff0000000000000;
  local_108 = 0x3ff0000000000000;
  uStack_100 = 0;
  iVar1 = *(int *)(param_1 + 0x110);
  if ((longlong)iVar1 == 0) {
    fVar31 = fVar31 + param_2;
    if (0.0 < fVar31) {
      local_180 = (double)fVar31;
      local_188 = DAT_14c8464f0;
      local_198 = DAT_14c8464e0;
      uStack_190 = DAT_14c8464e8;
      local_178 = DAT_14c8462d8;
      uStack_170 = DAT_14c8462e0;
      local_168 = DAT_14c8462e8;
      local_160 = 360.0;
      FUN_1437aa20c(&local_198,local_1d8,local_158);
      (*local_220)(pdVar2,local_1d8);
    }
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x108);
    dVar4 = (double)DAT_1499387d0;
    dVar6 = DAT_1499387d0._8_8_;
    uVar5 = DAT_149931180;
    uVar34 = (uint)DAT_149931180;
    uVar35 = DAT_149931180._4_4_;
    uVar7 = DAT_149931180._8_8_;
    pfVar13 = (float *)(lVar3 + 0x10);
    local_228 = param_2;
    do {
      if (*(char *)(pfVar13 + -4) == '\x01') {
        fVar32 = pfVar13[-3] * local_228;
      }
      else {
        fVar32 = pfVar13[-2];
      }
      fVar33 = 360.0;
      if ((*(char *)(pfVar13 + -1) == '\x01') && (fVar33 = *pfVar13 + local_224, 360.0 <= fVar33)) {
        fVar33 = 360.0;
      }
      local_1e8 = *(double *)(pfVar13 + 0xc);
      local_1f8 = *(double *)*(undefined1 (*) [16])(pfVar13 + 8);
      dStack_1f0 = *(double *)(pfVar13 + 10);
      auVar15 = divpd(*(undefined1 (*) [16])(pfVar13 + 8),auVar9);
      auVar22._8_8_ = 0;
      auVar22._0_8_ = local_1e8;
      auVar23 = divpd(auVar22,auVar9);
      auVar15 = roundpd(auVar15,auVar15,3);
      auVar23 = roundpd(auVar23,auVar23,3);
      dVar29 = local_1f8 - auVar15._0_8_ * dVar4;
      dVar30 = dStack_1f0 - auVar15._8_8_ * dVar6;
      dVar27 = local_1e8 - auVar23._0_8_ * dVar4;
      dVar28 = 0.0 - auVar23._8_8_ * dVar6;
      auVar25._0_8_ = dVar29 + dVar4;
      auVar25._8_8_ = dVar30 + dVar6;
      auVar24._0_8_ = dVar27 + dVar4;
      auVar24._8_8_ = dVar28 + dVar6;
      auVar16._8_8_ = -(ulonglong)(0.0 <= dVar30);
      auVar16._0_8_ = -(ulonglong)(0.0 <= dVar29);
      auVar26._8_8_ = dVar30;
      auVar26._0_8_ = dVar29;
      auVar26 = blendvpd(auVar25,auVar26,auVar16);
      auVar17._8_8_ = -(ulonglong)(0.0 <= dVar28);
      auVar17._0_8_ = -(ulonglong)(0.0 <= dVar27);
      auVar15._8_8_ = dVar28;
      auVar15._0_8_ = dVar27;
      auVar15 = blendvpd(auVar24,auVar15,auVar17);
      auVar18._8_8_ = -(ulonglong)(180.0 < auVar26._8_8_);
      auVar18._0_8_ = -(ulonglong)(180.0 < auVar26._0_8_);
      auVar23._8_8_ = auVar26._8_8_ + -360.0;
      auVar23._0_8_ = auVar26._0_8_ + -360.0;
      auVar23 = blendvpd(auVar26,auVar23,auVar18);
      auVar19._8_8_ = -(ulonglong)(180.0 < auVar15._8_8_);
      auVar19._0_8_ = -(ulonglong)(180.0 < auVar15._0_8_);
      auVar8._8_8_ = auVar15._8_8_ + -360.0;
      auVar8._0_8_ = auVar15._0_8_ + -360.0;
      auVar15 = blendvpd(auVar15,auVar8,auVar19);
      auVar20._8_8_ = -(ulonglong)(9.999999747378752e-05 < (double)(auVar23._8_8_ & uVar7));
      auVar20._0_8_ = -(ulonglong)(9.999999747378752e-05 < (double)(auVar23._0_8_ & uVar5));
      iVar10 = movmskpd(SUB84(local_1e8,0),auVar20);
      auVar21._8_8_ = -(ulonglong)(9.999999747378752e-05 < (double)(auVar15._8_8_ & uVar7));
      auVar21._0_8_ = -(ulonglong)(9.999999747378752e-05 < (double)(auVar15._0_8_ & uVar5));
      uVar11 = movmskpd((int)pdVar12,auVar21);
      if ((uVar11 & 0x3fffffff) == 0 && iVar10 == 0) {
        local_208 = DAT_14c8462e8;
        local_218 = DAT_14c8462d8;
        uStack_210 = DAT_14c8462e0;
        pdVar12 = (double *)0x0;
      }
      else {
        pdVar12 = &local_1f8;
        FUN_144a76660(&local_1f8,&local_218);
      }
      local_180 = (double)(fVar32 + fVar31);
      local_160 = (double)fVar33;
      local_188 = *(undefined8 *)(pfVar13 + 6);
      local_198 = *(double *)(pfVar13 + 2);
      uStack_190 = *(undefined8 *)(pfVar13 + 4);
      local_168 = local_208;
      local_178 = local_218;
      uStack_170 = uStack_210;
      if (1e-08 < (double)CONCAT44((uint)((ulonglong)local_180 >> 0x20) & uVar35,
                                   SUB84(local_180,0) & uVar34)) {
        if ((9.999999747378752e-05 < (double)(local_218 & uVar5)) ||
           (9.999999747378752e-05 < (double)(uStack_210 & uVar5))) {
          dVar27 = (double)CONCAT44((uint)((ulonglong)local_160 >> 0x20) & uVar35,
                                    SUB84(local_160,0) & uVar34);
        }
        else {
          if (ABS(local_208) <= 9.999999747378752e-05) goto LAB_147dc00b4;
          dVar27 = ABS(local_160);
        }
        if (1e-08 < dVar27) {
          FUN_1437aa20c(&local_198,local_1d8,local_158);
          pdVar12 = pdVar2;
          (*local_220)(pdVar2,local_1d8);
        }
      }
LAB_147dc00b4:
      pfVar14 = pfVar13 + 0xe;
      pfVar13 = pfVar13 + 0x12;
    } while (pfVar14 != (float *)((longlong)iVar1 * 0x48 + lVar3));
  }
  if ((local_f0 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147dc0208 FUN_147dc0208 body=23 status=ok
// SIG undefined FUN_147dc0208(void)

bool FUN_147dc0208(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_147dbf664(param_1,*param_2);
  return lVar1 != 0;
}



// FUNCTION 147dc0220 FUN_147dc0220 body=130 status=ok
// SIG undefined FUN_147dc0220(void)

undefined4 FUN_147dc0220(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1437b8fb2();
  }
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x2d0))
                    (*(longlong **)(param_1 + 0x30),param_2);
  if ((char)uVar2 != '\0') {
    plVar1 = *(longlong **)(param_1 + 0xe0);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x308))(plVar1,param_2);
    }
    lVar3 = *(longlong *)(param_1 + 0x40);
    if (lVar3 == 0) {
      lVar3 = FUN_14475ec7e(param_1);
    }
    uVar4 = FUN_1448a6d9c(lVar3);
    FUN_147dbe6b8(uVar4,param_2);
    *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
  }
  return uVar2;
}



// FUNCTION 147dc02a2 FUN_147dc02a2 body=261 status=ok
// SIG undefined FUN_147dc02a2(void)

bool FUN_147dc02a2(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_68 [39];
  undefined1 local_41;
  code *local_40;
  undefined1 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)(param_1 + 0x98);
  uVar3 = FUN_1447addd0(param_2,0x10);
  iVar4 = FUN_147dc79a6(plVar1,uVar3,param_2);
  if (iVar4 == -1) {
    lVar5 = 0;
  }
  else {
    lVar5 = (longlong)iVar4 * 0x20 + *plVar1;
  }
  plVar7 = (longlong *)(lVar5 + 0x10);
  if (lVar5 == 0) {
    plVar7 = (longlong *)0x0;
  }
  if (plVar7 != (longlong *)0x0) {
    lVar5 = *plVar7;
    if ((lVar5 != 0) && ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0)) {
      if (((*(uint *)(param_1 + 8) & 0x10) == 0) &&
         ((lVar2 = *(longlong *)(param_1 + 0x20), lVar2 != 0 &&
          ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0)))) {
        lVar6 = 0;
        if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
          lVar6 = lVar2;
        }
        FUN_147dc03a8(lVar6,lVar5);
        lVar5 = *plVar7;
      }
      local_38 = &local_41;
      local_40 = FUN_1437aa566;
      FUN_147dccd66(lVar5);
      FUN_1437aa4a6(lVar5);
    }
    FUN_147dc7f6e(plVar1,param_2);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return plVar7 != (longlong *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dc03a8 FUN_147dc03a8 body=130 status=ok
// SIG undefined FUN_147dc03a8(void)

undefined4 FUN_147dc03a8(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1437b8fb2();
  }
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x2d8))
                    (*(longlong **)(param_1 + 0x30),param_2);
  if ((char)uVar2 != '\0') {
    plVar1 = *(longlong **)(param_1 + 0xe0);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x310))(plVar1,param_2);
    }
    lVar3 = *(longlong *)(param_1 + 0x40);
    if (lVar3 == 0) {
      lVar3 = FUN_14475ec7e(param_1);
    }
    uVar4 = FUN_1448a6d9c(lVar3);
    FUN_147dbe820(uVar4,param_2);
    *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
  }
  return uVar2;
}



// FUNCTION 147dc042a FUN_147dc042a body=166 status=ok
// SIG undefined FUN_147dc042a(void)

undefined8 * FUN_147dc042a(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  code *local_30;
  undefined8 **local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = FUN_1447addd0(param_3,0x10);
  iVar2 = FUN_147dc79a6((longlong *)(param_1 + 0x98),uVar1,param_3);
  if ((iVar2 != -1) &&
     (lVar3 = (longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0x98),
     puVar4 = (undefined8 *)(lVar3 + 0x10), puVar4 != (undefined8 *)0x0 && lVar3 != 0)) {
    local_28 = &local_38;
    local_30 = FUN_1437ae582;
    local_38 = param_2;
    FUN_147dccd66(*puVar4);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dc04d2 FUN_147dc04d2 body=179 status=ok
// SIG undefined FUN_147dc04d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_147dc04d2(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x40);
    if (lVar2 == 0) {
      lVar2 = FUN_14475ec7e(param_1);
    }
    bVar1 = *(byte *)(lVar2 + 0x152);
    if ((bVar1 == 1) || ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) {
      return (undefined8 *)(*(longlong *)(param_1 + 0xe0) + 0x30);
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb118b0) && (FUN_144b3d300(&DAT_14cb118b0), DAT_14cb118b0 == -1)) {
    DAT_14cb118a0 = 0;
    _DAT_14cb118a8 = 0;
    atexit(FUN_1437a9306);
    _Init_thread_footer(&DAT_14cb118b0);
  }
  return &DAT_14cb118a0;
}



// FUNCTION 147dc0586 FUN_147dc0586 body=93 status=ok
// SIG undefined FUN_147dc0586(void)

undefined4 * FUN_147dc0586(undefined4 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  *(undefined8 *)(param_1 + 4) = 0;
  iVar1 = *(int *)(param_3 + 1);
  uVar2 = *param_3;
  param_1[6] = iVar1;
  if (iVar1 == 0) {
    param_1[7] = 0;
  }
  else {
    FUN_147dc248a(param_1 + 4,iVar1,0);
    FUN_147dc24ec(*(undefined8 *)(param_1 + 4),uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 147dc05e4 FUN_147dc05e4 body=62 status=ok
// SIG undefined FUN_147dc05e4(void)

void FUN_147dc05e4(longlong param_1)

{
  longlong lVar1;
  
  FUN_1401b2056();
  if (*(longlong *)(param_1 + 0x390) != 0) {
    FUN_143567f9e();
  }
  lVar1 = FUN_1447210f0(param_1);
  if (lVar1 == 0) {
    return;
  }
  FUN_147dc0622(param_1);
  return;
}



// FUNCTION 147dc0622 FUN_147dc0622 body=244 status=ok
// SIG undefined FUN_147dc0622(void)

void FUN_147dc0622(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_1447210f0();
  if (lVar2 != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
      uVar3 = FUN_14118da1c();
      DAT_14c8442b8 = FUN_14054d46e(uVar3,L"nullrhi");
      _Init_thread_footer(&DAT_14c8442bc);
    }
    bVar1 = DAT_14c8442b8;
    if (DAT_14c872bf0 == '\x01') {
      if (DAT_14c872bf1 != '\x01') {
        return;
      }
      bVar1 = DAT_14c8442b8 & 1;
    }
    if (((bVar1 == 0) && (lVar2 = FUN_1447210f0(param_1), *(longlong *)(lVar2 + 0x218) != 0)) &&
       (*(longlong *)(param_1 + 0x390) != 0)) {
      FUN_143567f9e();
      uVar3 = *(undefined8 *)(param_1 + 0x390);
      lVar2 = FUN_1447210f0(param_1);
      FUN_143568a6a(uVar3,*(undefined4 *)(*(longlong *)(lVar2 + 0x218) + 8));
      return;
    }
  }
  return;
}



// FUNCTION 147dc0716 FUN_147dc0716 body=34 status=ok
// SIG undefined FUN_147dc0716(void)

void FUN_147dc0716(undefined8 param_1)

{
  FUN_147dc0738();
  FUN_145e3aa6c(param_1);
  FUN_1401bf1e0(param_1);
  return;
}



// FUNCTION 147dc0738 FUN_147dc0738 body=89 status=ok
// SIG undefined FUN_147dc0738(void)

void FUN_147dc0738(longlong param_1)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 0x390) != 0) && (*(char *)(param_1 + 0x3f0) == '\x01')) {
    lVar1 = FUN_1447210f0(param_1);
    if (lVar1 != 0) {
      lVar1 = FUN_1447210f0(param_1);
      lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x30) + 0x220);
      if (lVar1 != 0) {
        FUN_147ba61a8(lVar1,*(undefined8 *)(param_1 + 0x390));
        *(undefined1 *)(param_1 + 0x3f0) = 0;
      }
    }
  }
  return;
}



// FUNCTION 147dc0792 FUN_147dc0792 body=74 status=ok
// SIG undefined FUN_147dc0792(void)

void FUN_147dc0792(longlong param_1)

{
  longlong lVar1;
  
  FUN_1433b8196();
  lVar1 = FUN_1447210f0(param_1);
  if (((*(longlong *)(param_1 + 0x390) != 0) && (*(char *)(param_1 + 0x3f0) == '\0')) &&
     (*(longlong *)(*(longlong *)(lVar1 + 0x30) + 0x220) != 0)) {
    *(undefined1 *)(param_1 + 0x3f0) = 1;
  }
  FUN_147dc0622(param_1);
  return;
}



// FUNCTION 147dc07dc FUN_147dc07dc body=166 status=ok
// SIG undefined FUN_147dc07dc(void)

void FUN_147dc07dc(longlong param_1,undefined4 param_2,double *param_3,double *param_4,
                  undefined1 param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  FUN_1449b1b5c(param_1,param_2,param_3,param_4,param_5);
  if ((char)param_2 == '\0') {
    dVar3 = (*(double *)(param_1 + 0x3c8) - *(double *)(param_1 + 0x3b0)) * 0.5;
    dVar4 = (*(double *)(param_1 + 0x3c0) - *(double *)(param_1 + 0x3a8)) * 0.5;
    dVar5 = (*(double *)(param_1 + 0x3b8) - *(double *)(param_1 + 0x3a0)) * 0.5;
    *param_4 = dVar5;
    param_4[1] = dVar4;
    param_4[2] = dVar3;
    dVar1 = *(double *)(param_1 + 0x3b0);
    dVar2 = *(double *)(param_1 + 0x3a8);
    *param_3 = dVar5 + *(double *)(param_1 + 0x3a0);
    param_3[1] = dVar4 + dVar2;
    param_3[2] = dVar3 + dVar1;
  }
  return;
}



// FUNCTION 147dc0882 FUN_147dc0882 body=184 status=ok
// SIG undefined FUN_147dc0882(void)

longlong FUN_147dc0882(longlong param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong)*(int *)(param_1 + 0x60) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x58);
    lVar2 = (longlong)*(int *)(param_1 + 0x60) * 0x70;
    do {
      local_48 = *(undefined4 *)(lVar1 + 0x68);
      local_44 = local_48;
      local_40 = local_48;
      local_3c = local_48;
      FUN_140a107dc(&local_58,param_1 + 0x38,&local_48);
      if ((((local_58 == *param_2) && (local_54 == param_2[1])) && (local_50 == param_2[2])) &&
         (local_4c == param_2[3])) goto LAB_147dc0913;
      lVar1 = lVar1 + 0x70;
      lVar2 = lVar2 + -0x70;
    } while (lVar2 != 0);
  }
  lVar1 = 0;
LAB_147dc0913:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dc093c FUN_147dc093c body=75 status=ok
// SIG undefined FUN_147dc093c(void)

undefined8 FUN_147dc093c(undefined8 param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
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
  lVar1 = FUN_147dc0882();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x38);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dc0988 FUN_147dc0988 body=222 status=ok
// SIG undefined FUN_147dc0988(void)

longlong * FUN_147dc0988(longlong param_1,longlong *param_2,double *param_3,byte param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  double *pdVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  if ((longlong)*(int *)(param_1 + 0x60) != 0) {
    pdVar4 = *(double **)(param_1 + 0x58);
    lVar3 = (longlong)*(int *)(param_1 + 0x60) * 0x70;
    do {
      if (((((*pdVar4 < param_3[3] || *pdVar4 == param_3[3]) &&
            (*param_3 < pdVar4[3] || *param_3 == pdVar4[3])) &&
           (pdVar4[1] < param_3[4] || pdVar4[1] == param_3[4])) &&
          ((param_3[1] < pdVar4[4] || param_3[1] == pdVar4[4] &&
           (pdVar4[2] < param_3[5] || pdVar4[2] == param_3[5])))) &&
         ((param_3[2] < pdVar4[5] || param_3[2] == pdVar4[5] &&
          ((lVar2 = FUN_1427d8864(pdVar4 + 8), lVar2 != 0 || ((pdVar4[7] == 0.0 & param_4) == 0)))))
         ) {
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_147cc52e4(param_2,iVar1);
        }
        *(double **)(*param_2 + (longlong)iVar1 * 8) = pdVar4;
      }
      pdVar4 = pdVar4 + 0xe;
      lVar3 = lVar3 + -0x70;
    } while (lVar3 != 0);
  }
  return param_2;
}



// FUNCTION 147dc0a66 FUN_147dc0a66 body=86 status=ok
// SIG undefined FUN_147dc0a66(void)

void FUN_147dc0a66(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x60) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x60) * 0x70;
    lVar1 = *(longlong *)(param_1 + 0x58) + 0x40;
    do {
      FUN_140430222(lVar1,param_2,param_3,0,1,0);
      lVar1 = lVar1 + 0x70;
      lVar2 = lVar2 + -0x70;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 147dc0abc FUN_147dc0abc body=147 status=ok
// SIG undefined FUN_147dc0abc(void)

void FUN_147dc0abc(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_198 [39];
  undefined1 local_171;
  undefined1 local_170 [152];
  undefined1 local_d8 [184];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar1 = FUN_1427d8864(param_2 + 0x40);
  if (lVar1 != 0) {
    local_171 = 1;
    FUN_147dc0b50(local_170,param_2 + 0x40);
    FUN_147cacf85(local_170,param_2 + 0x38);
    FUN_14041e0ea(local_170);
    FUN_146f9f0fa(local_d8);
  }
  if ((local_20 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dc0b50 FUN_147dc0b50 body=222 status=ok
// SIG undefined FUN_147dc0b50(void)

longlong * FUN_147dc0b50(longlong *param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146f9f060(param_1 + 0x13,param_2,*param_3);
  *param_1 = (longlong)&PTR_FUN_14ab1f710;
  FUN_140713482(param_1,param_1 + 0x13);
  *param_1 = (longlong)&PTR_FUN_14ab1f710;
  local_38[0] = 0;
  local_38[1] = 0;
  local_40 = 0;
  FUN_1408383eb(param_1,&local_40);
  uVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  (**(code **)(*param_1 + 0x1a0))(param_1,local_40);
  FUN_14682562a(local_38,param_1,3);
  (**(code **)(*param_1 + 0x60))(param_1,local_38);
  (**(code **)(*param_1 + 0x1a0))(param_1,uVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dc0c40 FUN_147dc0c40 body=75 status=ok
// SIG undefined FUN_147dc0c40(void)

void FUN_147dc0c40(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_1464116f0(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dc0c8c FUN_147dc0c8c body=88 status=ok
// SIG undefined FUN_147dc0c8c(void)

ulonglong FUN_147dc0c8c(longlong param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (((*(int *)(param_1 + 0x48) != 2) &&
      (((bVar1 = *(byte *)(param_2 + 0x152), bVar1 == 1 ||
        ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) &&
       (lVar3 = FUN_14011c706(param_2), lVar3 != 0)))) &&
     (cVar2 = FUN_147dd136c(lVar3,param_1), cVar2 != '\0')) {
    uVar4 = 0;
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 147dc0ce4 FUN_147dc0ce4 body=109 status=ok
// SIG undefined FUN_147dc0ce4(void)

ulonglong FUN_147dc0ce4(longlong param_1)

{
  byte bVar1;
  undefined8 in_RAX;
  ulonglong uVar2;
  
  if (*(char *)(param_1 + 0xc2) == '\x01') {
    uVar2 = CONCAT71((int7)((ulonglong)in_RAX >> 8),*(undefined1 *)(param_1 + 0xc1));
  }
  else {
    uVar2 = *(ulonglong *)(param_1 + 0x40);
    if ((uVar2 == 0) && (uVar2 = FUN_14475ec7e(param_1), uVar2 == 0)) {
      uVar2 = 0;
    }
    else {
      bVar1 = *(byte *)(uVar2 + 0x152);
      if ((bVar1 == 1) || ((uVar2 = 0, bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) {
        uVar2 = CONCAT71((int7)(uVar2 >> 8),DAT_14cb11888);
      }
    }
    *(char *)(param_1 + 0xc1) = (char)uVar2;
    *(undefined1 *)(param_1 + 0xc2) = 1;
  }
  return uVar2 & 0xffffffffffffff01;
}



// FUNCTION 147dc0d52 FUN_147dc0d52 body=17 status=ok
// SIG undefined FUN_147dc0d52(void)

void FUN_147dc0d52(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000147dc0d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x2c8))();
  return;
}



// FUNCTION 147dc0d64 FUN_147dc0d64 body=105 status=ok
// SIG undefined FUN_147dc0d64(void)

undefined8 FUN_147dc0d64(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x40);
  if (lVar3 == 0) {
    lVar3 = FUN_14475ec7e(param_1);
  }
  bVar1 = *(byte *)(lVar3 + 0x152);
  if (((bVar1 == 1) || ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) &&
     (plVar2 = *(longlong **)(param_1 + 0xe0), plVar2 != (longlong *)0x0)) {
    *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
                    /* WARNING: Could not recover jumptable at 0x000147dc0db2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*plVar2 + 0x2d8))(plVar2,param_2);
    return uVar4;
  }
  return 1;
}



// FUNCTION 147dc0dce FUN_147dc0dce body=17 status=ok
// SIG undefined FUN_147dc0dce(void)

void FUN_147dc0dce(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000147dc0dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x2c0))();
  return;
}



// FUNCTION 147dc0de4 FUN_147dc0de4 body=148 status=ok
// SIG undefined FUN_147dc0de4(void)

undefined1 FUN_147dc0de4(longlong param_1)

{
  undefined1 uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  
  uVar1 = 1;
  if (DAT_14cb118e8 != DAT_14cb11914) {
    uVar2 = (uint)(ushort)((ulonglong)param_1 >> 0x10);
    puVar3 = &DAT_14cb11918;
    if (DAT_14cb11920 != (undefined *)0x0) {
      puVar3 = DAT_14cb11920;
    }
    iVar4 = *(int *)(puVar3 + (ulonglong)
                              (DAT_14cb11928 - 1U &
                              (int)((ulonglong)param_1 >> 0x20) +
                              ((int)param_1 << 0x10 | (uint)(ushort)param_1) +
                              (uVar2 << 0x13 | uVar2) + (uint)(ushort)((ushort)param_1 >> 4)) * 4);
    if (iVar4 == -1) {
      uVar1 = 0;
    }
    else {
      do {
        if (*(longlong *)(DAT_14cb118e0 + (longlong)iVar4 * 0x10) == param_1) {
          return 1;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x10 + DAT_14cb118e0 + 8);
        uVar1 = 0;
      } while (iVar4 != -1);
    }
  }
  return uVar1;
}



// FUNCTION 147dc0e78 FUN_147dc0e78 body=264 status=ok
// SIG undefined FUN_147dc0e78(void)

int * FUN_147dc0e78(longlong *param_1)

{
  ulonglong *puVar1;
  uint uVar2;
  ulonglong uVar3;
  int *piVar4;
  ulonglong *puVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  
  uVar3 = (ulonglong)DAT_14cb11948;
  if (DAT_14cb11948 == DAT_14cb11974) {
LAB_147dc0e89:
    piVar4 = (int *)CONCAT71((int7)(uVar3 >> 8),1);
  }
  else if ((longlong)(int)param_1[1] == 0) {
    piVar4 = &DAT_14cb11978;
    if (DAT_14cb11980 != (int *)0x0) {
      piVar4 = DAT_14cb11980;
    }
    iVar8 = *piVar4;
    piVar4 = DAT_14cb11980;
    if (iVar8 == -1) {
      piVar4 = (int *)0x0;
    }
    else {
      do {
        bVar9 = *(longlong *)(DAT_14cb11940 + (longlong)iVar8 * 0x10) == 0;
        piVar4 = (int *)CONCAT71((int7)((ulonglong)piVar4 >> 8),bVar9);
        if (bVar9) {
          return piVar4;
        }
        iVar8 = *(int *)((longlong)iVar8 * 0x10 + DAT_14cb11940 + 8);
      } while (iVar8 != -1);
    }
  }
  else {
    puVar5 = (ulonglong *)*param_1;
    piVar6 = &DAT_14cb11978;
    if (DAT_14cb11980 != (int *)0x0) {
      piVar6 = DAT_14cb11980;
    }
    puVar1 = puVar5 + (int)param_1[1];
    do {
      uVar3 = *puVar5;
      uVar2 = (uint)(uVar3 >> 0x10);
      uVar7 = (uint)uVar3 & 0xffff;
      for (iVar8 = piVar6[(int)(uVar3 >> 0x20) + ((uint)uVar3 << 0x10 | uVar7) +
                          (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4) & DAT_14cb11988 - 1U];
          iVar8 != -1; iVar8 = *(int *)((longlong)iVar8 * 0x10 + DAT_14cb11940 + 8)) {
        if (*(ulonglong *)(DAT_14cb11940 + (longlong)iVar8 * 0x10) == uVar3) goto LAB_147dc0e89;
      }
      puVar5 = puVar5 + 1;
      piVar4 = (int *)0x0;
    } while (puVar5 != puVar1);
  }
  return piVar4;
}



// FUNCTION 147dc0f80 FUN_147dc0f80 body=101 status=ok
// SIG undefined FUN_147dc0f80(void)

undefined1 FUN_147dc0f80(uint param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  int iVar3;
  
  uVar1 = 1;
  if (DAT_14cb119a8 != DAT_14cb119d4) {
    puVar2 = &DAT_14cb119d8;
    if (DAT_14cb119e0 != (undefined *)0x0) {
      puVar2 = DAT_14cb119e0;
    }
    iVar3 = *(int *)(puVar2 + (ulonglong)(DAT_14cb119e8 - 1U & param_1) * 4);
    if (iVar3 == -1) {
      uVar1 = 0;
    }
    else {
      do {
        if (*(uint *)(DAT_14cb119a0 + (longlong)iVar3 * 0xc) == param_1) {
          return 1;
        }
        iVar3 = *(int *)(DAT_14cb119a0 + (longlong)iVar3 * 0xc + 4);
        uVar1 = 0;
      } while (iVar3 != -1);
    }
  }
  return uVar1;
}



// FUNCTION 147dc0fe6 FUN_147dc0fe6 body=160 status=ok
// SIG undefined FUN_147dc0fe6(void)

ulonglong FUN_147dc0fe6(undefined8 param_1)

{
  longlong lVar1;
  int iVar2;
  size_t sVar3;
  wchar_t *_Str;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar1 = DAT_14cb11a00;
  lVar6 = (longlong)DAT_14cb11a08;
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (lVar6 != 0) {
    lVar5 = 0;
    do {
      _Str = L"";
      if (*(int *)(lVar1 + 8 + lVar5) != 0) {
        _Str = *(wchar_t **)(lVar1 + lVar5);
      }
      if (_Str == (wchar_t *)0x0) {
LAB_147dc1071:
        uVar4 = 0;
        break;
      }
      sVar3 = wcslen(_Str);
      iVar2 = FUN_1447ee042(param_1,_Str,sVar3 & 0xffffffff,1,0,0xffffffff);
      if (iVar2 == -1) goto LAB_147dc1071;
      lVar5 = lVar5 + 0x10;
    } while (lVar6 * 0x10 != lVar5);
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 147dc1086 FUN_147dc1086 body=329 status=ok
// SIG undefined FUN_147dc1086(void)

void FUN_147dc1086(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  double *param_5,float *param_6)

{
  float fVar1;
  undefined1 auStack_e8 [32];
  float *local_c8;
  uint local_c0;
  undefined4 local_b8;
  undefined4 *local_b0;
  undefined8 local_a8;
  int local_a0;
  float local_98;
  float local_94;
  undefined8 local_90;
  int local_88;
  undefined4 local_80 [2];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_80[0] = 0xffffffff;
  FUN_147d8e5b4(0,param_4);
  local_90 = *param_2;
  local_88 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_88 = 0;
  }
  local_b8 = 0x3f800000;
  local_c0 = 0x3f800000;
  local_c8 = (float *)CONCAT44(local_c8._4_4_,(float)param_5[1]);
  local_b0 = local_80;
  FUN_147d8e6b2(param_1,param_3,&local_90,(float)*param_5);
  local_a8 = *param_2;
  local_a0 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_a0 = 0;
  }
  local_c8 = &local_98;
  local_c0 = local_c0 & 0xffffff00;
  FUN_147d8e998(param_1,param_3,&local_a8,&local_94);
  param_5[1] = (double)(local_98 + 1.0) + param_5[1];
  if (param_6 != (float *)0x0) {
    fVar1 = *param_6;
    if (*param_6 <= local_94) {
      fVar1 = local_94;
    }
    *param_6 = fVar1;
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dc11d0 FUN_147dc11d0 body=652 status=ok
// SIG undefined FUN_147dc11d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147dc11d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte *param_4,
                  undefined8 param_5,double *param_6,float *param_7)

{
  double dVar1;
  float fVar2;
  undefined1 auStack_218 [32];
  undefined8 *local_1f8;
  float *local_1f0;
  float local_1dc;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined1 local_118 [176];
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_218;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb11a30) {
    FUN_144b3d300(&DAT_14cb11a30);
    if (DAT_14cb11a30 == -1) {
      _DAT_14cb11a20 = 12.0;
      DAT_14cb11a28 = 12.0;
      _Init_thread_footer(&DAT_14cb11a30);
    }
  }
  local_50 = param_6[1] + -1.0;
  local_58 = *param_6 + -1.0;
  local_60 = DAT_14cb11a28 + 2.0;
  local_68 = _DAT_14cb11a20 + 2.0;
  local_1f8 = (undefined8 *)&local_1c8;
  local_1c8 = DAT_14c758c60;
  local_1c4 = DAT_14c758c60;
  local_1c0 = DAT_14c758c60;
  local_1bc = 0x3f800000;
  FUN_147d8f1ec(local_118,&local_58,DAT_14ca94e18);
  FUN_140484502(param_1,local_118);
  local_1d8 = (double)CONCAT44((&DAT_14c758c60)[param_4[1]],(&DAT_14c758c60)[param_4[2]]);
  local_1d0 = (double)CONCAT44((float)param_4[3] * 0.003921569,(&DAT_14c758c60)[*param_4]);
  local_1f8 = &local_1d8;
  FUN_147d8f1ec(&local_1c8,param_6,DAT_14ca94e18,&DAT_14cb11a20);
  FUN_140484502(param_1,&local_1c8);
  local_1d0 = param_6[1];
  local_1d8 = *param_6 + _DAT_14cb11a20 + 10.0;
  local_1f0 = &local_1dc;
  local_1dc = 0.0;
  local_1f8 = &local_1d8;
  FUN_147dc1086(param_1,param_2,param_3,param_5);
  if (param_7 != (float *)0x0) {
    dVar1 = (double)local_1dc + _DAT_14cb11a20 + 10.0;
    fVar2 = *param_7;
    if ((double)fVar2 <= dVar1) {
      fVar2 = (float)dVar1;
    }
    *param_7 = fVar2;
  }
  param_6[1] = local_1d0;
  if ((local_48 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dc145e FUN_147dc145e body=228 status=ok
// SIG undefined FUN_147dc145e(void)

longlong * FUN_147dc145e(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 *local_90;
  undefined1 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x2e0);
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_88 = 1;
  local_98 = 0x2e;
  local_90 = &local_78;
  lVar2 = FUN_14011db44(uVar1,0,0,0);
  param_1[1] = lVar2;
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_88 = 1;
  local_98 = 2;
  local_90 = &local_78;
  lVar2 = FUN_14011db44(uVar1,1,0,DAT_14ca94e18);
  param_1[2] = lVar2;
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dc1544 FUN_147dc1544 body=96 status=ok
// SIG undefined FUN_147dc1544(void)

void FUN_147dc1544(longlong param_1,ulonglong param_2,int param_3)

{
  FUN_14797ca16(*(undefined8 *)(param_1 + 8),param_2,0,0);
  FUN_14797ca16(*(undefined8 *)(param_1 + 8),param_2 & 0xffffffff,0,1);
  FUN_14011d944(*(undefined8 *)(param_1 + 0x10),param_3 * 4);
  FUN_14797cab4(*(undefined8 *)(param_1 + 0x10),param_3 * 2,DAT_14ca94e18,2);
  return;
}



// FUNCTION 147dc15a4 FUN_147dc15a4 body=756 status=ok
// SIG undefined FUN_147dc15a4(void)

undefined8
FUN_147dc15a4(undefined8 param_1,double *param_2,double *param_3,double *param_4,ulonglong *param_5)

{
  double *pdVar1;
  undefined4 *puVar2;
  double dVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double dVar13;
  undefined1 auStack_b8 [32];
  undefined4 *local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double dStack_40;
  ulonglong local_30;
  
  uVar7 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  dVar13 = *param_2;
  dVar3 = param_2[2];
  uVar11 = SUB84(dVar3,0);
  uVar12 = (undefined4)((ulonglong)dVar3 >> 0x20);
  local_30 = uVar7;
  if ((((dVar13 < *param_3) && (*param_3 < dVar3)) &&
      (dVar3 = param_3[1], param_2[1] <= dVar3 && dVar3 != param_2[1])) && (dVar3 < param_2[3])) {
    iVar9 = (int)param_5[1];
    *(uint *)(param_5 + 1) = iVar9 + 1U;
    if (*(uint *)((longlong)param_5 + 0xc) < iVar9 + 1U) {
      FUN_14489624a(param_5,iVar9);
    }
    uVar7 = *param_5;
    dVar13 = param_3[1];
    pdVar1 = (double *)(uVar7 + (longlong)iVar9 * 0x10);
    *pdVar1 = *param_3;
    pdVar1[1] = dVar13;
    dVar13 = *param_2;
    uVar11 = SUB84(param_2[2],0);
    uVar12 = (undefined4)((ulonglong)param_2[2] >> 0x20);
  }
  dVar3 = *param_4;
  if ((dVar13 < dVar3) &&
     (dVar3 <= (double)CONCAT44(uVar12,uVar11) && (double)CONCAT44(uVar12,uVar11) != dVar3)) {
    dVar13 = param_4[1];
    if ((param_2[1] <= dVar13 && dVar13 != param_2[1]) && (dVar13 < param_2[3])) {
      iVar9 = (int)param_5[1];
      *(uint *)(param_5 + 1) = iVar9 + 1U;
      if (*(uint *)((longlong)param_5 + 0xc) < iVar9 + 1U) {
        FUN_14489624a(param_5,iVar9);
      }
      uVar7 = *param_5;
      uVar11 = *(undefined4 *)((longlong)param_4 + 4);
      uVar12 = *(undefined4 *)(param_4 + 1);
      uVar4 = *(undefined4 *)((longlong)param_4 + 0xc);
      puVar2 = (undefined4 *)(uVar7 + (longlong)iVar9 * 0x10);
      *puVar2 = *(undefined4 *)param_4;
      puVar2[1] = uVar11;
      puVar2[2] = uVar12;
      puVar2[3] = uVar4;
    }
  }
  iVar9 = (int)param_5[1];
  uVar10 = (ulonglong)iVar9;
  uVar8 = CONCAT71((int7)(uVar7 >> 8),1);
  if (uVar10 != 2) {
    local_78 = *param_2;
    local_50 = param_2[1];
    local_48 = *param_2;
    dStack_40 = param_2[1];
    local_70 = (param_2[3] - local_50) + local_50;
    local_50 = local_50 + 0.0;
    local_68 = (param_2[2] - local_78) + local_78;
    local_78 = local_78 + 0.0;
    local_98 = &local_88;
    local_60 = local_70;
    local_58 = local_68;
    cVar5 = FUN_1437a9ecd(param_3,param_4);
    if (cVar5 != '\0') {
      *(uint *)(param_5 + 1) = iVar9 + 1U;
      if (*(uint *)((longlong)param_5 + 0xc) < iVar9 + 1U) {
        FUN_14489624a(param_5,iVar9);
      }
      uVar7 = *param_5;
      puVar2 = (undefined4 *)(uVar7 + uVar10 * 0x10);
      *puVar2 = local_88;
      puVar2[1] = uStack_84;
      puVar2[2] = uStack_80;
      puVar2[3] = uStack_7c;
      uVar10 = (ulonglong)(uint)param_5[1];
      uVar8 = CONCAT71((int7)(uVar7 >> 8),1);
      if ((uint)param_5[1] == 2) goto LAB_147dc169e;
    }
    local_98 = &local_88;
    cVar5 = FUN_1437a9ecd(param_3,param_4,&local_58,&local_68);
    if (cVar5 != '\0') {
      uVar6 = (int)uVar10 + 1;
      *(uint *)(param_5 + 1) = uVar6;
      if (*(uint *)((longlong)param_5 + 0xc) < uVar6) {
        FUN_14489624a(param_5,uVar10 & 0xffffffff);
      }
      uVar7 = *param_5;
      puVar2 = (undefined4 *)(uVar7 + (longlong)(int)uVar10 * 0x10);
      *puVar2 = local_88;
      puVar2[1] = uStack_84;
      puVar2[2] = uStack_80;
      puVar2[3] = uStack_7c;
      uVar10 = (ulonglong)(uint)param_5[1];
      uVar8 = CONCAT71((int7)(uVar7 >> 8),1);
      if ((uint)param_5[1] == 2) goto LAB_147dc169e;
    }
    iVar9 = (int)uVar10;
    local_98 = &local_88;
    cVar5 = FUN_1437a9ecd(param_3,param_4,&local_68,&local_78);
    if (cVar5 != '\0') {
      *(uint *)(param_5 + 1) = iVar9 + 1U;
      if (*(uint *)((longlong)param_5 + 0xc) < iVar9 + 1U) {
        FUN_14489624a(param_5,uVar10 & 0xffffffff);
      }
      uVar7 = *param_5;
      puVar2 = (undefined4 *)(uVar7 + (longlong)iVar9 * 0x10);
      *puVar2 = local_88;
      puVar2[1] = uStack_84;
      puVar2[2] = uStack_80;
      puVar2[3] = uStack_7c;
      iVar9 = (int)param_5[1];
      uVar8 = CONCAT71((int7)(uVar7 >> 8),1);
      if (iVar9 == 2) goto LAB_147dc169e;
    }
    local_98 = &local_88;
    cVar5 = FUN_1437a9ecd(param_3,param_4,&local_48,&local_78);
    if (cVar5 != '\0') {
      *(uint *)(param_5 + 1) = iVar9 + 1U;
      if (*(uint *)((longlong)param_5 + 0xc) < iVar9 + 1U) {
        FUN_14489624a(param_5,iVar9);
      }
      uVar7 = *param_5;
      puVar2 = (undefined4 *)(uVar7 + (longlong)iVar9 * 0x10);
      *puVar2 = local_88;
      puVar2[1] = uStack_84;
      puVar2[2] = uStack_80;
      puVar2[3] = uStack_7c;
      uVar8 = CONCAT71((int7)(uVar7 >> 8),1);
      if ((int)param_5[1] == 2) goto LAB_147dc169e;
    }
    uVar8 = 0;
  }
LAB_147dc169e:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dc18a6 FUN_147dc18a6 body=42 status=ok
// SIG undefined FUN_147dc18a6(void)

undefined8 FUN_147dc18a6(void)

{
  FUN_140033559("Runtime\\Engine\\Public\\WorldPartition/HLOD/HLODModifier.h",0x18,
                L"Pure virtual not implemented (%s)",L"UWorldPartitionHLODModifier::CanModifyHLOD");
  return 0;
}



// FUNCTION 147dc18d0 FUN_147dc18d0 body=41 status=ok
// SIG undefined FUN_147dc18d0(void)

void FUN_147dc18d0(void)

{
  FUN_140033559("Runtime\\Engine\\Public\\WorldPartition/HLOD/HLODModifier.h",0x1a,
                L"Pure virtual not implemented (%s)",L"UWorldPartitionHLODModifier::BeginHLODBuild")
  ;
  return;
}



// FUNCTION 147dc18fa FUN_147dc18fa body=41 status=ok
// SIG undefined FUN_147dc18fa(void)

void FUN_147dc18fa(void)

{
  FUN_140033559("Runtime\\Engine\\Public\\WorldPartition/HLOD/HLODModifier.h",0x1b,
                L"Pure virtual not implemented (%s)",L"UWorldPartitionHLODModifier::EndHLODBuild");
  return;
}



// FUNCTION 147dc198c FUN_147dc198c body=100 status=ok
// SIG undefined FUN_147dc198c(void)

undefined1 FUN_147dc198c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3) = lVar2;
      *(undefined4 *)(param_2 + 8 + lVar3) = *(undefined4 *)(param_3 + 8 + lVar3);
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147dc1a18 FUN_147dc1a18 body=59 status=ok
// SIG undefined FUN_147dc1a18(void)

undefined8 FUN_147dc1a18(longlong *param_1)

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



// FUNCTION 147dc1aba FUN_147dc1aba body=352 status=ok
// SIG undefined FUN_147dc1aba(void)

undefined4 FUN_147dc1aba(longlong param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  uint uVar8;
  longlong lVar9;
  undefined4 *in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined1 auStack_d8 [32];
  undefined8 **local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 *local_98;
  undefined8 uStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b8 = &local_98;
  local_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  uVar7 = FUN_147dc15a4();
  if ((char)uVar7 != '\0') {
    local_a8 = *in_stack_00000028;
    uStack_a4 = in_stack_00000028[1];
    uStack_a0 = in_stack_00000028[2];
    uStack_9c = in_stack_00000028[3];
    uVar2 = *local_98;
    uVar3 = local_98[1];
    uVar4 = local_98[2];
    uVar5 = local_98[3];
    lVar9 = (longlong)*(int *)(param_1 + 0xb0);
    uVar8 = *(int *)(param_1 + 0xb0) + 1;
    *(uint *)(param_1 + 0xb0) = uVar8;
    if (*(uint *)(param_1 + 0xb4) < uVar8) {
      FUN_147dc23f6((longlong *)(param_1 + 0xa8));
    }
    lVar6 = *(longlong *)(param_1 + 0xa8);
    puVar1 = (undefined4 *)(lVar6 + lVar9 * 0x48);
    *puVar1 = local_a8;
    puVar1[1] = uStack_a4;
    puVar1[2] = uStack_a0;
    puVar1[3] = uStack_9c;
    *(undefined8 *)(lVar6 + 0x10 + lVar9 * 0x48) = uVar2;
    *(undefined8 *)(lVar6 + 0x18 + lVar9 * 0x48) = uVar3;
    *(undefined8 *)(lVar6 + 0x20 + lVar9 * 0x48) = 0;
    *(undefined8 *)(lVar6 + 0x28 + lVar9 * 0x48) = uVar4;
    *(undefined8 *)(lVar6 + 0x30 + lVar9 * 0x48) = uVar5;
    *(undefined8 *)(lVar6 + 0x38 + lVar9 * 0x48) = 0;
    *(undefined4 *)(lVar6 + 0x40 + lVar9 * 0x48) = in_stack_00000030;
  }
  if (local_98 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_80 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dc1c1c FUN_147dc1c1c body=188 status=ok
// SIG undefined FUN_147dc1c1c(void)

undefined1
FUN_147dc1c1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  FUN_147dc1aba();
  FUN_147dc1aba(param_1,param_2,param_4,param_5,param_7,param_8);
  FUN_147dc1aba(param_1,param_2,param_5,param_6,param_7,param_8);
  FUN_147dc1aba(param_1,param_2,param_3,param_6,param_7,param_8);
  return 1;
}



// FUNCTION 147dc1cd8 FUN_147dc1cd8 body=179 status=ok
// SIG undefined FUN_147dc1cd8(void)

undefined1 * FUN_147dc1cd8(undefined8 *param_1,undefined1 *param_2)

{
  char cVar1;
  char cVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [4];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = *(char *)((longlong)param_1 + 0x5d);
  cVar2 = *(char *)((longlong)param_1 + 0x5e);
  if (*(char *)((longlong)param_1 + 0x5f) == '\0' &&
      (cVar2 == '\0' && (cVar1 == '\0' && (*(uint *)((longlong)param_1 + 0x5c) & 0xff) == 0))) {
    FUN_140e70c9e(local_20,*param_1);
    local_1c = local_1c * 0xbb38435 + 0x3619636b;
    FUN_145c9fdbc(param_2,(float)(local_1c >> 9 | 0x3f800000) + -1.0);
  }
  else {
    *param_2 = (char)*(uint *)((longlong)param_1 + 0x5c);
    param_2[1] = cVar1;
    param_2[2] = cVar2;
    param_2[3] = 0xff;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dc1d8c FUN_147dc1d8c body=419 status=ok
// SIG undefined FUN_147dc1d8c(void)

ulonglong FUN_147dc1d8c(undefined8 *param_1,longlong param_2,double *param_3,undefined8 *param_4)

{
  char cVar1;
  double *pdVar2;
  double *unaff_RBX;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_88 [36];
  uint local_64;
  undefined8 local_60;
  undefined8 local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((&DAT_14ab1ee60)[*(byte *)(param_2 + 0x40)] == '\x01') {
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    if ((longlong)*(int *)(param_2 + 0x38) != 0) {
      pdVar2 = *(double **)(param_2 + 0x30);
      lVar5 = (longlong)*(int *)(param_2 + 0x38) * 0x48;
      do {
        if (((*pdVar2 < param_3[3] || *pdVar2 == param_3[3]) &&
            (*param_3 < pdVar2[3] || *param_3 == pdVar2[3])) &&
           ((pdVar2[1] < param_3[4] || pdVar2[1] == param_3[4] &&
            (((param_3[1] < pdVar2[4] || param_3[1] == pdVar2[4] &&
              (pdVar2[2] < param_3[5] || pdVar2[2] == param_3[5])) &&
             (param_3[2] < pdVar2[5] || param_3[2] == pdVar2[5])))))) {
          local_60 = *param_4;
          local_58 = param_4[1];
          cVar1 = FUN_147dc1d8c(param_1,pdVar2,param_3,&local_60);
          if (cVar1 == '\0') goto LAB_147dc1e6d;
        }
        pdVar2 = pdVar2 + 9;
        lVar5 = lVar5 + -0x48;
      } while (lVar5 != 0);
    }
  }
  else {
    pdVar2 = (double *)
             (**(code **)(*(longlong *)*param_1 + 0x18))
                       ((longlong *)*param_1,*(undefined4 *)(param_2 + 0x30),&local_64);
    iVar4 = *(int *)(param_2 + 0x34);
    if (iVar4 != 0) {
      iVar6 = *(int *)(param_2 + 0x30);
      unaff_RBX = pdVar2;
      do {
        if ((((*unaff_RBX < param_3[3] || *unaff_RBX == param_3[3]) &&
             (*param_3 < unaff_RBX[3] || *param_3 == unaff_RBX[3])) &&
            (unaff_RBX[1] < param_3[4] || unaff_RBX[1] == param_3[4])) &&
           (((param_3[1] < unaff_RBX[4] || param_3[1] == unaff_RBX[4] &&
             (unaff_RBX[2] < param_3[5] || unaff_RBX[2] == param_3[5])) &&
            ((param_3[2] < unaff_RBX[5] || param_3[2] == unaff_RBX[5] &&
             (local_4c = iVar6, cVar1 = (*(code *)*param_4)(param_4[1],&local_4c), cVar1 == '\0'))))
           )) goto LAB_147dc1e6d;
        unaff_RBX = (double *)((longlong)unaff_RBX + (ulonglong)local_64);
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  }
LAB_147dc1f06:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
LAB_147dc1e6d:
  uVar3 = 0;
  goto LAB_147dc1f06;
}



// FUNCTION 147dc1f30 FUN_147dc1f30 body=358 status=ok
// SIG undefined FUN_147dc1f30(void)

ulonglong FUN_147dc1f30(undefined8 *param_1,longlong param_2,double *param_3,undefined8 *param_4)

{
  char cVar1;
  double *pdVar2;
  double *unaff_RBX;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_88 [36];
  uint local_64;
  undefined8 local_60;
  undefined8 local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((&DAT_14ab1ee60)[*(byte *)(param_2 + 0x30)] == '\x01') {
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    if ((longlong)*(int *)(param_2 + 0x28) != 0) {
      pdVar2 = *(double **)(param_2 + 0x20);
      lVar5 = (longlong)*(int *)(param_2 + 0x28) * 0x38;
      do {
        if (((*pdVar2 < param_3[2] || *pdVar2 == param_3[2]) &&
            (*param_3 < pdVar2[2] || *param_3 == pdVar2[2])) &&
           ((pdVar2[1] < param_3[3] || pdVar2[1] == param_3[3] &&
            (param_3[1] < pdVar2[3] || param_3[1] == pdVar2[3])))) {
          local_60 = *param_4;
          local_58 = param_4[1];
          cVar1 = FUN_147dc1f30(param_1,pdVar2,param_3,&local_60);
          if (cVar1 == '\0') goto LAB_147dc1ff3;
        }
        pdVar2 = pdVar2 + 7;
        lVar5 = lVar5 + -0x38;
      } while (lVar5 != 0);
    }
  }
  else {
    pdVar2 = (double *)
             (**(code **)(*(longlong *)*param_1 + 0x18))
                       ((longlong *)*param_1,*(undefined4 *)(param_2 + 0x20),&local_64);
    iVar4 = *(int *)(param_2 + 0x24);
    if (iVar4 != 0) {
      iVar6 = *(int *)(param_2 + 0x20);
      unaff_RBX = pdVar2;
      do {
        if ((((*unaff_RBX < param_3[2] || *unaff_RBX == param_3[2]) &&
             (*param_3 < unaff_RBX[2] || *param_3 == unaff_RBX[2])) &&
            (unaff_RBX[1] < param_3[3] || unaff_RBX[1] == param_3[3])) &&
           ((param_3[1] < unaff_RBX[3] || param_3[1] == unaff_RBX[3] &&
            (local_4c = iVar6, cVar1 = (*(code *)*param_4)(param_4[1],&local_4c), cVar1 == '\0'))))
        goto LAB_147dc1ff3;
        unaff_RBX = (double *)((longlong)unaff_RBX + (ulonglong)local_64);
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  }
LAB_147dc206d:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
LAB_147dc1ff3:
  uVar3 = 0;
  goto LAB_147dc206d;
}



// FUNCTION 147dc2098 FUN_147dc2098 body=712 status=ok
// SIG undefined FUN_147dc2098(void)

ulonglong FUN_147dc2098(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                       undefined8 *param_5,undefined4 *param_6,undefined8 *param_7)

{
  double *pdVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  int local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  double dStack_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  char local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_b8 = *param_3;
  uStack_b0 = param_3[1];
  local_a8 = *param_4;
  uStack_a0 = param_4[1];
  local_98 = *param_5;
  uStack_90 = param_5[1];
  local_88 = *param_6;
  uStack_84 = param_6[1];
  uStack_80 = param_6[2];
  uStack_7c = param_6[3];
  local_118 = (undefined8 *)0x0;
  local_110 = 4;
  FUN_144721d4c(&local_118,4);
  *(undefined4 *)(local_118 + 6) = local_88;
  *(undefined4 *)((longlong)local_118 + 0x34) = uStack_84;
  *(undefined4 *)(local_118 + 7) = uStack_80;
  *(undefined4 *)((longlong)local_118 + 0x3c) = uStack_7c;
  local_118[4] = local_98;
  local_118[5] = uStack_90;
  local_118[2] = local_a8;
  local_118[3] = uStack_a0;
  *local_118 = local_b8;
  local_118[1] = uStack_b0;
  local_108 = 0.0;
  uStack_100 = 0.0;
  local_f8 = 0.0;
  dStack_f0 = 0.0;
  local_e8 = 0;
  if ((longlong)local_110 != 0) {
    lVar8 = 0;
    bVar9 = false;
    do {
      if (bVar9) {
        dVar4 = *(double *)((longlong)local_118 + lVar8);
        if (dVar4 <= local_108) {
          local_108 = dVar4;
        }
        dVar5 = *(double *)((longlong)local_118 + lVar8 + 8);
        if (dVar5 <= uStack_100) {
          uStack_100 = dVar5;
        }
        if (local_f8 <= dVar4) {
          local_f8 = dVar4;
        }
        uVar10 = SUB84(dStack_f0,0);
        uVar11 = (undefined4)((ulonglong)dStack_f0 >> 0x20);
        if (dStack_f0 <= dVar5) {
          uVar10 = SUB84(dVar5,0);
          uVar11 = (undefined4)((ulonglong)dVar5 >> 0x20);
        }
        dStack_f0 = (double)CONCAT44(uVar11,uVar10);
      }
      else {
        pdVar1 = (double *)((longlong)local_118 + lVar8);
        local_f8 = *pdVar1;
        dStack_f0 = pdVar1[1];
        local_108 = *pdVar1;
        uStack_100 = pdVar1[1];
        local_e8 = 1;
      }
      lVar8 = lVar8 + 0x10;
      bVar9 = true;
    } while ((longlong)local_110 * 0x10 != lVar8);
  }
  FUN_140b34bd8(param_2,&local_e0,&local_108);
  if (local_118 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_c0 == '\x01') {
    local_b8 = *param_7;
    uStack_b0 = param_7[1];
    local_a8 = local_e0;
    uStack_a0 = uStack_d8;
    local_108 = (double)CONCAT44(uStack_cc,local_d0);
    uStack_100 = (double)CONCAT44(uStack_c4,uStack_c8);
    iVar6 = *(int *)(param_1 + 0xc0);
    *(uint *)(param_1 + 0xc0) = iVar6 + 1U;
    if (*(uint *)(param_1 + 0xc4) < iVar6 + 1U) {
      FUN_147dc2362((longlong *)(param_1 + 0xb8),iVar6);
    }
    lVar8 = *(longlong *)(param_1 + 0xb8);
    lVar7 = (longlong)iVar6 * 0x50;
    puVar2 = (undefined8 *)(lVar8 + 0x10 + lVar7);
    *puVar2 = local_a8;
    puVar2[1] = uStack_a0;
    *(undefined8 *)(lVar8 + lVar7) = local_b8;
    ((undefined8 *)(lVar8 + lVar7))[1] = uStack_b0;
    *(ulonglong *)(lVar8 + 0x20 + lVar7) = CONCAT44(uStack_cc,local_d0);
    *(undefined8 *)(lVar8 + 0x28 + lVar7) = uStack_d8;
    puVar3 = (undefined4 *)(lVar8 + 0x30 + lVar7);
    *puVar3 = (undefined4)local_108;
    puVar3[1] = local_108._4_4_;
    puVar3[2] = (undefined4)uStack_100;
    puVar3[3] = uStack_100._4_4_;
    *(undefined8 *)(lVar8 + 0x40 + lVar7) = local_e0;
    *(ulonglong *)(lVar8 + 0x48 + lVar7) = CONCAT44(uStack_c4,uStack_c8);
  }
  if ((local_70 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)&local_118 >> 8),local_c0) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dc2362 FUN_147dc2362 body=147 status=ok
// SIG undefined FUN_147dc2362(void)

void FUN_147dc2362(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x50,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147dc23f6 FUN_147dc23f6 body=147 status=ok
// SIG undefined FUN_147dc23f6(void)

void FUN_147dc23f6(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x48,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x48)) {
      uVar5 = uVar4 / 0x48 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x48,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147dc248a FUN_147dc248a body=98 status=ok
// SIG undefined FUN_147dc248a(void)

void FUN_147dc248a(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 5,8);
    iVar1 = (int)(uVar2 >> 5);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x20,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147dc24ec FUN_147dc24ec body=126 status=ok
// SIG undefined FUN_147dc24ec(void)

void FUN_147dc24ec(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  if (param_3 != 0) {
    puVar5 = (undefined4 *)(param_2 + 0x10);
    do {
      *param_1 = 0;
      iVar1 = puVar5[-2];
      _Src = *(void **)(puVar5 + -4);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
      }
      uVar2 = puVar5[1];
      uVar3 = puVar5[2];
      uVar4 = puVar5[3];
      *(undefined4 *)(param_1 + 2) = *puVar5;
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
      *(undefined4 *)(param_1 + 3) = uVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
      param_1 = param_1 + 4;
      puVar5 = puVar5 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147dc256a FUN_147dc256a body=132 status=ok
// SIG undefined FUN_147dc256a(void)

void FUN_147dc256a(longlong param_1,int param_2)

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



// FUNCTION 147dc25f0 FUN_147dc25f0 body=353 status=ok
// SIG undefined FUN_147dc25f0(void)

undefined4 *
FUN_147dc25f0(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147dc2752(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar8 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar5 >> 4);
  local_58 = param_4;
  cVar3 = FUN_147dc2838(param_1,uVar8,local_40);
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)(local_40 + 2) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
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
      FUN_147dc295c(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dc2752 FUN_147dc2752 body=230 status=ok
// SIG undefined FUN_147dc2752(void)

int * FUN_147dc2752(longlong *param_1,int *param_2)

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



// FUNCTION 147dc2838 FUN_147dc2838 body=154 status=ok
// SIG undefined FUN_147dc2838(void)

void FUN_147dc2838(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  longlong lVar1;
  undefined1 uVar2;
  longlong *plVar3;
  int iVar4;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        plVar3 = (longlong *)(*param_1 + (longlong)iVar4 * 0x14);
        if (*plVar3 == *param_3) {
          lVar1 = *param_3;
          *(int *)(plVar3 + 1) = (int)param_3[1];
          *plVar3 = lVar1;
          FUN_147dc28d2(param_1,*param_4,1);
          *param_4 = iVar4;
          uVar2 = 1;
          goto LAB_147dc28a2;
        }
        iVar4 = *(int *)((longlong)plVar3 + 0xc);
      } while (iVar4 != -1);
    }
  }
  uVar2 = 0;
LAB_147dc28a2:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar2;
  }
  return;
}



// FUNCTION 147dc28d2 FUN_147dc28d2 body=138 status=ok
// SIG undefined FUN_147dc28d2(void)

void FUN_147dc28d2(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x14 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x14) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147dc295c FUN_147dc295c body=473 status=ok
// SIG undefined FUN_147dc295c(void)

void FUN_147dc295c(longlong *param_1)

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



// FUNCTION 147dc2b36 FUN_147dc2b36 body=138 status=ok
// SIG undefined FUN_147dc2b36(void)

void FUN_147dc2b36(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147dc2bc0 FUN_147dc2bc0 body=236 status=ok
// SIG undefined FUN_147dc2bc0(void)

undefined8 FUN_147dc2bc0(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  puVar1 = (undefined8 *)param_1[1];
  if ((code *)*param_1 == FUN_147dc2cac) {
    pdVar2 = (double *)*puVar1;
    dVar3 = pdVar2[2];
    dVar7 = (double)((longlong)pdVar2[3] * (longlong)dVar3) * 0.5;
    dVar8 = (double)(param_2[1] * (longlong)dVar3) + (pdVar2[1] - dVar7);
    dVar6 = (double)((longlong)dVar3 * *param_2) + (*pdVar2 - dVar7);
    dVar5 = dVar8 + (double)(longlong)dVar3;
    dVar9 = (double)(longlong)dVar3 + dVar6;
    dVar3 = *(double *)puVar1[2];
    dVar7 = ((double *)puVar1[2])[1];
    dVar4 = dVar7;
    if (dVar5 <= dVar7) {
      dVar4 = dVar5;
    }
    dVar5 = dVar3;
    if (dVar9 <= dVar3) {
      dVar5 = dVar9;
    }
    if (dVar8 <= dVar4) {
      dVar8 = dVar4;
    }
    if (dVar6 <= dVar5) {
      dVar6 = dVar5;
    }
    if ((dVar3 - dVar6) * (dVar3 - dVar6) + (dVar7 - dVar8) * (dVar7 - dVar8) < (double)puVar1[1]) {
      (**(code **)puVar1[3])(((undefined8 *)puVar1[3])[1]);
      *(int *)puVar1[4] = *(int *)puVar1[4] + 1;
    }
  }
  else {
    (*(code *)*param_1)(puVar1);
  }
  return 1;
}



// FUNCTION 147dc2cac FUN_147dc2cac body=206 status=ok
// SIG undefined FUN_147dc2cac(void)

void FUN_147dc2cac(undefined8 *param_1,longlong *param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  pdVar1 = (double *)*param_1;
  dVar2 = pdVar1[2];
  dVar6 = (double)((longlong)pdVar1[3] * (longlong)dVar2) * 0.5;
  dVar7 = (double)(param_2[1] * (longlong)dVar2) + (pdVar1[1] - dVar6);
  dVar5 = (double)((longlong)dVar2 * *param_2) + (*pdVar1 - dVar6);
  dVar4 = dVar7 + (double)(longlong)dVar2;
  dVar8 = (double)(longlong)dVar2 + dVar5;
  dVar2 = *(double *)param_1[2];
  dVar6 = ((double *)param_1[2])[1];
  dVar3 = dVar6;
  if (dVar4 <= dVar6) {
    dVar3 = dVar4;
  }
  dVar4 = dVar2;
  if (dVar8 <= dVar2) {
    dVar4 = dVar8;
  }
  if (dVar7 <= dVar3) {
    dVar7 = dVar3;
  }
  if (dVar5 <= dVar4) {
    dVar5 = dVar4;
  }
  if ((dVar2 - dVar5) * (dVar2 - dVar5) + (dVar6 - dVar7) * (dVar6 - dVar7) < (double)param_1[1]) {
    (**(code **)param_1[3])(((undefined8 *)param_1[3])[1]);
    *(int *)param_1[4] = *(int *)param_1[4] + 1;
  }
  return;
}



// FUNCTION 147dc2dc2 FUN_147dc2dc2 body=59 status=ok
// SIG undefined FUN_147dc2dc2(void)

undefined8 FUN_147dc2dc2(longlong *param_1)

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



// FUNCTION 147dc2eac FUN_147dc2eac body=59 status=ok
// SIG undefined FUN_147dc2eac(void)

undefined8 FUN_147dc2eac(longlong *param_1)

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



// FUNCTION 147dc2f4e FUN_147dc2f4e body=31 status=ok
// SIG undefined FUN_147dc2f4e(void)

undefined8 FUN_147dc2f4e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147dc2f88 FUN_147dc2f88 body=93 status=ok
// SIG undefined FUN_147dc2f88(void)

void FUN_147dc2f88(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab18ff0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab1f470;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147dc2fe6 FUN_147dc2fe6 body=93 status=ok
// SIG undefined FUN_147dc2fe6(void)

void FUN_147dc2fe6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab18ff0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab1f470;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147dc3044 FUN_147dc3044 body=126 status=ok
// SIG undefined FUN_147dc3044(void)

void FUN_147dc3044(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ab18ff0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab1f470;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147dc30b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147dc30c2 FUN_147dc30c2 body=40 status=ok
// SIG undefined FUN_147dc30c2(void)

void FUN_147dc30c2(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147dc30e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 147dc30ea FUN_147dc30ea body=122 status=ok
// SIG undefined FUN_147dc30ea(void)

void FUN_147dc30ea(longlong *param_1,int param_2)

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



// FUNCTION 147dc3164 FUN_147dc3164 body=156 status=ok
// SIG undefined FUN_147dc3164(void)

void FUN_147dc3164(longlong *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = FUN_1447addd0(param_2,0x10);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2 * 0x30;
        if ((((*(int *)(lVar1 + lVar4) == *param_2) && (*(int *)(lVar1 + 4 + lVar4) == param_2[1]))
            && (*(int *)(lVar1 + 8 + lVar4) == param_2[2])) &&
           (*(int *)(lVar1 + 0xc + lVar4) == param_2[3])) {
          FUN_147dc3200(param_1);
          return;
        }
        iVar2 = *(int *)(lVar4 + lVar1 + 0x28);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 147dc3200 FUN_147dc3200 body=95 status=ok
// SIG undefined FUN_147dc3200(void)

void FUN_147dc3200(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x2c + (longlong)param_2 * 0x30);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x28 + lVar5 * 0x30);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x30 + 0x28);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x30 + 0x28);
  FUN_147dc3260();
  return;
}



// FUNCTION 147dc3260 FUN_147dc3260 body=56 status=ok
// SIG undefined FUN_147dc3260(void)

void FUN_147dc3260(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + 0x18 + (longlong)param_2 * 0x30) != 0) {
    FUN_1400020a8();
  }
  FUN_147dc30ea(param_1,param_2);
  return;
}



// FUNCTION 147dc3298 FUN_147dc3298 body=122 status=ok
// SIG undefined FUN_147dc3298(void)

void FUN_147dc3298(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x50) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50 + 4) = uVar4;
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



// FUNCTION 147dc3312 FUN_147dc3312 body=114 status=ok
// SIG undefined FUN_147dc3312(void)

void FUN_147dc3312(longlong *param_1,int param_2)

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



// FUNCTION 147dc3384 FUN_147dc3384 body=114 status=ok
// SIG undefined FUN_147dc3384(void)

void FUN_147dc3384(longlong *param_1,int param_2)

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



// FUNCTION 147dc33f6 FUN_147dc33f6 body=95 status=ok
// SIG undefined FUN_147dc33f6(void)

void FUN_147dc33f6(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 147dc3456 FUN_147dc3456 body=132 status=ok
// SIG undefined FUN_147dc3456(void)

void FUN_147dc3456(longlong param_1,int param_2)

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



// FUNCTION 147dc34dc FUN_147dc34dc body=75 status=ok
// SIG undefined FUN_147dc34dc(void)

undefined8 * FUN_147dc34dc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ab1f600;
  (*(code *)(&PTR_FUN_14ab1f630)[*(byte *)(param_1 + 0xc)])(param_1 + 10);
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147dc354c FUN_147dc354c body=31 status=ok
// SIG undefined FUN_147dc354c(void)

int FUN_147dc354c(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x14);
  iVar2 = FUN_147dc361a(param_1 + 0x18);
  return iVar2 + iVar1 * 0x40 + 0x68;
}



// FUNCTION 147dc356c FUN_147dc356c body=75 status=ok
// SIG undefined FUN_147dc356c(void)

undefined8 * FUN_147dc356c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ab1f600;
  (*(code *)(&PTR_FUN_14ab1f630)[*(byte *)(param_1 + 0xc)])(param_1 + 10);
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147dc35b8 FUN_147dc35b8 body=44 status=ok
// SIG undefined FUN_147dc35b8(void)

void FUN_147dc35b8(longlong *param_1)

{
  FUN_147dc35e5(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147dc35e5 FUN_147dc35e5 body=53 status=ok
// SIG undefined FUN_147dc35e5(void)

void FUN_147dc35e5(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x30;
    do {
      (*(code *)(&PTR_FUN_14ab1f630)[*(byte *)(param_1 + 0x10)])(param_1);
      param_1 = param_1 + 0x48;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147dc361a FUN_147dc361a body=146 status=ok
// SIG undefined FUN_147dc361a(void)

undefined4 FUN_147dc361a(longlong param_1)

{
  undefined4 uVar1;
  undefined ***pppuVar2;
  undefined1 auStack_78 [32];
  undefined1 *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  undefined1 **local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_14ab1f640;
  local_28 = local_58;
  local_58[0] = &LAB_147dc36ae;
  local_30 = param_1;
  uVar1 = FUN_147dc3702(&local_30,param_1 + 8,0x50);
  if (local_58[0] != (undefined1 *)0x0) {
    pppuVar2 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar2 = &local_38;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dc36d8 FUN_147dc36d8 body=12 status=ok
// SIG undefined FUN_147dc36d8(void)

void FUN_147dc36d8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000147dc36e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 147dc36e4 FUN_147dc36e4 body=29 status=ok
// SIG undefined FUN_147dc36e4(void)

undefined8 FUN_147dc36e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147dc3702 FUN_147dc3702 body=203 status=ok
// SIG undefined FUN_147dc3702(void)

int FUN_147dc3702(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((&DAT_14ab1ee60)[*(byte *)(param_2 + 0x40)] == '\x01') {
    param_3 = param_3 + *(int *)(param_2 + 0x3c) * 0x48;
    if ((longlong)*(int *)(param_2 + 0x38) != 0) {
      lVar7 = *(longlong *)(param_2 + 0x30);
      lVar6 = (longlong)*(int *)(param_2 + 0x38) * 0x48;
      do {
        puVar1 = *(undefined8 **)(param_1 + 8);
        local_44 = 0x48;
        pcVar2 = (code *)*puVar1;
        plVar5 = puVar1 + 4;
        if ((longlong *)puVar1[2] != (longlong *)0x0) {
          plVar5 = (longlong *)puVar1[2];
        }
        local_50 = lVar7;
        uVar4 = (**(code **)(*plVar5 + 8))();
        iVar3 = (*pcVar2)(uVar4,&local_50,&local_44);
        param_3 = param_3 + iVar3;
        lVar7 = lVar7 + 0x48;
        lVar6 = lVar6 + -0x48;
      } while (lVar6 != 0);
    }
  }
  else {
    param_3 = param_3 + 8;
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_3;
}



// FUNCTION 147dc37ce FUN_147dc37ce body=132 status=ok
// SIG undefined FUN_147dc37ce(void)

void FUN_147dc37ce(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147dc3854 FUN_147dc3854 body=298 status=ok
// SIG undefined FUN_147dc3854(void)

void FUN_147dc3854(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_98 [44];
  int local_6c;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  undefined1 local_38;
  double *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_30 = &local_68;
  local_38 = 0;
  lVar4 = *(longlong *)(param_1 + 8);
  if ((longlong)*(int *)(param_1 + 0x10) == 0) {
    uVar3 = 0;
    dVar7 = NAN;
    dVar8 = NAN;
    dVar6 = NAN;
  }
  else {
    lVar5 = (longlong)*(int *)(param_1 + 0x10) << 6;
    do {
      FUN_147dc3f8a(&local_30,lVar4);
      lVar4 = lVar4 + 0x40;
      lVar5 = lVar5 + -0x40;
    } while (lVar5 != 0);
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    lVar4 = *(longlong *)(param_1 + 8);
    dVar7 = (local_40 - local_58) * 0.5;
    dVar8 = (local_48 - local_60) * 0.5;
    dVar6 = (local_50 - local_68) * 0.5;
  }
  if (dVar6 <= dVar8) {
    dVar6 = dVar8;
  }
  if (dVar6 <= dVar7) {
    dVar6 = dVar7;
  }
  iVar2 = -((int)ROUND(-0.5 - (dVar6 * 1.52587890625e-05 + dVar6 * 1.52587890625e-05)) >> 1);
  uVar1 = (ulonglong)(iVar2 + -1 + (uint)(iVar2 == 0)) * 2 + 1;
  lVar5 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
    }
  }
  local_6c = ((uint)lVar5 ^ 0xffffffc0) + 0x41;
  local_30 = (double *)&local_6c;
  FUN_147dc401e(lVar4,uVar3);
  FUN_147dc3980(param_1 + 0x18);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dc3980 FUN_147dc3980 body=1545 status=ok
// SIG undefined FUN_147dc3980(void)

void FUN_147dc3980(undefined8 *param_1)

{
  longlong *plVar1;
  double *pdVar2;
  undefined8 *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  char cVar10;
  byte bVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  double *pdVar15;
  ulonglong uVar16;
  char cVar17;
  double *pdVar18;
  int iVar19;
  undefined8 *puVar20;
  longlong lVar21;
  double *pdVar22;
  undefined8 *puVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined1 auStack_128 [32];
  double *local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  ulonglong local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  iVar13 = (**(code **)(*(longlong *)*param_1 + 8))();
  if (iVar13 != 0) {
    local_108 = (double *)0x0;
    uStack_100 = 0;
    iVar13 = (**(code **)(*(longlong *)*param_1 + 8))();
    iVar19 = 0;
    if (iVar13 < 1) {
      uVar26 = 0;
      uVar28 = 0;
      uVar31 = 0;
      uVar33 = 0;
      uVar36 = 0;
      uVar39 = 0;
      uVar25 = 0;
      uVar34 = 0;
      uVar37 = 0;
      uVar40 = 0;
      uVar24 = 0;
      uVar29 = 0;
      pdVar18 = (double *)0x0;
    }
    else {
      uVar24 = 0;
      uVar29 = 0;
      pdVar18 = (double *)0x0;
      uVar37 = 0;
      uVar40 = 0;
      uVar25 = 0;
      uVar34 = 0;
      uVar36 = 0;
      uVar39 = 0;
      uVar31 = 0;
      uVar33 = 0;
      uVar26 = 0;
      uVar28 = 0;
      cVar17 = '\0';
      do {
        pdVar15 = (double *)(**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,iVar19)
        ;
        uVar16 = uStack_100;
        if (pdVar18 == (double *)0x0) {
LAB_147dc3b9e:
          lVar21 = (longlong)(int)uStack_100;
          uVar14 = (int)uStack_100 + 1;
          uStack_100 = CONCAT44(uStack_100._4_4_,uVar14);
          if (uStack_100._4_4_ < uVar14) {
            FUN_147dc4bda(&local_108,uVar16 & 0xffffffff);
          }
          pdVar18 = local_108 + lVar21 * 9;
          pdVar2 = local_108 + lVar21 * 9;
          pdVar22 = pdVar2 + 6;
          uVar14 = 0;
          pdVar2[8] = 0.0;
          *pdVar22 = 0.0;
          pdVar2[7] = 0.0;
          pdVar2[4] = 0.0;
          pdVar2[5] = 0.0;
          pdVar2[2] = 0.0;
          pdVar2[3] = 0.0;
          *pdVar2 = 0.0;
          pdVar2[1] = 0.0;
          FUN_147dc35b8(pdVar22);
          *pdVar22 = 0.0;
          *(undefined1 *)(pdVar2 + 8) = 1;
        }
        else {
          uVar14 = *(uint *)((longlong)pdVar18 + 0x34);
          if (0x3f < uVar14) {
            *pdVar18 = (double)CONCAT44(uVar34,uVar25);
            pdVar18[1] = (double)CONCAT44(uVar40,uVar37);
            pdVar18[2] = (double)CONCAT44(uVar29,uVar24);
            pdVar18[3] = (double)CONCAT44(uVar28,uVar26);
            pdVar18[4] = (double)CONCAT44(uVar33,uVar31);
            pdVar18[5] = (double)CONCAT44(uVar39,uVar36);
            uVar26 = (undefined4)DAT_14c8464e0;
            uVar28 = (undefined4)((ulonglong)DAT_14c8464e0 >> 0x20);
            uVar31 = (undefined4)DAT_14c8464e8;
            uVar33 = (undefined4)((ulonglong)DAT_14c8464e8 >> 0x20);
            cVar17 = '\0';
            uVar36 = (undefined4)DAT_14c8464f0;
            uVar39 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
            uVar24 = uVar36;
            uVar29 = uVar39;
            uVar25 = uVar26;
            uVar34 = uVar28;
            uVar37 = uVar31;
            uVar40 = uVar33;
            goto LAB_147dc3b9e;
          }
        }
        cVar10 = *(char *)(pdVar15 + 6);
        if (cVar10 == '\0' || cVar17 == '\0') {
          if (cVar10 != '\0') {
            uVar25 = SUB84(*pdVar15,0);
            uVar34 = (undefined4)((ulonglong)*pdVar15 >> 0x20);
            uVar37 = SUB84(pdVar15[1],0);
            uVar40 = (undefined4)((ulonglong)pdVar15[1] >> 0x20);
            uVar24 = SUB84(pdVar15[2],0);
            uVar29 = (undefined4)((ulonglong)pdVar15[2] >> 0x20);
            uVar26 = SUB84(pdVar15[3],0);
            uVar28 = (undefined4)((ulonglong)pdVar15[3] >> 0x20);
            uVar31 = SUB84(pdVar15[4],0);
            uVar33 = (undefined4)((ulonglong)pdVar15[4] >> 0x20);
            uVar36 = SUB84(pdVar15[5],0);
            uVar39 = (undefined4)((ulonglong)pdVar15[5] >> 0x20);
            cVar17 = cVar10;
          }
        }
        else {
          dVar4 = *pdVar15;
          if (dVar4 <= (double)CONCAT44(uVar34,uVar25)) {
            uVar25 = SUB84(dVar4,0);
            uVar34 = (undefined4)((ulonglong)dVar4 >> 0x20);
          }
          dVar4 = pdVar15[1];
          if (dVar4 <= (double)CONCAT44(uVar40,uVar37)) {
            uVar37 = SUB84(dVar4,0);
            uVar40 = (undefined4)((ulonglong)dVar4 >> 0x20);
          }
          dVar4 = pdVar15[2];
          if (dVar4 <= (double)CONCAT44(uVar29,uVar24)) {
            uVar24 = SUB84(dVar4,0);
            uVar29 = (undefined4)((ulonglong)dVar4 >> 0x20);
          }
          dVar4 = pdVar15[3];
          if ((double)CONCAT44(uVar28,uVar26) <= dVar4) {
            uVar26 = SUB84(dVar4,0);
            uVar28 = (undefined4)((ulonglong)dVar4 >> 0x20);
          }
          dVar4 = pdVar15[4];
          if ((double)CONCAT44(uVar33,uVar31) <= dVar4) {
            uVar31 = SUB84(dVar4,0);
            uVar33 = (undefined4)((ulonglong)dVar4 >> 0x20);
          }
          dVar4 = pdVar15[5];
          if ((double)CONCAT44(uVar39,uVar36) <= dVar4) {
            uVar36 = SUB84(dVar4,0);
            uVar39 = (undefined4)((ulonglong)dVar4 >> 0x20);
          }
        }
        if (uVar14 == 0) {
          *(int *)(pdVar18 + 6) = iVar19;
        }
        *(uint *)((longlong)pdVar18 + 0x34) = uVar14 + 1;
        iVar19 = iVar19 + 1;
        iVar13 = (**(code **)(*(longlong *)*param_1 + 8))();
      } while (iVar19 < iVar13);
    }
    *pdVar18 = (double)CONCAT44(uVar34,uVar25);
    pdVar18[1] = (double)CONCAT44(uVar40,uVar37);
    pdVar18[2] = (double)CONCAT44(uVar29,uVar24);
    pdVar18[3] = (double)CONCAT44(uVar28,uVar26);
    pdVar18[4] = (double)CONCAT44(uVar33,uVar31);
    pdVar18[5] = (double)CONCAT44(uVar39,uVar36);
    uVar16 = uStack_100 & 0xffffffff;
    if (1 < (int)uStack_100) {
      uVar24 = (undefined4)DAT_14c8464f0;
      uVar29 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      uVar25 = (undefined4)DAT_14c8464e8;
      uVar34 = (undefined4)((ulonglong)DAT_14c8464e8 >> 0x20);
      uVar37 = (undefined4)DAT_14c8464e0;
      uVar40 = (undefined4)((ulonglong)DAT_14c8464e0 >> 0x20);
      do {
        local_d8 = 0;
        uStack_d0 = 0;
        pdVar15 = local_108 + uVar16 * 9;
        puVar20 = (undefined8 *)0x0;
        bVar12 = false;
        pdVar18 = local_108;
        uVar26 = uVar24;
        uVar28 = uVar29;
        uVar31 = uVar25;
        uVar33 = uVar34;
        uVar36 = uVar37;
        uVar39 = uVar40;
        do {
          uVar42 = uVar26;
          uVar44 = uVar28;
          uVar45 = uVar31;
          uVar46 = uVar33;
          uVar47 = uVar36;
          uVar48 = uVar39;
          if (puVar20 == (undefined8 *)0x0) {
LAB_147dc3def:
            uVar16 = uStack_d0;
            lVar21 = (longlong)(int)uStack_d0;
            uVar14 = (int)uStack_d0 + 1;
            uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar14);
            if (uStack_d0._4_4_ < uVar14) {
              FUN_147dc4bda(&local_d8,uVar16 & 0xffffffff);
            }
            puVar20 = (undefined8 *)(local_d8 + lVar21 * 0x48);
            puVar3 = (undefined8 *)(local_d8 + lVar21 * 0x48);
            puVar23 = puVar3 + 6;
            *puVar23 = 0;
            puVar3[7] = 0;
            puVar3[4] = 0;
            puVar3[5] = 0;
            puVar3[2] = 0;
            puVar3[3] = 0;
            *puVar3 = 0;
            puVar3[1] = 0;
            puVar3[8] = 0;
            FUN_147dc35b8(puVar23);
            *puVar23 = 0;
            puVar3[7] = 0;
            *(undefined1 *)(puVar3 + 8) = 0;
            iVar13 = 0;
            uVar27 = uVar24;
            uVar30 = uVar29;
            uVar32 = uVar25;
            uVar35 = uVar34;
            uVar38 = uVar37;
            uVar41 = uVar40;
          }
          else {
            iVar13 = *(int *)(puVar20 + 7);
            uVar27 = uVar24;
            uVar30 = uVar29;
            uVar32 = uVar25;
            uVar35 = uVar34;
            uVar38 = uVar37;
            uVar41 = uVar40;
            if (0xf < iVar13) {
              *puVar20 = CONCAT44(uVar40,uVar37);
              puVar20[1] = CONCAT44(uVar34,uVar25);
              puVar20[2] = CONCAT44(uVar29,uVar24);
              puVar20[3] = CONCAT44(uVar39,uVar36);
              puVar20[4] = CONCAT44(uVar33,uVar31);
              puVar20[5] = CONCAT44(uVar28,uVar26);
              if (*(int *)((longlong)puVar20 + 0x3c) != iVar13) {
                FUN_147dc4c6e(puVar20 + 6,iVar13);
              }
              uVar37 = (undefined4)DAT_14c8464e0;
              uVar40 = (undefined4)((ulonglong)DAT_14c8464e0 >> 0x20);
              uVar25 = (undefined4)DAT_14c8464e8;
              uVar34 = (undefined4)((ulonglong)DAT_14c8464e8 >> 0x20);
              uVar24 = (undefined4)DAT_14c8464f0;
              uVar29 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
              bVar12 = false;
              uVar42 = uVar24;
              uVar44 = uVar29;
              uVar45 = uVar25;
              uVar46 = uVar34;
              uVar47 = uVar37;
              uVar48 = uVar40;
              goto LAB_147dc3def;
            }
          }
          dVar4 = *pdVar18;
          dVar5 = pdVar18[1];
          uVar25 = SUB84(dVar5,0);
          dVar6 = pdVar18[2];
          uVar24 = SUB84(dVar6,0);
          dVar7 = pdVar18[3];
          dVar8 = pdVar18[4];
          dVar9 = pdVar18[5];
          uVar37 = SUB84(dVar4,0);
          uVar40 = (undefined4)((ulonglong)dVar4 >> 0x20);
          uVar36 = SUB84(dVar7,0);
          uVar39 = (undefined4)((ulonglong)dVar7 >> 0x20);
          uVar31 = SUB84(dVar8,0);
          uVar33 = (undefined4)((ulonglong)dVar8 >> 0x20);
          uVar34 = (undefined4)((ulonglong)dVar5 >> 0x20);
          uVar29 = (undefined4)((ulonglong)dVar6 >> 0x20);
          uVar43 = (undefined4)((ulonglong)dVar9 >> 0x20);
          uVar26 = SUB84(dVar9,0);
          uVar28 = uVar43;
          if (bVar12) {
            if (dVar4 <= (double)CONCAT44(uVar41,uVar38)) {
              uVar38 = uVar37;
              uVar41 = uVar40;
            }
            if (dVar5 <= (double)CONCAT44(uVar35,uVar32)) {
              uVar32 = uVar25;
              uVar35 = uVar34;
            }
            if (dVar6 <= (double)CONCAT44(uVar30,uVar27)) {
              uVar27 = uVar24;
              uVar30 = uVar29;
            }
            if ((double)CONCAT44(uVar48,uVar47) <= dVar7) {
              uVar47 = uVar36;
              uVar48 = uVar39;
            }
            if ((double)CONCAT44(uVar46,uVar45) <= dVar8) {
              uVar45 = uVar31;
              uVar46 = uVar33;
            }
            uVar24 = uVar27;
            uVar29 = uVar30;
            uVar25 = uVar32;
            uVar34 = uVar35;
            uVar37 = uVar38;
            uVar40 = uVar41;
            uVar26 = uVar42;
            uVar28 = uVar44;
            uVar31 = uVar45;
            uVar33 = uVar46;
            uVar36 = uVar47;
            uVar39 = uVar48;
            if ((double)CONCAT44(uVar44,uVar42) <= dVar9) {
              uVar26 = SUB84(dVar9,0);
              uVar28 = uVar43;
            }
          }
          plVar1 = puVar20 + 6;
          *(uint *)(puVar20 + 7) = iVar13 + 1U;
          if (*(uint *)((longlong)puVar20 + 0x3c) < iVar13 + 1U) {
            FUN_147dc4bda(plVar1,iVar13);
          }
          uVar42 = *(undefined4 *)pdVar18;
          uVar44 = *(undefined4 *)((longlong)pdVar18 + 4);
          uVar45 = *(undefined4 *)(pdVar18 + 1);
          uVar46 = *(undefined4 *)((longlong)pdVar18 + 0xc);
          uVar47 = *(undefined4 *)(pdVar18 + 2);
          uVar48 = *(undefined4 *)((longlong)pdVar18 + 0x14);
          uVar27 = *(undefined4 *)(pdVar18 + 3);
          uVar30 = *(undefined4 *)((longlong)pdVar18 + 0x1c);
          uVar32 = *(undefined4 *)((longlong)pdVar18 + 0x24);
          uVar35 = *(undefined4 *)(pdVar18 + 5);
          uVar38 = *(undefined4 *)((longlong)pdVar18 + 0x2c);
          lVar21 = *plVar1 + 0x30 + (longlong)iVar13 * 0x48;
          *(undefined4 *)(lVar21 + -0x10) = *(undefined4 *)(pdVar18 + 4);
          *(undefined4 *)(lVar21 + -0xc) = uVar32;
          *(undefined4 *)(lVar21 + -8) = uVar35;
          *(undefined4 *)(lVar21 + -4) = uVar38;
          *(undefined4 *)(lVar21 + -0x20) = uVar47;
          *(undefined4 *)(lVar21 + -0x1c) = uVar48;
          *(undefined4 *)(lVar21 + -0x18) = uVar27;
          *(undefined4 *)(lVar21 + -0x14) = uVar30;
          *(undefined4 *)(lVar21 + -0x30) = uVar42;
          *(undefined4 *)(lVar21 + -0x2c) = uVar44;
          *(undefined4 *)(lVar21 + -0x28) = uVar45;
          *(undefined4 *)(lVar21 + -0x24) = uVar46;
          bVar11 = *(byte *)(pdVar18 + 8);
          *(byte *)(lVar21 + 0x10) = bVar11;
          (*(code *)(&PTR_LAB_14ab1f660)[bVar11])(lVar21,pdVar18 + 6);
          pdVar18 = pdVar18 + 9;
          bVar12 = true;
        } while (pdVar18 != pdVar15);
        *puVar20 = CONCAT44(uVar40,uVar37);
        puVar20[1] = CONCAT44(uVar34,uVar25);
        puVar20[2] = CONCAT44(uVar29,uVar24);
        puVar20[3] = CONCAT44(uVar39,uVar36);
        puVar20[4] = CONCAT44(uVar33,uVar31);
        puVar20[5] = CONCAT44(uVar28,uVar26);
        if (*(int *)((longlong)puVar20 + 0x3c) != *(int *)(puVar20 + 7)) {
          FUN_147dc4c6e(plVar1);
        }
        uVar37 = (undefined4)DAT_14c8464e0;
        uVar40 = (undefined4)((ulonglong)DAT_14c8464e0 >> 0x20);
        uVar25 = (undefined4)DAT_14c8464e8;
        uVar34 = (undefined4)((ulonglong)DAT_14c8464e8 >> 0x20);
        uVar24 = (undefined4)DAT_14c8464f0;
        uVar29 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
        FUN_147dc4b8a(&local_108,&local_d8);
        FUN_147dc35e5(local_d8,uStack_d0 & 0xffffffff);
        if (local_d8 != 0) {
          FUN_1400020a8();
        }
        uVar16 = uStack_100 & 0xffffffff;
      } while (1 < (int)uStack_100);
    }
    uVar24 = *(undefined4 *)local_108;
    uVar29 = *(undefined4 *)((longlong)local_108 + 4);
    uVar25 = *(undefined4 *)(local_108 + 1);
    uVar34 = *(undefined4 *)((longlong)local_108 + 0xc);
    uVar37 = *(undefined4 *)(local_108 + 2);
    uVar40 = *(undefined4 *)((longlong)local_108 + 0x14);
    uVar26 = *(undefined4 *)(local_108 + 3);
    uVar28 = *(undefined4 *)((longlong)local_108 + 0x1c);
    uVar31 = *(undefined4 *)((longlong)local_108 + 0x24);
    uVar33 = *(undefined4 *)(local_108 + 5);
    uVar36 = *(undefined4 *)((longlong)local_108 + 0x2c);
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(local_108 + 4);
    *(undefined4 *)((longlong)param_1 + 0x2c) = uVar31;
    *(undefined4 *)(param_1 + 6) = uVar33;
    *(undefined4 *)((longlong)param_1 + 0x34) = uVar36;
    *(undefined4 *)(param_1 + 3) = uVar37;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar40;
    *(undefined4 *)(param_1 + 4) = uVar26;
    *(undefined4 *)((longlong)param_1 + 0x24) = uVar28;
    *(undefined4 *)(param_1 + 1) = uVar24;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar29;
    *(undefined4 *)(param_1 + 2) = uVar25;
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar34;
    if (local_108 != (double *)(param_1 + 1)) {
      local_e8 = CONCAT71(local_e8._1_7_,*(byte *)(local_108 + 8));
      (*(code *)(&PTR_LAB_14ab1f660)[*(byte *)(local_108 + 8)])(&local_f8,local_108 + 6);
      local_c8 = local_e8;
      local_d8 = CONCAT44(uStack_f4,local_f8);
      uStack_d0 = CONCAT44(uStack_ec,uStack_f0);
      uVar16 = param_1[9];
      uVar24 = *(undefined4 *)(param_1 + 7);
      uVar29 = *(undefined4 *)((longlong)param_1 + 0x3c);
      uVar25 = *(undefined4 *)(param_1 + 8);
      uVar34 = *(undefined4 *)((longlong)param_1 + 0x44);
      *(undefined4 *)(param_1 + 7) = local_f8;
      *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_f4;
      *(undefined4 *)(param_1 + 8) = uStack_f0;
      *(undefined4 *)((longlong)param_1 + 0x44) = uStack_ec;
      param_1[9] = local_e8;
      local_f8 = uVar24;
      uStack_f4 = uVar29;
      uStack_f0 = uVar25;
      uStack_ec = uVar34;
      local_e8 = uVar16;
      (*(code *)(&PTR_FUN_14ab1f630)[uVar16 & 0xff])(&local_f8);
      uVar16 = uStack_100 & 0xffffffff;
    }
    FUN_147dc35e5(local_108,uVar16);
    if (local_108 != (double *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147dc3f8a FUN_147dc3f8a body=148 status=ok
// SIG undefined FUN_147dc3f8a(void)

void FUN_147dc3f8a(undefined8 *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  pdVar4 = (double *)*param_1;
  if (*(char *)(param_2 + 6) == '\0' || *(char *)(pdVar4 + 6) == '\0') {
    if (*(char *)(param_2 + 6) != '\0') {
      pdVar4[6] = param_2[6];
      dVar1 = *param_2;
      dVar2 = param_2[1];
      dVar3 = param_2[2];
      dVar5 = param_2[3];
      dVar6 = param_2[5];
      pdVar4[4] = param_2[4];
      pdVar4[5] = dVar6;
      pdVar4[2] = dVar3;
      pdVar4[3] = dVar5;
      *pdVar4 = dVar1;
      pdVar4[1] = dVar2;
    }
    return;
  }
  dVar1 = *pdVar4;
  uVar7 = SUB84(dVar1,0);
  uVar8 = (undefined4)((ulonglong)dVar1 >> 0x20);
  dVar2 = pdVar4[1];
  uVar9 = SUB84(dVar2,0);
  uVar10 = (undefined4)((ulonglong)dVar2 >> 0x20);
  dVar3 = *param_2;
  if (dVar3 <= dVar1) {
    uVar7 = SUB84(dVar3,0);
    uVar8 = (undefined4)((ulonglong)dVar3 >> 0x20);
  }
  *pdVar4 = (double)CONCAT44(uVar8,uVar7);
  dVar1 = param_2[1];
  if (dVar1 <= dVar2) {
    uVar9 = SUB84(dVar1,0);
    uVar10 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  pdVar4[1] = (double)CONCAT44(uVar10,uVar9);
  dVar1 = pdVar4[2];
  uVar7 = SUB84(dVar1,0);
  uVar8 = (undefined4)((ulonglong)dVar1 >> 0x20);
  dVar2 = param_2[2];
  if (dVar2 <= dVar1) {
    uVar7 = SUB84(dVar2,0);
    uVar8 = (undefined4)((ulonglong)dVar2 >> 0x20);
  }
  pdVar4[2] = (double)CONCAT44(uVar8,uVar7);
  dVar1 = pdVar4[3];
  uVar7 = SUB84(dVar1,0);
  uVar8 = (undefined4)((ulonglong)dVar1 >> 0x20);
  dVar2 = param_2[3];
  if (dVar1 <= dVar2) {
    uVar7 = SUB84(dVar2,0);
    uVar8 = (undefined4)((ulonglong)dVar2 >> 0x20);
  }
  pdVar4[3] = (double)CONCAT44(uVar8,uVar7);
  dVar1 = pdVar4[4];
  uVar7 = SUB84(dVar1,0);
  uVar8 = (undefined4)((ulonglong)dVar1 >> 0x20);
  dVar2 = param_2[4];
  if (dVar1 <= dVar2) {
    uVar7 = SUB84(dVar2,0);
    uVar8 = (undefined4)((ulonglong)dVar2 >> 0x20);
  }
  pdVar4[4] = (double)CONCAT44(uVar8,uVar7);
  dVar1 = pdVar4[5];
  uVar7 = SUB84(dVar1,0);
  uVar8 = (undefined4)((ulonglong)dVar1 >> 0x20);
  dVar2 = param_2[5];
  if (dVar1 <= dVar2) {
    uVar7 = SUB84(dVar2,0);
    uVar8 = (undefined4)((ulonglong)dVar2 >> 0x20);
  }
  pdVar4[5] = (double)CONCAT44(uVar8,uVar7);
  return;
}



// FUNCTION 147dc401e FUN_147dc401e body=1449 status=ok
// SIG undefined FUN_147dc401e(void)

void FUN_147dc401e(longlong param_1,uint param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  undefined8 *puVar16;
  char cVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong *plVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  byte bVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  float fVar29;
  undefined1 auStack_3c8 [32];
  longlong *local_3a8;
  int local_39c;
  undefined8 *local_398;
  undefined8 *local_390;
  longlong local_388;
  longlong local_380;
  undefined4 local_378 [188];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong lStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  if (1 < (int)param_2) {
    memset(local_378,0,0x2f0);
    local_380 = (ulonglong)param_2 * 0x40 + param_1 + -0x40;
    local_388 = param_1;
    fVar29 = logf((float)(int)param_2);
    local_378[0] = (int)(longlong)(fVar29 + fVar29);
    plVar20 = &local_388;
    do {
      puVar21 = (undefined8 *)*plVar20;
      puVar22 = (undefined8 *)plVar20[1];
      local_39c = (int)plVar20[2];
      uVar18 = (int)((ulonglong)((longlong)puVar22 - (longlong)puVar21) >> 6) + 1;
      puVar24 = puVar21;
      puVar26 = puVar22;
      local_3a8 = plVar20;
      if (local_39c != 0) {
LAB_147dc40f6:
        plVar20 = local_3a8;
        if (8 < (int)uVar18) {
          uVar19 = (ulonglong)(uVar18 >> 1);
          uVar1 = puVar21[uVar19 * 8];
          uVar2 = (puVar21 + uVar19 * 8)[1];
          uVar3 = puVar21[uVar19 * 8 + 2];
          uVar4 = (puVar21 + uVar19 * 8 + 2)[1];
          uVar5 = puVar21[uVar19 * 8 + 4];
          uVar6 = (puVar21 + uVar19 * 8 + 4)[1];
          uVar7 = puVar21[uVar19 * 8 + 6];
          uVar8 = (puVar21 + uVar19 * 8 + 6)[1];
          uVar9 = *puVar21;
          uVar10 = puVar21[1];
          uVar11 = puVar21[2];
          uVar12 = puVar21[3];
          uVar13 = puVar21[4];
          uVar14 = puVar21[5];
          uVar15 = puVar21[7];
          puVar21[uVar19 * 8 + 6] = puVar21[6];
          (puVar21 + uVar19 * 8 + 6)[1] = uVar15;
          puVar21[uVar19 * 8 + 4] = uVar13;
          (puVar21 + uVar19 * 8 + 4)[1] = uVar14;
          puVar21[uVar19 * 8 + 2] = uVar11;
          (puVar21 + uVar19 * 8 + 2)[1] = uVar12;
          puVar21[uVar19 * 8] = uVar9;
          (puVar21 + uVar19 * 8)[1] = uVar10;
          puVar21[6] = uVar7;
          puVar21[7] = uVar8;
          puVar21[4] = uVar5;
          puVar21[5] = uVar6;
          puVar21[2] = uVar3;
          puVar21[3] = uVar4;
          *puVar21 = uVar1;
          puVar21[1] = uVar2;
          puVar28 = puVar22 + 8;
          puVar27 = puVar21;
          local_398 = puVar24;
          local_390 = puVar26;
          do {
            puVar26 = puVar27 + 8;
            puVar16 = puVar27 + 8;
            do {
              puVar27 = puVar16;
              puVar24 = puVar26;
              if (puVar22 < puVar27) break;
              local_58 = puVar27[6];
              local_88 = *puVar27;
              uStack_80 = puVar27[1];
              local_78 = puVar27[2];
              uStack_70 = puVar27[3];
              local_68 = puVar27[4];
              uStack_60 = puVar27[5];
              lStack_50 = puVar27[7];
              if ((DAT_14c950c29 == 1) && (lStack_50 != 0)) {
                FUN_1456cec3c();
              }
              cVar17 = FUN_147dc4a78(*param_3,puVar21,&local_88);
              puVar26 = puVar24 + 8;
              puVar16 = puVar27 + 8;
            } while (cVar17 == '\0');
            puVar16 = puVar28 + -0x10;
            do {
              puVar23 = puVar28;
              puVar26 = puVar16;
              puVar28 = puVar23 + -8;
              if (puVar28 <= puVar21) break;
              local_58 = puVar21[6];
              local_88 = *puVar21;
              uStack_80 = puVar21[1];
              local_78 = puVar21[2];
              uStack_70 = puVar21[3];
              local_68 = puVar21[4];
              uStack_60 = puVar21[5];
              lStack_50 = puVar21[7];
              if ((DAT_14c950c29 == 1) && (lStack_50 != 0)) {
                FUN_1456cec3c();
              }
              cVar17 = FUN_147dc4a78(*param_3,puVar28,&local_88);
              puVar16 = puVar26 + -8;
            } while (cVar17 == '\0');
            if (puVar28 < puVar27) goto LAB_147dc4333;
            uVar1 = *puVar27;
            uVar2 = puVar27[1];
            uVar3 = puVar27[2];
            uVar4 = puVar27[3];
            uVar5 = puVar27[4];
            uVar6 = puVar27[5];
            uVar7 = puVar27[6];
            uVar8 = puVar27[7];
            uVar9 = *puVar28;
            uVar10 = puVar23[-7];
            uVar11 = puVar23[-6];
            uVar12 = puVar23[-5];
            uVar13 = puVar23[-4];
            uVar14 = puVar23[-3];
            uVar15 = puVar23[-1];
            puVar27[6] = puVar23[-2];
            puVar27[7] = uVar15;
            puVar27[4] = uVar13;
            puVar27[5] = uVar14;
            puVar27[2] = uVar11;
            puVar27[3] = uVar12;
            *puVar27 = uVar9;
            puVar27[1] = uVar10;
            puVar23[-2] = uVar7;
            puVar23[-1] = uVar8;
            puVar23[-4] = uVar5;
            puVar23[-3] = uVar6;
            puVar23[-6] = uVar3;
            puVar23[-5] = uVar4;
            *puVar28 = uVar1;
            puVar23[-7] = uVar2;
          } while( true );
        }
        for (; local_3a8 = plVar20, puVar26 = puVar21, bVar25 = DAT_14c950c29, puVar24 = puVar21,
            puVar21 < puVar22; puVar22 = puVar22 + -8) {
          while (puVar28 = puVar26, puVar24 = puVar24 + 8, puVar24 <= puVar22) {
            local_58 = puVar24[6];
            local_88 = *puVar24;
            uStack_80 = puVar24[1];
            local_78 = puVar24[2];
            uStack_70 = puVar24[3];
            local_68 = puVar24[4];
            uStack_60 = puVar24[5];
            lStack_50 = puVar24[7];
            if (((bVar25 & 1) != 0) && (lStack_50 != 0)) {
              FUN_1456cec3c();
              bVar25 = DAT_14c950c29;
            }
            cVar17 = FUN_147dc4a78(*param_3,puVar28,&local_88);
            puVar26 = puVar24;
            if (cVar17 == '\0') {
              puVar26 = puVar28;
            }
          }
          local_88 = *puVar28;
          uStack_80 = puVar28[1];
          local_78 = puVar28[2];
          uStack_70 = puVar28[3];
          local_68 = puVar28[4];
          uStack_60 = puVar28[5];
          local_58 = puVar28[6];
          lStack_50 = puVar28[7];
          uVar8 = local_88;
          uVar9 = uStack_80;
          uVar1 = *puVar22;
          uVar2 = puVar22[1];
          uVar3 = puVar22[2];
          uVar4 = puVar22[3];
          uVar5 = puVar22[4];
          uVar6 = puVar22[5];
          uVar7 = puVar22[7];
          puVar28[6] = puVar22[6];
          puVar28[7] = uVar7;
          puVar28[4] = uVar5;
          puVar28[5] = uVar6;
          puVar28[2] = uVar3;
          puVar28[3] = uVar4;
          *puVar28 = uVar1;
          puVar28[1] = uVar2;
          local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
          uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
          puVar22[6] = local_58;
          puVar22[7] = lStack_50;
          puVar22[4] = local_68;
          puVar22[5] = uStack_60;
          puVar22[2] = local_78;
          puVar22[3] = uStack_70;
          *(undefined4 *)puVar22 = (undefined4)local_88;
          *(undefined4 *)((longlong)puVar22 + 4) = local_88._4_4_;
          *(undefined4 *)(puVar22 + 1) = (undefined4)uStack_80;
          *(undefined4 *)((longlong)puVar22 + 0xc) = uStack_80._4_4_;
          plVar20 = local_3a8;
          local_88 = uVar8;
          uStack_80 = uVar9;
        }
        goto LAB_147dc459b;
      }
LAB_147dc45b5:
      FUN_147dc45c8(puVar21,uVar18,param_3);
      plVar20 = local_3a8;
LAB_147dc459b:
      plVar20 = plVar20 + -3;
    } while (&local_388 <= plVar20);
  }
  if ((local_48 ^ (ulonglong)auStack_3c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_147dc4333:
  local_88 = *puVar21;
  uStack_80 = puVar21[1];
  local_78 = puVar21[2];
  uStack_70 = puVar21[3];
  local_68 = puVar21[4];
  uStack_60 = puVar21[5];
  local_58 = puVar21[6];
  lStack_50 = puVar21[7];
  uVar8 = local_88;
  uVar9 = uStack_80;
  uVar1 = *puVar28;
  uVar2 = puVar23[-7];
  uVar3 = puVar23[-6];
  uVar4 = puVar23[-5];
  uVar5 = puVar23[-4];
  uVar6 = puVar23[-3];
  uVar7 = puVar23[-1];
  puVar21[6] = puVar23[-2];
  puVar21[7] = uVar7;
  puVar21[4] = uVar5;
  puVar21[5] = uVar6;
  puVar21[2] = uVar3;
  puVar21[3] = uVar4;
  *puVar21 = uVar1;
  puVar21[1] = uVar2;
  local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  puVar23[-2] = local_58;
  puVar23[-1] = lStack_50;
  puVar23[-4] = local_68;
  puVar23[-3] = uStack_60;
  puVar23[-6] = local_78;
  puVar23[-5] = uStack_70;
  *(undefined4 *)puVar28 = (undefined4)local_88;
  *(undefined4 *)((longlong)puVar23 + -0x3c) = local_88._4_4_;
  *(undefined4 *)(puVar23 + -7) = (undefined4)uStack_80;
  *(undefined4 *)((longlong)puVar23 + -0x34) = uStack_80._4_4_;
  local_39c = local_39c + -1;
  puVar23 = puVar23 + -0x10;
  local_88 = uVar8;
  uStack_80 = uVar9;
  if ((longlong)puVar26 - (longlong)local_398 < (longlong)local_390 - (longlong)puVar24) {
    plVar20 = local_3a8;
    if (puVar27 < puVar22) {
      *local_3a8 = (longlong)puVar27;
      local_3a8[1] = (longlong)puVar22;
      *(int *)(local_3a8 + 2) = local_39c;
      plVar20 = local_3a8 + 3;
    }
    puVar24 = puVar21;
    if (puVar28 <= puVar21 + 8) goto LAB_147dc459b;
  }
  else {
    if (puVar21 + 8 < puVar28) {
      *local_3a8 = (longlong)puVar21;
      local_3a8[1] = (longlong)puVar23;
      *(int *)(local_3a8 + 2) = local_39c;
      local_3a8 = local_3a8 + 3;
    }
    plVar20 = local_3a8;
    puVar21 = puVar27;
    puVar23 = puVar22;
    puVar26 = puVar22;
    if (puVar22 <= puVar27) goto LAB_147dc459b;
  }
  local_3a8 = plVar20;
  uVar18 = (int)((ulonglong)((longlong)puVar26 - (longlong)puVar24) >> 6) + 1;
  puVar22 = puVar23;
  if (local_39c == 0) goto LAB_147dc45b5;
  goto LAB_147dc40f6;
}



// FUNCTION 147dc45c8 FUN_147dc45c8 body=1199 status=ok
// SIG undefined FUN_147dc45c8(void)

void FUN_147dc45c8(undefined8 *param_1,uint param_2,undefined8 *param_3)

{
  ulonglong uVar1;
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
  char cVar17;
  longlong lVar18;
  byte bVar19;
  int iVar20;
  int iVar21;
  undefined8 *puVar22;
  int iVar23;
  int iVar24;
  undefined8 *puVar25;
  ulonglong uVar26;
  bool bVar27;
  undefined1 auStack_b8 [40];
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90 = param_3;
  if (param_2 != 0) {
    iVar23 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    bVar19 = DAT_14c950c29;
    iVar24 = iVar23;
joined_r0x000147dc4615:
    do {
      iVar21 = iVar23 * 2 + 1;
      if (iVar21 < (int)param_2) {
        iVar20 = iVar23 * 2 + 2;
        if (iVar20 < (int)param_2) {
          lVar18 = (longlong)iVar21;
          local_58 = param_1[lVar18 * 8 + 6];
          local_88 = param_1[lVar18 * 8];
          uStack_80 = (param_1 + lVar18 * 8)[1];
          local_78 = param_1[lVar18 * 8 + 2];
          uStack_70 = (param_1 + lVar18 * 8 + 2)[1];
          local_68 = param_1[lVar18 * 8 + 4];
          uStack_60 = (param_1 + lVar18 * 8 + 4)[1];
          uStack_50 = param_1[lVar18 * 8 + 7];
          if (((bVar19 & 1) != 0) && (uStack_50 != 0)) {
            FUN_1456cec3c();
            bVar19 = DAT_14c950c29;
          }
          cVar17 = FUN_147dc4a78(*local_90,param_1 + (longlong)iVar20 * 8,&local_88);
          if (cVar17 == '\0') {
            iVar21 = iVar20;
          }
        }
        lVar18 = (longlong)iVar21;
        local_58 = param_1[lVar18 * 8 + 6];
        local_88 = param_1[lVar18 * 8];
        uStack_80 = (param_1 + lVar18 * 8)[1];
        local_78 = param_1[lVar18 * 8 + 2];
        uStack_70 = (param_1 + lVar18 * 8 + 2)[1];
        local_68 = param_1[lVar18 * 8 + 4];
        uStack_60 = (param_1 + lVar18 * 8 + 4)[1];
        uStack_50 = param_1[lVar18 * 8 + 7];
        if (((bVar19 & 1) != 0) && (uStack_50 != 0)) {
          FUN_1456cec3c();
          bVar19 = DAT_14c950c29;
        }
        puVar25 = param_1 + (longlong)iVar23 * 8;
        cVar17 = FUN_147dc4a78(*local_90,puVar25,&local_88);
        if (cVar17 != '\0') {
          puVar22 = param_1 + lVar18 * 8;
          uVar2 = *puVar25;
          uVar3 = puVar25[1];
          local_78 = puVar25[2];
          uStack_70 = puVar25[3];
          local_68 = puVar25[4];
          uStack_60 = puVar25[5];
          local_58 = puVar25[6];
          uStack_50 = puVar25[7];
          uVar4 = *puVar22;
          uVar5 = puVar22[1];
          uVar6 = puVar22[2];
          uVar7 = puVar22[3];
          uVar8 = puVar22[4];
          uVar9 = puVar22[5];
          uVar10 = puVar22[7];
          puVar25[6] = puVar22[6];
          puVar25[7] = uVar10;
          puVar25[4] = uVar8;
          puVar25[5] = uVar9;
          puVar25[2] = uVar6;
          puVar25[3] = uVar7;
          *puVar25 = uVar4;
          puVar25[1] = uVar5;
          local_88._0_4_ = (undefined4)uVar2;
          local_88._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_80._0_4_ = (undefined4)uVar3;
          uStack_80._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          puVar22[6] = local_58;
          puVar22[7] = uStack_50;
          puVar22[4] = local_68;
          puVar22[5] = uStack_60;
          puVar22[2] = local_78;
          puVar22[3] = uStack_70;
          *(undefined4 *)puVar22 = (undefined4)local_88;
          *(undefined4 *)((longlong)puVar22 + 4) = local_88._4_4_;
          *(undefined4 *)(puVar22 + 1) = (undefined4)uStack_80;
          *(undefined4 *)((longlong)puVar22 + 0xc) = uStack_80._4_4_;
          iVar23 = iVar21;
          local_88 = uVar2;
          uStack_80 = uVar3;
          goto joined_r0x000147dc4615;
        }
      }
      bVar27 = iVar24 != 0;
      iVar23 = iVar24 + -1;
      bVar19 = DAT_14c950c29;
      iVar24 = iVar23;
    } while (bVar27);
    if (1 < (int)param_2) {
      uVar26 = (ulonglong)param_2 - 1;
      uVar2 = *param_1;
      uVar3 = param_1[1];
      local_78 = param_1[2];
      uStack_70 = param_1[3];
      local_68 = param_1[4];
      uStack_60 = param_1[5];
      uVar4 = param_1[6];
      lVar18 = param_1[7];
      uVar5 = param_1[uVar26 * 8];
      uVar6 = (param_1 + uVar26 * 8)[1];
      uVar7 = param_1[uVar26 * 8 + 2];
      uVar8 = (param_1 + uVar26 * 8 + 2)[1];
      uVar9 = param_1[uVar26 * 8 + 4];
      uVar10 = (param_1 + uVar26 * 8 + 4)[1];
      uVar11 = (param_1 + uVar26 * 8 + 6)[1];
      param_1[6] = param_1[uVar26 * 8 + 6];
      param_1[7] = uVar11;
      param_1[4] = uVar9;
      param_1[5] = uVar10;
      param_1[2] = uVar7;
      param_1[3] = uVar8;
      *param_1 = uVar5;
      param_1[1] = uVar6;
      local_88._0_4_ = (undefined4)uVar2;
      local_88._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_80._0_4_ = (undefined4)uVar3;
      uStack_80._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      local_58._0_4_ = (undefined4)uVar4;
      local_58._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_50._0_4_ = (undefined4)lVar18;
      uStack_50._4_4_ = (undefined4)((ulonglong)lVar18 >> 0x20);
      puVar25 = param_1 + uVar26 * 8 + 6;
      *(undefined4 *)puVar25 = (undefined4)local_58;
      *(undefined4 *)((longlong)puVar25 + 4) = local_58._4_4_;
      *(undefined4 *)(puVar25 + 1) = (undefined4)uStack_50;
      *(undefined4 *)((longlong)puVar25 + 0xc) = uStack_50._4_4_;
      param_1[uVar26 * 8 + 4] = local_68;
      (param_1 + uVar26 * 8 + 4)[1] = uStack_60;
      param_1[uVar26 * 8 + 2] = local_78;
      (param_1 + uVar26 * 8 + 2)[1] = uStack_70;
      puVar25 = param_1 + uVar26 * 8;
      *(undefined4 *)puVar25 = (undefined4)local_88;
      *(undefined4 *)((longlong)puVar25 + 4) = local_88._4_4_;
      *(undefined4 *)(puVar25 + 1) = (undefined4)uStack_80;
      *(undefined4 *)((longlong)puVar25 + 0xc) = uStack_80._4_4_;
      bVar19 = DAT_14c950c29;
      local_88 = uVar2;
      uStack_80 = uVar3;
      local_58 = uVar4;
      uStack_50 = lVar18;
      if (param_2 != 2) {
        do {
          iVar23 = 0;
          iVar21 = 1;
          iVar24 = 0;
          do {
            iVar23 = iVar23 + 2;
            iVar20 = iVar21;
            if ((longlong)iVar23 < (longlong)uVar26) {
              lVar18 = (longlong)iVar21;
              local_58 = param_1[lVar18 * 8 + 6];
              local_88 = param_1[lVar18 * 8];
              uStack_80 = (param_1 + lVar18 * 8)[1];
              local_78 = param_1[lVar18 * 8 + 2];
              uStack_70 = (param_1 + lVar18 * 8 + 2)[1];
              local_68 = param_1[lVar18 * 8 + 4];
              uStack_60 = (param_1 + lVar18 * 8 + 4)[1];
              uStack_50 = param_1[lVar18 * 8 + 7];
              if (((bVar19 & 1) != 0) && (uStack_50 != 0)) {
                FUN_1456cec3c();
                bVar19 = DAT_14c950c29;
              }
              cVar17 = FUN_147dc4a78(*local_90,param_1 + (longlong)iVar23 * 8,&local_88);
              if (cVar17 == '\0') {
                iVar20 = iVar23;
              }
            }
            lVar18 = (longlong)iVar20;
            local_58 = param_1[lVar18 * 8 + 6];
            local_88 = param_1[lVar18 * 8];
            uStack_80 = (param_1 + lVar18 * 8)[1];
            local_78 = param_1[lVar18 * 8 + 2];
            uStack_70 = (param_1 + lVar18 * 8 + 2)[1];
            local_68 = param_1[lVar18 * 8 + 4];
            uStack_60 = (param_1 + lVar18 * 8 + 4)[1];
            uStack_50 = param_1[lVar18 * 8 + 7];
            if (((bVar19 & 1) != 0) && (uStack_50 != 0)) {
              FUN_1456cec3c();
              bVar19 = DAT_14c950c29;
            }
            puVar25 = param_1 + (longlong)iVar24 * 8;
            cVar17 = FUN_147dc4a78(*local_90,puVar25,&local_88);
            if (cVar17 == '\0') break;
            puVar22 = param_1 + lVar18 * 8;
            uVar2 = *puVar25;
            uVar3 = puVar25[1];
            uVar4 = puVar25[2];
            uVar5 = puVar25[3];
            uVar6 = puVar25[4];
            uVar7 = puVar25[5];
            uVar8 = puVar25[6];
            uVar9 = puVar25[7];
            uVar10 = *puVar22;
            uVar11 = puVar22[1];
            uVar12 = puVar22[2];
            uVar13 = puVar22[3];
            uVar14 = puVar22[4];
            uVar15 = puVar22[5];
            uVar16 = puVar22[7];
            puVar25[6] = puVar22[6];
            puVar25[7] = uVar16;
            puVar25[4] = uVar14;
            puVar25[5] = uVar15;
            puVar25[2] = uVar12;
            puVar25[3] = uVar13;
            *puVar25 = uVar10;
            puVar25[1] = uVar11;
            local_58._0_4_ = (undefined4)uVar8;
            local_58._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
            uStack_50._0_4_ = (undefined4)uVar9;
            uStack_50._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
            *(undefined4 *)(puVar22 + 6) = (undefined4)local_58;
            *(undefined4 *)((longlong)puVar22 + 0x34) = local_58._4_4_;
            *(undefined4 *)(puVar22 + 7) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)puVar22 + 0x3c) = uStack_50._4_4_;
            puVar22[4] = uVar6;
            puVar22[5] = uVar7;
            puVar22[2] = uVar4;
            puVar22[3] = uVar5;
            *puVar22 = uVar2;
            puVar22[1] = uVar3;
            iVar23 = iVar20 * 2;
            iVar21 = iVar20 * 2 + 1;
            iVar24 = iVar20;
          } while ((longlong)iVar21 < (longlong)uVar26);
          uVar1 = uVar26 - 1;
          uVar2 = *param_1;
          uVar3 = param_1[1];
          local_78 = param_1[2];
          uStack_70 = param_1[3];
          local_68 = param_1[4];
          uStack_60 = param_1[5];
          uVar4 = param_1[6];
          lVar18 = param_1[7];
          uVar5 = param_1[uVar1 * 8];
          uVar6 = (param_1 + uVar1 * 8)[1];
          uVar7 = param_1[uVar1 * 8 + 2];
          uVar8 = (param_1 + uVar1 * 8 + 2)[1];
          uVar9 = param_1[uVar1 * 8 + 4];
          uVar10 = (param_1 + uVar1 * 8 + 4)[1];
          uVar11 = (param_1 + uVar1 * 8 + 6)[1];
          param_1[6] = param_1[uVar1 * 8 + 6];
          param_1[7] = uVar11;
          param_1[4] = uVar9;
          param_1[5] = uVar10;
          param_1[2] = uVar7;
          param_1[3] = uVar8;
          *param_1 = uVar5;
          param_1[1] = uVar6;
          local_88._0_4_ = (undefined4)uVar2;
          local_88._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_80._0_4_ = (undefined4)uVar3;
          uStack_80._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          local_58._0_4_ = (undefined4)uVar4;
          local_58._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_50._0_4_ = (undefined4)lVar18;
          uStack_50._4_4_ = (undefined4)((ulonglong)lVar18 >> 0x20);
          puVar25 = param_1 + uVar1 * 8 + 6;
          *(undefined4 *)puVar25 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar25 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar25 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar25 + 0xc) = uStack_50._4_4_;
          param_1[uVar1 * 8 + 4] = local_68;
          (param_1 + uVar1 * 8 + 4)[1] = uStack_60;
          param_1[uVar1 * 8 + 2] = local_78;
          (param_1 + uVar1 * 8 + 2)[1] = uStack_70;
          puVar25 = param_1 + uVar1 * 8;
          *(undefined4 *)puVar25 = (undefined4)local_88;
          *(undefined4 *)((longlong)puVar25 + 4) = local_88._4_4_;
          *(undefined4 *)(puVar25 + 1) = (undefined4)uStack_80;
          *(undefined4 *)((longlong)puVar25 + 0xc) = uStack_80._4_4_;
          bVar27 = 2 < uVar26;
          uVar26 = uVar1;
          local_88 = uVar2;
          uStack_80 = uVar3;
          local_58 = uVar4;
          uStack_50 = lVar18;
        } while (bVar27);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147dc4a78 FUN_147dc4a78 body=273 status=ok
// SIG undefined FUN_147dc4a78(void)

undefined8 FUN_147dc4a78(int *param_1,double *param_2,double *param_3)

{
  sbyte sVar1;
  uint uVar2;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  ulonglong uVar3;
  
  iVar6 = 0;
  uVar2 = *param_1 - 1;
  uVar3 = (ulonglong)uVar2;
  iVar7 = 0;
  if (-1 < (int)uVar2) {
    iVar7 = 0;
    uVar5 = 0;
    uVar4 = uVar2;
    do {
      sVar1 = (((uint)(int)((param_2[1] + param_2[4]) * 0.5 * 1.52587890625e-05) >> (uVar4 & 0x1f) &
               1) != 0 |
              (char)uVar5 * '\x04' +
              ((byte)((uint)(int)((*param_2 + param_2[3]) * 0.5 * 1.52587890625e-05) >>
                     ((byte)uVar4 & 0x1f)) & 1) * '\x02') * '\x02';
      iVar7 = (0x361e9cb4U >> sVar1 & 3) + iVar7 * 4;
      uVar5 = 0x8fe65831U >> sVar1 & 3;
      bVar8 = uVar4 != 0;
      uVar4 = uVar4 - 1;
    } while (bVar8);
  }
  if (-1 < (int)uVar2) {
    iVar6 = 0;
    uVar2 = 0;
    do {
      uVar4 = (uint)uVar3;
      sVar1 = (((uint)(int)((param_3[1] + param_3[4]) * 0.5 * 1.52587890625e-05) >> (uVar4 & 0x1f) &
               1) != 0 |
              (char)uVar2 * '\x04' +
              ((byte)((uint)(int)((*param_3 + param_3[3]) * 0.5 * 1.52587890625e-05) >>
                     ((byte)uVar3 & 0x1f)) & 1) * '\x02') * '\x02';
      iVar6 = (0x361e9cb4U >> sVar1 & 3) + iVar6 * 4;
      uVar2 = 0x8fe65831U >> sVar1 & 3;
      uVar3 = (ulonglong)(uVar4 - 1);
    } while (uVar4 != 0);
  }
  return CONCAT71((int7)(uVar3 >> 8),iVar7 < iVar6);
}



// FUNCTION 147dc4b8a FUN_147dc4b8a body=80 status=ok
// SIG undefined FUN_147dc4b8a(void)

longlong * FUN_147dc4b8a(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_147dc35e5(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 147dc4bda FUN_147dc4bda body=147 status=ok
// SIG undefined FUN_147dc4bda(void)

void FUN_147dc4bda(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x48,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x48)) {
      uVar5 = uVar4 / 0x48 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x48,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147dc4c6e FUN_147dc4c6e body=113 status=ok
// SIG undefined FUN_147dc4c6e(void)

void FUN_147dc4c6e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x48,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x48)) {
      uVar2 = uVar1 / 0x48 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x48,8);
  }
  return;
}



// FUNCTION 147dc4d0c FUN_147dc4d0c body=75 status=ok
// SIG undefined FUN_147dc4d0c(void)

undefined8 * FUN_147dc4d0c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ab1f6a0;
  (*(code *)(&PTR_FUN_14ab1f6d0)[*(byte *)(param_1 + 10)])(param_1 + 8);
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147dc4d84 FUN_147dc4d84 body=34 status=ok
// SIG undefined FUN_147dc4d84(void)

int FUN_147dc4d84(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x14);
  iVar2 = FUN_147dc4e54(param_1 + 0x18);
  return iVar2 + iVar1 * 0x30 + 0x58;
}



// FUNCTION 147dc4da6 FUN_147dc4da6 body=75 status=ok
// SIG undefined FUN_147dc4da6(void)

undefined8 * FUN_147dc4da6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ab1f6a0;
  (*(code *)(&PTR_FUN_14ab1f6d0)[*(byte *)(param_1 + 10)])(param_1 + 8);
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147dc4df2 FUN_147dc4df2 body=44 status=ok
// SIG undefined FUN_147dc4df2(void)

void FUN_147dc4df2(longlong *param_1)

{
  FUN_147dc4e1f(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147dc4e1f FUN_147dc4e1f body=53 status=ok
// SIG undefined FUN_147dc4e1f(void)

void FUN_147dc4e1f(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x20;
    do {
      (*(code *)(&PTR_FUN_14ab1f6d0)[*(byte *)(param_1 + 0x10)])(param_1);
      param_1 = param_1 + 0x38;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147dc4e54 FUN_147dc4e54 body=146 status=ok
// SIG undefined FUN_147dc4e54(void)

undefined4 FUN_147dc4e54(longlong param_1)

{
  undefined4 uVar1;
  undefined ***pppuVar2;
  undefined1 auStack_78 [32];
  undefined1 *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  undefined1 **local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_14ab1f6e0;
  local_28 = local_58;
  local_58[0] = &LAB_147dc4ee8;
  local_30 = param_1;
  uVar1 = FUN_147dc4f3c(&local_30,param_1 + 8,0x40);
  if (local_58[0] != (undefined1 *)0x0) {
    pppuVar2 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar2 = &local_38;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dc4f12 FUN_147dc4f12 body=12 status=ok
// SIG undefined FUN_147dc4f12(void)

void FUN_147dc4f12(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000147dc4f1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 147dc4f1e FUN_147dc4f1e body=29 status=ok
// SIG undefined FUN_147dc4f1e(void)

undefined8 FUN_147dc4f1e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147dc4f3c FUN_147dc4f3c body=198 status=ok
// SIG undefined FUN_147dc4f3c(void)

int FUN_147dc4f3c(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((&DAT_14ab1ee60)[*(byte *)(param_2 + 0x30)] == '\x01') {
    param_3 = *(int *)(param_2 + 0x2c) * 0x38 + param_3;
    if ((longlong)*(int *)(param_2 + 0x28) != 0) {
      lVar7 = *(longlong *)(param_2 + 0x20);
      lVar6 = (longlong)*(int *)(param_2 + 0x28) * 0x38;
      do {
        puVar1 = *(undefined8 **)(param_1 + 8);
        local_44 = 0x38;
        pcVar2 = (code *)*puVar1;
        plVar5 = puVar1 + 4;
        if ((longlong *)puVar1[2] != (longlong *)0x0) {
          plVar5 = (longlong *)puVar1[2];
        }
        local_50 = lVar7;
        uVar4 = (**(code **)(*plVar5 + 8))();
        iVar3 = (*pcVar2)(uVar4,&local_50,&local_44);
        param_3 = param_3 + iVar3;
        lVar7 = lVar7 + 0x38;
        lVar6 = lVar6 + -0x38;
      } while (lVar6 != 0);
    }
  }
  else {
    param_3 = param_3 + 8;
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_3;
}



// FUNCTION 147dc5004 FUN_147dc5004 body=147 status=ok
// SIG undefined FUN_147dc5004(void)

void FUN_147dc5004(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147dc5098 FUN_147dc5098 body=274 status=ok
// SIG undefined FUN_147dc5098(void)

void FUN_147dc5098(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_88 [44];
  int local_5c;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = &local_58;
  lVar4 = *(longlong *)(param_1 + 8);
  if ((longlong)*(int *)(param_1 + 0x10) == 0) {
    uVar3 = 0;
    dVar7 = NAN;
    dVar6 = NAN;
  }
  else {
    lVar5 = (longlong)*(int *)(param_1 + 0x10) * 0x30;
    do {
      FUN_147dc577c(&local_30,lVar4);
      lVar4 = lVar4 + 0x30;
      lVar5 = lVar5 + -0x30;
    } while (lVar5 != 0);
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    lVar4 = *(longlong *)(param_1 + 8);
    dVar7 = (local_40 - local_50) * 0.5;
    dVar6 = (local_48 - local_58) * 0.5;
  }
  if (dVar6 <= dVar7) {
    dVar6 = dVar7;
  }
  iVar2 = -((int)ROUND(-0.5 - (dVar6 * 1.52587890625e-05 + dVar6 * 1.52587890625e-05)) >> 1);
  uVar1 = (ulonglong)(iVar2 + -1 + (uint)(iVar2 == 0)) * 2 + 1;
  lVar5 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
    }
  }
  local_5c = ((uint)lVar5 ^ 0xffffffc0) + 0x41;
  local_30 = (double *)&local_5c;
  FUN_147dc57e3(lVar4,uVar3);
  FUN_147dc51ac(param_1 + 0x18);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dc51ac FUN_147dc51ac body=1487 status=ok
// SIG undefined FUN_147dc51ac(void)

void FUN_147dc51ac(undefined8 *param_1)

{
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  double *pdVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  byte bVar9;
  bool bVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong lVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  double dVar21;
  double dVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined1 auStack_148 [32];
  undefined8 *local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  ulonglong local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  iVar3 = (**(code **)(*(longlong *)*param_1 + 8))();
  if (iVar3 != 0) {
    uVar23 = (undefined4)DAT_14c8463f0;
    uVar24 = (undefined4)((ulonglong)DAT_14c8463f0 >> 0x20);
    uVar25 = (undefined4)DAT_14c8463f8;
    uVar27 = (undefined4)((ulonglong)DAT_14c8463f8 >> 0x20);
    local_128 = (undefined8 *)0x0;
    uStack_120 = 0;
    iVar3 = (**(code **)(*(longlong *)*param_1 + 8))();
    iVar11 = 0;
    uVar26 = uVar23;
    uVar28 = uVar24;
    uVar29 = uVar25;
    uVar30 = uVar27;
    if (iVar3 < 1) {
      puVar12 = (undefined8 *)0x0;
    }
    else {
      puVar12 = (undefined8 *)0x0;
      bVar9 = 0;
      do {
        pdVar5 = (double *)(**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,iVar11);
        uVar7 = uStack_120;
        if (puVar12 == (undefined8 *)0x0) {
LAB_147dc53b4:
          lVar8 = (longlong)(int)uStack_120;
          uVar4 = (int)uStack_120 + 1;
          uStack_120 = CONCAT44(uStack_120._4_4_,uVar4);
          if (uStack_120._4_4_ < uVar4) {
            FUN_147dc627a(&local_128,uVar7 & 0xffffffff);
          }
          puVar12 = local_128 + lVar8 * 7;
          puVar14 = local_128 + lVar8 * 7;
          puVar15 = puVar14 + 4;
          uVar4 = 0;
          puVar14[6] = 0;
          *puVar15 = 0;
          puVar14[5] = 0;
          puVar14[2] = 0;
          puVar14[3] = 0;
          *puVar14 = 0;
          puVar14[1] = 0;
          FUN_147dc4df2(puVar15);
          *puVar15 = 0;
          *(undefined1 *)(puVar14 + 6) = 1;
        }
        else {
          uVar4 = *(uint *)((longlong)puVar12 + 0x24);
          if (0x3f < uVar4) {
            *puVar12 = CONCAT44(uVar28,uVar26);
            puVar12[1] = CONCAT44(uVar30,uVar29);
            puVar12[2] = CONCAT44(uVar24,uVar23);
            puVar12[3] = CONCAT44(uVar27,uVar25);
            uVar23 = (undefined4)DAT_14c8463f0;
            uVar24 = (undefined4)((ulonglong)DAT_14c8463f0 >> 0x20);
            bVar9 = 0;
            uVar25 = (undefined4)DAT_14c8463f8;
            uVar27 = (undefined4)((ulonglong)DAT_14c8463f8 >> 0x20);
            uVar26 = uVar23;
            uVar28 = uVar24;
            uVar29 = uVar25;
            uVar30 = uVar27;
            goto LAB_147dc53b4;
          }
        }
        bVar2 = *(byte *)(pdVar5 + 4);
        if ((bVar9 & 1) == 0) {
          if ((bVar2 & 1) != 0) {
            uVar26 = SUB84(*pdVar5,0);
            uVar28 = (undefined4)((ulonglong)*pdVar5 >> 0x20);
            uVar29 = SUB84(pdVar5[1],0);
            uVar30 = (undefined4)((ulonglong)pdVar5[1] >> 0x20);
            uVar23 = SUB84(pdVar5[2],0);
            uVar24 = (undefined4)((ulonglong)pdVar5[2] >> 0x20);
            uVar25 = SUB84(pdVar5[3],0);
            uVar27 = (undefined4)((ulonglong)pdVar5[3] >> 0x20);
            bVar9 = bVar2;
          }
        }
        else if ((bVar2 & 1) != 0) {
          dVar21 = *pdVar5;
          if (dVar21 <= (double)CONCAT44(uVar28,uVar26)) {
            uVar26 = SUB84(dVar21,0);
            uVar28 = (undefined4)((ulonglong)dVar21 >> 0x20);
          }
          dVar21 = pdVar5[1];
          if (dVar21 <= (double)CONCAT44(uVar30,uVar29)) {
            uVar29 = SUB84(dVar21,0);
            uVar30 = (undefined4)((ulonglong)dVar21 >> 0x20);
          }
          dVar21 = pdVar5[2];
          if ((double)CONCAT44(uVar24,uVar23) <= dVar21) {
            uVar23 = SUB84(dVar21,0);
            uVar24 = (undefined4)((ulonglong)dVar21 >> 0x20);
          }
          dVar21 = pdVar5[3];
          if ((double)CONCAT44(uVar27,uVar25) <= dVar21) {
            uVar25 = SUB84(dVar21,0);
            uVar27 = (undefined4)((ulonglong)dVar21 >> 0x20);
          }
        }
        if (uVar4 == 0) {
          *(int *)(puVar12 + 4) = iVar11;
        }
        *(uint *)((longlong)puVar12 + 0x24) = uVar4 + 1;
        iVar11 = iVar11 + 1;
        iVar3 = (**(code **)(*(longlong *)*param_1 + 8))();
      } while (iVar11 < iVar3);
    }
    *puVar12 = CONCAT44(uVar28,uVar26);
    puVar12[1] = CONCAT44(uVar30,uVar29);
    puVar12[2] = CONCAT44(uVar24,uVar23);
    puVar12[3] = CONCAT44(uVar27,uVar25);
    uVar7 = uStack_120 & 0xffffffff;
    if (1 < (int)uStack_120) {
      uVar29 = (undefined4)DAT_14c8463f8;
      uVar30 = (undefined4)((ulonglong)DAT_14c8463f8 >> 0x20);
      uVar26 = (undefined4)DAT_14c8463f0;
      uVar28 = (undefined4)((ulonglong)DAT_14c8463f0 >> 0x20);
      do {
        local_f8 = 0;
        uStack_f0 = 0;
        lVar8 = uVar7 * 0x38;
        puVar14 = local_128 + 4;
        puVar12 = (undefined8 *)0x0;
        bVar10 = false;
        uVar23 = uVar29;
        uVar24 = uVar30;
        uVar25 = uVar26;
        uVar27 = uVar28;
        do {
          if (puVar12 == (undefined8 *)0x0) {
LAB_147dc5582:
            uVar7 = uStack_f0;
            lVar16 = (longlong)(int)uStack_f0;
            uVar4 = (int)uStack_f0 + 1;
            uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar4);
            if (uStack_f0._4_4_ < uVar4) {
              FUN_147dc627a(&local_f8,uVar7 & 0xffffffff);
            }
            puVar12 = (undefined8 *)(local_f8 + lVar16 * 0x38);
            puVar15 = (undefined8 *)(local_f8 + lVar16 * 0x38);
            puVar13 = puVar15 + 4;
            *puVar13 = 0;
            puVar15[5] = 0;
            puVar15[2] = 0;
            puVar15[3] = 0;
            *puVar15 = 0;
            puVar15[1] = 0;
            puVar15[6] = 0;
            FUN_147dc4df2(puVar13);
            *puVar13 = 0;
            puVar15[5] = 0;
            *(undefined1 *)(puVar15 + 6) = 0;
            uVar17 = (undefined4)puVar14[-4];
            uVar18 = (undefined4)((ulonglong)puVar14[-4] >> 0x20);
            uVar19 = (undefined4)puVar14[-3];
            uVar20 = (undefined4)((ulonglong)puVar14[-3] >> 0x20);
            dVar21 = (double)puVar14[-2];
            dVar22 = (double)puVar14[-1];
            iVar3 = 0;
            uVar31 = uVar29;
            uVar32 = uVar30;
            uVar33 = uVar25;
            uVar34 = uVar27;
            uVar35 = uVar26;
            uVar36 = uVar28;
          }
          else {
            iVar3 = *(int *)(puVar12 + 5);
            if (0xf < iVar3) {
              *puVar12 = CONCAT44(uVar28,uVar26);
              puVar12[1] = CONCAT44(uVar24,uVar23);
              puVar12[2] = CONCAT44(uVar27,uVar25);
              puVar12[3] = CONCAT44(uVar30,uVar29);
              if (*(int *)((longlong)puVar12 + 0x2c) != iVar3) {
                FUN_147dc630a(puVar12 + 4,iVar3);
              }
              uVar25 = (undefined4)DAT_14c8463f0;
              uVar27 = (undefined4)((ulonglong)DAT_14c8463f0 >> 0x20);
              uVar29 = (undefined4)DAT_14c8463f8;
              uVar30 = (undefined4)((ulonglong)DAT_14c8463f8 >> 0x20);
              bVar10 = false;
              uVar23 = uVar29;
              uVar24 = uVar30;
              uVar26 = uVar25;
              uVar28 = uVar27;
              goto LAB_147dc5582;
            }
            uVar17 = (undefined4)puVar14[-4];
            uVar18 = (undefined4)((ulonglong)puVar14[-4] >> 0x20);
            uVar19 = (undefined4)puVar14[-3];
            uVar20 = (undefined4)((ulonglong)puVar14[-3] >> 0x20);
            dVar21 = (double)puVar14[-2];
            dVar22 = (double)puVar14[-1];
            uVar31 = uVar29;
            uVar32 = uVar30;
            uVar33 = uVar25;
            uVar34 = uVar27;
            uVar35 = uVar26;
            uVar36 = uVar28;
          }
          uVar25 = SUB84(dVar21,0);
          uVar27 = (undefined4)((ulonglong)dVar21 >> 0x20);
          uVar29 = SUB84(dVar22,0);
          uVar30 = (undefined4)((ulonglong)dVar22 >> 0x20);
          uVar26 = uVar17;
          uVar28 = uVar18;
          if (bVar10) {
            if ((double)CONCAT44(uVar32,uVar31) <= dVar22) {
              uVar31 = uVar29;
              uVar32 = uVar30;
            }
            uVar30 = uVar32;
            uVar29 = uVar31;
            if ((double)CONCAT44(uVar34,uVar33) <= dVar21) {
              uVar33 = uVar25;
              uVar34 = uVar27;
            }
            uVar27 = uVar34;
            uVar25 = uVar33;
            if ((double)CONCAT44(uVar20,uVar19) <= (double)CONCAT44(uVar24,uVar23)) {
              uVar23 = uVar19;
              uVar24 = uVar20;
            }
            uVar20 = uVar24;
            uVar19 = uVar23;
            uVar26 = uVar35;
            uVar28 = uVar36;
            if ((double)CONCAT44(uVar18,uVar17) <= (double)CONCAT44(uVar36,uVar35)) {
              uVar26 = uVar17;
              uVar28 = uVar18;
            }
          }
          plVar1 = puVar12 + 4;
          *(uint *)(puVar12 + 5) = iVar3 + 1U;
          if (*(uint *)((longlong)puVar12 + 0x2c) < iVar3 + 1U) {
            FUN_147dc627a(plVar1,iVar3);
          }
          uVar23 = *(undefined4 *)(puVar14 + -4);
          uVar24 = *(undefined4 *)((longlong)puVar14 + -0x1c);
          uVar31 = *(undefined4 *)(puVar14 + -3);
          uVar32 = *(undefined4 *)((longlong)puVar14 + -0x14);
          uVar33 = *(undefined4 *)((longlong)puVar14 + -0xc);
          uVar34 = *(undefined4 *)(puVar14 + -1);
          uVar35 = *(undefined4 *)((longlong)puVar14 + -4);
          puVar6 = (undefined4 *)(*plVar1 + (longlong)iVar3 * 0x38);
          puVar6[4] = *(undefined4 *)(puVar14 + -2);
          puVar6[5] = uVar33;
          puVar6[6] = uVar34;
          puVar6[7] = uVar35;
          *puVar6 = uVar23;
          puVar6[1] = uVar24;
          puVar6[2] = uVar31;
          puVar6[3] = uVar32;
          bVar9 = *(byte *)(puVar14 + 2);
          *(byte *)(puVar6 + 0xc) = bVar9;
          (*(code *)(&PTR_LAB_14ab1f700)[bVar9])(puVar6 + 8,puVar14);
          puVar14 = puVar14 + 7;
          bVar10 = true;
          lVar8 = lVar8 + -0x38;
          uVar23 = uVar19;
          uVar24 = uVar20;
        } while (lVar8 != 0);
        *puVar12 = CONCAT44(uVar28,uVar26);
        puVar12[1] = CONCAT44(uVar20,uVar19);
        puVar12[2] = CONCAT44(uVar27,uVar25);
        puVar12[3] = CONCAT44(uVar30,uVar29);
        if (*(int *)((longlong)puVar12 + 0x2c) != *(int *)(puVar12 + 5)) {
          FUN_147dc630a(plVar1);
        }
        uVar26 = (undefined4)DAT_14c8463f0;
        uVar28 = (undefined4)((ulonglong)DAT_14c8463f0 >> 0x20);
        uVar29 = (undefined4)DAT_14c8463f8;
        uVar30 = (undefined4)((ulonglong)DAT_14c8463f8 >> 0x20);
        FUN_147dc622a(&local_128,&local_f8);
        FUN_147dc4e1f(local_f8,uStack_f0 & 0xffffffff);
        if (local_f8 != 0) {
          FUN_1400020a8();
        }
        uVar7 = uStack_120 & 0xffffffff;
      } while (1 < (int)uStack_120);
    }
    uVar26 = *(undefined4 *)local_128;
    uVar28 = *(undefined4 *)((longlong)local_128 + 4);
    uVar29 = *(undefined4 *)(local_128 + 1);
    uVar30 = *(undefined4 *)((longlong)local_128 + 0xc);
    uVar23 = *(undefined4 *)((longlong)local_128 + 0x14);
    uVar24 = *(undefined4 *)(local_128 + 3);
    uVar25 = *(undefined4 *)((longlong)local_128 + 0x1c);
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(local_128 + 2);
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar23;
    *(undefined4 *)(param_1 + 4) = uVar24;
    *(undefined4 *)((longlong)param_1 + 0x24) = uVar25;
    *(undefined4 *)(param_1 + 1) = uVar26;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar28;
    *(undefined4 *)(param_1 + 2) = uVar29;
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar30;
    if (local_128 != param_1 + 1) {
      local_108 = CONCAT71(local_108._1_7_,*(byte *)(local_128 + 6));
      (*(code *)(&PTR_LAB_14ab1f700)[*(byte *)(local_128 + 6)])(&local_118,local_128 + 4);
      local_e8 = local_108;
      local_f8 = CONCAT44(uStack_114,local_118);
      uStack_f0 = CONCAT44(uStack_10c,uStack_110);
      uVar7 = param_1[7];
      uVar26 = *(undefined4 *)(param_1 + 5);
      uVar28 = *(undefined4 *)((longlong)param_1 + 0x2c);
      uVar29 = *(undefined4 *)(param_1 + 6);
      uVar30 = *(undefined4 *)((longlong)param_1 + 0x34);
      *(undefined4 *)(param_1 + 5) = local_118;
      *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_114;
      *(undefined4 *)(param_1 + 6) = uStack_110;
      *(undefined4 *)((longlong)param_1 + 0x34) = uStack_10c;
      param_1[7] = local_108;
      local_118 = uVar26;
      uStack_114 = uVar28;
      uStack_110 = uVar29;
      uStack_10c = uVar30;
      local_108 = uVar7;
      (*(code *)(&PTR_FUN_14ab1f6d0)[uVar7 & 0xff])(&local_118);
      uVar7 = uStack_120 & 0xffffffff;
    }
    FUN_147dc4e1f(local_128,uVar7);
    if (local_128 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_e0 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147dc577c FUN_147dc577c body=103 status=ok
// SIG undefined FUN_147dc577c(void)

void FUN_147dc577c(undefined8 *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  pdVar4 = (double *)*param_1;
  if (*(char *)(pdVar4 + 4) == '\x01') {
    if (((ulonglong)param_2[4] & 1) != 0) {
      dVar1 = *pdVar4;
      uVar5 = SUB84(dVar1,0);
      uVar6 = (undefined4)((ulonglong)dVar1 >> 0x20);
      dVar2 = pdVar4[1];
      uVar7 = SUB84(dVar2,0);
      uVar8 = (undefined4)((ulonglong)dVar2 >> 0x20);
      dVar3 = *param_2;
      if (dVar3 <= dVar1) {
        uVar5 = SUB84(dVar3,0);
        uVar6 = (undefined4)((ulonglong)dVar3 >> 0x20);
      }
      *pdVar4 = (double)CONCAT44(uVar6,uVar5);
      dVar1 = param_2[1];
      if (dVar1 <= dVar2) {
        uVar7 = SUB84(dVar1,0);
        uVar8 = (undefined4)((ulonglong)dVar1 >> 0x20);
      }
      pdVar4[1] = (double)CONCAT44(uVar8,uVar7);
      dVar1 = pdVar4[2];
      uVar5 = SUB84(dVar1,0);
      uVar6 = (undefined4)((ulonglong)dVar1 >> 0x20);
      dVar2 = param_2[2];
      if (dVar1 <= dVar2) {
        uVar5 = SUB84(dVar2,0);
        uVar6 = (undefined4)((ulonglong)dVar2 >> 0x20);
      }
      pdVar4[2] = (double)CONCAT44(uVar6,uVar5);
      dVar1 = pdVar4[3];
      uVar5 = SUB84(dVar1,0);
      uVar6 = (undefined4)((ulonglong)dVar1 >> 0x20);
      dVar2 = param_2[3];
      if (dVar1 <= dVar2) {
        uVar5 = SUB84(dVar2,0);
        uVar6 = (undefined4)((ulonglong)dVar2 >> 0x20);
      }
      pdVar4[3] = (double)CONCAT44(uVar6,uVar5);
      return;
    }
  }
  else if (((ulonglong)param_2[4] & 1) != 0) {
    pdVar4[4] = param_2[4];
    dVar1 = *param_2;
    dVar2 = param_2[1];
    dVar3 = param_2[3];
    pdVar4[2] = param_2[2];
    pdVar4[3] = dVar3;
    *pdVar4 = dVar1;
    pdVar4[1] = dVar2;
  }
  return;
}



// FUNCTION 147dc57e3 FUN_147dc57e3 body=1286 status=ok
// SIG undefined FUN_147dc57e3(void)

void FUN_147dc57e3(longlong param_1,uint param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  undefined8 *puVar12;
  char cVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  byte bVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  float fVar25;
  undefined1 auStack_3b8 [32];
  longlong *local_398;
  int local_38c;
  undefined8 *local_388;
  undefined8 *local_380;
  longlong local_378;
  longlong local_370;
  undefined4 local_368 [188];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong lStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  if (1 < (int)param_2) {
    memset(local_368,0,0x2f0);
    local_370 = (ulonglong)param_2 * 0x30 + param_1 + -0x30;
    local_378 = param_1;
    fVar25 = logf((float)(int)param_2);
    local_368[0] = (int)(longlong)(fVar25 + fVar25);
    plVar16 = &local_378;
    do {
      puVar17 = (undefined8 *)*plVar16;
      puVar18 = (undefined8 *)plVar16[1];
      local_38c = (int)plVar16[2];
      uVar14 = (int)((ulonglong)((longlong)puVar18 - (longlong)puVar17) >> 4) * -0x55555555 + 1;
      puVar20 = puVar17;
      puVar22 = puVar18;
      local_398 = plVar16;
      if (local_38c != 0) {
LAB_147dc58c5:
        plVar16 = local_398;
        if (8 < (int)uVar14) {
          uVar15 = (ulonglong)(uVar14 >> 1);
          uVar1 = puVar17[uVar15 * 6];
          uVar2 = (puVar17 + uVar15 * 6)[1];
          uVar3 = puVar17[uVar15 * 6 + 2];
          uVar4 = (puVar17 + uVar15 * 6 + 2)[1];
          uVar5 = puVar17[uVar15 * 6 + 4];
          uVar6 = (puVar17 + uVar15 * 6 + 4)[1];
          uVar7 = *puVar17;
          uVar8 = puVar17[1];
          uVar9 = puVar17[2];
          uVar10 = puVar17[3];
          uVar11 = puVar17[5];
          puVar17[uVar15 * 6 + 4] = puVar17[4];
          (puVar17 + uVar15 * 6 + 4)[1] = uVar11;
          puVar17[uVar15 * 6 + 2] = uVar9;
          (puVar17 + uVar15 * 6 + 2)[1] = uVar10;
          puVar17[uVar15 * 6] = uVar7;
          (puVar17 + uVar15 * 6)[1] = uVar8;
          puVar17[4] = uVar5;
          puVar17[5] = uVar6;
          puVar17[2] = uVar3;
          puVar17[3] = uVar4;
          *puVar17 = uVar1;
          puVar17[1] = uVar2;
          puVar24 = puVar18 + 6;
          puVar23 = puVar17;
          local_388 = puVar20;
          local_380 = puVar22;
          do {
            puVar22 = puVar23 + 6;
            puVar12 = puVar23 + 6;
            do {
              puVar23 = puVar12;
              puVar20 = puVar22;
              if (puVar18 < puVar23) break;
              local_58 = puVar23[4];
              local_78 = *puVar23;
              uStack_70 = puVar23[1];
              local_68 = puVar23[2];
              uStack_60 = puVar23[3];
              lStack_50 = puVar23[5];
              if ((DAT_14c950c29 == 1) && (lStack_50 != 0)) {
                FUN_1456cec3c();
              }
              cVar13 = FUN_147dc6118(*param_3,puVar17,&local_78);
              puVar22 = puVar20 + 6;
              puVar12 = puVar23 + 6;
            } while (cVar13 == '\0');
            puVar12 = puVar24 + -0xc;
            do {
              puVar19 = puVar24;
              puVar22 = puVar12;
              puVar24 = puVar19 + -6;
              if (puVar24 <= puVar17) break;
              local_58 = puVar17[4];
              local_78 = *puVar17;
              uStack_70 = puVar17[1];
              local_68 = puVar17[2];
              uStack_60 = puVar17[3];
              lStack_50 = puVar17[5];
              if ((DAT_14c950c29 == 1) && (lStack_50 != 0)) {
                FUN_1456cec3c();
              }
              cVar13 = FUN_147dc6118(*param_3,puVar24,&local_78);
              puVar12 = puVar22 + -6;
            } while (cVar13 == '\0');
            if (puVar24 < puVar23) goto LAB_147dc5aa3;
            uVar1 = *puVar23;
            uVar2 = puVar23[1];
            uVar3 = puVar23[2];
            uVar4 = puVar23[3];
            uVar5 = puVar23[4];
            uVar6 = puVar23[5];
            uVar7 = *puVar24;
            uVar8 = puVar19[-5];
            uVar9 = puVar19[-4];
            uVar10 = puVar19[-3];
            uVar11 = puVar19[-1];
            puVar23[4] = puVar19[-2];
            puVar23[5] = uVar11;
            puVar23[2] = uVar9;
            puVar23[3] = uVar10;
            *puVar23 = uVar7;
            puVar23[1] = uVar8;
            puVar19[-2] = uVar5;
            puVar19[-1] = uVar6;
            puVar19[-4] = uVar3;
            puVar19[-3] = uVar4;
            *puVar24 = uVar1;
            puVar19[-5] = uVar2;
          } while( true );
        }
        for (; local_398 = plVar16, puVar22 = puVar17, bVar21 = DAT_14c950c29, puVar20 = puVar17,
            puVar17 < puVar18; puVar18 = puVar18 + -6) {
          while (puVar24 = puVar22, puVar20 = puVar20 + 6, puVar20 <= puVar18) {
            local_58 = puVar20[4];
            local_78 = *puVar20;
            uStack_70 = puVar20[1];
            local_68 = puVar20[2];
            uStack_60 = puVar20[3];
            lStack_50 = puVar20[5];
            if (((bVar21 & 1) != 0) && (lStack_50 != 0)) {
              FUN_1456cec3c();
              bVar21 = DAT_14c950c29;
            }
            cVar13 = FUN_147dc6118(*param_3,puVar24,&local_78);
            puVar22 = puVar20;
            if (cVar13 == '\0') {
              puVar22 = puVar24;
            }
          }
          local_78 = *puVar24;
          uStack_70 = puVar24[1];
          local_68 = puVar24[2];
          uStack_60 = puVar24[3];
          local_58 = puVar24[4];
          lStack_50 = puVar24[5];
          uVar6 = local_78;
          uVar7 = uStack_70;
          uVar1 = *puVar18;
          uVar2 = puVar18[1];
          uVar3 = puVar18[2];
          uVar4 = puVar18[3];
          uVar5 = puVar18[5];
          puVar24[4] = puVar18[4];
          puVar24[5] = uVar5;
          puVar24[2] = uVar3;
          puVar24[3] = uVar4;
          *puVar24 = uVar1;
          puVar24[1] = uVar2;
          local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
          uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
          puVar18[4] = local_58;
          puVar18[5] = lStack_50;
          puVar18[2] = local_68;
          puVar18[3] = uStack_60;
          *(undefined4 *)puVar18 = (undefined4)local_78;
          *(undefined4 *)((longlong)puVar18 + 4) = local_78._4_4_;
          *(undefined4 *)(puVar18 + 1) = (undefined4)uStack_70;
          *(undefined4 *)((longlong)puVar18 + 0xc) = uStack_70._4_4_;
          plVar16 = local_398;
          local_78 = uVar6;
          uStack_70 = uVar7;
        }
        goto LAB_147dc5cbd;
      }
LAB_147dc5cd7:
      FUN_147dc5cea(puVar17,uVar14,param_3);
      plVar16 = local_398;
LAB_147dc5cbd:
      plVar16 = plVar16 + -3;
    } while (&local_378 <= plVar16);
  }
  if ((local_48 ^ (ulonglong)auStack_3b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_147dc5aa3:
  local_78 = *puVar17;
  uStack_70 = puVar17[1];
  local_68 = puVar17[2];
  uStack_60 = puVar17[3];
  local_58 = puVar17[4];
  lStack_50 = puVar17[5];
  uVar6 = local_78;
  uVar7 = uStack_70;
  uVar1 = *puVar24;
  uVar2 = puVar19[-5];
  uVar3 = puVar19[-4];
  uVar4 = puVar19[-3];
  uVar5 = puVar19[-1];
  puVar17[4] = puVar19[-2];
  puVar17[5] = uVar5;
  puVar17[2] = uVar3;
  puVar17[3] = uVar4;
  *puVar17 = uVar1;
  puVar17[1] = uVar2;
  local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  puVar19[-2] = local_58;
  puVar19[-1] = lStack_50;
  puVar19[-4] = local_68;
  puVar19[-3] = uStack_60;
  *(undefined4 *)puVar24 = (undefined4)local_78;
  *(undefined4 *)((longlong)puVar19 + -0x2c) = local_78._4_4_;
  *(undefined4 *)(puVar19 + -5) = (undefined4)uStack_70;
  *(undefined4 *)((longlong)puVar19 + -0x24) = uStack_70._4_4_;
  local_38c = local_38c + -1;
  puVar19 = puVar19 + -0xc;
  local_78 = uVar6;
  uStack_70 = uVar7;
  if ((longlong)puVar22 - (longlong)local_388 < (longlong)local_380 - (longlong)puVar20) {
    plVar16 = local_398;
    if (puVar23 < puVar18) {
      *local_398 = (longlong)puVar23;
      local_398[1] = (longlong)puVar18;
      *(int *)(local_398 + 2) = local_38c;
      plVar16 = local_398 + 3;
    }
    puVar20 = puVar17;
    if (puVar24 <= puVar17 + 6) goto LAB_147dc5cbd;
  }
  else {
    if (puVar17 + 6 < puVar24) {
      *local_398 = (longlong)puVar17;
      local_398[1] = (longlong)puVar19;
      *(int *)(local_398 + 2) = local_38c;
      local_398 = local_398 + 3;
    }
    plVar16 = local_398;
    puVar17 = puVar23;
    puVar19 = puVar18;
    puVar22 = puVar18;
    if (puVar18 <= puVar23) goto LAB_147dc5cbd;
  }
  local_398 = plVar16;
  uVar14 = (int)((ulonglong)((longlong)puVar22 - (longlong)puVar20) >> 4) * -0x55555555 + 1;
  puVar18 = puVar19;
  if (local_38c == 0) goto LAB_147dc5cd7;
  goto LAB_147dc58c5;
}



// FUNCTION 147dc5cea FUN_147dc5cea body=1068 status=ok
// SIG undefined FUN_147dc5cea(void)

void FUN_147dc5cea(undefined8 *param_1,uint param_2,undefined8 *param_3)

{
  ulonglong uVar1;
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
  char cVar13;
  longlong lVar14;
  int iVar15;
  byte bVar16;
  undefined8 *puVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  bool bVar23;
  undefined1 auStack_a8 [40];
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80 = param_3;
  if (param_2 != 0) {
    iVar18 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    bVar16 = DAT_14c950c29;
    iVar20 = iVar18;
joined_r0x000147dc5d36:
    do {
      iVar15 = iVar18 * 2 + 1;
      if (iVar15 < (int)param_2) {
        iVar19 = iVar18 * 2 + 2;
        if (iVar19 < (int)param_2) {
          lVar14 = (longlong)iVar15;
          local_58 = param_1[lVar14 * 6 + 4];
          local_78 = param_1[lVar14 * 6];
          uStack_70 = (param_1 + lVar14 * 6)[1];
          local_68 = param_1[lVar14 * 6 + 2];
          uStack_60 = (param_1 + lVar14 * 6 + 2)[1];
          uStack_50 = param_1[lVar14 * 6 + 5];
          if (((bVar16 & 1) != 0) && (uStack_50 != 0)) {
            FUN_1456cec3c();
            bVar16 = DAT_14c950c29;
          }
          cVar13 = FUN_147dc6118(*local_80,param_1 + (longlong)iVar19 * 6,&local_78);
          if (cVar13 == '\0') {
            iVar15 = iVar19;
          }
        }
        lVar14 = (longlong)iVar15;
        local_58 = param_1[lVar14 * 6 + 4];
        local_78 = param_1[lVar14 * 6];
        uStack_70 = (param_1 + lVar14 * 6)[1];
        local_68 = param_1[lVar14 * 6 + 2];
        uStack_60 = (param_1 + lVar14 * 6 + 2)[1];
        uStack_50 = param_1[lVar14 * 6 + 5];
        if (((bVar16 & 1) != 0) && (uStack_50 != 0)) {
          FUN_1456cec3c();
          bVar16 = DAT_14c950c29;
        }
        puVar21 = param_1 + (longlong)iVar18 * 6;
        cVar13 = FUN_147dc6118(*local_80,puVar21,&local_78);
        if (cVar13 != '\0') {
          puVar17 = param_1 + lVar14 * 6;
          uVar2 = *puVar21;
          uVar3 = puVar21[1];
          local_68 = puVar21[2];
          uStack_60 = puVar21[3];
          local_58 = puVar21[4];
          uStack_50 = puVar21[5];
          uVar4 = *puVar17;
          uVar5 = puVar17[1];
          uVar6 = puVar17[2];
          uVar7 = puVar17[3];
          uVar8 = puVar17[5];
          puVar21[4] = puVar17[4];
          puVar21[5] = uVar8;
          puVar21[2] = uVar6;
          puVar21[3] = uVar7;
          *puVar21 = uVar4;
          puVar21[1] = uVar5;
          local_78._0_4_ = (undefined4)uVar2;
          local_78._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_70._0_4_ = (undefined4)uVar3;
          uStack_70._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          puVar17[4] = local_58;
          puVar17[5] = uStack_50;
          puVar17[2] = local_68;
          puVar17[3] = uStack_60;
          *(undefined4 *)puVar17 = (undefined4)local_78;
          *(undefined4 *)((longlong)puVar17 + 4) = local_78._4_4_;
          *(undefined4 *)(puVar17 + 1) = (undefined4)uStack_70;
          *(undefined4 *)((longlong)puVar17 + 0xc) = uStack_70._4_4_;
          iVar18 = iVar15;
          local_78 = uVar2;
          uStack_70 = uVar3;
          goto joined_r0x000147dc5d36;
        }
      }
      bVar23 = iVar20 != 0;
      iVar18 = iVar20 + -1;
      bVar16 = DAT_14c950c29;
      iVar20 = iVar18;
    } while (bVar23);
    if (1 < (int)param_2) {
      uVar22 = (ulonglong)param_2 - 1;
      uVar2 = *param_1;
      uVar3 = param_1[1];
      local_68 = param_1[2];
      uStack_60 = param_1[3];
      uVar4 = param_1[4];
      lVar14 = param_1[5];
      uVar5 = param_1[uVar22 * 6];
      uVar6 = (param_1 + uVar22 * 6)[1];
      uVar7 = param_1[uVar22 * 6 + 2];
      uVar8 = (param_1 + uVar22 * 6 + 2)[1];
      uVar9 = (param_1 + uVar22 * 6 + 4)[1];
      param_1[4] = param_1[uVar22 * 6 + 4];
      param_1[5] = uVar9;
      param_1[2] = uVar7;
      param_1[3] = uVar8;
      *param_1 = uVar5;
      param_1[1] = uVar6;
      local_78._0_4_ = (undefined4)uVar2;
      local_78._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_70._0_4_ = (undefined4)uVar3;
      uStack_70._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      local_58._0_4_ = (undefined4)uVar4;
      local_58._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_50._0_4_ = (undefined4)lVar14;
      uStack_50._4_4_ = (undefined4)((ulonglong)lVar14 >> 0x20);
      puVar21 = param_1 + uVar22 * 6 + 4;
      *(undefined4 *)puVar21 = (undefined4)local_58;
      *(undefined4 *)((longlong)puVar21 + 4) = local_58._4_4_;
      *(undefined4 *)(puVar21 + 1) = (undefined4)uStack_50;
      *(undefined4 *)((longlong)puVar21 + 0xc) = uStack_50._4_4_;
      param_1[uVar22 * 6 + 2] = local_68;
      (param_1 + uVar22 * 6 + 2)[1] = uStack_60;
      puVar21 = param_1 + uVar22 * 6;
      *(undefined4 *)puVar21 = (undefined4)local_78;
      *(undefined4 *)((longlong)puVar21 + 4) = local_78._4_4_;
      *(undefined4 *)(puVar21 + 1) = (undefined4)uStack_70;
      *(undefined4 *)((longlong)puVar21 + 0xc) = uStack_70._4_4_;
      bVar16 = DAT_14c950c29;
      local_78 = uVar2;
      uStack_70 = uVar3;
      local_58 = uVar4;
      uStack_50 = lVar14;
      if (param_2 != 2) {
        do {
          iVar18 = 0;
          iVar15 = 1;
          iVar20 = 0;
          do {
            iVar18 = iVar18 + 2;
            iVar19 = iVar15;
            if ((longlong)iVar18 < (longlong)uVar22) {
              lVar14 = (longlong)iVar15;
              local_58 = param_1[lVar14 * 6 + 4];
              local_78 = param_1[lVar14 * 6];
              uStack_70 = (param_1 + lVar14 * 6)[1];
              local_68 = param_1[lVar14 * 6 + 2];
              uStack_60 = (param_1 + lVar14 * 6 + 2)[1];
              uStack_50 = param_1[lVar14 * 6 + 5];
              if (((bVar16 & 1) != 0) && (uStack_50 != 0)) {
                FUN_1456cec3c();
                bVar16 = DAT_14c950c29;
              }
              cVar13 = FUN_147dc6118(*local_80,param_1 + (longlong)iVar18 * 6,&local_78);
              if (cVar13 == '\0') {
                iVar19 = iVar18;
              }
            }
            lVar14 = (longlong)iVar19;
            local_58 = param_1[lVar14 * 6 + 4];
            local_78 = param_1[lVar14 * 6];
            uStack_70 = (param_1 + lVar14 * 6)[1];
            local_68 = param_1[lVar14 * 6 + 2];
            uStack_60 = (param_1 + lVar14 * 6 + 2)[1];
            uStack_50 = param_1[lVar14 * 6 + 5];
            if (((bVar16 & 1) != 0) && (uStack_50 != 0)) {
              FUN_1456cec3c();
              bVar16 = DAT_14c950c29;
            }
            puVar21 = param_1 + (longlong)iVar20 * 6;
            cVar13 = FUN_147dc6118(*local_80,puVar21,&local_78);
            if (cVar13 == '\0') break;
            puVar17 = param_1 + lVar14 * 6;
            uVar2 = *puVar21;
            uVar3 = puVar21[1];
            uVar4 = puVar21[2];
            uVar5 = puVar21[3];
            uVar6 = puVar21[4];
            uVar7 = puVar21[5];
            uVar8 = *puVar17;
            uVar9 = puVar17[1];
            uVar10 = puVar17[2];
            uVar11 = puVar17[3];
            uVar12 = puVar17[5];
            puVar21[4] = puVar17[4];
            puVar21[5] = uVar12;
            puVar21[2] = uVar10;
            puVar21[3] = uVar11;
            *puVar21 = uVar8;
            puVar21[1] = uVar9;
            local_58._0_4_ = (undefined4)uVar6;
            local_58._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
            uStack_50._0_4_ = (undefined4)uVar7;
            uStack_50._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
            *(undefined4 *)(puVar17 + 4) = (undefined4)local_58;
            *(undefined4 *)((longlong)puVar17 + 0x24) = local_58._4_4_;
            *(undefined4 *)(puVar17 + 5) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)puVar17 + 0x2c) = uStack_50._4_4_;
            puVar17[2] = uVar4;
            puVar17[3] = uVar5;
            *puVar17 = uVar2;
            puVar17[1] = uVar3;
            iVar18 = iVar19 * 2;
            iVar15 = iVar19 * 2 + 1;
            iVar20 = iVar19;
          } while ((longlong)iVar15 < (longlong)uVar22);
          uVar1 = uVar22 - 1;
          uVar2 = *param_1;
          uVar3 = param_1[1];
          local_68 = param_1[2];
          uStack_60 = param_1[3];
          uVar4 = param_1[4];
          lVar14 = param_1[5];
          uVar5 = param_1[uVar1 * 6];
          uVar6 = (param_1 + uVar1 * 6)[1];
          uVar7 = param_1[uVar1 * 6 + 2];
          uVar8 = (param_1 + uVar1 * 6 + 2)[1];
          uVar9 = (param_1 + uVar1 * 6 + 4)[1];
          param_1[4] = param_1[uVar1 * 6 + 4];
          param_1[5] = uVar9;
          param_1[2] = uVar7;
          param_1[3] = uVar8;
          *param_1 = uVar5;
          param_1[1] = uVar6;
          local_78._0_4_ = (undefined4)uVar2;
          local_78._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_70._0_4_ = (undefined4)uVar3;
          uStack_70._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          local_58._0_4_ = (undefined4)uVar4;
          local_58._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_50._0_4_ = (undefined4)lVar14;
          uStack_50._4_4_ = (undefined4)((ulonglong)lVar14 >> 0x20);
          puVar21 = param_1 + uVar1 * 6 + 4;
          *(undefined4 *)puVar21 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar21 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar21 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar21 + 0xc) = uStack_50._4_4_;
          param_1[uVar1 * 6 + 2] = local_68;
          (param_1 + uVar1 * 6 + 2)[1] = uStack_60;
          puVar21 = param_1 + uVar1 * 6;
          *(undefined4 *)puVar21 = (undefined4)local_78;
          *(undefined4 *)((longlong)puVar21 + 4) = local_78._4_4_;
          *(undefined4 *)(puVar21 + 1) = (undefined4)uStack_70;
          *(undefined4 *)((longlong)puVar21 + 0xc) = uStack_70._4_4_;
          bVar23 = 2 < uVar22;
          uVar22 = uVar1;
          local_78 = uVar2;
          uStack_70 = uVar3;
          local_58 = uVar4;
          uStack_50 = lVar14;
        } while (bVar23);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147dc6118 FUN_147dc6118 body=273 status=ok
// SIG undefined FUN_147dc6118(void)

undefined8 FUN_147dc6118(int *param_1,double *param_2,double *param_3)

{
  sbyte sVar1;
  uint uVar2;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  ulonglong uVar3;
  
  iVar6 = 0;
  uVar2 = *param_1 - 1;
  uVar3 = (ulonglong)uVar2;
  iVar7 = 0;
  if (-1 < (int)uVar2) {
    iVar7 = 0;
    uVar5 = 0;
    uVar4 = uVar2;
    do {
      sVar1 = (((uint)(int)((param_2[1] + param_2[3]) * 0.5 * 1.52587890625e-05) >> (uVar4 & 0x1f) &
               1) != 0 |
              (char)uVar5 * '\x04' +
              ((byte)((uint)(int)((*param_2 + param_2[2]) * 0.5 * 1.52587890625e-05) >>
                     ((byte)uVar4 & 0x1f)) & 1) * '\x02') * '\x02';
      iVar7 = (0x361e9cb4U >> sVar1 & 3) + iVar7 * 4;
      uVar5 = 0x8fe65831U >> sVar1 & 3;
      bVar8 = uVar4 != 0;
      uVar4 = uVar4 - 1;
    } while (bVar8);
  }
  if (-1 < (int)uVar2) {
    iVar6 = 0;
    uVar2 = 0;
    do {
      uVar4 = (uint)uVar3;
      sVar1 = (((uint)(int)((param_3[1] + param_3[3]) * 0.5 * 1.52587890625e-05) >> (uVar4 & 0x1f) &
               1) != 0 |
              (char)uVar2 * '\x04' +
              ((byte)((uint)(int)((*param_3 + param_3[2]) * 0.5 * 1.52587890625e-05) >>
                     ((byte)uVar3 & 0x1f)) & 1) * '\x02') * '\x02';
      iVar6 = (0x361e9cb4U >> sVar1 & 3) + iVar6 * 4;
      uVar2 = 0x8fe65831U >> sVar1 & 3;
      uVar3 = (ulonglong)(uVar4 - 1);
    } while (uVar4 != 0);
  }
  return CONCAT71((int7)(uVar3 >> 8),iVar7 < iVar6);
}



// FUNCTION 147dc622a FUN_147dc622a body=80 status=ok
// SIG undefined FUN_147dc622a(void)

longlong * FUN_147dc622a(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_147dc4e1f(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 147dc627a FUN_147dc627a body=143 status=ok
// SIG undefined FUN_147dc627a(void)

void FUN_147dc627a(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
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
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0x38,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x38,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147dc630a FUN_147dc630a body=109 status=ok
// SIG undefined FUN_147dc630a(void)

void FUN_147dc630a(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x38,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0x38,8);
  }
  return;
}



// FUNCTION 147dc63a4 FUN_147dc63a4 body=118 status=ok
// SIG undefined FUN_147dc63a4(void)

void FUN_147dc63a4(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_147dc641c(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_147dc64a2(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147dc641c FUN_147dc641c body=132 status=ok
// SIG undefined FUN_147dc641c(void)

void FUN_147dc641c(longlong param_1,int param_2)

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



// FUNCTION 147dc64a2 FUN_147dc64a2 body=63 status=ok
// SIG undefined FUN_147dc64a2(void)

void FUN_147dc64a2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147dc64e2(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 147dc64e2 FUN_147dc64e2 body=97 status=ok
// SIG undefined FUN_147dc64e2(void)

ulonglong FUN_147dc64e2(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 147dc6544 FUN_147dc6544 body=536 status=ok
// SIG undefined FUN_147dc6544(void)

ulonglong FUN_147dc6544(undefined8 *param_1,longlong param_2,double *param_3,double param_4,
                       undefined8 *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  double *pdVar5;
  int iVar6;
  double *unaff_RDI;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  uint local_8c;
  undefined8 local_88;
  undefined8 local_80;
  int local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((&DAT_14ab1ee60)[*(byte *)(param_2 + 0x40)] == '\x01') {
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if ((longlong)*(int *)(param_2 + 0x38) != 0) {
      pdVar5 = *(double **)(param_2 + 0x30);
      lVar8 = (longlong)*(int *)(param_2 + 0x38) * 0x48;
      do {
        dVar1 = *param_3;
        dVar12 = param_3[1];
        dVar2 = param_3[2];
        dVar13 = dVar2;
        if (pdVar5[5] <= dVar2) {
          dVar13 = pdVar5[5];
        }
        dVar10 = pdVar5[2];
        if (pdVar5[2] <= dVar13) {
          dVar10 = dVar13;
        }
        dVar13 = dVar12;
        if (pdVar5[4] <= dVar12) {
          dVar13 = pdVar5[4];
        }
        dVar11 = pdVar5[1];
        if (pdVar5[1] <= dVar13) {
          dVar11 = dVar13;
        }
        dVar13 = dVar1;
        if (pdVar5[3] <= dVar1) {
          dVar13 = pdVar5[3];
        }
        dVar3 = *pdVar5;
        uVar14 = SUB84(dVar3,0);
        uVar15 = (undefined4)((ulonglong)dVar3 >> 0x20);
        if (dVar3 <= dVar13) {
          uVar14 = SUB84(dVar13,0);
          uVar15 = (undefined4)((ulonglong)dVar13 >> 0x20);
        }
        dVar1 = (double)CONCAT44(uVar15,uVar14) - dVar1;
        if ((dVar10 - dVar2) * (dVar10 - dVar2) +
            dVar1 * dVar1 + (dVar11 - dVar12) * (dVar11 - dVar12) <= param_4) {
          local_88 = *param_5;
          local_80 = param_5[1];
          local_98 = &local_88;
          cVar4 = FUN_147dc6544(param_1,pdVar5,param_3,param_4);
          if (cVar4 == '\0') goto LAB_147dc6663;
        }
        pdVar5 = pdVar5 + 9;
        lVar8 = lVar8 + -0x48;
      } while (lVar8 != 0);
    }
  }
  else {
    pdVar5 = (double *)
             (**(code **)(*(longlong *)*param_1 + 0x18))
                       ((longlong *)*param_1,*(undefined4 *)(param_2 + 0x30),&local_8c);
    iVar6 = *(int *)(param_2 + 0x34);
    if (iVar6 != 0) {
      iVar9 = *(int *)(param_2 + 0x30);
      unaff_RDI = pdVar5;
      do {
        dVar1 = param_3[2];
        dVar12 = dVar1;
        if (unaff_RDI[5] <= dVar1) {
          dVar12 = unaff_RDI[5];
        }
        dVar2 = param_3[1];
        dVar13 = dVar2;
        if (unaff_RDI[4] <= dVar2) {
          dVar13 = unaff_RDI[4];
        }
        dVar10 = *param_3;
        dVar11 = dVar10;
        if (unaff_RDI[3] <= dVar10) {
          dVar11 = unaff_RDI[3];
        }
        dVar3 = unaff_RDI[2];
        uVar14 = SUB84(dVar3,0);
        uVar15 = (undefined4)((ulonglong)dVar3 >> 0x20);
        if (dVar3 <= dVar12) {
          uVar14 = SUB84(dVar12,0);
          uVar15 = (undefined4)((ulonglong)dVar12 >> 0x20);
        }
        dVar12 = *unaff_RDI;
        if (*unaff_RDI <= dVar11) {
          dVar12 = dVar11;
        }
        dVar11 = unaff_RDI[1];
        if (unaff_RDI[1] <= dVar13) {
          dVar11 = dVar13;
        }
        dVar1 = (double)CONCAT44(uVar15,uVar14) - dVar1;
        if ((dVar1 * dVar1 +
             (dVar12 - dVar10) * (dVar12 - dVar10) + (dVar11 - dVar2) * (dVar11 - dVar2) <= param_4)
           && (local_74 = iVar9, cVar4 = (*(code *)*param_5)(param_5[1],&local_74), cVar4 == '\0'))
        goto LAB_147dc6663;
        unaff_RDI = (double *)((longlong)unaff_RDI + (ulonglong)local_8c);
        iVar9 = iVar9 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  }
LAB_147dc6729:
  if ((local_70 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
LAB_147dc6663:
  uVar7 = 0;
  goto LAB_147dc6729;
}



// FUNCTION 147dc675e FUN_147dc675e body=368 status=ok
// SIG undefined FUN_147dc675e(void)

void FUN_147dc675e(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  float local_e0;
  float local_d8;
  float local_d0;
  undefined8 *local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_108;
  dVar1 = (double)param_2[3];
  dVar2 = sin(((double)param_2[7] * 0.5 * 3.1415927410125732) / 180.0);
  dVar3 = cos(((double)param_2[7] * 0.5 * 3.1415927410125732) / 180.0);
  local_80 = *param_3;
  local_c8 = &local_80;
  local_78 = param_3[1];
  local_d0 = (float)dVar3;
  local_d8 = (float)dVar2;
  local_e0 = (float)(double)param_2[7];
  local_88 = param_2[6];
  local_e8 = &local_98;
  local_98 = param_2[4];
  uStack_90 = param_2[5];
  local_a8 = param_2[2];
  local_b8 = *param_2;
  uStack_b0 = param_2[1];
  FUN_147dc68d0(param_1,param_1 + 8,&local_b8,SUB84(dVar1 * dVar1,0));
  if ((local_70 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dc68d0 FUN_147dc68d0 body=628 status=ok
// SIG undefined FUN_147dc68d0(void)

ulonglong FUN_147dc68d0(undefined8 *param_1,longlong param_2,double *param_3,double param_4,
                       double param_5,undefined4 param_6,float param_7,float param_8,
                       undefined8 *param_9)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  longlong unaff_RBX;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  double *pdVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_128 [32];
  double local_108;
  longlong local_100;
  float local_f8;
  float local_f0;
  undefined8 *local_e8;
  double local_d8;
  double dStack_d0;
  double local_c8;
  uint local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((&DAT_14ab1ee60)[*(byte *)(param_2 + 0x40)] == '\x01') {
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    if ((longlong)*(int *)(param_2 + 0x38) != 0) {
      pdVar10 = *(double **)(param_2 + 0x30);
      lVar8 = (longlong)*(int *)(param_2 + 0x38) * 0x48;
      do {
        dVar1 = *param_3;
        dVar2 = param_3[1];
        dVar3 = param_3[2];
        dVar13 = dVar3;
        if (pdVar10[5] <= dVar3) {
          dVar13 = pdVar10[5];
        }
        dVar11 = pdVar10[2];
        if (pdVar10[2] <= dVar13) {
          dVar11 = dVar13;
        }
        dVar13 = dVar2;
        if (pdVar10[4] <= dVar2) {
          dVar13 = pdVar10[4];
        }
        dVar12 = pdVar10[1];
        if (pdVar10[1] <= dVar13) {
          dVar12 = dVar13;
        }
        dVar13 = dVar1;
        if (pdVar10[3] <= dVar1) {
          dVar13 = pdVar10[3];
        }
        dVar4 = *pdVar10;
        uVar14 = SUB84(dVar4,0);
        uVar15 = (undefined4)((ulonglong)dVar4 >> 0x20);
        if (dVar4 <= dVar13) {
          uVar14 = SUB84(dVar13,0);
          uVar15 = (undefined4)((ulonglong)dVar13 >> 0x20);
        }
        dVar1 = (double)CONCAT44(uVar15,uVar14) - dVar1;
        if ((dVar11 - dVar3) * (dVar11 - dVar3) +
            dVar1 * dVar1 + (dVar12 - dVar2) * (dVar12 - dVar2) <= param_4) {
          local_b0 = *param_9;
          local_a8 = param_9[1];
          local_f0 = param_8;
          local_f8 = param_7;
          local_100 = CONCAT44(local_100._4_4_,param_6);
          local_108 = param_5;
          local_e8 = &local_b0;
          cVar5 = FUN_147dc68d0(param_1,pdVar10,param_3,param_4);
          if (cVar5 == '\0') goto LAB_147dc6a5b;
        }
        pdVar10 = pdVar10 + 9;
        lVar8 = lVar8 + -0x48;
      } while (lVar8 != 0);
    }
  }
  else {
    lVar8 = (**(code **)(*(longlong *)*param_1 + 0x18))
                      ((longlong *)*param_1,*(undefined4 *)(param_2 + 0x30),&local_b4);
    iVar7 = *(int *)(param_2 + 0x34);
    if (iVar7 != 0) {
      iVar9 = *(int *)(param_2 + 0x30);
      unaff_RBX = lVar8;
      do {
        local_c8 = param_3[2];
        local_d8 = *param_3;
        dStack_d0 = param_3[1];
        local_108 = (double)param_8;
        local_100 = unaff_RBX;
        cVar5 = FUN_147dc6b45(&local_d8,param_4,param_5,(double)param_7);
        if (cVar5 != '\0') {
          local_d8 = (double)CONCAT44(local_d8._4_4_,iVar9);
          cVar5 = (*(code *)*param_9)(param_9[1],&local_d8);
          if (cVar5 == '\0') goto LAB_147dc6a5b;
        }
        unaff_RBX = unaff_RBX + (ulonglong)local_b4;
        iVar9 = iVar9 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  }
LAB_147dc6aea:
  if ((local_a0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
LAB_147dc6a5b:
  uVar6 = 0;
  goto LAB_147dc6aea;
}



// FUNCTION 147dc6b45 FUN_147dc6b45 body=796 status=ok
// SIG undefined FUN_147dc6b45(void)

bool FUN_147dc6b45(double *param_1,double param_2,double *param_3,double param_4,double param_5,
                  double *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  
  dVar1 = param_6[5];
  dVar11 = param_1[2];
  uVar16 = SUB84(dVar11,0);
  uVar17 = (undefined4)((ulonglong)dVar11 >> 0x20);
  if (dVar1 <= dVar11) {
    uVar16 = SUB84(dVar1,0);
    uVar17 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  dVar2 = param_6[4];
  dVar3 = *param_1;
  dVar4 = param_1[1];
  uVar18 = SUB84(dVar4,0);
  uVar19 = (int)((ulonglong)dVar4 >> 0x20);
  if (dVar2 <= dVar4) {
    uVar18 = SUB84(dVar2,0);
    uVar19 = (int)((ulonglong)dVar2 >> 0x20);
  }
  dVar5 = param_6[3];
  uVar20 = SUB84(dVar3,0);
  uVar21 = (int)((ulonglong)dVar3 >> 0x20);
  if (dVar5 <= dVar3) {
    uVar20 = SUB84(dVar5,0);
    uVar21 = (int)((ulonglong)dVar5 >> 0x20);
  }
  dVar6 = param_6[2];
  uVar22 = SUB84(dVar6,0);
  uVar23 = (int)((ulonglong)dVar6 >> 0x20);
  if (dVar6 <= (double)CONCAT44(uVar17,uVar16)) {
    uVar22 = uVar16;
    uVar23 = uVar17;
  }
  dVar15 = *param_6;
  dVar14 = param_6[1];
  uVar16 = SUB84(dVar14,0);
  uVar17 = (int)((ulonglong)dVar14 >> 0x20);
  if (dVar14 <= (double)CONCAT44(uVar19,uVar18)) {
    uVar16 = uVar18;
    uVar17 = uVar19;
  }
  uVar18 = SUB84(dVar15,0);
  uVar19 = (int)((ulonglong)dVar15 >> 0x20);
  if (dVar15 <= (double)CONCAT44(uVar21,uVar20)) {
    uVar18 = uVar20;
    uVar19 = uVar21;
  }
  dVar12 = (double)CONCAT44(uVar23,uVar22) - dVar11;
  dVar7 = (double)CONCAT44(uVar17,uVar16) - dVar4;
  dVar8 = (double)CONCAT44(uVar19,uVar18) - dVar3;
  if (dVar12 * dVar12 + dVar8 * dVar8 + dVar7 * dVar7 <= param_2) {
    dVar12 = (dVar1 - dVar6) * 0.5;
    dVar7 = (dVar2 - dVar14) * 0.5;
    dVar8 = (dVar5 - dVar15) * 0.5;
    dVar13 = dVar12 * dVar12 + dVar8 * dVar8 + dVar7 * dVar7;
    dVar9 = SQRT(dVar13) / param_4;
    dVar7 = param_3[2];
    dVar8 = *param_3;
    dVar12 = param_3[1];
    dVar10 = (dVar1 + dVar6) * 0.5;
    dVar14 = (dVar2 + dVar14) * 0.5;
    dVar15 = (dVar5 + dVar15) * 0.5;
    dVar1 = dVar10 - (dVar11 - dVar9 * dVar7);
    dVar6 = dVar14 - (dVar4 - dVar9 * dVar12);
    dVar2 = dVar15 - (dVar3 - dVar9 * dVar8);
    dVar5 = dVar7 * dVar1 + dVar8 * dVar2 + dVar12 * dVar6;
    if ((0.0 < dVar5) &&
       (param_5 * param_5 * (dVar1 * dVar1 + dVar2 * dVar2 + dVar6 * dVar6) <= dVar5 * dVar5)) {
      dVar10 = dVar10 - dVar11;
      dVar14 = dVar14 - dVar4;
      dVar15 = dVar15 - dVar3;
      dVar1 = dVar7 * dVar10 + dVar8 * dVar15 + dVar12 * dVar14;
      if (0.0 <= dVar1) {
        return true;
      }
      dVar11 = dVar10 * dVar10 + dVar15 * dVar15 + dVar14 * dVar14;
      if (dVar1 * dVar1 < param_4 * param_4 * dVar11) {
        return true;
      }
      return dVar11 <= dVar13;
    }
  }
  return false;
}



// FUNCTION 147dc6e62 FUN_147dc6e62 body=441 status=ok
// SIG undefined FUN_147dc6e62(void)

ulonglong FUN_147dc6e62(undefined8 *param_1,longlong param_2,double *param_3,double param_4,
                       undefined8 *param_5)

{
  double dVar1;
  char cVar2;
  double *pdVar3;
  int iVar4;
  double *unaff_RDI;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  uint local_7c;
  undefined8 local_78;
  undefined8 local_70;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((&DAT_14ab1ee60)[*(byte *)(param_2 + 0x30)] == '\x01') {
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if ((longlong)*(int *)(param_2 + 0x28) != 0) {
      pdVar3 = *(double **)(param_2 + 0x20);
      lVar6 = (longlong)*(int *)(param_2 + 0x28) * 0x38;
      do {
        dVar1 = *param_3;
        dVar10 = param_3[1];
        dVar11 = dVar10;
        if (pdVar3[3] <= dVar10) {
          dVar11 = pdVar3[3];
        }
        dVar9 = pdVar3[1];
        if (pdVar3[1] <= dVar11) {
          dVar9 = dVar11;
        }
        dVar11 = dVar1;
        if (pdVar3[2] <= dVar1) {
          dVar11 = pdVar3[2];
        }
        dVar8 = *pdVar3;
        if (*pdVar3 <= dVar11) {
          dVar8 = dVar11;
        }
        if ((dVar8 - dVar1) * (dVar8 - dVar1) + (dVar9 - dVar10) * (dVar9 - dVar10) <= param_4) {
          local_78 = *param_5;
          local_70 = param_5[1];
          local_88 = &local_78;
          cVar2 = FUN_147dc6e62(param_1,pdVar3,param_3,param_4);
          if (cVar2 == '\0') goto LAB_147dc6f52;
        }
        pdVar3 = pdVar3 + 7;
        lVar6 = lVar6 + -0x38;
      } while (lVar6 != 0);
    }
  }
  else {
    pdVar3 = (double *)
             (**(code **)(*(longlong *)*param_1 + 0x18))
                       ((longlong *)*param_1,*(undefined4 *)(param_2 + 0x20),&local_7c);
    iVar4 = *(int *)(param_2 + 0x24);
    if (iVar4 != 0) {
      iVar7 = *(int *)(param_2 + 0x20);
      unaff_RDI = pdVar3;
      do {
        dVar1 = param_3[1];
        dVar10 = dVar1;
        if (unaff_RDI[3] <= dVar1) {
          dVar10 = unaff_RDI[3];
        }
        dVar11 = *param_3;
        dVar9 = dVar11;
        if (unaff_RDI[2] <= dVar11) {
          dVar9 = unaff_RDI[2];
        }
        dVar8 = *unaff_RDI;
        if (*unaff_RDI <= dVar9) {
          dVar8 = dVar9;
        }
        dVar9 = unaff_RDI[1];
        if (unaff_RDI[1] <= dVar10) {
          dVar9 = dVar10;
        }
        if (((dVar8 - dVar11) * (dVar8 - dVar11) + (dVar9 - dVar1) * (dVar9 - dVar1) <= param_4) &&
           (local_64 = iVar7, cVar2 = (*(code *)*param_5)(param_5[1],&local_64), cVar2 == '\0'))
        goto LAB_147dc6f52;
        unaff_RDI = (double *)((longlong)unaff_RDI + (ulonglong)local_7c);
        iVar7 = iVar7 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  }
LAB_147dc6fed:
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
LAB_147dc6f52:
  uVar5 = 0;
  goto LAB_147dc6fed;
}



// FUNCTION 147dc701c FUN_147dc701c body=367 status=ok
// SIG undefined FUN_147dc701c(void)

void FUN_147dc701c(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  float local_c0;
  float local_b8;
  float local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  dVar1 = (double)param_2[3];
  dVar2 = sin(((double)param_2[7] * 0.5 * 3.1415927410125732) / 180.0);
  dVar3 = cos(((double)param_2[7] * 0.5 * 3.1415927410125732) / 180.0);
  local_80 = *param_3;
  local_a8 = &local_80;
  local_78 = param_3[1];
  local_b0 = (float)dVar3;
  local_b8 = (float)dVar2;
  local_c0 = (float)(double)param_2[7];
  local_90 = param_2[4];
  local_c8 = &local_90;
  local_88 = param_2[5];
  local_a0 = *param_2;
  local_98 = param_2[1];
  FUN_147dc718c(param_1,param_1 + 8,&local_a0,dVar1 * dVar1);
  if ((local_70 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dc718c FUN_147dc718c body=542 status=ok
// SIG undefined FUN_147dc718c(void)

ulonglong FUN_147dc718c(undefined8 *param_1,longlong param_2,double *param_3,double param_4,
                       double param_5,float param_6,float param_7,undefined4 param_8,
                       undefined8 *param_9)

{
  double dVar1;
  double dVar2;
  char cVar3;
  longlong unaff_RBX;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  double *pdVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_108 [32];
  double local_e8;
  longlong local_e0;
  float local_d8;
  undefined4 local_d0;
  undefined8 *local_c8;
  double local_b8;
  double dStack_b0;
  uint local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((&DAT_14ab1ee60)[*(byte *)(param_2 + 0x30)] == '\x01') {
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    if ((longlong)*(int *)(param_2 + 0x28) != 0) {
      pdVar8 = *(double **)(param_2 + 0x20);
      lVar6 = (longlong)*(int *)(param_2 + 0x28) * 0x38;
      do {
        dVar1 = *param_3;
        dVar2 = param_3[1];
        dVar11 = dVar2;
        if (pdVar8[3] <= dVar2) {
          dVar11 = pdVar8[3];
        }
        dVar10 = pdVar8[1];
        if (pdVar8[1] <= dVar11) {
          dVar10 = dVar11;
        }
        dVar11 = dVar1;
        if (pdVar8[2] <= dVar1) {
          dVar11 = pdVar8[2];
        }
        dVar9 = *pdVar8;
        if (*pdVar8 <= dVar11) {
          dVar9 = dVar11;
        }
        if ((dVar9 - dVar1) * (dVar9 - dVar1) + (dVar10 - dVar2) * (dVar10 - dVar2) <= param_4) {
          local_a0 = *param_9;
          local_98 = param_9[1];
          local_d0 = param_8;
          local_d8 = param_7;
          local_e0 = CONCAT44(local_e0._4_4_,param_6);
          local_e8 = param_5;
          local_c8 = &local_a0;
          cVar3 = FUN_147dc718c(param_1,pdVar8,param_3,param_4);
          if (cVar3 == '\0') goto LAB_147dc72d9;
        }
        pdVar8 = pdVar8 + 7;
        lVar6 = lVar6 + -0x38;
      } while (lVar6 != 0);
    }
  }
  else {
    lVar6 = (**(code **)(*(longlong *)*param_1 + 0x18))
                      ((longlong *)*param_1,*(undefined4 *)(param_2 + 0x20),&local_a4);
    iVar5 = *(int *)(param_2 + 0x24);
    if (iVar5 != 0) {
      iVar7 = *(int *)(param_2 + 0x20);
      unaff_RBX = lVar6;
      do {
        local_b8 = *param_3;
        dStack_b0 = param_3[1];
        local_e8 = (double)param_7;
        local_e0 = unaff_RBX;
        cVar3 = FUN_147dc73ab(&local_b8,param_4,param_5,(double)param_6);
        if (cVar3 != '\0') {
          local_b8 = (double)CONCAT44(local_b8._4_4_,iVar7);
          cVar3 = (*(code *)*param_9)(param_9[1],&local_b8);
          if (cVar3 == '\0') goto LAB_147dc72d9;
        }
        unaff_RBX = unaff_RBX + (ulonglong)local_a4;
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  }
LAB_147dc735c:
  if ((local_90 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
LAB_147dc72d9:
  uVar4 = 0;
  goto LAB_147dc735c;
}



// FUNCTION 147dc73ab FUN_147dc73ab body=1265 status=ok
// SIG undefined FUN_147dc73ab(void)

ulonglong FUN_147dc73ab(double *param_1,double param_2,double *param_3,double param_4,double param_5
                       ,double *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined7 uVar6;
  ulonglong uVar5;
  undefined8 extraout_RAX;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  dVar7 = param_6[3];
  dVar1 = *param_1;
  dVar13 = param_1[1];
  dVar9 = dVar13;
  if (dVar7 <= dVar13) {
    dVar9 = dVar7;
  }
  dVar10 = param_6[2];
  dVar11 = dVar1;
  if (dVar10 <= dVar1) {
    dVar11 = dVar10;
  }
  dVar2 = *param_6;
  dVar3 = param_6[1];
  dVar15 = dVar3;
  if (dVar3 <= dVar9) {
    dVar15 = dVar9;
  }
  dVar9 = dVar2;
  if (dVar2 <= dVar11) {
    dVar9 = dVar11;
  }
  if ((dVar9 - dVar1) * (dVar9 - dVar1) + (dVar15 - dVar13) * (dVar15 - dVar13) <= param_2) {
    dVar3 = dVar3 - dVar13;
    dVar2 = dVar2 - dVar1;
    dVar9 = dVar2 * dVar2 + dVar3 * dVar3;
    if (9.99999993922529e-09 < dVar9) {
      dVar11 = dVar3 * (1.0 / SQRT(dVar9));
    }
    else {
      dVar11 = 0.0;
    }
    dVar10 = dVar10 - dVar1;
    dVar1 = dVar3 * dVar3 + dVar10 * dVar10;
    if (9.99999993922529e-09 < dVar1) {
      dVar3 = dVar3 * (1.0 / SQRT(dVar1));
    }
    else {
      dVar3 = 0.0;
    }
    dVar7 = dVar7 - dVar13;
    dVar13 = dVar10 * dVar10 + dVar7 * dVar7;
    if (9.99999993922529e-09 < dVar13) {
      dVar15 = (1.0 / SQRT(dVar13)) * dVar7;
    }
    else {
      dVar15 = 0.0;
    }
    dVar17 = (double)(-(ulonglong)(9.99999993922529e-09 < dVar9) &
                     (ulonglong)((1.0 / SQRT(dVar9)) * dVar2));
    dVar9 = (double)(-(ulonglong)(9.99999993922529e-09 < dVar1) &
                    (ulonglong)((1.0 / SQRT(dVar1)) * dVar10));
    dVar13 = (double)(-(ulonglong)(9.99999993922529e-09 < dVar13) &
                     (ulonglong)(dVar10 * (1.0 / SQRT(dVar13))));
    dVar10 = dVar2 * dVar2 + dVar7 * dVar7;
    dVar1 = (double)(-(ulonglong)(9.99999993922529e-09 < dVar10) &
                    (ulonglong)(dVar2 * (1.0 / SQRT(dVar10))));
    if (9.99999993922529e-09 < dVar10) {
      dVar7 = dVar7 * (1.0 / SQRT(dVar10));
    }
    else {
      dVar7 = 0.0;
    }
    dVar10 = *param_3;
    dVar2 = param_3[1];
    uVar6 = (undefined7)((ulonglong)param_6 >> 8);
    if (180.0 < param_4) {
      uVar5 = CONCAT71(uVar6,1);
      if (((dVar10 * dVar1 + dVar7 * dVar2 < 0.0) && (dVar10 * dVar13 + dVar15 * dVar2 < 0.0)) &&
         ((dVar10 * dVar17 + dVar11 * dVar2 < 0.0 && (dVar10 * dVar9 + dVar2 * dVar3 < 0.0)))) {
        dVar8 = sin(((360.0 - param_4) * 0.5 * 3.1415927410125732) / 180.0);
        dVar10 = *param_3;
        dVar2 = param_3[1];
        dVar11 = dVar17 * dVar2 - dVar11 * dVar10;
        dVar9 = dVar9 * dVar2 - dVar3 * dVar10;
        dVar13 = dVar13 * dVar2 - dVar15 * dVar10;
        dVar1 = dVar1 * dVar2 - dVar7 * dVar10;
        dVar7 = -dVar8;
        uVar5 = CONCAT71((int7)((ulonglong)extraout_RAX >> 8),
                         (dVar8 <= dVar1 || (dVar8 <= dVar13 || dVar8 <= dVar9)) |
                         (dVar8 <= dVar11 || (dVar1 <= dVar7 || dVar13 <= dVar7)) |
                         -(dVar11 <= dVar7) | -(dVar9 <= dVar7));
      }
      goto LAB_147dc746b;
    }
    dVar12 = dVar10 * dVar11 - dVar17 * dVar2;
    dVar14 = dVar10 * dVar3 - dVar9 * dVar2;
    dVar16 = dVar10 * dVar15 - dVar13 * dVar2;
    dVar8 = dVar10 * dVar7 - dVar1 * dVar2;
    dVar4 = -param_5;
    if (((((dVar4 <= dVar8) || (dVar4 <= dVar16)) || (dVar4 <= dVar12)) || (dVar4 <= dVar14)) &&
       (((dVar8 <= param_5 || (dVar16 <= param_5)) || ((dVar12 <= param_5 || (dVar14 <= param_5)))))
       ) {
      uVar5 = CONCAT71(uVar6,(0.0 <= dVar1 * dVar10 + dVar7 * dVar2 ||
                             0.0 <= dVar13 * dVar10 + dVar15 * dVar2) |
                             -(0.0 <= dVar17 * dVar10 + dVar11 * dVar2) |
                             -(0.0 <= dVar9 * dVar10 + dVar3 * dVar2));
      goto LAB_147dc746b;
    }
  }
  uVar5 = 0;
LAB_147dc746b:
  return uVar5 & 0xffffffffffffff01;
}



// FUNCTION 147dc789c FUN_147dc789c body=89 status=ok
// SIG undefined FUN_147dc789c(void)

void FUN_147dc789c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 8,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 3)) {
    uVar3 = uVar1 >> 3 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,8,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 147dc78f5 FUN_147dc78f5 body=77 status=ok
// SIG undefined FUN_147dc78f5(void)

void FUN_147dc78f5(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  lVar3 = 0;
  bVar2 = DAT_14c950c29;
  do {
    lVar1 = *(longlong *)(param_2 + lVar3 * 8);
    *(longlong *)(param_1 + lVar3 * 8) = lVar1;
    if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
      FUN_1456cec3c();
      bVar2 = DAT_14c950c29;
    }
    lVar3 = lVar3 + 1;
  } while (param_3 != (int)lVar3);
  return;
}



// FUNCTION 147dc7942 FUN_147dc7942 body=99 status=ok
// SIG undefined FUN_147dc7942(void)

void FUN_147dc7942(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 8;
    if (8 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
      iVar1 = (int)(uVar2 >> 3);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_1407d0156(param_1,0,iVar3,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x4c) = param_3;
  return;
}



// FUNCTION 147dc79a6 FUN_147dc79a6 body=115 status=ok
// SIG undefined FUN_147dc79a6(void)

int FUN_147dc79a6(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1 * 0x20;
        if ((((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + 4 + lVar4) == param_3[1]))
            && (*(int *)(lVar2 + 8 + lVar4) == param_3[2])) &&
           (*(int *)(lVar2 + 0xc + lVar4) == param_3[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar4 + lVar2 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 147dc7a1a FUN_147dc7a1a body=147 status=ok
// SIG undefined FUN_147dc7a1a(void)

void FUN_147dc7a1a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x48,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x48)) {
      uVar5 = uVar4 / 0x48 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x48,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147dc7aae FUN_147dc7aae body=327 status=ok
// SIG undefined FUN_147dc7aae(void)

undefined4 * FUN_147dc7aae(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
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
  FUN_147dc7bf6(param_1,local_48);
  puVar1 = (undefined4 *)*param_3;
  plVar2 = (longlong *)param_3[1];
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *local_40 = *puVar1;
  local_40[1] = uVar3;
  local_40[2] = uVar4;
  local_40[3] = uVar5;
  lVar11 = *plVar2;
  *(longlong *)(local_40 + 4) = lVar11;
  if ((lVar11 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_40[6] = 0xffffffff;
  local_4c = local_48[0];
  uVar7 = FUN_1447addd0(local_40,0x10);
  cVar6 = FUN_147dc7cdc(param_1,uVar7,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar6 == '\0') {
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
      local_40[7] = uVar7;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      local_40[6] = *(undefined4 *)
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
      FUN_147dc7dac(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dc7bf6 FUN_147dc7bf6 body=229 status=ok
// SIG undefined FUN_147dc7bf6(void)

int * FUN_147dc7bf6(longlong *param_1,int *param_2)

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



// FUNCTION 147dc7cdc FUN_147dc7cdc body=93 status=ok
// SIG undefined FUN_147dc7cdc(void)

undefined8 FUN_147dc7cdc(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar7 = FUN_147dc79a6(), iVar7 != -1)) {
    lVar2 = *param_1;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    *(undefined8 *)(lVar2 + 0x10 + (longlong)iVar7 * 0x20) = *(undefined8 *)(param_3 + 4);
    puVar1 = (undefined4 *)(lVar2 + (longlong)iVar7 * 0x20);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_147dc7d3a(param_1,*param_4);
    *param_4 = iVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 147dc7d3a FUN_147dc7d3a body=114 status=ok
// SIG undefined FUN_147dc7d3a(void)

void FUN_147dc7d3a(longlong *param_1,int param_2)

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



// FUNCTION 147dc7dac FUN_147dc7dac body=449 status=ok
// SIG undefined FUN_147dc7dac(void)

void FUN_147dc7dac(longlong *param_1)

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
        lVar10 = (longlong)iVar5 * 0x20;
        iVar6 = FUN_1447addd0(lVar3 + lVar10,0x10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x1c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar10) =
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



// FUNCTION 147dc7f6e FUN_147dc7f6e body=152 status=ok
// SIG undefined FUN_147dc7f6e(void)

void FUN_147dc7f6e(longlong *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = FUN_1447addd0(param_2,0x10);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2 * 0x20;
        if ((((*(int *)(lVar1 + lVar4) == *param_2) && (*(int *)(lVar1 + 4 + lVar4) == param_2[1]))
            && (*(int *)(lVar1 + 8 + lVar4) == param_2[2])) &&
           (*(int *)(lVar1 + 0xc + lVar4) == param_2[3])) {
          FUN_147dc8006(param_1);
          return;
        }
        iVar2 = *(int *)(lVar4 + lVar1 + 0x18);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 147dc8006 FUN_147dc8006 body=90 status=ok
// SIG undefined FUN_147dc8006(void)

void FUN_147dc8006(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_147dc7d3a();
  return;
}



// FUNCTION 147dc8060 FUN_147dc8060 body=322 status=ok
// SIG undefined FUN_147dc8060(void)

void FUN_147dc8060(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
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



// FUNCTION 147dc81a4 FUN_147dc81a4 body=285 status=ok
// SIG undefined FUN_147dc81a4(void)

void FUN_147dc81a4(longlong *param_1)

{
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_1 + 2;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_38);
  }
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_60 = param_1;
  if (iStack_24 < (int)local_30[3]) {
    do {
      if (*(longlong *)(*local_60 + 8 + (longlong)iStack_44 * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dc82c2 FUN_147dc82c2 body=181 status=ok
// SIG undefined FUN_147dc82c2(void)

longlong FUN_147dc82c2(longlong *param_1,uint param_2,longlong *param_3)

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
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_147dc835a;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_147dc8378(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_147dc835a:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 147dc8378 FUN_147dc8378 body=277 status=ok
// SIG undefined FUN_147dc8378(void)

undefined4 * FUN_147dc8378(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

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
  FUN_147dc848e(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar1 = FUN_147dc8574(param_1,param_3,local_40,local_48);
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
      FUN_147dc8688(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dc848e FUN_147dc848e body=229 status=ok
// SIG undefined FUN_147dc848e(void)

int * FUN_147dc848e(longlong *param_1,int *param_2)

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



// FUNCTION 147dc8574 FUN_147dc8574 body=161 status=ok
// SIG undefined FUN_147dc8574(void)

undefined8 FUN_147dc8574(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_147dc8616(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}


