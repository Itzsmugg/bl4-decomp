// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147bba856 FUN_147bba856 body=140 status=ok
// SIG undefined FUN_147bba856(void)

int FUN_147bba856(longlong param_1,uint param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x308) != *(int *)(param_1 + 0x32c)) {
    lVar3 = param_1 + 0x330;
    if (*(longlong *)(param_1 + 0x370) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x370);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x378) - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar3 = *(longlong *)(param_1 + 0x300);
      if (*(longlong *)(param_1 + 0x300) == 0) {
        lVar3 = param_1;
      }
      do {
        lVar4 = (longlong)iVar2;
        if ((((*(int *)(lVar3 + lVar4 * 0x18) == *param_3) &&
             (*(int *)(lVar3 + 4 + lVar4 * 0x18) == param_3[1])) &&
            (lVar1 = lVar3 + lVar4 * 0x18, *(char *)(lVar1 + 8) == (char)param_3[2])) &&
           (*(int *)(lVar1 + 0xc) == param_3[3])) {
          return iVar2;
        }
        iVar2 = *(int *)(lVar3 + 0x10 + lVar4 * 0x18);
      } while (iVar2 != -1);
    }
  }
  return -1;
}



// FUNCTION 147bba8e2 FUN_147bba8e2 body=148 status=ok
// SIG undefined FUN_147bba8e2(void)

void FUN_147bba8e2(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x300);
  if (*(longlong *)(param_1 + 0x300) == 0) {
    lVar5 = param_1;
  }
  if (*(int *)(param_1 + 0x32c) != 0) {
    *(int *)(lVar5 + (longlong)*(int *)(param_1 + 0x328) * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar5 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)(param_1 + 0x32c) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = *(undefined4 *)(param_1 + 0x328);
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 0x328) = param_2;
  *(int *)(param_1 + 0x32c) = *(int *)(param_1 + 0x32c) + 1;
  lVar5 = param_1 + 0x310;
  if (*(longlong *)(param_1 + 0x318) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x318);
  }
  iVar4 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar4 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)(lVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 147bba976 FUN_147bba976 body=100 status=ok
// SIG undefined FUN_147bba976(void)

undefined8 FUN_147bba976(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar1 = (ulonglong)(((param_2 >> 1) - 1) + (uint)(param_2 >> 1 == 0)) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  iVar4 = 1 << ((byte)lVar2 & 0x1f);
  if ((uint)lVar2 < 4) {
    iVar4 = 0x10;
  }
  if (param_2 < 4) {
    iVar4 = 0x10;
  }
  if (((int)param_2 < 1) || (iVar4 <= *(int *)(param_1 + 0x378))) {
    uVar3 = 0;
  }
  else {
    *(int *)(param_1 + 0x378) = iVar4;
    FUN_147bba9da(param_1);
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 147bba9da FUN_147bba9da body=557 status=ok
// SIG undefined FUN_147bba9da(void)

void FUN_147bba9da(longlong param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 0x370) != 0) {
    FUN_1446efa72(param_1 + 0x370,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 0x378);
  uVar4 = local_70;
  if (uVar3 != 0) {
    lVar1 = param_1 + 0x330;
    uVar11 = 0;
    FUN_1400bf6d8(lVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        lVar10 = *(longlong *)(param_1 + 0x370);
        if (*(longlong *)(param_1 + 0x370) == 0) {
          lVar10 = lVar1;
        }
        *(undefined4 *)(lVar10 + (ulonglong)(*(int *)(param_1 + 0x378) + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar3 != uVar11);
    }
    local_58 = param_1 + 0x310;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if (*(int *)(param_1 + 800) != 0) {
      FUN_144a81a4c(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < *(int *)(local_58 + 0x10)) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar10 = *(longlong *)(local_88 + 0x300);
        if (*(longlong *)(local_88 + 0x300) == 0) {
          lVar10 = local_88;
        }
        lVar12 = (longlong)iVar5;
        uVar2 = *(undefined1 *)(lVar10 + 8 + lVar12 * 0x18);
        uVar4 = *(undefined8 *)(lVar10 + lVar12 * 0x18);
        uVar3 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar11 = (uint)uVar4 & 0xffff;
        uVar6 = FUN_144a78877(((uint)uVar4 << 0x10 | uVar11) + (int)((ulonglong)uVar4 >> 0x20) +
                              (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar11 >> 4),
                              *(undefined4 *)(lVar10 + 0xc + lVar12 * 0x18));
        iVar7 = FUN_144a78877(uVar6,uVar2);
        uVar8 = (longlong)iVar7 & (longlong)*(int *)(param_1 + 0x378) - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar10 + 0x14 + lVar12 * 0x18) = iVar7;
        lVar9 = *(longlong *)(param_1 + 0x370);
        if (*(longlong *)(param_1 + 0x370) == 0) {
          lVar9 = lVar1;
        }
        *(undefined4 *)(lVar10 + 0x10 + lVar12 * 0x18) =
             *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x378) - 1U & uVar8) * 4);
        lVar10 = *(longlong *)(param_1 + 0x370);
        if (*(longlong *)(param_1 + 0x370) == 0) {
          lVar10 = lVar1;
        }
        *(int *)(lVar10 + ((longlong)iVar7 & (longlong)*(int *)(param_1 + 0x378) - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_144a81a4c(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < *(int *)(local_78 + 0x10));
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147bbac08 FUN_147bbac08 body=116 status=ok
// SIG undefined FUN_147bbac08(void)

void FUN_147bbac08(longlong param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (-1 < param_3) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (*(int *)(param_1 + 0x4c) != param_3) {
      FUN_146bf53da(param_1,param_3);
    }
    for (; param_3 != 0; param_3 = param_3 + -1) {
      iVar1 = *(int *)(param_1 + 0x48);
      *(uint *)(param_1 + 0x48) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x4c) < iVar1 + 1U) {
        FUN_1401fcbb6(param_1,iVar1);
      }
      lVar2 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar2 = param_1;
      }
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 4) = *param_2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_3);
}



// FUNCTION 147bbac7e FUN_147bbac7e body=62 status=ok
// SIG undefined FUN_147bbac7e(void)

void FUN_147bbac7e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147bbacbc(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 147bbacbc FUN_147bbacbc body=93 status=ok
// SIG undefined FUN_147bbacbc(void)

ulonglong FUN_147bbacbc(uint param_1,uint param_2)

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



// FUNCTION 147bbad1e FUN_147bbad1e body=96 status=ok
// SIG undefined FUN_147bbad1e(void)

void FUN_147bbad1e(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14357579a(0xa8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14357579a(param_1 + 0x15);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147bbad5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 147bbad7e FUN_147bbad7e body=95 status=ok
// SIG undefined FUN_147bbad7e(void)

void FUN_147bbad7e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 6,0x10);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 6)) {
      uVar2 = uVar1 >> 6 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x40,0x10);
  }
  return;
}



// FUNCTION 147bbadde FUN_147bbadde body=112 status=ok
// SIG undefined FUN_147bbadde(void)

void FUN_147bbadde(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x28,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x28)) {
      uVar2 = uVar1 / 0x28 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x28,8);
  }
  return;
}



// FUNCTION 147bbae4e FUN_147bbae4e body=112 status=ok
// SIG undefined FUN_147bbae4e(void)

void FUN_147bbae4e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x28,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x28)) {
      uVar2 = uVar1 / 0x28 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x28,8);
  }
  return;
}



// FUNCTION 147bbaebe FUN_147bbaebe body=112 status=ok
// SIG undefined FUN_147bbaebe(void)

void FUN_147bbaebe(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x30,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x30)) {
      uVar2 = uVar1 / 0x30 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x30,8);
  }
  return;
}



// FUNCTION 147bbaf2e FUN_147bbaf2e body=112 status=ok
// SIG undefined FUN_147bbaf2e(void)

void FUN_147bbaf2e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x28,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x28)) {
      uVar2 = uVar1 / 0x28 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x28,8);
  }
  return;
}



// FUNCTION 147bbaf9e FUN_147bbaf9e body=112 status=ok
// SIG undefined FUN_147bbaf9e(void)

void FUN_147bbaf9e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x28,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x28)) {
      uVar2 = uVar1 / 0x28 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x28,8);
  }
  return;
}



// FUNCTION 147bbb00e FUN_147bbb00e body=132 status=ok
// SIG undefined FUN_147bbb00e(void)

void FUN_147bbb00e(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147bbb094 FUN_147bbb094 body=147 status=ok
// SIG undefined FUN_147bbb094(void)

void FUN_147bbb094(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147bbb128 FUN_147bbb128 body=147 status=ok
// SIG undefined FUN_147bbb128(void)

void FUN_147bbb128(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147bbb1bc FUN_147bbb1bc body=147 status=ok
// SIG undefined FUN_147bbb1bc(void)

void FUN_147bbb1bc(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147bbb250 FUN_147bbb250 body=121 status=ok
// SIG undefined FUN_147bbb250(void)

void FUN_147bbb250(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = (undefined4)param_1[1];
  local_28 = 0;
  local_24 = (undefined4)((ulonglong)param_1[1] >> 0x20);
  local_20 = *(undefined4 *)((longlong)param_1 + 0x14);
  local_1c = *(undefined1 *)(param_1 + 2);
  FUN_143575814(*param_1,&local_2c,param_1 + 4);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_14006fee2(*param_1,param_2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 147bbb2d4 FUN_147bbb2d4 body=29 status=ok
// SIG undefined FUN_147bbb2d4(void)

void FUN_147bbb2d4(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 147bbb2f2 FUN_147bbb2f2 body=29 status=ok
// SIG undefined FUN_147bbb2f2(void)

undefined8 FUN_147bbb2f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bbb310 FUN_147bbb310 body=96 status=ok
// SIG undefined FUN_147bbb310(void)

void FUN_147bbb310(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_143575ae8(0xb0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_143575ae8(param_1 + 0x16);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147bbb34c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 147bbb374 FUN_147bbb374 body=31 status=ok
// SIG undefined FUN_147bbb374(void)

undefined8 FUN_147bbb374(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bbb394 FUN_147bbb394 body=96 status=ok
// SIG undefined FUN_147bbb394(void)

void FUN_147bbb394(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_143575c7c(0xa8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_143575c7c(param_1 + 0x15);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147bbb3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 147bbb3f8 FUN_147bbb3f8 body=96 status=ok
// SIG undefined FUN_147bbb3f8(void)

void FUN_147bbb3f8(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_143575e16(0xa8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_143575e16(param_1 + 0x15);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147bbb434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 147bbb458 FUN_147bbb458 body=119 status=ok
// SIG undefined FUN_147bbb458(void)

void FUN_147bbb458(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = (undefined4)param_1[1];
  local_28 = 0;
  local_24 = (undefined4)((ulonglong)param_1[1] >> 0x20);
  local_20 = *(undefined4 *)((longlong)param_1 + 0x14);
  local_1c = *(undefined1 *)(param_1 + 2);
  FUN_143575e90(*param_1,&local_2c,param_1 + 3);
  FUN_14006fee2(*param_1,param_2,0);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bbb4da FUN_147bbb4da body=29 status=ok
// SIG undefined FUN_147bbb4da(void)

void FUN_147bbb4da(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 147bbb4f8 FUN_147bbb4f8 body=29 status=ok
// SIG undefined FUN_147bbb4f8(void)

undefined8 FUN_147bbb4f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bbb516 FUN_147bbb516 body=96 status=ok
// SIG undefined FUN_147bbb516(void)

void FUN_147bbb516(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1435760da(0xa8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1435760da(param_1 + 0x15);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147bbb552. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 147bbb576 FUN_147bbb576 body=119 status=ok
// SIG undefined FUN_147bbb576(void)

void FUN_147bbb576(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = (undefined4)param_1[1];
  local_28 = 0;
  local_24 = (undefined4)((ulonglong)param_1[1] >> 0x20);
  local_20 = *(undefined4 *)((longlong)param_1 + 0x14);
  local_1c = *(undefined1 *)(param_1 + 2);
  FUN_143576152(*param_1,&local_2c,param_1 + 3);
  FUN_14006fee2(*param_1,param_2,0);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bbb5f8 FUN_147bbb5f8 body=29 status=ok
// SIG undefined FUN_147bbb5f8(void)

void FUN_147bbb5f8(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 147bbb616 FUN_147bbb616 body=29 status=ok
// SIG undefined FUN_147bbb616(void)

undefined8 FUN_147bbb616(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bbb634 FUN_147bbb634 body=96 status=ok
// SIG undefined FUN_147bbb634(void)

void FUN_147bbb634(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14357639c(0xa8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14357639c(param_1 + 0x15);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147bbb670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 147bbb69e FUN_147bbb69e body=96 status=ok
// SIG undefined FUN_147bbb69e(void)

void FUN_147bbb69e(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14357652e(0xa8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14357652e(param_1 + 0x15);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147bbb6da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 147bbb6fe FUN_147bbb6fe body=48 status=ok
// SIG undefined FUN_147bbb6fe(void)

void FUN_147bbb6fe(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,4);
  }
  return;
}



// FUNCTION 147bbb72e FUN_147bbb72e body=115 status=ok
// SIG undefined FUN_147bbb72e(void)

void FUN_147bbb72e(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    iVar2 = (int)(uVar1 / 0x28);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x28,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147bbb7a1 FUN_147bbb7a1 body=110 status=ok
// SIG undefined FUN_147bbb7a1(void)

void FUN_147bbb7a1(longlong param_1,longlong param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  byte bVar8;
  longlong lVar9;
  
  if (param_3 != 0) {
    lVar9 = 0;
    bVar8 = DAT_14c950c29;
    do {
      puVar1 = (undefined4 *)(param_2 + lVar9);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar2 = (undefined4 *)(param_1 + lVar9);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      lVar3 = *(longlong *)(param_2 + 0x10 + lVar9);
      *(longlong *)(param_1 + 0x10 + lVar9) = lVar3;
      if (((bVar8 & 1) != 0) && (lVar3 != 0)) {
        FUN_1456cec3c();
        bVar8 = DAT_14c950c29;
      }
      uVar7 = *(undefined8 *)(param_2 + lVar9 + 0x20);
      *(undefined8 *)(param_1 + lVar9 + 0x18) = *(undefined8 *)(param_2 + lVar9 + 0x18);
      *(undefined8 *)(param_1 + lVar9 + 0x20) = uVar7;
      lVar9 = lVar9 + 0x28;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147bbb810 FUN_147bbb810 body=115 status=ok
// SIG undefined FUN_147bbb810(void)

void FUN_147bbb810(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x24,4);
    iVar2 = (int)(uVar1 / 0x24);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x24,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147bbb884 FUN_147bbb884 body=115 status=ok
// SIG undefined FUN_147bbb884(void)

void FUN_147bbb884(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,4);
    iVar2 = (int)(uVar1 / 0x30);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x30,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147bbb8f8 FUN_147bbb8f8 body=98 status=ok
// SIG undefined FUN_147bbb8f8(void)

void FUN_147bbb8f8(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 6,0x10);
    iVar1 = (int)(uVar2 >> 6);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x40,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147bbb95a FUN_147bbb95a body=115 status=ok
// SIG undefined FUN_147bbb95a(void)

void FUN_147bbb95a(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    iVar2 = (int)(uVar1 / 0x30);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x30,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147bbb9cd FUN_147bbb9cd body=118 status=ok
// SIG undefined FUN_147bbb9cd(void)

void FUN_147bbb9cd(longlong param_1,longlong param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  byte bVar9;
  longlong lVar10;
  
  if (param_3 != 0) {
    lVar10 = 0;
    bVar9 = DAT_14c950c29;
    do {
      puVar1 = (undefined4 *)(param_2 + lVar10);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar2 = (undefined4 *)(param_1 + lVar10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      lVar4 = *(longlong *)(param_2 + 0x10 + lVar10);
      *(longlong *)(param_1 + 0x10 + lVar10) = lVar4;
      if (((bVar9 & 1) != 0) && (lVar4 != 0)) {
        FUN_1456cec3c();
        bVar9 = DAT_14c950c29;
      }
      lVar4 = param_1 + lVar10;
      lVar3 = param_2 + lVar10;
      *(undefined4 *)(lVar4 + 0x28) = *(undefined4 *)(lVar3 + 0x28);
      uVar8 = *(undefined8 *)(lVar3 + 0x20);
      *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
      *(undefined8 *)(lVar4 + 0x20) = uVar8;
      lVar10 = lVar10 + 0x30;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147bbba44 FUN_147bbba44 body=264 status=ok
// SIG undefined FUN_147bbba44(void)

void FUN_147bbba44(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  char cVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_54;
  undefined4 local_50;
  undefined1 local_30;
  undefined4 local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_64 = (undefined4)local_70;
  local_60 = 0;
  local_5c = (undefined4)((ulonglong)local_70 >> 0x20);
  local_58 = 0xffffffff;
  local_54 = 2;
  local_30 = 0xff;
  local_28 = 0xffffffff;
  local_24 = 0;
  local_78 = 3;
  cVar1 = (**(code **)(*param_1 + 0x3c0))(param_1,0);
  if (cVar1 == '\0') {
    local_50 = 0;
  }
  *param_3 = local_50;
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147bbbb4e FUN_147bbbb4e body=224 status=ok
// SIG undefined FUN_147bbbb4e(void)

void FUN_147bbbb4e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = 0;
  local_3c = (undefined4)local_48;
  local_38 = 0;
  local_34 = (undefined4)((ulonglong)local_48 >> 0x20);
  local_30 = 0xffffffff;
  local_2c = 2;
  FUN_14487c068(param_1,&local_3c,&local_28,0);
  *param_3 = local_28;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bbbc30 FUN_147bbbc30 body=175 status=ok
// SIG undefined FUN_147bbbc30(void)

void FUN_147bbbc30(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147bbbce0(param_1,&local_38,local_28);
  *param_3 = local_38;
  param_3[1] = uStack_34;
  param_3[2] = uStack_30;
  param_3[3] = uStack_2c;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bbbce0 FUN_147bbbce0 body=159 status=ok
// SIG undefined FUN_147bbbce0(void)

undefined4 * FUN_147bbbce0(longlong *param_1,undefined4 *param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0x3f800000;
  local_54 = (undefined4)param_3;
  local_50 = 0;
  local_4c = (undefined4)((ulonglong)param_3 >> 0x20);
  local_48 = 0xffffffff;
  local_44 = 2;
  local_20 = 0xff;
  local_18 = 0xffffffff;
  local_14 = 0;
  local_68 = 3;
  cVar1 = (**(code **)(*param_1 + 0x3c0))(0,0xffffff01,&local_54);
  if (cVar1 != '\0') {
    *param_2 = local_40;
    param_2[1] = uStack_3c;
    param_2[2] = uStack_38;
    param_2[3] = uStack_34;
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bbbd84 FUN_147bbbd84 body=156 status=ok
// SIG undefined FUN_147bbbd84(void)

void FUN_147bbbd84(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
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
  FUN_140f8149e(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bbbe22 FUN_147bbbe22 body=156 status=ok
// SIG undefined FUN_147bbbe22(void)

void FUN_147bbbe22(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
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
  FUN_143576896(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bbbec6 FUN_147bbbec6 body=352 status=ok
// SIG undefined FUN_147bbbec6(void)

void FUN_147bbbec6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_3c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar3 = &local_38;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  puVar4 = &local_40;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_147bbc028(param_1,puVar3,local_3c,puVar4);
  *param_3 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bbc028 FUN_147bbc028 body=213 status=ok
// SIG undefined FUN_147bbc028(void)

undefined8 FUN_147bbc028(longlong param_1,longlong *param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  undefined1 local_90 [8];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined1 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar5 = -1;
  *param_4 = -1;
  lVar2 = *param_2;
  local_30 = 2;
  local_2c = 0xffffffff;
  local_98 = local_90;
  local_90[0] = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = lVar2;
  FUN_140042bb4();
  iVar1 = *(int *)(param_1 + 0x188);
  if (0 < (longlong)iVar1) {
    piVar3 = (int *)(*(longlong *)(param_1 + 0x180) + 0xc);
    lVar4 = 0;
    do {
      if (((lVar2 == *(longlong *)(piVar3 + -3)) && (*piVar3 == -1)) && ((char)piVar3[-1] == '\x02')
         ) {
        iVar5 = (int)lVar4;
        break;
      }
      lVar4 = lVar4 + 1;
      piVar3 = piVar3 + 9;
    } while (iVar1 != lVar4);
  }
  *param_4 = iVar5;
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return CONCAT71((int7)(int3)((uint)iVar1 >> 8),iVar5 != -1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bbc104 FUN_147bbc104 body=246 status=ok
// SIG undefined FUN_147bbc104(void)

void FUN_147bbc104(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
  undefined8 local_20;
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
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_24 == 0) {
    FUN_143570090(param_1,local_20);
  }
  else {
    FUN_143573aa0();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bbc1fc FUN_147bbc1fc body=264 status=ok
// SIG undefined FUN_147bbc1fc(void)

void FUN_147bbc1fc(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  char cVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_54;
  undefined4 local_50;
  undefined1 local_30;
  undefined4 local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_64 = (undefined4)local_70;
  local_60 = 0;
  local_5c = (undefined4)((ulonglong)local_70 >> 0x20);
  local_58 = 0xffffffff;
  local_54 = 2;
  local_30 = 0xff;
  local_28 = 0xffffffff;
  local_24 = 0;
  local_78 = 3;
  cVar1 = (**(code **)(*param_1 + 0x3c0))(param_1,0);
  if (cVar1 == '\0') {
    local_50 = 0;
  }
  *param_3 = local_50;
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147bbc306 FUN_147bbc306 body=303 status=ok
// SIG undefined FUN_147bbc306(void)

void FUN_147bbc306(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_78;
  undefined1 local_70;
  undefined4 local_6c;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_54;
  undefined4 local_50;
  undefined1 local_30;
  undefined4 local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 0;
  local_70 = 2;
  local_6c = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  puVar2 = &local_78;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_64 = (int)*puVar2;
  local_60 = 0;
  local_5c = (int)((ulonglong)*puVar2 >> 0x20);
  local_58 = *(undefined4 *)((longlong)puVar2 + 0xc);
  local_54 = *(undefined1 *)(puVar2 + 1);
  local_30 = 0xff;
  local_28 = 0xffffffff;
  local_24 = 0;
  local_88 = 3;
  cVar1 = (**(code **)(*param_1 + 0x3c0))(param_1,0);
  if (cVar1 == '\0') {
    local_50 = 0;
  }
  *param_3 = local_50;
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147bbc436 FUN_147bbc436 body=224 status=ok
// SIG undefined FUN_147bbc436(void)

void FUN_147bbc436(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = 0;
  local_3c = (undefined4)local_48;
  local_38 = 0;
  local_34 = (undefined4)((ulonglong)local_48 >> 0x20);
  local_30 = 0xffffffff;
  local_2c = 2;
  FUN_14487c068(param_1,&local_3c,&local_28,0);
  *param_3 = local_28;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bbc518 FUN_147bbc518 body=256 status=ok
// SIG undefined FUN_147bbc518(void)

void FUN_147bbc518(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined1 local_48;
  undefined4 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = 0;
  local_48 = 2;
  local_44 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  puVar1 = &local_50;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = 0;
  local_3c = (int)*puVar1;
  local_38 = 0;
  local_34 = (int)((ulonglong)*puVar1 >> 0x20);
  local_30 = *(undefined4 *)((longlong)puVar1 + 0xc);
  local_2c = *(undefined1 *)(puVar1 + 1);
  FUN_14487c068(param_1,&local_3c,&local_28,0);
  *param_3 = local_28;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bbc61a FUN_147bbc61a body=175 status=ok
// SIG undefined FUN_147bbc61a(void)

void FUN_147bbc61a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147bbc6ca(param_1,&local_38,local_28);
  *param_3 = local_38;
  param_3[1] = uStack_34;
  param_3[2] = uStack_30;
  param_3[3] = uStack_2c;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bbc6ca FUN_147bbc6ca body=159 status=ok
// SIG undefined FUN_147bbc6ca(void)

undefined4 * FUN_147bbc6ca(longlong *param_1,undefined4 *param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0x3f800000;
  local_54 = (undefined4)param_3;
  local_50 = 0;
  local_4c = (undefined4)((ulonglong)param_3 >> 0x20);
  local_48 = 0xffffffff;
  local_44 = 2;
  local_20 = 0xff;
  local_18 = 0xffffffff;
  local_14 = 0;
  local_68 = 3;
  cVar1 = (**(code **)(*param_1 + 0x3c0))(0,0xffffff01,&local_54);
  if (cVar1 != '\0') {
    *param_2 = local_40;
    param_2[1] = uStack_3c;
    param_2[2] = uStack_38;
    param_2[3] = uStack_34;
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bbc76a FUN_147bbc76a body=201 status=ok
// SIG undefined FUN_147bbc76a(void)

void FUN_147bbc76a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined1 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  local_28 = 2;
  local_24 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar1 = &local_30;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147bbc834(param_1,&local_40,puVar1);
  *param_3 = local_40;
  param_3[1] = uStack_3c;
  param_3[2] = uStack_38;
  param_3[3] = uStack_34;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bbc834 FUN_147bbc834 body=166 status=ok
// SIG undefined FUN_147bbc834(void)

undefined4 * FUN_147bbc834(longlong *param_1,undefined4 *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0x3f800000;
  local_54 = (undefined4)*param_3;
  local_50 = 0;
  local_4c = (undefined4)((ulonglong)*param_3 >> 0x20);
  local_48 = *(undefined4 *)((longlong)param_3 + 0xc);
  local_44 = *(undefined1 *)(param_3 + 1);
  local_20 = 0xff;
  local_18 = 0xffffffff;
  local_14 = 0;
  local_68 = 3;
  cVar1 = (**(code **)(*param_1 + 0x3c0))
                    (0,CONCAT71((uint7)(uint3)((uint)local_48 >> 8),1),&local_54);
  if (cVar1 != '\0') {
    *param_2 = local_40;
    param_2[1] = uStack_3c;
    param_2[2] = uStack_38;
    param_2[3] = uStack_34;
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bbc8dc FUN_147bbc8dc body=308 status=ok
// SIG undefined FUN_147bbc8dc(void)

void FUN_147bbc8dc(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147bbca12(param_1,local_20,local_28,local_2c);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bbca12 FUN_147bbca12 body=1084 status=ok
// SIG undefined FUN_147bbca12(void)

void FUN_147bbca12(undefined8 param_1,longlong *param_2,longlong *param_3,float param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  longlong *local_110;
  undefined8 local_108;
  undefined8 local_100;
  float local_f8;
  float local_f4;
  undefined1 local_f0;
  longlong local_e8;
  ulonglong uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (param_3 != (longlong *)0x0 && param_2 != (longlong *)0x0) {
    plVar4 = (longlong *)(**(code **)(*param_2 + 0x2b8))(param_2);
    plVar5 = (longlong *)(**(code **)(*param_3 + 0x2b8))(param_3);
    if (plVar4 == plVar5) {
      local_e8 = 0;
      uStack_e0 = 0;
      local_110 = plVar4;
      local_108 = param_1;
      FUN_147bbd9ed(param_2,&local_e8);
      FUN_147bbd9ed(param_3,&local_e8);
      lVar8 = (longlong)(int)uStack_e0;
      if (0 < lVar8) {
        lVar9 = 0;
        do {
          uVar1 = *(ulonglong *)(local_e8 + lVar9 * 8);
          lVar6 = FUN_147bbdb03(param_2,uVar1);
          lVar7 = FUN_147bbdb03(param_3,uVar1);
          if (lVar6 != 0 || lVar7 != 0) {
            fVar12 = 0.0;
            if (lVar6 == 0 || lVar7 == 0) {
              local_100 = uVar1 & 0xffffffff;
              local_f8 = (float)(uVar1 >> 0x20);
              local_f4 = -NAN;
              local_f0 = 2;
              uStack_b8 = CONCAT71(uStack_b8._1_7_,0xff);
              local_b0 = CONCAT35(local_b0._5_3_,0xffffffff);
              local_118 = (undefined8 *)CONCAT44(local_118._4_4_,3);
              cVar3 = (**(code **)(*local_110 + 0x3c0))(local_110,0,&local_100,&local_d8);
              if (cVar3 == '\0') {
                fVar11 = 0.0;
              }
              else {
                fVar11 = (float)local_d8;
              }
              fVar12 = fVar11;
              if (lVar6 != 0) goto LAB_147bbcb54;
            }
            else {
LAB_147bbcb54:
              fVar11 = *(float *)(lVar6 + 0x10);
            }
            if (lVar7 != 0) {
              fVar12 = *(float *)(lVar7 + 0x10);
            }
            local_f8 = (float)CONCAT31(local_f8._1_3_,2);
            local_f4 = -NAN;
            local_d8 = local_d8 & 0xffffffffffffff00;
            local_90 = 0;
            uStack_88 = 0;
            local_a0 = 0;
            uStack_98 = 0;
            local_b0 = 0;
            uStack_a8 = 0;
            local_c0 = 0;
            uStack_b8 = 0;
            local_d0 = 0;
            uStack_c8 = 0;
            local_118 = &local_d8;
            local_100 = uVar1;
            FUN_140042bb4(local_108,&local_100,(fVar12 - fVar11) * param_4 + fVar11,0);
          }
          lVar9 = lVar9 + 1;
        } while (lVar8 != lVar9);
      }
      uVar1 = uStack_e0 >> 0x20;
      uStack_e0 = uStack_e0 & 0xffffffff00000000;
      if ((int)uVar1 != 0) {
        FUN_1402191ca(&local_e8,0);
      }
      FUN_147bbda78(param_2,&local_e8);
      FUN_147bbda78(param_3,&local_e8);
      uVar2 = local_108;
      lVar8 = (longlong)(int)uStack_e0;
      if (0 < lVar8) {
        lVar9 = 0;
        do {
          uVar1 = *(ulonglong *)(local_e8 + lVar9 * 8);
          lVar6 = FUN_147bbdb7a(param_2,uVar1);
          lVar7 = FUN_147bbdb7a(param_3,uVar1);
          if (lVar6 != 0 || lVar7 != 0) {
            fVar12 = 0.0;
            fVar11 = 0.0;
            fVar14 = 0.0;
            fVar10 = 0.0;
            if (lVar6 == 0 || lVar7 == 0) {
              local_100 = uVar1 & 0xffffffff;
              local_f8 = (float)(uVar1 >> 0x20);
              local_f4 = -NAN;
              local_f0 = 2;
              uStack_b8 = CONCAT71(uStack_b8._1_7_,0xff);
              local_b0 = CONCAT35(local_b0._5_3_,0xffffffff);
              local_118 = (undefined8 *)CONCAT44(local_118._4_4_,3);
              cVar3 = (**(code **)(*local_110 + 0x3c0))(local_110,1,&local_100,&local_d8);
              fVar10 = 0.0;
              fVar11 = 0.0;
              fVar12 = 0.0;
              fVar14 = 0.0;
              if (cVar3 != '\0') {
                fVar10 = local_d0._4_4_;
                fVar11 = local_d8._4_4_;
                fVar12 = (float)local_d8;
                fVar14 = (float)local_d0;
              }
              fVar13 = fVar12;
              local_f8 = fVar14;
              fVar15 = fVar11;
              local_f4 = fVar10;
              if (lVar6 != 0) goto LAB_147bbccdf;
            }
            else {
LAB_147bbccdf:
              fVar13 = *(float *)(lVar6 + 0x10);
              local_f8 = *(float *)(lVar6 + 0x18);
              fVar15 = *(float *)(lVar6 + 0x14);
              local_f4 = *(float *)(lVar6 + 0x1c);
            }
            if (lVar7 != 0) {
              fVar12 = *(float *)(lVar7 + 0x10);
              fVar11 = *(float *)(lVar7 + 0x14);
              fVar14 = *(float *)(lVar7 + 0x18);
              fVar10 = *(float *)(lVar7 + 0x1c);
            }
            local_f4 = (fVar10 - local_f4) * param_4 + local_f4;
            local_f8 = (fVar14 - local_f8) * param_4 + local_f8;
            local_d0 = CONCAT71(local_d0._1_7_,2);
            local_d0 = CONCAT44(0xffffffff,(float)local_d0);
            local_100 = CONCAT44((fVar11 - fVar15) * param_4 + fVar15,
                                 (fVar12 - fVar13) * param_4 + fVar13);
            local_d8 = uVar1;
            FUN_14016d7a8(uVar2,&local_d8,&local_100);
          }
          lVar9 = lVar9 + 1;
        } while (lVar8 != lVar9);
      }
      if (local_e8 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147bbce50 FUN_147bbce50 body=319 status=ok
// SIG undefined FUN_147bbce50(void)

void FUN_147bbce50(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined1 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_50 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0x3ff0000000000000;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = (undefined4)local_68;
  uStack_34 = local_68._4_4_;
  uStack_30 = (undefined4)uStack_60;
  uStack_2c = uStack_60._4_4_;
  local_48 = (undefined4)local_78;
  uStack_44 = local_78._4_4_;
  uStack_40 = (undefined4)uStack_70;
  uStack_3c = uStack_70._4_4_;
  local_28 = local_50;
  local_20 = 2;
  local_1c = 0xffffffff;
  FUN_14357152e(param_1);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bbcf90 FUN_147bbcf90 body=96 status=ok
// SIG undefined FUN_147bbcf90(void)

void FUN_147bbcf90(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined1 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_10 = 2;
  local_c = 0xffffffff;
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  local_28 = param_3[4];
  uStack_24 = param_3[5];
  uStack_20 = param_3[6];
  uStack_1c = param_3[7];
  local_18 = param_2;
  FUN_14357152e(local_38,&local_18);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bbcff2 FUN_147bbcff2 body=265 status=ok
// SIG undefined FUN_147bbcff2(void)

void FUN_147bbcff2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = local_30;
  local_20 = 2;
  local_1c = 0xffffffff;
  FUN_143571d78(param_1,&local_28,local_38);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bbd0fc FUN_147bbd0fc body=270 status=ok
// SIG undefined FUN_147bbd0fc(void)

void FUN_147bbd0fc(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  local_28 = 2;
  local_24 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar2 = &local_30;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143571d78(param_1,puVar2,local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bbd212 FUN_147bbd212 body=243 status=ok
// SIG undefined FUN_147bbd212(void)

void FUN_147bbd212(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147bb63b8(param_1,local_24,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bbd306 FUN_147bbd306 body=319 status=ok
// SIG undefined FUN_147bbd306(void)

void FUN_147bbd306(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined1 local_80 [8];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined1 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_8c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_8c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_8c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = local_88;
  local_20 = 2;
  local_1c = 0xffffffff;
  local_98 = local_80;
  local_80[0] = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  FUN_140042bb4(param_1,&local_28,local_8c,0);
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bbd446 FUN_147bbd446 body=325 status=ok
// SIG undefined FUN_147bbd446(void)

void FUN_147bbd446(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined1 local_80;
  undefined4 local_7c;
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = 0;
  local_80 = 2;
  local_7c = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_8c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_8c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_8c);
  }
  puVar2 = &local_88;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = local_78;
  local_78[0] = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  FUN_140042bb4(param_1,puVar2,local_8c,0);
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bbd58c FUN_147bbd58c body=265 status=ok
// SIG undefined FUN_147bbd58c(void)

void FUN_147bbd58c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = local_30;
  local_20 = 2;
  local_1c = 0xffffffff;
  FUN_143572548(param_1,&local_28,local_38);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bbd696 FUN_147bbd696 body=73 status=ok
// SIG undefined FUN_147bbd696(void)

void FUN_147bbd696(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined1 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = 2;
  local_c = 0xffffffff;
  local_18 = param_2;
  FUN_143572548(param_1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bbd6e0 FUN_147bbd6e0 body=238 status=ok
// SIG undefined FUN_147bbd6e0(void)

void FUN_147bbd6e0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14016d8b0(param_1,local_20,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bbd7d0 FUN_147bbd7d0 body=270 status=ok
// SIG undefined FUN_147bbd7d0(void)

void FUN_147bbd7d0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  local_28 = 2;
  local_24 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar2 = &local_30;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1409d961e(param_1,puVar2,local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bbd8e0 FUN_147bbd8e0 body=265 status=ok
// SIG undefined FUN_147bbd8e0(void)

void FUN_147bbd8e0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined1 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  local_28 = local_40;
  local_20 = 2;
  local_1c = 0xffffffff;
  FUN_14016d7a8(param_1);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bbd9ed FUN_147bbd9ed body=139 status=ok
// SIG undefined FUN_147bbd9ed(void)

void FUN_147bbd9ed(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  while( true ) {
    iVar1 = *(int *)(param_1 + 0x188);
    if (0 < (longlong)iVar1) {
      lVar3 = 0;
      do {
        FUN_140721fbe(param_2,*(longlong *)(param_1 + 0x180) + lVar3);
        lVar3 = lVar3 + 0x24;
      } while ((longlong)iVar1 * 0x24 != lVar3);
    }
    if (*(longlong *)(param_1 + 0x110) == 0) {
      return;
    }
    lVar3 = FUN_1411eefea();
    param_1 = *(longlong *)(param_1 + 0x110);
    if (param_1 == 0) {
      return;
    }
    if (lVar3 == 0) break;
    lVar2 = *(longlong *)(param_1 + 0x10);
    if (lVar2 == 0) {
      return;
    }
    if (*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38)) {
      return;
    }
    if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
        lVar3 + 0x30) {
      return;
    }
  }
  return;
}



// FUNCTION 147bbda78 FUN_147bbda78 body=139 status=ok
// SIG undefined FUN_147bbda78(void)

void FUN_147bbda78(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  while( true ) {
    iVar1 = *(int *)(param_1 + 0x198);
    if (0 < (longlong)iVar1) {
      lVar3 = 0;
      do {
        FUN_140721fbe(param_2,*(longlong *)(param_1 + 400) + lVar3);
        lVar3 = lVar3 + 0x30;
      } while ((longlong)iVar1 * 0x30 != lVar3);
    }
    if (*(longlong *)(param_1 + 0x110) == 0) {
      return;
    }
    lVar3 = FUN_1411eefea();
    param_1 = *(longlong *)(param_1 + 0x110);
    if (param_1 == 0) {
      return;
    }
    if (lVar3 == 0) break;
    lVar2 = *(longlong *)(param_1 + 0x10);
    if (lVar2 == 0) {
      return;
    }
    if (*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38)) {
      return;
    }
    if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
        lVar3 + 0x30) {
      return;
    }
  }
  return;
}



// FUNCTION 147bbdb03 FUN_147bbdb03 body=119 status=ok
// SIG undefined FUN_147bbdb03(void)

longlong * FUN_147bbdb03(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  do {
    lVar2 = (longlong)*(int *)(param_1 + 0x188);
    if (0 < lVar2) {
      plVar1 = *(longlong **)(param_1 + 0x180);
      do {
        if (((*plVar1 == param_2) && (*(int *)((longlong)plVar1 + 0xc) == -1)) &&
           ((char)plVar1[1] == '\x02')) {
          if (plVar1 != (longlong *)0x0) {
            return plVar1;
          }
          break;
        }
        plVar1 = (longlong *)((longlong)plVar1 + 0x24);
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    param_1 = *(longlong *)(param_1 + 0x110);
    if (param_1 == 0) {
      return (longlong *)0x0;
    }
    lVar2 = FUN_1411eefea();
    if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) {
      return (longlong *)0x0;
    }
    if (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) != lVar2 + 0x30) {
      return (longlong *)0x0;
    }
  } while( true );
}



// FUNCTION 147bbdb7a FUN_147bbdb7a body=119 status=ok
// SIG undefined FUN_147bbdb7a(void)

longlong * FUN_147bbdb7a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  do {
    lVar2 = (longlong)*(int *)(param_1 + 0x198);
    if (0 < lVar2) {
      plVar1 = *(longlong **)(param_1 + 400);
      do {
        if (((*plVar1 == param_2) && (*(int *)((longlong)plVar1 + 0xc) == -1)) &&
           ((char)plVar1[1] == '\x02')) {
          if (plVar1 != (longlong *)0x0) {
            return plVar1;
          }
          break;
        }
        plVar1 = plVar1 + 6;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    param_1 = *(longlong *)(param_1 + 0x110);
    if (param_1 == 0) {
      return (longlong *)0x0;
    }
    lVar2 = FUN_1411eefea();
    if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) {
      return (longlong *)0x0;
    }
    if (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) != lVar2 + 0x30) {
      return (longlong *)0x0;
    }
  } while( true );
}



// FUNCTION 147bbdbf2 FUN_147bbdbf2 body=89 status=ok
// SIG undefined FUN_147bbdbf2(void)

undefined8 * FUN_147bbdbf2(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147bbb884(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x30);
      }
    }
  }
  return param_1;
}



// FUNCTION 147bbdc4c FUN_147bbdc4c body=88 status=ok
// SIG undefined FUN_147bbdc4c(void)

undefined8 * FUN_147bbdc4c(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147bbb8f8(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 6);
      }
    }
  }
  return param_1;
}



// FUNCTION 147bbdca4 FUN_147bbdca4 body=89 status=ok
// SIG undefined FUN_147bbdca4(void)

undefined8 * FUN_147bbdca4(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147bbb810(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x24);
      }
    }
  }
  return param_1;
}



// FUNCTION 147bbdcfe FUN_147bbdcfe body=79 status=ok
// SIG undefined FUN_147bbdcfe(void)

undefined8 * FUN_147bbdcfe(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147bbb72e(param_1,iVar1);
      FUN_147bbb7a1(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147bbdd4e FUN_147bbdd4e body=79 status=ok
// SIG undefined FUN_147bbdd4e(void)

undefined8 * FUN_147bbdd4e(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147bbb95a(param_1,iVar1);
      FUN_147bbb9cd(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147bbdd9e FUN_147bbdd9e body=8 status=ok
// SIG undefined FUN_147bbdd9e(void)

void FUN_147bbdd9e(undefined8 param_1,undefined8 param_2)

{
  FUN_14357097e(param_1,param_2,0);
  return;
}



// FUNCTION 147bbdda6 FUN_147bbdda6 body=165 status=ok
// SIG undefined FUN_147bbdda6(void)

void FUN_147bbdda6(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong *_Dst;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x1b8);
  if (0 < (int)uVar1) {
    uVar3 = 0;
    _Dst = *(longlong **)(param_1 + 0x1b0);
    do {
      if (((*param_2 == *_Dst) &&
          (*(int *)((longlong)_Dst + 0xc) == *(int *)((longlong)param_2 + 0xc))) &&
         ((char)_Dst[1] == (char)param_2[1])) {
        if (uVar1 - 1 != (int)uVar3) {
          iVar4 = (uVar1 - 1) - (int)uVar3;
          iVar2 = 1;
          if (iVar4 < 1) {
            iVar2 = iVar4;
          }
          memmove(_Dst,*(longlong **)(param_1 + 0x1b0) + (ulonglong)(uVar1 - iVar2) * 5,
                  (longlong)iVar2 * 0x28);
          uVar1 = *(uint *)(param_1 + 0x1b8);
        }
        *(uint *)(param_1 + 0x1b8) = uVar1 - 1;
        FUN_143576faa(param_1,param_2);
        return;
      }
      uVar3 = uVar3 + 1;
      _Dst = _Dst + 5;
    } while (uVar1 != uVar3);
  }
  return;
}



// FUNCTION 147bbde4c FUN_147bbde4c body=106 status=ok
// SIG undefined FUN_147bbde4c(void)

void FUN_147bbde4c(longlong *param_1,longlong param_2,longlong *param_3,undefined4 param_4,
                  undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  
  (**(code **)(*param_1 + 0x310))(param_1,param_2,param_4,0,param_5,0);
  uVar1 = *(uint *)(param_2 + 8);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_3 + 0xc) - iVar2) < uVar1) {
    FUN_140bfc2d4(param_3);
  }
  memset((void *)((longlong)iVar2 * 0x10 + *param_3),0,(longlong)(int)uVar1 << 4);
  return;
}



// FUNCTION 147bbdeb6 FUN_147bbdeb6 body=500 status=ok
// SIG undefined FUN_147bbdeb6(void)

undefined8 *
FUN_147bbdeb6(longlong *param_1,undefined8 *param_2,int param_3,undefined8 param_4,longlong param_5)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined8 uStack_180;
  longlong local_178;
  undefined8 uStack_170;
  longlong local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined1 local_130 [224];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  iVar4 = -1;
  if (param_3 != 2) {
    if (param_5 != 0) {
      local_148 = 0;
      uStack_140 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_168 = 0;
      uStack_160 = 0;
      local_178 = 0;
      uStack_170 = 0;
      local_138 = 0xffffffff;
      memset(local_130,0,0xe0);
      local_188 = 0;
      uStack_180 = 0;
      cVar2 = (**(code **)(*param_1 + 0x358))(param_1,&local_178);
      if (cVar2 != '\0') {
        if (param_3 == 0) {
          if (DAT_14c950c29 == 1) {
            FUN_1456cec3c(param_5);
          }
          lVar1 = local_178;
          lVar6 = (longlong)(int)uStack_170;
          if (lVar6 != 0) {
            uVar5 = 0;
            bVar3 = DAT_14c950c29;
            do {
              if ((bVar3 & 1) != 0) {
                FUN_1456cec3c(param_5);
                bVar3 = DAT_14c950c29;
              }
              if (*(longlong *)(lVar1 + uVar5) == param_5) goto LAB_147bbe071;
              uVar5 = uVar5 + 8;
            } while (lVar6 * 8 != uVar5);
          }
        }
        else if (param_3 == 1) {
          if (DAT_14c950c29 == 1) {
            FUN_1456cec3c(param_5);
          }
          lVar1 = local_168;
          lVar6 = (longlong)(int)uStack_160;
          if (lVar6 != 0) {
            uVar5 = 0;
            bVar3 = DAT_14c950c29;
            do {
              if ((bVar3 & 1) != 0) {
                FUN_1456cec3c(param_5);
                bVar3 = DAT_14c950c29;
              }
              if (*(longlong *)(lVar1 + uVar5) == param_5) goto LAB_147bbe071;
              uVar5 = uVar5 + 8;
            } while (lVar6 * 8 != uVar5);
          }
        }
      }
      FUN_1401b97de(&local_178);
    }
    goto LAB_147bbe05b;
  }
  goto LAB_147bbdef7;
LAB_147bbe071:
  FUN_1401b97de(&local_178);
  iVar4 = (int)(uVar5 >> 3);
  if (iVar4 == -1) {
LAB_147bbe05b:
    *param_2 = 0;
    *(undefined1 *)(param_2 + 1) = 2;
    iVar4 = -1;
    goto LAB_147bbdefe;
  }
LAB_147bbdef7:
  *param_2 = param_4;
  *(char *)(param_2 + 1) = (char)param_3;
LAB_147bbdefe:
  *(int *)((longlong)param_2 + 0xc) = iVar4;
  if ((local_50 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147bbe0ac FUN_147bbe0ac body=532 status=ok
// SIG undefined FUN_147bbe0ac(void)

void FUN_147bbe0ac(longlong *param_1,char param_2,char param_3,float param_4,undefined4 param_5,
                  char param_6)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 1;
  local_88 = 5;
  (**(code **)(*param_1 + 0x310))(0,&local_78,4,0);
  if (0 < (int)uStack_70) {
    lVar7 = 0;
    do {
      lVar1 = *(longlong *)(local_78 + lVar7 * 8);
      if (lVar1 != 0) {
        lVar4 = FUN_144a79692();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          FUN_14371bf72(lVar1,param_4,param_5);
          if (param_2 != '\0') {
            *(byte *)(lVar1 + 0xbc) = *(byte *)(lVar1 + 0xbc) & 0xf7 | param_3 << 3;
          }
          if ((param_6 != '\0') && ((0.0 < param_4 || ((*(byte *)(lVar1 + 0xbc) & 8) != 0)))) {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14caec4b0) && (FUN_144b3d300(&DAT_14caec4b0), DAT_14caec4b0 == -1))
            {
              if (DAT_14c8407a8 == (longlong *)0x0) {
                FUN_1414b00ea();
              }
              DAT_14caec4a8 =
                   (longlong *)
                   (**(code **)(*DAT_14c8407a8 + 200))
                             (DAT_14c8407a8,L"r.Streaming.AllowFastForceResident",1);
              _Init_thread_footer(&DAT_14caec4b0);
            }
            if (DAT_14caec4a8 == (longlong *)0x0) {
              bVar2 = 0;
            }
            else {
              iVar3 = (**(code **)(*DAT_14caec4a8 + 0xb0))();
              bVar2 = (iVar3 != 0) << 4;
            }
            *(byte *)(lVar1 + 0xbc) = *(byte *)(lVar1 + 0xbc) & 0xef | bVar2;
            if (*(int *)(lVar1 + 0xb8) != -1) {
              uVar5 = FUN_140083894();
              plVar6 = (longlong *)FUN_14349f03c(uVar5);
              (**(code **)(*plVar6 + 0xa0))(plVar6,lVar1);
            }
          }
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < (int)uStack_70);
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147bbe2c2 FUN_147bbe2c2 body=471 status=ok
// SIG undefined FUN_147bbe2c2(void)

undefined8 * FUN_147bbe2c2(undefined8 *param_1,uint param_2,undefined2 param_3)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  bVar1 = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  if ((param_2 & 4) != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c8442bc) {
      FUN_144b3d300(&DAT_14c8442bc);
      if (DAT_14c8442bc == -1) {
        if (DAT_14c846b14 == '\0') {
          FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                        L"Attempting to get the command line but it hasn\'t been initialized yet.");
        }
        DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
        _Init_thread_footer(&DAT_14c8442bc);
      }
    }
    if ((DAT_14c872bf0 == '\x01') && (DAT_14c872bf1 != '\x01')) {
      bVar1 = 0;
    }
    else {
      bVar1 = DAT_14c8442b8 ^ 1;
    }
  }
  *(byte *)((longlong)param_1 + 0xb2) = (byte)(param_2 >> 1) & 1;
  if ((param_2 & 1) == 0) {
    if (bVar1 == 0) goto LAB_147bbe3fb;
    uVar2 = FUN_14001cc68(0x60,0x10);
    FUN_14165273a(uVar2);
    lVar4 = param_1[0x15];
    param_1[0x15] = uVar2;
    if (lVar4 == 0) goto LAB_147bbe3fb;
    FUN_1416525c2(lVar4);
  }
  else {
    lVar3 = FUN_14001cc68(0x60,0x10);
    FUN_145c1aaf2(lVar3);
    lVar4 = param_1[0x14];
    param_1[0x14] = lVar3;
    if (lVar4 == 0) goto LAB_147bbe3fb;
    FUN_145c1a9d0(lVar4);
  }
  FUN_1400020a8(lVar4);
LAB_147bbe3fb:
  if (*(char *)((longlong)param_1 + 0xb2) == '\x01') {
    FUN_14080c2b4();
  }
  *(undefined2 *)(param_1 + 0x16) = param_3;
  return param_1;
}



// FUNCTION 147bbe49a FUN_147bbe49a body=117 status=ok
// SIG undefined FUN_147bbe49a(void)

void FUN_147bbe49a(longlong param_1,longlong *param_2)

{
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = param_2;
  local_28 = (**(code **)(*param_2 + 0x2b8))(param_2);
  FUN_147bc77a0(param_1,local_2c);
  FUN_140282c6a(param_1 + 0x50,&local_28,&local_20,0);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bbe510 FUN_147bbe510 body=98 status=ok
// SIG undefined FUN_147bbe510(void)

void FUN_147bbe510(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  uVar1 = (**(code **)(*param_1 + 0x2d0))();
  FUN_147baf1ec(uVar1,param_3);
  FUN_147baf254(uVar1,param_3);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bbe578 FUN_147bbe578 body=112 status=ok
// SIG undefined FUN_147bbe578(void)

void FUN_147bbe578(longlong *param_1,undefined8 param_2,undefined8 *param_3,byte param_4)

{
  char cVar1;
  undefined1 auStack_68 [32];
  uint local_48;
  undefined8 local_40 [4];
  undefined1 local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0xff;
  local_18 = 0xffffffff;
  local_14 = 0;
  local_48 = param_4 ^ 3;
  cVar1 = (**(code **)(*param_1 + 0x3c0))(param_1,4,param_2,local_40);
  if (cVar1 != '\0') {
    *param_3 = local_40[0];
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bbe5ea FUN_147bbe5ea body=112 status=ok
// SIG undefined FUN_147bbe5ea(void)

void FUN_147bbe5ea(longlong *param_1,undefined8 param_2,undefined8 *param_3,byte param_4)

{
  char cVar1;
  undefined1 auStack_68 [32];
  uint local_48;
  undefined8 local_40 [4];
  undefined1 local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0xff;
  local_18 = 0xffffffff;
  local_14 = 0;
  local_48 = param_4 ^ 3;
  cVar1 = (**(code **)(*param_1 + 0x3c0))(param_1,7,param_2,local_40);
  if (cVar1 != '\0') {
    *param_3 = local_40[0];
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bbe65c FUN_147bbe65c body=129 status=ok
// SIG undefined FUN_147bbe65c(void)

void FUN_147bbe65c(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
                  byte param_5)

{
  char cVar1;
  undefined1 auStack_78 [32];
  uint local_58;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0xff;
  local_20 = 0xffffffff;
  local_1c = 0;
  local_58 = param_5 ^ 3;
  cVar1 = (**(code **)(*param_1 + 0x3c0))(param_1,CONCAT71((int7)(local_18 >> 8),5),param_2);
  if (cVar1 != '\0') {
    *param_3 = local_48;
    *param_4 = local_40;
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bbe6de FUN_147bbe6de body=104 status=ok
// SIG undefined FUN_147bbe6de(void)

void FUN_147bbe6de(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147bba1ac(param_3);
  local_38 = 0;
  uStack_30 = 0;
  uVar1 = (**(code **)(*param_1 + 0x2d0))(param_1);
  FUN_147baf6ca(uVar1,param_2,param_3);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bbe748 FUN_147bbe748 body=21 status=ok
// SIG undefined FUN_147bbe748(void)

void FUN_147bbe748(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000147bbe75a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x370))(param_1,3,param_2,param_3);
  return;
}



// FUNCTION 147bbe75e FUN_147bbe75e body=21 status=ok
// SIG undefined FUN_147bbe75e(void)

void FUN_147bbe75e(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000147bbe770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x370))(param_1,7,param_2,param_3);
  return;
}



// FUNCTION 147bbe85c FUN_147bbe85c body=100 status=ok
// SIG undefined FUN_147bbe85c(void)

undefined1 * FUN_147bbe85c(undefined1 *param_1,undefined1 *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  FUN_147a4a61e(param_1 + 8,param_2 + 8);
  FUN_147a4a61e(param_1 + 0x210,param_2 + 0x210);
  lVar1 = *(longlong *)(param_2 + 0x418);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x418);
    }
  }
  *(longlong *)(param_1 + 0x418) = lVar1;
  return param_1;
}



// FUNCTION 147bbe8c6 FUN_147bbe8c6 body=99 status=ok
// SIG undefined FUN_147bbe8c6(void)

void FUN_147bbe8c6(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  *(int *)(local_18 + 0x94) = *(int *)(local_18 + 0x94) + 1;
  FUN_1468be722();
  lVar1 = *(longlong *)(*param_2 + 0x10);
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(lVar1 + 8) + 0xd8))(lVar1 + 8);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bbe92a FUN_147bbe92a body=260 status=ok
// SIG undefined FUN_147bbe92a(void)

void FUN_147bbe92a(longlong *param_1,longlong param_2)

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
      FUN_1474be378(param_1 + 0xf);
    }
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    iVar1 = (int)param_1[0x10];
    *(uint *)(param_1 + 0x10) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0x84) < iVar1 + 1U) {
      FUN_140730f78(param_1 + 0xf,iVar1);
    }
    *(longlong *)(param_1[0xf] + (longlong)iVar1 * 8) = param_2;
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



// FUNCTION 147bbea30 FUN_147bbea30 body=178 status=ok
// SIG undefined FUN_147bbea30(void)

longlong FUN_147bbea30(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (0 < *(int *)(param_1 + 0x80)) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x78) + lVar4 * 8);
      if (lVar1 != 0) {
        lVar3 = *param_2;
        if ((lVar3 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar3);
LAB_147bbea76:
          lVar2 = FUN_144ae113c();
          if (((lVar2 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38))) ||
             (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
              lVar2 + 0x30)) goto LAB_147bbea98;
        }
        else {
          if (lVar3 != 0) goto LAB_147bbea76;
LAB_147bbea98:
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
    } while (lVar4 < *(int *)(param_1 + 0x80));
  }
  return 0;
}



// FUNCTION 147bbeae2 FUN_147bbeae2 body=275 status=ok
// SIG undefined FUN_147bbeae2(void)

void FUN_147bbeae2(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar3 = *(int *)(param_1 + 0x80);
  if (0 < iVar3) {
    lVar6 = 1;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x78) + -8 + lVar6 * 8);
      if (lVar1 != 0) {
        lVar5 = *param_2;
        if ((lVar5 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar5);
LAB_147bbeb32:
          lVar4 = FUN_144ae113c();
          if (((lVar4 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar4 + 0x38))) ||
             (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
              lVar4 + 0x30)) goto LAB_147bbeb54;
        }
        else {
          if (lVar5 != 0) goto LAB_147bbeb32;
LAB_147bbeb54:
          lVar5 = 0;
        }
        lVar1 = *(longlong *)(lVar1 + 0x10);
        if (*(int *)(lVar1 + 0x38) < *(int *)(lVar5 + 0x38)) {
          iVar3 = *(int *)(param_1 + 0x80);
        }
        else {
          iVar3 = *(int *)(param_1 + 0x80);
          if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
              lVar5 + 0x30) {
            if (iVar3 != (int)lVar6) {
              memmove((void *)(*(longlong *)(param_1 + 0x78) + lVar6 * 8 + -8),
                      (void *)(*(longlong *)(param_1 + 0x78) + lVar6 * 8),
                      (longlong)(iVar3 - (int)lVar6) << 3);
              iVar3 = *(int *)(param_1 + 0x80);
            }
            *(int *)(param_1 + 0x80) = iVar3 + -1;
            FUN_1474be4b6((longlong *)(param_1 + 0x78));
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



// FUNCTION 147bbebfc FUN_147bbebfc body=260 status=ok
// SIG undefined FUN_147bbebfc(void)

void FUN_147bbebfc(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined **local_1b0;
  longlong *local_1a8;
  undefined ***local_1a0;
  undefined ****local_198;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_198 = &local_1a0;
  local_1b0 = &PTR_FUN_149e37810;
  local_1a0 = &local_1b0;
  local_1a8 = param_2;
  switchD_143c3d4dc::caseD_20();
  if (((param_2[0xd] != 0) && (*(longlong *)(param_2[0xd] + 0x10) != 0)) ||
     ((uVar3 = 0, (*(byte *)(param_2 + 5) & 4) != 0 &&
      ((*(byte *)((longlong)param_2 + 0x35) & 0x10) != 0)))) {
    uVar3 = (uint)(*(longlong *)(param_1 + 0x28) != 0);
  }
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    local_1b0 = (undefined **)CONCAT44(local_1b0._4_4_,uVar3);
    (**(code **)(*param_2 + 0x170))(param_2,&local_1b0,4);
    uVar3 = (uint)local_1b0;
    if (1 < (uint)local_1b0) {
      FUN_14572541c(param_2);
      uVar3 = (uint)local_1b0;
    }
  }
  else {
    uVar3 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (uVar3 != 0) {
    uVar4 = FUN_1463ea116();
    local_1c8 = 0;
    uStack_1c0 = 0;
    FUN_14496b17c(uVar4,param_2,*(undefined8 *)(param_1 + 0x28),uVar4);
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  if ((local_20 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147bbed06 FUN_147bbed06 body=54 status=ok
// SIG undefined FUN_147bbed06(void)

void FUN_147bbed06(undefined1 *param_1,longlong param_2,undefined1 param_3)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 8) = param_2;
  *param_1 = param_3;
  return;
}



// FUNCTION 147bbed42 FUN_147bbed42 body=264 status=ok
// SIG undefined FUN_147bbed42(void)

void FUN_147bbed42(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_29 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  puVar1 = &local_29;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_147bc7fa2(param_1,local_28,puVar1);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bbee4c FUN_147bbee4c body=139 status=ok
// SIG undefined FUN_147bbee4c(void)

void FUN_147bbee4c(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147bc7ec6(param_1,&local_28);
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



// FUNCTION 147bbeede FUN_147bbeede body=274 status=ok
// SIG undefined FUN_147bbeede(void)

void FUN_147bbeede(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 local_29;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_29 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  puVar1 = &local_29;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147bc7fe4(param_1,&local_3c,local_28,puVar1);
  *param_3 = local_3c;
  param_3[1] = uStack_38;
  param_3[2] = uStack_34;
  param_3[3] = uStack_30;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bbeff2 FUN_147bbeff2 body=139 status=ok
// SIG undefined FUN_147bbeff2(void)

void FUN_147bbeff2(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147bc7f34(param_1,&local_28);
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



// FUNCTION 147bbf090 FUN_147bbf090 body=15 status=ok
// SIG undefined FUN_147bbf090(void)

undefined8 * FUN_147bbf090(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 2) = 0;
  return param_1;
}



// FUNCTION 147bbf104 FUN_147bbf104 body=89 status=ok
// SIG undefined FUN_147bbf104(void)

undefined8 * FUN_147bbf104(undefined8 *param_1)

{
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  FUN_14089e406();
  *param_1 = &PTR_FUN_14a9d8fa0;
  param_1[0x1d] = in_stack_00000028;
  param_1[0x1e] = in_stack_00000030;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  FUN_1446ddc76((longlong)param_1 + 0xfc,&DAT_149e3cc88,1);
  return param_1;
}



// FUNCTION 147bbf1d0 FUN_147bbf1d0 body=58 status=ok
// SIG undefined FUN_147bbf1d0(void)

undefined8 * FUN_147bbf1d0(undefined8 *param_1,uint param_2)

{
  wchar_t *pwVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 < 0xc) {
    pwVar1 = (wchar_t *)(&PTR_u_MSM_Unlit_14a9dcd28)[param_2];
  }
  else {
    pwVar1 = L"Unknown";
  }
  FUN_14020fad6(param_1,pwVar1);
  return param_1;
}



// FUNCTION 147bbf20a FUN_147bbf20a body=205 status=ok
// SIG undefined FUN_147bbf20a(void)

undefined8 *
FUN_147bbf20a(undefined8 *param_1,ushort param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != 0) {
    uVar4 = (uint)param_2;
    while( true ) {
      if (*(int *)(param_3 + 1) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = (longlong *)*param_3;
      }
      uVar1 = 0;
      if (uVar4 != 0) {
        for (; (uVar4 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
        }
      }
      (**(code **)(*plVar2 + 0x58))(plVar2,&local_50,uVar1);
      iVar3 = local_48 + -1;
      if (local_48 == 0) {
        iVar3 = 0;
      }
      FUN_1400020e8(param_1,local_50,iVar3);
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      uVar4 = uVar4 & ~(1 << (uVar1 & 0x1f));
      if (uVar4 == 0) break;
      iVar3 = *(int *)(param_4 + 1) + -1;
      if (*(int *)(param_4 + 1) == 0) {
        iVar3 = 0;
      }
      FUN_1400020e8(param_1,*param_4,iVar3);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bbf2d8 FUN_147bbf2d8 body=255 status=ok
// SIG undefined FUN_147bbf2d8(void)

undefined8 FUN_147bbf2d8(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140056680(local_38,&DAT_149e06184);
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,2,0x10);
  local_40 = 2;
  *local_48 = &PTR_LAB_14a9db9a0;
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
  local_48[2] = lVar2;
  *local_48 = &PTR_FUN_14a9db930;
  local_48[3] = FUN_147bbf1d0;
  FUN_147bbf20a(param_1,param_2,&local_48,local_38);
  FUN_1449db362(&local_48);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bbf3d8 FUN_147bbf3d8 body=125 status=ok
// SIG undefined FUN_147bbf3d8(void)

longlong FUN_147bbf3d8(longlong param_1,longlong param_2)

{
  byte bVar1;
  
  FUN_1407ce9d0();
  FUN_14043ea4a(param_1 + 0x10,param_2 + 0x10);
  FUN_14043ea4a(param_1 + 0x20,param_2 + 0x20);
  bVar1 = *(byte *)(param_2 + 0x58) & 1;
  *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) & 0xfe | bVar1;
  if (bVar1 != 0) {
    FUN_14043ea4a(param_1 + 0x10,param_2 + 0x10);
    FUN_14043ea4a(param_1 + 0x20,param_2 + 0x20);
  }
  return param_1;
}



// FUNCTION 147bbf458 FUN_147bbf458 body=194 status=ok
// SIG undefined FUN_147bbf458(void)

void FUN_147bbf458(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_14743d60a(*(undefined8 *)(param_1 + 0x28),param_1,&local_48,param_2);
  lVar5 = *(longlong *)(param_1 + 0x28);
  puVar1 = *(ulonglong **)(lVar5 + 0x60);
  puVar4 = (ulonglong *)(lVar5 + 0x60 + ((longlong)puVar1 >> 0x18));
  if (((ulonglong)puVar1 & 1) == 0) {
    puVar4 = puVar1;
  }
  if ((longlong)*(int *)(lVar5 + 0x68) != 0) {
    lVar5 = (longlong)*(int *)(lVar5 + 0x68) << 3;
    do {
      uVar2 = *puVar4;
      uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)puVar4;
      if ((uVar2 & 1) == 0) {
        uVar3 = uVar2;
      }
      if (uVar3 != 0) {
        FUN_14743d60a(uVar3,param_1,&local_48,param_2);
      }
      puVar4 = puVar4 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bbf51c FUN_147bbf51c body=125 status=ok
// SIG undefined FUN_147bbf51c(void)

void FUN_147bbf51c(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  
  FUN_14743d906(*(undefined8 *)(param_1 + 0x28),param_1,param_2);
  lVar5 = *(longlong *)(param_1 + 0x28);
  puVar1 = *(ulonglong **)(lVar5 + 0x60);
  puVar4 = (ulonglong *)(lVar5 + 0x60 + ((longlong)puVar1 >> 0x18));
  if (((ulonglong)puVar1 & 1) == 0) {
    puVar4 = puVar1;
  }
  if ((longlong)*(int *)(lVar5 + 0x68) != 0) {
    lVar5 = (longlong)*(int *)(lVar5 + 0x68) << 3;
    do {
      uVar2 = *puVar4;
      uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)puVar4;
      if ((uVar2 & 1) == 0) {
        uVar3 = uVar2;
      }
      if (uVar3 != 0) {
        FUN_14743d906(uVar3,param_1,param_2);
      }
      puVar4 = puVar4 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 147bbf59a FUN_147bbf59a body=131 status=ok
// SIG undefined FUN_147bbf59a(void)

void FUN_147bbf59a(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  
  FUN_14743db66(*(undefined8 *)(param_1 + 0x28),param_1,param_2,0);
  lVar5 = *(longlong *)(param_1 + 0x28);
  puVar1 = *(ulonglong **)(lVar5 + 0x60);
  puVar4 = (ulonglong *)(lVar5 + 0x60 + ((longlong)puVar1 >> 0x18));
  if (((ulonglong)puVar1 & 1) == 0) {
    puVar4 = puVar1;
  }
  if ((longlong)*(int *)(lVar5 + 0x68) != 0) {
    lVar5 = (longlong)*(int *)(lVar5 + 0x68) << 3;
    do {
      uVar2 = *puVar4;
      uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)puVar4;
      if ((uVar2 & 1) == 0) {
        uVar3 = uVar2;
      }
      if (uVar3 != 0) {
        FUN_14743db66(uVar3,param_1,param_2,0);
      }
      puVar4 = puVar4 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 147bbf61e FUN_147bbf61e body=1974 status=ok
// SIG undefined FUN_147bbf61e(void)

void FUN_147bbf61e(longlong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 **ppuVar3;
  byte bVar4;
  ushort uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  wchar_t *pwVar13;
  undefined2 *puVar14;
  longlong lVar15;
  wchar_t *pwVar16;
  undefined1 auStack_1c8 [32];
  wchar_t *local_1a8;
  undefined8 local_1a0;
  undefined2 *local_198;
  undefined2 *local_190;
  undefined2 *local_188;
  wchar_t *local_180;
  longlong *local_178;
  undefined2 *local_170;
  undefined4 local_164;
  longlong local_160;
  undefined8 local_158;
  undefined8 *local_150;
  undefined8 *local_148;
  undefined8 local_140;
  undefined2 *local_138;
  int local_130;
  undefined2 *local_128;
  undefined8 uStack_120;
  undefined2 *local_118;
  undefined8 uStack_110;
  undefined8 **local_100;
  undefined8 local_f8;
  undefined1 *local_f0;
  uint local_e8;
  int iStack_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined2 *local_d8;
  undefined1 *puStack_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 *local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  uint local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_164 = DAT_14c868800;
  puVar12 = (undefined2 *)0x0;
  DAT_14c868800 = 0;
  local_158 = param_2;
  FUN_1468161aa(param_2,
                L"Frequency, Target, VFType, ShaderType, SourceHash, VFSourceHash, OutputHash, IsShaderPipeline"
               );
  local_98 = 0;
  local_90 = 0;
  local_b8 = (undefined8 *)0x0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  local_178 = param_1;
  FUN_147bbf458(param_1);
  puStack_d0 = local_a8;
  local_d8 = (undefined2 *)0x100000000;
  local_c8 = 0xffffffff;
  iStack_c4 = 0;
  local_c0 = 0;
  if (local_90 != 0) {
    FUN_1449c0562(&local_d8);
    puVar12 = (undefined2 *)(ulonglong)local_90;
  }
  local_e8 = local_c8;
  iStack_e4 = iStack_c4;
  local_e0 = local_c0;
  local_dc = local_bc;
  local_f8 = local_d8;
  local_f0 = puStack_d0;
  local_100 = &local_b8;
  if ((iStack_c4 != (int)puVar12) || (puStack_d0 != local_a8)) {
    local_170 = puVar12;
    do {
      lVar15 = (*local_100)[(longlong)iStack_e4 * 10 + 7];
      plVar8 = (longlong *)
               ((longlong)(int)(*(ulonglong *)(lVar15 + 200) >> 1) * 8 +
               *(longlong *)(local_178[3] + 0x58));
      if ((*(ulonglong *)(lVar15 + 200) & 1) == 0) {
        plVar8 = (longlong *)(lVar15 + 200);
      }
      lVar2 = *plVar8;
      uVar6 = FUN_1474337de(lVar15);
      local_d8 = (undefined2 *)0x0;
      puStack_d0 = (undefined1 *)0x0;
      FUN_1407c8a86(uVar6,0x14,&local_d8);
      puVar12 = &DAT_149dfb77a;
      if ((int)puStack_d0 != 0) {
        puVar12 = local_d8;
      }
      uVar6 = FUN_147433842(lVar15);
      local_118 = (undefined2 *)0x0;
      uStack_110 = 0;
      FUN_1407c8a86(uVar6,0x14,&local_118);
      puVar10 = &DAT_149dfb77a;
      if ((int)uStack_110 != 0) {
        puVar10 = local_118;
      }
      uVar6 = FUN_14743383a(lVar15);
      local_128 = (undefined2 *)0x0;
      uStack_120 = 0;
      FUN_1407c8a86(uVar6,0x14,&local_128);
      puVar11 = &DAT_149dfb77a;
      if ((int)uStack_120 != 0) {
        puVar11 = local_128;
      }
      plVar8 = (longlong *)
               ((longlong)(int)(*(ulonglong *)(lVar15 + 0xc0) >> 1) * 8 +
               *(longlong *)(local_178[3] + 0x28));
      if ((*(ulonglong *)(lVar15 + 0xc0) & 1) == 0) {
        plVar8 = (longlong *)(lVar15 + 0xc0);
      }
      uVar6 = *(undefined8 *)(*plVar8 + 0x18);
      pwVar16 = L"null";
      if (lVar2 != 0) {
        pwVar16 = *(wchar_t **)(lVar2 + 8);
      }
      if (local_178[5] == 0) {
        uVar5 = 0x9b;
      }
      else {
        uVar5 = FUN_144a8876a();
      }
      local_140 = *(undefined8 *)(&DAT_14ca814bc + (ulonglong)uVar5 * 0x3c);
      FUN_1400021e4(&local_140,&local_138);
      puVar14 = &DAT_149dfb77a;
      if (local_130 != 0) {
        puVar14 = local_138;
      }
      bVar4 = *(byte *)(lVar15 + 0xd0) & 0xf;
      pwVar13 = L"SF_NumFrequencies";
      if (bVar4 < 0xc) {
        pwVar13 = (wchar_t *)(&PTR_u_SF_Vertex_14a9dcd88)[bVar4];
      }
      local_180 = L"false";
      local_1a8 = pwVar16;
      local_1a0 = uVar6;
      local_198 = puVar11;
      local_190 = puVar10;
      local_188 = puVar12;
      FUN_140047918(local_158,L"%s, %s, %s, %s, %s, %s, %s, %s",pwVar13,puVar14);
      if (local_138 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      puVar12 = local_170;
      if (local_128 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_118 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_d8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      local_e8 = local_e8 & ~local_f8._4_4_;
      FUN_1449c0562(&local_f8);
    } while (local_100 != &local_b8 || (local_f0 != local_a8 || iStack_e4 != (int)puVar12));
  }
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_147bc2466(&local_b8);
  local_b8 = (undefined8 *)0x0;
  uStack_b0 = 0;
  (**(code **)(*local_178 + 0x10))(local_178,&local_b8);
  if ((longlong)(int)uStack_b0 != 0) {
    puVar9 = local_b8 + (longlong)(int)uStack_b0 * 2;
    puVar7 = local_b8;
    local_150 = puVar9;
    do {
      local_148 = puVar7;
      FUN_14743dae2(*puVar7,&local_100,local_178);
      ppuVar3 = local_100;
      if ((longlong)(int)local_f8 != 0) {
        local_160 = (longlong)(int)local_f8 << 4;
        lVar15 = 0;
        do {
          uVar1 = *(ulonglong *)(*(longlong *)((longlong)ppuVar3 + lVar15) + 200);
          plVar8 = (longlong *)
                   ((longlong)(int)(uVar1 >> 1) * 8 + *(longlong *)(local_178[3] + 0x58));
          if ((uVar1 & 1) == 0) {
            plVar8 = (longlong *)(*(longlong *)((longlong)ppuVar3 + lVar15) + 200);
          }
          lVar2 = *plVar8;
          uVar6 = FUN_1474337de();
          local_d8 = (undefined2 *)0x0;
          puStack_d0 = (undefined1 *)0x0;
          FUN_1407c8a86(uVar6,0x14,&local_d8);
          local_170 = &DAT_149dfb77a;
          if ((int)puStack_d0 != 0) {
            local_170 = local_d8;
          }
          uVar6 = FUN_147433842(*(undefined8 *)((longlong)ppuVar3 + lVar15));
          local_118 = (undefined2 *)0x0;
          uStack_110 = 0;
          FUN_1407c8a86(uVar6,0x14,&local_118);
          puVar12 = &DAT_149dfb77a;
          if ((int)uStack_110 != 0) {
            puVar12 = local_118;
          }
          uVar6 = FUN_14743383a(*(undefined8 *)((longlong)ppuVar3 + lVar15));
          local_128 = (undefined2 *)0x0;
          uStack_120 = 0;
          FUN_1407c8a86(uVar6,0x14,&local_128);
          puVar10 = &DAT_149dfb77a;
          if ((int)uStack_120 != 0) {
            puVar10 = local_128;
          }
          uVar1 = *(ulonglong *)(*(longlong *)((longlong)ppuVar3 + lVar15) + 0xc0);
          plVar8 = (longlong *)
                   ((longlong)(int)(uVar1 >> 1) * 8 + *(longlong *)(local_178[3] + 0x28));
          if ((uVar1 & 1) == 0) {
            plVar8 = (longlong *)(*(longlong *)((longlong)ppuVar3 + lVar15) + 0xc0);
          }
          uVar6 = *(undefined8 *)(*plVar8 + 0x18);
          pwVar16 = L"null";
          if (lVar2 != 0) {
            pwVar16 = *(wchar_t **)(lVar2 + 8);
          }
          if (local_178[5] == 0) {
            uVar5 = 0x9b;
          }
          else {
            uVar5 = FUN_144a8876a();
          }
          lVar2 = local_160;
          local_140 = *(undefined8 *)(&DAT_14ca814bc + (ulonglong)uVar5 * 0x3c);
          FUN_1400021e4(&local_140,&local_138);
          puVar11 = &DAT_149dfb77a;
          if (local_130 != 0) {
            puVar11 = local_138;
          }
          bVar4 = *(byte *)(*(longlong *)((longlong)ppuVar3 + lVar15) + 0xd0) & 0xf;
          pwVar13 = L"SF_NumFrequencies";
          if (bVar4 < 0xc) {
            pwVar13 = (wchar_t *)(&PTR_u_SF_Vertex_14a9dcd88)[bVar4];
          }
          local_180 = L"true";
          local_188 = local_170;
          local_1a8 = pwVar16;
          local_1a0 = uVar6;
          local_198 = puVar10;
          local_190 = puVar12;
          FUN_140047918(local_158,L"%s, %s, %s, %s, %s, %s, %s, %s",pwVar13,puVar11);
          if (local_138 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (local_128 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (local_118 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (local_d8 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          lVar15 = lVar15 + 0x10;
          puVar9 = local_150;
        } while (lVar2 != lVar15);
      }
      if (local_100 != (undefined8 **)0x0) {
        FUN_1400020a8(local_100);
      }
      puVar7 = local_148 + 2;
    } while (puVar7 != puVar9);
  }
  if (local_b8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  DAT_14c868800 = local_164;
  if ((local_60 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147bbfdd6 FUN_147bbfdd6 body=366 status=ok
// SIG undefined FUN_147bbfdd6(void)

void FUN_147bbfdd6(longlong param_1)

{
  ushort uVar1;
  ulonglong uVar2;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  undefined2 local_40;
  undefined8 local_38;
  longlong local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = *(ushort *)(param_1 + 0x5c);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14caec620);
  uVar2 = (ulonglong)((uint)uVar1 * 0x50);
  local_78 = (longlong *)(&DAT_14caec650 + uVar2);
  local_30 = uVar2 + 0x14caec660;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if (*(int *)((longlong)&DAT_14caec678 + uVar2) != 0) {
    FUN_1449c0562(&local_38);
  }
  local_60 = local_28;
  iStack_5c = iStack_24;
  local_58 = local_20;
  local_54 = local_1c;
  local_70 = local_38;
  local_68 = local_30;
  local_40 = 0;
  local_50 = local_78;
  local_48 = local_78;
  if (iStack_24 < *(int *)(local_30 + 0x18)) {
    do {
      if (*(longlong *)(*(longlong *)(*local_78 + 0x28 + (longlong)iStack_5c * 0x38) + 8) == param_1
         ) {
        FUN_1406d1a9c(local_50);
        local_40 = CONCAT11(local_40._1_1_,1);
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < *(int *)(local_68 + 0x18));
    if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
      FUN_147bc5b82(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14caec620);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bbff5c FUN_147bbff5c body=44 status=ok
// SIG undefined FUN_147bbff5c(void)

void FUN_147bbff5c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_147bc0460(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x1b8);
  return;
}



// FUNCTION 147bbff8c FUN_147bbff8c body=70 status=ok
// SIG undefined FUN_147bbff8c(void)

void FUN_147bbff8c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0x1b8) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0x1b8) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_147bc0460(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x1d8);
  return;
}



// FUNCTION 147bbffd6 FUN_147bbffd6 body=71 status=ok
// SIG undefined FUN_147bbffd6(void)

void FUN_147bbffd6(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743d4c0(param_1);
  }
  param_1[0xc] = 0xfefefefefefefefe;
  param_1[10] = 0xfefefefefefefefe;
  param_1[0xb] = 0xfefefefefefefefe;
  param_1[8] = 0xfefefefefefefefe;
  param_1[9] = 0xfefefefefefefefe;
  param_1[6] = 0xfefefefefefefefe;
  param_1[7] = 0xfefefefefefefefe;
  param_1[4] = 0xfefefefefefefefe;
  param_1[5] = 0xfefefefefefefefe;
  param_1[2] = 0xfefefefefefefefe;
  param_1[3] = 0xfefefefefefefefe;
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 147bc0022 FUN_147bc0022 body=66 status=ok
// SIG undefined FUN_147bc0022(void)

void FUN_147bc0022(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if ((param_4 == '\0') && (param_1[1] != 0 && (param_1[1] & 1) == 0)) {
    FUN_1400020a8();
  }
  param_1[2] = 0xfefefefefefefefe;
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 147bc0112 FUN_147bc0112 body=193 status=ok
// SIG undefined FUN_147bc0112(void)

undefined4 FUN_147bc0112(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = FUN_14357bd7a(param_2,param_1);
  if ((char)uVar3 != '\0') {
    puVar2 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar2 + 1;
    if ((uint *)puVar2[1] < puVar1) {
      local_2c = *(uint *)(param_1 + 0x28) & 1;
      (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
      uVar4 = local_2c;
      if (1 < local_2c) {
        FUN_14572541c(param_2);
        uVar4 = local_2c;
      }
    }
    else {
      uVar4 = *(uint *)*puVar2;
      *puVar2 = (ulonglong)puVar1;
    }
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xfffffffe | (uint)(uVar4 != 0);
    FUN_1400751dc(param_2,param_1 + 0x2c);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bc01d4 FUN_147bc01d4 body=257 status=ok
// SIG undefined FUN_147bc01d4(void)

undefined4 FUN_147bc01d4(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = FUN_14357bd7a(param_2,param_1);
  if ((char)uVar4 != '\0') {
    puVar2 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar2 + 1;
    if ((uint *)puVar2[1] < puVar1) {
      local_2c = *(uint *)(param_1 + 0x28) & 1;
      (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
      uVar5 = local_2c;
      if (1 < local_2c) {
        FUN_14572541c(param_2);
        uVar5 = local_2c;
      }
    }
    else {
      uVar5 = *(uint *)*puVar2;
      *puVar2 = (ulonglong)puVar1;
    }
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xfffffffe | (uint)(uVar5 != 0);
    puVar6 = (undefined4 *)(param_1 + 0x2c);
    puVar3 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,puVar6,4);
      }
      else {
        FUN_14572512c(param_2,puVar6);
      }
    }
    else {
      *puVar6 = *puVar3;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bc02d6 FUN_147bc02d6 body=193 status=ok
// SIG undefined FUN_147bc02d6(void)

undefined4 FUN_147bc02d6(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = FUN_14357bd7a(param_2,param_1);
  if ((char)uVar3 != '\0') {
    puVar2 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar2 + 1;
    if ((uint *)puVar2[1] < puVar1) {
      local_2c = *(uint *)(param_1 + 0x28) & 1;
      (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
      uVar4 = local_2c;
      if (1 < local_2c) {
        FUN_14572541c(param_2);
        uVar4 = local_2c;
      }
    }
    else {
      uVar4 = *(uint *)*puVar2;
      *puVar2 = (ulonglong)puVar1;
    }
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xfffffffe | (uint)(uVar4 != 0);
    FUN_1447712aa(param_2,param_1 + 0x2c);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bc0398 FUN_147bc0398 body=193 status=ok
// SIG undefined FUN_147bc0398(void)

undefined4 FUN_147bc0398(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = FUN_14357bd7a(param_2,param_1);
  if ((char)uVar3 != '\0') {
    puVar2 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar2 + 1;
    if ((uint *)puVar2[1] < puVar1) {
      local_2c = *(uint *)(param_1 + 0x28) & 1;
      (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
      uVar4 = local_2c;
      if (1 < local_2c) {
        FUN_14572541c(param_2);
        uVar4 = local_2c;
      }
    }
    else {
      uVar4 = *(uint *)*puVar2;
      *puVar2 = (ulonglong)puVar1;
    }
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xfffffffe | (uint)(uVar4 != 0);
    FUN_14280e057(param_2,param_1 + 0x2c);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bc0460 FUN_147bc0460 body=447 status=ok
// SIG undefined FUN_147bc0460(void)

void FUN_147bc0460(ulonglong *param_1)

{
  longlong lVar1;
  
  FUN_14178dc2a(param_1 + 0x27);
  if (param_1[0x25] != 0 && (param_1[0x25] & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_1[0x23] != 0 && (param_1[0x23] & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_1[0x21] != 0 && (param_1[0x21] & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1f] != 0 && (param_1[0x1f] & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1d] != 0 && (param_1[0x1d] & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b] != 0 && (param_1[0x1b] & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_1[0x19] != 0 && (param_1[0x19] & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0 && (param_1[0x16] & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0 && (param_1[0x14] & 1) == 0) {
    FUN_1400020a8();
  }
  lVar1 = 0x90;
  do {
    if (*(ulonglong *)((longlong)param_1 + lVar1) != 0 &&
        (*(ulonglong *)((longlong)param_1 + lVar1) & 1) == 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0x20);
  if (param_1[4] != 0 && (param_1[4] & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0 && (param_1[2] & 1) == 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0 || (*param_1 & 1) != 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 147bc0620 FUN_147bc0620 body=23 status=ok
// SIG undefined FUN_147bc0620(void)

undefined8 FUN_147bc0620(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x28);
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x241));
  }
  return 0;
}



// FUNCTION 147bc063a FUN_147bc063a body=333 status=ok
// SIG undefined FUN_147bc063a(void)

void FUN_147bc063a(undefined4 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1,4);
    }
    else {
      FUN_14572512c(param_2,param_1);
    }
  }
  else {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 1,4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    param_1[1] = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 2,4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    param_1[2] = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  param_1 = param_1 + 3;
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147bc0739. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x170))(param_2,param_1,4);
      return;
    }
    FUN_14572512c(param_2,param_1);
    return;
  }
  *param_1 = *puVar1;
  *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  return;
}



// FUNCTION 147bc078e FUN_147bc078e body=303 status=ok
// SIG undefined FUN_147bc078e(void)

void FUN_147bc078e(undefined8 param_1,longlong *param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  ulonglong *puVar3;
  uint uVar4;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14357c63c();
  if ((int)param_2[8] < 0x104) {
    local_20 = 0;
    puVar3 = (ulonglong *)param_2[1];
    puVar1 = (undefined4 *)*puVar3 + 1;
    if ((undefined4 *)puVar3[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_20,4);
      }
      else {
        FUN_14572512c(param_2,&local_20);
      }
    }
    else {
      local_20 = *(undefined4 *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
    puVar3 = (ulonglong *)param_2[1];
    puVar2 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar2) {
      local_1c = 0;
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
      uVar4 = local_1c;
      if (1 < local_1c) {
        FUN_14572541c(param_2);
        uVar4 = local_1c;
      }
    }
    else {
      uVar4 = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar2;
    }
    puVar3 = (ulonglong *)param_2[1];
    if (puVar3[1] < *puVar3 + 4) {
      local_1c = (uint)(uVar4 != 0);
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
      if (1 < local_1c) {
        FUN_14572541c(param_2);
      }
    }
    else {
      *puVar3 = *puVar3 + 4;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bc08be FUN_147bc08be body=192 status=ok
// SIG undefined FUN_147bc08be(void)

undefined8 * FUN_147bc08be(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
    local_28 = 0;
    uStack_20 = 0;
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x2d0))();
    *param_2 = *(undefined8 *)(lVar2 + 0x3b0);
    iVar1 = *(int *)(lVar2 + 0x3b8);
    *(int *)(param_2 + 1) = iVar1;
    if (iVar1 != 0) goto LAB_147bc093d;
  }
  if (*(longlong **)(param_1 + 0x40) == (longlong *)0x0) {
    plVar3 = (longlong *)FUN_1447277f0(0);
    local_28 = 0;
    uStack_20 = 0;
    lVar2 = (**(code **)(*plVar3 + 0x2d0))(plVar3);
  }
  else {
    local_28 = 0;
    uStack_20 = 0;
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x2d0))();
  }
  *param_2 = *(undefined8 *)(lVar2 + 0x3b0);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar2 + 0x3b8);
LAB_147bc093d:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bc0990 FUN_147bc0990 body=86 status=ok
// SIG undefined FUN_147bc0990(void)

bool FUN_147bc0990(longlong *param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  
  cVar2 = (**(code **)(*param_1 + 0x3f0))();
  bVar1 = *(byte *)(param_1[8] + 0x1c0);
  if (cVar2 == '\0') {
    bVar3 = true;
    if ((bVar1 & 8) == 0) {
      cVar2 = FUN_147bae720(param_1[8],10);
      if (cVar2 == '\0') {
        bVar3 = (*(byte *)(param_1[8] + 0x1d6) & 0x10) == 0;
      }
      else {
        bVar3 = false;
      }
    }
  }
  else {
    bVar3 = (bool)((bVar1 & 8) >> 3);
  }
  return bVar3;
}



// FUNCTION 147bc0a26 FUN_147bc0a26 body=75 status=ok
// SIG undefined FUN_147bc0a26(void)

bool FUN_147bc0a26(longlong *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)param_1[9];
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  cVar1 = (**(code **)(*plVar4 + 0x508))();
  if ((cVar1 != '\0') && (iVar2 = (**(code **)(*param_1 + 0x30))(param_1), iVar2 == 0)) {
    uVar3 = (**(code **)(*param_1 + 0x270))(param_1);
    return uVar3 < 2;
  }
  return false;
}



// FUNCTION 147bc0ac6 FUN_147bc0ac6 body=37 status=ok
// SIG undefined FUN_147bc0ac6(void)

undefined8 * FUN_147bc0ac6(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1401031ac(uVar1,0,param_2);
  return param_2;
}



// FUNCTION 147bc0aec FUN_147bc0aec body=235 status=ok
// SIG undefined FUN_147bc0aec(void)

undefined8 FUN_147bc0aec(longlong *param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[9] != 0) {
    local_48 = (undefined2 *)0x0;
    uStack_40 = 0;
    FUN_1401031ac(param_1[9],0,&local_48);
    puVar1 = &DAT_149dfb77a;
    if ((int)uStack_40 != 0) {
      puVar1 = local_48;
    }
    (**(code **)(*param_1 + 0x518))(param_1,&local_58);
    puVar2 = &DAT_149dfb77a;
    if (local_50 != 0) {
      puVar2 = local_58;
    }
    FUN_140002266(param_2,L"%s (MI:%s)",puVar2,puVar1);
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
  }
  (**(code **)(*param_1 + 0x518))(param_1,param_2);
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147bc0c24 FUN_147bc0c24 body=78 status=ok
// SIG undefined FUN_147bc0c24(void)

ulonglong FUN_147bc0c24(longlong *param_1)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if ((((*(byte *)(param_1[8] + 0x1ca) & 4) != 0) && (*(char *)(param_1[8] + 0x128) == '\0')) &&
     (cVar1 = FUN_147bc810e(), cVar1 != '\0')) {
    uVar2 = (**(code **)(*param_1 + 0x178))(param_1);
    uVar3 = FUN_1447e4184(param_1,0,uVar2 ^ 1);
    return uVar3 ^ 1;
  }
  return 0;
}



// FUNCTION 147bc0c9e FUN_147bc0c9e body=52 status=ok
// SIG undefined FUN_147bc0c9e(void)

ulonglong FUN_147bc0c9e(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = FUN_147bae720(*(undefined8 *)(param_1 + 0x40),6);
  if (cVar1 == '\0') {
    uVar2 = FUN_147bae720(*(undefined8 *)(param_1 + 0x40),7);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 147bc0e3a FUN_147bc0e3a body=42 status=ok
// SIG undefined FUN_147bc0e3a(void)

undefined8 FUN_147bc0e3a(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x4c0))();
  (**(code **)(*plVar1 + 0x4d0))(plVar1,param_2);
  return param_2;
}



// FUNCTION 147bc0e72 FUN_147bc0e72 body=30 status=ok
// SIG undefined FUN_147bc0e72(void)

undefined8 FUN_147bc0e72(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x40) + 0x4e0))();
  return param_2;
}



// FUNCTION 147bc0e9c FUN_147bc0e9c body=790 status=ok
// SIG undefined FUN_147bc0e9c(void)

uint FUN_147bc0e9c(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined *puVar5;
  longlong *plVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  bVar1 = *(byte *)(*(longlong *)(param_1 + 0x40) + 0x128);
  cVar2 = FUN_14473b0f0();
  if (cVar2 == '\x01' && bVar1 < 6) {
    plVar6 = *(longlong **)(param_1 + 0x40);
    if ((int)param_2 != 0x12) {
      local_48 = 0;
      uStack_40 = 0;
      lVar4 = (**(code **)(*plVar6 + 0x2d0))();
      uVar3 = (uint)((*(ulonglong *)(lVar4 + 0x468) >> (param_2 & 0x3f) & 1) != 0);
      goto switchD_147bc0f50_caseD_2;
    }
LAB_147bc0ee0:
    local_38 = 0;
    uStack_30 = 0;
    if (*(code **)(*plVar6 + 0x2d0) == (code *)&LAB_14470b6e8) {
      puVar5 = &DAT_14caea5a0;
      if ((undefined *)plVar6[0x18] != (undefined *)0x0) {
        puVar5 = (undefined *)plVar6[0x18];
      }
    }
    else {
      puVar5 = (undefined *)(**(code **)(*plVar6 + 0x2d0))(plVar6,&local_38);
    }
    uVar3 = *(uint *)(puVar5 + 0x468) >> 0x12;
    goto LAB_147bc0f1d;
  }
  uVar3 = 0;
  switch(param_2 & 0xffffffff) {
  case 0:
  case 1:
    plVar6 = *(longlong **)(param_1 + 0x40);
    local_38 = 0;
    uStack_30 = 0;
    if (*(code **)(*plVar6 + 0x2d0) == (code *)&LAB_14470b6e8) {
      puVar5 = &DAT_14caea5a0;
      if ((undefined *)plVar6[0x18] != (undefined *)0x0) {
        puVar5 = (undefined *)plVar6[0x18];
      }
    }
    else {
      puVar5 = (undefined *)(**(code **)(*plVar6 + 0x2d0))(plVar6,&local_38);
    }
    uVar3 = (byte)puVar5[0x468] & 0xffffff01;
    break;
  case 5:
    plVar6 = *(longlong **)(param_1 + 0x40);
    local_38 = 0;
    uStack_30 = 0;
    if (*(code **)(*plVar6 + 0x2d0) == (code *)&LAB_14470b6e8) {
      puVar5 = &DAT_14caea5a0;
      if ((undefined *)plVar6[0x18] != (undefined *)0x0) {
        puVar5 = (undefined *)plVar6[0x18];
      }
    }
    else {
      puVar5 = (undefined *)(**(code **)(*plVar6 + 0x2d0))(plVar6,&local_38);
    }
    uVar3 = (*(uint *)(puVar5 + 0x468) & 0x20) >> 5;
    break;
  case 6:
    plVar6 = *(longlong **)(param_1 + 0x40);
    local_38 = 0;
    uStack_30 = 0;
    if (*(code **)(*plVar6 + 0x2d0) == (code *)&LAB_14470b6e8) {
      puVar5 = &DAT_14caea5a0;
      if ((undefined *)plVar6[0x18] != (undefined *)0x0) {
        puVar5 = (undefined *)plVar6[0x18];
      }
    }
    else {
      puVar5 = (undefined *)(**(code **)(*plVar6 + 0x2d0))(plVar6,&local_38);
    }
    uVar3 = (*(uint *)(puVar5 + 0x468) & 0x40) >> 6;
    break;
  case 7:
    plVar6 = *(longlong **)(param_1 + 0x40);
    local_38 = 0;
    uStack_30 = 0;
    if (*(code **)(*plVar6 + 0x2d0) == (code *)&LAB_14470b6e8) {
      puVar5 = &DAT_14caea5a0;
      if ((undefined *)plVar6[0x18] != (undefined *)0x0) {
        puVar5 = (undefined *)plVar6[0x18];
      }
    }
    else {
      puVar5 = (undefined *)(**(code **)(*plVar6 + 0x2d0))(plVar6,&local_38);
    }
    uVar3 = (uint)((byte)puVar5[0x468] >> 7);
    break;
  case 8:
    plVar6 = *(longlong **)(param_1 + 0x40);
    local_38 = 0;
    uStack_30 = 0;
    if (*(code **)(*plVar6 + 0x2d0) == (code *)&LAB_14470b6e8) {
      puVar5 = &DAT_14caea5a0;
      if ((undefined *)plVar6[0x18] != (undefined *)0x0) {
        puVar5 = (undefined *)plVar6[0x18];
      }
    }
    else {
      puVar5 = (undefined *)(**(code **)(*plVar6 + 0x2d0))(plVar6,&local_38);
    }
    uVar3 = *(uint *)(puVar5 + 0x468) >> 8;
    goto LAB_147bc0f1d;
  case 9:
    local_38 = 0;
    uStack_30 = 0;
    lVar4 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x2d0))();
    uVar3 = *(uint *)(lVar4 + 0x468) >> 9;
    goto LAB_147bc0f1d;
  case 10:
    plVar6 = *(longlong **)(param_1 + 0x40);
    local_38 = 0;
    uStack_30 = 0;
    if (*(code **)(*plVar6 + 0x2d0) == (code *)&LAB_14470b6e8) {
      puVar5 = &DAT_14caea5a0;
      if ((undefined *)plVar6[0x18] != (undefined *)0x0) {
        puVar5 = (undefined *)plVar6[0x18];
      }
    }
    else {
      puVar5 = (undefined *)(**(code **)(*plVar6 + 0x2d0))(plVar6,&local_38);
    }
    uVar3 = *(uint *)(puVar5 + 0x468) >> 10;
LAB_147bc0f1d:
    uVar3 = uVar3 & 1;
    break;
  case 0x12:
    plVar6 = *(longlong **)(param_1 + 0x40);
    goto LAB_147bc0ee0;
  }
switchD_147bc0f50_caseD_2:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bc11f8 FUN_147bc11f8 body=62 status=ok
// SIG undefined FUN_147bc11f8(void)

undefined8 * FUN_147bc11f8(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x40);
    *param_2 = 0;
    param_2[1] = 0;
    if (lVar1 == 0) {
      return param_2;
    }
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
  }
  FUN_1401031ac(lVar1,0,param_2);
  return param_2;
}



// FUNCTION 147bc1236 FUN_147bc1236 body=375 status=ok
// SIG undefined FUN_147bc1236(void)

void FUN_147bc1236(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_e8 [40];
  longlong *local_c0;
  undefined4 local_b8;
  uint uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  uint local_a8;
  int iStack_a4;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  uint local_88;
  int iStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78 [2];
  undefined1 local_68 [16];
  undefined8 local_58;
  int local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_58 = 0;
  local_50 = 0;
  local_78[0] = 0;
  local_78[1] = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  local_c0 = *(longlong **)(param_1 + 0x10);
  FUN_147bc6e74(local_78,&local_98);
  uStack_90 = local_68;
  local_98 = 0x100000000;
  local_88 = 0xffffffff;
  iStack_84 = 0;
  uStack_80 = 0;
  if (local_50 != 0) {
    FUN_1449c0562(&local_98);
  }
  uStack_a0 = CONCAT44(uStack_7c,uStack_80);
  local_a8 = local_88;
  iStack_a4 = iStack_84;
  local_b8 = (undefined4)local_98;
  uStack_b4 = local_98._4_4_;
  uStack_b0 = (undefined4)uStack_90;
  uStack_ac = uStack_90._4_4_;
  local_c0 = local_78;
  if (iStack_84 < *(int *)(uStack_90 + 0x18)) {
    do {
      lVar1 = *(longlong *)(*local_c0 + (longlong)iStack_a4 * 0x10);
      if (lVar1 != 0) {
        FUN_14484255c(param_2,*(undefined4 *)(lVar1 + 0x30));
        if (*(longlong **)(lVar1 + 8) != (longlong *)0x0) {
          uVar2 = (**(code **)(**(longlong **)(lVar1 + 8) + 0x60))();
          FUN_14484255c(param_2,uVar2);
        }
      }
      local_a8 = local_a8 & ~uStack_b4;
      FUN_1449c0562(&local_b8);
    } while (iStack_a4 < *(int *)(CONCAT44(uStack_ac,uStack_b0) + 0x18));
  }
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_147bc6de6(local_78);
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bc13b0 FUN_147bc13b0 body=713 status=ok
// SIG undefined FUN_147bc13b0(void)

undefined8 FUN_147bc13b0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined2 *puVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  undefined2 *puVar15;
  int iVar16;
  undefined1 auStack_b8 [32];
  uint local_98;
  uint local_90;
  uint local_88;
  uint local_80;
  uint local_78;
  uint local_70;
  undefined2 local_6a;
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar7 = (**(code **)(*param_1 + 0x270))();
  uVar9 = FUN_14356b258(uVar7);
  FUN_140056680(&local_58,uVar9);
  puVar11 = &DAT_149dfb77a;
  if (local_50 != 0) {
    puVar11 = local_58;
  }
  (**(code **)(*param_1 + 0x288))(param_1,&local_6a);
  FUN_147bbf2d8(&local_68,local_6a);
  puVar15 = &DAT_149dfb77a;
  if (local_60 != 0) {
    puVar15 = local_68;
  }
  FUN_140002266(param_2,L"LightingModel=%s, BlendMode=%s, ",puVar15,puVar11);
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  cVar1 = (**(code **)(*param_1 + 0x380))(param_1);
  uVar10 = 1;
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x388))(param_1);
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*param_1 + 0x3e0))(param_1);
      if (cVar1 == '\0') {
        bVar2 = (**(code **)(*param_1 + 0x468))(param_1);
        uVar10 = (uint)bVar2;
      }
    }
  }
  uVar8 = (**(code **)(*param_1 + 0x178))(param_1);
  iVar16 = 0;
  bVar2 = FUN_1447e4184(param_1,0,uVar8 ^ 1);
  local_70 = (uint)bVar2;
  bVar2 = (**(code **)(*param_1 + 0x2b0))(param_1);
  bVar3 = (**(code **)(*param_1 + 600))(param_1);
  bVar4 = (**(code **)(*param_1 + 0x68))(param_1);
  uVar5 = (**(code **)(*param_1 + 0x38))(param_1);
  uVar6 = (**(code **)(*param_1 + 0x110))(param_1);
  local_80 = local_70;
  local_88 = (uint)bVar2;
  local_90 = (uint)bVar3;
  local_98 = (uint)bVar4;
  local_78 = uVar10;
  FUN_140002266(&local_58,
                L"SpecialEngine=%d, TwoSided=%d, TSNormal=%d, Masked=%d, Distorted=%d, WritesEveryPixel=%d, ModifiesMeshPosition=%d, Usage={"
                ,uVar6,uVar5);
  iVar12 = local_50 + -1;
  if (local_50 == 0) {
    iVar12 = iVar16;
  }
  FUN_1400020e8(param_2,local_58,iVar12);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  bVar14 = true;
  iVar12 = 0;
  do {
    cVar1 = FUN_144b24bae(param_1[8],iVar12);
    if (cVar1 != '\0') {
      if (!bVar14) {
        FUN_140056680(&local_58,&DAT_149e06196);
        iVar13 = local_50 + -1;
        if (local_50 == 0) {
          iVar13 = iVar16;
        }
        FUN_1400020e8(param_2,local_58,iVar13);
        if (local_58 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      FUN_1463e9c6c(param_1[8],&local_58,iVar12);
      iVar13 = local_50 + -1;
      if (local_50 == 0) {
        iVar13 = iVar16;
      }
      FUN_1400020e8(param_2,local_58,iVar13);
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      bVar14 = false;
    }
    iVar12 = iVar12 + 1;
  } while (iVar12 != 0x15);
  FUN_140056680(&local_58,&DAT_149e061a6);
  iVar12 = local_50 + -1;
  if (local_50 == 0) {
    iVar12 = 0;
  }
  FUN_1400020e8(param_2,local_58,iVar12);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bc167a FUN_147bc167a body=14 status=ok
// SIG undefined FUN_147bc167a(void)

void FUN_147bc167a(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 **ppuVar3;
  byte bVar4;
  ushort uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  wchar_t *pwVar13;
  undefined2 *puVar14;
  longlong lVar15;
  wchar_t *pwVar16;
  undefined1 auStack_1c8 [32];
  wchar_t *pwStack_1a8;
  undefined8 uStack_1a0;
  undefined2 *puStack_198;
  undefined2 *puStack_190;
  undefined2 *puStack_188;
  wchar_t *pwStack_180;
  longlong *plStack_178;
  undefined2 *puStack_170;
  undefined4 uStack_164;
  longlong lStack_160;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined2 *puStack_138;
  int iStack_130;
  undefined2 *puStack_128;
  undefined8 uStack_120;
  undefined2 *puStack_118;
  undefined8 uStack_110;
  undefined8 **ppuStack_100;
  undefined8 uStack_f8;
  undefined1 *puStack_f0;
  uint uStack_e8;
  int iStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined2 *puStack_d8;
  undefined1 *puStack_d0;
  uint uStack_c8;
  int iStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [16];
  undefined8 uStack_98;
  uint uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  longlong lStack_78;
  undefined4 uStack_70;
  ulonglong uStack_60;
  
  plVar8 = *(longlong **)(param_1 + 0x10);
  if (plVar8 == (longlong *)0x0) {
    return;
  }
  uStack_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  uStack_164 = DAT_14c868800;
  puVar12 = (undefined2 *)0x0;
  DAT_14c868800 = 0;
  uStack_158 = param_2;
  FUN_1468161aa(param_2,
                L"Frequency, Target, VFType, ShaderType, SourceHash, VFSourceHash, OutputHash, IsShaderPipeline"
               );
  uStack_98 = 0;
  uStack_90 = 0;
  puStack_b8 = (undefined8 *)0x0;
  uStack_b0 = 0;
  uStack_8c = 0xffffffff00000080;
  uStack_84 = 0;
  lStack_78 = 0;
  uStack_70 = 0;
  plStack_178 = plVar8;
  FUN_147bbf458(plVar8);
  puStack_d0 = auStack_a8;
  puStack_d8 = (undefined2 *)0x100000000;
  uStack_c8 = 0xffffffff;
  iStack_c4 = 0;
  uStack_c0 = 0;
  if (uStack_90 != 0) {
    FUN_1449c0562(&puStack_d8);
    puVar12 = (undefined2 *)(ulonglong)uStack_90;
  }
  uStack_e8 = uStack_c8;
  iStack_e4 = iStack_c4;
  uStack_e0 = uStack_c0;
  uStack_dc = uStack_bc;
  uStack_f8 = puStack_d8;
  puStack_f0 = puStack_d0;
  ppuStack_100 = &puStack_b8;
  if ((iStack_c4 != (int)puVar12) || (puStack_d0 != auStack_a8)) {
    puStack_170 = puVar12;
    do {
      lVar15 = (*ppuStack_100)[(longlong)iStack_e4 * 10 + 7];
      plVar8 = (longlong *)
               ((longlong)(int)(*(ulonglong *)(lVar15 + 200) >> 1) * 8 +
               *(longlong *)(plStack_178[3] + 0x58));
      if ((*(ulonglong *)(lVar15 + 200) & 1) == 0) {
        plVar8 = (longlong *)(lVar15 + 200);
      }
      lVar2 = *plVar8;
      uVar6 = FUN_1474337de(lVar15);
      puStack_d8 = (undefined2 *)0x0;
      puStack_d0 = (undefined1 *)0x0;
      FUN_1407c8a86(uVar6,0x14,&puStack_d8);
      puVar12 = &DAT_149dfb77a;
      if ((int)puStack_d0 != 0) {
        puVar12 = puStack_d8;
      }
      uVar6 = FUN_147433842(lVar15);
      puStack_118 = (undefined2 *)0x0;
      uStack_110 = 0;
      FUN_1407c8a86(uVar6,0x14,&puStack_118);
      puVar10 = &DAT_149dfb77a;
      if ((int)uStack_110 != 0) {
        puVar10 = puStack_118;
      }
      uVar6 = FUN_14743383a(lVar15);
      puStack_128 = (undefined2 *)0x0;
      uStack_120 = 0;
      FUN_1407c8a86(uVar6,0x14,&puStack_128);
      puVar11 = &DAT_149dfb77a;
      if ((int)uStack_120 != 0) {
        puVar11 = puStack_128;
      }
      plVar8 = (longlong *)
               ((longlong)(int)(*(ulonglong *)(lVar15 + 0xc0) >> 1) * 8 +
               *(longlong *)(plStack_178[3] + 0x28));
      if ((*(ulonglong *)(lVar15 + 0xc0) & 1) == 0) {
        plVar8 = (longlong *)(lVar15 + 0xc0);
      }
      uVar6 = *(undefined8 *)(*plVar8 + 0x18);
      pwVar16 = L"null";
      if (lVar2 != 0) {
        pwVar16 = *(wchar_t **)(lVar2 + 8);
      }
      if (plStack_178[5] == 0) {
        uVar5 = 0x9b;
      }
      else {
        uVar5 = FUN_144a8876a();
      }
      uStack_140 = *(undefined8 *)(&DAT_14ca814bc + (ulonglong)uVar5 * 0x3c);
      FUN_1400021e4(&uStack_140,&puStack_138);
      puVar14 = &DAT_149dfb77a;
      if (iStack_130 != 0) {
        puVar14 = puStack_138;
      }
      bVar4 = *(byte *)(lVar15 + 0xd0) & 0xf;
      pwVar13 = L"SF_NumFrequencies";
      if (bVar4 < 0xc) {
        pwVar13 = (wchar_t *)(&PTR_u_SF_Vertex_14a9dcd88)[bVar4];
      }
      pwStack_180 = L"false";
      pwStack_1a8 = pwVar16;
      uStack_1a0 = uVar6;
      puStack_198 = puVar11;
      puStack_190 = puVar10;
      puStack_188 = puVar12;
      FUN_140047918(uStack_158,L"%s, %s, %s, %s, %s, %s, %s, %s",pwVar13,puVar14);
      if (puStack_138 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      puVar12 = puStack_170;
      if (puStack_128 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (puStack_118 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (puStack_d8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      uStack_e8 = uStack_e8 & ~uStack_f8._4_4_;
      FUN_1449c0562(&uStack_f8);
    } while (ppuStack_100 != &puStack_b8 || (puStack_f0 != auStack_a8 || iStack_e4 != (int)puVar12))
    ;
  }
  uStack_70 = 0;
  if (lStack_78 != 0) {
    FUN_1400020a8();
  }
  FUN_147bc2466(&puStack_b8);
  puStack_b8 = (undefined8 *)0x0;
  uStack_b0 = 0;
  (**(code **)(*plStack_178 + 0x10))(plStack_178,&puStack_b8);
  if ((longlong)(int)uStack_b0 != 0) {
    puVar9 = puStack_b8 + (longlong)(int)uStack_b0 * 2;
    puVar7 = puStack_b8;
    puStack_150 = puVar9;
    do {
      puStack_148 = puVar7;
      FUN_14743dae2(*puVar7,&ppuStack_100,plStack_178);
      ppuVar3 = ppuStack_100;
      if ((longlong)(int)uStack_f8 != 0) {
        lStack_160 = (longlong)(int)uStack_f8 << 4;
        lVar15 = 0;
        do {
          uVar1 = *(ulonglong *)(*(longlong *)((longlong)ppuVar3 + lVar15) + 200);
          plVar8 = (longlong *)
                   ((longlong)(int)(uVar1 >> 1) * 8 + *(longlong *)(plStack_178[3] + 0x58));
          if ((uVar1 & 1) == 0) {
            plVar8 = (longlong *)(*(longlong *)((longlong)ppuVar3 + lVar15) + 200);
          }
          lVar2 = *plVar8;
          uVar6 = FUN_1474337de();
          puStack_d8 = (undefined2 *)0x0;
          puStack_d0 = (undefined1 *)0x0;
          FUN_1407c8a86(uVar6,0x14,&puStack_d8);
          puStack_170 = &DAT_149dfb77a;
          if ((int)puStack_d0 != 0) {
            puStack_170 = puStack_d8;
          }
          uVar6 = FUN_147433842(*(undefined8 *)((longlong)ppuVar3 + lVar15));
          puStack_118 = (undefined2 *)0x0;
          uStack_110 = 0;
          FUN_1407c8a86(uVar6,0x14,&puStack_118);
          puVar12 = &DAT_149dfb77a;
          if ((int)uStack_110 != 0) {
            puVar12 = puStack_118;
          }
          uVar6 = FUN_14743383a(*(undefined8 *)((longlong)ppuVar3 + lVar15));
          puStack_128 = (undefined2 *)0x0;
          uStack_120 = 0;
          FUN_1407c8a86(uVar6,0x14,&puStack_128);
          puVar10 = &DAT_149dfb77a;
          if ((int)uStack_120 != 0) {
            puVar10 = puStack_128;
          }
          uVar1 = *(ulonglong *)(*(longlong *)((longlong)ppuVar3 + lVar15) + 0xc0);
          plVar8 = (longlong *)
                   ((longlong)(int)(uVar1 >> 1) * 8 + *(longlong *)(plStack_178[3] + 0x28));
          if ((uVar1 & 1) == 0) {
            plVar8 = (longlong *)(*(longlong *)((longlong)ppuVar3 + lVar15) + 0xc0);
          }
          uVar6 = *(undefined8 *)(*plVar8 + 0x18);
          pwVar16 = L"null";
          if (lVar2 != 0) {
            pwVar16 = *(wchar_t **)(lVar2 + 8);
          }
          if (plStack_178[5] == 0) {
            uVar5 = 0x9b;
          }
          else {
            uVar5 = FUN_144a8876a();
          }
          lVar2 = lStack_160;
          uStack_140 = *(undefined8 *)(&DAT_14ca814bc + (ulonglong)uVar5 * 0x3c);
          FUN_1400021e4(&uStack_140,&puStack_138);
          puVar11 = &DAT_149dfb77a;
          if (iStack_130 != 0) {
            puVar11 = puStack_138;
          }
          bVar4 = *(byte *)(*(longlong *)((longlong)ppuVar3 + lVar15) + 0xd0) & 0xf;
          pwVar13 = L"SF_NumFrequencies";
          if (bVar4 < 0xc) {
            pwVar13 = (wchar_t *)(&PTR_u_SF_Vertex_14a9dcd88)[bVar4];
          }
          pwStack_180 = L"true";
          puStack_188 = puStack_170;
          pwStack_1a8 = pwVar16;
          uStack_1a0 = uVar6;
          puStack_198 = puVar10;
          puStack_190 = puVar12;
          FUN_140047918(uStack_158,L"%s, %s, %s, %s, %s, %s, %s, %s",pwVar13,puVar11);
          if (puStack_138 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (puStack_128 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (puStack_118 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (puStack_d8 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          lVar15 = lVar15 + 0x10;
          puVar9 = puStack_150;
        } while (lVar2 != lVar15);
      }
      if (ppuStack_100 != (undefined8 **)0x0) {
        FUN_1400020a8(ppuStack_100);
      }
      puVar7 = puStack_148 + 2;
    } while (puVar7 != puVar9);
  }
  if (puStack_b8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  DAT_14c868800 = uStack_164;
  if ((uStack_60 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147bc1688 FUN_147bc1688 body=94 status=ok
// SIG undefined FUN_147bc1688(void)

void FUN_147bc1688(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_147bc78f0(param_1,iVar2);
  }
  FUN_147bc78d9((longlong)iVar2 * 8 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 147bc16e6 FUN_147bc16e6 body=126 status=ok
// SIG undefined FUN_147bc16e6(void)

longlong * FUN_147bc16e6(longlong *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  uVar2 = FUN_1411eefea();
  FUN_14123d74c(uVar2,param_1,param_3,param_2,uVar1 | param_4 | 0x90000000);
  lVar3 = (longlong)(int)param_1[2];
  do {
    lVar3 = lVar3 + 1;
    *(int *)(param_1 + 2) = (int)lVar3;
    if ((int)param_1[1] <= lVar3) {
      return param_1;
    }
  } while (*(longlong *)(*param_1 + lVar3 * 8) == 0);
  return param_1;
}



// FUNCTION 147bc17a8 FUN_147bc17a8 body=34 status=ok
// SIG undefined FUN_147bc17a8(void)

longlong FUN_147bc17a8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x28))();
  return lVar1 - *(longlong *)(param_1 + 0xb0);
}



// FUNCTION 147bc17ca FUN_147bc17ca body=156 status=ok
// SIG undefined FUN_147bc17ca(void)

undefined8 FUN_147bc17ca(undefined8 *param_1,ulonglong *param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar5 = *param_2;
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == '\0') {
    uVar4 = *(uint *)((longlong)param_1 + 0xc);
    if ((int)param_2[1] <= (int)uVar4 || (int)uVar4 < 0) {
      return 0;
    }
    uVar4 = *(uint *)(uVar5 + (ulonglong)uVar4 * 4);
    if (uVar4 == 0xffffffff) {
      return 0;
    }
    *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_1 + 1);
    *param_3 = *param_1;
  }
  else {
    if (cVar1 != '\x01') {
      if (cVar1 != '\x02') {
        return 0;
      }
      uVar3 = param_1[1];
      *param_3 = *param_1;
      param_3[1] = uVar3;
      goto LAB_147bc17ed;
    }
    iVar2 = *(int *)((longlong)param_1 + 0xc);
    if ((int)param_2[1] <= iVar2 + 1 || iVar2 < -1) {
      return 0;
    }
    iVar2 = *(int *)(uVar5 + 4 + (longlong)iVar2 * 4);
    if (iVar2 == -1) {
      return 0;
    }
    *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_1 + 1);
    *param_3 = *param_1;
    uVar4 = iVar2 - 1;
  }
  uVar5 = (ulonglong)uVar4;
  *(uint *)((longlong)param_3 + 0xc) = uVar4;
LAB_147bc17ed:
  return CONCAT71((int7)(uVar5 >> 8),1);
}



// FUNCTION 147bc1874 FUN_147bc1874 body=45 status=ok
// SIG undefined FUN_147bc1874(void)

longlong FUN_147bc1874(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1401fc27a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bc18a2 FUN_147bc18a2 body=45 status=ok
// SIG undefined FUN_147bc18a2(void)

longlong FUN_147bc18a2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_1401fc27a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bc18d4 FUN_147bc18d4 body=45 status=ok
// SIG undefined FUN_147bc18d4(void)

longlong FUN_147bc18d4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1401fc1e4(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bc1902 FUN_147bc1902 body=45 status=ok
// SIG undefined FUN_147bc1902(void)

longlong FUN_147bc1902(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_1401fc1e4(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bc1930 FUN_147bc1930 body=42 status=ok
// SIG undefined FUN_147bc1930(void)

undefined8 FUN_147bc1930(void)

{
  FUN_140033559("Runtime\\Engine\\Public\\Materials/MaterialInterface.h",0x1b3,
                L"Pure virtual not implemented (%s)",L"UMaterialInterface::GetMaterial");
  return 0;
}



// FUNCTION 147bc195a FUN_147bc195a body=42 status=ok
// SIG undefined FUN_147bc195a(void)

undefined8 FUN_147bc195a(void)

{
  FUN_140033559("Runtime\\Engine\\Public\\Materials/MaterialInterface.h",0x1ae,
                L"Pure virtual not implemented (%s)",L"UMaterialInterface::GetMaterial");
  return 0;
}



// FUNCTION 147bc1984 FUN_147bc1984 body=42 status=ok
// SIG undefined FUN_147bc1984(void)

undefined8 FUN_147bc1984(void)

{
  FUN_140033559("Runtime\\Engine\\Public\\Materials/MaterialInterface.h",0x1b8,
                L"Pure virtual not implemented (%s)",L"UMaterialInterface::GetMaterial_Concurrent");
  return 0;
}



// FUNCTION 147bc19ae FUN_147bc19ae body=41 status=ok
// SIG undefined FUN_147bc19ae(void)

void FUN_147bc19ae(void)

{
  FUN_140033559("Runtime\\Engine\\Public\\Materials/MaterialInterface.h",0x1ba,
                L"Pure virtual not implemented (%s)",
                L"UMaterialInterface::GetMaterialInheritanceChain");
  return;
}



// FUNCTION 147bc19d8 FUN_147bc19d8 body=41 status=ok
// SIG undefined FUN_147bc19d8(void)

void FUN_147bc19d8(void)

{
  FUN_140033559("Runtime\\Engine\\Public\\Materials/MaterialInterface.h",0x1d9,
                L"Pure virtual not implemented (%s)",L"UMaterialInterface::GetDependencies");
  return;
}



// FUNCTION 147bc1a02 FUN_147bc1a02 body=42 status=ok
// SIG undefined FUN_147bc1a02(void)

undefined8 FUN_147bc1a02(void)

{
  FUN_140033559("Runtime\\Engine\\Public\\Materials/MaterialInterface.h",0x1e1,
                L"Pure virtual not implemented (%s)",L"UMaterialInterface::GetRenderProxy");
  return 0;
}



// FUNCTION 147bc1a2c FUN_147bc1a2c body=42 status=ok
// SIG undefined FUN_147bc1a2c(void)

undefined8 FUN_147bc1a2c(void)

{
  FUN_140033559("Runtime\\Engine\\Public\\Materials/MaterialInterface.h",0x1e8,
                L"Pure virtual not implemented (%s)",L"UMaterialInterface::GetPhysicalMaterial");
  return 0;
}



// FUNCTION 147bc1a56 FUN_147bc1a56 body=42 status=ok
// SIG undefined FUN_147bc1a56(void)

undefined8 FUN_147bc1a56(void)

{
  FUN_140033559("Runtime\\Engine\\Public\\Materials/MaterialInterface.h",0x1ef,
                L"Pure virtual not implemented (%s)",L"UMaterialInterface::GetPhysicalMaterialMask")
  ;
  return 0;
}



// FUNCTION 147bc1a80 FUN_147bc1a80 body=42 status=ok
// SIG undefined FUN_147bc1a80(void)

undefined8 FUN_147bc1a80(void)

{
  FUN_140033559("Runtime\\Engine\\Public\\Materials/MaterialInterface.h",0x1f6,
                L"Pure virtual not implemented (%s)",
                L"UMaterialInterface::GetPhysicalMaterialFromMap");
  return 0;
}



// FUNCTION 147bc1aaa FUN_147bc1aaa body=41 status=ok
// SIG undefined FUN_147bc1aaa(void)

void FUN_147bc1aaa(void)

{
  FUN_140033559("Runtime\\Engine\\Public\\Materials/MaterialInterface.h",0x207,
                L"Pure virtual not implemented (%s)",L"UMaterialInterface::GetUsedTextures");
  return;
}



// FUNCTION 147bc1ad4 FUN_147bc1ad4 body=41 status=ok
// SIG undefined FUN_147bc1ad4(void)

void FUN_147bc1ad4(void)

{
  FUN_140033559("Runtime\\Engine\\Public\\Materials/MaterialInterface.h",0x216,
                L"Pure virtual not implemented (%s)",L"UMaterialInterface::OverrideTexture");
  return;
}



// FUNCTION 147bc1afe FUN_147bc1afe body=41 status=ok
// SIG undefined FUN_147bc1afe(void)

void FUN_147bc1afe(void)

{
  FUN_140033559("Runtime\\Engine\\Public\\Materials/MaterialInterface.h",0x21d,
                L"Pure virtual not implemented (%s)",
                L"UMaterialInterface::OverrideNumericParameterDefault");
  return;
}



// FUNCTION 147bc1b28 FUN_147bc1b28 body=42 status=ok
// SIG undefined FUN_147bc1b28(void)

undefined8 FUN_147bc1b28(void)

{
  FUN_140033559("Runtime\\Engine\\Public\\Materials/MaterialInterface.h",0x22e,
                L"Pure virtual not implemented (%s)",L"UMaterialInterface::CheckMaterialUsage");
  return 0;
}



// FUNCTION 147bc1b52 FUN_147bc1b52 body=42 status=ok
// SIG undefined FUN_147bc1b52(void)

undefined8 FUN_147bc1b52(void)

{
  FUN_140033559("Runtime\\Engine\\Public\\Materials/MaterialInterface.h",0x232,
                L"Pure virtual not implemented (%s)",L"UMaterialInterface::CheckMaterialUsage");
  return 0;
}



// FUNCTION 147bc1b84 FUN_147bc1b84 body=42 status=ok
// SIG undefined FUN_147bc1b84(void)

undefined8 FUN_147bc1b84(void)

{
  FUN_140033559("Runtime\\Engine\\Public\\Materials/MaterialInterface.h",0x244,
                L"Pure virtual not implemented (%s)",L"UMaterialInterface::GetMaterialLayers");
  return 0;
}



// FUNCTION 147bc1bae FUN_147bc1bae body=42 status=ok
// SIG undefined FUN_147bc1bae(void)

undefined8 FUN_147bc1bae(void)

{
  FUN_140033559("Runtime\\Engine\\Public\\Materials/MaterialInterface.h",0x24a,
                L"Pure virtual not implemented (%s)",L"UMaterialInterface::GetNaniteOverride");
  return 0;
}



// FUNCTION 147bc1bf2 FUN_147bc1bf2 body=41 status=ok
// SIG undefined FUN_147bc1bf2(void)

void FUN_147bc1bf2(void)

{
  FUN_140033559("Runtime\\Engine\\Public\\Materials/MaterialInterface.h",0x2c9,
                L"Pure virtual not implemented (%s)",
                L"UMaterialInterface::SaveShaderStableKeysInner");
  return;
}



// FUNCTION 147bc1c2e FUN_147bc1c2e body=45 status=ok
// SIG undefined FUN_147bc1c2e(void)

longlong FUN_147bc1c2e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1401fc5a0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bc1c5c FUN_147bc1c5c body=45 status=ok
// SIG undefined FUN_147bc1c5c(void)

longlong FUN_147bc1c5c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_1401fc5a0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bc1c94 FUN_147bc1c94 body=38 status=ok
// SIG undefined FUN_147bc1c94(void)

undefined8 FUN_147bc1c94(undefined8 param_1,int param_2)

{
  FUN_140430b1a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bc1cba FUN_147bc1cba body=38 status=ok
// SIG undefined FUN_147bc1cba(void)

undefined8 FUN_147bc1cba(undefined8 param_1,int param_2)

{
  FUN_1402d41c0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bc1ce0 FUN_147bc1ce0 body=38 status=ok
// SIG undefined FUN_147bc1ce0(void)

undefined8 FUN_147bc1ce0(undefined8 param_1,int param_2)

{
  FUN_1417e15fa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bc1d06 FUN_147bc1d06 body=32 status=ok
// SIG undefined FUN_147bc1d06(void)

undefined8 FUN_147bc1d06(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FMaterialResourceProxyReader");
  return param_2;
}



// FUNCTION 147bc1db8 FUN_147bc1db8 body=59 status=ok
// SIG undefined FUN_147bc1db8(void)

undefined8 FUN_147bc1db8(longlong *param_1)

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



// FUNCTION 147bc1dfe FUN_147bc1dfe body=38 status=ok
// SIG undefined FUN_147bc1dfe(void)

void FUN_147bc1dfe(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    if (*(longlong *)(param_2 + 0x28) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 147bc1f0e FUN_147bc1f0e body=59 status=ok
// SIG undefined FUN_147bc1f0e(void)

undefined8 FUN_147bc1f0e(longlong *param_1)

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



// FUNCTION 147bc1fb0 FUN_147bc1fb0 body=116 status=ok
// SIG undefined FUN_147bc1fb0(void)

void FUN_147bc1fb0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  CoCreateGuid((GUID *)(param_2 + 1));
  *(undefined4 *)(param_2 + 3) = 0;
  FUN_1446f470e(&local_20,L"Scalar",1);
  *param_2 = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bc208c FUN_147bc208c body=59 status=ok
// SIG undefined FUN_147bc208c(void)

undefined8 FUN_147bc208c(longlong *param_1)

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



// FUNCTION 147bc2122 FUN_147bc2122 body=123 status=ok
// SIG undefined FUN_147bc2122(void)

void FUN_147bc2122(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  CoCreateGuid((GUID *)(param_2 + 1));
  param_2[3] = 0;
  param_2[4] = 0;
  FUN_1446f470e(&local_38,L"Vector",1);
  *param_2 = local_38;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bc220e FUN_147bc220e body=59 status=ok
// SIG undefined FUN_147bc220e(void)

undefined8 FUN_147bc220e(longlong *param_1)

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



// FUNCTION 147bc22a4 FUN_147bc22a4 body=38 status=ok
// SIG undefined FUN_147bc22a4(void)

undefined8 FUN_147bc22a4(undefined8 param_1,int param_2)

{
  FUN_144afd1ae();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bc22ca FUN_147bc22ca body=31 status=ok
// SIG undefined FUN_147bc22ca(void)

undefined8 FUN_147bc22ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bc230c FUN_147bc230c body=93 status=ok
// SIG undefined FUN_147bc230c(void)

void FUN_147bc230c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a9da930;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9da8c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147bc236a FUN_147bc236a body=93 status=ok
// SIG undefined FUN_147bc236a(void)

void FUN_147bc236a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a9da930;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9da8c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147bc23c8 FUN_147bc23c8 body=126 status=ok
// SIG undefined FUN_147bc23c8(void)

void FUN_147bc23c8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a9da930;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a9da8c0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147bc2437. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147bc2450 FUN_147bc2450 body=20 status=ok
// SIG undefined FUN_147bc2450(void)

undefined8 FUN_147bc2450(longlong param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x18))(param_2);
  return 1;
}



// FUNCTION 147bc2466 FUN_147bc2466 body=54 status=ok
// SIG undefined FUN_147bc2466(void)

void FUN_147bc2466(longlong *param_1)

{
  FUN_147bc249c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147bc249c FUN_147bc249c body=128 status=ok
// SIG undefined FUN_147bc249c(void)

void FUN_147bc249c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140e9549c(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 147bc2598 FUN_147bc2598 body=31 status=ok
// SIG undefined FUN_147bc2598(void)

undefined8
FUN_147bc2598(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_147bc2734(param_2,param_1,param_4);
  return 0x10;
}



// FUNCTION 147bc25e0 FUN_147bc25e0 body=51 status=ok
// SIG undefined FUN_147bc25e0(void)

void FUN_147bc25e0(ulonglong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if ((param_4 == '\0') && (*param_1 != 0 && (*param_1 & 1) == 0)) {
    FUN_1400020a8();
  }
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 147bc2614 FUN_147bc2614 body=234 status=ok
// SIG undefined FUN_147bc2614(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147bc2614(longlong param_1,undefined8 param_2)

{
  if ((DAT_14caf13df & 2) == 0) {
    DAT_14caf13df = DAT_14caf13df | 3;
    _DAT_14caf1380 = L"FGuid";
    _DAT_14caf1398 = &LAB_147bc26fe;
    _DAT_14caf13a0 = &LAB_147bc270a;
    _DAT_14caf13a8 = &LAB_147bc2718;
    _DAT_14caf13b0 = &LAB_147bc271e;
    _DAT_14caf13b8 = &LAB_147bc2722;
    _DAT_14caf1390 = &LAB_147bc2728;
    _DAT_14caf13d0 = 0x1000000010;
    _DAT_14caf13d8 = 4;
    DAT_14caf13dc = 0;
  }
  FUN_1467ac78e(param_1,param_2,&DAT_14caf1378,*(undefined4 *)(param_1 + 8),0);
  FUN_146826a6c(param_2,param_1 + 8,4);
  FUN_146826a6c(param_2,param_1 + 8,4);
  return;
}



// FUNCTION 147bc2734 FUN_147bc2734 body=245 status=ok
// SIG undefined FUN_147bc2734(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147bc2734(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  *param_3 = 0;
  param_3[1] = 0;
  FUN_147bc282a(param_3,*(undefined4 *)(param_1 + 8));
  uVar1 = *param_3;
  if ((DAT_14caf13df & 2) == 0) {
    DAT_14caf13df = DAT_14caf13df | 3;
    _DAT_14caf1380 = L"FGuid";
    _DAT_14caf1398 = &LAB_147bc26fe;
    _DAT_14caf13a0 = &LAB_147bc270a;
    _DAT_14caf13a8 = &LAB_147bc2718;
    _DAT_14caf13b0 = &LAB_147bc271e;
    _DAT_14caf13b8 = &LAB_147bc2722;
    _DAT_14caf1390 = &LAB_147bc2728;
    _DAT_14caf13d0 = 0x1000000010;
    _DAT_14caf13d8 = 4;
    DAT_14caf13dc = 0;
  }
  uVar2 = (longlong)param_3 + ((longlong)uVar1 >> 0x18);
  if ((uVar1 & 1) == 0) {
    uVar2 = uVar1;
  }
  FUN_1467ac844(param_1,param_2,&DAT_14caf1378,*(undefined4 *)(param_1 + 8),uVar2);
  return;
}



// FUNCTION 147bc282a FUN_147bc282a body=59 status=ok
// SIG undefined FUN_147bc282a(void)

void FUN_147bc282a(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (param_2 - iVar1 != 0 && iVar1 <= param_2) {
    FUN_147bc2866(param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 8) = param_2;
    FUN_147bc294a();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147bc2866 FUN_147bc2866 body=93 status=ok
// SIG undefined FUN_147bc2866(void)

void FUN_147bc2866(ulonglong *param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_147bc28c4(param_1);
  }
  uVar2 = *param_1;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_1;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  memset((void *)((longlong)iVar1 * 0x10 + uVar3),0,(longlong)(int)param_2 << 4);
  return;
}



// FUNCTION 147bc28c4 FUN_147bc28c4 body=132 status=ok
// SIG undefined FUN_147bc28c4(void)

void FUN_147bc28c4(longlong param_1,int param_2)

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
    FUN_144a7f90c(param_1,param_2,uVar5,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147bc294a FUN_147bc294a body=62 status=ok
// SIG undefined FUN_147bc294a(void)

void FUN_147bc294a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147bc2988(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,4);
  }
  return;
}



// FUNCTION 147bc2988 FUN_147bc2988 body=93 status=ok
// SIG undefined FUN_147bc2988(void)

ulonglong FUN_147bc2988(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,4);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 147bc29e6 FUN_147bc29e6 body=203 status=ok
// SIG undefined FUN_147bc29e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147bc29e6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if ((DAT_14caf13df & 2) == 0) {
    DAT_14caf13df = DAT_14caf13df | 3;
    _DAT_14caf1380 = L"FGuid";
    _DAT_14caf1398 = &LAB_147bc26fe;
    _DAT_14caf13a0 = &LAB_147bc270a;
    _DAT_14caf13a8 = &LAB_147bc2718;
    _DAT_14caf13b0 = &LAB_147bc271e;
    _DAT_14caf13b8 = &LAB_147bc2722;
    _DAT_14caf1390 = &LAB_147bc2728;
    _DAT_14caf13d0 = 0x1000000010;
    _DAT_14caf13d8 = 4;
    DAT_14caf13dc = 0;
  }
  FUN_1467ac8f2(param_1,&DAT_14caf1378,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                param_2,param_3);
  return;
}



// FUNCTION 147bc2ac0 FUN_147bc2ac0 body=31 status=ok
// SIG undefined FUN_147bc2ac0(void)

undefined8
FUN_147bc2ac0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_147bc2bdc(param_2,param_1,param_4);
  return 0x10;
}



// FUNCTION 147bc2afc FUN_147bc2afc body=74 status=ok
// SIG undefined FUN_147bc2afc(void)

void FUN_147bc2afc(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  FUN_146120c6e();
  FUN_1467ac8f2(param_1,&DAT_14caefc20,uVar1,uVar2,param_3,param_4);
  return;
}



// FUNCTION 147bc2b46 FUN_147bc2b46 body=51 status=ok
// SIG undefined FUN_147bc2b46(void)

void FUN_147bc2b46(ulonglong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if ((param_4 == '\0') && (*param_1 != 0 && (*param_1 & 1) == 0)) {
    FUN_1400020a8();
  }
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 147bc2b7a FUN_147bc2b7a body=97 status=ok
// SIG undefined FUN_147bc2b7a(void)

void FUN_147bc2b7a(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  FUN_146120c6e();
  FUN_1467ac78e(param_1,param_2,&DAT_14caefc20,uVar1,0);
  FUN_146826a6c(param_2,param_1 + 8,4);
  FUN_146826a6c(param_2,param_1 + 8,4);
  return;
}



// FUNCTION 147bc2bdc FUN_147bc2bdc body=100 status=ok
// SIG undefined FUN_147bc2bdc(void)

void FUN_147bc2bdc(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  *param_3 = 0;
  param_3[1] = 0;
  FUN_147bc2c40(param_3,*(undefined4 *)(param_1 + 8));
  uVar2 = *param_3;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_3;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  uVar1 = *(undefined4 *)(param_1 + 8);
  FUN_146120c6e();
  FUN_1467ac844(param_1,param_2,&DAT_14caefc20,uVar1,uVar3);
  return;
}



// FUNCTION 147bc2c40 FUN_147bc2c40 body=59 status=ok
// SIG undefined FUN_147bc2c40(void)

void FUN_147bc2c40(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (param_2 - iVar1 != 0 && iVar1 <= param_2) {
    FUN_147bc2c7c(param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 8) = param_2;
    FUN_147bc2d70();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147bc2c7c FUN_147bc2c7c body=95 status=ok
// SIG undefined FUN_147bc2c7c(void)

void FUN_147bc2c7c(ulonglong *param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_147bc2cdc(param_1);
  }
  uVar2 = *param_1;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_1;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  memset((void *)(uVar3 + (longlong)iVar1 * 0x28),0,(longlong)(int)param_2 * 0x28);
  return;
}



// FUNCTION 147bc2cdc FUN_147bc2cdc body=147 status=ok
// SIG undefined FUN_147bc2cdc(void)

void FUN_147bc2cdc(longlong param_1,int param_2)

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
    FUN_144a7f90c(param_1,param_2,uVar5,0x28,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147bc2d70 FUN_147bc2d70 body=62 status=ok
// SIG undefined FUN_147bc2d70(void)

void FUN_147bc2d70(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147bc2dae(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x28,4);
  }
  return;
}



// FUNCTION 147bc2dae FUN_147bc2dae body=112 status=ok
// SIG undefined FUN_147bc2dae(void)

ulonglong FUN_147bc2dae(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x28) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147bc2de8;
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
LAB_147bc2de8:
  return param_2 & 0xffffffff;
}



// FUNCTION 147bc2e2c FUN_147bc2e2c body=31 status=ok
// SIG undefined FUN_147bc2e2c(void)

undefined8
FUN_147bc2e2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_147bc2f48(param_2,param_1,param_4);
  return 0x10;
}



// FUNCTION 147bc2e68 FUN_147bc2e68 body=74 status=ok
// SIG undefined FUN_147bc2e68(void)

void FUN_147bc2e68(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  FUN_1460796fc();
  FUN_1467ac8f2(param_1,&DAT_14caefb40,uVar1,uVar2,param_3,param_4);
  return;
}



// FUNCTION 147bc2eb2 FUN_147bc2eb2 body=51 status=ok
// SIG undefined FUN_147bc2eb2(void)

void FUN_147bc2eb2(ulonglong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if ((param_4 == '\0') && (*param_1 != 0 && (*param_1 & 1) == 0)) {
    FUN_1400020a8();
  }
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 147bc2ee6 FUN_147bc2ee6 body=97 status=ok
// SIG undefined FUN_147bc2ee6(void)

void FUN_147bc2ee6(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  FUN_1460796fc();
  FUN_1467ac78e(param_1,param_2,&DAT_14caefb40,uVar1,0);
  FUN_146826a6c(param_2,param_1 + 8,4);
  FUN_146826a6c(param_2,param_1 + 8,4);
  return;
}



// FUNCTION 147bc2f48 FUN_147bc2f48 body=100 status=ok
// SIG undefined FUN_147bc2f48(void)

void FUN_147bc2f48(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  *param_3 = 0;
  param_3[1] = 0;
  FUN_147bc2fac(param_3,*(undefined4 *)(param_1 + 8));
  uVar2 = *param_3;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_3;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  uVar1 = *(undefined4 *)(param_1 + 8);
  FUN_1460796fc();
  FUN_1467ac844(param_1,param_2,&DAT_14caefb40,uVar1,uVar3);
  return;
}



// FUNCTION 147bc2fac FUN_147bc2fac body=59 status=ok
// SIG undefined FUN_147bc2fac(void)

void FUN_147bc2fac(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (param_2 - iVar1 != 0 && iVar1 <= param_2) {
    FUN_147bc2fe8(param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 8) = param_2;
    FUN_147bc30dc();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147bc2fe8 FUN_147bc2fe8 body=95 status=ok
// SIG undefined FUN_147bc2fe8(void)

void FUN_147bc2fe8(ulonglong *param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_147bc3048(param_1);
  }
  uVar2 = *param_1;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_1;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  memset((void *)(uVar3 + (longlong)iVar1 * 0x18),0,(longlong)(int)param_2 * 0x18);
  return;
}



// FUNCTION 147bc3048 FUN_147bc3048 body=147 status=ok
// SIG undefined FUN_147bc3048(void)

void FUN_147bc3048(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_144a7f90c(param_1,param_2,uVar5,0x18,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147bc30dc FUN_147bc30dc body=62 status=ok
// SIG undefined FUN_147bc30dc(void)

void FUN_147bc30dc(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147bc311a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,4);
  }
  return;
}



// FUNCTION 147bc311a FUN_147bc311a body=112 status=ok
// SIG undefined FUN_147bc311a(void)

ulonglong FUN_147bc311a(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147bc3154;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x18,4);
      param_2 = param_2 / 0x18;
    }
  }
LAB_147bc3154:
  return param_2 & 0xffffffff;
}



// FUNCTION 147bc3198 FUN_147bc3198 body=31 status=ok
// SIG undefined FUN_147bc3198(void)

undefined8
FUN_147bc3198(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_147bc32b4(param_2,param_1,param_4);
  return 0x10;
}



// FUNCTION 147bc31d4 FUN_147bc31d4 body=74 status=ok
// SIG undefined FUN_147bc31d4(void)

void FUN_147bc31d4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  FUN_14611fa4e();
  FUN_1467ac8f2(param_1,&DAT_14caefbb0,uVar1,uVar2,param_3,param_4);
  return;
}



// FUNCTION 147bc321e FUN_147bc321e body=51 status=ok
// SIG undefined FUN_147bc321e(void)

void FUN_147bc321e(ulonglong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if ((param_4 == '\0') && (*param_1 != 0 && (*param_1 & 1) == 0)) {
    FUN_1400020a8();
  }
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 147bc3252 FUN_147bc3252 body=97 status=ok
// SIG undefined FUN_147bc3252(void)

void FUN_147bc3252(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  FUN_14611fa4e();
  FUN_1467ac78e(param_1,param_2,&DAT_14caefbb0,uVar1,0);
  FUN_146826a6c(param_2,param_1 + 8,4);
  FUN_146826a6c(param_2,param_1 + 8,4);
  return;
}



// FUNCTION 147bc32b4 FUN_147bc32b4 body=100 status=ok
// SIG undefined FUN_147bc32b4(void)

void FUN_147bc32b4(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  *param_3 = 0;
  param_3[1] = 0;
  FUN_147bc3318(param_3,*(undefined4 *)(param_1 + 8));
  uVar2 = *param_3;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_3;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  uVar1 = *(undefined4 *)(param_1 + 8);
  FUN_14611fa4e();
  FUN_1467ac844(param_1,param_2,&DAT_14caefbb0,uVar1,uVar3);
  return;
}



// FUNCTION 147bc3318 FUN_147bc3318 body=59 status=ok
// SIG undefined FUN_147bc3318(void)

void FUN_147bc3318(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (param_2 - iVar1 != 0 && iVar1 <= param_2) {
    FUN_147bc3354(param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 8) = param_2;
    FUN_147bc3438();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147bc3354 FUN_147bc3354 body=93 status=ok
// SIG undefined FUN_147bc3354(void)

void FUN_147bc3354(ulonglong *param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_147bc33b2(param_1);
  }
  uVar2 = *param_1;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_1;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  memset((void *)((longlong)iVar1 * 0x20 + uVar3),0,(longlong)(int)param_2 << 5);
  return;
}



// FUNCTION 147bc33b2 FUN_147bc33b2 body=132 status=ok
// SIG undefined FUN_147bc33b2(void)

void FUN_147bc33b2(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_144a7f90c(param_1,param_2,uVar5,0x20,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147bc3438 FUN_147bc3438 body=62 status=ok
// SIG undefined FUN_147bc3438(void)

void FUN_147bc3438(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147bc3476(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,4);
  }
  return;
}



// FUNCTION 147bc3476 FUN_147bc3476 body=93 status=ok
// SIG undefined FUN_147bc3476(void)

ulonglong FUN_147bc3476(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x7fffffffffffe00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 5,4);
      uVar1 = uVar1 >> 5;
    }
  }
  return uVar1;
}



// FUNCTION 147bc34e2 FUN_147bc34e2 body=31 status=ok
// SIG undefined FUN_147bc34e2(void)

undefined8
FUN_147bc34e2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_147bc35fe(param_2,param_1,param_4);
  return 0x10;
}



// FUNCTION 147bc351e FUN_147bc351e body=74 status=ok
// SIG undefined FUN_147bc351e(void)

void FUN_147bc351e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  FUN_1460669fe();
  FUN_1467ac8f2(param_1,&DAT_14caefad0,uVar1,uVar2,param_3,param_4);
  return;
}



// FUNCTION 147bc3568 FUN_147bc3568 body=51 status=ok
// SIG undefined FUN_147bc3568(void)

void FUN_147bc3568(ulonglong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if ((param_4 == '\0') && (*param_1 != 0 && (*param_1 & 1) == 0)) {
    FUN_1400020a8();
  }
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 147bc359c FUN_147bc359c body=97 status=ok
// SIG undefined FUN_147bc359c(void)

void FUN_147bc359c(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  FUN_1460669fe();
  FUN_1467ac78e(param_1,param_2,&DAT_14caefad0,uVar1,0);
  FUN_146826a6c(param_2,param_1 + 8,4);
  FUN_146826a6c(param_2,param_1 + 8,4);
  return;
}



// FUNCTION 147bc35fe FUN_147bc35fe body=100 status=ok
// SIG undefined FUN_147bc35fe(void)

void FUN_147bc35fe(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  *param_3 = 0;
  param_3[1] = 0;
  FUN_147bc3662(param_3,*(undefined4 *)(param_1 + 8));
  uVar2 = *param_3;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_3;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  uVar1 = *(undefined4 *)(param_1 + 8);
  FUN_1460669fe();
  FUN_1467ac844(param_1,param_2,&DAT_14caefad0,uVar1,uVar3);
  return;
}



// FUNCTION 147bc3662 FUN_147bc3662 body=59 status=ok
// SIG undefined FUN_147bc3662(void)

void FUN_147bc3662(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (param_2 - iVar1 != 0 && iVar1 <= param_2) {
    FUN_147bc369e(param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 8) = param_2;
    FUN_147bc37a4();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147bc369e FUN_147bc369e body=104 status=ok
// SIG undefined FUN_147bc369e(void)

void FUN_147bc369e(ulonglong *param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_147bc3706(param_1,iVar1);
  }
  uVar2 = *param_1;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_1;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  memset((void *)((longlong)iVar1 * 0x1c + uVar3),0,(longlong)(int)param_2 * 0x1c);
  return;
}



// FUNCTION 147bc3706 FUN_147bc3706 body=157 status=ok
// SIG undefined FUN_147bc3706(void)

void FUN_147bc3706(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x1c,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x1c)) {
      uVar5 = uVar4 / 0x1c & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_144a7f90c(param_1,param_2,uVar5,0x1c,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147bc37a4 FUN_147bc37a4 body=62 status=ok
// SIG undefined FUN_147bc37a4(void)

void FUN_147bc37a4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147bc37e2(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x1c,4);
  }
  return;
}



// FUNCTION 147bc37e2 FUN_147bc37e2 body=121 status=ok
// SIG undefined FUN_147bc37e2(void)

ulonglong FUN_147bc37e2(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x1c) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147bc381f;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x1c,4);
      param_2 = param_2 / 0x1c;
    }
  }
LAB_147bc381f:
  return param_2 & 0xffffffff;
}



// FUNCTION 147bc386a FUN_147bc386a body=31 status=ok
// SIG undefined FUN_147bc386a(void)

undefined8
FUN_147bc386a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_147bc3986(param_2,param_1,param_4);
  return 0x10;
}



// FUNCTION 147bc38a6 FUN_147bc38a6 body=74 status=ok
// SIG undefined FUN_147bc38a6(void)

void FUN_147bc38a6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  FUN_145eeba4c();
  FUN_1467ac8f2(param_1,&DAT_14caefa60,uVar1,uVar2,param_3,param_4);
  return;
}



// FUNCTION 147bc38f0 FUN_147bc38f0 body=51 status=ok
// SIG undefined FUN_147bc38f0(void)

void FUN_147bc38f0(ulonglong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if ((param_4 == '\0') && (*param_1 != 0 && (*param_1 & 1) == 0)) {
    FUN_1400020a8();
  }
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 147bc3924 FUN_147bc3924 body=97 status=ok
// SIG undefined FUN_147bc3924(void)

void FUN_147bc3924(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  FUN_145eeba4c();
  FUN_1467ac78e(param_1,param_2,&DAT_14caefa60,uVar1,0);
  FUN_146826a6c(param_2,param_1 + 8,4);
  FUN_146826a6c(param_2,param_1 + 8,4);
  return;
}



// FUNCTION 147bc3986 FUN_147bc3986 body=100 status=ok
// SIG undefined FUN_147bc3986(void)

void FUN_147bc3986(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  *param_3 = 0;
  param_3[1] = 0;
  FUN_147bc39ea(param_3,*(undefined4 *)(param_1 + 8));
  uVar2 = *param_3;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_3;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  uVar1 = *(undefined4 *)(param_1 + 8);
  FUN_145eeba4c();
  FUN_1467ac844(param_1,param_2,&DAT_14caefa60,uVar1,uVar3);
  return;
}



// FUNCTION 147bc39ea FUN_147bc39ea body=59 status=ok
// SIG undefined FUN_147bc39ea(void)

void FUN_147bc39ea(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (param_2 - iVar1 != 0 && iVar1 <= param_2) {
    FUN_147bc3a26(param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 8) = param_2;
    FUN_147bc3b2c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147bc3a26 FUN_147bc3a26 body=104 status=ok
// SIG undefined FUN_147bc3a26(void)

void FUN_147bc3a26(ulonglong *param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_147bc3a8e(param_1,iVar1);
  }
  uVar2 = *param_1;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_1;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  memset((void *)((longlong)iVar1 * 0x1c + uVar3),0,(longlong)(int)param_2 * 0x1c);
  return;
}



// FUNCTION 147bc3a8e FUN_147bc3a8e body=157 status=ok
// SIG undefined FUN_147bc3a8e(void)

void FUN_147bc3a8e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x1c,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x1c)) {
      uVar5 = uVar4 / 0x1c & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_144a7f90c(param_1,param_2,uVar5,0x1c,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147bc3b2c FUN_147bc3b2c body=62 status=ok
// SIG undefined FUN_147bc3b2c(void)

void FUN_147bc3b2c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147bc3b6a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x1c,4);
  }
  return;
}



// FUNCTION 147bc3b6a FUN_147bc3b6a body=121 status=ok
// SIG undefined FUN_147bc3b6a(void)

ulonglong FUN_147bc3b6a(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x1c) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147bc3ba7;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x1c,4);
      param_2 = param_2 / 0x1c;
    }
  }
LAB_147bc3ba7:
  return param_2 & 0xffffffff;
}


