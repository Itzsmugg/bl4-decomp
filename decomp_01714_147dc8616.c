// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147dc8616 FUN_147dc8616 body=114 status=ok
// SIG undefined FUN_147dc8616(void)

void FUN_147dc8616(longlong *param_1,int param_2)

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



// FUNCTION 147dc8688 FUN_147dc8688 body=476 status=ok
// SIG undefined FUN_147dc8688(void)

void FUN_147dc8688(longlong *param_1)

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



// FUNCTION 147dc8866 FUN_147dc8866 body=132 status=ok
// SIG undefined FUN_147dc8866(void)

void FUN_147dc8866(longlong param_1,int param_2)

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



// FUNCTION 147dc88ec FUN_147dc88ec body=67 status=ok
// SIG undefined FUN_147dc88ec(void)

void FUN_147dc88ec(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145d24818(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_147dc8688(param_1);
    return;
  }
  FUN_147dc8060(param_1);
  FUN_145d24818(param_1,0);
  return;
}



// FUNCTION 147dc8930 FUN_147dc8930 body=48 status=ok
// SIG undefined FUN_147dc8930(void)

void FUN_147dc8930(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 147dc8960 FUN_147dc8960 body=43 status=ok
// SIG undefined FUN_147dc8960(void)

void FUN_147dc8960(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 147dc898c FUN_147dc898c body=132 status=ok
// SIG undefined FUN_147dc898c(void)

void FUN_147dc898c(longlong param_1,int param_2)

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



// FUNCTION 147dc8a12 FUN_147dc8a12 body=150 status=ok
// SIG undefined FUN_147dc8a12(void)

void FUN_147dc8a12(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x88,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x88)) {
      uVar5 = uVar4 / 0x88 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x88,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147dc8aaa FUN_147dc8aaa body=50 status=ok
// SIG undefined FUN_147dc8aaa(void)

longlong FUN_147dc8aaa(longlong param_1,int param_2)

{
  FUN_14041e0ea();
  FUN_146f9f0fa(param_1 + 0x98);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147dc8adc FUN_147dc8adc body=31 status=ok
// SIG undefined FUN_147dc8adc(void)

undefined8 FUN_147dc8adc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147dc8b16 FUN_147dc8b16 body=26 status=ok
// SIG undefined FUN_147dc8b16(void)

bool FUN_147dc8b16(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147dc8b30 FUN_147dc8b30 body=101 status=ok
// SIG undefined FUN_147dc8b30(void)

void FUN_147dc8b30(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ab1f970;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147dc8b96 FUN_147dc8b96 body=101 status=ok
// SIG undefined FUN_147dc8b96(void)

void FUN_147dc8b96(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ab1f970;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147dc8bfc FUN_147dc8bfc body=134 status=ok
// SIG undefined FUN_147dc8bfc(void)

void FUN_147dc8bfc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ab1f970;
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
                    /* WARNING: Could not recover jumptable at 0x000147dc8c73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147dc8c82 FUN_147dc8c82 body=39 status=ok
// SIG undefined FUN_147dc8c82(void)

void FUN_147dc8c82(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147dc8ca5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 147dc8caa FUN_147dc8caa body=85 status=ok
// SIG undefined FUN_147dc8caa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147dc8caa(void)

{
  if (DAT_14cb119a8 != DAT_14cb119d4) {
    FUN_147dc8d00();
    DAT_14cb119a8 = 0;
    if (DAT_14cb119ac < 0) {
      FUN_1447a08a2(&DAT_14cb119a0,0);
    }
    _DAT_14cb119d0 = 0xffffffff;
    DAT_14cb119c8 = 0;
  }
  return;
}



// FUNCTION 147dc8d00 FUN_147dc8d00 body=364 status=ok
// SIG undefined FUN_147dc8d00(void)

void FUN_147dc8d00(void)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
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
  puVar5 = &DAT_14cb119d8;
  if (DAT_14cb119e0 != (undefined *)0x0) {
    puVar5 = DAT_14cb119e0;
  }
  iVar4 = DAT_14cb119e8 + 3;
  if (-1 < DAT_14cb119e8) {
    iVar4 = DAT_14cb119e8;
  }
  if (DAT_14cb119a8 - DAT_14cb119d4 < iVar4 >> 2) {
    local_50 = 0x100000000;
    uStack_48 = &DAT_14cb119b0;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    if (DAT_14cb119c8 == 0) {
      iVar4 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar4 = DAT_14cb119c8;
    }
    local_78 = &DAT_14cb119a0;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar1 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if ((local_60._4_4_ != iVar4) || (uStack_48 != &DAT_14cb119b0)) {
      iVar2 = local_60._4_4_;
      local_60 = uVar1;
      do {
        *(undefined4 *)(puVar5 + (longlong)*(int *)(*local_78 + 8 + (longlong)iVar2 * 0xc) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar2 = local_60._4_4_;
        uVar1 = local_60;
      } while (local_78 != &DAT_14cb119a0 ||
               ((undefined *)CONCAT44(uStack_64,uStack_68) != &DAT_14cb119b0 ||
               local_60._4_4_ != iVar4));
    }
  }
  else {
    uVar1 = local_60;
    if (0 < DAT_14cb119e8) {
      lVar3 = 0;
      do {
        *(undefined4 *)(puVar5 + lVar3 * 4) = 0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 < DAT_14cb119e8);
    }
  }
  local_60 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147dc8e6e FUN_147dc8e6e body=285 status=ok
// SIG undefined FUN_147dc8e6e(void)

undefined4 * FUN_147dc8e6e(undefined4 *param_1,uint *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  uint *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147dc8f8c(local_40);
  uVar6 = *param_2;
  *local_38 = uVar6;
  local_38[1] = 0xffffffff;
  local_44 = local_40[0];
  cVar3 = FUN_147dc909a(uVar6,local_38,&local_44);
  uVar2 = local_44;
  if (cVar3 == '\0') {
    uVar4 = DAT_14cb119a8 - DAT_14cb119d4;
    iVar8 = 1;
    if (3 < uVar4) {
      uVar7 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar8 <= DAT_14cb119e8)) {
      uVar6 = DAT_14cb119e8 - 1U & uVar6;
      local_38[2] = uVar6;
      puVar5 = DAT_14cb119e0;
      if (DAT_14cb119e0 == (undefined *)0x0) {
        puVar5 = &DAT_14cb119d8;
      }
      local_38[1] = *(uint *)(puVar5 + ((longlong)DAT_14cb119e8 - 1U & (longlong)(int)uVar6) * 4);
      puVar5 = DAT_14cb119e0;
      if (DAT_14cb119e0 == (undefined *)0x0) {
        puVar5 = &DAT_14cb119d8;
      }
      *(undefined4 *)(puVar5 + ((longlong)DAT_14cb119e8 - 1U & (longlong)(int)uVar6) * 4) = local_44
      ;
    }
    else {
      DAT_14cb119e8 = iVar8;
      FUN_147dc91a0();
    }
  }
  *param_1 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dc8f8c FUN_147dc8f8c body=270 status=ok
// SIG undefined FUN_147dc8f8c(void)

int * FUN_147dc8f8c(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb119d0;
  iVar4 = DAT_14cb119a8;
  if (DAT_14cb119d4 == 0) {
    iVar2 = DAT_14cb119a8 + 1;
    bVar7 = DAT_14cb119ac == DAT_14cb119a8;
    DAT_14cb119a8 = iVar2;
    if (bVar7) {
      FUN_1447cc1b4(&DAT_14cb119a0,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14cb119b0,1);
    puVar3 = DAT_14cb119c0;
    if (DAT_14cb119c0 == (undefined *)0x0) {
      puVar3 = &DAT_14cb119b0;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  }
  else {
    lVar6 = (longlong)DAT_14cb119d0;
    DAT_14cb119d0 = *(int *)(DAT_14cb119a0 + 4 + lVar6 * 0xc);
    DAT_14cb119d4 = DAT_14cb119d4 + -1;
    iVar4 = iVar2;
    if (DAT_14cb119d4 != 0) {
      *(undefined4 *)(DAT_14cb119a0 + (longlong)DAT_14cb119d0 * 0xc) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14cb119b0;
  if (DAT_14cb119c0 != (undefined *)0x0) {
    puVar3 = DAT_14cb119c0;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0xc + DAT_14cb119a0;
  return param_1;
}



// FUNCTION 147dc909a FUN_147dc909a body=134 status=ok
// SIG undefined FUN_147dc909a(void)

undefined8 FUN_147dc909a(uint param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined *puVar2;
  
  if ((DAT_14cb119a8 - DAT_14cb119d4 != 1) && (DAT_14cb119a8 != DAT_14cb119d4)) {
    puVar2 = &DAT_14cb119d8;
    if (DAT_14cb119e0 != (undefined *)0x0) {
      puVar2 = DAT_14cb119e0;
    }
    iVar1 = *(int *)(puVar2 + (ulonglong)(DAT_14cb119e8 - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(DAT_14cb119a0 + (longlong)iVar1 * 0xc) == *param_2) {
          FUN_147dc9120(*param_3);
          *param_3 = iVar1;
          return 1;
        }
        iVar1 = *(int *)(DAT_14cb119a0 + (longlong)iVar1 * 0xc + 4);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 147dc9120 FUN_147dc9120 body=128 status=ok
// SIG undefined FUN_147dc9120(void)

void FUN_147dc9120(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cb119a0;
  if (DAT_14cb119d4 != 0) {
    *(int *)(DAT_14cb119a0 + (longlong)DAT_14cb119d0 * 0xc) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0xc) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb119d4) {
    iVar4 = DAT_14cb119d0;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0xc) = iVar4;
  DAT_14cb119d4 = DAT_14cb119d4 + 1;
  puVar3 = &DAT_14cb119b0;
  if (DAT_14cb119c0 != (undefined *)0x0) {
    puVar3 = DAT_14cb119c0;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cb119d0 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 147dc91a0 FUN_147dc91a0 body=464 status=ok
// SIG undefined FUN_147dc91a0(void)

void FUN_147dc91a0(void)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb119e0 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb119e0,0,0,4);
  }
  uVar2 = DAT_14cb119e8;
  uVar3 = local_50;
  if (DAT_14cb119e8 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb119d8,0,DAT_14cb119e8,4);
    if (0 < (int)uVar2) {
      do {
        puVar6 = DAT_14cb119e0;
        if (DAT_14cb119e0 == (undefined *)0x0) {
          puVar6 = &DAT_14cb119d8;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb119e8 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb119b0;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb119c8 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb119a0;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar3 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar3;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar9 = (longlong)(int)DAT_14cb119e8 - 1U & (longlong)*(int *)(lVar1 + lVar5 * 0xc);
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 8 + lVar5 * 0xc) = iVar8;
        puVar6 = DAT_14cb119e0;
        if (DAT_14cb119e0 == (undefined *)0x0) {
          puVar6 = &DAT_14cb119d8;
        }
        *(undefined4 *)(lVar1 + 4 + lVar5 * 0xc) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb119e8 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb119e0;
        if (DAT_14cb119e0 == (undefined *)0x0) {
          puVar6 = &DAT_14cb119d8;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb119e8 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar3 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar3;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147dc937e FUN_147dc937e body=480 status=ok
// SIG undefined FUN_147dc937e(void)

void FUN_147dc937e(longlong param_1,longlong *param_2)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14485c47a(param_1 + 0x1c4);
  for (lVar6 = param_1; (lVar6 != 0 && ((*(uint *)(lVar6 + 8) & 0x30) == 0));
      lVar6 = *(longlong *)(lVar6 + 0x20)) {
  }
  uVar4 = (**(code **)(*param_2 + 0x2e0))(param_2);
  *(undefined1 *)(param_1 + 0x1c0) = uVar4;
  *(undefined4 *)(param_1 + 0x50) = 0;
  lVar6 = (**(code **)(param_2[5] + 0x78))(param_2 + 5);
  if ((*(longlong *)(lVar6 + 0x30) != 0) &&
     (lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x30) + 0x2b0), lVar6 != 0)) {
    lVar6 = *(longlong *)(lVar6 + 0x3f0);
    if (lVar6 != 0) {
      FUN_1400bbfae(&local_50,lVar6);
      *(undefined4 *)(param_1 + 0x1d8) = local_50;
      *(undefined4 *)(param_1 + 0x1dc) = uStack_4c;
      *(undefined4 *)(param_1 + 0x1e0) = uStack_48;
      *(undefined4 *)(param_1 + 0x1e4) = uStack_44;
      if ((undefined4 *)(param_1 + 0x1d8) == &local_50) {
        if (local_40 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x1e8) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_1 + 0x1e8) = local_40;
        local_40 = 0;
        *(undefined4 *)(param_1 + 0x1f0) = local_38;
        *(undefined4 *)(param_1 + 500) = local_34;
      }
      cVar5 = (*(code *)PTR_FUN_14c758760)();
      if (cVar5 != '\0') {
        uVar1 = *(uint *)(lVar6 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar7 = 0;
        }
        if ((*(uint *)(lVar7 + 8) & 0x8400000) != 0) {
          *(undefined8 *)(param_1 + 0x1d0) = 0;
          goto LAB_147dc94e1;
        }
      }
      FUN_14485c47a(param_1 + 0x1d0,lVar6);
      goto LAB_147dc94e1;
    }
  }
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  if (*(int *)(param_1 + 500) < 0) {
    FUN_1446f8c06((undefined8 *)(param_1 + 0x1e8),0);
  }
  puVar2 = *(undefined2 **)(param_1 + 0x1e8);
  if (puVar2 != (undefined2 *)0x0) {
    *puVar2 = 0;
  }
LAB_147dc94e1:
  lVar6 = param_2[0xe];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x74);
  lVar7 = param_2[0xf];
  *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)((longlong)param_2 + 0x6c);
  *(int *)(param_1 + 0x110) = (int)lVar6;
  *(undefined4 *)(param_1 + 0x114) = uVar3;
  *(int *)(param_1 + 0x118) = (int)lVar7;
  FUN_140399426(param_1);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dc9564 FUN_147dc9564 body=215 status=ok
// SIG undefined FUN_147dc9564(void)

void FUN_147dc9564(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x40);
  if (lVar5 == 0) {
    lVar5 = FUN_14475ec7e();
  }
  iVar1 = *(int *)(lVar5 + 0x90);
  if ((longlong)iVar1 != 0) {
    lVar5 = *(longlong *)(lVar5 + 0x88);
    lVar6 = 0;
    do {
      plVar2 = (longlong *)(**(code **)(**(longlong **)(lVar5 + lVar6) + 0x2a0))();
      if (plVar2 != (longlong *)0x0) {
        lVar3 = (**(code **)(*plVar2 + 8))(plVar2);
        if (lVar3 != 0) {
          lVar4 = FUN_14019a59a();
          if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
            local_40 = lVar3;
            (*(code *)*param_2)(param_2[1],&local_40);
          }
        }
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dc963c FUN_147dc963c body=141 status=ok
// SIG undefined FUN_147dc963c(void)

ulonglong FUN_147dc963c(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  lVar4 = (**(code **)(*param_1 + 0x180))();
  cVar3 = FUN_147dc96ca(param_1,param_2);
  if (cVar3 == '\0') {
LAB_147dc96bb:
    uVar5 = 0;
  }
  else {
    uVar5 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    if ((param_2 == 0) && (iVar1 = *(int *)(lVar4 + 0x90), (longlong)iVar1 != 0)) {
      lVar4 = *(longlong *)(lVar4 + 0x88);
      lVar6 = 0;
      do {
        lVar2 = *(longlong *)(lVar4 + lVar6);
        if ((((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x178), lVar2 != 0)) &&
            (*(longlong *)(lVar2 + 0x2c8) != 0)) && (cVar3 = FUN_140898d24(), cVar3 != '\0'))
        goto LAB_147dc96bb;
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar1 * 8 != lVar6);
    }
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 147dc96ca FUN_147dc96ca body=959 status=ok
// SIG undefined FUN_147dc96ca(void)

ulonglong FUN_147dc96ca(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 unaff_RBP;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 *local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  (**(code **)(*param_1 + 0x180))();
  uVar1 = *(undefined8 *)(param_1[5] + 0xd0);
  local_78 = (undefined8 *)0x0;
  uStack_70 = 1;
  FUN_1406d2ac8(&local_78,0);
  puVar5 = local_78;
  FUN_1406d2a2a(local_78);
  *(undefined2 *)(puVar5 + 6) = 0;
  uVar8 = FUN_140898eae(uVar1);
  FUN_144aa2048(uVar8,&local_88);
  if (puVar5 + 4 == &local_88) {
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (puVar5[4] != 0) {
      FUN_1400020a8();
    }
    puVar5[4] = local_88;
    local_88 = 0;
    *(undefined4 *)(puVar5 + 5) = local_80;
    *(undefined4 *)((longlong)puVar5 + 0x2c) = local_7c;
  }
  cVar6 = (**(code **)(*param_1 + 0x2d0))(param_1,2,&local_78,1);
  if (cVar6 == '\0') {
LAB_147dc9a23:
    FUN_1406d33ae(local_78,uStack_70 & 0xffffffff);
    if (local_78 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    uVar11 = 0;
  }
  else {
    lVar9 = FUN_147db4838(uVar1);
    if (*(int *)(lVar9 + 8) != *(int *)(lVar9 + 0x34)) {
      *(undefined1 *)(puVar5 + 6) = 1;
      uVar8 = FUN_147db4838(uVar1);
      FUN_144aa2048(uVar8,&local_88);
      if (puVar5 + 4 == &local_88) {
        if (local_88 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (puVar5[4] != 0) {
          FUN_1400020a8();
        }
        puVar5[4] = local_88;
        local_88 = 0;
        *(undefined4 *)(puVar5 + 5) = local_80;
        *(undefined4 *)((longlong)puVar5 + 0x2c) = local_7c;
      }
      cVar6 = (**(code **)(*param_1 + 0x2d0))(param_1,1,&local_78,1);
      if (cVar6 == '\0') goto LAB_147dc9a23;
    }
    FUN_1406d33ae(local_78,uStack_70 & 0xffffffff);
    if (local_78 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    plVar10 = param_1 + 6;
    if (param_2 != (longlong *)0x0) {
      plVar10 = param_2;
    }
    if ((longlong)(int)plVar10[1] == 0) {
      uVar11 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    }
    else {
      lVar9 = (longlong)(int)plVar10[1] * 0x160;
      lVar12 = *plVar10 + 0x108;
      do {
        lVar9 = lVar9 + -0x160;
        local_78 = (undefined8 *)0x0;
        uStack_70 = 1;
        FUN_1406d2ac8(&local_78,0);
        puVar5 = local_78;
        FUN_1406d2a2a(local_78);
        *(undefined1 *)((longlong)puVar5 + 0x31) = 1;
        puVar5[2] = *(undefined8 *)(lVar12 + -0xf0);
        uVar8 = *(undefined8 *)(lVar12 + -0xf8);
        *puVar5 = *(undefined8 *)(lVar12 + -0x100);
        puVar5[1] = uVar8;
        uVar2 = *(undefined4 *)(lVar12 + -0xe4);
        uVar3 = *(undefined4 *)(lVar12 + -0xe0);
        uVar4 = *(undefined4 *)(lVar12 + -0xdc);
        *(undefined4 *)(puVar5 + 7) = *(undefined4 *)(lVar12 + -0xe8);
        *(undefined4 *)((longlong)puVar5 + 0x3c) = uVar2;
        *(undefined4 *)(puVar5 + 8) = uVar3;
        *(undefined4 *)((longlong)puVar5 + 0x44) = uVar4;
        puVar5[9] = *(undefined8 *)(lVar12 + -0xd8);
        *(undefined1 *)(puVar5 + 10) = *(undefined1 *)(lVar12 + -0xa8);
        FUN_144881636(puVar5 + 0xb,lVar12 + -0xa0);
        FUN_147dd0a5c(puVar5 + 0x1f,lVar12);
        *(undefined1 *)((longlong)puVar5 + 0x1c) = 1;
        *(undefined4 *)(puVar5 + 3) = 0;
        *(undefined1 *)(puVar5 + 6) = 0;
        if (*(char *)(lVar12 + -0xd0) == '\0') {
          uVar8 = FUN_147db4838(uVar1);
        }
        else {
          uVar8 = FUN_140898eae(uVar1);
        }
        FUN_144aa2048(uVar8,&local_88);
        if (puVar5 + 4 == &local_88) {
          if (local_88 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (puVar5[4] != 0) {
            FUN_1400020a8();
          }
          puVar5[4] = local_88;
          local_88 = 0;
          *(undefined4 *)(puVar5 + 5) = local_80;
          *(undefined4 *)((longlong)puVar5 + 0x2c) = local_7c;
        }
        uVar7 = (**(code **)(*param_1 + 0x2d0))
                          (param_1,'\x02' - (*(char *)(lVar12 + -0xd0) == '\0'),&local_78,1);
        uVar11 = (ulonglong)uVar7;
        FUN_1406d33ae(local_78);
        if (local_78 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        lVar12 = lVar12 + 0x160;
      } while (((byte)uVar7 & lVar9 != 0) != 0);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffffff;
}



// FUNCTION 147dc9a8a FUN_147dc9a8a body=1687 status=ok
// SIG undefined FUN_147dc9a8a(void)

ulonglong FUN_147dc9a8a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  void *_Src;
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 *unaff_RBP;
  undefined2 *puVar9;
  uint uVar10;
  undefined2 *puVar11;
  ushort uVar12;
  ulonglong uVar13;
  ushort uVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined1 auStack_1a8 [32];
  undefined8 *local_188;
  undefined2 *local_180;
  undefined2 *local_178;
  undefined2 *local_170;
  undefined2 *local_168;
  undefined8 *local_160;
  int local_158;
  longlong local_150;
  undefined2 *local_148;
  int local_140;
  longlong local_138;
  int local_130;
  undefined2 *local_128;
  int local_120;
  undefined2 *local_118;
  int local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  void *local_f0;
  int local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  int iStack_d8;
  undefined4 uStack_d4;
  undefined2 *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined2 *local_c0;
  int local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined2 *local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = FUN_144a7757c();
  uVar6 = FUN_144a78ede(uVar6,uVar5);
  FUN_144b00ba4(uVar6);
  local_58 = 0;
  uStack_50 = 0;
  FUN_144a99ffe(&local_58,uVar6);
  local_78 = *param_2;
  uStack_74 = param_2[1];
  uStack_70 = param_2[2];
  uStack_6c = param_2[3];
  local_68 = (void *)0x0;
  local_60 = param_2[6];
  lVar16 = (longlong)local_60;
  _Src = *(void **)(param_2 + 4);
  if (lVar16 == 0) {
    local_5c = 0;
  }
  else {
    FUN_1446dd670(&local_68,local_60,0);
    memcpy(local_68,_Src,lVar16 * 2);
  }
  if (((CONCAT44(uStack_74,local_78) != *(longlong *)(param_1 + 0x3f8)) ||
      (CONCAT44(uStack_6c,uStack_70) != *(longlong *)(param_1 + 0x400))) &&
     ((unaff_RBP = (undefined2 *)0x0, CONCAT44(uStack_74,local_78) != local_58 ||
      (CONCAT44(uStack_6c,uStack_70) != uStack_50)))) goto LAB_147dc9c75;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = (undefined2 *)0x0;
  uStack_90 = 0;
  FUN_140056680(&local_e0,&DAT_149e0635c);
  local_180 = (undefined2 *)((ulonglong)local_180 & 0xffffffff00000000);
  local_188 = (undefined8 *)CONCAT44(local_188._4_4_,1);
  cVar1 = FUN_1407cdbc6(&local_68,&local_e0,&local_98,&local_88);
  if (local_e0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (cVar1 == '\0') {
LAB_147dc9c57:
    unaff_RBP = (undefined2 *)0x0;
  }
  else {
    puVar7 = local_98;
    if ((int)uStack_90 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    lVar16 = 0;
    while( true ) {
      uVar12 = *(ushort *)((longlong)puVar7 + lVar16);
      uVar13 = (ulonglong)uVar12;
      uVar14 = *(ushort *)((longlong)L"PersistentLevel" + lVar16);
      if (uVar12 != uVar14) break;
      if (uVar12 == 0) goto LAB_147dc9cc7;
LAB_147dc9c2c:
      lVar16 = lVar16 + 2;
    }
    if ((uVar14 | uVar12) < 0x80) {
      uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
      uVar15 = (ulonglong)uVar14;
      uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
      if ((&DAT_149e05da0)[uVar13] == (&DAT_149e05da0)[uVar15]) goto LAB_147dc9c2c;
    }
    if (uVar12 != uVar14) goto LAB_147dc9c57;
LAB_147dc9cc7:
    local_a8 = 0;
    uStack_a0 = 0;
    local_188 = &local_b0;
    local_b0 = 0;
    lVar16 = FUN_147dca122(param_1,&local_88,(longlong)L"Package" + 0xf,&local_a8);
    FUN_1449b8608(&local_e0,&local_98,&DAT_149e0635c);
    FUN_144a7dea0(&local_c0,&local_e0,&local_a8);
    if (local_e0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    puVar7 = local_c0;
    if (lVar16 == 0) {
      local_f0 = (void *)0x0;
      local_e8 = local_b8;
      if ((longlong)local_b8 == 0) {
        local_e4 = 0;
      }
      else {
        FUN_1446dd670(&local_f0,local_b8,0);
        memcpy(local_f0,puVar7,(longlong)local_b8 * 2);
      }
      local_108 = (undefined4)local_58;
      uStack_104 = local_58._4_4_;
      uStack_100 = (undefined4)uStack_50;
      uStack_fc = uStack_50._4_4_;
      FUN_14587a656(&local_e0,&local_108,&local_f0);
      *(undefined4 *)param_3 = (undefined4)local_e0;
      *(undefined4 *)((longlong)param_3 + 4) = local_e0._4_4_;
      *(int *)(param_3 + 1) = iStack_d8;
      *(undefined4 *)((longlong)param_3 + 0xc) = uStack_d4;
      puVar7 = local_d0;
      if (&local_e0 == param_3) goto joined_r0x000147dca117;
      if (param_3[2] != 0) {
        FUN_1400020a8();
      }
      param_3[2] = local_d0;
      local_d0 = (undefined2 *)0x0;
      *(undefined4 *)(param_3 + 3) = local_c8;
      *(undefined4 *)((longlong)param_3 + 0x1c) = local_c4;
    }
    else {
      local_e0 = (undefined2 *)local_58;
      FUN_1400021e4(&local_e0,&local_118);
      local_e0 = *(undefined2 **)(param_1 + 0x3f8);
      FUN_1400021e4(&local_e0,&local_128);
      iVar2 = local_110 + -1;
      if (local_110 == 0) {
        iVar2 = 0;
      }
      puVar7 = (undefined2 *)(ulonglong)(local_120 - 1);
      if (local_120 == 0) {
        puVar7 = (undefined2 *)0x0;
      }
      if ((int)puVar7 < iVar2) {
        puVar9 = &DAT_149dfb77a;
        puVar8 = &DAT_149dfb77a;
        if (local_120 != 0) {
          puVar8 = local_128;
        }
        local_180 = (undefined2 *)CONCAT44(local_180._4_4_,0xffffffff);
        local_188 = (undefined8 *)((ulonglong)local_188 & 0xffffffff00000000);
        iVar2 = FUN_1447ee042(&local_118,puVar8,puVar7,1);
        if (iVar2 == -1) {
          local_168 = (undefined2 *)0x0;
          puVar7 = (undefined2 *)0x0;
          puVar8 = puVar9;
        }
        else {
          FUN_144a63a7c(&local_118,&local_e0,0,iVar2);
          iVar3 = local_120 + -1;
          if (local_120 == 0) {
            iVar3 = 0;
          }
          uVar10 = local_110 - 1;
          puVar7 = local_118;
          if (local_110 == 0) {
            uVar10 = 0;
            puVar7 = &DAT_149dfb77a;
          }
          uVar4 = iVar3 + iVar2;
          if ((int)uVar10 <= iVar3 + iVar2) {
            uVar4 = uVar10;
          }
          puVar8 = (undefined2 *)(ulonglong)uVar4;
          if ((int)uVar4 < 1) {
            puVar8 = (undefined2 *)0x0;
          }
          local_168 = local_e0;
          puVar9 = local_e0;
          if (iStack_d8 == 0) {
            puVar9 = &DAT_149dfb77a;
          }
          FUN_14006620a(&local_e0,puVar7 + (longlong)puVar8,uVar10 - (int)puVar8);
          puVar7 = local_e0;
          puVar8 = &DAT_149dfb77a;
          if (iStack_d8 != 0) {
            puVar8 = local_e0;
          }
        }
      }
      else {
        puVar9 = &DAT_149dfb77a;
        local_168 = (undefined2 *)0x0;
        puVar7 = (undefined2 *)0x0;
        puVar8 = &DAT_149dfb77a;
      }
      unaff_RBP = &DAT_149dfb77a;
      if (local_b8 != 0) {
        unaff_RBP = local_c0;
      }
      local_150 = uStack_50;
      FUN_1400021e4(&local_150,&local_148);
      local_178 = &DAT_149dfb77a;
      if (local_140 != 0) {
        local_178 = local_148;
      }
      FUN_1400021e4(lVar16,&local_160);
      local_188 = (undefined8 *)&DAT_149dfb77a;
      if (local_158 != 0) {
        local_188 = local_160;
      }
      puVar11 = &DAT_149dfb77a;
      if (local_120 != 0) {
        puVar11 = local_128;
      }
      local_180 = puVar8;
      local_170 = unaff_RBP;
      FUN_140002266(&local_138,L"%s%s/_Generated_/%s%s.%s:%s",puVar9,puVar11);
      local_e0 = (undefined2 *)local_138;
      iStack_d8 = local_130 + -1;
      if (local_130 == 0) {
        iStack_d8 = 0;
      }
      FUN_14475bf92(param_3);
      puVar8 = local_168;
      if (local_138 != 0) {
        FUN_1400020a8();
      }
      if (local_160 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      if (local_148 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_128 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_118 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (puVar8 != (undefined2 *)0x0) {
        FUN_1400020a8(puVar8);
      }
joined_r0x000147dca117:
      if (puVar7 != (undefined2 *)0x0) {
        FUN_1400020a8(puVar7);
      }
    }
    if (local_c0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    unaff_RBP = (undefined2 *)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  }
  if (local_98 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
LAB_147dc9c75:
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return (ulonglong)unaff_RBP & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dca122 FUN_147dca122 body=1142 status=ok
// SIG undefined FUN_147dca122(void)

longlong *
FUN_147dca122(longlong param_1,undefined8 *param_2,char param_3,undefined8 param_4,
             undefined8 *param_5)

{
  void *_Src;
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined4 local_a0;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78 [2];
  undefined2 *local_68;
  int local_60;
  undefined4 local_5c;
  longlong local_58 [3];
  
  local_58[2] = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *param_5 = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_68 = (undefined2 *)0x0;
  local_60 = *(int *)(param_2 + 1);
  lVar10 = (longlong)local_60;
  _Src = (void *)*param_2;
  if (lVar10 == 0) {
    local_5c = 0;
  }
  else {
    FUN_1446dd670(&local_68,local_60,0);
    memcpy(local_68,_Src,lVar10 * 2);
  }
  FUN_140056680(local_78,&DAT_149e0635c);
  local_a0 = 0;
  local_a8 = (undefined8 *)CONCAT44(local_a8._4_4_,1);
  FUN_1407cdbc6(param_2,local_78,&local_68,local_58);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  FUN_144a787a6(param_4,param_2);
  puVar8 = local_68;
  if (local_60 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_80,puVar8,1);
  if (*(int *)(param_1 + 0x410) != *(int *)(param_1 + 0x43c)) {
    uVar1 = (uint)((ulonglong)local_80 >> 0x10);
    uVar6 = (uint)local_80 & 0xffff;
    lVar10 = param_1 + 0x440;
    if (*(longlong *)(param_1 + 0x448) != 0) {
      lVar10 = *(longlong *)(param_1 + 0x448);
    }
    iVar7 = *(int *)(lVar10 + (ulonglong)
                              (*(int *)(param_1 + 0x450) - 1U &
                              (int)((ulonglong)local_80 >> 0x20) + ((uint)local_80 << 0x10 | uVar6)
                              + (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        plVar4 = (longlong *)(*(longlong *)(param_1 + 0x408) + (longlong)iVar7 * 0x18);
        if (*plVar4 == local_80) {
          if (plVar4 != (longlong *)0x0) {
            plVar4 = plVar4 + 1;
            goto LAB_147dca2fc;
          }
          break;
        }
        iVar7 = (int)plVar4[2];
      } while (iVar7 != -1);
    }
  }
  puVar8 = local_68;
  if (local_60 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_88,puVar8,1);
  if (*(int *)(param_1 + 0x4c8) != *(int *)(param_1 + 0x4f4)) {
    uVar1 = (uint)((ulonglong)local_88 >> 0x10);
    uVar6 = (uint)local_88 & 0xffff;
    lVar10 = param_1 + 0x4f8;
    if (*(longlong *)(param_1 + 0x500) != 0) {
      lVar10 = *(longlong *)(param_1 + 0x500);
    }
    iVar7 = *(int *)(lVar10 + (ulonglong)
                              (*(int *)(param_1 + 0x508) - 1U &
                              (int)((ulonglong)local_88 >> 0x20) + ((uint)local_88 << 0x10 | uVar6)
                              + (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        plVar4 = (longlong *)(*(longlong *)(param_1 + 0x4c0) + (longlong)iVar7 * 0x18);
        if (*plVar4 == local_88) {
          plVar11 = plVar4 + 1;
          if ((plVar11 != (longlong *)0x0 && plVar4 != (longlong *)0x0) &&
             (cVar2 = FUN_144729dda(plVar11), cVar2 != '\0')) {
            lVar10 = FUN_14479d2ce(plVar11);
            puVar8 = local_68;
            if (local_60 == 0) {
              puVar8 = &DAT_149dfb77a;
            }
            FUN_1446f470e(&local_90,puVar8,1);
            if (*(int *)(lVar10 + 0x40) != *(int *)(lVar10 + 0x6c)) {
              uVar1 = (uint)((ulonglong)local_90 >> 0x10);
              uVar6 = (uint)local_90 & 0xffff;
              lVar9 = lVar10 + 0x70;
              if (*(longlong *)(lVar10 + 0x78) != 0) {
                lVar9 = *(longlong *)(lVar10 + 0x78);
              }
              iVar7 = *(int *)(lVar9 + (ulonglong)
                                       (*(int *)(lVar10 + 0x80) - 1U &
                                       (int)((ulonglong)local_90 >> 0x20) +
                                       ((uint)local_90 << 0x10 | uVar6) +
                                       (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar6 >> 4)) * 4);
              if (iVar7 != -1) {
                goto LAB_147dca557;
              }
            }
          }
          break;
        }
        iVar7 = (int)plVar4[2];
      } while (iVar7 != -1);
    }
  }
  goto LAB_147dca2e8;
  while (iVar7 = (int)plVar4[2], iVar7 != -1) {
LAB_147dca557:
    plVar4 = (longlong *)(*(longlong *)(lVar10 + 0x38) + (longlong)iVar7 * 0x18);
    if (*plVar4 == local_90) {
      if (plVar4 != (longlong *)0x0) {
        plVar4 = plVar4 + 1;
        uVar5 = (**(code **)(*(longlong *)(lVar10 + 0x30) + 0x28))(lVar10 + 0x30);
        *param_5 = uVar5;
        goto LAB_147dca2fc;
      }
      break;
    }
  }
LAB_147dca2e8:
  local_78[0] = 0;
  local_78[1] = 0;
  if (param_3 == '\0') {
    plVar4 = (longlong *)0x0;
  }
  else {
    cVar2 = FUN_147dcac68(param_1 + 0x458,param_2,local_78);
    if (cVar2 == '\0') {
      if ((longlong)*(int *)(param_1 + 0x4b8) == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        lVar10 = *(longlong *)(param_1 + 0x4b0);
        lVar9 = (longlong)*(int *)(param_1 + 0x4b8) << 3;
        plVar4 = (longlong *)0x0;
        do {
          cVar2 = FUN_144729dda(lVar10);
          if (cVar2 != '\0') {
            lVar3 = FUN_14479d2ce(lVar10);
            cVar2 = FUN_147dcac68(lVar3 + 0x88,param_2,local_78);
            if (cVar2 != '\0') goto LAB_147dca49e;
          }
          lVar10 = lVar10 + 8;
          lVar9 = lVar9 + -8;
        } while (lVar9 != 0);
      }
    }
    else {
LAB_147dca49e:
      local_a8 = param_5;
      plVar4 = (longlong *)FUN_147dca122(param_1,local_78,0,param_4);
    }
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
  }
LAB_147dca2fc:
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_58[2] ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar4;
}



// FUNCTION 147dca59a FUN_147dca59a body=446 status=ok
// SIG undefined FUN_147dca59a(void)

undefined8 FUN_147dca59a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined4 local_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint local_80;
  uint uStack_7c;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  uint local_60;
  uint uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_98 = (longlong *)0x0;
  FUN_14485c47a();
  iVar4 = *(int *)(param_1 + 0x4b8);
  *(uint *)(param_1 + 0x4b8) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x4bc) < iVar4 + 1U) {
    FUN_147dd4b5a((longlong *)(param_1 + 0x4b0),iVar4);
  }
  *(longlong **)(*(longlong *)(param_1 + 0x4b0) + (longlong)iVar4 * 8) = local_98;
  plVar1 = (longlong *)(param_2 + 0x38);
  puVar2 = (undefined8 *)(param_2 + 0x48);
  local_70 = (undefined4 *)&DAT_100000000;
  local_60 = 0xffffffff;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_68 = puVar2;
  if (*(int *)(param_2 + 0x60) == 0) {
    uVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_70);
    uVar6 = *(uint *)(param_2 + 0x60);
  }
  uStack_78 = CONCAT44(uStack_54,uStack_58);
  local_80 = local_60;
  uStack_7c = uStack_5c;
  local_90 = (undefined4)local_70;
  uStack_8c = local_70._4_4_;
  uStack_88 = (undefined4)uStack_68;
  uStack_84 = uStack_68._4_4_;
  uVar5 = (ulonglong)uStack_5c;
  local_98 = plVar1;
  if ((uStack_5c != uVar6) || (uStack_68 != puVar2)) {
    do {
      puVar3 = (undefined4 *)(*local_98 + (longlong)(int)uVar5 * 0x18);
      local_a8 = *puVar3;
      uStack_a4 = puVar3[1];
      uStack_a0 = puVar3[2];
      uStack_9c = puVar3[3];
      local_b0 = 0;
      FUN_14485c47a(&local_b0,param_2);
      local_70 = &local_a8;
      uStack_68 = &local_b0;
      FUN_147dd4be0(param_1 + 0x4c0,local_4c,&local_70);
      local_80 = local_80 & ~uStack_8c;
      FUN_1449c0562(&local_90);
      uVar5 = (ulonglong)uStack_7c;
    } while (local_98 != plVar1 ||
             ((undefined8 *)CONCAT44(uStack_84,uStack_88) != puVar2 || uStack_7c != uVar6));
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return CONCAT71((int7)(uVar5 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dca75e FUN_147dca75e body=425 status=ok
// SIG undefined FUN_147dca75e(void)

undefined8 FUN_147dca75e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  longlong *local_98;
  undefined8 local_90;
  longlong local_88;
  uint local_80;
  int iStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  longlong local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar3 = param_2 + 0x48;
  local_70 = 0x100000000;
  local_60 = 0xffffffff;
  iStack_5c = 0;
  local_58 = 0;
  iVar2 = 0;
  local_a0 = param_1;
  local_68 = lVar3;
  if (*(int *)(param_2 + 0x60) != 0) {
    FUN_1449c0562(&local_70);
    iVar2 = *(int *)(param_2 + 0x60);
  }
  local_80 = local_60;
  iStack_7c = iStack_5c;
  local_78 = local_58;
  local_74 = local_54;
  local_90 = local_70;
  local_88 = local_68;
  if ((iStack_5c != iVar2) || (local_68 != lVar3)) {
    plVar1 = (longlong *)(local_a0 + 0x4c0);
    local_98 = (longlong *)(param_2 + 0x38);
    do {
      FUN_147dd50e2(plVar1,&local_4c,*(undefined8 *)(*local_98 + (longlong)iStack_7c * 0x18));
      local_70 = *(undefined8 *)(*plVar1 + 8 + (longlong)local_4c * 0x18);
      FUN_147dd5166(plVar1);
      FUN_147dca90c(&local_70,param_2);
      local_80 = local_80 & ~local_90._4_4_;
      FUN_1449c0562(&local_90);
    } while (local_98 != (longlong *)(param_2 + 0x38) || (local_88 != lVar3 || iStack_7c != iVar2));
  }
  lVar3 = local_a0 + 0x4b0;
  local_98 = (longlong *)0x0;
  FUN_14485c47a(&local_98,param_2);
  FUN_147dca97c(lVar3,&local_98);
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dca90c FUN_147dca90c body=110 status=ok
// SIG undefined FUN_147dca90c(void)

void FUN_147dca90c(int *param_1)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_14485c47a(&local_20);
  if ((*param_1 != (int)local_20) || (param_1[1] != local_20._4_4_)) {
    cVar1 = FUN_144729dda(param_1);
    if (cVar1 == '\0') {
      FUN_144729dda(&local_20);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dca97c FUN_147dca97c body=254 status=ok
// SIG undefined FUN_147dca97c(void)

void FUN_147dca97c(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  lVar3 = 0;
  bVar6 = false;
  do {
    lVar5 = lVar3 * 8;
    while( true ) {
      cVar1 = FUN_147dd51be(*param_1 + lVar5,param_2);
      iVar2 = (int)param_1[1];
      if (cVar1 != '\0') break;
      lVar3 = lVar3 + 1;
      lVar5 = lVar5 + 8;
      if (iVar2 <= lVar3) {
        if (!bVar6) {
          return;
        }
        goto LAB_147dcaa64;
      }
    }
    do {
      if (iVar2 - 1U != (uint)lVar3) {
        iVar4 = ~(uint)lVar3 + iVar2;
        if (0 < iVar4) {
          iVar4 = 1;
        }
        memmove((void *)(*param_1 + lVar3 * 8),(void *)(*param_1 + (longlong)(iVar2 - iVar4) * 8),
                (longlong)iVar4 << 3);
        iVar2 = (int)param_1[1];
      }
      *(int *)(param_1 + 1) = iVar2 + -1;
      if (iVar2 + -1 <= lVar3) goto LAB_147dcaa64;
      cVar1 = FUN_147dd51be(*param_1 + lVar5,param_2);
      iVar2 = (int)param_1[1];
    } while (cVar1 != '\0');
    lVar3 = lVar3 + 1;
    bVar6 = true;
  } while (lVar3 < iVar2);
LAB_147dcaa64:
  FUN_147dd51f4(param_1);
  return;
}



// FUNCTION 147dcaa7a FUN_147dcaa7a body=119 status=ok
// SIG undefined FUN_147dcaa7a(void)

void FUN_147dcaa7a(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  switchD_143c3d4dc::caseD_38();
  iVar1 = *(int *)(param_1 + 0x414);
  iVar2 = *(int *)(param_1 + 0x434);
  lVar4 = 0;
  if (1 < (ulonglong)(longlong)*(int *)(param_1 + 0x450)) {
    lVar4 = (longlong)*(int *)(param_1 + 0x450) * 4;
  }
  lVar3 = FUN_147dcaaf2(param_1 + 0x458);
  FUN_14484255c(param_2,lVar3 + (longlong)iVar1 * 0x18 + (ulonglong)(iVar2 + 0x1fU >> 5) * 4 + lVar4
               );
  return;
}



// FUNCTION 147dcaaf2 FUN_147dcaaf2 body=372 status=ok
// SIG undefined FUN_147dcaaf2(void)

longlong FUN_147dcaaf2(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
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
  iVar2 = *(int *)((longlong)param_1 + 0xc);
  iVar3 = *(int *)((longlong)param_1 + 0x2c);
  iVar9 = 0;
  lVar7 = (longlong)(int)param_1[9] * 4;
  if ((ulonglong)(longlong)(int)param_1[9] < 2) {
    lVar7 = 0;
  }
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
    iVar9 = (int)param_1[5];
  }
  lVar7 = (longlong)iVar2 * 0x60 + (ulonglong)(iVar3 + 0x1fU >> 5) * 4 + lVar7;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = param_1;
  if ((iStack_3c != iVar9) || (local_48 != plVar1)) {
    do {
      lVar4 = *local_78;
      lVar5 = (longlong)iStack_5c * 0x60;
      uVar6 = (ulonglong)*(int *)(lVar4 + 0x50 + lVar5);
      lVar8 = 0;
      if (1 < uVar6) {
        lVar8 = uVar6 * 4;
      }
      lVar7 = lVar7 + (longlong)*(int *)(lVar4 + 0x14 + lVar5) * 0x28 +
              (ulonglong)(*(int *)(lVar4 + 0x34 + lVar5) + 0x1fU >> 5) * 4 + lVar8;
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_1 || (local_68 != plVar1 || iStack_5c != iVar9));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dcac68 FUN_147dcac68 body=1147 status=ok
// SIG undefined FUN_147dcac68(void)

ulonglong FUN_147dcac68(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  void *_Src;
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  longlong local_90;
  int iStack_88;
  undefined4 uStack_84;
  longlong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined2 *local_68;
  int local_60;
  undefined4 local_5c;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_1[10] == 0) {
    uVar7 = 0;
  }
  else {
    local_58 = 0;
    uStack_50 = 0;
    local_68 = (undefined2 *)0x0;
    local_60 = *(int *)(param_2 + 1);
    lVar9 = (longlong)local_60;
    _Src = (void *)*param_2;
    if (lVar9 == 0) {
      local_5c = 0;
    }
    else {
      FUN_1446dd670(&local_68,local_60,0);
      memcpy(local_68,_Src,lVar9 * 2);
    }
    FUN_140056680(&local_78,&DAT_149e0635c);
    local_a0 = 0;
    local_a8 = 1;
    FUN_1407cdbc6(param_2,&local_78,&local_68,&local_58);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      lVar9 = param_1[10];
      uVar1 = (uint)((ulonglong)lVar9 >> 0x10);
      uVar5 = (uint)lVar9 & 0xffff;
      plVar4 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar4 = (longlong *)param_1[8];
      }
      iVar3 = *(int *)((longlong)plVar4 +
                      (ulonglong)
                      ((int)param_1[9] - 1U &
                      (int)((ulonglong)lVar9 >> 0x20) + ((uint)lVar9 << 0x10 | uVar5) +
                      (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar5 >> 4)) * 4);
      if (iVar3 != -1) {
        do {
          lVar8 = *param_1 + (longlong)iVar3 * 0x60;
          if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x60) == lVar9) goto LAB_147dcad44;
          iVar3 = *(int *)(lVar8 + 0x58);
        } while (iVar3 != -1);
      }
    }
    lVar8 = 0;
LAB_147dcad44:
    local_78 = 0;
    uStack_70 = 0;
    do {
      puVar6 = &DAT_149dfb77a;
      if (local_60 != 0) {
        puVar6 = local_68;
      }
      FUN_1446f470e(&local_80,puVar6,1);
      if (*(int *)(lVar8 + 0x10) == *(int *)(lVar8 + 0x3c)) goto LAB_147dcafd7;
      uVar1 = (uint)((ulonglong)local_80 >> 0x10);
      uVar5 = (uint)local_80 & 0xffff;
      lVar9 = lVar8 + 0x40;
      if (*(longlong *)(lVar8 + 0x48) != 0) {
        lVar9 = *(longlong *)(lVar8 + 0x48);
      }
      iVar3 = *(int *)(lVar9 + (ulonglong)
                               (*(int *)(lVar8 + 0x50) - 1U &
                               (int)((ulonglong)local_80 >> 0x20) + ((uint)local_80 << 0x10 | uVar5)
                               + (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar5 >> 4)) * 4);
      if (iVar3 == -1) goto LAB_147dcafd7;
      while (plVar4 = (longlong *)(*(longlong *)(lVar8 + 8) + (longlong)iVar3 * 0x28),
            *plVar4 != local_80) {
        iVar3 = (int)plVar4[4];
        if (iVar3 == -1) goto LAB_147dcafd7;
      }
      if ((plVar4 == (longlong *)0x0) || (plVar4 == (longlong *)&DAT_fffffffffffffff8))
      goto LAB_147dcafd7;
      if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
        lVar9 = plVar4[3];
        uVar1 = (uint)((ulonglong)lVar9 >> 0x10);
        uVar5 = (uint)lVar9 & 0xffff;
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = param_1 + 7;
        }
        iVar3 = *(int *)((longlong)plVar4 +
                        (ulonglong)
                        ((int)param_1[9] - 1U &
                        (int)((ulonglong)lVar9 >> 0x20) + ((uint)lVar9 << 0x10 | uVar5) +
                        (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar5 >> 4)) * 4);
        if (iVar3 != -1) {
          do {
            lVar8 = *param_1 + (longlong)iVar3 * 0x60;
            if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x60) == lVar9) goto LAB_147dcae30;
            iVar3 = *(int *)(lVar8 + 0x58);
          } while (iVar3 != -1);
        }
      }
      lVar8 = 0;
LAB_147dcae30:
      FUN_140a107dc(&local_90,&local_78);
      local_78 = local_90;
      uStack_70 = CONCAT44(uStack_84,iStack_88);
      iVar3 = (int)uStack_50 + -1;
      if ((int)uStack_50 == 0) {
        iVar3 = 0;
      }
      FUN_1402980a2(&local_68,local_58,iVar3);
      FUN_140056680(&local_90,&DAT_149e0635c);
      local_a0 = 0;
      local_a8 = 1;
      cVar2 = FUN_1407cdbc6(&local_58,&local_90,&local_68,&local_58);
      if (local_90 != 0) {
        FUN_1400020a8();
      }
    } while (cVar2 != '\0');
    FUN_144a7e010(&local_58);
LAB_147dcafd7:
    uVar7 = CONCAT71((int7)((ulonglong)param_1 >> 8),
                     ((local_78._4_4_ != 0 || (int)local_78 != 0) || (int)uStack_70 != 0) ||
                     uStack_70._4_4_ != 0);
    if (((local_78._4_4_ != 0 || (int)local_78 != 0) || (int)uStack_70 != 0) || uStack_70._4_4_ != 0
       ) {
      FUN_14125ac64(&local_90,&local_78,&local_68);
      if (&local_90 == param_3) {
        if (local_90 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_3 != 0) {
          FUN_1400020a8();
        }
        *param_3 = local_90;
        local_90 = 0;
        *(int *)(param_3 + 1) = iStack_88;
        *(undefined4 *)((longlong)param_3 + 0xc) = uStack_84;
      }
      if (1 < (int)uStack_50) {
        FUN_140b1283a(&local_90,&DAT_149e0635c,&local_58);
        iVar3 = iStack_88 + -1;
        if (iStack_88 == 0) {
          iVar3 = 0;
        }
        FUN_1400020e8(param_3,local_90,iVar3);
        if (local_90 != 0) {
          FUN_1400020a8();
        }
      }
    }
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 147dcb0f0 FUN_147dcb0f0 body=103 status=ok
// SIG undefined FUN_147dcb0f0(void)

void FUN_147dcb0f0(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_1401b2056();
  if (*(int *)(param_1 + 0x458) != 0) {
    iVar1 = (int)(0x19000 / (longlong)*(int *)(param_1 + 0x458));
    iVar2 = 100000;
    if (iVar1 < 100000) {
      iVar2 = iVar1;
    }
    iVar1 = 10;
    if (10 < iVar2) {
      iVar1 = iVar2;
    }
    *(int *)(param_1 + 0x448) = iVar1;
    *(undefined4 *)(param_1 + 0x458) = 0;
  }
  if (*(longlong *)(param_1 + 0x3f0) != 0) {
    FUN_144757f48(*(longlong *)(param_1 + 0x3f0),0x100000);
    return;
  }
  return;
}



// FUNCTION 147dcb160 FUN_147dcb160 body=104 status=ok
// SIG undefined FUN_147dcb160(void)

void FUN_147dcb160(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb11b30) {
    FUN_144b3d300(&DAT_14cb11b30);
    if (DAT_14cb11b30 == -1) {
      FUN_1446f470e(&DAT_14cb11b28,L"StreamingSourceNames",1);
      _Init_thread_footer(&DAT_14cb11b30);
      return;
    }
  }
  return;
}



// FUNCTION 147dcb1c8 FUN_147dcb1c8 body=297 status=ok
// SIG undefined FUN_147dcb1c8(void)

longlong * FUN_147dcb1c8(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14480c34d(param_1,param_2 + 8);
  FUN_1401fb57a(param_1,param_2 + 0x20);
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)(param_2 + 0x38),1);
  }
  else {
    *(undefined1 *)(param_2 + 0x38) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  piVar2 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar2 + 1) {
    local_24 = (uint)*(byte *)(param_2 + 0x39);
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    *(bool *)(param_2 + 0x39) = local_24 != 0;
  }
  else {
    *(bool *)(param_2 + 0x39) = *piVar2 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)(param_2 + 0x3a),1);
  }
  else {
    *(undefined1 *)(param_2 + 0x3a) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  FUN_14480c34d(param_1,param_2 + 0x40);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dcb2f2 FUN_147dcb2f2 body=944 status=ok
// SIG undefined FUN_147dcb2f2(void)

longlong * FUN_147dcb2f2(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined1 auStack_208 [40];
  longlong *local_1e0;
  longlong *local_1d8;
  longlong *local_1d0;
  int local_1c8;
  longlong local_1c0 [4];
  longlong local_1a0;
  longlong lStack_198;
  longlong local_190;
  undefined2 local_188;
  undefined1 local_186;
  longlong local_180;
  longlong lStack_178;
  longlong local_170;
  undefined1 local_168;
  undefined4 local_164;
  undefined1 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_12c;
  undefined4 local_124;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 auStack_a8 [16];
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_208;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = param_2;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_147dcb6a4(param_2,&local_1d0);
  if ((longlong)local_1c8 == 0) {
    local_1c8 = 0;
  }
  else {
    local_1e0 = param_1 + 2;
    local_1d8 = local_1d0 + (longlong)local_1c8 * 0x2c;
    plVar10 = local_1d0;
    do {
      local_1c0[0] = *plVar10;
      local_1c0[3] = plVar10[3];
      local_1c0[1] = plVar10[1];
      local_1c0[2] = plVar10[2];
      local_190 = plVar10[6];
      local_1a0 = plVar10[4];
      lStack_198 = plVar10[5];
      local_188 = (short)plVar10[7];
      local_186 = *(undefined1 *)((longlong)plVar10 + 0x3a);
      local_170 = plVar10[10];
      local_180 = plVar10[8];
      lStack_178 = plVar10[9];
      local_168 = 0;
      local_138 = 0;
      local_130 = 0;
      local_160 = 0;
      local_164 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_12c = 0xffffffff00000080;
      local_124 = 0;
      local_118 = 0;
      local_110 = 0;
      local_e8 = 0;
      local_e0 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_dc = 0xffffffff00000080;
      local_d4 = 0;
      local_c8 = 0;
      local_c0 = 0;
      auStack_a8._4_8_ = 0;
      auStack_a8._1_2_ = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      uStack_ac = 0;
      local_88 = plVar10[3];
      local_98 = plVar10[1];
      lStack_90 = plVar10[2];
      local_70 = plVar10[6];
      local_80 = (int)plVar10[4];
      uStack_7c = *(undefined4 *)((longlong)plVar10 + 0x24);
      uStack_78 = (int)plVar10[5];
      uStack_74 = *(undefined4 *)((longlong)plVar10 + 0x2c);
      local_68 = 0;
      auStack_a8[0] = 1;
      iVar1 = (int)param_1[3];
      *(uint *)(param_1 + 3) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0x1c) < iVar1 + 1U) {
        FUN_147dd5290(local_1e0,iVar1);
      }
      lVar2 = param_1[2];
      lVar5 = (longlong)iVar1 * 0x160;
      *(undefined1 *)(lVar2 + lVar5 + 0x60) = local_160;
      plVar6 = local_1c0;
      plVar8 = (longlong *)(lVar2 + lVar5);
      for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
        *plVar8 = *plVar6;
        plVar6 = plVar6 + 1;
        plVar8 = plVar8 + 1;
      }
      FUN_144a87124(lVar2 + lVar5 + 0x68,&local_158);
      lVar3 = lVar2 + lVar5;
      FUN_1402d4652(lVar3 + 0xb8,&local_108);
      *(undefined8 *)(lVar3 + 0x108) = 0;
      *(undefined8 *)(lVar3 + 0x108) = local_b8;
      local_b8 = 0;
      *(undefined4 *)(lVar3 + 0x110) = uStack_b0;
      *(undefined4 *)(lVar3 + 0x114) = uStack_ac;
      uStack_b0 = 0;
      uStack_ac = 0;
      puVar7 = (undefined8 *)auStack_a8;
      puVar9 = (undefined8 *)(lVar2 + 0x118 + lVar5);
      for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      FUN_1448212c8(local_1c0);
      lVar2 = param_1[4];
      lVar3 = *(longlong *)(lVar2 + 0x390);
      iVar1 = *(int *)(lVar2 + 0x398);
      lVar5 = (longlong)iVar1;
      if (lVar5 != 0) {
        lVar4 = lVar5 * 8;
        uVar11 = 0;
        do {
          if (*(longlong *)(lVar3 + uVar11 * 8) == *plVar10) {
            if ((int)uVar11 != -1) goto LAB_147dcb5dc;
            break;
          }
          uVar11 = uVar11 + 1;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
      *(uint *)(lVar2 + 0x398) = iVar1 + 1U;
      if (*(uint *)(lVar2 + 0x39c) < iVar1 + 1U) {
        FUN_1446f84a2((longlong *)(lVar2 + 0x390),iVar1);
        lVar3 = *(longlong *)(lVar2 + 0x390);
      }
      *(longlong *)(lVar3 + lVar5 * 8) = *plVar10;
      uVar11 = (ulonglong)(*(int *)(param_1[4] + 0x398) - 1);
LAB_147dcb5dc:
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1446f48e2(param_1,iVar1);
      }
      *(int *)(*param_1 + (longlong)iVar1 * 4) = (int)uVar11;
      plVar10 = plVar10 + 0x2c;
    } while (plVar10 != local_1d8);
  }
  FUN_14482129f(local_1d0,local_1c8);
  if (local_1d0 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147dcb6a4 FUN_147dcb6a4 body=119 status=ok
// SIG undefined FUN_147dcb6a4(void)

undefined8 * FUN_147dcb6a4(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_1447210f0();
  if ((*(longlong *)(lVar2 + 0x30) == 0) ||
     (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x30) + 0x2b0), lVar2 == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar2 + 0x3f0);
  }
  puVar3 = (undefined8 *)FUN_147dc04d2(uVar4);
  *param_2 = 0;
  iVar1 = *(int *)(puVar3 + 1);
  uVar4 = *puVar3;
  *(int *)(param_2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1401056ea(param_2,iVar1,0);
    FUN_140177ada(*param_2,uVar4,iVar1);
  }
  return param_2;
}



// FUNCTION 147dcb71b FUN_147dcb71b body=286 status=ok
// SIG undefined FUN_147dcb71b(void)

longlong FUN_147dcb71b(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1403b0476();
  plVar1 = param_2 + 2;
  FUN_147dd5324(param_1,plVar1);
  local_68 = param_1;
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) && (0 < (int)param_2[3])) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      iVar2 = *(int *)(*param_2 + lVar4 * 4);
      if (((longlong)iVar2 < 0) || (*(int *)(param_2[4] + 0x398) <= iVar2)) {
        FUN_140002266(&local_60,L"Source {%i}");
        iVar2 = local_58 + -1;
        if (local_58 == 0) {
          iVar2 = 0;
        }
        FUN_1446f82e2(&local_50,iVar2,local_60,1);
        *(undefined8 *)(*plVar1 + lVar3) = local_50;
        if (local_60 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        *(undefined8 *)(*plVar1 + lVar3) =
             *(undefined8 *)(*(longlong *)(param_2[4] + 0x390) + (longlong)iVar2 * 8);
      }
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x160;
    } while (lVar4 < (int)param_2[3]);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_68;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dcb83a FUN_147dcb83a body=76 status=ok
// SIG undefined FUN_147dcb83a(void)

void FUN_147dcb83a(longlong param_1)

{
  FUN_1478b711e();
  FUN_14592e433(*(undefined8 *)(param_1 + 0x3a0),*(undefined4 *)(param_1 + 0x3a8));
  *(undefined4 *)(param_1 + 0x3a8) = 0;
  if (*(int *)(param_1 + 0x3ac) == 0) {
    return;
  }
  FUN_147dd5578(param_1 + 0x3a0);
  return;
}



// FUNCTION 147dcb886 FUN_147dcb886 body=80 status=ok
// SIG undefined FUN_147dcb886(void)

undefined8 FUN_147dcb886(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  if ((((DAT_14c761ee0 != 0) && (cVar2 = FUN_147dab12a(), cVar2 != '\0')) &&
      (*(longlong *)(param_1 + 0x30) != 0)) &&
     ((lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x2b0), lVar1 != 0 &&
      (lVar1 = *(longlong *)(lVar1 + 0x3f0), lVar1 != 0)))) {
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(longlong *)(lVar1 + 0xf0) != 0);
  }
  return 0;
}



// FUNCTION 147dcb8d6 FUN_147dcb8d6 body=152 status=ok
// SIG undefined FUN_147dcb8d6(void)

void FUN_147dcb8d6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140c2c6fa();
  local_30 = 0;
  local_38 = 0;
  local_40 = 10;
  FUN_1446f470e(&local_48,L"StreamingSourceNames",1);
  uVar1 = FUN_145af94ae();
  FUN_145af94ae();
  uVar1 = FUN_140f1fabf(uVar1,local_48);
  FUN_140f1fa23(uVar1,param_2,&local_40);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dcb970 FUN_147dcb970 body=218 status=ok
// SIG undefined FUN_147dcb970(void)

void FUN_147dcb970(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_128 [40];
  undefined1 local_100 [144];
  undefined8 local_70;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined1 local_48 [24];
  int local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_1448ef896();
  FUN_147dcb2f2(local_48,param_1);
  if (local_30 != 0) {
    FUN_1447400e4(local_100,0x400,1);
    FUN_147dcb71b(local_100,local_48);
    if (CONCAT44(uStack_5c,local_60) != 0) {
      lVar1 = FUN_14497e828(param_1);
      if (lVar1 != 0) {
        lVar1 = FUN_145f81532(lVar1);
        if (lVar1 != 0) {
          FUN_143696d9e(lVar1,param_1,local_70,local_60);
        }
      }
    }
    FUN_144a8b786(local_100);
  }
  FUN_147dcba4c(local_48);
  if ((local_18 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dcba4c FUN_147dcba4c body=59 status=ok
// SIG undefined FUN_147dcba4c(void)

void FUN_147dcba4c(longlong *param_1)

{
  FUN_147dd2b1f(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147dcba88 FUN_147dcba88 body=1930 status=ok
// SIG undefined FUN_147dcba88(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_147dcba88(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  char cVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  double *pdVar18;
  longlong lVar19;
  undefined8 *puVar20;
  double *pdVar21;
  undefined8 *puVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong uVar25;
  float fVar26;
  float fVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar35;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar36 [16];
  undefined1 auStack_2b8 [40];
  undefined4 local_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined8 local_280;
  ulonglong local_278;
  ulonglong uStack_270;
  undefined1 local_268 [16];
  double local_258 [5];
  undefined8 uStack_230;
  undefined8 local_228;
  undefined2 local_220;
  undefined1 local_21e;
  double local_218;
  double local_210;
  double local_208;
  undefined1 local_200;
  undefined4 local_1fc;
  undefined1 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c4;
  undefined4 local_1bc;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 local_174;
  undefined4 local_16c;
  undefined8 local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined1 auStack_140 [16];
  double local_130;
  double local_128;
  double local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  lVar12 = FUN_1447210f0();
  FUN_1437b14e8(lVar12);
  lVar12 = *(longlong *)(lVar12 + 0x108);
  if ((lVar12 == 0) || (cVar10 = FUN_147a5faf8(lVar12), cVar10 == '\0')) {
    uVar14 = 0;
  }
  else {
    fVar2 = *(float *)(lVar12 + 0xca8);
    plVar1 = (longlong *)(param_1 + 0x3a0);
    if (0 < *(int *)(param_1 + 0x3a8)) {
      do {
        if (fVar2 + -1.0 < *(float *)(*plVar1 + 0x28)) break;
        FUN_147dcc214(plVar1);
      } while (0 < *(int *)(param_1 + 0x3a8));
    }
    plVar13 = (longlong *)FUN_147a61b56(lVar12,param_1);
    if ((plVar13 != (longlong *)0x0) && (0 < (int)plVar13[1])) {
      lVar12 = 0;
      do {
        FUN_147dcb2f2(local_258,param_1);
        FUN_147dcb71b(*(undefined8 *)(*plVar13 + lVar12 * 8),local_258);
        uStack_230 = CONCAT44(uStack_230._4_4_,
                              *(undefined4 *)(*(longlong *)(*plVar13 + lVar12 * 8) + 0xb0));
        iVar11 = *(int *)(param_1 + 0x3a8);
        *(uint *)(param_1 + 0x3a8) = iVar11 + 1U;
        if (*(uint *)(param_1 + 0x3ac) < iVar11 + 1U) {
          FUN_147dd56fe(plVar1,iVar11);
        }
        FUN_147dd5656((longlong)iVar11 * 0x30 + *plVar1,local_258);
        FUN_147dcba4c(local_258);
        lVar12 = lVar12 + 1;
      } while (lVar12 < (int)plVar13[1]);
      FUN_147a73c48(plVar13);
      *(undefined4 *)(plVar13 + 1) = 0;
      if (*(int *)((longlong)plVar13 + 0xc) != 0) {
        FUN_1447ab16c(plVar13,0);
      }
    }
    uVar14 = 1;
    if (1 < *(int *)(param_1 + 0x3a8)) {
      lVar12 = *plVar1;
      lVar23 = 0;
      do {
        if ((*(float *)(lVar12 + 0x28 + lVar23) <= fVar2) &&
           (fVar2 <= *(float *)(lVar12 + 0x58 + lVar23))) {
          if (0 < *(int *)(lVar12 + 0x18 + lVar23)) {
            lVar24 = 0;
            do {
              lVar19 = *(longlong *)(lVar12 + 0x10 + lVar23);
              lVar15 = (longlong)*(int *)(lVar12 + 0x48 + lVar23);
              if (lVar15 != 0) {
                lVar17 = *(longlong *)(lVar12 + 0x40 + lVar23);
                pdVar18 = (double *)(lVar19 + lVar24 * 0x160);
                lVar16 = 0;
LAB_147dcbcbb:
                if (*(longlong *)(lVar17 + lVar16) != *(longlong *)(lVar19 + lVar24 * 0x160))
                goto code_r0x000147dcbcc2;
                iVar11 = (int)(lVar16 >> 5) * -0x45d1745d;
                if (iVar11 != -1) {
                  fVar3 = *(float *)(lVar12 + 0x28 + lVar23);
                  fVar27 = *(float *)(lVar12 + 0x58 + lVar23) - fVar3;
                  fVar26 = 1.0;
                  if (1e-08 < fVar27) {
                    fVar26 = (fVar2 - fVar3) / fVar27;
                    if (1.0 <= fVar26) {
                      fVar26 = 1.0;
                    }
                    if (fVar26 <= 0.0) {
                      fVar26 = 0.0;
                    }
                  }
                  lVar17 = lVar17 + (longlong)iVar11 * 0x160;
                  dVar8 = (double)fVar26;
                  dVar9 = (*(double *)(lVar17 + 0x18) - pdVar18[3]) * dVar8 + pdVar18[3];
                  dVar7 = (*(double *)(lVar17 + 0x10) - pdVar18[2]) * dVar8 + pdVar18[2];
                  dVar6 = (*(double *)(lVar17 + 8) - pdVar18[1]) * dVar8 + pdVar18[1];
                  FUN_144a7484c(lVar17 + 0x20,local_258);
                  dVar31 = local_258[3];
                  dVar30 = local_258[2];
                  dVar29 = local_258[1];
                  dVar28 = local_258[0];
                  FUN_144a7484c(pdVar18 + 4,local_258);
                  uVar25 = -(ulonglong)
                            (0.0 <= local_258[2] * dVar30 +
                                    local_258[0] * dVar28 + dVar29 * local_258[1] +
                                    dVar31 * local_258[3]);
                  dVar32 = (double)(~uVar25 & (ulonglong)-(1.0 - dVar8) |
                                   uVar25 & (ulonglong)(1.0 - dVar8));
                  dVar28 = local_258[0] * dVar32 + dVar28 * dVar8;
                  dVar29 = local_258[1] * dVar32 + dVar29 * dVar8;
                  dVar30 = local_258[2] * dVar32 + dVar8 * dVar30;
                  dVar31 = local_258[3] * dVar32 + dVar8 * dVar31;
                  dVar32 = dVar30 * dVar30 + dVar28 * dVar28;
                  dVar35 = dVar31 * dVar31 + dVar29 * dVar29;
                  auVar33._0_8_ = dVar32 + dVar35;
                  auVar33._8_8_ = dVar32 + dVar35;
                  uVar25 = -(ulonglong)(9.99999993922529e-09 <= auVar33._8_8_);
                  auVar34 = sqrtpd(auVar33,auVar33);
                  auVar34 = divpd(_DAT_149934d80,auVar34);
                  auVar36._0_8_ = auVar34._0_8_ * dVar30;
                  auVar36._8_8_ = auVar34._8_8_ * dVar31;
                  local_278 = (ulonglong)(dVar28 * auVar34._0_8_) &
                              -(ulonglong)(9.99999993922529e-09 <= auVar33._0_8_);
                  uStack_270 = (ulonglong)(dVar29 * auVar34._8_8_) & uVar25;
                  auVar34._8_4_ = (int)uVar25;
                  auVar34._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar33._0_8_);
                  auVar34._12_4_ = (int)(uVar25 >> 0x20);
                  local_268 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar36,auVar34);
                  dVar28 = *(double *)(lVar17 + 0x50);
                  dVar29 = pdVar18[10];
                  dVar30 = *(double *)(lVar17 + 0x40);
                  dVar31 = *(double *)(lVar17 + 0x48);
                  dVar32 = pdVar18[8];
                  dVar35 = pdVar18[9];
                  uVar4 = *(undefined1 *)((longlong)pdVar18 + 0x3a);
                  uVar5 = *(undefined2 *)(pdVar18 + 7);
                  FUN_1448052ee(&local_278,&local_290);
                  local_258[0] = *pdVar18;
                  local_258[1] = dVar6;
                  local_258[2] = dVar7;
                  local_258[3] = dVar9;
                  local_228 = local_280;
                  uStack_230 = CONCAT44(uStack_284,uStack_288);
                  local_220 = uVar5;
                  local_21e = uVar4;
                  local_218 = (dVar30 - dVar32) * dVar8 + dVar32;
                  local_210 = (dVar31 - dVar35) * dVar8 + dVar35;
                  local_208 = (dVar28 - dVar29) * dVar8 + dVar29;
                  local_200 = 0;
                  local_1d0 = 0;
                  local_1c8 = 0;
                  local_1f8 = 0;
                  local_1fc = 0;
                  local_1f0 = 0;
                  uStack_1e8 = 0;
                  local_1c4 = 0xffffffff00000080;
                  local_1bc = 0;
                  local_1b0 = 0;
                  local_1a8 = 0;
                  local_180 = 0;
                  local_178 = 0;
                  local_1a0 = 0;
                  uStack_198 = 0;
                  local_174 = 0xffffffff00000080;
                  local_16c = 0;
                  local_160 = 0;
                  local_158 = 0;
                  auStack_140._4_8_ = 0;
                  auStack_140._1_2_ = 0;
                  local_150 = 0;
                  uStack_148 = 0;
                  uStack_144 = 0;
                  local_130 = dVar6;
                  local_128 = dVar7;
                  local_120 = dVar9;
                  local_108 = local_280;
                  local_118 = local_290;
                  uStack_114 = uStack_28c;
                  uStack_110 = uStack_288;
                  uStack_10c = uStack_284;
                  local_100 = 0;
                  auStack_140[0] = 1;
                  iVar11 = (int)param_2[1];
                  *(uint *)(param_2 + 1) = iVar11 + 1U;
                  if (*(uint *)((longlong)param_2 + 0xc) < iVar11 + 1U) {
                    FUN_140178088(param_2,iVar11);
                  }
                  lVar15 = *param_2;
                  lVar16 = (longlong)iVar11 * 0x160;
                  lVar19 = lVar15 + 0x68 + lVar16;
                  *(undefined1 *)(lVar19 + -8) = local_1f8;
                  pdVar18 = local_258;
                  pdVar21 = (double *)(lVar15 + lVar16);
                  for (lVar17 = 0xc; lVar17 != 0; lVar17 = lVar17 + -1) {
                    *pdVar21 = *pdVar18;
                    pdVar18 = pdVar18 + 1;
                    pdVar21 = pdVar21 + 1;
                  }
                  FUN_144a87124(lVar19,&local_1f0);
                  lVar19 = lVar16 + 0xb8 + lVar15;
                  FUN_1402d4652(lVar19,&local_1a0);
                  *(undefined8 *)(lVar19 + 0x50) = 0;
                  *(undefined8 *)(lVar19 + 0x50) = local_150;
                  local_150 = 0;
                  *(undefined4 *)(lVar19 + 0x58) = uStack_148;
                  *(undefined4 *)(lVar19 + 0x5c) = uStack_144;
                  uStack_148 = 0;
                  uStack_144 = 0;
                  puVar20 = (undefined8 *)auStack_140;
                  puVar22 = (undefined8 *)(lVar15 + 0x118 + lVar16);
                  for (lVar19 = 9; lVar19 != 0; lVar19 = lVar19 + -1) {
                    *puVar22 = *puVar20;
                    puVar20 = puVar20 + 1;
                    puVar22 = puVar22 + 1;
                  }
                  FUN_1448212c8(local_258);
                  goto LAB_147dcbd02;
                }
              }
LAB_147dcbccd:
              iVar11 = (int)param_2[1];
              *(uint *)(param_2 + 1) = iVar11 + 1U;
              if (*(uint *)((longlong)param_2 + 0xc) < iVar11 + 1U) {
                FUN_140178088(param_2,iVar11);
              }
              FUN_140177b16((longlong)iVar11 * 0x160 + *param_2,lVar19 + lVar24 * 0x160);
LAB_147dcbd02:
              lVar24 = lVar24 + 1;
            } while (lVar24 < *(int *)(lVar12 + 0x18 + lVar23));
            uVar14 = 1;
          }
          break;
        }
        lVar23 = lVar23 + 0x30;
      } while ((ulonglong)(*(int *)(param_1 + 0x3a8) - 1) * 0x30 != lVar23);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14;
code_r0x000147dcbcc2:
  lVar16 = lVar16 + 0x160;
  if (lVar15 * 0x160 - lVar16 == 0) goto LAB_147dcbccd;
  goto LAB_147dcbcbb;
}



// FUNCTION 147dcc214 FUN_147dcc214 body=74 status=ok
// SIG undefined FUN_147dcc214(void)

void FUN_147dcc214(undefined8 *param_1)

{
  void *_Dst;
  int iVar1;
  
  _Dst = (void *)*param_1;
  FUN_147dcba4c(_Dst);
  iVar1 = 0;
  if (*(int *)(param_1 + 1) + -1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x30),(longlong)(*(int *)(param_1 + 1) + -1) * 0x30);
    iVar1 = *(int *)(param_1 + 1) + -1;
  }
  *(int *)(param_1 + 1) = iVar1;
  FUN_147dd55a8(param_1);
  return;
}



// FUNCTION 147dcc27a FUN_147dcc27a body=96 status=ok
// SIG undefined FUN_147dcc27a(void)

void FUN_147dcc27a(longlong param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0xe8) == '\x01') {
    FUN_14479d2ce(param_1 + 0xe0);
    return;
  }
  lVar1 = FUN_1475a25ce();
  if ((*(longlong *)(lVar1 + 0x30) == 0) ||
     (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x30) + 0x2b0), lVar1 == 0)) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(lVar1 + 0x3f0);
  }
  if (*(longlong *)(lVar1 + 0x40) != 0) {
    return;
  }
  FUN_14475ec7e();
  return;
}



// FUNCTION 147dcc2da FUN_147dcc2da body=94 status=ok
// SIG undefined FUN_147dcc2da(void)

undefined8 FUN_147dcc2da(longlong *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar2 = (**(code **)(*param_1 + 0x2f8))();
  cVar1 = FUN_147dc0f80(uVar2);
  if (cVar1 != '\0') {
    cVar1 = FUN_147dc0e78(param_1 + 9);
    if ((cVar1 != '\0') &&
       ((DAT_14c761ed8 != '\0' ||
        ((((int)param_1[0xc] == 0 && *(int *)((longlong)param_1 + 0x5c) == 0) &&
         *(int *)((longlong)param_1 + 100) == 0) && (int)param_1[0xd] == 0)))) {
                    /* WARNING: Could not recover jumptable at 0x000147dcc31b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*(longlong *)param_1[0x15] + 0x2e8))();
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 147dcc338 FUN_147dcc338 body=86 status=ok
// SIG undefined FUN_147dcc338(void)

undefined1 FUN_147dcc338(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 uVar2;
  
  if (*(int *)(param_1 + 0x50) == 0) {
    *(undefined1 *)(param_1 + 0x9c) = 2;
    uVar2 = 2;
  }
  else {
    iVar1 = *(int *)(*(longlong *)(param_2 + 8) + 0x140);
    if (*(int *)(param_1 + 0xa0) == iVar1) {
      uVar2 = *(undefined1 *)(param_1 + 0x9c);
    }
    else {
      uVar2 = FUN_147dcc38e(param_2,param_1 + 0x40);
      *(undefined1 *)(param_1 + 0x9c) = uVar2;
      *(int *)(param_1 + 0xa0) = iVar1;
    }
  }
  return uVar2;
}



// FUNCTION 147dcc38e FUN_147dcc38e body=286 status=ok
// SIG undefined FUN_147dcc38e(void)

ulonglong FUN_147dcc38e(longlong param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  undefined8 unaff_RSI;
  undefined7 uVar4;
  ulonglong uVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar4 = (undefined7)((ulonglong)unaff_RSI >> 8);
  if (*(int *)(param_2 + 0x10) == 0) {
    uVar3 = CONCAT71(uVar4,2);
    goto LAB_147dcc41b;
  }
  uVar3 = CONCAT71(uVar4,2);
  if ((*param_2 == '\x01') && (**(longlong **)(param_2 + 8) != 0)) {
    uVar2 = FUN_1411bbe3a(*(undefined8 *)(param_1 + 8));
    uVar3 = (ulonglong)uVar2;
    if ((char)uVar2 != '\0') goto LAB_147dcc3c2;
LAB_147dcc4a6:
    uVar3 = 0;
  }
  else {
LAB_147dcc3c2:
    FUN_147dcd75c(param_2,&local_38);
    if (iStack_30 == 0) goto LAB_147dcc41b;
    if (*(char *)(param_1 + 1) == '\0') {
      local_48 = local_38;
      uStack_44 = uStack_34;
      iStack_40 = iStack_30;
      uStack_3c = uStack_2c;
      cVar1 = FUN_140044786(&local_48,2,*(undefined8 *)(param_1 + 8));
      if (cVar1 != '\0') goto LAB_147dcc41b;
      local_58 = local_38;
      uStack_54 = uStack_34;
      iStack_50 = iStack_30;
      uStack_4c = uStack_2c;
      uVar2 = FUN_140044786(&local_58,1,*(undefined8 *)(param_1 + 8));
    }
    else {
      if (*(char *)(param_1 + 1) != '\x01') goto LAB_147dcc4a6;
      local_68 = local_38;
      uStack_64 = uStack_34;
      iStack_60 = iStack_30;
      uStack_5c = uStack_2c;
      cVar1 = FUN_147db4914(&local_68,2,*(undefined8 *)(param_1 + 8));
      if (cVar1 != '\0') goto LAB_147dcc41b;
      local_78 = local_38;
      uStack_74 = uStack_34;
      iStack_70 = iStack_30;
      uStack_6c = uStack_2c;
      uVar2 = FUN_147db4914(&local_78,1,*(undefined8 *)(param_1 + 8));
    }
    uVar3 = (ulonglong)uVar2;
  }
LAB_147dcc41b:
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 147dcc4ae FUN_147dcc4ae body=101 status=ok
// SIG undefined FUN_147dcc4ae(void)

undefined8 * FUN_147dcc4ae(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  if ((int)param_1[5] != 0) {
    lVar1 = (**(code **)(*param_1 + 0x78))();
    if ((*(longlong *)(lVar1 + 0x30) == 0) ||
       (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x30) + 0x2b0), lVar1 == 0)) {
      lVar1 = 0;
    }
    else {
      lVar1 = *(longlong *)(lVar1 + 0x3f0);
    }
    if (*(longlong *)(lVar1 + 0xd0) != 0) {
      FUN_147dcc514(*(longlong *)(lVar1 + 0xd0),param_2,param_1 + 4);
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 147dcc514 FUN_147dcc514 body=215 status=ok
// SIG undefined FUN_147dcc514(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_147dcc514(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  void *_Src;
  ulonglong uVar1;
  longlong lVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb122c0) {
    FUN_144b3d300(&DAT_14cb122c0);
    if (DAT_14cb122c0 == -1) {
      DAT_14cb122b0 = (void *)0x0;
      _DAT_14cb122b8 = 0;
      atexit((_func_5014 *)&LAB_1437bf73b);
      _Init_thread_footer(&DAT_14cb122c0);
    }
  }
  lVar2 = FUN_147db45ce(param_1);
  if (lVar2 == 0) {
    *param_2 = 0;
    uVar1 = _DAT_14cb122b8;
    _Src = DAT_14cb122b0;
    lVar2 = (longlong)DAT_14cb122b8;
    *(int *)(param_2 + 1) = DAT_14cb122b8;
    if (lVar2 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_147dd582e(param_2,uVar1 & 0xffffffff);
      memcpy((void *)*param_2,_Src,lVar2 << 3);
    }
  }
  else {
    FUN_147db7784(lVar2,param_2,param_3);
  }
  return param_2;
}



// FUNCTION 147dcc5ec FUN_147dcc5ec body=226 status=ok
// SIG undefined FUN_147dcc5ec(void)

longlong FUN_147dcc5ec(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x40))(param_1,&local_20);
  if (local_20 != 0) {
    lVar1 = (**(code **)(*param_1 + 0x78))(param_1);
    if ((*(longlong *)(lVar1 + 0x30) == 0) ||
       (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x30) + 0x2b0), lVar1 == 0)) {
      lVar1 = 0;
    }
    else {
      lVar1 = *(longlong *)(lVar1 + 0x3f0);
    }
    lVar1 = *(longlong *)(lVar1 + 0xd0);
    if (lVar1 != 0) {
      (**(code **)(*param_1 + 0x40))(param_1,&local_20);
      lVar1 = FUN_147db45ce(lVar1);
      if (lVar1 != 0) {
        lVar1 = FUN_1414a418c(lVar1,&local_20);
        if (lVar1 != 0) {
          lVar2 = FUN_1459589aa();
          if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) goto LAB_147dcc6a7;
        }
      }
    }
  }
  lVar1 = 0;
LAB_147dcc6a7:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dcc6d0 FUN_147dcc6d0 body=125 status=ok
// SIG undefined FUN_147dcc6d0(void)

undefined8 FUN_147dcc6d0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((int)param_1[5] != 0) {
    lVar1 = (**(code **)(*param_1 + 0x78))();
    if ((*(longlong *)(lVar1 + 0x30) == 0) ||
       (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x30) + 0x2b0), lVar1 == 0)) {
      lVar1 = 0;
    }
    else {
      lVar1 = *(longlong *)(lVar1 + 0x3f0);
    }
    if (*(longlong *)(lVar1 + 0xd0) != 0) {
      lVar1 = FUN_147db45ce();
      if (lVar1 != 0) {
        lVar1 = FUN_1411ac7fa(lVar1,param_2);
        if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000147dcc73d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar2 = (**(code **)(*param_1 + 0x20))(param_1,lVar1,*(code **)(*param_1 + 0x20));
          return uVar2;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 147dcc74e FUN_147dcc74e body=37 status=ok
// SIG undefined FUN_147dcc74e(void)

bool FUN_147dcc74e(longlong param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*(longlong *)(param_1 + -0x28) + 0x300))(param_1 + -0x28);
  return ((piVar1[1] != 0 || *piVar1 != 0) || piVar1[2] != 0) || piVar1[3] != 0;
}



// FUNCTION 147dcc774 FUN_147dcc774 body=126 status=ok
// SIG undefined FUN_147dcc774(void)

longlong FUN_147dcc774(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_2 + 0x310))(param_2,&local_18);
  lVar2 = (longlong)*(int *)(param_1 + 0x28);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = lVar2 * 8;
    lVar3 = 0;
    do {
      bVar4 = *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar3) == local_18;
      lVar2 = CONCAT71((int7)((ulonglong)lVar2 >> 8),bVar4);
      if (bVar4) break;
      bVar4 = lVar1 + -8 != lVar3;
      lVar3 = lVar3 + 8;
    } while (bVar4);
  }
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 147dcc800 FUN_147dcc800 body=33 status=ok
// SIG undefined FUN_147dcc800(void)

undefined8 FUN_147dcc800(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x80) + 0x2f0))();
  return param_2;
}



// FUNCTION 147dcc822 FUN_147dcc822 body=282 status=ok
// SIG undefined FUN_147dcc822(void)

void FUN_147dcc822(longlong *param_1,byte param_2)

{
  longlong lVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  
  lVar5 = (**(code **)(*param_1 + 0x2c8))();
  uVar2 = DAT_14cb11bd8;
  if ((lVar5 != 0) && (iVar4 = *(int *)((longlong)param_1 + 0xb4), iVar4 < *(int *)(lVar5 + 0xa8)))
  {
    uVar7 = 1;
    do {
      lVar1 = *(longlong *)(*(longlong *)(lVar5 + 0xa0) + (longlong)iVar4 * 8);
      if (lVar1 == 0) {
        return;
      }
      if ((*(byte *)(lVar1 + 100) & 2) == 0) {
        return;
      }
      if (((uVar2 < uVar7 & (param_2 ^ 1)) == 1) && (0 < (int)DAT_14cb11bd8)) {
        return;
      }
      lVar6 = FUN_144a852ea();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
           ) != lVar6 + 0x30)) {
        cVar3 = FUN_1433bb880(lVar1,&DAT_14cb11bd0);
        if ((char)param_1[0x17] == '\x01') {
          if (-1 < *(char *)(lVar1 + 0x60)) {
            iVar4 = 1;
            if (cVar3 == '\0') goto LAB_147dcc8ff;
LAB_147dcc905:
            FUN_1406966b6(lVar1,&DAT_14cb11bd0);
          }
        }
        else {
          iVar4 = -1;
          if (cVar3 != '\0') {
LAB_147dcc8ff:
            *(int *)(param_1 + 0x16) = (int)param_1[0x16] + iVar4;
            goto LAB_147dcc905;
          }
        }
      }
      iVar4 = *(int *)((longlong)param_1 + 0xb4) + 1;
      *(int *)((longlong)param_1 + 0xb4) = iVar4;
      uVar7 = uVar7 + 1;
    } while (iVar4 < *(int *)(lVar5 + 0xa8));
  }
  return;
}



// FUNCTION 147dcc93c FUN_147dcc93c body=143 status=ok
// SIG undefined FUN_147dcc93c(void)

void FUN_147dcc93c(longlong param_1)

{
  if (DAT_14cb11bdc == 0) {
    if (*(char *)(param_1 + 0xb8) == '\x01') {
      *(undefined1 *)(param_1 + 0xb8) = 0;
      *(undefined4 *)(param_1 + 0xb4) = 0;
      FUN_147dcc822(param_1,1);
      *(undefined4 *)(param_1 + 0xb0) = 0;
    }
  }
  else {
    if ((*(char *)(param_1 + 0xba) == '\x01') &&
       (*(char *)(param_1 + 0xb8) != *(char *)(param_1 + 0xb9))) {
      *(char *)(param_1 + 0xb8) = *(char *)(param_1 + 0xb9);
      *(undefined4 *)(param_1 + 0xb4) = 0;
    }
    FUN_147dcc822(param_1,0);
  }
  if (*(char *)(param_1 + 0xba) == '\x01') {
    *(undefined1 *)(param_1 + 0xba) = 0;
  }
  return;
}



// FUNCTION 147dcc9f2 FUN_147dcc9f2 body=132 status=ok
// SIG undefined FUN_147dcc9f2(void)

longlong FUN_147dcc9f2(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (ulonglong)*(byte *)(param_1 + 0x28) - (ulonglong)*(byte *)(param_2 + 0x28);
  if (lVar2 == 0) {
    iVar1 = *(int *)(param_2 + 0xd4) - *(int *)(param_1 + 0xd4);
    if ((iVar1 == 0) && (iVar1 = *(int *)(param_1 + 0xd0) - *(int *)(param_2 + 0xd0), iVar1 == 0)) {
      lVar2 = 0;
      if (1e-08 < ABS(*(double *)(param_1 + 0x40) - *(double *)(param_2 + 0x40))) {
        lVar2 = (ulonglong)(*(double *)(param_2 + 0x40) <= *(double *)(param_1 + 0x40)) * 2 + -1;
      }
    }
    else {
      lVar2 = (longlong)iVar1;
    }
  }
  lVar3 = 1;
  if (lVar2 < 1) {
    lVar3 = lVar2;
  }
  lVar2 = -1;
  if (-1 < lVar3) {
    lVar2 = lVar3;
  }
  return lVar2;
}



// FUNCTION 147dccaae FUN_147dccaae body=56 status=ok
// SIG undefined FUN_147dccaae(void)

undefined8 * FUN_147dccaae(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x2d0))();
  uVar1 = puVar6[1];
  uVar2 = puVar6[2];
  uVar3 = puVar6[3];
  uVar4 = puVar6[4];
  uVar5 = puVar6[5];
  *param_2 = *puVar6;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  param_2[4] = uVar4;
  param_2[5] = uVar5;
  param_2[6] = puVar6[6];
  return param_2;
}



// FUNCTION 147dccae6 FUN_147dccae6 body=94 status=ok
// SIG undefined FUN_147dccae6(void)

undefined8 * FUN_147dccae6(undefined8 param_1,undefined8 *param_2)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  
  FUN_1437b1608();
  *param_2 = 0;
  iVar1 = DAT_14cb12278;
  _Src = DAT_14cb12270;
  lVar2 = (longlong)DAT_14cb12278;
  *(int *)(param_2 + 1) = DAT_14cb12278;
  if (lVar2 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,lVar2 * 2);
  }
  return param_2;
}



// FUNCTION 147dccb48 FUN_147dccb48 body=380 status=ok
// SIG undefined FUN_147dccb48(void)

void FUN_147dccb48(longlong param_1,longlong param_2,double *param_3)

{
  double *pdVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  longlong lVar12;
  
  FUN_14003eb08();
  dVar5 = *(double *)(param_1 + 0xe0) - *param_3;
  dVar6 = *(double *)(param_1 + 0xe8) - param_3[1];
  dVar5 = dVar6 * dVar6 + dVar5 * dVar5;
  if (*(char *)(param_2 + 0x39) == '\x01') {
    dVar6 = dVar5;
    if (*(double *)(param_1 + 0x148) <= dVar5) {
      dVar6 = *(double *)(param_1 + 0x148);
    }
    *(double *)(param_1 + 0x148) = dVar6;
    if (dVar6 < 0.0) {
      dVar6 = sqrt(dVar6);
    }
    else {
      dVar6 = SQRT(dVar6);
    }
    dVar7 = *(double *)(param_1 + 0x140);
    if (dVar6 / param_3[3] <= *(double *)(param_1 + 0x140)) {
      dVar7 = dVar6 / param_3[3];
    }
    *(double *)(param_1 + 0x140) = dVar7;
  }
  iVar3 = *(int *)(param_1 + 0x128);
  *(uint *)(param_1 + 0x128) = iVar3 + 1U;
  if (*(uint *)(param_1 + 300) < iVar3 + 1U) {
    FUN_144941252(param_1 + 0x120,iVar3);
  }
  *(double *)(*(longlong *)(param_1 + 0x120) + (longlong)iVar3 * 8) = dVar5;
  bVar2 = *(byte *)(param_2 + 0x3a);
  iVar3 = *(int *)(param_1 + 0x118);
  *(uint *)(param_1 + 0x118) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x11c) < iVar3 + 1U) {
    FUN_14475e4ac(param_1 + 0x110,iVar3);
  }
  *(float *)(*(longlong *)(param_1 + 0x110) + (longlong)iVar3 * 4) = (float)bVar2 / -255.0 + 1.0;
  iVar3 = *(int *)(param_1 + 0x138);
  *(uint *)(param_1 + 0x138) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x13c) < iVar3 + 1U) {
    FUN_14003ef0c((longlong *)(param_1 + 0x130),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x130);
  lVar12 = (longlong)iVar3 * 0x40;
  dVar5 = *param_3;
  dVar6 = param_3[1];
  dVar7 = param_3[2];
  dVar8 = param_3[3];
  dVar9 = param_3[4];
  dVar10 = param_3[5];
  dVar11 = param_3[7];
  pdVar1 = (double *)(lVar4 + 0x30 + lVar12);
  *pdVar1 = param_3[6];
  pdVar1[1] = dVar11;
  pdVar1 = (double *)(lVar4 + 0x20 + lVar12);
  *pdVar1 = dVar9;
  pdVar1[1] = dVar10;
  pdVar1 = (double *)(lVar4 + 0x10 + lVar12);
  *pdVar1 = dVar7;
  pdVar1[1] = dVar8;
  *(double *)(lVar4 + lVar12) = dVar5;
  ((double *)(lVar4 + lVar12))[1] = dVar6;
  return;
}



// FUNCTION 147dcccc4 FUN_147dcccc4 body=26 status=ok
// SIG undefined FUN_147dcccc4(void)

undefined8 FUN_147dcccc4(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x2d8))();
  return param_2;
}



// FUNCTION 147dcccde FUN_147dcccde body=123 status=ok
// SIG undefined FUN_147dcccde(void)

undefined4 FUN_147dcccde(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_147dc0de4(*(undefined8 *)(param_1 + 200));
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    local_20 = *(undefined8 *)(param_1 + 0x18);
    FUN_1400021e4(&local_20,local_30);
    uVar2 = FUN_147dc0fe6(local_30);
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dccd66 FUN_147dccd66 body=192 status=ok
// SIG undefined FUN_147dccd66(void)

void FUN_147dccd66(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  FUN_14086ecde(0,&local_48,1,0);
  lVar2 = local_48;
  lVar4 = (longlong)(int)uStack_40;
  if (lVar4 != 0) {
    lVar5 = 0;
    do {
      lVar1 = *(longlong *)(lVar2 + lVar5);
      if (lVar1 != 0) {
        lVar3 = FUN_14019a59a();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          (*(code *)*param_2)(param_2[1],lVar1);
        }
      }
      lVar5 = lVar5 + 8;
    } while (lVar4 * 8 != lVar5);
  }
  if (local_48 != 0) {
    FUN_1400020a8(local_48);
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147dcce30 FUN_147dcce30 body=202 status=ok
// SIG undefined FUN_147dcce30(void)

void FUN_147dcce30(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  code *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x120) != *(int *)(param_1 + 0x14c)) {
    local_20 = &local_30;
    local_28 = FUN_1437bf74c;
    local_30 = param_1;
    FUN_147dccd66(param_1);
  }
  lVar1 = FUN_1475a25ce();
  if ((*(longlong *)(lVar1 + 0x30) == 0) ||
     (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x30) + 0x2b0), lVar1 == 0)) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(lVar1 + 0x3f0);
  }
  lVar1 = *(longlong *)(lVar1 + 0x40);
  if (lVar1 == 0) {
    lVar1 = FUN_14475ec7e();
  }
  local_30 = 0;
  FUN_14485c47a(&local_30,lVar1);
  *(longlong *)(param_1 + 0xe0) = local_30;
  *(undefined1 *)(param_1 + 0xe8) = 1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dccefc FUN_147dccefc body=531 status=ok
// SIG undefined FUN_147dccefc(void)

longlong FUN_147dccefc(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                      undefined8 param_5,longlong param_6)

{
  void *_Src;
  longlong lVar1;
  undefined **ppuVar2;
  longlong lVar3;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  undefined1 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_180;
  void *local_178;
  int local_170;
  undefined4 local_16c;
  undefined1 local_168 [24];
  undefined **local_150;
  int local_148;
  undefined1 local_c0 [88];
  undefined1 local_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_178 = (void *)0x0;
  local_170 = *(int *)(param_4 + 1);
  lVar3 = (longlong)local_170;
  _Src = (void *)*param_4;
  if (lVar3 == 0) {
    local_16c = 0;
  }
  else {
    FUN_1446dd670(&local_178,local_170,0);
    memcpy(local_178,_Src,lVar3 * 2);
  }
  FUN_147454cd2(&local_150);
  FUN_14021219d(&local_150,&local_178);
  FUN_1414fe9a8(local_c0,&uStack_67);
  local_68 = 0;
  uStack_67 = 0;
  uStack_60 = 0;
  uStack_5f = 0;
  FUN_1407c869a(local_168,&local_68,9);
  local_150 = &PTR_FUN_14a3c1520;
  FUN_144a7fc42(&local_150);
  if (local_178 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7dea0(&local_150,&local_68,param_5);
  if (CONCAT71(uStack_67,local_68) != 0) {
    FUN_1400020a8();
  }
  if (param_6 != 0) {
    param_1 = param_6;
  }
  ppuVar2 = local_150;
  if (local_148 == 0) {
    ppuVar2 = (undefined **)&DAT_149dfb77a;
  }
  FUN_1446f470e(&local_180,ppuVar2,1);
  local_198 = 0;
  uStack_190 = 0;
  local_1a0 = 0;
  local_1a8 = 0;
  lVar3 = FUN_147dcd110(param_1,param_2,local_180,0);
  local_198 = 0;
  uStack_190 = 0;
  local_1a0 = 0;
  local_1a8 = 0;
  lVar1 = FUN_147dcd1fd(lVar3,param_3,0,0);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  *(longlong *)(lVar3 + 0xa8) = lVar1;
  if (local_150 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 147dcd110 FUN_147dcd110 body=236 status=ok
// SIG undefined FUN_147dcd110(void)

undefined8
FUN_147dcd110(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  undefined8 local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [6];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_3 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  FUN_144a5c54a(local_d8,param_2);
  local_b0 = param_5;
  local_b8 = param_6;
  local_a8 = param_7;
  local_a0 = param_8;
  local_d0 = param_1;
  local_c8 = param_3;
  local_c0 = param_4;
  uVar1 = FUN_1402710dd(local_d8);
  if (local_98 != 0) {
    if (local_88 == (longlong *)0x0) {
      local_88 = local_78;
    }
    (**(code **)(*local_88 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dcd1fd FUN_147dcd1fd body=236 status=ok
// SIG undefined FUN_147dcd1fd(void)

undefined8
FUN_147dcd1fd(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  undefined8 local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [6];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_3 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  FUN_144a5c54a(local_d8,param_2);
  local_b0 = param_5;
  local_b8 = param_6;
  local_a8 = param_7;
  local_a0 = param_8;
  local_d0 = param_1;
  local_c8 = param_3;
  local_c0 = param_4;
  uVar1 = FUN_1402710dd(local_d8);
  if (local_98 != 0) {
    if (local_88 == (longlong *)0x0) {
      local_88 = local_78;
    }
    (**(code **)(*local_88 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dcd31e FUN_147dcd31e body=466 status=ok
// SIG undefined FUN_147dcd31e(void)

longlong FUN_147dcd31e(longlong *param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar5 = *param_1;
  if (lVar5 == 0) {
LAB_147dcd376:
    lVar5 = 0;
  }
  else {
    lVar4 = FUN_1412d87bc();
    if (((lVar4 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar4 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
        lVar4 + 0x30)) goto LAB_147dcd376;
    lVar5 = *param_1;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  local_88 = 0;
  lVar5 = FUN_147dcd4f1(param_2,lVar5,0,1);
  if (param_3 == 0) {
    *(undefined8 *)(lVar5 + 0xf0) = 0;
    *(undefined8 *)(lVar5 + 0xf8) = 0;
    *(undefined8 *)(lVar5 + 0x100) = 0;
    *(undefined4 *)(lVar5 + 0x110) = 0;
    if (*(int *)(lVar5 + 0x114) < 0) {
      FUN_1446f8c06((undefined8 *)(lVar5 + 0x108),0);
    }
    puVar2 = *(undefined2 **)(lVar5 + 0x108);
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_60,param_3);
    *(undefined4 *)(lVar5 + 0xf8) = local_60;
    *(undefined4 *)(lVar5 + 0xfc) = uStack_5c;
    *(undefined4 *)(lVar5 + 0x100) = uStack_58;
    *(undefined4 *)(lVar5 + 0x104) = uStack_54;
    if ((undefined4 *)(lVar5 + 0xf8) == &local_60) {
      if (local_50 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(lVar5 + 0x108) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(lVar5 + 0x108) = local_50;
      local_50 = 0;
      *(undefined4 *)(lVar5 + 0x110) = local_48;
      *(undefined4 *)(lVar5 + 0x114) = local_44;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(param_3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) != 0) {
        *(undefined8 *)(lVar5 + 0xf0) = 0;
        goto LAB_147dcd4c5;
      }
    }
    FUN_14485c47a((undefined8 *)(lVar5 + 0xf0),param_3);
  }
LAB_147dcd4c5:
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dcd4f1 FUN_147dcd4f1 body=236 status=ok
// SIG undefined FUN_147dcd4f1(void)

undefined8
FUN_147dcd4f1(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  undefined8 local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [6];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_3 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  FUN_144a5c54a(local_d8,param_2);
  local_b0 = param_5;
  local_b8 = param_6;
  local_a8 = param_7;
  local_a0 = param_8;
  local_d0 = param_1;
  local_c8 = param_3;
  local_c0 = param_4;
  uVar1 = FUN_1402710dd(local_d8);
  if (local_98 != 0) {
    if (local_88 == (longlong *)0x0) {
      local_88 = local_78;
    }
    (**(code **)(*local_88 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dcd5de FUN_147dcd5de body=111 status=ok
// SIG undefined FUN_147dcd5de(void)

bool FUN_147dcd5de(longlong param_1)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_14485c47a(&local_28);
  local_20 = local_28;
  iVar1 = FUN_147dd58b8(param_1 + 0x28,(uint)((ulonglong)local_28 >> 0x20) ^ (uint)local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return iVar1 != -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dcd64e FUN_147dcd64e body=268 status=ok
// SIG undefined FUN_147dcd64e(void)

undefined8 FUN_147dcd64e(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = 0;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    uVar8 = (longlong)(int)((uint)((ulonglong)param_2 >> 0x20) ^ (uint)param_2) &
            (longlong)(int)param_1[9] - 1U;
    lVar5 = (longlong)*(int *)((longlong)plVar7 + uVar8 * 4);
    if (lVar5 != -1) {
      lVar4 = *param_1;
      lVar5 = lVar5 * 0x10;
      local_48 = *(undefined8 *)(lVar4 + lVar5);
      local_50 = param_2;
      cVar2 = FUN_147dd596e();
      if (cVar2 == '\0') {
        lVar5 = lVar4 + lVar5;
        do {
          lVar4 = lVar5;
          lVar5 = (longlong)*(int *)(lVar4 + 8);
          if (lVar5 == -1) goto LAB_147dcd6ab;
          lVar1 = *param_1;
          lVar5 = lVar5 * 0x10;
          local_48 = *(undefined8 *)(lVar1 + lVar5);
          local_50 = param_2;
          cVar2 = FUN_147dd596e(&local_48,&local_50);
          lVar5 = lVar1 + lVar5;
        } while (cVar2 == '\0');
        puVar6 = (undefined4 *)(lVar4 + 8);
      }
      else {
        puVar6 = (undefined4 *)((longlong)plVar7 + uVar8 * 4);
      }
      FUN_147dd5e7c(param_1,*puVar6);
      uVar3 = 1;
    }
  }
LAB_147dcd6ab:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dcd75c FUN_147dcd75c body=150 status=ok
// SIG undefined FUN_147dcd75c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_147dcd75c(byte *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb12298) {
    FUN_144b3d300(&DAT_14cb12298);
    if (DAT_14cb12298 == -1) {
      DAT_14cb12288 = 0;
      _DAT_14cb12290 = 0;
      atexit((_func_5014 *)&LAB_1437bdf20);
      _Init_thread_footer(&DAT_14cb12298);
    }
  }
  bVar1 = *param_1;
  iVar3 = *(int *)(param_1 + 0x10) - (uint)bVar1;
  if (iVar3 == 0 || *(int *)(param_1 + 0x10) < (int)(uint)bVar1) {
    lVar2 = DAT_14cb12288;
    iVar3 = DAT_14cb12290;
  }
  else {
    lVar2 = (ulonglong)bVar1 * 8 + *(longlong *)(param_1 + 8);
  }
  *param_2 = lVar2;
  *(int *)(param_2 + 1) = iVar3;
  return param_2;
}



// FUNCTION 147dcd800 FUN_147dcd800 body=1362 status=ok
// SIG undefined FUN_147dcd800(void)

longlong * FUN_147dcd800(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  byte bVar1;
  void *pvVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined2 *puVar12;
  undefined1 auStack_208 [32];
  undefined2 *local_1e8;
  int local_1e0;
  int *local_1d8;
  int local_1d0;
  longlong local_1c8;
  longlong lStack_1c0;
  void *local_1b8;
  ulonglong uStack_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined2 *local_198;
  int local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined8 local_180;
  undefined2 *local_178;
  int local_170;
  undefined4 local_16c;
  int *local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  void *local_150;
  int local_148;
  undefined4 local_144;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  lVar6 = param_1 + 0x28;
  lVar4 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x78))(lVar6);
  lVar5 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x70))(lVar6);
  if (DAT_14c872bf0 != '\0') {
    lVar5 = lVar4;
  }
  lVar6 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x78))(lVar6);
  local_168 = &local_148;
  local_150 = (void *)((ulonglong)local_150 & 0xffffffffffffff00);
  uStack_158 = &local_48;
  local_1d8 = *(int **)(param_1 + 0x18);
  local_160 = local_168;
  FUN_1400021e4(&local_1d8,&local_178);
  puVar9 = local_178;
  if (local_170 == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  FUN_140212e80(&local_168,L"WorldPartitionLevelStreaming_%s",puVar9);
  if (local_178 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  bVar1 = *(byte *)(lVar6 + 0x152);
  if ((bVar1 == 1) || ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) {
    uVar7 = FUN_144b00ba4(lVar6);
    FUN_140a10636(&local_178,uVar7);
    puVar9 = local_178;
    if (local_170 == 0) {
      puVar9 = &DAT_149dfb77a;
    }
    FUN_140212e80(&local_168,&DAT_14ab2c130,puVar9);
    if (local_178 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  *(undefined2 *)local_160 = 0;
  FUN_1446f470e(&local_180,local_168,1);
  if ((char)local_150 == '\x01') {
    FUN_1400020a8(local_168);
  }
  uVar7 = FUN_14048957e();
  plVar8 = (longlong *)FUN_147dcdd53(lVar5,uVar7,local_180);
  local_188 = *(undefined8 *)(lVar4 + 0x18);
  local_178 = (undefined2 *)0x0;
  local_170 = *(int *)(param_2 + 1);
  lVar6 = (longlong)local_170;
  pvVar2 = (void *)*param_2;
  if (lVar6 == 0) {
    local_16c = 0;
LAB_147dcd9d9:
    puVar9 = &DAT_149dfb77a;
  }
  else {
    FUN_1446dd670(&local_178,local_170,0);
    memcpy(local_178,pvVar2,lVar6 * 2);
    puVar9 = local_178;
    if (local_170 == 0) goto LAB_147dcd9d9;
  }
  FUN_1446f470e(&local_168,puVar9,1);
  *(int **)((longlong)plVar8 + 0x54) = local_168;
  if (*param_3 == 0) {
    FUN_1400021e4(&local_188,&local_1e8);
    puVar9 = &DAT_149dfb77a;
    if (local_1e0 != 0) {
      puVar9 = local_1e8;
    }
    puVar12 = &DAT_149dfb77a;
    if (local_170 != 0) {
      puVar12 = local_178;
    }
    FUN_140002266(&local_1d8,L"%s.%s",puVar12,puVar9);
    local_1c8 = 0;
    lStack_1c0 = 0;
    local_1b8 = (void *)0x0;
    uStack_1b0 = 0;
    local_168 = local_1d8;
    iVar3 = local_1d0 + -1;
    if (local_1d0 == 0) {
      iVar3 = 0;
    }
    local_160 = (int *)CONCAT44(local_160._4_4_,iVar3);
    FUN_14475bf92(&local_1c8,&local_168);
    pvVar2 = local_1b8;
    local_168 = (int *)0x0;
    local_160 = (int *)local_1c8;
    uStack_158 = (ulonglong *)lStack_1c0;
    local_150 = (void *)0x0;
    lVar6 = (longlong)(int)uStack_1b0;
    local_148 = (int)uStack_1b0;
    if (lVar6 == 0) {
      local_144 = 0;
    }
    else {
      FUN_1446dd670(&local_150,uStack_1b0 & 0xffffffff,0);
      memcpy(local_150,pvVar2,lVar6 * 2);
    }
    if (local_1b8 != (void *)0x0) {
      FUN_1400020a8(local_1b8);
    }
    if (local_1d8 != (int *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    local_1a8 = (undefined4)*param_3;
    uStack_1a4 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_1a0 = (undefined4)param_3[1];
    uStack_19c = *(undefined4 *)((longlong)param_3 + 0xc);
    local_198 = (undefined2 *)0x0;
    local_190 = (int)param_3[3];
    lVar6 = (longlong)local_190;
    pvVar2 = (void *)param_3[2];
    if (lVar6 == 0) {
      local_18c = 0;
      local_160 = (int *)*param_3;
      uStack_158 = (ulonglong *)param_3[1];
      local_148 = 0;
    }
    else {
      FUN_1446dd670(&local_198,local_190,0);
      memcpy(local_198,pvVar2,lVar6 * 2);
      puVar9 = local_198;
      local_148 = local_190;
      lVar6 = (longlong)local_190;
      local_168 = (int *)0x0;
      local_160 = (int *)CONCAT44(uStack_1a4,local_1a8);
      uStack_158 = (ulonglong *)CONCAT44(uStack_19c,uStack_1a0);
      local_150 = (void *)0x0;
      if (lVar6 != 0) {
        FUN_1446dd670(&local_150,local_190,0);
        memcpy(local_150,puVar9,lVar6 * 2);
        local_1e8 = local_198;
        goto joined_r0x000147dcdb6c;
      }
    }
    local_150 = (void *)0x0;
    local_168 = (int *)0x0;
    local_144 = 0;
    local_1e8 = local_198;
  }
joined_r0x000147dcdb6c:
  if (local_1e8 != (undefined2 *)0x0) {
    FUN_1400020a8(local_1e8);
  }
  (**(code **)(*plVar8 + 0x2c8))(plVar8,&local_168);
  if (local_150 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((*(longlong *)(lVar4 + 0x30) == 0) ||
     (lVar6 = *(longlong *)(*(longlong *)(lVar4 + 0x30) + 0x2b0), lVar6 == 0)) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(longlong *)(lVar6 + 0x3f0);
  }
  plVar10 = &DAT_14c846480;
  if (*(char *)(lVar6 + 0xb0) != '\0') {
    plVar10 = (longlong *)(lVar6 + 0x50);
  }
  plVar11 = plVar8 + 0x10;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *plVar11 = *plVar10;
    plVar10 = plVar10 + 1;
    plVar11 = plVar11 + 1;
  }
  *(undefined1 *)(plVar8 + 0x1c) = *(undefined1 *)(param_1 + 0x58);
  FUN_147dc937e(plVar8,param_1);
  if (local_178 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar8;
}



// FUNCTION 147dcdd53 FUN_147dcdd53 body=196 status=ok
// SIG undefined FUN_147dcdd53(void)

undefined8 FUN_147dcdd53(undefined8 param_1,undefined8 param_2,longlong param_3)

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
  local_a0 = 0;
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



// FUNCTION 147dcde30 FUN_147dcde30 body=131 status=ok
// SIG undefined FUN_147dcde30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_147dcde30(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb122ac) {
    FUN_144b3d300(&DAT_14cb122ac);
    if (DAT_14cb122ac == -1) {
      _DAT_14cb122a4 = 0;
      _DAT_14cb1229c = 0;
      _DAT_14cb122a8 = 0x3e800000;
      _Init_thread_footer(&DAT_14cb122ac);
    }
  }
  uVar1 = CONCAT44(_DAT_14cb122a8,_DAT_14cb122a4);
  *param_2 = _DAT_14cb1229c;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 147dcdf0e FUN_147dcdf0e body=132 status=ok
// SIG undefined FUN_147dcdf0e(void)

void FUN_147dcdf0e(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_1c8 [32];
  undefined **local_1a8;
  longlong *local_1a0;
  undefined ***local_198;
  undefined8 **local_190;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  plVar1 = *(longlong **)(*param_2 + 8);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_149e3cbb8);
  local_190 = &local_198;
  local_1a8 = &PTR_FUN_149e37810;
  local_198 = &local_1a8;
  local_1a0 = plVar1;
  switchD_143c3d4dc::caseD_20(param_1);
  if ((local_18 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dcdf94 FUN_147dcdf94 body=436 status=ok
// SIG undefined FUN_147dcdf94(void)

void FUN_147dcdf94(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_88 [40];
  longlong local_60;
  int local_54;
  longlong *local_50;
  int *local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar5 = (uint)param_3[2];
  if ((-1 < (int)uVar5) && ((int)uVar5 < *(int *)(param_1 + 0x48))) {
    lVar7 = *param_3;
    lVar3 = param_3[1];
    lVar1 = FUN_144b2d958(param_1);
    if (-1 < lVar7) {
      lVar1 = *(longlong *)
               (*(longlong *)(lVar1 + 0x58) + 0x18 + (ulonglong)(uVar5 & 0x7fffffff) * 0x88);
      if (((lVar7 < lVar1) && (-1 < lVar3)) && (lVar3 < lVar1)) {
        lVar7 = lVar1 * lVar3 + lVar7;
        lVar3 = (ulonglong)(uVar5 & 0x7fffffff) * 0x60;
        plVar6 = (longlong *)(*(longlong *)(param_1 + 0x40) + lVar3);
        lVar3 = *(longlong *)(param_1 + 0x40) + lVar3;
        if (*(int *)(lVar3 + 0x18) != *(int *)(lVar3 + 0x44)) {
          plVar4 = plVar6 + 9;
          if ((longlong *)plVar6[10] != (longlong *)0x0) {
            plVar4 = (longlong *)plVar6[10];
          }
          iVar2 = *(int *)((longlong)plVar4 +
                          (ulonglong)
                          ((int)plVar6[0xb] - 1U &
                          (int)lVar7 + (int)((ulonglong)lVar7 >> 0x20) * 0x17) * 4);
          if (iVar2 != -1) {
            do {
              plVar4 = (longlong *)(*(longlong *)(lVar3 + 0x10) + (longlong)iVar2 * 0x18);
              if (*plVar4 == lVar7) {
                if ((plVar4 != (longlong *)0x0) && (plVar4 + 1 != (longlong *)0x0)) {
                  local_54 = (int)plVar4[1];
                  goto LAB_147dce0d2;
                }
                break;
              }
              iVar2 = (int)plVar4[2];
            } while (iVar2 != -1);
          }
        }
        local_54 = FUN_147dce14a(plVar6);
        local_48 = &local_54;
        local_50 = &local_60;
        local_60 = lVar7;
        FUN_147dd6422((longlong *)(lVar3 + 0x10),local_3c);
LAB_147dce0d2:
        plVar6 = (longlong *)((longlong)local_54 * 0x10 + *plVar6);
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(param_2);
        }
        iVar2 = (int)plVar6[1];
        *(uint *)(plVar6 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)plVar6 + 0xc) < iVar2 + 1U) {
          FUN_147dc641c(plVar6,iVar2);
        }
        *(undefined8 *)(*plVar6 + (longlong)iVar2 * 8) = param_2;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(param_2);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dce14a FUN_147dce14a body=58 status=ok
// SIG undefined FUN_147dce14a(void)

int FUN_147dce14a(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147dd639c(param_1,iVar1);
  }
  FUN_147dd6395((longlong)iVar1 * 0x10 + *param_1);
  return iVar1;
}



// FUNCTION 147dce184 FUN_147dce184 body=821 status=ok
// SIG undefined FUN_147dce184(void)

void FUN_147dce184(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  longlong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong *local_88;
  int local_7c;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong *local_60;
  int *piStack_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b8 = (longlong *)(param_1 + 0xa0);
  if (*(int *)(param_1 + 0xa8) == 0) {
    FUN_147dce4ba(local_b8,*(undefined4 *)(param_1 + 0x48));
  }
  iVar3 = *(int *)(param_2 + 0x48);
  if (0 < iVar3) {
    uVar9 = 0;
    local_b0 = param_2;
    local_a0 = param_1;
    do {
      uVar6 = *(int *)(param_1 + 0x48) - 1;
      uVar5 = uVar6;
      if ((int)(uint)uVar9 < (int)uVar6) {
        uVar5 = (uint)uVar9;
      }
      if (uVar9 == iVar3 - 1) {
        uVar5 = uVar6;
      }
      if ((-1 < (int)uVar5) && ((int)uVar5 < *(int *)(param_1 + 0xa8))) {
        plVar7 = (longlong *)(uVar9 * 0x60 + *(longlong *)(param_2 + 0x40));
        lVar8 = (longlong)(int)plVar7[1];
        if (lVar8 != 0) {
          plVar7 = (longlong *)*plVar7;
          plVar10 = plVar7 + lVar8 * 2;
          local_90 = (ulonglong)uVar5 * 0x88;
          local_98 = (ulonglong)uVar5 * 0x60;
          local_a8 = uVar9;
          local_88 = plVar10;
          do {
            if ((int)plVar7[1] != 0) {
              lVar8 = *(longlong *)(*(longlong *)*plVar7 + 0xa8);
              lVar4 = FUN_144b2d958(param_1);
              lVar12 = local_90;
              lVar4 = *(longlong *)(lVar4 + 0x58);
              local_60 = *(longlong **)(lVar8 + 0xe0);
              piStack_58 = *(int **)(lVar8 + 0xe8);
              cVar2 = FUN_147dce542(lVar4 + local_90,&local_60,&local_70);
              lVar8 = *(longlong *)(lVar4 + 0x18 + lVar12);
              if (cVar2 == '\0') {
                lVar4 = (longlong)(int)lVar8;
                if (lVar4 <= local_70) {
                  local_70 = lVar4;
                }
                if (local_70 < 1) {
                  local_70 = 0;
                }
                if (local_68 < lVar4) {
                  lVar4 = local_68;
                }
                local_68 = lVar4;
                if (lVar4 < 1) {
                  local_68 = 0;
                }
              }
              local_78 = lVar8 * local_68 + local_70;
              lVar8 = local_98 + *local_b8;
              plVar11 = (longlong *)(*local_b8 + local_98);
              if (*(int *)(lVar8 + 0x18) != *(int *)(lVar8 + 0x44)) {
                plVar10 = plVar11 + 9;
                if ((longlong *)plVar11[10] != (longlong *)0x0) {
                  plVar10 = (longlong *)plVar11[10];
                }
                iVar3 = *(int *)((longlong)plVar10 +
                                (ulonglong)
                                ((int)plVar11[0xb] - 1U &
                                (int)local_78 + (int)((ulonglong)local_78 >> 0x20) * 0x17) * 4);
                if (iVar3 != -1) {
                  do {
                    plVar10 = (longlong *)(*(longlong *)(lVar8 + 0x10) + (longlong)iVar3 * 0x18);
                    if (*plVar10 == local_78) {
                      if ((plVar10 != (longlong *)0x0) && (plVar10 + 1 != (longlong *)0x0)) {
                        local_7c = (int)plVar10[1];
                        goto LAB_147dce3ae;
                      }
                      break;
                    }
                    iVar3 = (int)plVar10[2];
                  } while (iVar3 != -1);
                }
              }
              local_7c = FUN_147dce14a(plVar11);
              local_60 = &local_78;
              piStack_58 = &local_7c;
              FUN_146bd7170((longlong *)(lVar8 + 0x10),local_4c,&local_60,0);
LAB_147dce3ae:
              lVar8 = plVar7[1];
              param_1 = local_a0;
              plVar10 = local_88;
              if ((longlong)(int)lVar8 != 0) {
                lVar4 = *plVar7;
                lVar12 = 0;
                do {
                  lVar1 = *(longlong *)(lVar4 + lVar12);
                  plVar10 = (longlong *)((longlong)local_7c * 0x10 + *plVar11);
                  if ((lVar1 != 0) && ((DAT_14c950c29 & 1) != 0)) {
                    FUN_1456cec3c(lVar1);
                  }
                  iVar3 = (int)plVar10[1];
                  *(uint *)(plVar10 + 1) = iVar3 + 1U;
                  if (*(uint *)((longlong)plVar10 + 0xc) < iVar3 + 1U) {
                    FUN_147dc641c(plVar10,iVar3);
                  }
                  *(longlong *)(*plVar10 + (longlong)iVar3 * 8) = lVar1;
                  if (DAT_14c950c29 == 1 && lVar1 != 0) {
                    FUN_1456cec3c(lVar1);
                  }
                  lVar12 = lVar12 + 8;
                  param_1 = local_a0;
                  plVar10 = local_88;
                } while ((longlong)(int)lVar8 * 8 != lVar12);
              }
            }
            plVar7 = plVar7 + 2;
          } while (plVar7 != plVar10);
          iVar3 = *(int *)(local_b0 + 0x48);
          param_2 = local_b0;
          uVar9 = local_a8;
        }
      }
      uVar9 = uVar9 + 1;
    } while ((longlong)uVar9 < (longlong)iVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147dce4ba FUN_147dce4ba body=135 status=ok
// SIG undefined FUN_147dce4ba(void)

void FUN_147dce4ba(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_147dd6562(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x60 + *param_1),0,(longlong)(param_2 - iVar1) * 0x60);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_147dd65f6(param_1,param_2,iVar1 - param_2);
    FUN_147dd665c(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147dce542 FUN_147dce542 body=129 status=ok
// SIG undefined FUN_147dce542(void)

undefined8 FUN_147dce542(double *param_1,double *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  
  dVar5 = (param_2[1] - param_1[1]) / (double)(longlong)param_1[2] +
          (double)(longlong)param_1[3] * 0.5;
  dVar6 = (*param_2 - *param_1) / (double)(longlong)param_1[2] + (double)(longlong)param_1[3] * 0.5;
  lVar1 = (longlong)ROUND(dVar6 + dVar6 + -0.5);
  lVar4 = (longlong)ROUND(dVar5 + dVar5 + -0.5) >> 1;
  lVar2 = lVar1 >> 1;
  *param_3 = lVar2;
  param_3[1] = lVar4;
  if ((((lVar2 < 0) || ((longlong)param_1[3] <= lVar2)) || (lVar4 < 0)) ||
     (uVar3 = CONCAT71((int7)(lVar1 >> 9),1), (longlong)param_1[3] <= lVar4)) {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 147dce5c4 FUN_147dce5c4 body=1545 status=ok
// SIG undefined FUN_147dce5c4(void)

void FUN_147dce5c4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  uint *puVar5;
  ulonglong uVar6;
  uint *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_168 [40];
  undefined8 *local_140;
  undefined8 *local_138;
  uint *local_130;
  longlong local_128;
  longlong local_120;
  ulonglong local_118;
  uint local_10c;
  uint *local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  uint local_c8;
  undefined4 local_c4;
  undefined1 local_bc [4];
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  iVar2 = *(int *)(param_2 + 0x48);
  if (0 < iVar2) {
    uVar6 = 0;
    local_128 = param_1;
    local_120 = param_2;
    do {
      uVar10 = *(int *)(param_1 + 0x48) - 1;
      uVar11 = uVar10;
      if ((int)(uint)uVar6 < (int)uVar10) {
        uVar11 = (uint)uVar6;
      }
      if (uVar6 == iVar2 - 1) {
        uVar11 = uVar10;
      }
      if ((-1 < (int)uVar11) && ((int)uVar11 < *(int *)(param_1 + 0xa8))) {
        local_138 = (undefined8 *)(uVar6 * 0x60 + *(longlong *)(param_2 + 0x40));
        lVar14 = *(longlong *)(param_1 + 0xa0);
        lVar12 = (ulonglong)uVar11 * 0x60;
        local_98 = 0;
        local_90 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_8c = 0xffffffff00000080;
        local_84 = 0;
        local_78 = (undefined1 *)0x0;
        local_70 = 0;
        lVar13 = lVar14 + 0x20 + lVar12;
        local_e0 = (undefined8 *)&DAT_100000000;
        local_d0 = 0xffffffff;
        local_c8 = 0;
        local_d8 = lVar13;
        if (*(int *)(lVar13 + 0x18) != 0) {
          FUN_1449c0562(&local_e0);
        }
        plVar1 = (longlong *)(lVar14 + lVar12);
        puVar7 = (uint *)(lVar14 + lVar12 + 0x10);
        local_f0 = local_d0;
        local_e8 = local_c8;
        local_e4 = local_c4;
        local_100 = local_e0;
        local_f8 = local_d8;
        uVar11 = *(uint *)(plVar1 + 7);
        local_e0 = (undefined8 *)CONCAT44(1 << ((byte)uVar11 & 0x1f),(int)uVar11 >> 5);
        local_d0 = CONCAT44(uVar11,-1 << ((byte)uVar11 & 0x1f));
        local_c8 = uVar11 & 0xffffffe0;
        local_140 = (undefined8 *)CONCAT44(local_140._4_4_,uVar11);
        local_118 = uVar6;
        local_108 = puVar7;
        local_d8 = lVar13;
        if (*(uint *)(plVar1 + 7) != uVar11) {
          FUN_1449c0562(&local_e0);
          local_140 = (undefined8 *)CONCAT44(local_140._4_4_,local_d0._4_4_);
        }
        lVar13 = local_d8;
        if ((local_108 != puVar7 || local_f8 != local_d8) || local_f0._4_4_ != (int)local_140) {
          do {
            local_d8 = *(longlong *)local_108 + (longlong)local_f0._4_4_ * 0x18;
            local_e0 = (undefined8 *)(*(longlong *)local_108 + (longlong)local_f0._4_4_ * 0x18 + 8);
            FUN_147dd670a(&local_b8,local_bc,&local_e0);
            local_f0 = CONCAT44(local_f0._4_4_,(uint)local_f0 & ~local_100._4_4_);
            FUN_1449c0562(&local_100);
          } while (local_108 != puVar7 || (local_f8 != lVar13 || local_f0._4_4_ != (int)local_140));
        }
        local_130 = puVar7;
        if ((longlong)*(int *)(local_138 + 1) != 0) {
          puVar3 = (undefined8 *)*local_138;
          local_138 = puVar3 + (longlong)*(int *)(local_138 + 1) * 2;
          do {
            local_140 = puVar3;
            if ((longlong)*(int *)(puVar3 + 1) != 0) {
              puVar8 = (undefined8 *)*puVar3;
              puVar3 = puVar8 + *(int *)(puVar3 + 1);
LAB_147dce90a:
              if (0 < (int)plVar1[1]) {
                puVar7 = (uint *)*puVar8;
                lVar13 = 0;
                lVar14 = 0;
                do {
                  lVar12 = *plVar1;
                  local_108 = puVar7;
                  if ((puVar7 != (uint *)0x0) && (DAT_14c950c29 != '\0')) {
                    FUN_1456cec3c(puVar7);
                  }
                  iVar2 = FUN_147dcebce(lVar12 + lVar13,&local_108);
                  if (iVar2 != 0) {
                    if (*(int *)(lVar12 + 8 + lVar13) == 0) {
                      local_10c = (uint)lVar14;
                      FUN_147dd6ba6(plVar1);
                      puVar7 = local_130;
                      if ((int)uStack_b0 == local_84) {
                        puVar5 = (uint *)0x0;
                        goto LAB_147dcea29;
                      }
                      puVar4 = local_78;
                      if (local_78 == (undefined1 *)0x0) {
                        puVar4 = local_80;
                      }
                      uVar11 = *(uint *)(puVar4 + (ulonglong)(local_70 - 1U & local_10c) * 4);
                      if (uVar11 == 0xffffffff) goto LAB_147dceb6f;
                      goto LAB_147dce96b;
                    }
                    break;
                  }
                  lVar14 = lVar14 + 1;
                  lVar13 = lVar13 + 0x10;
                } while (lVar14 < (int)plVar1[1]);
              }
              goto LAB_147dce958;
            }
LAB_147dce9e5:
            puVar3 = local_140 + 2;
          } while (puVar3 != local_138);
        }
        local_70 = 0;
        if (local_78 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        FUN_147dd368c(&local_b8);
        iVar2 = *(int *)(local_120 + 0x48);
        param_1 = local_128;
        param_2 = local_120;
        uVar6 = local_118;
      }
      uVar6 = uVar6 + 1;
    } while ((longlong)uVar6 < (longlong)iVar2);
  }
  if ((local_60 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
  while (uVar11 = puVar5[4], uVar11 != 0xffffffff) {
LAB_147dce96b:
    puVar5 = (uint *)(local_b8 + (longlong)(int)uVar11 * 0x18);
    if (*puVar5 == local_10c) goto LAB_147dcea29;
  }
LAB_147dceb6f:
  puVar5 = (uint *)0x0;
LAB_147dcea29:
  FUN_147dd6c10(local_130,*(undefined8 *)(puVar5 + 2));
  FUN_147dd6cd4(&local_b8,local_10c);
  if ((-1 < (int)local_10c) && (uVar11 = *(uint *)(plVar1 + 1), (int)local_10c < (int)uVar11)) {
    if ((int)uStack_b0 != local_84) {
      puVar4 = local_78;
      if (local_78 == (undefined1 *)0x0) {
        puVar4 = local_80;
      }
      uVar10 = *(uint *)(puVar4 + (ulonglong)(local_70 - 1U & uVar11) * 4);
      while (uVar10 != 0xffffffff) {
        puVar5 = (uint *)(local_b8 + (longlong)(int)uVar10 * 0x18);
        if (*puVar5 == uVar11) goto LAB_147dceaa3;
        uVar10 = puVar5[4];
      }
    }
    puVar5 = (uint *)0x0;
LAB_147dceaa3:
    local_e0 = *(undefined8 **)(puVar5 + 2);
    if ((int)plVar1[3] != *(int *)((longlong)plVar1 + 0x44)) {
      plVar9 = plVar1 + 9;
      if ((longlong *)plVar1[10] != (longlong *)0x0) {
        plVar9 = (longlong *)plVar1[10];
      }
      iVar2 = *(int *)((longlong)plVar9 +
                      (ulonglong)
                      ((int)plVar1[0xb] - 1U &
                      (int)local_e0 + (int)((ulonglong)local_e0 >> 0x20) * 0x17) * 4);
      if (iVar2 != -1) {
        do {
          plVar9 = (longlong *)(*(longlong *)puVar7 + (longlong)iVar2 * 0x18);
          if ((undefined8 *)*plVar9 == local_e0) goto LAB_147dceaf9;
          iVar2 = (int)plVar9[2];
        } while (iVar2 != -1);
      }
    }
    plVar9 = (longlong *)0x0;
LAB_147dceaf9:
    *(uint *)(plVar9 + 1) = local_10c;
    FUN_147dd6cd4(&local_b8);
    local_108 = &local_10c;
    local_100 = &local_e0;
    FUN_147dd670a(&local_b8,local_bc);
  }
LAB_147dce958:
  if (*(int *)((longlong)plVar1 + 0xc) != (int)plVar1[1]) {
    FUN_147dd6d7e(plVar1);
  }
  puVar8 = puVar8 + 1;
  if (puVar8 == puVar3) goto LAB_147dce9e5;
  goto LAB_147dce90a;
}



// FUNCTION 147dcebce FUN_147dcebce body=221 status=ok
// SIG undefined FUN_147dcebce(void)

undefined8 FUN_147dcebce(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_1;
    iVar6 = 1;
    lVar8 = 0;
    lVar9 = 0;
    bVar4 = DAT_14c950c29;
    do {
      lVar2 = *param_2;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar1 + lVar8) == lVar2) {
        if (iVar6 == 0) {
          return 0;
        }
        iVar5 = (int)param_1[1];
        iVar6 = iVar5 - iVar6;
        if (iVar6 != 0) {
          iVar7 = 1;
          if (iVar6 < 1) {
            iVar7 = iVar6;
          }
          memmove((void *)(*param_1 + (lVar9 >> 0x20) * 8),
                  (void *)(*param_1 + (longlong)(iVar5 - iVar7) * 8),(longlong)iVar7 << 3);
          iVar5 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar5 + -1;
        return 1;
      }
      lVar9 = lVar9 + 0x100000000;
      iVar6 = iVar6 + 1;
      lVar8 = lVar8 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar8);
  }
  return 0;
}



// FUNCTION 147dcecac FUN_147dcecac body=171 status=ok
// SIG undefined FUN_147dcecac(void)

void FUN_147dcecac(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  
  if ((param_1 != (longlong *)0x0) && (lVar5 = param_1[1], (longlong)(int)lVar5 != 0)) {
    lVar2 = *param_1;
    lVar8 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar8);
      cVar6 = (**(code **)(*plVar3 + 0x330))(plVar3);
      if (cVar6 != '\0') {
        uVar7 = (**(code **)(*plVar3 + 0x2f8))(plVar3);
        (**(code **)(plVar3[5] + 0x38))(plVar3 + 5);
        if ((((int)plVar3[10] == 0) || (1 < uVar7)) ||
           ((byte)(*(char *)((longlong)plVar3 + 0x9c) - 1U) < 2)) {
          uVar4 = *(undefined8 *)(lVar2 + lVar8);
          iVar1 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
            FUN_1405c1a44(param_2,iVar1);
          }
          *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar4;
        }
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)(int)lVar5 * 8 != lVar8);
  }
  return;
}



// FUNCTION 147dced58 FUN_147dced58 body=1366 status=ok
// SIG undefined FUN_147dced58(void)

void FUN_147dced58(longlong param_1,double *param_2,double *param_3,byte *param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  byte bVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined8 *puVar20;
  longlong lVar21;
  undefined8 *puVar22;
  double dVar23;
  double dVar24;
  undefined1 auStack_188 [32];
  longlong local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 uStack_130;
  longlong local_128;
  undefined8 uStack_120;
  undefined8 *local_118;
  int local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  ulonglong local_c0;
  double dVar8;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if ((1e-08 < ABS(param_2[7] + -360.0)) && (lVar10 = *(longlong *)(param_1 + 0x40), lVar10 != 0)) {
    dStack_f0 = param_2[3];
    dStack_d0 = param_2[7];
    dVar16 = *param_3;
    dVar17 = param_3[1];
    dVar15 = param_3[2];
    dVar14 = param_2[4] * param_3[8];
    dVar24 = param_2[5] * param_3[9];
    dVar11 = param_2[6] * param_3[10];
    dVar7 = param_3[3];
    dVar8 = param_3[3];
    dVar12 = dVar24 * dVar16 - dVar14 * dVar17;
    dVar13 = dVar11 * dVar17 - dVar24 * dVar15;
    dVar23 = dVar14 * dVar15 - dVar11 * dVar16;
    dVar13 = dVar13 + dVar13;
    dVar23 = dVar23 + dVar23;
    dVar12 = dVar12 + dVar12;
    dVar11 = dVar12 * dVar7 + dVar11 + (dVar23 * dVar16 - dVar13 * dVar17);
    dVar14 = (dVar12 * dVar17 - dVar23 * dVar15) + dVar7 * dVar13 + dVar14;
    dVar12 = (dVar15 * dVar13 - dVar16 * dVar12) + dVar8 * dVar23 + dVar24;
    dVar13 = dVar11 * dVar11 + dVar14 * dVar14 + dVar12 * dVar12;
    if (((dVar13 != 1.0) || (local_d8 = dVar11, local_e8 = dVar14, dStack_e0 = dVar12, NAN(dVar13)))
       && (local_d8 = DAT_14c8464f0, local_e8 = DAT_14c8464e0, dStack_e0 = DAT_14c8464e8,
          9.99999993922529e-09 <= dVar13)) {
      dVar13 = 1.0 / SQRT(dVar13);
      local_d8 = dVar11 * dVar13;
      local_e8 = dVar14 * dVar13;
      dStack_e0 = dVar12 * dVar13;
    }
    dVar23 = param_3[8] * *param_2;
    dVar24 = param_3[9] * param_2[1];
    dVar12 = param_3[10] * param_2[2];
    dVar11 = dVar24 * dVar16 - dVar17 * dVar23;
    dVar14 = dVar12 * dVar17 - dVar15 * dVar24;
    dVar13 = dVar23 * dVar15 - dVar16 * dVar12;
    dVar14 = dVar14 + dVar14;
    dVar13 = dVar13 + dVar13;
    dVar11 = dVar11 + dVar11;
    local_108 = (dVar11 * dVar17 - dVar13 * dVar15) + dVar7 * dVar14 + dVar23 + param_3[4];
    dStack_100 = (dVar15 * dVar14 - dVar16 * dVar11) + dVar8 * dVar13 + dVar24 + param_3[5];
    local_f8 = dVar11 * dVar7 + dVar12 + (dVar13 * dVar16 - dVar14 * dVar17) + param_3[6];
    FUN_147dcf2b0(&local_108,&local_118);
    local_128 = 0;
    uStack_120 = 0;
    if (local_110 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(local_110);
    }
    if (local_110 != 0) {
      FUN_1479f84ae(&local_128);
      if ((longlong)local_110 != 0) {
        puVar20 = local_118 + (longlong)local_110 * 6;
        puVar22 = local_118;
        do {
          uVar18 = uStack_120;
          uVar3 = *(undefined4 *)(lVar10 + 0x640);
          uVar4 = (&DAT_14c758c60)[param_4[2]];
          uVar5 = (&DAT_14c758c60)[param_4[1]];
          bVar9 = param_4[3];
          uVar6 = (&DAT_14c758c60)[*param_4];
          local_148 = puVar22[2];
          local_158 = *puVar22;
          uStack_150 = puVar22[1];
          uStack_130 = puVar22[5];
          uStack_140 = *(undefined4 *)(puVar22 + 3);
          uStack_13c = *(undefined4 *)((longlong)puVar22 + 0x1c);
          uStack_138 = *(undefined4 *)(puVar22 + 4);
          uStack_134 = *(undefined4 *)((longlong)puVar22 + 0x24);
          lVar21 = (longlong)(int)uStack_120;
          uVar19 = (int)uStack_120 + 1;
          uStack_120 = CONCAT44(uStack_120._4_4_,uVar19);
          if (uStack_120._4_4_ < uVar19) {
            FUN_1479f838a(&local_128,uVar18 & 0xffffffff);
          }
          lVar21 = lVar21 * 0x50;
          puVar2 = (undefined8 *)(local_128 + 0x20 + lVar21);
          *puVar2 = CONCAT44(uStack_134,uStack_138);
          puVar2[1] = uStack_130;
          puVar2 = (undefined8 *)(local_128 + 0x10 + lVar21);
          *puVar2 = local_148;
          puVar2[1] = CONCAT44(uStack_13c,uStack_140);
          puVar1 = (undefined4 *)(local_128 + lVar21);
          *puVar1 = (undefined4)local_158;
          puVar1[1] = local_158._4_4_;
          puVar1[2] = (undefined4)uStack_150;
          puVar1[3] = uStack_150._4_4_;
          *(undefined4 *)(local_128 + 0x30 + lVar21) = uVar4;
          *(undefined4 *)(local_128 + 0x34 + lVar21) = uVar5;
          *(undefined4 *)(local_128 + 0x38 + lVar21) = uVar6;
          *(float *)(local_128 + 0x3c + lVar21) = (float)bVar9 * 0.003921569;
          *(undefined4 *)(local_128 + 0x40 + lVar21) = 0x41a00000;
          *(undefined4 *)(local_128 + 0x44 + lVar21) = uVar3;
          *(undefined1 *)(local_128 + 0x48 + lVar21) = 0;
          *(undefined4 *)(local_128 + 0x4c + lVar21) = 0;
          puVar22 = puVar22 + 6;
        } while (puVar22 != puVar20);
      }
    }
    local_168 = local_128;
    local_160 = (int)uStack_120;
    FUN_1479e4368(lVar10);
    if (local_128 != 0) {
      FUN_1400020a8();
    }
    if (local_118 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147dcf2b0 FUN_147dcf2b0 body=2108 status=ok
// SIG undefined FUN_147dcf2b0(void)

longlong * FUN_147dcf2b0(double *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  ulonglong uVar22;
  double dVar23;
  uint uVar24;
  longlong lVar25;
  longlong lVar26;
  int iVar27;
  longlong lVar28;
  longlong lVar29;
  ulonglong uVar30;
  undefined8 *puVar31;
  ulonglong uVar32;
  float fVar33;
  double dVar34;
  double dVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined1 auStack_278 [32];
  int local_258;
  int local_254;
  ulonglong local_250;
  ulonglong local_248;
  ulonglong local_240;
  double *local_238;
  longlong local_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  undefined1 local_1e8 [16];
  double local_1d8;
  double dStack_1d0;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_278;
  *param_2 = 0;
  param_2[1] = 0;
  if (((1e-08 < ABS(param_1[3])) &&
      (((9.999999747378752e-05 < ABS(param_1[4]) || (9.999999747378752e-05 < ABS(param_1[5]))) ||
       (9.999999747378752e-05 < ABS(param_1[6]))))) && (dVar3 = param_1[7], 1e-08 < ABS(dVar3))) {
    fVar33 = ((float)dVar3 * 64.0) / 360.0;
    uVar24 = -((int)ROUND(-0.5 - (fVar33 + fVar33)) >> 1);
    uVar32 = 4;
    if (4 < (int)uVar24) {
      uVar32 = (ulonglong)uVar24;
    }
    FUN_144a90df0(&local_178,param_1 + 4);
    FUN_144a90b9e(&local_178,&local_190);
    local_1a8 = param_1[3];
    local_198 = DAT_14c8462e8 * local_1a8;
    local_1a0 = DAT_14c8462e0 * local_1a8;
    local_1a8 = local_1a8 * DAT_14c8462d8;
    iVar27 = (int)uVar32 * 0x22 + 0x44;
    if (iVar27 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar27);
    }
    if (iVar27 != 0) {
      FUN_146c94d7e(param_2);
    }
    dVar3 = dVar3 / (double)(int)uVar32;
    local_258 = -1;
    iVar27 = 0;
    uStack_220 = 0;
    local_248 = uVar32;
    local_240 = uVar32;
    local_238 = param_1;
    local_228 = dVar3;
    do {
      local_1b0 = (double)((float)iVar27 * 180.0 * 0.0625) + local_180;
      local_1b8 = local_188 + 0.0;
      local_1c0 = local_190 + 0.0;
      local_254 = iVar27;
      FUN_144a7484c(&local_1c0,&local_178);
      dVar7 = dStack_160;
      dVar5 = local_168;
      dVar12 = dStack_170;
      dVar9 = local_178;
      uVar37 = SUB84(dStack_160,0);
      uVar30 = (ulonglong)dStack_160 >> 0x20;
      dVar4 = param_1[2];
      dVar17 = *param_1;
      dVar18 = param_1[1];
      local_1b8 = param_1[7] * -0.5;
      local_1c0 = 0.0;
      local_1b0 = 0.0;
      FUN_1401c9a0e(&local_1c0,&local_178,&local_1a8);
      dVar8 = local_168;
      dVar23 = dStack_170;
      dVar16 = local_178;
      iVar27 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar27 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar27 + 1U) {
        FUN_146c94cea(param_2,iVar27);
      }
      dVar8 = dVar8 * 1.0;
      dVar35 = dVar23 * dVar9 - dVar12 * dVar16;
      dVar6 = dVar8 * dVar12 - dVar5 * dVar23;
      local_208 = dVar9;
      dStack_200 = dVar7;
      dVar34 = dVar16 * dVar5 - dVar9 * dVar8;
      dVar6 = dVar6 + dVar6;
      dVar34 = dVar34 + dVar34;
      dVar35 = dVar35 + dVar35;
      local_1d8 = dVar5;
      dStack_1d0 = dVar7;
      local_218 = dVar12;
      dStack_210 = dVar5;
      local_1f8 = dVar9;
      dStack_1f0 = dVar12;
      local_1e8._8_4_ = uVar37;
      local_1e8._0_8_ = dVar7;
      local_1e8._12_4_ = (int)uVar30;
      dVar15 = (dVar35 * dVar12 - dVar34 * dVar5) + dVar7 * dVar6 + dVar16 + dVar17;
      dVar16 = (dVar5 * dVar6 - dVar9 * dVar35) + dVar7 * dVar34 + dVar23 + dVar18;
      dVar9 = dVar35 * dVar7 + dVar8 + (dVar34 * dVar9 - dVar6 * dVar12) + dVar4;
      lVar29 = *param_2;
      lVar25 = (longlong)iVar27 * 0x30;
      *(double *)(lVar29 + 0x10 + lVar25) = param_1[2];
      dVar8 = param_1[1];
      *(double *)(lVar29 + lVar25) = *param_1;
      ((double *)(lVar29 + lVar25))[1] = dVar8;
      auVar13._8_4_ = SUB84(dVar16,0);
      auVar13._0_8_ = dVar15;
      auVar13._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
      *(undefined1 (*) [16])(lVar29 + 0x18 + lVar25) = auVar13;
      *(double *)(lVar29 + 0x28 + lVar25) = dVar9;
      local_250 = (ulonglong)*(uint *)(param_2 + 1);
      local_230 = (longlong)(int)*(uint *)(param_2 + 1);
      uVar30 = uVar32 & 0xffffffff;
      dVar8 = 1.0;
      do {
        uVar22 = (ulonglong)dVar16 >> 0x20;
        uVar37 = SUB84(dVar16,0);
        local_1b8 = param_1[7] * -0.5 + dVar3 * dVar8;
        local_1c0 = 0.0;
        local_1b0 = 0.0;
        FUN_1401c9a0e(&local_1c0,&local_178,&local_1a8);
        dVar12 = local_168;
        dVar23 = dStack_170;
        dVar16 = local_178;
        iVar27 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar27 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar27 + 1U) {
          FUN_146c94cea(param_2,iVar27);
        }
        dVar3 = local_228;
        dVar12 = dVar12 * 1.0;
        dVar5 = dVar23 * local_1f8 - local_218 * dVar16;
        dVar7 = dVar12 * dStack_1f0 - dStack_210 * dVar23;
        dVar35 = dVar16 * local_1d8 - local_208 * dVar12;
        dVar7 = dVar7 + dVar7;
        dVar35 = dVar35 + dVar35;
        dVar5 = dVar5 + dVar5;
        dVar6 = (dVar5 * dStack_1f0 - dVar35 * dStack_210) +
                (double)local_1e8._0_8_ * dVar7 + dVar16 + dVar17;
        dVar16 = (local_1d8 * dVar7 - local_208 * dVar5) + (double)local_1e8._8_8_ * dVar35 + dVar23
                 + dVar18;
        uVar36 = (undefined4)((ulonglong)dVar16 >> 0x20);
        dVar12 = dVar5 * (double)local_1e8._0_8_ + dVar12 + (dVar35 * local_1f8 - dVar7 * local_218)
                 + dVar4;
        lVar29 = *param_2;
        lVar25 = (longlong)iVar27 * 0x30;
        auVar14._8_4_ = uVar37;
        auVar14._0_8_ = dVar15;
        auVar14._12_4_ = (int)uVar22;
        *(undefined1 (*) [16])(lVar29 + lVar25) = auVar14;
        *(double *)(lVar29 + 0x10 + lVar25) = dVar9;
        auVar10._8_4_ = SUB84(dVar16,0);
        auVar10._0_8_ = dVar6;
        auVar10._12_4_ = uVar36;
        *(undefined1 (*) [16])(lVar29 + 0x18 + lVar25) = auVar10;
        *(double *)(lVar29 + 0x28 + lVar25) = dVar12;
        dVar8 = dVar8 + 1.0;
        uVar24 = (int)uVar30 - 1;
        uVar30 = (ulonglong)uVar24;
        dVar15 = dVar6;
        dVar9 = dVar12;
      } while (uVar24 != 0);
      iVar27 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar27 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar27 + 1U) {
        FUN_146c94cea(param_2,iVar27);
      }
      lVar29 = *param_2;
      lVar25 = (longlong)iVar27 * 0x30;
      *(double *)(lVar29 + 0x10 + lVar25) = param_1[2];
      uVar37 = *(undefined4 *)((longlong)param_1 + 4);
      uVar19 = *(undefined4 *)(param_1 + 1);
      uVar20 = *(undefined4 *)((longlong)param_1 + 0xc);
      puVar1 = (undefined4 *)(lVar29 + lVar25);
      *puVar1 = *(undefined4 *)param_1;
      puVar1[1] = uVar37;
      puVar1[2] = uVar19;
      puVar1[3] = uVar20;
      auVar11._8_4_ = SUB84(dVar16,0);
      auVar11._0_8_ = dVar6;
      auVar11._12_4_ = uVar36;
      *(undefined1 (*) [16])(lVar29 + 0x18 + lVar25) = auVar11;
      *(double *)(lVar29 + 0x28 + lVar25) = dVar12;
      if (local_254 != 0) {
        lVar25 = (longlong)local_258 * 0x30;
        lVar29 = local_230 * 0x30;
        lVar26 = *param_2;
        uVar32 = local_248;
        do {
          iVar27 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar27 + 1U;
          lVar28 = lVar26;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar27 + 1U) {
            FUN_146c94cea(param_2,iVar27);
            lVar28 = *param_2;
          }
          puVar1 = (undefined4 *)(lVar29 + lVar26);
          puVar31 = (undefined8 *)(lVar26 + lVar25);
          lVar26 = (longlong)iVar27 * 0x30;
          *(undefined8 *)(lVar28 + 0x10 + lVar26) = puVar31[2];
          uVar21 = puVar31[1];
          *(undefined8 *)(lVar28 + lVar26) = *puVar31;
          ((undefined8 *)(lVar28 + lVar26))[1] = uVar21;
          uVar37 = puVar1[1];
          uVar36 = puVar1[2];
          uVar19 = puVar1[3];
          puVar2 = (undefined4 *)(lVar28 + 0x18 + lVar26);
          *puVar2 = *puVar1;
          puVar2[1] = uVar37;
          puVar2[2] = uVar36;
          puVar2[3] = uVar19;
          *(undefined8 *)(lVar28 + 0x28 + lVar26) = *(undefined8 *)(puVar1 + 4);
          lVar25 = lVar25 + 0x30;
          lVar29 = lVar29 + 0x30;
          uVar32 = uVar32 - 1;
          lVar26 = lVar28;
        } while (uVar32 != 0);
        iVar27 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar27 + 1U;
        lVar29 = lVar28;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar27 + 1U) {
          FUN_146c94cea(param_2,iVar27);
          lVar29 = *param_2;
        }
        lVar25 = (longlong)((int)local_250 + (int)local_240) * 0x30 + lVar28;
        lVar28 = (longlong)(local_258 + (int)local_240) * 0x30 + lVar28;
        lVar26 = (longlong)iVar27 * 0x30;
        *(undefined8 *)(lVar29 + 0x10 + lVar26) = *(undefined8 *)(lVar28 + -8);
        uVar21 = *(undefined8 *)(lVar28 + -0x10);
        *(undefined8 *)(lVar29 + lVar26) = *(undefined8 *)(lVar28 + -0x18);
        ((undefined8 *)(lVar29 + lVar26))[1] = uVar21;
        uVar37 = *(undefined4 *)(lVar25 + -0x14);
        uVar36 = *(undefined4 *)(lVar25 + -0x10);
        uVar19 = *(undefined4 *)(lVar25 + -0xc);
        puVar1 = (undefined4 *)(lVar29 + 0x18 + lVar26);
        *puVar1 = *(undefined4 *)(lVar25 + -0x18);
        puVar1[1] = uVar37;
        puVar1[2] = uVar36;
        puVar1[3] = uVar19;
        *(undefined8 *)(lVar29 + 0x28 + lVar26) = *(undefined8 *)(lVar25 + -8);
        param_1 = local_238;
        uVar32 = local_240;
      }
      iVar27 = local_254 + 1;
      local_258 = (int)local_250;
    } while (iVar27 != 0x11);
  }
  if ((local_f0 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147dcfaee FUN_147dcfaee body=1619 status=ok
// SIG undefined FUN_147dcfaee(void)

void FUN_147dcfaee(undefined8 param_1,double *param_2,undefined8 *param_3,byte *param_4,
                  undefined8 param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  longlong lVar6;
  double *pdVar7;
  double *pdVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStack_1a8 [32];
  undefined8 *local_188;
  undefined4 local_180;
  double *local_178;
  undefined8 local_170;
  double local_168;
  double local_160;
  undefined1 local_158 [16];
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  double local_108;
  double local_100 [2];
  double local_f0;
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar3 = param_2[7];
  dVar13 = (dVar3 * 64.0) / 360.0;
  lVar6 = -((longlong)ROUND(-0.5 - (dVar13 + dVar13)) >> 1);
  lVar9 = 4;
  if (4 < lVar6) {
    lVar9 = lVar6;
  }
  dVar13 = param_2[4];
  dVar4 = param_2[5];
  local_118 = dVar3 * -0.5;
  local_120 = 0.0;
  local_110 = 0;
  local_138 = param_2[3];
  local_128 = param_2[6] * local_138;
  local_130 = dVar4 * local_138;
  local_138 = local_138 * dVar13;
  local_f0 = dVar1;
  local_e8 = dVar2;
  FUN_1401c9a0e(&local_120,&local_108);
  uVar18 = SUB84(local_108,0);
  uVar20 = (undefined4)((ulonglong)local_108 >> 0x20);
  uVar14 = SUB84(local_100[0],0);
  uVar16 = (undefined4)((ulonglong)local_100[0] >> 0x20);
  local_178 = param_2;
  if (1e-08 < ABS(param_2[7] + -360.0)) {
    local_120 = (double)CONCAT44((&DAT_14c758c60)[param_4[1]],(&DAT_14c758c60)[param_4[2]]);
    local_118 = (double)CONCAT44((float)param_4[3] * 0.003921569,(&DAT_14c758c60)[*param_4]);
    local_140 = dVar2 + local_100[0];
    local_148 = dVar1 + local_108;
    (*(code *)*param_3)(&local_138,param_3[1]);
    (*(code *)*param_3)(local_158,param_3[1],&local_f0);
    local_180 = 0x40000000;
    local_188 = &local_120;
    FUN_147dc1aba(param_5,param_1,local_158,&local_138);
  }
  iVar11 = (int)lVar9;
  local_170 = param_1;
  if (0 < iVar11) {
    uVar15 = uVar14;
    uVar17 = uVar16;
    uVar19 = uVar18;
    uVar21 = uVar20;
    iVar10 = 1;
    do {
      local_130 = (double)((float)iVar10 * (float)(dVar3 / (double)iVar11));
      local_138 = 0.0;
      local_128 = 0.0;
      FUN_1401c9a0e(&local_138,&local_120,&local_108);
      local_140 = local_118;
      local_148 = local_120;
      uVar18 = SUB84(local_120,0);
      uVar20 = (undefined4)((ulonglong)local_120 >> 0x20);
      uVar14 = SUB84(local_118,0);
      uVar16 = (undefined4)((ulonglong)local_118 >> 0x20);
      local_120 = (double)CONCAT44((&DAT_14c758c60)[param_4[1]],(&DAT_14c758c60)[param_4[2]]);
      local_118 = (double)CONCAT44((float)param_4[3] * 0.003921569,(&DAT_14c758c60)[*param_4]);
      local_140 = local_e8 + local_140;
      local_148 = local_f0 + local_148;
      (*(code *)*param_3)(&local_138,param_3[1],&local_148);
      local_160 = (double)CONCAT44(uVar17,uVar15) + local_e8;
      local_168 = (double)CONCAT44(uVar21,uVar19) + local_f0;
      (*(code *)*param_3)(local_158,param_3[1],&local_168);
      local_180 = 0x40000000;
      local_188 = &local_120;
      FUN_147dc1aba(param_5,local_170,local_158,&local_138);
      bVar12 = iVar10 != iVar11;
      uVar15 = uVar14;
      uVar17 = uVar16;
      uVar19 = uVar18;
      uVar21 = uVar20;
      iVar10 = iVar10 + 1;
    } while (bVar12);
  }
  local_120 = (double)CONCAT44((&DAT_14c758c60)[param_4[1]],(&DAT_14c758c60)[param_4[2]]);
  local_118 = (double)CONCAT44((float)param_4[3] * 0.003921569,(&DAT_14c758c60)[*param_4]);
  bVar12 = ABS(local_178[7] + -360.0) <= 1e-08;
  pdVar8 = (double *)&DAT_14c8463f8;
  if (bVar12) {
    pdVar8 = local_100;
  }
  pdVar7 = (double *)&DAT_14c8463f0;
  if (bVar12) {
    pdVar7 = &local_108;
  }
  local_140 = *pdVar8 + local_e8;
  local_148 = *pdVar7 + local_f0;
  (*(code *)*param_3)(&local_138,param_3[1]);
  local_160 = (double)CONCAT44(uVar16,uVar14) + local_e8;
  local_168 = (double)CONCAT44(uVar20,uVar18) + local_f0;
  (*(code *)*param_3)(local_158,param_3[1]);
  uVar5 = local_170;
  local_180 = 0x40000000;
  local_188 = &local_120;
  FUN_147dc1aba(param_5,local_170,local_158,&local_138);
  local_120 = (double)CONCAT44((&DAT_14c758c60)[param_4[1]],(&DAT_14c758c60)[param_4[2]]);
  local_118 = (double)CONCAT44((float)param_4[3] * 0.003921569,(&DAT_14c758c60)[*param_4]);
  local_140 = dVar4 * local_178[3] + local_e8;
  local_148 = dVar13 * local_178[3] + local_f0;
  (*(code *)*param_3)(&local_138,param_3[1],&local_148);
  (*(code *)*param_3)(local_158,param_3[1],&local_f0);
  local_180 = 0x40000000;
  local_188 = &local_120;
  FUN_147dc1aba(param_5,uVar5,local_158,&local_138);
  if ((local_e0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147dd0148 FUN_147dd0148 body=131 status=ok
// SIG undefined FUN_147dd0148(void)

void FUN_147dd0148(longlong param_1,longlong *param_2)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  *(int *)(local_18 + 0x94) = *(int *)(local_18 + 0x94) + 1;
  FUN_1468be722();
  *(undefined1 *)(param_1 + 0xe0) = 1;
  FUN_140ebe7a0(*(undefined8 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x88));
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(int *)(param_1 + 0x8c) != 0) {
    FUN_147dd6dde(param_1 + 0x80);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dd01cc FUN_147dd01cc body=167 status=ok
// SIG undefined FUN_147dd01cc(void)

longlong FUN_147dd01cc(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  
  plVar2 = (longlong *)FUN_147dd02e4();
  if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar3 = plVar2 + 7;
    if ((longlong *)plVar2[8] != (longlong *)0x0) {
      plVar3 = (longlong *)plVar2[8];
    }
    iVar5 = *(int *)((longlong)plVar3 +
                    (ulonglong)
                    ((int)plVar2[9] - 1U &
                    (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar4) +
                    (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      while (plVar3 = (longlong *)(*plVar2 + (longlong)iVar5 * 0x18), *plVar3 != param_2) {
        iVar5 = (int)plVar3[2];
        if (iVar5 == -1) {
          return 0;
        }
      }
      if (plVar3 + 1 != (longlong *)0x0 && plVar3 != (longlong *)0x0) {
        return plVar3[1];
      }
    }
  }
  return 0;
}



// FUNCTION 147dd0274 FUN_147dd0274 body=112 status=ok
// SIG undefined FUN_147dd0274(void)

undefined4 FUN_147dd0274(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  uVar1 = FUN_1437b19c6();
  if (((char)uVar1 != '\0') && ((longlong)*(int *)(param_2 + 0x1c8) != 0)) {
    puVar3 = *(undefined8 **)(param_2 + 0x1c0);
    lVar4 = (longlong)*(int *)(param_2 + 0x1c8) * 0xc0;
    do {
      lVar2 = FUN_147dd01cc(param_1,*puVar3);
      if (lVar2 != 0) {
        FUN_147dce5c4(lVar2,puVar3);
      }
      puVar3 = puVar3 + 0x18;
      lVar4 = lVar4 + -0xc0;
    } while (lVar4 != 0);
  }
  return uVar1;
}



// FUNCTION 147dd02e4 FUN_147dd02e4 body=204 status=ok
// SIG undefined FUN_147dd02e4(void)

longlong FUN_147dd02e4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)(param_1 + 0xe0) == '\x01') {
    FUN_147dd6e0e(param_1 + 0x90);
    if ((longlong)*(int *)(param_1 + 0x88) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x80);
      lVar1 = (longlong)*(int *)(param_1 + 0x88) * 0xc0;
      do {
        local_60 = lVar2;
        local_58 = lVar2;
        local_50 = &local_60;
        FUN_147dd6f96(param_1 + 0x90,local_44,&local_58);
        lVar2 = lVar2 + 0xc0;
        lVar1 = lVar1 + -0xc0;
      } while (lVar1 != 0);
    }
    *(undefined1 *)(param_1 + 0xe0) = 0;
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1 + 0x90;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dd03b2 FUN_147dd03b2 body=249 status=ok
// SIG undefined FUN_147dd03b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_147dd03b2(undefined8 param_1,longlong param_2)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  double dVar6;
  float fVar7;
  
  fVar7 = DAT_14c761eec * _DAT_14c761ef0;
  lVar4 = *(longlong *)(param_2 + 0xa8);
  lVar3 = FUN_147dd01cc(param_1,*(undefined8 *)(lVar4 + 200));
  if ((lVar3 != 0) && (*(char *)(lVar4 + 0x29) == '\x01')) {
    fVar1 = *(float *)(lVar3 + 0x24);
    dVar6 = *(double *)(lVar4 + 0x30);
    if (dVar6 < 0.0) {
      dVar6 = sqrt(dVar6);
    }
    else {
      dVar6 = SQRT(dVar6);
    }
    iVar2 = *(int *)(lVar4 + 0xd4);
    lVar4 = FUN_144b2d958(lVar3);
    dVar6 = ((double)*(longlong *)(*(longlong *)(lVar4 + 0x58) + 0x10 + (longlong)iVar2 * 0x88) *
             -0.5 + dVar6) / (double)fVar1;
    uVar5 = CONCAT71((int7)((ulonglong)*(longlong *)(lVar4 + 0x58) >> 8),
                     '\x02' - ((double)DAT_14c761eec <= dVar6));
    if (dVar6 < (double)DAT_14c761eec) {
      return uVar5;
    }
    if (dVar6 < (double)fVar7) {
      return uVar5;
    }
  }
  return 0;
}



// FUNCTION 147dd04ac FUN_147dd04ac body=155 status=ok
// SIG undefined FUN_147dd04ac(void)

undefined8 FUN_147dd04ac(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  
  plVar3 = (longlong *)FUN_147dd02e4();
  if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
    lVar1 = *param_2;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar6 = (uint)lVar1 & 0xffff;
    plVar5 = plVar3 + 7;
    if ((longlong *)plVar3[8] != (longlong *)0x0) {
      plVar5 = (longlong *)plVar3[8];
    }
    iVar7 = *(int *)((longlong)plVar5 +
                    (ulonglong)
                    ((int)plVar3[9] - 1U &
                    (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar6) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        bVar8 = *(longlong *)(*plVar3 + (longlong)iVar7 * 0x18) == lVar1;
        uVar4 = CONCAT71((int7)(int3)((uint)iVar7 >> 8),bVar8);
        if (bVar8) {
          return uVar4;
        }
        iVar7 = *(int *)(*plVar3 + (longlong)iVar7 * 0x18 + 0x10);
      } while (iVar7 != -1);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 147dd0548 FUN_147dd0548 body=63 status=ok
// SIG undefined FUN_147dd0548(void)

longlong FUN_147dd0548(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147dd7568(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xc0 + *param_1;
  FUN_147dd750b(lVar2);
  return lVar2;
}



// FUNCTION 147dd0588 FUN_147dd0588 body=122 status=ok
// SIG undefined FUN_147dd0588(void)

void FUN_147dd0588(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_147dd6562(param_1,iVar1);
    }
    FUN_147dd75fc((longlong)iVar1 * 0x60 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_147dd65f6(param_1,param_2,iVar1 - param_2);
    FUN_147dd665c(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147dd0604 FUN_147dd0604 body=115 status=ok
// SIG undefined FUN_147dd0604(void)

int FUN_147dd0604(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_30;
  int local_28 [2];
  int local_20;
  int local_18 [2];
  int local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = *param_2;
  uStack_4c = param_2[1];
  uStack_48 = param_2[2];
  uStack_44 = param_2[3];
  local_40 = param_2[6];
  uStack_3c = param_2[7];
  uStack_38 = param_2[8];
  uStack_34 = param_2[9];
  local_30 = 1;
  cVar1 = FUN_1437be92c(local_50,&local_50,local_18,local_28);
  iVar2 = 0;
  if (cVar1 != '\0') {
    iVar2 = ((local_20 - local_10) + 1) * ((local_28[0] - local_18[0]) + 1);
  }
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dd0678 FUN_147dd0678 body=261 status=ok
// SIG undefined FUN_147dd0678(void)

bool FUN_147dd0678(longlong param_1,undefined8 param_2)

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
  plVar1 = (longlong *)(param_1 + 0xe8);
  uVar3 = FUN_1447addd0(param_2,0x10);
  iVar4 = FUN_147dd7498(plVar1,uVar3,param_2);
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
      local_40 = FUN_1437beb4a;
      FUN_147dccd66(lVar5);
      FUN_1437bea8a(lVar5);
    }
    FUN_147dd7af8(plVar1,param_2);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return plVar7 != (longlong *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dd077e FUN_147dd077e body=168 status=ok
// SIG undefined FUN_147dd077e(void)

undefined8 * FUN_147dd077e(longlong param_1,undefined8 *param_2,undefined8 param_3)

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
  iVar2 = FUN_147dd7498((longlong *)(param_1 + 0xe8),uVar1,param_3);
  if ((iVar2 != -1) &&
     (lVar3 = (longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0xe8),
     puVar4 = (undefined8 *)(lVar3 + 0x10), puVar4 != (undefined8 *)0x0 && lVar3 != 0)) {
    local_28 = &local_38;
    local_30 = FUN_1437c10dc;
    local_38 = param_2;
    FUN_147dccd66(*puVar4);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dd0828 FUN_147dd0828 body=173 status=ok
// SIG undefined FUN_147dd0828(void)

undefined8 * FUN_147dd0828(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  iVar1 = *(int *)(param_1 + 0x88);
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (iVar1 != 0) {
    FUN_147dd7bea(param_2);
    local_38 = param_1;
    local_30 = param_2;
    if ((longlong)*(int *)(param_1 + 0x88) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x80);
      lVar3 = (longlong)*(int *)(param_1 + 0x88) * 0xc0;
      do {
        FUN_1437c1348(&local_38,lVar2);
        lVar2 = lVar2 + 0xc0;
        lVar3 = lVar3 + -0xc0;
      } while (lVar3 != 0);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147dd08d8 FUN_147dd08d8 body=217 status=ok
// SIG undefined FUN_147dd08d8(void)

void FUN_147dd08d8(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  int local_a0;
  undefined8 local_98 [12];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x20);
  }
  else {
    lVar1 = 0;
  }
  puVar2 = &DAT_14c846480;
  if (*(char *)(lVar1 + 0xb0) != '\0') {
    puVar2 = (undefined8 *)(lVar1 + 0x50);
  }
  puVar3 = local_98;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_147dd0828(param_1,&local_a8);
  lVar1 = local_a8;
  if ((longlong)local_a0 != 0) {
    lVar4 = 0;
    do {
      FUN_1437b2d42(*(undefined8 *)(lVar1 + lVar4),param_1,param_2,local_98);
      lVar4 = lVar4 + 8;
    } while ((longlong)local_a0 * 8 != lVar4);
  }
  if (local_a8 != 0) {
    FUN_1400020a8(local_a8);
  }
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147dd09b2 FUN_147dd09b2 body=156 status=ok
// SIG undefined FUN_147dd09b2(void)

ulonglong FUN_147dd09b2(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined8 local_30;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = &local_21;
  local_21 = 0;
  local_30 = param_2;
  if ((longlong)*(int *)(param_1 + 0x88) == 0) {
    uVar2 = 0;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x80);
    lVar3 = (longlong)*(int *)(param_1 + 0x88) * 0xc0 + -0xc0;
    do {
      lVar1 = FUN_1437c1274(&local_38,lVar4);
      if ((char)lVar1 == '\0') break;
      lVar4 = lVar4 + 0xc0;
      lVar1 = lVar3 + -0xc0;
      bVar5 = lVar3 != 0;
      lVar3 = lVar1;
    } while (bVar5);
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),local_21);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2 & 0xffffffffffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dd0a5c FUN_147dd0a5c body=89 status=ok
// SIG undefined FUN_147dd0a5c(void)

undefined8 * FUN_147dd0a5c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14017819c(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x48);
      }
    }
  }
  return param_1;
}



// FUNCTION 147dd0b1e FUN_147dd0b1e body=368 status=ok
// SIG undefined FUN_147dd0b1e(void)

undefined8 FUN_147dd0b1e(char *param_1,undefined8 param_2)

{
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  wchar_t *local_38;
  wchar_t *local_30;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = &DAT_14c8731a0;
  local_38 = &DAT_14c8731a0;
  local_30 = &DAT_14c8731a2;
  local_28 = '\0';
  if (param_1[0xc] == '\x01') {
    FUN_140213274(&local_40,9);
    builtin_wcsncpy(local_38,L"IsSector ",9);
    local_38 = local_38 + 9;
  }
  if (*param_1 == '\x01') {
    if (local_30 <= local_38 + 0x15) {
      FUN_140213274(&local_40,0x15);
    }
    builtin_wcsncpy(local_38,L"UsesGridLoadingRange ",0x15);
    local_38 = local_38 + 0x15;
    if (1e-08 < ABS(*(float *)(param_1 + 4) + -1.0)) {
      FUN_140212e80(&local_40,L"Scale: 3.2f",(double)*(float *)(param_1 + 4));
    }
  }
  else {
    FUN_140212e80(&local_40,L"Radius: %d",(int)*(float *)(param_1 + 8));
  }
  *local_38 = L'\0';
  FUN_140056680(param_2,local_40);
  if (local_28 == '\x01') {
    FUN_1400020a8(local_40);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dd0c90 FUN_147dd0c90 body=1315 status=ok
// SIG undefined FUN_147dd0c90(void)

undefined8 FUN_147dd0c90(longlong param_1,undefined8 param_2)

{
  double dVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined2 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  undefined1 auStack_138 [32];
  wchar_t *local_118;
  wchar_t *local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong *local_f0;
  double local_e8;
  int local_e0;
  undefined8 local_d0;
  longlong *local_c8;
  int local_c0;
  uint uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined2 *local_a0;
  wchar_t *local_98;
  wchar_t *local_90;
  char local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_a0 = &DAT_14c8731a0;
  local_98 = &DAT_14c8731a0;
  local_90 = &DAT_14c8731a2;
  local_88 = '\0';
  dVar1 = SQRT(*(double *)(param_1 + 0x50) * *(double *)(param_1 + 0x50) +
               *(double *)(param_1 + 0x40) * *(double *)(param_1 + 0x40) +
               *(double *)(param_1 + 0x48) * *(double *)(param_1 + 0x48));
  FUN_1467fafc0(param_1 + 0x20,&local_c8);
  local_f0 = local_c8;
  if (local_c0 == 0) {
    local_f0 = (longlong *)&DAT_149dfb77a;
  }
  local_f8 = (longlong)*(double *)(param_1 + 0x18);
  local_100 = (longlong)*(double *)(param_1 + 0x10);
  local_108 = (longlong)*(double *)(param_1 + 8);
  local_110 = L"NonBlocking";
  if (*(char *)(param_1 + 0x39) != '\0') {
    local_110 = L"Blocking";
  }
  pwVar9 = L"Invalid";
  if (*(char *)(param_1 + 0x38) == '\x01') {
    pwVar9 = L"Activated";
  }
  local_118 = L"Loaded";
  if (*(char *)(param_1 + 0x38) != '\0') {
    local_118 = pwVar9;
  }
  pwVar9 = L"Local";
  if (*(char *)(param_1 + 0x119) != '\0') {
    pwVar9 = L"Remote";
  }
  local_e8 = dVar1 * 0.01;
  local_e0 = (int)(dVar1 * 0.022369399666786194);
  FUN_140212e80(&local_a0,
                L"Priority: %d | %s | %s | %s | Pos: X=%lld,Y=%lld,Z=%lld | Rot: %s | Vel: %3.2f m/s (%d mph)"
                ,CONCAT71(0x14ab298,*(undefined1 *)(param_1 + 0x3a)),pwVar9);
  if (local_c8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x11a) == '\x01') {
    if (local_90 <= local_98 + 10) {
      FUN_140213274(&local_a0,10);
    }
    builtin_wcsncpy(local_98,L" | Force2D",10);
    local_98 = local_98 + 10;
  }
  if (*(int *)(param_1 + 0x110) != 0) {
    if (local_90 <= local_98 + 3) {
      FUN_140213274(&local_a0,3);
    }
    local_98[2] = L' ';
    local_98[0] = L' ';
    local_98[1] = L'|';
    local_98 = local_98 + 3;
    if ((longlong)*(int *)(param_1 + 0x110) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x108);
      lVar8 = (longlong)*(int *)(param_1 + 0x110) * 0x48;
      iVar5 = 0;
      local_d0 = param_2;
      do {
        FUN_147dd0b1e(lVar4,&local_c8);
        plVar7 = (longlong *)&DAT_149dfb77a;
        if (local_c0 != 0) {
          plVar7 = local_c8;
        }
        FUN_140212e80(&local_a0,L"Shape[%d]: %s ",iVar5,plVar7);
        if (local_c8 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        lVar4 = lVar4 + 0x48;
        iVar5 = iVar5 + 1;
        lVar8 = lVar8 + -0x48;
        param_2 = local_d0;
      } while (lVar8 != 0);
    }
    local_98 = local_98 + -1;
  }
  if (0.0 < *(float *)(param_1 + 0x158)) {
    FUN_140212e80(&local_a0,L" | Extra Radius: %d ",(int)*(float *)(param_1 + 0x158));
  }
  if (0.0 < *(float *)(param_1 + 0x15c)) {
    FUN_140212e80(&local_a0,L" | Extra Angle: %d ",(int)*(float *)(param_1 + 0x15c));
  }
  if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x9c)) {
    plVar7 = (longlong *)(param_1 + 0x68);
    pwVar9 = L"Excluded";
    if (*(char *)(param_1 + 0x60) == '\0') {
      pwVar9 = L"Included";
    }
    FUN_140212e80(&local_a0,L" | %s TargetGrids: ",pwVar9);
    lVar4 = param_1 + 0x78;
    local_80 = (undefined2 *)0x100000000;
    local_70 = 0xffffffff;
    uStack_68 = 0;
    uStack_78 = lVar4;
    if (*(int *)(param_1 + 0x90) == 0) {
      iVar5 = 0;
    }
    else {
      FUN_1449c0562(&local_80);
      iVar5 = *(int *)(param_1 + 0x90);
    }
    uStack_a8 = CONCAT44(uStack_64,uStack_68);
    local_b0 = local_70;
    uVar2 = local_b0;
    local_c0 = (int)local_80;
    uStack_bc = local_80._4_4_;
    uStack_b8 = (int)uStack_78;
    uStack_b4 = uStack_78._4_4_;
    local_b0._4_4_ = (int)((ulonglong)local_70 >> 0x20);
    iVar3 = local_b0._4_4_;
    local_c8 = plVar7;
    if ((local_b0._4_4_ != iVar5) || (local_b0 = uVar2, uStack_78 != lVar4)) {
      do {
        local_b0 = uVar2;
        FUN_1400021e4((longlong)iVar3 * 0x10 + *local_c8,&local_80);
        puVar6 = local_80;
        if ((int)uStack_78 == 0) {
          puVar6 = &DAT_149dfb77a;
        }
        FUN_140212e80(&local_a0,L"%s, ",puVar6);
        if (local_80 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0 & ~uStack_bc);
        FUN_1449c0562(&local_c0);
        iVar3 = local_b0._4_4_;
        uVar2 = local_b0;
      } while (local_c8 != plVar7 ||
               (CONCAT44(uStack_b4,uStack_b8) != lVar4 || local_b0._4_4_ != iVar5));
    }
    local_98 = local_98 + -2;
  }
  *local_98 = L'\0';
  FUN_140056680(param_2,local_a0);
  if (local_88 == '\x01') {
    FUN_1400020a8(local_a0);
  }
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147dd11b8 FUN_147dd11b8 body=39 status=ok
// SIG undefined FUN_147dd11b8(void)

void FUN_147dd11b8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147dd15f2(param_1,0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 147dd11ec FUN_147dd11ec body=379 status=ok
// SIG undefined FUN_147dd11ec(void)

void FUN_147dd11ec(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_78 [44];
  int local_4c;
  longlong local_48;
  ulonglong uStack_40;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_29 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  local_48 = 0;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  plVar2 = &local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1406d2c3e(param_1,local_29,plVar2,local_4c != 0);
  *param_3 = uVar1;
  FUN_1406d33ae(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dd136c FUN_147dd136c body=344 status=ok
// SIG undefined FUN_147dd136c(void)

undefined8 FUN_147dd136c(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStack_78 [40];
  undefined1 local_50 [16];
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    FUN_1400bbfc4(local_50);
    uVar9 = (uint)local_50._8_8_ & 0xffff;
    uVar8 = (uint)local_50._0_8_ & 0xffff;
    uVar8 = ((uint)local_50._0_8_ << 0x10 | uVar8) + SUB84(local_50._0_8_,4) +
            (SUB84(local_50._0_8_,2) << 0x13 | SUB84(local_50._0_8_,2) & 0xffff) + (uVar8 >> 4);
    uVar10 = 0;
    uVar1 = FUN_144a78877(0,(uVar8 >> 2) +
                            ((uint)local_50._8_8_ << 0x10 | uVar9) + SUB84(local_50._8_8_,4) +
                            (SUB84(local_50._8_8_,2) << 0x13 | SUB84(local_50._8_8_,2) & 0xffff) +
                            (uVar9 >> 4) + uVar8 * 0x40 + 0x9e3779b9 ^ uVar8);
    puVar6 = local_40;
    if (local_38 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    uVar5 = (ulonglong)(local_38 - 1);
    if (local_38 == 0) {
      uVar5 = uVar10;
    }
    uVar2 = FUN_144a49b4a(uVar5,puVar6);
    uVar1 = FUN_144a78877(uVar1,uVar2);
    iVar3 = FUN_140488e98((longlong *)(param_1 + 0x250),uVar1,local_50);
    if (iVar3 != -1) {
      uVar10 = (longlong)iVar3 * 0x78 + *(longlong *)(param_1 + 0x250);
    }
    lVar7 = uVar10 + 0x20;
    if (uVar10 == 0) {
      lVar7 = 0;
    }
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if ((lVar7 != 0) && (uVar4 = 1, *(int *)(lVar7 + 8) != *(int *)(lVar7 + 0x34)))
    goto LAB_147dd14a3;
  }
  uVar4 = 0;
LAB_147dd14a3:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 147dd14c6 FUN_147dd14c6 body=268 status=ok
// SIG undefined FUN_147dd14c6(void)

undefined8 FUN_147dd14c6(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = 0;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    uVar8 = (longlong)(int)((uint)((ulonglong)param_2 >> 0x20) ^ (uint)param_2) &
            (longlong)(int)param_1[9] - 1U;
    lVar5 = (longlong)*(int *)((longlong)plVar7 + uVar8 * 4);
    if (lVar5 != -1) {
      lVar4 = *param_1;
      lVar5 = lVar5 * 0x10;
      local_48 = *(undefined8 *)(lVar4 + lVar5);
      local_50 = param_2;
      cVar2 = FUN_147dd8b40();
      if (cVar2 == '\0') {
        lVar5 = lVar4 + lVar5;
        do {
          lVar4 = lVar5;
          lVar5 = (longlong)*(int *)(lVar4 + 8);
          if (lVar5 == -1) goto LAB_147dd1523;
          lVar1 = *param_1;
          lVar5 = lVar5 * 0x10;
          local_48 = *(undefined8 *)(lVar1 + lVar5);
          local_50 = param_2;
          cVar2 = FUN_147dd8b40(&local_48,&local_50);
          lVar5 = lVar1 + lVar5;
        } while (cVar2 == '\0');
        puVar6 = (undefined4 *)(lVar4 + 8);
      }
      else {
        puVar6 = (undefined4 *)((longlong)plVar7 + uVar8 * 4);
      }
      FUN_147dd8d2e(param_1,*puVar6);
      uVar3 = 1;
    }
  }
LAB_147dd1523:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dd15f2 FUN_147dd15f2 body=1674 status=ok
// SIG undefined FUN_147dd15f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_147dd15f2(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double *pdVar10;
  int iVar11;
  uint uVar12;
  longlong *plVar13;
  longlong *plVar14;
  ulonglong unaff_RBP;
  undefined8 *puVar15;
  longlong lVar16;
  double dVar17;
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined1 auStack_208 [40];
  longlong *local_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  double dStack_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  undefined1 local_148 [16];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  longlong local_118;
  ulonglong uStack_110;
  longlong local_108;
  ulonglong uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_108 = 0;
  uStack_100 = 0;
  plVar13 = (longlong *)0x0;
  if (param_2 != (longlong *)0x0) {
    plVar13 = &local_108;
    cVar9 = (**(code **)(*param_2 + 8))(param_2);
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
    if (cVar9 == '\0') goto LAB_147dd1bcf;
  }
  if ((longlong)*(int *)(param_1 + 0x50) == 0) {
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
  }
  else {
    plVar14 = *(longlong **)(param_1 + 0x48);
    plVar1 = plVar14 + *(int *)(param_1 + 0x50);
    local_1e0 = param_2;
    do {
      lVar4 = *plVar14;
      local_118 = 0;
      uStack_110 = 0;
      if (param_2 == (longlong *)0x0) {
        plVar13 = (longlong *)0x0;
      }
      else {
        pdVar10 = (double *)(lVar4 + 0x50);
        if (*(char *)(lVar4 + 0xb0) == '\0') {
          pdVar10 = (double *)&DAT_14c846480;
        }
        auVar2 = *(undefined1 (*) [16])(pdVar10 + 8);
        auVar3 = *(undefined1 (*) [16])(pdVar10 + 10);
        auVar18._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_));
        auVar18._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_));
        iVar11 = movmskpd(0x4c846480,auVar18);
        auVar21._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar3._8_8_));
        auVar21._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar3._0_8_));
        uVar12 = movmskpd((int)plVar13,auVar21);
        if ((uVar12 & 0x3fffffff) == 0 && iVar11 == 0) {
          uStack_1d0 = uRam000000014c8464d8;
          local_1d8 = DAT_14c8464d0;
          uVar28 = (undefined4)DAT_14c8464c0;
          uVar29 = DAT_14c8464c0._4_4_;
          uVar30 = (undefined4)DAT_14c8464c8;
          uVar31 = DAT_14c8464c8._4_4_;
          uVar32 = (undefined4)DAT_14c846480;
          uVar33 = DAT_14c846480._4_4_;
          uVar34 = (undefined4)DAT_14c846488;
          uVar35 = DAT_14c846488._4_4_;
          dVar5 = DAT_14c846490;
          dVar6 = DAT_14c846498;
          dVar7 = DAT_14c8464a0;
          dVar8 = DAT_14c8464a8;
          dVar19 = DAT_14c8464b0;
        }
        else {
          auVar21 = divpd(_DAT_149934d80,auVar2);
          auVar18 = divpd(ZEXT816(0x3ff0000000000000),auVar3);
          dVar7 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar21._0_8_);
          dVar8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_)) & auVar21._8_8_);
          local_1d8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar3._0_8_)) &
                              auVar18._0_8_);
          dVar23 = *pdVar10;
          dVar17 = -dVar23;
          dVar20 = -pdVar10[1];
          dVar5 = pdVar10[2] * -1.0;
          dVar6 = pdVar10[3] * 1.0;
          dVar24 = pdVar10[4] * dVar7;
          dVar25 = pdVar10[5] * dVar8;
          uStack_1d0 = 0;
          dVar26 = pdVar10[6] * local_1d8;
          dVar19 = dVar25 * dVar17 - dVar20 * dVar24;
          dVar22 = dVar26 * dVar20 - dVar5 * dVar25;
          dVar27 = dVar24 * dVar5 - dVar17 * dVar26;
          dVar22 = dVar22 + dVar22;
          dVar27 = dVar27 + dVar27;
          dVar19 = dVar19 + dVar19;
          uVar28 = SUB84(dVar7,0);
          uVar29 = (int)((ulonglong)dVar7 >> 0x20);
          uVar30 = SUB84(dVar8,0);
          uVar31 = (int)((ulonglong)dVar8 >> 0x20);
          uVar32 = SUB84(dVar23,0);
          uVar33 = (int)((ulonglong)dVar17 >> 0x20);
          uVar34 = SUB84(pdVar10[1],0);
          uVar35 = (int)((ulonglong)dVar20 >> 0x20);
          dVar7 = 0.0 - ((dVar19 * dVar20 - dVar27 * dVar5) + dVar6 * dVar22 + dVar24);
          dVar8 = 0.0 - (dVar19 * dVar23 + dVar5 * dVar22 + dVar6 * dVar27 + dVar25);
          dVar19 = 0.0 - (dVar6 * dVar19 + dVar26 + (dVar27 * dVar17 - dVar22 * dVar20));
        }
        plVar13 = &local_118;
        FUN_14010568c(plVar13,&local_108);
        if ((longlong)(int)uStack_110 != 0) {
          local_188 = (double)CONCAT44(uVar33,uVar32);
          local_1a8 = (double)CONCAT44(uVar35,uVar34);
          local_198 = (double)CONCAT44(uVar33,uVar32);
          dStack_190 = (double)CONCAT44(uVar33,uVar32);
          lVar16 = (longlong)(int)uStack_110 * 0x160;
          puVar15 = (undefined8 *)(local_118 + 0x20);
          local_1c8 = dVar5;
          dStack_1c0 = dVar5;
          local_1b8 = uVar28;
          uStack_1b4 = uVar29;
          uStack_1b0 = uVar30;
          uStack_1ac = uVar31;
          dStack_1a0 = dVar5;
          dStack_180 = dVar6;
          do {
            dVar27 = (double)puVar15[-3] * (double)CONCAT44(uStack_1b4,local_1b8);
            dVar24 = (double)puVar15[-2] * (double)CONCAT44(uStack_1ac,uStack_1b0);
            dVar17 = (double)puVar15[-1] * local_1d8;
            dVar20 = dVar24 * (double)CONCAT44(uVar33,uVar32) - local_1a8 * dVar27;
            dVar23 = dVar17 * (double)CONCAT44(uVar35,uVar34) - dStack_1a0 * dVar24;
            dVar22 = dVar27 * dVar5 - local_188 * dVar17;
            dVar23 = dVar23 + dVar23;
            dVar22 = dVar22 + dVar22;
            dVar20 = dVar20 + dVar20;
            puVar15[-3] = (dVar20 * (double)CONCAT44(uVar35,uVar34) - dVar22 * dStack_1a0) +
                          dVar6 * dVar23 + dVar27 + dVar7;
            puVar15[-2] = (dVar5 * dVar23 - local_188 * dVar20) + dVar6 * dVar22 + dVar24 + dVar8;
            puVar15[-1] = dVar20 * dVar6 + dVar17 +
                          (dVar22 * (double)CONCAT44(uVar33,uVar32) - dVar23 * local_1a8) + dVar19;
            FUN_144a7484c(puVar15,&local_178);
            local_158 = dStack_170 * local_1c8 * -1.0 +
                        local_198 * dStack_160 * 1.0 + dVar6 * local_178 +
                        (double)CONCAT44(uVar35,uVar34) * local_168;
            dStack_150 = local_178 * dStack_1c0 * 1.0 +
                         dStack_190 * local_168 * -1.0 + dVar6 * dStack_170 +
                         (double)CONCAT44(uVar35,uVar34) * dStack_160;
            local_148._0_8_ =
                 dStack_160 * local_1c8 * 1.0 +
                 ((local_198 * dStack_170 * 1.0 + dVar6 * local_168) -
                 (double)CONCAT44(uVar35,uVar34) * local_178);
            local_148._8_8_ =
                 local_168 * dStack_1c0 * -1.0 +
                 ((dStack_190 * local_178 * -1.0 + dVar6 * dStack_160) -
                 (double)CONCAT44(uVar35,uVar34) * dStack_170);
            FUN_1448052ee(&local_158,&local_130);
            puVar15[2] = local_120;
            *puVar15 = local_130;
            puVar15[1] = uStack_128;
            puVar15 = puVar15 + 0x2c;
            lVar16 = lVar16 + -0x160;
          } while (lVar16 != 0);
          plVar13 = &local_118;
          param_2 = local_1e0;
        }
      }
      uVar12 = FUN_147dc0d64(lVar4,plVar13);
      unaff_RBP = (ulonglong)uVar12;
      plVar13 = (longlong *)(uStack_110 & 0xffffffff);
      FUN_14482129f(local_118);
      if (local_118 != 0) {
        FUN_1400020a8();
      }
      plVar14 = plVar14 + 1;
    } while (((byte)uVar12 & plVar14 != plVar1) != 0);
  }
LAB_147dd1bcf:
  FUN_14482129f(local_108,uStack_100 & 0xffffffff);
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 147dd1c7e FUN_147dd1c7e body=479 status=ok
// SIG undefined FUN_147dd1c7e(void)

/* WARNING: Removing unreachable block (ram,0x000147dd1d9c) */

void FUN_147dd1c7e(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 uStack_80;
  undefined2 *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (0 < *(int *)(param_1 + 0x50)) {
    uVar4 = FUN_144a126be();
    local_78 = (undefined2 *)0x0;
    uStack_70 = 0;
    FUN_1401031ac(uVar4,0,&local_78);
    puVar8 = local_78;
    if ((int)uStack_70 == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    FUN_140047918(param_2,L"Registered World Partitions for %s:",puVar8);
    if (local_78 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_88 = 0;
    uStack_80 = 0;
    iVar1 = *(int *)(param_1 + 0x50);
    if ((longlong)iVar1 == 0) {
      uVar5 = 0;
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x48);
      lVar7 = 0;
      do {
        local_78 = (undefined2 *)0x0;
        uStack_70 = 0;
        FUN_1401031ac(*(undefined8 *)(lVar2 + lVar7),0,&local_78);
        lVar9 = (longlong)(int)uStack_80;
        uVar3 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar3);
        if (uStack_80._4_4_ < uVar3) {
          FUN_1447a1bd6(&local_88);
        }
        lVar9 = lVar9 * 0x10;
        *(undefined8 *)(local_88 + lVar9) = 0;
        *(undefined2 **)(local_88 + lVar9) = local_78;
        *(int *)(local_88 + 8 + lVar9) = (int)uStack_70;
        *(undefined4 *)(local_88 + 0xc + lVar9) = uStack_70._4_4_;
        uStack_70 = 0;
        local_78 = (undefined2 *)0x0;
        lVar7 = lVar7 + 8;
      } while ((longlong)iVar1 * 8 != lVar7);
      uVar5 = uStack_80 & 0xffffffff;
    }
    FUN_140e836da(local_88,uVar5);
    lVar2 = local_88;
    lVar7 = (longlong)(int)uStack_80;
    uVar6 = 0;
    if (lVar7 != 0) {
      lVar9 = 0;
      do {
        puVar8 = &DAT_149dfb77a;
        if (*(int *)(lVar2 + 8 + lVar9) != 0) {
          puVar8 = *(undefined2 **)(lVar2 + lVar9);
        }
        FUN_140047918(param_2,L"  - %s",puVar8);
        lVar9 = lVar9 + 0x10;
      } while (lVar7 * 0x10 != lVar9);
      uVar6 = (int)uStack_80;
    }
    FUN_1447a1747(local_88,uVar6);
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dd1e5e FUN_147dd1e5e body=334 status=ok
// SIG undefined FUN_147dd1e5e(void)

void FUN_147dd1e5e(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (0 < *(int *)(param_1 + 0x178)) {
    uVar1 = FUN_144a126be();
    local_58 = (undefined2 *)0x0;
    uStack_50 = 0;
    FUN_1401031ac(uVar1,0,&local_58);
    puVar3 = local_58;
    if ((int)uStack_50 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    FUN_140047918(param_2,L"Streaming Sources for %s:",puVar3);
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if ((longlong)*(int *)(param_1 + 0x178) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x170);
      lVar5 = (longlong)*(int *)(param_1 + 0x178) * 0x160;
      do {
        FUN_147dd0c90(lVar2,&local_58);
        puVar3 = &DAT_149dfb77a;
        if ((int)uStack_50 != 0) {
          puVar3 = local_58;
        }
        FUN_1400021e4(lVar2,&local_68);
        puVar4 = &DAT_149dfb77a;
        if (local_60 != 0) {
          puVar4 = local_68;
        }
        FUN_140047918(param_2,L"  - %s: %s",puVar4,puVar3);
        if (local_68 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_58 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        lVar2 = lVar2 + 0x160;
        lVar5 = lVar5 + -0x160;
      } while (lVar5 != 0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147dd1fb0 FUN_147dd1fb0 body=193 status=ok
// SIG undefined FUN_147dd1fb0(void)

void FUN_147dd1fb0(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar1 = (int)param_2[1];
  uVar3 = uVar2 + iVar1;
  if (uVar2 < uVar3) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar3);
    }
    FUN_147dd8f5e(param_1,uVar3);
    iVar1 = 1;
    if (3 < uVar3) {
      uVar3 = (uVar3 | 1) + 0xe;
      iVar1 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar1 = 1 << ((byte)iVar1 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar1)) {
      *(int *)(param_1 + 0x48) = iVar1;
      FUN_145bf41ec(param_1);
    }
    iVar1 = (int)param_2[1];
  }
  if (iVar1 != 0) {
    lVar4 = *param_2;
    lVar5 = (longlong)iVar1 << 3;
    do {
      FUN_147dd90fc(param_1,local_2c,lVar4);
      lVar4 = lVar4 + 8;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dd2074 FUN_147dd2074 body=68 status=ok
// SIG undefined FUN_147dd2074(void)

void FUN_147dd2074(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_147dd926a();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_14474875a(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 147dd20b8 FUN_147dd20b8 body=353 status=ok
// SIG undefined FUN_147dd20b8(void)

void FUN_147dd20b8(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  uVar4 = ((int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) + uVar2;
  if (uVar2 < uVar4) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_147dd8f5e(param_1,uVar4);
    iVar3 = 1;
    if (3 < uVar4) {
      uVar2 = (uVar4 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar3)) {
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_145bf41ec(param_1);
    }
  }
  plVar1 = param_2 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar3 = (int)param_2[5];
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = param_2;
  if ((iStack_3c != iVar3) || (uStack_48 != plVar1)) {
    do {
      FUN_147dd90fc(param_1,&local_50,(longlong)iStack_5c * 0x10 + *local_78);
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_2 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || iStack_5c != iVar3));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dd221c FUN_147dd221c body=113 status=ok
// SIG undefined FUN_147dd221c(void)

void FUN_147dd221c(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_147dd93d6(param_1,iVar1);
    }
    FUN_147dd93ad((longlong)iVar1 * 0xd8 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_147dd974e(param_1,param_2,iVar1 - param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147dd229a FUN_147dd229a body=94 status=ok
// SIG undefined FUN_147dd229a(void)

void FUN_147dd229a(undefined8 param_1)

{
  undefined1 auStack_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_78);
  FUN_147dd97b0(param_1);
  FUN_1416525c2(local_78);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dd2336 FUN_147dd2336 body=269 status=ok
// SIG undefined FUN_147dd2336(void)

void FUN_147dd2336(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    local_38 = *(longlong *)(param_2 + 0x10);
    if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    lVar2 = (**(code **)(*param_1 + 0x18))(param_1,&local_38);
    if (lVar2 != 0) {
      local_40 = lVar2;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar2);
      }
      local_30 = &local_40;
      FUN_1474be378(param_1 + 0x3d);
    }
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    iVar1 = (int)param_1[0x3e];
    *(uint *)(param_1 + 0x3e) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 500) < iVar1 + 1U) {
      FUN_140730f78(param_1 + 0x3d,iVar1);
    }
    *(longlong *)(param_1[0x3d] + (longlong)iVar1 * 8) = param_2;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dd2444 FUN_147dd2444 body=181 status=ok
// SIG undefined FUN_147dd2444(void)

longlong FUN_147dd2444(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (0 < *(int *)(param_1 + 0x1f0)) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1e8) + lVar4 * 8);
      if (lVar1 != 0) {
        lVar3 = *param_2;
        if ((lVar3 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar3);
LAB_147dd248d:
          lVar2 = FUN_144ae113c();
          if (((lVar2 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38))) ||
             (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
              lVar2 + 0x30)) goto LAB_147dd24af;
        }
        else {
          if (lVar3 != 0) goto LAB_147dd248d;
LAB_147dd24af:
          lVar3 = 0;
        }
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          return lVar1;
        }
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_1 + 0x1f0));
  }
  return 0;
}



// FUNCTION 147dd2502 FUN_147dd2502 body=281 status=ok
// SIG undefined FUN_147dd2502(void)

void FUN_147dd2502(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar3 = *(int *)(param_1 + 0x1f0);
  if (0 < iVar3) {
    lVar6 = 1;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1e8) + -8 + lVar6 * 8);
      if (lVar1 != 0) {
        lVar5 = *param_2;
        if ((lVar5 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar5);
LAB_147dd2555:
          lVar4 = FUN_144ae113c();
          if (((lVar4 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar4 + 0x38))) ||
             (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
              lVar4 + 0x30)) goto LAB_147dd2577;
        }
        else {
          if (lVar5 != 0) goto LAB_147dd2555;
LAB_147dd2577:
          lVar5 = 0;
        }
        lVar1 = *(longlong *)(lVar1 + 0x10);
        if (*(int *)(lVar1 + 0x38) < *(int *)(lVar5 + 0x38)) {
          iVar3 = *(int *)(param_1 + 0x1f0);
        }
        else {
          iVar3 = *(int *)(param_1 + 0x1f0);
          if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
              lVar5 + 0x30) {
            if (iVar3 != (int)lVar6) {
              memmove((void *)(*(longlong *)(param_1 + 0x1e8) + lVar6 * 8 + -8),
                      (void *)(*(longlong *)(param_1 + 0x1e8) + lVar6 * 8),
                      (longlong)(iVar3 - (int)lVar6) << 3);
              iVar3 = *(int *)(param_1 + 0x1f0);
            }
            *(int *)(param_1 + 0x1f0) = iVar3 + -1;
            FUN_1474be4b6((longlong *)(param_1 + 0x1e8));
            return;
          }
        }
      }
      bVar2 = lVar6 < iVar3;
      lVar6 = lVar6 + 1;
    } while (bVar2);
  }
  return;
}



// FUNCTION 147dd261c FUN_147dd261c body=24 status=ok
// SIG undefined FUN_147dd261c(void)

undefined8 FUN_147dd261c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x3e0);
  if (lVar1 != 0) {
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(longlong *)(lVar1 + 0x28) != 0);
  }
  return 0;
}



// FUNCTION 147dd2634 FUN_147dd2634 body=90 status=ok
// SIG undefined FUN_147dd2634(void)

void FUN_147dd2634(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 1000) = param_2;
  lVar1 = *(longlong *)(param_1 + 0x3e0);
  if (lVar1 != 0) {
    *(uint *)(lVar1 + 0x54) =
         *(uint *)(lVar1 + 0x54) & 0xfffffffe | (uint)(lVar1 != param_2 && param_2 != 0);
  }
  return;
}



// FUNCTION 147dd268e FUN_147dd268e body=54 status=ok
// SIG undefined FUN_147dd268e(void)

void FUN_147dd268e(longlong param_1)

{
  FUN_1478b711e();
  *(undefined8 *)(param_1 + 0x588) = 0;
  *(undefined1 **)(param_1 + 0x4c8) = &DAT_3f8000003f800000;
  *(byte *)(param_1 + 0x39e) = *(byte *)(param_1 + 0x39e) & 0xde;
  return;
}



// FUNCTION 147dd26d8 FUN_147dd26d8 body=41 status=ok
// SIG undefined FUN_147dd26d8(void)

void FUN_147dd26d8(void)

{
  FUN_140033559("Runtime\\Engine\\Public\\WorldPartition/WorldPartitionRuntimeCell.h",0x101,
                L"Pure virtual not implemented (%s)",L"UWorldPartitionRuntimeCell::Load");
  return;
}



// FUNCTION 147dd2702 FUN_147dd2702 body=41 status=ok
// SIG undefined FUN_147dd2702(void)

void FUN_147dd2702(void)

{
  FUN_140033559("Runtime\\Engine\\Public\\WorldPartition/WorldPartitionRuntimeCell.h",0x102,
                L"Pure virtual not implemented (%s)",L"UWorldPartitionRuntimeCell::Unload");
  return;
}



// FUNCTION 147dd272c FUN_147dd272c body=42 status=ok
// SIG undefined FUN_147dd272c(void)

undefined1 FUN_147dd272c(void)

{
  FUN_140033559("Runtime\\Engine\\Public\\WorldPartition/WorldPartitionRuntimeCell.h",0x103,
                L"Pure virtual not implemented (%s)",L"UWorldPartitionRuntimeCell::CanUnload");
  return 1;
}



// FUNCTION 147dd2756 FUN_147dd2756 body=41 status=ok
// SIG undefined FUN_147dd2756(void)

void FUN_147dd2756(void)

{
  FUN_140033559("Runtime\\Engine\\Public\\WorldPartition/WorldPartitionRuntimeCell.h",0x104,
                L"Pure virtual not implemented (%s)",L"UWorldPartitionRuntimeCell::Activate");
  return;
}



// FUNCTION 147dd2780 FUN_147dd2780 body=41 status=ok
// SIG undefined FUN_147dd2780(void)

void FUN_147dd2780(void)

{
  FUN_140033559("Runtime\\Engine\\Public\\WorldPartition/WorldPartitionRuntimeCell.h",0x105,
                L"Pure virtual not implemented (%s)",L"UWorldPartitionRuntimeCell::Deactivate");
  return;
}



// FUNCTION 147dd27aa FUN_147dd27aa body=42 status=ok
// SIG undefined FUN_147dd27aa(void)

undefined8 FUN_147dd27aa(void)

{
  FUN_140033559("Runtime\\Engine\\Public\\WorldPartition/WorldPartitionRuntimeCell.h",0x106,
                L"Pure virtual not implemented (%s)",L"UWorldPartitionRuntimeCell::GetLevel");
  return 0;
}



// FUNCTION 147dd27d4 FUN_147dd27d4 body=42 status=ok
// SIG undefined FUN_147dd27d4(void)

undefined8 FUN_147dd27d4(void)

{
  FUN_140033559("Runtime\\Engine\\Public\\WorldPartition/WorldPartitionRuntimeCell.h",0x107,
                L"Pure virtual not implemented (%s)",L"UWorldPartitionRuntimeCell::GetCurrentState")
  ;
  return 0;
}



// FUNCTION 147dd27fe FUN_147dd27fe body=41 status=ok
// SIG undefined FUN_147dd27fe(void)

void FUN_147dd27fe(void)

{
  FUN_140033559("Runtime\\Engine\\Public\\WorldPartition/WorldPartitionRuntimeCell.h",0x10b,
                L"Pure virtual not implemented (%s)",
                L"UWorldPartitionRuntimeCell::SetStreamingPriority");
  return;
}



// FUNCTION 147dd282e FUN_147dd282e body=54 status=ok
// SIG undefined FUN_147dd282e(void)

undefined8 * FUN_147dd282e(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("Runtime\\Engine\\Public\\WorldPartition/WorldPartitionRuntimeCell.h",0x110,
                L"Pure virtual not implemented (%s)",L"UWorldPartitionRuntimeCell::GetActors");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 147dd2870 FUN_147dd2870 body=45 status=ok
// SIG undefined FUN_147dd2870(void)

longlong FUN_147dd2870(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1402d9bec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147dd28b6 FUN_147dd28b6 body=126 status=ok
// SIG undefined FUN_147dd28b6(void)

undefined8 FUN_147dd28b6(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x38))();
  local_28 = param_2;
  if ((longlong)(int)plVar1[1] == 0) {
    uVar2 = 0;
  }
  else {
    lVar4 = *plVar1;
    lVar3 = (longlong)(int)plVar1[1] * 8;
    do {
      lVar3 = lVar3 + -8;
      uVar2 = FUN_147dd9902(&local_28,lVar4);
      if ((char)uVar2 != '\0') break;
      lVar4 = lVar4 + 8;
    } while (lVar3 != 0);
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 147dd2936 FUN_147dd2936 body=45 status=ok
// SIG undefined FUN_147dd2936(void)

longlong FUN_147dd2936(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_1402d9bec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147dd296a FUN_147dd296a body=45 status=ok
// SIG undefined FUN_147dd296a(void)

longlong FUN_147dd296a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145a58c2e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147dd2998 FUN_147dd2998 body=45 status=ok
// SIG undefined FUN_147dd2998(void)

longlong FUN_147dd2998(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145a58c2e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147dd29f0 FUN_147dd29f0 body=45 status=ok
// SIG undefined FUN_147dd29f0(void)

longlong FUN_147dd29f0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1402d9bec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147dd2a1e FUN_147dd2a1e body=45 status=ok
// SIG undefined FUN_147dd2a1e(void)

longlong FUN_147dd2a1e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_1402d9bec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147dd2a4c FUN_147dd2a4c body=45 status=ok
// SIG undefined FUN_147dd2a4c(void)

longlong FUN_147dd2a4c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145cd5ba2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147dd2a7a FUN_147dd2a7a body=45 status=ok
// SIG undefined FUN_147dd2a7a(void)

longlong FUN_147dd2a7a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145cd5ba2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147dd2ab6 FUN_147dd2ab6 body=45 status=ok
// SIG undefined FUN_147dd2ab6(void)

longlong FUN_147dd2ab6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145722cbe(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147dd2ae8 FUN_147dd2ae8 body=45 status=ok
// SIG undefined FUN_147dd2ae8(void)

longlong FUN_147dd2ae8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x40;
  FUN_145722cbe(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147dd2b1f FUN_147dd2b1f body=41 status=ok
// SIG undefined FUN_147dd2b1f(void)

void FUN_147dd2b1f(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1448212c8(param_1);
    param_1 = param_1 + 0x160;
  }
  return;
}



// FUNCTION 147dd2b90 FUN_147dd2b90 body=59 status=ok
// SIG undefined FUN_147dd2b90(void)

undefined8 FUN_147dd2b90(longlong *param_1)

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



// FUNCTION 147dd2c7a FUN_147dd2c7a body=59 status=ok
// SIG undefined FUN_147dd2c7a(void)

undefined8 FUN_147dd2c7a(longlong *param_1)

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



// FUNCTION 147dd2d60 FUN_147dd2d60 body=70 status=ok
// SIG undefined FUN_147dd2d60(void)

undefined1 FUN_147dd2d60(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x14);
    uVar2 = *(undefined4 *)(param_3 + 0x18);
    uVar3 = *(undefined4 *)(param_3 + 0x1c);
    uVar4 = *(undefined4 *)(param_3 + 0x20);
    uVar5 = *(undefined4 *)(param_3 + 0x24);
    uVar6 = *(undefined4 *)(param_3 + 0x28);
    uVar7 = *(undefined4 *)(param_3 + 0x2c);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    *(undefined4 *)(param_2 + 0x14) = uVar1;
    *(undefined4 *)(param_2 + 0x18) = uVar2;
    *(undefined4 *)(param_2 + 0x1c) = uVar3;
    *(undefined4 *)(param_2 + 0x20) = uVar4;
    *(undefined4 *)(param_2 + 0x24) = uVar5;
    *(undefined4 *)(param_2 + 0x28) = uVar6;
    *(undefined4 *)(param_2 + 0x2c) = uVar7;
    param_2 = param_2 + 0x30;
    param_3 = param_3 + 0x30;
  }
  return 1;
}



// FUNCTION 147dd2dce FUN_147dd2dce body=59 status=ok
// SIG undefined FUN_147dd2dce(void)

undefined8 FUN_147dd2dce(longlong *param_1)

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



// FUNCTION 147dd2e14 FUN_147dd2e14 body=37 status=ok
// SIG undefined FUN_147dd2e14(void)

void FUN_147dd2e14(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[6] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 6) = 0;
  }
  return;
}



// FUNCTION 147dd2eaa FUN_147dd2eaa body=47 status=ok
// SIG undefined FUN_147dd2eaa(void)

void FUN_147dd2eaa(undefined8 param_1,longlong *param_2)

{
  if (param_2[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147dd2ef0 FUN_147dd2ef0 body=75 status=ok
// SIG undefined FUN_147dd2ef0(void)

undefined1 FUN_147dd2ef0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x14);
    uVar2 = *(undefined4 *)(param_3 + 0x18);
    uVar3 = *(undefined4 *)(param_3 + 0x1c);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    *(undefined4 *)(param_2 + 0x14) = uVar1;
    *(undefined4 *)(param_2 + 0x18) = uVar2;
    *(undefined4 *)(param_2 + 0x1c) = uVar3;
    FUN_144a787a6(param_2 + 0x20,param_3 + 0x20);
    param_2 = param_2 + 0x30;
    param_3 = param_3 + 0x30;
  }
  return 1;
}



// FUNCTION 147dd2f64 FUN_147dd2f64 body=59 status=ok
// SIG undefined FUN_147dd2f64(void)

undefined8 FUN_147dd2f64(longlong *param_1)

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



// FUNCTION 147dd3002 FUN_147dd3002 body=51 status=ok
// SIG undefined FUN_147dd3002(void)

void FUN_147dd3002(longlong *param_1)

{
  if ((char)param_1[6] == '\x01') {
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 6) = 0;
  }
  return;
}



// FUNCTION 147dd30a0 FUN_147dd30a0 body=59 status=ok
// SIG undefined FUN_147dd30a0(void)

undefined8 FUN_147dd30a0(longlong *param_1)

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



// FUNCTION 147dd319a FUN_147dd319a body=59 status=ok
// SIG undefined FUN_147dd319a(void)

undefined8 FUN_147dd319a(longlong *param_1)

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



// FUNCTION 147dd31e0 FUN_147dd31e0 body=37 status=ok
// SIG undefined FUN_147dd31e0(void)

void FUN_147dd31e0(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 147dd32cc FUN_147dd32cc body=59 status=ok
// SIG undefined FUN_147dd32cc(void)

undefined8 FUN_147dd32cc(longlong *param_1)

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



// FUNCTION 147dd3312 FUN_147dd3312 body=32 status=ok
// SIG undefined FUN_147dd3312(void)

void FUN_147dd3312(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_147dd3380(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 147dd3380 FUN_147dd3380 body=82 status=ok
// SIG undefined FUN_147dd3380(void)

void FUN_147dd3380(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_140ebe8e2(param_1 + 2);
  FUN_140ebe8b6(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147dd347c FUN_147dd347c body=59 status=ok
// SIG undefined FUN_147dd347c(void)

undefined8 FUN_147dd347c(longlong *param_1)

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



// FUNCTION 147dd34c8 FUN_147dd34c8 body=38 status=ok
// SIG undefined FUN_147dd34c8(void)

void FUN_147dd34c8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xc0) == '\x01') {
    FUN_140ebe7ca(param_2);
    *(undefined1 *)(param_2 + 0xc0) = 0;
  }
  return;
}



// FUNCTION 147dd3572 FUN_147dd3572 body=54 status=ok
// SIG undefined FUN_147dd3572(void)

undefined1 FUN_147dd3572(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 147dd35d0 FUN_147dd35d0 body=59 status=ok
// SIG undefined FUN_147dd35d0(void)

undefined8 FUN_147dd35d0(longlong *param_1)

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



// FUNCTION 147dd3616 FUN_147dd3616 body=37 status=ok
// SIG undefined FUN_147dd3616(void)

void FUN_147dd3616(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 147dd368c FUN_147dd368c body=52 status=ok
// SIG undefined FUN_147dd368c(void)

void FUN_147dd368c(longlong *param_1)

{
  FUN_147dd36c0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147dd36c0 FUN_147dd36c0 body=89 status=ok
// SIG undefined FUN_147dd36c0(void)

void FUN_147dd36c0(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
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



// FUNCTION 147dd3720 FUN_147dd3720 body=209 status=ok
// SIG undefined FUN_147dd3720(void)

void FUN_147dd3720(undefined8 *param_1,double *param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar8 = param_2[3];
  dVar3 = dVar8 + param_2[2];
  dVar4 = dVar8 + param_2[1];
  dVar6 = dVar8 + *param_2;
  dVar5 = param_2[2] - dVar8;
  dVar7 = param_2[1] - dVar8;
  dVar8 = *param_2 - dVar8;
  pdVar1 = (double *)*param_1;
  if (*(char *)(pdVar1 + 6) == '\0') {
    *pdVar1 = dVar8;
    pdVar1[1] = dVar7;
    pdVar1[2] = dVar5;
    pdVar1[3] = dVar6;
    pdVar1[4] = dVar4;
    pdVar1[5] = dVar3;
    *(undefined1 *)(pdVar1 + 6) = 1;
  }
  else {
    dVar2 = *pdVar1;
    if (dVar8 <= *pdVar1) {
      dVar2 = dVar8;
    }
    *pdVar1 = dVar2;
    dVar8 = pdVar1[1];
    if (dVar7 <= pdVar1[1]) {
      dVar8 = dVar7;
    }
    pdVar1[1] = dVar8;
    dVar8 = pdVar1[2];
    if (dVar5 <= pdVar1[2]) {
      dVar8 = dVar5;
    }
    pdVar1[2] = dVar8;
    dVar8 = pdVar1[3];
    if (pdVar1[3] <= dVar6) {
      dVar8 = dVar6;
    }
    pdVar1[3] = dVar8;
    dVar8 = pdVar1[4];
    if (pdVar1[4] <= dVar4) {
      dVar8 = dVar4;
    }
    pdVar1[4] = dVar8;
    dVar8 = pdVar1[5];
    if (pdVar1[5] <= dVar3) {
      dVar8 = dVar3;
    }
    pdVar1[5] = dVar8;
  }
  return;
}



// FUNCTION 147dd383a FUN_147dd383a body=59 status=ok
// SIG undefined FUN_147dd383a(void)

undefined8 FUN_147dd383a(longlong *param_1)

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



// FUNCTION 147dd38dc FUN_147dd38dc body=63 status=ok
// SIG undefined FUN_147dd38dc(void)

void FUN_147dd38dc(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xa0);
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0xffffffff00000080;
  return;
}



// FUNCTION 147dd3984 FUN_147dd3984 body=97 status=ok
// SIG undefined FUN_147dd3984(void)

undefined1 FUN_147dd3984(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1449b4dac(param_2,param_3);
    FUN_1417fc412(param_2 + 0x50,param_3 + 0x50);
    param_3 = param_3 + 0xa0;
    param_2 = param_2 + 0xa0;
  }
  return 1;
}



// FUNCTION 147dd3a0e FUN_147dd3a0e body=59 status=ok
// SIG undefined FUN_147dd3a0e(void)

undefined8 FUN_147dd3a0e(longlong *param_1)

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



// FUNCTION 147dd3a5a FUN_147dd3a5a body=40 status=ok
// SIG undefined FUN_147dd3a5a(void)

void FUN_147dd3a5a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_145892984(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 147dd3b26 FUN_147dd3b26 body=54 status=ok
// SIG undefined FUN_147dd3b26(void)

undefined1 FUN_147dd3b26(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147dd3c3a(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 147dd3b84 FUN_147dd3b84 body=59 status=ok
// SIG undefined FUN_147dd3b84(void)

undefined8 FUN_147dd3b84(longlong *param_1)

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



// FUNCTION 147dd3bca FUN_147dd3bca body=34 status=ok
// SIG undefined FUN_147dd3bca(void)

void FUN_147dd3bca(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_1458928a6(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 147dd3c3a FUN_147dd3c3a body=74 status=ok
// SIG undefined FUN_147dd3c3a(void)

longlong FUN_147dd3c3a(longlong param_1,longlong param_2)

{
  FUN_147dd3c84();
  FUN_147dd3c84(param_1 + 0x10,param_2 + 0x10);
  FUN_147dd3c84(param_1 + 0x20,param_2 + 0x20);
  FUN_147dd3c84(param_1 + 0x30,param_2 + 0x30);
  *(undefined2 *)(param_1 + 0x40) = *(undefined2 *)(param_2 + 0x40);
  return param_1;
}



// FUNCTION 147dd3c84 FUN_147dd3c84 body=79 status=ok
// SIG undefined FUN_147dd3c84(void)

undefined8 * FUN_147dd3c84(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147dd3cd4(param_1,iVar1);
      FUN_147dd3d36(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147dd3cd4 FUN_147dd3cd4 body=98 status=ok
// SIG undefined FUN_147dd3cd4(void)

void FUN_147dd3cd4(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147dd3d36 FUN_147dd3d36 body=82 status=ok
// SIG undefined FUN_147dd3d36(void)

void FUN_147dd3d36(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
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
  }
  return;
}



// FUNCTION 147dd3d8a FUN_147dd3d8a body=37 status=ok
// SIG undefined FUN_147dd3d8a(void)

void FUN_147dd3d8a(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x100);
  FUN_145a3a524(param_2);
  return;
}



// FUNCTION 147dd3dd6 FUN_147dd3dd6 body=63 status=ok
// SIG undefined FUN_147dd3dd6(void)

undefined1 FUN_147dd3dd6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147dd3f00(param_2,param_3);
    param_3 = param_3 + 0x100;
    param_2 = param_2 + 0x100;
  }
  return 1;
}



// FUNCTION 147dd3e3e FUN_147dd3e3e body=59 status=ok
// SIG undefined FUN_147dd3e3e(void)

undefined8 FUN_147dd3e3e(longlong *param_1)

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



// FUNCTION 147dd3e8a FUN_147dd3e8a body=40 status=ok
// SIG undefined FUN_147dd3e8a(void)

void FUN_147dd3e8a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x100) == '\x01') {
    FUN_1458928f2(param_2);
    *(undefined1 *)(param_2 + 0x100) = 0;
  }
  return;
}



// FUNCTION 147dd3f00 FUN_147dd3f00 body=70 status=ok
// SIG undefined FUN_147dd3f00(void)

longlong FUN_147dd3f00(longlong param_1,longlong param_2)

{
  FUN_14010568c();
  FUN_1449b4dac(param_1 + 0x10,param_2 + 0x10);
  FUN_1449b4dac(param_1 + 0x60,param_2 + 0x60);
  FUN_1417fc412(param_1 + 0xb0,param_2 + 0xb0);
  return param_1;
}



// FUNCTION 147dd3fb8 FUN_147dd3fb8 body=39 status=ok
// SIG undefined FUN_147dd3fb8(void)

undefined8 FUN_147dd3fb8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147dd4008 FUN_147dd4008 body=70 status=ok
// SIG undefined FUN_147dd4008(void)

void FUN_147dd4008(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_1437bf400(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dd40e4 FUN_147dd40e4 body=63 status=ok
// SIG undefined FUN_147dd40e4(void)

undefined1 FUN_147dd40e4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147dd420c(param_2,param_3);
    param_3 = param_3 + 0x108;
    param_2 = param_2 + 0x108;
  }
  return 1;
}



// FUNCTION 147dd414c FUN_147dd414c body=59 status=ok
// SIG undefined FUN_147dd414c(void)

undefined8 FUN_147dd414c(longlong *param_1)

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



// FUNCTION 147dd4198 FUN_147dd4198 body=38 status=ok
// SIG undefined FUN_147dd4198(void)

void FUN_147dd4198(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x108) == '\x01') {
    FUN_1406d3414(param_2);
    *(undefined1 *)(param_2 + 0x108) = 0;
  }
  return;
}



// FUNCTION 147dd420c FUN_147dd420c body=121 status=ok
// SIG undefined FUN_147dd420c(void)

undefined4 * FUN_147dd420c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x11);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x15);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x19);
  *(undefined4 *)((longlong)param_1 + 0xd) = *(undefined4 *)((longlong)param_2 + 0xd);
  *(undefined4 *)((longlong)param_1 + 0x11) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x15) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x19) = uVar7;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  FUN_1406fa324(param_1 + 8,param_2 + 8);
  uVar1 = param_2[0xd];
  uVar2 = param_2[0xe];
  uVar3 = param_2[0xf];
  uVar4 = param_2[0x10];
  uVar5 = param_2[0x11];
  uVar6 = param_2[0x12];
  uVar7 = param_2[0x13];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar3;
  param_1[0x10] = uVar4;
  param_1[0x11] = uVar5;
  param_1[0x12] = uVar6;
  param_1[0x13] = uVar7;
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
  FUN_144881636(param_1 + 0x16,param_2 + 0x16);
  FUN_140177c44(param_1 + 0x2a,param_2 + 0x2a);
  FUN_147dd0a5c(param_1 + 0x3e,param_2 + 0x3e);
  return param_1;
}



// FUNCTION 147dd4286 FUN_147dd4286 body=70 status=ok
// SIG undefined FUN_147dd4286(void)

void FUN_147dd4286(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_147dd42cc(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147dd42cc FUN_147dd42cc body=52 status=ok
// SIG undefined FUN_147dd42cc(void)

void FUN_147dd42cc(longlong *param_1)

{
  FUN_147dd4300();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147dd4300 FUN_147dd4300 body=89 status=ok
// SIG undefined FUN_147dd4300(void)

void FUN_147dd4300(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14472eb64(param_1,0);
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



// FUNCTION 147dd435a FUN_147dd435a body=133 status=ok
// SIG undefined FUN_147dd435a(void)

longlong FUN_147dd435a(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_140488e98();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x78;
    if (lVar3 + lVar2 != 0) goto LAB_147dd4393;
  }
  local_30 = param_3;
  FUN_147dd43e0(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0x78;
LAB_147dd4393:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 0x20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dd43e0 FUN_147dd43e0 body=272 status=ok
// SIG undefined FUN_147dd43e0(void)

undefined4 * FUN_147dd43e0(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147dd44f2(param_1,local_48);
  FUN_147dd463e(param_4,local_40);
  *(undefined4 *)(local_40 + 0x70) = 0xffffffff;
  cVar1 = FUN_147dd45d4(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x74) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x70) =
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
      FUN_147dd487a(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dd44f2 FUN_147dd44f2 body=226 status=ok
// SIG undefined FUN_147dd44f2(void)

int * FUN_147dd44f2(longlong *param_1,int *param_2)

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
      FUN_1410fd1ac(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x78);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x78) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x78 + *param_1;
  return param_2;
}



// FUNCTION 147dd45d4 FUN_147dd45d4 body=105 status=ok
// SIG undefined FUN_147dd45d4(void)

undefined8 FUN_147dd45d4(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  int iVar1;
  void *_Dst;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar1 = FUN_140488e98(), iVar1 != -1)) {
    _Dst = (void *)((longlong)iVar1 * 0x78 + *param_1);
    FUN_147dd4286(_Dst);
    memmove(_Dst,param_3,0x70);
    FUN_147dd4806(param_1,*param_4);
    *param_4 = iVar1;
    return 1;
  }
  return 0;
}



// FUNCTION 147dd463e FUN_147dd463e body=184 status=ok
// SIG undefined FUN_147dd463e(void)

undefined4 * FUN_147dd463e(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  puVar1 = (undefined4 *)*param_1;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *param_2 = *puVar1;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(puVar1 + 4);
  *(undefined8 *)(puVar1 + 4) = 0;
  param_2[6] = puVar1[6];
  param_2[7] = puVar1[7];
  *(undefined8 *)(puVar1 + 6) = 0;
  FUN_147dd46f8(param_2 + 8,&local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_147dd42cc(&local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dd46f8 FUN_147dd46f8 body=123 status=ok
// SIG undefined FUN_147dd46f8(void)

undefined8 * FUN_147dd46f8(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_147dd4774();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 147dd4774 FUN_147dd4774 body=146 status=ok
// SIG undefined FUN_147dd4774(void)

longlong * FUN_147dd4774(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar3 = param_2[3];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(int *)(param_1 + 3) = (int)lVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 147dd4806 FUN_147dd4806 body=116 status=ok
// SIG undefined FUN_147dd4806(void)

void FUN_147dd4806(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x78) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x78) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x78 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 147dd487a FUN_147dd487a body=629 status=ok
// SIG undefined FUN_147dd487a(void)

void FUN_147dd487a(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined2 *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
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
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar14 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar12 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar12 = plVar1;
        }
        *(undefined4 *)((longlong)plVar12 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar14) * 4)
             = 0xffffffff;
        uVar14 = uVar14 + 1;
      } while (uVar2 != uVar14);
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
    bVar6 = local_78._4_4_ < (int)local_60[3];
    iVar17 = local_78._4_4_;
    local_90 = param_1;
    local_78 = uVar4;
    if (bVar6) {
      do {
        lVar3 = *local_90;
        lVar18 = (longlong)iVar17 * 0x78;
        uVar4 = *(undefined8 *)(lVar3 + lVar18);
        uVar5 = *(undefined8 *)(lVar3 + 8 + lVar18);
        uVar2 = (uint)((ulonglong)uVar5 >> 0x10);
        uVar16 = (uint)uVar5 & 0xffff;
        uVar14 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar15 = (uint)uVar4 & 0xffff;
        uVar14 = ((uint)uVar4 << 0x10 | uVar15) + (int)((ulonglong)uVar4 >> 0x20) +
                 (uVar14 << 0x13 | uVar14 & 0xffff) + (uVar15 >> 4);
        uVar8 = FUN_144a78877(0,(uVar14 >> 2) +
                                ((uint)uVar5 << 0x10 | uVar16) + (int)((ulonglong)uVar5 >> 0x20) +
                                (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar16 >> 4) + uVar14 * 0x40 +
                                0x9e3779b9 ^ uVar14);
        iVar10 = *(int *)(lVar3 + 0x18 + lVar18);
        puVar13 = &DAT_149dfb77a;
        if (iVar10 != 0) {
          puVar13 = *(undefined2 **)(lVar3 + 0x10 + lVar18);
        }
        iVar7 = iVar10 + -1;
        if (iVar10 == 0) {
          iVar7 = 0;
        }
        uVar9 = FUN_144a49b4a(iVar7,puVar13);
        iVar10 = FUN_144a78877(uVar8,uVar9);
        uVar11 = (longlong)iVar10 & (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar3 + 0x74 + lVar18) = iVar10;
        plVar12 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar12 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x70 + lVar18) =
             *(undefined4 *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
        plVar12 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar12 = plVar1;
        }
        *(int *)((longlong)plVar12 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar17;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        bVar6 = local_78._4_4_ < (int)local_80[3];
        iVar17 = local_78._4_4_;
      } while (bVar6);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147dd4af0 FUN_147dd4af0 body=73 status=ok
// SIG undefined FUN_147dd4af0(void)

undefined8 * FUN_147dd4af0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (*(char *)((longlong)param_1 + 9) == '\x01')) {
    FUN_14019e20a(DAT_14c948580,param_1);
    *(undefined1 *)((longlong)param_1 + 9) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147dd4b3a FUN_147dd4b3a body=32 status=ok
// SIG undefined FUN_147dd4b3a(void)

undefined8 FUN_147dd4b3a(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FObjectFinder");
  return param_2;
}



// FUNCTION 147dd4b5a FUN_147dd4b5a body=132 status=ok
// SIG undefined FUN_147dd4b5a(void)

void FUN_147dd4b5a(longlong param_1,int param_2)

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



// FUNCTION 147dd4be0 FUN_147dd4be0 body=335 status=ok
// SIG undefined FUN_147dd4be0(void)

undefined4 * FUN_147dd4be0(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
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
  FUN_147dd4d30(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar9 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_147dd4e16(param_1,uVar9,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0x14) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
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
      FUN_147dd4f08(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dd4d30 FUN_147dd4d30 body=230 status=ok
// SIG undefined FUN_147dd4d30(void)

int * FUN_147dd4d30(longlong *param_1,int *param_2)

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



// FUNCTION 147dd4e16 FUN_147dd4e16 body=128 status=ok
// SIG undefined FUN_147dd4e16(void)

undefined8 FUN_147dd4e16(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_147dd4e96((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 147dd4e96 FUN_147dd4e96 body=114 status=ok
// SIG undefined FUN_147dd4e96(void)

void FUN_147dd4e96(longlong *param_1,int param_2)

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



// FUNCTION 147dd4f08 FUN_147dd4f08 body=473 status=ok
// SIG undefined FUN_147dd4f08(void)

void FUN_147dd4f08(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
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



// FUNCTION 147dd50e2 FUN_147dd50e2 body=132 status=ok
// SIG undefined FUN_147dd50e2(void)

void FUN_147dd50e2(longlong *param_1,int *param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) +
                    ((int)param_3 << 0x10 | (uint)(ushort)param_3) + (uVar2 << 0x13 | uVar2) +
                    (uint)(ushort)((ushort)param_3 >> 4)) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x18) == param_3) goto LAB_147dd50f2;
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  iVar1 = -1;
LAB_147dd50f2:
  *param_2 = iVar1;
  return;
}



// FUNCTION 147dd5166 FUN_147dd5166 body=87 status=ok
// SIG undefined FUN_147dd5166(void)

void FUN_147dd5166(longlong *param_1,int param_2)

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
  FUN_147dd4e96();
  return;
}



// FUNCTION 147dd51be FUN_147dd51be body=53 status=ok
// SIG undefined FUN_147dd51be(void)

ulonglong FUN_147dd51be(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1);
  }
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    uVar2 = FUN_144729dda(param_2);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 147dd51f4 FUN_147dd51f4 body=62 status=ok
// SIG undefined FUN_147dd51f4(void)

void FUN_147dd51f4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147dd5232(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 147dd5232 FUN_147dd5232 body=93 status=ok
// SIG undefined FUN_147dd5232(void)

ulonglong FUN_147dd5232(uint param_1,uint param_2)

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



// FUNCTION 147dd5290 FUN_147dd5290 body=146 status=ok
// SIG undefined FUN_147dd5290(void)

void FUN_147dd5290(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x160,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x160)) {
      uVar5 = uVar4 / 0x160 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x160,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147dd5324 FUN_147dd5324 body=358 status=ok
// SIG undefined FUN_147dd5324(void)

longlong * FUN_147dd5324(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x160,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x160);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_147dd2b1f(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_147dd5504(param_2,0);
      }
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0xba2e < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_147dcb1c8(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x160;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    FUN_147dd548c(param_2);
    if (0 < (int)local_2c) {
      iVar4 = 0;
      do {
        uVar3 = FUN_147dd54c6(param_2);
        FUN_147dcb1c8(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147dd548c FUN_147dd548c body=57 status=ok
// SIG undefined FUN_147dd548c(void)

void FUN_147dd548c(undefined8 *param_1,int param_2)

{
  FUN_147dd2b1f(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_147dd5504(param_1,param_2);
  return;
}



// FUNCTION 147dd54c6 FUN_147dd54c6 body=62 status=ok
// SIG undefined FUN_147dd54c6(void)

longlong FUN_147dd54c6(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147dd5290(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x160 + *param_1;
  thunk_FUN_140128c56(lVar2);
  return lVar2;
}



// FUNCTION 147dd5504 FUN_147dd5504 body=111 status=ok
// SIG undefined FUN_147dd5504(void)

void FUN_147dd5504(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x160,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x160)) {
      uVar2 = uVar1 / 0x160 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x160,8);
  }
  return;
}



// FUNCTION 147dd5573 thunk_FUN_140128c56 body=5 status=ok
// SIG undefined thunk_FUN_140128c56(void)

void thunk_FUN_140128c56(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  uVar1 = DAT_14c8464e8;
  param_1[1] = DAT_14c8464e0;
  param_1[2] = uVar1;
  param_1[3] = DAT_14c8464f0;
  uVar1 = DAT_14c846500;
  param_1[4] = DAT_14c8464f8;
  param_1[5] = uVar1;
  param_1[6] = DAT_14c846508;
  *(undefined2 *)(param_1 + 7) = 1;
  *(undefined1 *)((longlong)param_1 + 0x3a) = 0x80;
  uVar1 = DAT_14c8464e8;
  param_1[8] = DAT_14c8464e0;
  param_1[9] = uVar1;
  param_1[10] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x117) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x27] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x25] = DAT_14c8464e0;
  param_1[0x26] = uVar1;
  uVar1 = DAT_14c846500;
  param_1[0x28] = DAT_14c8464f8;
  param_1[0x29] = uVar1;
  param_1[0x2a] = DAT_14c846508;
  param_1[0x2b] = 0;
  return;
}



// FUNCTION 147dd5578 FUN_147dd5578 body=48 status=ok
// SIG undefined FUN_147dd5578(void)

void FUN_147dd5578(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x30,8);
  }
  return;
}



// FUNCTION 147dd55a8 FUN_147dd55a8 body=62 status=ok
// SIG undefined FUN_147dd55a8(void)

void FUN_147dd55a8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147dd55e6(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,8);
  }
  return;
}



// FUNCTION 147dd55e6 FUN_147dd55e6 body=112 status=ok
// SIG undefined FUN_147dd55e6(void)

ulonglong FUN_147dd55e6(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x30) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147dd5620;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x30,8);
      param_2 = param_2 / 0x30;
    }
  }
LAB_147dd5620:
  return param_2 & 0xffffffff;
}



// FUNCTION 147dd5656 FUN_147dd5656 body=167 status=ok
// SIG undefined FUN_147dd5656(void)

undefined8 * FUN_147dd5656(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_144a06ca8(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 << 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  uVar2 = param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_147dd5792(param_1 + 2,iVar1);
    FUN_147dd57f7(param_1[2],uVar2,iVar1);
  }
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  param_1[4] = param_2[4];
  return param_1;
}



// FUNCTION 147dd56fe FUN_147dd56fe body=147 status=ok
// SIG undefined FUN_147dd56fe(void)

void FUN_147dd56fe(longlong param_1,int param_2)

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



// FUNCTION 147dd5792 FUN_147dd5792 body=101 status=ok
// SIG undefined FUN_147dd5792(void)

undefined8 FUN_147dd5792(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0x160,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0x2e8ba2e8ba2e8ba3),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0x160)) {
    uVar5 = uVar2 / 0x160 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0x160,8);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 147dd57f7 FUN_147dd57f7 body=55 status=ok
// SIG undefined FUN_147dd57f7(void)

void FUN_147dd57f7(longlong param_1,longlong param_2,int param_3)

{
  do {
    FUN_140177b16(param_1,param_2);
    param_1 = param_1 + 0x160;
    param_2 = param_2 + 0x160;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 147dd582e FUN_147dd582e body=89 status=ok
// SIG undefined FUN_147dd582e(void)

void FUN_147dd582e(longlong param_1,int param_2)

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



// FUNCTION 147dd5888 FUN_147dd5888 body=48 status=ok
// SIG undefined FUN_147dd5888(void)

void FUN_147dd5888(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x40,8);
  }
  return;
}



// FUNCTION 147dd58b8 FUN_147dd58b8 body=180 status=ok
// SIG undefined FUN_147dd58b8(void)

int FUN_147dd58b8(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_48 = *param_3;
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x10);
        cVar1 = FUN_147dd596e(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_147dd5946;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 8 + (longlong)iVar4 * 0x10);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_147dd5946:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dd596e FUN_147dd596e body=53 status=ok
// SIG undefined FUN_147dd596e(void)

ulonglong FUN_147dd596e(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1);
  }
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    uVar2 = FUN_144729dda(param_2);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 147dd59a4 FUN_147dd59a4 body=301 status=ok
// SIG undefined FUN_147dd59a4(void)

undefined4 *
FUN_147dd59a4(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_147dd5ad2(param_1,local_50);
  uVar1 = *param_3;
  *local_48 = uVar1;
  *(undefined4 *)(local_48 + 1) = 0xffffffff;
  local_54 = local_50[0];
  uVar8 = (uint)((ulonglong)uVar1 >> 0x20) ^ (uint)uVar1;
  local_68 = param_4;
  cVar3 = FUN_147dd5bb8(param_1,uVar8,local_48,&local_54);
  uVar2 = local_54;
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
      *(uint *)((longlong)local_48 + 0xc) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_147dd5cc4(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dd5ad2 FUN_147dd5ad2 body=229 status=ok
// SIG undefined FUN_147dd5ad2(void)

int * FUN_147dd5ad2(longlong *param_1,int *param_2)

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
      FUN_144869a3c(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 147dd5bb8 FUN_147dd5bb8 body=152 status=ok
// SIG undefined FUN_147dd5bb8(void)

void FUN_147dd5bb8(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_38 = *param_3;
    iVar2 = FUN_147dd58b8();
    if (iVar2 != -1) {
      *(undefined8 *)(*param_1 + (longlong)iVar2 * 0x10) = *param_3;
      FUN_147dd5c52(param_1,*param_4);
      *param_4 = iVar2;
      uVar1 = 1;
      goto LAB_147dd5be6;
    }
  }
  uVar1 = 0;
LAB_147dd5be6:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dd5c52 FUN_147dd5c52 body=114 status=ok
// SIG undefined FUN_147dd5c52(void)

void FUN_147dd5c52(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
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



// FUNCTION 147dd5cc4 FUN_147dd5cc4 body=439 status=ok
// SIG undefined FUN_147dd5cc4(void)

void FUN_147dd5cc4(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x10;
        uVar10 = (longlong)
                 (int)((uint)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) ^
                      (uint)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0xc + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 8 + lVar7) =
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



// FUNCTION 147dd5e7c FUN_147dd5e7c body=90 status=ok
// SIG undefined FUN_147dd5e7c(void)

void FUN_147dd5e7c(longlong *param_1,int param_2)

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
  FUN_147dd5c52();
  return;
}



// FUNCTION 147dd5ed6 FUN_147dd5ed6 body=679 status=ok
// SIG undefined FUN_147dd5ed6(void)

void FUN_147dd5ed6(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar7 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar7,4);
    if ((int)uVar7 < 1) goto LAB_147dd5f3a;
  }
  uVar2 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
         0xffffffff;
    uVar2 = uVar2 + 1;
  } while (uVar7 != uVar2);
LAB_147dd5f3a:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar12 = 0;
    iVar4 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar12 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar12 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar11 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar11 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar7 = puVar10[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar11 = (ulonglong)(-uVar7 & uVar7);
    uVar15 = uVar11 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar12) {
      iVar12 = iVar14;
    }
  }
  if (iVar12 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar13 = (longlong)iVar12 * 0x10;
      uVar2 = ((uint)(*(ulonglong *)(lVar6 + lVar13) >> 0x14) & 0xffff ^
              (uint)(*(ulonglong *)(lVar6 + lVar13) >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      uVar15 = (longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U;
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0xc + lVar13) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 8 + lVar13) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar12 = (int)uVar3;
      lVar6 = (longlong)iVar12;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar12) {
          iVar9 = iVar12;
        }
        if (iVar8 <= iVar12) {
          return;
        }
        lVar13 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar13 + 1];
          if (uVar2 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar9 - lVar6 == lVar13) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar12 + (int)lVar13 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar12 < iVar14);
  }
  return;
}



// FUNCTION 147dd617e FUN_147dd617e body=114 status=ok
// SIG undefined FUN_147dd617e(void)

void FUN_147dd617e(longlong *param_1,int param_2)

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



// FUNCTION 147dd61f2 FUN_147dd61f2 body=105 status=ok
// SIG undefined FUN_147dd61f2(void)

void FUN_147dd61f2(int param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (DAT_14cb11e20 != DAT_14cb11e4c) {
    puVar2 = &DAT_14cb11e50;
    if (DAT_14cb11e58 != (undefined *)0x0) {
      puVar2 = DAT_14cb11e58;
    }
    for (iVar1 = *(int *)(puVar2 + ((longlong)param_1 & (longlong)DAT_14cb11e60 - 1U) * 4);
        iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x10 + DAT_14cb11e18 + 8)) {
      if (*(int *)(DAT_14cb11e18 + (longlong)iVar1 * 0x10) == param_1) {
        FUN_146defa9a(&DAT_14cb11e18);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147dd625c FUN_147dd625c body=313 status=ok
// SIG undefined FUN_147dd625c(void)

undefined8 FUN_147dd625c(char *param_1,char *param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  longlong in_RAX;
  uint7 uVar8;
  undefined7 uVar9;
  bool bVar10;
  
  cVar4 = *param_1;
  if (cVar4 != '\x02') {
    cVar5 = param_1[0x10];
    uVar8 = (uint7)((ulonglong)in_RAX >> 8);
    in_RAX = CONCAT71(uVar8,cVar5);
    if (cVar5 != '\x02') {
      dVar2 = *(double *)(param_1 + 8);
      pdVar1 = (double *)(param_1 + 0x18);
      if (*pdVar1 <= dVar2 && dVar2 != *pdVar1) {
        return 0;
      }
      if (((dVar2 == *pdVar1) && (!NAN(dVar2) && !NAN(*pdVar1))) &&
         (in_RAX = (ulonglong)uVar8 << 8, cVar5 == '\0' || cVar4 == '\0')) {
        return 0;
      }
    }
  }
  cVar5 = *param_2;
  cVar6 = param_2[0x10];
  uVar9 = (undefined7)((ulonglong)in_RAX >> 8);
  if (cVar5 == '\x02') {
    bVar7 = true;
    bVar10 = true;
    if (cVar4 == '\x02' || cVar6 == '\x02') goto LAB_147dd632c;
  }
  else {
    if (cVar6 != '\x02') {
      dVar2 = *(double *)(param_2 + 8);
      pdVar1 = (double *)(param_2 + 0x18);
      if ((*pdVar1 <= dVar2 && dVar2 != *pdVar1) ||
         (((dVar2 == *pdVar1 && (!NAN(dVar2) && !NAN(*pdVar1))) &&
          (in_RAX = CONCAT71(uVar9,cVar5 == '\0'), cVar6 == '\0' || cVar5 == '\0')))) {
        return 0;
      }
    }
    uVar9 = (undefined7)((ulonglong)in_RAX >> 8);
    bVar7 = true;
    if (param_1[0x10] != '\x02') {
      dVar2 = *(double *)(param_1 + 0x18);
      dVar3 = *(double *)(param_2 + 8);
      bVar7 = dVar3 < dVar2;
      if (param_1[0x10] == '\x01') {
        bVar7 = dVar3 < dVar2;
        if (cVar5 == '\x01') {
          bVar7 = dVar3 <= dVar2;
        }
        uVar9 = 0;
      }
    }
    bVar10 = true;
    if (cVar4 == '\x02' || cVar6 == '\x02') goto LAB_147dd632c;
  }
  dVar2 = *(double *)(param_1 + 8);
  dVar3 = *(double *)(param_2 + 0x18);
  bVar10 = dVar2 < dVar3;
  if (cVar4 == '\x01') {
    bVar10 = dVar2 < dVar3;
    if (cVar6 == '\x01') {
      bVar10 = dVar2 <= dVar3;
    }
  }
LAB_147dd632c:
  return CONCAT71(uVar9,bVar7 & bVar10);
}



// FUNCTION 147dd6395 FUN_147dd6395 body=7 status=ok
// SIG undefined FUN_147dd6395(void)

void FUN_147dd6395(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 147dd639c FUN_147dd639c body=132 status=ok
// SIG undefined FUN_147dd639c(void)

void FUN_147dd639c(longlong param_1,int param_2)

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



// FUNCTION 147dd6422 FUN_147dd6422 body=319 status=ok
// SIG undefined FUN_147dd6422(void)

undefined4 * FUN_147dd6422(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146bd72b6(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar6 = (int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2;
  local_58 = 0;
  cVar3 = FUN_146bd739c(param_1,uVar6,local_40);
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      *(uint *)((longlong)local_40 + 0x14) = uVar6;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_146bd74ba(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dd6562 FUN_147dd6562 body=147 status=ok
// SIG undefined FUN_147dd6562(void)

void FUN_147dd6562(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x60,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x60)) {
      uVar5 = uVar4 / 0x60 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x60,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}


