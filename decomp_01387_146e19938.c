// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146e19938 FUN_146e19938 body=54 status=ok
// SIG undefined FUN_146e19938(void)

void FUN_146e19938(longlong *param_1)

{
  FUN_146e1996e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146e1996e FUN_146e1996e body=128 status=ok
// SIG undefined FUN_146e1996e(void)

void FUN_146e1996e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14074f60a(param_1,param_2);
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



// FUNCTION 146e199f0 FUN_146e199f0 body=110 status=ok
// SIG undefined FUN_146e199f0(void)

void FUN_146e199f0(longlong param_1,uint param_2)

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
  if (*(int *)(param_1 + 0x48) < iVar3 && 0 < (int)param_2 || iVar3 < *(int *)(param_1 + 0x48)) {
    FUN_146e1996e(param_1,param_2);
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_146e191b2(param_1);
    return;
  }
  FUN_146e19a5e(param_1);
  FUN_146e1996e(param_1,param_2);
  return;
}



// FUNCTION 146e19a5e FUN_146e19a5e body=329 status=ok
// SIG undefined FUN_146e19a5e(void)

void FUN_146e19a5e(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x84 + (longlong)iVar4 * 0x90) * 4) =
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



// FUNCTION 146e19ba8 FUN_146e19ba8 body=68 status=ok
// SIG undefined FUN_146e19ba8(void)

void FUN_146e19ba8(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_146e19a5e();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_14074f60a(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 146e19bec FUN_146e19bec body=113 status=ok
// SIG undefined FUN_146e19bec(void)

void FUN_146e19bec(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x30)) {
      uVar2 = uVar1 / 0x30 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x30,4);
  }
  return;
}



// FUNCTION 146e19c5d FUN_146e19c5d body=38 status=ok
// SIG undefined FUN_146e19c5d(void)

void FUN_146e19c5d(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146e19c84(param_1);
    param_1 = param_1 + 0x68;
  }
  return;
}



// FUNCTION 146e19c84 FUN_146e19c84 body=85 status=ok
// SIG undefined FUN_146e19c84(void)

void FUN_146e19c84(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0x58;
  do {
    if (*(longlong *)(param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0x38);
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  lVar1 = 0x30;
  do {
    if (*(longlong *)(param_1 + -8 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 146e19cda FUN_146e19cda body=109 status=ok
// SIG undefined FUN_146e19cda(void)

void FUN_146e19cda(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x68,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x68)) {
      uVar2 = uVar1 / 0x68 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x68,8);
  }
  return;
}



// FUNCTION 146e19d48 FUN_146e19d48 body=59 status=ok
// SIG undefined FUN_146e19d48(void)

longlong FUN_146e19d48(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146e1a554(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x68 + *param_1;
  FUN_146e1a52e(lVar2);
  return lVar2;
}



// FUNCTION 146e19d84 FUN_146e19d84 body=423 status=ok
// SIG undefined FUN_146e19d84(void)

void FUN_146e19d84(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar8 = param_2 - iVar1;
  if (uVar8 != 0 && iVar1 <= (int)param_2) {
    uVar6 = (ulonglong)param_2;
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_146e1a100(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_146e1a160(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar6 * 0x40 + lVar2 + -0x3c);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x40) = iVar9 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar6 = uVar6 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar9 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -0x10;
      } while ((longlong)iVar11 < (longlong)uVar6);
    }
    if (iVar1 == 0) {
      plVar7 = param_1 + 2;
      *(uint *)(param_1 + 5) = uVar8;
      uVar12 = uVar8 + 0x1f >> 5;
      if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
        FUN_14499171c(plVar7,0,uVar12,4);
        *(uint *)((longlong)param_1 + 0x2c) = uVar8 + 0x1f & 0xffffffe0;
      }
      _Dst = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        _Dst = plVar7;
      }
      if (uVar8 < 0x101) {
        uVar12 = uVar12 + (uVar12 == 0);
      }
      memset(_Dst,0,(ulonglong)(uVar12 << 2));
      iVar1 = (int)param_1[5];
      iVar10 = iVar1 + 0x1f;
      if (-1 < iVar1) {
        iVar10 = iVar1;
      }
      if (iVar1 % 0x20 != 0) {
        if ((longlong *)param_1[4] != (longlong *)0x0) {
          plVar7 = (longlong *)param_1[4];
        }
        bVar4 = -(char)(iVar1 % 0x20);
        *(uint *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    else if (-1 < (int)uVar8) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar8);
      FUN_1447c6044(param_1 + 2,uVar3,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 146e19f2c FUN_146e19f2c body=466 status=ok
// SIG undefined FUN_146e19f2c(void)

void FUN_146e19f2c(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x40;
        uVar10 = *(ulonglong *)(lVar3 + lVar7);
        uVar10 = (longlong)
                 (int)(((uint)(uVar10 >> 2) & 0x3fffffff) +
                       (uint)uVar10 * 0x40 + (int)(uVar10 >> 0x20) + 0x9e3779b9 ^ (uint)uVar10) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x3c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x38 + lVar7) =
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



// FUNCTION 146e1a100 FUN_146e1a100 body=96 status=ok
// SIG undefined FUN_146e1a100(void)

void FUN_146e1a100(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 6,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 6)) {
      uVar2 = uVar1 >> 6 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x40,4);
  }
  return;
}



// FUNCTION 146e1a160 FUN_146e1a160 body=132 status=ok
// SIG undefined FUN_146e1a160(void)

void FUN_146e1a160(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146e1a1e6 FUN_146e1a1e6 body=335 status=ok
// SIG undefined FUN_146e1a1e6(void)

undefined4 * FUN_146e1a1e6(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
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
  undefined4 uVar13;
  char cVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  longlong lVar18;
  uint uVar19;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146e1a336(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  uVar6 = puVar1[4];
  uVar7 = puVar1[5];
  uVar8 = puVar1[6];
  uVar9 = puVar1[7];
  uVar10 = puVar1[8];
  uVar11 = puVar1[9];
  uVar12 = puVar1[10];
  uVar13 = puVar1[0xb];
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = uVar3;
  *(undefined4 *)(local_40 + 2) = uVar4;
  *(undefined4 *)((longlong)local_40 + 0x14) = uVar5;
  *(undefined4 *)(local_40 + 3) = uVar6;
  *(undefined4 *)((longlong)local_40 + 0x1c) = uVar7;
  *(undefined4 *)(local_40 + 4) = uVar8;
  *(undefined4 *)((longlong)local_40 + 0x24) = uVar9;
  *(undefined4 *)(local_40 + 5) = uVar10;
  *(undefined4 *)((longlong)local_40 + 0x2c) = uVar11;
  *(undefined4 *)(local_40 + 6) = uVar12;
  *(undefined4 *)((longlong)local_40 + 0x34) = uVar13;
  *(undefined4 *)(local_40 + 7) = 0xffffffff;
  local_4c = local_48[0];
  uVar19 = (uint)uVar2;
  uVar19 = (uVar19 >> 2) + uVar19 * 0x40 + (int)((ulonglong)uVar2 >> 0x20) + 0x9e3779b9 ^ uVar19;
  cVar14 = FUN_146e1a41e(param_1,uVar19,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar14 == '\0') {
    uVar15 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar17 = 1;
    if (3 < uVar15) {
      uVar16 = (ulonglong)(uVar15 & 0xfffffffe) + 0xf;
      lVar18 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      iVar17 = 1 << ((byte)lVar18 & 0x1f);
    }
    if (((int)uVar15 < 1) || (iVar17 <= *(int *)(param_1 + 0x48))) {
      uVar19 = *(int *)(param_1 + 0x48) - 1U & uVar19;
      *(uint *)((longlong)local_40 + 0x3c) = uVar19;
      lVar18 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar18 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 7) =
           *(undefined4 *)
            (lVar18 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar19) * 4);
      lVar18 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar18 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar18 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar19) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar17;
      FUN_146e19f2c(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e1a336 FUN_146e1a336 body=231 status=ok
// SIG undefined FUN_146e1a336(void)

int * FUN_146e1a336(longlong *param_1,int *param_2)

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



// FUNCTION 146e1a41e FUN_146e1a41e body=157 status=ok
// SIG undefined FUN_146e1a41e(void)

undefined8 FUN_146e1a41e(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  int iVar15;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar14 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[8];
    }
    iVar15 = *(int *)((longlong)plVar14 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar15 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar15 * 0x40);
        if (*(longlong *)(*param_1 + (longlong)iVar15 * 0x40) == *param_3) {
          lVar8 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar9 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          lVar10 = param_3[2];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar11 = param_3[3];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
          lVar12 = param_3[4];
          uVar6 = *(undefined4 *)((longlong)param_3 + 0x24);
          lVar13 = param_3[5];
          uVar7 = *(undefined4 *)((longlong)param_3 + 0x2c);
          *(longlong *)(puVar1 + 0xc) = param_3[6];
          puVar1[8] = (int)lVar12;
          puVar1[9] = uVar6;
          puVar1[10] = (int)lVar13;
          puVar1[0xb] = uVar7;
          puVar1[4] = (int)lVar10;
          puVar1[5] = uVar4;
          puVar1[6] = (int)lVar11;
          puVar1[7] = uVar5;
          *puVar1 = (int)lVar8;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar9;
          puVar1[3] = uVar3;
          FUN_146e1a4bc((int)lVar8,*param_4);
          *param_4 = iVar15;
          return 1;
        }
        iVar15 = puVar1[0xe];
      } while (iVar15 != -1);
    }
  }
  return 0;
}



// FUNCTION 146e1a4bc FUN_146e1a4bc body=114 status=ok
// SIG undefined FUN_146e1a4bc(void)

void FUN_146e1a4bc(longlong *param_1,int param_2)

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



// FUNCTION 146e1a52e FUN_146e1a52e body=37 status=ok
// SIG undefined FUN_146e1a52e(void)

void FUN_146e1a52e(undefined2 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}



// FUNCTION 146e1a554 FUN_146e1a554 body=143 status=ok
// SIG undefined FUN_146e1a554(void)

void FUN_146e1a554(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x68,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x68)) {
      uVar5 = uVar4 / 0x68 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x68,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146e1a5e4 FUN_146e1a5e4 body=118 status=ok
// SIG undefined FUN_146e1a5e4(void)

void FUN_146e1a5e4(longlong *param_1,int *param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  uVar2 = (uint)param_3;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    ((uVar2 >> 2) + uVar2 * 0x40 + (int)((ulonglong)param_3 >> 0x20) + 0x9e3779b9 ^
                    uVar2)) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x40) == param_3) goto LAB_146e1a5f4;
        iVar1 = *(int *)((longlong)iVar1 * 0x40 + *param_1 + 0x38);
      } while (iVar1 != -1);
    }
  }
  iVar1 = -1;
LAB_146e1a5f4:
  *param_2 = iVar1;
  return;
}



// FUNCTION 146e1a65a FUN_146e1a65a body=90 status=ok
// SIG undefined FUN_146e1a65a(void)

void FUN_146e1a65a(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x3c + (longlong)param_2 * 0x40);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x38 + lVar5 * 0x40);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x40 + 0x38);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x40 + 0x38);
  FUN_146e1a4bc();
  return;
}



// FUNCTION 146e1a6b4 FUN_146e1a6b4 body=147 status=ok
// SIG undefined FUN_146e1a6b4(void)

void FUN_146e1a6b4(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146e1a748 FUN_146e1a748 body=132 status=ok
// SIG undefined FUN_146e1a748(void)

void FUN_146e1a748(longlong param_1,int param_2)

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



// FUNCTION 146e1a7ce FUN_146e1a7ce body=132 status=ok
// SIG undefined FUN_146e1a7ce(void)

void FUN_146e1a7ce(longlong param_1,int param_2)

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



// FUNCTION 146e1a854 FUN_146e1a854 body=147 status=ok
// SIG undefined FUN_146e1a854(void)

void FUN_146e1a854(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x14,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x14)) {
      uVar5 = uVar4 / 0x14 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x14,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146e1a8e8 FUN_146e1a8e8 body=52 status=ok
// SIG undefined FUN_146e1a8e8(void)

void FUN_146e1a8e8(longlong *param_1)

{
  FUN_146e1a91c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146e1a91c FUN_146e1a91c body=91 status=ok
// SIG undefined FUN_146e1a91c(void)

void FUN_146e1a91c(longlong param_1)

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



// FUNCTION 146e1a978 FUN_146e1a978 body=403 status=ok
// SIG undefined FUN_146e1a978(void)

void FUN_146e1a978(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar8 = param_2 - iVar1;
  if (uVar8 != 0 && iVar1 <= (int)param_2) {
    uVar6 = (ulonglong)param_2;
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_144727cd0(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_14482b872(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar6 * 0x18 + -0x14);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = iVar9 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar6 = uVar6 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar9 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -6;
      } while ((longlong)iVar11 < (longlong)uVar6);
    }
    if (iVar1 == 0) {
      plVar7 = param_1 + 2;
      *(uint *)(param_1 + 5) = uVar8;
      uVar12 = uVar8 + 0x1f >> 5;
      if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
        FUN_14499171c(plVar7,0,uVar12,4);
        *(uint *)((longlong)param_1 + 0x2c) = uVar8 + 0x1f & 0xffffffe0;
      }
      _Dst = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        _Dst = plVar7;
      }
      if (uVar8 < 0x101) {
        uVar12 = uVar12 + (uVar12 == 0);
      }
      memset(_Dst,0,(ulonglong)(uVar12 << 2));
      iVar1 = (int)param_1[5];
      iVar10 = iVar1 + 0x1f;
      if (-1 < iVar1) {
        iVar10 = iVar1;
      }
      if (iVar1 % 0x20 != 0) {
        if ((longlong *)param_1[4] != (longlong *)0x0) {
          plVar7 = (longlong *)param_1[4];
        }
        bVar4 = -(char)(iVar1 % 0x20);
        *(uint *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    else if (-1 < (int)uVar8) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar8);
      FUN_1447c6044(param_1 + 2,uVar3,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 146e1ab0c FUN_146e1ab0c body=419 status=ok
// SIG undefined FUN_146e1ab0c(void)

void FUN_146e1ab0c(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x18);
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



// FUNCTION 146e1acb0 FUN_146e1acb0 body=247 status=ok
// SIG undefined FUN_146e1acb0(void)

undefined4 * FUN_146e1acb0(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38 [2];
  uint *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146e1ada8(param_1,local_38);
  puVar1 = (undefined8 *)param_3[1];
  uVar3 = *(uint *)*param_3;
  *local_30 = uVar3;
  *(undefined8 *)(local_30 + 2) = *puVar1;
  local_30[4] = 0xffffffff;
  uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar6 = 1;
  if (3 < uVar5) {
    uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
    lVar2 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    iVar6 = 1 << ((byte)lVar2 & 0x1f);
  }
  if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
    uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
    local_30[5] = uVar3;
    lVar2 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar2 = param_1 + 0x38;
    }
    local_30[4] = *(uint *)(lVar2 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3)
                                    * 4);
    lVar2 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar2 = param_1 + 0x38;
    }
    *(undefined4 *)(lVar2 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4) =
         local_38[0];
  }
  else {
    *(int *)(param_1 + 0x48) = iVar6;
    FUN_146e1ab0c(param_1);
  }
  *param_2 = local_38[0];
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e1ada8 FUN_146e1ada8 body=230 status=ok
// SIG undefined FUN_146e1ada8(void)

int * FUN_146e1ada8(longlong *param_1,int *param_2)

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



// FUNCTION 146e1ae8e FUN_146e1ae8e body=110 status=ok
// SIG undefined FUN_146e1ae8e(void)

void FUN_146e1ae8e(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146e1b9bc(param_1);
    }
    memset((void *)((longlong)iVar1 + *param_1),0,(longlong)(param_2 - iVar1));
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_146e1ba3a(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146e1aefe FUN_146e1aefe body=681 status=ok
// SIG undefined FUN_146e1aefe(void)

void FUN_146e1aefe(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  longlong *local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
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
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_14481578e(param_2,0);
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  uVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar5 != 0) {
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar5);
    }
    FUN_1400bac10(&local_98,uVar5);
    iVar2 = 1;
    if (3 < uVar5) {
      uVar5 = (uVar5 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if ((local_50 == 0) || (local_50 < iVar2)) {
      local_50 = iVar2;
      FUN_144a56d22();
    }
  }
  local_b0 = param_1 + 2;
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_b8);
  }
  local_c8 = local_a8;
  iStack_c4 = iStack_a4;
  local_c0 = local_a0;
  local_bc = local_9c;
  local_d8 = local_b8;
  local_d0 = local_b0;
  local_e0 = param_1;
  if (iStack_a4 < (int)local_b0[3]) {
    do {
      lVar1 = *local_e0;
      lVar3 = (longlong)iStack_c4;
      if ((int)uStack_90 != local_64) {
        uVar5 = *(uint *)(lVar1 + lVar3 * 0x18);
        puVar4 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar4 = local_60;
        }
        for (iVar2 = *(int *)(puVar4 + (ulonglong)(local_50 - 1U & uVar5) * 4); iVar2 != -1;
            iVar2 = *(int *)(local_98 + (longlong)iVar2 * 0xc + 4)) {
          if (*(uint *)(local_98 + (longlong)iVar2 * 0xc) == uVar5) goto LAB_146e1b090;
        }
      }
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_1446f48e2(param_2,iVar2);
      }
      *(undefined4 *)(*param_2 + (longlong)iVar2 * 4) = *(undefined4 *)(lVar3 * 0x18 + lVar1);
      FUN_1447cbafe(&local_98,&local_b8,(longlong)iStack_c4 * 0x18 + *local_e0,0);
LAB_146e1b090:
      local_c8 = local_c8 & ~local_d8._4_4_;
      FUN_1449c0562(&local_d8);
    } while (iStack_c4 < (int)local_d0[3]);
  }
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_98);
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e1b1aa FUN_146e1b1aa body=68 status=ok
// SIG undefined FUN_146e1b1aa(void)

void FUN_146e1b1aa(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_146e1b1ee();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_140411364(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 146e1b1ee FUN_146e1b1ee body=329 status=ok
// SIG undefined FUN_146e1b1ee(void)

void FUN_146e1b1ee(longlong *param_1)

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



// FUNCTION 146e1b338 FUN_146e1b338 body=424 status=ok
// SIG undefined FUN_146e1b338(void)

void FUN_146e1b338(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar7 = param_2 - iVar1;
  if (uVar7 != 0 && iVar1 <= (int)param_2) {
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_140411364(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_1406245f8(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar9 * 0x1c + lVar2 + -0x18);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x1c) = iVar8 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar9 = uVar9 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar8 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -7;
      } while ((longlong)iVar11 < (longlong)uVar9);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar7;
      if (param_2 != 0) {
        plVar6 = param_1 + 2;
        uVar12 = uVar7 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar6,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar7 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar6;
        }
        if (uVar7 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar6 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar7) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar7);
      FUN_1447c6044(param_1 + 2,uVar3,uVar7,0);
      return;
    }
  }
  return;
}



// FUNCTION 146e1b4e0 FUN_146e1b4e0 body=430 status=ok
// SIG undefined FUN_146e1b4e0(void)

void FUN_146e1b4e0(longlong *param_1)

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



// FUNCTION 146e1b690 FUN_146e1b690 body=287 status=ok
// SIG undefined FUN_146e1b690(void)

undefined4 * FUN_146e1b690(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_146e1b7b0(param_1,local_48);
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
  cVar5 = FUN_146e1b8ac(param_1,uVar7,local_40,&local_4c);
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
      FUN_146e1b4e0(param_1);
    }
  }
  *param_2 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e1b7b0 FUN_146e1b7b0 body=251 status=ok
// SIG undefined FUN_146e1b7b0(void)

int * FUN_146e1b7b0(longlong *param_1,int *param_2)

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



// FUNCTION 146e1b8ac FUN_146e1b8ac body=144 status=ok
// SIG undefined FUN_146e1b8ac(void)

undefined8 FUN_146e1b8ac(longlong *param_1,uint param_2,int *param_3,int *param_4)

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
          FUN_146e1b93c(iVar2,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[5];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 146e1b93c FUN_146e1b93c body=128 status=ok
// SIG undefined FUN_146e1b93c(void)

void FUN_146e1b93c(longlong *param_1,int param_2)

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



// FUNCTION 146e1b9bc FUN_146e1b9bc body=124 status=ok
// SIG undefined FUN_146e1b9bc(void)

void FUN_146e1b9bc(longlong param_1,int param_2)

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



// FUNCTION 146e1ba3a FUN_146e1ba3a body=119 status=ok
// SIG undefined FUN_146e1ba3a(void)

void FUN_146e1ba3a(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  if (((uint)(iVar2 - iVar1) < 0x4000) && (iVar2 * 2 <= iVar1 * 3)) {
    return;
  }
  if (iVar1 == 0 || 0x40 < iVar2 - iVar1) {
    if (0 < iVar1) {
      iVar1 = FUN_144a3809e(iVar1,1);
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if (iVar1 != iVar2) {
      *(int *)(param_1 + 0xc) = iVar1;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,1,1);
    }
  }
  return;
}



// FUNCTION 146e1bab2 FUN_146e1bab2 body=52 status=ok
// SIG undefined FUN_146e1bab2(void)

void FUN_146e1bab2(longlong *param_1)

{
  FUN_146e1bae6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146e1bae6 FUN_146e1bae6 body=89 status=ok
// SIG undefined FUN_146e1bae6(void)

void FUN_146e1bae6(longlong param_1)

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



// FUNCTION 146e1bb40 FUN_146e1bb40 body=68 status=ok
// SIG undefined FUN_146e1bb40(void)

void FUN_146e1bb40(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_146e1bb84();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_144727cd0(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 146e1bb84 FUN_146e1bb84 body=322 status=ok
// SIG undefined FUN_146e1bb84(void)

void FUN_146e1bb84(longlong *param_1)

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



// FUNCTION 146e1bcc8 FUN_146e1bcc8 body=52 status=ok
// SIG undefined FUN_146e1bcc8(void)

void FUN_146e1bcc8(longlong *param_1)

{
  FUN_146e1bcfc();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146e1bcfc FUN_146e1bcfc body=89 status=ok
// SIG undefined FUN_146e1bcfc(void)

void FUN_146e1bcfc(longlong param_1)

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



// FUNCTION 146e1bd56 FUN_146e1bd56 body=110 status=ok
// SIG undefined FUN_146e1bd56(void)

void FUN_146e1bd56(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146e1bdc6(param_1);
    }
    memset((void *)((longlong)iVar1 + *param_1),0,(longlong)(param_2 - iVar1));
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_146e1be44(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146e1bdc6 FUN_146e1bdc6 body=124 status=ok
// SIG undefined FUN_146e1bdc6(void)

void FUN_146e1bdc6(longlong param_1,int param_2)

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



// FUNCTION 146e1be44 FUN_146e1be44 body=119 status=ok
// SIG undefined FUN_146e1be44(void)

void FUN_146e1be44(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  if (((uint)(iVar2 - iVar1) < 0x4000) && (iVar2 * 2 <= iVar1 * 3)) {
    return;
  }
  if (iVar1 == 0 || 0x40 < iVar2 - iVar1) {
    if (0 < iVar1) {
      iVar1 = FUN_144a3809e(iVar1,1);
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if (iVar1 != iVar2) {
      *(int *)(param_1 + 0xc) = iVar1;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,1,1);
    }
  }
  return;
}



// FUNCTION 146e1bebc FUN_146e1bebc body=405 status=ok
// SIG undefined FUN_146e1bebc(void)

void FUN_146e1bebc(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar8 = param_2 - iVar1;
  if (uVar8 != 0 && iVar1 <= (int)param_2) {
    uVar6 = (ulonglong)param_2;
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_14474875a(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_1446efaca(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar6 * 0x10 + lVar2 + -0xc);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = iVar9 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar6 = uVar6 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar9 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -4;
      } while ((longlong)iVar11 < (longlong)uVar6);
    }
    if (iVar1 == 0) {
      plVar7 = param_1 + 2;
      *(uint *)(param_1 + 5) = uVar8;
      uVar12 = uVar8 + 0x1f >> 5;
      if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
        FUN_14499171c(plVar7,0,uVar12,4);
        *(uint *)((longlong)param_1 + 0x2c) = uVar8 + 0x1f & 0xffffffe0;
      }
      _Dst = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        _Dst = plVar7;
      }
      if (uVar8 < 0x101) {
        uVar12 = uVar12 + (uVar12 == 0);
      }
      memset(_Dst,0,(ulonglong)(uVar12 << 2));
      iVar1 = (int)param_1[5];
      iVar10 = iVar1 + 0x1f;
      if (-1 < iVar1) {
        iVar10 = iVar1;
      }
      if (iVar1 % 0x20 != 0) {
        if ((longlong *)param_1[4] != (longlong *)0x0) {
          plVar7 = (longlong *)param_1[4];
        }
        bVar4 = -(char)(iVar1 % 0x20);
        *(uint *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    else if (-1 < (int)uVar8) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar8);
      FUN_1447c6044(param_1 + 2,uVar3,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 146e1c052 FUN_146e1c052 body=477 status=ok
// SIG undefined FUN_146e1c052(void)

void FUN_146e1c052(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
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
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
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
        lVar6 = (longlong)iVar4 * 0x10;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0xc + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 8 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 146e1c230 FUN_146e1c230 body=327 status=ok
// SIG undefined FUN_146e1c230(void)

undefined4 * FUN_146e1c230(longlong param_1,undefined4 *param_2,ulonglong *param_3)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146e1c378(param_1,local_48);
  uVar3 = *param_3;
  *local_40 = uVar3;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar2 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  local_58 = 0;
  cVar1 = FUN_146e1c45e(param_1,uVar2,local_40);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar2 = *(int *)(param_1 + 0x48) - 1U & uVar2;
      *(uint *)((longlong)local_40 + 0xc) = uVar2;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_146e1c052(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e1c378 FUN_146e1c378 body=229 status=ok
// SIG undefined FUN_146e1c378(void)

int * FUN_146e1c378(longlong *param_1,int *param_2)

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
      FUN_1446efaca(param_1,iVar6);
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



// FUNCTION 146e1c45e FUN_146e1c45e body=144 status=ok
// SIG undefined FUN_146e1c45e(void)

void FUN_146e1c45e(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined1 uVar1;
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
        plVar2 = (longlong *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          *plVar2 = *param_3;
          FUN_146e1c4ee(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          goto LAB_146e1c4c9;
        }
        iVar3 = (int)plVar2[1];
      } while (iVar3 != -1);
    }
  }
  uVar1 = 0;
LAB_146e1c4c9:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 146e1c4ee FUN_146e1c4ee body=138 status=ok
// SIG undefined FUN_146e1c4ee(void)

void FUN_146e1c4ee(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x10 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
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
      puVar7 = puVar7 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146e1c578 FUN_146e1c578 body=54 status=ok
// SIG undefined FUN_146e1c578(void)

void FUN_146e1c578(longlong *param_1)

{
  FUN_146e1c5ae(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146e1c5ae FUN_146e1c5ae body=128 status=ok
// SIG undefined FUN_146e1c5ae(void)

void FUN_146e1c5ae(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14474875a(param_1,param_2);
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



// FUNCTION 146e1c646 FUN_146e1c646 body=95 status=ok
// SIG undefined FUN_146e1c646(void)

void FUN_146e1c646(longlong param_1,uint param_2)

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



// FUNCTION 146e1c6a6 FUN_146e1c6a6 body=132 status=ok
// SIG undefined FUN_146e1c6a6(void)

void FUN_146e1c6a6(longlong param_1,int param_2)

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



// FUNCTION 146e1c95a FUN_146e1c95a body=2297 status=ok
// SIG undefined FUN_146e1c95a(void)

void FUN_146e1c95a(longlong *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  float *pfVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  undefined4 uVar22;
  double dVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar31;
  float fVar32;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined4 uVar39;
  uint uVar40;
  undefined1 unaff_XMM9 [16];
  undefined1 auVar41 [16];
  float fVar42;
  undefined1 auVar43 [16];
  undefined4 unaff_XMM11_Db;
  undefined4 unaff_XMM11_Dc;
  undefined4 unaff_XMM11_Dd;
  float fVar44;
  undefined4 unaff_XMM12_Db;
  undefined4 unaff_XMM12_Dc;
  undefined4 unaff_XMM12_Dd;
  float unaff_XMM13_Db;
  float unaff_XMM13_Dc;
  float unaff_XMM13_Dd;
  undefined1 unaff_XMM15 [16];
  undefined1 auVar45 [16];
  float fVar47;
  undefined1 auVar46 [16];
  undefined1 auStack_1c8 [32];
  double local_1a8;
  LPCRITICAL_SECTION local_198;
  longlong local_190;
  longlong *local_188;
  longlong local_180;
  undefined8 *local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  undefined8 uStack_150;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  char local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  lVar14 = (longlong)param_2 * 0x10;
  fVar1 = *(float *)(*(longlong *)param_1[2] + 0xc + lVar14);
  if ((fVar1 != 0.0) || (NAN(fVar1))) {
    lVar12 = (longlong)(int)((longlong *)param_1[4])[1];
    if (lVar12 != 0) {
      puVar16 = (undefined8 *)*param_1;
      lVar21 = *(longlong *)param_1[4];
      local_180 = lVar21 + lVar12 * 0x18;
      lpCriticalSection = (LPCRITICAL_SECTION)(puVar16 + 8);
      lVar12 = (longlong)param_2 * 3;
      local_198 = lpCriticalSection;
      local_190 = lVar14;
      local_188 = param_1;
      local_178 = puVar16;
      local_170 = lVar12;
      do {
        iVar10 = *(int *)(lVar21 + 0x14);
        if (0 < iVar10) {
          local_160 = (longlong)*(int *)(lVar21 + 0x10) * 0x30 + *(longlong *)*puVar16;
          lVar20 = 0;
          do {
            lVar3 = *(longlong *)(lVar21 + 8);
            iVar19 = (int)lVar20;
            lVar18 = (longlong)iVar19;
            lVar13 = *(int *)(lVar21 + 0x10) + lVar18;
            lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + lVar13 * 8);
            if (*(char *)(lVar4 + 0x1c) != '\x11') {
              auVar43._8_8_ = 0;
              auVar43._0_8_ = *(ulonglong *)(*(longlong *)(lVar3 + 0x28) + lVar13 * 0xc);
              auVar43 = insertps(auVar43,*(undefined4 *)
                                          (*(longlong *)(lVar3 + 0x28) + 8 + lVar13 * 0xc),0x28);
              pfVar11 = (float *)(*(longlong *)(lVar3 + 0x48) + lVar13 * 0x10);
              fVar1 = *pfVar11;
              fVar2 = pfVar11[1];
              fVar42 = pfVar11[2];
              fVar44 = pfVar11[3];
              local_1a8 = (double)*(float *)(puVar16 + 1);
              auVar29._8_8_ = 0;
              auVar29._0_8_ = *(ulonglong *)(*(longlong *)param_1[2] + lVar14);
              auVar29 = insertps(auVar29,*(undefined4 *)(*(longlong *)param_1[2] + 8 + lVar14),0x20)
              ;
              fVar28 = auVar29._0_4_ - auVar43._0_4_;
              fVar31 = auVar29._4_4_ - auVar43._4_4_;
              auVar33._4_4_ = fVar31;
              auVar33._0_4_ = fVar28;
              fVar32 = auVar29._8_4_ - auVar43._8_4_;
              auVar33._8_4_ = fVar32;
              auVar33._12_4_ = auVar29._12_4_ - auVar43._12_4_;
              auVar29 = blendps(auVar33,ZEXT816(0),8);
              fVar35 = fVar1 * -1.0;
              fVar36 = fVar2 * -1.0;
              fVar37 = fVar42 * -1.0;
              fVar38 = fVar44 * 1.0;
              fVar25 = auVar29._4_4_ * fVar35 - auVar29._0_4_ * fVar36;
              fVar26 = auVar29._8_4_ * fVar36 - auVar29._4_4_ * fVar37;
              fVar27 = auVar29._0_4_ * fVar37 - auVar29._8_4_ * fVar35;
              fVar25 = fVar25 + fVar25;
              fVar26 = fVar26 + fVar26;
              fVar27 = fVar27 + fVar27;
              local_128 = (double)((fVar25 * fVar36 - fVar27 * fVar37) + fVar38 * fVar26 + fVar28);
              local_118 = (double)((fVar27 * fVar35 - fVar26 * fVar36) + fVar38 * fVar25 + fVar32);
              local_120 = (double)((fVar26 * fVar37 - fVar25 * fVar35) + fVar38 * fVar27 + fVar31);
              auVar30._8_8_ = 0;
              auVar30._0_8_ = *(ulonglong *)(*(longlong *)param_1[3] + lVar12 * 4);
              auVar29 = insertps(auVar30,*(undefined4 *)(*(longlong *)param_1[3] + 8 + lVar12 * 4),
                                 0x20);
              pfVar11 = (float *)(local_160 + 0x10 + lVar20 * 0x30);
              fVar28 = auVar29._0_4_ - *pfVar11;
              fVar31 = auVar29._4_4_ - pfVar11[1];
              auVar34._4_4_ = fVar31;
              auVar34._0_4_ = fVar28;
              fVar32 = auVar29._8_4_ - pfVar11[2];
              auVar34._8_4_ = fVar32;
              auVar34._12_4_ = auVar29._12_4_ - pfVar11[3];
              auVar29 = blendps(auVar34,ZEXT816(0),8);
              pfVar11 = (float *)(local_160 + lVar20 * 0x30);
              fVar35 = *pfVar11 * -1.0;
              fVar36 = pfVar11[1] * -1.0;
              fVar37 = pfVar11[2] * -1.0;
              fVar38 = pfVar11[3] * 1.0;
              fVar25 = auVar29._4_4_ * fVar35 - auVar29._0_4_ * fVar36;
              fVar26 = auVar29._8_4_ * fVar36 - auVar29._4_4_ * fVar37;
              fVar27 = auVar29._0_4_ * fVar37 - auVar29._8_4_ * fVar35;
              fVar25 = fVar25 + fVar25;
              fVar26 = fVar26 + fVar26;
              fVar27 = fVar27 + fVar27;
              local_140 = (double)((fVar25 * fVar36 - fVar27 * fVar37) + fVar38 * fVar26 + fVar28);
              local_130 = (double)((fVar27 * fVar35 - fVar26 * fVar36) + fVar38 * fVar25 + fVar32);
              local_138 = (double)((fVar26 * fVar37 - fVar25 * fVar35) + fVar38 * fVar27 + fVar31);
              FUN_146dae232(lVar4,&local_110,&local_140,&local_128);
              if (local_f8 == '\x01') {
                FUN_146dae152(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(lVar21 + 8) + 0x60) +
                               (*(int *)(lVar21 + 0x10) + lVar18) * 8),&local_128,&local_110);
                fVar28 = (float)local_118;
                fVar26 = (float)local_120;
                auVar45._4_12_ = unaff_XMM15._4_12_;
                auVar45._0_4_ = (float)local_128;
                fVar27 = (float)local_100;
                fVar25 = (float)local_108;
                auVar41._4_12_ = unaff_XMM9._4_12_;
                auVar41._0_4_ = (float)local_110;
                EnterCriticalSection(lpCriticalSection);
                *(undefined1 *)
                 (lVar20 + (longlong)*(int *)(lVar21 + 0x10) + *(longlong *)puVar16[4]) = 1;
                plVar5 = (longlong *)puVar16[5];
                iVar10 = (int)plVar5[1];
                lVar12 = (longlong)iVar10;
                *(uint *)(plVar5 + 1) = iVar10 + 1U;
                if (*(uint *)((longlong)plVar5 + 0xc) < iVar10 + 1U) {
                  FUN_140aacb36(plVar5,iVar10);
                }
                auVar29 = insertps(auVar41,ZEXT416((uint)fVar25),0x1c);
                auVar8._4_4_ = unaff_XMM12_Db;
                auVar8._0_4_ = fVar27;
                auVar8._8_4_ = unaff_XMM12_Dc;
                auVar8._12_4_ = unaff_XMM12_Dd;
                auVar29 = insertps(auVar29,auVar8,0x28);
                fVar32 = auVar29._0_4_;
                fVar35 = auVar29._4_4_;
                fVar36 = auVar29._8_4_;
                fVar25 = fVar35 * fVar1 - fVar2 * fVar32;
                fVar27 = fVar36 * fVar2 - fVar42 * fVar35;
                fVar31 = fVar32 * fVar42 - fVar1 * fVar36;
                fVar25 = fVar25 + fVar25;
                fVar27 = fVar27 + fVar27;
                fVar31 = fVar31 + fVar31;
                fVar32 = auVar43._0_4_ +
                         (fVar25 * fVar2 - fVar31 * fVar42) + fVar44 * fVar27 + fVar32;
                fVar35 = auVar43._4_4_ +
                         (fVar27 * fVar42 - fVar25 * fVar1) + fVar44 * fVar31 + fVar35;
                fVar25 = auVar43._8_4_ +
                         (fVar31 * fVar1 - fVar27 * fVar2) + fVar44 * fVar25 + fVar36;
                lVar3 = *plVar5;
                *(float *)(lVar3 + lVar12 * 0xc) = fVar32;
                *(float *)(lVar3 + 4 + lVar12 * 0xc) = fVar35;
                *(float *)(lVar3 + 8 + lVar12 * 0xc) = fVar25;
                plVar5 = (longlong *)puVar16[6];
                iVar10 = (int)plVar5[1];
                lVar12 = (longlong)iVar10;
                *(uint *)(plVar5 + 1) = iVar10 + 1U;
                if (*(uint *)((longlong)plVar5 + 0xc) < iVar10 + 1U) {
                  FUN_140aacb36(plVar5,iVar10);
                }
                lpCriticalSection = local_198;
                auVar7._4_4_ = unaff_XMM11_Db;
                auVar7._0_4_ = fVar26;
                auVar7._8_4_ = unaff_XMM11_Dc;
                auVar7._12_4_ = unaff_XMM11_Dd;
                auVar29 = insertps(auVar45,auVar7,0x1c);
                auVar9._4_4_ = unaff_XMM13_Db;
                auVar9._0_4_ = fVar28;
                auVar9._8_4_ = unaff_XMM13_Dc;
                auVar9._12_4_ = unaff_XMM13_Dd;
                auVar29 = insertps(auVar29,auVar9,0x28);
                fVar27 = auVar29._0_4_;
                fVar37 = auVar29._4_4_;
                fVar38 = auVar29._8_4_;
                fVar47 = auVar29._12_4_;
                fVar26 = fVar37 * fVar1 - fVar2 * fVar27;
                fVar28 = fVar38 * fVar2 - fVar42 * fVar37;
                fVar31 = fVar27 * fVar42 - fVar1 * fVar38;
                fVar36 = fVar47 * fVar44 - fVar44 * fVar47;
                fVar26 = fVar26 + fVar26;
                fVar28 = fVar28 + fVar28;
                fVar31 = fVar31 + fVar31;
                fVar36 = fVar36 + fVar36;
                fVar27 = (fVar26 * fVar2 - fVar31 * fVar42) + fVar44 * fVar28 + fVar27;
                unaff_XMM13_Db = (fVar28 * fVar42 - fVar26 * fVar1) + fVar44 * fVar31 + fVar37;
                unaff_XMM13_Dc = (fVar31 * fVar1 - fVar28 * fVar2) + fVar44 * fVar26 + fVar38;
                unaff_XMM13_Dd = (fVar36 * fVar44 - fVar36 * fVar44) + fVar44 * fVar36 + fVar47;
                auVar46._4_4_ = unaff_XMM13_Db;
                auVar46._0_4_ = unaff_XMM13_Db;
                auVar46._8_4_ = unaff_XMM13_Dd;
                auVar46._12_4_ = unaff_XMM13_Dd;
                lVar3 = *plVar5;
                *(float *)(lVar3 + lVar12 * 0xc) = fVar27;
                *(float *)(lVar3 + 4 + lVar12 * 0xc) = unaff_XMM13_Db;
                *(float *)(lVar3 + 8 + lVar12 * 0xc) = unaff_XMM13_Dc;
                if (local_198 != (LPCRITICAL_SECTION)0x0) {
                  LeaveCriticalSection(local_198);
                }
                lVar12 = *(longlong *)param_1[2];
                fVar1 = *(float *)(lVar12 + 8 + lVar14);
                fVar2 = *(float *)(lVar12 + 4 + lVar14);
                fVar44 = (fVar25 - fVar1) * unaff_XMM13_Dc +
                         (fVar32 - *(float *)(lVar12 + lVar14)) * fVar27 +
                         (fVar35 - fVar2) * unaff_XMM13_Db;
                fVar42 = 0.0;
                if (0.0 <= fVar44) {
                  fVar42 = fVar44;
                }
                fVar42 = fVar42 + 0.1;
                *(float *)(lVar12 + lVar14) = fVar27 * fVar42 + *(float *)(lVar12 + lVar14);
                *(float *)(lVar12 + 4 + lVar14) = unaff_XMM13_Db * fVar42 + fVar2;
                *(float *)(lVar12 + 8 + lVar14) = unaff_XMM13_Dc * fVar42 + fVar1;
                lVar12 = *(longlong *)(lVar21 + 8);
                lVar18 = *(int *)(lVar21 + 0x10) + lVar18;
                lVar3 = *(longlong *)(*(longlong *)(lVar12 + 0x60) + lVar18 * 8);
                if ((lVar3 != 0) && (*(char *)(lVar3 + 0x1c) == '&')) {
                  local_158 = 0;
                  uStack_150 = 0;
                  FUN_146e42678(lVar3,&local_110,&local_158,0);
                  if (0 < (int)uStack_150) {
                    local_168 = lVar3 + 0x20;
                    uVar17 = 0xffffffff;
                    lVar14 = 0;
                    uVar15 = 0;
                    uVar39 = 0xc0000000;
                    uVar40 = 0x47eff933;
                    do {
                      uVar6 = *(undefined8 *)(lVar3 + 0x230);
                      FUN_146df9bd6(local_158 + lVar14,&local_140,local_168);
                      dVar23 = (double)FUN_146dd2aa0(uVar6,&local_140,&local_128);
                      uVar22 = SUB84(dVar23,0);
                      uVar24 = (uint)((ulonglong)dVar23 >> 0x20) & 0x7fffffff;
                      if ((double)CONCAT44(uVar40,uVar39) <= ABS(dVar23)) {
                        uVar22 = uVar39;
                        uVar24 = uVar40;
                      }
                      if (ABS(dVar23) <= (double)CONCAT44(uVar40,uVar39) &&
                          (double)CONCAT44(uVar40,uVar39) != ABS(dVar23)) {
                        uVar17 = uVar15 & 0xffffffff;
                      }
                      uVar15 = uVar15 + 1;
                      lVar14 = lVar14 + 0x28;
                      uVar39 = uVar22;
                      uVar40 = uVar24;
                    } while ((longlong)uVar15 < (longlong)(int)uStack_150);
                    lVar14 = local_190;
                    lpCriticalSection = local_198;
                    param_1 = local_188;
                    if (((int)uVar17 != -1) &&
                       (iVar10 = FUN_146df7e64((longlong)(int)uVar17 * 0x28 + local_158,lVar3 + 0x78
                                              ), lVar14 = local_190, lpCriticalSection = local_198,
                       param_1 = local_188, iVar10 != -1)) {
                      iVar19 = *(int *)(*(longlong *)(lVar3 + 0x140) + (longlong)iVar10 * 4);
                    }
                  }
                  if (local_158 != 0) {
                    FUN_1400020a8();
                  }
                  lVar12 = *(longlong *)(lVar21 + 8);
                  lVar18 = (longlong)iVar19 + (longlong)*(int *)(lVar21 + 0x10);
                  puVar16 = local_178;
                }
                lVar3 = *(longlong *)param_1[2];
                lVar18 = lVar18 * 0xc;
                fVar1 = *(float *)(lVar3 + 8 + lVar14);
                lVar4 = *(longlong *)(lVar12 + 0x28);
                fVar35 = fVar1 - *(float *)(lVar4 + 8 + lVar18);
                fVar2 = *(float *)(lVar3 + lVar14);
                fVar44 = *(float *)(lVar3 + 4 + lVar14);
                unaff_XMM11_Dc = 0;
                unaff_XMM11_Dd = 0;
                fVar36 = fVar44 - *(float *)(lVar4 + 4 + lVar18);
                fVar32 = fVar2 - *(float *)(lVar4 + lVar18);
                lVar4 = *(longlong *)param_1[3];
                lVar13 = *(longlong *)(lVar12 + 0x78);
                lVar12 = *(longlong *)(lVar12 + 0x90);
                fVar25 = *(float *)(lVar12 + 4 + lVar18);
                fVar26 = *(float *)(lVar12 + 8 + lVar18);
                unaff_XMM12_Db = 0;
                unaff_XMM12_Dc = 0;
                unaff_XMM12_Dd = 0;
                fVar28 = *(float *)(param_1 + 1);
                unaff_XMM9 = ZEXT416((uint)fVar28);
                fVar31 = (fVar1 - *(float *)(lVar4 + 8 + local_170 * 4)) -
                         ((*(float *)(lVar12 + lVar18) * fVar36 - fVar32 * fVar25) +
                         *(float *)(lVar13 + 8 + lVar18)) * fVar28;
                fVar32 = (fVar44 - *(float *)(lVar4 + 4 + local_170 * 4)) -
                         ((fVar32 * fVar26 - fVar35 * *(float *)(lVar12 + lVar18)) +
                         *(float *)(lVar13 + 4 + lVar18)) * fVar28;
                fVar25 = (fVar2 - *(float *)(lVar4 + local_170 * 4)) -
                         ((fVar25 * fVar35 - fVar36 * fVar26) + *(float *)(lVar13 + lVar18)) *
                         fVar28;
                fVar26 = fVar31 * unaff_XMM13_Dc + fVar25 * fVar27 + unaff_XMM13_Db * fVar32;
                unaff_XMM15._4_12_ = auVar46._4_12_;
                unaff_XMM15._0_4_ = unaff_XMM13_Db * fVar26;
                fVar31 = fVar31 - fVar26 * unaff_XMM13_Dc;
                fVar32 = fVar32 - unaff_XMM15._0_4_;
                fVar25 = fVar25 - fVar27 * fVar26;
                fVar26 = SQRT(fVar31 * fVar31 + fVar25 * fVar25 + fVar32 * fVar32);
                lVar12 = local_170;
                unaff_XMM11_Db = 0;
                if (1e-08 <= fVar26) {
                  fVar42 = fVar42 * *(float *)((longlong)puVar16 + 0xc);
                  pfVar11 = (float *)(lVar3 + lVar14);
                  if (fVar26 <= fVar42) {
                    fVar42 = fVar26;
                  }
                  fVar42 = fVar42 / fVar26;
                  *pfVar11 = fVar2 - fVar25 * fVar42;
                  pfVar11[1] = fVar44 - fVar32 * fVar42;
                  pfVar11[2] = fVar1 - fVar31 * fVar42;
                  unaff_XMM11_Db = 0;
                }
              }
              iVar10 = *(int *)(lVar21 + 0x14);
            }
            lVar20 = lVar20 + 1;
          } while (lVar20 < iVar10);
        }
        lVar21 = lVar21 + 0x18;
      } while (lVar21 != local_180);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e1d25c FUN_146e1d25c body=1469 status=ok
// SIG undefined FUN_146e1d25c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146e1d25c(longlong *param_1,int param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  float *pfVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar24;
  float fVar25;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 unaff_XMM11 [16];
  undefined1 auVar35 [16];
  float fVar36;
  float unaff_XMM12_Db;
  float unaff_XMM12_Dc;
  float unaff_XMM12_Dd;
  float unaff_XMM13_Db;
  float unaff_XMM13_Dc;
  float unaff_XMM13_Dd;
  undefined4 unaff_XMM14_Db;
  undefined4 unaff_XMM14_Dc;
  undefined4 unaff_XMM14_Dd;
  undefined1 auStack_188 [32];
  double local_168;
  longlong local_158;
  longlong local_150;
  longlong *local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  char local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar15 = (longlong)param_2 * 0x10;
  fVar2 = *(float *)(*(longlong *)param_1[2] + 0xc + lVar15);
  if ((fVar2 != 0.0) || (NAN(fVar2))) {
    lVar12 = (longlong)(int)((longlong *)param_1[4])[1];
    if (lVar12 != 0) {
      puVar4 = (undefined8 *)*param_1;
      lVar14 = *(longlong *)param_1[4];
      local_158 = lVar14 + lVar12 * 0x18;
      lpCriticalSection = (LPCRITICAL_SECTION)(puVar4 + 8);
      lVar12 = (longlong)param_2 * 3;
      auVar33 = _DAT_149932d50;
      local_150 = lVar12;
      local_148 = param_1;
      do {
        iVar11 = *(int *)(lVar14 + 0x14);
        if (0 < iVar11) {
          pfVar16 = (float *)(*(longlong *)*puVar4 + (longlong)*(int *)(lVar14 + 0x10) * 0x30 + 0x10
                             );
          lVar17 = 0;
          do {
            lVar5 = *(longlong *)(lVar14 + 8);
            lVar13 = *(int *)(lVar14 + 0x10) + lVar17;
            lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x60) + lVar13 * 8);
            if (*(char *)(lVar6 + 0x1c) != '\x11') {
              auVar34._8_8_ = 0;
              auVar34._0_8_ = *(ulonglong *)(*(longlong *)(lVar5 + 0x28) + lVar13 * 0xc);
              auVar34 = insertps(auVar34,*(undefined4 *)
                                          (*(longlong *)(lVar5 + 0x28) + 8 + lVar13 * 0xc),0x28);
              local_168 = (double)*(float *)(puVar4 + 1);
              auVar22._8_8_ = 0;
              auVar22._0_8_ = *(ulonglong *)(*(longlong *)param_1[2] + lVar15);
              auVar22 = insertps(auVar22,*(undefined4 *)(*(longlong *)param_1[2] + 8 + lVar15),0x20)
              ;
              pfVar1 = (float *)(*(longlong *)(lVar5 + 0x48) + lVar13 * 0x10);
              fVar2 = *pfVar1;
              fVar3 = pfVar1[1];
              fVar26 = pfVar1[2];
              fVar36 = pfVar1[3];
              fVar21 = auVar22._0_4_ - auVar34._0_4_;
              fVar24 = auVar22._4_4_ - auVar34._4_4_;
              auVar27._4_4_ = fVar24;
              auVar27._0_4_ = fVar21;
              fVar25 = auVar22._8_4_ - auVar34._8_4_;
              auVar27._8_4_ = fVar25;
              auVar27._12_4_ = auVar22._12_4_ - auVar34._12_4_;
              auVar22 = blendps(auVar27,ZEXT816(0),8);
              fVar29 = fVar2 * auVar33._0_4_;
              fVar30 = fVar3 * auVar33._4_4_;
              fVar31 = fVar26 * auVar33._8_4_;
              fVar32 = fVar36 * auVar33._12_4_;
              fVar18 = auVar22._4_4_ * fVar29 - auVar22._0_4_ * fVar30;
              fVar19 = auVar22._8_4_ * fVar30 - auVar22._4_4_ * fVar31;
              fVar20 = auVar22._0_4_ * fVar31 - auVar22._8_4_ * fVar29;
              fVar18 = fVar18 + fVar18;
              fVar19 = fVar19 + fVar19;
              fVar20 = fVar20 + fVar20;
              local_128 = (double)((fVar18 * fVar30 - fVar20 * fVar31) + fVar32 * fVar19 + fVar21);
              local_118 = (double)((fVar20 * fVar29 - fVar19 * fVar30) + fVar32 * fVar18 + fVar25);
              local_120 = (double)((fVar19 * fVar31 - fVar18 * fVar29) + fVar32 * fVar20 + fVar24);
              auVar23._8_8_ = 0;
              auVar23._0_8_ = *(ulonglong *)(*(longlong *)param_1[3] + lVar12 * 4);
              auVar22 = insertps(auVar23,*(undefined4 *)(*(longlong *)param_1[3] + 8 + lVar12 * 4),
                                 0x20);
              fVar21 = auVar22._0_4_ - *pfVar16;
              fVar24 = auVar22._4_4_ - pfVar16[1];
              auVar28._4_4_ = fVar24;
              auVar28._0_4_ = fVar21;
              fVar25 = auVar22._8_4_ - pfVar16[2];
              auVar28._8_4_ = fVar25;
              auVar28._12_4_ = auVar22._12_4_ - pfVar16[3];
              auVar22 = blendps(auVar28,ZEXT816(0),8);
              fVar29 = pfVar16[-4] * auVar33._0_4_;
              fVar30 = pfVar16[-3] * auVar33._4_4_;
              fVar31 = pfVar16[-2] * auVar33._8_4_;
              fVar32 = pfVar16[-1] * auVar33._12_4_;
              fVar18 = auVar22._4_4_ * fVar29 - auVar22._0_4_ * fVar30;
              fVar19 = auVar22._8_4_ * fVar30 - auVar22._4_4_ * fVar31;
              fVar20 = auVar22._0_4_ * fVar31 - auVar22._8_4_ * fVar29;
              fVar18 = fVar18 + fVar18;
              fVar19 = fVar19 + fVar19;
              fVar20 = fVar20 + fVar20;
              local_140 = (double)((fVar18 * fVar30 - fVar20 * fVar31) + fVar32 * fVar19 + fVar21);
              local_130 = (double)((fVar20 * fVar29 - fVar19 * fVar30) + fVar32 * fVar18 + fVar25);
              local_138 = (double)((fVar19 * fVar31 - fVar18 * fVar29) + fVar32 * fVar20 + fVar24);
              FUN_146dae232(lVar6,&local_110,&local_140,&local_128);
              if (local_f8 == '\x01') {
                FUN_146dae152(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(lVar14 + 8) + 0x60) +
                               (*(int *)(lVar14 + 0x10) + lVar17) * 8),&local_128,&local_110);
                fVar20 = (float)local_118;
                fVar21 = (float)local_120;
                auVar35._4_12_ = unaff_XMM11._4_12_;
                auVar35._0_4_ = (float)local_128;
                fVar19 = (float)local_100;
                fVar18 = (float)local_108;
                auVar33._0_4_ = (float)local_110;
                EnterCriticalSection(lpCriticalSection);
                *(undefined1 *)(lVar17 + (longlong)*(int *)(lVar14 + 0x10) + *(longlong *)puVar4[4])
                     = 1;
                plVar7 = (longlong *)puVar4[5];
                iVar11 = (int)plVar7[1];
                lVar12 = (longlong)iVar11;
                *(uint *)(plVar7 + 1) = iVar11 + 1U;
                if (*(uint *)((longlong)plVar7 + 0xc) < iVar11 + 1U) {
                  FUN_140aacb36(plVar7,iVar11);
                }
                auVar33 = insertps(auVar33,ZEXT416((uint)fVar18),0x1c);
                auVar8._4_4_ = unaff_XMM12_Db;
                auVar8._0_4_ = fVar19;
                auVar8._8_4_ = unaff_XMM12_Dc;
                auVar8._12_4_ = unaff_XMM12_Dd;
                auVar33 = insertps(auVar33,auVar8,0x28);
                fVar29 = auVar33._0_4_;
                fVar30 = auVar33._4_4_;
                fVar31 = auVar33._8_4_;
                fVar32 = auVar33._12_4_;
                fVar18 = fVar30 * fVar2 - fVar3 * fVar29;
                fVar19 = fVar31 * fVar3 - fVar26 * fVar30;
                fVar24 = fVar29 * fVar26 - fVar2 * fVar31;
                fVar25 = fVar32 * fVar36 - fVar36 * fVar32;
                fVar18 = fVar18 + fVar18;
                fVar19 = fVar19 + fVar19;
                fVar24 = fVar24 + fVar24;
                fVar25 = fVar25 + fVar25;
                fVar29 = auVar34._0_4_ +
                         (fVar18 * fVar3 - fVar24 * fVar26) + fVar36 * fVar19 + fVar29;
                fVar30 = auVar34._4_4_ +
                         (fVar19 * fVar26 - fVar18 * fVar2) + fVar36 * fVar24 + fVar30;
                unaff_XMM12_Dc =
                     auVar34._8_4_ + (fVar24 * fVar2 - fVar19 * fVar3) + fVar36 * fVar18 + fVar31;
                unaff_XMM12_Db =
                     auVar34._12_4_ + (fVar25 * fVar36 - fVar25 * fVar36) + fVar36 * fVar25 + fVar32
                ;
                lVar5 = *plVar7;
                *(float *)(lVar5 + lVar12 * 0xc) = fVar29;
                *(float *)(lVar5 + 4 + lVar12 * 0xc) = fVar30;
                *(float *)(lVar5 + 8 + lVar12 * 0xc) = unaff_XMM12_Dc;
                plVar7 = (longlong *)puVar4[6];
                iVar11 = (int)plVar7[1];
                lVar12 = (longlong)iVar11;
                *(uint *)(plVar7 + 1) = iVar11 + 1U;
                if (*(uint *)((longlong)plVar7 + 0xc) < iVar11 + 1U) {
                  FUN_140aacb36(plVar7,iVar11);
                }
                auVar10._4_4_ = unaff_XMM14_Db;
                auVar10._0_4_ = fVar21;
                auVar10._8_4_ = unaff_XMM14_Dc;
                auVar10._12_4_ = unaff_XMM14_Dd;
                auVar33 = insertps(auVar35,auVar10,0x1c);
                auVar9._4_4_ = unaff_XMM13_Db;
                auVar9._0_4_ = fVar20;
                auVar9._8_4_ = unaff_XMM13_Dc;
                auVar9._12_4_ = unaff_XMM13_Dd;
                unaff_XMM11 = insertps(auVar33,auVar9,0x28);
                fVar18 = unaff_XMM11._0_4_;
                fVar19 = unaff_XMM11._4_4_;
                fVar20 = unaff_XMM11._8_4_;
                fVar21 = unaff_XMM11._12_4_;
                fVar24 = fVar19 * fVar2 - fVar3 * fVar18;
                fVar25 = fVar20 * fVar3 - fVar26 * fVar19;
                fVar31 = fVar18 * fVar26 - fVar2 * fVar20;
                fVar32 = fVar21 * fVar36 - fVar36 * fVar21;
                fVar24 = fVar24 + fVar24;
                fVar25 = fVar25 + fVar25;
                fVar31 = fVar31 + fVar31;
                fVar32 = fVar32 + fVar32;
                fVar18 = (fVar24 * fVar3 - fVar31 * fVar26) + fVar36 * fVar25 + fVar18;
                unaff_XMM13_Db = (fVar25 * fVar26 - fVar24 * fVar2) + fVar36 * fVar31 + fVar19;
                unaff_XMM13_Dc = (fVar31 * fVar2 - fVar25 * fVar3) + fVar36 * fVar24 + fVar20;
                unaff_XMM13_Dd = (fVar32 * fVar36 - fVar32 * fVar36) + fVar36 * fVar32 + fVar21;
                lVar5 = *plVar7;
                *(float *)(lVar5 + lVar12 * 0xc) = fVar18;
                *(float *)(lVar5 + 4 + lVar12 * 0xc) = unaff_XMM13_Db;
                *(float *)(lVar5 + 8 + lVar12 * 0xc) = unaff_XMM13_Dc;
                if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
                  LeaveCriticalSection(lpCriticalSection);
                }
                lVar12 = *(longlong *)local_148[2];
                fVar2 = *(float *)(lVar12 + 8 + lVar15);
                fVar3 = *(float *)(lVar12 + 4 + lVar15);
                fVar36 = (unaff_XMM12_Dc - fVar2) * unaff_XMM13_Dc +
                         (fVar29 - *(float *)(lVar12 + lVar15)) * fVar18 +
                         (fVar30 - fVar3) * unaff_XMM13_Db;
                fVar26 = 0.0;
                if (0.0 <= fVar36) {
                  fVar26 = fVar36;
                }
                fVar26 = fVar26 + 0.1;
                *(float *)(lVar12 + lVar15) = fVar18 * fVar26 + *(float *)(lVar12 + lVar15);
                *(float *)(lVar12 + 4 + lVar15) = unaff_XMM13_Db * fVar26 + fVar3;
                *(float *)(lVar12 + 8 + lVar15) = fVar26 * unaff_XMM13_Dc + fVar2;
                param_1 = local_148;
                lVar12 = local_150;
                auVar33 = _DAT_149932d50;
                unaff_XMM12_Dd = unaff_XMM12_Db;
              }
              iVar11 = *(int *)(lVar14 + 0x14);
            }
            lVar17 = lVar17 + 1;
            pfVar16 = pfVar16 + 0xc;
          } while (lVar17 < iVar11);
        }
        lVar14 = lVar14 + 0x18;
      } while (lVar14 != local_158);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e1d822 FUN_146e1d822 body=2126 status=ok
// SIG undefined FUN_146e1d822(void)

void FUN_146e1d822(undefined8 *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  int iVar7;
  float *pfVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined4 uVar20;
  undefined4 extraout_XMM0_Db;
  double dVar21;
  uint uVar22;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar30;
  float fVar31;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined4 uVar38;
  uint uVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar42 [16];
  undefined1 auStack_1b8 [32];
  double local_198;
  longlong local_190;
  longlong local_188;
  undefined8 *local_180;
  undefined8 *local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  undefined8 uStack_150;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  char local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar19 = (longlong)param_2 * 0x10;
  fVar41 = *(float *)(*(longlong *)param_1[2] + 0xc + lVar19);
  if ((fVar41 != 0.0) || (NAN(fVar41))) {
    lVar10 = (longlong)(int)((longlong *)param_1[4])[1];
    if (lVar10 != 0) {
      puVar17 = (undefined8 *)*param_1;
      lVar12 = *(longlong *)param_1[4];
      local_170 = lVar12 + lVar10 * 0x18;
      lVar10 = (longlong)param_2 * 3;
      local_190 = lVar19;
      local_188 = lVar10;
      local_180 = puVar17;
      local_178 = param_1;
      do {
        iVar7 = *(int *)(lVar12 + 0x14);
        if (0 < iVar7) {
          local_160 = (longlong)*(int *)(lVar12 + 0x10) * 0x30 + *(longlong *)*puVar17;
          lVar14 = 0;
          do {
            lVar9 = *(longlong *)(lVar12 + 8);
            iVar13 = (int)lVar14;
            lVar15 = (longlong)iVar13;
            lVar11 = *(int *)(lVar12 + 0x10) + lVar15;
            lVar3 = *(longlong *)(*(longlong *)(lVar9 + 0x60) + lVar11 * 8);
            if (*(char *)(lVar3 + 0x1c) != '\x11') {
              auVar42._8_8_ = 0;
              auVar42._0_8_ = *(ulonglong *)(*(longlong *)(lVar9 + 0x28) + lVar11 * 0xc);
              auVar42 = insertps(auVar42,*(undefined4 *)
                                          (*(longlong *)(lVar9 + 0x28) + 8 + lVar11 * 0xc),0x28);
              pfVar8 = (float *)(*(longlong *)(lVar9 + 0x48) + lVar11 * 0x10);
              fVar41 = *pfVar8;
              fVar24 = pfVar8[1];
              fVar1 = pfVar8[2];
              fVar2 = pfVar8[3];
              local_198 = (double)*(float *)(puVar17 + 1);
              auVar28._8_8_ = 0;
              auVar28._0_8_ = *(ulonglong *)(*(longlong *)param_1[2] + lVar19);
              auVar28 = insertps(auVar28,*(undefined4 *)(*(longlong *)param_1[2] + 8 + lVar19),0x20)
              ;
              fVar27 = auVar28._0_4_ - auVar42._0_4_;
              fVar30 = auVar28._4_4_ - auVar42._4_4_;
              auVar32._4_4_ = fVar30;
              auVar32._0_4_ = fVar27;
              fVar31 = auVar28._8_4_ - auVar42._8_4_;
              auVar32._8_4_ = fVar31;
              auVar32._12_4_ = auVar28._12_4_ - auVar42._12_4_;
              auVar28 = blendps(auVar32,ZEXT816(0),8);
              fVar34 = fVar41 * -1.0;
              fVar35 = fVar24 * -1.0;
              fVar36 = fVar1 * -1.0;
              fVar37 = fVar2 * 1.0;
              fVar23 = auVar28._4_4_ * fVar34 - auVar28._0_4_ * fVar35;
              fVar25 = auVar28._8_4_ * fVar35 - auVar28._4_4_ * fVar36;
              fVar26 = auVar28._0_4_ * fVar36 - auVar28._8_4_ * fVar34;
              fVar23 = fVar23 + fVar23;
              fVar25 = fVar25 + fVar25;
              fVar26 = fVar26 + fVar26;
              local_128 = (double)((fVar23 * fVar35 - fVar26 * fVar36) + fVar37 * fVar25 + fVar27);
              local_118 = (double)((fVar26 * fVar34 - fVar25 * fVar35) + fVar37 * fVar23 + fVar31);
              local_120 = (double)((fVar25 * fVar36 - fVar23 * fVar34) + fVar37 * fVar26 + fVar30);
              auVar29._8_8_ = 0;
              auVar29._0_8_ = *(ulonglong *)(*(longlong *)param_1[3] + lVar10 * 4);
              auVar28 = insertps(auVar29,*(undefined4 *)(*(longlong *)param_1[3] + 8 + lVar10 * 4),
                                 0x20);
              pfVar8 = (float *)(local_160 + 0x10 + lVar14 * 0x30);
              fVar27 = auVar28._0_4_ - *pfVar8;
              fVar30 = auVar28._4_4_ - pfVar8[1];
              auVar33._4_4_ = fVar30;
              auVar33._0_4_ = fVar27;
              fVar31 = auVar28._8_4_ - pfVar8[2];
              auVar33._8_4_ = fVar31;
              auVar33._12_4_ = auVar28._12_4_ - pfVar8[3];
              auVar28 = blendps(auVar33,ZEXT816(0),8);
              pfVar8 = (float *)(local_160 + lVar14 * 0x30);
              fVar34 = *pfVar8 * -1.0;
              fVar35 = pfVar8[1] * -1.0;
              fVar36 = pfVar8[2] * -1.0;
              fVar37 = pfVar8[3] * 1.0;
              fVar23 = auVar28._4_4_ * fVar34 - auVar28._0_4_ * fVar35;
              fVar25 = auVar28._8_4_ * fVar35 - auVar28._4_4_ * fVar36;
              fVar26 = auVar28._0_4_ * fVar36 - auVar28._8_4_ * fVar34;
              fVar23 = fVar23 + fVar23;
              fVar25 = fVar25 + fVar25;
              fVar26 = fVar26 + fVar26;
              local_140 = (double)((fVar23 * fVar35 - fVar26 * fVar36) + fVar37 * fVar25 + fVar27);
              local_130 = (double)((fVar26 * fVar34 - fVar25 * fVar35) + fVar37 * fVar23 + fVar31);
              local_138 = (double)((fVar25 * fVar36 - fVar23 * fVar34) + fVar37 * fVar26 + fVar30);
              FUN_146dae232(lVar3,&local_110,&local_140,&local_128);
              if (local_f8 == '\x01') {
                FUN_146dae152(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(lVar12 + 8) + 0x60) +
                               (*(int *)(lVar12 + 0x10) + lVar15) * 8),&local_128,&local_110);
                auVar28 = insertps(ZEXT416((uint)(float)local_128),ZEXT416((uint)(float)local_120),
                                   0x1c);
                auVar6._4_4_ = extraout_XMM0_Db;
                auVar6._0_4_ = (float)local_118;
                auVar6._8_4_ = extraout_XMM0_Dc;
                auVar6._12_4_ = extraout_XMM0_Dd;
                auVar28 = insertps(auVar28,auVar6,0x28);
                fVar23 = auVar28._0_4_;
                fVar25 = auVar28._4_4_;
                fVar26 = auVar28._8_4_;
                fVar27 = fVar25 * fVar41 - fVar24 * fVar23;
                fVar30 = fVar26 * fVar24 - fVar1 * fVar25;
                fVar31 = fVar23 * fVar1 - fVar41 * fVar26;
                fVar27 = fVar27 + fVar27;
                fVar30 = fVar30 + fVar30;
                fVar31 = fVar31 + fVar31;
                fVar36 = (fVar27 * fVar24 - fVar31 * fVar1) + fVar2 * fVar30 + fVar23;
                fVar37 = (fVar30 * fVar1 - fVar27 * fVar41) + fVar2 * fVar31 + fVar25;
                fVar40 = (fVar31 * fVar41 - fVar30 * fVar24) + fVar2 * fVar27 + fVar26;
                auVar28 = insertps(ZEXT416((uint)(float)local_110),ZEXT416((uint)(float)local_108),
                                   0x1c);
                auVar28 = insertps(auVar28,ZEXT416((uint)(float)local_100),0x28);
                fVar31 = auVar28._0_4_;
                fVar34 = auVar28._4_4_;
                fVar35 = auVar28._8_4_;
                fVar26 = fVar34 * fVar41 - fVar24 * fVar31;
                fVar27 = fVar35 * fVar24 - fVar1 * fVar34;
                fVar30 = fVar31 * fVar1 - fVar41 * fVar35;
                fVar26 = fVar26 + fVar26;
                fVar27 = fVar27 + fVar27;
                fVar30 = fVar30 + fVar30;
                lVar9 = *(longlong *)param_1[2];
                fVar23 = *(float *)(lVar9 + 8 + lVar19);
                fVar25 = *(float *)(lVar9 + 4 + lVar19);
                fVar24 = ((auVar42._8_4_ +
                          (fVar30 * fVar41 - fVar27 * fVar24) + fVar2 * fVar26 + fVar35) - fVar23) *
                         fVar40 + ((auVar42._0_4_ +
                                   (fVar26 * fVar24 - fVar30 * fVar1) + fVar2 * fVar27 + fVar31) -
                                  *(float *)(lVar9 + lVar19)) * fVar36 +
                                  ((auVar42._4_4_ +
                                   (fVar27 * fVar1 - fVar26 * fVar41) + fVar2 * fVar30 + fVar34) -
                                  fVar25) * fVar37;
                fVar41 = 0.0;
                if (0.0 <= fVar24) {
                  fVar41 = fVar24;
                }
                fVar41 = fVar41 + 0.1;
                *(float *)(lVar9 + lVar19) = fVar36 * fVar41 + *(float *)(lVar9 + lVar19);
                *(float *)(lVar9 + 4 + lVar19) = fVar37 * fVar41 + fVar25;
                *(float *)(lVar9 + 8 + lVar19) = fVar40 * fVar41 + fVar23;
                lVar9 = *(longlong *)(lVar12 + 8);
                lVar15 = *(int *)(lVar12 + 0x10) + lVar15;
                lVar3 = *(longlong *)(*(longlong *)(lVar9 + 0x60) + lVar15 * 8);
                if ((lVar3 != 0) && (*(char *)(lVar3 + 0x1c) == '&')) {
                  local_158 = 0;
                  uStack_150 = 0;
                  FUN_146e42678(lVar3,&local_110,&local_158,0);
                  if (0 < (int)uStack_150) {
                    local_168 = lVar3 + 0x20;
                    uVar18 = 0xffffffff;
                    lVar19 = 0;
                    uVar16 = 0;
                    uVar38 = 0xc0000000;
                    uVar39 = 0x47eff933;
                    do {
                      uVar4 = *(undefined8 *)(lVar3 + 0x230);
                      FUN_146df9bd6(local_158 + lVar19,&local_140,local_168);
                      dVar21 = (double)FUN_146dd2aa0(uVar4,&local_140,&local_128);
                      uVar20 = SUB84(dVar21,0);
                      uVar22 = (uint)((ulonglong)dVar21 >> 0x20) & 0x7fffffff;
                      if ((double)CONCAT44(uVar39,uVar38) <= ABS(dVar21)) {
                        uVar20 = uVar38;
                        uVar22 = uVar39;
                      }
                      if (ABS(dVar21) <= (double)CONCAT44(uVar39,uVar38) &&
                          (double)CONCAT44(uVar39,uVar38) != ABS(dVar21)) {
                        uVar18 = uVar16 & 0xffffffff;
                      }
                      uVar16 = uVar16 + 1;
                      lVar19 = lVar19 + 0x28;
                      uVar38 = uVar20;
                      uVar39 = uVar22;
                    } while ((longlong)uVar16 < (longlong)(int)uStack_150);
                    lVar10 = local_188;
                    puVar17 = local_180;
                    param_1 = local_178;
                    lVar19 = local_190;
                    if (((int)uVar18 != -1) &&
                       (iVar7 = FUN_146df7e64((longlong)(int)uVar18 * 0x28 + local_158,lVar3 + 0x78)
                       , lVar10 = local_188, puVar17 = local_180, param_1 = local_178,
                       lVar19 = local_190, iVar7 != -1)) {
                      iVar13 = *(int *)(*(longlong *)(lVar3 + 0x140) + (longlong)iVar7 * 4);
                    }
                  }
                  if (local_158 != 0) {
                    FUN_1400020a8();
                  }
                  lVar9 = *(longlong *)(lVar12 + 8);
                  lVar15 = (longlong)iVar13 + (longlong)*(int *)(lVar12 + 0x10);
                }
                lVar3 = *(longlong *)param_1[2];
                lVar15 = lVar15 * 0xc;
                fVar24 = *(float *)(lVar3 + 8 + lVar19);
                lVar11 = *(longlong *)(lVar9 + 0x28);
                fVar27 = fVar24 - *(float *)(lVar11 + 8 + lVar15);
                fVar1 = *(float *)(lVar3 + lVar19);
                fVar2 = *(float *)(lVar3 + 4 + lVar19);
                fVar30 = fVar2 - *(float *)(lVar11 + 4 + lVar15);
                fVar34 = fVar1 - *(float *)(lVar11 + lVar15);
                lVar11 = *(longlong *)param_1[3];
                lVar5 = *(longlong *)(lVar9 + 0x78);
                lVar9 = *(longlong *)(lVar9 + 0x90);
                fVar23 = *(float *)(lVar9 + 4 + lVar15);
                fVar25 = *(float *)(lVar9 + 8 + lVar15);
                fVar26 = *(float *)(param_1 + 1);
                fVar31 = (fVar24 - *(float *)(lVar11 + 8 + lVar10 * 4)) -
                         ((*(float *)(lVar9 + lVar15) * fVar30 - fVar34 * fVar23) +
                         *(float *)(lVar5 + 8 + lVar15)) * fVar26;
                fVar34 = (fVar2 - *(float *)(lVar11 + 4 + lVar10 * 4)) -
                         ((fVar34 * fVar25 - fVar27 * *(float *)(lVar9 + lVar15)) +
                         *(float *)(lVar5 + 4 + lVar15)) * fVar26;
                fVar25 = (fVar1 - *(float *)(lVar11 + lVar10 * 4)) -
                         ((fVar23 * fVar27 - fVar30 * fVar25) + *(float *)(lVar5 + lVar15)) * fVar26
                ;
                fVar23 = fVar31 * fVar40 + fVar25 * fVar36 + fVar37 * fVar34;
                fVar31 = fVar31 - fVar23 * fVar40;
                fVar34 = fVar34 - fVar37 * fVar23;
                fVar25 = fVar25 - fVar36 * fVar23;
                fVar23 = SQRT(fVar31 * fVar31 + fVar25 * fVar25 + fVar34 * fVar34);
                if (1e-08 <= fVar23) {
                  fVar41 = fVar41 * *(float *)((longlong)puVar17 + 0xc);
                  pfVar8 = (float *)(lVar3 + lVar19);
                  if (fVar23 <= fVar41) {
                    fVar41 = fVar23;
                  }
                  fVar41 = fVar41 / fVar23;
                  *pfVar8 = fVar1 - fVar25 * fVar41;
                  pfVar8[1] = fVar2 - fVar34 * fVar41;
                  pfVar8[2] = fVar24 - fVar31 * fVar41;
                }
              }
              iVar7 = *(int *)(lVar12 + 0x14);
            }
            lVar14 = lVar14 + 1;
          } while (lVar14 < iVar7);
        }
        lVar12 = lVar12 + 0x18;
      } while (lVar12 != local_170);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e1e07a FUN_146e1e07a body=1194 status=ok
// SIG undefined FUN_146e1e07a(void)

void FUN_146e1e07a(longlong *param_1,int param_2)

{
  float *pfVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  float *pfVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar22;
  float fVar23;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar32 [16];
  undefined4 unaff_XMM11_Db;
  undefined4 unaff_XMM11_Dc;
  undefined4 unaff_XMM11_Dd;
  float fVar34;
  undefined1 unaff_XMM12 [16];
  undefined1 auVar33 [16];
  undefined1 auStack_148 [32];
  double local_128;
  longlong local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  char local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar10 = (longlong)param_2;
  lVar15 = lVar10 * 0x10;
  fVar31 = *(float *)(*(longlong *)param_1[2] + 0xc + lVar15);
  if ((fVar31 != 0.0) || (NAN(fVar31))) {
    lVar11 = (longlong)(int)((longlong *)param_1[4])[1];
    if (lVar11 != 0) {
      puVar2 = (undefined8 *)*param_1;
      lVar14 = *(longlong *)param_1[4];
      local_118 = lVar11 * 0x18 + lVar14;
      do {
        iVar9 = *(int *)(lVar14 + 0x14);
        if (0 < iVar9) {
          pfVar13 = (float *)(*(longlong *)*puVar2 + (longlong)*(int *)(lVar14 + 0x10) * 0x30 + 0x10
                             );
          lVar11 = 0;
          do {
            lVar3 = *(longlong *)(lVar14 + 8);
            lVar12 = *(int *)(lVar14 + 0x10) + lVar11;
            lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + lVar12 * 8);
            if (*(char *)(lVar4 + 0x1c) != '\x11') {
              auVar32._8_8_ = 0;
              auVar32._0_8_ = *(ulonglong *)(*(longlong *)(lVar3 + 0x28) + lVar12 * 0xc);
              auVar32 = insertps(auVar32,*(undefined4 *)
                                          (*(longlong *)(lVar3 + 0x28) + 8 + lVar12 * 0xc),0x28);
              local_128 = (double)*(float *)(puVar2 + 1);
              auVar20._8_8_ = 0;
              auVar20._0_8_ = *(ulonglong *)(*(longlong *)param_1[2] + lVar15);
              auVar20 = insertps(auVar20,*(undefined4 *)(*(longlong *)param_1[2] + 8 + lVar15),0x20)
              ;
              pfVar1 = (float *)(*(longlong *)(lVar3 + 0x48) + lVar12 * 0x10);
              fVar31 = *pfVar1;
              fVar27 = pfVar1[1];
              fVar7 = pfVar1[2];
              fVar8 = pfVar1[3];
              fVar19 = auVar20._0_4_ - auVar32._0_4_;
              fVar22 = auVar20._4_4_ - auVar32._4_4_;
              auVar24._4_4_ = fVar22;
              auVar24._0_4_ = fVar19;
              fVar23 = auVar20._8_4_ - auVar32._8_4_;
              auVar24._8_4_ = fVar23;
              auVar24._12_4_ = auVar20._12_4_ - auVar32._12_4_;
              auVar20 = blendps(auVar24,ZEXT816(0),8);
              fVar26 = fVar31 * -1.0;
              fVar28 = fVar27 * -1.0;
              fVar29 = fVar7 * -1.0;
              fVar30 = fVar8 * 1.0;
              fVar16 = auVar20._4_4_ * fVar26 - auVar20._0_4_ * fVar28;
              fVar17 = auVar20._8_4_ * fVar28 - auVar20._4_4_ * fVar29;
              fVar18 = auVar20._0_4_ * fVar29 - auVar20._8_4_ * fVar26;
              fVar16 = fVar16 + fVar16;
              fVar17 = fVar17 + fVar17;
              fVar18 = fVar18 + fVar18;
              local_f8 = (double)((fVar16 * fVar28 - fVar18 * fVar29) + fVar30 * fVar17 + fVar19);
              local_e8 = (double)((fVar18 * fVar26 - fVar17 * fVar28) + fVar30 * fVar16 + fVar23);
              local_f0 = (double)((fVar17 * fVar29 - fVar16 * fVar26) + fVar30 * fVar18 + fVar22);
              auVar21._8_8_ = 0;
              auVar21._0_8_ = *(ulonglong *)(*(longlong *)param_1[3] + lVar10 * 0xc);
              auVar20 = insertps(auVar21,*(undefined4 *)(*(longlong *)param_1[3] + 8 + lVar10 * 0xc)
                                 ,0x20);
              fVar19 = auVar20._0_4_ - *pfVar13;
              fVar22 = auVar20._4_4_ - pfVar13[1];
              auVar25._4_4_ = fVar22;
              auVar25._0_4_ = fVar19;
              fVar23 = auVar20._8_4_ - pfVar13[2];
              auVar25._8_4_ = fVar23;
              auVar25._12_4_ = auVar20._12_4_ - pfVar13[3];
              auVar20 = blendps(auVar25,ZEXT816(0),8);
              fVar26 = pfVar13[-4] * -1.0;
              fVar28 = pfVar13[-3] * -1.0;
              fVar29 = pfVar13[-2] * -1.0;
              fVar30 = pfVar13[-1] * 1.0;
              fVar16 = auVar20._4_4_ * fVar26 - auVar20._0_4_ * fVar28;
              fVar17 = auVar20._8_4_ * fVar28 - auVar20._4_4_ * fVar29;
              fVar18 = auVar20._0_4_ * fVar29 - auVar20._8_4_ * fVar26;
              fVar16 = fVar16 + fVar16;
              fVar17 = fVar17 + fVar17;
              fVar18 = fVar18 + fVar18;
              local_110 = (double)((fVar16 * fVar28 - fVar18 * fVar29) + fVar30 * fVar17 + fVar19);
              local_100 = (double)((fVar18 * fVar26 - fVar17 * fVar28) + fVar30 * fVar16 + fVar23);
              local_108 = (double)((fVar17 * fVar29 - fVar16 * fVar26) + fVar30 * fVar18 + fVar22);
              FUN_146dae232(lVar4,&local_e0,&local_110,&local_f8);
              if (local_c8 == '\x01') {
                FUN_146dae152(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(lVar14 + 8) + 0x60) +
                               (*(int *)(lVar14 + 0x10) + lVar11) * 8),&local_f8,&local_e0);
                auVar20 = insertps(ZEXT416((uint)(float)local_f8),ZEXT416((uint)(float)local_f0),
                                   0x1c);
                auVar5._4_4_ = extraout_XMM0_Db;
                auVar5._0_4_ = (float)local_e8;
                auVar5._8_4_ = extraout_XMM0_Dc;
                auVar5._12_4_ = extraout_XMM0_Dd;
                auVar20 = insertps(auVar20,auVar5,0x28);
                fVar18 = auVar20._0_4_;
                fVar19 = auVar20._4_4_;
                fVar23 = auVar20._8_4_;
                fVar16 = fVar19 * fVar31 - fVar27 * fVar18;
                fVar17 = fVar23 * fVar27 - fVar7 * fVar19;
                fVar22 = fVar18 * fVar7 - fVar31 * fVar23;
                fVar16 = fVar16 + fVar16;
                fVar17 = fVar17 + fVar17;
                fVar22 = fVar22 + fVar22;
                fVar18 = (fVar16 * fVar27 - fVar22 * fVar7) + fVar8 * fVar17 + fVar18;
                fVar19 = (fVar17 * fVar7 - fVar16 * fVar31) + fVar8 * fVar22 + fVar19;
                fVar22 = (fVar22 * fVar31 - fVar17 * fVar27) + fVar8 * fVar16 + fVar23;
                auVar33._4_12_ = unaff_XMM12._4_12_;
                auVar33._0_4_ = (float)local_e0;
                auVar6._4_4_ = unaff_XMM11_Db;
                auVar6._0_4_ = (float)local_d8;
                auVar6._8_4_ = unaff_XMM11_Dc;
                auVar6._12_4_ = unaff_XMM11_Dd;
                auVar20 = insertps(auVar33,auVar6,0x1c);
                unaff_XMM12 = insertps(auVar20,ZEXT416((uint)(float)local_d0),0x28);
                fVar29 = unaff_XMM12._0_4_;
                fVar30 = unaff_XMM12._4_4_;
                fVar34 = unaff_XMM12._8_4_;
                fVar23 = fVar30 * fVar31 - fVar27 * fVar29;
                fVar26 = fVar34 * fVar27 - fVar7 * fVar30;
                fVar28 = fVar29 * fVar7 - fVar31 * fVar34;
                fVar23 = fVar23 + fVar23;
                fVar26 = fVar26 + fVar26;
                fVar28 = fVar28 + fVar28;
                lVar3 = *(longlong *)param_1[2];
                fVar16 = *(float *)(lVar3 + 8 + lVar15);
                fVar17 = *(float *)(lVar3 + 4 + lVar15);
                unaff_XMM11_Db = 0;
                unaff_XMM11_Dc = 0;
                unaff_XMM11_Dd = 0;
                fVar27 = ((auVar32._8_4_ +
                          (fVar28 * fVar31 - fVar26 * fVar27) + fVar8 * fVar23 + fVar34) - fVar16) *
                         fVar22 + ((auVar32._0_4_ +
                                   (fVar23 * fVar27 - fVar28 * fVar7) + fVar8 * fVar26 + fVar29) -
                                  *(float *)(lVar3 + lVar15)) * fVar18 +
                                  ((auVar32._4_4_ +
                                   (fVar26 * fVar7 - fVar23 * fVar31) + fVar8 * fVar28 + fVar30) -
                                  fVar17) * fVar19;
                fVar31 = 0.0;
                if (0.0 <= fVar27) {
                  fVar31 = fVar27;
                }
                fVar31 = fVar31 + 0.1;
                *(float *)(lVar3 + lVar15) = fVar18 * fVar31 + *(float *)(lVar3 + lVar15);
                *(float *)(lVar3 + 4 + lVar15) = fVar19 * fVar31 + fVar17;
                *(float *)(lVar3 + 8 + lVar15) = fVar31 * fVar22 + fVar16;
              }
              iVar9 = *(int *)(lVar14 + 0x14);
            }
            lVar11 = lVar11 + 1;
            pfVar13 = pfVar13 + 0xc;
          } while (lVar11 < iVar9);
        }
        lVar14 = lVar14 + 0x18;
      } while (lVar14 != local_118);
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e1e52e FUN_146e1e52e body=308 status=ok
// SIG undefined FUN_146e1e52e(void)

void FUN_146e1e52e(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  
  iVar8 = param_2 * 0x80 + 0x80;
  if (*(int *)(param_1[1] + 0x14) < iVar8) {
    iVar8 = *(int *)(param_1[1] + 0x14);
  }
  lVar5 = (longlong)(int)((longlong *)param_1[3])[1];
  if (lVar5 != 0) {
    lVar9 = *(longlong *)param_1[3];
    lVar1 = *param_1;
    lVar5 = lVar5 * 0x18;
    do {
      lVar2 = *(longlong *)(lVar9 + 8);
      lVar7 = (longlong)*(int *)(lVar9 + 0x10);
      lVar4 = lVar7 * 0xc;
      lVar3 = *(longlong *)(param_1[1] + 8);
      lVar6 = (longlong)*(int *)(param_1[1] + 0x10);
      FUN_141d1af10(lVar6 * 0x10 + *(longlong *)(lVar3 + 0xa8),
                    lVar6 * 0xc + *(longlong *)(lVar3 + 0x28),lVar4 + *(longlong *)(lVar2 + 0x78),
                    *(longlong *)(lVar2 + 0x28) + lVar4,*(longlong *)(lVar2 + 0x90) + lVar4,
                    lVar7 * 0x10 + *(longlong *)(lVar2 + 0x48),*(undefined4 *)(lVar1 + 0xc),
                    *(undefined4 *)(lVar1 + 8),lVar9,lVar7 * 8 + *(longlong *)(lVar2 + 0x60),0x20,
                    0x1c,0x10,(int)param_1[2],*(undefined4 *)(lVar9 + 0x14),param_2 * 0x80,iVar8);
      lVar9 = lVar9 + 0x18;
      lVar5 = lVar5 + -0x18;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 146e1e66a FUN_146e1e66a body=293 status=ok
// SIG undefined FUN_146e1e66a(void)

void FUN_146e1e66a(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  
  iVar8 = param_2 * 0x80 + 0x80;
  if (*(int *)(param_1[1] + 0x14) < iVar8) {
    iVar8 = *(int *)(param_1[1] + 0x14);
  }
  lVar5 = (longlong)(int)((longlong *)param_1[3])[1];
  if (lVar5 != 0) {
    lVar9 = *(longlong *)param_1[3];
    lVar1 = *param_1;
    lVar5 = lVar5 * 0x18;
    do {
      lVar2 = *(longlong *)(lVar9 + 8);
      lVar7 = (longlong)*(int *)(lVar9 + 0x10);
      lVar4 = lVar7 * 0xc;
      lVar3 = *(longlong *)(param_1[1] + 8);
      lVar6 = (longlong)*(int *)(param_1[1] + 0x10);
      FUN_141d1b4c0(lVar6 * 0x10 + *(longlong *)(lVar3 + 0xa8),
                    lVar6 * 0xc + *(longlong *)(lVar3 + 0x28),lVar4 + *(longlong *)(lVar2 + 0x78),
                    *(longlong *)(lVar2 + 0x28) + lVar4,*(longlong *)(lVar2 + 0x90) + lVar4,
                    lVar7 * 0x10 + *(longlong *)(lVar2 + 0x48),*(undefined4 *)(lVar1 + 8),lVar9,
                    lVar7 * 8 + *(longlong *)(lVar2 + 0x60),0x20,0x1c,0x10,(int)param_1[2],
                    *(undefined4 *)(lVar9 + 0x14),param_2 * 0x80,iVar8);
      lVar9 = lVar9 + 0x18;
      lVar5 = lVar5 + -0x18;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 146e1e790 FUN_146e1e790 body=299 status=ok
// SIG undefined FUN_146e1e790(void)

void FUN_146e1e790(longlong param_1,float *param_2,longlong param_3,int param_4,float param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  lVar2 = (longlong)param_4;
  lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 8) + 4 + lVar2 * 8) +
          (longlong)*(int *)(param_3 + 0x10);
  lVar1 = *(longlong *)(*(longlong *)(param_3 + 8) + 0x90);
  fVar5 = *(float *)(lVar1 + lVar3 * 4);
  lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + 8) + lVar2 * 8) +
          (longlong)*(int *)(param_3 + 0x10);
  fVar6 = 0.0;
  fVar9 = *(float *)(lVar1 + lVar4 * 4);
  if ((fVar5 == 0.0) && (!NAN(fVar5))) {
    fVar7 = 0.0;
    fVar8 = 0.0;
    if ((fVar9 == 0.0) && (!NAN(fVar9))) goto LAB_146e1e8a3;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_3 + 8) + 0xa8);
  lVar4 = lVar4 * 0x10;
  lVar3 = lVar3 * 0x10;
  fVar8 = *(float *)(lVar1 + 8 + lVar4) - *(float *)(lVar1 + 8 + lVar3);
  fVar7 = *(float *)(lVar1 + 4 + lVar4) - *(float *)(lVar1 + 4 + lVar3);
  fVar6 = *(float *)(lVar1 + lVar4) - *(float *)(lVar1 + lVar3);
  fVar5 = fVar5 + fVar9;
  fVar9 = fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7;
  if (0.0001 <= fVar9) {
    fVar9 = SQRT(fVar9);
    fVar8 = fVar8 / fVar9;
    fVar7 = fVar7 / fVar9;
    fVar6 = fVar6 / fVar9;
  }
  else {
    fVar7 = 0.0;
    fVar6 = 1.0;
    fVar8 = 0.0;
    fVar9 = 0.0;
  }
  fVar9 = fVar9 - *(float *)(*(longlong *)(param_1 + 0x18) + lVar2 * 4);
  fVar8 = (fVar9 * fVar8 * param_5) / fVar5;
  fVar7 = (fVar7 * fVar9 * param_5) / fVar5;
  fVar6 = (fVar6 * fVar9 * param_5) / fVar5;
LAB_146e1e8a3:
  *param_2 = fVar6;
  param_2[1] = fVar7;
  param_2[2] = fVar8;
  return;
}



// FUNCTION 146e1e8bc FUN_146e1e8bc body=48 status=ok
// SIG undefined FUN_146e1e8bc(void)

void FUN_146e1e8bc(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,1,1);
  }
  return;
}



// FUNCTION 146e1e8ec FUN_146e1e8ec body=132 status=ok
// SIG undefined FUN_146e1e8ec(void)

void FUN_146e1e8ec(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146e1e972 FUN_146e1e972 body=62 status=ok
// SIG undefined FUN_146e1e972(void)

void FUN_146e1e972(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146e1e9b0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,4,4);
  }
  return;
}



// FUNCTION 146e1e9b0 FUN_146e1e9b0 body=93 status=ok
// SIG undefined FUN_146e1e9b0(void)

ulonglong FUN_146e1e9b0(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff000U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 2,4);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 146e1ea0e FUN_146e1ea0e body=118 status=ok
// SIG undefined FUN_146e1ea0e(void)

void FUN_146e1ea0e(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146e1e8ec(param_1);
    }
    memset((void *)((longlong)iVar1 * 4 + *param_1),0,(longlong)(param_2 - iVar1) << 2);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_146e1e972(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146e1ea86 FUN_146e1ea86 body=48 status=ok
// SIG undefined FUN_146e1ea86(void)

void FUN_146e1ea86(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,4,4);
  }
  return;
}



// FUNCTION 146e1eab6 FUN_146e1eab6 body=109 status=ok
// SIG undefined FUN_146e1eab6(void)

void FUN_146e1eab6(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x2c,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x2c)) {
      uVar2 = uVar1 / 0x2c & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x2c,4);
  }
  return;
}



// FUNCTION 146e1eb24 FUN_146e1eb24 body=48 status=ok
// SIG undefined FUN_146e1eb24(void)

void FUN_146e1eb24(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,4);
  }
  return;
}



// FUNCTION 146e1eb54 FUN_146e1eb54 body=132 status=ok
// SIG undefined FUN_146e1eb54(void)

void FUN_146e1eb54(longlong param_1,int param_2)

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



// FUNCTION 146e1ebda FUN_146e1ebda body=62 status=ok
// SIG undefined FUN_146e1ebda(void)

void FUN_146e1ebda(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146e1ec18(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 146e1ec18 FUN_146e1ec18 body=93 status=ok
// SIG undefined FUN_146e1ec18(void)

ulonglong FUN_146e1ec18(uint param_1,uint param_2)

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



// FUNCTION 146e1ec76 FUN_146e1ec76 body=96 status=ok
// SIG undefined FUN_146e1ec76(void)

void FUN_146e1ec76(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 146e1ecd6 FUN_146e1ecd6 body=30 status=ok
// SIG undefined FUN_146e1ecd6(void)

void FUN_146e1ecd6(longlong param_1)

{
  FUN_146e1ecf4(param_1 + 0x10);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 146e1ecf4 FUN_146e1ecf4 body=59 status=ok
// SIG undefined FUN_146e1ecf4(void)

void FUN_146e1ecf4(longlong *param_1)

{
  FUN_146e19c5d(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146e1ed30 FUN_146e1ed30 body=71 status=ok
// SIG undefined FUN_146e1ed30(void)

void FUN_146e1ed30(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146e1a6b4();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 8) = param_2;
      FUN_146e1edd8();
      return;
    }
  }
  return;
}



// FUNCTION 146e1ed78 FUN_146e1ed78 body=95 status=ok
// SIG undefined FUN_146e1ed78(void)

void FUN_146e1ed78(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146e1a6b4(param_1,iVar1);
    }
    FUN_146e1ee86((longlong)iVar1 * 0x30 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      *(int *)(param_1 + 1) = param_2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146e1edd8 FUN_146e1edd8 body=62 status=ok
// SIG undefined FUN_146e1edd8(void)

void FUN_146e1edd8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146e1ee16(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,4);
  }
  return;
}



// FUNCTION 146e1ee16 FUN_146e1ee16 body=112 status=ok
// SIG undefined FUN_146e1ee16(void)

ulonglong FUN_146e1ee16(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x30) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146e1ee50;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x30,4);
      param_2 = param_2 / 0x30;
    }
  }
LAB_146e1ee50:
  return param_2 & 0xffffffff;
}



// FUNCTION 146e1ee86 FUN_146e1ee86 body=1091 status=ok
// SIG undefined FUN_146e1ee86(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146e1ee86(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 auVar18 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar19 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar20 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar21 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar22 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar23 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar24 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar25 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  longlong lVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 unaff_XMM14 [16];
  undefined1 auVar39 [16];
  
  auVar14 = _DAT_149931e80;
  if (param_2 != 0) {
    lVar16 = (ulonglong)param_2 - 1;
    auVar18._8_4_ = (int)lVar16;
    auVar18._0_8_ = lVar16;
    auVar18._12_4_ = (int)((ulonglong)lVar16 >> 0x20);
    puVar15 = (undefined1 *)(param_1 + 0x2c);
    uVar17 = 0;
    auVar19 = pmovsxbq(in_XMM1,0xf0e);
    auVar20 = pmovsxbq(in_XMM2,0xd0c);
    auVar21 = pmovsxbq(in_XMM3,0xb0a);
    auVar22 = pmovsxbq(in_XMM4,0x908);
    auVar23 = pmovsxbq(in_XMM5,0x706);
    auVar24 = pmovsxbq(unaff_XMM6,0x504);
    auVar25 = pmovsxbq(unaff_XMM7,0x302);
    auVar26 = pmovsxbq(unaff_XMM8,0x100);
    do {
      auVar27._8_4_ = (int)uVar17;
      auVar27._0_8_ = uVar17;
      auVar27._12_4_ = (int)(uVar17 >> 0x20);
      auVar29 = auVar18 ^ auVar14;
      auVar31 = (auVar27 | auVar26) ^ auVar14;
      lVar16 = auVar29._0_8_;
      auVar32._0_8_ = -(ulonglong)(lVar16 < auVar31._0_8_);
      lVar30 = auVar29._8_8_;
      auVar32._8_8_ = -(ulonglong)(lVar30 < auVar31._8_8_);
      auVar39 = pshuflw(unaff_XMM14,auVar32,0xe8);
      auVar31._8_4_ = 0xffffffff;
      auVar31._0_8_ = 0xffffffffffffffff;
      auVar31._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar39 ^ auVar31,auVar39 ^ auVar31);
      if ((auVar31._0_4_ & 1) != 0) {
        *puVar15 = 0;
      }
      auVar32 = packssdw(auVar32,auVar32);
      auVar39._8_4_ = 0xffffffff;
      auVar39._0_8_ = 0xffffffffffffffff;
      auVar39._12_4_ = 0xffffffff;
      auVar32 = packssdw(auVar32 ^ auVar39,auVar32 ^ auVar39);
      auVar32 = packsswb(auVar32,auVar32);
      if ((auVar32[1] & 1) != 0) {
        puVar15[0x30] = 0;
      }
      auVar32 = (auVar27 | auVar25) ^ auVar14;
      auVar33._0_8_ = -(ulonglong)(lVar16 < auVar32._0_8_);
      auVar33._8_8_ = -(ulonglong)(lVar30 < auVar32._8_8_);
      auVar31 = packssdw(auVar31,auVar33);
      auVar1._8_4_ = 0xffffffff;
      auVar1._0_8_ = 0xffffffffffffffff;
      auVar1._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar1,auVar31 ^ auVar1);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[2] & 1) != 0) {
        puVar15[0x60] = 0;
      }
      auVar32 = pshufhw(auVar33,auVar33,0x84);
      auVar2._8_4_ = 0xffffffff;
      auVar2._0_8_ = 0xffffffffffffffff;
      auVar2._12_4_ = 0xffffffff;
      auVar32 = packssdw(auVar32 ^ auVar2,auVar32 ^ auVar2);
      auVar32 = packsswb(auVar32,auVar32);
      if ((auVar32[3] & 1) != 0) {
        puVar15[0x90] = 0;
      }
      auVar32 = (auVar27 | auVar24) ^ auVar14;
      auVar34._0_8_ = -(ulonglong)(lVar16 < auVar32._0_8_);
      auVar34._8_8_ = -(ulonglong)(lVar30 < auVar32._8_8_);
      auVar31 = pshuflw(auVar31,auVar34,0xe8);
      auVar3._8_4_ = 0xffffffff;
      auVar3._0_8_ = 0xffffffffffffffff;
      auVar3._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar3,auVar31 ^ auVar3);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[4] & 1) != 0) {
        puVar15[0xc0] = 0;
      }
      auVar32 = packssdw(auVar34,auVar34);
      auVar4._8_4_ = 0xffffffff;
      auVar4._0_8_ = 0xffffffffffffffff;
      auVar4._12_4_ = 0xffffffff;
      auVar32 = packssdw(auVar32 ^ auVar4,auVar32 ^ auVar4);
      auVar32 = packsswb(auVar32,auVar32);
      if ((auVar32[5] & 1) != 0) {
        puVar15[0xf0] = 0;
      }
      auVar32 = (auVar27 | auVar23) ^ auVar14;
      auVar35._0_8_ = -(ulonglong)(lVar16 < auVar32._0_8_);
      auVar35._8_8_ = -(ulonglong)(lVar30 < auVar32._8_8_);
      auVar31 = packssdw(auVar31,auVar35);
      auVar5._8_4_ = 0xffffffff;
      auVar5._0_8_ = 0xffffffffffffffff;
      auVar5._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar5,auVar31 ^ auVar5);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[6] & 1) != 0) {
        puVar15[0x120] = 0;
      }
      auVar32 = pshufhw(auVar35,auVar35,0x84);
      auVar6._8_4_ = 0xffffffff;
      auVar6._0_8_ = 0xffffffffffffffff;
      auVar6._12_4_ = 0xffffffff;
      auVar32 = packssdw(auVar32 ^ auVar6,auVar32 ^ auVar6);
      auVar32 = packsswb(auVar32,auVar32);
      if ((auVar32[7] & 1) != 0) {
        puVar15[0x150] = 0;
      }
      auVar32 = (auVar27 | auVar22) ^ auVar14;
      auVar36._0_8_ = -(ulonglong)(lVar16 < auVar32._0_8_);
      auVar36._8_8_ = -(ulonglong)(lVar30 < auVar32._8_8_);
      auVar31 = pshuflw(auVar31,auVar36,0xe8);
      auVar7._8_4_ = 0xffffffff;
      auVar7._0_8_ = 0xffffffffffffffff;
      auVar7._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar7,auVar31 ^ auVar7);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[8] & 1) != 0) {
        puVar15[0x180] = 0;
      }
      auVar32 = packssdw(auVar36,auVar36);
      auVar8._8_4_ = 0xffffffff;
      auVar8._0_8_ = 0xffffffffffffffff;
      auVar8._12_4_ = 0xffffffff;
      auVar32 = packssdw(auVar32 ^ auVar8,auVar32 ^ auVar8);
      auVar32 = packsswb(auVar32,auVar32);
      if ((auVar32[9] & 1) != 0) {
        puVar15[0x1b0] = 0;
      }
      auVar32 = (auVar27 | auVar21) ^ auVar14;
      auVar37._0_8_ = -(ulonglong)(lVar16 < auVar32._0_8_);
      auVar37._8_8_ = -(ulonglong)(lVar30 < auVar32._8_8_);
      auVar31 = packssdw(auVar31,auVar37);
      auVar9._8_4_ = 0xffffffff;
      auVar9._0_8_ = 0xffffffffffffffff;
      auVar9._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar9,auVar31 ^ auVar9);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[10] & 1) != 0) {
        puVar15[0x1e0] = 0;
      }
      auVar32 = pshufhw(auVar37,auVar37,0x84);
      auVar10._8_4_ = 0xffffffff;
      auVar10._0_8_ = 0xffffffffffffffff;
      auVar10._12_4_ = 0xffffffff;
      auVar32 = packssdw(auVar32 ^ auVar10,auVar32 ^ auVar10);
      auVar32 = packsswb(auVar32,auVar32);
      if ((auVar32[0xb] & 1) != 0) {
        puVar15[0x210] = 0;
      }
      auVar32 = (auVar27 | auVar20) ^ auVar14;
      auVar38._0_8_ = -(ulonglong)(lVar16 < auVar32._0_8_);
      auVar38._8_8_ = -(ulonglong)(lVar30 < auVar32._8_8_);
      auVar31 = pshuflw(auVar31,auVar38,0xe8);
      auVar11._8_4_ = 0xffffffff;
      auVar11._0_8_ = 0xffffffffffffffff;
      auVar11._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar11,auVar31 ^ auVar11);
      unaff_XMM14 = packsswb(auVar31,auVar31);
      if ((unaff_XMM14[0xc] & 1) != 0) {
        puVar15[0x240] = 0;
      }
      auVar31 = packssdw(auVar38,auVar38);
      auVar12._8_4_ = 0xffffffff;
      auVar12._0_8_ = 0xffffffffffffffff;
      auVar12._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar12,auVar31 ^ auVar12);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[0xd] & 1) != 0) {
        puVar15[0x270] = 0;
      }
      auVar31 = (auVar27 | auVar19) ^ auVar14;
      auVar28._0_8_ = -(ulonglong)(lVar16 < auVar31._0_8_);
      auVar28._8_8_ = -(ulonglong)(lVar30 < auVar31._8_8_);
      auVar31 = packssdw(auVar29,auVar28);
      auVar29._8_4_ = 0xffffffff;
      auVar29._0_8_ = 0xffffffffffffffff;
      auVar29._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar29,auVar31 ^ auVar29);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[0xe] & 1) != 0) {
        puVar15[0x2a0] = 0;
      }
      auVar31 = pshufhw(auVar28,auVar28,0x84);
      auVar13._8_4_ = 0xffffffff;
      auVar13._0_8_ = 0xffffffffffffffff;
      auVar13._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar13,auVar31 ^ auVar13);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[0xf] & 1) != 0) {
        puVar15[0x2d0] = 0;
      }
      uVar17 = uVar17 + 0x10;
      puVar15 = puVar15 + 0x300;
    } while (((ulonglong)param_2 + 0xf & 0xfffffffffffffff0) != uVar17);
  }
  return;
}



// FUNCTION 146e1f2ca FUN_146e1f2ca body=113 status=ok
// SIG undefined FUN_146e1f2ca(void)

void FUN_146e1f2ca(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146e1f33c(param_1,iVar1);
    }
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_146e1f3cc(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146e1f33c FUN_146e1f33c body=143 status=ok
// SIG undefined FUN_146e1f33c(void)

void FUN_146e1f33c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x2c,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x2c)) {
      uVar5 = uVar4 / 0x2c & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x2c,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146e1f3cc FUN_146e1f3cc body=62 status=ok
// SIG undefined FUN_146e1f3cc(void)

void FUN_146e1f3cc(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146e1f40a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x2c,4);
  }
  return;
}



// FUNCTION 146e1f40a FUN_146e1f40a body=104 status=ok
// SIG undefined FUN_146e1f40a(void)

ulonglong FUN_146e1f40a(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x2c) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146e1f440;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x2c,4);
      param_2 = param_2 / 0x2c;
    }
  }
LAB_146e1f440:
  return param_2 & 0xffffffff;
}



// FUNCTION 146e1f472 FUN_146e1f472 body=302 status=ok
// SIG undefined FUN_146e1f472(void)

void FUN_146e1f472(longlong param_1,longlong param_2,longlong param_3,longlong param_4,int param_5,
                  uint param_6,uint param_7)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  double dVar4;
  undefined1 auStack_b8 [40];
  longlong local_90;
  longlong local_88;
  longlong local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90 = param_3;
  local_88 = param_1;
  local_80 = param_4;
  if (0 < (int)param_6) {
    uVar3 = (ulonglong)param_6;
    uVar2 = 0;
    do {
      if ((param_7 >> ((uint)uVar2 & 0x1f) & 1) != 0) {
        local_68 = (double)*(float *)(param_2 + (ulonglong)(param_6 * 2) * 4 + uVar2 * 4);
        local_70 = (double)*(float *)(param_2 + uVar3 * 4 + uVar2 * 4);
        local_78 = (double)*(float *)(param_2 + uVar2 * 4);
        plVar1 = *(longlong **)(*(longlong *)(local_88 + 0x60) + (longlong)param_5 * 8);
        dVar4 = (double)(**(code **)(*plVar1 + 0x70))(plVar1,&local_78,&local_60);
        *(float *)(local_80 + uVar2 * 4) = (float)dVar4;
        *(float *)(local_90 + uVar2 * 4) = (float)local_60;
        *(float *)(param_3 + uVar3 * 4 + uVar2 * 4) = (float)local_58;
        *(float *)(param_3 + (ulonglong)(param_6 * 2) * 4 + uVar2 * 4) = (float)local_50;
      }
      uVar2 = uVar2 + 1;
    } while (uVar3 != uVar2);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e1f5a1 FUN_146e1f5a1 body=554 status=ok
// SIG undefined FUN_146e1f5a1(void)

void FUN_146e1f5a1(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,int param_6,float param_7,uint param_8,uint param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  double dVar8;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_f0 = param_4;
  local_e8 = param_2;
  local_e0 = param_3;
  local_d8 = param_1;
  if (0 < (int)param_8) {
    uVar7 = (ulonglong)param_8;
    uVar6 = 0;
    do {
      if ((param_9 >> ((uint)uVar6 & 0x1f) & 1) != 0) {
        fVar1 = *(float *)(local_e8 + uVar6 * 4);
        fVar2 = *(float *)(param_2 + uVar7 * 4 + uVar6 * 4);
        fVar3 = *(float *)(param_2 + (ulonglong)(param_8 * 2) * 4 + uVar6 * 4);
        *(int *)(param_5 + uVar6 * 4) = param_6;
        plVar4 = *(longlong **)(*(longlong *)(local_d8 + 0x60) + (longlong)param_6 * 8);
        if ((plVar4 == (longlong *)0x0) || (*(char *)((longlong)plVar4 + 0x1c) != '&')) {
          local_a8 = (double)fVar3;
          dStack_b0 = (double)fVar2;
          local_b8 = (double)fVar1;
          dVar8 = (double)(**(code **)(*plVar4 + 0x70))(plVar4,&local_b8,&local_88);
          *(float *)(local_f0 + uVar6 * 4) = (float)dVar8;
        }
        else {
          local_b8 = -NAN;
          dStack_b0 = -NAN;
          local_c0 = (double)fVar3;
          local_c8 = (double)fVar2;
          local_d0 = (double)fVar1;
          local_f8 = 0;
          dVar8 = (double)FUN_146e420d2(plVar4,&local_d0,&local_88,&local_b8);
          *(float *)(local_f0 + uVar6 * 4) = (float)dVar8;
          if ((float)dVar8 < param_7) {
            iVar5 = FUN_146df7e64(&local_b8,plVar4 + 0xf);
            if (iVar5 != -1) {
              *(undefined4 *)(param_5 + uVar6 * 4) =
                   *(undefined4 *)(plVar4[0x28] + (longlong)iVar5 * 4);
            }
          }
        }
        *(float *)(local_e0 + uVar6 * 4) = (float)local_88;
        *(float *)(param_3 + uVar7 * 4 + uVar6 * 4) = (float)local_80;
        *(float *)(param_3 + (ulonglong)(param_8 * 2) * 4 + uVar6 * 4) = (float)local_78;
      }
      uVar6 = uVar6 + 1;
    } while (uVar7 != uVar6);
  }
  if ((local_70 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e1f7cc FUN_146e1f7cc body=41 status=ok
// SIG undefined FUN_146e1f7cc(void)

undefined8 FUN_146e1f7cc(uint *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 < 0x1000000) {
    return 0;
  }
  FUN_140175a60();
  uVar1 = FUN_146e1f7f6(*param_1);
  return uVar1;
}



// FUNCTION 146e1f7f6 FUN_146e1f7f6 body=89 status=ok
// SIG undefined FUN_146e1f7f6(void)

undefined8 FUN_146e1f7f6(undefined4 param_1)

{
  undefined8 uVar1;
  
  if (DAT_14c992a90 != '\0') {
    AcquireSRWLockShared((PSRWLOCK)&DAT_14c994a40);
    uVar1 = FUN_146e1f850(&DAT_14c9949e8,param_1);
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14c994a40);
    return uVar1;
  }
  uVar1 = FUN_146e1f850(&DAT_14c9949e8,param_1);
  return uVar1;
}



// FUNCTION 146e1f850 FUN_146e1f850 body=85 status=ok
// SIG undefined FUN_146e1f850(void)

longlong FUN_146e1f850(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  
  if ((0xffffff < param_2) && (uVar1 = param_2 & 0xffffff, (int)uVar1 < *(int *)(param_1 + 0x30))) {
    lVar2 = param_1 + 0x18;
    if (*(longlong *)(param_1 + 0x28) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x28);
    }
    if (((*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) &&
       ((param_2 ^ *(uint *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar1 * 4)) < 0x1000000)) {
      return (ulonglong)(uVar1 * 0x28) + *(longlong *)(param_1 + 0x38);
    }
  }
  return 0;
}



// FUNCTION 146e1f8a6 FUN_146e1f8a6 body=9 status=ok
// SIG undefined FUN_146e1f8a6(void)

void FUN_146e1f8a6(longlong param_1)

{
  FUN_146e2d4c2(param_1 + 0x48);
  return;
}



// FUNCTION 146e1f8b0 FUN_146e1f8b0 body=161 status=ok
// SIG undefined FUN_146e1f8b0(void)

undefined4 * FUN_146e1f8b0(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c992a90 == '\x01') {
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x138));
    FUN_146e1f952(param_1 + 0xe0,&local_2c);
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x138));
  }
  else {
    FUN_146e1f952(param_1 + 0xe0,&local_2c);
  }
  *param_2 = local_2c;
  FUN_146e2d4c2(param_1 + 0x60,local_2c);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e1f952 FUN_146e1f952 body=322 status=ok
// SIG undefined FUN_146e1f952(void)

uint * FUN_146e1f952(uint *param_1,uint *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  uVar9 = *param_1;
  lVar6 = (longlong)(int)uVar9;
  if (lVar6 == 0xffffff) {
    uVar9 = param_1[0x10];
    if (uVar9 == param_1[0x11]) {
      uVar5 = FUN_14001fdce(*(undefined8 *)(param_1 + 0xe),(ulonglong)(uVar9 + 4) * 0x28,8);
      *(undefined8 *)(param_1 + 0xe) = uVar5;
      param_1[0x11] = param_1[0x11] + 4;
      uVar9 = param_1[0x10];
    }
    FUN_146e2d564(param_1 + 2);
    iVar4 = FUN_144a54ea4(param_1 + 6,1);
    puVar7 = *(uint **)(param_1 + 10);
    if (*(uint **)(param_1 + 10) == (uint *)0x0) {
      puVar7 = param_1 + 6;
    }
    iVar8 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar8 = iVar4;
    }
    puVar7[iVar8 >> 5] = puVar7[iVar8 >> 5] | 1 << ((byte)iVar4 & 0x1f);
    param_1[0x10] = param_1[0x10] + 1;
    lVar6 = (longlong)(int)uVar9;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 2);
    puVar7 = param_1 + 6;
    if (*(uint **)(param_1 + 10) != (uint *)0x0) {
      puVar7 = *(uint **)(param_1 + 10);
    }
    uVar10 = uVar9 + 0x1f;
    if (-1 < (int)uVar9) {
      uVar10 = uVar9;
    }
    puVar7[(int)uVar10 >> 5] = puVar7[(int)uVar10 >> 5] | 1 << ((byte)uVar9 & 0x1f);
    *param_1 = *(uint *)(lVar3 + lVar6 * 4) & 0xffffff;
    puVar7 = (uint *)(lVar3 + lVar6 * 4);
    *puVar7 = *puVar7 | 0xffffff;
  }
  lVar3 = *(longlong *)(param_1 + 0xe);
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar6 * 0x28);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + lVar6 * 0x28);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(lVar3 + 0x20 + lVar6 * 0x28) = 0;
  param_1[0x12] = param_1[0x12] + 1;
  uVar10 = 0;
  if (((-1 < (int)uVar9) && (uVar10 = 0, (int)uVar9 < (int)param_1[4])) &&
     (uVar2 = *(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar9 * 4), 0xffffff < uVar2)) {
    uVar10 = uVar9 & 0xffffff | uVar2 & 0xff000000;
  }
  *param_2 = uVar10;
  return param_2;
}



// FUNCTION 146e1fa94 FUN_146e1fa94 body=120 status=ok
// SIG undefined FUN_146e1fa94(void)

void FUN_146e1fa94(longlong param_1,uint param_2)

{
  if (param_2 < 0x1000000) {
    return;
  }
  FUN_146e2d4c2(param_1 + 0x78);
  if (DAT_14c992a90 == '\x01') {
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x138));
    FUN_146e1fb0c(param_1 + 0xe0,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146e1faed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x138));
    return;
  }
  FUN_146e1fb0c(param_1 + 0xe0,param_2);
  return;
}



// FUNCTION 146e1fb0c FUN_146e1fb0c body=174 status=ok
// SIG undefined FUN_146e1fb0c(void)

void FUN_146e1fb0c(uint *param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  uint *puVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if (0xffffff < param_2) {
    uVar5 = param_2 & 0xffffff;
    uVar6 = (ulonglong)uVar5;
    lVar2 = *(longlong *)(param_1 + 2);
    uVar1 = *(uint *)(lVar2 + uVar6 * 4);
    if ((uVar1 ^ param_2) < 0x1000000) {
      *(uint *)(lVar2 + uVar6 * 4) = uVar1 + 0x1000000;
      if (*(longlong *)(*(longlong *)(param_1 + 0xe) + 8 + uVar6 * 0x28) != 0) {
        FUN_1400020a8();
      }
      puVar4 = param_1 + 6;
      if (*(uint **)(param_1 + 10) != (uint *)0x0) {
        puVar4 = *(uint **)(param_1 + 10);
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar4[uVar5 >> 5] = puVar4[uVar5 >> 5] & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_1[0x12] = param_1[0x12] - 1;
      if (0xffffff < *(uint *)(lVar2 + uVar6 * 4)) {
        if (*param_1 != 0xffffff) {
          *(uint *)(*(longlong *)(param_1 + 2) + uVar6 * 4) =
               *param_1 & 0xffffff |
               (uint)*(byte *)(*(longlong *)(param_1 + 2) + 3 + uVar6 * 4) << 0x18;
        }
        *param_1 = uVar5;
      }
    }
  }
  return;
}



// FUNCTION 146e1fbba FUN_146e1fbba body=23 status=ok
// SIG undefined FUN_146e1fbba(void)

void FUN_146e1fbba(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*param_1 + 0xc);
  }
  *param_2 = uVar1;
  return;
}



// FUNCTION 146e1fbd2 FUN_146e1fbd2 body=16 status=ok
// SIG undefined FUN_146e1fbd2(void)

undefined8 FUN_146e1fbd2(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar1 = FUN_146e1fbe2(param_2);
  return uVar1;
}



// FUNCTION 146e1fbe2 FUN_146e1fbe2 body=71 status=ok
// SIG undefined FUN_146e1fbe2(void)

longlong FUN_146e1fbe2(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  do {
    lVar2 = param_1;
    lVar1 = FUN_1429e0e24(lVar2);
    param_1 = FUN_146e1fc2a(lVar2);
    if (param_1 == 0) {
      return lVar2;
    }
    if (lVar1 == 0) {
      return lVar2;
    }
    if (*(byte *)(lVar1 + 0x90) < 2) {
      return lVar2;
    }
  } while (*(char *)(lVar1 + 0x1b9) == '\x01');
  return lVar2;
}



// FUNCTION 146e1fc2a FUN_146e1fc2a body=102 status=ok
// SIG undefined FUN_146e1fc2a(void)

undefined8 FUN_146e1fc2a(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  if (1 < *(int *)(lVar3 + 0x1c) - 0xbU) {
    if (*(int *)(lVar3 + 0x1c) != 2) {
      return 0;
    }
    iVar1 = FUN_144b072ca(*(undefined8 *)(lVar3 + 0x828),(int)param_1[1]);
    if (iVar1 != -1) {
      uVar2 = FUN_142a1e8ec(lVar3,iVar1);
      return uVar2;
    }
    lVar3 = *param_1;
  }
  lVar3 = *(longlong *)(lVar3 + 0x30);
  if ((lVar3 != 0) && (*(int *)(lVar3 + 0x1c) == 0xc)) {
    return *(undefined8 *)(lVar3 + 0x120);
  }
  return 0;
}



// FUNCTION 146e1fc90 FUN_146e1fc90 body=260 status=ok
// SIG undefined FUN_146e1fc90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16] FUN_146e1fc90(undefined8 param_1,undefined1 (*param_2) [16],longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  if (param_3 == 0) {
    puVar12 = &DAT_14c8464f0;
    puVar13 = &DAT_14c8464e0;
    puVar14 = &DAT_14c8464e8;
    dVar5 = DAT_14c8463e0;
    uVar15 = DAT_14c8463e0._8_4_;
    uVar16 = DAT_14c8463e0._12_4_;
    dVar7 = DAT_14c8463d0;
    dVar8 = DAT_14c8463d8;
  }
  else {
    lVar11 = FUN_1429e0e24(param_3);
    if (lVar11 == 0) {
      dVar5 = DAT_14c8463e0;
      uVar15 = DAT_14c8463e0._8_4_;
      dVar3 = (double)((ulonglong)DAT_14c8463e0._12_4_ << 0x20);
      dVar7 = DAT_14c8463d0;
      dVar8 = DAT_14c8463d8;
    }
    else {
      dVar3 = (double)*(float *)(lVar11 + 0x4c);
      uVar15 = SUB84(dVar3,0);
      dVar5 = (double)*(float *)(lVar11 + 0x48);
      dVar7 = (double)*(float *)(lVar11 + 0x40);
      dVar8 = (double)*(float *)(lVar11 + 0x44);
    }
    uVar16 = (undefined4)((ulonglong)dVar3 >> 0x20);
    lVar11 = FUN_1429e0e24(param_3);
    if (lVar11 == 0) {
      puVar12 = &DAT_14c8464f0;
      puVar13 = &DAT_14c8464e0;
      puVar14 = &DAT_14c8464e8;
    }
    else {
      puVar13 = (undefined8 *)(lVar11 + 0x20);
      puVar14 = (undefined8 *)(lVar11 + 0x28);
      puVar12 = (undefined8 *)(lVar11 + 0x30);
    }
  }
  uVar9 = *(undefined4 *)puVar13;
  uVar10 = *(undefined4 *)((longlong)puVar13 + 4);
  uVar1 = *puVar14;
  uVar2 = *puVar12;
  auVar6._8_4_ = SUB84(dVar8,0);
  auVar6._0_8_ = dVar7;
  auVar6._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *param_2 = auVar6;
  auVar4._8_4_ = uVar15;
  auVar4._0_8_ = dVar5;
  auVar4._12_4_ = uVar16;
  param_2[1] = auVar4;
  *(undefined4 *)param_2[2] = uVar9;
  *(undefined4 *)(param_2[2] + 4) = uVar10;
  *(int *)(param_2[2] + 8) = (int)uVar1;
  *(int *)(param_2[2] + 0xc) = (int)((ulonglong)uVar1 >> 0x20);
  *(undefined8 *)param_2[3] = uVar2;
  *(undefined8 *)(param_2[3] + 8) = 0;
  *(undefined8 *)param_2[4] = 0x3ff0000000000000;
  *(undefined8 *)(param_2[4] + 8) = 0x3ff0000000000000;
  *(undefined8 *)param_2[5] = 0x3ff0000000000000;
  *(undefined8 *)(param_2[5] + 8) = 0;
  return param_2;
}



// FUNCTION 146e1fd94 FUN_146e1fd94 body=678 status=ok
// SIG undefined FUN_146e1fd94(void)

double * FUN_146e1fd94(undefined8 param_1,double *param_2,longlong param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  double *pdVar13;
  double *pdVar14;
  double *pdVar15;
  bool bVar16;
  double dVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  
  if (param_3 == 0) {
    uVar19 = (undefined4)DAT_14c8464e0;
    uVar20 = (undefined4)((ulonglong)DAT_14c8464e0 >> 0x20);
    pdVar13 = (double *)&DAT_14c8464e0;
    uVar21 = (undefined4)DAT_14c8464e8;
    uVar22 = (undefined4)((ulonglong)DAT_14c8464e8 >> 0x20);
    pdVar14 = (double *)&DAT_14c8464e8;
    uVar23 = (undefined4)DAT_14c8464f0;
    uVar24 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    pdVar15 = (double *)&DAT_14c8464f0;
    dVar8 = DAT_14c8463d0;
    dVar7 = DAT_14c8463d8;
    dVar5 = DAT_14c8463e8;
    dVar6 = DAT_14c8463e0;
  }
  else {
    lVar9 = FUN_1429e0e24(param_3);
    puVar11 = (undefined8 *)(lVar9 + 0x20);
    bVar16 = lVar9 == 0;
    pdVar13 = (double *)&DAT_14c8464e0;
    if (bVar16) {
      puVar11 = &DAT_14c8464e0;
    }
    puVar12 = (undefined8 *)(lVar9 + 0x28);
    pdVar14 = (double *)&DAT_14c8464e8;
    if (bVar16) {
      puVar12 = &DAT_14c8464e8;
    }
    puVar10 = (undefined8 *)(lVar9 + 0x30);
    pdVar15 = (double *)&DAT_14c8464f0;
    if (bVar16) {
      puVar10 = &DAT_14c8464f0;
    }
    uVar23 = (undefined4)*puVar10;
    uVar24 = (undefined4)((ulonglong)*puVar10 >> 0x20);
    uVar21 = (undefined4)*puVar12;
    uVar22 = (undefined4)((ulonglong)*puVar12 >> 0x20);
    uVar19 = (undefined4)*puVar11;
    uVar20 = (undefined4)((ulonglong)*puVar11 >> 0x20);
    lVar9 = FUN_1429e0e24(param_3);
    dVar5 = DAT_14c8463e8;
    dVar6 = DAT_14c8463e0;
    dVar7 = DAT_14c8463d8;
    dVar8 = DAT_14c8463d0;
    if (lVar9 != 0) {
      dVar5 = (double)*(float *)(lVar9 + 0x4c);
      dVar6 = (double)*(float *)(lVar9 + 0x48);
      dVar7 = (double)*(float *)(lVar9 + 0x44);
      dVar8 = (double)*(float *)(lVar9 + 0x40);
    }
    lVar9 = FUN_1429e0e24(param_3);
    if ((lVar9 != 0) && (1 < *(byte *)(lVar9 + 0x90))) {
      pdVar13 = (double *)(lVar9 + 0xf0);
      pdVar14 = (double *)(lVar9 + 0xf8);
      pdVar15 = (double *)(lVar9 + 0x100);
    }
  }
  dVar1 = *pdVar13;
  dVar2 = *pdVar14;
  dVar3 = *pdVar15;
  dVar18 = dVar7 * dVar3 - dVar2 * dVar6;
  dVar18 = dVar18 + dVar18;
  dVar4 = dVar8 * dVar2 - dVar1 * dVar7;
  dVar4 = dVar4 + dVar4;
  dVar17 = dVar6 * dVar1 - dVar3 * dVar8;
  dVar17 = dVar17 + dVar17;
  *param_2 = (dVar7 * dVar4 - dVar17 * dVar6) + dVar5 * dVar18 + dVar1 +
             (double)CONCAT44(uVar20,uVar19);
  param_2[1] = (dVar6 * dVar18 - dVar4 * dVar8) + dVar5 * dVar17 + dVar2 +
               (double)CONCAT44(uVar22,uVar21);
  param_2[2] = (dVar8 * dVar17 - dVar18 * dVar7) + dVar5 * dVar4 + dVar3 +
               (double)CONCAT44(uVar24,uVar23);
  return param_2;
}



// FUNCTION 146e2003a FUN_146e2003a body=105 status=ok
// SIG undefined FUN_146e2003a(void)

double * FUN_146e2003a(undefined8 param_1,double *param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  longlong lVar4;
  
  if (((param_3 != 0) && (lVar4 = FUN_1429e0e24(param_3), lVar4 != 0)) &&
     (1 < *(byte *)(lVar4 + 0x90))) {
    fVar1 = *(float *)(lVar4 + 0xa0);
    fVar2 = *(float *)(lVar4 + 0x9c);
    *param_2 = (double)*(float *)(lVar4 + 0x98);
    param_2[1] = (double)fVar2;
    param_2[2] = (double)fVar1;
    return param_2;
  }
  param_2[2] = DAT_14c8464f0;
  dVar3 = DAT_14c8464e8;
  *param_2 = DAT_14c8464e0;
  param_2[1] = dVar3;
  return param_2;
}



// FUNCTION 146e200a4 FUN_146e200a4 body=439 status=ok
// SIG undefined FUN_146e200a4(void)

double * FUN_146e200a4(undefined8 param_1,double *param_2,longlong param_3,double *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  longlong lVar9;
  undefined1 auStack_c8 [32];
  double local_a8;
  double local_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_3 == 0) {
    param_2[2] = DAT_14c8464f0;
    dVar6 = DAT_14c8464e8;
    *param_2 = DAT_14c8464e0;
    param_2[1] = dVar6;
  }
  else {
    lVar9 = FUN_1429e0e24(param_3);
    if ((lVar9 == 0) || (*(char *)(lVar9 + 0x90) == '\0')) {
      param_2[2] = DAT_14c8464f0;
      dVar6 = DAT_14c8464e8;
      *param_2 = DAT_14c8464e0;
      param_2[1] = dVar6;
      if ((local_90 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_2;
    }
    FUN_146e1fd94(param_1,&local_a8,param_3);
    dVar6 = param_4[2];
    dVar7 = *param_4;
    dVar8 = param_4[1];
    fVar1 = *(float *)(lVar9 + 0xa0);
    fVar2 = *(float *)(lVar9 + 0x9c);
    fVar3 = *(float *)(lVar9 + 0xac);
    fVar4 = *(float *)(lVar9 + 0xa8);
    fVar5 = *(float *)(lVar9 + 0xa4);
    *param_2 = (double)*(float *)(lVar9 + 0x98) -
               ((dVar8 - local_a0) * (double)fVar3 - (dVar6 - local_98) * (double)fVar4);
    param_2[1] = (double)fVar2 -
                 ((double)fVar5 * (dVar6 - local_98) - (dVar7 - local_a8) * (double)fVar3);
    param_2[2] = (double)fVar1 -
                 ((dVar7 - local_a8) * (double)fVar4 - (dVar8 - local_a0) * (double)fVar5);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_90 ^ (ulonglong)auStack_c8);
}



// FUNCTION 146e2025c FUN_146e2025c body=105 status=ok
// SIG undefined FUN_146e2025c(void)

double * FUN_146e2025c(undefined8 param_1,double *param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  longlong lVar4;
  
  if (((param_3 != 0) && (lVar4 = FUN_1429e0e24(param_3), lVar4 != 0)) &&
     (1 < *(byte *)(lVar4 + 0x90))) {
    fVar1 = *(float *)(lVar4 + 0xac);
    fVar2 = *(float *)(lVar4 + 0xa8);
    *param_2 = (double)*(float *)(lVar4 + 0xa4);
    param_2[1] = (double)fVar2;
    param_2[2] = (double)fVar1;
    return param_2;
  }
  param_2[2] = DAT_14c8464f0;
  dVar3 = DAT_14c8464e8;
  *param_2 = DAT_14c8464e0;
  param_2[1] = dVar3;
  return param_2;
}



// FUNCTION 146e202c6 FUN_146e202c6 body=16 status=ok
// SIG undefined FUN_146e202c6(void)

undefined8 FUN_146e202c6(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_1429e0e24(param_2);
    return uVar1;
  }
  return 0;
}



// FUNCTION 146e202d6 FUN_146e202d6 body=220 status=ok
// SIG undefined FUN_146e202d6(void)

void FUN_146e202d6(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_88 [40];
  longlong *local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((longlong)(int)param_2[1] != 0) {
    plVar6 = (longlong *)*param_2;
    local_60 = plVar6 + (int)param_2[1];
    do {
      lVar2 = *plVar6;
      if (lVar2 != 0) {
        lVar4 = FUN_1429e0e24(lVar2);
        if (lVar4 != 0) {
          lVar5 = lVar4 + 0x78;
          if (*(longlong *)(lVar4 + 0x80) != 0) {
            lVar5 = *(longlong *)(lVar4 + 0x80);
          }
          iVar1 = *(int *)(lVar4 + 0x88);
          if ((longlong)iVar1 != 0) {
            lVar4 = 0;
            do {
              local_50 = *(undefined8 *)(lVar5 + lVar4);
              local_58 = lVar2;
              cVar3 = (*(code *)*param_3)(param_3[1],&local_58,&local_50);
              if (cVar3 != '\0') goto LAB_146e2038b;
              lVar4 = lVar4 + 8;
            } while ((longlong)iVar1 * 8 != lVar4);
          }
        }
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != local_60);
  }
LAB_146e2038b:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e203b4 FUN_146e203b4 body=134 status=ok
// SIG undefined FUN_146e203b4(void)

ulonglong FUN_146e203b4(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  longlong lVar6;
  bool bVar7;
  
  lVar2 = param_2[1];
  if ((longlong)(int)lVar2 == 0) {
    uVar5 = 0;
  }
  else {
    lVar1 = *param_2;
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    lVar6 = 0;
    do {
      if (((*(longlong **)(lVar1 + lVar6) == (longlong *)0x0) ||
          (lVar4 = **(longlong **)(lVar1 + lVar6), lVar4 == 0)) ||
         (**(char **)(lVar4 + 0x20) != '\0')) {
        bVar7 = false;
      }
      else {
        lVar4 = FUN_1429e0e24();
        if (lVar4 == 0) {
          bVar3 = 0;
        }
        else if (*(byte *)(lVar4 + 0x90) < 2) {
          bVar3 = *(byte *)(lVar4 + 0x90) == 0 | 2;
        }
        else {
          bVar3 = *(byte *)(lVar4 + 0x1ac);
        }
        bVar7 = bVar3 == 2;
      }
      uVar5 = CONCAT71((int7)(uVar5 >> 8),(byte)uVar5 & bVar7);
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar6);
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 146e2043a FUN_146e2043a body=469 status=ok
// SIG undefined FUN_146e2043a(void)

undefined8 * FUN_146e2043a(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
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
  undefined4 uVar37;
  undefined1 auStack_f8 [40];
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar4 = param_3[1];
  if ((longlong)(int)lVar4 == 0) {
    bVar3 = false;
    uVar9 = 0;
    uVar12 = 0;
    uVar14 = 0;
    uVar17 = 0;
    uVar24 = 0;
    uVar27 = 0;
    uVar29 = 0;
    uVar32 = 0;
    uVar34 = 0;
    uVar37 = 0;
    uVar19 = 0;
    uVar22 = 0;
  }
  else {
    lVar1 = *param_3;
    lVar7 = 0;
    bVar3 = false;
    uVar8 = 0;
    uVar10 = 0;
    uVar13 = 0;
    uVar15 = 0;
    uVar18 = 0;
    uVar20 = 0;
    uVar23 = 0;
    uVar25 = 0;
    uVar28 = 0;
    uVar30 = 0;
    uVar33 = 0;
    uVar35 = 0;
    do {
      uVar9 = uVar8;
      uVar12 = uVar10;
      uVar14 = uVar13;
      uVar17 = uVar15;
      uVar19 = uVar18;
      uVar22 = uVar20;
      uVar24 = uVar23;
      uVar27 = uVar25;
      uVar29 = uVar28;
      uVar32 = uVar30;
      uVar34 = uVar33;
      uVar37 = uVar35;
      bVar5 = bVar3;
      if ((((*(longlong *)(lVar1 + lVar7) != 0) && (lVar6 = FUN_1429e0e24(), lVar6 != 0)) &&
          (plVar2 = *(longlong **)(lVar6 + 0x50), plVar2 != (longlong *)0x0)) &&
         (*(char *)((longlong)plVar2 + 0x1a) == '\x01')) {
        (**(code **)(*plVar2 + 0x80))(plVar2,&local_d0);
        bVar5 = true;
        uVar21 = (undefined4)((ulonglong)local_d0 >> 0x20);
        uVar36 = (undefined4)((ulonglong)local_c8 >> 0x20);
        uVar31 = (undefined4)((ulonglong)local_c0 >> 0x20);
        uVar26 = (undefined4)((ulonglong)local_b8 >> 0x20);
        uVar16 = (undefined4)((ulonglong)local_b0 >> 0x20);
        uVar11 = (undefined4)((ulonglong)local_a8 >> 0x20);
        uVar9 = SUB84(local_a8,0);
        uVar12 = uVar11;
        uVar14 = SUB84(local_b0,0);
        uVar17 = uVar16;
        uVar19 = SUB84(local_d0,0);
        uVar22 = uVar21;
        uVar24 = SUB84(local_b8,0);
        uVar27 = uVar26;
        uVar29 = SUB84(local_c0,0);
        uVar32 = uVar31;
        uVar34 = SUB84(local_c8,0);
        uVar37 = uVar36;
        if (bVar3) {
          uVar19 = uVar18;
          uVar22 = uVar20;
          if (local_d0 <= (double)CONCAT44(uVar20,uVar18)) {
            uVar19 = SUB84(local_d0,0);
            uVar22 = uVar21;
          }
          uVar34 = uVar33;
          uVar37 = uVar35;
          if (local_c8 <= (double)CONCAT44(uVar35,uVar33)) {
            uVar34 = SUB84(local_c8,0);
            uVar37 = uVar36;
          }
          uVar29 = uVar28;
          uVar32 = uVar30;
          if (local_c0 <= (double)CONCAT44(uVar30,uVar28)) {
            uVar29 = SUB84(local_c0,0);
            uVar32 = uVar31;
          }
          uVar24 = uVar23;
          uVar27 = uVar25;
          if ((double)CONCAT44(uVar25,uVar23) <= local_b8) {
            uVar24 = SUB84(local_b8,0);
            uVar27 = uVar26;
          }
          uVar14 = uVar13;
          uVar17 = uVar15;
          if ((double)CONCAT44(uVar15,uVar13) <= local_b0) {
            uVar14 = SUB84(local_b0,0);
            uVar17 = uVar16;
          }
          uVar9 = uVar8;
          uVar12 = uVar10;
          if ((double)CONCAT44(uVar10,uVar8) <= local_a8) {
            uVar9 = SUB84(local_a8,0);
            uVar12 = uVar11;
          }
        }
      }
      bVar3 = bVar5;
      lVar7 = lVar7 + 8;
      uVar8 = uVar9;
      uVar10 = uVar12;
      uVar13 = uVar14;
      uVar15 = uVar17;
      uVar18 = uVar19;
      uVar20 = uVar22;
      uVar23 = uVar24;
      uVar25 = uVar27;
      uVar28 = uVar29;
      uVar30 = uVar32;
      uVar33 = uVar34;
      uVar35 = uVar37;
    } while ((longlong)(int)lVar4 * 8 != lVar7);
  }
  *(bool *)(param_2 + 6) = bVar3;
  *param_2 = CONCAT44(uVar22,uVar19);
  param_2[1] = CONCAT44(uVar37,uVar34);
  param_2[2] = CONCAT44(uVar32,uVar29);
  param_2[3] = CONCAT44(uVar27,uVar24);
  param_2[4] = CONCAT44(uVar17,uVar14);
  param_2[5] = CONCAT44(uVar12,uVar9);
  if ((local_a0 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146e20610 FUN_146e20610 body=1151 status=ok
// SIG undefined FUN_146e20610(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_146e20610(undefined8 param_1,longlong *param_2,longlong *param_3,double *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auStack_1b8 [40];
  undefined8 local_190;
  double local_188;
  double dStack_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar5 = param_3[1];
  local_190 = param_1;
  if ((longlong)(int)lVar5 == 0) {
    lVar7 = 0;
    uVar23 = 0;
    uVar24 = 0;
  }
  else {
    lVar1 = *param_3;
    dVar19 = (double)param_2[1];
    dVar22 = (double)param_2[2];
    dVar14 = (double)param_2[3];
    uVar23 = 0;
    uVar24 = 0;
    lVar8 = 0;
    lVar7 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar8);
      if (lVar2 != 0) {
        lVar6 = FUN_1429e0e24(lVar2);
        if (lVar6 != 0) {
          FUN_146e1fc90(local_190,&local_158,lVar2);
          plVar3 = *(longlong **)(lVar6 + 0x50);
          if (plVar3 != (longlong *)0x0) {
            dVar11 = local_148 * -1.0;
            dVar12 = dStack_140 * 1.0;
            dVar13 = *param_4 - local_138;
            dVar15 = param_4[1] - dStack_130;
            dVar9 = param_4[2] - local_128;
            dVar20 = -local_158;
            dVar21 = -dStack_150;
            dVar16 = dVar15 * dVar20 - dVar13 * dVar21;
            dVar17 = dVar9 * dVar21 - dVar15 * dVar11;
            dVar18 = dVar13 * dVar11 - dVar9 * dVar20;
            dVar16 = dVar16 + dVar16;
            dVar17 = dVar17 + dVar17;
            dVar18 = dVar18 + dVar18;
            dVar20 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_108)) &
                             (ulonglong)(1.0 / local_108)) *
                     (dVar12 * dVar16 + dVar9 + (dVar18 * dVar20 - dVar21 * dVar17));
            auVar10._8_8_ = dStack_110;
            auVar10._0_8_ = local_118;
            auVar10 = divpd(_DAT_149934d80,auVar10);
            dVar13 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_118)) & auVar10._0_8_) *
                     ((dVar16 * dVar21 - dVar11 * dVar18) + dVar12 * dVar17 + dVar13);
            dVar11 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dStack_110)) & auVar10._8_8_)
                     * (dVar16 * local_158 + dVar17 * dVar11 + dVar12 * dVar18 + dVar15);
            local_188 = dVar13;
            dStack_180 = dVar11;
            local_178 = dVar20;
            dVar9 = (double)(**(code **)(*plVar3 + 0x70))(plVar3,&local_188,&local_170);
            if ((lVar7 == 0) ||
               (dVar9 <= (double)CONCAT44(uVar24,uVar23) && (double)CONCAT44(uVar24,uVar23) != dVar9
               )) {
              dVar14 = local_108 * (dVar20 - local_160 * dVar9);
              dVar19 = local_118 * (dVar13 - local_170 * dVar9);
              dVar11 = dStack_110 * (dVar11 - local_168 * dVar9);
              dVar12 = dVar11 * local_158 - dVar19 * dStack_150;
              dVar13 = dVar14 * dStack_150 - dVar11 * local_148;
              dVar22 = dVar19 * local_148 - local_158 * dVar14;
              dVar12 = dVar12 + dVar12;
              dVar13 = dVar13 + dVar13;
              dVar22 = dVar22 + dVar22;
              dVar14 = local_128 +
                       dStack_140 * dVar12 + dVar14 + (dVar22 * local_158 - dStack_150 * dVar13);
              dVar19 = local_138 +
                       (dVar12 * dStack_150 - local_148 * dVar22) + dStack_140 * dVar13 + dVar19;
              dVar22 = dStack_130 +
                       (dVar13 * local_148 - dVar12 * local_158) + dStack_140 * dVar22 + dVar11;
              uVar23 = SUB84(dVar9,0);
              uVar24 = (undefined4)((ulonglong)dVar9 >> 0x20);
              lVar7 = lVar2;
            }
          }
        }
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)(int)lVar5 * 8 != lVar8);
    auVar4._8_4_ = SUB84(dVar22,0);
    auVar4._0_8_ = dVar19;
    auVar4._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
    *(undefined1 (*) [16])(param_2 + 1) = auVar4;
    param_2[3] = (longlong)dVar14;
  }
  *param_2 = lVar7;
  param_2[4] = CONCAT44(uVar24,uVar23);
  if ((local_f0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e20a90 FUN_146e20a90 body=187 status=ok
// SIG undefined FUN_146e20a90(void)

longlong * FUN_146e20a90(undefined8 param_1,longlong *param_2,longlong *param_3,byte param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar1 = (int)param_3[1];
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (iVar1 != 0) {
    FUN_14043d0a6(param_2);
    lVar3 = param_3[1];
    if ((longlong)(int)lVar3 != 0) {
      lVar2 = *param_3;
      lVar5 = 0;
      do {
        if (*(longlong *)(lVar2 + lVar5) == 0) {
LAB_146e20af9:
          lVar4 = 0;
        }
        else {
          lVar4 = FUN_14005b71c();
          if ((lVar4 == 0) || (*(byte *)(lVar4 + 0xc) < 2)) goto LAB_146e20af9;
        }
        if ((lVar4 == 0 & (param_4 ^ 1)) == 0) {
          iVar1 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
            FUN_1406b7a4a(param_2,iVar1);
          }
          *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar4;
        }
        lVar5 = lVar5 + 8;
      } while ((longlong)(int)lVar3 * 8 != lVar5);
    }
  }
  return param_2;
}



// FUNCTION 146e20b4c FUN_146e20b4c body=109 status=ok
// SIG undefined FUN_146e20b4c(void)

void FUN_146e20b4c(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar5);
      if ((((lVar2 != 0) && (lVar4 = FUN_1429e0e24(lVar2), lVar4 != 0)) &&
          (1 < *(byte *)(lVar4 + 0x90))) &&
         ((*(char *)(lVar4 + 0x1ac) == '\x04' || (*(char *)(lVar4 + 0x1ac) == '\x01')))) {
        FUN_1429e0e83(lVar2,1);
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar5);
  }
  return;
}



// FUNCTION 146e20bba FUN_146e20bba body=145 status=ok
// SIG undefined FUN_146e20bba(void)

void FUN_146e20bba(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar6);
      if (((((lVar2 != 0) && (lVar4 = FUN_1429e0e24(lVar2), lVar4 != 0)) &&
           (lVar5 = FUN_1429e0e24(lVar2), lVar5 != 0)) &&
          ((1 < *(byte *)(lVar5 + 0x90) &&
           ((*(char *)(lVar5 + 0x1ac) == '\x04' || (*(char *)(lVar5 + 0x1ac) == '\x01')))))) &&
         (FUN_1429e0e83(lVar2,4), 1 < *(byte *)(lVar4 + 0x90))) {
        *(undefined1 *)(lVar4 + 0x1c1) = 0;
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar6);
  }
  return;
}



// FUNCTION 146e20c4c FUN_146e20c4c body=118 status=ok
// SIG undefined FUN_146e20c4c(void)

void FUN_146e20c4c(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar5);
      if ((lVar2 == 0) || (lVar4 = FUN_1429e0e24(lVar2), lVar4 == 0)) goto LAB_146e20caf;
      lVar4 = FUN_1429e0e24(lVar2);
      if (lVar4 == 0) {
LAB_146e20ca5:
        FUN_1429e0e83(lVar2,2);
      }
      else if (*(byte *)(lVar4 + 0x90) < 2) {
        if (*(byte *)(lVar4 + 0x90) == 0) goto LAB_146e20ca5;
      }
      else if (*(char *)(lVar4 + 0x1ac) != '\x02') goto LAB_146e20ca5;
LAB_146e20caf:
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar5);
  }
  return;
}



// FUNCTION 146e20cc2 FUN_146e20cc2 body=406 status=ok
// SIG undefined FUN_146e20cc2(void)

void FUN_146e20cc2(undefined8 param_1,longlong *param_2,undefined8 *param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_b8 [32];
  void ***local_98;
  void *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  char local_60;
  void **local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar5 = param_2[1];
  if ((longlong)(int)lVar5 != 0) {
    lVar2 = *param_2;
    lVar7 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar7);
      if (lVar3 != 0) {
        lVar6 = FUN_1429e0e24(lVar3);
        if (((lVar6 != 0) && (1 < *(byte *)(lVar6 + 0x90))) &&
           ((*(char *)(lVar6 + 0x1ac) == '\x04' || (*(char *)(lVar6 + 0x1ac) == '\x01')))) {
          if ((char)param_4 != '\0') {
            FUN_1429e0e83(lVar3,4);
          }
          local_78 = param_3[2];
          local_88 = (void *)*param_3;
          uStack_80 = param_3[1];
          local_50 = *(undefined8 *)(lVar6 + 0x150);
          local_58 = &local_88;
          local_98 = &local_58;
          FUN_1459002e8(lVar6 + 0x160,param_4,lVar6 + 0x94,*(undefined8 *)(lVar6 + 0x10));
        }
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)(int)lVar5 * 8 != lVar7);
    iVar1 = (int)param_2[1];
    if ((longlong)iVar1 != 0) {
      param_2 = (longlong *)*param_2;
      plVar4 = (longlong *)*param_2;
      if (((plVar4 != (longlong *)0x0) && (lVar5 = *plVar4, lVar5 != 0)) &&
         (lVar5 = *(longlong *)(lVar5 + 8), lVar5 != 0)) {
        local_88 = (void *)0x0;
        uStack_80 = CONCAT44(uStack_80._4_4_,iVar1);
        FUN_1448634b6(&local_88,iVar1,0);
        memcpy(local_88,param_2,(longlong)iVar1 << 3);
        local_78 = *param_3;
        uStack_70 = *(undefined4 *)(param_3 + 1);
        uStack_6c = *(undefined4 *)((longlong)param_3 + 0xc);
        local_68 = param_3[2];
        local_60 = (char)param_4;
        FUN_146e2d6a2(lVar5,&local_88);
        if (local_88 != (void *)0x0) {
          FUN_1400020a8();
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



// FUNCTION 146e20e5a FUN_146e20e5a body=965 status=ok
// SIG undefined FUN_146e20e5a(void)

void FUN_146e20e5a(undefined8 param_1,longlong *param_2,double *param_3,undefined4 param_4,
                  char param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  longlong lVar12;
  longlong lVar13;
  void **ppvVar14;
  longlong lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_198 [40];
  void *local_170;
  double local_168;
  double local_160;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  void *local_138;
  int iStack_130;
  undefined4 uStack_12c;
  double local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  double local_118;
  char local_110;
  char cStack_10f;
  undefined6 uStack_10e;
  double local_108;
  double local_f8;
  double local_f0;
  double local_e8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar12 = param_2[1];
  if ((longlong)(int)lVar12 != 0) {
    lVar2 = *param_2;
    lVar15 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar15);
      if (lVar3 != 0) {
        lVar13 = FUN_1429e0e24(lVar3);
        if (((lVar13 != 0) && (1 < *(byte *)(lVar13 + 0x90))) &&
           ((*(char *)(lVar13 + 0x1ac) == '\x04' || (*(char *)(lVar13 + 0x1ac) == '\x01')))) {
          if ((char)param_4 != '\0') {
            FUN_1429e0e83(lVar3,4);
          }
          if (param_5 == '\0') {
            local_128 = param_3[2];
            local_138 = (void *)*param_3;
            iStack_130 = *(int *)(param_3 + 1);
            uStack_12c = *(undefined4 *)((longlong)param_3 + 0xc);
            ppvVar14 = &local_138;
          }
          else {
            dVar5 = (double)*(float *)(lVar13 + 0x4c);
            dVar16 = (double)*(float *)(lVar13 + 0x48);
            dVar18 = (double)*(float *)(lVar13 + 0x44);
            dVar17 = (double)*(float *)(lVar13 + 0x40);
            dVar8 = *(double *)(lVar13 + 0x110);
            dVar9 = *(double *)(lVar13 + 0x118);
            dVar10 = *(double *)(lVar13 + 0x120);
            dVar11 = *(double *)(lVar13 + 0x128);
            dVar6 = dVar8 * dVar16 * 1.0 + dVar11 * dVar18 + dVar17 * dVar10 * -1.0 + dVar5 * dVar9;
            dVar7 = dVar10 * dVar16 * -1.0 +
                    ((dVar8 * dVar17 * -1.0 + dVar5 * dVar11) - dVar9 * dVar18);
            local_158._8_4_ = SUB84(dVar6,0);
            local_158._0_8_ =
                 dVar9 * dVar16 * -1.0 + dVar10 * dVar18 + dVar17 * dVar11 * 1.0 + dVar5 * dVar8;
            local_158._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
            local_148._8_4_ = SUB84(dVar7,0);
            local_148._0_8_ =
                 dVar11 * dVar16 * 1.0 + ((dVar9 * dVar17 * 1.0 + dVar5 * dVar10) - dVar8 * dVar18);
            local_148._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
            local_160 = (double)*(float *)(lVar13 + 0x138);
            local_168 = (double)*(float *)(lVar13 + 0x134);
            local_170 = (void *)(double)*(float *)(lVar13 + 0x130);
            ppvVar14 = &local_170;
            FUN_140934f8a(&local_138,local_158,ppvVar14);
            dVar5 = *param_3;
            dVar6 = param_3[1];
            dVar7 = param_3[2];
            local_160 = local_e8 * dVar7 + local_f8 * dVar5 + local_f0 * dVar6;
            local_168 = local_108 * dVar7 +
                        local_118 * dVar5 +
                        (double)CONCAT62(uStack_10e,CONCAT11(cStack_10f,local_110)) * dVar6;
            local_170 = (void *)(dVar7 * local_128 +
                                dVar5 * (double)local_138 +
                                dVar6 * (double)CONCAT44(uStack_12c,iStack_130));
          }
          FUN_14590036e(lVar13,ppvVar14,param_4);
        }
      }
      lVar15 = lVar15 + 8;
    } while ((longlong)(int)lVar12 * 8 != lVar15);
    iVar1 = (int)param_2[1];
    if ((longlong)iVar1 != 0) {
      param_2 = (longlong *)*param_2;
      plVar4 = (longlong *)*param_2;
      if (((plVar4 != (longlong *)0x0) && (lVar12 = *plVar4, lVar12 != 0)) &&
         (lVar12 = *(longlong *)(lVar12 + 8), lVar12 != 0)) {
        local_138 = (void *)0x0;
        iStack_130 = iVar1;
        FUN_1448634b6(&local_138,iVar1,0);
        memcpy(local_138,param_2,(longlong)iVar1 << 3);
        local_128 = *param_3;
        uStack_120 = *(undefined4 *)(param_3 + 1);
        uStack_11c = *(undefined4 *)((longlong)param_3 + 0xc);
        local_118 = param_3[2];
        cStack_10f = param_5;
        local_110 = (char)param_4;
        FUN_146e2d81e(lVar12,&local_138);
        if (local_138 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e21220 FUN_146e21220 body=359 status=ok
// SIG undefined FUN_146e21220(void)

void FUN_146e21220(undefined8 param_1,longlong *param_2,double *param_3,char param_4)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_88 [32];
  void *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  double local_48;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar5 = param_2[1];
  if ((longlong)(int)lVar5 != 0) {
    lVar3 = *param_2;
    lVar7 = 0;
    do {
      if (*(longlong *)(lVar3 + lVar7) != 0) {
        lVar6 = FUN_1429e0e24();
        if ((lVar6 != 0) && (1 < *(byte *)(lVar6 + 0x90))) {
          dVar1 = param_3[2];
          if (param_4 == '\0') {
            dVar8 = *param_3;
            dVar9 = param_3[1];
          }
          else {
            dVar8 = *(double *)(lVar6 + 0x148);
            dVar1 = dVar1 * dVar8;
            dVar9 = param_3[1] * dVar8;
            dVar8 = dVar8 * *param_3;
          }
          *(float *)(lVar6 + 0x178) = (float)dVar8;
          *(float *)(lVar6 + 0x17c) = (float)dVar9;
          *(float *)(lVar6 + 0x180) = (float)dVar1;
        }
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)(int)lVar5 * 8 != lVar7);
    iVar2 = (int)param_2[1];
    if ((longlong)iVar2 != 0) {
      param_2 = (longlong *)*param_2;
      plVar4 = (longlong *)*param_2;
      if (((plVar4 != (longlong *)0x0) && (lVar5 = *plVar4, lVar5 != 0)) &&
         (lVar5 = *(longlong *)(lVar5 + 8), lVar5 != 0)) {
        local_68 = (void *)0x0;
        local_60 = iVar2;
        FUN_1448634b6(&local_68,iVar2,0);
        memcpy(local_68,param_2,(longlong)iVar2 << 3);
        local_58 = *(undefined4 *)param_3;
        uStack_54 = *(undefined4 *)((longlong)param_3 + 4);
        uStack_50 = *(undefined4 *)(param_3 + 1);
        uStack_4c = *(undefined4 *)((longlong)param_3 + 0xc);
        local_48 = param_3[2];
        local_40 = param_4;
        FUN_146e2d99e(lVar5,&local_68);
        if (local_68 != (void *)0x0) {
          FUN_1400020a8();
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



// FUNCTION 146e21388 FUN_146e21388 body=469 status=ok
// SIG undefined FUN_146e21388(void)

void FUN_146e21388(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined4 param_8,
                  undefined1 param_9,undefined1 param_10,undefined4 param_11,undefined4 param_12)

{
  void *_Src;
  longlong *plVar1;
  size_t sVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_118 [40];
  void *local_f0;
  int local_e8;
  longlong local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined1 local_ab;
  undefined4 local_a8;
  undefined4 local_a4;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar3 = (longlong)*(int *)(param_2 + 1);
  if (lVar3 != 0) {
    _Src = (void *)*param_2;
    sVar2 = 0;
    lVar4 = 0;
    do {
      plVar1 = *(longlong **)((longlong)_Src + sVar2);
      lVar5 = lVar4;
      if ((plVar1 != (longlong *)0x0) &&
         (((lVar5 = *plVar1, lVar5 == 0 || (lVar5 = *(longlong *)(lVar5 + 8), lVar5 == 0)) ||
          ((lVar4 != 0 && (bVar6 = lVar5 != lVar4, lVar5 = lVar4, bVar6)))))) goto LAB_146e21479;
      sVar2 = sVar2 + 8;
      lVar4 = lVar5;
    } while (lVar3 << 3 != sVar2);
    if (lVar5 != 0) {
      local_f0 = (void *)0x0;
      local_e8 = *(int *)(param_2 + 1);
      FUN_1448634b6(&local_f0,lVar3,0);
      memcpy(local_f0,_Src,lVar3 << 3);
      local_d8 = *param_3;
      uStack_d4 = param_3[1];
      uStack_d0 = param_3[2];
      uStack_cc = param_3[3];
      local_c8 = *(undefined8 *)(param_3 + 4);
      local_bc = param_5;
      local_b8 = param_6;
      local_b4 = param_7;
      local_b0 = param_8;
      local_ac = param_9;
      local_ab = param_10;
      local_a8 = param_11;
      local_a4 = param_12;
      local_e0 = lVar5;
      local_c0 = param_4;
      FUN_146e2db1a(lVar5);
      if (local_f0 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_146e21479:
  if ((local_a0 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e2155e FUN_146e2155e body=229 status=ok
// SIG undefined FUN_146e2155e(void)

void FUN_146e2155e(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  void *_Src;
  longlong *plVar1;
  size_t sVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_88 [40];
  void *local_60;
  int local_58;
  undefined4 local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = (longlong)*(int *)(param_2 + 1);
  if (lVar3 != 0) {
    _Src = (void *)*param_2;
    sVar2 = 0;
    lVar4 = 0;
    do {
      plVar1 = *(longlong **)((longlong)_Src + sVar2);
      lVar5 = lVar4;
      if ((plVar1 != (longlong *)0x0) &&
         (((lVar5 = *plVar1, lVar5 == 0 || (lVar5 = *(longlong *)(lVar5 + 8), lVar5 == 0)) ||
          ((lVar4 != 0 && (bVar6 = lVar5 != lVar4, lVar5 = lVar4, bVar6)))))) goto LAB_146e215d1;
      sVar2 = sVar2 + 8;
      lVar4 = lVar5;
    } while (lVar3 << 3 != sVar2);
    if (lVar5 != 0) {
      local_60 = (void *)0x0;
      local_58 = *(int *)(param_2 + 1);
      FUN_1448634b6(&local_60,lVar3,0);
      memcpy(local_60,_Src,lVar3 << 3);
      local_50 = param_3;
      local_48 = lVar5;
      FUN_146e2df40(lVar5,&local_60);
      if (local_60 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_146e215d1:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e21644 FUN_146e21644 body=229 status=ok
// SIG undefined FUN_146e21644(void)

void FUN_146e21644(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  void *_Src;
  longlong *plVar1;
  size_t sVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_88 [40];
  void *local_60;
  int local_58;
  undefined4 local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = (longlong)*(int *)(param_2 + 1);
  if (lVar3 != 0) {
    _Src = (void *)*param_2;
    sVar2 = 0;
    lVar4 = 0;
    do {
      plVar1 = *(longlong **)((longlong)_Src + sVar2);
      lVar5 = lVar4;
      if ((plVar1 != (longlong *)0x0) &&
         (((lVar5 = *plVar1, lVar5 == 0 || (lVar5 = *(longlong *)(lVar5 + 8), lVar5 == 0)) ||
          ((lVar4 != 0 && (bVar6 = lVar5 != lVar4, lVar5 = lVar4, bVar6)))))) goto LAB_146e216b7;
      sVar2 = sVar2 + 8;
      lVar4 = lVar5;
    } while (lVar3 << 3 != sVar2);
    if (lVar5 != 0) {
      local_60 = (void *)0x0;
      local_58 = *(int *)(param_2 + 1);
      FUN_1448634b6(&local_60,lVar3,0);
      memcpy(local_60,_Src,lVar3 << 3);
      local_50 = param_3;
      local_48 = lVar5;
      FUN_146e2e0d0(lVar5,&local_60);
      if (local_60 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_146e216b7:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e2172a FUN_146e2172a body=332 status=ok
// SIG undefined FUN_146e2172a(void)

void FUN_146e2172a(undefined8 param_1,longlong *param_2,byte param_3,char param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
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
  undefined1 uStack_50;
  byte bStack_4f;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((longlong)(int)param_2[1] != 0) {
    plVar11 = (longlong *)*param_2;
    plVar1 = plVar11 + (int)param_2[1];
    do {
      if ((*plVar11 != 0) && (lVar9 = FUN_1429e0e24(), lVar9 != 0)) {
        lVar12 = lVar9 + 0x78;
        if (*(longlong *)(lVar9 + 0x80) != 0) {
          lVar12 = *(longlong *)(lVar9 + 0x80);
        }
        iVar4 = *(int *)(lVar9 + 0x88);
        if ((longlong)iVar4 != 0) {
          lVar9 = 0;
          do {
            lVar5 = *(longlong *)(lVar12 + lVar9);
            uVar10 = (ulonglong)((*(byte *)(lVar5 + 8) & 3) == 0);
            puVar2 = (undefined4 *)(lVar5 + 0x48 + uVar10 * 8);
            local_78 = *puVar2;
            uStack_74 = puVar2[1];
            uStack_70 = puVar2[2];
            uStack_6c = puVar2[3];
            puVar3 = (undefined8 *)(lVar5 + 0x58 + uVar10 * 8);
            local_68 = *(undefined4 *)puVar3;
            uStack_64 = *(undefined4 *)((longlong)puVar3 + 4);
            uVar7 = *puVar3;
            uStack_60 = *(undefined4 *)(puVar3 + 1);
            uStack_5c = *(undefined4 *)((longlong)puVar3 + 0xc);
            uVar8 = puVar3[1];
            puVar3 = (undefined8 *)(lVar5 + 0x68 + uVar10 * 8);
            local_58 = *(undefined4 *)puVar3;
            uStack_54 = *(undefined4 *)((longlong)puVar3 + 4);
            uVar6 = *(undefined4 *)(puVar3 + 1);
            uStack_50 = (undefined1)uVar6;
            bStack_4f = (byte)((uint)uVar6 >> 8);
            uStack_4e = (undefined2)((uint)uVar6 >> 0x10);
            uStack_4c = (undefined2)*(undefined4 *)((longlong)puVar3 + 0xc);
            uStack_4a = (undefined2)((uint)*(undefined4 *)((longlong)puVar3 + 0xc) >> 0x10);
            bStack_4f = bStack_4f & 0xfc | param_4 * '\x02' | param_3;
            lVar5 = *(longlong *)(lVar12 + lVar9);
            if ((*(byte *)(lVar5 + 8) & 3) == 0) {
              FUN_146285926(lVar5,&local_78);
            }
            else {
              *(undefined8 *)(lVar5 + 0x68) = *puVar3;
              *(undefined1 *)(lVar5 + 0x70) = uStack_50;
              *(byte *)(lVar5 + 0x71) = bStack_4f;
              *(uint *)(lVar5 + 0x72) = CONCAT22(uStack_4c,uStack_4e);
              *(undefined2 *)(lVar5 + 0x76) = uStack_4a;
              *(undefined8 *)(lVar5 + 0x58) = uVar7;
              *(undefined8 *)(lVar5 + 0x60) = uVar8;
              *(undefined4 *)(lVar5 + 0x48) = local_78;
              *(undefined4 *)(lVar5 + 0x4c) = uStack_74;
              *(undefined4 *)(lVar5 + 0x50) = uStack_70;
              *(undefined4 *)(lVar5 + 0x54) = uStack_6c;
            }
            lVar9 = lVar9 + 8;
          } while ((longlong)iVar4 * 8 != lVar9);
        }
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar1);
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e21878 FUN_146e21878 body=193 status=ok
// SIG undefined FUN_146e21878(void)

void FUN_146e21878(undefined8 param_1,longlong *param_2,undefined4 *param_3,undefined4 *param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  
  if ((longlong)(int)param_2[1] != 0) {
    plVar8 = (longlong *)*param_2;
    plVar1 = plVar8 + (int)param_2[1];
    do {
      if ((*plVar8 != 0) && (lVar7 = FUN_1429e0e24(), lVar7 != 0)) {
        lVar9 = lVar7 + 0x78;
        if (*(longlong *)(lVar7 + 0x80) != 0) {
          lVar9 = *(longlong *)(lVar7 + 0x80);
        }
        iVar2 = *(int *)(lVar7 + 0x88);
        if ((longlong)iVar2 != 0) {
          lVar7 = 0;
          do {
            lVar3 = *(longlong *)(lVar9 + lVar7);
            if ((*(byte *)(lVar3 + 8) & 3) == 0) {
              FUN_144b03742(lVar3,param_3);
            }
            else {
              uVar4 = param_3[1];
              uVar5 = param_3[2];
              uVar6 = param_3[3];
              *(undefined4 *)(lVar3 + 0x48) = *param_3;
              *(undefined4 *)(lVar3 + 0x4c) = uVar4;
              *(undefined4 *)(lVar3 + 0x50) = uVar5;
              *(undefined4 *)(lVar3 + 0x54) = uVar6;
            }
            lVar3 = *(longlong *)(lVar9 + lVar7);
            if ((*(byte *)(lVar3 + 8) & 3) == 0) {
              FUN_144aa44d4(lVar3,param_4);
            }
            else {
              uVar4 = param_4[1];
              uVar5 = param_4[2];
              uVar6 = param_4[3];
              *(undefined4 *)(lVar3 + 0x58) = *param_4;
              *(undefined4 *)(lVar3 + 0x5c) = uVar4;
              *(undefined4 *)(lVar3 + 0x60) = uVar5;
              *(undefined4 *)(lVar3 + 100) = uVar6;
            }
            lVar7 = lVar7 + 8;
          } while ((longlong)iVar2 * 8 != lVar7);
        }
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar1);
  }
  return;
}



// FUNCTION 146e2193a FUN_146e2193a body=253 status=ok
// SIG undefined FUN_146e2193a(void)

void FUN_146e2193a(longlong *param_1,double *param_2,char param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  lVar7 = param_1[1];
  if ((longlong)(int)lVar7 != 0) {
    lVar5 = *param_1;
    lVar11 = 0;
    do {
      lVar6 = *(longlong *)(lVar5 + lVar11);
      if (((lVar6 != 0) && (plVar8 = (longlong *)FUN_14005b71c(lVar6), plVar8 != (longlong *)0x0))
         && (1 < *(byte *)((longlong)plVar8 + 0xc))) {
        lVar9 = *plVar8;
        lVar10 = (longlong)(int)plVar8[1];
        cVar4 = *(char *)(*(longlong *)(lVar9 + 0x2c0) + 0xb + lVar10 * 0x10);
        if ((cVar4 == '\x04') || (cVar4 == '\x01')) {
          if (param_3 != '\0') {
            FUN_1429e0ff1(lVar6,4);
            lVar9 = *plVar8;
            lVar10 = (longlong)(int)plVar8[1];
          }
          lVar6 = *(longlong *)(lVar9 + 0x308);
          dVar1 = *(double *)(*(longlong *)(lVar9 + 0x3c8) + lVar10 * 8);
          dVar2 = param_2[2];
          dVar3 = param_2[1];
          *(double *)(lVar6 + lVar10 * 0x18) = dVar1 * *param_2 + *(double *)(lVar6 + lVar10 * 0x18)
          ;
          *(double *)(lVar6 + 8 + lVar10 * 0x18) =
               dVar3 * dVar1 + *(double *)(lVar6 + 8 + lVar10 * 0x18);
          *(double *)(lVar6 + 0x10 + lVar10 * 0x18) =
               dVar2 * dVar1 + *(double *)(lVar6 + 0x10 + lVar10 * 0x18);
        }
      }
      lVar11 = lVar11 + 8;
    } while ((longlong)(int)lVar7 * 8 != lVar11);
  }
  return;
}



// FUNCTION 146e21a38 FUN_146e21a38 body=1073 status=ok
// SIG undefined FUN_146e21a38(void)

void FUN_146e21a38(longlong *param_1,double *param_2,undefined4 param_3,char param_4)

{
  double dVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  longlong *plVar11;
  double *pdVar12;
  longlong lVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_198 [40];
  double local_170;
  double local_168;
  double local_160;
  undefined1 local_158 [16];
  double local_148;
  double dStack_140;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  double local_f8;
  double local_f0;
  double local_e8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar10 = param_1[1];
  if ((longlong)(int)lVar10 != 0) {
    lVar3 = *param_1;
    lVar14 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar14);
      if ((((lVar4 != 0) && (plVar11 = (longlong *)FUN_14005b71c(lVar4), plVar11 != (longlong *)0x0)
           ) && (1 < *(byte *)((longlong)plVar11 + 0xc))) &&
         ((cVar2 = *(char *)(*(longlong *)(*plVar11 + 0x2c0) + 0xb +
                            (longlong)(int)plVar11[1] * 0x10), cVar2 == '\x04' || (cVar2 == '\x01'))
         )) {
        if ((char)param_3 != '\0') {
          FUN_1429e0ff1(lVar4,4);
        }
        if (param_4 == '\0') {
          local_128 = param_2[2];
          local_138._0_4_ = *(undefined4 *)param_2;
          local_138._4_4_ = *(undefined4 *)((longlong)param_2 + 4);
          uStack_130 = *(undefined4 *)(param_2 + 1);
          uStack_12c = *(undefined4 *)((longlong)param_2 + 0xc);
          pdVar12 = (double *)&local_138;
        }
        else {
          lVar4 = *(longlong *)(*plVar11 + 0x548);
          lVar13 = (longlong)(int)plVar11[1] * 0x10;
          dVar5 = (double)*(float *)(lVar4 + 0xc + lVar13);
          dVar15 = (double)*(float *)(lVar4 + 8 + lVar13);
          dVar17 = (double)*(float *)(lVar4 + 4 + lVar13);
          dVar16 = (double)*(float *)(lVar4 + lVar13);
          lVar4 = *(longlong *)(*plVar11 + 0x3f8);
          lVar13 = (longlong)(int)plVar11[1] * 0x20;
          pdVar12 = (double *)(lVar4 + lVar13);
          dVar1 = *pdVar12;
          dVar7 = pdVar12[1];
          pdVar12 = (double *)(lVar4 + 0x10 + lVar13);
          dVar8 = *pdVar12;
          dVar9 = pdVar12[1];
          dVar6 = dVar1 * dVar15 * 1.0 + dVar9 * dVar17 + dVar16 * dVar8 * -1.0 + dVar5 * dVar7;
          local_148 = dVar9 * dVar15 * 1.0 +
                      ((dVar16 * dVar7 * 1.0 + dVar5 * dVar8) - dVar1 * dVar17);
          dStack_140 = dVar8 * dVar15 * -1.0 +
                       ((dVar16 * dVar1 * -1.0 + dVar5 * dVar9) - dVar7 * dVar17);
          local_158._8_4_ = SUB84(dVar6,0);
          local_158._0_8_ =
               dVar7 * dVar15 * -1.0 + dVar8 * dVar17 + dVar16 * dVar9 * 1.0 + dVar5 * dVar1;
          local_158._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
          lVar13 = (longlong)(int)plVar11[1];
          lVar4 = *(longlong *)(*plVar11 + 0x368);
          local_160 = (double)*(float *)(lVar4 + 8 + lVar13 * 0xc);
          local_168 = (double)*(float *)(lVar4 + 4 + lVar13 * 0xc);
          local_170 = (double)*(float *)(lVar4 + lVar13 * 0xc);
          pdVar12 = &local_170;
          FUN_140934f8a(&local_138,local_158,pdVar12);
          dVar5 = *param_2;
          dVar6 = param_2[1];
          dVar1 = param_2[2];
          local_160 = local_e8 * dVar1 + local_f8 * dVar5 + local_f0 * dVar6;
          local_168 = local_108 * dVar1 + local_118 * dVar5 + local_110 * dVar6;
          local_170 = dVar1 * local_128 +
                      dVar5 * (double)CONCAT44(local_138._4_4_,(undefined4)local_138) +
                      dVar6 * (double)CONCAT44(uStack_12c,uStack_130);
        }
        FUN_1409339b8(plVar11,pdVar12,param_3);
      }
      lVar14 = lVar14 + 8;
    } while ((longlong)(int)lVar10 * 8 != lVar14);
  }
  if ((local_b0 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e21e6a FUN_146e21e6a body=194 status=ok
// SIG undefined FUN_146e21e6a(void)

void FUN_146e21e6a(longlong *param_1,double *param_2,char param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  
  lVar8 = param_1[1];
  if ((longlong)(int)lVar8 != 0) {
    lVar5 = *param_1;
    lVar11 = 0;
    do {
      if (((*(longlong *)(lVar5 + lVar11) != 0) &&
          (plVar9 = (longlong *)FUN_14005b71c(), plVar9 != (longlong *)0x0)) &&
         (1 < *(byte *)((longlong)plVar9 + 0xc))) {
        lVar6 = *plVar9;
        lVar10 = (longlong)(int)plVar9[1];
        if (param_3 == '\0') {
          lVar6 = *(longlong *)(lVar6 + 0x338);
          dVar2 = *param_2;
          dVar3 = param_2[1];
          *(double *)(lVar6 + 0x10 + lVar10 * 0x18) = param_2[2];
          pdVar1 = (double *)(lVar6 + lVar10 * 0x18);
          *pdVar1 = dVar2;
          pdVar1[1] = dVar3;
        }
        else {
          lVar7 = *(longlong *)(lVar6 + 0x338);
          dVar2 = *(double *)(*(longlong *)(lVar6 + 0x3b0) + lVar10 * 8);
          dVar3 = param_2[2];
          dVar4 = param_2[1];
          *(double *)(lVar7 + lVar10 * 0x18) = dVar2 * *param_2;
          *(double *)(lVar7 + 8 + lVar10 * 0x18) = dVar4 * dVar2;
          *(double *)(lVar7 + 0x10 + lVar10 * 0x18) = dVar3 * dVar2;
        }
      }
      lVar11 = lVar11 + 8;
    } while ((longlong)(int)lVar8 * 8 != lVar11);
  }
  return;
}



// FUNCTION 146e21f2c FUN_146e21f2c body=341 status=ok
// SIG undefined FUN_146e21f2c(void)

void FUN_146e21f2c(undefined8 param_1,longlong *param_2,byte param_3,char param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
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
  undefined1 uStack_50;
  byte bStack_4f;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((longlong)(int)param_2[1] != 0) {
    plVar11 = (longlong *)*param_2;
    plVar1 = plVar11 + (int)param_2[1];
    do {
      if ((*plVar11 != 0) && (plVar9 = (longlong *)FUN_14005b71c(), plVar9 != (longlong *)0x0)) {
        lVar12 = *(longlong *)(*plVar9 + 0xf8) + (longlong)(int)plVar9[1] * 0x18;
        lVar13 = *(longlong *)(lVar12 + 8);
        if (*(longlong *)(lVar12 + 8) == 0) {
          lVar13 = lVar12;
        }
        iVar4 = *(int *)(lVar12 + 0x10);
        if ((longlong)iVar4 != 0) {
          lVar12 = 0;
          do {
            lVar5 = *(longlong *)(lVar13 + lVar12);
            uVar10 = (ulonglong)((*(byte *)(lVar5 + 8) & 3) == 0);
            puVar2 = (undefined4 *)(lVar5 + 0x48 + uVar10 * 8);
            local_78 = *puVar2;
            uStack_74 = puVar2[1];
            uStack_70 = puVar2[2];
            uStack_6c = puVar2[3];
            puVar3 = (undefined8 *)(lVar5 + 0x58 + uVar10 * 8);
            local_68 = *(undefined4 *)puVar3;
            uStack_64 = *(undefined4 *)((longlong)puVar3 + 4);
            uVar7 = *puVar3;
            uStack_60 = *(undefined4 *)(puVar3 + 1);
            uStack_5c = *(undefined4 *)((longlong)puVar3 + 0xc);
            uVar8 = puVar3[1];
            puVar3 = (undefined8 *)(lVar5 + 0x68 + uVar10 * 8);
            local_58 = *(undefined4 *)puVar3;
            uStack_54 = *(undefined4 *)((longlong)puVar3 + 4);
            uVar6 = *(undefined4 *)(puVar3 + 1);
            uStack_50 = (undefined1)uVar6;
            bStack_4f = (byte)((uint)uVar6 >> 8);
            uStack_4e = (undefined2)((uint)uVar6 >> 0x10);
            uStack_4c = (undefined2)*(undefined4 *)((longlong)puVar3 + 0xc);
            uStack_4a = (undefined2)((uint)*(undefined4 *)((longlong)puVar3 + 0xc) >> 0x10);
            bStack_4f = bStack_4f & 0xfc | param_4 * '\x02' | param_3;
            lVar5 = *(longlong *)(lVar13 + lVar12);
            if ((*(byte *)(lVar5 + 8) & 3) == 0) {
              FUN_146285926(lVar5,&local_78);
            }
            else {
              *(undefined8 *)(lVar5 + 0x68) = *puVar3;
              *(undefined1 *)(lVar5 + 0x70) = uStack_50;
              *(byte *)(lVar5 + 0x71) = bStack_4f;
              *(uint *)(lVar5 + 0x72) = CONCAT22(uStack_4c,uStack_4e);
              *(undefined2 *)(lVar5 + 0x76) = uStack_4a;
              *(undefined8 *)(lVar5 + 0x58) = uVar7;
              *(undefined8 *)(lVar5 + 0x60) = uVar8;
              *(undefined4 *)(lVar5 + 0x48) = local_78;
              *(undefined4 *)(lVar5 + 0x4c) = uStack_74;
              *(undefined4 *)(lVar5 + 0x50) = uStack_70;
              *(undefined4 *)(lVar5 + 0x54) = uStack_6c;
            }
            lVar12 = lVar12 + 8;
          } while ((longlong)iVar4 * 8 != lVar12);
        }
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar1);
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e22082 FUN_146e22082 body=202 status=ok
// SIG undefined FUN_146e22082(void)

void FUN_146e22082(undefined8 param_1,longlong *param_2,undefined4 *param_3,undefined4 *param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  
  if ((longlong)(int)param_2[1] != 0) {
    plVar8 = (longlong *)*param_2;
    plVar1 = plVar8 + (int)param_2[1];
    do {
      if ((*plVar8 != 0) && (plVar7 = (longlong *)FUN_14005b71c(), plVar7 != (longlong *)0x0)) {
        lVar9 = *(longlong *)(*plVar7 + 0xf8) + (longlong)(int)plVar7[1] * 0x18;
        lVar10 = *(longlong *)(lVar9 + 8);
        if (*(longlong *)(lVar9 + 8) == 0) {
          lVar10 = lVar9;
        }
        iVar2 = *(int *)(lVar9 + 0x10);
        if ((longlong)iVar2 != 0) {
          lVar9 = 0;
          do {
            lVar3 = *(longlong *)(lVar10 + lVar9);
            if ((*(byte *)(lVar3 + 8) & 3) == 0) {
              FUN_144b03742(lVar3,param_3);
            }
            else {
              uVar4 = param_3[1];
              uVar5 = param_3[2];
              uVar6 = param_3[3];
              *(undefined4 *)(lVar3 + 0x48) = *param_3;
              *(undefined4 *)(lVar3 + 0x4c) = uVar4;
              *(undefined4 *)(lVar3 + 0x50) = uVar5;
              *(undefined4 *)(lVar3 + 0x54) = uVar6;
            }
            lVar3 = *(longlong *)(lVar10 + lVar9);
            if ((*(byte *)(lVar3 + 8) & 3) == 0) {
              FUN_144aa44d4(lVar3,param_4);
            }
            else {
              uVar4 = param_4[1];
              uVar5 = param_4[2];
              uVar6 = param_4[3];
              *(undefined4 *)(lVar3 + 0x58) = *param_4;
              *(undefined4 *)(lVar3 + 0x5c) = uVar4;
              *(undefined4 *)(lVar3 + 0x60) = uVar5;
              *(undefined4 *)(lVar3 + 100) = uVar6;
            }
            lVar9 = lVar9 + 8;
          } while ((longlong)iVar2 * 8 != lVar9);
        }
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar1);
  }
  return;
}



// FUNCTION 146e2214c FUN_146e2214c body=86 status=ok
// SIG undefined FUN_146e2214c(void)

void FUN_146e2214c(longlong *param_1,longlong *param_2)

{
  FUN_140dc1ef6(param_1 + 2,0);
  FUN_140dc1f62(param_1 + 0xc,0);
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return;
}



// FUNCTION 146e221a2 FUN_146e221a2 body=60 status=ok
// SIG undefined FUN_146e221a2(void)

void FUN_146e221a2(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)*param_2;
  puVar3 = *(undefined8 **)(*param_1 + 0x10);
  if (puVar3 != puVar2) {
    *(undefined8 **)(*param_1 + 0x10) = puVar2;
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
      UNLOCK();
    }
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((*piVar1 == 0) && (*(int *)((longlong)puVar3 + 0xc) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000146e221db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*puVar3)(puVar3,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146e221de FUN_146e221de body=195 status=ok
// SIG undefined FUN_146e221de(void)

void FUN_146e221de(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  
  *param_1 = &PTR_FUN_149f5e060;
  uVar8 = (*(uint *)(param_1 + 1) & 0xfffffffc) + 1;
  *(uint *)(param_1 + 1) = uVar8;
  uVar7 = *(uint *)(param_2 + 8) & 4;
  *(uint *)(param_1 + 1) = uVar8 & 0xfffffff9 | uVar7;
  *(uint *)(param_1 + 1) = (*(uint *)(param_2 + 8) & 0xfffffff8) + uVar7 + 1;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  lVar1 = *(longlong *)(param_2 + 0x10);
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
    uVar7 = *(uint *)(param_1 + 1) & 4;
  }
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  param_1[7] = uVar2;
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *param_1 = &PTR_FUN_149f5e0a0;
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  uVar4 = *(undefined8 *)(param_2 + 0x60);
  uVar5 = *(undefined8 *)(param_2 + 0x68);
  uVar6 = *(undefined8 *)(param_2 + 0x70);
  param_1[9] = *(undefined8 *)(param_2 + 0x48);
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  param_1[0xc] = uVar4;
  param_1[0xd] = uVar5;
  param_1[0xe] = uVar6;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (uVar7 != 0) {
    *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0x78);
    return;
  }
  param_1[0xf] = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_2 + 0x78) = 0;
  return;
}



// FUNCTION 146e222a2 FUN_146e222a2 body=163 status=ok
// SIG undefined FUN_146e222a2(void)

void FUN_146e222a2(longlong *param_1,longlong *param_2)

{
  int iVar1;
  
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cba8);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e392d0);
  FUN_140a2844e(param_2,param_1 + 2);
  FUN_146e29304(param_1 + (ulonglong)((*(byte *)(param_1 + 1) & 3) == 0) + 9,param_2);
  (**(code **)(*param_1 + 0x10))(param_1,param_2);
  iVar1 = FUN_1448332aa(param_2,&DAT_149e3cba8);
  if (0xf < iVar1) {
    FUN_140d03e72(param_2,param_1 + 3);
    return;
  }
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}



// FUNCTION 146e22346 FUN_146e22346 body=115 status=ok
// SIG undefined FUN_146e22346(void)

undefined8 * FUN_146e22346(longlong param_1)

{
  undefined8 *puVar1;
  
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = (undefined8 *)FUN_14001cc68(0xc0,0x10);
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    *puVar1 = &PTR_FUN_149f5e040;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    *(undefined1 *)((longlong)puVar1 + 0x79) = 3;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
  }
  return puVar1;
}



// FUNCTION 146e223c4 FUN_146e223c4 body=93 status=ok
// SIG undefined FUN_146e223c4(void)

undefined8 * FUN_146e223c4(longlong param_1)

{
  undefined8 *puVar1;
  
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = (undefined8 *)FUN_14001cc68(0x80,0x10);
    *(undefined8 *)((longlong)puVar1 + 0xc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x14) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x2c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    *puVar1 = &PTR_FUN_149f5e0a0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    *(undefined8 *)((longlong)puVar1 + 0x61) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x69) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x71) = 3;
    *(undefined4 *)(puVar1 + 0xf) = 0;
    *(undefined4 *)(puVar1 + 1) = 5;
  }
  return puVar1;
}



// FUNCTION 146e22422 FUN_146e22422 body=208 status=ok
// SIG undefined FUN_146e22422(void)

void FUN_146e22422(longlong param_1,longlong param_2)

{
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
    if ((*(byte *)(param_1 + 8) & 4) == 0) {
      FUN_140135db2(param_1);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_88);
    }
    local_68 = (undefined4 *)0x0;
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    uStack_60 = 1;
    FUN_1417255d0(&local_68,0);
    *local_68 = *(undefined4 *)(param_1 + 0x78);
    FUN_146e29768(&local_68,param_2);
  }
  else {
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = (undefined4 *)0x0;
    uStack_60 = 0;
    FUN_146e29768(&local_68,param_2);
    FUN_1400d252c(param_1,&local_68);
  }
  FUN_144aa4484(&local_68);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e22506 FUN_146e22506 body=150 status=ok
// SIG undefined FUN_146e22506(void)

void FUN_146e22506(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar2 = *(longlong **)(param_1 + 0x10);
  if ((plVar2 == (longlong *)0x0) || (*(char *)((longlong)plVar2 + 0x1a) != '\x01')) {
    uVar3 = *(undefined4 *)(param_2 + 0x20);
    uVar4 = *(undefined4 *)(param_2 + 0x24);
    uVar5 = *(undefined4 *)(param_2 + 0x28);
    uVar6 = *(undefined4 *)(param_2 + 0x2c);
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    *(undefined4 *)(param_1 + 0x18) = uVar3;
    *(undefined4 *)(param_1 + 0x1c) = uVar4;
    *(undefined4 *)(param_1 + 0x20) = uVar5;
    *(undefined4 *)(param_1 + 0x24) = uVar6;
    *(undefined8 *)(param_1 + 0x28) = uVar1;
    *(undefined4 *)(param_1 + 0x30) = uVar3;
    *(undefined4 *)(param_1 + 0x34) = uVar4;
    *(undefined4 *)(param_1 + 0x38) = uVar5;
    *(undefined4 *)(param_1 + 0x3c) = uVar6;
    *(undefined8 *)(param_1 + 0x40) = uVar1;
  }
  else {
    (**(code **)(*plVar2 + 0x88))(plVar2,&local_48);
    *(undefined8 *)(param_1 + 0x28) = local_38;
    *(undefined8 *)(param_1 + 0x18) = local_48;
    *(undefined8 *)(param_1 + 0x20) = uStack_40;
    *(undefined4 *)(param_1 + 0x30) = local_30;
    *(undefined4 *)(param_1 + 0x34) = uStack_2c;
    *(undefined4 *)(param_1 + 0x38) = uStack_28;
    *(undefined4 *)(param_1 + 0x3c) = uStack_24;
    *(undefined8 *)(param_1 + 0x40) = local_20;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e2259e FUN_146e2259e body=11 status=ok
// SIG undefined FUN_146e2259e(void)

void FUN_146e2259e(longlong param_1)

{
  FUN_14472711d(*(undefined8 *)(param_1 + 0x10),0);
  return;
}



// FUNCTION 146e225aa FUN_146e225aa body=108 status=ok
// SIG undefined FUN_146e225aa(void)

undefined8 * FUN_146e225aa(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (undefined8 *)0x0;
  FUN_14472711d(*(undefined8 *)(param_1 + 0x10),&local_28);
  puVar2 = local_28;
  if (local_28 == (undefined8 *)0x0) {
    puVar2 = &DAT_14c846480;
  }
  puVar3 = param_2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e22618 FUN_146e22618 body=148 status=ok
// SIG undefined FUN_146e22618(void)

undefined8 * FUN_146e22618(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88 [12];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88[0] = param_3;
  FUN_144b037fc();
  local_28 = 0;
  FUN_14472711d(*(undefined8 *)(param_1 + 0x10),&local_28);
  if (local_28 != 0) {
    FUN_144b0709c(local_88,local_28,param_2);
    puVar2 = local_88;
    puVar3 = param_2;
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e226ae FUN_146e226ae body=1 status=ok
// SIG undefined FUN_146e226ae(void)

void FUN_146e226ae(void)

{
  return;
}



// FUNCTION 146e226b0 FUN_146e226b0 body=150 status=ok
// SIG undefined FUN_146e226b0(void)

void FUN_146e226b0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar2 = *(longlong **)(param_1 + 0x10);
  if ((plVar2 == (longlong *)0x0) || (*(char *)((longlong)plVar2 + 0x1a) != '\x01')) {
    uVar3 = *(undefined4 *)(param_2 + 0x20);
    uVar4 = *(undefined4 *)(param_2 + 0x24);
    uVar5 = *(undefined4 *)(param_2 + 0x28);
    uVar6 = *(undefined4 *)(param_2 + 0x2c);
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    *(undefined4 *)(param_1 + 0x18) = uVar3;
    *(undefined4 *)(param_1 + 0x1c) = uVar4;
    *(undefined4 *)(param_1 + 0x20) = uVar5;
    *(undefined4 *)(param_1 + 0x24) = uVar6;
    *(undefined8 *)(param_1 + 0x28) = uVar1;
    *(undefined4 *)(param_1 + 0x30) = uVar3;
    *(undefined4 *)(param_1 + 0x34) = uVar4;
    *(undefined4 *)(param_1 + 0x38) = uVar5;
    *(undefined4 *)(param_1 + 0x3c) = uVar6;
    *(undefined8 *)(param_1 + 0x40) = uVar1;
  }
  else {
    (**(code **)(*plVar2 + 0x88))(plVar2,&local_48);
    *(undefined8 *)(param_1 + 0x28) = local_38;
    *(undefined8 *)(param_1 + 0x18) = local_48;
    *(undefined8 *)(param_1 + 0x20) = uStack_40;
    *(undefined4 *)(param_1 + 0x30) = local_30;
    *(undefined4 *)(param_1 + 0x34) = uStack_2c;
    *(undefined4 *)(param_1 + 0x38) = uStack_28;
    *(undefined4 *)(param_1 + 0x3c) = uStack_24;
    *(undefined8 *)(param_1 + 0x40) = local_20;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e22748 FUN_146e22748 body=427 status=ok
// SIG undefined FUN_146e22748(void)

undefined4 * FUN_146e22748(undefined4 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 9) = 0x38d1b71700000032;
  puVar1 = param_1 + 0xc;
  FUN_14062df02(puVar1);
  *(undefined ***)(param_1 + 0xc) = &PTR_FUN_149f51a28;
  *(undefined8 *)(param_1 + 0x36) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined ***)(param_1 + 0x34) = &PTR_LAB_149f51a40;
  FUN_14062dc0c(puVar1,param_1 + 0x34);
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x3e) = 0;
  *(undefined ***)(param_1 + 0x3a) = &PTR_LAB_149f51bd0;
  FUN_14062de0e(param_1 + 0x40);
  FUN_146e228f4(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0xde) = 0;
  param_1[0xe0] = 0;
  *(undefined8 *)(param_1 + 0xd6) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe1) = 0xffffffff00000080;
  param_1[0xe3] = 0;
  *(undefined8 *)(param_1 + 0xe6) = 0;
  param_1[0xe8] = 0;
  FUN_146e22bc0(param_1 + 0xea);
  *(undefined8 *)(param_1 + 0x10c) = 0;
  param_1[0x10e] = 0;
  *(undefined8 *)(param_1 + 0x104) = 0;
  *(undefined8 *)(param_1 + 0x106) = 0;
  *(undefined8 *)(param_1 + 0x10f) = 0xffffffff00000080;
  param_1[0x111] = 0;
  *(undefined8 *)(param_1 + 0x114) = 0;
  param_1[0x116] = 0;
  FUN_146e22c42(param_1 + 0x118);
  *(undefined8 *)(param_1 + 0x13a) = 0;
  param_1[0x13c] = 0;
  *(undefined8 *)(param_1 + 0x132) = 0;
  *(undefined8 *)(param_1 + 0x134) = 0;
  *(undefined8 *)(param_1 + 0x13d) = 0xffffffff00000080;
  param_1[0x13f] = 0;
  *(undefined8 *)(param_1 + 0x142) = 0;
  param_1[0x144] = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x14c) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x15c) = 0;
  FUN_146e22cbc(param_1,param_2);
  FUN_14062dc0c(puVar1,param_1 + 0x3a);
  return param_1;
}



// FUNCTION 146e228f4 FUN_146e228f4 body=715 status=ok
// SIG undefined FUN_146e228f4(void)

undefined8 * FUN_146e228f4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_149f5e0b8;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = &PTR_LAB_149f5e0c0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[7] = &PTR_LAB_149f57440;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[10] = &PTR_LAB_149f5e100;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xd] = &PTR_LAB_149f51bd0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x10] = &PTR_LAB_149f51bd0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x13] = &PTR_LAB_149f51ec0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = &PTR_LAB_149f5e140;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x19] = &PTR_LAB_149f5e180;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1c] = &PTR_LAB_149f5e1c0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1f] = &PTR_LAB_149f5e180;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x22] = &PTR_LAB_149f5e200;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x25] = &PTR_LAB_149f5e1c0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x28] = &PTR_LAB_149f5e240;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2b] = &PTR_LAB_149f5e1c0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x2e] = &PTR_LAB_149f5e280;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x31] = &PTR_LAB_149f5e2c0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x34] = &PTR_LAB_149f5e200;
  FUN_14062dc0c(param_1,param_1 + 4);
  FUN_14062dc0c(param_1,param_1 + 7);
  FUN_14062dc0c(param_1,param_1 + 10);
  FUN_14062dc0c(param_1,param_1 + 0xd);
  FUN_14062dc0c(param_1,param_1 + 0x10);
  FUN_14062dc0c(param_1,param_1 + 0x13);
  FUN_14062dc0c(param_1,param_1 + 0x16);
  FUN_14062dc0c(param_1,param_1 + 0x19);
  FUN_14062dc0c(param_1,param_1 + 0x1c);
  FUN_14062dc0c(param_1,param_1 + 0x1f);
  FUN_14062dc0c(param_1,param_1 + 0x22);
  FUN_14062dc0c(param_1,param_1 + 0x25);
  FUN_14062dc0c(param_1,param_1 + 0x28);
  FUN_14062dc0c(param_1,param_1 + 0x2b);
  FUN_14062dc0c(param_1,param_1 + 0x2e);
  FUN_14062dc0c(param_1,param_1 + 0x31);
  FUN_14062dc0c(param_1,param_1 + 0x34);
  return param_1;
}



// FUNCTION 146e22bc0 FUN_146e22bc0 body=129 status=ok
// SIG undefined FUN_146e22bc0(void)

undefined8 * FUN_146e22bc0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_149f5e2f8;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = &PTR_LAB_149f5e300;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[7] = &PTR_LAB_149f57440;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[10] = &PTR_LAB_149f5e340;
  FUN_14062dc0c(0,param_1 + 4);
  FUN_14062dc0c(param_1,param_1 + 7);
  FUN_14062dc0c(param_1,param_1 + 10);
  return param_1;
}



// FUNCTION 146e22c42 FUN_146e22c42 body=122 status=ok
// SIG undefined FUN_146e22c42(void)

undefined8 * FUN_146e22c42(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_149f5e388;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = &PTR_LAB_149f51aa0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[7] = &PTR_LAB_149f5e390;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[10] = &PTR_LAB_149f5e390;
  FUN_14062dc0c(0,param_1 + 4);
  FUN_14062dc0c(param_1,param_1 + 7);
  FUN_14062dc0c(param_1,param_1 + 10);
  return param_1;
}



// FUNCTION 146e22cbc FUN_146e22cbc body=159 status=ok
// SIG undefined FUN_146e22cbc(void)

void FUN_146e22cbc(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar1 = FUN_146e24186(param_2,&DAT_149f5de8c);
  *(undefined1 *)(param_1 + 4) = uVar1;
  iVar2 = FUN_146e2420c(param_2,&DAT_149f5de90);
  iVar4 = 1;
  if (1 < iVar2) {
    iVar4 = iVar2;
  }
  *(int *)(param_1 + 8) = iVar4;
  uVar3 = FUN_146e2428e(param_2,&DAT_149f5de94);
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  uVar1 = FUN_146e24310(param_2,&DAT_149f5de98);
  *(undefined1 *)(param_1 + 0x19) = uVar1;
  uVar3 = FUN_146e24396(param_2,&DAT_149f5de9c);
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  uVar3 = FUN_146e24424(param_2,&DAT_149f5dea0);
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  FUN_146e244a6(param_1 + 0x20,param_2,0 < *(int *)(param_1 + 0xc));
  return;
}



// FUNCTION 146e22d5c FUN_146e22d5c body=774 status=ok
// SIG undefined FUN_146e22d5c(void)

void FUN_146e22d5c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined8 uStack_60;
  longlong *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(undefined4 *)(param_1 + 0x118) = 0;
  iVar1 = *(int *)(param_1 + 0x110);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x108);
    lVar10 = 0;
    do {
      plVar9 = *(longlong **)(lVar2 + lVar10);
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 8))(plVar9,0);
      }
      lVar10 = lVar10 + 8;
    } while ((longlong)iVar1 * 8 != lVar10);
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  iVar1 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar10 = 0;
    do {
      plVar9 = *(longlong **)(lVar2 + lVar10);
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 8))(plVar9,0);
      }
      lVar10 = lVar10 + 8;
    } while ((longlong)iVar1 * 8 != lVar10);
  }
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  iVar1 = *(int *)(param_1 + 0x1b0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x1a8);
    lVar10 = 0;
    do {
      plVar9 = *(longlong **)(lVar2 + lVar10);
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 8))(plVar9,0);
      }
      lVar10 = lVar10 + 8;
    } while ((longlong)iVar1 * 8 != lVar10);
  }
  *(undefined4 *)(param_1 + 0x3c0) = 0;
  iVar1 = *(int *)(param_1 + 0x3b8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x3b0);
    lVar10 = 0;
    do {
      plVar9 = *(longlong **)(lVar2 + lVar10);
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 8))(plVar9,0);
      }
      lVar10 = lVar10 + 8;
    } while ((longlong)iVar1 * 8 != lVar10);
  }
  *(undefined4 *)(param_1 + 0x478) = 0;
  iVar1 = *(int *)(param_1 + 0x470);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x468);
    lVar10 = 0;
    do {
      plVar9 = *(longlong **)(lVar2 + lVar10);
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 8))(plVar9,0);
      }
      lVar10 = lVar10 + 8;
    } while ((longlong)iVar1 * 8 != lVar10);
  }
  local_a8 = *(longlong *)(param_1 + 0x520);
  uStack_60 = *(undefined8 *)(param_1 + 0x528);
  local_98 = *(longlong **)(param_1 + 0x530);
  uStack_50 = *(undefined8 *)(param_1 + 0x538);
  local_48 = *(undefined8 *)(param_1 + 0x540);
  uStack_40 = *(undefined8 *)(param_1 + 0x548);
  local_38 = *(undefined8 *)(param_1 + 0x550);
  uStack_30 = *(undefined8 *)(param_1 + 0x558);
  uVar7 = local_38;
  uVar8 = uStack_30;
  uVar5 = local_48;
  uVar6 = uStack_40;
  local_58 = local_98;
  uVar4 = uStack_50;
  local_68 = local_a8;
  uVar3 = uStack_60;
  *(ulonglong *)(param_1 + 0x550) = CONCAT44(uStack_74,local_78);
  *(ulonglong *)(param_1 + 0x558) = CONCAT44(uStack_6c,uStack_70);
  *(ulonglong *)(param_1 + 0x540) = CONCAT44(uStack_84,local_88);
  *(ulonglong *)(param_1 + 0x548) = CONCAT44(uStack_7c,uStack_80);
  *(undefined8 *)(param_1 + 0x530) = 0;
  *(ulonglong *)(param_1 + 0x538) = CONCAT44(uStack_8c,uStack_90);
  *(undefined8 *)(param_1 + 0x520) = 0;
  *(ulonglong *)(param_1 + 0x528) = CONCAT44(uStack_9c,uStack_a0);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  if (local_a8 != 0) {
    plVar9 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar9 = (longlong *)&local_88;
    }
    uStack_60 = uVar3;
    uStack_50 = uVar4;
    local_48 = uVar5;
    uStack_40 = uVar6;
    local_38 = uVar7;
    uStack_30 = uVar8;
    (**(code **)(*plVar9 + 0x10))();
  }
  local_a8 = *(longlong *)(param_1 + 0x560);
  uStack_60 = *(undefined8 *)(param_1 + 0x568);
  local_98 = *(longlong **)(param_1 + 0x570);
  uStack_50 = *(undefined8 *)(param_1 + 0x578);
  local_48 = *(undefined8 *)(param_1 + 0x580);
  uStack_40 = *(undefined8 *)(param_1 + 0x588);
  local_38 = *(undefined8 *)(param_1 + 0x590);
  uStack_30 = *(undefined8 *)(param_1 + 0x598);
  uVar7 = local_38;
  uVar8 = uStack_30;
  uVar5 = local_48;
  uVar6 = uStack_40;
  local_58 = local_98;
  uVar4 = uStack_50;
  local_68 = local_a8;
  uVar3 = uStack_60;
  *(ulonglong *)(param_1 + 0x590) = CONCAT44(uStack_74,local_78);
  *(ulonglong *)(param_1 + 0x598) = CONCAT44(uStack_6c,uStack_70);
  *(ulonglong *)(param_1 + 0x580) = CONCAT44(uStack_84,local_88);
  *(ulonglong *)(param_1 + 0x588) = CONCAT44(uStack_7c,uStack_80);
  *(undefined8 *)(param_1 + 0x570) = 0;
  *(ulonglong *)(param_1 + 0x578) = CONCAT44(uStack_8c,uStack_90);
  *(undefined8 *)(param_1 + 0x560) = 0;
  *(ulonglong *)(param_1 + 0x568) = CONCAT44(uStack_9c,uStack_a0);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  uStack_60 = uVar3;
  uStack_50 = uVar4;
  local_48 = uVar5;
  uStack_40 = uVar6;
  local_38 = uVar7;
  uStack_30 = uVar8;
  if (local_a8 != 0) {
    plVar9 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar9 = (longlong *)&local_88;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e23064 FUN_146e23064 body=734 status=ok
// SIG undefined FUN_146e23064(void)

int FUN_146e23064(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_e8 [40];
  longlong *local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  uint local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c0 = (longlong *)(param_1 + 0x4c8);
  lVar1 = param_1 + 0x4d8;
  local_b8 = (longlong *)&DAT_100000000;
  local_a8 = 0xffffffff;
  local_a0 = local_a0 & 0xffffffff00000000;
  iVar8 = 0;
  iVar5 = 0;
  local_b0 = lVar1;
  if (*(int *)(param_1 + 0x4f0) != 0) {
    FUN_1449c0562(&local_b8);
    iVar5 = *(int *)(param_1 + 0x4f0);
  }
  local_78 = local_a8;
  lVar2 = local_78;
  local_70 = (uint)local_a0;
  local_6c = local_a0._4_4_;
  local_88 = local_b8;
  local_80 = local_b0;
  local_90 = local_c0;
  local_78._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
  if ((local_78._4_4_ != iVar5) || (local_b0 != lVar1)) {
    iVar8 = 0;
    iVar4 = local_78._4_4_;
    local_78 = lVar2;
    do {
      lVar3 = *(longlong *)(param_1 + 0x4a0);
      lVar7 = (longlong)*(int *)(*local_90 + (longlong)iVar4 * 0xc) * 0x50;
      lVar2 = lVar3 + lVar7;
      lVar9 = lVar2 + 0x10;
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      local_50 = 0;
      local_60 = lVar9;
      if (*(int *)(lVar2 + 0x28) != 0) {
        FUN_1449c0562(&local_68);
      }
      plVar10 = (longlong *)(lVar3 + lVar7);
      local_a0 = local_58;
      local_98 = local_50;
      local_94 = local_4c;
      local_b0 = local_68;
      local_a8 = local_60;
      uVar6 = *(uint *)(plVar10 + 5);
      local_68 = CONCAT44(1 << ((byte)uVar6 & 0x1f),(int)uVar6 >> 5);
      local_58 = CONCAT44(uVar6,-1 << ((byte)uVar6 & 0x1f));
      local_50 = uVar6 & 0xffffffe0;
      local_b8 = plVar10;
      local_60 = lVar9;
      if (*(uint *)(plVar10 + 5) != uVar6) {
        FUN_1449c0562(&local_68);
        uVar6 = local_58._4_4_;
      }
      lVar2 = local_60;
      if ((local_b8 != plVar10 || local_a8 != local_60) || local_a0._4_4_ != uVar6) {
        do {
          iVar8 = iVar8 + *(int *)(*(longlong *)(param_1 + 0x1f8) + 0x14 +
                                  (longlong)
                                  *(int *)(*local_b8 + (longlong)(int)local_a0._4_4_ * 0xc) * 0x18);
          local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0 & ~local_b0._4_4_);
          FUN_1449c0562(&local_b0);
        } while (local_b8 != plVar10 || (local_a8 != lVar2 || local_a0._4_4_ != uVar6));
      }
      local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
      FUN_1449c0562(&local_88);
      iVar4 = local_78._4_4_;
      lVar2 = local_78;
    } while (local_90 != local_c0 || (local_80 != lVar1 || local_78._4_4_ != iVar5));
  }
  local_78 = lVar2;
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e23344 FUN_146e23344 body=1192 status=ok
// SIG undefined FUN_146e23344(void)

int FUN_146e23344(longlong param_1,uint param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  
  if ((*(uint *)(param_1 + 0x478) <= param_2) &&
     (uVar6 = param_2 + 1, *(uint *)(param_1 + 0x478) <= uVar6)) {
    *(uint *)(param_1 + 0x478) = uVar6;
    iVar3 = *(int *)(param_1 + 0x470);
    if ((longlong)iVar3 != 0) {
      lVar4 = *(longlong *)(param_1 + 0x468);
      lVar9 = 0;
      do {
        plVar2 = *(longlong **)(lVar4 + lVar9);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 8))(plVar2,uVar6);
        }
        lVar9 = lVar9 + 8;
      } while ((longlong)iVar3 * 8 != lVar9);
    }
  }
  if (*(int *)(param_1 + 0x360) != *(int *)(param_1 + 0x38c)) {
    lVar4 = param_1 + 0x390;
    if (*(longlong *)(param_1 + 0x398) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x398);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x3a0) - 1U & param_3) * 4);
    if (iVar3 != -1) {
      do {
        lVar4 = *(longlong *)(param_1 + 0x358) + (longlong)iVar3 * 0x20;
        if (*(uint *)(*(longlong *)(param_1 + 0x358) + (longlong)iVar3 * 0x20) == param_3) {
          if (lVar4 != -8 && lVar4 != 0) {
            iVar3 = *(int *)(lVar4 + 0x10);
            if ((longlong)iVar3 != 0) {
              iVar8 = *(int *)(*(longlong *)(lVar4 + 8) + -4 + (longlong)iVar3 * 4);
              *(int *)(lVar4 + 0x10) = iVar3 + -1;
              FUN_14479f406();
              goto LAB_146e234ad;
            }
          }
          break;
        }
        iVar3 = *(int *)(lVar4 + 0x18);
      } while (iVar3 != -1);
    }
  }
  iVar8 = *(int *)(param_1 + 0x1b8);
  uVar6 = iVar8 + 1;
  uVar5 = (ulonglong)uVar6;
  *(uint *)(param_1 + 0x1b8) = uVar6;
  iVar3 = *(int *)(param_1 + 0x1b0);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x1a8);
    lVar9 = 0;
    do {
      plVar2 = *(longlong **)(lVar4 + lVar9);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2,uVar6);
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar3 * 8 != lVar9);
  }
  lVar4 = (longlong)iVar8;
  iVar3 = *(int *)(param_1 + 0x48);
  if (param_3 != 0) {
    uVar6 = iVar3 + param_3;
    uVar5 = (ulonglong)uVar6;
    *(uint *)(param_1 + 0x48) = uVar6;
    iVar1 = *(int *)(param_1 + 0x40);
    if ((longlong)iVar1 != 0) {
      lVar9 = *(longlong *)(param_1 + 0x38);
      lVar7 = 0;
      do {
        plVar2 = *(longlong **)(lVar9 + lVar7);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 8))(plVar2,uVar6);
        }
        lVar7 = lVar7 + 8;
      } while ((longlong)iVar1 * 8 != lVar7);
    }
  }
  lVar9 = *(longlong *)(param_1 + 0x1f8);
  *(longlong *)(lVar9 + 8 + lVar4 * 0x18) = param_1 + 0x30;
  *(int *)(lVar9 + 0x10 + lVar4 * 0x18) = iVar3;
  *(uint *)(lVar9 + 0x14 + lVar4 * 0x18) = param_3;
  param_4 = (undefined4)CONCAT71((int7)(uVar5 >> 8),(char)param_4);
LAB_146e234ad:
  lVar4 = *(longlong *)(param_1 + 0x488);
  lVar9 = (longlong)(int)param_2 * 0x10;
  iVar3 = *(int *)(lVar4 + 8 + lVar9);
  *(uint *)(lVar4 + 8 + lVar9) = iVar3 + 1U;
  if (*(uint *)(lVar4 + 0xc + lVar9) < iVar3 + 1U) {
    FUN_1446f48e2((longlong *)(lVar4 + lVar9),iVar3);
  }
  *(int *)(*(longlong *)(lVar4 + lVar9) + (longlong)iVar3 * 4) = iVar8;
  lVar9 = (longlong)iVar8;
  *(undefined1 *)(*(longlong *)(param_1 + 0x1c8) + lVar9) = 2;
  *(uint *)(*(longlong *)(param_1 + 0x1e0) + lVar9 * 4) = param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x210) + lVar9 * 4) = 0x3c23d70a;
  *(undefined4 *)(*(longlong *)(param_1 + 0x228) + lVar9 * 4) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0x240) + lVar9) = 0;
  lVar4 = *(longlong *)(param_1 + 0x270);
  lVar9 = lVar9 * 0x10;
  iVar3 = *(int *)(lVar4 + 0xc + lVar9);
  FUN_146e2ace7(*(undefined8 *)(lVar4 + lVar9),*(undefined4 *)(lVar4 + 8 + lVar9));
  *(undefined4 *)(lVar4 + 8 + lVar9) = 0;
  if ((iVar3 < 0) && (*(int *)(lVar4 + lVar9 + 0xc) != 0)) {
    FUN_146e2e77a(lVar4 + lVar9);
  }
  lVar4 = *(longlong *)(param_1 + 0x288);
  iVar3 = *(int *)(lVar4 + 0xc + lVar9);
  FUN_146e2b0b9(*(undefined8 *)(lVar4 + lVar9),*(undefined4 *)(lVar4 + 8 + lVar9));
  *(undefined4 *)(lVar4 + 8 + lVar9) = 0;
  if ((iVar3 < 0) && (*(int *)(lVar4 + lVar9 + 0xc) != 0)) {
    FUN_146e2e7aa(lVar4 + lVar9);
  }
  lVar4 = *(longlong *)(param_1 + 0x2a0);
  iVar3 = *(int *)(lVar4 + 0xc + lVar9);
  FUN_146e2ace7(*(undefined8 *)(lVar4 + lVar9),*(undefined4 *)(lVar4 + 8 + lVar9));
  *(undefined4 *)(lVar4 + 8 + lVar9) = 0;
  if ((iVar3 < 0) && (*(int *)(lVar4 + lVar9 + 0xc) != 0)) {
    FUN_146e2e77a(lVar4 + lVar9);
  }
  lVar4 = *(longlong *)(param_1 + 0x2b8);
  iVar3 = *(int *)(lVar4 + 0xc + lVar9);
  FUN_146e2b48b(*(undefined8 *)(lVar4 + lVar9),*(undefined4 *)(lVar4 + 8 + lVar9));
  *(undefined4 *)(lVar4 + 8 + lVar9) = 0;
  if ((iVar3 < 0) && (*(int *)(lVar4 + lVar9 + 0xc) != 0)) {
    FUN_146e2e7da(lVar4 + lVar9);
  }
  lVar4 = *(longlong *)(param_1 + 0x2d0);
  iVar3 = *(int *)(lVar4 + 0xc + lVar9);
  FUN_146e2b0b9(*(undefined8 *)(lVar4 + lVar9),*(undefined4 *)(lVar4 + 8 + lVar9));
  *(undefined4 *)(lVar4 + 8 + lVar9) = 0;
  if ((iVar3 < 0) && (*(int *)(lVar4 + lVar9 + 0xc) != 0)) {
    FUN_146e2e7aa(lVar4 + lVar9);
  }
  lVar4 = *(longlong *)(param_1 + 0x2e8);
  iVar3 = *(int *)(lVar4 + 0xc + lVar9);
  FUN_146e2b85d(*(undefined8 *)(lVar4 + lVar9),*(undefined4 *)(lVar4 + 8 + lVar9));
  *(undefined4 *)(lVar4 + 8 + lVar9) = 0;
  if ((iVar3 < 0) && (*(int *)(lVar4 + lVar9 + 0xc) != 0)) {
    FUN_146e2e80a(lVar4 + lVar9);
  }
  lVar4 = *(longlong *)(param_1 + 0x300);
  iVar3 = *(int *)(lVar4 + 0xc + lVar9);
  FUN_146e2b0b9(*(undefined8 *)(lVar4 + lVar9),*(undefined4 *)(lVar4 + 8 + lVar9));
  *(undefined4 *)(lVar4 + 8 + lVar9) = 0;
  if ((iVar3 < 0) && (*(int *)(lVar4 + lVar9 + 0xc) != 0)) {
    FUN_146e2e7aa(lVar4 + lVar9);
  }
  lVar4 = *(longlong *)(param_1 + 0x318);
  iVar3 = *(int *)(lVar4 + 0xc + lVar9);
  FUN_146e2bc2f(*(undefined8 *)(lVar4 + lVar9),*(undefined4 *)(lVar4 + 8 + lVar9));
  *(undefined4 *)(lVar4 + 8 + lVar9) = 0;
  if ((iVar3 < 0) && (*(int *)(lVar4 + lVar9 + 0xc) != 0)) {
    FUN_146e2e83a(lVar4 + lVar9);
  }
  lVar4 = *(longlong *)(param_1 + 0x330);
  iVar3 = *(int *)(lVar4 + 0xc + lVar9);
  FUN_146e2c001(*(undefined8 *)(lVar4 + lVar9),*(undefined4 *)(lVar4 + 8 + lVar9));
  *(undefined4 *)(lVar4 + 8 + lVar9) = 0;
  if ((iVar3 < 0) && (*(int *)(lVar4 + lVar9 + 0xc) != 0)) {
    FUN_146e2e86a(lVar4 + lVar9);
  }
  lVar4 = *(longlong *)(param_1 + 0x348);
  iVar3 = *(int *)(lVar4 + 0xc + lVar9);
  FUN_146e2b48b(*(undefined8 *)(lVar4 + lVar9),*(undefined4 *)(lVar4 + 8 + lVar9));
  *(undefined4 *)(lVar4 + 8 + lVar9) = 0;
  if ((iVar3 < 0) && (*(int *)(lVar4 + lVar9 + 0xc) != 0)) {
    FUN_146e2e7da(lVar4 + lVar9);
  }
  FUN_146e237ec(param_1,iVar8,param_4);
  return iVar8;
}



// FUNCTION 146e237ec FUN_146e237ec body=227 status=ok
// SIG undefined FUN_146e237ec(void)

void FUN_146e237ec(longlong param_1,int param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [4];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = (longlong)param_2;
  *(char *)(*(longlong *)(param_1 + 0x1c8) + lVar2) = '\x02' - param_3;
  lVar1 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1e0) + lVar2 * 4) * 0x50 +
          *(longlong *)(param_1 + 0x4a0);
  local_1c = param_2;
  if (param_3 == '\0') {
    FUN_144a7cc9e(lVar1,param_2);
    lVar1 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1e0) + lVar2 * 4) * 0x50;
    if (*(int *)(*(longlong *)(param_1 + 0x4a0) + 8 + lVar1) ==
        *(int *)(*(longlong *)(param_1 + 0x4a0) + 0x34 + lVar1)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
  }
  else {
    FUN_1447cbafe(lVar1,local_20,&local_1c,0);
    FUN_144980568(param_1 + 0x4c8,local_20,(longlong)local_1c * 4 + *(longlong *)(param_1 + 0x1e0),0
                 );
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e238e0 FUN_146e238e0 body=471 status=ok
// SIG undefined FUN_146e238e0(void)

void FUN_146e238e0(longlong param_1,int param_2,undefined8 param_3,longlong *param_4)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  undefined2 *puVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined4 uVar11;
  float fVar12;
  undefined1 auStack_a8 [40];
  longlong local_80 [2];
  float local_70;
  float fStack_6c;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar11 = FUN_146e23ab8(param_3);
  lVar10 = (longlong)param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x228) + lVar10 * 4) = uVar11;
  FUN_146e23b42(&local_70,param_3);
  fVar3 = fStack_6c;
  fVar2 = local_70;
  FUN_1400021e4(&DAT_14c994a90,local_80);
  FUN_146e23be8(&local_70,param_3,local_80);
  if (local_68 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)CONCAT44(fStack_6c,local_70);
  }
  uVar7 = 0;
  iVar4 = local_68 + -1;
  if (local_68 == 0) {
    iVar4 = 0;
  }
  uVar11 = FUN_144a49b4a(iVar4,puVar6);
  iVar4 = FUN_140aad9fa(param_4,uVar11,&local_70);
  lVar5 = (longlong)iVar4 * 0x28 + *param_4;
  if (lVar5 == 0 || iVar4 == -1) {
    lVar8 = 0;
  }
  else {
    lVar8 = *(longlong *)(lVar5 + 0x10);
    uVar7 = *(uint *)(lVar5 + 0x18);
  }
  if (CONCAT44(fStack_6c,local_70) != 0) {
    FUN_1400020a8();
  }
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  *(bool *)(*(longlong *)(param_1 + 0x240) + lVar10) =
       uVar7 == *(uint *)(*(longlong *)(param_1 + 0x1f8) + 0x14 + lVar10 * 0x18);
  if (*(char *)(*(longlong *)(param_1 + 0x240) + lVar10) == '\x01') {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x1f8) + 0x14 + lVar10 * 0x18);
    lVar5 = 0;
    if (uVar7 == uVar1) {
      lVar5 = lVar8;
    }
    if (0 < (int)uVar1) {
      iVar4 = *(int *)(*(longlong *)(param_1 + 0x1f8) + 0x10 + lVar10 * 0x18);
      lVar10 = *(longlong *)(param_1 + 0xf0);
      uVar9 = 0;
      do {
        fVar12 = fVar2;
        if (0.0001 < ABS(fVar3 - fVar2) && uVar7 == uVar1) {
          fVar12 = *(float *)(lVar5 + uVar9 * 4) * (fVar3 - fVar2) + fVar2;
        }
        *(float *)((longlong)iVar4 * 4 + lVar10 + uVar9 * 4) = fVar12;
        uVar9 = uVar9 + 1;
      } while (uVar1 != uVar9);
    }
  }
  else {
    *(float *)(*(longlong *)(param_1 + 0x210) + lVar10 * 4) = fVar2;
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e23ab8 FUN_146e23ab8 body=137 status=ok
// SIG undefined FUN_146e23ab8(void)

undefined4 FUN_146e23ab8(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(&DAT_14c994a98,local_40);
  iVar1 = FUN_144a41c6c(param_1,local_40);
  if (iVar1 == -1) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 0xc);
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e23b42 FUN_146e23b42 body=164 status=ok
// SIG undefined FUN_146e23b42(void)

undefined8 * FUN_146e23b42(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c994a90,local_30);
  iVar2 = FUN_144a41c6c(param_2,local_30);
  if (iVar2 == -1) {
    *param_1 = 0x3c23d70a3c23d70a;
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar2 * 0xc);
    *(undefined4 *)param_1 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + (longlong)iVar2 * 0xc);
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e23be8 FUN_146e23be8 body=127 status=ok
// SIG undefined FUN_146e23be8(void)

undefined8 FUN_146e23be8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(&DAT_14c994a90,local_38);
  local_48 = 0;
  FUN_1408ab21e(param_2,param_1,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e23c68 FUN_146e23c68 body=545 status=ok
// SIG undefined FUN_146e23c68(void)

int FUN_146e23c68(longlong param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  
  uVar7 = (ulonglong)param_4;
  if ((*(uint *)(param_1 + 0x478) <= param_2) &&
     (uVar4 = param_2 + 1, *(uint *)(param_1 + 0x478) <= uVar4)) {
    *(uint *)(param_1 + 0x478) = uVar4;
    iVar3 = *(int *)(param_1 + 0x470);
    if ((longlong)iVar3 != 0) {
      lVar6 = *(longlong *)(param_1 + 0x468);
      lVar9 = 0;
      do {
        plVar2 = *(longlong **)(lVar6 + lVar9);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 8))(plVar2,uVar4);
        }
        lVar9 = lVar9 + 8;
      } while ((longlong)iVar3 * 8 != lVar9);
    }
  }
  if (*(int *)(param_1 + 0x418) != *(int *)(param_1 + 0x444)) {
    lVar6 = param_1 + 0x448;
    if (*(longlong *)(param_1 + 0x450) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x450);
    }
    iVar3 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x458) - 1U & param_3) * 4);
    if (iVar3 != -1) {
      do {
        lVar6 = *(longlong *)(param_1 + 0x410) + (longlong)iVar3 * 0x20;
        if (*(uint *)(*(longlong *)(param_1 + 0x410) + (longlong)iVar3 * 0x20) == param_3) {
          if (lVar6 != -8 && lVar6 != 0) {
            iVar3 = *(int *)(lVar6 + 0x10);
            if ((longlong)iVar3 != 0) {
              iVar8 = *(int *)(*(longlong *)(lVar6 + 8) + -4 + (longlong)iVar3 * 4);
              *(int *)(lVar6 + 0x10) = iVar3 + -1;
              FUN_14479f406();
              lVar6 = (longlong)iVar8;
              goto LAB_146e23de4;
            }
          }
          break;
        }
        iVar3 = *(int *)(lVar6 + 0x18);
      } while (iVar3 != -1);
    }
  }
  iVar8 = *(int *)(param_1 + 0x3c0);
  *(int *)(param_1 + 0x3c0) = iVar8 + 1;
  iVar3 = *(int *)(param_1 + 0x3b8);
  if ((longlong)iVar3 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x3b0);
    lVar9 = 0;
    do {
      plVar2 = *(longlong **)(lVar6 + lVar9);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2,iVar8 + 1);
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar3 * 8 != lVar9);
  }
  lVar6 = (longlong)iVar8;
  iVar3 = *(int *)(param_1 + 0x118);
  if (param_3 != 0) {
    iVar5 = iVar3 + param_3;
    *(int *)(param_1 + 0x118) = iVar5;
    iVar1 = *(int *)(param_1 + 0x110);
    if ((longlong)iVar1 != 0) {
      uVar7 = *(ulonglong *)(param_1 + 0x108);
      lVar9 = 0;
      do {
        plVar2 = *(longlong **)(uVar7 + lVar9);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 8))(plVar2,iVar5);
        }
        lVar9 = lVar9 + 8;
      } while ((longlong)iVar1 * 8 != lVar9);
    }
  }
  lVar9 = *(longlong *)(param_1 + 0x400);
  *(longlong *)(lVar9 + 8 + lVar6 * 0x18) = param_1 + 0x100;
  *(int *)(lVar9 + 0x10 + lVar6 * 0x18) = iVar3;
  *(uint *)(lVar9 + 0x14 + lVar6 * 0x18) = param_3;
  uVar7 = CONCAT71((int7)(uVar7 >> 8),(char)param_4);
LAB_146e23de4:
  *(undefined1 *)(*(longlong *)(param_1 + 0x3d0) + lVar6) = 2;
  *(uint *)(*(longlong *)(param_1 + 1000) + lVar6 * 4) = param_2;
  FUN_146e23e8a(param_1,iVar8,uVar7 & 0xffffffff);
  return iVar8;
}



// FUNCTION 146e23e8a FUN_146e23e8a body=141 status=ok
// SIG undefined FUN_146e23e8a(void)

void FUN_146e23e8a(longlong param_1,int param_2,char param_3)

{
  longlong lVar1;
  undefined1 auStack_38 [40];
  undefined1 local_10 [4];
  int local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  *(char *)(*(longlong *)(param_1 + 0x3d0) + (longlong)param_2) = '\x02' - param_3;
  lVar1 = (longlong)*(int *)(*(longlong *)(param_1 + 1000) + (longlong)param_2 * 4) * 0x50 +
          *(longlong *)(param_1 + 0x4b8);
  local_c = param_2;
  if (param_3 != '\0') {
    FUN_1447cbafe(lVar1,local_10,&local_c,0);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_38);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_144a7cc9e(lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_38);
}



// FUNCTION 146e23f1e FUN_146e23f1e body=176 status=ok
// SIG undefined FUN_146e23f1e(void)

void FUN_146e23f1e(longlong param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = (longlong)param_2;
  FUN_144a7cc9e((longlong)*(int *)(*(longlong *)(param_1 + 1000) + lVar3 * 4) * 0x50 +
                *(longlong *)(param_1 + 0x4b8),param_2);
  *(undefined1 *)(*(longlong *)(param_1 + 0x3d0) + lVar3) = 3;
  local_24 = *(undefined4 *)(*(longlong *)(param_1 + 0x400) + 0x14 + lVar3 * 0x18);
  plVar2 = (longlong *)FUN_140147222(param_1 + 0x410);
  iVar1 = (int)plVar2[1];
  *(uint *)(plVar2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
    FUN_1446f48e2(plVar2,iVar1);
  }
  *(int *)(*plVar2 + (longlong)iVar1 * 4) = param_2;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e23fd0 FUN_146e23fd0 body=436 status=ok
// SIG undefined FUN_146e23fd0(void)

longlong * FUN_146e23fd0(longlong param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_2 = 0;
  param_2[1] = 0;
  lVar10 = *(longlong *)(param_1 + 0x4b8);
  lVar12 = (longlong)param_3 * 0x50;
  iVar11 = *(int *)(lVar10 + 8 + lVar12) - *(int *)(lVar10 + 0x34 + lVar12);
  if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar11);
  }
  if (iVar11 != 0) {
    FUN_146e2c704(param_2);
    lVar10 = *(longlong *)(param_1 + 0x4b8);
  }
  plVar1 = (longlong *)(lVar10 + lVar12);
  lVar13 = lVar10 + lVar12 + 0x10;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar13;
  if (*(int *)(lVar10 + lVar12 + 0x28) == 0) {
    iVar11 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar11 = (int)plVar1[5];
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar11) || (uStack_60 != lVar13)) {
    do {
      iVar4 = *(int *)(*local_90 + (longlong)iStack_74 * 0xc);
      lVar10 = *(longlong *)(param_1 + 0x400);
      iVar5 = (int)param_2[1];
      lVar12 = (longlong)iVar5;
      *(uint *)(param_2 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
        FUN_146e2c816(param_2,iVar5);
      }
      lVar6 = *param_2;
      *(undefined ***)(lVar6 + lVar12 * 0x18) = &PTR_FUN_149f5e380;
      puVar2 = (undefined4 *)(lVar10 + 8 + (longlong)iVar4 * 0x18);
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      puVar3 = (undefined4 *)(lVar6 + 8 + lVar12 * 0x18);
      *puVar3 = *puVar2;
      puVar3[1] = uVar7;
      puVar3[2] = uVar8;
      puVar3[3] = uVar9;
      *(undefined ***)(lVar6 + lVar12 * 0x18) = &PTR_FUN_149f5e378;
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar13 || iStack_74 != iVar11))
    ;
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146e24186 FUN_146e24186 body=133 status=ok
// SIG undefined FUN_146e24186(void)

ulonglong FUN_146e24186(longlong param_1,undefined1 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c994ac0,local_38);
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),*param_2);
  iVar1 = FUN_144a41c6c(param_1,local_38);
  if (iVar1 != -1) {
    uVar2 = FUN_1429913ec(param_1,iVar1,param_1 + 0x18);
    uVar3 = (ulonglong)uVar2;
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e2420c FUN_146e2420c body=129 status=ok
// SIG undefined FUN_146e2420c(void)

undefined4 FUN_146e2420c(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c994aa0,local_30);
  uVar2 = *param_2;
  iVar1 = FUN_144a41c6c(param_1,local_30);
  if (iVar1 != -1) {
    uVar2 = FUN_142991408(param_1,iVar1,param_1 + 0x18);
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e2428e FUN_146e2428e body=129 status=ok
// SIG undefined FUN_146e2428e(void)

undefined4 FUN_146e2428e(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c994aa8,local_30);
  uVar2 = *param_2;
  iVar1 = FUN_144a41c6c(param_1,local_30);
  if (iVar1 != -1) {
    uVar2 = FUN_142991408(param_1,iVar1,param_1 + 0x18);
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e24310 FUN_146e24310 body=133 status=ok
// SIG undefined FUN_146e24310(void)

ulonglong FUN_146e24310(longlong param_1,undefined1 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c994ab0,local_38);
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),*param_2);
  iVar1 = FUN_144a41c6c(param_1,local_38);
  if (iVar1 != -1) {
    uVar2 = FUN_1429913ec(param_1,iVar1,param_1 + 0x18);
    uVar3 = (ulonglong)uVar2;
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e24396 FUN_146e24396 body=141 status=ok
// SIG undefined FUN_146e24396(void)

undefined4 FUN_146e24396(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(&DAT_14c994ab8,local_40);
  uVar2 = *param_2;
  iVar1 = FUN_144a41c6c(param_1,local_40);
  if (iVar1 != -1) {
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 0xc);
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e24424 FUN_146e24424 body=129 status=ok
// SIG undefined FUN_146e24424(void)

undefined4 FUN_146e24424(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c994ac8,local_30);
  uVar2 = *param_2;
  iVar1 = FUN_144a41c6c(param_1,local_30);
  if (iVar1 != -1) {
    uVar2 = FUN_142991408(param_1,iVar1,param_1 + 0x18);
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e244a6 FUN_146e244a6 body=113 status=ok
// SIG undefined FUN_146e244a6(void)

void FUN_146e244a6(undefined1 *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_1[1] = param_3;
  local_19 = 0;
  uVar1 = FUN_146e2ce5c(param_2);
  *param_1 = uVar1;
  uVar2 = FUN_146e2cee2(param_2);
  *(undefined4 *)(param_1 + 4) = uVar2;
  uVar2 = FUN_146e2cf64(param_2);
  *(undefined4 *)(param_1 + 8) = uVar2;
  uVar1 = FUN_146e2cff4(param_2);
  param_1[0xc] = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e24518 FUN_146e24518 body=119 status=ok
// SIG undefined FUN_146e24518(void)

void FUN_146e24518(longlong param_1,longlong param_2)

{
  float fVar1;
  longlong lVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_144a127d2((longlong *)(param_1 + 0x10),*(undefined4 *)(param_2 + 0x14),1);
  if (0 < *(int *)(param_2 + 0x14)) {
    lVar2 = 0;
    do {
      fVar1 = *(float *)(*(longlong *)(*(longlong *)(param_2 + 8) + 0x90) +
                        (*(int *)(param_2 + 0x10) + lVar2) * 4);
      iVar3 = -1;
      if ((fVar1 != 0.0) || (NAN(fVar1))) {
        iVar3 = *(int *)(param_1 + 8);
        *(int *)(param_1 + 8) = iVar3 + 1;
      }
      *(int *)(*(longlong *)(param_1 + 0x10) + lVar2 * 4) = iVar3;
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_2 + 0x14));
  }
  return;
}



// FUNCTION 146e24590 FUN_146e24590 body=110 status=ok
// SIG undefined FUN_146e24590(void)

void FUN_146e24590(undefined8 *param_1,undefined8 param_2,float *param_3,int param_4,float param_5)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = (longlong)*(int *)(param_1[2] + (longlong)param_4 * 4);
  if (lVar4 != -1) {
    lVar3 = param_1[4];
    if (*(char *)*param_1 != '\0') {
      param_5 = 1.0;
    }
    fVar1 = param_3[2];
    fVar2 = param_3[1];
    *(float *)(lVar3 + lVar4 * 0xc) = param_5 * *param_3 + *(float *)(lVar3 + lVar4 * 0xc);
    *(float *)(lVar3 + 4 + lVar4 * 0xc) = fVar2 * param_5 + *(float *)(lVar3 + 4 + lVar4 * 0xc);
    *(float *)(lVar3 + 8 + lVar4 * 0xc) = fVar1 * param_5 + *(float *)(lVar3 + 8 + lVar4 * 0xc);
  }
  return;
}



// FUNCTION 146e245fe FUN_146e245fe body=1569 status=ok
// SIG undefined FUN_146e245fe(void)

void FUN_146e245fe(undefined8 *param_1,longlong param_2,float *param_3,float *param_4,int param_5,
                  int param_6,float param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_158 [36];
  float local_134;
  float local_130;
  float local_12c;
  undefined8 local_128;
  ulonglong uStack_120;
  undefined8 local_118;
  ulonglong uStack_110;
  undefined8 local_108;
  float fStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  iVar9 = *(int *)(param_1[2] + (longlong)param_5 * 4);
  lVar15 = (longlong)iVar9;
  iVar10 = *(int *)(param_1[2] + (longlong)param_6 * 4);
  if (*(char *)*param_1 == '\x01') {
    if ((iVar10 != -1 && lVar15 != -1) && param_3 != (float *)0x0) {
      fStack_100 = -param_3[10];
      local_128 = *(ulonglong *)param_3 ^ 0x8000000080000000;
      local_118 = *(ulonglong *)(param_3 + 4) ^ 0x8000000080000000;
      local_108 = *(ulonglong *)(param_3 + 8) ^ 0x8000000080000000;
      local_f8 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      uStack_ec = 0x3f800000;
      uStack_120 = (ulonglong)(uint)-param_3[2];
      uStack_110 = (ulonglong)(uint)-param_3[6];
      uStack_fc = 0;
      FUN_146dd9136(param_1[6],iVar9,iVar10);
    }
  }
  else {
    if (iVar10 != -1 && lVar15 != -1) {
      local_f8 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      uStack_ec = 0;
      local_108 = 0;
      fStack_100 = 0.0;
      uStack_fc = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_128 = 0;
      uStack_120 = 0;
      if (param_3 == (float *)0x0) {
        if (param_4 == (float *)0x0) goto LAB_146e247bd;
        fVar16 = -param_7;
        fStack_100 = param_4[10] * fVar16;
        local_128 = CONCAT44(param_4[1] * fVar16,fVar16 * *param_4);
        uStack_120 = (ulonglong)(uint)(param_4[2] * fVar16);
        local_118 = CONCAT44(param_4[5] * fVar16,param_4[4] * fVar16);
        uStack_110 = (ulonglong)(uint)(param_4[6] * fVar16);
        local_108 = CONCAT44(param_4[9] * fVar16,param_4[8] * fVar16);
      }
      else {
        fVar16 = -param_7 * param_7;
        fStack_100 = param_3[10] * fVar16;
        local_128 = CONCAT44(param_3[1] * fVar16,fVar16 * *param_3);
        uStack_120 = (ulonglong)(uint)(param_3[2] * fVar16);
        local_118 = CONCAT44(param_3[5] * fVar16,param_3[4] * fVar16);
        uStack_110 = (ulonglong)(uint)(param_3[6] * fVar16);
        local_108 = CONCAT44(param_3[9] * fVar16,param_3[8] * fVar16);
        if (param_4 != (float *)0x0) {
          local_134 = param_4[8];
          local_130 = param_4[9];
          local_12c = param_4[10];
          local_128 = CONCAT44(param_3[1] * fVar16 - param_4[1] * param_7,
                               fVar16 * *param_3 - *param_4 * param_7);
          uStack_120 = (ulonglong)(uint)(param_3[2] * fVar16 - param_4[2] * param_7);
          local_118 = CONCAT44(param_3[5] * fVar16 - param_4[5] * param_7,
                               param_3[4] * fVar16 - param_4[4] * param_7);
          uStack_110 = (ulonglong)(uint)(param_3[6] * fVar16 - param_4[6] * param_7);
          local_108 = CONCAT44(param_3[9] * fVar16 - local_130 * param_7,
                               param_3[8] * fVar16 - local_134 * param_7);
          fStack_100 = fStack_100 - local_12c * param_7;
        }
      }
      uStack_ec = 0x3f800000;
      uStack_f0 = 0;
      uStack_f4 = 0;
      local_f8 = 0;
      uStack_fc = 0;
      FUN_146dd9136(param_1[6],iVar9,iVar10,&local_128);
    }
    if ((param_3 != (float *)0x0) && (*(char *)(param_1 + 7) != '\0')) {
      if (iVar9 != -1) {
        lVar14 = (longlong)param_5 + (longlong)*(int *)(param_2 + 0x10);
        lVar13 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x48);
        fVar16 = *(float *)(lVar13 + lVar14 * 0xc);
        fVar1 = *(float *)(lVar13 + 4 + lVar14 * 0xc);
        fVar2 = *(float *)(lVar13 + 8 + lVar14 * 0xc);
        fVar3 = param_3[1];
        fVar4 = param_3[2];
        fVar5 = param_3[5];
        fVar6 = param_3[6];
        fVar7 = param_3[9];
        fVar8 = param_3[10];
        fVar11 = param_3[0xd];
        fVar12 = param_3[0xe];
        fVar17 = param_7 * param_7;
        lVar13 = param_1[4];
        *(float *)(lVar13 + lVar15 * 0xc) =
             fVar17 * (param_3[0xc] * 0.0 +
                      fVar2 * param_3[8] + fVar1 * param_3[4] + fVar16 * *param_3) +
             *(float *)(lVar13 + lVar15 * 0xc);
        *(float *)(lVar13 + 4 + lVar15 * 0xc) =
             (fVar11 * 0.0 + fVar2 * fVar7 + fVar1 * fVar5 + fVar16 * fVar3) * fVar17 +
             *(float *)(lVar13 + 4 + lVar15 * 0xc);
        *(float *)(lVar13 + 8 + lVar15 * 0xc) =
             (fVar12 * 0.0 + fVar2 * fVar8 + fVar1 * fVar6 + fVar16 * fVar4) * fVar17 +
             *(float *)(lVar13 + 8 + lVar15 * 0xc);
      }
      if ((iVar10 != -1) && (iVar9 != iVar10)) {
        lVar13 = (longlong)iVar10;
        lVar14 = (longlong)param_6 + (longlong)*(int *)(param_2 + 0x10);
        lVar15 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x48);
        fVar16 = *(float *)(lVar15 + lVar14 * 0xc);
        fVar1 = *(float *)(lVar15 + 4 + lVar14 * 0xc);
        fVar2 = param_3[9];
        fVar3 = param_3[8];
        fVar4 = *(float *)(lVar15 + 8 + lVar14 * 0xc);
        fVar5 = param_3[10];
        fVar6 = param_3[5];
        fVar7 = param_3[4];
        fVar8 = param_3[6];
        param_7 = param_7 * param_7;
        lVar15 = param_1[4];
        *(float *)(lVar15 + lVar13 * 0xc) =
             param_7 * (fVar4 * param_3[2] + fVar16 * *param_3 + fVar1 * param_3[1]) +
             *(float *)(lVar15 + lVar13 * 0xc);
        *(float *)(lVar15 + 4 + lVar13 * 0xc) =
             (fVar8 * fVar4 + fVar7 * fVar16 + fVar6 * fVar1) * param_7 +
             *(float *)(lVar15 + 4 + lVar13 * 0xc);
        *(float *)(lVar15 + 8 + lVar13 * 0xc) =
             (fVar5 * fVar4 + fVar3 * fVar16 + fVar2 * fVar1) * param_7 +
             *(float *)(lVar15 + 8 + lVar13 * 0xc);
      }
    }
  }
LAB_146e247bd:
  if ((local_e0 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e24c20 FUN_146e24c20 body=1160 status=ok
// SIG undefined FUN_146e24c20(void)

void FUN_146e24c20(int *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined1 uVar3;
  byte bVar4;
  char cVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined2 *puVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined **local_90;
  longlong local_88;
  longlong local_78;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  float local_48;
  float local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar7 = (longlong)param_1[0x45];
  if ((lVar7 != -1) && ((*(byte *)(*(longlong *)(param_2 + 0x48) + lVar7) & 0x92) == 0x82)) {
    uVar3 = FUN_1429913ec(param_2,lVar7,param_2 + 0x18);
    *(undefined1 *)(param_1 + 0xc) = uVar3;
  }
  lVar7 = (longlong)param_1[0x46];
  if ((lVar7 != -1) && ((*(byte *)(*(longlong *)(param_2 + 0x48) + lVar7) & 0x92) == 0x82)) {
    local_44 = *(float *)(*(longlong *)(param_2 + 0x28) + lVar7 * 0xc);
    local_48 = *(float *)(*(longlong *)(param_2 + 0x18) + lVar7 * 0xc);
    if ((*(byte *)(*(longlong *)(param_2 + 0x48) + lVar7) & 0x40) == 0) {
      if ((char)param_1[0xc] == '\0') {
        fVar13 = 1.0;
      }
      else {
        fVar13 = 1e+09;
      }
      fVar11 = local_44;
      if (fVar13 <= local_44) {
        fVar11 = fVar13;
      }
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      fVar12 = local_48;
      if (fVar13 <= local_48) {
        fVar12 = fVar13;
      }
      if (fVar12 <= 0.0) {
        fVar12 = 0.0;
      }
      bVar4 = 1;
      if (((float)param_1[0x18] == fVar12) && (!NAN((float)param_1[0x18]) && !NAN(fVar12))) {
        bVar4 = -((float)param_1[0x19] != fVar11) & 1;
      }
      *(byte *)(param_1 + 0x1a) = *(byte *)(param_1 + 0x1a) | bVar4;
      param_1[0x18] = (int)fVar12;
      param_1[0x19] = (int)fVar11;
    }
    else {
      lVar1 = *(longlong *)(param_2 + 0x38);
      lVar7 = lVar7 * 0x10;
      if ((char)param_1[0xc] == '\0') {
        uVar14 = 0x3f800000;
      }
      else {
        uVar14 = 0x4e6e6b28;
      }
      iVar10 = *(int *)(lVar1 + 8 + lVar7);
      if (iVar10 == 0) {
        puVar8 = &DAT_149dfb77a;
      }
      else {
        puVar8 = *(undefined2 **)(lVar1 + lVar7);
      }
      iVar9 = *param_1;
      iVar2 = iVar10 + -1;
      if (iVar10 == 0) {
        iVar2 = 0;
      }
      uVar6 = FUN_144a49b4a(iVar2,puVar8);
      iVar10 = FUN_140aad9fa(param_3,uVar6,lVar1 + lVar7);
      lVar7 = (longlong)iVar10 * 0x28 + *param_3;
      if (lVar7 == 0 || iVar10 == -1) {
        local_a8 = 0;
        uStack_a0 = 0;
      }
      else {
        local_a8 = *(undefined8 *)(lVar7 + 0x10);
        uStack_a0 = *(undefined4 *)(lVar7 + 0x18);
        uStack_9c = *(undefined4 *)(lVar7 + 0x1c);
      }
      local_c0 = 0x447a0000;
      local_c8 = 0x10;
      local_b8 = uVar14;
      FUN_140b3a35c(&local_90,&local_48,&local_a8,iVar9);
      FUN_14025ef54(param_1 + 0xe,&local_90);
      param_1[0x1c] = local_58;
      param_1[0x1d] = iStack_54;
      param_1[0x1e] = iStack_50;
      param_1[0x1f] = iStack_4c;
      local_90 = &PTR_FUN_149f57480;
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      if (local_88 != 0) {
        FUN_1400020a8();
      }
    }
  }
  lVar7 = (longlong)param_1[0x47];
  if ((lVar7 != -1) &&
     (bVar4 = *(byte *)(*(longlong *)(param_2 + 0x48) + lVar7), (bVar4 & 0x92) == 0x82)) {
    local_44 = *(float *)(*(longlong *)(param_2 + 0x28) + lVar7 * 0xc);
    local_48 = *(float *)(*(longlong *)(param_2 + 0x18) + lVar7 * 0xc);
    if ((bVar4 & 0x40) == 0) {
      if ((char)param_1[0xc] == '\0') {
        fVar13 = 1.0;
      }
      else {
        fVar13 = 1e+09;
      }
      fVar11 = local_44;
      if (fVar13 <= local_44) {
        fVar11 = fVar13;
      }
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      fVar12 = local_48;
      if (fVar13 <= local_48) {
        fVar12 = fVar13;
      }
      if (fVar12 <= 0.0) {
        fVar12 = 0.0;
      }
      bVar4 = 1;
      if (((float)param_1[0x2a] == fVar12) && (!NAN((float)param_1[0x2a]) && !NAN(fVar12))) {
        bVar4 = -((float)param_1[0x2b] != fVar11) & 1;
      }
      *(byte *)(param_1 + 0x2c) = *(byte *)(param_1 + 0x2c) | bVar4;
      param_1[0x2a] = (int)fVar12;
      param_1[0x2b] = (int)fVar11;
    }
    else {
      lVar1 = *(longlong *)(param_2 + 0x38);
      lVar7 = lVar7 * 0x10;
      if ((char)param_1[0xc] == '\0') {
        uVar14 = 0x3f800000;
      }
      else {
        uVar14 = 0x4e6e6b28;
      }
      iVar10 = *(int *)(lVar1 + 8 + lVar7);
      if (iVar10 == 0) {
        puVar8 = &DAT_149dfb77a;
      }
      else {
        puVar8 = *(undefined2 **)(lVar1 + lVar7);
      }
      iVar9 = *param_1;
      iVar2 = iVar10 + -1;
      if (iVar10 == 0) {
        iVar2 = 0;
      }
      uVar6 = FUN_144a49b4a(iVar2,puVar8);
      iVar10 = FUN_140aad9fa(param_3,uVar6,lVar1 + lVar7);
      lVar7 = (longlong)iVar10 * 0x28 + *param_3;
      if (lVar7 == 0 || iVar10 == -1) {
        local_a8 = 0;
        uStack_a0 = 0;
      }
      else {
        local_a8 = *(undefined8 *)(lVar7 + 0x10);
        uStack_a0 = *(undefined4 *)(lVar7 + 0x18);
        uStack_9c = *(undefined4 *)(lVar7 + 0x1c);
      }
      local_c0 = 0x447a0000;
      local_c8 = 0x10;
      local_b8 = uVar14;
      FUN_140b3a35c(&local_90,&local_48,&local_a8,iVar9);
      FUN_14025ef54(param_1 + 0x20,&local_90);
      param_1[0x2e] = local_58;
      param_1[0x2f] = iStack_54;
      param_1[0x30] = iStack_50;
      param_1[0x31] = iStack_4c;
      local_90 = &PTR_FUN_149f57480;
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      if (local_88 != 0) {
        FUN_1400020a8();
      }
    }
  }
  iVar10 = *param_1;
  if (0 < iVar10) {
    iVar9 = 0;
    do {
      cVar5 = FUN_146e250aa(param_1,iVar9);
      if (cVar5 != '\0') {
        param_1[0x42] = iVar9;
        break;
      }
      iVar9 = iVar9 + 1;
    } while (iVar10 != iVar9);
  }
  do {
    if (iVar10 < 1) {
      if (param_1[0x43] != -1) goto LAB_146e24e93;
      goto LAB_146e24e9e;
    }
    iVar10 = iVar10 + -1;
    cVar5 = FUN_146e250aa(param_1,iVar10);
  } while (cVar5 == '\0');
  param_1[0x43] = iVar10;
LAB_146e24e93:
  uVar3 = 1;
  if (param_1[0x42] == -1) {
LAB_146e24e9e:
    uVar3 = 0;
  }
  *(undefined1 *)(param_1 + 0x44) = uVar3;
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e250aa FUN_146e250aa body=163 status=ok
// SIG undefined FUN_146e250aa(void)

uint FUN_146e250aa(longlong param_1,int param_2)

{
  float *pfVar1;
  float *pfVar2;
  
  if ((*(int *)(param_1 + 0x58) < 2) ||
     (ABS(*(float *)(param_1 + 0x60) - *(float *)(param_1 + 100)) <= 0.0001)) {
    pfVar1 = *(float **)(param_1 + 0x50);
  }
  else {
    pfVar1 = (float *)((ulonglong)*(byte *)(*(longlong *)(param_1 + 0x40) + (longlong)param_2) * 4 +
                      *(longlong *)(param_1 + 0x50));
  }
  if ((*(int *)(param_1 + 0xa0) < 2) ||
     (ABS(*(float *)(param_1 + 0xa8) - *(float *)(param_1 + 0xac)) <= 0.0001)) {
    pfVar2 = *(float **)(param_1 + 0x98);
  }
  else {
    pfVar2 = (float *)((ulonglong)*(byte *)(*(longlong *)(param_1 + 0x88) + (longlong)param_2) * 4 +
                      *(longlong *)(param_1 + 0x98));
  }
  return -(uint)(0.0 < *pfVar2 || 0.0 < *pfVar1) & 0xffffff01;
}



// FUNCTION 146e2514e FUN_146e2514e body=759 status=ok
// SIG undefined FUN_146e2514e(void)

void FUN_146e2514e(longlong param_1,longlong param_2,float param_3,int param_4,float param_5,
                  float param_6)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  lVar2 = *(longlong *)(param_2 + 8);
  lVar5 = (longlong)param_4;
  lVar6 = *(int *)(param_2 + 0x10) + lVar5;
  fVar1 = *(float *)(*(longlong *)(lVar2 + 0x90) + lVar6 * 4);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    fVar8 = 0.0;
    if ((fVar1 != 0.0) || (NAN(fVar1))) {
      lVar3 = *(longlong *)(lVar2 + 0xa8);
      lVar7 = lVar6 * 0x10;
      lVar4 = *(longlong *)(param_1 + 0xd8);
      fVar10 = *(float *)(lVar3 + 8 + lVar7) - *(float *)(lVar4 + 8 + lVar5 * 0xc);
      fVar13 = *(float *)(lVar3 + 4 + lVar7) - *(float *)(lVar4 + 4 + lVar5 * 0xc);
      fVar11 = *(float *)(lVar3 + lVar7) - *(float *)(lVar4 + lVar5 * 0xc);
      fVar12 = fVar10 * fVar10 + fVar11 * fVar11 + fVar13 * fVar13;
      if (0.0001 <= fVar12) {
        fVar12 = SQRT(fVar12);
        fVar10 = fVar10 / fVar12;
        fVar8 = fVar13 / fVar12;
        fVar11 = fVar11 / fVar12;
      }
      else {
        fVar11 = 1.0;
        fVar10 = 0.0;
        fVar12 = 0.0;
      }
      fVar9 = (*(float *)(*(longlong *)(lVar2 + 0x78) + lVar6 * 4) +
              *(float *)(*(longlong *)(param_1 + 0xf8) + lVar5 * 4)) * param_5 * param_3 * param_3 *
              0.5;
      fVar13 = *(float *)(*(longlong *)(param_1 + 200) + lVar5 * 4);
      fVar12 = (-fVar9 * fVar12 - fVar13) / (fVar9 * fVar1 + 1.0);
      *(float *)(*(longlong *)(param_1 + 200) + lVar5 * 4) = fVar12 + fVar13;
      lVar5 = *(int *)(param_2 + 0x10) + lVar5;
      lVar2 = *(longlong *)(*(longlong *)(param_2 + 8) + 0xa8);
      fVar1 = *(float *)(*(longlong *)(*(longlong *)(param_2 + 8) + 0x90) + lVar5 * 4);
      lVar5 = lVar5 * 0x10;
      *(float *)(lVar2 + lVar5) = fVar11 * fVar12 * fVar1 + *(float *)(lVar2 + lVar5);
      *(float *)(lVar2 + 4 + lVar5) = fVar8 * fVar12 * fVar1 + *(float *)(lVar2 + 4 + lVar5);
      *(float *)(lVar2 + 8 + lVar5) = fVar10 * fVar12 * fVar1 + *(float *)(lVar2 + 8 + lVar5);
    }
  }
  else if ((fVar1 != 0.0) || (NAN(fVar1))) {
    lVar2 = *(longlong *)(lVar2 + 0xa8);
    lVar6 = lVar6 * 0x10;
    lVar3 = *(longlong *)(param_1 + 0xd8);
    lVar4 = lVar5 * 0xc;
    fVar1 = *(float *)(lVar2 + 8 + lVar6);
    fVar8 = *(float *)(lVar3 + 8 + lVar4);
    fVar10 = *(float *)(lVar2 + 4 + lVar6);
    fVar11 = *(float *)(lVar3 + 4 + lVar4);
    *(float *)(lVar2 + lVar6) =
         *(float *)(lVar2 + lVar6) -
         (*(float *)(lVar2 + lVar6) - *(float *)(lVar3 + lVar4)) * param_5;
    *(float *)(lVar2 + 4 + lVar6) = fVar10 - (fVar10 - fVar11) * param_5;
    *(float *)(lVar2 + 8 + lVar6) = fVar1 - (fVar1 - fVar8) * param_5;
    lVar5 = *(int *)(param_2 + 0x10) + lVar5;
    lVar2 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x28);
    lVar6 = *(longlong *)(*(longlong *)(param_2 + 8) + 0xa8);
    lVar7 = lVar5 * 0x10;
    fVar1 = *(float *)(lVar6 + 8 + lVar7);
    fVar8 = *(float *)(lVar2 + 8 + lVar5 * 0xc);
    fVar10 = *(float *)(lVar6 + 4 + lVar7);
    fVar11 = *(float *)(lVar2 + 4 + lVar5 * 0xc);
    lVar3 = *(longlong *)(param_1 + 0xe8);
    fVar12 = *(float *)(lVar3 + 8 + lVar4);
    fVar13 = *(float *)(lVar3 + 4 + lVar4);
    *(float *)(lVar6 + lVar7) =
         *(float *)(lVar6 + lVar7) -
         ((*(float *)(lVar6 + lVar7) - *(float *)(lVar2 + lVar5 * 0xc)) -
         param_3 * *(float *)(lVar3 + lVar4)) * param_6;
    *(float *)(lVar6 + 4 + lVar7) = fVar10 - ((fVar10 - fVar11) - fVar13 * param_3) * param_6;
    *(float *)(lVar6 + 8 + lVar7) = fVar1 - ((fVar1 - fVar8) - fVar12 * param_3) * param_6;
  }
  return;
}



// FUNCTION 146e254c8 FUN_146e254c8 body=465 status=ok
// SIG undefined FUN_146e254c8(void)

undefined8 * FUN_146e254c8(longlong *param_1,longlong param_2)

{
  char *pcVar1;
  ulonglong *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 auStack_48 [47];
  char local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar3 = FUN_1448332aa(param_1,&DAT_149e3cba8);
  if (iVar3 < 4) {
    puVar4 = (undefined8 *)FUN_14001cc68(200,0x10);
    *(undefined4 *)(puVar4 + 1) = 0;
    *(undefined2 *)((longlong)puVar4 + 0xc) = 1;
    *puVar4 = &PTR_FUN_149f48460;
    puVar4[0xf] = 0;
    *(undefined4 *)(puVar4 + 0x10) = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[0x11] = 0;
    puVar4[0x12] = 0;
    puVar4[0x13] = 0;
    puVar4[0x14] = 0;
    puVar4[0x15] = 0;
    puVar4[0x16] = 0;
    puVar4[0x17] = 0x40f86a0000000000;
  }
  else {
    if ((*(byte *)(param_1 + 5) & 1) == 0) {
      local_19 = *(char *)(param_2 + 0xd);
    }
    else {
      local_19 = '\0';
    }
    puVar2 = (ulonglong *)param_1[1];
    pcVar1 = (char *)*puVar2 + 1;
    if ((char *)puVar2[1] < pcVar1) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_19,1);
    }
    else {
      local_19 = *(char *)*puVar2;
      *puVar2 = (ulonglong)pcVar1;
    }
    if (local_19 == '\x02') {
      if ((*(byte *)(param_1 + 5) & 1) != 0) {
        puVar4 = (undefined8 *)FUN_14001cc68(0x1d8,0x10);
        FUN_146e0902e(puVar4);
        goto LAB_146e25556;
      }
    }
    else if (local_19 == '\x01') {
      if ((*(byte *)(param_1 + 5) & 1) != 0) {
        puVar4 = (undefined8 *)FUN_14001cc68(0x1e0,0x10);
        FUN_14008b51a(puVar4);
        goto LAB_146e25556;
      }
    }
    else if (local_19 == '\0') {
      puVar4 = (undefined8 *)0x0;
      if ((*(byte *)(param_1 + 5) & 1) != 0) {
        puVar4 = (undefined8 *)FUN_14001cc68(200,0x10);
        *(undefined4 *)(puVar4 + 1) = 0;
        *(undefined2 *)((longlong)puVar4 + 0xc) = 1;
        *puVar4 = &PTR_FUN_149f48460;
        puVar4[0xf] = 0;
        *(undefined4 *)(puVar4 + 0x10) = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        puVar4[0x11] = 0;
        puVar4[0x12] = 0;
        puVar4[0x13] = 0;
        puVar4[0x14] = 0;
        puVar4[0x15] = 0;
        puVar4[0x16] = 0;
        puVar4[0x17] = 0x40f86a0000000000;
      }
      goto LAB_146e25556;
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_146e25556:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e256ae FUN_146e256ae body=508 status=ok
// SIG undefined FUN_146e256ae(void)

undefined8 * FUN_146e256ae(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
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
  plVar3 = param_3;
  if ((int)param_3[1] - *(int *)((longlong)param_3 + 0x34) <
      (int)param_1[1] - *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1;
    param_1 = param_3;
  }
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  uVar2 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar2 != 0) {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar2);
    }
    FUN_1400bac10(param_2,uVar2);
    iVar1 = 1;
    if (3 < uVar2) {
      uVar2 = (uVar2 | 1) + 0xe;
      iVar1 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar1 = 1 << ((byte)iVar1 & 0x1f);
    }
    if ((*(int *)(param_2 + 9) == 0) || (*(int *)(param_2 + 9) < iVar1)) {
      *(int *)(param_2 + 9) = iVar1;
      FUN_144a56d22(param_2);
    }
  }
  local_48 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
        uVar2 = *(uint *)(*local_78 + (longlong)iStack_5c * 0xc);
        plVar4 = (longlong *)plVar3[8];
        if ((longlong *)plVar3[8] == (longlong *)0x0) {
          plVar4 = plVar3 + 7;
        }
        iVar1 = *(int *)((longlong)plVar4 + (ulonglong)((int)plVar3[9] - 1U & uVar2) * 4);
        if (iVar1 != -1) {
          do {
            if (*(uint *)(*plVar3 + (longlong)iVar1 * 0xc) == uVar2) {
              FUN_1447cbafe(param_2,&local_50,*local_78 + (longlong)iStack_5c * 0xc,0);
              break;
            }
            iVar1 = *(int *)(*plVar3 + (longlong)iVar1 * 0xc + 4);
          } while (iVar1 != -1);
        }
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e258ac FUN_146e258ac body=101 status=ok
// SIG undefined FUN_146e258ac(void)

undefined8 * FUN_146e258ac(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c994b70) {
    FUN_144b3d300(&DAT_14c994b70);
    if (DAT_14c994b70 == -1) {
      FUN_146e25912();
      atexit((_func_5014 *)&LAB_1429e1b7b);
      _Init_thread_footer(&DAT_14c994b70);
    }
  }
  return &DAT_14c994af8;
}



// FUNCTION 146e25912 FUN_146e25912 body=102 status=ok
// SIG undefined FUN_146e25912(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146e25912(void)

{
  DAT_14c994b18 = 0;
  DAT_14c994b20 = 0;
  DAT_14c994af8 = 0;
  _DAT_14c994b00 = 0;
  _DAT_14c994b24 = 0xffffffff00000080;
  _DAT_14c994b2c = 0;
  DAT_14c994b38 = 0;
  _DAT_14c994b40 = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c994b48);
                    /* WARNING: Could not recover jumptable at 0x000146e25971. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c994b48,4000);
  return;
}



// FUNCTION 146e25978 FUN_146e25978 body=54 status=ok
// SIG undefined FUN_146e25978(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146e25978(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14c994b48);
  _DAT_14c994b40 = 0;
  if (DAT_14c994b38 != 0) {
    FUN_1400020a8();
  }
  FUN_146e2d12c();
  return;
}



// FUNCTION 146e259ae FUN_146e259ae body=2866 status=ok
// SIG undefined FUN_146e259ae(void)

void FUN_146e259ae(longlong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  uint uVar2;
  undefined *puVar3;
  longlong *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  void *pvVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  undefined ***pppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  int iVar18;
  undefined **ppuVar19;
  longlong lVar20;
  undefined **ppuVar21;
  ulonglong uVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  undefined2 *puVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  undefined **ppuVar29;
  undefined **ppuVar30;
  undefined **ppuVar31;
  int iVar32;
  longlong lVar33;
  bool bVar34;
  float fVar35;
  undefined1 auStack_4c8 [32];
  undefined2 *local_4a8;
  undefined **local_498;
  undefined8 local_490;
  undefined4 local_488;
  undefined4 uStack_484;
  uint uStack_480;
  longlong local_478;
  undefined8 uStack_470;
  int local_468;
  void *local_460;
  ulonglong uStack_458;
  undefined8 local_450;
  ulonglong uStack_448;
  longlong *local_440;
  undefined8 local_438;
  undefined **local_430;
  uint local_428;
  int iStack_424;
  undefined4 local_420;
  undefined4 local_41c;
  undefined **local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined *local_3f8;
  undefined *puStack_3f0;
  undefined *local_3e8;
  undefined8 local_370;
  undefined **local_368;
  undefined **local_360;
  uint local_358;
  int iStack_354;
  undefined4 local_350;
  undefined4 local_34c;
  undefined8 local_2d8;
  longlong *local_2d0;
  undefined8 local_2c8;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_4c8;
  local_418 = (undefined **)0x0;
  uStack_410 = 0;
  local_498 = (undefined **)(param_1 + 2);
  local_368 = (undefined **)0x100000000;
  local_358 = 0xffffffff;
  iStack_354 = 0;
  local_350 = 0;
  iVar32 = 0;
  iVar26 = 0;
  local_490 = param_2;
  local_360 = local_498;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_368);
    iVar26 = (int)param_1[5];
  }
  local_428 = local_358;
  iStack_424 = iStack_354;
  local_420 = local_350;
  local_41c = local_34c;
  local_438 = local_368;
  local_430 = local_360;
  local_440 = param_1;
  if ((iStack_354 != iVar26) || (local_360 != local_498)) {
    iVar32 = 0;
    do {
      lVar20 = *local_440;
      lVar33 = (longlong)iStack_424;
      local_450 = (void *)0x0;
      uStack_448 = 0;
      local_460 = (void *)0x0;
      uStack_458 = 0;
      FUN_144a787a6();
      local_478 = 0;
      uStack_470 = 0;
      memset(&local_368,0,0x90);
      FUN_144869430(&local_368);
      local_2d8 = 0;
      local_368 = &PTR_FUN_149e1e590;
      local_2d0 = &local_478;
      local_2c8 = 0;
      FUN_144a69558(&local_368,1);
      (*(code *)local_368[0x1e])(&local_368,0);
      local_368 = &PTR_FUN_149e1e330;
      FUN_140713482(&local_408,&local_368);
      local_408 = &PTR_FUN_149f52ef0;
      uVar14 = FUN_14001cc68(0x158,0x10);
      FUN_140dffb3a(uVar14);
      plVar4 = *(longlong **)(lVar20 + lVar33 * 0x20);
      local_370 = uVar14;
      (**(code **)(*plVar4 + 0xf0))(plVar4,&local_408);
      (**(code **)(*plVar4 + 0xe8))(plVar4,&local_488);
      if (local_450 != (void *)0x0) {
        FUN_1400020a8();
      }
      uVar22 = uStack_410;
      local_450 = (void *)CONCAT44(uStack_484,local_488);
      uStack_448 = (ulonglong)uStack_480;
      local_468 = (int)uStack_470;
      lVar20 = (longlong)(int)uStack_410;
      uVar27 = (int)uStack_410 + 1;
      uStack_410 = CONCAT44(uStack_410._4_4_,uVar27);
      if (uStack_410._4_4_ < uVar27) {
        FUN_1429e686a(&local_418,uVar22 & 0xffffffff);
      }
      pvVar12 = local_460;
      ppuVar23 = local_418 + lVar20 * 5;
      *(int *)ppuVar23 = local_468;
      ppuVar23[1] = (undefined *)0x0;
      lVar33 = (longlong)(int)uStack_458;
      *(int *)(ppuVar23 + 2) = (int)uStack_458;
      if (lVar33 == 0) {
        *(int *)((longlong)ppuVar23 + 0x14) = 0;
      }
      else {
        ppuVar16 = local_418 + lVar20 * 5 + 1;
        FUN_1446dd670(ppuVar16,uStack_458 & 0xffffffff,0);
        memcpy(*ppuVar16,pvVar12,lVar33 * 2);
      }
      pvVar12 = local_450;
      ppuVar23[3] = (undefined *)0x0;
      *(int *)(ppuVar23 + 4) = (int)uStack_448;
      if ((longlong)(int)uStack_448 == 0) {
        *(int *)((longlong)ppuVar23 + 0x24) = 0;
      }
      else {
        FUN_1446dd670(ppuVar23 + 3,uStack_448 & 0xffffffff,0);
        memcpy(ppuVar23[3],pvVar12,(longlong)(int)uStack_448 * 2);
      }
      iVar32 = iVar32 + local_468;
      FUN_14041e0ac(&local_408);
      FUN_144a7fc42(&local_368);
      if (local_478 != 0) {
        FUN_1400020a8();
      }
      if (local_450 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_460 != (void *)0x0) {
        FUN_1400020a8();
      }
      local_428 = local_428 & ~local_438._4_4_;
      FUN_1449c0562(&local_438);
    } while (local_440 != param_1 || (local_430 != local_498 || iStack_424 != iVar26));
  }
  ppuVar23 = local_418;
  uVar14 = local_490;
  local_498 = (undefined **)CONCAT44(local_498._4_4_,iVar32);
  iVar26 = (int)uStack_410;
  lVar20 = (longlong)(int)uStack_410;
  if (1 < lVar20) {
    memset(&local_358,0,0x2f0);
    local_368 = ppuVar23;
    local_360 = ppuVar23 + lVar20 * 5 + -5;
    fVar35 = logf((float)iVar26);
    local_358 = (uint)(longlong)(fVar35 + fVar35);
    pppuVar15 = &local_368;
    do {
      ppuVar16 = *pppuVar15;
      ppuVar19 = pppuVar15[1];
      iVar26 = *(int *)(pppuVar15 + 2);
      iVar32 = (int)((ulonglong)((longlong)ppuVar19 - (longlong)ppuVar16) >> 3) * -0x33333333;
      uVar27 = iVar32 + 1;
      ppuVar21 = ppuVar16;
      ppuVar17 = ppuVar16;
      ppuVar23 = ppuVar19;
      if (iVar26 != 0) {
LAB_146e25b60:
        if (8 < (int)uVar27) {
          uVar22 = (ulonglong)(uVar27 >> 1);
          puVar3 = ppuVar17[uVar22 * 5 + 4];
          puVar5 = ppuVar17[uVar22 * 5];
          puVar6 = (ppuVar17 + uVar22 * 5)[1];
          puVar7 = ppuVar17[uVar22 * 5 + 2];
          puVar8 = (ppuVar17 + uVar22 * 5 + 2)[1];
          ppuVar17[uVar22 * 5 + 4] = ppuVar17[4];
          puVar9 = *ppuVar17;
          puVar10 = ppuVar17[1];
          puVar11 = ppuVar17[3];
          ppuVar17[uVar22 * 5 + 2] = ppuVar17[2];
          (ppuVar17 + uVar22 * 5 + 2)[1] = puVar11;
          ppuVar17[uVar22 * 5] = puVar9;
          (ppuVar17 + uVar22 * 5)[1] = puVar10;
          ppuVar17[4] = puVar3;
          ppuVar17[2] = puVar7;
          ppuVar17[3] = puVar8;
          *ppuVar17 = puVar5;
          ppuVar17[1] = puVar6;
          ppuVar29 = ppuVar23 + 5;
          ppuVar16 = ppuVar17;
          do {
            ppuVar13 = ppuVar16 + 5;
            ppuVar24 = ppuVar16 + 5;
            do {
              ppuVar16 = ppuVar24;
              ppuVar31 = ppuVar13;
              if (ppuVar23 < ppuVar16) break;
              ppuVar13 = ppuVar31 + 5;
              ppuVar24 = ppuVar16 + 5;
            } while (*(uint *)ppuVar16 <= *(uint *)ppuVar17);
            ppuVar13 = ppuVar29 + -10;
            do {
              ppuVar24 = ppuVar29;
              ppuVar30 = ppuVar13;
              ppuVar29 = ppuVar24 + -5;
              if (ppuVar29 <= ppuVar17) break;
              ppuVar13 = ppuVar30 + -5;
            } while (*(uint *)ppuVar17 <= *(uint *)ppuVar29);
            if (ppuVar29 < ppuVar16) goto LAB_146e25c96;
            puVar3 = ppuVar16[4];
            puVar5 = *ppuVar16;
            puVar6 = ppuVar16[1];
            puVar7 = ppuVar16[2];
            puVar8 = ppuVar16[3];
            ppuVar16[4] = ppuVar24[-1];
            puVar9 = *ppuVar29;
            puVar10 = ppuVar24[-4];
            puVar11 = ppuVar24[-2];
            ppuVar16[2] = ppuVar24[-3];
            ppuVar16[3] = puVar11;
            *ppuVar16 = puVar9;
            ppuVar16[1] = puVar10;
            ppuVar24[-1] = puVar3;
            ppuVar24[-3] = puVar7;
            ppuVar24[-2] = puVar8;
            *ppuVar29 = puVar5;
            ppuVar24[-4] = puVar6;
          } while( true );
        }
        if (ppuVar17 < ppuVar23) {
          do {
            ppuVar16 = ppuVar17;
            if (ppuVar17 + 5 <= ppuVar23) {
              uVar27 = *(uint *)ppuVar17;
              ppuVar19 = ppuVar17 + 5;
              do {
                uVar2 = *(uint *)ppuVar19;
                bVar34 = uVar27 < uVar2;
                if (uVar27 <= uVar2) {
                  uVar27 = uVar2;
                }
                if (bVar34) {
                  ppuVar16 = ppuVar19;
                }
                ppuVar19 = ppuVar19 + 5;
              } while (ppuVar19 <= ppuVar23);
            }
            local_3e8 = ppuVar16[4];
            ppuVar19 = (undefined **)*ppuVar16;
            puVar3 = ppuVar16[1];
            local_3f8 = ppuVar16[2];
            puStack_3f0 = ppuVar16[3];
            ppuVar16[4] = ppuVar23[4];
            puVar5 = *ppuVar23;
            puVar6 = ppuVar23[1];
            puVar7 = ppuVar23[3];
            ppuVar16[2] = ppuVar23[2];
            ppuVar16[3] = puVar7;
            *ppuVar16 = puVar5;
            ppuVar16[1] = puVar6;
            ppuVar23[4] = local_3e8;
            local_408._0_4_ = (uint)ppuVar19;
            local_408._4_4_ = (uint)((ulonglong)ppuVar19 >> 0x20);
            uStack_400._0_4_ = (uint)puVar3;
            uStack_400._4_4_ = (uint)((ulonglong)puVar3 >> 0x20);
            ppuVar23[2] = local_3f8;
            ppuVar23[3] = puStack_3f0;
            *(uint *)ppuVar23 = (uint)local_408;
            *(uint *)((longlong)ppuVar23 + 4) = local_408._4_4_;
            *(uint *)(ppuVar23 + 1) = (uint)uStack_400;
            *(uint *)((longlong)ppuVar23 + 0xc) = uStack_400._4_4_;
            ppuVar23 = ppuVar23 + -5;
            local_408 = ppuVar19;
            uStack_400 = puVar3;
          } while (ppuVar17 < ppuVar23);
        }
        goto LAB_146e2610b;
      }
LAB_146e25d8b:
      if (uVar27 != 0) {
        iVar26 = (iVar32 - (iVar32 + -1 >> 0x1f)) + -1 >> 1;
        iVar32 = iVar26;
joined_r0x000146e25db2:
        do {
          iVar28 = iVar26 * 2 + 1;
          if (iVar28 < (int)uVar27) {
            iVar18 = iVar26 * 2 + 2;
            if ((iVar18 < (int)uVar27) &&
               (*(uint *)(ppuVar16 + (longlong)iVar28 * 5) <=
                *(uint *)(ppuVar16 + (longlong)iVar18 * 5))) {
              iVar28 = iVar18;
            }
            if (*(uint *)(ppuVar16 + (longlong)iVar26 * 5) <
                *(uint *)(ppuVar16 + (longlong)iVar28 * 5)) {
              ppuVar23 = ppuVar16 + (longlong)iVar26 * 5;
              ppuVar19 = ppuVar16 + (longlong)iVar28 * 5;
              local_3e8 = ppuVar23[4];
              ppuVar17 = (undefined **)*ppuVar23;
              puVar3 = ppuVar23[1];
              local_3f8 = ppuVar23[2];
              puStack_3f0 = ppuVar23[3];
              ppuVar23[4] = ppuVar19[4];
              puVar5 = *ppuVar19;
              puVar6 = ppuVar19[1];
              puVar7 = ppuVar19[3];
              ppuVar23[2] = ppuVar19[2];
              ppuVar23[3] = puVar7;
              *ppuVar23 = puVar5;
              ppuVar23[1] = puVar6;
              ppuVar19[4] = local_3e8;
              local_408._0_4_ = (uint)ppuVar17;
              local_408._4_4_ = (uint)((ulonglong)ppuVar17 >> 0x20);
              uStack_400._0_4_ = (uint)puVar3;
              uStack_400._4_4_ = (uint)((ulonglong)puVar3 >> 0x20);
              ppuVar19[2] = local_3f8;
              ppuVar19[3] = puStack_3f0;
              *(uint *)ppuVar19 = (uint)local_408;
              *(uint *)((longlong)ppuVar19 + 4) = local_408._4_4_;
              *(uint *)(ppuVar19 + 1) = (uint)uStack_400;
              *(uint *)((longlong)ppuVar19 + 0xc) = uStack_400._4_4_;
              iVar26 = iVar28;
              local_408 = ppuVar17;
              uStack_400 = puVar3;
              goto joined_r0x000146e25db2;
            }
          }
          bVar34 = iVar32 != 0;
          iVar26 = iVar32 + -1;
          iVar32 = iVar26;
        } while (bVar34);
        if (1 < (int)uVar27) {
          uVar22 = (ulonglong)uVar27 - 1;
          local_3e8 = ppuVar16[4];
          ppuVar19 = (undefined **)*ppuVar16;
          puVar3 = ppuVar16[1];
          local_3f8 = ppuVar16[2];
          puStack_3f0 = ppuVar16[3];
          ppuVar16[4] = ppuVar16[uVar22 * 5 + 4];
          puVar5 = ppuVar16[uVar22 * 5];
          puVar6 = (ppuVar16 + uVar22 * 5)[1];
          puVar7 = (ppuVar16 + uVar22 * 5 + 2)[1];
          ppuVar16[2] = ppuVar16[uVar22 * 5 + 2];
          ppuVar16[3] = puVar7;
          *ppuVar16 = puVar5;
          ppuVar16[1] = puVar6;
          ppuVar16[uVar22 * 5 + 4] = local_3e8;
          local_408._0_4_ = (uint)ppuVar19;
          local_408._4_4_ = (uint)((ulonglong)ppuVar19 >> 0x20);
          uStack_400._0_4_ = (uint)puVar3;
          uStack_400._4_4_ = (uint)((ulonglong)puVar3 >> 0x20);
          ppuVar16[uVar22 * 5 + 2] = local_3f8;
          (ppuVar16 + uVar22 * 5 + 2)[1] = puStack_3f0;
          ppuVar23 = ppuVar16 + uVar22 * 5;
          *(uint *)ppuVar23 = (uint)local_408;
          *(uint *)((longlong)ppuVar23 + 4) = local_408._4_4_;
          *(uint *)(ppuVar23 + 1) = (uint)uStack_400;
          *(uint *)((longlong)ppuVar23 + 0xc) = uStack_400._4_4_;
          local_408 = ppuVar19;
          uStack_400 = puVar3;
          if (uVar27 != 2) {
            do {
              iVar26 = 0;
              iVar28 = 1;
              iVar32 = 0;
              do {
                iVar26 = iVar26 + 2;
                iVar18 = iVar28;
                if (((longlong)iVar26 < (longlong)uVar22) &&
                   (*(uint *)(ppuVar16 + (longlong)iVar28 * 5) <=
                    *(uint *)(ppuVar16 + (longlong)iVar26 * 5))) {
                  iVar18 = iVar26;
                }
                if (*(uint *)(ppuVar16 + (longlong)iVar18 * 5) <=
                    *(uint *)(ppuVar16 + (longlong)iVar32 * 5)) break;
                ppuVar23 = ppuVar16 + (longlong)iVar32 * 5;
                ppuVar19 = ppuVar16 + (longlong)iVar18 * 5;
                puVar3 = ppuVar23[4];
                puVar5 = *ppuVar23;
                puVar6 = ppuVar23[1];
                puVar7 = ppuVar23[2];
                puVar8 = ppuVar23[3];
                ppuVar23[4] = ppuVar19[4];
                puVar9 = *ppuVar19;
                puVar10 = ppuVar19[1];
                puVar11 = ppuVar19[3];
                ppuVar23[2] = ppuVar19[2];
                ppuVar23[3] = puVar11;
                *ppuVar23 = puVar9;
                ppuVar23[1] = puVar10;
                ppuVar19[4] = puVar3;
                ppuVar19[2] = puVar7;
                ppuVar19[3] = puVar8;
                *ppuVar19 = puVar5;
                ppuVar19[1] = puVar6;
                iVar26 = iVar18 * 2;
                iVar28 = iVar18 * 2 + 1;
                iVar32 = iVar18;
              } while ((longlong)iVar28 < (longlong)uVar22);
              uVar1 = uVar22 - 1;
              local_3e8 = ppuVar16[4];
              ppuVar19 = (undefined **)*ppuVar16;
              puVar3 = ppuVar16[1];
              local_3f8 = ppuVar16[2];
              puStack_3f0 = ppuVar16[3];
              ppuVar16[4] = ppuVar16[uVar1 * 5 + 4];
              puVar5 = ppuVar16[uVar1 * 5];
              puVar6 = (ppuVar16 + uVar1 * 5)[1];
              puVar7 = (ppuVar16 + uVar1 * 5 + 2)[1];
              ppuVar16[2] = ppuVar16[uVar1 * 5 + 2];
              ppuVar16[3] = puVar7;
              *ppuVar16 = puVar5;
              ppuVar16[1] = puVar6;
              ppuVar16[uVar1 * 5 + 4] = local_3e8;
              local_408._0_4_ = (uint)ppuVar19;
              local_408._4_4_ = (uint)((ulonglong)ppuVar19 >> 0x20);
              uStack_400._0_4_ = (uint)puVar3;
              uStack_400._4_4_ = (uint)((ulonglong)puVar3 >> 0x20);
              ppuVar16[uVar1 * 5 + 2] = local_3f8;
              (ppuVar16 + uVar1 * 5 + 2)[1] = puStack_3f0;
              ppuVar23 = ppuVar16 + uVar1 * 5;
              *(uint *)ppuVar23 = (uint)local_408;
              *(uint *)((longlong)ppuVar23 + 4) = local_408._4_4_;
              *(uint *)(ppuVar23 + 1) = (uint)uStack_400;
              *(uint *)((longlong)ppuVar23 + 0xc) = uStack_400._4_4_;
              bVar34 = 2 < uVar22;
              uVar22 = uVar1;
              local_408 = ppuVar19;
              uStack_400 = puVar3;
            } while (bVar34);
          }
        }
      }
LAB_146e2610b:
      pppuVar15 = pppuVar15 + -3;
    } while (&local_368 <= pppuVar15);
  }
  FUN_1468161aa(uVar14,&DAT_149dfb77a);
  FUN_1468161aa(uVar14,L"Chaos Tracked Geometry:");
  FUN_1468161aa(uVar14,&DAT_149dfb77a);
  ppuVar23 = local_418;
  lVar20 = (longlong)(int)uStack_410;
  if (lVar20 != 0) {
    lVar33 = 0;
    do {
      local_4a8 = &DAT_149dfb77a;
      if (*(int *)((longlong)ppuVar23 + lVar33 + 0x20) != 0) {
        local_4a8 = *(undefined2 **)((longlong)ppuVar23 + lVar33 + 0x18);
      }
      puVar25 = &DAT_149dfb77a;
      if (*(int *)((longlong)ppuVar23 + lVar33 + 0x10) != 0) {
        puVar25 = *(undefined2 **)((longlong)ppuVar23 + lVar33 + 8);
      }
      FUN_140047918(uVar14,L"%-10d %s ToString:%s",*(undefined4 *)((longlong)ppuVar23 + lVar33),
                    puVar25);
      lVar33 = lVar33 + 0x28;
    } while (lVar20 * 0x28 != lVar33);
  }
  FUN_140047918(uVar14,L"%-10d Total",(ulonglong)local_498 & 0xffffffff);
  FUN_1429e682c(local_418,uStack_410 & 0xffffffff);
  if (local_418 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_4c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_146e25c96:
  local_3e8 = ppuVar17[4];
  ppuVar13 = (undefined **)*ppuVar17;
  puVar3 = ppuVar17[1];
  local_3f8 = ppuVar17[2];
  puStack_3f0 = ppuVar17[3];
  ppuVar17[4] = ppuVar24[-1];
  puVar5 = *ppuVar29;
  puVar6 = ppuVar24[-4];
  puVar7 = ppuVar24[-2];
  ppuVar17[2] = ppuVar24[-3];
  ppuVar17[3] = puVar7;
  *ppuVar17 = puVar5;
  ppuVar17[1] = puVar6;
  ppuVar24[-1] = local_3e8;
  local_408._0_4_ = (uint)ppuVar13;
  local_408._4_4_ = (uint)((ulonglong)ppuVar13 >> 0x20);
  uStack_400._0_4_ = (uint)puVar3;
  uStack_400._4_4_ = (uint)((ulonglong)puVar3 >> 0x20);
  ppuVar24[-3] = local_3f8;
  ppuVar24[-2] = puStack_3f0;
  *(uint *)ppuVar29 = (uint)local_408;
  *(uint *)((longlong)ppuVar24 + -0x24) = local_408._4_4_;
  *(uint *)(ppuVar24 + -4) = (uint)uStack_400;
  *(uint *)((longlong)ppuVar24 + -0x1c) = uStack_400._4_4_;
  iVar26 = iVar26 + -1;
  ppuVar24 = ppuVar24 + -10;
  local_408 = ppuVar13;
  uStack_400 = puVar3;
  if ((longlong)ppuVar30 - (longlong)ppuVar21 < (longlong)ppuVar19 - (longlong)ppuVar31) {
    if (ppuVar16 < ppuVar23) {
      *pppuVar15 = ppuVar16;
      pppuVar15[1] = ppuVar23;
      *(int *)(pppuVar15 + 2) = iVar26;
      pppuVar15 = pppuVar15 + 3;
    }
    ppuVar16 = ppuVar17;
    ppuVar19 = ppuVar30;
    if (ppuVar29 <= ppuVar17 + 5) goto LAB_146e2610b;
  }
  else {
    if (ppuVar17 + 5 < ppuVar29) {
      *pppuVar15 = ppuVar17;
      pppuVar15[1] = ppuVar24;
      *(int *)(pppuVar15 + 2) = iVar26;
      pppuVar15 = pppuVar15 + 3;
    }
    ppuVar17 = ppuVar31;
    ppuVar24 = ppuVar23;
    ppuVar19 = ppuVar23;
    if (ppuVar23 <= ppuVar16) goto LAB_146e2610b;
  }
  iVar32 = (int)((ulonglong)((longlong)ppuVar19 - (longlong)ppuVar17) >> 3) * -0x33333333;
  uVar27 = iVar32 + 1;
  ppuVar21 = ppuVar17;
  ppuVar17 = ppuVar16;
  ppuVar23 = ppuVar24;
  if (iVar26 == 0) goto LAB_146e25d8b;
  goto LAB_146e25b60;
}



// FUNCTION 146e264e2 FUN_146e264e2 body=41 status=ok
// SIG undefined FUN_146e264e2(void)

void FUN_146e264e2(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_146e3848a();
  return;
}



// FUNCTION 146e2650c FUN_146e2650c body=1372 status=ok
// SIG undefined FUN_146e2650c(void)

float * FUN_146e2650c(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                     float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_148 [44];
  float local_11c;
  float local_118;
  float local_114;
  float *local_110;
  float *local_108;
  float *local_100;
  float *local_f8;
  float *local_f0;
  float *local_e8;
  float *local_e0;
  float local_d8;
  float local_d4;
  float *local_d0;
  float *local_c8;
  float *local_c0;
  float local_b8;
  float local_b4;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_114 = param_3[2];
  fVar1 = param_2[2];
  fVar2 = local_114 - fVar1;
  local_118 = *param_3;
  local_11c = param_3[1];
  fVar6 = *param_2;
  fVar4 = param_2[1];
  fVar7 = local_11c - fVar4;
  fVar5 = local_118 - fVar6;
  fVar8 = param_4[2] - fVar1;
  fVar9 = param_4[1] - fVar4;
  fVar3 = *param_4 - fVar6;
  local_b8 = fVar2 * fVar2 + fVar5 * fVar5 + fVar7 * fVar7;
  local_d8 = fVar8 * fVar8 + fVar3 * fVar3 + fVar9 * fVar9;
  local_b4 = (param_5[2] - fVar1) * fVar2 +
             (*param_5 - fVar6) * fVar5 + fVar7 * (param_5[1] - fVar4);
  local_d4 = (param_5[2] - fVar1) * fVar8 +
             (*param_5 - fVar6) * fVar3 + (param_5[1] - fVar4) * fVar9;
  local_d0 = param_6;
  local_f0 = param_6;
  local_110 = param_6;
  local_f8 = param_5;
  local_108 = param_3;
  local_100 = param_4;
  local_e8 = param_2;
  local_e0 = param_4;
  local_c8 = param_2;
  local_c0 = param_3;
  if (local_b8 < 1e-08) {
    if (local_d8 < 1e-08) {
      param_6[0] = 1.0;
      param_6[1] = 0.0;
      param_6[2] = 0.0;
      param_1[2] = param_2[2];
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_b0 ^ (ulonglong)auStack_148);
    }
LAB_146e26826:
    param_6[1] = 0.0;
    fVar1 = local_d4 / local_d8;
    if (1.0 <= fVar1) {
      fVar1 = 1.0;
    }
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
    param_6[2] = fVar1;
    fVar5 = 1.0 - fVar1;
    *param_6 = fVar5;
    fVar6 = param_2[1];
    fVar4 = param_2[2];
    fVar2 = param_4[1];
    fVar3 = param_4[2];
    *param_1 = *param_4 * fVar1 + *param_2 * fVar5;
    param_1[1] = fVar2 * fVar1 + fVar6 * fVar5;
    param_1[2] = fVar1 * fVar3 + fVar5 * fVar4;
    goto LAB_146e2689a;
  }
  if (1e-08 <= local_d8) {
    fVar1 = fVar2 * fVar8 + fVar5 * fVar3 + fVar7 * fVar9;
    fVar6 = local_b8 * local_d8 - fVar1 * fVar1;
    if (1e-08 <= fVar6) {
      fVar2 = local_d8 * local_b4 + local_d4 * -fVar1;
      fVar4 = local_b8 * local_d4 + -fVar1 * local_b4;
      fVar1 = fVar6 * -0.0001;
      if (fVar6 * 1.0001 < fVar2 + fVar4) {
        if (fVar1 <= fVar2) {
          if ((local_b4 < local_b8) && (fVar4 < fVar1)) goto LAB_146e26a40;
        }
        else if (local_d4 < local_d8) goto LAB_146e26a21;
LAB_146e26a5c:
        FUN_146e3862e(&local_110,param_1);
      }
      else {
        if (fVar2 < fVar1) {
          if ((local_b4 <= 0.0) || (fVar1 <= fVar4)) {
LAB_146e26a21:
            FUN_146e384f6(&local_f0,param_1);
            goto LAB_146e2689a;
          }
        }
        else if (fVar1 <= fVar4) {
          fVar2 = fVar2 / fVar6;
          param_6[1] = fVar2;
          fVar4 = fVar4 / fVar6;
          param_6[2] = fVar4;
          fVar9 = (1.0 - fVar2) - fVar4;
          *param_6 = fVar9;
          fVar1 = param_2[1];
          fVar6 = param_2[2];
          fVar3 = param_3[1];
          fVar5 = param_3[2];
          fVar7 = param_4[1];
          fVar8 = param_4[2];
          *param_1 = *param_4 * fVar4 + *param_3 * fVar2 + *param_2 * fVar9;
          param_1[1] = fVar7 * fVar4 + fVar3 * fVar2 + fVar1 * fVar9;
          param_1[2] = fVar4 * fVar8 + fVar2 * fVar5 + fVar9 * fVar6;
          goto LAB_146e2689a;
        }
LAB_146e26a40:
        FUN_146e38592(&local_d0,param_1);
      }
      goto LAB_146e2689a;
    }
    fVar1 = param_4[2] - local_114;
    fVar4 = param_4[1] - local_11c;
    fVar6 = *param_4 - local_118;
    if (local_d8 < fVar1 * fVar1 + fVar6 * fVar6 + fVar4 * fVar4) goto LAB_146e26a5c;
    if (local_b8 < local_d8) goto LAB_146e26826;
  }
  param_6[2] = 0.0;
  fVar1 = local_b4 / local_b8;
  if (1.0 <= fVar1) {
    fVar1 = 1.0;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  param_6[1] = fVar1;
  fVar5 = 1.0 - fVar1;
  *param_6 = fVar5;
  fVar6 = param_2[1];
  fVar4 = param_2[2];
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  *param_1 = *param_3 * fVar1 + *param_2 * fVar5;
  param_1[1] = fVar2 * fVar1 + fVar6 * fVar5;
  param_1[2] = fVar1 * fVar3 + fVar5 * fVar4;
LAB_146e2689a:
  if ((local_b0 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e26a6e FUN_146e26a6e body=1432 status=ok
// SIG undefined FUN_146e26a6e(void)

double * FUN_146e26a6e(double *param_1,double *param_2,double *param_3,double *param_4,
                      double *param_5,double *param_6)

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
  undefined1 auStack_158 [32];
  double local_138;
  double local_130;
  double local_128;
  double *local_120;
  double *local_118;
  double *local_110;
  double *local_108;
  double *local_100;
  double *local_f8;
  double *local_f0;
  double local_e8;
  double local_e0;
  double *local_d8;
  double *local_d0;
  double *local_c8;
  double local_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_128 = param_3[2];
  dVar4 = param_2[2];
  dVar6 = local_128 - dVar4;
  local_130 = *param_3;
  local_138 = param_3[1];
  dVar7 = *param_2;
  dVar8 = param_2[1];
  dVar5 = local_138 - dVar8;
  dVar1 = local_130 - dVar7;
  dVar2 = param_4[2] - dVar4;
  dVar3 = param_4[1] - dVar8;
  dVar9 = *param_4 - dVar7;
  local_c0 = dVar6 * dVar6 + dVar1 * dVar1 + dVar5 * dVar5;
  local_e8 = dVar2 * dVar2 + dVar9 * dVar9 + dVar3 * dVar3;
  local_b8 = (param_5[2] - dVar4) * dVar6 +
             (*param_5 - dVar7) * dVar1 + dVar5 * (param_5[1] - dVar8);
  local_e0 = (param_5[2] - dVar4) * dVar2 +
             (*param_5 - dVar7) * dVar9 + (param_5[1] - dVar8) * dVar3;
  local_d8 = param_6;
  local_100 = param_6;
  local_120 = param_6;
  local_108 = param_5;
  local_118 = param_3;
  local_110 = param_4;
  local_f8 = param_2;
  local_f0 = param_4;
  local_d0 = param_2;
  local_c8 = param_3;
  if (local_c0 < 1e-08) {
    if (local_e8 < 1e-08) {
      *param_6 = 1.0;
      param_6[1] = 0.0;
      param_6[2] = 0.0;
      param_1[2] = param_2[2];
      dVar4 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = dVar4;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_b0 ^ (ulonglong)auStack_158);
    }
LAB_146e26db0:
    param_6[1] = 0.0;
    dVar4 = local_e0 / local_e8;
    if (1.0 <= dVar4) {
      dVar4 = 1.0;
    }
    if (dVar4 <= 0.0) {
      dVar4 = 0.0;
    }
    param_6[2] = dVar4;
    dVar5 = 1.0 - dVar4;
    *param_6 = dVar5;
    dVar7 = param_2[1];
    dVar8 = param_2[2];
    dVar9 = param_4[1];
    dVar1 = param_4[2];
    *param_1 = *param_4 * dVar4 + *param_2 * dVar5;
    param_1[1] = dVar9 * dVar4 + dVar7 * dVar5;
    param_1[2] = dVar4 * dVar1 + dVar5 * dVar8;
    goto LAB_146e26e26;
  }
  if (1e-08 <= local_e8) {
    dVar7 = dVar6 * dVar2 + dVar1 * dVar9 + dVar5 * dVar3;
    dVar4 = local_c0 * local_e8 - dVar7 * dVar7;
    if (1e-08 <= dVar4) {
      dVar8 = local_e8 * local_b8 + local_e0 * -dVar7;
      dVar9 = local_c0 * local_e0 + -dVar7 * local_b8;
      dVar7 = dVar4 * -0.0001;
      if (dVar4 * 1.0001 < dVar8 + dVar9) {
        if (dVar7 <= dVar8) {
          if ((local_b8 < local_c0) && (dVar9 < dVar7)) goto LAB_146e26fd9;
        }
        else if (local_e0 < local_e8) goto LAB_146e26fb7;
LAB_146e26ffa:
        FUN_146e388ac(&local_120,param_1);
      }
      else {
        if (dVar8 < dVar7) {
          if ((local_b8 <= 0.0) || (dVar7 <= dVar9)) {
LAB_146e26fb7:
            FUN_146e38770(&local_100,param_1);
            goto LAB_146e26e26;
          }
        }
        else if (dVar7 <= dVar9) {
          dVar8 = dVar8 / dVar4;
          param_6[1] = dVar8;
          dVar9 = dVar9 / dVar4;
          param_6[2] = dVar9;
          dVar6 = (1.0 - dVar8) - dVar9;
          *param_6 = dVar6;
          dVar4 = param_2[1];
          dVar7 = param_2[2];
          dVar1 = param_3[1];
          dVar5 = param_3[2];
          dVar2 = param_4[1];
          dVar3 = param_4[2];
          *param_1 = *param_4 * dVar9 + *param_3 * dVar8 + *param_2 * dVar6;
          param_1[1] = dVar2 * dVar9 + dVar1 * dVar8 + dVar4 * dVar6;
          param_1[2] = dVar9 * dVar3 + dVar8 * dVar5 + dVar6 * dVar7;
          goto LAB_146e26e26;
        }
LAB_146e26fd9:
        FUN_146e3880e(&local_d8,param_1);
      }
      goto LAB_146e26e26;
    }
    dVar8 = param_4[2] - local_128;
    dVar7 = param_4[1] - local_138;
    dVar4 = *param_4 - local_130;
    if (local_e8 < dVar8 * dVar8 + dVar4 * dVar4 + dVar7 * dVar7) goto LAB_146e26ffa;
    if (local_c0 < local_e8) goto LAB_146e26db0;
  }
  param_6[2] = 0.0;
  dVar4 = local_b8 / local_c0;
  if (1.0 <= dVar4) {
    dVar4 = 1.0;
  }
  if (dVar4 <= 0.0) {
    dVar4 = 0.0;
  }
  param_6[1] = dVar4;
  dVar5 = 1.0 - dVar4;
  *param_6 = dVar5;
  dVar7 = param_2[1];
  dVar8 = param_2[2];
  dVar9 = param_3[1];
  dVar1 = param_3[2];
  *param_1 = *param_3 * dVar4 + *param_2 * dVar5;
  param_1[1] = dVar9 * dVar4 + dVar7 * dVar5;
  param_1[2] = dVar4 * dVar1 + dVar5 * dVar8;
LAB_146e26e26:
  if ((local_b0 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e2700c FUN_146e2700c body=1239 status=ok
// SIG undefined FUN_146e2700c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_146e2700c(longlong *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
                  float *param_5,float param_6,float param_7,undefined8 param_8,longlong *param_9)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_1a8 [32];
  float *local_188;
  undefined4 *local_180;
  undefined4 local_174;
  longlong *local_170;
  longlong *local_168;
  undefined8 local_160;
  float local_158;
  float local_154;
  float fStack_150;
  float local_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  code *local_110;
  undefined4 *local_108;
  longlong local_100;
  int local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  param_6 = param_6 + param_7;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = *(ulonglong *)param_5;
  auVar16 = insertps(auVar16,param_5[2],0x28);
  auVar17 = pshufb(ZEXT416((uint)param_6),_DAT_149f5d880);
  local_148 = auVar16._0_4_ - auVar17._0_4_;
  fStack_144 = auVar16._4_4_ - auVar17._4_4_;
  fStack_140 = auVar16._8_4_ - auVar17._8_4_;
  fStack_13c = auVar16._12_4_ - auVar17._12_4_;
  local_138 = auVar17._0_4_ + auVar16._0_4_;
  fStack_134 = auVar17._4_4_ + auVar16._4_4_;
  fStack_130 = auVar17._8_4_ + auVar16._8_4_;
  fStack_12c = auVar17._12_4_ + auVar16._12_4_;
  local_108 = &local_120;
  local_118 = param_8;
  local_110 = FUN_146e39aec;
  local_174 = param_4;
  local_170 = param_1;
  local_168 = param_3;
  local_120 = param_4;
  FUN_146e274e4(param_2,&local_100);
  FUN_146e264e2(param_9,local_f8);
  lVar8 = local_100;
  if ((longlong)local_f8 != 0) {
    lVar14 = 0;
    do {
      iVar5 = *(int *)(lVar8 + lVar14);
      lVar13 = (longlong)iVar5;
      lVar7 = *local_170;
      lVar12 = *local_168;
      pfVar1 = (float *)(lVar12 + (longlong)*(int *)(lVar7 + lVar13 * 0xc) * 0xc);
      pfVar2 = (float *)(lVar12 + (longlong)*(int *)(lVar7 + 4 + lVar13 * 0xc) * 0xc);
      pfVar3 = (float *)(lVar12 + (longlong)*(int *)(lVar7 + 8 + lVar13 * 0xc) * 0xc);
      local_180 = &local_120;
      local_188 = param_5;
      FUN_146e2650c(&local_154,pfVar1,pfVar2,pfVar3);
      uVar10 = local_11c;
      uVar9 = local_120;
      fVar21 = param_5[2] - local_14c;
      fVar18 = param_5[1] - fStack_150;
      fVar19 = *param_5 - local_154;
      fVar18 = fVar21 * fVar21 + fVar19 * fVar19 + fVar18 * fVar18;
      if (fVar18 <= param_6 * param_6) {
        fVar19 = pfVar1[2];
        fVar21 = *pfVar1;
        fVar4 = pfVar1[1];
        fVar22 = (*pfVar2 - fVar21) * (pfVar3[1] - fVar4) - (*pfVar3 - fVar21) * (pfVar2[1] - fVar4)
        ;
        fVar24 = (pfVar2[2] - fVar19) * (*pfVar3 - fVar21) -
                 (pfVar3[2] - fVar19) * (*pfVar2 - fVar21);
        fVar26 = (pfVar2[1] - fVar4) * (pfVar3[2] - fVar19) -
                 (pfVar2[2] - fVar19) * (pfVar3[1] - fVar4);
        fVar20 = fVar22 * fVar22 + fVar26 * fVar26 + fVar24 * fVar24;
        if (((fVar20 != 1.0) || (fVar23 = fVar22, fVar25 = fVar24, fVar27 = fVar26, NAN(fVar20))) &&
           (fVar23 = DAT_14c846338, fVar25 = DAT_14c846330._4_4_, fVar27 = (float)DAT_14c846330,
           1e-08 <= fVar20)) {
          fVar20 = 1.0 / SQRT(fVar20);
          fVar23 = fVar22 * fVar20;
          fVar25 = fVar24 * fVar20;
          fVar27 = fVar26 * fVar20;
        }
        fVar19 = (param_5[2] - fVar19) * fVar23 +
                 (*param_5 - fVar21) * fVar27 + (param_5[1] - fVar4) * fVar25;
        if (fVar19 <= 0.0) {
          fVar23 = -fVar23;
          fVar25 = -fVar25;
        }
        uVar11 = (undefined4)local_118;
        local_160 = CONCAT44(fStack_150,local_154);
        local_158 = local_14c;
        iVar6 = (int)param_9[1];
        *(uint *)(param_9 + 1) = iVar6 + 1U;
        if (*(uint *)((longlong)param_9 + 0xc) < iVar6 + 1U) {
          FUN_146defa0a(param_9,iVar6);
        }
        uVar15 = -(uint)(0.0 < fVar19);
        lVar7 = *param_9;
        lVar12 = (longlong)iVar6 * 0x38;
        *(undefined1 *)(lVar7 + lVar12) = 1;
        *(undefined4 *)(lVar7 + 4 + lVar12) = local_174;
        *(int *)(lVar7 + 8 + lVar12) = iVar5;
        *(undefined4 *)(lVar7 + 0xc + lVar12) = 0x3f800000;
        *(undefined4 *)(lVar7 + 0x10 + lVar12) = uVar9;
        *(undefined4 *)(lVar7 + 0x14 + lVar12) = uVar10;
        *(undefined4 *)(lVar7 + 0x18 + lVar12) = uVar11;
        *(undefined8 *)(lVar7 + 0x1c + lVar12) = local_160;
        *(float *)(lVar7 + 0x24 + lVar12) = local_158;
        *(uint *)(lVar7 + 0x28 + lVar12) = ~uVar15 & (uint)-fVar27 | uVar15 & (uint)fVar27;
        *(float *)(lVar7 + 0x2c + lVar12) = fVar25;
        *(float *)(lVar7 + 0x30 + lVar12) = fVar23;
        *(float *)(lVar7 + 0x34 + lVar12) = SQRT(fVar18);
      }
      lVar14 = lVar14 + 4;
    } while ((longlong)local_f8 * 4 != lVar14);
  }
  lVar8 = param_9[1];
  if (local_100 != 0) {
    FUN_1400020a8(local_100);
  }
  if ((local_f0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0 < (int)lVar8;
}



// FUNCTION 146e274e4 FUN_146e274e4 body=936 status=ok
// SIG undefined FUN_146e274e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146e274e4(longlong *param_1,undefined8 *param_2,undefined1 (*param_3) [16],undefined8 *param_4)

{
  longlong *plVar1;
  float *pfVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  bool bVar10;
  uint uVar11;
  uint uVar15;
  int iVar16;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  uint uVar18;
  int iVar19;
  undefined1 auVar17 [16];
  undefined1 auStack_138 [40];
  uint local_110;
  int local_10c;
  ulonglong local_108;
  ulonglong local_100;
  int local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  int local_e4;
  longlong *local_e0;
  undefined8 *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  longlong *plStack_b8;
  uint local_b0;
  int iStack_ac;
  undefined8 uStack_a8;
  undefined8 local_a0;
  longlong *plStack_98;
  uint local_90;
  int iStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_138;
  plVar1 = param_1 + 5;
  *param_2 = 0;
  param_2[1] = 0;
  local_e0 = param_1 + 7;
  local_a0 = 0x100000000;
  local_90 = 0xffffffff;
  iStack_8c = 0;
  uStack_88 = 0;
  local_d8 = param_2;
  plStack_98 = local_e0;
  if ((int)param_1[10] == 0) {
    local_f4 = 0;
  }
  else {
    FUN_1449c0562(&local_a0);
    local_f4 = (int)param_1[10];
  }
  uStack_a8 = CONCAT44(uStack_84,uStack_88);
  local_b0 = local_90;
  iStack_ac = iStack_8c;
  local_c0 = local_a0;
  plStack_b8 = plStack_98;
  local_d0 = plVar1;
  local_c8 = plVar1;
  if ((iStack_8c != local_f4) || (plStack_98 != local_e0)) {
    do {
      uVar3 = *(undefined4 *)(*local_c8 + 4 + (longlong)iStack_ac * 0x10);
      auVar13._4_4_ = uVar3;
      auVar13._0_4_ = uVar3;
      auVar13._8_4_ = uVar3;
      auVar13._12_4_ = uVar3;
      auVar12 = divps(*param_3,auVar13);
      uVar11 = (int)(auVar12._0_4_ + -0.5 + auVar12._0_4_) >> 1;
      uVar15 = (int)(auVar12._4_4_ + -0.5 + auVar12._4_4_) >> 1;
      iVar16 = (int)(auVar12._8_4_ + -0.5 + auVar12._8_4_) >> 1;
      local_108 = (ulonglong)uVar11;
      auVar12 = divps(param_3[1],auVar13);
      local_ec = (int)(auVar12._0_4_ + -0.5 + auVar12._0_4_) >> 1;
      uVar18 = (int)(auVar12._4_4_ + -0.5 + auVar12._4_4_) >> 1;
      iVar19 = (int)(auVar12._8_4_ + -0.5 + auVar12._8_4_) >> 1;
      uVar9 = (ulonglong)local_ec;
      if ((int)uVar11 <= (int)local_ec) {
        uVar3 = *(undefined4 *)(*local_c8 + (longlong)iStack_ac * 0x10);
        iVar4 = iVar19;
        if (iVar19 < iVar16) {
          iVar4 = iVar16;
        }
        local_110 = uVar15;
        local_10c = iVar16;
        local_f0 = uVar18;
        local_e8 = uVar18;
        local_e4 = iVar19;
        if ((int)uVar18 < (int)uVar15) {
          local_e8 = uVar15;
        }
        do {
          if ((int)local_110 <= (int)local_f0) {
            uVar5 = (undefined4)local_108;
            local_100 = (ulonglong)local_110;
            do {
              if (local_10c <= local_e4) {
                auVar12._4_4_ = (undefined4)local_100;
                auVar12._0_4_ = uVar5;
                iVar16 = local_10c;
                do {
                  auVar12._12_4_ = uVar3;
                  auVar12._8_4_ = iVar16;
                  auVar13 = pmulld(_DAT_149f50230,auVar12);
                  iVar19 = *(int *)(*param_1 +
                                   ((longlong)
                                    (int)(auVar13._12_4_ ^ auVar13._0_4_ ^
                                         auVar13._8_4_ ^ auVar13._4_4_) &
                                   (longlong)(int)param_1[1] - 1U) * 4);
                  if (iVar19 != -1) {
                    lVar7 = param_1[2];
                    do {
                      lVar8 = (longlong)iVar19 * 0x20;
                      if (*(undefined1 (*) [16])(lVar7 + lVar8) == auVar12) {
                        local_a0 = CONCAT44(local_a0._4_4_,*(undefined4 *)(lVar7 + 0x10 + lVar8));
                        cVar6 = (*(code *)*param_4)(param_4[1]);
                        if (cVar6 != '\0') {
                          lVar7 = (longlong)*(int *)(lVar7 + lVar8 + 0x14) * 0x20;
                          pfVar2 = (float *)(param_1[0xf] + lVar7);
                          auVar17._4_4_ = -(uint)(*(float *)(param_3[1] + 4) < pfVar2[1]);
                          auVar17._0_4_ = -(uint)(*(float *)param_3[1] < *pfVar2);
                          auVar17._8_4_ = -(uint)(*(float *)(param_3[1] + 8) < pfVar2[2]);
                          auVar17._12_4_ = -(uint)(*(float *)(param_3[1] + 0xc) < pfVar2[3]);
                          uVar11 = movmskps((int)uVar9,auVar17);
                          uVar9 = (ulonglong)uVar11;
                          if (uVar11 == 0) {
                            lVar7 = param_1[0xf] + lVar7;
                            auVar14._4_4_ =
                                 -(uint)(*(float *)(lVar7 + 0x14) < *(float *)(*param_3 + 4));
                            auVar14._0_4_ = -(uint)(*(float *)(lVar7 + 0x10) < *(float *)*param_3);
                            auVar14._8_4_ =
                                 -(uint)(*(float *)(lVar7 + 0x18) < *(float *)(*param_3 + 8));
                            auVar14._12_4_ =
                                 -(uint)(*(float *)(lVar7 + 0x1c) < *(float *)(*param_3 + 0xc));
                            iVar19 = movmskps((int)lVar7,auVar14);
                            if (iVar19 == 0) {
                              FUN_1449e3bb0(local_d8);
                            }
                          }
                        }
                      }
                      lVar7 = param_1[2];
                      iVar19 = *(int *)(lVar7 + 0x18 + lVar8);
                    } while (iVar19 != -1);
                  }
                  bVar10 = iVar16 != iVar4;
                  iVar16 = iVar16 + 1;
                } while (bVar10);
              }
              uVar11 = (uint)local_100;
              local_100 = (ulonglong)(uVar11 + 1);
            } while (uVar11 != local_e8);
          }
          uVar11 = (uint)local_108;
          local_108 = (ulonglong)(uVar11 + 1);
        } while (uVar11 != local_ec);
      }
      local_b0 = local_b0 & ~local_c0._4_4_;
      FUN_1449c0562(&local_c0);
    } while (local_c8 != local_d0 || (plStack_b8 != local_e0 || iStack_ac != local_f4));
  }
  if ((local_80 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_d8;
}



// FUNCTION 146e2788e FUN_146e2788e body=1064 status=ok
// SIG undefined FUN_146e2788e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146e2788e(longlong *param_1,undefined8 *param_2,undefined1 (*param_3) [16],undefined8 *param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  double *pdVar3;
  undefined8 uVar4;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  undefined4 uVar10;
  char cVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  bool bVar17;
  uint uVar20;
  int iVar21;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  uint uVar24;
  uint uVar26;
  int iVar27;
  undefined1 auVar25 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auStack_138 [40];
  uint local_110;
  int local_10c;
  ulonglong local_108;
  ulonglong local_100;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  int local_e4;
  longlong *local_e0;
  undefined8 *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  longlong *plStack_b8;
  uint local_b0;
  uint uStack_ac;
  undefined8 uStack_a8;
  undefined8 local_a0;
  longlong *plStack_98;
  uint local_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  ulonglong local_80;
  undefined8 uVar5;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_138;
  plVar1 = param_1 + 5;
  *param_2 = 0;
  param_2[1] = 0;
  local_e0 = param_1 + 7;
  local_a0 = 0x100000000;
  local_90 = 0xffffffff;
  uStack_8c = 0;
  uStack_88 = 0;
  local_d8 = param_2;
  plStack_98 = local_e0;
  if ((int)param_1[10] == 0) {
    uVar16 = 0;
  }
  else {
    FUN_1449c0562(&local_a0);
    uVar16 = (ulonglong)*(uint *)(param_1 + 10);
  }
  uStack_a8 = CONCAT44(uStack_84,uStack_88);
  local_b0 = local_90;
  uStack_ac = uStack_8c;
  local_c0 = local_a0;
  plStack_b8 = plStack_98;
  local_f4 = (uint)uVar16;
  local_d0 = plVar1;
  local_c8 = plVar1;
  if ((uStack_8c != local_f4) || (plStack_98 != local_e0)) {
    do {
      puVar2 = (undefined8 *)(*local_c8 + 8 + (longlong)(int)uStack_ac * 0x18);
      uVar4 = *puVar2;
      uVar5 = *puVar2;
      auVar25._8_8_ = uVar5;
      auVar25._0_8_ = uVar4;
      auVar25 = divpd(*param_3,auVar25);
      auVar28._8_8_ = uVar5;
      auVar28._0_8_ = uVar4;
      auVar28 = divpd(param_3[1],auVar28);
      uVar24 = (int)(auVar25._0_8_ + -0.5 + auVar25._0_8_) >> 1;
      uVar26 = (int)(auVar25._8_8_ + -0.5 + auVar25._8_8_) >> 1;
      iVar27 = (int)(auVar28._0_8_ + -0.5 + auVar28._0_8_) >> 1;
      local_108 = (ulonglong)uVar24;
      auVar7._8_8_ = uVar5;
      auVar7._0_8_ = uVar4;
      auVar25 = divpd(param_3[2],auVar7);
      auVar8._8_8_ = uVar5;
      auVar8._0_8_ = uVar4;
      auVar28 = divpd(param_3[3],auVar8);
      local_ec = (int)(auVar25._0_8_ + -0.5 + auVar25._0_8_) >> 1;
      uVar20 = (int)(auVar25._8_8_ + -0.5 + auVar25._8_8_) >> 1;
      iVar21 = (int)(auVar28._0_8_ + -0.5 + auVar28._0_8_) >> 1;
      uVar15 = (ulonglong)local_ec;
      if ((int)uVar24 <= (int)local_ec) {
        uVar6 = *(undefined4 *)(*local_c8 + (longlong)(int)uStack_ac * 0x18);
        iVar9 = iVar21;
        if (iVar21 < iVar27) {
          iVar9 = iVar27;
        }
        local_110 = uVar26;
        local_10c = iVar27;
        local_f0 = uVar20;
        local_e8 = uVar20;
        local_e4 = iVar21;
        if ((int)uVar20 < (int)uVar26) {
          local_e8 = uVar26;
        }
        do {
          if ((int)local_110 <= (int)local_f0) {
            uVar10 = (undefined4)local_108;
            local_100 = (ulonglong)local_110;
            do {
              if (local_10c <= local_e4) {
                auVar29._4_4_ = (undefined4)local_100;
                auVar29._0_4_ = uVar10;
                iVar21 = local_10c;
                do {
                  auVar29._12_4_ = uVar6;
                  auVar29._8_4_ = iVar21;
                  auVar25 = pmulld(_DAT_149f50230,auVar29);
                  iVar27 = *(int *)(*param_1 +
                                   ((longlong)
                                    (int)(auVar25._12_4_ ^ auVar25._0_4_ ^
                                         auVar25._8_4_ ^ auVar25._4_4_) &
                                   (longlong)(int)param_1[1] - 1U) * 4);
                  if (iVar27 != -1) {
                    lVar13 = param_1[2];
                    do {
                      lVar14 = (longlong)iVar27 * 0x20;
                      if (*(undefined1 (*) [16])(lVar13 + lVar14) == auVar29) {
                        local_a0 = CONCAT44(local_a0._4_4_,*(undefined4 *)(lVar13 + 0x10 + lVar14));
                        cVar11 = (*(code *)*param_4)(param_4[1]);
                        if (cVar11 != '\0') {
                          lVar12 = param_1[0xf];
                          lVar13 = (longlong)*(int *)(lVar13 + lVar14 + 0x14) * 0x40;
                          auVar18._8_8_ =
                               -(ulonglong)
                                (*(double *)(param_3[2] + 8) < ((double *)(lVar12 + lVar13))[1]);
                          auVar18._0_8_ =
                               -(ulonglong)(*(double *)param_3[2] < *(double *)(lVar12 + lVar13));
                          pdVar3 = (double *)(lVar12 + 0x10 + lVar13);
                          auVar22._8_8_ = -(ulonglong)(*(double *)(param_3[3] + 8) < pdVar3[1]);
                          auVar22._0_8_ = -(ulonglong)(*(double *)param_3[3] < *pdVar3);
                          uVar20 = movmskpd((int)uVar15,auVar18);
                          uVar15 = (ulonglong)uVar20;
                          iVar27 = movmskpd((int)uVar16,auVar22);
                          uVar20 = iVar27 << 2 | uVar20;
                          uVar16 = (ulonglong)uVar20;
                          if (uVar20 == 0) {
                            lVar12 = lVar12 + lVar13;
                            auVar19._8_8_ =
                                 -(ulonglong)
                                  (*(double *)(lVar12 + 0x28) < *(double *)(*param_3 + 8));
                            auVar19._0_8_ =
                                 -(ulonglong)(*(double *)(lVar12 + 0x20) < *(double *)*param_3);
                            auVar23._8_8_ =
                                 -(ulonglong)
                                  (*(double *)(lVar12 + 0x38) < *(double *)(param_3[1] + 8));
                            auVar23._0_8_ =
                                 -(ulonglong)(*(double *)(lVar12 + 0x30) < *(double *)param_3[1]);
                            iVar27 = movmskpd((int)lVar12,auVar19);
                            uVar20 = movmskpd((int)lVar13,auVar23);
                            if ((uVar20 & 0x3fffffff) == 0 && iVar27 == 0) {
                              FUN_1449e3bb0(local_d8);
                            }
                          }
                        }
                      }
                      lVar13 = param_1[2];
                      iVar27 = *(int *)(lVar13 + 0x18 + lVar14);
                    } while (iVar27 != -1);
                  }
                  bVar17 = iVar21 != iVar9;
                  iVar21 = iVar21 + 1;
                } while (bVar17);
              }
              uVar20 = (uint)local_100;
              local_100 = (ulonglong)(uVar20 + 1);
            } while (uVar20 != local_e8);
          }
          uVar20 = (uint)local_108;
          local_108 = (ulonglong)(uVar20 + 1);
        } while (uVar20 != local_ec);
      }
      local_b0 = local_b0 & ~local_c0._4_4_;
      FUN_1449c0562(&local_c0);
      uVar16 = (ulonglong)local_f4;
    } while (local_c8 != local_d0 || (plStack_b8 != local_e0 || uStack_ac != local_f4));
  }
  if ((local_80 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_d8;
}



// FUNCTION 146e27cb8 FUN_146e27cb8 body=1761 status=ok
// SIG undefined FUN_146e27cb8(void)

bool FUN_146e27cb8(longlong *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
                  float *param_5,float *param_6,undefined8 param_7,longlong *param_8)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auVar11 [16];
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_1a8 [36];
  float local_184;
  float local_180;
  float local_17c;
  undefined4 local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  longlong *local_150;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined4 local_120 [2];
  undefined8 local_118;
  code *local_110;
  undefined4 *local_108;
  longlong local_100;
  int local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = *(ulonglong *)param_5;
  auVar11 = insertps(auVar11,param_5[2],0x28);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = *(ulonglong *)param_6;
  auVar13 = insertps(auVar13,param_6[2],0x28);
  local_148 = minps(auVar11,auVar13);
  local_138 = maxps(auVar11,auVar13);
  local_108 = local_120;
  local_118 = param_7;
  local_110 = FUN_146e39b88;
  local_178 = param_4;
  local_150 = param_3;
  local_120[0] = param_4;
  FUN_146e274e4(param_2,&local_100);
  FUN_146e264e2(param_8,local_f8);
  lVar6 = local_100;
  if ((longlong)local_f8 != 0) {
    lVar7 = 0;
    plVar10 = local_150;
    do {
      local_154 = param_6[2];
      local_17c = param_5[2];
      fVar15 = local_154 - local_17c;
      local_15c = *param_6;
      local_158 = param_6[1];
      local_184 = *param_5;
      local_180 = param_5[1];
      fVar18 = local_158 - local_180;
      fVar24 = local_15c - local_184;
      fVar19 = fVar15 * fVar15 + fVar24 * fVar24 + fVar18 * fVar18;
      if (1e-08 <= fVar19) {
        iVar2 = *(int *)(lVar6 + lVar7);
        piVar1 = (int *)(*param_1 + (longlong)iVar2 * 0xc);
        lVar8 = (longlong)*piVar1;
        lVar4 = *plVar10;
        local_160 = *(float *)(lVar4 + lVar8 * 0xc);
        fVar26 = *(float *)(lVar4 + 4 + lVar8 * 0xc);
        fVar23 = *(float *)(lVar4 + 8 + lVar8 * 0xc);
        lVar9 = (longlong)piVar1[2];
        lVar8 = (longlong)piVar1[1];
        local_164 = SQRT(fVar19);
        local_174 = 1.0 / local_164;
        fVar14 = *(float *)(lVar4 + 8 + lVar8 * 0xc) - fVar23;
        local_170 = *(float *)(lVar4 + 4 + lVar8 * 0xc) - fVar26;
        local_16c = *(float *)(lVar4 + lVar8 * 0xc) - local_160;
        local_168 = *(float *)(lVar4 + 8 + lVar9 * 0xc) - fVar23;
        fVar25 = *(float *)(lVar4 + 4 + lVar9 * 0xc) - fVar26;
        fVar17 = *(float *)(lVar4 + lVar9 * 0xc) - local_160;
        fVar12 = local_16c * fVar25 - fVar17 * local_170;
        fVar19 = fVar14 * fVar17 - local_168 * local_16c;
        fVar21 = local_170 * local_168 - fVar25 * fVar14;
        fVar16 = -fVar15 * local_174;
        fVar18 = -fVar18 * local_174;
        fVar24 = -fVar24 * local_174;
        fVar15 = fVar16 * fVar12 + fVar24 * fVar21 + fVar18 * fVar19;
        if (1e-08 <= ABS(fVar15)) {
          fVar15 = 1.0 / fVar15;
          fVar23 = local_17c - fVar23;
          fVar26 = local_180 - fVar26;
          fVar20 = local_184 - local_160;
          fVar22 = (fVar23 * fVar12 + fVar20 * fVar21 + fVar26 * fVar19) * fVar15;
          if ((0.0 <= fVar22) && (fVar22 <= local_164)) {
            fVar5 = fVar24 * fVar26 - fVar20 * fVar18;
            fVar24 = fVar16 * fVar20 - fVar23 * fVar24;
            fVar18 = fVar18 * fVar23 - fVar26 * fVar16;
            fVar26 = (local_168 * fVar5 + fVar17 * fVar18 + fVar25 * fVar24) * fVar15;
            if ((0.0 <= fVar26) &&
               (((fVar26 <= 1.0 &&
                 (fVar15 = fVar15 * -(fVar14 * fVar5 + local_16c * fVar18 + local_170 * fVar24),
                 0.0 <= fVar15)) && (fVar15 + fVar26 <= 1.0)))) {
              fVar18 = fVar12 * fVar12 + fVar21 * fVar21 + fVar19 * fVar19;
              if (((fVar18 != 1.0) ||
                  (fVar24 = fVar21, fVar23 = fVar19, fVar14 = fVar12, NAN(fVar18))) &&
                 (fVar24 = (float)DAT_14c846330, fVar23 = DAT_14c846330._4_4_,
                 fVar14 = DAT_14c846338, 1e-08 <= fVar18)) {
                fVar18 = 1.0 / SQRT(fVar18);
                fVar24 = fVar21 * fVar18;
                fVar23 = fVar19 * fVar18;
                fVar14 = fVar12 * fVar18;
              }
              iVar3 = (int)param_8[1];
              *(uint *)(param_8 + 1) = iVar3 + 1U;
              if (*(uint *)((longlong)param_8 + 0xc) < iVar3 + 1U) {
                FUN_146defa0a(param_8,iVar3);
                plVar10 = local_150;
              }
              fVar22 = local_174 * fVar22;
              fVar18 = 1.0 - fVar22;
              lVar4 = *param_8;
              lVar8 = (longlong)iVar3 * 0x38;
              *(undefined1 *)(lVar4 + lVar8) = 3;
              *(undefined4 *)(lVar4 + 4 + lVar8) = local_178;
              *(int *)(lVar4 + 8 + lVar8) = iVar2;
              *(float *)(lVar4 + 0xc + lVar8) = fVar22;
              *(float *)(lVar4 + 0x10 + lVar8) = (1.0 - fVar26) - fVar15;
              *(float *)(lVar4 + 0x14 + lVar8) = fVar26;
              *(float *)(lVar4 + 0x18 + lVar8) = fVar15;
              *(float *)(lVar4 + 0x1c + lVar8) = local_15c * fVar22 + local_184 * fVar18;
              *(float *)(lVar4 + 0x20 + lVar8) = local_158 * fVar22 + local_180 * fVar18;
              *(float *)(lVar4 + 0x24 + lVar8) = local_154 * fVar22 + local_17c * fVar18;
              *(float *)(lVar4 + 0x28 + lVar8) = fVar24;
              *(float *)(lVar4 + 0x2c + lVar8) = fVar23;
              *(float *)(lVar4 + 0x30 + lVar8) = fVar14;
              *(undefined4 *)(lVar4 + 0x34 + lVar8) = 0;
            }
          }
        }
      }
      lVar7 = lVar7 + 4;
    } while ((longlong)local_f8 * 4 != lVar7);
  }
  lVar6 = param_8[1];
  if (local_100 != 0) {
    FUN_1400020a8(local_100);
  }
  if ((local_f0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0 < (int)lVar6;
}



// FUNCTION 146e2839a FUN_146e2839a body=241 status=ok
// SIG undefined FUN_146e2839a(void)

undefined8 *
FUN_146e2839a(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined1 param_5)

{
  undefined8 unaff_RBP;
  
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  FUN_146e284d2();
  param_1[0x28] = 0;
  FUN_140dc1d4c(param_1);
  FUN_140dc220a(param_1,param_3,param_4,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5) & 0xffffffff);
  return param_1;
}



// FUNCTION 146e2848c FUN_146e2848c body=70 status=ok
// SIG undefined FUN_146e2848c(void)

void FUN_146e2848c(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  undefined8 unaff_RBP;
  
  FUN_146e284d2();
  *(undefined8 *)(param_1 + 0x140) = 0;
  FUN_140dc1d4c(param_1);
  FUN_140dc220a(param_1,param_3,param_4,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5) & 0xffffffff);
  return;
}



// FUNCTION 146e284d2 FUN_146e284d2 body=89 status=ok
// SIG undefined FUN_146e284d2(void)

undefined8 * FUN_146e284d2(undefined8 *param_1,undefined8 *param_2)

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
      FUN_146d8c0a4(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 146e2852c FUN_146e2852c body=721 status=ok
// SIG undefined FUN_146e2852c(void)

longlong * FUN_146e2852c(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_88 [40];
  longlong *local_60;
  longlong local_58;
  undefined1 local_50 [4];
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar9 = param_1 + 4;
  if ((int)param_1[5] == *(int *)((longlong)param_1 + 0x54)) {
    uVar5 = *(uint *)((longlong)param_1 + 0x144);
    if ((longlong)(int)uVar5 != 0) {
      if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b((longlong)(int)uVar5);
      }
      FUN_146d8b7f2(plVar9,uVar5);
      iVar1 = 1;
      if (3 < uVar5) {
        uVar5 = (uVar5 | 1) + 0xe;
        iVar1 = 0x1f;
        if (uVar5 != 0) {
          for (; uVar5 >> iVar1 == 0; iVar1 = iVar1 + -1) {
          }
        }
        iVar1 = 1 << ((byte)iVar1 & 0x1f);
      }
      if (((int)param_1[0xd] == 0) || ((int)param_1[0xd] < iVar1)) {
        *(int *)(param_1 + 0xd) = iVar1;
        FUN_146d8b9a4(plVar9);
      }
    }
    if (0 < (int)param_1[1]) {
      lVar8 = 0;
      lVar7 = 0;
      local_60 = plVar9;
      do {
        plVar9 = local_60;
        local_4c = *(undefined4 *)(*param_1 + lVar8);
        lVar2 = FUN_146e2e2d0(local_60,local_4c,&local_4c);
        local_4c = *(undefined4 *)(*param_1 + 4 + lVar8);
        lVar3 = FUN_146e2e2d0(plVar9,local_4c,&local_4c);
        local_4c = *(undefined4 *)(*param_1 + 8 + lVar8);
        lVar4 = FUN_146e2e2d0(plVar9,local_4c,&local_4c);
        uVar5 = *(int *)(lVar2 + 8) - *(int *)(lVar2 + 0x34);
        uVar6 = uVar5 + 2;
        if (uVar5 < 0xfffffffe) {
          if ((int)uVar5 < -2) goto LAB_146e287ee;
          FUN_1400bac10(lVar2,uVar6);
          iVar1 = 1;
          if (3 < uVar6) {
            uVar5 = (uVar6 | 1) + 0xe;
            iVar1 = 0x1f;
            if (uVar5 != 0) {
              for (; uVar5 >> iVar1 == 0; iVar1 = iVar1 + -1) {
              }
            }
            iVar1 = 1 << ((byte)iVar1 & 0x1f);
          }
          if ((*(int *)(lVar2 + 0x48) == 0) || (*(int *)(lVar2 + 0x48) < iVar1)) {
            *(int *)(lVar2 + 0x48) = iVar1;
            FUN_144a56d22(lVar2);
          }
        }
        uVar5 = *(int *)(lVar3 + 8) - *(int *)(lVar3 + 0x34);
        uVar6 = uVar5 + 2;
        if (uVar5 < 0xfffffffe) {
          if ((int)uVar5 < -2) goto LAB_146e287ee;
          FUN_1400bac10(lVar3,uVar6);
          iVar1 = 1;
          if (3 < uVar6) {
            uVar5 = (uVar6 | 1) + 0xe;
            iVar1 = 0x1f;
            if (uVar5 != 0) {
              for (; uVar5 >> iVar1 == 0; iVar1 = iVar1 + -1) {
              }
            }
            iVar1 = 1 << ((byte)iVar1 & 0x1f);
          }
          if ((*(int *)(lVar3 + 0x48) == 0) || (*(int *)(lVar3 + 0x48) < iVar1)) {
            *(int *)(lVar3 + 0x48) = iVar1;
            FUN_144a56d22(lVar3);
          }
        }
        uVar5 = *(int *)(lVar4 + 8) - *(int *)(lVar4 + 0x34);
        uVar6 = uVar5 + 2;
        local_58 = lVar3;
        if (uVar5 < 0xfffffffe) {
          if ((int)uVar5 < -2) {
LAB_146e287ee:
                    /* WARNING: Subroutine does not return */
            FUN_1456acd4b((longlong)(int)uVar6);
          }
          FUN_1400bac10(lVar4,uVar6);
          iVar1 = 1;
          if (3 < uVar6) {
            uVar5 = (uVar6 | 1) + 0xe;
            iVar1 = 0x1f;
            if (uVar5 != 0) {
              for (; uVar5 >> iVar1 == 0; iVar1 = iVar1 + -1) {
              }
            }
            iVar1 = 1 << ((byte)iVar1 & 0x1f);
          }
          if ((*(int *)(lVar4 + 0x48) == 0) || (*(int *)(lVar4 + 0x48) < iVar1)) {
            *(int *)(lVar4 + 0x48) = iVar1;
            FUN_144a56d22(lVar4);
          }
        }
        lVar3 = *param_1;
        local_4c = *(undefined4 *)(lVar3 + 4 + lVar8);
        FUN_144984904(lVar2,local_50,&local_4c,0);
        local_4c = *(undefined4 *)(lVar3 + 8 + lVar8);
        FUN_144984904(lVar2,local_50,&local_4c);
        lVar2 = local_58;
        local_4c = *(undefined4 *)(lVar3 + lVar8);
        FUN_144984904(local_58,local_50,&local_4c);
        local_4c = *(undefined4 *)(lVar3 + 8 + lVar8);
        FUN_144984904(lVar2,local_50,&local_4c);
        local_4c = *(undefined4 *)(lVar3 + lVar8);
        FUN_144984904(lVar4,local_50,&local_4c);
        local_4c = *(undefined4 *)(lVar3 + 4 + lVar8);
        FUN_144984904(lVar4,local_50,&local_4c);
        lVar7 = lVar7 + 1;
        lVar8 = lVar8 + 0xc;
        plVar9 = local_60;
      } while (lVar7 < (int)param_1[1]);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return plVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e28800 FUN_146e28800 body=999 status=ok
// SIG undefined FUN_146e28800(void)

longlong * FUN_146e28800(longlong *param_1)

{
  longlong lVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  int *piVar9;
  undefined1 *puVar10;
  uint uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  longlong *local_e0;
  uint local_d8;
  uint uStack_d4;
  int local_cc;
  longlong local_c8;
  undefined8 uStack_c0;
  uint *local_b0;
  int *local_a8;
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
  plVar15 = param_1 + 0xe;
  if ((int)param_1[0xf] != 0) {
LAB_146e2882f:
    if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
      return plVar15;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  local_c8 = 0;
  uStack_c0 = 0;
  iVar6 = (int)param_1[1];
  iVar5 = iVar6 * 3;
  if (-1 < iVar6) {
    iVar5 = 0;
    if (iVar6 != 0) {
      FUN_1401adc10(&local_c8);
      iVar5 = (int)param_1[1];
    }
    local_78 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    if (iVar5 != 0) {
      uVar11 = iVar5 * 3;
      if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b((longlong)(int)uVar11);
      }
      FUN_146e3751e(&local_98,uVar11);
      iVar6 = 1;
      if (3 < uVar11) {
        uVar11 = (uVar11 | 1) + 0xe;
        iVar6 = 0x1f;
        if (uVar11 != 0) {
          for (; uVar11 >> iVar6 == 0; iVar6 = iVar6 + -1) {
          }
        }
        iVar6 = 1 << ((byte)iVar6 & 0x1f);
      }
      if ((local_50 == 0) || (local_50 < iVar6)) {
        local_50 = iVar6;
        FUN_146e376ca();
      }
    }
    plVar12 = param_1 + 0x26;
    *(undefined4 *)(param_1 + 0x27) = 0;
    if (*(int *)((longlong)param_1 + 0x13c) < 0) {
      FUN_1401adc10(plVar12,0);
    }
    iVar5 = (int)param_1[1] * 3;
    if (-1 < (int)param_1[1]) {
      local_e8 = plVar15;
      if (*(int *)((longlong)param_1 + 0x13c) < iVar5) {
        FUN_1401adc10(plVar12);
      }
      *(undefined4 *)(param_1 + 0x25) = 0;
      if (*(int *)((longlong)param_1 + 300) < 0) {
        FUN_1405c2e9e(param_1 + 0x24,0);
      }
      FUN_146d84902(param_1 + 0x24,(int)param_1[1],1);
      if (0 < (int)param_1[1]) {
        lVar16 = 0;
        local_e0 = plVar12;
        do {
          lVar13 = *param_1 + lVar16 * 0xc;
          lVar3 = param_1[0x24];
          lVar14 = 0;
          do {
            uVar4 = uStack_c0;
            lVar1 = lVar14 + 1;
            lVar7 = 0;
            if (lVar1 != 3) {
              lVar7 = lVar1;
            }
            local_d8 = *(uint *)(lVar13 + lVar7 * 4);
            uVar11 = *(uint *)(lVar13 + lVar14 * 4);
            uStack_d4 = local_d8;
            if ((int)local_d8 < (int)uVar11) {
              uStack_d4 = uVar11;
            }
            if ((int)uVar11 < (int)local_d8) {
              local_d8 = uVar11;
            }
            uVar8 = CONCAT44(uStack_d4,local_d8);
            if ((int)uStack_90 != local_64) {
              puVar10 = local_58;
              if (local_58 == (undefined1 *)0x0) {
                puVar10 = local_60;
              }
              iVar6 = *(int *)(puVar10 +
                              (ulonglong)
                              (local_50 - 1U &
                              (((uint)(uVar8 >> 2) & 0x3fffffff) + local_d8 * 0x40 + uStack_d4 +
                               0x9e3779b9 ^ local_d8)) * 4);
              while (iVar6 != -1) {
                puVar2 = (ulonglong *)(local_98 + (longlong)iVar6 * 0x14);
                if (*puVar2 == uVar8) {
                  if ((puVar2 != (ulonglong *)0x0) && (puVar2 + 1 != (ulonglong *)0x0)) {
                    local_cc = (int)puVar2[1];
                    goto LAB_146e28abe;
                  }
                  break;
                }
                iVar6 = *(int *)((longlong)puVar2 + 0xc);
              }
            }
            iVar6 = (int)uStack_c0;
            uVar11 = (int)uStack_c0 + 1;
            uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar11);
            if (uStack_c0._4_4_ < uVar11) {
              FUN_1402e69d2(&local_c8,uVar4 & 0xffffffff);
              uVar8 = CONCAT44(uStack_d4,local_d8);
            }
            *(ulonglong *)(local_c8 + (longlong)iVar6 * 8) = uVar8;
            local_cc = iVar6;
            local_b0 = &local_d8;
            local_a8 = &local_cc;
            FUN_146e3789a(&local_98,local_9c,&local_b0);
            plVar12 = local_e0;
LAB_146e28abe:
            *(int *)(lVar16 * 0xc + lVar3 + lVar14 * 4) = local_cc;
            iVar6 = (int)param_1[0x27];
            lVar14 = (longlong)iVar6;
            if ((iVar6 <= local_cc) && (FUN_146d8c91a(plVar12,local_cc + 1,0), iVar6 <= local_cc)) {
              iVar6 = iVar6 + -1;
              do {
                *(undefined8 *)(*plVar12 + lVar14 * 8) = 0xffffffffffffffff;
                lVar14 = lVar14 + 1;
                iVar6 = iVar6 + 1;
              } while (local_cc != iVar6);
            }
            piVar9 = (int *)(*plVar12 + (longlong)local_cc * 8);
            if (*piVar9 < 0) {
LAB_146e28aeb:
              *piVar9 = (int)lVar16;
            }
            else if (piVar9[1] < 0) {
              piVar9 = piVar9 + 1;
              goto LAB_146e28aeb;
            }
            lVar14 = lVar1;
          } while (lVar1 != 3);
          lVar16 = lVar16 + 1;
        } while (lVar16 < (int)param_1[1]);
      }
      plVar15 = local_e8;
      FUN_146e2214c(local_e8,&local_c8);
      local_50 = 0;
      if (local_58 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      FUN_146e2d2bc(&local_98);
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
      goto LAB_146e2882f;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar5);
}



// FUNCTION 146e28bea FUN_146e28bea body=1551 status=ok
// SIG undefined FUN_146e28bea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_146e28bea(longlong *param_1,undefined8 param_2,longlong *param_3,float param_4,
                  float *param_5,float param_6,longlong param_7,float param_8,int param_9,
                  undefined8 param_10,longlong *param_11)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  float fVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_1c8 [32];
  float *local_1a8;
  float *local_1a0;
  float local_194;
  float local_190;
  int local_18c;
  longlong local_188;
  longlong local_180;
  longlong local_178;
  longlong *local_170;
  longlong *local_168;
  undefined8 local_160;
  float local_158;
  float local_154;
  float fStack_150;
  float local_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_120;
  float local_11c;
  undefined8 local_118;
  code *local_110;
  float *local_108;
  longlong local_100;
  int local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = *(ulonglong *)param_5;
  auVar14 = insertps(auVar14,param_5[2],0x28);
  auVar15 = pshufb(ZEXT416((uint)param_6),_DAT_149f5d880);
  local_148 = auVar14._0_4_ - auVar15._0_4_;
  fStack_144 = auVar14._4_4_ - auVar15._4_4_;
  fStack_140 = auVar14._8_4_ - auVar15._8_4_;
  fStack_13c = auVar14._12_4_ - auVar15._12_4_;
  local_138 = auVar15._0_4_ + auVar14._0_4_;
  fStack_134 = auVar15._4_4_ + auVar14._4_4_;
  fStack_130 = auVar15._8_4_ + auVar14._8_4_;
  fStack_12c = auVar15._12_4_ + auVar14._12_4_;
  local_108 = &local_120;
  local_118 = param_10;
  local_110 = FUN_1429e69d6;
  local_190 = param_4;
  local_170 = param_1;
  local_168 = param_3;
  local_120 = param_4;
  FUN_146e274e4(param_2,&local_100);
  FUN_146e264e2(param_11,local_f8);
  plVar8 = local_170;
  if ((longlong)local_f8 != 0) {
    local_180 = (longlong)local_f8 << 2;
    lVar12 = 0;
    local_188 = (longlong)param_9;
    local_178 = local_100;
    do {
      local_18c = *(int *)(local_178 + lVar12);
      lVar6 = *plVar8;
      lVar11 = (longlong)local_18c;
      lVar7 = lVar11 * 0xc;
      lVar10 = *local_168;
      pfVar1 = (float *)(lVar10 + (longlong)*(int *)(lVar6 + lVar7) * 0xc);
      pfVar2 = (float *)(lVar10 + (longlong)*(int *)(lVar6 + 4 + lVar7) * 0xc);
      pfVar3 = (float *)(lVar10 + (longlong)*(int *)(lVar6 + 8 + lVar7) * 0xc);
      local_1a0 = &local_120;
      local_1a8 = param_5;
      FUN_146e2650c(&local_154,pfVar1,pfVar2,pfVar3);
      fVar9 = local_11c;
      lVar6 = *plVar8;
      if (*(int *)(param_7 + 0x20) < 1) {
        fVar16 = *(float *)(param_7 + 0x28);
        fVar17 = fVar16;
        fVar18 = fVar16;
      }
      else {
        fVar16 = *(float *)(param_7 + 0x28);
        fVar4 = *(float *)(param_7 + 0x2c);
        fVar17 = fVar16;
        fVar18 = fVar16;
        if (0.0001 < ABS(fVar4)) {
          fVar17 = fVar4 * *(float *)(*(longlong *)(param_7 + 0x18) +
                                     (*(int *)(lVar6 + 4 + lVar11 * 0xc) - local_188) * 4) + fVar16;
          fVar18 = *(float *)(*(longlong *)(param_7 + 0x18) +
                             (*(int *)(lVar6 + lVar7) - local_188) * 4) * fVar4 + fVar16;
        }
      }
      if ((0 < *(int *)(param_7 + 0x20)) && (0.0001 < ABS(*(float *)(param_7 + 0x2c)))) {
        fVar16 = fVar16 + *(float *)(param_7 + 0x2c) *
                          *(float *)(*(longlong *)(param_7 + 0x18) +
                                    (*(int *)(lVar6 + 8 + lVar11 * 0xc) - local_188) * 4);
      }
      fVar4 = (float)local_118;
      fVar16 = (fVar16 * (float)local_118 + fVar18 * local_120 + fVar17 * local_11c) * param_8 +
               param_6;
      fVar24 = param_5[2] - local_14c;
      fVar17 = param_5[1] - fStack_150;
      fVar18 = *param_5 - local_154;
      fVar17 = fVar24 * fVar24 + fVar18 * fVar18 + fVar17 * fVar17;
      if (fVar17 <= fVar16 * fVar16) {
        local_194 = local_120;
        fVar16 = pfVar1[2];
        fVar18 = *pfVar1;
        fVar24 = pfVar1[1];
        fVar20 = (*pfVar2 - fVar18) * (pfVar3[1] - fVar24) -
                 (*pfVar3 - fVar18) * (pfVar2[1] - fVar24);
        fVar25 = (pfVar2[2] - fVar16) * (*pfVar3 - fVar18) -
                 (pfVar3[2] - fVar16) * (*pfVar2 - fVar18);
        fVar22 = (pfVar2[1] - fVar24) * (pfVar3[2] - fVar16) -
                 (pfVar2[2] - fVar16) * (pfVar3[1] - fVar24);
        fVar19 = fVar20 * fVar20 + fVar22 * fVar22 + fVar25 * fVar25;
        if (((fVar19 != 1.0) || (fVar21 = fVar20, fVar23 = fVar22, fVar26 = fVar25, NAN(fVar19))) &&
           (fVar21 = DAT_14c846338, fVar23 = (float)DAT_14c846330, fVar26 = DAT_14c846330._4_4_,
           1e-08 <= fVar19)) {
          fVar19 = 1.0 / SQRT(fVar19);
          fVar21 = fVar20 * fVar19;
          fVar23 = fVar22 * fVar19;
          fVar26 = fVar25 * fVar19;
        }
        fVar16 = (param_5[2] - fVar16) * fVar21 +
                 (*param_5 - fVar18) * fVar23 + (param_5[1] - fVar24) * fVar26;
        if (fVar16 <= 0.0) {
          fVar21 = -fVar21;
          fVar26 = -fVar26;
        }
        local_158 = local_14c;
        local_160 = CONCAT44(fStack_150,local_154);
        iVar5 = (int)param_11[1];
        *(uint *)(param_11 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_11 + 0xc) < iVar5 + 1U) {
          FUN_146defa0a(param_11,iVar5);
        }
        uVar13 = -(uint)(0.0 < fVar16);
        lVar6 = *param_11;
        lVar10 = (longlong)iVar5 * 0x38;
        *(undefined1 *)(lVar6 + lVar10) = 1;
        *(float *)(lVar6 + 4 + lVar10) = local_190;
        *(int *)(lVar6 + 8 + lVar10) = local_18c;
        *(undefined4 *)(lVar6 + 0xc + lVar10) = 0x3f800000;
        *(float *)(lVar6 + 0x10 + lVar10) = local_194;
        *(float *)(lVar6 + 0x14 + lVar10) = fVar9;
        *(float *)(lVar6 + 0x18 + lVar10) = fVar4;
        *(undefined8 *)(lVar6 + 0x1c + lVar10) = local_160;
        *(float *)(lVar6 + 0x24 + lVar10) = local_158;
        *(uint *)(lVar6 + 0x28 + lVar10) = ~uVar13 & (uint)-fVar23 | uVar13 & (uint)fVar23;
        *(float *)(lVar6 + 0x2c + lVar10) = fVar26;
        *(float *)(lVar6 + 0x30 + lVar10) = fVar21;
        *(float *)(lVar6 + 0x34 + lVar10) = SQRT(fVar17);
      }
      lVar12 = lVar12 + 4;
    } while (local_180 != lVar12);
  }
  lVar12 = param_11[1];
  if (local_100 != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0 < (int)lVar12;
}



// FUNCTION 146e291fa FUN_146e291fa body=29 status=ok
// SIG undefined FUN_146e291fa(void)

undefined8 FUN_146e291fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e29218 FUN_146e29218 body=29 status=ok
// SIG undefined FUN_146e29218(void)

undefined8 FUN_146e29218(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e29236 FUN_146e29236 body=2 status=ok
// SIG undefined FUN_146e29236(void)

void FUN_146e29236(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 146e29238 FUN_146e29238 body=38 status=ok
// SIG undefined FUN_146e29238(void)

undefined8 FUN_146e29238(undefined8 param_1,int param_2)

{
  FUN_146e2925e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e2925e FUN_146e2925e body=165 status=ok
// SIG undefined FUN_146e2925e(void)

void FUN_146e2925e(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f5e0a0;
  if (((*(byte *)(param_1 + 1) & 4) == 0) &&
     (plVar3 = (longlong *)param_1[0xf], plVar3 != (longlong *)0x0)) {
    if (plVar3[6] != 0) {
      FUN_1400020a8();
    }
    if (plVar3[4] != 0) {
      FUN_1400020a8();
    }
    if (plVar3[2] != 0) {
      FUN_1400020a8();
    }
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar3);
  }
  *param_1 = &PTR_FUN_149f5e060;
  puVar2 = (undefined8 *)param_1[2];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000146e292ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 146e29304 FUN_146e29304 body=799 status=ok
// SIG undefined FUN_146e29304(void)

void FUN_146e29304(longlong param_1,longlong *param_2)

{
  undefined1 *puVar1;
  uint *puVar2;
  byte *pbVar3;
  ulonglong *puVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStack_48 [35];
  byte local_25;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cba8);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e392d0);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cb70);
  FUN_146e29624(param_2,param_1);
  FUN_146e29624(param_2,param_1 + 0x10);
  iVar6 = FUN_1448332aa(param_2,&DAT_149e3cba8);
  if (iVar6 < 0x26) {
    iVar6 = FUN_1448332aa(param_2,&DAT_149e3cba8);
    if (0x15 < iVar6) {
      puVar4 = (ulonglong *)param_2[1];
      puVar2 = (uint *)*puVar4 + 1;
      if ((uint *)puVar4[1] < puVar2) {
        local_24 = ~(uint)*(byte *)(param_1 + 0x29) & 1;
        (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
        uVar7 = local_24;
        if (1 < local_24) {
          FUN_14572541c(param_2);
          uVar7 = local_24;
        }
      }
      else {
        uVar7 = *(uint *)*puVar4;
        *puVar4 = (ulonglong)puVar2;
      }
      *(byte *)(param_1 + 0x29) = (*(byte *)(param_1 + 0x29) & 0xfe | uVar7 != 0) ^ 1;
    }
  }
  else {
    local_24 = CONCAT31(local_24._1_3_,*(byte *)(param_1 + 0x29)) & 0xffffff01;
    local_25 = *(byte *)(param_1 + 0x29) >> 1 & 1;
    puVar4 = (ulonglong *)param_2[1];
    puVar1 = (undefined1 *)*puVar4 + 1;
    if ((undefined1 *)puVar4[1] < puVar1) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_24,1);
    }
    else {
      local_24 = CONCAT31(local_24._1_3_,*(undefined1 *)*puVar4);
      *puVar4 = (ulonglong)puVar1;
    }
    puVar4 = (ulonglong *)param_2[1];
    pbVar3 = (byte *)*puVar4 + 1;
    if ((byte *)puVar4[1] < pbVar3) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_25,1);
      bVar5 = local_25;
    }
    else {
      bVar5 = *(byte *)*puVar4;
      *puVar4 = (ulonglong)pbVar3;
    }
    *(byte *)(param_1 + 0x29) =
         bVar5 * '\x02' & 2 | (byte)local_24 & 1 | *(byte *)(param_1 + 0x29) & 0xfc;
  }
  iVar6 = FUN_1448332aa(param_2,&DAT_149e3cba8);
  if (0x19 < iVar6) {
    iVar6 = FUN_1448332aa(param_2,&DAT_149e3cba8);
    if (iVar6 < 0x27) {
      puVar4 = (ulonglong *)param_2[1];
      puVar2 = (uint *)*puVar4 + 1;
      if ((uint *)puVar4[1] < puVar2) {
        local_24 = *(byte *)(param_1 + 0x29) & 1;
        (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
        uVar7 = local_24;
        if (1 < local_24) {
          FUN_14572541c(param_2);
          uVar7 = local_24;
        }
      }
      else {
        uVar7 = *(uint *)*puVar4;
        *puVar4 = (ulonglong)puVar2;
      }
      *(byte *)(param_1 + 0x29) = *(byte *)(param_1 + 0x29) & 0xfe | uVar7 != 0;
    }
  }
  iVar6 = FUN_1448332aa(param_2,&DAT_149e3cba8);
  if (0x22 < iVar6) {
    local_24 = (uint)*(char *)(param_1 + 0x28);
    puVar4 = (ulonglong *)param_2[1];
    puVar2 = (uint *)*puVar4 + 1;
    if ((uint *)puVar4[1] < puVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_24);
      }
    }
    else {
      local_24 = *(uint *)*puVar4;
      *puVar4 = (ulonglong)puVar2;
    }
    *(byte *)(param_1 + 0x28) = (byte)local_24;
  }
  iVar6 = FUN_1448332aa(param_2,&DAT_149e3cb70);
  if (7 < iVar6) {
    local_24 = CONCAT31(local_24._1_3_,*(byte *)(param_1 + 0x29) >> 2) & 0xffffff01;
    puVar4 = (ulonglong *)param_2[1];
    pbVar3 = (byte *)*puVar4 + 1;
    if ((byte *)puVar4[1] < pbVar3) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_24,1);
      bVar5 = (byte)local_24;
    }
    else {
      bVar5 = *(byte *)*puVar4;
      *puVar4 = (ulonglong)pbVar3;
    }
    *(byte *)(param_1 + 0x29) = *(byte *)(param_1 + 0x29) & 0xfb | (bVar5 & 1) << 2;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e29624 FUN_146e29624 body=324 status=ok
// SIG undefined FUN_146e29624(void)

longlong * FUN_146e29624(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 2,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    param_2[2] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  param_2 = param_2 + 3;
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 146e29768 FUN_146e29768 body=156 status=ok
// SIG undefined FUN_146e29768(void)

void FUN_146e29768(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cba8);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e392d0);
  iVar1 = FUN_1448332aa(param_2,&DAT_149e3cba8);
  if (0x11 < iVar1) {
    FUN_146e29804(param_2,param_1);
  }
  iVar1 = FUN_1448332aa(param_2,&DAT_149e392d0);
  if (iVar1 < 1) {
    return;
  }
  FUN_146e29a3c(param_2,param_1 + 0x10);
  FUN_146e298ff(param_2,param_1 + 0x20);
  FUN_146e29804(param_2,param_1 + 0x30);
  return;
}



// FUNCTION 146e29804 FUN_146e29804 body=249 status=ok
// SIG undefined FUN_146e29804(void)

longlong * FUN_146e29804(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 2,(longlong)*(int *)((longlong)param_2 + 0xc) << 2
            );
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_2c) {
    if (*(int *)((longlong)param_2 + 0xc) < local_2c) {
      FUN_14488054e(param_2);
    }
    FUN_146e29b38(param_2,local_2c);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_146e29c55(param_1,*param_2 + lVar3);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 4;
      } while (lVar4 < local_2c);
    }
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_2c);
}



// FUNCTION 146e298ff FUN_146e298ff body=315 status=ok
// SIG undefined FUN_146e298ff(void)

longlong * FUN_146e298ff(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 2,(longlong)*(int *)((longlong)param_2 + 0xc) << 2
            );
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (local_2c < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_2c);
  }
  if (*(int *)((longlong)param_2 + 0xc) < local_2c) {
    FUN_14480809c(param_2);
  }
  FUN_14478085e(param_2,local_2c,1);
  if (0 < local_2c) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      puVar3 = *(undefined4 **)param_1[1];
      if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(*param_2 + lVar4),4);
        }
        else {
          thunk_FUN_14572512c(param_1);
        }
      }
      else {
        *(undefined4 *)(*param_2 + lVar4) = *puVar3;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
      }
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 4;
    } while (lVar5 < local_2c);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146e29a3c FUN_146e29a3c body=249 status=ok
// SIG undefined FUN_146e29a3c(void)

longlong * FUN_146e29a3c(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 2,(longlong)*(int *)((longlong)param_2 + 0xc) << 2
            );
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_2c) {
    if (*(int *)((longlong)param_2 + 0xc) < local_2c) {
      FUN_140175d40(param_2);
    }
    FUN_146e29cf2(param_2,local_2c);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_146e29c55(param_1,*param_2 + lVar3);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 4;
      } while (lVar4 < local_2c);
    }
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_2c);
}



// FUNCTION 146e29b38 FUN_146e29b38 body=128 status=ok
// SIG undefined FUN_146e29b38(void)

void FUN_146e29b38(longlong *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar2 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar2) {
      FUN_1417255d0(param_1,iVar1);
    }
    if (uVar2 != 0) {
      memset((void *)((longlong)iVar1 * 4 + *param_1),0,(ulonglong)uVar2 << 2);
      return;
    }
    return;
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (iVar1 <= param_2) {
    return;
  }
  *(int *)(param_1 + 1) = param_2;
  FUN_146e29bba(param_1);
  return;
}



// FUNCTION 146e29bba FUN_146e29bba body=62 status=ok
// SIG undefined FUN_146e29bba(void)

void FUN_146e29bba(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146e29bf8(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,4,4);
  }
  return;
}



// FUNCTION 146e29bf8 FUN_146e29bf8 body=93 status=ok
// SIG undefined FUN_146e29bf8(void)

ulonglong FUN_146e29bf8(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff000U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 2,4);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 146e29c55 FUN_146e29c55 body=155 status=ok
// SIG undefined FUN_146e29c55(void)

longlong * FUN_146e29c55(longlong *param_1,uint *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = *param_2 << 8 | *param_2 >> 0x18;
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_1c);
    }
  }
  else {
    local_1c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    *param_2 = local_1c << 0x18 | local_1c >> 8;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e29cf2 FUN_146e29cf2 body=128 status=ok
// SIG undefined FUN_146e29cf2(void)

void FUN_146e29cf2(longlong *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar2 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar2) {
      FUN_146e29d74(param_1,iVar1);
    }
    if (uVar2 != 0) {
      memset((void *)((longlong)iVar1 * 4 + *param_1),0,(ulonglong)uVar2 << 2);
      return;
    }
    return;
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (iVar1 <= param_2) {
    return;
  }
  *(int *)(param_1 + 1) = param_2;
  FUN_146e29dfa(param_1);
  return;
}



// FUNCTION 146e29d74 FUN_146e29d74 body=132 status=ok
// SIG undefined FUN_146e29d74(void)

void FUN_146e29d74(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146e29dfa FUN_146e29dfa body=62 status=ok
// SIG undefined FUN_146e29dfa(void)

void FUN_146e29dfa(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146e29e38(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,4,4);
  }
  return;
}



// FUNCTION 146e29e38 FUN_146e29e38 body=93 status=ok
// SIG undefined FUN_146e29e38(void)

ulonglong FUN_146e29e38(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff000U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 2,4);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 146e29e96 FUN_146e29e96 body=38 status=ok
// SIG undefined FUN_146e29e96(void)

undefined8 FUN_146e29e96(undefined8 param_1,int param_2)

{
  FUN_146e2c0ae();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e29f08 FUN_146e29f08 body=67 status=ok
// SIG undefined FUN_146e29f08(void)

void FUN_146e29f08(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  void *_Dst;
  int iVar2;
  
  if (param_3 != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    iVar2 = iVar1 - (param_3 + param_2);
    if (iVar2 != 0) {
      _Dst = (void *)((longlong)param_2 + *(longlong *)(param_1 + 8));
      memmove(_Dst,(void *)((longlong)param_3 + (longlong)_Dst),(longlong)iVar2);
      iVar1 = *(int *)(param_1 + 0x10);
    }
    *(int *)(param_1 + 0x10) = iVar1 - param_3;
  }
  return;
}



// FUNCTION 146e29f4c FUN_146e29f4c body=72 status=ok
// SIG undefined FUN_146e29f4c(void)

void FUN_146e29f4c(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = ~param_2 + iVar1;
  if (iVar2 != 0) {
    iVar3 = 1;
    if (iVar2 < 1) {
      iVar3 = iVar2;
    }
    memmove((void *)((longlong)(int)param_2 + *(longlong *)(param_1 + 8)),
            (void *)((longlong)(iVar1 - iVar3) + *(longlong *)(param_1 + 8)),(longlong)iVar3);
    iVar1 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar1 + -1;
  return;
}



// FUNCTION 146e29f9a FUN_146e29f9a body=137 status=ok
// SIG undefined FUN_146e29f9a(void)

void FUN_146e29f9a(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(param_1 + 8);
  iVar2 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar2 + 1U) {
    FUN_146e2a10c((longlong *)(param_3 + 8),iVar2);
  }
  *(undefined1 *)(*(longlong *)(param_3 + 8) + (longlong)iVar2) =
       *(undefined1 *)(lVar1 + (int)param_2);
  iVar2 = *(int *)(param_1 + 0x10);
  iVar3 = ~param_2 + iVar2;
  if (iVar3 != 0) {
    iVar4 = 1;
    if (iVar3 < 1) {
      iVar4 = iVar3;
    }
    memmove((void *)((longlong)(int)param_2 + *(longlong *)(param_1 + 8)),
            (void *)((longlong)(iVar2 - iVar4) + *(longlong *)(param_1 + 8)),(longlong)iVar4);
    iVar2 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar2 + -1;
  return;
}



// FUNCTION 146e2a024 FUN_146e2a024 body=47 status=ok
// SIG undefined FUN_146e2a024(void)

longlong FUN_146e2a024(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e2a054 FUN_146e2a054 body=88 status=ok
// SIG undefined FUN_146e2a054(void)

void FUN_146e2a054(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar1 = FUN_144a3809e((longlong)param_2,1);
    iVar2 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar2 = iVar1;
    }
  }
  if (iVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar2,1,1);
  }
  return;
}



// FUNCTION 146e2a0ac FUN_146e2a0ac body=95 status=ok
// SIG undefined FUN_146e2a0ac(void)

void FUN_146e2a0ac(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146e2a10c(param_1);
    }
    memset((void *)((longlong)iVar1 + *param_1),0,(longlong)(param_2 - iVar1));
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      *(int *)(param_1 + 1) = param_2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146e2a10c FUN_146e2a10c body=124 status=ok
// SIG undefined FUN_146e2a10c(void)

void FUN_146e2a10c(longlong param_1,int param_2)

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



// FUNCTION 146e2a1f6 FUN_146e2a1f6 body=123 status=ok
// SIG undefined FUN_146e2a1f6(void)

void FUN_146e2a1f6(longlong param_1,int param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  
  lVar4 = *(longlong *)(param_1 + 8);
  iVar3 = *(int *)(param_3 + 0x10);
  lVar9 = (longlong)iVar3;
  *(uint *)(param_3 + 0x10) = iVar3 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar3 + 1U) {
    FUN_146e2a3c0((longlong *)(param_3 + 8),iVar3);
  }
  lVar5 = *(longlong *)(param_3 + 8);
  *(undefined ***)(lVar5 + lVar9 * 0x18) = &PTR_FUN_149f5e038;
  puVar1 = (undefined4 *)(lVar4 + 8 + (longlong)param_2 * 0x18);
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  puVar2 = (undefined4 *)(lVar5 + 8 + lVar9 * 0x18);
  *puVar2 = *puVar1;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  *(undefined ***)(lVar5 + lVar9 * 0x18) = &PTR_FUN_149f5e030;
  FUN_146e2a4ba(param_1 + 8);
  return;
}



// FUNCTION 146e2a272 FUN_146e2a272 body=59 status=ok
// SIG undefined FUN_146e2a272(void)

longlong FUN_146e2a272(longlong param_1,int param_2)

{
  FUN_146e2a4b9(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e2a2ae FUN_146e2a2ae body=113 status=ok
// SIG undefined FUN_146e2a2ae(void)

void FUN_146e2a2ae(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 146e2a320 FUN_146e2a320 body=159 status=ok
// SIG undefined FUN_146e2a320(void)

void FUN_146e2a320(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_146e2a3c0(param_1,iVar1);
    }
    if (uVar3 != 0) {
      lVar2 = (longlong)iVar1 * 0x18 + *param_1 + 0x14;
      do {
        *(undefined8 *)(lVar2 + -0xc) = 0;
        *(undefined8 *)(lVar2 + -4) = 0xffffffff;
        *(undefined ***)(lVar2 + -0x14) = &PTR_FUN_149f5e030;
        lVar2 = lVar2 + 0x18;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_146e2a454(param_1,param_2,iVar1 - param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146e2a3c0 FUN_146e2a3c0 body=147 status=ok
// SIG undefined FUN_146e2a3c0(void)

void FUN_146e2a3c0(longlong param_1,int param_2)

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



// FUNCTION 146e2a454 FUN_146e2a454 body=101 status=ok
// SIG undefined FUN_146e2a454(void)

void FUN_146e2a454(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x18 + *param_1);
  FUN_146e2a4b9(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x18),(longlong)iVar2 * 0x18);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146e2a4b9 FUN_146e2a4b9 body=1 status=ok
// SIG undefined FUN_146e2a4b9(void)

void FUN_146e2a4b9(void)

{
  return;
}



// FUNCTION 146e2a4ba FUN_146e2a4ba body=113 status=ok
// SIG undefined FUN_146e2a4ba(void)

void FUN_146e2a4ba(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 0x18);
  FUN_146e2a4b9(_Dst,1);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x18),(longlong)iVar3 * 0x18);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 146e2a598 FUN_146e2a598 body=105 status=ok
// SIG undefined FUN_146e2a598(void)

void FUN_146e2a598(longlong param_1,int param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 8);
  iVar1 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar1 + 1U) {
    FUN_146e2a772((longlong *)(param_3 + 8),iVar1);
  }
  FUN_146e2a944((longlong)iVar1 * 0x48 + *(longlong *)(param_3 + 8),lVar2 + (longlong)param_2 * 0x48
               );
  FUN_146e2a8d2(param_1 + 8,param_2);
  return;
}



// FUNCTION 146e2a602 FUN_146e2a602 body=59 status=ok
// SIG undefined FUN_146e2a602(void)

longlong FUN_146e2a602(longlong param_1,int param_2)

{
  FUN_146e2a86b(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e2a63e FUN_146e2a63e body=113 status=ok
// SIG undefined FUN_146e2a63e(void)

void FUN_146e2a63e(longlong param_1,int param_2)

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



// FUNCTION 146e2a6b0 FUN_146e2a6b0 body=114 status=ok
// SIG undefined FUN_146e2a6b0(void)

void FUN_146e2a6b0(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146e2a772(param_1,iVar1);
    }
    FUN_146e2a723((longlong)iVar1 * 0x48 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_146e2a806(param_1,param_2,iVar1 - param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146e2a723 FUN_146e2a723 body=79 status=ok
// SIG undefined FUN_146e2a723(void)

void FUN_146e2a723(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x30;
    do {
      *(undefined8 *)(param_1 + -0x30) = 0;
      *(undefined8 *)(param_1 + -0x20) = 0;
      *(undefined8 *)(param_1 + -0x18) = 0;
      *(undefined8 *)(param_1 + -0x10) = 0;
      *(undefined8 *)(param_1 + -8) = 0;
      FUN_146dd9044(param_1);
      *(undefined1 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0xc) = 0;
      param_1 = param_1 + 0x48;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146e2a772 FUN_146e2a772 body=147 status=ok
// SIG undefined FUN_146e2a772(void)

void FUN_146e2a772(longlong param_1,int param_2)

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



// FUNCTION 146e2a806 FUN_146e2a806 body=101 status=ok
// SIG undefined FUN_146e2a806(void)

void FUN_146e2a806(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x48 + *param_1);
  FUN_146e2a86b(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x48),(longlong)iVar2 * 0x48);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146e2a86b FUN_146e2a86b body=38 status=ok
// SIG undefined FUN_146e2a86b(void)

void FUN_146e2a86b(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146e2a892(param_1);
    param_1 = param_1 + 0x48;
  }
  return;
}



// FUNCTION 146e2a892 FUN_146e2a892 body=64 status=ok
// SIG undefined FUN_146e2a892(void)

void FUN_146e2a892(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146e2a8d2 FUN_146e2a8d2 body=113 status=ok
// SIG undefined FUN_146e2a8d2(void)

void FUN_146e2a8d2(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 0x48);
  FUN_146e2a86b(_Dst,1);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x48),(longlong)iVar3 * 0x48);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 146e2a944 FUN_146e2a944 body=125 status=ok
// SIG undefined FUN_146e2a944(void)

undefined8 * FUN_146e2a944(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  param_1[2] = 0;
  param_1[2] = param_2[2];
  param_2[2] = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2[3] = 0;
  param_1[4] = 0;
  param_1[4] = param_2[4];
  param_2[4] = 0;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  param_2[5] = 0;
  FUN_146dd90c4(param_1 + 6,param_2 + 6);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  return param_1;
}



// FUNCTION 146e2aa2e FUN_146e2aa2e body=133 status=ok
// SIG undefined FUN_146e2aa2e(void)

void FUN_146e2aa2e(longlong param_1,int param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = *(longlong *)(param_1 + 8);
  iVar1 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar1 + 1U) {
    FUN_146e2abcc((longlong *)(param_3 + 8),iVar1);
  }
  lVar4 = (longlong)param_2 * 0x10;
  lVar3 = *(longlong *)(param_3 + 8);
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar3 + lVar5) = 0;
  *(undefined8 *)(lVar3 + lVar5) = *(undefined8 *)(lVar2 + lVar4);
  *(undefined8 *)(lVar2 + lVar4) = 0;
  *(undefined4 *)(lVar3 + 8 + lVar5) = *(undefined4 *)(lVar2 + 8 + lVar4);
  *(undefined4 *)(lVar3 + 0xc + lVar5) = *(undefined4 *)(lVar2 + 0xc + lVar4);
  *(undefined8 *)(lVar2 + 8 + lVar4) = 0;
  FUN_146e2ad22(param_1 + 8);
  return;
}



// FUNCTION 146e2aab4 FUN_146e2aab4 body=59 status=ok
// SIG undefined FUN_146e2aab4(void)

longlong FUN_146e2aab4(longlong param_1,int param_2)

{
  FUN_146e2acb1(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e2aaf0 FUN_146e2aaf0 body=96 status=ok
// SIG undefined FUN_146e2aaf0(void)

void FUN_146e2aaf0(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 146e2ab50 FUN_146e2ab50 body=122 status=ok
// SIG undefined FUN_146e2ab50(void)

void FUN_146e2ab50(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146e2abcc(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_146e2ac52(param_1,param_2,iVar1 - param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146e2abcc FUN_146e2abcc body=132 status=ok
// SIG undefined FUN_146e2abcc(void)

void FUN_146e2abcc(longlong param_1,int param_2)

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



// FUNCTION 146e2ac52 FUN_146e2ac52 body=95 status=ok
// SIG undefined FUN_146e2ac52(void)

void FUN_146e2ac52(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x10 + *param_1);
  FUN_146e2acb1(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146e2acb1 FUN_146e2acb1 body=54 status=ok
// SIG undefined FUN_146e2acb1(void)

void FUN_146e2acb1(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146e2ace7(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 146e2ace7 FUN_146e2ace7 body=58 status=ok
// SIG undefined FUN_146e2ace7(void)

void FUN_146e2ace7(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x20);
    do {
      if (plVar2[-4] != 0) {
        plVar1 = (longlong *)plVar2[-2];
        if ((longlong *)plVar2[-2] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


